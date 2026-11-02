#include "../decls.h"
undefined4 FUN_8c1f2796_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 ar4_00;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  a7 = 0;
  a6 = 0;
  a5 = 0;
  ar4_00 = *(undefined4 *)(DAT_8c2739e0 + 0x14);
  piVar1 = (int *)FUN_8c1f302a(ar4_00,0,0,0);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x30))(ar4_00,a5,a6,a7);
    if (iVar2 != 0) {
      piVar1[0xf] = iVar2;
      *(undefined2 *)(piVar1 + 0x14) = 4;
      if ((*(short *)(DAT_8c2739e0 + 0x3a) == 0) || (*(int *)(DAT_8c2739e0 + 0x2c) < 0x10001)) {
        *(undefined2 *)(piVar1 + 0x12) = 6;
      }
      else {
        piVar1[1] = (int)&DAT_8c470fb4;
        *(undefined2 *)(piVar1 + 0x12) = 8;
      }
      *(int **)(*piVar1 + 0x1c) = piVar1;
      (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))(ar4_00,a5,a6,a7);
    }
    if (iVar2 != 0) {
      return 0;
    }
  }
  return 0xfffffff3;
}

__asm__(".globl _FUN_8c1f2796\n.set _FUN_8c1f2796, _FUN_8c1f2796_def\n");
