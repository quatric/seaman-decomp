#include "../decls.h"
uint FUN_8c213d8a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  
  if ((*(uint *)(ar4 + 0x18) & 1) == 0) {
    uVar2 = *(int *)(ar4 + 0xc) * *(int *)(ar4 + 0x10);
  }
  else {
    iVar1 = FUN_8c213a04(*(int *)(ar4 + 0xc),*(int *)(ar4 + 0x10),ar6,ar7);
    uVar2 = *(int *)(&DAT_8c277d50 + iVar1 * 4) + 4U >> 1;
    if (*(int *)(ar4 + 8) == 0x28000000) {
      uVar2 = uVar2 + 0x28;
    }
    else {
      uVar2 = uVar2 + 8;
    }
  }
  if (*(int *)(ar4 + 8) == 0x28000000) {
    uVar2 = uVar2 >> 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c213d8a\n.set _FUN_8c213d8a, _FUN_8c213d8a_def\n");
