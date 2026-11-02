#include "../decls.h"
undefined4 FUN_8c01b5f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  int iVar2;
  int iVar3;
  undefined4 ar5_01;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined1 auStack_74 [88];
  undefined4 uStack_1c;
  
  uVar1 = 1;
  if (*(undefined4 *)0x8c2791b0 == 3) {
    ar6_00 = 0x5600;
    ar7_00 = ar7;
    ar5_00 = FUN_8c01b70c(ar4,ar5,0x5600,ar7);
    if (ar5_00 < 0) {
      uVar1 = 0;
    }
    else {
      iVar3 = ar5_00;
      iVar2 = FUN_8c01acd0(ar4,ar5_00,ar6_00,ar7_00);
      if (iVar2 == 0) {
        (*(code *)(&FUN_8c1fb57c))
                  (*(undefined4 *)(0x2470 + ar5_00 * 0x28 + ar4),iVar3,ar6_00,ar7_00);
        uVar1 = 0;
      }
      else {
        ar5_01 = *(undefined4 *)(0x2470 + ar5_00 * 0x28 + ar4);
        iVar3 = FUN_8c2017fc(auStack_74,ar5_01,ar6_00,ar7_00);
        if ((0xffffff20 == iVar3) || (0xffffff21 == iVar3)) {
          uVar1 = 0;
        }
        else if (iVar3 == 0) {
          memmove(ar6,uStack_1c,ar7,ar7_00);
          uVar1 = 1;
          ar5_01 = uStack_1c;
          ar6_00 = ar7;
        }
        (*(code *)(&FUN_8c1fb57c))
                  (*(undefined4 *)(0x2470 + ar5_00 * 0x28 + ar4),ar5_01,ar6_00,ar7_00);
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01b5f8\n.set _FUN_8c01b5f8, _FUN_8c01b5f8_def\n");
