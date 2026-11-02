#include "../decls.h"
int FUN_8c1ff478_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *ar6_00;
  int iVar1;
  undefined4 ar4_00;
  int iVar2;
  uint uVar3;
  undefined1 *ar6_01;
  undefined4 ar6_02;
  uint ar5_00;
  undefined1 auStack_48 [12];
  uint uStack_3c;
  int iStack_20;
  
  ar6_01 = auStack_48;
  iVar1 = FUN_8c200566(ar4,ar5,ar6_01,ar7);
  if (iVar1 < 0) {
    iVar1 = (int)(int)0xffffff05;
  }
  else {
    ar4_00 = FUN_8c200a84(ar4,iVar1,ar6_01,ar7);
    iVar2 = FUN_8c200b10(ar4,ar5,ar6_01,ar7);
    ar6_00 = 0xfffc;
    if (iVar2 == 0) {
      ar5_00 = uStack_3c;
      for (iVar2 = 0; iVar2 < iStack_20; iVar2 = iVar2 + 1) {
        uVar3 = FUN_8c2009d0(ar4,ar5_00,ar6_01,ar7);
        ar6_01 = ar6_00;
        FUN_8c20099e(ar4,ar5_00,ar6_00,ar7);
        ar5_00 = uVar3 & 0xffff;
      }
    }
    ar6_02 = 0x20;
    memset(ar4_00,0,0x20,ar7);
    FUN_8c200a9c(ar4,iVar1,ar6_02,ar7);
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1ff478\n.set _FUN_8c1ff478, _FUN_8c1ff478_def\n");
