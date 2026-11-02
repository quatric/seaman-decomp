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
undefined4 FUN_8c263b34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c263b34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  int *a4;
  int iVar1;
  undefined4 uVar2;
  
  ar5_00 = ar5;
  for (iVar1 = 0; iVar1 < *(char *)(unsigned)(ar4 + 3); iVar1 = iVar1 + 1) {
    a4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar1 * 4 + ar4 + 0x18));
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x14))))(a4,ar5,ar6,ar7));
  }
  uVar2 = ar5_00;
  ({ unsigned long ri0_ = (unsigned long)(ar5_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c262c3c(*(undefined4 *)(unsigned)(ar4 + 4),ar5_00,ar6,ar7); });
  *(undefined4 *)(unsigned)(ar4 + 0x14) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c262c50(*(undefined4 *)(unsigned)(ar4 + 4),ar5_00,ar6,ar7));
  *(undefined1 *)(unsigned)(ar4 + 1) = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x4c) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x71) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x8c) = 0x7fffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x90) = 0xffffffff;
  return 0x90;
}

__asm__(".globl _FUN_8c263b34\n.set _FUN_8c263b34, _FUN_8c263b34_def\n");
