#include "../decls.h"
undefined4 FUN_8c0129b4_def(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  byte *ar6_00;
  byte abStack_1c [8];
  byte bStack_14;
  
  puVar1 = (&FUN_8c0128e8);
  *ar4 = (short)ar6 + *ar4;
  ar6_00 = abStack_1c;
  (*(code *)puVar1)(ar5,ar7,abStack_1c,ar7);
  if ((abStack_1c[0] & 0x80) == 0) {
    FUN_8c012854(abStack_1c,0x10,ar6_00,ar7);
  }
  else {
    *ar4 = *ar4 + 1;
  }
  FUN_8c012e00(abStack_1c,0x10,0x42,ar7);
  bStack_14 = bStack_14 & 0xe0;
  uVar2 = memmove(ar5,abStack_1c,9,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0129b4\n.set _FUN_8c0129b4, _FUN_8c0129b4_def\n");
