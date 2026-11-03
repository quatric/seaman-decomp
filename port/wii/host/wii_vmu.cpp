/* Memory card (VMU) in drive A1, kept as files in sd:/seaman/vmu. The game's memory-card manager (request queue at +0x244c,
   0x28-byte records: id, status +4, op +8, next +0xc, name +0x10, blocks/result +0x20, buffer +0x24) runs as written; the host
   carries out the op at the head of the queue at once (memcard_run_request 8c01a760) instead of the Shinobi backup library and
   the Maple bus. Files hold exactly the bytes the game writes (VMS header, icon and data, whole 512-byte blocks).
   The VMU game file (op 3) is remembered by name in sd:/seaman/vmu/.game. */
#include "host.h"
#include <sys/stat.h>
#include <dirent.h>
#include <unistd.h>
extern "C" {
static const char *DIR_ = "sd:/seaman/vmu";
static const unsigned BLOCKS = 200;                     /* user blocks on a standard VMU */
static const unsigned RAW_AT = 0x11;                    /* ops 1 and 4 (buLoadFileEx / the 0x14 write, argument 0x11) start at this block */
enum { ST_FAIL = 0, ST_DONE = 1 };

static void vmu_path(char *out, unsigned name)
{
  char n[17]; memcpy(n, (const char *)(unsigned long)name, 16); n[16] = 0;
  for (char *p = n; *p; p++) if (*p == '/' || *p == '\\' || *p == ':') *p = '_';
  snprintf(out, 64, "%s/%s", DIR_, n);
}
static long file_size(const char *p) { struct stat st; return stat(p, &st) == 0 ? (long)st.st_size : -1; }
static unsigned used_blocks(void)
{
  unsigned n = 0; DIR *d = opendir(DIR_); struct dirent *e; char p[300];
  if (!d) return 0;
  while ((e = readdir(d))) {
    if (e->d_name[0] == '.') continue;
    snprintf(p, sizeof p, "%s/%s", DIR_, e->d_name);
    long s = file_size(p); if (s > 0) n += (unsigned)((s + 511) / 512);
  }
  closedir(d);
  return n;
}
static unsigned free_blocks(void) { unsigned u = used_blocks(); return u >= BLOCKS ? 0 : BLOCKS - u; }
static bool game_name(char *out)
{
  char p[64]; snprintf(p, sizeof p, "%s/.game", DIR_);
  FILE *f = fopen(p, "rb"); if (!f) return false;
  int n = (int)fread(out, 1, 16, f); fclose(f); out[n > 0 ? n : 0] = 0;
  char q[64]; snprintf(q, sizeof q, "%s/%s", DIR_, out);
  return out[0] && file_size(q) >= 0;
}

/* 8c01a3b4 (Class_129a24_load_icon_is_done -> vmu_load_user_icon): the card in the device slot a1 is mounted at once.
   Keeps the drive mapping and the VM_User_Icon.VMI load (its data at [+0x10] goes into every VMS header); no LCD. */
unsigned long host_vmu_ready(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
  if (GM(int, a0 + 4) != (int)a1 || GM(int, 0x8c2791b0) != 3) {
    unsigned drive, port;
    switch ((int)a1) { case 6: drive = 2; port = 7; break; case 0xc: drive = 4; port = 0xd; break; case 0x12: drive = 6; port = 0x13; break; default: drive = 0; port = 1; }
    GM(int, a0 + 4) = (int)a1; GM(unsigned, a0 + 8) = port; GM(unsigned, 0x8c2791b4) = drive;
    mkdir(DIR_, 0777);
    typedef unsigned long (*fn)(unsigned long, unsigned long, unsigned long, unsigned long);
    if (((fn)xlat(0x8c0213bc))(0x8c3eb334, 0x8c12fb18, 0x8c12fb29, a0 + 0x10) == 0) GM(unsigned, a0 + 0x10) = 0;
    GM(unsigned, a0 + 0x14) = 0; GM(unsigned, a0 + 0x18) = 0;
    GM(int, 0x8c2791b0) = 3;
    host_log("vmu: drive %u ready (%u blocks free)\n", drive, free_blocks());
  }
  return 1;
}

/* 8c01a760: carry out the request at the head of the queue (ops as in memcard_run_request) */
unsigned long host_memcard_run(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
  typedef unsigned long (*fn)(unsigned long, unsigned long, unsigned long, unsigned long);
  int idx = GM(int, a0);
  unsigned rec = (unsigned)a0 + 0x244c + idx * 0x28, name = rec + 0x10;
  int op = GM(int, rec + 8);
  unsigned blocks = GM(unsigned, rec + 0x20), buf = GM(unsigned, rec + 0x24);
  char p[64]; vmu_path(p, name);
  int st = ST_FAIL;
  switch (op) {
  case 0: case 1: {                                     /* 0: load the file, at most the buffer's blocks; 1: from block 0x11 */
    FILE *f = fopen(p, "rb");
    if (f) {
      size_t n = (op == 1 && fseek(f, RAW_AT * 512, SEEK_SET)) ? 0 : fread((void *)(unsigned long)buf, 1, blocks * 512, f);
      fclose(f); st = n > 0 ? ST_DONE : ST_FAIL;
    }
    break; }
  case 2:                                               /* data file with VMS header; a newer save of it queued -> skip */
    if (((fn)xlat(0x8c01aa94))(a0, 0, 0, 0) == 1) return ((fn)xlat(0x8c01a98c))(a0, a1, a2, a3);
    /* fall through */
  case 3: case 4: {                                     /* 3: the VMU game file with icon; 4: write into a file from block 0x11 */
    GM(unsigned, a0 + 0x18) = 0x1e;
    long have = file_size(p);
    unsigned at = op == 4 ? RAW_AT : 0, hb = have > 0 ? (unsigned)((have + 511) / 512) : 0;
    if (at + blocks > hb && at + blocks - hb > free_blocks()) break;   /* only the growth needs free blocks */
    FILE *f = fopen(p, op == 4 && have >= 0 ? "r+b" : "wb");
    if (f) {
      size_t n = (at && fseek(f, at * 512, SEEK_SET)) ? 0 : fwrite((const void *)(unsigned long)buf, 1, blocks * 512, f);
      fclose(f); st = n == blocks * 512 ? ST_DONE : ST_FAIL;
    }
    if (st == ST_DONE && op == 3) { char g[64]; snprintf(g, sizeof g, "%s/.game", DIR_); FILE *q = fopen(g, "wb"); if (q) { fputs(p + strlen(DIR_) + 1, q); fclose(q); } }
    break; }
  case 5: st = remove(p) == 0 ? ST_DONE : ST_FAIL; break;  /* delete */
  case 6: st = file_size(p) >= 0 ? ST_DONE : ST_FAIL; break; /* exists */
  case 7: {                                             /* game file name check: 1 same, 5 another (name copied), 4 none */
    char g[20];
    if (!game_name(g)) st = 4;
    else if (!strncmp(g, (const char *)(unsigned long)name, 16)) st = 1;
    else { strncpy((char *)(unsigned long)name, g, 16); st = 5; }
    break; }
  case 8: { long s = file_size(p); if (s >= 0) { GM(unsigned, rec + 0x20) = (unsigned)((s + 511) / 512); st = ST_DONE; } break; }
  case 9: GM(unsigned, rec + 0x20) = free_blocks(); st = ST_DONE; break;
  default: st = ST_DONE; break;                         /* 10..13: Maple conditions and the LCD */
  }
  GM(int, rec + 4) = st;
  { static int nl; if ((op <= 5 || nl < 40) && nl++ < 400) host_log("vmu: op %d '%.16s' blocks %u -> %d\n", op, (const char *)(unsigned long)name, blocks, st); }
  return 0x2450;
}

/* Shinobi backup calls memcard_save_game_file makes itself */
unsigned long host_vmu_game_name(unsigned long drive, unsigned long out, unsigned long c, unsigned long d)   /* 8c1fc258 */
{
  char g[20];
  if (!game_name(g)) return (unsigned long)(long)-0xfb;
  if (out) strcpy((char *)(unsigned long)out, g);
  return 0;
}
unsigned long host_vmu_free_blocks(unsigned long drive, unsigned long b, unsigned long c, unsigned long d) { return free_blocks(); }   /* 8c1fc16a */
unsigned long host_ret0(unsigned long a, unsigned long b, unsigned long c, unsigned long d) { return 0; }
}
