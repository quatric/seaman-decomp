#include "../decls.h"
undefined4 FUN_8c1103ea_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *ar4;
  iVar1 = FUN_8c11033c(ar4,*(undefined4 *)((int)0x88 + *ar4),ar6,ar7);
  return *(undefined4 *)(*(int *)(iVar2 + 0xb8) * 4 + iVar1);
}

__asm__(".globl _FUN_8c1103ea\n.set _FUN_8c1103ea, _FUN_8c1103ea_def\n");
