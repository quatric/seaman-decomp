#include "../decls.h"
int FUN_8c0243b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c0f3e30(ar4,ar5,ar6,ar7);
  FUN_8c02d50c(ar4 + 0x4c,ar5,ar6,ar7);
  FUN_8c02ff40(ar4 + 200,ar5,ar6,ar7);
  FUN_8c036058(ar4 + 0xd8,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0xe8) = 1;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0xec) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0xec) = CONCAT44(0x3f800000,extraout_fr1);
  }
  return ar4;
}

__asm__(".globl _FUN_8c0243b0\n.set _FUN_8c0243b0, _FUN_8c0243b0_def\n");
