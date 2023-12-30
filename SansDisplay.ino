#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>

#define ScreenWidth 128
#define ScreenHeight 64

Adafruit_SSD1306 display(ScreenWidth,ScreenHeight,&Wire,-1);

// '_a_frm0,200', 46x56px
const unsigned char Frame00 [] PROGMEM = {
	0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xc3, 0xff, 0xff, 
	0x0f, 0xfc, 0xff, 0xc3, 0xff, 0xff, 0x0f, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 
	0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 
	0xfc, 0xf0, 0x3f, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3f, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3f, 0xf0, 
	0x3c, 0xfc, 0xfc, 0xf0, 0x3f, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3c, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 
	0x3c, 0xf0, 0x3c, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 
	0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 
	0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 0x3c, 0xfc, 0xfc, 0xfc, 0xcc, 0xcc, 0xfc, 0xfc, 0xfc, 0xfc, 
	0xcc, 0xcc, 0xfc, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 
	0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x03, 0xfc, 0xff, 0x00, 0x0c, 0xc0, 0x03, 
	0xfc, 0xff, 0x00, 0x0c, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
	0x01, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x04, 0x04, 0x3f, 0xf0, 
	0x00, 0x40, 0x00, 0x00, 0x3f, 0xf0, 0x09, 0x00, 0xc0, 0x00, 0x0f, 0xc0, 0x40, 0x0c, 0xc0, 0x42, 
	0x0f, 0xc0, 0x00, 0x0c, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 
	0xff, 0x00, 0x00, 0x00, 0x83, 0xfc, 0xff, 0x02, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 
	0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 
	0x00, 0x00, 0x03, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 
	0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x00, 0x03, 0x00, 
	0x00, 0x0c, 0xc0, 0x00, 0x03, 0x00, 0x00, 0x0c, 0xf0, 0x00, 0x0f, 0xc0, 0x00, 0x3c, 0xf0, 0x00, 
	0x0f, 0xc0, 0x00, 0x3c, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc
};
// '_a_frm1,200', 46x56px
const unsigned char Frame01 [] PROGMEM = {
	0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xc3, 0xff, 0xff, 
	0x0f, 0xfc, 0xff, 0xc3, 0xff, 0xff, 0x0f, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 
	0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 
	0xfc, 0xf0, 0x3f, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3f, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3f, 0xf0, 
	0x3c, 0xfc, 0xfc, 0xf0, 0x3f, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3c, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 
	0x3c, 0xf0, 0x3c, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 
	0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 
	0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 0x3c, 0xfc, 0xfc, 0xfc, 0xcc, 0xcc, 0xfc, 0xfc, 0xfc, 0xfc, 
	0xcc, 0xcc, 0xfc, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 
	0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x03, 0xfc, 0xff, 0x00, 0x0c, 0xc0, 0x03, 
	0xfc, 0xff, 0x00, 0x0c, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
	0x01, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x04, 0x04, 0x3f, 0xf0, 
	0x00, 0x40, 0x00, 0x00, 0x3f, 0xf0, 0x09, 0x00, 0xc0, 0x00, 0x0f, 0xc0, 0x40, 0x0c, 0xc0, 0x42, 
	0x0f, 0xc0, 0x00, 0x0c, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 
	0xff, 0x00, 0x00, 0x00, 0x83, 0xfc, 0xff, 0x02, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 
	0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 
	0x00, 0x00, 0x03, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 
	0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x00, 0x03, 0x00, 
	0x00, 0x0c, 0xc0, 0x00, 0x03, 0x00, 0x00, 0x0c, 0xf0, 0x00, 0x0f, 0xc0, 0x00, 0x3c, 0xf0, 0x00, 
	0x0f, 0xc0, 0x00, 0x3c, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc
};
// '_a_frm11,200', 46x56px
const unsigned char Frame11 [] PROGMEM = {
	0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xc3, 0xff, 0xff, 
	0x0f, 0xfc, 0xff, 0xc3, 0xff, 0xff, 0x0f, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 
	0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 
	0xfc, 0xf0, 0x3f, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3f, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3f, 0xf0, 
	0x3c, 0xfc, 0xfc, 0xf0, 0x3f, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3c, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 
	0x3c, 0xf0, 0x3c, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 
	0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 
	0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 0x3c, 0xfc, 0xfc, 0xfc, 0xcc, 0xcc, 0xfc, 0xfc, 0xfc, 0xfc, 
	0xcc, 0xcc, 0xfc, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 
	0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x03, 0xfc, 0xff, 0x00, 0x0c, 0xc0, 0x03, 
	0xfc, 0xff, 0x00, 0x0c, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
	0x01, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x04, 0x04, 0x3f, 0xf0, 
	0x00, 0x40, 0x00, 0x00, 0x3f, 0xf0, 0x09, 0x00, 0xc0, 0x00, 0x0f, 0xc0, 0x40, 0x0c, 0xc0, 0x42, 
	0x0f, 0xc0, 0x00, 0x0c, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 
	0xff, 0x00, 0x00, 0x00, 0x83, 0xfc, 0xff, 0x02, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 
	0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 
	0x00, 0x00, 0x03, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 
	0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x00, 0x03, 0x00, 
	0x00, 0x0c, 0xc0, 0x00, 0x03, 0x00, 0x00, 0x0c, 0xf0, 0x00, 0x0f, 0xc0, 0x00, 0x3c, 0xf0, 0x00, 
	0x0f, 0xc0, 0x00, 0x3c, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc
};
// '_a_frm2,200', 46x56px
const unsigned char Frame02 [] PROGMEM = {
	0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xc3, 0xff, 0xff, 
	0x0f, 0xfc, 0xff, 0xc3, 0xff, 0xff, 0x0f, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 
	0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 
	0xfc, 0xf0, 0x3f, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3f, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3f, 0xf0, 
	0x3c, 0xfc, 0xfc, 0xf0, 0x3f, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3c, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 
	0x3c, 0xf0, 0x3c, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 
	0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 
	0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 0x3c, 0xfc, 0xfc, 0xfc, 0xcc, 0xcc, 0xfc, 0xfc, 0xfc, 0xfc, 
	0xcc, 0xcc, 0xfc, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 
	0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x03, 0xfc, 0xff, 0x00, 0x0c, 0xc0, 0x03, 
	0xfc, 0xff, 0x00, 0x0c, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
	0x01, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x04, 0x04, 0x3f, 0xf0, 
	0x00, 0x40, 0x00, 0x00, 0x3f, 0xf0, 0x09, 0x00, 0xc0, 0x00, 0x0f, 0xc0, 0x40, 0x0c, 0xc0, 0x42, 
	0x0f, 0xc0, 0x00, 0x0c, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 
	0xff, 0x00, 0x00, 0x00, 0x83, 0xfc, 0xff, 0x02, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 
	0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 
	0x00, 0x00, 0x03, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 
	0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x00, 0x03, 0x00, 
	0x00, 0x0c, 0xc0, 0x00, 0x03, 0x00, 0x00, 0x0c, 0xf0, 0x00, 0x0f, 0xc0, 0x00, 0x3c, 0xf0, 0x00, 
	0x0f, 0xc0, 0x00, 0x3c, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc
};
// '_a_frm10,200', 46x56px
const unsigned char Frame10 [] PROGMEM = {
	0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xc3, 0xff, 0xff, 
	0x0f, 0xfc, 0xff, 0xc3, 0xff, 0xff, 0x0f, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 
	0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 
	0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3f, 0xf0, 
	0x3c, 0xfc, 0xfc, 0xf0, 0x3f, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3c, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 
	0x3c, 0xf0, 0x3c, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 
	0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 
	0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 0x3c, 0xfc, 0xfc, 0xfc, 0xcc, 0xcc, 0xfc, 0xfc, 0xfc, 0xfc, 
	0xcc, 0xcc, 0xfc, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 
	0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x03, 0xfc, 0xff, 0x00, 0x0c, 0xc0, 0x03, 
	0xfc, 0xff, 0x00, 0x0c, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
	0x01, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x04, 0x04, 0x3f, 0xf0, 
	0x00, 0x40, 0x00, 0x00, 0x3f, 0xf0, 0x09, 0x00, 0xc0, 0x00, 0x0f, 0xc0, 0x40, 0x0c, 0xc0, 0x42, 
	0x0f, 0xc0, 0x00, 0x0c, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 
	0xff, 0x00, 0x00, 0x00, 0x83, 0xfc, 0xff, 0x02, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 
	0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 
	0x00, 0x00, 0x03, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 
	0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x00, 0x03, 0x00, 
	0x00, 0x0c, 0xc0, 0x00, 0x03, 0x00, 0x00, 0x0c, 0xf0, 0x00, 0x0f, 0xc0, 0x00, 0x3c, 0xf0, 0x00, 
	0x0f, 0xc0, 0x00, 0x3c, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc
};
// '_a_frm3,200', 46x56px
const unsigned char Frame03 [] PROGMEM = {
	0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xc3, 0xff, 0xff, 
	0x0f, 0xfc, 0xff, 0xc3, 0xff, 0xff, 0x0f, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 
	0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 
	0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3f, 0xf0, 
	0x3c, 0xfc, 0xfc, 0xf0, 0x3f, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3c, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 
	0x3c, 0xf0, 0x3c, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 
	0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 
	0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 0x3c, 0xfc, 0xfc, 0xfc, 0xcc, 0xcc, 0xfc, 0xfc, 0xfc, 0xfc, 
	0xcc, 0xcc, 0xfc, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 
	0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x03, 0xfc, 0xff, 0x00, 0x0c, 0xc0, 0x03, 
	0xfc, 0xff, 0x00, 0x0c, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
	0x01, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x04, 0x04, 0x3f, 0xf0, 
	0x00, 0x40, 0x00, 0x00, 0x3f, 0xf0, 0x09, 0x00, 0xc0, 0x00, 0x0f, 0xc0, 0x40, 0x0c, 0xc0, 0x42, 
	0x0f, 0xc0, 0x00, 0x0c, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 
	0xff, 0x00, 0x00, 0x00, 0x83, 0xfc, 0xff, 0x02, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 
	0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 
	0x00, 0x00, 0x03, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 
	0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x00, 0x03, 0x00, 
	0x00, 0x0c, 0xc0, 0x00, 0x03, 0x00, 0x00, 0x0c, 0xf0, 0x00, 0x0f, 0xc0, 0x00, 0x3c, 0xf0, 0x00, 
	0x0f, 0xc0, 0x00, 0x3c, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc
};
// '_a_frm5,200', 46x56px
const unsigned char Frame05 [] PROGMEM = {
	0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xc3, 0xff, 0xff, 
	0x0f, 0xfc, 0xff, 0xc3, 0xff, 0xff, 0x0f, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 
	0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 
	0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xf0, 
	0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3c, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 
	0x3c, 0xf0, 0x3c, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 
	0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 
	0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 0x3c, 0xfc, 0xfc, 0xfc, 0xcc, 0xcc, 0xfc, 0xfc, 0xfc, 0xfc, 
	0xcc, 0xcc, 0xfc, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 
	0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x03, 0xfc, 0xff, 0x00, 0x0c, 0xc0, 0x03, 
	0xfc, 0xff, 0x00, 0x0c, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
	0x01, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x04, 0x04, 0x3f, 0xf0, 
	0x00, 0x40, 0x00, 0x00, 0x3f, 0xf0, 0x09, 0x00, 0xc0, 0x00, 0x0f, 0xc0, 0x40, 0x0c, 0xc0, 0x42, 
	0x0f, 0xc0, 0x00, 0x0c, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 
	0xff, 0x00, 0x00, 0x00, 0x83, 0xfc, 0xff, 0x02, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 
	0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 
	0x00, 0x00, 0x03, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 
	0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x00, 0x03, 0x00, 
	0x00, 0x0c, 0xc0, 0x00, 0x03, 0x00, 0x00, 0x0c, 0xf0, 0x00, 0x0f, 0xc0, 0x00, 0x3c, 0xf0, 0x00, 
	0x0f, 0xc0, 0x00, 0x3c, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc
};
// '_a_frm4,200', 46x56px
const unsigned char Frame04 [] PROGMEM = {
	0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xc3, 0xff, 0xff, 
	0x0f, 0xfc, 0xff, 0xc3, 0xff, 0xff, 0x0f, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 
	0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 
	0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xf0, 
	0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3c, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 
	0x3c, 0xf0, 0x3c, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 
	0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 
	0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 0x3c, 0xfc, 0xfc, 0xfc, 0xcc, 0xcc, 0xfc, 0xfc, 0xfc, 0xfc, 
	0xcc, 0xcc, 0xfc, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 
	0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x03, 0xfc, 0xff, 0x00, 0x0c, 0xc0, 0x03, 
	0xfc, 0xff, 0x00, 0x0c, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
	0x01, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x04, 0x04, 0x3f, 0xf0, 
	0x00, 0x40, 0x00, 0x00, 0x3f, 0xf0, 0x09, 0x00, 0xc0, 0x00, 0x0f, 0xc0, 0x40, 0x0c, 0xc0, 0x42, 
	0x0f, 0xc0, 0x00, 0x0c, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 
	0xff, 0x00, 0x00, 0x00, 0x83, 0xfc, 0xff, 0x02, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 
	0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 
	0x00, 0x00, 0x03, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 
	0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x00, 0x03, 0x00, 
	0x00, 0x0c, 0xc0, 0x00, 0x03, 0x00, 0x00, 0x0c, 0xf0, 0x00, 0x0f, 0xc0, 0x00, 0x3c, 0xf0, 0x00, 
	0x0f, 0xc0, 0x00, 0x3c, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc
};
// '_a_frm6,200', 46x56px
const unsigned char Frame06 [] PROGMEM = {
	0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xc3, 0xff, 0xff, 
	0x0f, 0xfc, 0xff, 0xc3, 0xff, 0xff, 0x0f, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 
	0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 
	0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xf0, 
	0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3c, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 
	0x3c, 0xf0, 0x3c, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 
	0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 
	0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 0x3c, 0xfc, 0xfc, 0xfc, 0xcc, 0xcc, 0xfc, 0xfc, 0xfc, 0xfc, 
	0xcc, 0xcc, 0xfc, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 
	0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x03, 0xfc, 0xff, 0x00, 0x0c, 0xc0, 0x03, 
	0xfc, 0xff, 0x00, 0x0c, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
	0x01, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x04, 0x04, 0x3f, 0xf0, 
	0x00, 0x40, 0x00, 0x00, 0x3f, 0xf0, 0x09, 0x00, 0xc0, 0x00, 0x0f, 0xc0, 0x40, 0x0c, 0xc0, 0x42, 
	0x0f, 0xc0, 0x00, 0x0c, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 
	0xff, 0x00, 0x00, 0x00, 0x83, 0xfc, 0xff, 0x02, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 
	0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 
	0x00, 0x00, 0x03, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 
	0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x00, 0x03, 0x00, 
	0x00, 0x0c, 0xc0, 0x00, 0x03, 0x00, 0x00, 0x0c, 0xf0, 0x00, 0x0f, 0xc0, 0x00, 0x3c, 0xf0, 0x00, 
	0x0f, 0xc0, 0x00, 0x3c, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc
};
// '_a_frm7,200', 46x56px
const unsigned char Frame07 [] PROGMEM = {
	0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xc3, 0xff, 0xff, 
	0x0f, 0xfc, 0xff, 0xc3, 0xff, 0xff, 0x0f, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 
	0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 
	0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xf0, 
	0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3c, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 
	0x3c, 0xf0, 0x3c, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 
	0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 
	0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 0x3c, 0xfc, 0xfc, 0xfc, 0xcc, 0xcc, 0xfc, 0xfc, 0xfc, 0xfc, 
	0xcc, 0xcc, 0xfc, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 
	0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x03, 0xfc, 0xff, 0x00, 0x0c, 0xc0, 0x03, 
	0xfc, 0xff, 0x00, 0x0c, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
	0x01, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x04, 0x04, 0x3f, 0xf0, 
	0x00, 0x40, 0x00, 0x00, 0x3f, 0xf0, 0x09, 0x00, 0xc0, 0x00, 0x0f, 0xc0, 0x40, 0x0c, 0xc0, 0x42, 
	0x0f, 0xc0, 0x00, 0x0c, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 
	0xff, 0x00, 0x00, 0x00, 0x83, 0xfc, 0xff, 0x02, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 
	0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 
	0x00, 0x00, 0x03, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 
	0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x00, 0x03, 0x00, 
	0x00, 0x0c, 0xc0, 0x00, 0x03, 0x00, 0x00, 0x0c, 0xf0, 0x00, 0x0f, 0xc0, 0x00, 0x3c, 0xf0, 0x00, 
	0x0f, 0xc0, 0x00, 0x3c, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc
};
// '_a_frm8,200', 46x56px
const unsigned char Frame08 [] PROGMEM = {
	0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xc3, 0xff, 0xff, 
	0x0f, 0xfc, 0xff, 0xc3, 0xff, 0xff, 0x0f, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 
	0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 
	0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xf0, 
	0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3c, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 
	0x3c, 0xf0, 0x3c, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 
	0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 
	0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 0x3c, 0xfc, 0xfc, 0xfc, 0xcc, 0xcc, 0xfc, 0xfc, 0xfc, 0xfc, 
	0xcc, 0xcc, 0xfc, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 
	0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x03, 0xfc, 0xff, 0x00, 0x0c, 0xc0, 0x03, 
	0xfc, 0xff, 0x00, 0x0c, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
	0x01, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x04, 0x04, 0x3f, 0xf0, 
	0x00, 0x40, 0x00, 0x00, 0x3f, 0xf0, 0x09, 0x00, 0xc0, 0x00, 0x0f, 0xc0, 0x40, 0x0c, 0xc0, 0x42, 
	0x0f, 0xc0, 0x00, 0x0c, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 
	0xff, 0x00, 0x00, 0x00, 0x83, 0xfc, 0xff, 0x02, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 
	0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 
	0x00, 0x00, 0x03, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 
	0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x00, 0x03, 0x00, 
	0x00, 0x0c, 0xc0, 0x00, 0x03, 0x00, 0x00, 0x0c, 0xf0, 0x00, 0x0f, 0xc0, 0x00, 0x3c, 0xf0, 0x00, 
	0x0f, 0xc0, 0x00, 0x3c, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc
};
// '_a_frm9,200', 46x56px
const unsigned char Frame09 [] PROGMEM = {
	0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xc3, 0xff, 0xff, 
	0x0f, 0xfc, 0xff, 0xc3, 0xff, 0xff, 0x0f, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 
	0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xff, 0xf3, 0xfc, 
	0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xf0, 
	0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 0x3c, 0xf0, 0x3c, 0xfc, 0xfc, 0xf0, 
	0x3c, 0xf0, 0x3c, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 0xff, 0x3f, 0xf0, 0x3f, 0xf3, 0xfc, 
	0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf3, 0xff, 0xff, 0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 
	0x3c, 0xfc, 0xfc, 0xf0, 0x00, 0x00, 0x3c, 0xfc, 0xfc, 0xfc, 0xcc, 0xcc, 0xfc, 0xfc, 0xfc, 0xfc, 
	0xcc, 0xcc, 0xfc, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 0xff, 0x0f, 0x00, 0x03, 0xc3, 0xfc, 
	0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xfc, 0x00, 0xff, 0xfc, 0x00, 0xfc, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x03, 0xfc, 0xff, 0x00, 0x0c, 0xc0, 0x03, 
	0xfc, 0xff, 0x00, 0x0c, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
	0x01, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x04, 0x04, 0x3f, 0xf0, 
	0x00, 0x40, 0x00, 0x00, 0x3f, 0xf0, 0x09, 0x00, 0xc0, 0x00, 0x0f, 0xc0, 0x40, 0x0c, 0xc0, 0x42, 
	0x0f, 0xc0, 0x00, 0x0c, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 0xfc, 0x00, 0x3f, 0xf0, 0x00, 0xfc, 
	0xff, 0x00, 0x00, 0x00, 0x83, 0xfc, 0xff, 0x02, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 
	0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0x00, 
	0x00, 0x00, 0x03, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xfc, 
	0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0, 0x00, 0x03, 0x00, 
	0x00, 0x0c, 0xc0, 0x00, 0x03, 0x00, 0x00, 0x0c, 0xf0, 0x00, 0x0f, 0xc0, 0x00, 0x3c, 0xf0, 0x00, 
	0x0f, 0xc0, 0x00, 0x3c, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc, 0xfc, 0x00, 0x03, 0x00, 0x00, 0xfc
};

