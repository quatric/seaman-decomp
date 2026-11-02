#include "../decls.h"
undefined * FUN_8c1211f0_def(int *ar4,byte *ar5,int ar6,ushort *ar7,uint s0,uint s4)

{
  byte bVar1;
  ushort uVar2;
  undefined *in_r0;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar5 = *(int *)(&DATA_8c1293e0);
  uVar3 = 0;
  if (s4 != 0) {
    do {
      bVar1 = *ar5;
      ar5 = ar5 + ar6;
      uVar7 = (uint)bVar1;
      iVar5 = iVar5 + uVar7 * -2;
      uVar6 = 0;
      piVar4 = ar4;
      if (s0 != 0) {
        do {
          in_r0 = (&DATA_8c1293e4);
          uVar2 = *ar7;
          ar7 = ar7 + 1;
          uVar6 = uVar6 + 1;
          *piVar4 = *piVar4 + *(int *)((&DATA_8c1293e4) +
                                      ((int)*(short *)((uint)uVar2 * 2 + iVar5) + uVar7) * 4);
          piVar4 = piVar4 + 1;
        } while (uVar6 < s0);
      }
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + uVar7 * 2;
    } while (uVar3 < s4);
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1211f0\n.set _FUN_8c1211f0, _FUN_8c1211f0_def\n");
