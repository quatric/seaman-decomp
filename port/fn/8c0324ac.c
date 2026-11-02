#include "../decls.h"
float * FUN_8c0324ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  float in_fr4;
  
  pfVar1 = *(float **)(ar4 + 0xa4);
  if (pfVar1 == (float *)0x1) {
    *(float *)(ar4 + 0x94) = *(float *)(ar4 + 0x94) - *(float *)(ar4 + 0xa0);
    pfVar1 = (float *)(ar4 + 0x94);
    if (*pfVar1 < *(float *)(ar4 + 0xa0) * in_fr4 * -1.0) {
      pfVar1 = (float *)&DAT_8c032514;
      *(float *)(ar4 + 0x94) = *(float *)(ar4 + 0xa0) * in_fr4 * -1.0;
    }
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c0324ac\n.set _FUN_8c0324ac, _FUN_8c0324ac_def\n");
