#include "../decls.h"
int FUN_8c2609f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  byte *pbVar11;
  
  pbVar11 = *(byte **)(ar4 + 0x50);
  if ((*(int *)(ar4 + 4) == 1) &&
     (iVar2 = get_field_c_264f82(*(undefined4 *)(ar4 + 8),&DAT_8c4b9828),
     iVar2 == 0)) {
    (**(code **)(0x88 + ar4))
              (*(undefined4 *)(0x88 + 4 + ar4),ar4 + 0x70,ar4 + 0x74,ar4 + 0x78);
    iVar2 = *(int *)(ar4 + 0x68) - *(int *)(ar4 + 0x70);
    if (*(int *)(ar4 + 0x74) < iVar2) {
      iVar2 = *(int *)(ar4 + 0x74);
    }
    iVar6 = *(int *)(ar4 + 100);
    if (*(int *)(ar4 + 0x54) < iVar2) {
      iVar2 = *(int *)(ar4 + 0x54);
    }
    psVar10 = (short *)(*(int *)(ar4 + 0x70) * 2 + iVar6);
    if (*(char *)(ar4 + 0xe) == '\x02') {
      iVar3 = *(int *)(ar4 + 0x6c);
      iVar9 = 0;
      iVar4 = *(int *)(ar4 + 0x70);
      iVar7 = 0;
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          *(ushort *)((int)psVar10 + iVar8) = (pbVar11[iVar7] - 0x80) * 0x100;
          iVar5 = iVar7 + 1;
          iVar9 = iVar9 + 1;
          iVar7 = iVar7 + 2;
          *(ushort *)(iVar8 + (iVar3 + iVar4) * 2 + iVar6) = (pbVar11[iVar5] - 0x80) * 0x100;
          iVar8 = iVar8 + 2;
        } while (iVar9 < iVar2);
      }
    }
    else {
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          bVar1 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          iVar6 = iVar6 + 1;
          *psVar10 = (bVar1 - 0x80) * 0x100;
          psVar10 = psVar10 + 1;
        } while (iVar6 < iVar2);
      }
    }
    *(int *)(0xa0 + ar4) = iVar2;
    *(int *)(0xa4 + ar4) = iVar2 * *(char *)(ar4 + 0xe);
    *(undefined4 *)(ar4 + 4) = 2;
  }
  iVar2 = *(int *)(ar4 + 4);
  if (iVar2 == 2) {
    iVar2 = (int)0x90;
    iVar2 = (**(code **)(iVar2 + ar4))
                      (*(undefined4 *)(iVar2 + 4 + ar4),*(undefined4 *)(iVar2 + 0x14 + ar4),
                       *(undefined4 *)(iVar2 + 0x10 + ar4));
    *(undefined4 *)(ar4 + 4) = 3;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c2609f0\n.set _FUN_8c2609f0, _FUN_8c2609f0_def\n");
