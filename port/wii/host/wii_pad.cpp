/* Controller input: GameCube pad 1 and Wii Remote 1 (+ Nunchuk) fill the Shinobi PDS_PERIPHERAL record of Maple port A
   (0x8c4727c4, 0x34 bytes: on +0x08, off +0x0c, press +0x10, release +0x14, r +0x18, l +0x1a, x1 +0x1c, y1 +0x1e, x2 +0x20, y2 +0x22).
   Until a real controller is used, the scripted presses from wii_main.cpp drive the dialogs (headless Dolphin runs). */
#include "host.h"
#include <gccore.h>
#include <wiiuse/wpad.h>
#include <stdlib.h>

/* Dreamcast digital bits as the Shinobi library reports them (active high) */
enum { DC_C = 0x1, DC_B = 0x2, DC_A = 0x4, DC_START = 0x8, DC_UP = 0x10, DC_DOWN = 0x20, DC_LEFT = 0x40, DC_RIGHT = 0x80,
       DC_Z = 0x100, DC_Y = 0x200, DC_X = 0x400 };
#define PAD_REC 0x8c4727c4u

static unsigned pad_prev;
extern "C" { int pad_script_x, pad_script_y; }   /* scripted analog stick (test runs), used with the scripted buttons */
static int pad_live;                     /* a real controller has been used: scripted input stops */

extern "C" void host_pad_init(void)
{
  PAD_Init();
  WPAD_Init();
  WPAD_SetDataFormat(WPAD_CHAN_0, WPAD_FMT_BTNS_ACC);
}

static int clamp127(int v) { return v > 127 ? 127 : v < -128 ? -128 : v; }

/* returns 1 when real input is in use; *quit is set by HOME / the GameCube Z+Start combination */
extern "C" int host_pad_frame(unsigned scripted, int *quit)
{
  PAD_ScanPads();
  WPAD_ScanPads();
  unsigned on = 0; int x = 0, y = 0, x2 = 0, y2 = 0, l = 0, r = 0;

  unsigned g = PAD_ButtonsHeld(0);
  if (g & PAD_BUTTON_A) on |= DC_A;
  if (g & PAD_BUTTON_B) on |= DC_B;
  if (g & PAD_BUTTON_X) on |= DC_X;
  if (g & PAD_BUTTON_Y) on |= DC_Y;
  if (g & PAD_BUTTON_START) on |= DC_START;
  if (g & PAD_TRIGGER_Z) on |= DC_C;
  if (g & PAD_BUTTON_UP) on |= DC_UP;
  if (g & PAD_BUTTON_DOWN) on |= DC_DOWN;
  if (g & PAD_BUTTON_LEFT) on |= DC_LEFT;
  if (g & PAD_BUTTON_RIGHT) on |= DC_RIGHT;
  if ((g & (PAD_TRIGGER_Z | PAD_BUTTON_START)) == (PAD_TRIGGER_Z | PAD_BUTTON_START)) *quit = 1;
  int sx = PAD_StickX(0), sy = PAD_StickY(0);
  if (abs(sx) > 8 || abs(sy) > 8) { x = sx * 127 / 100; y = -sy * 127 / 100; }      /* GC stick reaches about +-100; Dreamcast y grows downwards */
  int cx = PAD_SubStickX(0), cy = PAD_SubStickY(0);
  if (abs(cx) > 8 || abs(cy) > 8) { x2 = cx * 127 / 100; y2 = -cy * 127 / 100; }
  l = PAD_TriggerL(0); r = PAD_TriggerR(0);

  WPADData *w = WPAD_Data(WPAD_CHAN_0);
  if (w && w->err == WPAD_ERR_NONE) {
    unsigned b = w->btns_h;
    if (b & WPAD_BUTTON_A) on |= DC_A;
    if (b & WPAD_BUTTON_B) on |= DC_B;
    if (b & WPAD_BUTTON_1) on |= DC_X;
    if (b & WPAD_BUTTON_2) on |= DC_Y;
    if (b & WPAD_BUTTON_PLUS) on |= DC_START;
    if (b & WPAD_BUTTON_UP) on |= DC_UP;
    if (b & WPAD_BUTTON_DOWN) on |= DC_DOWN;
    if (b & WPAD_BUTTON_LEFT) on |= DC_LEFT;
    if (b & WPAD_BUTTON_RIGHT) on |= DC_RIGHT;
    if (b & WPAD_BUTTON_HOME) *quit = 1;
    if (w->exp.type == WPAD_EXP_NUNCHUK) {
      if (b & WPAD_NUNCHUK_BUTTON_C) on |= DC_C;
      if (b & WPAD_NUNCHUK_BUTTON_Z) r = 255;
      const joystick_t &js = w->exp.nunchuk.js;
      int jx = (int)js.pos.x - (int)js.center.x, jy = (int)js.pos.y - (int)js.center.y;
      int rx = js.max.x - js.center.x, ry = js.max.y - js.center.y;
      if (rx > 0 && ry > 0 && (abs(jx) > 6 || abs(jy) > 6)) { x = clamp127(jx * 127 / rx); y = clamp127(-jy * 127 / ry); }
    }
  }

  if (on || x || y || l > 40 || r > 40) pad_live = 1;
  if (!pad_live) { on = scripted; x = pad_script_x; y = pad_script_y; x2 = y2 = l = r = 0; }

  GM(unsigned, PAD_REC + 0x08) = on;
  GM(unsigned, PAD_REC + 0x0c) = ~on;
  GM(unsigned, PAD_REC + 0x10) = on & ~pad_prev;
  GM(unsigned, PAD_REC + 0x14) = ~on & pad_prev;
  GM(unsigned short, PAD_REC + 0x18) = (unsigned short)r;
  GM(unsigned short, PAD_REC + 0x1a) = (unsigned short)l;
  GM(short, PAD_REC + 0x1c) = (short)clamp127(x);
  GM(short, PAD_REC + 0x1e) = (short)clamp127(y);
  GM(short, PAD_REC + 0x20) = (short)clamp127(x2);
  GM(short, PAD_REC + 0x22) = (short)clamp127(y2);
  pad_prev = on;
  return pad_live;
}
