#include "../decls.h"
undefined4 FUN_8c025f7c_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0xba8);
  *ar6 = *(undefined4 *)(ar4 + 0xbac);
  *ar7 = *(undefined4 *)(ar4 + 0xbb0);
  return 0xbb0;
}

__asm__(".globl _FUN_8c025f7c\n.set _FUN_8c025f7c, _FUN_8c025f7c_def\n");
