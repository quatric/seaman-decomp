#include "../decls.h"
undefined4 * FUN_8c11a02c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 unaff_r10;
  undefined4 *unaff_r11;
  int unaff_r12;
  int unaff_r13;
  undefined4 *ar5_00;
  char in_T;
  
  puVar3 = *(undefined4 **)(in_r0 + unaff_r12);
  if (in_T != '\x01') {
    do {
      ar5_00 = *(undefined4 **)(0x114 + unaff_r12);
      if (ar5_00[1] == 0) {
        uVar1 = FUN_8c112fd8(unaff_r12,ar5_00,ar6,ar7);
        *(undefined4 *)(0x114 + unaff_r12) = uVar1;
      }
      else {
        *(undefined4 *)(0x114 + unaff_r12) = ar5_00[1];
      }
      ar5_00[4] = *(undefined4 *)(unaff_r13 + 0x10);
      *ar5_00 = 1;
      ar5_00[3] = *(undefined4 *)(unaff_r13 + 0xc);
      ar5_00[5] = *(undefined4 *)(unaff_r13 + 0x14);
      piVar2 = *(int **)(unaff_r13 + 4);
      ar5_00[1] = piVar2;
      *piVar2 = *piVar2 + 1;
      ar5_00[2] = unaff_r10;
      if (unaff_r11 != (undefined4 *)0x0) {
        unaff_r11[2] = ar5_00;
      }
      unaff_r13 = *(int *)(unaff_r13 + 8);
      unaff_r11 = ar5_00;
    } while (unaff_r13 != 0);
  }
  *puVar3 = unaff_r10;
  return puVar3;
}

__asm__(".globl _FUN_8c11a02c\n.set _FUN_8c11a02c, _FUN_8c11a02c_def\n");
