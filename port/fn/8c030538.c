#include "../decls.h"
undefined4 FUN_8c030538_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x674 + ar4 + ar5 * 4);
}

__asm__(".globl _FUN_8c030538\n.set _FUN_8c030538, _FUN_8c030538_def\n");
