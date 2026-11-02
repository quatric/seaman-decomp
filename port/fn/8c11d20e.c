#include "../decls.h"
undefined4 FUN_8c11d20e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int unaff_r9;
  int *piVar7;
  
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    iVar2 = *(int *)(0xfc + ar4);
    sVar1 = *(short *)(unaff_r9 + 0x3e);
    if (((sVar1 != 0) && (sVar1 != 1)) && (sVar1 != 2)) {
      uVar3 = FUN_8c1204c4(ar4 + 0x48,7,ar6,ar7);
      return uVar3 & 0xff;
    }
    iVar4 = (int)0x100;
    if (*(int *)(iVar4 + ar4) != 0) {
      iVar6 = (int)0xf4;
      *(int *)(*(int *)(iVar4 + ar4) + 4) = *(int *)(*(int *)(iVar4 + ar4) + 4) + -1;
      (**(code **)(iVar2 + 0x18))(*(undefined4 *)(iVar4 + 8 + ar4),iVar6 + ar4,ar6,ar7);
      *(undefined4 *)(0x108 + ar4) = 0;
    }
    iVar4 = 0;
    if (*(int *)(0x104 + ar4) != 0) {
      iVar6 = *(int *)(0x104 + ar4);
      *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + -1;
    }
    piVar5 = (int *)(0x118 + ar4);
    piVar7 = piVar5;
    do {
      if (*piVar5 != 0) {
        (**(code **)(iVar2 + 0x18))(*piVar7,0xf4 + ar4,ar6,ar7);
      }
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < 3);
    if (**(int **)(0x2b0 + ar4) != 0) {
      (**(code **)(iVar2 + 0x18))(**(undefined4 **)(0x2b0 + ar4),0xf4 + ar4,ar6,ar7);
    }
    (**(code **)(iVar2 + 0x18))(*(undefined4 *)(0x2b0 + ar4),0xf4 + ar4,ar6,ar7);
    (**(code **)(iVar2 + 0x18))(*(undefined4 *)(ar4 + 0x54),0xf4 + ar4,ar6,ar7);
    iVar4 = 0xf4 + ar4;
    (**(code **)(iVar2 + 0x18))(*(undefined4 *)(ar4 + 0x5c),iVar4,ar6,ar7);
    uVar3 = FUN_8c12025e(unaff_r9,iVar4,ar6,ar7);
    if ((uVar3 & 0xff) == 0) {
      iVar4 = (int)0xf4;
      *(undefined4 *)(0xf0 + ar4) = 0;
      (**(code **)(iVar2 + 0x18))(ar4,iVar4 + ar4,ar6,ar7);
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11d20e\n.set _FUN_8c11d20e, _FUN_8c11d20e_def\n");
