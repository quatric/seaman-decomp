#include "../decls.h"
int FUN_8c02feec_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  *(undefined4 *)(ar5 + 4) = 0;
  *ar5 = *(undefined1 *)(0x98 + ar4);
  cVar1 = *(char *)(0x99 + ar4);
  ar5[1] = cVar1;
  return (int)cVar1;
}

__asm__(".globl _FUN_8c02feec\n.set _FUN_8c02feec, _FUN_8c02feec_def\n");
