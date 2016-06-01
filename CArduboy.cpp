#include "CArduboy.h"

/// font stuff
#if TINYFONT == 0
// 5x7 Font
#define FONTWIDTH  5
#define FONTHEIGHT 7
const static unsigned char PROGMEM font[] = {
0x00,0x00,0x00,0x00,0x00,0x3E,0x5B,0x4F,0x5B,0x3E,0x3E,0x6B,0x4F,0x6B,0x3E,
0x1C,0x3E,0x7C,0x3E,0x1C,0x18,0x3C,0x7E,0x3C,0x18,0x1C,0x57,0x7D,0x57,0x1C,
0x1C,0x5E,0x7F,0x5E,0x1C,0x00,0x18,0x3C,0x18,0x00,0xFF,0xE7,0xC3,0xE7,0xFF,
0x00,0x18,0x24,0x18,0x00,0xFF,0xE7,0xDB,0xE7,0xFF,0x30,0x48,0x3A,0x06,0x0E,
0x26,0x29,0x79,0x29,0x26,0x40,0x7F,0x05,0x05,0x07,0x40,0x7F,0x05,0x25,0x3F,
0x5A,0x3C,0xE7,0x3C,0x5A,0x7F,0x3E,0x1C,0x1C,0x08,0x08,0x1C,0x1C,0x3E,0x7F,
0x14,0x22,0x7F,0x22,0x14,0x5F,0x5F,0x00,0x5F,0x5F,0x06,0x09,0x7F,0x01,0x7F,
0x00,0x66,0x89,0x95,0x6A,0x60,0x60,0x60,0x60,0x60,0x94,0xA2,0xFF,0xA2,0x94,
0x08,0x04,0x7E,0x04,0x08,0x10,0x20,0x7E,0x20,0x10,0x08,0x08,0x2A,0x1C,0x08,
0x08,0x1C,0x2A,0x08,0x08,0x1E,0x10,0x10,0x10,0x10,0x0C,0x1E,0x0C,0x1E,0x0C,
0x30,0x38,0x3E,0x38,0x30,0x06,0x0E,0x3E,0x0E,0x06,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x5F,0x00,0x00,0x00,0x07,0x00,0x07,0x00,0x14,0x7F,0x14,0x7F,0x14,
0x24,0x2A,0x7F,0x2A,0x12,0x23,0x13,0x08,0x64,0x62,0x36,0x49,0x56,0x20,0x50,
0x00,0x08,0x07,0x03,0x00,0x00,0x1C,0x22,0x41,0x00,0x00,0x41,0x22,0x1C,0x00,
0x2A,0x1C,0x7F,0x1C,0x2A,0x08,0x08,0x3E,0x08,0x08,0x00,0x80,0x70,0x30,0x00,
0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x60,0x60,0x00,0x20,0x10,0x08,0x04,0x02,
0x3E,0x51,0x49,0x45,0x3E,0x00,0x42,0x7F,0x40,0x00,0x72,0x49,0x49,0x49,0x46,
0x21,0x41,0x49,0x4D,0x33,0x18,0x14,0x12,0x7F,0x10,0x27,0x45,0x45,0x45,0x39,
0x3C,0x4A,0x49,0x49,0x31,0x41,0x21,0x11,0x09,0x07,0x36,0x49,0x49,0x49,0x36,
0x46,0x49,0x49,0x29,0x1E,0x00,0x00,0x14,0x00,0x00,0x00,0x40,0x34,0x00,0x00,
0x00,0x08,0x14,0x22,0x41,0x14,0x14,0x14,0x14,0x14,0x00,0x41,0x22,0x14,0x08,
0x02,0x01,0x59,0x09,0x06,0x3E,0x41,0x5D,0x59,0x4E,0x7C,0x12,0x11,0x12,0x7C,
0x7F,0x49,0x49,0x49,0x36,0x3E,0x41,0x41,0x41,0x22,0x7F,0x41,0x41,0x41,0x3E,
0x7F,0x49,0x49,0x49,0x41,0x7F,0x09,0x09,0x09,0x01,0x3E,0x41,0x41,0x51,0x73,
0x7F,0x08,0x08,0x08,0x7F,0x00,0x41,0x7F,0x41,0x00,0x20,0x40,0x41,0x3F,0x01,
0x7F,0x08,0x14,0x22,0x41,0x7F,0x40,0x40,0x40,0x40,0x7F,0x02,0x1C,0x02,0x7F,
0x7F,0x04,0x08,0x10,0x7F,0x3E,0x41,0x41,0x41,0x3E,0x7F,0x09,0x09,0x09,0x06,
0x3E,0x41,0x51,0x21,0x5E,0x7F,0x09,0x19,0x29,0x46,0x26,0x49,0x49,0x49,0x32,
0x03,0x01,0x7F,0x01,0x03,0x3F,0x40,0x40,0x40,0x3F,0x1F,0x20,0x40,0x20,0x1F,
0x3F,0x40,0x38,0x40,0x3F,0x63,0x14,0x08,0x14,0x63,0x03,0x04,0x78,0x04,0x03,
0x61,0x59,0x49,0x4D,0x43,0x00,0x7F,0x41,0x41,0x41,0x02,0x04,0x08,0x10,0x20,
0x00,0x41,0x41,0x41,0x7F,0x04,0x02,0x01,0x02,0x04,0x40,0x40,0x40,0x40,0x40,
0x00,0x03,0x07,0x08,0x00,0x20,0x54,0x54,0x78,0x40,0x7F,0x28,0x44,0x44,0x38,
0x38,0x44,0x44,0x44,0x28,0x38,0x44,0x44,0x28,0x7F,0x38,0x54,0x54,0x54,0x18,
0x00,0x08,0x7E,0x09,0x02,0x18,0xA4,0xA4,0x9C,0x78,0x7F,0x08,0x04,0x04,0x78,
0x00,0x44,0x7D,0x40,0x00,0x20,0x40,0x40,0x3D,0x00,0x7F,0x10,0x28,0x44,0x00,
0x00,0x41,0x7F,0x40,0x00,0x7C,0x04,0x78,0x04,0x78,0x7C,0x08,0x04,0x04,0x78,
0x38,0x44,0x44,0x44,0x38,0xFC,0x18,0x24,0x24,0x18,0x18,0x24,0x24,0x18,0xFC,
0x7C,0x08,0x04,0x04,0x08,0x48,0x54,0x54,0x54,0x24,0x04,0x04,0x3F,0x44,0x24,
0x3C,0x40,0x40,0x20,0x7C,0x1C,0x20,0x40,0x20,0x1C,0x3C,0x40,0x30,0x40,0x3C,
0x44,0x28,0x10,0x28,0x44,0x4C,0x90,0x90,0x90,0x7C,0x44,0x64,0x54,0x4C,0x44,
0x00,0x08,0x36,0x41,0x00,0x00,0x00,0x77,0x00,0x00,0x00,0x41,0x36,0x08,0x00,
0x02,0x01,0x02,0x04,0x02,0x3C,0x26,0x23,0x26,0x3C,0x1E,0xA1,0xA1,0x61,0x12,
0x3A,0x40,0x40,0x20,0x7A,0x38,0x54,0x54,0x55,0x59,0x21,0x55,0x55,0x79,0x41,
0x21,0x54,0x54,0x78,0x41,0x21,0x55,0x54,0x78,0x40,0x20,0x54,0x55,0x79,0x40,
0x0C,0x1E,0x52,0x72,0x12,0x39,0x55,0x55,0x55,0x59,0x39,0x54,0x54,0x54,0x59,
0x39,0x55,0x54,0x54,0x58,0x00,0x00,0x45,0x7C,0x41,0x00,0x02,0x45,0x7D,0x42,
0x00,0x01,0x45,0x7C,0x40,0xF0,0x29,0x24,0x29,0xF0,0xF0,0x28,0x25,0x28,0xF0,
0x7C,0x54,0x55,0x45,0x00,0x20,0x54,0x54,0x7C,0x54,0x7C,0x0A,0x09,0x7F,0x49,
0x32,0x49,0x49,0x49,0x32,0x32,0x48,0x48,0x48,0x32,0x32,0x4A,0x48,0x48,0x30,
0x3A,0x41,0x41,0x21,0x7A,0x3A,0x42,0x40,0x20,0x78,0x00,0x9D,0xA0,0xA0,0x7D,
0x39,0x44,0x44,0x44,0x39,0x3D,0x40,0x40,0x40,0x3D,0x3C,0x24,0xFF,0x24,0x24,
0x48,0x7E,0x49,0x43,0x66,0x2B,0x2F,0xFC,0x2F,0x2B,0xFF,0x09,0x29,0xF6,0x20,
0xC0,0x88,0x7E,0x09,0x03,0x20,0x54,0x54,0x79,0x41,0x00,0x00,0x44,0x7D,0x41,
0x30,0x48,0x48,0x4A,0x32,0x38,0x40,0x40,0x22,0x7A,0x00,0x7A,0x0A,0x0A,0x72,
0x7D,0x0D,0x19,0x31,0x7D,0x26,0x29,0x29,0x2F,0x28,0x26,0x29,0x29,0x29,0x26,
0x30,0x48,0x4D,0x40,0x20,0x38,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x38,
0x2F,0x10,0xC8,0xAC,0xBA,0x2F,0x10,0x28,0x34,0xFA,0x00,0x00,0x7B,0x00,0x00,
0x08,0x14,0x2A,0x14,0x22,0x22,0x14,0x2A,0x14,0x08,0xAA,0x00,0x55,0x00,0xAA,
0xAA,0x55,0xAA,0x55,0xAA,0x00,0x00,0x00,0xFF,0x00,0x10,0x10,0x10,0xFF,0x00,
0x14,0x14,0x14,0xFF,0x00,0x10,0x10,0xFF,0x00,0xFF,0x10,0x10,0xF0,0x10,0xF0,
0x14,0x14,0x14,0xFC,0x00,0x14,0x14,0xF7,0x00,0xFF,0x00,0x00,0xFF,0x00,0xFF,
0x14,0x14,0xF4,0x04,0xFC,0x14,0x14,0x17,0x10,0x1F,0x10,0x10,0x1F,0x10,0x1F,
0x14,0x14,0x14,0x1F,0x00,0x10,0x10,0x10,0xF0,0x00,0x00,0x00,0x00,0x1F,0x10,
0x10,0x10,0x10,0x1F,0x10,0x10,0x10,0x10,0xF0,0x10,0x00,0x00,0x00,0xFF,0x10,
0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0xFF,0x10,0x00,0x00,0x00,0xFF,0x14,
0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x1F,0x10,0x17,0x00,0x00,0xFC,0x04,0xF4,
0x14,0x14,0x17,0x10,0x17,0x14,0x14,0xF4,0x04,0xF4,0x00,0x00,0xFF,0x00,0xF7,
0x14,0x14,0x14,0x14,0x14,0x14,0x14,0xF7,0x00,0xF7,0x14,0x14,0x14,0x17,0x14,
0x10,0x10,0x1F,0x10,0x1F,0x14,0x14,0x14,0xF4,0x14,0x10,0x10,0xF0,0x10,0xF0,
0x00,0x00,0x1F,0x10,0x1F,0x00,0x00,0x00,0x1F,0x14,0x00,0x00,0x00,0xFC,0x14,
0x00,0x00,0xF0,0x10,0xF0,0x10,0x10,0xFF,0x10,0xFF,0x14,0x14,0x14,0xFF,0x14,
0x10,0x10,0x10,0x1F,0x00,0x00,0x00,0x00,0xF0,0x10,0xFF,0xFF,0xFF,0xFF,0xFF,
0xF0,0xF0,0xF0,0xF0,0xF0,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
0x0F,0x0F,0x0F,0x0F,0x0F,0x38,0x44,0x44,0x38,0x44,0x7C,0x2A,0x2A,0x3E,0x14,
0x7E,0x02,0x02,0x06,0x06,0x02,0x7E,0x02,0x7E,0x02,0x63,0x55,0x49,0x41,0x63,
0x38,0x44,0x44,0x3C,0x04,0x40,0x7E,0x20,0x1E,0x20,0x06,0x02,0x7E,0x02,0x02,
0x99,0xA5,0xE7,0xA5,0x99,0x1C,0x2A,0x49,0x2A,0x1C,0x4C,0x72,0x01,0x72,0x4C,
0x30,0x4A,0x4D,0x4D,0x30,0x30,0x48,0x78,0x48,0x30,0xBC,0x62,0x5A,0x46,0x3D,
0x3E,0x49,0x49,0x49,0x00,0x7E,0x01,0x01,0x01,0x7E,0x2A,0x2A,0x2A,0x2A,0x2A,
0x44,0x44,0x5F,0x44,0x44,0x40,0x51,0x4A,0x44,0x40,0x40,0x44,0x4A,0x51,0x40,
0x00,0x00,0xFF,0x01,0x03,0xE0,0x80,0xFF,0x00,0x00,0x08,0x08,0x6B,0x6B,0x08,
0x36,0x12,0x36,0x24,0x36,0x06,0x0F,0x09,0x0F,0x06,0x00,0x00,0x18,0x18,0x00,
0x00,0x00,0x10,0x10,0x00,0x30,0x40,0xFF,0x01,0x01,0x00,0x1F,0x01,0x01,0x1E,
0x00,0x19,0x1D,0x17,0x12,0x00,0x3C,0x3C,0x3C,0x3C,0x00,0x00,0x00,0x00,0x00
};
#else
// 4x5 Font
#define FONTWIDTH  4
#define FONTHEIGHT 5
const static unsigned char PROGMEM font[] = {
    0x04,0x04,0x04,0x00,0x04,   // <space> !
    0xAA,0xAE,0x0A,0x0E,0x0A,   // " #
    0x6A,0xC2,0xE4,0x68,0xCA,   // 0x %
    0x44,0xE4,0xC0,0xA0,0xE0,   // & '
    0x24,0x42,0x42,0x42,0x24,   // ( )
    0x00,0xA4,0x4E,0xA4,0x00,   // * +
    0x00,0x00,0x0E,0x40,0x80,   // , -
    0x02,0x02,0x04,0x08,0x88,   // . /
    0x4C,0xA4,0xA4,0xA4,0x4E,   // 0 1
    0xCE,0x22,0x44,0x82,0xEE,   // 2 3
    0xAE,0xA8,0xEC,0x22,0x2C,   // 4 5
    0x6E,0x82,0xE4,0xA4,0xE4,   // 6 7
    0xEE,0xAA,0x4E,0xA2,0xEC,   // 8 9
    0x00,0x44,0x00,0x44,0x08,   // : //
    0x20,0x4E,0x80,0x4E,0x20,   // < =
    0x8C,0x42,0x24,0x40,0x84,   // > ?
    0x44,0xAA,0xEE,0x8A,0x6A,   // @ A
    0xEE,0xA8,0xC8,0xA8,0xEE,   // B C
    0xCE,0xA8,0xAC,0xA8,0xCE,   // D E
    0xE6,0x88,0xCA,0x8A,0x8E,   // F G
    0xAE,0xA4,0xE4,0xA4,0xAE,   // H I
    0x2A,0x2A,0x2C,0xAA,0xEA,   // J K
    0x8A,0x8E,0x8E,0x8A,0xEA,   // L M
    0xCE,0xAA,0xAA,0xAA,0xAE,   // N O
    0xEE,0xAA,0xEA,0x8E,0x8E,   // P Q
    0xCE,0xA8,0xCE,0xA2,0xAE,   // R S
    0xEA,0x4A,0x4A,0x4A,0x4E,   // T U
    0xAA,0xAA,0xAE,0xAE,0x4A,   // V W
    0xAA,0xAA,0x4E,0xA4,0xA4,   // X Y
    0xE6,0x24,0x44,0x84,0xE6,   // Z [
    0x86,0x82,0x42,0x22,0x26,   // \ ]
    0x40,0xA0,0x00,0x00,0x0E,   // ^ _
    0x80,0x40,0x0E,0x0A,0x06,   // ` a
    0x00,0x80,0xC6,0xA8,0xC6,   // b c
    0x00,0x24,0x6A,0xAC,0x66,   // d e
    0x00,0x24,0x4A,0x66,0x4C,   // f g
    0x00,0x84,0xC0,0xA4,0xA4,   // h i
    0x40,0x08,0x4A,0x4C,0x8A,   // j k
    0x00,0x40,0x4E,0x4E,0x2A,   // l m
    0x00,0x00,0xCE,0xAA,0xAE,   // n o
    0x00,0x44,0xAA,0xC6,0x82,   // p q
    0x00,0x04,0x28,0x44,0x48,   // r s
    0x00,0x40,0x6A,0x4A,0x26,   // t u
    0x00,0x00,0xAA,0xAE,0x4E,   // v w
    0x00,0x00,0xAA,0x46,0xAC,   // x y
    0x06,0x84,0x48,0x84,0x46,   // z {
    0x0C,0x44,0x42,0x44,0x4C,   // | }
    0x0E,0x2E,0xEE,0x8E,0x0E    // ~ <block>
};
#endif


