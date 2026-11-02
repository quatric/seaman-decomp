#include "../decls.h"
undefined4 FUN_8c1f0312_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 == 1) {
    uVar1 = FUN_8c1f4694();
    return uVar1;
  }
  if (ar4 == 2) {
    uVar1 = FUN_8c1f4662();
    return uVar1;
  }
  if (ar4 == 4) {
    uVar1 = FUN_8c1f46e8();
    return uVar1;
  }
  if (ar4 == 3) {
    uVar1 = FUN_8c1f46a8();
    return uVar1;
  }
  if (ar4 == 6) {
    uVar1 = FUN_8c1f46d4();
    return uVar1;
  }
  if (ar4 == 5) {
    uVar1 = FUN_8c1f4680();
    return uVar1;
  }
  if (ar4 == 0) {
    uVar1 = FUN_8c1f4702();
    return uVar1;
  }
  if (ar4 != 7) {
    if (ar4 == 8) {
      uVar1 = FUN_8c1f4734();
      return uVar1;
    }
    if (ar4 != 9) {
      return 0xffffffff;
    }
    uVar1 = FUN_8c1f476e();
    return uVar1;
  }
  uVar1 = FUN_8c1f4720();
  return uVar1;
}

__asm__(".globl _FUN_8c1f0312\n.set _FUN_8c1f0312, _FUN_8c1f0312_def\n");
