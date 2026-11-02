#include "../decls.h"
int FUN_8c20c980_def(uint *ar4,uint *ar5,uint *ar6,undefined4 ar7,undefined4 s0)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = FUN_8c20d128(ar4,ar6,ar7,s0);
  puVar1 = (&FUN_8c2072b2);
  if (iVar2 == 0) {
    *ar5 = *ar4;
    ar5[1] = ar4[1];
    ar5[2] = ar4[2];
    ar5[3] = ar4[3];
    ar5[4] = ar4[4];
    ar5[5] = ar4[5];
    ar5[6] = ar4[6];
    if ((*ar4 & 0xffff) == 3) {
      iVar2 = FUN_8c203a92(ar4,ar6,ar7,s0);
      if (iVar2 != 3) {
        iVar2 = FUN_8c203a92(ar5,ar6,ar7,s0);
        if (iVar2 != 3) {
          return iVar2;
        }
        FUN_8c203cd0(ar4,ar6,ar7,s0);
        (*(code *)puVar1)(3,ar6,ar7,s0);
        return 3;
      }
    }
    else {
      ar6 = ar4;
      iVar2 = FUN_8c2038c0(ar4[5],ar4,ar7,s0);
      if (iVar2 != 3) {
        iVar2 = FUN_8c2038c0(ar5[5],ar5,ar7,s0);
        if (iVar2 != 3) {
          return iVar2;
        }
        FUN_8c203bda(ar4[7],ar5,ar7,s0);
        (*(code *)puVar1)(3,ar5,ar7,s0);
        return 3;
      }
    }
    (*(code *)puVar1)(3,ar6,ar7,s0);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c20c980\n.set _FUN_8c20c980, _FUN_8c20c980_def\n");
