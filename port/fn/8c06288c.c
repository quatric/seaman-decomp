#include "../decls.h"
undefined4 FUN_8c06288c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xa4 + ar4 + ar5 * 4);
}

__asm__(".globl _FUN_8c06288c\n.set _FUN_8c06288c, _FUN_8c06288c_def\n");
