#include "../decls.h"
int aica_ram_2668fc_def(int ar4,uint ar5,uint ar6,int ar7)

{
  uint ar6_00;
  int iVar1;
  int ar5_00;
  
  ar5_00 = 0;
  if (((ar5 & 3) == 0) && ((ar6 & 3) == 0)) {
    iVar1 = ar6 + 3;
    if (iVar1 < 0) {
      iVar1 = ar6 + 6;
    }
    ar7 = iVar1 >> 2;
    ar6_00 = 4;
    _DAT_8c4bd404 = FUN_8c1f92c0(ar4 + -0x5f800000,ar5,4,ar7,1,1);
  }
  else {
    ar5_00 = 0x7fffffff;
    ar6_00 = ar6;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(aica_ram_2668fc,ar5_00,ar6_00,ar7,ar6);
  }
  return ar5_00;
}

__asm__(".globl _aica_ram_2668fc\n.set _aica_ram_2668fc, _aica_ram_2668fc_def\n");
