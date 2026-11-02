#include "../decls.h"
undefined4 FUN_8c1f8650_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint auStack_8 [2];
  
  FUN_8c1f826c(ar4,auStack_8,ar6,ar7);
  iVar3 = 0x26ee7f;
  if (auStack_8[0] < 0x5cb417d1) {
    iVar1 = libgcc_divide_helper_0106dc(0x5cb417d1 - auStack_8[0],0x26ee7f);
    iVar3 = iVar3 - iVar1;
  }
  else {
    iVar3 = libgcc_divide_helper_0106dc(auStack_8[0] + 0xa34be82f,0x26ee7f);
  }
  uVar2 = libgcc_divide_helper_01051c(iVar3,0x15180);
  return uVar2;
}

__asm__(".globl _FUN_8c1f8650\n.set _FUN_8c1f8650, _FUN_8c1f8650_def\n");
