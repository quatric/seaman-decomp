#include "../decls.h"
undefined4 FUN_8c213ab6_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = FUN_8c213a04(ar4,ar5,ar6,ar7);
  uVar3 = ar4 * ar5;
  uVar2 = ar6 & 0xff00;
  iVar1 = iVar1 * 4;
  if ((((uVar2 == 0x100) || (uVar2 == 0xd00)) || (uVar2 == 0x900)) || (uVar2 == 0xb00)) {
    return uVar3 * 2;
  }
  if (uVar2 == 0x200) {
    return *(undefined4 *)(&DAT_8c277d50 + iVar1);
  }
  if (uVar2 != 0x300) {
    if (uVar2 == 0x1000) {
      uVar2 = *(int *)(&DAT_8c277ce0 + iVar1) + *(int *)(&DAT_8c277d18 + iVar1);
    }
    else if (uVar2 == 0x400) {
      uVar2 = (*(int *)(&DAT_8c277d50 + iVar1) + 4U >> 3) + 0x800;
    }
    else if (uVar2 == 0x1100) {
      uVar2 = *(int *)(&DAT_8c277cfc + iVar1) + *(int *)(&DAT_8c277d34 + iVar1);
    }
    else {
      if (uVar2 == 0x500) {
        return uVar3 >> 1;
      }
      if (uVar2 == 0x600) {
        uVar2 = *(int *)(&DAT_8c277d50 + iVar1) + 4U >> 2;
      }
      else {
        if (uVar2 == 0x700) {
          return uVar3;
        }
        if (uVar2 != 0x800) {
          return 0;
        }
        uVar2 = *(int *)(&DAT_8c277d50 + iVar1) + 4U >> 1;
      }
    }
    return uVar2;
  }
  return (uVar3 >> 2) + 0x800;
}

__asm__(".globl _FUN_8c213ab6\n.set _FUN_8c213ab6, _FUN_8c213ab6_def\n");
