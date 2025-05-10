#include <SPI.h>
#include <WiFi.h>
#include <WebServer.h>
#include <uri/UriBraces.h>
#include <uri/UriRegex.h>
#include "Display_EPD_W21_spi.h"
#include "Display_EPD_W21.h"
#include "builtinfiles.h"

#define WIFI_SSID "YourWiFiSid"
#define WIFI_PASS "YourWiFiPassword"

WebServer server(80);

uint8_t drawByte;
uint32_t drawCounter = 0;
bool drawInitialized = false;
bool drawFinished = false;

uint8_t uploadState = 0;
uint32_t bitmapStart = 0;

uint8_t fromHex(uint8_t b) {
  if (b >= 97)
    b -= 32;
  if (b >= 65)
    b -= 7;
  b -= 48;
  return b & 15;
}

void einkInitDraw(bool initFast = false) {
  if (!drawInitialized) {
    if (initFast) {
      EPD_init_fast();
      Serial.println("Fast init draw");
    }
    else {
      EPD_init();
      Serial.println("Init draw");
    }
    EPD_W21_WriteCMD(0x10);
    drawInitialized = true;
    drawFinished = false;
    drawCounter = 0;
  } else {
    Serial.println("Draw already init");
  }
}

void einkDraw(uint8_t b) {
  if (!drawInitialized && !drawCounter)
    einkInitDraw();
  if (drawCounter < EPD_MEMORY) {
    if (drawInitialized)
      drawInitialized = false;
    drawByte = EPD_color_check(b);
    EPD_W21_WriteDATA(drawByte);
    drawCounter++;
  }
  if (drawCounter == EPD_MEMORY)
    einkFinishDraw();
}

void einkFinishDraw() {
  if (!drawFinished) {
    EPD_W21_WriteCMD(0x12);
    EPD_W21_WriteDATA(0x00);
    delay(1);   //!!!The delay here is necessary, 200uS at least!!!
    lcd_chkstatus();
    EPD_sleep();
    drawFinished = true;
    drawInitialized = false;
    Serial.println("Draw finish");
  } else {
    Serial.println("Draw already finish");
  }
}

void handleDrawFromPath() {
  if (!server.pathArg(0).length()) {
    einkInitDraw();
  } else {
    for (uint16_t i = 0; i < server.pathArg(0).length(); i = i + 2) {
      uint8_t b = strtol(server.pathArg(0).substring(i, i + 2).c_str(), 0, 16);
      einkDraw(b);
      //Serial.println(b);
    }
    Serial.print("Draw packet of size ");
    Serial.println((uint16_t)(server.pathArg(0).length() / 2));
    if (drawCounter == EPD_MEMORY) {
      einkFinishDraw();
      drawCounter = 0;
    }
  }
  handleOk();
}

void handleDrawFromRaw() {
  HTTPRaw &raw = server.raw();
  if (raw.status == RAW_WRITE) {
    for (uint16_t i = 1; i < raw.currentSize; i = i + 2) {
      uint8_t bh = fromHex(raw.buf[i - 1]);
      uint8_t bl = fromHex(raw.buf[i]);
      uint8_t b = (bh << 4) + bl;
      einkDraw(b);
      //Serial.println(b);
    }
  } else if (raw.status == RAW_END) {
    if (!raw.totalSize) {
      einkInitDraw();
    } else {
      Serial.print("Draw packet of size ");
      Serial.println((uint16_t)(raw.totalSize / 2));
      if (drawCounter == EPD_MEMORY) {
        einkFinishDraw();
        drawCounter = 0;
      }
    }
  }
}

void handleUploadFile() {
  HTTPUpload &upload = server.upload();
  if (upload.status == UPLOAD_FILE_START) {
    Serial.printf("Start upload: %s\n", upload.filename.c_str());
    EPD_init_fast();
    EPD_W21_WriteCMD(0x10);
  } else if (upload.status == UPLOAD_FILE_WRITE) {
    for (uint16_t i = 0; i < upload.currentSize; i++) {
      EPD_W21_WriteDATA(upload.buf[i]);
    }
    Serial.print("Upload bytes: ");
    Serial.println(upload.currentSize);
  } else if (upload.status == UPLOAD_FILE_END) {
    einkFinishDraw();
    Serial.print("Total uploaded: ");
    Serial.println(upload.totalSize);
  }
}

