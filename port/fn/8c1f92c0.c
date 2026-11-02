#include "../decls.h"
undefined4 FUN_8c1f92c0_def(undefined4 *ar4,undefined4 *ar5,undefined4 *ar6,int ar7,int s0,int s4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 *ar4_00;
  undefined4 *ar5_00;
  undefined4 *ar6_00;
  int ar7_00;
  int iVar4;
  int unaff_r13;
  
  iVar4 = 0;
  ar5_00 = (undefined4 *)0x1;
  ar4_00 = (undefined4 *)0xffffffff;
  if (s0 == 0) {
    iVar4 = 0;
  }
  else if (s0 == 1) {
    iVar4 = 1;
  }
  else if (s0 == 2) {
    iVar4 = -1;
  }
  if (s4 == 0) {
    unaff_r13 = 0;
  }
  else if (s4 == 1) {
    unaff_r13 = 1;
  }
  else if (s4 == 2) {
    unaff_r13 = -1;
  }
  ar6_00 = ar6;
  ar7_00 = ar7;
  FUN_8c1f9150(0xffffffff,1,ar6,ar7);
  FUN_8c1f9284(ar4_00,ar5_00,ar6_00,ar7_00);
  if (ar6 == (undefined4 *)0x1) {
    ar4_00 = (undefined4 *)0x0;
    ar5_00 = ar4;
    ar6_00 = ar5;
    if (0 < ar7) {
      do {
        uVar1 = *(undefined1 *)ar5_00;
        ar4_00 = (undefined4 *)((int)ar4_00 + 1);
        ar5_00 = (undefined4 *)((int)ar5_00 + iVar4);
        *(undefined1 *)ar6_00 = uVar1;
        ar6_00 = (undefined4 *)((int)ar6_00 + unaff_r13);
      } while ((int)ar4_00 < ar7);
    }
  }
  else if (ar6 == (undefined4 *)0x2) {
    ar7_00 = iVar4 * 2;
    ar5_00 = (undefined4 *)0x0;
    ar4_00 = ar5;
    ar6_00 = ar4;
    if (0 < ar7) {
      do {
        uVar2 = *(undefined2 *)ar6_00;
        ar5_00 = (undefined4 *)((int)ar5_00 + 1);
        ar6_00 = (undefined4 *)((int)ar6_00 + ar7_00);
        *(undefined2 *)ar4_00 = uVar2;
        ar4_00 = (undefined4 *)((int)ar4_00 + unaff_r13 * 2);
      } while ((int)ar5_00 < ar7);
    }
  }
  else if (ar6 == (undefined4 *)0x4) {
    ar7_00 = iVar4 * 4;
    ar6_00 = (undefined4 *)0x0;
    ar4_00 = ar5;
    ar5_00 = ar4;
    if (0 < ar7) {
      do {
        uVar3 = *ar4;
        ar6_00 = (undefined4 *)((int)ar6_00 + 1);
        ar4 = ar4 + iVar4;
        *ar5 = uVar3;
        ar5 = ar5 + unaff_r13;
        ar4_00 = ar5;
        ar5_00 = ar4;
      } while ((int)ar6_00 < ar7);
    }
  }
  FUN_8c1f8fc8(ar4_00,ar5_00,ar6_00,ar7_00);
  return 0;
}

__asm__(".globl _FUN_8c1f92c0\n.set _FUN_8c1f92c0, _FUN_8c1f92c0_def\n");
