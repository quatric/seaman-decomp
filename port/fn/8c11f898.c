#include "../decls.h"
uint FUN_8c11f898_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = *(float **)(ar4 + 0x2c);
  fVar3 = *pfVar1;
  fVar2 = fVar3;
  while (pfVar1 = pfVar1 + 1, pfVar1 < *(float **)(ar4 + 0x30)) {
    if (*pfVar1 < fVar2) {
      fVar2 = *pfVar1;
    }
    if (fVar3 < *pfVar1) {
      fVar3 = *pfVar1;
    }
  }
  return (uint)(fVar3 - fVar2 < *(float *)(ar4 + 0x38));
}

__asm__(".globl _FUN_8c11f898\n.set _FUN_8c11f898, _FUN_8c11f898_def\n");
