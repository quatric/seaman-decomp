#include "../decls.h"
undefined4 s_CFrogManEgg_NewChild_038c92_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a6;
  undefined4 uVar1;
  
  a6 = s_Shell_0fef9c(ar5,5,6,ar7);
  if (a6 == 0) {
    uVar1 = (*(code *)(&report_error_message))
                      ((&DATA_8c1340f4) + 0x1d75,
                       (&DATA_8c1340f4) + 0x1d7d,1,2);
  }
  else {
    uVar1 = (**(code **)(0x100 + *(int *)(ar4 + 8)))(ar4,0,a6,ar7);
  }
  return uVar1;
}

__asm__(".globl _s_CFrogManEgg_NewChild_038c92\n.set _s_CFrogManEgg_NewChild_038c92, _s_CFrogManEgg_NewChild_038c92_def\n");