///audio and tunes start

const byte PROGMEM tune_pin_to_timer_PGM[] = { 3, 1 };
volatile byte *_tunes_timer1_pin_port;
volatile byte _tunes_timer1_pin_mask;
volatile int32_t timer1_toggle_count;
volatile byte *_tunes_timer3_pin_port;
volatile byte _tunes_timer3_pin_mask;
byte _tune_pins[AVAILABLE_TIMERS];
byte _tune_num_chans = 0;
volatile boolean tune_playing; // is the score still playing?
volatile unsigned wait_timer_frequency2;       /* its current frequency */
volatile boolean wait_timer_playing = false;   /* is it currently playing a note? */
volatile boolean tonePlaying = false;
volatile unsigned long wait_toggle_count;      /* countdown score waits */

// pointers to your musical score and your position in said score
volatile const byte *score_start = 0;
volatile const byte *score_cursor = 0;

// Table of midi note frequencies * 2
//   They are times 2 for greater accuracy, yet still fits in a word.
//   Generated from Excel by =ROUND(2*440/32*(2^((x-9)/12)),0) for 0<x<128
// The lowest notes might not work, depending on the Arduino clock frequency
// Ref: http://www.phy.mtu.edu/~suits/notefreqs.html
const uint8_t PROGMEM _midi_byte_note_frequencies[48] = {
16,17,18,19,21,22,23,24,26,28,29,31,33,35,37,39,41,44,46,49,52,55,58,62,65,
69,73,78,82,87,92,98,104,110,117,123,131,139,147,156,165,175,185,196,208,220,
233,247
};
const unsigned int PROGMEM _midi_word_note_frequencies[80] = {
262,277,294,311,330,349,370,392,415,440,466,494,523,554,587,622,659,
698,740,784,831,880,932,988,1047,1109,1175,1245,1319,1397,1480,1568,1661,1760,
1865,1976,2093,2217,2349,2489,2637,2794,2960,3136,3322,3520,3729,3951,4186,
4435,4699,4978,5274,5588,5920,6272,6645,7040,7459,7902,8372,8870,9397,9956,
10548,11175,11840,12544,13290,14080,14917,15804,16744,17740,18795,19912,21096,
22351,23680,25088 };

//// box 1 specification
//int Box::Box::width = 16; 
//int Box::Box::height = 16; 
//int Box::Box::posX = 30;
//int Box::Box::posY = 30;
//const uint8_t Box::Box::bitmap = barrel;
//const uint8_t Box::Box::mask = barrelMask;


/* AUDIO */

bool ArduboyAudio2::audio_enabled = false;

void ArduboyAudio2::on()
{
  power_timer1_enable();
  power_timer3_enable();
  audio_enabled = true;
}

bool ArduboyAudio2::enabled()
{
  return audio_enabled;
}

void ArduboyAudio2::off()
{
  audio_enabled = false;
  power_timer1_disable();
  power_timer3_disable();
}

void ArduboyAudio2::saveOnOff()
{
  EEPROM.write(EEPROM_AUDIO_ON_OFF, audio_enabled);
}

void ArduboyAudio2::begin()
{
  tune_playing = false;
  if (EEPROM.read(EEPROM_AUDIO_ON_OFF))
    on();
}

/* TUNES */

