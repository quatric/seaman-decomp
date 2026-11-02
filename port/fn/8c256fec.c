#include "../decls.h"
undefined4 FUN_8c256fec_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  float in_fr5;
  float in_fr4;
  float in_fr6;
  
  if (ar4 == (float *)0x0) {
    return ain0;
  }
  *ar4 = *ar4 * in_fr4;
  ar4[1] = ar4[1] * in_fr4;
  ar4[2] = ar4[2] * in_fr4;
  ar4[3] = ar4[3] * in_fr4;
  ar4[4] = ar4[4] * in_fr5;
  ar4[5] = ar4[5] * in_fr5;
  ar4[6] = ar4[6] * in_fr5;
  ar4[7] = ar4[7] * in_fr5;
  ar4[8] = ar4[8] * in_fr6;
  ar4[9] = ar4[9] * in_fr6;
  ar4[10] = ar4[10] * in_fr6;
  ar4[0xb] = ar4[0xb] * in_fr6;
  return 0x28;
}

__asm__(".globl _FUN_8c256fec\n.set _FUN_8c256fec, _FUN_8c256fec_def\n");