const unsigned char Skull01 [] PROGMEM = {
	0xff, 0xfc, 0x00, 0xff, 0xfc, 0xff, 0xfc, 0x00, 0xff, 0xfc, 0xff, 0xfc, 0xfc, 0xff, 0xfc, 0xff, 
	0xfc, 0xfc, 0xff, 0xfc, 0xf0, 0xf0, 0xfc, 0x3c, 0x3c, 0xf0, 0xf0, 0xfc, 0x3c, 0x3c, 0xcc, 0xc3, 
	0xff, 0x0c, 0xcc, 0xcc, 0xc3, 0xff, 0x0c, 0xcc, 0xcc, 0x0f, 0xff, 0xc0, 0xcc, 0xcc, 0x0f, 0xff, 
	0xc0, 0xcc, 0xcc, 0x3f, 0xff, 0xf0, 0xcc, 0xcc, 0x3f, 0xff, 0xf0, 0xcc, 0x3f, 0xff, 0xcf, 0xff, 
	0xf0, 0x3f, 0xff, 0xcf, 0xff, 0xf0, 0x3f, 0xff, 0xcf, 0xff, 0xf0, 0x3f, 0xff, 0xcf, 0xff, 0xf0, 
	0x3f, 0xff, 0xcf, 0xff, 0xf0, 0x3f, 0xff, 0xcf, 0xff, 0xf0, 0xcf, 0x03, 0xcf, 0x03, 0xcc, 0xcf, 
	0x03, 0xcf, 0x03, 0xcc, 0xcf, 0x03, 0xcf, 0x03, 0xcc, 0xcf, 0x03, 0xcf, 0x03, 0xcc, 0xf3, 0x0c, 
	0xcc, 0xc3, 0x3c, 0xf3, 0x0c, 0xcc, 0xc3, 0x3c, 0xcc, 0xc0, 0xcc, 0x0c, 0xcc, 0xcc, 0xc0, 0xcc, 
	0x0c, 0xcc, 0xcc, 0xff, 0xcf, 0xfc, 0xcc, 0xcc, 0xff, 0xcf, 0xfc, 0xcc, 0xcf, 0x3f, 0x03, 0xf3, 
	0xcc, 0xcf, 0x3f, 0x03, 0xf3, 0xcc, 0xf3, 0xcf, 0x03, 0xcf, 0x3c, 0xf3, 0xcf, 0x03, 0xcf, 0x3c, 
	0xfc, 0xf3, 0x03, 0x3c, 0xfc, 0xfc, 0xf3, 0x03, 0x3c, 0xfc, 0xfc, 0xf3, 0xcf, 0x3c, 0xfc, 0xfc, 
	0xf3, 0xcf, 0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xfc, 0xfc, 0xfc, 0xff, 0xff, 0xfc, 0xfc, 0xff, 0x3f, 
	0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xf3, 0xfc, 0xff, 0xcf, 0x33, 0xcf, 0xfc, 0xff, 0xcf, 0x33, 
	0xcf, 0xfc, 0xff, 0xcf, 0x03, 0xcf, 0xfc, 0xff, 0xcf, 0x03, 0xcf, 0xfc, 0xff, 0xf3, 0xcf, 0x3f, 
	0xfc, 0xff, 0xf3, 0xcf, 0x3f, 0xfc, 0xff, 0xf3, 0xff, 0x3f, 0xfc, 0xff, 0xf3, 0xff, 0x3f, 0xfc, 
	0xff, 0xfc, 0xfc, 0xff, 0xfc, 0xff, 0xfc, 0xfc, 0xff, 0xfc, 0xff, 0xff, 0x03, 0xff, 0xfc, 0xff, 
	0xff, 0x03, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 
	0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xfc
};

