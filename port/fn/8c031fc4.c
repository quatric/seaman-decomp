#include "../decls.h"
float * FUN_8c031fc4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  
  if (*(float *)(ar4 + 0x24) <= *(float *)(ar4 + 0x28)) {
    if (*(float *)(ar4 + 0x28) <= *(float *)(ar4 + 0x24)) {
      pfVar1 = (float *)0x44;
      *(undefined4 *)(ar4 + 0x44) = 0;
    }
    else {
      *(float *)(ar4 + 0x28) =
           *(float *)(ar4 + 0x28) - *(float *)(ar4 + 0x24) / *(float *)(ar4 + 0x38);
      pfVar1 = (float *)(ar4 + 0x24);
      if (*(float *)(ar4 + 0x28) <= *pfVar1) {
        *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
        pfVar1 = (float *)0x44;
        *(undefined4 *)(ar4 + 0x44) = 0;
      }
    }
  }
  else {
    *(float *)(ar4 + 0x28) =
         *(float *)(ar4 + 0x28) + *(float *)(ar4 + 0x24) / *(float *)(ar4 + 0x34);
    pfVar1 = (float *)(ar4 + 0x24);
    if (*pfVar1 <= *(float *)(ar4 + 0x28)) {
      *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
      pfVar1 = (float *)0x44;
      *(undefined4 *)(ar4 + 0x44) = 0;
    }
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c031fc4\n.set _FUN_8c031fc4, _FUN_8c031fc4_def\n");
