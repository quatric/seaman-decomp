#include "../decls.h"
undefined4 FUN_8c1f667e_def(int ar4,undefined4 ar5,code *ar6,undefined4 ar7)

{
  int iVar1;
  code *a6;
  undefined4 a7;
  
  iVar1 = (uint)(byte)(&DAT_8c26c80c)[ar4] * 0xc;
  *(undefined4 *)(iVar1 + -0x73b8d2c0) = ar5;
  *(undefined4 *)(iVar1 + -0x73b8d2bc) = ar7;
  *(code **)(iVar1 + -0x73b8d2b8) = ar6;
  a6 = ar6;
  a7 = ar7;
  iVar1 = FUN_8c1f6494(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = -2;
  }
  else {
    a6 = (code *)0x0;
    a7 = 0;
    iVar1 = s_FATAL_ERROR_Cannot_get_semap_1f06ae(ar4,8,0,0,0,&LAB_8c1f65e8);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = 0;
    }
  }
  if ((iVar1 < 0) && (ar6 != (code *)0x0)) {
    (*ar6)(iVar1,ar7,a6,a7);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f667e\n.set _FUN_8c1f667e, _FUN_8c1f667e_def\n");
