#include "../decls.h"
undefined4 FUN_8c0d6954_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Vec3_assign(ar4 + 0x30,ar4,ar6,ar7);
  *(undefined4 *)(ar4 + 0x60) = 0;
  *(undefined4 *)(ar4 + 100) = 0;
  return 100;
}

__asm__(".globl _FUN_8c0d6954\n.set _FUN_8c0d6954, _FUN_8c0d6954_def\n");
