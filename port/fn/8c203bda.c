#include "../decls.h"
undefined4 FUN_8c203bda_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  ushort *ar5_00;
  undefined4 uVar2;
  ushort *ar5_01;
  short asStack_14 [2];
  short asStack_10 [4];
  
  ar5_00 = (ushort *)FUN_8c204cc0(ar4,asStack_14,ar6,ar7);
  if (ar5_00 == (ushort *)0x0) {
    uVar2 = 7;
  }
  else if ((*ar5_00 & 2) == 0) {
    uVar2 = FUN_8c204cfc((int)asStack_14[0],ar5_00,ar6,ar7);
  }
  else {
    iVar1 = DAT_8c2753f4;
    if (asStack_14[0] != 0) {
      iVar1 = -DAT_8c2753f4;
    }
    ar5_01 = (ushort *)FUN_8c204cc0(iVar1 + ar4,asStack_10,ar6,ar7);
    if (ar5_01 == (ushort *)0x0) {
      FUN_8c204cfc((int)asStack_14[0],ar5_00,ar6,ar7);
      uVar2 = 0;
    }
    else if ((*ar5_01 & 4) == 0) {
      FUN_8c204cfc((int)asStack_14[0],ar5_00,ar6,ar7);
      uVar2 = FUN_8c204cfc((int)asStack_10[0],ar5_01,ar6,ar7);
    }
    else {
      *ar5_00 = *ar5_00 & 0xfffb;
      uVar2 = 0;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c203bda\n.set _FUN_8c203bda, _FUN_8c203bda_def\n");