void handleUploadBmp() {
  HTTPUpload &upload = server.upload();
  if (upload.status == UPLOAD_FILE_START) {
    Serial.printf("Start upload: %s\n", upload.filename.c_str());
    uploadState = 1;
    EPD_init_fast();
    EPD_W21_WriteCMD(0x10);
  } else if (upload.status == UPLOAD_FILE_WRITE) {
    //uint8_t data_H;
    //uint8_t data_L;
    if (uploadState == 1) {
      uploadState = 2;
      bitmapStart = upload.buf[10] + ((uint32_t)(upload.buf[11]) << 8) + ((uint32_t)(upload.buf[12]) << 16) + ((uint32_t)(upload.buf[13]) << 24);
    }
    for (uint16_t i = bitmapStart; i < upload.currentSize; i++) {
      EPD_W21_WriteDATA(upload.buf[i]);
    }
    Serial.print("bitmapStart: ");
    Serial.println(bitmapStart);
    if (bitmapStart) {
      if (bitmapStart > upload.currentSize)
        bitmapStart -= upload.currentSize;
      else
        bitmapStart = 0;
    }
    Serial.print("Upload bytes: ");
    Serial.println(upload.currentSize);
  } else if (upload.status == UPLOAD_FILE_END) {
    einkFinishDraw();
    uploadState = 0;
    Serial.print("Total uploaded: ");
    Serial.println(upload.totalSize);
  }
}

void handleFillDisplay() {
  uint8_t color = EPD_color_by_name(server.pathArg(0));
  EPD_init();
  EPD_fill_display(EPD_color_check(color));
  EPD_sleep();
  handleOk();
}

void handleOrderedFillDisplay() {
  uint8_t color = EPD_color_by_name(server.pathArg(0));
  EPD_init();
  EPD_ordered_fill_display(EPD_color_check(color), "");
  EPD_sleep();
  handleOk();
}

void handleClear() {
  EPD_init();
  PIC_display_clear();
  EPD_sleep();
  handleOk();
}

void handleGetInfo() {
  String output = "";
  if (server.hasHeader("Authorization"))
    output = server.header("Authorization");
  server.send(200, "text/plain", output);
}

void handleOk() {
  server.send(200, "text/plain", "");
}

void handleNotFound() {
  server.send(404, "text/plain", "Bad request");
}

void setup() {
  Serial.begin(115200);
  
  pinMode(A14, INPUT);  //BUSY
  pinMode(A15, OUTPUT); //RES 
  pinMode(A16, OUTPUT); //DC   
  pinMode(A17, OUTPUT); //CS   
  //SPI
  SPI.beginTransaction(SPISettings(10000000, MSBFIRST, SPI_MODE0)); 
  SPI.begin();

  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PASS);
  
  Serial.print("Connect to ");
  Serial.print(WIFI_SSID);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  server.on("/", HTTP_GET, []() {
    server.send(200, "text/html", FPSTR(indexHtml));
  });
  server.on("/info", HTTP_GET, handleGetInfo);
  server.on(UriBraces("/draw/{}"), HTTP_POST, handleDrawFromPath);
  server.on("/draw", HTTP_POST, handleOk, handleDrawFromRaw);
  server.on("/upload", HTTP_POST, handleOk, handleUploadFile);
  server.on("/clear", HTTP_POST, handleClear);
  server.on(UriBraces("/fill/{}"), HTTP_POST, handleFillDisplay);
  server.on(UriRegex("^\\/fill\\/(.*)\\/order\\/(.*)$"), HTTP_POST, handleOrderedFillDisplay);
  server.onNotFound(handleNotFound);
  server.enableCORS(true);
  server.begin();
  Serial.println("HTTP server started");
}

void loop() {
  server.handleClient();
  delay(2);

  if (WiFi.status() != WL_CONNECTED) {
    WiFi.begin(WIFI_SSID, WIFI_PASS);
    Serial.print("Reconnect to ");
    Serial.print(WIFI_SSID);
    while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.print(".");
    }
    Serial.println();
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
  }
}
