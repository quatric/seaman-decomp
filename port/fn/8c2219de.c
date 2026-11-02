#include "../decls.h"
undefined4 FUN_8c2219de_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int iVar1;
  undefined8 in_dr4;
  float fVar2;
  
  fVar2 = (float)((ulonglong)in_dr4 >> 0x20);
  iVar1 = (ar4 + -1) * 0x20;
  *(float *)(iVar1 + -0x73b3f114) = (float)in_dr4 * (float)in_dr4;
  *(float *)(iVar1 + -0x73b3f110) = fVar2 * fVar2;
  return ain0;
}

__asm__(".globl _FUN_8c2219de\n.set _FUN_8c2219de, _FUN_8c2219de_def\n");