const unsigned char Skull02 [] PROGMEM = {
	0xff, 0xfc, 0x00, 0xff, 0xfc, 0xff, 0xfc, 0x00, 0xff, 0xfc, 0xff, 0xfc, 0xfc, 0xff, 0xfc, 0xff, 
	0xfc, 0xfc, 0xff, 0xfc, 0xf0, 0xf0, 0xfc, 0x3c, 0x3c, 0xf0, 0xf0, 0xfc, 0x3c, 0x3c, 0xcc, 0xc3, 
	0xff, 0x0c, 0xcc, 0xcc, 0xc3, 0xff, 0x0c, 0xcc, 0xcc, 0x0f, 0xff, 0xc0, 0xcc, 0xcc, 0x0f, 0xff, 
	0xc0, 0xcc, 0xcc, 0x3f, 0xff, 0xf0, 0xcc, 0xcc, 0x3f, 0xff, 0xf0, 0xcc, 0x3f, 0xff, 0xcf, 0xff, 
	0xf0, 0x3f, 0xff, 0xcf, 0xff, 0xf0, 0x3f, 0xff, 0xcf, 0xff, 0xf0, 0x3f, 0xff, 0xcf, 0xff, 0xf0, 
	0x3f, 0xff, 0xcf, 0xff, 0xf0, 0x3f, 0xff, 0xcf, 0xff, 0xf0, 0xcf, 0x03, 0xcf, 0x03, 0xcc, 0xcf, 
	0x03, 0xcf, 0x03, 0xcc, 0xcf, 0x03, 0xcf, 0x03, 0xcc, 0xcf, 0x03, 0xcf, 0x03, 0xcc, 0xf3, 0x0c, 
	0xcc, 0xc3, 0x3c, 0xf3, 0x0c, 0xcc, 0xc3, 0x3c, 0xcc, 0xc0, 0xcc, 0x0c, 0xcc, 0xcc, 0xc0, 0xcc, 
	0x0c, 0xcc, 0xcc, 0xff, 0xcf, 0xfc, 0xcc, 0xcc, 0xff, 0xcf, 0xfc, 0xcc, 0xcf, 0x3f, 0x03, 0xf3, 
	0xcc, 0xcf, 0x3f, 0x03, 0xf3, 0xcc, 0xf3, 0xcf, 0x03, 0xcf, 0x3c, 0xf3, 0xcf, 0x03, 0xcf, 0x3c, 
	0xfc, 0xf3, 0x03, 0x3c, 0xfc, 0xfc, 0xf3, 0x03, 0x3c, 0xfc, 0xfc, 0xf3, 0xcf, 0x3c, 0xfc, 0xfc, 
	0xf3, 0xcf, 0x3c, 0xfc, 0xfc, 0xff, 0xff, 0xfc, 0xfc, 0xfc, 0xff, 0xff, 0xfc, 0xfc, 0xff, 0x3f, 
	0xff, 0xf3, 0xfc, 0xff, 0x3f, 0xff, 0xf3, 0xfc, 0xff, 0xcf, 0x33, 0xcf, 0xfc, 0xff, 0xcf, 0x33, 
	0xcf, 0xfc, 0xff, 0xcf, 0x03, 0xcf, 0xfc, 0xff, 0xcf, 0x03, 0xcf, 0xfc, 0xff, 0xf3, 0xcf, 0x3f, 
	0xfc, 0xff, 0xf3, 0xcf, 0x3f, 0xfc, 0xff, 0xf3, 0xff, 0x3f, 0xfc, 0xff, 0xf3, 0xff, 0x3f, 0xfc, 
	0xff, 0xfc, 0xfc, 0xff, 0xfc, 0xff, 0xfc, 0xfc, 0xff, 0xfc, 0xff, 0xff, 0x03, 0xff, 0xfc, 0xff, 
	0xff, 0x03, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 
	0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xfc
};

