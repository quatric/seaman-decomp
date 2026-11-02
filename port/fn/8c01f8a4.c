#include "../decls.h"
int FUN_8c01f8a4_def(int *ar4,undefined4 ar5,int *ar6,int ar7)

{
  int iVar1;
  int *ar5_00;
  
  iVar1 = s_E9040832_adxf_is_NULL_ADXF_G_2626b4(*ar4,ar5,ar6,ar7);
  if ((iVar1 == 3) || (iVar1 == 4)) {
    if (*ar4 != 0) {
      FUN_8c262168(*ar4,ar5,ar6,ar7);
    }
    *ar4 = 0;
    if (iVar1 == 3) {
      ar7 = ar4[1] + 0x10;
      ar6 = ar4 + 8;
      ar5_00 = *(int **)ar4[1];
      FUN_8c020600(ar4,ar5_00,ar6,ar7);
      iVar1 = *(int *)(uint)ar4[1];
      if ((iVar1 < 0x11) && (-1 < iVar1)) {
                    
        switch(iVar1) {
        default:
          ar5_00 = (int *)(uint)ar4[1];
          s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e(ar4,ar5_00,ar6,ar7);
          break;
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
          break;
        case 0xf:
          ar6 = (int *)(uint)ar4[1];
          ar5_00 = ar4 + 0xc;
          FUN_8c0205e8(ar4,ar5_00,ar6,ar7);
          break;
        case 0x10:
          ar6 = (int *)(uint)ar4[1];
          ar5_00 = ar4 + 0xd;
          FUN_8c0205e8(ar4,ar5_00,ar6,ar7);
        }
      }
    }
    else {
      ar5_00 = (int *)(uint)ar4[1];
      FUN_8c02049c(ar4,ar5_00,ar6,ar7);
    }
    iVar1 = FUN_8c02009c(ar4,ar5_00,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01f8a4\n.set _FUN_8c01f8a4, _FUN_8c01f8a4_def\n");
