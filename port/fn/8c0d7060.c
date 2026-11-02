#include "../decls.h"
int FUN_8c0d7060_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c015ab8(ar4,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 4,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x14,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0x24,ar5,ar6,ar7);
  FUN_8c016fcc(ar4 + 0x30,ar5,ar6,ar7);
  FUN_8c016fcc(ar4 + 0xc4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x164) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x158) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x158) = CONCAT44(0x3f800000,extraout_fr1);
  }
  FUN_8c0d7314(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0d7060\n.set _FUN_8c0d7060, _FUN_8c0d7060_def\n");
