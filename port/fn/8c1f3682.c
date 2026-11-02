#include "../decls.h"
undefined4 FUN_8c1f3682_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint ar4_00;
  int a4;
  undefined4 a5;
  uint uVar4;
  int *unaff_r14;
  char in_T;
  
  puVar1 = (&sh4_tmu_1f88e6);
  if ((in_T == '\x01') || ((short)unaff_r14[0x13] == 0)) {
    uVar3 = 0xfffffff6;
  }
  else {
    ar4_00 = (uint)(short)unaff_r14[0x14];
    if ((ar4_00 == 2) || (ar4_00 == 4)) {
      if (*(int **)(*unaff_r14 + 0x1c) == unaff_r14) {
        uVar3 = sh4_tmu_1f88e6(ar4_00,ar5,ar6,ar7);
        while (puVar2 = (&FUN_8c1f88f0), unaff_r14[0x10] != 1) {
          a4 = (int)(short)unaff_r14[0x14];
          if ((a4 != 2) && (a4 != 4)) goto LAB_8c1f36d4;
          a5 = (*(code *)puVar1)(a4,ar5,ar6,ar7);
          ar4_00 = (*(code *)puVar2)(uVar3,a5,ar6,ar7);
          if (0xee6b28 < ar4_00) {
            return 0xffffffeb;
          }
          ar5 = 0xee6b28;
          (**(code **)(*(int *)(*unaff_r14 + 0x3c) + 0x48))(ar4_00,0xee6b28,ar6,ar7);
        }
        uVar3 = (*(code *)puVar1)(ar4_00,ar5,ar6,ar7);
        uVar4 = (uint)0x61b;
        do {
          ar5 = (*(code *)puVar1)(ar4_00,ar5,ar6,ar7);
          ar4_00 = (*(code *)puVar2)(uVar3,ar5,ar6,ar7);
        } while (ar4_00 < uVar4);
        uVar3 = 0xfffffff3;
        if (((short)unaff_r14[0x14] == 2) || ((short)unaff_r14[0x14] == 4)) {
          if (*(int **)(*unaff_r14 + 0x1c) == unaff_r14) {
            (**(code **)(*(int *)(*unaff_r14 + 0xc) + 0x14))(unaff_r14[0xf],0xfffffff3,ar6,ar7);
            *(undefined2 *)(unaff_r14 + 0x12) = 3;
            uVar3 = FUN_8c1f2f98(unaff_r14,uVar3,ar6,ar7);
          }
          else {
            uVar3 = 0xfffffff3;
          }
        }
        else {
          *(undefined2 *)(unaff_r14 + 0x14) = 0;
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0xfffffff3;
      }
    }
    else {
LAB_8c1f36d4:
      *(undefined2 *)(unaff_r14 + 0x14) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c1f3682\n.set _FUN_8c1f3682, _FUN_8c1f3682_def\n");
