#include "../decls.h"
undefined4 FUN_8c25fdbe_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  uint in_r2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_r12;
  ushort *unaff_r14;
  
  uVar4 = (uint)*unaff_r14;
  if ((int)in_r2 < 0) {
    uVar3 = (int)uVar4 >> (~in_r2 & 0x1f) + 1;
  }
  else {
    uVar3 = uVar4 << (in_r2 & 0x1f);
  }
  if ((uVar3 & 0xff | uVar4 << 8 & 0xff00 & 0xffff) == 0x8000) {
    uVar1 = FUN_8c25fca4(unaff_r12,unaff_r14,ar6,ar7);
    return uVar1;
  }
  uVar1 = ar6;
  iVar2 = FUN_8c260636(unaff_r14,ar5,ar6,ar7);
  if (iVar2 != 0) {
    uVar1 = FUN_8c26045c(ar6);
    return uVar1;
  }
  iVar2 = FUN_8c260c2c(unaff_r14,ar5,uVar1,ar7);
  if (iVar2 != 0) {
    uVar1 = FUN_8c260810(ar6);
    return uVar1;
  }
  iVar2 = FUN_8c25f01e(unaff_r14,ar5,uVar1,ar7);
  if (iVar2 != 0) {
    uVar1 = FUN_8c25f0ea(ar6);
    return uVar1;
  }
  iVar2 = FUN_8c25f64c(unaff_r14,ar5,uVar1,ar7);
  if (iVar2 != 0) {
    uVar1 = FUN_8c25f742(ar6);
    return uVar1;
  }
  return 0;
}

__asm__(".globl _FUN_8c25fdbe\n.set _FUN_8c25fdbe, _FUN_8c25fdbe_def\n");
