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
undefined4 FUN_8c1f6516_def(int ar4,undefined2 *ar5,code *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f6516";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  code *a6;
  undefined4 a7;
  
  iVar1 = (uint)(byte)(((undefined1 *)(unsigned)0x8c26c80c))[ar4] * 0xc;
  *(unsigned *)(unsigned)(iVar1 + -0x73b8d2c0) = ar5;
  *(undefined4 *)(unsigned)(iVar1 + -0x73b8d2bc) = ar7;
  *(unsigned *)(unsigned)(iVar1 + -0x73b8d2b8) = ar6;
  a6 = ar6;
  a7 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c1f6494(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    iVar1 = -2;
  }
  else {
    (*(undefined1 *)(fr0_ - 0x18)) = *(undefined1 *)(unsigned)ar5;
    (*(undefined1 *)(fr0_ - 0x17)) = (undefined1)((ushort)*ar5 >> 8);
    (*(undefined1 *)(fr0_ - 0x16)) = *(undefined1 *)(unsigned)(ar5 + 1);
    (*(undefined1 *)(fr0_ - 0x15)) = *(undefined1 *)(unsigned)((int)ar5 + 3);
    (*(undefined1 *)(fr0_ - 0x14)) = *(undefined1 *)(unsigned)(ar5 + 2);
    (*(undefined1 *)(fr0_ - 0x13)) = *(undefined1 *)(unsigned)((int)ar5 + 5);
    (*(undefined1 *)(fr0_ - 0x12)) = *(undefined1 *)(unsigned)(ar5 + 3);
    (*(undefined1 *)(fr0_ - 0x11)) = (((undefined1 *)(unsigned)0x8c26c824))[*(byte *)(unsigned)((int)ar5 + 7) & 7];
    a6 = (code *)0x0;
    a7 = 0;
    iVar1 = ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(&(*(undefined1 *)(fr0_ - 0x18))); unsigned long t2_ = (unsigned long)(2); unsigned long t3_ = (unsigned long)(((void *)(unsigned)0x8c1f64b6)); *(unsigned *)((((unsigned long)(fr0_ - 24)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 24)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 24)) - 16) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 24)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 24)) - 16); s_FATAL_ERROR_Cannot_get_semap_1f070e(ar4,8,0,0); });
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = 0;
    }
  }
  if ((iVar1 < 0) && (ar6 != (code *)0x0)) {
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)ar6))(iVar1,ar7,a6,a7));
  }
  return 0;
}

__asm__(".globl _FUN_8c1f6516\n.set _FUN_8c1f6516, _FUN_8c1f6516_def\n");
