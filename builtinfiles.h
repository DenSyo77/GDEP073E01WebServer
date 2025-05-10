static const char indexHtml[] PROGMEM =
R"==(
<!doctype html>
<html lang="en">
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<link rel="icon" type="image/png" sizes="16x16" href="data:image/png;base64,
iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAYAAAAf8/9hAAAACXBIWXMAAA7DAAAOwwHHb6hkAAAB
oElEQVR4nKVSv0tCURT+3s3UVLIhW8wgJHQoKKpRoUFoknapoaWpINoaQmitJZBqiQr8AzJocTCC
CiOSWqqhQalBMCPyPbOn3u59+vSVUkbf43DPPe873/nxHvBPCPMrEUopQPnDT8VHc/8bb29tyqAr
lSlCq/4/V55eOuBHJxOoBIJRqeXkoM+EYpn3BmNNwKwXEBiZUPxwItaQ5EICbhtBNO1gNxPUPF2x
pCjBZiZoJ6j5WuiLWfgGXcjnnuF9OWaRQF1AdWwWARePJ1X/a3XpdB2xmwz6B9zIpR8qAtXChAvI
soweVrWZkWQEqbMQMslzOMdnYO/tU/iaDigkSYJE0wjfbeFNfoVZZ4HXPokx6zDiR4sK0emw4nrf
AzmfgXVogS1RM4IoivAfjkKUc7W2d283MPtkgStXhK2LQBDvIVffcX6p8hX4EqF0oE1WsWNnMTsw
Vzbgo6MbDmKAWcoq/IYRfsI2KQCFVOUiAFeMT6lmBL6UuOfyRxEtOF+FIrC8mWzyz7cG1hCMzKzM
DC23UMc7F2hjpmdGfiE3Q+kTK3HNSjCkm7kAAAAASUVORK5CYII="/>
<title>E-Ink display toolkit</title>
</head>
<style>
html {
height:100%;
width:100%;
padding:0;
margin:0;
}
.pan {
position:fixed;
overflow-x:hidden;
scrollbar-width:none;
height:100%;
max-height:100%;
width:320px;
padding:0;
}
.pan::-webkit-scrollbar {
display:none;
}
p {
margin:0;
}
label,
button,
summary,
.headerbutton1,
.headerbutton2,
.cp {
cursor:pointer;
-webkit-touch-callout:none;
-webkit-user-select:none;
-khtml-user-select:none;
-moz-user-select:none;
-ms-user-select:none;
user-select:none;
}
.headerbutton1,
.headerbutton2,
.jsonbutton {
text-decoration:none;
background:none;
border:none;
margin:0;
padding:0;
}
.headerbutton1 {
font-size:13pt;
font-weight:bold;
padding-top:6px;
padding-bottom:6px;
}
.headerbutton2 {
font-size:11pt;
font-weight:normal;
}
.s2:hover,
.headerbutton1:hover,
.headerbutton2:hover,
.jsonbutton:hover {
text-decoration:underline;
cursor:pointer;
opacity:0.8;
}
label {
font-size:12pt;
text-decoration:none;
max-width:300px;
}
label + input {
vertical-align:middle;
max-width:300px;
display:inline-block;
}
.container1,
.appheader1,
.appheader2,
.infomessage1 {
margin-top:20px;
}
.appheader1,
.appheader2 {
padding-bottom:5px;
}
.container2,
.infomessage2 {
margin-top:10px;
width:300px;
}
.infomessage3 {
margin-top:5px;
width:300px;
}
.s2 {
font-size:11pt;
width:300px;
margin:0;
padding:5px 0 5px 0;
}
input[type=checkbox],
input[type=radio] {
width:18px;
height:18px;
cursor:pointer;
border:2px solid #ccc;
box-sizing:border-box;
vertical-align:middle;
accent-color:#3586E5;
margin:0 0 3px 5px;
padding:0;
}
input[type="range"] {
margin:2px 0 0 0;
}
.fileupload,
.formsbutton0,
.formsbutton1,
.formsbutton2,
.formsbutton3,
.formsbutton4,
.formsbutton5,
.formsbutton6 {
font-size:11pt;
font-weight:normal;
font-style:normal;
padding-top:8px;
padding-bottom:8px;
border:none;
cursor:pointer;
width:300px;
display:inline-block;
}
.fileupload:hover,
.formsbutton0:enabled:hover,
.formsbutton1:enabled:hover,
.formsbutton2:enabled:hover,
.formsbutton3:enabled:hover,
.formsbutton4:enabled:hover,
.formsbutton5:enabled:hover,
.formsbutton6:enabled:hover {
opacity:0.8;
}
input:disabled,
label:has(+ input:disabled),
label:has(+ select:disabled),
select:disabled,
button:disabled {
cursor:default;
}
.formsbutton0 {
background-color:#E54335;
}
.formsbutton1 {
background-color:#43A047;
}
.fileupload,
.formsbutton2 {
background-color:#3586E5;
}
.formsbutton3 {
background-color:#3cb4dd;
}
.formsbutton4 {
background-color:#e58c34;
}
.formsbutton5 {
background-color:#b834e5;
}
.formsbutton6 {
background-color:#8c34e5;
}
button:focus,
summary:focus,
.headerbutton1:focus,
.headerbutton2:focus,
.jsonbutton:focus,
.fileupload:focus,
.linktext:focus,
input[type=number]:focus,
input[type=color]:focus,
input[type=checkbox]:focus,
input[type=radio]:focus,
select:focus,
textarea:focus,
input[type=text]:focus,
input[type=password]:focus {
outline-style:solid;
outline-width:1px;
}
textarea,
input[type=text],
input[type=number],
input[type=password] {
font-size:12pt;
padding-top:7px;
padding-bottom:7px;
border:1px solid #ccc;
box-sizing:border-box;
background-color:#fff;
border-radius:0;
}
input[type=number]::-webkit-inner-spin-button {
transform:scale(1.8);
margin:0 3px 0 8px;
}
input[type=color] {
height:34px;
cursor:pointer;
border:1px solid #ccc;
box-sizing:border-box;
background-color:#fff;
border-radius:0;
vertical-align:middle;
}
select {
font-size:12pt;
font-weight:normal;
text-align:center;
padding-top:6.45px;
padding-bottom:6.45px;
border:1px solid #ccc;
box-sizing:border-box;
background-color:#fff;
border-radius:0;
cursor:pointer;
margin:10px 0 0 0;
}
select optgroup {
font-style:italic;
}
select option {
font-style:normal;
}
.tpal {
width:300px;
}
.appheader1 {
font-size:14pt;
font-weight:bold;
}
.appheader2 {
font-size:13pt;
font-weight:bold;
}
.cp {
font-size:11pt;
text-align:center;
padding:0;
}
.tab {
width:300px;
margin:20px 0 15px 0;
}
.tab > input[type="radio"] {
display:none;
}
.tab > label {
padding-bottom:3px;
font-size:12pt;
cursor:pointer;
color:#1a6dcb;
border-bottom:2px solid transparent;
}
.tab > label:hover {
border-bottom-color:#1a6dcb;
}
.tab > input[type="radio"]:checked + label {
cursor:default;
color:black;
border-bottom-color:black;
border-bottom:2px solid;
}
@media (prefers-color-scheme: light) {
body {
background:#f4fbff;
}
html {
scrollbar-color:#b3e3ff #e6f6ff;
}
::-webkit-scrollbar {
background-color:#e6f6ff;
}
::-webkit-scrollbar-corner {
background-color:#e6f6ff;
}
::-webkit-scrollbar-thumb {
background-color:#b3e3ff;
}
::-webkit-scrollbar-thumb:hover {
background-color:#80d0ff;
}
.pan {
background-color:#f4fbff;
}
summary,
.headerbutton1,
.headerbutton2,
.appheader1,
.appheader2 {
color:#15559e;
}
summary:focus,
.headerbutton1:focus,
.headerbutton2:focus {
outline-color:#15559e;
}
.infomessage1,
.infomessage2,
label {
color:black;
}
.formsbutton0:disabled,
.formsbutton1:disabled,
.formsbutton2:disabled,
.formsbutton3:disabled,
.formsbutton4:disabled,
.formsbutton5:disabled,
.formsbutton6:disabled {
background-color:#D1D1D1;
color:white;
}
.fileupload,
.formsbutton0:enabled,
.formsbutton1:enabled,
.formsbutton2:enabled,
.formsbutton3:enabled,
.formsbutton4:enabled,
.formsbutton5:enabled,
.formsbutton6:enabled {
color:white;
}
}
@media (prefers-color-scheme: dark) {
body {
background:#111B23;
}
.pan {
background-color:#111B23;
}
.appheader1,
.appheader2,
.infomessage1,
.infomessage2,
label {
color:#CFD8DC;
}
select,
textarea,
input[type=color],
input[type=text],
input[type=number],
input[type=password] {
background:#142633;
color:#CFD8DC;
}
select,
textarea,
input[type=color],
input[type=text],
input[type=number],
input[type=password],
input[type=checkbox],
input[type=radio] {
border-color:#78909C;
}
input[type=checkbox]:not(:checked),
input[type=radio]:not(:checked) {
opacity:0.9;
}
summary,
.headerbutton1 {
color:#26A69A;
}
.headerbutton2 {
color:#4DB6AC;
}
summary:focus,
.headerbutton1:focus {
outline-color:#26A69A;
}
.fileupload:focus,
.formsbutton0:focus,
.formsbutton1:focus,
.formsbutton2:focus,
.formsbutton3:focus,
.formsbutton4:focus,
.formsbutton5:focus,
.formsbutton6:focus,
input[type=color]:focus,
input[type=checkbox]:focus,
input[type=radio]:focus,
select:focus,
textarea:focus,
input[type=text]:focus,
input[type=number]:focus,
input[type=password]:focus {
outline-color:#CFD8DC;
}
.formsbutton0:disabled,
.formsbutton1:disabled,
.formsbutton2:disabled,
.formsbutton3:disabled,
.formsbutton4:disabled,
.formsbutton5:disabled,
.formsbutton6:disabled {
background-color:#626567;
color:#A6ACAF;
}
.fileupload:enabled,
.formsbutton0:enabled,
.formsbutton1:enabled,
.formsbutton2:enabled,
.formsbutton3:enabled,
.formsbutton4:enabled,
.formsbutton5:enabled,
.formsbutton6:enabled {
color:#ECEFF1;
}
}
</style>
<body>
<div id="div-ctr" style="position:absolute;width:100%;max-width:100%;top:0;left:0;">
<div id="pan-top"><center>
<p class="appheader1">E-Ink display toolkit</p>
<div class="container2"><button type="button" id="lr-l" onclick="vBL()" class="formsbutton3" style="width:90px;">Left</button><button type="button" id="lr-c" onclick="vBC()" class="formsbutton3" style="width:90px;margin-left:15px;">Center</button><button type="button" id="lr-r" onclick="vBR()" class="formsbutton3" style="width:90px;margin-left:15px;">Right</button></div>
<p class="infomessage1">Display resolution</p>
<div class="container2"><input type="number" id="eink-w" style="width:90px;text-align:right;"/><button type="button" id="eink-r" class="formsbutton2" style="width:90px;margin-left:15px;padding-top:7px;padding-bottom:7px;">&#x2716;</button><input type="number" id="eink-h" style="width:90px;margin-left:15px;text-align:right;"/></div>
<div class="container2"><label for="eink-p">Display palette</label><select id="eink-p" style="width:300px;"></select></div>
<div class="container2"><table class="tpal"><tbody id="pal-t"></tbody></table></div>
<div class="container2"><label for="pal-f">File palette</label><input type="checkbox" id="pal-f"/></div>
<div class="container2"><label for="eink-c">Fill screen:</label><input type="color" id="eink-c" onchange="mDI()" value="#ffffff" style="margin-left:5px;width:155px;"/></div>
<p class="infomessage2">Add image</p>
<div class="container2"><button type="button" id="img-add" onclick="iAd()" class="formsbutton1">Open image file...</button></div>
<p class="infomessage2">Add text</p>
<div class="container2"><input type="text" id="txt-ini" style="width:230px;" onkeyup="if(event.keyCode==13)tAd();"/><button type="button" id="txt-add" onclick="tAd()" class="formsbutton1" style="width:70px;padding-top:9px;padding-bottom:8px;">Add</button></div>
</center></div>
<div id="pan-bld"><center>
<div id="div-bld"></div>
</center></div>
<div id="pan-img"><center>
<div class="container1"><img id="img-prv" style="border:1px"/></div>
<div class="container1"><img id="img-res" style="border:1px"/></div>
</center></div>
<div id="pan-res"><center>
<div class="container2" style="margin-top:20px;"><label for="di-met">Dithering method</label><select id="di-met" style="width:300px;" onchange="mBD()"></select></div>
<div class="container2"><label for="di-rat">Dithering ratio <output id="odi-rat"></output>%</label><input type="range" id="di-rat" style="accent-color:#5d6d7e;width:300px;" onmousemove="sCh(this)" ontouchmove="sCh(this)" onchange="sCh(this);mBD()" list="r-val" min="1" max="200" value="100"/></div>
<div class="container2"><label for="di-dir">Bypass direction</label><select id="di-dir" style="width:300px;" onchange="mBD()">
<option value="0">Top-left to right-down</option>
<option value="2">Down-right to left-top</option>
<option value="1">Left-down to top-right</option>
<option value="3">Right-top to down-left</option>
<option value="9">From center in circle counterclockwise</option>
</select></div>
<div id="tab-ef" class="tab"></div>
<div class="container2"><label for="di-pro">Proportional</label><input type="checkbox" id="di-pro"/></div>
<div class="container2"><label for="di-red">Red <output id="odi-red"></output></label><input type="range" style="accent-color:#ec7063;width:300px;" onmousemove="sCh(this)" ontouchmove="sCh(this)" list="c-val" min="-255" max="255" value="0" id="di-red"/></div>
<div class="container2"><label for="di-grn">Green <output id="odi-grn"></output></label><input type="range" style="accent-color:#52be80;width:300px;" onmousemove="sCh(this)" ontouchmove="sCh(this)" list="c-val" min="-255" max="255" value="0" id="di-grn"/></div>
<div class="container2"><label for="di-blu">Blue <output id="odi-blu"></output></label><input type="range" style="accent-color:#5dade2;width:300px;" onmousemove="sCh(this)" ontouchmove="sCh(this)" list="c-val" min="-255" max="255" value="0" id="di-blu"/></div>
<div class="container2"><label for="di-q1">RGB cube</label><input type="radio" id="di-q1" name="di-q" onchange="mBD()" checked/><label for="di-q2" style="margin-left:10px;">Human eye</label><input type="radio" id="di-q2" name="di-q" onchange="mBD()"/></div>
<p class="appheader2">Result image</p>
<div class="container2"><button type="button" id="res-png" onclick="rSP()" class="formsbutton1">Save as PNG</button></div>
<div class="container1"><label for="out-b1">1 bit</label><input type="radio" id="out-b1" name="out-b"/><label for="out-b2" style="margin-left:10px;">2 bit</label><input type="radio" id="out-b2" name="out-b"/><label for="out-b4" style="margin-left:10px;">4 bit</label><input type="radio" id="out-b4" name="out-b" checked/><label for="out-b8" style="margin-left:10px;">8 bit</label><input type="radio" id="out-b8" name="out-b"/></div>
<div class="container2"><label for="out-a1">-90°</label><input type="radio" id="out-a1" name="out-a"/><label for="out-a0" style="margin-left:10px;">0°</label><input type="radio" id="out-a0" name="out-a" checked/><label for="out-a2" style="margin-left:10px;">90°</label><input type="radio" id="out-a2" name="out-a"/><label for="out-a3" style="margin-left:10px;">180°</label><input type="radio" id="out-a3" name="out-a"/></div>
<div class="container2"><button type="button" id="res-up" onclick="rUP()" class="formsbutton2">Upload to display</button></div>
<div class="container2"><button type="button" id="res-bp" onclick="rBP()" class="formsbutton1">Save as BMP</button></div>
<div class="container1"><label for="out-hd">Header</label><input type="checkbox" id="out-hd" onchange="if(!this.checked&&oRP.checked)oRP.checked=false"/><label for="out-pl" style="margin-left:10px;">Palette</label><input type="checkbox" id="out-pl" onchange="if(this.checked&&!oRH.checked)oRH.checked=true"/></div>
<div class="container2"><button type="button" id="res-bn" onclick="rBN()" class="formsbutton1">Save as binary</button></div>
<p class="infomessage1">File parameters</p>
<div class="container2"><label for="out-10">Dec</label><input type="radio" id="out-10" name="out-s"/><label for="out-16" style="margin-left:10px;">Hex</label><input type="radio" id="out-16" name="out-s" checked/><label for="out-01" style="margin-left:10px;">Bin</label><input type="radio" id="out-01" name="out-s"/></div>
<div class="container2"><label for="out-cm">Comma</label><input type="radio" id="out-cm" name="out-d" checked/><label for="out-sm" style="margin-left:10px;">Semicolon</label><input type="radio" id="out-sm" name="out-d"/><label for="out-sp" style="margin-left:10px;">Space</label><input type="radio" id="out-sp" name="out-d"/></div>
<div class="container2"><label for="out-el">Lf</label><input type="radio" id="out-el" name="out-e" checked/><label for="out-ec" style="margin-left:10px;">CrLf</label><input type="radio" id="out-ec" name="out-e"/><label for="out-er" style="margin-left:10px;">Cr</label><input type="radio" id="out-er" name="out-e"/></div>
<div class="container2"><button type="button" id="res-cd" onclick="rCD()" class="formsbutton1">Save as text</button></div>
</center></div>
<div id="end-d0" style="padding-bottom:20px;"></div>
</div>
<div id="div-lft" class="pan" style="top:0;left:0;" hidden>
<div id="end-d1" style="padding-bottom:20px;"></div>
</div>
<div id="div-lf2" class="pan" style="top:0;left:320px;" hidden>
<div id="end-d2" style="padding-bottom:20px;"></div>
</div>
<div id="div-rh2" class="pan" style="top:0;left:calc(100% - 640px);" hidden>
<div id="end-d4" style="padding-bottom:20px;"></div>
</div>
<div id="div-rht" class="pan" style="top:0;left:calc(100% - 320px);" hidden>
<div id="end-d3" style="padding-bottom:20px;"></div>
</div>
<datalist id="r-val"><option value="100"></option></datalist>
<datalist id="c-val"><option value="0"></option></datalist>
<datalist id="t-val"><option value="-90"><option value="0"><option value="90"></option></datalist>
<datalist id="x-val"></datalist>
<datalist id="y-val"></datalist>
<div hidden>
<div id="pat-img">
<div class="container1"><button type="button" id="lr-h" onclick="tHd(this,'img')" class="formsbutton3" style="width:56px;outline-offset:-3px;">Turn</button><button type="button" id="lr-v" onclick="tVw(this,'img')" class="formsbutton4" style="width:56px;outline-offset:-3px;margin-left:5px;">Hide</button><button type="button" id="lr-u" onclick="tUp(this,'img')" class="formsbutton2" style="width:56px;margin-left:5px;">Up</button><button type="button" id="lr-n" onclick="tDn(this,'img')" class="formsbutton2" style="width:56px;margin-left:5px;">Down</button><button type="button" id="lr-d" onclick="tDl(this,'img')" class="formsbutton0" style="width:56px;margin-left:5px;">Delete</button></div>
<div class="container2" style="display:inline-block;"><img id="img-prv" width="90" height="60" style="float:left;"/><p id="img-n" style="font-style:italic;word-break:break-all;"></p></div>
<div id="img-h"><div class="container2"><label class="fileupload"><input type="file" id="img-f" onchange="mOF(event)" accept="image/*" hidden/>Open image file...</label></div>
<div hidden><img id="img-src"/></div>
<p class="infomessage2">Resize image</p>
<div class="container2"><label for="img-rs">By short side</label><input type="radio" id="img-rs" name="img-re" onchange="mRC(this)" checked/><label for="img-rl" style="margin-left:10px;">By long side</label><input type="radio" id="img-rl" name="img-re" onchange="mRC(this)"/></div>
<div class="container2"><label for="img-rf">Fit to screen</label><input type="radio" id="img-rf" name="img-re" onchange="mRC(this)"/><label for="img-rn" style="margin-left:10px;">Scale</label><input type="radio" id="img-rn" name="img-re" onchange="mRC(this)"/></div>
<div class="container2"><label for="img-x">X <output id="oimg-x"></output></label><input type="range" id="img-x" onchange="sCh(this);mDI()" onmousemove="sCh(this)" ontouchmove="sCh(this)" list="x-val" style="accent-color:#5d6d7e;width:300px;"/></div>
<div class="container2"><label for="img-y">Y <output id="oimg-y"></output></label><input type="range" id="img-y" onchange="sCh(this);mDI()" onmousemove="sCh(this)" ontouchmove="sCh(this)" list="y-val" style="accent-color:#5d6d7e;width:300px;"/></div>
</div></div>
<div id="pat-txt">
<div class="container1"><button type="button" id="lr-h" onclick="tHd(this,'txt')" class="formsbutton3" style="width:56px;outline-offset:-3px;">Turn</button><button type="button" id="lr-v" onclick="tVw(this,'txt')" class="formsbutton4" style="width:56px;outline-offset:-3px;margin-left:5px;">Hide</button><button type="button" id="lr-u" onclick="tUp(this,'txt')" class="formsbutton2" style="width:56px;margin-left:5px;">Up</button><button type="button" id="lr-n" onclick="tDn(this,'txt')" class="formsbutton2" style="width:56px;margin-left:5px;">Down</button><button type="button" id="lr-d" onclick="tDl(this,'txt')" class="formsbutton0" style="width:56px;margin-left:5px;">Delete</button></div>
<div class="container1"><input type="text" id="txt-in" style="width:300px;" onchange="mDI()"/></div>
<div id="txt-h"><div class="container2"><label for="txt-sf">Select font</label><select id="txt-sf" onclick="bSF()" onkeypress="bSF()" onchange="mDI()" style="width:300px;"><option value="0">Accept permission on first click</option></select></div>
<div class="container1"><label for="txt-c">Color:</label><input type="color" id="txt-c" onchange="mDI()" value="#000000" style="margin-left:5px;width:80px;"/><label for="txt-s" style="margin-left:10px;">Size:</label><input type="number" onchange="mDI()" min="1" id="txt-s" style="width:80px;margin-left:5px;text-align:right;"/></div>
<div class="container2"><label for="txt-k">Stroke:</label><input type="color" id="txt-k" onchange="tSt(this)" value="#000000" style="margin-left:5px;width:80px;"/><label for="txt-w" style="margin-left:10px;">Thick:</label><input type="number" onchange="mDI()" value="1" min="0.1" max="100" step="0.1" id="txt-w" style="width:80px;margin-left:5px;text-align:right;"/></div>
<div class="container2"><label for="txt-e">Stroke</label><input type="checkbox" id="txt-e" onchange="mDI()"/><label for="txt-a" style="margin-left:10px;">Transparent</label><input type="checkbox" id="txt-a" onchange="mDI()"/></div>
<div class="container2"><label for="txt-o">Opacity <output id="otxt-o">100</output>%</label><input type="range" id="txt-o" onchange="sCh(this);mDI()" onmousemove="sCh(this)" ontouchmove="sCh(this)" min="0" max="100" value="100" style="accent-color:#5d6d7e;width:300px;"/></div>
<div class="container2"><label for="txt-t">Rotation <output id="otxt-t">0</output></label><input type="range" id="txt-t" onchange="sCh(this);mDI()" onmousemove="sCh(this)" ontouchmove="sCh(this)" min="-180" max="180" value="0" list="t-val" style="accent-color:#5d6d7e;width:300px;"/></div>
<div class="container2"><label for="txt-x">X <output id="otxt-x"></output></label><input type="range" id="txt-x" onchange="sCh(this);mDI()" onmousemove="sCh(this)" ontouchmove="sCh(this)" list="x-val" style="accent-color:#5d6d7e;width:300px;"/></div>
<div class="container2"><label for="txt-y">Y <output id="otxt-y"></output></label><input type="range" id="txt-y" onchange="sCh(this);mDI()" onmousemove="sCh(this)" ontouchmove="sCh(this)" list="y-val" style="accent-color:#5d6d7e;width:300px;"/></div>
</div></div>
<div id="pat-svg">
<div class="container1"><button type="button" id="lr-h" onclick="tHd(this,'svg')" class="formsbutton3" style="width:56px;outline-offset:-3px;">Turn</button><button type="button" id="lr-v" onclick="tVw(this,'svg')" class="formsbutton4" style="width:56px;outline-offset:-3px;margin-left:5px;">Hide</button><button type="button" id="lr-u" onclick="tUp(this,'svg')" class="formsbutton2" style="width:56px;margin-left:5px;">Up</button><button type="button" id="lr-n" onclick="tDn(this,'svg')" class="formsbutton2" style="width:56px;margin-left:5px;">Down</button><button type="button" id="lr-d" onclick="tDl(this,'svg')" class="formsbutton0" style="width:56px;margin-left:5px;">Delete</button></div>
<div id="txt-h">
</div></div>
</div>
</body>
<script>
const def={w:800,h:480,p:5,b:4,mw:4000,mh:4000,nw:8,nh:8},
pG=[{n:"E-Ink Displays"},{n:"Basic"},{n:"Hardware & Software"}],
pP=[
{n:"Black and white",
p:[0,0xffffff]},
{n:"Black, white, red",
p:[0,0xffffff,0xff0000]},
{n:"Black, white, yellow",
p:[0,0xffffff,0xffff00]},
{n:"Black, white, red, yellow",
p:[0,0xffffff,0xff0000,0xffff00]},
{n:"GooDisplay 4 colors",g:0,
p:[0,0,0,0,0,0xffffff,0,0,0,0,0xffff00,0,0,0,0,0xff0000]},
{n:"GooDisplay 6 colors",g:0,
p:[0,0xffffff,0xffff00,0xff0000,null,0xff,0xff00]},
{n:"GooDisplay 7 colors",g:0,
p:[0,0xffffff,0xff00,0xff,0xff0000,0xffff00,0xff8000]},
{n:"Black, white, red, green, blue",g:1,
p:[0,0xffffff,0xff0000,0xff00,0xff]},
{n:"Basic combinations 8 colors",g:1,
m(){this.p=gPl(1)}},
{n:"Basic combinations 27 colors",g:1,
m(){this.p=gPl(2)}},
{n:"Basic combinations 64 colors",g:1,
m(){this.p=gPl(3)}},
{n:"Basic combinations 125 colors",g:1,
m(){this.p=gPl(4)}},
{n:"Basic combinations 216 colors",g:1,
m(){this.p=gPl(5)}},
{n:"BK-0010 4 colors",g:2,
p:[0,0xff0000,0xff00,0xff]},
{n:"CGA0 4 colors",g:2,
p:[0,0x55ff55,0xff5555,0xffff55]},
{n:"CGA1 4 colors",g:2,
p:[0,0xff55ff,0x55ffff,0xffffff]},
{n:"CGA2 4 colors",g:2,
p:[0,0xff5555,0x55ffff,0xffffff]},
{n:"Sinclair QL 8 colors",g:2,
p:[0,0xff,0xff0000,0xff00ff,0xff00,0xffff,0xffff00,0xffffff]},
{n:"TRS-80 9 colors",g:2,
p:[0,0xff00,0xffff00,0xff,0xff0000,0xffffff,0xffff,0xff00ff,0xffa500]},
{n:"MSX 15 colors",g:2,
p:[0,0xcacaca,0xffffff,0xb75e51,0xd96459,0xfe877c,0xcac15e,0xddce85,0x3ca042,0x40b64a,0x73ce7c,0x5955df,0x7e75f0,0x64daee,0xb565b3]},
{n:"Apple II 15 colors",g:2,
p:[0,0x515c16,0x843d52,0xea7d27,0x514888,0xe85def,0xf5b7c9,0x6752,0xc82c,0x919191,0xc9d199,0xa6f0,0x98dbc9,0xc8c1f7,0xffffff]},
{n:"Common HTML 16 colors",g:2,
p:[0xffffff,0xc0c0c0,0x808080,0,0xff0000,0x800000,0xffff00,0x808000,0xff00,0x8000,0xffff,0x8080,0xff,0x80,0xff00ff,0x800080]},
{n:"Commodore-64 16 colors v1",g:2,
p:[0,0x626262,0x898989,0xadadad,0xffffff,0x9f4e44,0xcb7e75,0x6d5412,0xa1683c,0xc9d487,0x9ae29b,0x5cab5e,0x6abfc6,0x887ecb,0x50459b,0xa057a3]},
{n:"Commodore-64 16 colors v2",g:2,
p:[0x6060d,0x3d3d40,0x6c6b70,0xaba7b0,0xf6ebf7,0x801d1a,0xd97162,0x4d3904,0x99581f,0xe5e545,0x88d941,0x1f992f,0x67c8e5,0x8250e5,0x3f1f99,0x76388c]},
{n:"Commodore-64 16 colors v3",g:2,
p:[0,0x4a4a4a,0x7b7b7b,0xb2b2b2,0xffffff,0x813338,0xc46c71,0x553800,0x8e5029,0xedf171,0xa9ff9f,0x56ac4d,0x75cec8,0x706deb,0x2e2c9b,0x8e3c97]},
{n:"EGA 16 colors",g:2,
p:[0,0xaa,0xaa00,0xaaaa,0xaa0000,0xaa00aa,0xaa5500,0xaaaaaa,0x555555,0x5555ff,0x55ff55,0x55ffff,0xff5555,0xff55ff,0xffff55,0xffffff]},
{n:"Windows 16 colors",g:2,
p:[0,0x800000,0x8000,0x808000,0x80,0x800080,0x8080,0xc0c0c0,0x808080,0xff0000,0xff00,0xffff00,0xff,0xff00ff,0xffff,0xffffff]},
{n:"Macintosh 16 colors",g:2,
p:[0xffffff,0xfcf305,0xff6402,0xdd0806,0xf20884,0x4600a5,0xd4,0x02abea,0x1fb714,0x6411,0x562c05,0x90713a,0xc0c0c0,0x808080,0x404040,0]},
{n:"Macintosh II 16 colors",g:2,
p:[0xffffff,0xffff00,0xff6500,0xdc0000,0xff0097,0x360097,0xca,0x97ff,0xa800,0x6500,0x653600,0x976536,0xb9b9b9,0x868686,0x454545,0]},
{n:"RISC OS 16 colors",g:2,
p:[0xffffff,0xdcdcdc,0xb9b9b9,0x979797,0x767676,0x555555,0x363636,0,0x4597,0xeded04,0x5ca00,0xdc0000,0xededb9,0x558600,0xffb900,0x4b9ff]},
{n:"Nintendo 8-bit 55 colors",g:2,
p:[0,0xfcfcfc,0xf8f8f8,0xbcbcbc,0x7c7c7c,0xa4e4fc,0x3cbcfc,0x78f8,0xfc,0xb8b8f8,0x6888fc,0x58f8,0xbc,0xd8b8f8,0x9878f8,0x6844fc,0x4428bc,0xf8b8f8,0xf878f8,0xd800cc,0x940084,0xf8a4c0,0xf85898,0xe40058,0xa80020,0xf0d0b0,0xf87858,0xf83800,0xa81000,0xfce0a8,0xfca044,0xe45c10,0x881400,0xf8d878,0xf8b800,0xac7c00,0x503000,0xd8f878,0xb8f818,0xb800,0x7800,0xb8f8b8,0x58d854,0xa800,0x6800,0xb8f8d8,0x58f898,0xa844,0x5800,0xfcfc,0xe8d8,0x8888,0x4058,0xf8d8f8,0x787878]},
{n:"EGA 64 colors",g:2,
p:[0xffffff,0xd5d5d5,0xaaaaaa,0x7f7f7f,0x555555,0x2a2a2a,1,0x2a0000,0x550000,0x7f0000,0xaa0000,0xff0000,0xff7f7f,0xffaaaa,0xffaa7f,0xd57f55,0x984f08,0x552a00,0x854115,0xce581d,0xff5500,0xff7f00,0xffaa00,0xffd400,0xffff00,0xd5ff00,0xaaff00,0x86af17,0x7f7f00,0x555500,0x2a2a00,0x3500,0x7a00,0xc600,0xbff0b,0x6ef7b2,0xa0f4d1,0xaaffff,0xffff,0xc2c6,0x7f7f,0x5555,0x18494,0x199ca,0x25398,0x42c72,0x55,0xaa,0xff,0x2d2df7,0x5757ff,0xaaaaff,0xcdabfb,0xa461ff,0x5500aa,0x2a002a,0x550055,0x7f007f,0xaa00aa,0xff00ff,0xff82ff,0xffaad5,0xffd5d5,0xfbeded]},
{n:"Commodore-16 119 colors",g:2,
p:[0,0x202020,0x404040,0x606060,0x808080,0x9f9f9f,0xbfbfbf,0xdfdfdf,0xffffff,0x5d0800,0x7d2819,0x9c4839,0xbc6859,0xdc8879,0xfca899,0xffc8b9,0xffe8d9,0x3746,0x35766,0x237786,0x4397a6,0x63b7c6,0x82d7e6,0xa2f7ff,0xc2ffff,0x5d006d,0x7d128d,0x9c32ac,0xbc52cc,0xdc71ec,0xfc91ff,0xffb1ff,0xffd1ff,0x4e00,0x36e00,0x238e13,0x43ad33,0x63cd53,0x82ed72,0xa2ff92,0xc2ffb2,0x20116d,0x40318d,0x6051ac,0x8071cc,0x9f90ec,0xbfb0ff,0xdfd0ff,0xfff0ff,0x202f00,0x404f00,0x606f13,0x808e33,0x9fae53,0xbfce72,0xdfee92,0xffffb2,0x4600,0x36619,0x238639,0x43a659,0x63c679,0x82e699,0xa2ffb9,0xc2ffd9,0x5d1000,0x7d3000,0x9c5013,0xbc6f33,0xdc8f53,0xfcaf72,0xffcf92,0xffefb2,0x3e1f00,0x5e3f00,0x7e5f13,0x9e7f33,0xbe9f53,0xdebf72,0xfedf92,0xfffeb2,0x13e00,0x215e00,0x417e13,0x619e33,0x81be53,0xa1de72,0xc1fe92,0xe1ffb2,0x5d0120,0x7d2140,0x9c4160,0xbc6180,0xdc809f,0xfca0bf,0xffc0df,0xffe0ff,0x3f20,0x35f40,0x237f60,0x439e80,0x63be9f,0x82debf,0xa2fedf,0x306d,0x3508d,0x2370ac,0x4390cc,0x63afec,0x82cfff,0xa2efff,0x3e016d,0x5e218d,0x7e41ac,0x9e61cc,0xbe81ec,0xdea1ff,0xfec1ff,0xffe1ff]},
{n:"Windows 256 colors",g:2,
p:[0,0x800000,0x8000,0x808000,0x80,0x800080,0x8080,0xc0c0c0,0xc0dcc0,0xa6caf0,0x2a3faa,0x2a3fff,0x2a5f00,0x2a5f55,0x2a5faa,0x2a5fff,0x2a7f00,0x2a7f55,0x2a7faa,0x2a7fff,0x2a9f00,0x2a9f55,0x2a9faa,0x2a9fff,0x2abf00,0x2abf55,0x2abfaa,0x2abfff,0x2adf00,0x2adf55,0x2adfaa,0x2adfff,0x2aff00,0x2aff55,0x2affaa,0x2affff,0x550000,0x550055,0x5500aa,0x5500ff,0x551f00,0x551f55,0x551faa,0x551fff,0x553f00,0x553f55,0x553faa,0x553fff,0x555f00,0x555f55,0x555faa,0x555fff,0x557f00,0x557f55,0x557faa,0x557fff,0x559f00,0x559f55,0x559faa,0x559fff,0x55bf00,0x55bf55,0x55bfaa,0x55bfff,0x55df00,0x55df55,0x55dfaa,0x55dfff,0x55ff00,0x55ff55,0x55ffaa,0x55ffff,0x7f0000,0x7f0055,0x7f00aa,0x7f00ff,0x7f1f00,0x7f1f55,0x7f1faa,0x7f1fff,0x7f3f00,0x7f3f55,0x7f3faa,0x7f3fff,0x7f5f00,0x7f5f55,0x7f5faa,0x7f5fff,0x7f7f00,0x7f7f55,0x7f7faa,0x7f7fff,0x7f9f00,0x7f9f55,0x7f9faa,0x7f9fff,0x7fbf00,0x7fbf55,0x7fbfaa,0x7fbfff,0x7fdf00,0x7fdf55,0x7fdfaa,0x7fdfff,0x7fff00,0x7fff55,0x7fffaa,0x7fffff,0xaa0000,0xaa0055,0xaa00aa,0xaa00ff,0xaa1f00,0xaa1f55,0xaa1faa,0xaa1fff,0xaa3f00,0xaa3f55,0xaa3faa,0xaa3fff,0xaa5f00,0xaa5f55,0xaa5faa,0xaa5fff,0xaa7f00,0xaa7f55,0xaa7faa,0xaa7fff,0xaa9f00,0xaa9f55,0xaa9faa,0xaa9fff,0xaabf00,0xaabf55,0xaabfaa,0xaabfff,0xaadf00,0xaadf55,0xaadfaa,0xaadfff,0xaaff00,0xaaff55,0xaaffaa,0xaaffff,0xd40000,0xd40055,0xd400aa,0xd400ff,0xd41f00,0xd41f55,0xd41faa,0xd41fff,0xd43f00,0xd43f55,0xd43faa,0xd43fff,0xd45f00,0xd45f55,0xd45faa,0xd45fff,0xd47f00,0xd47f55,0xd47faa,0xd47fff,0xd49f00,0xd49f55,0xd49faa,0xd49fff,0xd4bf00,0xd4bf55,0xd4bfaa,0xd4bfff,0xd4df00,0xd4df55,0xd4dfaa,0xd4dfff,0xd4ff00,0xd4ff55,0xd4ffaa,0xd4ffff,0xff0055,0xff00aa,0xff1f00,0xff1f55,0xff1faa,0xff1fff,0xff3f00,0xff3f55,0xff3faa,0xff3fff,0xff5f00,0xff5f55,0xff5faa,0xff5fff,0xff7f00,0xff7f55,0xff7faa,0xff7fff,0xff9f00,0xff9f55,0xff9faa,0xff9fff,0xffbf00,0xffbf55,0xffbfaa,0xffbfff,0xffdf00,0xffdf55,0xffdfaa,0xffdfff,0xffff55,0xffffaa,0xccccff,0xffccff,0x33ffff,0x66ffff,0x99ffff,0xccffff,0x7f00,0x7f55,0x7faa,0x7fff,0x9f00,0x9f55,0x9faa,0x9fff,0xbf00,0xbf55,0xbfaa,0xbfff,0xdf00,0xdf55,0xdfaa,0xdfff,0xff55,0xffaa,0x2a0000,0x2a0055,0x2a00aa,0x2a00ff,0x2a1f00,0x2a1f55,0x2a1faa,0x2a1fff,0x2a3f00,0x2a3f55,0xfffbf0,0xa0a0a4,0x808080,0xff0000,0xff00,0xffff00,0xff,0xff00ff,0xffff,0xffffff]},
{n:"RISC OS 256 colors",g:2,
p:[0,0x101010,0x202020,0x303030,0x400000,0x501010,0x602020,0x703030,0x40,0x101050,0x202060,0x303070,0x400040,0x501050,0x602060,0x703070,0x800000,0x901010,0xa02020,0xb03030,0xc00000,0xd01010,0xe02020,0xf03030,0x800040,0x901050,0xa02060,0xb03070,0xc00040,0xd01050,0xe02060,0xf03070,0x4000,0x105010,0x206020,0x307030,0x404000,0x505010,0x606020,0x707030,0x4040,0x105050,0x206060,0x307070,0x404040,0x505050,0x606060,0x707070,0x804000,0x905010,0xa06020,0xb07030,0xc04000,0xd05010,0xe06020,0xf07030,0x804040,0x905050,0xa06060,0xb07070,0xc04040,0xd05050,0xe06060,0xf07070,0x8000,0x109010,0x20a020,0x30b030,0x408000,0x509010,0x60a020,0x70b030,0x8040,0x109050,0x20a060,0x30b070,0x408040,0x509050,0x60a060,0x70b070,0x808000,0x909010,0xa0a020,0xb0b030,0xc08000,0xd09010,0xe0a020,0xf0b030,0x808040,0x909050,0xa0a060,0xb0b070,0xc08040,0xd09050,0xe0a060,0xf0b070,0xc000,0x10d010,0x20e020,0x30f030,0x40c000,0x50d010,0x60e020,0x70f030,0xc040,0x10d050,0x20e060,0x30f070,0x40c040,0x50d050,0x60e060,0x70f070,0x80c000,0x90d010,0xa0e020,0xb0f030,0xc0c000,0xd0d010,0xe0e020,0xf0f030,0x80c040,0x90d050,0xa0e060,0xb0f070,0xc0c040,0xd0d050,0xe0e060,0xf0f070,0x80,0x101090,0x2020a0,0x3030b0,0x400080,0x501090,0x6020a0,0x7030b0,0xc0,0x1010d0,0x2020e0,0x3030f0,0x4000c0,0x5010d0,0x6020e0,0x7030f0,0x800080,0x901090,0xa020a0,0xb030b0,0xc00080,0xd01090,0xe020a0,0xf030b0,0x8000c0,0x9010d0,0xa020e0,0xb030f0,0xc000c0,0xd010d0,0xe020e0,0xf030f0,0x4080,0x105090,0x2060a0,0x3070b0,0x404080,0x505090,0x6060a0,0x7070b0,0x40c0,0x1050d0,0x2060e0,0x3070f0,0x4040c0,0x5050d0,0x6060e0,0x7070f0,0x804080,0x905090,0xa060a0,0xb070b0,0xc04080,0xd05090,0xe060a0,0xf070b0,0x8040c0,0x9050d0,0xa060e0,0xb070f0,0xc040c0,0xd050d0,0xe060e0,0xf070f0,0x8080,0x109090,0x20a0a0,0x30b0b0,0x408080,0x509090,0x60a0a0,0x70b0b0,0x80c0,0x1090d0,0x20a0e0,0x30b0f0,0x4080c0,0x5090d0,0x60a0e0,0x70b0f0,0x808080,0x909090,0xa0a0a0,0xb0b0b0,0xc08080,0xd09090,0xe0a0a0,0xf0b0b0,0x8080c0,0x9090d0,0xa0a0e0,0xb0b0f0,0xc080c0,0xd090d0,0xe0a0e0,0xf0b0f0,0xc080,0x10d090,0x20e0a0,0x30f0b0,0x40c080,0x50d090,0x60e0a0,0x70f0b0,0xc0c0,0x10d0d0,0x20e0e0,0x30f0f0,0x40c0c0,0x50d0d0,0x60e0e0,0x70f0f0,0x80c080,0x90d090,0xa0e0a0,0xb0f0b0,0xc0c080,0xd0d090,0xe0e0a0,0xf0f0b0,0x80c0c0,0x90d0d0,0xa0e0e0,0xb0f0f0,0xc0c0c0,0xd0d0d0,0xe0e0e0,0xf0f0f0]}
];
let eW=def.w,eH=def.h,eP=def.p,dD=3,iDt,iRs,iNm,cP,tP,aFs=[],idC=0,iV=0,cE=0,
tE=[
{
n:"Adjust",r:0,g:0,b:0,p:false,
m1(a,i){a[i]+=this.r;a[i+1]+=this.g;a[i+2]+=this.b}
},
{
n:"Bright",r:0,g:0,b:0,p:true,
m1(a,i){a[i]=this.r+a[i]*((255-this.r)/255);a[i+1]=this.g+a[i+1]*((255-this.g)/255);a[i+2]=this.b+a[i+2]*((255-this.b)/255)}
},
{
n:"Gamma",r:0,g:0,b:0,p:true,
m1(a,i){a[i]=Math.pow(255*(a[i]/255),(this.r/5+255)/255);a[i+1]=Math.pow(255*(a[i+1]/255),(this.g/5+255)/255);a[i+2]=Math.pow(255*(a[i+2]/255),(this.b/5+255)/255)}
},
{
n:"Contrast",r:0,g:0,b:0,p:true,
m1(a,i){}
}
];
function eId(e){return document.getElementById(e)}
const oEW=eId('eink-w'),
oEH=eId('eink-h'),
oER=eId('eink-r'),
oEP=eId('eink-p'),
oPT=eId('pal-t'),
oPF=eId('pal-f'),
oEC=eId('eink-c'),
oIP=eId('pat-img'),
oIX=eId('img-x'),
oIY=eId('img-y'),
oTN=eId("txt-ini"),
oTP=eId("pat-txt"),
oTI=eId("txt-in"),
oTF=eId("txt-sf"),
oTS=eId("txt-s"),
oTX=eId("txt-x"),
oTY=eId("txt-y"),
oVX=eId("x-val"),
oVY=eId("y-val"),
oVC=eId("div-ctr"),
oVL=eId("div-lft"),
oVF=eId("div-lf2"),
oVR=eId("div-rht"),
oVH=eId("div-rh2"),
oV0=eId("end-d0"),
oV1=eId("end-d1"),
oV2=eId("end-d2"),
oV3=eId("end-d3"),
oV4=eId("end-d4"),
oVI=eId("pan-img"),
oVT=eId("pan-top"),
oVS=eId("pan-res"),
oVB=eId("pan-bld"),
oTT=eId("div-bld"),
oIO=eId("img-prv"),
oIR=eId("img-res"),
oDQ=eId('di-q1'),
oDH=eId('di-q2'),
oDM=eId('di-met'),
oDK=eId('di-rat'),
oDD=eId('di-dir'),
oEF=eId('tab-ef'),
oDP=eId('di-pro'),
oDR=eId('di-red'),
oDG=eId('di-grn'),
oDB=eId('di-blu'),
oUP=eId('res-up'),
oBP=eId('res-bp'),
oRH=eId('out-hd'),
oRP=eId('out-pl'),
oB1=eId('out-b1'),
oB2=eId('out-b2'),
oB4=eId('out-b4'),
oB8=eId('out-b8'),
oA0=eId('out-a0'),
oA1=eId('out-a1'),
oA2=eId('out-a2'),
oA3=eId('out-a3'),
oOD=eId('out-10'),
oOH=eId('out-16'),
oOB=eId('out-01'),
oOC=eId('out-cm'),
oOS=eId('out-sm'),
oOP=eId('out-sp'),
oOL=eId('out-el'),
oOE=eId('out-ec'),
oOF=eId('out-er'),
cvs=document.createElement("canvas"),
ctx=cvs.getContext("2d",{willReadFrequently:true}),
cvs2=document.createElement("canvas"),
ctx2=cvs2.getContext("2d",{willReadFrequently:true}),
cvs0=document.createElement("canvas"),
ctx0=cvs0.getContext("2d",{willReadFrequently:true});
function vTC(){
oVL.hidden=true;
oVF.hidden=true;
oVR.hidden=true;
oVH.hidden=true;
if(iV==1){
oVL.hidden=false;
oV1.before(oVT);
oV1.before(oVB);
oV0.before(oVI);
oV1.before(oVS);
oVC.style.setProperty('width','calc(100% - 320px)');
oVC.style.setProperty('left','320px');
oVC.style.setProperty('padding-right','0');
}else if(iV==2){
oVL.hidden=false;
oVF.hidden=false;
oV1.before(oVT);
oV2.before(oVB);
oV0.before(oVI);
oV1.before(oVS);
oVC.style.setProperty('width','calc(100% - 640px)');
oVC.style.setProperty('left','640px');
oVC.style.setProperty('padding-right','0');
}else if(iV==3){
oVR.hidden=false;
oV3.before(oVT);
oV3.before(oVB);
oV0.before(oVI);
oV3.before(oVS);
oVC.style.setProperty('width','calc(100% - 320px)');
oVC.style.setProperty('left','0');
oVC.style.setProperty('padding-right','320px');
}else if(iV==4){
oVR.hidden=false;
oVH.hidden=false;
oV3.before(oVT);
oV4.before(oVB);
oV0.before(oVI);
oV3.before(oVS);
oVC.style.setProperty('width','calc(100% - 640px)');
oVC.style.setProperty('left','0');
oVC.style.setProperty('padding-right','640px');
}else if(iV==5){
oVL.hidden=false;
oVR.hidden=false;
oV1.before(oVT);
oV3.before(oVB);
oV0.before(oVI);
oV1.before(oVS);
oVC.style.setProperty('width','calc(100% - 640px)');
oVC.style.setProperty('left','320px');
oVC.style.setProperty('padding-right','320px');
}else if(iV==6){
oVL.hidden=false;
oVR.hidden=false;
oV3.before(oVT);
oV1.before(oVB);
oV0.before(oVI);
oV3.before(oVS);
oVC.style.setProperty('width','calc(100% - 640px)');
oVC.style.setProperty('left','320px');
oVC.style.setProperty('padding-right','320px');
}else{
oV0.before(oVT);
oV0.before(oVB);
oV0.before(oVI);
oV0.before(oVS);
oVC.style.setProperty('width','100%');
oVC.style.setProperty('left','0');
oVC.style.setProperty('padding-right','0');
}
oVC.style.setProperty('min-width',(eW+20)+'px');
}
function vBL(){
if(iV==1)iV=2;else iV=1;
vTC();
}
function vBR(){
if(iV==3)iV=4;else iV=3;
vTC();
}
function vBC(){
if(iV==0)iV=5;else if(iV==5)iV=6;else iV=0;
vTC();
}
oEW.onchange=function(d=true){
if(oEW.value)eW=parseInt(oEW.value);
if(eW<def.nw)eW=def.nw;else if(eW>def.mw)eW=def.mw;
oEW.value=eW;
oVC.style.setProperty('min-width',(eW+20)+'px');
const w2=~~(eW/2);
cvs0.width=cvs2.width=cvs.width=eW;
oTX.max=eW;oTX.value=w2;sCh(oTX);
oIX.max=eW;oIX.value=w2;sCh(oIX);
oVX.innerHTML='<option value="'+w2+'"></option>';
for(const n of oTT.childNodes)
if(n.id.startsWith('pat-txt-')||n.id.startsWith('pat-img-')){
let i=n.id.split('-')[2],j=n.id.split('-')[1],x=n.querySelector('[id='+j+'-x-'+i+']'),k;
if(x){k=x.value*eW/x.max;x.max=eW;x.value=k;sCh(x)}
}
if(d)mDI();
}
oEH.onchange=function(d=true){
if(oEH.value)eH=parseInt(oEH.value);
if(eH<def.nh)eH=def.nh;else if(eH>def.mh)eH=def.mh;
oEH.value=eH;
const h2=~~(eH/2);
cvs0.height=cvs2.height=cvs.height=eH;
oTS.value=~~(eH/4);oTY.max=eH;oTY.value=h2;sCh(oTY);
oIY.max=eH;oIY.value=h2;sCh(oIY);
oVY.innerHTML='<option value="'+h2+'"></option>';
for(const n of oTT.childNodes)
if(n.id.startsWith('pat-txt-')||n.id.startsWith('pat-img-')){
let i=n.id.split('-')[2],j=n.id.split('-')[1],y=n.querySelector('[id='+j+'-y-'+i+']'),k;
if(y){k=y.value*eH/y.max;y.max=eH;y.value=k;sCh(y)}
}
oER.onclick=function(){
oEW.value=eH;
oEH.value=eW;
oEW.onchange(false);
oEH.onchange();
}
if(d)mDI();
}
function Hx(n,s=2){
return n.toString(16).padStart(s,'0')
}
function gPl(d){
let a=[],k=Math.round(255/d);
for(let r=0;r<=k*d;r+=k)
for(let g=0;g<=k*d;g+=k)
for(let b=0;b<=k*d;b+=k)
a.push((cmp(r)<<16)+(cmp(g)<<8)+cmp(b));
return a
}
function PlC(){
const l=Math.min(pP[eP].p.length,256),t=(l>32?16:(l>8?8:l)),w=100/t,b=(l<3?1:(l<5?2:(l<17?4:8)));
cP=new Array();tP=new Array();
let r=~~((l-1)/t+1),s='',u,k,g;
for(let j=0;j<r;j++){
s+='<tr>';
for(let i=0;i<t;i++){
let c=j*t+i;
if(c<l){
if(pP[eP].p[c]===null){
cP[c]=new Array(0,0,0);
u=true;
k='#000000';
}else{
cP[c]=new Array((pP[eP].p[c]>>16)&255,(pP[eP].p[c]>>8)&255,pP[eP].p[c]&255);
u=pP[eP].p.findIndex((n,x)=>{return n==pP[eP].p[c]&&x<c})>=0;
k='#'+Hx(pP[eP].p[c],6);
}
g=(cP[c][0]+cP[c][1]+cP[c][2]<320?'white':'black');
tP[c]=!u;
s+='<td class="cp" style="background-color:'+k+';color:'+g+';height:'+(t==16?20:30)+'px;width:'+w+'%;" '+(!u?'onclick="Pon(this,'+c+')" ':'')+'title="'+c+': '+(u?'null':k)+'">'+(u?'&#11096;':'')+'</td>';
}else s+='<td></td>';
}
s+='</tr>';
}
oPT.innerHTML=s;
oB1.disabled=(b>1);
oB2.disabled=(b>2);
oB4.disabled=(b>4);
if(oB1.checked&&b>1)oB2.checked=true;
if(oB2.checked&&b>2)oB4.checked=true;
if(oB4.checked&&b>4)oB8.checked=true;
}
function Pon(e,n){
let k=0;
for(let i=0;i<tP.length;i++){
if(tP[i])k++;
if(k>2)break}
if(!(tP[n]&&k<3)){
tP[n]=!tP[n];
e.innerHTML=(tP[n]?'':'&#x2716;');
mBD()}
}
oEP.onchange=function(e){eP=parseInt(this.value);PlC();mBD()}
function mRC(e){if(e.checked)mDI()}
function sDc(d){
oDR.value=tE[cE].r+d;tE[cE].r=parseInt(oDR.value);sCh(oDR);
oDG.value=tE[cE].g+d;tE[cE].g=parseInt(oDG.value);sCh(oDG);
oDB.value=tE[cE].b+d;tE[cE].b=parseInt(oDB.value);sCh(oDB)
}
oDR.onchange=function(e){let v=parseInt(this.value);if(oDP.checked)sDc(v-tE[cE].r);else{sCh(this);tE[cE].r=v}mBD()}
oDG.onchange=function(e){let v=parseInt(this.value);if(oDP.checked)sDc(v-tE[cE].g);else{sCh(this);tE[cE].g=v}mBD()}
oDB.onchange=function(e){let v=parseInt(this.value);if(oDP.checked)sDc(v-tE[cE].b);else{sCh(this);tE[cE].b=v}mBD()}
oDP.onchange=function(e){tE[cE].p=this.checked}
oB1.onchange=oB2.onchange=oB4.onchange=oB8.onchange=oA0.onchange=oA1.onchange=oA2.onchange=oA3.onchange=function(){if(this.checked)mIR()}
oPF.onchange=function(){
if(oPF.checked)
for(const n of oTT.childNodes){
if(n.id.startsWith('pat-img-')){
const i=n.id.split('-')[2],s=n.querySelector('[id=img-src-'+i+']'),p=n.querySelector('[id=img-n-'+i+']');
if(!s.getAttribute('data-colors')&&s.width&&s.height){
mQI(s);p.innerHTML=s.dataset.name+'<br>'+s.width+' x '+s.height+' px, '+s.dataset.colors+' colors';
}}}}
function mIR(){
iRs=new Array();
const p=iDt.data,d=gDC(),s=gBC(),m=(oDH.checked?1:0);
oUP.disabled=!((eW==def.w&&eH==def.h||eW==def.h&&eH==def.w)&&eP==def.p&&eId('out-b'+def.b).checked);
oBP.disabled=!!(gAW()%d);
let a=0,k=0;
if(oA1.checked){
for(let x=eW-1;x>=0;x--)for(let y=0;y<eH;y++)pIR(y*eW+x);
}
else if(oA2.checked){
for(let x=0;x<eW;x++)for(let y=eH-1;y>=0;y--)pIR(y*eW+x);
}
else if(oA3.checked){
for(let y=eH-1;y>=0;y--)for(let x=eW-1;x>=0;x--)pIR(y*eW+x);
}
else{
for(let i=0;i<p.length/4;i++)pIR(i);
}
if(k%d){while(k%d){k++;a<<=s}iRs.push(a)}
function pIR(i){
let j=4*i,c=nrC(p[j],p[j+1],p[j+2],cP,tP,m);
a=(a<<s)+c;
k++;
if(!(k%d)){iRs.push(a);a=0}
}}
function mBD(){
iDt=ctx.getImageData(0,0,eW,eH);
const p=iDt.data;
let c1=0,c2=0,c3=0;
for(let i=0;i<p.length;i+=4){
for(let j=0;j<tE.length;j++)if(tE[j].m1!==undefined&&(tE[j].r||tE[j].g||tE[j].b))tE[j].m1(p,i);
p[i]=cmp(p[i]);p[i+1]=cmp(p[i+1]);p[i+2]=cmp(p[i+2]);
c1+=p[i];c2+=p[i+1];c3+=p[i+2]
}
let a=[],c=c1*77/(256*p.length/4)+c2*150/(256*p.length/4)+c3*29/(256*p.length/4);
for(let i=0;i<256;i++)
a.push(cmp(((i-c)*(1+tE[3].r/127))+c),cmp(((i-c)*(1+tE[3].g/127))+c),cmp(((i-c)*(1+tE[3].b/127))+c));
for(let i=0;i<p.length;i+=4){
p[i]=a[p[i]*3];p[i+1]=a[p[i+1]*3+1];p[i+2]=a[p[i+2]*3+2]
}
let m=parseInt(oDM.value),n=~~(m/100),k=parseInt(oDK.value),d=parseInt(oDD.value);
m=m%100;
oDD.disabled=!(!n&&m);
oDK.disabled=!n&&!m;
if(!m&&!n)NDith();
else{
m--;
if(!n)FDith(m,k/100,d);
else if(n==1)BDith(m,k/100);
else if(n==2)RDith(m,k/100);
}
ctx2.clearRect(0,0,eW,eH);
ctx2.putImageData(iDt,0,0);
oIR.src=cvs2.toDataURL("image/png");
mIR();
}
function mDI(){
iNm='image';ctx0.clearRect(0,0,eW,eH);ctx0.save();
ctx.fillStyle=oEC.value;
ctx.fillRect(0,0,eW,eH);
for(const n of oTT.childNodes){
if(n.id.startsWith('pat-img-')){
const i=n.id.split('-')[2],ii=n.querySelector('[id=img-src-'+i+']'),nn=n.querySelector('[id=img-n-'+i+']'),rs=n.querySelector('[id=img-rs-'+i+']'),
rl=n.querySelector('[id=img-rl-'+i+']'),rf=n.querySelector('[id=img-rf-'+i+']'),rn=n.querySelector('[id=img-rn-'+i+']'),
ix=n.querySelector('[id=img-x-'+i+']'),iy=n.querySelector('[id=img-y-'+i+']'),ih=n.querySelector('[id=lr-v-'+i+']');
if(ii&&ii.width&&ii.height&&nn&&rs&&rl&&rf&&rn&&ix&&iy&&(ih.dataset.checked?ih.dataset.checked.toLowerCase():'')!='true'){
let x=y=0,w=ii.width,h=ii.height;
iNm=ii.dataset.name;
nn.innerHTML=iNm+'<br>'+w+' x '+h+' px'+(ii.dataset.colors?', '+ii.dataset.colors+' colors':'');
iNm=iNm.substring(0,iNm.lastIndexOf('.'));
if(rf.checked){w=eW;h=eH}
else if(rl.checked&&(w/eW)>(h/eH)||rs.checked&&(w/eW)<(h/eH)){h*=eW/w;w=eW}
else if(rl.checked&&(w/eW)<(h/eH)||rs.checked&&(w/eW)>(h/eH)){w*=eH/h;h=eH}
x=ix.value-w/2;y=iy.value-h/2;
ctx.drawImage(ii,x,y,w,h);
}}
else if(n.id.startsWith('pat-txt-')){
let s,i=n.id.split('-')[2],ti=n.querySelector('[id=txt-in-'+i+']'),tf=n.querySelector('[id=txt-sf-'+i+']'),
ts=n.querySelector('[id=txt-s-'+i+']'),tc=n.querySelector('[id=txt-c-'+i+']'),tk=n.querySelector('[id=txt-k-'+i+']'),
te=n.querySelector('[id=txt-e-'+i+']'),tx=n.querySelector('[id=txt-x-'+i+']'),ty=n.querySelector('[id=txt-y-'+i+']'),
tp=n.querySelector('[id=txt-o-'+i+']'),tt=n.querySelector('[id=txt-t-'+i+']'),tw=n.querySelector('[id=txt-w-'+i+']'),
ta=n.querySelector('[id=txt-a-'+i+']'),ih=n.querySelector('[id=lr-v-'+i+']');
if(ti&&tf&&ts&&tc&&tk&&te&&tx&&ty&&tp&&tt&&tw&&ta&&(ih.dataset.checked?ih.dataset.checked.toLowerCase():'')!='true'){
ti=ti.value;
tf=parseInt(tf.value);
ts=parseInt(ts.value);
tx=parseInt(tx.value);
ty=parseInt(ty.value);
tp=parseInt(tp.value)/100;
tt=parseInt(tt.value);
tw=parseFloat(tw.value);
ctx0.textAlign=ctx.textAlign="center";
ctx0.textBaseline=ctx.textBaseline="middle";
ctx0.fillStyle=ctx.fillStyle=tc.value;
if(te.checked){ctx0.strokeStyle=ctx.strokeStyle=tk.value;ctx0.lineWidth=ctx.lineWidth=tw}
s=ts+'px';
if(aFs[tf].f)s+=' '+aFs[tf].f;
ctx0.font=ctx.font=s;
if(aFs[tf].s)s=aFs[tf].s.toLowerCase()+' '+s;
ctx0.font=ctx.font=s;
if(ta.checked){
ctx0.fillRect(0,0,eW,eH);
ctx0.globalCompositeOperation='destination-out';
if(tt){
ctx0.translate(tx,ty);
ctx0.rotate(tt*Math.PI/180);
ctx0.fillText(ti,0,0);
if(te.checked)ctx0.strokeText(ti,0,0);
}else{
ctx0.fillText(ti,tx,ty);
if(te.checked)ctx0.strokeText(ti,tx,ty);
}
ctx.drawImage(cvs0,0,0);
ctx0.restore();
}
else{
ctx.save();
ctx.globalAlpha=tp;
if(tt){
ctx.translate(tx,ty);
ctx.rotate(tt*Math.PI/180);
ctx.fillText(ti,0,0);
if(te.checked)ctx.strokeText(ti,0,0);
}else{
ctx.fillText(ti,tx,ty);
if(te.checked)ctx.strokeText(ti,tx,ty);
}
ctx.restore();
}}}}
oIO.src=cvs.toDataURL("image/png");
mBD();
}
function mQI(s){
let p,w=s.width,h=s.height,q=[],c=[];
if(w&&h){
const cvsP=document.createElement("canvas"),ctxP=cvsP.getContext("2d",{willReadFrequently:true});
let m=(w+h)/2,k=(m>128?128/m:1);
for(let i=0;i<8;i++)q[i]=[];
ctxP.drawImage(s,0,0,w,h);
p=ctxP.getImageData(0,0,w,w).data;
for(let i=0;i<p.length;i+=4){
let j=c.findIndex(n=>{return n[0]==p[i]&&n[1]==p[i+1]&&n[2]==p[i+2]});
if(j>=0)c[j][3]++;else c.push([p[i],p[i+1],p[i+2],1])}
s.setAttribute('data-colors',c.length);
if(k!=1){ctxP.clearRect(0,0,w,h);
ctxP.drawImage(s,0,0,w*k,h*k);
p=ctxP.getImageData(0,0,w*k,h*k).data}
let a=[];
for(let i=0;i<p.length;i+=4)a.push([p[i],p[i+1],p[i+2]]);
qS(a,8);
let n=s.getAttribute('data-name'),f=n.substring(0,n.lastIndexOf('.')).toLowerCase(),t=document.createElement("optgroup");
t.label=n+' '+c.length+' colors';
m=true;
if(c.length<=256){
c.sort((x,y)=>{const r=x[0]+x[1]+x[2],g=y[0]+y[1]+y[2];return (r<g?-1:(r>g?1:0))});
let o=document.createElement("option");
o.value=pP.length;
o.innerHTML=n+' original '+c.length+' colors';
t.appendChild(o);
k=c.map(x=>(x[0]<<16)+(x[1]<<8)+x[2]);
if(pP.findIndex(x=>x.p.length==c.length&&f==x.n.substring(0,x.n.lastIndexOf('.')).toLowerCase()&&x.p.findIndex((y,i)=>y!=k[i])<0)>=0)m=false;
else{pP.push({n:n+' original '+c.length+' colors',p:k})}}
if(m)for(let i=7;i>=0;i--){
q[i].sort((x,y)=>{const r=x[0]+x[1]+x[2],g=y[0]+y[1]+y[2];return (r<g?-1:(r>g?1:0))});
let o=document.createElement("option");
o.value=pP.length;
o.innerHTML=n+' '+q[i].length+' colors';
t.appendChild(o);
k=q[i].map(x=>(x[0]<<16)+(x[1]<<8)+x[2]);
if(i==7&&c.length>256&&pP.findIndex(x=>x.p.length==k.length&&f==x.n.substring(0,x.n.lastIndexOf('.')).toLowerCase()&&x.p.findIndex((y,j)=>y!=k[j])<0)>=0){m=false;break}
pP.push({n:n+' '+q[i].length+' colors',p:k})}
if(m){oEP.appendChild(t)}
}
function qM(a,d){
const l=a.length;
let r=0,g=0,b=0;
for(let i=0;i<l;i++){r+=a[i][0];g+=a[i][1];b+=a[i][2]}
r=Math.round(r/l);g=Math.round(g/l);b=Math.round(b/l);
if(q[d].findIndex(n=>{return n[0]==r&&n[1]==g&&n[2]==b})<0)q[d].push([r,g,b]);
}
function qS(a,d){
const l=a.length;
if(l){
if(d<8)qM(a,7-d);
if(d){
let r1=r2=a[0][0],g1=g2=a[0][1],b1=b2=a[0][2];
for(let i=1;i<l;i++){
if(r1>a[i][0])r1=a[i][0];if(r2<a[i][0])r2=a[i][0];
if(g1>a[i][1])g1=a[i][1];if(g2<a[i][1])g2=a[i][1];
if(b1>a[i][2])b1=a[i][2];if(b2<a[i][2])b2=a[i][2]}
const r=r2-r1,g=g2-g1,b=b2-b1,t=(g>=r&&g>=b?1:(b>=r&&b>=g?2:0)),m=~~((l+1)/2);
a.sort((x,y)=>{if(x[t]<y[t])return -1;if(x[t]>y[t])return 1;return 0});
qS(a.slice(m),d-1);
qS(a.slice(0,m),d-1)}}
}}
function mPv(s,p){
if(s.width&&s.height){
const cvsP=document.createElement("canvas"),ctxP=cvsP.getContext("2d",{willReadFrequently:true});
let k=Math.min(90/s.width,60/s.height);
cvsP.width=90;cvsP.height=60;
ctxP.drawImage(s,0,0,s.width*k,s.height*k);
p.src=cvsP.toDataURL("image/png")
}}
function mSI(r,s,p){
s.onload=()=>{mPv(s,p);if(oPF.checked)mQI(s);mDI();}
s.src=r.result;
}
function mOF(e){
let t=e.target||window.event.srcElement,f=t.files,i=t.id.split('-')[2];
if(FileReader&&f&&f.length){
let r=new FileReader(),s=eId('img-src-'+i),p=eId('img-prv-'+i);
r.onload=()=>mSI(r,s,p);
r.readAsDataURL(f[0]);
s.setAttribute('data-name',f[0].name);
}}
function gAS(s){return Array.from(s,c=>c.charCodeAt(0))}
function gBC(){return (oB1.checked?1:(oB2.checked?2:(oB4.checked?4:8)))}
function gDC(){return (oB1.checked?8:(oB2.checked?4:(oB4.checked?2:1)))}
function gAW(){return (oA1.checked||oA2.checked?eH:eW)}
function gAH(){return (oA1.checked||oA2.checked?eW:eH)}
function rSP(){
SF(cvs2.toDataURL("image/png"),iNm+".png");
}
function rUP(){
let f=new FormData();
f.append(iNm+".bin",new Blob([new Uint8Array(iRs)],{type:'application/octet-stream'}));
fetch('/upload',{method:"POST",body:f});
}
function rBP(){
const p=iDt.data,d=gDC(),b=gBC(),c=cP.length,u=tP.filter(i=>i).length,
w=gAW(),h=gAH(),o=(w/d%4?4-(w/d/4-(~~(w/d/4)))*4:0),l=iRs.length+o*h;
let a=new Array(66,77);
A4(54+c*4+l);A4(0);A4(54+c*4);A4(40);A4(w);A4(h);A2(1);A2(b);A4(0);A4(l);A4(2835);A4(2835);A4(c);A4(u);
for(let i=0;i<c;i++)a.push(cP[i][2],cP[i][1],cP[i][0],0);
for(let j=h-1;j>=0;j--){for(let i=0;i<w/d;i++)a.push(iRs[j*w/d+i]);for(let i=0;i<o;i++)a.push(0)}
SF(URL.createObjectURL(new Blob([new Uint8Array(a)],{type:'application/octet-stream'})),iNm+".bmp");
function A2(n){a.push(n&255,(n>>8)&255)}
function A4(n){a.push(n&255,(n>>8)&255,(n>>16)&255,(n>>24)&255)}
}
function rBN(){
const b=gBC(),w=gAW(),h=gAH(),t=oRP.checked,r=oRH.checked;
let a=new Array(),s=0;
if(t)a=gAS('PIC'+b);
else if(r)a=gAS('PIX'+b);
if(r)a.push(w&255,(w>>8)&255,h&255,(h>>8)&255);
if(t){a.push(3,cP.length);
for(let i=0;i<cP.length;i++)if(tP[i])a.push(cP[i][0],cP[i][1],cP[i][2]);else a.push(0,0,0);
for(let i=0;i<Math.pow(2,b);i++){s=(s<<1)+(i<tP.length&&tP[i]?1:0);if(!((i+1)%8)){a.push(s);s=0}}
}
SF(URL.createObjectURL(new Blob([new Uint8Array(a.concat(iRs))],{type:'application/octet-stream'})),iNm+(r?".pic":".bin"));
}
function rCD(){
let r='',d=(oOC.checked?',':(oOS.checked?';':'')),e=(oOF.checked?"\r":(oOL.checked?"\n":"\r\n"));
if(oRH.checked)r+='size: '+gAW()+' x '+gAH()+e+'bits: '+gBC()+e;
if(oRP.checked){r+='palette: [';for(let i=0;i<pP[eP].p.length;i++)r+=(i?', ':'')+(pP[eP].p[i]===null?'null':'0x'+pP[eP].p[i].toString(16).padStart(6,'0'));r+=']'+e}
r+=iNm+'['+Math.floor(eW*eH/gDC())+']'+e;
for(let i=0;i<iRs.length;i++){
if(i){r+=d;if(i%16)r+=' ';else r+=e}
if(oOH.checked)r+='0x'+iRs[i].toString(16).padStart(2,'0');
else if(oOB.checked)r+='0b'+iRs[i].toString(2).padStart(8,'0');
else r+=iRs[i];
}
SF(URL.createObjectURL(new Blob([r],{type:'text/plain'})),iNm+".txt");
}
const SF=async(b,n)=>{
const a=document.createElement('a');
a.href=b;
a.download=n;
a.style.display='none';
document.body.append(a);
a.click();
setTimeout(()=>{URL.revokeObjectURL(b);a.remove()},1000);
}
function cmp(v){
return(v<0?0:v>255?255:v);
}
function nrC(r,g,b,p,t,m=0){
let c=null,n,d;
for(let i=0;i<p.length;i++){
if(t[i]){
if(m==1)d=Math.sqrt(Math.pow(r-p[i][0],2)+Math.pow(g-p[i][1],2)+Math.pow(b-p[i][2],2));
else d=30*Math.pow(r-p[i][0],2)+59*Math.pow(g-p[i][1],2)+11*Math.pow(b-p[i][2],2);
if(c===null||d<n){n=d;c=i}
if(!d)break;
}}
return c;
}
function nC(r,g,b){return cP[nrC(r,g,b,cP,tP,(oDH.checked?1:0))]}
function NDith(){
const p=iDt.data;
for(let i=0;i<p.length;i+=4){
let c=nC(p[i],p[i+1],p[i+2]);
p[i]=c[0];p[i+1]=c[1];p[i+2]=c[2];
}}
const mF=[
{
n:"Floyd-Steinberg",
m:[[1,0,7/16],
[3/16,5/16,1/16]]
},
{
n:"Jarvis, Judice and Ninke",
m:[[1,1,0,7/48,5/48],
[3/48,5/48,7/48,5/48,3/48],
[1/48,3/48,5/48,3/48,1/48]]
},
{
n:"Stucki",
m:[[1,1,0,8/42,4/42],
[2/42,4/42,8/42,4/42,2/42],
[1/42,2/42,4/42,2/42,1/42]]
},
{
n:"Sierra",
m:[[1,1,0,5/32,3/32],
[2/32,4/32,5/32,4/32,2/32],
[1,2/32,3/32,2/32,1]]
},
{
n:"Sierra Two Row",
m:[[1,1,0,4/16,3/16],
[1/16,2/16,3/16,2/16,1/16]]
},
{
n:"Sierra Lite",
m:[[1,1,0,4/16,3/16],
[1/16,2/16,3/16,2/16,1/16]]
},
{
n:"Atkinson",
m:[[1,0,1/8,1/8],
[1/8,1/8,1/8,1],
[1,1/8,1,1]]
},
{
n:"Zhigang Fan",
m:[[1,1,0,7/16],
[1/16,3/16,5/16,1]]
},
{
n:"Shiau-Fan",
m:[[1,1,0,1/2],
[1/8,1/8,1/4,1]]
},
{
n:"Shiau-Fan 2",
m:[[1,1,1,0,1/2],
[1/16,1/16,1/8,1/4,1]]
},
{
n:"Burkes",
m:[[1,1,0,8/32,4/32],
[2/32,4/32,8/32,4/32,2/32]]
},
{
n:"Steven Pigeon",
m:[[1,1,0,2/14,1/14],
[1,2/14,2/14,2/14,1],
[1/14,1,1/14,1,1/14]]
}
];
function DE(p,w,h,x,y,r,g,b,e,k){
if(x>=0&&y>=0&&x<w&&y<h){
const i=(y*w+x)*4;
p[i]=cmp(p[i]+r*e*k);
p[i+1]=cmp(p[i+1]+g*e*k);
p[i+2]=cmp(p[i+2]+b*e*k);
}}
function DP(m,s,d,p,w,h,x,y,k){
const i=(y*w+x)*4,c=nC(p[i],p[i+1],p[i+2]),r=p[i]-c[0],g=p[i+1]-c[1],b=p[i+2]-c[2];
p[i]=c[0];
p[i+1]=c[1];
p[i+2]=c[2];
for(let j=0;j<mF[m].m.length;j++){
for(let i=0;i<mF[m].m[j].length;i++){
if(mF[m].m[j][i]&&mF[m].m[j][i]!=1){
if(d==3)
DE(p,w,h,x-j,y+i-s,r,g,b,mF[m].m[j][i],k);
else if(d==1)
DE(p,w,h,x+j,y-i+s,r,g,b,mF[m].m[j][i],k);
else if(d==2)
DE(p,w,h,x-i+s,y-j,r,g,b,mF[m].m[j][i],k);
else
DE(p,w,h,x+i-s,y+j,r,g,b,mF[m].m[j][i],k);
}}}}
function FDith(m,k,d){
const p=iDt.data,w=eW,h=eH,s=mF[m].m[0].lastIndexOf(0);
if(d==9){
let n=1,j=0,f=true,x=~~(w/2),yt=yd=y=~~(h/2);
d=3;
for(let i=0;i<w*w;i++){
j++;
DP(m,s,d,p,w,h,x,y,k);
if(d==3)
y++;
else if(d==1)
y--;
else if(d==2)
x--;
else
x++;
if(j==n){
j=0;
if(d==3)d=0;else d++;
if(!f)n++;
f=!f;
}}}
else if(d==3){
for(let x=w-1;x>=0;x--)
for(let y=0;y<h;y++)
DP(m,s,3,p,w,h,x,y,k);
}
else if(d==1){
for(let x=0;x<w;x++)
for(let y=h-1;y>=0;y--)
DP(m,s,1,p,w,h,x,y,k);
}
else if(d==2){
for(let y=h-1;y>=0;y--)
for(let x=w-1;x>=0;x--)
DP(m,s,2,p,w,h,x,y,k);
}
else{
for(let y=0;y<h;y++)
for(let x=0;x<w;x++)
DP(m,s,0,p,w,h,x,y,k);
}}
function BM(m){
let a=new Array();
const d=1<<m;
for(let y=0;y<d;++y){
a[y]=new Array();
for(let x=0;x<d;++x){
let v=0,s=m-1,i=x^y,j=y;
for(let b=0;b<2*m;--s){
v|=((j>>s)&1)<<b++;
v|=((i>>s)&1)<<b++;
}
a[y][x]=v;
}}
return a;
}
const mB=[
{
n:"Bayer 2x2",
m(){return BM(1)}
},
{
n:"Bayer 4x4",
m(){return BM(2)}
},
{
n:"Bayer 8x8",
m(){return BM(3)}
},
{
n:"Bayer 16x16",
m(){return BM(4)}
},
{
n:"Matrix 2x2 1/256",
d:256,
m(){return this.a.map(j=>j.map(i=>i))},
a:[[51,206],
[153,102]]
},
{
n:"Matrix 3x3 1/256",
d:256,
m(){return this.a.map(j=>j.map(i=>i))},
a:[[181,231,131],
[50,25,100],
[156,75,206]]
},
{
n:"Matrix 3x3 1/9",
d:9,
m(){return this.a.map(j=>j.map(i=>i))},
a:[[0,5,2],
[3,8,7],
[6,1,4]]
},
{
n:"Matrix 5x3 1/15",
d:15,
m(){return this.a.map(j=>j.map(i=>i))},
a:[[0,12,7,3,9],
[14,8,1,15,11],
[6,4,10,13,2]]
},
{
n:"Matrix 4x4 1/16",
d:16,
m(){return this.a.map(j=>j.map(i=>i))},
a:[[1,9,3,11],
[13,5,15,7],
[4,12,2,10],
[16,8,14,6]]
},
{
n:"Matrix 4x4 1/256",
d:256,
m(){return this.a.map(j=>j.map(i=>i))},
a:[[15,195,60,240],
[135,75,180,120],
[45,225,30,210],
[165,105,150,90]]
},
{
n:"Matrix 8x8 1/256",
d:256,
m(){return this.a.map(j=>j.map(i=>i))},
a:[[0,128,32,160,8,136,40,168],
[192,64,224,96,200,72,232,104],
[48,176,16,144,56,184,24,152],
[240,112,208,80,248,120,216,88],
[12,140,44,172,4,132,36,164],
[204,76,236,108,196,68,228,100],
[60,188,28,156,52,180,20,148],
[252,124,220,92,244,116,212,84]]
},
{
n:"Matrix 16x16 1/256",
d:256,
m(){return this.a.map(j=>j.map(i=>i))},
a:[[0,191,48,239,12,203,60,251,3,194,51,242,15,206,63,254],
[127,64,175,112,139,76,187,124,130,67,178,115,142,79,190,127],
[32,223,16,207,44,235,28,219,35,226,19,210,47,238,31,222],
[159,96,143,80,171,108,155,92,162,99,146,83,174,111,158,95],
[8,199,56,247,4,195,52,243,11,202,59,250,7,198,55,246],
[135,72,183,120,131,68,179,116,138,75,186,123,134,71,182,119],
[40,231,24,215,36,227,20,211,43,234,27,218,39,230,23,214],
[167,104,151,88,163,100,147,84,170,107,154,91,166,103,150,87],
[2,193,50,241,14,205,62,253,1,192,49,240,13,204,61,252],
[129,66,177,114,141,78,189,126,128,65,176,113,140,77,188,125],
[34,225,18,209,46,237,30,221,33,224,17,208,45,236,29,220],
[161,98,145,82,173,110,157,94,160,97,144,81,172,109,156,93],
[10,201,58,249,6,197,54,245,9,200,57,248,5,196,53,244],
[137,74,185,122,133,70,181,118,136,73,184,121,132,69,180,117],
[42,233,26,217,38,229,22,213,41,232,25,216,37,228,21,212],
[169,106,153,90,165,102,149,86,168,105,152,89,164,101,148,85]]
},
{
n:"Clustered dot 4x4 1/16",
d:16,
m(){return this.a.map(j=>j.map(i=>i))},
a:[[12,5,6,13],
[4,0,1,7],
[11,3,2,8],
[15,10,9,14]]
},
{
n:"Clustered dot 5x3 1/15",
d:15,
m(){return this.a.map(j=>j.map(i=>i))},
a:[[9,3,0,6,12],
[10,4,1,7,13],
[11,5,2,8,14]]
},
{
n:"Clustered dot 5x5 1/25",
d:25,
m(){return this.a.map(j=>j.map(i=>i))},
a:[[20,21,22,23,24],
[19,6,7,8,9],
[18,5,0,1,10],
[17,4,3,2,11],
[16,15,14,13,12]]
},
{
n:"Clustered dot 6x6 1/18",
d:18,
m(){return this.a.map(j=>j.map(i=>i))},
a:[[8,6,7,9,11,10],
[5,0,1,12,17,16],
[4,3,2,13,14,15],
[9,11,10,8,6,8],
[12,17,16,5,0,1],
[13,14,15,4,3,2]]
},
{
n:"Clustered dot 6x6 1/36",
d:36,
m(){return this.a.map(j=>j.map(i=>i))},
a:[[34,29,17,21,30,35],
[28,14,9,16,20,31],
[13,8,4,5,15,19],
[12,3,0,1,10,18],
[27,7,2,6,23,24],
[33,26,11,22,25,32]]
},
{
n:"Clustered dot 6x6 1/36",
d:36,
m(){return this.a.map(j=>j.map(i=>i))},
a:[[35,33,31,30,32,34],
[23,21,19,18,20,22],
[11,9,7,6,8,10],
[5,3,1,0,2,4],
[17,15,13,12,14,16],
[29,27,25,24,26,28]]
},
{
n:"Clustered dot 6x6 1/36",
d:36,
m(){return this.a.map(j=>j.map(i=>i))},
a:[[34,25,21,17,29,33],
[30,13,9,5,12,24],
[18,6,1,0,8,20],
[22,10,2,3,4,16],
[26,14,7,11,15,28],
[35,31,19,23,27,32]]
},
{
n:"Clustered dot 6x6 1/36",
d:36,
m(){return this.a.map(j=>j.map(i=>i))},
a:[[30,22,16,21,33,35],
[24,11,7,9,26,28],
[13,5,0,2,14,19],
[15,3,1,4,12,18],
[27,8,6,10,25,29],
[32,20,17,23,31,34]]
},
{
n:"Clustered dot 8x8 1/32",
d:32,
m(){return this.a.map(j=>j.map(i=>i))},
a:[[13,11,12,15,18,20,19,16],
[4,3,2,9,27,28,29,22],
[5,0,1,10,26,31,30,21],
[8,6,7,14,23,25,24,17],
[18,20,19,16,13,11,12,15],
[27,28,29,22,4,3,2,9],
[26,31,30,21,5,0,1,10],
[23,25,24,17,8,6,7,14]]
},
{
n:"Clustered dot 8x8 1/32",
d:32,
m(){return this.a.map(j=>j.map(i=>i))},
a:[[13,9,5,12,18,22,26,19],
[6,1,0,8,25,30,31,23],
[10,2,3,4,21,29,28,27],
[14,7,11,15,17,24,20,16],
[18,22,26,19,13,9,5,12],
[25,30,31,23,6,1,0,8],
[21,29,28,27,10,2,3,4],
[17,24,20,16,14,7,11,15]]
},
{
n:"Clustered dot 8x8 1/64",
d:64,
m(){return this.a.map(j=>j.map(i=>i))},
a:[[24,10,12,26,35,47,49,37],
[8,0,2,14,45,59,61,51],
[22,6,4,16,43,57,63,53],
[30,20,18,28,33,41,55,39],
[34,46,48,36,25,11,13,27],
[44,58,60,50,9,1,3,15],
[42,56,62,52,23,7,5,17],
[32,40,54,38,31,21,19,29]]
},
{
n:"Clustered dot 8x8 1/64",
d:64,
m(){return this.a.map(j=>j.map(i=>i))},
a:[[3,9,17,27,25,15,7,1],
[11,29,38,46,44,36,23,5],
[19,40,52,58,56,50,34,13],
[31,48,60,63,62,54,42,21],
[30,47,59,63,61,53,41,20],
[18,39,51,57,55,49,33,12],
[10,28,37,45,43,35,22,4],
[2,8,16,26,24,14,6,0]]
},
{
n:"Clustered dot 16x16 1/128",
d:128,
m(){return this.a.map(j=>j.map(i=>i))},
a:[[63,58,50,40,41,51,59,60,64,69,77,87,86,76,68,67],
[57,33,27,18,19,28,34,52,70,94,100,109,108,99,93,75],
[49,26,13,11,12,15,29,44,78,101,114,116,115,112,98,83],
[39,17,4,3,2,9,20,42,87,110,123,124,125,118,107,85],
[38,16,5,0,1,10,21,43,89,111,122,127,126,117,106,84],
[48,25,8,6,7,14,30,45,79,102,119,121,120,113,97,82],
[56,32,24,23,22,31,35,53,71,95,103,104,105,96,92,74],
[62,55,47,37,36,46,54,61,65,72,80,90,91,81,73,66],
[64,69,77,87,86,76,68,67,63,58,50,40,41,51,59,60],
[70,94,100,109,108,99,93,75,57,33,27,18,19,28,34,52],
[78,101,114,116,115,112,98,83,49,26,13,11,12,15,29,44],
[87,110,123,124,125,118,107,85,39,17,4,3,2,9,20,42],
[89,111,122,127,126,117,106,84,38,16,5,0,1,10,21,43],
[79,102,119,121,120,113,97,82,48,25,8,6,7,14,30,45],
[71,95,103,104,105,96,92,74,56,32,24,23,22,31,35,53],
[65,72,80,90,91,81,73,66,62,55,47,37,36,46,54,61]]
}
];
function BDith(m,k){
let a=mB[m].m(),z=0;
const p=iDt.data,w=eW,h=eH,n=a.length,l=a[0].length;
const d=(typeof mB[m].d=="undefined"||!mB[m].d?n*l:mB[m].d);
for(let y=0;y<n;y++){
for(let x=0;x<l;x++){
a[y][x]=a[y][x]/d;
if(a[y][x]>z)z=a[y][x];
}}
for(let y=0;y<n;y++){
for(let x=0;x<l;x++){
a[y][x]-=.5*z;
}}
for(let y=0;y<h;y++){
const r=y%n;
for(let x=0;x<w;x++){
const i=(y*w+x)*4,c=a[r][x%l],v=nC(cmp(255*c*k+p[i]),cmp(255*c*k+p[i+1]),cmp(255*c*k+p[i+2]));
p[i]=v[0];p[i+1]=v[1];p[i+2]=v[2];
}}}
function tSt(e){
const i=e.id.split('-')[2],t=eId('txt-e-'+i);
if(!t.checked)t.checked=true;
mDI();
}
function sCh(e){
const o=eId('o'+e.id);
if(o)o.value=e.value;
}
function tHd(e,s){
const i=e.id.split('-')[2],t=eId(s+'-h-'+i);
t.hidden=!t.hidden;
if(t.hidden){
e.style.setProperty('background-color','white');
e.style.setProperty('color','#3cb4dd');
e.style.setProperty('outline','3px solid #3cb4dd')}
else{
e.style.setProperty('background-color','#3cb4dd');
e.style.setProperty('color','white');
e.style.setProperty('outline','0')}
}
function tVw(e,s){
const i=e.id.split('-')[2],c=(e.dataset.checked?e.dataset.checked.toLowerCase():'')!='true';
e.dataset.checked=c;
if(c){
e.style.setProperty('background-color','white');
e.style.setProperty('color','#e58c34');
e.style.setProperty('outline','3px solid #e58c34')}
else{
e.style.setProperty('background-color','#e58c34');
e.style.setProperty('color','white');
e.style.setProperty('outline','0')}
mDI()
}
function tBC(){
for(const e of oTT.childNodes)
if(e.id.startsWith('pat-txt-')||e.id.startsWith('pat-img-')){
let i=e.id.split('-')[2],u=e.querySelector('[id=lr-u-'+i+']'),n=e.querySelector('[id=lr-n-'+i+']');
if(u)u.disabled=e==oTT.firstChild;if(n)n.disabled=e==oTT.lastChild;
}}
function tUp(e,s){
const i=e.id.split('-')[2],t=eId('pat-'+s+'-'+i);
if(t&&t.previousElementSibling)t.parentNode.insertBefore(t,t.previousElementSibling);
t.querySelector('[id='+s+'-x-'+i+']').focus();
tBC();
mDI();
}
function tDn(e,s){
const i=e.id.split('-')[2],t=eId('pat-'+s+'-'+i);
if(t&&t.nextElementSibling){
t.parentNode.insertBefore(t.nextElementSibling,t);
t.querySelector('[id='+s+'-x-'+i+']').focus();
tBC();
mDI();
}}
function tDl(e,s){
const i=e.id.split('-')[2];
oTT.removeChild(eId('pat-'+s+'-'+i));
tBC();
mDI();
}
function bFD(l){
for(const f of l)aFs.push({n:f.fullName,f:f.family,s:f.style});
let s='';
for(let i=0;i<aFs.length;i++)s+='<option value="'+i+'">'+aFs[i].n+'</option>';
oTF.innerHTML=s;
for(const n of oTT.childNodes)
if(n.id.startsWith('pat-txt-')){
let i=n.id.split('-')[2],e=n.querySelector('[id=txt-sf-'+i+']');
if(e)e.innerHTML=s}
}
async function lFD(){
try{
const l=await window.queryLocalFonts();
bFD(l);
}catch(e){console.error(e.name,e.message)}
}
function bSF(){
if(aFs.length==1)
navigator.permissions.query({name:'local-fonts'}).then((r)=>{if(r.state=="granted"||r.state=="prompt")lFD()})
}
function cId(e,a){
if(e.id)e.id+=a;
if(e.name)e.name+=a;
if(e.tagName&&e.tagName.toLowerCase()=='label'&&e.hasAttribute('for'))e.setAttribute('for',e.getAttribute('for')+a);
for(const n of e.childNodes)cId(n,a);
}
function tAd(){
let nT=oTP.cloneNode(true);
cId(nT,'-'+idC);
oTT.appendChild(nT);
let e=nT.querySelector('[id=txt-in-'+idC+']');
idC++;
tBC();
e.focus();
e.value=oTN.value;
oTN.value='';
mDI();
}
function iAd(){
let nI=oIP.cloneNode(true);
cId(nI,'-'+idC);
oTT.appendChild(nI);
nI.querySelector('[id=img-f-'+idC+']').click();
tBC();
nI.querySelector('[id=img-x-'+idC+']').focus();
idC++;
}
function SP(){
let bs=getComputedStyle(document.querySelector('button[type=button]')),ls=getComputedStyle(document.querySelector('label'));
document.styleSheets[0].insertRule(".fileupload{font-family:"+bs['font-family']+";}",0);
document.styleSheets[0].insertRule(".tab > label {font-family:"+bs['font-family']+";}",0);
document.styleSheets[0].insertRule("summary{font-family:"+bs['font-family']+";}",0);
aFs.push({n:'Default',f:ls['font-family'],s:ls['font-weight']});
eId('out-b'+def.b).checked=true;
oEW.value=def.w;oEW.max=def.mw;oEW.min=def.nw;oEH.value=def.h;oEH.max=def.mh;oEH.min=def.nh;
sCh(oDK);
for(let i=0;i<tE.length;i++){
let e=document.createElement("input"),l=document.createElement("label");
e.type='radio';
e.id='di-e'+i;
e.name='di-e';
e.onchange=function(e){
cE=this.id.substring(4);
oDP.checked=tE[cE].p;
oDR.value=tE[cE].r;sCh(oDR);
oDG.value=tE[cE].g;sCh(oDG);
oDB.value=tE[cE].b;sCh(oDB)}
l.setAttribute('for','di-e'+i);
l.innerHTML=tE[i].n;
if(i)l.style='margin-left:10px;';else e.checked=true;
oEF.appendChild(e);oEF.appendChild(l)
}
eId('di-e'+cE).onchange();
for(let i=0;i<pP.length;i++){
if(pP[i].m!==undefined)pP[i].m();
if(!pP[i].g&&pP[i].g!==0||pP[i].g>=pG.length){
let o=document.createElement("option");
o.value=i;
o.innerHTML=pP[i].n;
if(i==eP)o.selected=true;
oEP.appendChild(o)}
}
for(let j=0;j<pG.length;j++){
let g=document.createElement("optgroup");
g.label=pG[j].n;
for(let i=0;i<pP.length;i++){
if(pP[i].g===j){
let o=document.createElement("option");
o.value=i;
o.innerHTML=pP[i].n;
if(i==eP)o.selected=true;
g.appendChild(o)}
}
oEP.appendChild(g)
}
let o=document.createElement("option");
o.value=0;
o.innerHTML='None';
if(!dD)o.selected=true;
oDM.appendChild(o);
let g=document.createElement("optgroup");
g.label='Floyd-Steinberg Error Diffusion';
for(let i=0;i<mF.length;i++){
let j=i+1;
o=document.createElement("option");
o.value=j;
o.innerHTML=mF[i].n;
if(dD==j)o.selected=true;
g.appendChild(o)
}
oDM.appendChild(g);
g=document.createElement("optgroup");
g.label='Bayer Ordered Matrix';
for(let i=0;i<mB.length;i++){
let j=i+101;
o=document.createElement("option");
o.value=j;
o.innerHTML=mB[i].n;
if(dD==j)o.selected=true;
g.appendChild(o)
}
oDM.appendChild(g);
PlC();
oEW.onchange(false);
oEH.onchange();
}
SP();
</script>
</html>
)==";

