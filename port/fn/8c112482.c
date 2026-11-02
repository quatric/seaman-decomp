#include "../decls.h"
int * FUN_8c112482_def(int *ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  undefined4 a6;
  int a7;
  int a5;
  
  a5 = ar5 * ar6;
  *ar4 = ar5;
  ar4[1] = ar6;
  a6 = 4;
  ar4[2] = a5;
  a7 = ar7;
  iVar1 = (**(code **)(ar7 + 0x14))(ar7,a5,4,ar7);
  ar4[3] = iVar1;
  if (iVar1 == 0) {
    (**(code **)(ar7 + 0x18))(ar7,ar4,a6,a7);
    ar4 = (int *)0x0;
  }
  else {
    *(undefined1 *)(ar4 + 5) = 1;
    ar4[4] = a5 * 4 + ar4[3];
  }
  return ar4;
}

__asm__(".globl _FUN_8c112482\n.set _FUN_8c112482, _FUN_8c112482_def\n");
