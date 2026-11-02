#include "../decls.h"
int FUN_8c25fa58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  byte *pbVar10;
  int iVar11;
  undefined1 *puVar12;
  
  puVar12 = &DAT_8c4b9828;
  pbVar10 = *(byte **)(ar4 + 0x50);
  if ((*(int *)(ar4 + 4) == 1) &&
     (iVar2 = get_field_c_264f82(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7), iVar2 == 0)) {
    (**(code **)(ar4 + 0x88))(*(undefined4 *)(ar4 + 0x8c),ar4 + 0x70,ar4 + 0x74,ar4 + 0x78);
    iVar2 = *(int *)(ar4 + 0x68) - *(int *)(ar4 + 0x70);
    if (*(int *)(ar4 + 0x74) < iVar2) {
      iVar2 = *(int *)(ar4 + 0x74);
    }
    iVar6 = *(int *)(ar4 + 100);
    if (*(int *)(ar4 + 0x54) < iVar2) {
      iVar2 = *(int *)(ar4 + 0x54);
    }
    puVar9 = (undefined2 *)(*(int *)(ar4 + 0x70) * 2 + iVar6);
    if (*(char *)(ar4 + 0xe) == '\x02') {
      iVar3 = *(int *)(ar4 + 0x6c);
      iVar8 = 0;
      iVar4 = *(int *)(ar4 + 0x70);
      iVar11 = 0;
      iVar7 = 0;
      if (0 < iVar2) {
        do {
          iVar11 = iVar11 + 1;
          *(undefined2 *)((int)puVar9 + iVar7) =
               *(undefined2 *)(&DAT_8c277da0 + (uint)pbVar10[iVar8] * 2);
          iVar5 = iVar8 + 1;
          iVar8 = iVar8 + 2;
          *(undefined2 *)(iVar7 + (iVar3 + iVar4) * 2 + iVar6) =
               *(undefined2 *)(&DAT_8c277da0 + (uint)pbVar10[iVar5] * 2);
          iVar7 = iVar7 + 2;
        } while (iVar11 < iVar2);
      }
    }
    else {
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          bVar1 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          iVar6 = iVar6 + 1;
          *puVar9 = *(undefined2 *)(&DAT_8c277da0 + (uint)bVar1 * 2);
          puVar9 = puVar9 + 1;
        } while (iVar6 < iVar2);
      }
    }
    *(int *)(ar4 + 0xa0) = iVar2;
    *(int *)(ar4 + 0xa4) = iVar2 * *(char *)(ar4 + 0xe);
    *(undefined4 *)(ar4 + 4) = 2;
  }
  iVar2 = *(int *)(ar4 + 4);
  if (iVar2 == 2) {
    iVar2 = (**(code **)(ar4 + 0x90))
                      (*(undefined4 *)(ar4 + 0x94),*(undefined4 *)(ar4 + 0xa4),
                       *(undefined4 *)(ar4 + 0xa0),puVar12);
    *(undefined4 *)(ar4 + 4) = 3;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c25fa58\n.set _FUN_8c25fa58, _FUN_8c25fa58_def\n");
