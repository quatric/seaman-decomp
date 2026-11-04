/* Update check (libwiiupdate, port/wii/libwiiupdate): at boot a background thread asks GitHub for the newest release of
   quatric/seaman-decomp and compares its tag with SEAMAN_VERSION (port/wii/VERSION, passed in by tools/wii_link.sh). Failures are
   silent: no network or no answer just means no notice. When a newer release is out, a box over the game offers it; while the box
   is open it has the controller (A: update now, B: later). The release's Homebrew Channel zip is unpacked over the app's own folder
   (only boot.dol, meta.xml and icon.png are replaced), and after it is done A goes back to the loader. */
#include "host.h"
#include <gccore.h>
#include <stdio.h>
#include <wiiupdate.h>

#ifndef SEAMAN_VERSION
#define SEAMAN_VERSION "0.0.0"
#endif
#ifndef UPDATE_REPO
#define UPDATE_REPO "seaman-decomp"                      /* test builds can point it at another quatric repository with releases */
#endif

extern "C" void gx_overlay(const char *const *lines, int n);

static bool started, open_;
static wiiupdate_popup pop;

extern "C" void host_update_start(const char *argv0)
{
  static const char *const files[] = { "boot.dol", "meta.xml", "icon.png", NULL };
  WIIUPDATE_SetAppPath(argv0);
  WIIUPDATE_SetUpdateFiles(files);
  started = WIIUPDATE_Start("quatric", UPDATE_REPO, SEAMAN_VERSION) == 0;
  host_log("update: checking for a release newer than %s%s\n", SEAMAN_VERSION, started ? "" : " (could not start)");
}

/* once a frame with the WPAD_BUTTON_* bits pressed this frame: returns 1 while the notice is open (the game gets no input then);
   *quit is set when the update is installed and the player chose to leave */
extern "C" int host_update_frame(unsigned down, int *quit)
{
  if (!started) return 0;
  static int last_state = -1;
  int st = WIIUPDATE_State();
  if (st != last_state) { host_log("update: state %d (latest %s)\n", st, WIIUPDATE_Latest() ? WIIUPDATE_Latest() : "-"); last_state = st; }
  int r = WIIUPDATE_Popup(down, &pop);
  if (r == WIIUPDATE_POPUP_EXIT) { host_log("update: installed to %s, leaving\n", WIIUPDATE_InstallDir()); *quit = 1; }
  open_ = r == WIIUPDATE_POPUP_OPEN;
  return open_;
}

/* from gx_frame, after the game's lists */
extern "C" void host_update_draw(void)
{
  if (!open_) return;
  char bar[80] = "";
  if (pop.progress >= 0) {
    int n = pop.progress * 40 / 100; char *p = bar; *p++ = '[';
    for (int i = 0; i < 40; i++) *p++ = i < n ? '#' : '.';
    snprintf(p, bar + sizeof bar - p, "] %d%%", pop.progress);
  }
  const char *lines[5] = { pop.title ? pop.title : "", pop.text, pop.detail ? pop.detail : "", bar, pop.hint ? pop.hint : "" };
  gx_overlay(lines, 5);
}
