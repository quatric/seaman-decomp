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
undefined4 FUN_8c263bfe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c263bfe";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int *a4;
  int iVar3;
  
  iVar3 = ar4;
  uVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263c64(ar4,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c260ca0(iVar3,ar5,ar6,ar7); });
  for (iVar3 = 0; iVar3 < *(char *)(unsigned)(ar4 + 3); iVar3 = iVar3 + 1) {
    a4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 * 4 + ar4 + 0x18));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x14))))(a4,ar5,ar6,ar7));
  }
  uVar2 = uVar1;
  ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c262c3c(*(undefined4 *)(unsigned)(ar4 + 4),uVar1,ar6,ar7); });
  *(undefined4 *)(unsigned)(ar4 + 0x14) = uVar2;
  uVar2 = *(undefined4 *)(unsigned)(ar4 + 4);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262c50(uVar2,uVar1,ar6,ar7));
  *(undefined1 *)(unsigned)(ar4 + 1) = 1;
  *(undefined1 *)(unsigned)(ar4 + 2) = 3;
  *(undefined4 *)(unsigned)(ar4 + 0x4c) = 0;
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(0x4c); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c260cc8(uVar2,uVar1,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c263bfe\n.set _FUN_8c263bfe, _FUN_8c263bfe_def\n");
