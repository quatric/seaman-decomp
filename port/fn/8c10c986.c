#include "../decls.h"
int FUN_8c10c986_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)0xa4 + *ar4);
  return 0xa4 + 0x10 + *ar4 + (uVar1 + (uVar1 & 1)) * 2;
}

__asm__(".globl _FUN_8c10c986\n.set _FUN_8c10c986, _FUN_8c10c986_def\n");
