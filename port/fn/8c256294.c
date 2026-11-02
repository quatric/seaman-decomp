#include "../decls.h"
undefined4 FUN_8c256294_def(int ar4,double *ar5,double *ar6,undefined4 ar7)

{
  double in_dr0;
  undefined8 uVar1;
  undefined4 in_fr3;
  double dVar2;
  undefined8 uVar3;
  float fVar6;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 in_fr5;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  undefined8 in_xd0;
  double in_xd2;
  double in_xd4;
  float in_xf6;
  float in_xf7;
  undefined8 in_xd8;
  float in_xf10;
  float in_xf11;
  float in_xf12;
  float in_xf13;
  float in_xf14;
  float in_xf15;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (ar4 == 0) {
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)ar5 + 4));
      dVar11 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),0x3f800000);
    }
    else {
      dVar8 = *ar5;
      in_xd4 = ar5[1];
      dVar11 = ar5[2];
    }
                    
    if (in_FPSCR_PR == '\0') {
      fVar12 = SUB84(dVar8,0);
      fVar9 = (float)((ulonglong)dVar8 >> 0x20);
      fVar10 = SUB84(dVar11,0);
      fVar6 = (float)((ulonglong)dVar11 >> 0x20);
      fVar7 = (float)in_xd0 * fVar12 + SUB84(in_xd4,0) * fVar9 + (float)in_xd8 * fVar10 +
              in_xf12 * fVar6;
      fVar7 = (float)((ulonglong)in_xd0 >> 0x20) * fVar12 +
              (float)((ulonglong)in_xd4 >> 0x20) * fVar9 +
              (float)((ulonglong)in_xd8 >> 0x20) * fVar10 + in_xf13 * fVar6;
      fVar7 = SUB84(in_xd2,0) * fVar12 + in_xf6 * fVar9 + in_xf10 * fVar10 + in_xf14 * fVar6;
      fVar12 = (float)((ulonglong)in_xd2 >> 0x20) * fVar12 + in_xf7 * fVar9 + in_xf11 * fVar10 +
               in_xf15 * fVar6;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)ar5 + 4));
      dVar2 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),0x3f800000);
      uVar1 = CONCAT44(*(undefined4 *)ar4,*(undefined4 *)(ar4 + 0x10));
      uVar3 = CONCAT44(*(undefined4 *)(ar4 + 0x20),*(undefined4 *)(ar4 + 0x30));
      dVar8 = in_xd2;
    }
    else {
      dVar11 = *ar5;
      dVar2 = ar5[2];
      uVar1 = *(undefined8 *)ar4;
      uVar3 = *(undefined8 *)(ar4 + 0x20);
      dVar8 = *(double *)(ar4 + 0x30);
    }
                    
    fVar12 = SUB84(dVar11,0);
    fVar7 = (float)((ulonglong)dVar11 >> 0x20);
    fVar9 = SUB84(dVar2,0);
    fVar10 = (float)((ulonglong)dVar2 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar6 = (float)uVar1 * fVar12 + (float)((ulonglong)uVar1 >> 0x20) * fVar7 +
              (float)uVar3 * fVar9 + (float)((ulonglong)uVar3 >> 0x20) * fVar10;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar1 = CONCAT44(*(undefined4 *)(ar4 + 4),*(undefined4 *)(ar4 + 0x14));
      uVar4 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x34));
      in_xd2 = dVar8;
      dVar8 = (double)CONCAT44((int)uVar3,in_fr5);
    }
    else {
      uVar1 = *(undefined8 *)(ar4 + 4);
      uVar4 = *(undefined8 *)(ar4 + 0x24);
      in_xd2 = *(double *)(ar4 + 0x34);
    }
                    
    if (in_FPSCR_PR == '\0') {
      fVar6 = (float)uVar1 * fVar12 + (float)((ulonglong)uVar1 >> 0x20) * fVar7 +
              (float)uVar4 * fVar9 + (float)((ulonglong)uVar4 >> 0x20) * fVar10;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),(int)uVar4);
      in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 8),*(undefined4 *)(ar4 + 0x18));
      lVar5 = CONCAT44(*(undefined4 *)(ar4 + 0x28),*(undefined4 *)(ar4 + 0x38));
    }
    else {
      in_dr0 = *(double *)(ar4 + 8);
      lVar5 = *(longlong *)(ar4 + 0x28);
      in_xd2 = *(double *)(ar4 + 0x38);
    }
                    
    if (in_FPSCR_PR == '\0') {
      fVar12 = SUB84(in_dr0,0) * fVar12 + (float)((ulonglong)in_dr0 >> 0x20) * fVar7 +
               (float)lVar5 * fVar9 + (float)((ulonglong)lVar5 >> 0x20) * fVar10;
    }
    in_fr3 = (undefined4)lVar5;
    dVar11 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)(lVar5 << 0x20);
    }
  }
  fVar12 = (float)((ulonglong)dVar11 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar11 = (double)CONCAT44(fVar12,1.0 / fVar12);
  }
  else {
    dVar11 = (double)CONCAT44(fVar12,0x3f800000) / (double)CONCAT44(fVar12,0x3f800000);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)0x8c4aa4a8,in_fr3);
  }
  else {
    dVar2 = *(undefined4 *)0x8c4aa4a8;
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) * (float)((ulonglong)dVar8 >> 0x20) *
                             SUB84(dVar11,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar8 * dVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)0x8c4aa4dc);
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) * SUB84(in_dr0,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * in_dr0;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                              *(undefined4 *)((int)0x8c4aa4a8 + 0xc));
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) + SUB84(in_dr0,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 + in_dr0;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),*(undefined4 *)0x8c4aa4a8);
  }
  else {
    in_xd2 = *(undefined4 *)0x8c4aa4a8;
  }
  if (in_FPSCR_PR == '\0') {
    dVar11 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),
                              SUB84(dVar2,0) * SUB84(dVar8,0) * SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar2 * dVar8 * dVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)0x8c4aa4e0);
  }
  if (in_FPSCR_PR == '\0') {
    dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),SUB84(dVar11,0) * SUB84(in_dr0,0));
  }
  else {
    dVar11 = dVar11 * in_dr0;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(0x8c4aa4a8 + 2));
  }
  if (in_FPSCR_PR == '\0') {
    dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),SUB84(dVar11,0) + SUB84(in_dr0,0));
  }
  else {
    dVar11 = dVar11 + in_dr0;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)ar6 = (int)((ulonglong)dVar11 >> 0x20);
    *(int *)((int)ar6 + 4) = SUB84(dVar11,0);
  }
  else {
    *ar6 = dVar11;
    *(double *)((int)ar6 + 4) = in_xd2;
  }
  return 4;
}

__asm__(".globl _FUN_8c256294\n.set _FUN_8c256294, _FUN_8c256294_def\n");
