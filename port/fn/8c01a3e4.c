#include "../decls.h"
int s_VM_User_Icon_VMI_01a3ec_def(int *ar4,int ar5,int ar6,undefined *ar7)

{
  int iVar1;
  undefined *ar5_00;
  undefined *ar6_00;
  int *ar7_00;
  uint uVar2;
  
  if ((ar5 != ar4[1]) || (*(undefined4 *)0x8c2791b0 == 0)) {
    *(undefined4 *)0x8c2791b0 = 0;
    ar4[1] = ar5;
    if (ar5 == 6) {
      ar5 = 4;
      *(undefined4 *)0x8c2791b4 = 2;
      ar4[2] = 7;
    }
    else if (ar5 == 0xc) {
      ar5 = 0x10;
      *(undefined4 *)0x8c2791b4 = 4;
      ar4[2] = 0xd;
    }
    else if (ar5 == 0x12) {
      ar5 = 0x40;
      *(undefined4 *)0x8c2791b4 = 6;
      ar4[2] = 0x13;
    }
    else {
      ar5 = 1;
      *(undefined4 *)0x8c2791b4 = 0;
      ar4[2] = 1;
    }
    ar6 = (int)ar4 + 0x62c;
    ar7 = (&FUN_8c01c998);
    iVar1 = FUN_8c1fbd2c(0xf,ar5,ar6,(&FUN_8c01c998));
    if (iVar1 != 0) {
      return *(undefined4 *)0x8c2791b0;
    }
    uVar2 = 0;
    while ((uVar2 <= 0xffff && (*(undefined4 *)0x8c2791b0 != 1))) {
      uVar2 = uVar2 + 1;
    }
    if (0xffff <= uVar2) {
      return *(undefined4 *)0x8c2791b0;
    }
  }
  if (*(undefined4 *)0x8c2791b0 == 1) {
    iVar1 = thunk_FUN_8c1fda7e(*(undefined4 *)0x8c2791b4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      return *(undefined4 *)0x8c2791b0;
    }
    *(undefined4 *)0x8c2791b0 = 2;
  }
  if (*(undefined4 *)0x8c2791b0 == 2) {
    iVar1 = thunk_FUN_8c1ffcc2(*(undefined4 *)0x8c2791b4,ar5,ar6,ar7);
    if (iVar1 != 0) {
      return *(undefined4 *)0x8c2791b0;
    }
    *(undefined4 *)0x8c2791b0 = 3;
  }
  if ((-1 < *ar4) && (*(int *)((int)ar4 + 0x2450 + *ar4 * 0x28) == 3)) {
    *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 2;
  }
  iVar1 = FUN_8c1f3b5c(ar4[2],ar5,ar6,ar7);
  if (iVar1 == 0) {
    ar4[5] = 0;
  }
  else if (iVar1 == 1) {
    ar4[5] = 3;
  }
  else {
    ar4[5] = 0;
  }
  ar7_00 = ar4 + 4;
  ar6_00 = (&DATA_8c12fb18) + 0x11;
  ar5_00 = (&DATA_8c12fb18);
  iVar1 = FUN_8c0213bc(0x8c3eb334,(&DATA_8c12fb18),ar6_00,ar7_00);
  if (iVar1 == 0) {
    ar4[4] = 0;
  }
  ar4[6] = 0;
  FUN_8c01be1c(ar4,ar5_00,ar6_00,ar7_00);
  return *(undefined4 *)0x8c2791b0;
}

__asm__(".globl _s_VM_User_Icon_VMI_01a3ec\n.set _s_VM_User_Icon_VMI_01a3ec, _s_VM_User_Icon_VMI_01a3ec_def\n");