void ArduboyTunes2::initChannel(byte pin)
{
  byte timer_num;

  // we are all out of timers
  if (_tune_num_chans == AVAILABLE_TIMERS)
    return;

  timer_num = pgm_read_byte(tune_pin_to_timer_PGM + _tune_num_chans);
  _tune_pins[_tune_num_chans] = pin;
  _tune_num_chans++;
  pinMode(pin, OUTPUT);
  switch (timer_num) {
    case 1: // 16 bit timer
      TCCR1A = 0;
      TCCR1B = 0;
      bitWrite(TCCR1B, WGM12, 1);
      bitWrite(TCCR1B, CS10, 1);
      _tunes_timer1_pin_port = portOutputRegister(digitalPinToPort(pin));
      _tunes_timer1_pin_mask = digitalPinToBitMask(pin);
      break;
    case 3: // 16 bit timer
      TCCR3A = 0;
      TCCR3B = 0;
      bitWrite(TCCR3B, WGM32, 1);
      bitWrite(TCCR3B, CS30, 1);
      _tunes_timer3_pin_port = portOutputRegister(digitalPinToPort(pin));
      _tunes_timer3_pin_mask = digitalPinToBitMask(pin);
      playNote(0, 60);  /* start and stop channel 0 (timer 3) on middle C so wait/delay works */
      stopNote(0);
      break;
  }
}

void ArduboyTunes2::playNote(byte chan, byte note)
{
  byte timer_num;
  byte prescalar_bits;
  unsigned int frequency2; /* frequency times 2 */
  unsigned long ocr;

  // we can't plan on a channel that does not exist
  if (chan >= _tune_num_chans)
    return;

  // we only have frequencies for 128 notes
  if (note > 127) {
    return;
  }

  timer_num = pgm_read_byte(tune_pin_to_timer_PGM + chan);
  if (note < 48) {
    frequency2 = pgm_read_byte(_midi_byte_note_frequencies + note);
  } else {
    frequency2 = pgm_read_word(_midi_word_note_frequencies + note - 48);
  }

  //******  16-bit timer  *********
  // two choices for the 16 bit timers: ck/1 or ck/64
  ocr = F_CPU / frequency2 - 1;
  prescalar_bits = 0b001;
  if (ocr > 0xffff) {
    ocr = F_CPU / frequency2 / 64 - 1;
    prescalar_bits = 0b011;
  }
  // Set the OCR for the given timer, then turn on the interrupts
  switch (timer_num) {
    case 1:
      TCCR1B = (TCCR1B & 0b11111000) | prescalar_bits;
      OCR1A = ocr;
      bitWrite(TIMSK1, OCIE1A, 1);
      break;
    case 3:
      TCCR3B = (TCCR3B & 0b11111000) | prescalar_bits;
      OCR3A = ocr;
      wait_timer_frequency2 = frequency2;  // for "tune_delay" function
      wait_timer_playing = true;
      bitWrite(TIMSK3, OCIE3A, 1);
      break;
  }
}

void ArduboyTunes2::stopNote(byte chan)
{
  byte timer_num;
  timer_num = pgm_read_byte(tune_pin_to_timer_PGM + chan);
  switch (timer_num) {
    case 1:
      TIMSK1 &= ~(1 << OCIE1A);                 // disable the interrupt
      *_tunes_timer1_pin_port &= ~(_tunes_timer1_pin_mask);   // keep pin low after stop
      break;
    case 3:
      wait_timer_playing = false;
      *_tunes_timer3_pin_port &= ~(_tunes_timer3_pin_mask);   // keep pin low after stop
      break;
  }
}

void ArduboyTunes2::playScore(const byte *score)
{
  score_start = score;
  score_cursor = score_start;
  step();  /* execute initial commands */
  tune_playing = true;  /* release the interrupt routine */
}

void ArduboyTunes2::stopScore (void)
{
  for (uint8_t i = 0; i < _tune_num_chans; i++)
    stopNote(i);
  tune_playing = false;
}

bool ArduboyTunes2::playing()
{
  return tune_playing;
}

/* Do score commands until a "wait" is found, or the score is stopped.
This is called initially from tune_playcore, but then is called
from the interrupt routine when waits expire.
*/
/* if CMD < 0x80, then the other 7 bits and the next byte are a 15-bit big-endian number of msec to wait */
void ArduboyTunes2::step()
{
  byte command, opcode, chan;
  unsigned duration;

  while (1) {
    command = pgm_read_byte(score_cursor++);
    opcode = command & 0xf0;
    chan = command & 0x0f;
    if (opcode == TUNE_OP_STOPNOTE) { /* stop note */
      stopNote(chan);
    }
    else if (opcode == TUNE_OP_PLAYNOTE) { /* play note */
      playNote(chan, pgm_read_byte(score_cursor++));
    }
    else if (opcode == TUNE_OP_RESTART) { /* restart score */
      score_cursor = score_start;
    }
    else if (opcode == TUNE_OP_STOP) { /* stop score */
      tune_playing = false;
      break;
    }
    else if (opcode < 0x80) { /* wait count in msec. */
      duration = ((unsigned)command << 8) | (pgm_read_byte(score_cursor++));
      wait_toggle_count = ((unsigned long) wait_timer_frequency2 * duration + 500) / 1000;
      if (wait_toggle_count == 0) wait_toggle_count = 1;
      break;
    }
  }
}

void ArduboyTunes2::closeChannels(void)
{
  byte timer_num;
  for (uint8_t chan=0; chan < _tune_num_chans; chan++) {
    timer_num = pgm_read_byte(tune_pin_to_timer_PGM + chan);
    switch (timer_num) {
      case 1:
        TIMSK1 &= ~(1 << OCIE1A);
        break;
      case 3:
        TIMSK3 &= ~(1 << OCIE3A);
        break;
    }
    digitalWrite(_tune_pins[chan], 0);
  }
  _tune_num_chans = 0;
  tune_playing = false;
}

void ArduboyTunes2::soundOutput()
{
  if (wait_timer_playing) { // toggle the pin if we're sounding a note
    *_tunes_timer3_pin_port ^= _tunes_timer3_pin_mask;
  }
  if (tune_playing && wait_toggle_count && --wait_toggle_count == 0) {
    // end of a score wait, so execute more score commands
    ArduboyTunes2::step();  // execute commands
  }
}

void ArduboyTunes2::tone(unsigned int frequency, unsigned long duration)
{
  tonePlaying = true;
  uint8_t prescalarbits = 0b001;
  int32_t toggle_count = 0;
  uint32_t ocr = 0;

  // two choices for the 16 bit timers: ck/1 or ck/64
  ocr = F_CPU / frequency / 2 - 1;
  prescalarbits = 0b001;
  if (ocr > 0xffff) {
    ocr = F_CPU / frequency / 2 / 64 - 1;
    prescalarbits = 0b011;
  }
  TCCR1B = (TCCR1B & 0b11111000) | prescalarbits;

  // Calculate the toggle count
  if (duration > 0) {
    toggle_count = 2 * frequency * duration / 1000;
  }
  else {
    toggle_count = -1;
  }
  // Set the OCR for the given timer,
  // set the toggle count,
  // then turn on the interrupts
  OCR1A = ocr;
  timer1_toggle_count = toggle_count;
  bitWrite(TIMSK1, OCIE1A, 1);
}

// TIMER 1
ISR(TIMER1_COMPA_vect)
{
  if (tonePlaying) {
    if (timer1_toggle_count != 0) {
      // toggle the pin
      *_tunes_timer1_pin_port ^= _tunes_timer1_pin_mask;
      if (timer1_toggle_count > 0) timer1_toggle_count--;
    }
    else {
      tonePlaying = false;
      TIMSK1 &= ~(1 << OCIE1A);                 // disable the interrupt
      *_tunes_timer1_pin_port &= ~(_tunes_timer1_pin_mask);   // keep pin low after stop
    }
  }
  else {
    *_tunes_timer1_pin_port ^= _tunes_timer1_pin_mask;  // toggle the pin
  }
}

// TIMER 3
ISR(TIMER3_COMPA_vect)
{
  // Timer 3 is the one assigned first, so we keep it running always
  // and use it to time score waits, whether or not it is playing a note.
  ArduboyTunes2::soundOutput();
}


/// audio and tunes end


///general shit

Arduboy2::Arduboy2() { }

void Arduboy2::start()
{
#if F_CPU == 8000000L
  slowCPU();
#endif

  SPI.begin();
  pinMode(DC, OUTPUT);
  pinMode(CS, OUTPUT);
  pinMode(PIN_LEFT_BUTTON, INPUT_PULLUP);
  pinMode(PIN_RIGHT_BUTTON, INPUT_PULLUP);
  pinMode(PIN_UP_BUTTON, INPUT_PULLUP);
  pinMode(PIN_DOWN_BUTTON, INPUT_PULLUP);
  pinMode(PIN_A_BUTTON, INPUT_PULLUP);
  pinMode(PIN_B_BUTTON, INPUT_PULLUP);
  tunes2.initChannel(PIN_SPEAKER_1);
  tunes2.initChannel(PIN_SPEAKER_2);
  csport = portOutputRegister(digitalPinToPort(CS));
  cspinmask = digitalPinToBitMask(CS);
  dcport = portOutputRegister(digitalPinToPort(DC));
  dcpinmask = digitalPinToBitMask(DC);

  /**
   * Setup reset pin direction (used by both SPI and I2C)
   */
  pinMode(RST, OUTPUT);
  digitalWrite(RST, HIGH);
  delay(1);           // VDD (3.3V) goes high at start, lets just chill for a ms
  digitalWrite(RST, LOW);   // bring reset low
  delay(10);          // wait 10ms
  digitalWrite(RST, HIGH);  // bring out of reset
  bootLCD();

#ifdef SAFE_MODE
  if (pressed(LEFT_BUTTON + UP_BUTTON))
    safeMode();
#endif
  //audio2.setup();
  saveMuchPower();
}

#if F_CPU == 8000000L
// if we're compiling for 8Mhz we need to slow the CPU down because the
// hardware clock on the Arduboy is 16MHz
void Arduboy2::slowCPU()
{
  uint8_t oldSREG = SREG;
  cli();                // suspend interrupts
  CLKPR = _BV(CLKPCE);  // allow reprogramming clock
  CLKPR = 1;            // set clock divisor to 2 (0b0001)
  SREG = oldSREG;       // restore interrupts
}
#endif

