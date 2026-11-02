#include "../decls.h"
undefined4 FUN_8c02ad88_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = (float)*(int *)(ar4 + 0x458) / 5400.0;
  *(float *)(ar4 + 0x438) = fVar3 * 0.0;
  *(float *)(ar4 + 0x43c) = fVar3 * -0.84705883;
  *(float *)(ar4 + 0x440) = fVar3 * -0.84705883;
  *(float *)(ar4 + 0x444) = fVar3 * -1.0;
  iVar1 = *(int *)(ar4 + 0x458);
  *(int *)(ar4 + 0x458) = iVar1 + 1;
  uVar2 = 0x1518;
  if (0x1518 < iVar1 + 1) {
    *(undefined4 *)(ar4 + 0x458) = 0;
    uVar2 = 0x74;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0x7fffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c02ad88\n.set _FUN_8c02ad88, _FUN_8c02ad88_def\n");
