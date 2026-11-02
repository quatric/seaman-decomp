#include "../decls.h"
undefined4 FUN_8c0d0178_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 auStack_c [2];
  
  if (*(undefined4 *)0x8c4374ac == '\0') {
    *(undefined4 *)0x8c4374a8 = 5;
    *(undefined4 *)0x8c4374ac = '\x01';
  }
  iVar1 = *(int *)(ar4 + 0x28);
  if (iVar1 == 0) {
    if (*(int *)(ar4 + 0x14) == 1) {
      auStack_c[0] = FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7);
      ar6 = 9;
      FUN_8c021994(0x8c2b59d0,auStack_c[0],9,ar7);
      ar5 = auStack_c;
      FUN_8c021a8c(0x8c2b59d0,ar5,ar6,ar7);
      *(undefined2 *)(ar4 + 0x2c) = 0;
      *(undefined4 *)(ar4 + 0x28) = 1;
    }
  }
  else if (iVar1 == 1) {
    *(short *)(ar4 + 0x2c) = *(short *)(ar4 + 0x2c) + 1;
    if (*(undefined4 *)0x8c4374a8 <= (int)*(short *)(ar4 + 0x2c)) {
      *(undefined2 *)(ar4 + 0x2c) = 0;
      *(undefined4 *)(ar4 + 0x28) = 2;
    }
    if (*(int *)(ar4 + 0x14) == 0) {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
  }
  else if (iVar1 == 2) {
    if (*(int *)(ar4 + 0x34) == -1) {
      uVar2 = FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x34) = uVar2;
      ar6 = 10;
      ar5 = *(undefined4 **)(ar4 + 0x34);
      FUN_8c021994(0x8c2b59d0,ar5,10,ar7);
    }
    if ((*(int *)(ar4 + 0x14) == 0) && (*(int *)(ar4 + 0x34) != -1)) {
      FUN_8c021a60(0x8c2b59d0,*(undefined4 *)(ar4 + 0x34),ar6,ar7);
      ar5 = (undefined4 *)(ar4 + 0x34);
      FUN_8c021a8c(0x8c2b59d0,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x34) = 0xffffffff;
      *(undefined4 *)(ar4 + 0x28) = 3;
    }
  }
  else if (iVar1 == 3) {
    auStack_c[0] = FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7);
    ar6 = 0xb;
    FUN_8c021994(0x8c2b59d0,auStack_c[0],0xb,ar7);
    ar5 = auStack_c;
    FUN_8c021a8c(0x8c2b59d0,ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x28) = 0;
  }
  uVar2 = FUN_8c0d02c8(ar4,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0d0178\n.set _FUN_8c0d0178, _FUN_8c0d0178_def\n");
