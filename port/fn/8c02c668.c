#include "../decls.h"
int FUN_8c02c668_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = FUN_8c02c518(ar4,ar5,ar6,ar7);
  if (iVar1 != -1) {
    iVar1 = FUN_8c02c518(ar4,ar5,ar6,ar7);
    uVar2 = FUN_8c02e400(iVar1 * 0x18 + ar4,ar5,ar6,ar7);
    if ((char)uVar2 == '\0') {
      iVar4 = 0;
    }
    else {
      iVar1 = FUN_8c02c518(ar4,ar5,ar6,ar7);
      uVar2 = FUN_8c02e400(iVar1 * 0x18 + ar4,ar5,ar6,ar7);
      iVar1 = FUN_8c02c518(ar4,ar5,ar6,ar7);
      uVar3 = FUN_8c02c5ac(iVar1 * 0x18 + ar4,ar5,ar6,ar7);
      ar5 = (int)(char)uVar2;
      iVar4 = libgcc_divide_helper_0101e4(0x1e,ar5,ar6,ar7);
      iVar4 = iVar4 * (char)uVar3;
    }
  }
  iVar1 = FUN_8c02c518(ar4,ar5,ar6,ar7);
  return iVar4 + (uint)(iVar1 != -1) * 0x46;
}

__asm__(".globl _FUN_8c02c668\n.set _FUN_8c02c668, _FUN_8c02c668_def\n");
