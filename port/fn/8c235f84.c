#include "../decls.h"
undefined * FUN_8c235f84_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  double *pdVar4;
  uint uVar5;
  int iVar6;
  double in_dr0;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined8 in_dr4;
  double dVar11;
  double dVar12;
  undefined4 in_fr7;
  double dVar13;
  undefined4 in_fr12;
  float fVar14;
  double dVar15;
  float fVar16;
  double in_xd0;
  double dVar17;
  double in_xd4;
  double in_xd14;
  bool bVar18;
  char cVar19;
  char cVar20;
  undefined4 in_stack_ffffffd8;
  float fVar10;
  
  cVar20 = '\0';
  cVar19 = '\0';
  fVar8 = (float)((ulonglong)in_dr4 >> 0x20);
  iVar6 = 0;
  dVar15 = (double)CONCAT44(-(float)in_dr4,(float)in_dr4);
  if (-65535.0 <= fVar8) {
    FUN_8c013d78(&stack0xffffffd8,ar5,ar6,ar7,in_stack_ffffffd8);
    dVar12 = in_dr0;
    if (cVar20 == '\0') {
      dVar12 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),0x47800000);
    }
    if (cVar19 == '\0') {
      dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) * SUB84(dVar12,0),SUB84(dVar12,0)
                               );
    }
    else {
      dVar12 = dVar12 * dVar12;
    }
    if (cVar19 == '\0') {
      uVar5 = (uint)(float)((ulonglong)dVar12 >> 0x20);
    }
    else {
      uVar5 = (uint)dVar12;
    }
    uVar5 = uVar5 & 0xff00 | (int)(char)((char)in_stack_ffffffd8 + -1);
  }
  else {
    uVar5 = 0x8010;
  }
  FUN_8c20a238(uVar5,ar5,ar6,ar7);
  fVar14 = SUB84(dVar15,0);
  if (cVar20 == '\0') {
    in_xd14 = (double)CONCAT44(fVar14,0x43800000);
  }
  if (cVar19 == '\0') {
    bVar18 = fVar8 < (float)((ulonglong)in_xd14 >> 0x20) / SUB84(in_xd14,0);
  }
  else {
    bVar18 = (double)CONCAT44(in_fr12,fVar8) < in_xd14 / in_xd14;
  }
  fVar16 = (float)((ulonglong)dVar15 >> 0x20);
  if (bVar18) {
    dVar12 = dVar15;
    if (cVar20 == '\0') {
      dVar12 = (double)CONCAT44(fVar16,in_fr7);
    }
  }
  else {
    dVar12 = in_xd4;
    if (cVar20 == '\0') {
      dVar12 = (double)CONCAT44(0x3f800000,in_fr7);
    }
  }
  puVar1 = &DAT_8c2360ac;
  if (cVar20 == '\0') {
    dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),fVar8);
    dVar11 = 33554439.9375;
  }
  else {
    dVar11 = 6.173528641380775e-78;
  }
  uVar5 = 0;
  fVar8 = (float)((ulonglong)dVar12 >> 0x20);
  dVar13 = (double)CONCAT44(fVar8,-SUB84(dVar12,0));
  pdVar4 = ar4;
  do {
    uVar3 = (int)uVar5 >> 4;
    if ((int)uVar3 < 0) {
      iVar2 = 1 >> (~uVar3 & 0x1f) + 1;
    }
    else {
      iVar2 = 1 << (uVar3 & 0x1f);
    }
    dVar17 = dVar13;
    if (cVar20 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar8);
      dVar17 = in_xd0;
    }
    fVar7 = (float)((ulonglong)dVar11 >> 0x20);
    if (cVar19 == '\0') {
      fVar10 = (float)(uVar5 & 0xf) + fVar7;
      fVar7 = ((float)iVar2 * fVar10) / fVar7;
      dVar9 = (double)CONCAT44(fVar10,fVar7);
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) / fVar7);
    }
    else {
      dVar9 = (double)(uVar5 & 0xf) + dVar11;
      dVar9 = (dVar9 * dVar9) / dVar11;
      in_dr0 = in_dr0 / dVar9;
    }
    if (cVar20 == '\0') {
      dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),SUB84(in_dr0,0));
    }
    if (cVar19 == '\0') {
      bVar18 = -SUB84(dVar12,0) < SUB84(dVar9,0);
    }
    else {
      bVar18 = dVar13 < dVar9;
    }
    if (cVar20 == '\0') {
      *(int *)pdVar4 = SUB84(in_dr0,0);
    }
    else {
      *pdVar4 = dVar17;
    }
    if (bVar18) {
      iVar6 = iVar6 + 1;
    }
    uVar5 = uVar5 + 1;
    pdVar4 = (double *)((int)pdVar4 + 4);
    in_xd0 = dVar17;
  } while ((int)uVar5 < 0x80);
  if (cVar19 == '\0') {
    bVar18 = fVar8 == fVar16;
  }
  else {
    bVar18 = dVar13 == dVar15;
  }
  if (bVar18) {
    puVar1 = (undefined *)(iVar6 * 4);
    if (cVar20 == '\0') {
      dVar12 = (double)CONCAT44(*(undefined4 *)(puVar1 + (int)ar4),SUB84(dVar11,0));
    }
    else {
      dVar12 = *(double *)(puVar1 + (int)ar4);
    }
    iVar2 = 0;
    if (cVar19 == '\0') {
      dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) + fVar14,SUB84(dVar12,0));
    }
    else {
      dVar12 = dVar12 + dVar15;
    }
    if (0 < iVar6) {
      do {
        dVar11 = in_xd4;
        if (cVar20 == '\0') {
          dVar11 = (double)CONCAT44(SUB84(dVar12,0),*(undefined4 *)ar4);
        }
        iVar2 = iVar2 + 1;
        if (cVar19 == '\0') {
          fVar8 = (SUB84(dVar11,0) + fVar14) / (float)((ulonglong)dVar12 >> 0x20);
          dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) - fVar8,fVar8);
        }
        else {
          dVar11 = (dVar11 + dVar15) / dVar12;
          dVar11 = dVar11 - dVar11;
        }
        if (cVar20 == '\0') {
          *(int *)ar4 = (int)((ulonglong)dVar11 >> 0x20);
        }
        else {
          *ar4 = dVar11;
        }
        ar4 = (double *)((int)ar4 + 4);
      } while (iVar2 < iVar6);
    }
    while (iVar6 < 0x80) {
      iVar6 = iVar6 + 1;
      if (cVar20 == '\0') {
        *(undefined4 *)ar4 = 0;
      }
      else {
        *ar4 = (double)((ulonglong)dVar12 & 0xffffffff);
      }
      ar4 = (double *)((int)ar4 + 4);
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c235f84\n.set _FUN_8c235f84, _FUN_8c235f84_def\n");
