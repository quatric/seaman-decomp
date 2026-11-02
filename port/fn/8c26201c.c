#include "../decls.h"
int FUN_8c26201c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int iVar1;
  undefined4 ain0;
  
  ar5_00 = 0;
  ar4_00 = 1;
  ar6_00 = ar4;
  ain0 = ar5;
  FUN_8c261a4c(1,0,ar4,ar5);
  FUN_8c260ca0(ar4_00,ar5_00,ar6_00,ar5,ain0);
  a4 = FUN_8c261f48(ar4_00,ar5_00,ar6_00,ar5);
  iVar1 = a4;
  if ((a4 != 0) &&
     (ar5_00 = ar4, ar4_00 = s_E9040901_can_t_find_s_ADXF_O_261f82(a4,ar4,ar6_00,ar5), ar4_00 < 0))
  {
    FUN_8c262168(a4,ar5_00,ar6_00,ar5);
    iVar1 = 0;
    ar4_00 = a4;
  }
  FUN_8c260cc8(ar4_00,ar5_00,ar6_00,ar5,ain0);
  FUN_8c261a4c(1,1,ar4,ain0);
  return iVar1;
}

__asm__(".globl _FUN_8c26201c\n.set _FUN_8c26201c, _FUN_8c26201c_def\n");
