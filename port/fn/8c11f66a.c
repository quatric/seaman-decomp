#include "../decls.h"
uint FUN_8c11f66a_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 a5;
  
  iVar5 = ar6;
  iVar3 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  puVar2 = (&FUN_8c1204c4);
  if (iVar3 != 0) {
    return 1;
  }
  if ((ar5 == 0) || (ar6 == 0)) {
    a5 = 0x13;
  }
  else {
    sVar1 = *(short *)(ar4 + 0x3e);
    if ((sVar1 == 1) || (sVar1 == 2)) {
      iVar3 = (**(code **)(*(int *)(0x108 + ar4) + 0x50))
                        (*(int *)(0x108 + ar4),(int)sVar1,iVar5,ar7);
      if (iVar3 == 0) {
        a5 = 0x15;
      }
      else {
        if (*(int *)(0x88 + ar4) == 0) {
          if ((*(int *)(0x104 + ar4) != 0) &&
             (iVar5 = FUN_8c11ea3c(ar4,0,iVar5,ar7), iVar5 != 0)) {
            return *(undefined4 *)(ar4 + 0x40);
          }
          iVar5 = 0;
          iVar3 = 0;
          do {
            iVar3 = iVar3 + 3;
            iVar6 = (int)0x118;
            *(undefined4 *)(0x124 + ar4 + iVar5) =
                 *(undefined4 *)(0x118 + ar4 + iVar5);
            iVar7 = (int)0x118;
            *(undefined4 *)(0x124 + ar4 + iVar5 + 4) =
                 *(undefined4 *)(iVar6 + ar4 + iVar5 + 4);
            *(undefined4 *)(0x124 + ar4 + iVar5 + 8) =
                 *(undefined4 *)(iVar7 + ar4 + iVar5 + 8);
            iVar5 = iVar5 + 0xc;
          } while (iVar3 < 3);
          *(undefined4 *)(0x148 + ar4) = 4;
          uVar4 = FUN_8c121d36(ar4,3,ar5,ar6);
          goto LAB_8c11f79a;
        }
        a5 = 0x16;
      }
    }
    else {
      a5 = 7;
    }
  }
  uVar4 = (*(code *)puVar2)(ar4 + 0x48,a5,iVar5,ar7);
LAB_8c11f79a:
  return uVar4 & 0xff;
}

__asm__(".globl _FUN_8c11f66a\n.set _FUN_8c11f66a, _FUN_8c11f66a_def\n");
