#include "../decls.h"
undefined4 FUN_8c2360b0_def(float *ar4,float *ar5,float *ar6,undefined4 ar7)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  
  pfVar1 = ar4 + 3;
  iVar3 = 1;
  *ar5 = *ar4;
  ar5[1] = ar4[1];
  ar5[2] = ar4[2];
  *ar6 = *ar4;
  ar6[1] = ar4[1];
  ar6[2] = ar4[2];
  pfVar2 = pfVar1;
  pfVar4 = pfVar1;
  do {
    if (ar4[iVar3 * 3] < *ar5) {
      *ar5 = ar4[iVar3 * 3];
    }
    if (ar4[iVar3 * 3 + 1] < ar5[1]) {
      ar5[1] = ar4[iVar3 * 3 + 1];
    }
    if (ar4[iVar3 * 3 + 2] < ar5[2]) {
      ar5[2] = ar4[iVar3 * 3 + 2];
    }
    if (*ar6 < ar4[iVar3 * 3]) {
      *ar6 = ar4[iVar3 * 3];
    }
    if (ar6[1] < ar4[iVar3 * 3 + 1]) {
      ar6[1] = pfVar1[1];
    }
    iVar3 = iVar3 + 1;
    if (ar6[2] < pfVar2[2]) {
      ar6[2] = pfVar4[2];
    }
    pfVar2 = pfVar2 + 3;
    pfVar4 = pfVar4 + 3;
    pfVar1 = pfVar1 + 3;
  } while (iVar3 < 8);
  return 8;
}

__asm__(".globl _FUN_8c2360b0\n.set _FUN_8c2360b0, _FUN_8c2360b0_def\n");
