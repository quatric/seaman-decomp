#include "../decls.h"
int FUN_8c1f81dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint *a5;
  uint auStack_8 [2];
  
  a5 = auStack_8;
  FUN_8c1f826c(ar4,auStack_8,ar6,ar7);
  iVar1 = aica_reg_1f85a0(ar4,a5,ar6,ar7);
  if (((iVar1 == 0) && (iVar1 = aica_reg_1f85c8(auStack_8[0] & 0xffff,a5,ar6,ar7), iVar1 == 0)) &&
     (iVar1 = aica_reg_1f85ee(auStack_8[0] >> 0x10,a5,ar6,ar7), iVar1 == 0)) {
    uVar2 = FUN_8c1f84d8(0,a5,ar6,ar7);
    if ((uVar2 == auStack_8[0]) || (uVar2 == auStack_8[0] + 1)) {
      *(undefined4 *)0x8c474a10 = uVar2;
      iVar1 = 0;
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f81dc\n.set _FUN_8c1f81dc, _FUN_8c1f81dc_def\n");
