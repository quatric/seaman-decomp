#include "../decls.h"
undefined4 FUN_8c1f2418_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 a4;
  undefined4 a5;
  int a6;
  undefined4 a7;
  
  a7 = 0;
  piVar1 = (int *)FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,0,0);
  if (piVar1 != (int *)0x0) {
    a5 = 0xe;
    a6 = DAT_8c2739e0 + 0x40;
    a4 = 1;
    iVar2 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x3c))(1,0xe,a6,a7);
    if (iVar2 != 0) {
      piVar1[0xf] = iVar2;
      *(undefined2 *)(piVar1 + 0x14) = 4;
      *(undefined2 *)(piVar1 + 0x12) = 10;
      *(int **)(*piVar1 + 0x1c) = piVar1;
      (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))(a4,a5,a6,a7);
      return 0;
    }
  }
  return 0xfffffff3;
}

__asm__(".globl _FUN_8c1f2418\n.set _FUN_8c1f2418, _FUN_8c1f2418_def\n");
