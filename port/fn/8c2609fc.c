#include "../decls.h"
int FUN_8c2609fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  byte *pbVar10;
  undefined4 *unaff_r13;
  int unaff_r14;
  
  pbVar10 = (byte *)*unaff_r13;
  if ((*(int *)(unaff_r14 + 4) == 1) &&
     (iVar2 = get_field_c_264f82(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7)
     , iVar2 == 0)) {
    (**(code **)(0x88 + unaff_r14))
              (*(undefined4 *)(0x88 + 4 + unaff_r14),unaff_r13 + 8,unaff_r13 + 9,
               unaff_r13 + 10);
    iVar2 = unaff_r13[6] - unaff_r13[8];
    if ((int)unaff_r13[9] < iVar2) {
      iVar2 = unaff_r13[9];
    }
    iVar6 = unaff_r13[5];
    if ((int)unaff_r13[1] < iVar2) {
      iVar2 = unaff_r13[1];
    }
    psVar9 = (short *)(unaff_r13[8] * 2 + iVar6);
    if (*(char *)(unaff_r14 + 0xe) == '\x02') {
      iVar3 = unaff_r13[7];
      ar7 = 0;
      iVar4 = unaff_r13[8];
      iVar7 = 0;
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          *(ushort *)((int)psVar9 + iVar8) = (pbVar10[iVar7] - 0x80) * 0x100;
          iVar5 = iVar7 + 1;
          ar7 = ar7 + 1;
          iVar7 = iVar7 + 2;
          *(ushort *)(iVar8 + (iVar3 + iVar4) * 2 + iVar6) = (pbVar10[iVar5] - 0x80) * 0x100;
          iVar8 = iVar8 + 2;
        } while (ar7 < iVar2);
      }
    }
    else {
      ar7 = 0;
      if (0 < iVar2) {
        do {
          bVar1 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          ar7 = ar7 + 1;
          *psVar9 = (bVar1 - 0x80) * 0x100;
          psVar9 = psVar9 + 1;
        } while (ar7 < iVar2);
      }
    }
    *(int *)(0xa0 + unaff_r14) = iVar2;
    *(int *)(0xa4 + unaff_r14) = iVar2 * *(char *)(unaff_r14 + 0xe);
    *(undefined4 *)(unaff_r14 + 4) = 2;
  }
  iVar2 = *(int *)(unaff_r14 + 4);
  if (iVar2 == 2) {
    iVar2 = (int)0x90;
    iVar2 = (**(code **)(iVar2 + unaff_r14))
                      (*(undefined4 *)(iVar2 + 4 + unaff_r14),
                       *(undefined4 *)(iVar2 + 0x14 + unaff_r14),
                       *(undefined4 *)(iVar2 + 0x10 + unaff_r14),ar7);
    *(undefined4 *)(unaff_r14 + 4) = 3;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c2609fc\n.set _FUN_8c2609fc, _FUN_8c2609fc_def\n");