const unsigned char TitleFrame [] PROGMEM = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0xfc, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xfc, 0xfc, 0xff, 
	0xff, 0xfc, 0x00, 0x00, 0x0c, 0xc0, 0xcc, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x0c, 0xc0, 0xcc, 0xff, 
	0xff, 0xfc, 0xcc, 0xfc, 0x0c, 0xfc, 0xf0, 0xff, 0xff, 0xfc, 0xcc, 0xfc, 0x0c, 0xfc, 0xf0, 0xff, 
	0xff, 0xfc, 0xcc, 0xcc, 0xcc, 0xc0, 0xcc, 0xff, 0xff, 0xfc, 0xcc, 0xcc, 0xcc, 0xc0, 0xcc, 0xff, 
	0xff, 0xfc, 0xfc, 0xcc, 0xfc, 0xfc, 0xcc, 0xff, 0xff, 0xfc, 0xfc, 0xcc, 0xfc, 0xfc, 0xcc, 0xff, 
	0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
	0xff, 0xfc, 0x00, 0x30, 0x00, 0x00, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x30, 0x00, 0x00, 0xff, 0xff, 
	0xff, 0xfc, 0xfc, 0xcc, 0xc0, 0xfc, 0xff, 0xff, 0xff, 0xfc, 0xfc, 0xcc, 0xc0, 0xfc, 0xff, 0xff, 
	0xff, 0xfc, 0x30, 0xfc, 0xc0, 0xc0, 0xff, 0xff, 0xff, 0xfc, 0x30, 0xfc, 0xc0, 0xc0, 0xff, 0xff, 
	0xff, 0xfc, 0x30, 0xcc, 0xc0, 0xfc, 0xff, 0xff, 0xff, 0xfc, 0x30, 0xcc, 0xc0, 0xfc, 0xff, 0xff, 
	0xff, 0xfc, 0x00, 0x00, 0xfc, 0xc0, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0xfc, 0xc0, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xfc, 0x00, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0xfc, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

