#include "../decls.h"
int FUN_8c0d84a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(0x6e24 + ar4);
  if (iVar1 != -1) {
    uVar2 = (*(code *)(&pack_acquire_entry_handle))
                      (0x8c2b59d0,*(undefined4 *)(0x6e20 + ar4),ar6,ar7);
    iVar1 = 0x6e24;
    *(undefined4 *)(0x6e24 + ar4) = uVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d84a8\n.set _FUN_8c0d84a8, _FUN_8c0d84a8_def\n");
