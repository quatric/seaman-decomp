#include "../decls.h"
undefined4 FUN_8c09d46c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x74) = ar5;
  return 0x74;
}

__asm__(".globl _FUN_8c09d46c\n.set _FUN_8c09d46c, _FUN_8c09d46c_def\n");
