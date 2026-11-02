#include "../decls.h"
int FUN_8c2040d2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r14;
  
  iVar1 = FUN_8c2050cc(unaff_r14 + 8,unaff_r14 + 0xc,unaff_r14,unaff_r14 + 4);
  if (iVar1 == 0) {
    iVar1 = FUN_8c2050cc(&DAT_8c27541c,&DAT_8c275420,&DAT_8c275414,&DAT_8c275418);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c2040d2\n.set _FUN_8c2040d2, _FUN_8c2040d2_def\n");