void Arduboy2::bootLCD()
{
  LCDCommandMode();
  SPI.transfer(0xAE);  // Display Off
  SPI.transfer(0XD5);  // Set Display Clock Divisor v
  SPI.transfer(0xF0);  //   0x80 is default
  SPI.transfer(0xA8);  // Set Multiplex Ratio v
  SPI.transfer(0x3F);
  SPI.transfer(0xD3);  // Set Display Offset v
  SPI.transfer(0x0);
  SPI.transfer(0x40);  // Set Start Line (0)
  SPI.transfer(0x8D);  // Charge Pump Setting v
  SPI.transfer(0x14);  //   Enable
  // why are we running this next pair twice?
  SPI.transfer(0x20);  // Set Memory Mode v
  SPI.transfer(0x00);  //   Horizontal Addressing
  SPI.transfer(0xA1);  // Set Segment Re-map (A0) | (b0001)
  SPI.transfer(0xC8);  // Set COM Output Scan Direction
  SPI.transfer(0xDA);  // Set COM Pins v
  SPI.transfer(0x12);
  SPI.transfer(0x81);  // Set Contrast v
  SPI.transfer(0xCF);
  SPI.transfer(0xD9);  // Set Precharge
  SPI.transfer(0xF1);
  SPI.transfer(0xDB);  // Set VCom Detect
  SPI.transfer(0x40);
  SPI.transfer(0xA4);  // Entire Display ON
  SPI.transfer(0xA6);  // Set normal/inverse display
  SPI.transfer(0xAF);  // Display On

  LCDCommandMode();
  SPI.transfer(0x20);     // set display mode
  SPI.transfer(0x00);     // horizontal addressing mode

  SPI.transfer(0x21);     // set col address
  SPI.transfer(0x00);
  SPI.transfer(COLUMN_ADDRESS_END);

  SPI.transfer(0x22); // set page address
  SPI.transfer(0x00);
  SPI.transfer(PAGE_ADDRESS_END);

  LCDDataMode();
}

// Safe Mode is engaged by holding down both the LEFT button and UP button
// when plugging the device into USB.
void Arduboy2::safeMode()
{
  display(); // too avoid random gibberish
  while (true) {
    asm volatile("nop \n");
  }
}

void Arduboy2::LCDDataMode()
{
  *dcport |= dcpinmask;
  *csport &= ~cspinmask;
}

void Arduboy2::LCDCommandMode()
{
  *csport |= cspinmask; // why are we doing this twice?
  *csport |= cspinmask;
  *dcport &= ~dcpinmask;
  *csport &= ~cspinmask;
}


/* Power Management */

void Arduboy2::idle()
{
  set_sleep_mode(SLEEP_MODE_IDLE);
  sleep_mode();
}

void Arduboy2::saveMuchPower()
{
  power_adc_disable();
  power_usart0_disable();
  power_twi_disable();
  // timer 0 is for millis()
  // timers 1 and 3 are for music and sounds
  power_timer2_disable();
  power_usart1_disable();
  // we need USB, for now (to allow triggered reboots to reprogram)
  // power_usb_disable()
}

/* Frame management */
void Arduboy2::setFrameRate(uint8_t rate)
{
  frameRate = rate;
  eachFrameMillis = 1000 / rate;
}

bool Arduboy2::everyXFrames(uint8_t frames)
{
  return frameCount % frames == 0;
}

bool Arduboy2::nextFrame()
{
  long now = millis();
  uint8_t remaining;

  // post render
  if (post_render) {
    lastFrameDurationMs = now - lastFrameStart;
    frameCount++;
    post_render = false;
  }

  // if it's not time for the next frame yet
  if (now < nextFrameStart) {
    remaining = nextFrameStart - now;
    // if we have more than 1ms to spare, lets sleep
    // we should be woken up by timer0 every 1ms, so this should be ok
    if (remaining > 1)
      idle();
    return false;
  }

  // pre-render

  // technically next frame should be last frame + each frame but if we're
  // running a slow render we would constnatly be behind the clock
  // keep an eye on this and see how it works.  If it works well the
  // lastFrameStart variable could be eliminated completely
  nextFrameStart = now + eachFrameMillis;
  lastFrameStart = now;
  post_render = true;
  return post_render;
}

// returns the load on the CPU as a percentage
// this is based on how much of the time your app is spends rendering
// frames.  This number can be higher than 100 if your app is rendering
// really slowly.
int Arduboy2::cpuLoad()
{
  return lastFrameDurationMs * 100 / eachFrameMillis;
}

// seed the random number generator with entropy from the temperature,
// voltage reading, and microseconds since boot.
// this method is still most effective when called semi-randomly such
// as after a user hits a button to start a game or other semi-random
// events
void Arduboy2::initRandomSeed()
{
  power_adc_enable(); // ADC on
  randomSeed(~rawADC(ADC_TEMP) * ~rawADC(ADC_VOLTAGE) * ~micros() + micros());
  power_adc_disable(); // ADC off
}

uint16_t Arduboy2::rawADC(byte adc_bits)
{
  ADMUX = adc_bits;
  // we also need MUX5 for temperature check
  if (adc_bits == ADC_TEMP) {
    ADCSRB = _BV(MUX5);
  }

  delay(2); // Wait for ADMUX setting to settle
  ADCSRA |= _BV(ADSC); // Start conversion
  while (bit_is_set(ADCSRA, ADSC)); // measuring

  return ADCW;
}

/* Graphics */
void Arduboy2::blank()
{
  for (int a = 0; a < (HEIGHT * WIDTH) / 8; a++) SPI.transfer(0x00);
}

void Arduboy2::clearDisplay()
{
  this->fillScreen(0);
}

void Arduboy2::drawPixel(int x, int y, uint8_t color)
{
#ifdef PIXEL_SAFE_MODE
  if (x < 0 || x > (WIDTH - 1) || y < 0 || y > (HEIGHT - 1))
  {
    return;
  }
#endif

  uint8_t row = (uint8_t)y / 8;
  if (color)
  {
    sBuffer[(row * WIDTH) + (uint8_t)x] |=   _BV((uint8_t)y % 8);
  }
  else
  {
    sBuffer[(row * WIDTH) + (uint8_t)x] &= ~ _BV((uint8_t)y % 8);
  }
}

uint8_t Arduboy2::getPixel(uint8_t x, uint8_t y)
{
  uint8_t row = y / 8;
  uint8_t bit_position = y % 8;
  return (sBuffer[(row * WIDTH) + x] & _BV(bit_position)) >> bit_position;
}

void Arduboy2::drawCircle(int16_t x0, int16_t y0, int16_t r, uint8_t color)
{
  int16_t f = 1 - r;
  int16_t ddF_x = 1;
  int16_t ddF_y = -2 * r;
  int16_t x = 0;
  int16_t y = r;

  drawPixel(x0, y0 + r, color);
  drawPixel(x0, y0 - r, color);
  drawPixel(x0 + r, y0, color);
  drawPixel(x0 - r, y0, color);

  while (x < y)
  {
    if (f >= 0)
    {
      y--;
      ddF_y += 2;
      f += ddF_y;
    }

    x++;
    ddF_x += 2;
    f += ddF_x;

    drawPixel(x0 + x, y0 + y, color);
    drawPixel(x0 - x, y0 + y, color);
    drawPixel(x0 + x, y0 - y, color);
    drawPixel(x0 - x, y0 - y, color);
    drawPixel(x0 + y, y0 + x, color);
    drawPixel(x0 - y, y0 + x, color);
    drawPixel(x0 + y, y0 - x, color);
    drawPixel(x0 - y, y0 - x, color);
  }
}

void Arduboy2::drawCircleHelper
(int16_t x0, int16_t y0, int16_t r, uint8_t cornername, uint8_t color)
{
  int16_t f = 1 - r;
  int16_t ddF_x = 1;
  int16_t ddF_y = -2 * r;
  int16_t x = 0;
  int16_t y = r;

  while (x < y)
  {
    if (f >= 0)
    {
      y--;
      ddF_y += 2;
      f += ddF_y;
    }

    x++;
    ddF_x += 2;
    f += ddF_x;

    if (cornername & 0x4)
    {
      drawPixel(x0 + x, y0 + y, color);
      drawPixel(x0 + y, y0 + x, color);
    }
    if (cornername & 0x2)
    {
      drawPixel(x0 + x, y0 - y, color);
      drawPixel(x0 + y, y0 - x, color);
    }
    if (cornername & 0x8)
    {
      drawPixel(x0 - y, y0 + x, color);
      drawPixel(x0 - x, y0 + y, color);
    }
    if (cornername & 0x1)
    {
      drawPixel(x0 - y, y0 - x, color);
      drawPixel(x0 - x, y0 - y, color);
    }
  }
}

void Arduboy2::fillCircle(int16_t x0, int16_t y0, int16_t r, uint8_t color)
{
  drawFastVLine(x0, y0 - r, 2 * r + 1, color);
  fillCircleHelper(x0, y0, r, 3, 0, color);
}

void Arduboy2::fillCircleHelper
(
  int16_t x0,
  int16_t y0,
  int16_t r,
  uint8_t cornername,
  int16_t delta,
  uint8_t color
)
{
  // used to do circles and roundrects!
  int16_t f = 1 - r;
  int16_t ddF_x = 1;
  int16_t ddF_y = -2 * r;
  int16_t x = 0;
  int16_t y = r;

  while (x < y)
  {
    if (f >= 0)
    {
      y--;
      ddF_y += 2;
      f += ddF_y;
    }

    x++;
    ddF_x += 2;
    f += ddF_x;

    if (cornername & 0x1)
    {
      drawFastVLine(x0 + x, y0 - y, 2 * y + 1 + delta, color);
      drawFastVLine(x0 + y, y0 - x, 2 * x + 1 + delta, color);
    }

    if (cornername & 0x2)
    {
      drawFastVLine(x0 - x, y0 - y, 2 * y + 1 + delta, color);
      drawFastVLine(x0 - y, y0 - x, 2 * x + 1 + delta, color);
    }
  }
}

void Arduboy2::drawLine
(int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint8_t color)
{
  // bresenham's algorithm - thx wikpedia
  boolean steep = abs(y1 - y0) > abs(x1 - x0);
  if (steep) {
    swap(x0, y0);
    swap(x1, y1);
  }

  if (x0 > x1) {
    swap(x0, x1);
    swap(y0, y1);
  }

  int16_t dx, dy;
  dx = x1 - x0;
  dy = abs(y1 - y0);

  int16_t err = dx / 2;
  int8_t ystep;

  if (y0 < y1)
  {
    ystep = 1;
  }
  else
  {
    ystep = -1;
  }

  for (; x0 <= x1; x0++)
  {
    if (steep)
    {
      drawPixel(y0, x0, color);
    }
    else
    {
      drawPixel(x0, y0, color);
    }

    err -= dy;
    if (err < 0)
    {
      y0 += ystep;
      err += dx;
    }
  }
}

void Arduboy2::drawRect
(int16_t x, int16_t y, int16_t w, int16_t h, uint8_t color)
{
  drawFastHLine(x, y, w, color);
  drawFastHLine(x, y + h - 1, w, color);
  drawFastVLine(x, y, h, color);
  drawFastVLine(x + w - 1, y, h, color);
}

