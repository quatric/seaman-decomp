#include "../decls.h"
undefined4 FUN_8c263114_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x48) = ar5;
  *(undefined4 *)(ar4 + 0x4c) = ar6;
  return 0x4c;
}

__asm__(".globl _FUN_8c263114\n.set _FUN_8c263114, _FUN_8c263114_def\n");
