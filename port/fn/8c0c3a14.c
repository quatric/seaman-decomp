#include "../decls.h"
int FUN_8c0c3a14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(0x384 + ar4);
  if (iVar1 != -1) {
    (*(code *)(&pack_release_entry_handle))
              (0x8c2b59d0,*(undefined4 *)(0x384 + ar4),ar6,ar7);
    iVar1 = 0x384;
    *(undefined4 *)(0x384 + ar4) = 0xffffffff;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0c3a14\n.set _FUN_8c0c3a14, _FUN_8c0c3a14_def\n");
