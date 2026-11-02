#include "../decls.h"
int FUN_8c0e6c00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  s_64_JUNGLE_NIGHT_0e7062(ar4,*(undefined4 *)(0x10dc + ar4),ar6,ar7);
  iVar1 = *(int *)(0x83fc + ar4);
  if (iVar1 == -1) {
    uVar2 = (*(code *)(&pack_find_by_name_buffered))
                      (0x8c2b59d0,*(undefined4 *)(0x83f8 + ar4),ar6,ar7);
    iVar1 = 0x83fc;
    *(undefined4 *)(0x83fc + ar4) = uVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0e6c00\n.set _FUN_8c0e6c00, _FUN_8c0e6c00_def\n");