void Arduboy2::drawFastVLine
(int16_t x, int16_t y, int16_t h, uint8_t color)
{
  int end = y + h;
  for (int a = max(0, y); a < min(end, HEIGHT); a++)
  {
    drawPixel(x, a, color);
  }
}

void Arduboy2::drawFastHLine
(int16_t x, int16_t y, int16_t w, uint8_t color)
{
  int end = x + w;
  for (int a = max(0, x); a < min(end, WIDTH); a++)
  {
    drawPixel(a, y, color);
  }
}

void Arduboy2::fillRect
(int16_t x, int16_t y, int16_t w, int16_t h, uint8_t color)
{
  // stupidest version - update in subclasses if desired!
  for (int16_t i = x; i < x + w; i++)
  {
    drawFastVLine(i, y, h, color);
  }
}

void Arduboy2::fillScreen(uint8_t color)
{
    // C version :
    //if(color != 0) color = 0xFF;  //change any nonzero argument to b11111111 and insert into screen array.
    //for(int16_t i=0; i<1024; i++)  { sBuffer[i] = color; }  //sBuffer = (128*64) = 8192/8 = 1024 bytes.
  
    asm volatile
    (
        // load color value into r27
        "mov r27, %1 \n\t"
        // if value is zero, skip assigning to 0xff
        "cpse r27, __zero_reg__ \n\t"
        "ldi r27, 0xff \n\t"
        // load sBuffer pointer into Z
        "movw  r30, %0\n\t"
        // counter = 0
        "clr __tmp_reg__ \n\t"
        "loopto:   \n\t"
        // (4x) push zero into screen buffer,
        // then increment buffer position
        "st Z+, r27 \n\t"
        "st Z+, r27 \n\t"
        "st Z+, r27 \n\t"
        "st Z+, r27 \n\t"
        // increase counter
        "inc __tmp_reg__ \n\t"
        // repeat for 256 loops
        // (until counter rolls over back to 0)
        "brne loopto \n\t"
        // input: sBuffer, color
        // modified: Z (r30, r31), r27
        :
        : "r" (sBuffer), "r" (color)
        : "r30", "r31", "r27"
      );
}

void Arduboy2::drawRoundRect
(int16_t x, int16_t y, int16_t w, int16_t h, int16_t r, uint8_t color)
{
  // smarter version
  drawFastHLine(x + r, y, w - 2 * r, color); // Top
  drawFastHLine(x + r, y + h - 1, w - 2 * r, color); // Bottom
  drawFastVLine(x, y + r, h - 2 * r, color); // Left
  drawFastVLine(x + w - 1, y + r, h - 2 * r, color); // Right
  // draw four corners
  drawCircleHelper(x + r, y + r, r, 1, color);
  drawCircleHelper(x + w - r - 1, y + r, r, 2, color);
  drawCircleHelper(x + w - r - 1, y + h - r - 1, r, 4, color);
  drawCircleHelper(x + r, y + h - r - 1, r, 8, color);
}

void Arduboy2::fillRoundRect
(int16_t x, int16_t y, int16_t w, int16_t h, int16_t r, uint8_t color)
{
  // smarter version
  fillRect(x + r, y, w - 2 * r, h, color);

  // draw four corners
  fillCircleHelper(x + w - r - 1, y + r, r, 1, h - 2 * r - 1, color);
  fillCircleHelper(x + r, y + r, r, 2, h - 2 * r - 1, color);
}



void Arduboy2::drawTriangle
(int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint8_t color)
{
  drawLine(x0, y0, x1, y1, color);
  drawLine(x1, y1, x2, y2, color);
  drawLine(x2, y2, x0, y0, color);
}

void Arduboy2::fillTriangle
(int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint8_t color)
{

  int16_t a, b, y, last;
  // Sort coordinates by Y order (y2 >= y1 >= y0)
  if (y0 > y1)
  {
    swap(y0, y1); swap(x0, x1);
  }
  if (y1 > y2)
  {
    swap(y2, y1); swap(x2, x1);
  }
  if (y0 > y1)
  {
    swap(y0, y1); swap(x0, x1);
  }

  if (y0 == y2)
  { // Handle awkward all-on-same-line case as its own thing
    a = b = x0;
    if (x1 < a)
    {
      a = x1;
    }
    else if (x1 > b)
    {
      b = x1;
    }
    if (x2 < a)
    {
      a = x2;
    }
    else if (x2 > b)
    {
      b = x2;
    }
    drawFastHLine(a, y0, b - a + 1, color);
    return;
  }

  int16_t dx01 = x1 - x0,
          dy01 = y1 - y0,
          dx02 = x2 - x0,
          dy02 = y2 - y0,
          dx12 = x2 - x1,
          dy12 = y2 - y1,
          sa = 0,
          sb = 0;

  // For upper part of triangle, find scanline crossings for segments
  // 0-1 and 0-2.  If y1=y2 (flat-bottomed triangle), the scanline y1
  // is included here (and second loop will be skipped, avoiding a /0
  // error there), otherwise scanline y1 is skipped here and handled
  // in the second loop...which also avoids a /0 error here if y0=y1
  // (flat-topped triangle).
  if (y1 == y2)
  {
    last = y1;   // Include y1 scanline
  }
  else
  {
    last = y1 - 1; // Skip it
  }


  for (y = y0; y <= last; y++)
  {
    a   = x0 + sa / dy01;
    b   = x0 + sb / dy02;
    sa += dx01;
    sb += dx02;

    if (a > b)
    {
      swap(a, b);
    }

    drawFastHLine(a, y, b - a + 1, color);
  }

  // For lower part of triangle, find scanline crossings for segments
  // 0-2 and 1-2.  This loop is skipped if y1=y2.
  sa = dx12 * (y - y1);
  sb = dx02 * (y - y0);

  for (; y <= y2; y++)
  {
    a   = x1 + sa / dy12;
    b   = x0 + sb / dy02;
    sa += dx12;
    sb += dx02;

    if (a > b)
    {
      swap(a, b);
    }

    drawFastHLine(a, y, b - a + 1, color);
  }
}

void Arduboy2::drawBitmap(int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h, uint8_t color) {
  // no need to dar at all of we're offscreen
  if (x + w < 0 || x > WIDTH - 1 || y + h < 0 || y > HEIGHT - 1)
    return;

  int yOffset = abs(y) % 8;
  int sRow = y / 8;
  if (y < 0) {
    sRow--;
    yOffset = 8 - yOffset;
  }
  int rows = h / 8;
  if (h % 8 != 0) rows++;
  for (int a = 0; a < rows; a++) {
    int bRow = sRow + a;
    if (bRow > (HEIGHT / 8) - 1) break;
    if (bRow > -2) {
      for (int iCol = 0; iCol < w; iCol++) {
        if (iCol + x > (WIDTH - 1)) break;
        if (iCol + x >= 0) {
          if (bRow >= 0) {
            if (color) this->sBuffer[ (bRow * WIDTH) + x + iCol  ]  |= pgm_read_byte(bitmap + (a * w) + iCol) << yOffset;
            else this->sBuffer[ (bRow * WIDTH) + x + iCol  ]  &= ~(pgm_read_byte(bitmap + (a * w) + iCol) << yOffset);
          }
          if (yOffset && bRow < (HEIGHT / 8) - 1 && bRow > -2) {
            if (color) this->sBuffer[ ((bRow + 1)*WIDTH) + x + iCol  ] |= pgm_read_byte(bitmap + (a * w) + iCol) >> (8 - yOffset);
            else this->sBuffer[ ((bRow + 1)*WIDTH) + x + iCol  ] &= ~(pgm_read_byte(bitmap + (a * w) + iCol) >> (8 - yOffset));
          }
        }
      }
    }
  }
}

void Arduboy2::drawBitmapK(int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h, uint16_t color)
{
  //bitmap is off screen
  if (x+w < 0 || x > WIDTH-1 || y+h < 0 || y > HEIGHT-1) return;

  int yOffset = abs(y) % 8;
  int sRow = y / 8;

  if (y < 0)
  {
    sRow--;
    yOffset = 8 - yOffset;
  }

  for (int a = 0; a < h/8; a++)
  {
    int bRow = sRow + a;
    if (bRow > (HEIGHT/8)-1) break;
    if (bRow > -2) {
      for (int iCol = 0; iCol<w; iCol++)
      {
        if (iCol + x > (WIDTH-1))
        {
          break;
        }

        if (iCol + x > 0)
        {
          if (bRow >= 0)
          {
            if (color)
            {
              this->sBuffer[ (bRow*WIDTH) + x + iCol  ]
               |= pgm_read_byte(bitmap+(a*w)+iCol) << yOffset;
             //   = pgm_read_byte(bitmap+(a*w)+iCol) << yOffset; //changed to equals in order to overwrite the background, no clear required
            }
            
          }
          if (yOffset && bRow<(HEIGHT/8)-1 && bRow > -2)
          {
            if (color)
            {
              this->sBuffer[ ((bRow+1)*WIDTH) + x + iCol  ]
                |= pgm_read_byte(bitmap+(a*w)+iCol) >> (8-yOffset);
               // = pgm_read_byte(bitmap+(a*w)+iCol) >> (8-yOffset); //changed to equals in order to overwrite the background, no clear required
            }
            
            }
          }
        }
      }
    }
  }

void Arduboy2::drawBitmapJ(int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h, uint16_t color)
{
  //bitmap is off screen
  if (x+w < 0 || x > WIDTH-1 || y+h < 0 || y > HEIGHT-1) return;
  int yOffset = abs(y) % 8;
  int sRow = y / 8;
  if (y < 0)
  {
    sRow--;
    yOffset = 8 - yOffset;
  }
  for (int a = 0; a < h/8; a++)
  {
    int bRow = sRow + a;
    if (bRow > (HEIGHT/8)-1) break;
    if (bRow > -2) {
      for (int iCol = 0; iCol<w; iCol++)
      {
        if (iCol + x > (WIDTH-1))
        {
          break;
        }
        if (iCol + x > 0)
        {
          if (bRow >= 0)
          {
            if (color)
            {
              this->sBuffer[ (bRow*WIDTH) + x + iCol  ]
                ^= pgm_read_byte(bitmap+(a*w)+iCol) << yOffset;
            }
          }
          if (yOffset && bRow<(HEIGHT/8)-1 && bRow > -2)
          {
            if (color)
            {
              this->sBuffer[ ((bRow+1)*WIDTH) + x + iCol  ]
                = pgm_read_byte(bitmap+(a*w)+iCol) >> (8-yOffset);
            }
          }
        }
      }
    }
  }
}


