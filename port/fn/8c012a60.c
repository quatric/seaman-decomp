#include "../decls.h"
undefined4 FUN_8c012a60_def(undefined4 ar4,short *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int ar6_00;
  byte *ar4_00;
  byte abStack_1c [12];
  
  *ar5 = (short)ar4 + 0x3f;
  FUN_8c012af8(ar4,abStack_1c,ar6,ar7);
  memset(ar6,0,8,ar7);
  iVar3 = 0;
  ar6_00 = 0;
  for (ar4_00 = abStack_1c; *ar4_00 == 0; ar4_00 = ar4_00 + 1) {
    iVar3 = iVar3 + 1;
    *ar5 = *ar5 + -8;
  }
  for (uVar2 = 0x80; (*ar4_00 & uVar2) == 0; uVar2 = uVar2 >> 1) {
    ar6_00 = ar6_00 + 1;
  }
  FUN_8c01289c(ar4_00,8 - iVar3,ar6_00,ar7,ar6);
  *ar5 = *ar5 - (short)ar6_00;
  uVar1 = memmove(ar6,ar4_00,8 - iVar3,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c012a60\n.set _FUN_8c012a60, _FUN_8c012a60_def\n");
