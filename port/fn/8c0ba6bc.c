#include "../decls.h"
undefined4 FUN_8c0ba6bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 auStack_24 [20];
  undefined1 auStack_10 [4];
  byte bStack_c;
  
  cVar2 = '\0';
  if (DAT_8c43660c == '\0') {
    _DAT_8c436608 = (undefined **)0x3f866666;
    _DAT_8c43660c = CONCAT31(_DAT_8c43660d,1);
  }
  FUN_8c1f8176(auStack_10,ar5,ar6,ar7);
  if (cVar2 != '\0') {
    _DAT_8c436608 = &PTR_DAT_8c13bd4c;
  }
  _DAT_8c436604 = 0x41980000;
  _DAT_8c436600 = 0x42480000;
  if (bStack_c < 0xc) {
    if (bStack_c == 0) {
      bStack_c = 0xc;
    }
    FUN_8c014334(auStack_24,ar5,ar6,ar7,s__s__2d__2d__02d_AM_8c13c86b);
  }
  else {
    if (bStack_c != 0xc) {
      bStack_c = bStack_c - 0xc;
    }
    FUN_8c014334(auStack_24,ar5,ar6,ar7,s__s__2d__2d__02d_PM_8c13c87e);
  }
  uVar1 = FUN_8c0c4370(&DAT_8c2b5628,auStack_24,0,0xe);
  return uVar1;
}

__asm__(".globl _FUN_8c0ba6bc\n.set _FUN_8c0ba6bc, _FUN_8c0ba6bc_def\n");
