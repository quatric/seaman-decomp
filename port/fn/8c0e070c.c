#include "../decls.h"
int FUN_8c0e070c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(0x23254 + ar4) = 1;
  uVar1 = (*(code *)(&pack_find_by_name_buffered))
                    (0x8c2b59d0,*(undefined4 *)(0x23258 + ar4),ar6,ar7);
  *(undefined4 *)(0x2325c + ar4) = uVar1;
  iVar2 = *(int *)(0x2325c + ar4);
  if (iVar2 != -1) {
    iVar2 = FUN_8c0220d4(0x8c2b59d0,*(undefined4 *)(0x2325c + ar4),ar6,ar7);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0e070c\n.set _FUN_8c0e070c, _FUN_8c0e070c_def\n");
