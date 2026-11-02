#include "../decls.h"
undefined4 FUN_8c028f34_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0x3c8);
  *ar6 = *(undefined4 *)(ar4 + 0x3cc);
  *ar7 = *(undefined4 *)(ar4 + 0x3d0);
  return 0x3d0;
}

__asm__(".globl _FUN_8c028f34\n.set _FUN_8c028f34, _FUN_8c028f34_def\n");
