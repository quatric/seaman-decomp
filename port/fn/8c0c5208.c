#include "../decls.h"
int FUN_8c0c5208_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c015224(ar4,ar5,ar6,ar7);
  FUN_8c015ab8(ar4 + 8,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0xc,ar5,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x18) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x18) = CONCAT44(0x3f800000,extraout_fr1);
  }
  *(undefined4 *)(ar4 + 0x1c) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0c5208\n.set _FUN_8c0c5208, _FUN_8c0c5208_def\n");
