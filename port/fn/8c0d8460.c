#include "../decls.h"
int FUN_8c0d8460_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(int *)(0x6e24 + ar4) != -1) {
    (*(code *)(&pack_release_entry_handle))
              (0x8c2b59d0,*(undefined4 *)(0x6e24 + ar4),ar6,ar7);
  }
  iVar1 = *(int *)(0x6e3c + ar4);
  if (iVar1 != -1) {
    iVar1 = (*(code *)(&pack_release_entry_handle))
                      (0x8c2b59d0,*(undefined4 *)(0x6e3c + ar4),ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d8460\n.set _FUN_8c0d8460, _FUN_8c0d8460_def\n");
