#include "../decls.h"
undefined4 pvr_20a844_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0xa05f8000) = ar5;
  return 1;
}

__asm__(".globl _pvr_20a844\n.set _pvr_20a844, _pvr_20a844_def\n");
