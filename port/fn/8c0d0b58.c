#include "../decls.h"
int FUN_8c0d0b58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *ar5_00;
  undefined *ar6_00;
  undefined4 ar7_00;
  
  FUN_8c015224(ar4,ar5,ar6,ar7);
  FUN_8c015ab8(ar4 + 8,ar5,ar6,ar7);
  ar5_00 = (&FUN_8c014ab0);
  ar6_00 = (&FUN_8c0d0abc);
  ar7_00 = 0xac;
  FUN_8c010120(ar4 + 0xc,(&FUN_8c014ab0),(&FUN_8c0d0abc),0xac,0x15e)
  ;
  FUN_8c02145c(ar4 + 0xeb48,ar5_00,ar6_00,ar7_00);
  FUN_8c0d1564(ar4,ar5_00,ar6_00,ar7_00);
  return ar4;
}

__asm__(".globl _FUN_8c0d0b58\n.set _FUN_8c0d0b58, _FUN_8c0d0b58_def\n");
