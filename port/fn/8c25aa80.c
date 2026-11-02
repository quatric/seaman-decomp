#include "../decls.h"
undefined4 FUN_8c25aa80_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar6_00;
  int ar4_00;
  
  iVar1 = FUN_8c213a04(*(undefined4 *)(ar4 + 0xc),*(undefined4 *)(ar4 + 0x10),ar6,ar7);
  iVar1 = iVar1 * 4;
  if ((*(uint *)(ar4 + 0x18) & 1) == 0) {
    ar6_00 = *(int *)(&DAT_8c277ce0 + iVar1);
    iVar1 = *(int *)(&DAT_8c277d18 + iVar1);
  }
  else {
    ar6_00 = *(int *)(&DAT_8c277cfc + iVar1);
    iVar1 = *(int *)(&DAT_8c277d34 + iVar1) + 10;
  }
  ar4_00 = *(int *)(ar4 + 0x1c);
  FUN_8c20a8e0(ar4_00,ar5,ar6_00,ar7);
  FUN_8c20a8e0(ar4_00 + 0x800,ar5 + ar6_00,iVar1,ar7);
  return 0;
}

__asm__(".globl _FUN_8c25aa80\n.set _FUN_8c25aa80, _FUN_8c25aa80_def\n");
