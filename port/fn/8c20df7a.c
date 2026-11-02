#include "../decls.h"
undefined4 FUN_8c20df7a_def(int ar4,uint ar5,int ar6,uint *ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int ar6_00;
  uint *ar7_00;
  undefined4 in_PR;
  uint ain0;
  
  if (ar4 == 0) {
    uVar1 = 1;
  }
  else {
    ar6_00 = ar6;
    ar7_00 = ar7;
    ain0 = ar5;
    uVar2 = FUN_8c20e720(ar4,ar5,ar6,ar7);
    *ar7 = uVar2;
    if (ar6 != 0) {
      if (ain0 < *ar7) {
        return 2;
      }
      uVar2 = 0;
      if (*ar7 != 0) {
        do {
          FUN_8c010838(uVar2,ar5,ar6_00,ar7_00,ain0,in_PR);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *ar7);
      }
      FUN_8c20e78e(ar6,ar5,ar6_00,ar7_00);
    }
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c20df7a\n.set _FUN_8c20df7a, _FUN_8c20df7a_def\n");
