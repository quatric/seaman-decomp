#include "../decls.h"
undefined4 FUN_8c036f0c_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  *ar5 = 0;
  ar5[1] = 0;
  ar5[2] = 0;
  *ar6 = *(undefined4 *)(ar4 + 0xba8);
  ar6[1] = *(undefined4 *)(ar4 + 0xbac);
  ar6[2] = *(undefined4 *)(ar4 + 0xbb0);
  return 0xbb0;
}

__asm__(".globl _FUN_8c036f0c\n.set _FUN_8c036f0c, _FUN_8c036f0c_def\n");
