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
undefined4 FUN_8c207da0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c207da0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 ar4_00;
  int ar4_01;
  int ar5_00;
  uint ar5_01;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c21214e(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)0x8c4a9bd4 = (uint)(ar4 != 0);
  *(undefined4 *)(unsigned)0x8c4a9bd8 = (uint)(ar5 != 0);
  ar4_01 = (int)0x280;
  if (*(undefined4 *)(unsigned)0x8c4a9bcc == 1) {
    ar5_00 = (int)0x1e0;
    ar7_00 = 0;
  }
  else {
    if (((*(undefined4 *)(unsigned)0x8c4a9bcc & 1) == 1) || ((*(undefined4 *)(unsigned)0x8c4a9bcc & 0x2c) == 0)) {
      ar7_00 = 0;
    }
    else {
      ar7_00 = 1;
    }
    if ((*(undefined4 *)(unsigned)0x8c4a9bcc & 0x10) == 0) {
      ar4_01 = (int)0x140;
    }
    if ((*(undefined4 *)(unsigned)0x8c4a9bcc & 0x20) == 0) {
      ar5_00 = (int)0xf0;
    }
    else {
      ar5_00 = (int)0x1e0;
    }
  }
  do {
  } while (*(undefined4 *)(unsigned)0x8c4a9f1c == *(undefined4 *)(unsigned)0x8c4a9f1c);
  ar6_00 = *(undefined4 *)(unsigned)0x8c4a9bd0;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25dc60(ar4_01,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2079a0(ar4_01,ar5_00,ar6_00,ar7_00));
  puVar1 = ((void *)(unsigned)0x8c20a844);
  (vsp = ((unsigned long)(fr0_ - 4)), pvr_20a844(0x44,*(undefined4 *)(unsigned)0x8c4a9e74 & 0xfffffffe,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))((int)0xe8,*(undefined4 *)(unsigned)0x8c4a9eb0,ar6_00,ar7_00));
  ar5_01 = *(undefined4 *)(unsigned)0x8c4a9e74;
  ar4_00 = 0x44;
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x44,ar5_01,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c205a40(ar4_00,ar5_01,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(
             *(undefined4 *)(unsigned)0x8c4a9c14); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c25d7c6))))
            (*(undefined4 *)(unsigned)0x8c4a9c18 >> 7,((undefined1 *)(unsigned)1)[0x8c4a9c18] >> 7,((undefined1 *)(unsigned)2)[0x8c4a9c18] >> 7,((undefined1 *)(unsigned)3)[0x8c4a9c18] >> 7); });
  *(undefined4 *)(unsigned)0x8c4a9e54 = 1;
  do {
  } while (*(undefined4 *)(unsigned)0x8c4a9f1c == *(undefined4 *)(unsigned)0x8c4a9f1c);
  return 0;
}

__asm__(".globl _FUN_8c207da0\n.set _FUN_8c207da0, _FUN_8c207da0_def\n");