const unsigned char* AllFrame[12] = {
	Frame00,
	Frame01,
	Frame02,
	Frame03,
	Frame04,
	Frame05,
	Frame06,
  Frame07,
	Frame09,
	Frame10,
	Frame11,
};

void setup() {
  // put your setup code here, to run once:
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

  display.clearDisplay();
  display.drawBitmap(32,4,TitleFrame,64,64,1);
  display.display();
  delay(5000);
  display.clearDisplay();
}
int FrameNumber = 0;
void loop() {
  // put your main code here, to run repeatedly:
  display.clearDisplay();
  display.drawBitmap(41,4,AllFrame[FrameNumber],46,56,1);
  display.drawBitmap(3,4,Skull01,38,56,1);
  display.drawBitmap(87,4,Skull02,38,56,1);
  display.display();
  FrameNumber = (FrameNumber + 1) % 11 ;
  delay(100);
  display.clearDisplay();

/*  display.drawBitmap(41,0,Frame00,46,56,1);
  display.display();
  delay(200);
  display.clearDisplay();

  display.drawBitmap(41,0,Frame01,46,56,1);
  display.display();
  delay(200);
  display.clearDisplay();

  display.drawBitmap(41,0,Frame02,46,56,1);
  display.display();
  delay(200);
  display.clearDisplay();

  display.drawBitmap(41,0,Frame03,46,56,1);
  display.display();
  delay(200);
  display.clearDisplay();

  display.drawBitmap(41,0,Frame04,46,56,1);
  display.display();
  delay(200);
  display.clearDisplay();

  display.drawBitmap(41,0,Frame05,46,56,1);
  display.display();
  delay(200);
  display.clearDisplay();

  display.drawBitmap(41,0,Frame06,46,56,1);
  display.display();
  delay(200);
  display.clearDisplay();

  display.drawBitmap(41,0,Frame07,46,56,1);
  display.display();
  delay(200);
  display.clearDisplay();

  display.drawBitmap(41,0,Frame08,46,56,1);
  display.display();
  delay(200);
  display.clearDisplay();

  display.drawBitmap(41,0,Frame09,46,56,1);
  display.display();
  delay(200);
  display.clearDisplay();

  display.drawBitmap(41,0,Frame10,46,56,1);
  display.display();
  delay(200);
  display.clearDisplay();

  display.drawBitmap(41,0,Frame11,46,56,1);
  display.display();
  delay(200);
  display.clearDisplay();
*/
}