void Arduboy2::drawMaskedBitmapBW
(int16_t x,
 int16_t y,
 const uint8_t *bitmap,
 const uint8_t *mask,
 int16_t w,
 int16_t h,
 uint16_t color
)
{
  //bitmap is off screen
  if (x+w < 0 || x > WIDTH-1 || y+h < 0 || y > HEIGHT-1) return;

  int yOffset = abs(y) % 8;
  int sRow = y / 8;

  if (y < 0)
  {
    sRow--;
    yOffset = 8 - yOffset;
  }

  for (int a = 0; a < h/8; a++)
  {
    int bRow = sRow + a;
    if (bRow > (HEIGHT/8)-1) break;
    if (bRow > -2) {
      for (int iCol = 0; iCol<w; iCol++)
      {
        if (iCol + x > (WIDTH-1))
        {
          break;
        }

        if (iCol + x > 0)
        {
          if (bRow >= 0 || yOffset && bRow<(HEIGHT/8)-1 && bRow > -2)
          {
              this->sBuffer[ (bRow*WIDTH) + x + iCol  ]
                &= pgm_read_byte(mask+(a*w)+iCol);
              this->sBuffer[ (bRow*WIDTH) + x + iCol  ]
                ^= pgm_read_byte(bitmap+(a*w)+iCol);
          }
        }
      }
    }
  }
}

void Arduboy2::drawMaskedBitmap (int16_t x, int16_t y, const uint8_t *bitmap, const uint8_t *mask, int16_t w,int16_t h, uint16_t color){
  //bitmap is off screen
  if (x+w < 0 || x > WIDTH-1 || y+h < 0 || y > HEIGHT-1) return;

  int yOffset = abs(y) % 8;
  int sRow = y / 8;

  if (y < 0)
  {
    sRow--;
    yOffset = 8 - yOffset;
  }

  for (int a = 0; a < h/8; a++)
  {
    int bRow = sRow + a;
    if (bRow > (HEIGHT/8)-1) break;
    if (bRow > -2) {
      for (int iCol = 0; iCol<w; iCol++)
      {
        if (iCol + x > (WIDTH-1))
        {
          break;
        }

        if (iCol + x > 0)
        {
          if (bRow >= 0)
          {
              this->sBuffer[ (bRow*WIDTH) + x + iCol  ]
                &= pgm_read_byte(mask+(a*w)+iCol) << yOffset;
              this->sBuffer[ (bRow*WIDTH) + x + iCol  ]
                ^= pgm_read_byte(bitmap+(a*w)+iCol) << yOffset;
          }
          if (yOffset && bRow<(HEIGHT/8)-1 && bRow > -2)
          {
              this->sBuffer[ ((bRow+1)*WIDTH) + x + iCol  ]
                &= pgm_read_byte(mask+(a*w)+iCol) >> (8-yOffset);
              this->sBuffer[ ((bRow+1)*WIDTH) + x + iCol  ]
                ^= pgm_read_byte(bitmap+(a*w)+iCol) >> (8-yOffset);
          }
        }
      }
    }
  }
}

void Arduboy2::drawSprite(int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h, uint8_t frame, uint8_t color) {
  // no need to dar at all of we're offscreen
  if (x + w < 0 || x > WIDTH - 1 || y + h < 0 || y > HEIGHT - 1)
    return;
  y = y - (frame * h);
  int yOffset = abs(y) % 8;
  int sRow = y / 8;
  if (y < 0) {
    sRow--;
    yOffset = 8 - yOffset;
  }
  int rows = h / 8;
  if (h % 8 != 0) rows++;
  for (int a = 0 + (frame * rows); a < rows + (frame * rows); a++) {
    int bRow = sRow + a;
    if (bRow > (HEIGHT / 8) - 1) break;
    if (bRow > -2) {
      for (int iCol = 0; iCol < w; iCol++) {
        if (iCol + x > (WIDTH - 1)) break;
        if (iCol + x >= 0) {
          if (bRow >= 0) {
            if (color) this->sBuffer[ (bRow * WIDTH) + x + iCol  ]  |= pgm_read_byte(bitmap + (a * w) + iCol) << yOffset;
            else this->sBuffer[ (bRow * WIDTH) + x + iCol  ]  &= ~(pgm_read_byte(bitmap + (a * w) + iCol) << yOffset);
          }
          if (yOffset && bRow < (HEIGHT / 8) - 1 && bRow > -2) {
            if (color) this->sBuffer[ ((bRow + 1)*WIDTH) + x + iCol  ] |= pgm_read_byte(bitmap + (a * w) + iCol) >> (8 - yOffset);
            else this->sBuffer[ ((bRow + 1)*WIDTH) + x + iCol  ] &= ~(pgm_read_byte(bitmap + (a * w) + iCol) >> (8 - yOffset));
          }
        }
      }
    }
  }
}


void Arduboy2::drawMaskedSprite(int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h, const uint8_t *mask, uint8_t frame, uint8_t color) {
  // no need to dar at all of we're offscreen
  if (x + w < 0 || x > WIDTH - 1 || y + h < 0 || y > HEIGHT - 1)
    return;
  y = y - (frame * h);
  int yOffset = abs(y) % 8;
  int sRow = y / 8;
  if (y < 0) {
    sRow--;
    yOffset = 8 - yOffset;
  }
  int rows = h / 8;
  if (h % 8 != 0) rows++;
  for (int a = 0 + (frame * rows); a < rows + (frame * rows); a++) {
    int bRow = sRow + a;
    if (bRow > (HEIGHT / 8) - 1) break;
    if (bRow > -2) {
      for (int iCol = 0; iCol < w; iCol++) {
        if (iCol + x > (WIDTH - 1)) break;
        if (iCol + x >= 0) {
          if (bRow >= 0) {
            if (color) {
              this->sBuffer[ (bRow * WIDTH) + x + iCol  ]  &= ~(pgm_read_byte(mask + (a * w) + iCol) << yOffset);
              this->sBuffer[ (bRow * WIDTH) + x + iCol  ]  |= pgm_read_byte(bitmap + (a * w) + iCol) << yOffset;
            }
            else {
              this->sBuffer[ (bRow * WIDTH) + x + iCol  ]  |= pgm_read_byte(mask + (a * w) + iCol) << yOffset;
              this->sBuffer[ (bRow * WIDTH) + x + iCol  ]  &= ~(pgm_read_byte(bitmap + (a * w) + iCol) << yOffset);
            }
          }
          if (yOffset && bRow < (HEIGHT / 8) - 1 && bRow > -2) {
            if (color) {
              this->sBuffer[ ((bRow + 1)*WIDTH) + x + iCol  ] &= ~(pgm_read_byte(mask + (a * w) + iCol) >> (8 - yOffset));
              this->sBuffer[ ((bRow + 1)*WIDTH) + x + iCol  ] |= pgm_read_byte(bitmap + (a * w) + iCol) >> (8 - yOffset);
            }
            else {
              this->sBuffer[ ((bRow + 1)*WIDTH) + x + iCol  ] |= pgm_read_byte(mask + (a * w) + iCol) >> (8 - yOffset);
              this->sBuffer[ ((bRow + 1)*WIDTH) + x + iCol  ] &= ~(pgm_read_byte(bitmap + (a * w) + iCol) >> (8 - yOffset));
            }
          }
        }
      }
    }
  }
}


////////////
//{
// 
//
//        {
//          if (bRow >= 0 || yOffset && bRow<(HEIGHT/8)-1 && bRow > -2)
//          {
//              this->sBuffer[ (bRow*WIDTH) + x + iCol  ] &= pgm_read_byte(mask+(a*w)+iCol);
//              this->sBuffer[ (bRow*WIDTH) + x + iCol  ] ^= pgm_read_byte(bitmap+(a*w)+iCol);
//          }
//        }
//      }
//    }
//  }
//}
/////////



typedef struct CSESSION {
  int byte;
  int bit;
  const uint8_t *src;
  int src_pos;
} CSESSION;
static CSESSION cs;

static int getval(int bits)
{
  int val = 0;
  int i;
  for (i = 0; i < bits; i++)
  {
    if (cs.bit == 0x100)
    {
      cs.bit = 0x1;
      cs.byte = pgm_read_byte(&cs.src[cs.src_pos]);
      cs.src_pos ++;
    }
    if (cs.byte & cs.bit)
      val += (1 << i);
    cs.bit <<= 1;
  }
  return val;
}

void Arduboy2::drawCompressed(int16_t sx, int16_t sy, const uint8_t *bitmap, uint8_t color)
{
  int bl, len;
  int col;
  int i;
  int a, iCol;
  int x, y;
  int byte = 0;
  int bit = 0;
  int w, h;

  // set up decompress state

  cs.src = bitmap;
  cs.bit = 0x100;
  cs.byte = 0;
  cs.src_pos = 0;

  // read header

  w = getval(8) + 1;
  h = getval(8) + 1;

  col = getval(1); // starting colour

  // no need to draw at all if we're offscreen
  if (sx + w < 0 || sx > WIDTH - 1 || sy + h < 0 || sy > HEIGHT - 1)
    return;

  // sy = sy - (frame*h);

  int yOffset = abs(sy) % 8;
  int sRow = sy / 8;
  if (sy < 0) {
    sRow--;
    yOffset = 8 - yOffset;
  }
  int rows = h / 8;
  if (h % 8 != 0) rows++;

  a = 0; // +(frame*rows);
  iCol = 0;

  byte = 0; bit = 1;
  while (a < rows) // + (frame*rows))
  {
    bl = 1;
    while (!getval(1))
      bl += 2;

    len = getval(bl) + 1; // span length

    // draw the span


    for (i = 0; i < len; i++)
    {
      if (col)
        byte |= bit;
      bit <<= 1;

      if (bit == 0x100) // reached end of byte
      {
        // draw

        int bRow = sRow + a;

        //if (byte) // possible optimisation
        if (bRow <= (HEIGHT / 8) - 1)
          if (bRow > -2)
            if (iCol + sx <= (WIDTH - 1))
              if (iCol + sx >= 0) {

                if (bRow >= 0)
                {
                  if (color)
                    this->sBuffer[ (bRow * WIDTH) + sx + iCol] |= byte << yOffset;
                  else
                    this->sBuffer[ (bRow * WIDTH) + sx + iCol] &= ~(byte << yOffset);
                }
                if (yOffset && bRow < (HEIGHT / 8) - 1 && bRow > -2)
                {
                  if (color)
                    this->sBuffer[((bRow + 1)*WIDTH) + sx + iCol] |= byte >> (8 - yOffset);
                  else
                    this->sBuffer[((bRow + 1)*WIDTH) + sx + iCol] &= ~(byte >> (8 - yOffset));
                }

              }

        // iterate
        iCol ++;
        if (iCol >= w)
        {
          iCol = 0;
          a ++;
        }

        // reset byte
        byte = 0; bit = 1;
      }
    }

    col = 1 - col; // toggle colour for next span
  }
}

