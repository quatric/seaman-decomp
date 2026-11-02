#include "../decls.h"
undefined4 FUN_8c0c23fc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  int iVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar6_00 = ar6;
  ar7_00 = ar7;
  FUN_8c0bf7c8(ar4 + 0x2e710,ar5,ar6,ar7);
  FUN_8c0c1ce4(ar4 + 0x2e710,ar7,ar6_00,ar7_00,ar5);
  FUN_8c0c1cdc(ar4 + 0x2e710,1,ar6_00,ar7_00,ar5);
  *(undefined4 *)(ar4 + 0x2e75c) = 1;
  strcpy(ar4 + 0x2e740,s4,ar6_00,ar7_00,ar5);
  iVar1 = FUN_8c0bf780(*(undefined4 *)(ar5 + 0x7cc),s4,ar6_00,ar7_00);
  if (iVar1 == 1) {
    ar6 = 0x11;
  }
  return ar6;
}

__asm__(".globl _FUN_8c0c23fc\n.set _FUN_8c0c23fc, _FUN_8c0c23fc_def\n");
