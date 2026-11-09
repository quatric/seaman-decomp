/* Controller input (libwiiinput): every controller the Wii can read fills the Shinobi PDS_PERIPHERAL record of Maple port A
   (0x8c4727c4, 0x34 bytes: on +0x08, off +0x0c, press +0x10, release +0x14, r +0x18, l +0x1a, x1 +0x1c, y1 +0x1e, x2 +0x20, y2 +0x22).
   - GameCube pads, in the console's ports, a Wii U GameCube adapter or a USB pad with a Nintendont layout: A/B/X/Y/Start, Z as C,
     the analogue triggers as L/R, the C stick as the second stick
   - Wii Remote 1 (sideways buttons 1/2 as X/Y, + as Start, - as L) with a Nunchuk (stick, C, Z as R) or a Classic Controller (L/R as
     the triggers, - as C, right stick as the second stick)
   - a USB keyboard through libwiiinput's keyboard map (arrows, Enter = A, Backspace = B, X, Y; Space = Start here)
   - the Wii Remote's IR pointer steers the hand like the stick does (pointing away from the screen centre = moving that way)
   Buttons from all of them are combined; the stick pushed furthest wins. HOME (or Z+Start on a GameCube pad) quits.
   While libwiiupdate's notice is open (wii_update.cpp) the game gets no input.
   Until a real controller is used, the scripted presses from wii_main.cpp drive the dialogs (headless Dolphin runs). */
#include "host.h"
#include <gccore.h>
#include <wiiuse/wpad.h>
#include <input_wii.h>
#include <stdlib.h>

/* Dreamcast digital bits as the Shinobi library reports them (active high) */
enum { DC_C = 0x1, DC_B = 0x2, DC_A = 0x4, DC_START = 0x8, DC_UP = 0x10, DC_DOWN = 0x20, DC_LEFT = 0x40, DC_RIGHT = 0x80,
       DC_Z = 0x100, DC_Y = 0x200, DC_X = 0x400, DC_TR = 0x10000, DC_TL = 0x20000 };
/* Shinobi also reports the analogue triggers as digital buttons (TR/TL above) once pulled past half way; the game reads only those
   bits for its L/R presses (input_l_pressed 8c01ec20, input_r_held 8c01ec68): L switches the tank's control mode, which is what
   routes the D-pad to the heater / air panel */
enum { TRIGGER_ON = 0x80 };
#define PAD_REC 0x8c4727c4u

static unsigned pad_prev;
extern "C" { int pad_script_x, pad_script_y, pad_script_l, pad_script_r; }   /* scripted analog stick (test runs), used with the scripted buttons */
static int pad_live;                     /* a real controller has been used: scripted input stops */

extern "C" void host_pad_init(void)
{
  INPUT_InitEx(INPUT_INIT_NO_MOUSE);   /* also starts PAD, WPAD (with the IR pointer) and USB */
  INPUT_SetScreenSize(640, 480);
  INPUT_KeyboardMapSet(0x2c, WPAD_BUTTON_PLUS);                /* Space: Start */
}

static int clamp127(int v) { return v > 127 ? 127 : v < -128 ? -128 : v; }

/* Radial dead zone for a stick whose full travel is +-range (centre 0): inside `dead` the stick reads 0, outside it the rest of the
   travel is stretched to 127, so a worn or off-centre stick no longer drifts the hand cursor. Result -128..127. */
#include <math.h>
static void deadzone(int vx, int vy, int range, int dead, int &ox, int &oy)
{
  float m = sqrtf((float)(vx * vx + vy * vy));
  if (m <= (float)dead) { ox = oy = 0; return; }
  float k = (m - dead) / (float)(range - dead); if (k > 1.f) k = 1.f;
  float s = k * 127.f / m;
  ox = clamp127((int)(vx * s)); oy = clamp127((int)(vy * s));
}

/* what one frame's controllers add up to */
struct In { unsigned on; int x, y, x2, y2, l, r; int quit; };
static void stick(int &x, int &y, int nx, int ny)          /* keep the one pushed furthest */
{
  if (nx * nx + ny * ny > x * x + y * y) { x = nx; y = ny; }
}

