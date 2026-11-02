#include "../decls.h"
int Class_12a990_m6_09c6a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  undefined4 ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  FUN_8c0294c0(ar4,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(0x524 + ar4 + iVar1 * 4) != 0) {
      a4 = *(int *)(0x524 + ar4 + iVar1 * 4);
      ar5_00 = ar5;
      (**(code **)(*(int *)(a4 + 8) + 0x20))(a4,ar5,ar6,ar7);
    }
  }
  FUN_8c09b544(ar4 + 0x9a4,ar5_00,ar6,ar7);
  FUN_8c09b6c4(ar4 + 0x9a4,ar5_00,ar6,ar7);
  iVar1 = 0x6e0;
  *(undefined1 *)(0x6e0 + ar4) = 0xff;
  return iVar1;
}

__asm__(".globl _Class_12a990_m6_09c6a4\n.set _Class_12a990_m6_09c6a4, _Class_12a990_m6_09c6a4_def\n");
