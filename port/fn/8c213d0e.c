#include "../decls.h"
int FUN_8c213d0e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if ((*(uint *)(ar4 + 0x18) & 1) == 0) {
    iVar1 = *(int *)(ar4 + 0xc) * *(int *)(ar4 + 0x10) * 2;
  }
  else {
    iVar1 = FUN_8c213a04(*(int *)(ar4 + 0xc),*(int *)(ar4 + 0x10),ar6,ar7);
    iVar1 = *(int *)(&DAT_8c277d50 + iVar1 * 4) + 4;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c213d0e\n.set _FUN_8c213d0e, _FUN_8c213d0e_def\n");
