#include "../decls.h"
undefined4 FUN_8c1f736c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar5_00;
  int iVar1;
  int ar4_00;
  undefined1 *ar5_01;
  undefined4 ar6_00;
  uint ar5_02;
  uint uVar2;
  
  iVar1 = _DAT_8c4749d8;
  _DAT_8c4749dc = _DAT_8c4749e0;
  _DAT_8c474a04 = _DAT_8c474a04 + 1;
  FUN_8c1f8176(0x8c4749f2,ar5,ar6,ar7);
  FUN_8c1f826c(0x8c4749f2,&DAT_8c4749d8,ar6,ar7);
  ar5_00 = libgcc_divide_helper_01051c(_DAT_8c4749d8 - iVar1,0x3c);
  uVar2 = (uint)DAT_8c4749ec;
  ar5_02 = 0x3c - DAT_8c4749ed;
  if (ar5_02 < ar5_00) {
    FUN_8c1f7134(uVar2 * 2 + -0x73b8b6be,ar5_02,ar6,ar7,ar4);
    uVar2 = uVar2 + 1;
    ar5_00 = ar5_00 - ar5_02;
    if (0x17 < uVar2) {
      uVar2 = 0;
    }
    while (0x3c < ar5_00) {
      FUN_8c1f7134(uVar2 * 2 + -0x73b8b6be,0x3c,ar6,ar7,ar4);
      uVar2 = uVar2 + 1;
      ar5_00 = ar5_00 - 0x3c;
      if (0x17 < (int)uVar2) {
        uVar2 = 0;
      }
    }
  }
  FUN_8c1f7134(uVar2 * 2 + -0x73b8b6be,ar5_00,ar6,ar7,ar4);
  iVar1 = ar4 + 2;
  _DAT_8c4749b2 = _DAT_8c474a04;
  ar6_00 = 10;
  memmove(0x8c4749e8,0x8c4749f2,10,ar7);
  ar4_00 = iVar1 + 1;
  iVar1 = FUN_8c1f6e5e(iVar1,0x8c47493c,ar6_00,ar7);
  if (iVar1 == 1) {
    ar5_01 = &DAT_8c474978;
    iVar1 = FUN_8c1f6e5e(ar4_00,&DAT_8c474978,ar6_00,ar7);
    if (iVar1 == 1) {
      _DAT_8c4748c0 = FUN_8c1f6f06(ar4_00,ar5_01,ar6_00,ar7);
      return 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c1f736c\n.set _FUN_8c1f736c, _FUN_8c1f736c_def\n");
