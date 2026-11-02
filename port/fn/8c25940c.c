#include "../decls.h"
undefined4 FUN_8c25940c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 in_r0;
  undefined4 uVar2;
  
  piVar1 = 0x8c4aabbc;
  switch(in_r0) {
  case 0:
    ar5 = 0;
    break;
  case 1:
    ar5 = 1;
    break;
  case 2:
    ar5 = 2;
    break;
  case 3:
    ar5 = 3;
    break;
  case 4:
    ar5 = 4;
    break;
  case 5:
    ar5 = 5;
    break;
  case 6:
    ar5 = 6;
    break;
  case 7:
    ar5 = 7;
    break;
  case 8:
    ar5 = 8;
    break;
  case 9:
    ar5 = 9;
    break;
  case 10:
    ar5 = 10;
    break;
  case 0xb:
    ar5 = 0xb;
  }
  if (ar4 == 0) {
    *(undefined4 *)*(undefined4 *)0x8c4aabbc = 0x40;
    *(undefined4 *)(*piVar1 + 0x2c) = ar5;
  }
  if (ar4 == 1) {
    *(int *)*piVar1 = (int)0x80;
    *(undefined4 *)(*piVar1 + 0x30) = ar5;
  }
  FUN_8c20f640(*piVar1,ar5,ar6,ar7);
  uVar2 = FUN_8c20fe00(*piVar1);
  return uVar2;
}

__asm__(".globl _FUN_8c25940c\n.set _FUN_8c25940c, _FUN_8c25940c_def\n");
