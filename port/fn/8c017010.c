#include "../decls.h"
int * FUN_8c017010_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
                  ,undefined4 s8,undefined4 s12,undefined4 s16)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  FUN_8c016a7c(ar4,ar5,ar6,ar7);
  *ar4 = (int)(&DATA_8c129938);
  FUN_8c015ab8((int)ar4 + 0x90,ar5_00,ar6_00,ar7_00);
  (**(code **)(*ar4 + 0x2c))(ar4,ar5,ar6,ar7,s0,s4,s8,s12,s16);
  FUN_8c017804(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c017010\n.set _FUN_8c017010, _FUN_8c017010_def\n");
