#include "../decls.h"
int aica_ram_266970_def(uint ar4,int ar5,uint ar6,code *ar7,undefined4 s0)

{
  int ar5_00;
  uint uVar1;
  code *ar7_00;
  int ar5_01;
  
  ar5_01 = 0;
  if (((ar4 & 3) == 0) && ((ar6 & 3) == 0)) {
    uVar1 = ar6;
    if ((int)ar6 < 0) {
      uVar1 = ar6 + 3;
    }
    ar7_00 = (code *)((int)uVar1 >> 2);
    ar5_00 = ar5 + -0x5f800000;
    uVar1 = 4;
    _DAT_8c4bd404 = FUN_8c1f9610(ar4,ar5_00,4,ar7_00,1,1);
    if ((ar7 != (code *)0x0) && (ar7 != (code *)0xffffffff)) {
      (*ar7)(s0,ar5_00,uVar1,ar7_00);
    }
  }
  else {
    ar5_01 = 0x7fffffff;
    uVar1 = ar6;
    ar7_00 = ar7;
  }
  if (ar5_01 != 0) {
    FUN_8c2688a0(aica_ram_266970,ar5_01,uVar1,ar7_00,ar6);
  }
  return ar5_01;
}

__asm__(".globl _aica_ram_266970\n.set _aica_ram_266970, _aica_ram_266970_def\n");
