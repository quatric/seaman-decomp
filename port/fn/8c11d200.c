#include "../decls.h"
undefined4 FUN_8c11d200_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  
  iVar3 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar3 == 0) {
    iVar3 = *(int *)(0xfc + ar4);
    sVar1 = *(short *)(ar4 + 0x3e);
    if (((sVar1 != 0) && (sVar1 != 1)) && (sVar1 != 2)) {
      uVar4 = FUN_8c1204c4(ar4 + 0x48,7);
      return uVar4 & 0xff;
    }
    iVar5 = (int)0x100;
    if (*(int *)(iVar5 + ar4) != 0) {
      iVar7 = (int)0xf4;
      *(int *)(*(int *)(iVar5 + ar4) + 4) = *(int *)(*(int *)(iVar5 + ar4) + 4) + -1;
      (**(code **)(iVar3 + 0x18))(*(undefined4 *)(iVar5 + 8 + ar4),iVar7 + ar4);
      *(undefined4 *)(0x108 + ar4) = 0;
    }
    iVar5 = 0;
    if (*(int *)(0x104 + ar4) != 0) {
      iVar7 = *(int *)(0x104 + ar4);
      *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + -1;
    }
    piVar6 = (int *)(0x118 + ar4);
    piVar8 = piVar6;
    do {
      if (*piVar6 != 0) {
        (**(code **)(iVar3 + 0x18))(*piVar8,0xf4 + ar4);
      }
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar5 < 3);
    if (**(int **)(0x2b0 + ar4) != 0) {
      (**(code **)(iVar3 + 0x18))(**(undefined4 **)(0x2b0 + ar4),0xf4 + ar4);
    }
    (**(code **)(iVar3 + 0x18))(*(undefined4 *)(0x2b0 + ar4),0xf4 + ar4);
    (**(code **)(iVar3 + 0x18))(*(undefined4 *)(ar4 + 0x54),0xf4 + ar4);
    (**(code **)(iVar3 + 0x18))(*(undefined4 *)(ar4 + 0x5c),0xf4 + ar4);
    cVar2 = FUN_8c12025e(ar4);
    if (cVar2 == '\0') {
      iVar5 = (int)0xf4;
      *(undefined4 *)(0xf0 + ar4) = 0;
      (**(code **)(iVar3 + 0x18))(ar4,iVar5 + ar4);
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11d200\n.set _FUN_8c11d200, _FUN_8c11d200_def\n");
