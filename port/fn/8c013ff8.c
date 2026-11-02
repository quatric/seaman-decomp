#include "../decls.h"
undefined1 * memset_def(undefined1 *ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = ar4;
  if (ar6 != 0) {
    do {
      uVar2 = uVar2 + 1;
      *puVar1 = (undefined1)ar5;
      puVar1 = puVar1 + 1;
    } while (uVar2 < ar6);
  }
  return ar4;
}

__asm__(".globl _memset\n.set _memset, _memset_def\n");
