#include "../decls.h"
undefined4 FUN_8c263132_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x44) = ar5;
  return 0x44;
}

__asm__(".globl _FUN_8c263132\n.set _FUN_8c263132, _FUN_8c263132_def\n");
