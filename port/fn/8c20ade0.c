#include "../decls.h"
undefined4 FUN_8c20ade0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar5_00;
  int iVar1;
  uint ar6_00;
  int iVar2;
  uint ar7_00;
  uint ar7_01;
  uint uVar3;
  uint uVar4;
  uint ain0;
  
  uVar4 = _DAT_8c4a9e6c & 0xfff003ff;
  ar5_00 = _DAT_8c4a9eac & 0xffff;
  iVar1 = _DAT_8c4a9c0c;
  iVar2 = _DAT_8c4a9c08;
  uVar3 = _DAT_8c4a9bf0;
  if (ar4 == 0) {
    ar5_00 = _DAT_8c4a9eac & 0xff00;
  }
  else if ((((ar4 != 1) && (ar4 == 2)) && ((_DAT_8c4a9bcc & 3) == 0)) &&
          (((_DAT_8c4a9bcc & 0x20) != 0 &&
           (((_DAT_8c4a9bcc & 1) == 1 || ((_DAT_8c4a9bcc & 0x2c) != 0x20)))))) {
    ar5_00 = 0x471;
    iVar1 = _DAT_8c4a9c0c + 0xc;
    iVar2 = _DAT_8c4a9c08 + 0xc;
    uVar3 = 0xd6;
  }
  ain0 = _DAT_8c4a9eac & 0xffff0000 | ar5_00;
  ar6_00 = (iVar1 + _DAT_8c4a9c00) * 0x10000;
  ar7_00 = iVar2 + _DAT_8c4a9c00 | ar6_00;
  ar7_01 = ar7_00;
  FUN_8c2079fc(ar4,ar5_00,ar6_00,ar7_00,ain0);
  pvr_20a844(0x44,_DAT_8c4a9e74 & 0xfffffffe,ar6_00,ar7_01);
  pvr_20a844(0xe8,_DAT_8c4a9eb0 | 8,ar6_00,ar7_01);
  pvr_20a844(0xf0,ar7_00,ar6_00,ar7_01);
  pvr_20a844(0x5c,uVar4 | (uVar3 & 0x3ff) << 10,ar6_00,ar7_01);
  pvr_20a844(0xf4,ain0,ar6_00,ar7_01);
  _DAT_8c4a9e54 = 1;
  return 0;
}

__asm__(".globl _FUN_8c20ade0\n.set _FUN_8c20ade0, _FUN_8c20ade0_def\n");
