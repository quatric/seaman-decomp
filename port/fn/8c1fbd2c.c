#include "../decls.h"
int FUN_8c1fbd2c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,code *ar7)

{
  int iVar1;
  undefined4 a4;
  code *a5;
  code *ain0;
  
  _DAT_8c475f88 = 0;
  _DAT_8c475f8c = 0;
  _DAT_8c475f90 = 0;
  _DAT_8c475f94 = 0;
  _DAT_8c475f98 = ar6;
  _DAT_8c475f9c = ar5;
  ain0 = ar7;
  FUN_8c1fc9b0(ar5,ar5,ar6,ar7);
  iVar1 = FUN_8c1fd626(ar4,ar5,ar6,ar7);
  a5 = FUN_8c1fbe84;
  a4 = 0x14;
  FUN_8c1f03a6(0x14,FUN_8c1fbe84,ar6,ar7,ain0);
  if ((iVar1 == 0) && (ain0 != (code *)0x0)) {
    (*ain0)(a4,a5,ar6,ar7);
  }
  DAT_8c273a44 = 1;
  return iVar1;
}

__asm__(".globl _FUN_8c1fbd2c\n.set _FUN_8c1fbd2c, _FUN_8c1fbd2c_def\n");
