#include "../decls.h"
undefined4 * FUN_8c11241e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint unaff_r12;
  int unaff_r13;
  undefined4 *unaff_r14;
  undefined4 in_fr5;
  undefined8 uVar4;
  char in_FPSCR_SZ = 0;
  
  *unaff_r14 = ar5;
  unaff_r14[1] = ar6;
  unaff_r14[2] = unaff_r12;
  iVar1 = (**(code **)(unaff_r13 + 0x10))(unaff_r13,unaff_r12 << 2,ar6,ar7);
  unaff_r14[3] = iVar1;
  if (iVar1 == 0) {
    (**(code **)(unaff_r13 + 0x18))(unaff_r13,unaff_r14,ar6,ar7);
    unaff_r14 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)(unaff_r14 + 5) = 1;
    uVar3 = 0;
    unaff_r14[4] = unaff_r12 * 4 + unaff_r14[3];
    puVar2 = (undefined8 *)unaff_r14[3];
    if (in_FPSCR_SZ == '\0') {
      uVar4 = CONCAT44(_DAT_8c1125e0,in_fr5);
    }
    else {
      uVar4 = CONCAT44((&FUN_8c1129e4),_DAT_8c1125e0);
    }
    if (unaff_r12 != 0) {
      do {
        uVar3 = uVar3 + 1;
        if (in_FPSCR_SZ == '\0') {
          *(int *)puVar2 = (int)((ulonglong)uVar4 >> 0x20);
        }
        else {
          *puVar2 = uVar4;
        }
        puVar2 = (undefined8 *)((int)puVar2 + 4);
      } while (uVar3 < unaff_r12);
    }
  }
  return unaff_r14;
}

__asm__(".globl _FUN_8c11241e\n.set _FUN_8c11241e, _FUN_8c11241e_def\n");
