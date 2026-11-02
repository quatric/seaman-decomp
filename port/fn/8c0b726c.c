#include "../decls.h"
undefined4
FUN_8c0b726c_def(undefined4 ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7,undefined4 s0,int s4)

{
  undefined4 ar4_00;
  int iVar1;
  undefined1 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar2;
  undefined1 auStack_34 [24];
  
  uVar2 = 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  ar4_00 = FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7);
  if (s4 == 1) {
    iVar1 = (*(code *)(&FUN_8c0b6e04))
                      (ar4,(&DATA_8c13bfe4) + 0x5c,ar6_00,ar7_00);
    if (iVar1 == 0) {
      ar6_00 = auStack_34;
      iVar1 = (*(code *)(&FUN_8c01bc2c))
                        (ar4_00,(&DATA_8c13bfe4) + 0x5c,ar6_00,ar7_00);
      if (iVar1 == 1) {
        iVar1 = FUN_8c01b0a8(ar4_00,ar4,ar7,s0);
        if (iVar1 != 1) {
          return 1;
        }
        return 0;
      }
    }
    iVar1 = (*(code *)(&FUN_8c0b6e04))
                      (ar4,(&DATA_8c13bfe4) + 0x42,ar6_00,ar7_00);
    if ((iVar1 == 0) &&
       (iVar1 = (*(code *)(&FUN_8c01bba0))
                          (ar4_00,(&DATA_8c13bfe4) + 0x42,ar6_00,ar7_00),
       iVar1 == 1)) {
      iVar1 = FUN_8c01ae98(ar4_00,ar4,ar5,ar6);
      if (iVar1 == 1) {
        uVar2 = 0;
      }
    }
    else {
      iVar1 = (*(code *)(&FUN_8c0b6e04))
                        (ar4,(&DATA_8c13bfe4) + 0x4f,ar6_00,ar7_00);
      if ((iVar1 == 0) &&
         ((iVar1 = (*(code *)(&FUN_8c01bc2c))
                             (ar4_00,(&DATA_8c13bfe4) + 0x5c,auStack_34,
                              ar7_00), iVar1 == 1 &&
          (iVar1 = (*(code *)(&FUN_8c01b47c))
                             (ar4_00,(&DATA_8c13bfe4) + 0x5c,ar5,ar6),
          iVar1 == 1)))) {
        uVar2 = 0;
      }
    }
  }
  else {
    iVar1 = (*(code *)(&FUN_8c0b6e04))
                      (ar4,(&DATA_8c13bfe4) + 0x5c,ar6_00,ar7_00);
    if (iVar1 == 0) {
      iVar1 = FUN_8c01b0a8(ar4_00,ar4,ar7,s0);
      if (iVar1 == 1) {
        uVar2 = 0;
      }
    }
    else {
      iVar1 = (*(code *)(&FUN_8c0b6e04))
                        (ar4,(&DATA_8c13bfe4) + 0x42,ar6_00,ar7_00);
      if (iVar1 == 0) {
        iVar1 = FUN_8c01ae98(ar4_00,ar4,ar5,ar6);
        if (iVar1 == 1) {
          uVar2 = 0;
        }
      }
      else {
        iVar1 = (*(code *)(&FUN_8c0b6e04))
                          (ar4,(&DATA_8c13bfe4) + 0x4f,ar6_00,ar7_00);
        if ((iVar1 == 0) &&
           (iVar1 = (*(code *)(&FUN_8c01b47c))
                              (ar4_00,(&DATA_8c13bfe4) + 0x5c,ar5,ar6),
           iVar1 == 1)) {
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0b726c\n.set _FUN_8c0b726c, _FUN_8c0b726c_def\n");