// Draw images that are bit-oriented horizontally
//
// This requires a lot of additional CPU power and will draw images much
// more slowly than drawBitmap where the images are stored in a format that
// allows them to be directly written to the screen hardware fast. It is
// recommended you use drawBitmap when possible.
void Arduboy2::drawSlowXYBitmap(int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h, uint8_t color) {
  // no need to dar at all of we're offscreen
  if (x + w < 0 || x > WIDTH - 1 || y + h < 0 || y > HEIGHT - 1)
    return;

  int16_t xi, yi, byteWidth = (w + 7) / 8;
  for (yi = 0; yi < h; yi++) {
    for (xi = 0; xi < w; xi++ ) {
      if (pgm_read_byte(bitmap + yi * byteWidth + xi / 8) & (128 >> (xi & 7))) {
        drawPixel(x + xi, y + yi, color);
      }
    }
  }
}


void Arduboy2::drawChar(int16_t x, int16_t y, unsigned char c, uint8_t color, uint8_t bg, uint8_t size){  
#if TINYFONT == 0
  if((x >= WIDTH)            || // Clip right
    (y >= HEIGHT)            || // Clip bottom
    ((x + 6 * size - 1) < 0) || // Clip left
    ((y + 8 * size - 1) < 0))   // Clip top
    return;
  for (int8_t i=0; i<6; i++ ) {
    uint8_t line;
    if (i == 5) 
      line = 0x0;
    else 
      line = pgm_read_byte(font+(c*5)+i);
    for (int8_t j = 0; j<8; j++) {
      if (line & 0x1) {
        if (size == 1) // default size
          drawPixel(x+i, y+j, color);
        else {  // big size
          fillRect(x+(i*size), y+(j*size), size, size, color);
        } 
      } else if (bg != color) {
        if (size == 1) // default size
          drawPixel(x+i, y+j, bg);
        else {  // big size
          fillRect(x+i*size, y+j*size, size, size, bg);
        }   
      }
      line >>= 1;
    }
  }
#else
    if(
        (x >= WIDTH) || // Clip right
        (y >= HEIGHT) || // Clip bottom
        ((x + (4+1) * size - 1) < 0) || // Clip left
        ((y + (5+1) * size - 1) < 0) // Clip top
        )
    return;
    
    unsigned long currentBit;
    if (c % 2)  currentBit = (c-33) * (5 * 4) + 4;
    else        currentBit = (c-32) * (5 * 4);
    for (uint8_t b = 0; b < 5; b++) {
        for (uint8_t a = 0; a < 4; a++) {
          if ( pgm_read_byte(font+(currentBit/8)) & ( 1 << (7-currentBit%8) ) ) {
            if (size == 1) drawPixel(x+a, y+b, color);
            else fillRect(x+a*size, y+b*size, size, size, color);
          }
          else if (bg != color) {
            if (size == 1) drawPixel(x+a, y+b, bg);
            else fillRect(x+a*size, y+b*size, size, size, bg);
          }
          currentBit++;
        }
      currentBit+=4;
    }
#endif
}


void Arduboy2::setCursor(int16_t x, int16_t y)
{
  cursor_x = x;
  cursor_y = y;
}

void Arduboy2::setTextSize(uint8_t s)
{
  textsize = (s > 0) ? s : 1;
}

void Arduboy2::setTextWrap(boolean w)
{
  wrap = w;
}

size_t Arduboy2::write(uint8_t c) {
  if (c == '\n') {
    cursor_y += textsize*(FONTHEIGHT+1);
    cursor_x = 0;
  } else if (c == '\r') {
    // skip em
  } else {
    drawChar(cursor_x, cursor_y, c, 1, 0, textsize);
    cursor_x += textsize*(FONTWIDTH+1);
    if (wrap && (cursor_x > (WIDTH - textsize*(FONTWIDTH+1)))) {
      cursor_y += textsize*(FONTHEIGHT+1);
      cursor_x = 0;
    }
  }
}

void Arduboy2::display()
{
  this->drawScreen(sBuffer);
}

void Arduboy2::drawScreen(const unsigned char *image)
{
  for (int a = 0; a < (HEIGHT * WIDTH) / 8; a++)
  {
    SPI.transfer(pgm_read_byte(image + a));
  }
}

void Arduboy2::drawScreen(unsigned char image[])
{
  for (int a = 0; a < (HEIGHT * WIDTH) / 8; a++)
  {
    SPI.transfer(image[a]);
  }
}

unsigned char* Arduboy2::getBuffer() {
  return sBuffer;
}

uint8_t Arduboy2::width() {
  return WIDTH;
}

uint8_t Arduboy2::height() {
  return HEIGHT;
}

// returns true if the button mask passed in is pressed
//
//   if (pressed(LEFT_BUTTON + A_BUTTON))
boolean Arduboy2::pressed(uint8_t buttons)
{
  uint8_t button_state = getInput();
  return (button_state & buttons) == buttons;
}

// returns true if the button mask passed in not pressed
//
//   if (not_pressed(LEFT_BUTTON))
boolean Arduboy2::not_pressed(uint8_t buttons)
{
  uint8_t button_state = getInput();
  return (button_state & buttons) == 0;
}


uint8_t Arduboy2::getInput()
{
  // using ports here is ~100 bytes smaller than digitalRead()
  /*
#ifdef DEVKIT
  // down, left, up
  uint8_t buttons = ((~PINB) & B01110000);
  // right button
  buttons = buttons | (((~PINC) & B01000000) >> 4);
  // A and B
  buttons = buttons | (((~PINF) & B11000000) >> 6);
#endif
*/
  uint8_t buttons;
  // down, left, up
  // down, up, left right
  buttons = ((~PINF) & B11110000);
  // A (left)
  buttons = buttons | (((~PINE) & B01000000) >> 3);
  // B (right)
  buttons = buttons | (((~PINB) & B00010000) >> 2);

  // b0dlu0rab - see button defines in Arduboy.h
  return buttons;
}

void Arduboy2::swap(int16_t& a, int16_t& b) {
  int temp = a;
  a = b;
  b = temp;
}


///////////////
Sprites::Sprites(Arduboy2 &a)
{
  arduboy2 = &a;
  sBuffer = arduboy2->getBuffer();
}

SimpleSprite::SimpleSprite(int x, int y, const uint8_t *bitmap) :
  x(x), y(y), bitmap(bitmap)
{
}

Sprite::Sprite(int x, int y, const uint8_t *bitmap) :
  SimpleSprite(x, y, bitmap) {
}

Sprite::Sprite(int x, int y, const uint8_t *bitmap, const uint8_t *mask) :
  SimpleSprite(x, y, bitmap), mask(mask) {
}

// new API

void Sprites::drawExternalMask(int16_t x, int16_t y, const uint8_t *bitmap,
                               const uint8_t *mask, uint8_t frame, uint8_t mask_frame)
{
  draw(x, y, bitmap, frame, mask, mask_frame, SPRITE_MASKED);
}

void Sprites::drawOverwrite(int16_t x, int16_t y, const uint8_t *bitmap, uint8_t frame)
{
  draw(x, y, bitmap, frame, NULL, 0, SPRITE_OVERWRITE);
}

void Sprites::drawErase(int16_t x, int16_t y, const uint8_t *bitmap, uint8_t frame)
{
  draw(x, y, bitmap, frame, NULL, 0, SPRITE_IS_MASK_ERASE);
}

void Sprites::drawSelfMasked(int16_t x, int16_t y, const uint8_t *bitmap, uint8_t frame)
{
  draw(x, y, bitmap, frame, NULL, 0, SPRITE_IS_MASK);
}

void Sprites::drawPlusMask(int16_t x, int16_t y, const uint8_t *bitmap, uint8_t frame)
{
  draw(x, y, bitmap, frame, NULL, 0, SPRITE_PLUS_MASK);
}


// older api and common functions

void Sprites::draw(Sprite sprite)
{
  draw(sprite.x, sprite.y,
       sprite.bitmap, sprite.frame,
       sprite.mask, sprite.maskFrame,
       sprite.drawMode);
}

void Sprites::draw(SimpleSprite sprite)
{
  draw(sprite.x, sprite.y,
       sprite.bitmap, sprite.frame,
       NULL, 0,
       sprite.drawMode);
}

void Sprites::draw(int16_t x, int16_t y, const uint8_t *bitmap)
{
  draw(x, y, bitmap, 0, NULL, 0, SPRITE_AUTO_MODE);
}

void Sprites::draw(int16_t x, int16_t y, const uint8_t *bitmap, const uint8_t *mask)
{
  draw(x, y, bitmap, 0, mask, 0, SPRITE_AUTO_MODE);
}

void Sprites::draw(int16_t x, int16_t y, const uint8_t *bitmap, uint8_t frame)
{
  draw(x, y, bitmap, frame, NULL, 0, SPRITE_AUTO_MODE);
}


void Sprites::draw(int16_t x, int16_t y,
                   const uint8_t *bitmap, uint8_t frame,
                   const uint8_t *mask, uint8_t sprite_frame,
                   uint8_t drawMode
                  )
{
  unsigned int frame_offset;

  if (bitmap == NULL)
    return;

  uint8_t width = pgm_read_byte(bitmap);
  uint8_t height = pgm_read_byte(++bitmap);
  bitmap++;
  if (frame > 0 || sprite_frame > 0) {
    frame_offset = (width * ( height / 8 + ( height % 8 == 0 ? 0 : 1)));
    // sprite plus mask uses twice as much space for each frame
    if (drawMode == SPRITE_PLUS_MASK) {
      frame_offset *= 2;
    } else if (mask != NULL) {
      mask += sprite_frame * frame_offset;
    }
    bitmap += frame * frame_offset;
  }

  // if we're detecting the draw mode then base it on whether a mask
  // was passed as a separate object
  if (drawMode == SPRITE_AUTO_MODE) {
    drawMode = mask == NULL ? SPRITE_UNMASKED : SPRITE_MASKED;
  }

  drawBitmap(x, y, bitmap, mask, width, height, drawMode);
}

