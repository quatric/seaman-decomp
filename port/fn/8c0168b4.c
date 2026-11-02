#include "../decls.h"
int FUN_8c0168b4_def(int ar4,int ar5,float *ar6,undefined4 ar7)

{
  int iVar1;
  float in_fr5;
  float in_fr4;
  float in_fr6;
  
  *ar6 = (float)*(int *)(ar4 + 0xc) * in_fr6 * (float)ar5 + in_fr4;
  ar6[1] = (float)*(int *)(ar4 + 0x10) * in_fr6 + in_fr5;
  ar6[2] = (float)*(int *)(ar4 + 0xc) * in_fr6 * (float)ar5 + in_fr4;
  ar6[3] = in_fr5;
  ar6[4] = (float)*(int *)(ar4 + 0xc) * in_fr6 * (float)ar5 + in_fr4 +
           (float)*(int *)(ar4 + 0xc) * in_fr6;
  ar6[5] = in_fr5;
  ar6[6] = (float)*(int *)(ar4 + 0xc) * in_fr6 * (float)ar5 + in_fr4 +
           (float)*(int *)(ar4 + 0xc) * in_fr6;
  iVar1 = *(int *)(ar4 + 0x10);
  ar6[7] = (float)iVar1 * in_fr6 + in_fr5;
  return iVar1;
}

__asm__(".globl _FUN_8c0168b4\n.set _FUN_8c0168b4, _FUN_8c0168b4_def\n");
