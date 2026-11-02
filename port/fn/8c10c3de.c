#include "../decls.h"
undefined4 FUN_8c10c3de_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  int *a4;
  int iVar1;
  undefined4 uVar2;
  int *a6;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = *(undefined4 *)(ar4 + 4);
  uStack_14 = 0;
  a6 = ar6;
  a4 = (int *)(**(code **)(ar4 + 8))(0x10,&uStack_18,ar6,ar7);
  if (a4 == (int *)0x0) {
LAB_8c10c44a:
    uVar2 = 1;
  }
  else {
    a4[2] = *ar5 + -8;
    a4[1] = ar5[1];
    if (a4[2] == 0) {
      a4[3] = 0;
    }
    else {
      iVar1 = (**(code **)(ar4 + 8))(a4[2],&uStack_18,a6,ar7);
      a4[3] = iVar1;
      if (iVar1 == 0) {
        (**(code **)(ar4 + 0xc))(a4,&uStack_18,a6,ar7);
        goto LAB_8c10c44a;
      }
      memmove(a4[3],ar5 + 2,a4[2],ar7);
    }
    uVar2 = 0;
    *a4 = ar4;
    *ar6 = (int)a4;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10c3de\n.set _FUN_8c10c3de, _FUN_8c10c3de_def\n");