// should we still even support these modes?
// void Sprites::drawBitmap(int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h, uint8_t color) {
// drawComplexBitmap(x, y, bitmap, NULL, w, h, color ? SPRITE_IS_MASK : SPRITE_IS_MASK_ERASE);
// }

void Sprites::drawBitmap(int16_t x, int16_t y,
                         const uint8_t *bitmap, const uint8_t *mask,
                         int8_t w, int8_t h, uint8_t draw_mode) {
  // no need to draw at all of we're offscreen
  if (x + w <= 0 || x > WIDTH - 1 || y + h <= 0 || y > HEIGHT - 1)
    return;

  if (bitmap == NULL)
    return;

  // xOffset technically doesn't need to be 16 bit but the math operations
  // are measurably faster if it is
  uint16_t xOffset, ofs;
  int8_t yOffset = abs(y) % 8;
  int8_t sRow = y / 8;
  uint8_t loop_h, start_h, rendered_width;

  if (y < 0 && yOffset > 0) {
    sRow--;
    yOffset = 8 - yOffset;
  }

  // if the left side of the render is offscreen skip those loops
  if (x < 0) {
    xOffset = abs(x);
  } else {
    xOffset = 0;
  }

  // if the right side of the render is offscreen skip those loops
  if (x + w > WIDTH - 1) {
    rendered_width = ((WIDTH - x) - xOffset);
  } else {
    rendered_width = (w - xOffset);
  }

  // if the top side of the render is offscreen skip those loops
  if (sRow < -1) {
    start_h = abs(sRow) - 1;
  } else {
    start_h = 0;
  }

  loop_h = h / 8 + (h % 8 > 0 ? 1 : 0); // divide, then round up

  // if (sRow + loop_h - 1 > (HEIGHT/8)-1)
  if (sRow + loop_h > (HEIGHT / 8)) {
    loop_h = (HEIGHT / 8) - sRow;
  }

  // prepare variables for loops later so we can compare with 0
  // instead of comparing two variables
  loop_h -= start_h;

  sRow += start_h;
  ofs = (sRow * WIDTH) + x + xOffset;
  uint8_t *bofs = (uint8_t *)bitmap + (start_h * w) + xOffset;
  uint8_t *mask_ofs;
  if (mask != 0)
    mask_ofs = (uint8_t *)mask + (start_h * w) + xOffset;
  uint8_t data;

  uint8_t mul_amt = 1 << yOffset;
  uint16_t mask_data;
  uint16_t bitmap_data;

  switch (draw_mode) {
    case SPRITE_UNMASKED:
      // we only want to mask the 8 bits of our own sprite, so we can
      // calculate the mask before the start of the loop
      mask_data = ~(0xFF * mul_amt);
      // really if yOffset = 0 you have a faster case here that could be
      // optimized
      for (uint8_t a = 0; a < loop_h; a++) {
        for (uint8_t iCol = 0; iCol < rendered_width; iCol++) {
          bitmap_data = pgm_read_byte(bofs) * mul_amt;

          if (sRow >= 0) {
            data = sBuffer[ofs];
            data &= (uint8_t)(mask_data);
            data |= (uint8_t)(bitmap_data);
            sBuffer[ofs] = data;
          }
          if (yOffset != 0 && sRow < 7) {
            data = sBuffer[ofs + WIDTH];
            data &= (*((unsigned char *) (&mask_data) + 1));
            data |= (*((unsigned char *) (&bitmap_data) + 1));
            sBuffer[ofs + WIDTH] = data;
          }
          ofs++;
          bofs++;
        }
        sRow++;
        bofs += w - rendered_width;
        ofs += WIDTH - rendered_width;
      }
      break;

    case SPRITE_IS_MASK:
      for (uint8_t a = 0; a < loop_h; a++) {
        for (uint8_t iCol = 0; iCol < rendered_width; iCol++) {
          bitmap_data = pgm_read_byte(bofs) * mul_amt;
          if (sRow >= 0) {
            sBuffer[ofs] |= (uint8_t)(bitmap_data);
          }
          if (yOffset != 0 && sRow < 7) {
            sBuffer[ofs + WIDTH] |= (*((unsigned char *) (&bitmap_data) + 1));
          }
          ofs++;
          bofs++;
        }
        sRow++;
        bofs += w - rendered_width;
        ofs += WIDTH - rendered_width;
      }
      break;

    case SPRITE_IS_MASK_ERASE:
      for (uint8_t a = 0; a < loop_h; a++) {
        for (uint8_t iCol = 0; iCol < rendered_width; iCol++) {
          bitmap_data = pgm_read_byte(bofs) * mul_amt;
          if (sRow >= 0) {
            sBuffer[ofs]  &= ~(uint8_t)(bitmap_data);
          }
          if (yOffset != 0 && sRow < 7) {
            sBuffer[ofs + WIDTH] &= ~(*((unsigned char *) (&bitmap_data) + 1));
          }
          ofs++;
          bofs++;
        }
        sRow++;
        bofs += w - rendered_width;
        ofs += WIDTH - rendered_width;
      }
      break;

    case SPRITE_MASKED:
      for (uint8_t a = 0; a < loop_h; a++) {
        for (uint8_t iCol = 0; iCol < rendered_width; iCol++) {
          // NOTE: you might think in the yOffset==0 case that this results
          // in more effort, but in all my testing the compiler was forcing
          // 16-bit math to happen here anyways, so this isn't actually
          // compiling to more code than it otherwise would. If the offset
          // is 0 the high part of the word will just never be used.

          // load data and bit shift
          // mask needs to be bit flipped
          mask_data = ~(pgm_read_byte(mask_ofs) * mul_amt);
          bitmap_data = pgm_read_byte(bofs) * mul_amt;

          if (sRow >= 0) {
            data = sBuffer[ofs];
            data &= (uint8_t)(mask_data);
            data |= (uint8_t)(bitmap_data);
            sBuffer[ofs] = data;
          }
          if (yOffset != 0 && sRow < 7) {
            data = sBuffer[ofs + WIDTH];
            data &= (*((unsigned char *) (&mask_data) + 1));
            data |= (*((unsigned char *) (&bitmap_data) + 1));
            sBuffer[ofs + WIDTH] = data;
          }
          ofs++;
          mask_ofs++;
          bofs++;
        }
        sRow++;
        bofs += w - rendered_width;
        mask_ofs += w - rendered_width;
        ofs += WIDTH - rendered_width;
      }
      break;


    case SPRITE_PLUS_MASK:
      // *2 because we use double the bits (mask + bitmap)
      bofs = (uint8_t *)(bitmap + ((start_h * w) + xOffset) * 2);

      uint8_t xi = rendered_width; // used for x loop below
      uint8_t yi = loop_h; // used for y loop below

      asm volatile(
        "push r28\n" // save Y
        "push r29\n"
        "mov r28, %A[buffer_page2_ofs]\n" // Y = buffer page 2 offset
        "mov r29, %B[buffer_page2_ofs]\n"
        "loop_y:\n"
        "loop_x:\n"
        // load bitmap and mask data
        "lpm %A[bitmap_data], Z+\n"
        "lpm %A[mask_data], Z+\n"

        // shift mask and buffer data
        "tst %[yOffset]\n"
        "breq skip_shifting\n"
        "mul %A[bitmap_data], %[mul_amt]\n"
        "mov %A[bitmap_data], r0\n"
        "mov %B[bitmap_data], r1\n"
        "mul %A[mask_data], %[mul_amt]\n"
        "mov %A[mask_data], r0\n"
        // "mov %B[mask_data], r1\n"


        // SECOND PAGE
        // if yOffset != 0 && sRow < 7
        "cpi %[sRow], 7\n"
        "brge end_second_page\n"
        // then
        "ld %[data], Y\n"
        // "com %B[mask_data]\n" // invert high byte of mask
        "com r1\n"
        "and %[data], r1\n" // %B[mask_data]
        "or %[data], %B[bitmap_data]\n"
        // update buffer, increment
        "st Y+, %[data]\n"

        "end_second_page:\n"
        "skip_shifting:\n"


        // FIRST PAGE
        "ld %[data], %a[buffer_ofs]\n"
        // if sRow >= 0
        "tst %[sRow]\n"
        "brmi end_first_page\n"
        // then
        "com %A[mask_data]\n"
        "and %[data], %A[mask_data]\n"
        "or %[data], %A[bitmap_data]\n"

        "end_first_page:\n"
        // update buffer, increment
        "st %a[buffer_ofs]+, %[data]\n"


        // "x_loop_next:\n"
        "dec %[xi]\n"
        "brne loop_x\n"

        // increment y
        "next_loop_y:\n"
        "dec %[yi]\n"
        "breq finished\n"
        "mov %[xi], %[x_count]\n" // reset x counter
        // sRow++;
        "inc %[sRow]\n"
        "clr __zero_reg__\n"
        // sprite_ofs += (w - rendered_width) * 2;
        "add %A[sprite_ofs], %A[sprite_ofs_jump]\n"
        "adc %B[sprite_ofs], __zero_reg__\n"
        // buffer_ofs += WIDTH - rendered_width;
        "add %A[buffer_ofs], %A[buffer_ofs_jump]\n"
        "adc %B[buffer_ofs], __zero_reg__\n"
        // buffer_ofs_page_2 += WIDTH - rendered_width;
        "add r28, %A[buffer_ofs_jump]\n"
        "adc r29, __zero_reg__\n"

        "rjmp loop_y\n"
        "finished:\n"
        // put the Y register back in place
        "pop r29\n"
        "pop r28\n"
        "clr __zero_reg__\n" // just in case
        : [xi] "+&r" (xi),
        [yi] "+&r" (yi),
        [sRow] "+&a" (sRow), // CPI requires an upper register
        [data] "+&r" (data),
        [mask_data] "+&r" (mask_data),
        [bitmap_data] "+&r" (bitmap_data)
        :
        [x_count] "r" (rendered_width),
        [y_count] "r" (loop_h),
        [sprite_ofs] "z" (bofs),
        [buffer_ofs] "x" (sBuffer+ofs),
        [buffer_page2_ofs] "r" (sBuffer+ofs+WIDTH), // Y pointer
        [buffer_ofs_jump] "r" (WIDTH-rendered_width),
        [sprite_ofs_jump] "r" ((w-rendered_width)*2),
        [yOffset] "r" (yOffset),
        [mul_amt] "r" (mul_amt)

        :
      );
      break;

  }
}
