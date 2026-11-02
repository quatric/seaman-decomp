#include "../decls.h"
undefined4 FUN_8c085e9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = (float)*(int *)(ar4 + 0x458) / 216000.0;
  *(float *)(ar4 + 0x438) = DAT_8c137b1c * fVar3;
  *(float *)(ar4 + 0x43c) = DAT_8c137b20 * fVar3;
  *(float *)(ar4 + 0x440) = DAT_8c137b24 * fVar3;
  *(float *)(ar4 + 0x444) = DAT_8c137b28 * fVar3;
  iVar1 = *(int *)(ar4 + 0x458);
  *(int *)(ar4 + 0x458) = iVar1 + 1;
  uVar2 = 0x34bc0;
  if (0x34bc0 < iVar1 + 1) {
    *(undefined4 *)(ar4 + 0x458) = 0;
    uVar2 = 0x74;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0x7fffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c085e9c\n.set _FUN_8c085e9c, _FUN_8c085e9c_def\n");
