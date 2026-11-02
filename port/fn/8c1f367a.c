#include "../decls.h"
undefined4 FUN_8c1f367a_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  puVar1 = (&sh4_tmu_1f88e6);
  uVar7 = 0;
  if ((ar4 == (int *)0x0) || ((short)ar4[0x13] == 0)) {
    uVar7 = 0xfffffff6;
  }
  else if (((short)ar4[0x14] == 2) || ((short)ar4[0x14] == 4)) {
    if (*(int **)(*ar4 + 0x1c) == ar4) {
      uVar3 = sh4_tmu_1f88e6(0);
      while (puVar2 = (&FUN_8c1f88f0), ar4[0x10] != 1) {
        if (((short)ar4[0x14] != 2) && ((short)ar4[0x14] != 4)) goto LAB_8c1f36d4;
        uVar4 = (*(code *)puVar1)(uVar7);
        uVar6 = (*(code *)puVar2)(uVar3,uVar4);
        if (0xee6b28 < uVar6) {
          return 0xffffffeb;
        }
        (**(code **)(*(int *)(*ar4 + 0x3c) + 0x48))();
      }
      uVar3 = (*(code *)puVar1)(uVar7);
      uVar6 = (uint)0x61b;
      do {
        uVar4 = (*(code *)puVar1)(uVar7);
        uVar5 = (*(code *)puVar2)(uVar3,uVar4);
      } while (uVar5 < uVar6);
      uVar7 = 0xfffffff3;
      if (((short)ar4[0x14] == 2) || ((short)ar4[0x14] == 4)) {
        if (*(int **)(*ar4 + 0x1c) == ar4) {
          (**(code **)(*(int *)(*ar4 + 0xc) + 0x14))(ar4[0xf]);
          *(undefined2 *)(ar4 + 0x12) = 3;
          uVar7 = FUN_8c1f2f98(ar4,uVar7,ar6,ar7);
        }
        else {
          uVar7 = 0xfffffff3;
        }
      }
      else {
        *(undefined2 *)(ar4 + 0x14) = 0;
        uVar7 = 0;
      }
    }
    else {
      uVar7 = 0xfffffff3;
    }
  }
  else {
LAB_8c1f36d4:
    *(undefined2 *)(ar4 + 0x14) = 0;
    uVar7 = 0;
  }
  return uVar7;
}

__asm__(".globl _FUN_8c1f367a\n.set _FUN_8c1f367a, _FUN_8c1f367a_def\n");
