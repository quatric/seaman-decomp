#include "../decls.h"
undefined4 FUN_8c0faa40_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (1 < *ar4) {
    if (*ar4 == 7) {
      ar5 = *(undefined4 *)(0xb4 + (int)ar4);
      pack_release_entry_handle(0x8c2b59d0,ar5,ar6,ar7);
      *ar4 = 6;
    }
    *(undefined4 *)(0xc0 + (int)ar4) = 0;
    uVar1 = FUN_8c0fd8d0(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0faa40\n.set _FUN_8c0faa40, _FUN_8c0faa40_def\n");
