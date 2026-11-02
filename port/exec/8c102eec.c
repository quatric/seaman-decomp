#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * s_HIGYOLINE_102eee_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_HIGYOLINE_102eee";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c02f064(ar4,ar5,ar6,ar7));
  *ar4 = ((undefined1 *)(unsigned)0x8c12c3c4);
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0300a4(ar4 + 0x27,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c02eac0(ar4 + 0x207,ar5,ar6,ar7));
  *(undefined1 *)(unsigned)(ar4 + 0x20) = 0;
  ar4[0xe1] = 0xffffffff;
  ar4[0x213] = 0;
  ar4[0x214] = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x855) = 0;
  ar4[0x217] = 0;
  ar4[0x216] = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x215) = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); strcpy(ar4 + 0xd9,"HIGYOLINE",ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); strcpy(ar4 + 0x27,"HIGYOLINE1",ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); strcpy(ar4 + 0x2f,"STATUS_FORMAT",ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); strcpy(ar4 + 0x37,((undefined1 *)(unsigned)0x8c1eeec3),ar6,ar7); });
  ar4[0xe2] = 4;
  ar4[0x210] = 0;
  ar4[0x211] = 0;
  ar4[0x212] = 0x22;
  *(undefined1 *)(unsigned)((int)ar4 + 0x9a) = 2;
  *(undefined1 *)(unsigned)((int)ar4 + 0x865) = 0;
  ar4[0x21c] = 1;
  ar4[0x21b] = 1;
  ar4[0x21a] = 1;
  ar4[0x21c] = 0;
  ar4[0x21d] = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x219) = 0;
  ar4[0x218] = 0x1b;
  ar4[0x21e] = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x21f) = 0;
  ar4[0x220] = 0;
  ar4[0x221] = 0;
  ar4[0x222] = 0;
  ar4[0x223] = 0;
  return ar4;
}

__asm__(".globl _s_HIGYOLINE_102eee\n.set _s_HIGYOLINE_102eee, _s_HIGYOLINE_102eee_def\n");
