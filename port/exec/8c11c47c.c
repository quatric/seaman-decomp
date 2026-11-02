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
undefined4 FUN_8c11c47c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11c47c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  undefined4 uVar1;
  undefined2 in_r3 = 0;
  byte unaff_r12 = 0;
  int unaff_r14 = 0;
  
  *(undefined2 *)(unsigned)(in_r0 + unaff_r14) = in_r3;
  *(ushort *)(unsigned)(unaff_r14 + 0x58) = (ushort)(byte)ar6;
  if (unaff_r12 == 0) {
LAB_8c11c4a6:
    if ((byte)ar6 != 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11c972(ar4,(uint)(byte)ar6,4,ar7));
      *(undefined4 *)(unsigned)(unaff_r14 + 0x5c) = uVar1;
      if (*(int *)(unsigned)(unaff_r14 + 0x5c) == 0) goto LAB_8c11c4ca;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11c972(ar4,(uint)unaff_r12,8,ar7));
    *(undefined4 *)(unsigned)(unaff_r14 + 0x54) = uVar1;
    if (*(int *)(unsigned)(unaff_r14 + 0x54) != 0) goto LAB_8c11c4a6;
LAB_8c11c4ca:
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c11c47c\n.set _FUN_8c11c47c, _FUN_8c11c47c_def\n");
