#include "../decls.h"
int FUN_8c26270c_def(int ar4,uint ar5,int *ar6,uint *ar7)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  iVar2 = s_E9040828_ptid_is_range_outsi_2626d2(ar4,ar5,ar6,ar7);
  if (iVar2 < 0) {
    *ar6 = -1;
    *ar7 = 0xffffffff;
  }
  else {
    for (piVar4 = *(int **)(0x8c4b3e20 + ar4 * 4); iVar5 = 0, *piVar4 != 0;
        piVar4 = (int *)*piVar4) {
      for (; iVar5 < (int)(uint)*(ushort *)(piVar4 + 4); iVar5 = iVar5 + 1) {
        puVar3 = (ushort *)(piVar4 + iVar5 * 2 + 5);
        if (*puVar3 == ar5) {
          *ar6 = piVar4[2] + *(int *)(puVar3 + 2);
          *ar7 = (uint)puVar3[1];
          return iVar2;
        }
      }
    }
    iVar5 = 0;
    uVar6 = (uint)*(ushort *)(piVar4 + 5);
    puVar3 = (ushort *)((int)piVar4 + 0x16);
    if (0 < (int)ar5) {
      do {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        iVar5 = iVar5 + 1;
        uVar6 = uVar6 + uVar1;
      } while (iVar5 < (int)ar5);
    }
    *ar6 = uVar6 + piVar4[2];
    *ar7 = (uint)((ushort *)((int)piVar4 + 0x16))[ar5];
  }
  return iVar2;
}

__asm__(".globl _FUN_8c26270c\n.set _FUN_8c26270c, _FUN_8c26270c_def\n");
