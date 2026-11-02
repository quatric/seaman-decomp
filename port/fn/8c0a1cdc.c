#include "../decls.h"
undefined4 FUN_8c0a1cdc_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  undefined4 in_fr3;
  double dVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar3 = 1;
  iVar1 = *(int *)(ar4 + 300);
  if ((iVar1 < 5) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      ar7 = 0;
      ar6 = (int *)0xffffffff;
      ar5 = 3;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      FUN_8c022d04(ar4 + 0x14,ar5,ar6,ar7);
    case 1:
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
      if (iVar1 == 1) {
        uVar2 = 3;
        s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,3,ar6,ar7);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 2:
      uVar2 = 0x3c23d70a;
      *(float *)(ar4 + 0x94) = *(float *)(ar4 + 0x94) + 0.01;
      (**(code **)(*ar6 + 0x184))(ar6,ar5,ar6,ar7);
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),in_fr3);
        dVar5 = (double)CONCAT44(0x41200000,uVar2);
      }
      else {
        dVar7 = *(double *)(ar5 + 4);
        dVar5 = 6.28650578250278e-312;
      }
      if (cVar9 == '\0') {
        fVar6 = (float)((ulonglong)dVar5 >> 0x20);
        fVar4 = SUB84(dVar5,0) - fVar6;
        dVar5 = (double)CONCAT44(fVar6,fVar4);
        bVar8 = fVar4 < (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        dVar5 = dVar5 - dVar5;
        bVar8 = dVar5 < dVar7;
      }
      if (bVar8) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x94) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x94) = (ulonglong)dVar5 & 0xffffffff;
        }
      }
      break;
    case 3:
      uVar2 = 0x3c23d70a;
      *(float *)(ar4 + 0x94) = *(float *)(ar4 + 0x94) - 0.01;
      (**(code **)(*ar6 + 0x128))(ar6,ar5,ar6,ar7);
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),in_fr3);
        dVar5 = (double)CONCAT44(0x41200000,uVar2);
      }
      else {
        dVar7 = *(double *)(ar5 + 4);
        dVar5 = 6.28650578250278e-312;
      }
      if (cVar9 == '\0') {
        fVar6 = (float)((ulonglong)dVar5 >> 0x20);
        fVar4 = SUB84(dVar5,0) + fVar6;
        dVar5 = (double)CONCAT44(fVar6,fVar4);
        bVar8 = fVar4 < (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        dVar5 = dVar5 + dVar5;
        bVar8 = dVar5 < dVar7;
      }
      if (!bVar8) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x94) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x94) = (ulonglong)dVar5 & 0xffffffff;
        }
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c0a1cdc\n.set _FUN_8c0a1cdc, _FUN_8c0a1cdc_def\n");
