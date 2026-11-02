#include "../decls.h"
undefined4 FUN_8c1f9610_def(undefined4 *ar4,undefined4 *ar5,int ar6,int ar7,int s0,int s4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 ar4_00;
  undefined4 ar5_00;
  int ar6_00;
  int ar7_00;
  uint uVar3;
  int unaff_r9;
  int unaff_r10;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  
  ar5_00 = 1;
  ar4_00 = 0xffffffff;
  if (s0 == 0) {
    unaff_r10 = 0;
  }
  else if (s0 == 1) {
    unaff_r10 = 1;
  }
  else if (s0 == 2) {
    unaff_r10 = -1;
  }
  if (s4 == 0) {
    unaff_r9 = 0;
  }
  else if (s4 == 1) {
    unaff_r9 = 1;
  }
  else if (s4 == 2) {
    unaff_r9 = -1;
  }
  ar6_00 = ar6;
  ar7_00 = ar7;
  FUN_8c1f9150(0xffffffff,1,ar6,ar7);
  puVar1 = (&FUN_8c1f9284);
  FUN_8c1f9284(ar4_00,ar5_00,ar6_00,ar7_00);
  puVar2 = (&FUN_8c1f8c80);
  puStack_30 = ar4;
  puStack_2c = ar5;
  if (ar6 == 1) {
    uVar3 = 0;
    if (0 < ar7) {
      do {
        if ((uVar3 & 7) == 0) {
          (*(code *)puVar1)(ar4_00,ar5_00,ar6_00,ar7_00);
          (*(code *)puVar2)(ar4_00,ar5_00,ar6_00,ar7_00);
        }
        uVar3 = uVar3 + 1;
        *(undefined1 *)puStack_2c = *(undefined1 *)puStack_30;
        puStack_30 = (undefined4 *)((int)puStack_30 + unaff_r10);
        puStack_2c = (undefined4 *)((int)puStack_2c + unaff_r9);
      } while ((int)uVar3 < ar7);
    }
  }
  else if (ar6 == 2) {
    uVar3 = 0;
    if (0 < ar7) {
      do {
        if ((uVar3 & 7) == 0) {
          (*(code *)puVar1)(ar4_00,ar5_00,ar6_00,ar7_00);
          (*(code *)puVar2)(ar4_00,ar5_00,ar6_00,ar7_00);
        }
        uVar3 = uVar3 + 1;
        *(undefined2 *)puStack_2c = *(undefined2 *)puStack_30;
        puStack_30 = (undefined4 *)((int)puStack_30 + unaff_r10 * 2);
        puStack_2c = (undefined4 *)((int)puStack_2c + unaff_r9 * 2);
      } while ((int)uVar3 < ar7);
    }
  }
  else if ((ar6 == 4) && (uVar3 = 0, 0 < ar7)) {
    do {
      if ((uVar3 & 7) == 0) {
        (*(code *)puVar1)(ar4_00,ar5_00,ar6_00,ar7_00);
        (*(code *)puVar2)(ar4_00,ar5_00,ar6_00,ar7_00);
      }
      uVar3 = uVar3 + 1;
      *puStack_2c = *puStack_30;
      puStack_30 = puStack_30 + unaff_r10;
      puStack_2c = puStack_2c + unaff_r9;
    } while ((int)uVar3 < ar7);
  }
  FUN_8c1f8fc8(ar4_00,ar5_00,ar6_00,ar7_00);
  return 0;
}

__asm__(".globl _FUN_8c1f9610\n.set _FUN_8c1f9610, _FUN_8c1f9610_def\n");