/* a GameCube-style pad: buttons PAD_BUTTON_* / PAD_TRIGGER_*, sticks about +-100 with y up, triggers 0..255 */
static void gc_pad(In &in, unsigned g, int sx, int sy, int cx, int cy, int l, int r)
{
  if (g & PAD_BUTTON_A) in.on |= DC_A;
  if (g & PAD_BUTTON_B) in.on |= DC_B;
  if (g & PAD_BUTTON_X) in.on |= DC_X;
  if (g & PAD_BUTTON_Y) in.on |= DC_Y;
  if (g & PAD_BUTTON_START) in.on |= DC_START;
  if (g & PAD_TRIGGER_Z) in.on |= DC_C;
  if (g & PAD_BUTTON_UP) in.on |= DC_UP;
  if (g & PAD_BUTTON_DOWN) in.on |= DC_DOWN;
  if (g & PAD_BUTTON_LEFT) in.on |= DC_LEFT;
  if (g & PAD_BUTTON_RIGHT) in.on |= DC_RIGHT;
  if ((g & (PAD_TRIGGER_Z | PAD_BUTTON_START)) == (PAD_TRIGGER_Z | PAD_BUTTON_START)) in.quit = 1;
  int dx, dy;                                                                              /* Dreamcast y grows downwards */
  deadzone(sx, -sy, 100, 22, dx, dy); if (dx || dy) stick(in.x, in.y, dx, dy);
  deadzone(cx, -cy, 100, 22, dx, dy); if (dx || dy) stick(in.x2, in.y2, dx, dy);
  if (l > in.l) in.l = l;
  if (r > in.r) in.r = r;
}

/* a Wii Remote button mask (WPAD_BUTTON_*), as the Wii Remote, Classic Controller and keyboard map report them */
static void wpad_buttons(In &in, unsigned b)
{
  if (b & WPAD_BUTTON_A) in.on |= DC_A;
  if (b & WPAD_BUTTON_B) in.on |= DC_B;
  if (b & WPAD_BUTTON_1) in.on |= DC_X;
  if (b & WPAD_BUTTON_2) in.on |= DC_Y;
  if (b & WPAD_BUTTON_PLUS) in.on |= DC_START;
  if (b & WPAD_BUTTON_UP) in.on |= DC_UP;
  if (b & WPAD_BUTTON_DOWN) in.on |= DC_DOWN;
  if (b & WPAD_BUTTON_LEFT) in.on |= DC_LEFT;
  if (b & WPAD_BUTTON_RIGHT) in.on |= DC_RIGHT;
  if (b & WPAD_BUTTON_HOME) in.quit = 1;
}

static void joy(const joystick_t &js, int &x, int &y)       /* Nunchuk / Classic stick to -128..127, y down */
{
  int jx = (int)js.pos.x - (int)js.center.x, jy = (int)js.pos.y - (int)js.center.y;
  int rx = js.max.x - js.center.x, ry = js.max.y - js.center.y;
  x = y = 0;
  if (rx > 0 && ry > 0) deadzone(jx * 100 / rx, -jy * 100 / ry, 100, 22, x, y);   /* normalised to +-100 on both axes */
}

