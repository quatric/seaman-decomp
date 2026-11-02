#include "../decls.h"
undefined4 FUN_8c0b7628_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  undefined4 ar6_00;
  undefined4 uVar2;
  
  uVar2 = 1;
  ar6_00 = ar6;
  ar4_00 = FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7);
  iVar1 = (*(code *)(&FUN_8c0b6e04))
                    (ar4,(&DATA_8c13bfe4) + 0x42,ar6_00,ar7);
  if (iVar1 == 0) {
    iVar1 = FUN_8c01b5f8(ar4_00,ar4,ar5,ar6);
    if (iVar1 == 1) {
      uVar2 = 0;
    }
  }
  else {
    iVar1 = (*(code *)(&FUN_8c0b6e04))
                      (ar4,(&DATA_8c13bfe4) + 0x4f,ar6_00,ar7);
    if (iVar1 == 0) {
      iVar1 = (*(code *)(&FUN_8c01b7b0))
                        (ar4_00,(&DATA_8c13bfe4) + 0x5c,ar5,ar6);
      if (iVar1 == 1) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0b7628\n.set _FUN_8c0b7628, _FUN_8c0b7628_def\n");
