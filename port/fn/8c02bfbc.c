#include "../decls.h"
int FUN_8c02bfbc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(short *)((&DATA_8c1302bc) + *(int *)(0x138 + ar4) * 2);
}

__asm__(".globl _FUN_8c02bfbc\n.set _FUN_8c02bfbc, _FUN_8c02bfbc_def\n");
