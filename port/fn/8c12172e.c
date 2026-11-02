#include "../decls.h"
uint FUN_8c12172e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  float fVar2;
  undefined8 in_dr4;
  float fVar3;
  float fVar4;
  undefined8 in_dr6;
  float fVar5;
  bool bVar6;
  
  fVar5 = (float)((ulonglong)in_dr6 >> 0x20);
  fVar4 = fVar5 + *(float *)(ar4 + 0x60);
  fVar3 = (float)((ulonglong)in_dr4 >> 0x20);
  fVar2 = (float)in_dr4 + -4.0;
  if (fVar2 < fVar5) {
    fVar2 = fVar5;
  }
  if (fVar2 < fVar4) {
    fVar4 = (fVar4 - fVar2) * 0.5 + fVar2;
  }
  if (fVar4 < *(float *)(ar4 + 100)) {
    fVar4 = *(float *)(ar4 + 100);
  }
  if (*(uint *)(ar4 + 0x38) < *(uint *)(ar4 + 0x54)) {
    *(int *)(ar4 + 0x38) = *(int *)(ar4 + 0x38) + 1;
  }
  if (fVar5 <= fVar3) {
    *(undefined4 *)(ar4 + 0x2c) = 0;
  }
  else {
    *(int *)(ar4 + 0x2c) = *(int *)(ar4 + 0x2c) + 1;
  }
  if (*(uint *)(ar4 + 0x58) < *(uint *)(ar4 + 0x2c)) {
    *(int *)(ar4 + 0x38) = *(int *)(ar4 + 0x58) + -1;
  }
  if (fVar4 <= fVar3) {
    *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + 1;
  }
  else {
    *(undefined4 *)(ar4 + 0x34) = 0;
  }
  if (*(int *)(ar4 + 0x34) == 4) {
    *(undefined1 *)(ar4 + 0x45) = 1;
    *(undefined4 *)(ar4 + 0x48) = 0;
  }
  else if ((*(char *)(ar4 + 0x45) != '\0') &&
          (uVar1 = *(uint *)(ar4 + 0x48), *(uint *)(ar4 + 0x48) = uVar1 + 1,
          *(uint *)(ar4 + 0x58) < uVar1)) {
    *(undefined1 *)(ar4 + 0x45) = 0;
    FUN_8c120348(ar4,0xc,(uint)*(byte *)(ar4 + 4),4);
  }
  bVar6 = *(uint *)(ar4 + 0x50) < *(uint *)(ar4 + 0x34);
  if (bVar6) {
    *(undefined1 *)(ar4 + 0x44) = 1;
    *(undefined4 *)(ar4 + 0x34) = 0;
    *(undefined1 *)(ar4 + 0x45) = 0;
  }
  return (uint)bVar6;
}

__asm__(".globl _FUN_8c12172e\n.set _FUN_8c12172e, _FUN_8c12172e_def\n");
