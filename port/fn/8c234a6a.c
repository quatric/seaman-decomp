#include "../decls.h"
undefined4 FUN_8c234a6a_def(double *ar4,double *ar5,double *ar6,undefined4 ar7,int ain0)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  float fVar3;
  double in_dr0;
  double dVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  undefined4 in_fr5;
  float fVar11;
  undefined4 in_fr7;
  double dVar12;
  float fVar14;
  double in_dr14;
  double in_xd2;
  double dVar15;
  double in_xd4;
  undefined8 in_xd6;
  double in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  undefined4 uVar13;
  
  uVar1 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (double)CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
    puVar2 = &uStack_8;
                    
    (*(uint*)((uchar*)&uStack_8+0)) = uVar1;
  }
  else {
    puVar2 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar2 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    uVar13 = *(undefined4 *)(ain0 + (int)ar5);
    in_fr5 = *(undefined4 *)(ar5 + 2);
    dVar12 = (double)CONCAT44(uVar13,*(undefined4 *)ar5);
    dVar9 = (double)CONCAT44(uVar13,in_fr7);
  }
  else {
    dVar12 = *(double *)(ain0 + (int)ar5);
    in_xd2 = *ar5;
    in_xd4 = ar5[2];
    uVar13 = (undefined4)((ulonglong)dVar12 >> 0x20);
    dVar9 = dVar12;
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) * SUB84(dVar12,0),SUB84(dVar12,0));
  }
  else {
    dVar12 = dVar12 * dVar12;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),*(undefined4 *)((int)ar5 + 4));
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr5);
  }
  else {
    in_xd2 = *(double *)((int)ar5 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(in_dr0,0) * SUB84(dVar12,0);
  }
  else {
    fVar3 = SUB84(in_dr0 * dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(uVar13,*(undefined4 *)((int)ar5 + 0x14));
  }
  else {
    in_xd6 = *(undefined8 *)((int)ar5 + 0x14);
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = (double)CONCAT44(-(float)((ulonglong)dVar12 >> 0x20),SUB84(dVar12,0));
  }
  else {
    dVar12 = -dVar12;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),*(undefined4 *)(ar5 + 1));
    dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),fVar3);
  }
  else {
    in_xd2 = ar5[1];
    dVar4 = *(double *)((int)ar4 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) - SUB84(dVar4,0),SUB84(dVar12,0));
  }
  else {
    dVar12 = dVar12 - dVar4;
  }
  fVar3 = SUB84(dVar9,0);
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),fVar3);
  }
  if (in_FPSCR_PR == '\0') {
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),SUB84(dVar4,0) * SUB84(dVar12,0));
  }
  else {
    dVar4 = dVar4 * dVar12;
  }
  dVar15 = in_xd4;
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),in_fr5);
    dVar15 = in_xd2;
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),
                              SUB84(dVar12,0) * (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    dVar12 = dVar12 * dVar4;
  }
  fVar7 = (float)((ulonglong)dVar9 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(*(undefined4 *)ar4,SUB84(dVar12,0));
    dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),in_fr5);
    dVar4 = (double)CONCAT44(fVar7,SUB84(dVar4,0));
  }
  else {
    dVar8 = *ar4;
    dVar4 = dVar9;
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) - SUB84(dVar4,0),SUB84(dVar12,0));
    fVar14 = (float)((ulonglong)dVar8 >> 0x20);
    dVar8 = (double)CONCAT44(fVar14,(float)((ulonglong)dVar4 >> 0x20) * fVar14 + SUB84(dVar8,0));
  }
  else {
    dVar12 = dVar12 - dVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)(ulonglong)*(uint *)(ar4 + 1);
  }
  uVar5 = in_xd6;
  if (in_FPSCR_SZ == '\0') {
    uVar5 = CONCAT44(fVar3,SUB84(dVar4,0));
  }
  if (in_FPSCR_PR == '\0') {
    dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),
                             (float)((ulonglong)uVar5 >> 0x20) * (float)uVar5 + SUB84(dVar8,0));
  }
  dVar4 = dVar15;
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)((ulonglong)(uint)fVar7 << 0x20);
    in_dr14 = (double)CONCAT44(uVar1,SUB84(dVar8,0));
    dVar4 = in_xd14;
  }
  if (in_FPSCR_PR == '\0') {
    fVar14 = SUB84(in_dr14,0) + (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar14 = SUB84(in_dr14 + dVar12,0);
  }
  fVar11 = SUB84(dVar12,0);
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),fVar11);
    in_xd4 = dVar15;
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = (float)((ulonglong)dVar9 >> 0x20) * fVar7 + SUB84(dVar8,0) * fVar11;
  }
  else {
    fVar7 = SUB84(dVar8 * dVar12,0);
  }
  fVar6 = fVar3;
  if (in_FPSCR_SZ != '\0') {
    fVar6 = (float)((ulonglong)in_xd6 >> 0x20);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = fVar6 * fVar3 + fVar7;
  }
  dVar9 = in_xd4;
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(fVar7,fVar14);
  }
  if (ar6 != (double *)0x0) {
    if (in_FPSCR_SZ == '\0') {
      fVar7 = SUB84(dVar9,0);
      dVar4 = in_xd4;
    }
    dVar12 = dVar4;
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(-fVar7,fVar11);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = (float)((ulonglong)dVar12 >> 0x20) / (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar3 = (float)((ulonglong)(dVar12 / dVar9) >> 0x20);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)ar4,*(undefined4 *)((int)ar5 + 0xc));
    }
    else {
      dVar4 = *(double *)((int)ar5 + 0xc);
      dVar9 = *ar4;
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44(fVar3 * SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20),
                               SUB84(dVar9,0));
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)ar6 = (int)((ulonglong)dVar9 >> 0x20);
      dVar9 = (double)CONCAT44(*(undefined4 *)(ar5 + 2),*(undefined4 *)((int)ar4 + 4));
    }
    else {
      *ar6 = dVar9;
      dVar4 = *(double *)((int)ar4 + 4);
      dVar9 = ar5[2];
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)(ulonglong)(uint)(fVar3 * (float)((ulonglong)dVar9 >> 0x20) + SUB84(dVar9,0));
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)ar6 + 4) = SUB84(dVar9,0);
      uVar10 = CONCAT44(*(undefined4 *)((int)ar5 + 0x14),*(undefined4 *)(ar4 + 1));
    }
    else {
      *(double *)((int)ar6 + 4) = dVar4;
      dVar4 = ar4[1];
      uVar10 = *(ulonglong *)((int)ar5 + 0x14);
    }
    if (in_FPSCR_PR == '\0') {
      uVar10 = (ulonglong)(uint)(fVar3 * (float)(uVar10 >> 0x20) + (float)uVar10);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar6 + 1) = (int)uVar10;
    }
    else {
      ar6[1] = dVar4;
    }
  }
  uVar1 = FUN_8c258048(ar4,ar5,ar6,ar7,*(undefined4 *)((int)puVar2 + -4));
  return uVar1;
}

__asm__(".globl _FUN_8c234a6a\n.set _FUN_8c234a6a, _FUN_8c234a6a_def\n");
