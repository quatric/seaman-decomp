#include "../decls.h"
int FUN_8c213d3e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  
  if ((*(uint *)(ar4 + 0x18) & 1) == 0) {
    uVar2 = (uint)(*(int *)(ar4 + 0xc) * *(int *)(ar4 + 0x10)) >> 2;
    if ((*(int *)(ar4 + 0xc) == 8) && (*(int *)(ar4 + 0x10) == 8)) {
      uVar2 = uVar2 + 0x10;
    }
  }
  else {
    iVar1 = FUN_8c213a04(*(int *)(ar4 + 0xc),*(int *)(ar4 + 0x10),ar6,ar7);
    uVar2 = (*(int *)(&DAT_8c277d50 + iVar1 * 4) + 4U >> 3) + 10;
  }
  return uVar2 + 0x800;
}

__asm__(".globl _FUN_8c213d3e\n.set _FUN_8c213d3e, _FUN_8c213d3e_def\n");
