#include "../decls.h"
int * FUN_8c1124de_def(int *ar4,int *ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = *ar5 * ar5[1];
  iVar2 = (**(code **)(ar6 + 0x10))(ar6,*ar4 * ar4[1] * 4);
  ar4[3] = iVar2;
  if (iVar2 == 0) {
    (**(code **)(ar6 + 0x18))(ar6,ar4);
    ar4 = (int *)0x0;
  }
  else {
    *(undefined1 *)(ar4 + 5) = 1;
    puVar1 = (&FUN_8c1129e4);
    ar4[4] = *ar4 * ar4[1] * 4 + ar4[3];
    (*(code *)puVar1)(ar4,ar5);
  }
  return ar4;
}

__asm__(".globl _FUN_8c1124de\n.set _FUN_8c1124de, _FUN_8c1124de_def\n");