static void wii_remote(In &in, int chan)
{
  WPADData *w = WPAD_Data(chan);
  if (!w || w->err != WPAD_ERR_NONE) return;
  unsigned b = w->btns_h;
  wpad_buttons(in, b);
  if (b & WPAD_BUTTON_MINUS) in.l = 255;   /* the Wii Remote has no L trigger: - is L (Nunchuk Z is R) */
  int x, y;
  if (w->exp.type == WPAD_EXP_NUNCHUK) {
    if (b & WPAD_NUNCHUK_BUTTON_C) in.on |= DC_C;
    if (b & WPAD_NUNCHUK_BUTTON_Z) in.r = 255;
    joy(w->exp.nunchuk.js, x, y); stick(in.x, in.y, x, y);
  } else if (w->exp.type == WPAD_EXP_CLASSIC) {
    if (b & WPAD_CLASSIC_BUTTON_A) in.on |= DC_A;
    if (b & WPAD_CLASSIC_BUTTON_B) in.on |= DC_B;
    if (b & WPAD_CLASSIC_BUTTON_X) in.on |= DC_X;
    if (b & WPAD_CLASSIC_BUTTON_Y) in.on |= DC_Y;
    if (b & WPAD_CLASSIC_BUTTON_PLUS) in.on |= DC_START;
    if (b & WPAD_CLASSIC_BUTTON_MINUS) in.on |= DC_C;
    if (b & WPAD_CLASSIC_BUTTON_UP) in.on |= DC_UP;
    if (b & WPAD_CLASSIC_BUTTON_DOWN) in.on |= DC_DOWN;
    if (b & WPAD_CLASSIC_BUTTON_LEFT) in.on |= DC_LEFT;
    if (b & WPAD_CLASSIC_BUTTON_RIGHT) in.on |= DC_RIGHT;
    if (b & WPAD_CLASSIC_BUTTON_HOME) in.quit = 1;
    const classic_ctrl_t &c = w->exp.classic;
    int l = (b & (WPAD_CLASSIC_BUTTON_FULL_L | WPAD_CLASSIC_BUTTON_ZL)) ? 255 : (int)(c.l_shoulder * 255);
    int r = (b & (WPAD_CLASSIC_BUTTON_FULL_R | WPAD_CLASSIC_BUTTON_ZR)) ? 255 : (int)(c.r_shoulder * 255);
    if (l > in.l) in.l = l;
    if (r > in.r) in.r = r;
    joy(c.ljs, x, y); stick(in.x, in.y, x, y);
    joy(c.rjs, x, y); stick(in.x2, in.y2, x, y);
  }
}

extern "C" int host_update_frame(unsigned down, int *quit);   /* wii_update.cpp */

/* returns 1 when real input is in use; *quit is set by HOME / the GameCube Z+Start combination, or after an update is installed */
extern "C" int host_pad_frame(unsigned scripted, int *quit)
{
  INPUT_Update();                        /* scans PAD, WPAD, the keyboard, the adapter and USB pads */
  bool notice = host_update_frame(INPUT_ButtonsDown(), quit);   /* an update notice is open: it has the controller */
  In in = {};
  for (int p = 0; p < 4; p++)
    gc_pad(in, PAD_ButtonsHeld(p), PAD_StickX(p), PAD_StickY(p), PAD_SubStickX(p), PAD_SubStickY(p), PAD_TriggerL(p), PAD_TriggerR(p));
  input_gc_pad g;
  for (int p = 0; p < 4; p++) {
    if (INPUT_GCAdapterPad(p, &g)) gc_pad(in, g.buttons, g.stick_x, g.stick_y, g.substick_x, g.substick_y, g.trigger_l, g.trigger_r);
    if (INPUT_HIDPadPad(p, &g)) gc_pad(in, g.buttons, g.stick_x, g.stick_y, g.substick_x, g.substick_y, g.trigger_l, g.trigger_r);
  }
  wii_remote(in, WPAD_CHAN_0);
  { /* Wii Remote IR: the game's hand moves with the analogue stick (a speed, not a place), so the pointer steers it the same way: the
       further the remote points from the middle of the screen, the faster the hand goes that way; the middle of the screen holds it still */
    float px, py;
    if (INPUT_Pointer(&px, &py)) {
      int vx = (int)((px - 320.f) * 100.f / 280.f), vy = (int)((py - 240.f) * 100.f / 210.f), dx, dy;
      if (vx > 100) vx = 100; if (vx < -100) vx = -100; if (vy > 100) vy = 100; if (vy < -100) vy = -100;
      deadzone(vx, vy, 100, 18, dx, dy); if (dx || dy) stick(in.x, in.y, dx, dy);   /* screen y grows downwards, like the Dreamcast's */
    } }
  wpad_buttons(in, INPUT_KeyboardPadHeld());
  if (in.quit) *quit = 1;

  unsigned on = in.on; int x = in.x, y = in.y, x2 = in.x2, y2 = in.y2, l = in.l, r = in.r;
  if (on || x || y || l > 40 || r > 40) pad_live = 1;
  if (!pad_live) { on = scripted; x = pad_script_x; y = pad_script_y; x2 = y2 = 0; l = pad_script_l; r = pad_script_r; }
  if (notice) { on = 0; x = y = x2 = y2 = l = r = 0; }
  if (l >= TRIGGER_ON) on |= DC_TL;
  if (r >= TRIGGER_ON) on |= DC_TR;

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
