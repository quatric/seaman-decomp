#include "../decls.h"
undefined4 FUN_8c02bd70_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined2 *)(ar4 + ar5 * 2 + 0x22) = (undefined2)ar6;
  return 0x22;
}

__asm__(".globl _FUN_8c02bd70\n.set _FUN_8c02bd70, _FUN_8c02bd70_def\n");
