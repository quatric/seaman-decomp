#include "../decls.h"
undefined4 FUN_8c0d1b90_def(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a5;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    a5 = ar5;
    get_field_24_05c284(*ar4,ar5,ar6,ar7);
    if (ar5 == 1) {
      uVar1 = (**(code **)(0x148 + *(int *)(*ar4 + 8)))(*ar4,a5,ar6,ar7);
      ar6 = (int)(short)uVar1;
      (**(code **)(0xec + *(int *)(*ar4 + 8)))(*ar4,0x8c3eb334,ar6,ar7);
    }
    (**(code **)(*(int *)(*ar4 + 8) + 0x58))(*ar4,0x8c3eb324,ar6,ar7);
    uVar1 = FUN_8c0ff500(0x8c3eb324,ar4,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0d1b90\n.set _FUN_8c0d1b90, _FUN_8c0d1b90_def\n");
