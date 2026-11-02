#include "../decls.h"
undefined4 FUN_8c237630_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  
  _DAT_8c4c11d0 = 0x40c00000;
  uVar1 = 0x80;
  _DAT_8c4c11cc = 0x3f000000;
  _DAT_8c4c11c8 = 0x3f000000;
  _DAT_8c4c11c4 = 0x3f000000;
  _DAT_8c4c11c0 = 0x3f800000;
  _DAT_8c4c11bc = 0x3f000000;
  _DAT_8c4c11b8 = 0x3f000000;
  _DAT_8c4c11b4 = 0x3f000000;
  _DAT_8c4c11b0 = 0x3f800000;
  _DAT_8c4c11ac = 0;
  _DAT_8c4c11a8 = 0;
  _DAT_8c4c11a4 = 0;
  _DAT_8c4c11a0 = 0x3f800000;
  if (_DAT_8c4c1300 != 0) {
    piVar4 = (int *)(_DAT_8c4c1300 * 4 + -0x73b3ed80);
    iVar3 = _DAT_8c4c1300;
    do {
      piVar4 = piVar4 + -1;
      iVar2 = *(int *)(*piVar4 * 4 + -0x73b3ee20);
      uVar1 = 0x74;
      if ((*(int *)(iVar2 + 0x124) == 0x88) || (*(int *)(iVar2 + 0x124) == 200)) {
        uVar1 = 0x80;
        fVar5 = *(float *)(iVar2 + 0x70) - *(float *)(iVar2 + 0x74);
        *(float *)(iVar2 + 0x80) = 1.0 / SQRT(fVar5 * fVar5);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c237630\n.set _FUN_8c237630, _FUN_8c237630_def\n");
