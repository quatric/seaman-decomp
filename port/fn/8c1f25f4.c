#include "../decls.h"
undefined4 FUN_8c1f25f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  int a4;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  if (0xb05d < ar4) {
    a7 = 0;
    piVar1 = (int *)FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,0,0);
    if (piVar1 != (int *)0x0) {
      a4 = ar4;
      a5 = ar5;
      a6 = ar6;
      iVar2 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x2c))(ar4,ar5,ar6,a7);
      if (iVar2 != 0) {
        piVar1[0xf] = iVar2;
        *(undefined2 *)(piVar1 + 0x14) = 4;
        if (*(int *)(DAT_8c2739e0 + 0x2c) < 0x10001) {
          *(undefined2 *)(piVar1 + 0x12) = 6;
        }
        else {
          *(undefined2 *)(DAT_8c2739e0 + 0x3a) = 1;
          _DAT_8c470fa0 = 2;
          _DAT_8c470fa4 = ar4;
          _DAT_8c470fa8 = ar5;
          _DAT_8c470fac = ar6;
          piVar1[1] = (int)&DAT_8c470fb0;
          *(undefined2 *)(piVar1 + 0x12) = 8;
        }
        *(int **)(*piVar1 + 0x1c) = piVar1;
        (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))(a4,a5,a6,a7);
      }
      if (iVar2 != 0) {
        return 0;
      }
    }
  }
  return 0xfffffff3;
}

__asm__(".globl _FUN_8c1f25f4\n.set _FUN_8c1f25f4, _FUN_8c1f25f4_def\n");
