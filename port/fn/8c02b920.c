#include "../decls.h"
int FUN_8c02b920_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar7_00 = 8;
  ar6_00 = 0;
  ar5_00 = (&FUN_8c024508);
  FUN_8c010120(ar4,(&FUN_8c024508),0,8,8);
  FUN_8c0154ec(ar4 + 0x1e4,ar5_00,ar6_00,ar7_00);
  FUN_8c0154ec(ar4 + 0x1e8,ar5_00,ar6_00,ar7_00);
  FUN_8c015ab8(ar4 + 0x1ec,ar5_00,ar6_00,ar7_00);
  FUN_8c015224(ar4 + 0x1f0,ar5_00,ar6_00,ar7_00);
  FUN_8c015224(ar4 + 0x1f8,ar5_00,ar6_00,ar7_00);
  return ar4;
}

__asm__(".globl _FUN_8c02b920\n.set _FUN_8c02b920, _FUN_8c02b920_def\n");
