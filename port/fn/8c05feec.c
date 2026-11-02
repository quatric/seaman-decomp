#include "../decls.h"
int FUN_8c05feec_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iStack_8;
  
  iStack_8 = ar5;
  if (*(int *)(ar4 + 0x6c) <= ar5) {
    iStack_8 = *(int *)(ar4 + 0x6c);
  }
  *(int *)(ar4 + 0x6c) = *(int *)(ar4 + 0x6c) - iStack_8;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 2;
  return iStack_8;
}

__asm__(".globl _FUN_8c05feec\n.set _FUN_8c05feec, _FUN_8c05feec_def\n");
