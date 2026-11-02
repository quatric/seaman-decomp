#include "../decls.h"
undefined4 FUN_8c112658_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = *(float **)(ar4 + 0xc);
  uVar1 = 1;
  fVar3 = *pfVar2;
  if (1 < *(uint *)(ar4 + 8)) {
    do {
      pfVar2 = pfVar2 + 1;
      uVar1 = uVar1 + 1;
      if (fVar3 < *pfVar2) {
        fVar3 = *pfVar2;
      }
    } while (uVar1 < *(uint *)(ar4 + 8));
  }
  return ain0;
}

__asm__(".globl _FUN_8c112658\n.set _FUN_8c112658, _FUN_8c112658_def\n");
