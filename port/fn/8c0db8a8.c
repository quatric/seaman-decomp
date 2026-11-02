#include "../decls.h"
undefined4 FUN_8c0db8a8_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0xa68);
  *ar6 = *(undefined4 *)(ar4 + 0xa6c);
  *ar7 = *(undefined4 *)(ar4 + 0xa70);
  return 0xa70;
}

__asm__(".globl _FUN_8c0db8a8\n.set _FUN_8c0db8a8, _FUN_8c0db8a8_def\n");
