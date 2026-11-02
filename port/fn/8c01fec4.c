#include "../decls.h"
undefined4 FUN_8c01fec4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  int iVar3;
  int ar7_00;
  
  iVar3 = ar5 + 0x10;
  ar6_00 = *(undefined4 *)(ar4 + 0x28);
  uVar2 = ar7;
  iVar1 = FUN_8c02051c(ar4,ar7,ar6_00,iVar3);
  if (iVar1 == 0) {
    ar7_00 = ar5 + 0x30;
    iVar3 = ar5 + 0x10;
    iVar1 = (*(code *)(&FUN_8c02000c))
                      (ar4,ar7,iVar3,ar7_00,*(undefined4 *)(ar5 + 0x50),*(undefined4 *)(ar5 + 0x54))
    ;
    if (iVar1 == 0) {
      uVar2 = FUN_8c1fb57c(ar6,ar7,iVar3,ar7_00);
    }
    else {
      *(undefined4 *)(iVar1 + 8) = ar6;
      for (iVar3 = 0; iVar3 < 0x20; iVar3 = iVar3 + 1) {
        *(undefined4 *)(iVar1 + iVar3 * 4 + 0x58) = *(undefined4 *)(ar5 + iVar3 * 4 + 0x58);
      }
      uVar2 = FUN_8c0205e8(ar4,ar4 + 0x28,iVar1,ar7_00);
    }
  }
  else {
    uVar2 = FUN_8c1fb57c(ar6,uVar2,ar6_00,iVar3);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01fec4\n.set _FUN_8c01fec4, _FUN_8c01fec4_def\n");
