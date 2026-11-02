#include "../decls.h"
undefined4 FUN_8c022918_def(undefined4 ar4,int *ar5,undefined4 ar6,int ar7,int s0)

{
  undefined4 uVar1;
  
  if ((*ar5 == 1) || (*ar5 == 3)) {
    s_E8101202_can_t_open_d_d_ADXT_26440a(ar5[1],0,ar6,ar7);
    *ar5 = 2;
    ar5[2] = ar7;
    ar5[3] = s0;
    ar5[4] = 0;
    ar5[5] = 0;
    ar5[6] = 0;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c022918\n.set _FUN_8c022918, _FUN_8c022918_def\n");
