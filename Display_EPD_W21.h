#ifndef _DISPLAY_EPD_W21_H_
#define _DISPLAY_EPD_W21_H_

#define EPD_WIDTH   800
#define EPD_HEIGHT  480
#define EPD_MEMORY EPD_HEIGHT * EPD_WIDTH / 2

void SPI_Write(unsigned char value);
void EPD_W21_WriteDATA(unsigned char datas);
void EPD_W21_WriteCMD(unsigned char command);

//8bit
#define EPD_BLACK   0x00
#define EPD_WHITE   0x11
#define EPD_YELLOW  0x22
#define EPD_RED     0x33
#define EPD_BLUE    0x55
#define EPD_GREEN   0x66
#define EPD_CLEAN   0x77

//4bit
#define PIC_BLACK   0x00
#define PIC_WHITE   0x01
#define PIC_YELLOW  0x02
#define PIC_RED     0x03
#define PIC_BLUE    0x05
#define PIC_GREEN   0x06
#define PIC_CLEAN   0x07

#define PSR     0x00
#define PWRR    0x01
#define POF     0x02
#define POFS    0x03
#define PON     0x04
#define BTST1   0x05
#define BTST2   0x06
#define DSLP    0x07
#define BTST3   0x08
#define DTM     0x10
#define DRF     0x12
#define PLL     0x30
#define CDI     0x50
#define TCON    0x60
#define TRES    0x61
#define REV     0x70
#define VDCS    0x82
#define T_VDCS  0x84
#define PWS     0xE3

//EPD
void EPD_W21_Init(void);
void EPD_init(void);
void EPD_init_fast(void);
void EPD_sleep(void);
void EPD_deep_sleep(void);
void EPD_refresh(void);
void lcd_chkstatus(void);
void PIC_display_clear(void);
void EPD_fill_display(uint8_t b);
void EPD_ordered_fill_display(uint8_t b, String order);
uint8_t EPD_color_check(uint8_t color);
uint8_t EPD_color_by_name(String colorStr);

void PIC_display(const unsigned char* picData);
void EPD_Display_White(void);
void EPD_Display_Black(void);
void EPD_Display_Yellow(void);
void EPD_Display_blue(void);
void EPD_Display_Green(void);
void EPD_Display_red(void);
#endif
