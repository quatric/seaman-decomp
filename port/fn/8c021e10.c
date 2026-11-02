#include "../decls.h"
int FUN_8c021e10_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  
  ar4_00 = FUN_8c013adc(ar5,ar5,ar6,ar7);
  iVar1 = libgcc_divide_helper_0101e4(ar4_00,0x14d,ar6,ar7);
  if ((iVar1 < 9) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      iVar1 = 0;
      break;
    case 1:
      iVar1 = 1;
      break;
    case 2:
      iVar1 = 2;
      break;
    case 3:
      iVar1 = 3;
      break;
    case 4:
      iVar1 = 4;
      break;
    case 5:
      iVar1 = 5;
      break;
    case 6:
      iVar1 = 6;
      break;
    case 7:
      iVar1 = 7;
      break;
    case 8:
      iVar1 = 8;
    }
  }
  else {
    iVar1 = 0xf;
  }
  if (ar5 < 0) {
    iVar1 = -iVar1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c021e10\n.set _FUN_8c021e10, _FUN_8c021e10_def\n");
