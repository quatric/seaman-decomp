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
undefined4 FUN_8c01d008_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01d008";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(undefined4 *)(unsigned)0x8c27925c != 0) {
    ar5 = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), asr_lib_bind_recognizer_model(*(undefined4 *)(unsigned)0x8c27925c,0,ar6,ar7));
  }
  if (*(undefined4 *)(unsigned)0x8c279268 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10c3a0(*(undefined4 *)(unsigned)0x8c279268,ar5,ar6,ar7));
  }
  if (*(undefined4 *)(unsigned)0x8c279264 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10ba7c(*(undefined4 *)(unsigned)0x8c279264,ar5,ar6,ar7));
  }
  if (*(undefined4 *)(unsigned)0x8c279260 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10bad4(*(undefined4 *)(unsigned)0x8c279260,ar5,ar6,ar7));
  }
  if (*(undefined4 *)(unsigned)0x8c27925c != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10ba20(*(undefined4 *)(unsigned)0x8c27925c,ar5,ar6,ar7));
  }
  if (*(undefined4 *)(unsigned)0x8c279258 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10b8c6(*(undefined4 *)(unsigned)0x8c279258,ar5,ar6,ar7));
  }
  *(undefined4 *)(unsigned)0x8c279258 = 0;
  *(undefined4 *)(unsigned)0x8c27925c = 0;
  *(undefined4 *)(unsigned)0x8c279260 = 0;
  *(undefined4 *)(unsigned)0x8c279264 = 0;
  *(undefined4 *)(unsigned)0x8c2791b8 = 2;
  return 2;
}

__asm__(".globl _FUN_8c01d008\n.set _FUN_8c01d008, _FUN_8c01d008_def\n");
