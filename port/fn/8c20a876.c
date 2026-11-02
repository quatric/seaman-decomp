#include "../decls.h"
undefined4 pvr_20a876_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xa05f8000 + ar4);
}

__asm__(".globl _pvr_20a876\n.set _pvr_20a876, _pvr_20a876_def\n");
