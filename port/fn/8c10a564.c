#include "../decls.h"
undefined4 FUN_8c10a564_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  double *pdVar2;
  undefined8 *puVar3;
  int iVar4;
  float *a4;
  float *a5;
  int iVar5;
  int a6;
  float *a5_00;
  float *a4_00;
  float **ppfVar6;
  double *pdVar7;
  float **ppfVar8;
  double in_dr0;
  double dVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 in_dr12;
  undefined4 uVar13;
  undefined8 in_dr14;
  double dVar14;
  undefined8 in_xd2;
  byte bVar15;
  byte bVar16;
  char cVar17;
  byte bVar18;
  float *apfStack_44 [3];
  undefined4 uStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uStack_20 = (undefined4)in_dr14;
  uStack_24 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uStack_28 = (undefined4)in_dr12;
  uStack_2c = (undefined4)((ulonglong)in_dr12 >> 0x20);
  ppfVar8 = apfStack_44;
  a5_00 = *(float **)(ar4 + 0xa4);
  iVar4 = *(int *)(ar4 + 0x7c);
  a6 = iVar4 * 4;
  if (*(float *)(ar4 + 0x80) < *(float *)(ar4 + 0x70)) {
    *(undefined4 *)(ar4 + 0x70) = 0;
    ar6 = a6;
    memmove(*(undefined4 *)(ar4 + 0x54),*(undefined4 *)(ar4 + 0x58),a6,ar7);
    ar5 = *(undefined4 *)(ar4 + 0x54);
    uVar1 = FUN_8c11b93c(*(undefined4 *)(ar4 + 0xb0),ar5,ar6,ar7);
    if ((uVar1 & 0xff) != 0) {
      return 0;
    }
    *(undefined1 *)(ar4 + 0x51) = 1;
  }
  uVar13 = (undefined4)in_dr14;
  if ((*(int *)(ar4 + 0x38) != 0) && (*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01')) {
    pdVar2 = (double *)FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),ar5,ar6,ar7);
    a4_00 = (float *)((int)pdVar2 + 4);
    iVar5 = a6;
    if (*(char *)(ar4 + 0x51) == '\0') {
      cVar17 = '\0';
      memmove(a4_00,a5_00,a6,ar7);
      a4 = a4_00;
      a5 = a5_00;
      ppfVar8 = apfStack_44;
    }
    else {
      apfStack_44[0] = a4_00 + iVar4;
      a5 = *(float **)(ar4 + 0x30);
      cVar17 = '\0';
      a4 = a4_00;
      memmove(a4_00,a5,a6,ar7);
      uStack_38 = *(undefined4 *)(ar4 + 0x54);
      if (cVar17 == '\0') {
        uVar12 = 0;
        dVar14 = (double)CONCAT44(0x40000000,uVar13);
      }
      else {
        uVar12 = 0x3ff00000;
        dVar14 = -1.5697950159475534e-250;
      }
      if (cVar17 == '\0') {
        dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),uVar12);
      }
      ppfVar6 = apfStack_44;
      if (a4_00 < apfStack_44[0]) {
        do {
          puVar3 = *(undefined8 **)((int)ppfVar6 + 0xc);
          *(undefined4 **)((int)ppfVar6 + 0xc) = (undefined4 *)((int)puVar3 + 4);
          if (cVar17 == '\0') {
            uVar10 = CONCAT44(*a4_00,*(undefined4 *)puVar3);
          }
          else {
            in_xd2 = *puVar3;
            uVar10 = *(undefined8 *)a4_00;
          }
          fVar11 = (float)((ulonglong)uVar10 >> 0x20) - (float)uVar10;
          *a4_00 = fVar11;
          if (*a5_00 <= fVar11) {
            fVar11 = *a4_00;
            *(float *)((int)ppfVar6 + 8) = fVar11;
            *(double *)((int)ppfVar6 + -8) = (double)fVar11;
            fVar11 = (float)((ulonglong)((double)(*a5_00 - *(float *)((int)ppfVar6 + 8)) * dVar14)
                            >> 0x20);
            thunk_FUN_8c013cd8(a4,a5,iVar5,ar7);
            bVar15 = 0;
            bVar16 = 0;
            bVar18 = 0;
            thunk_FUN_8c013dfc(a4,a5,iVar5,ar7);
            cVar17 = (char)((((uint)bVar15 << 0x12 | (uint)bVar16 << 0x13 | (uint)bVar18 << 0x14) &
                            0x100000) >> 0x14);
          }
          else {
            fVar11 = *a5_00;
            *(float *)((int)ppfVar6 + 4) = fVar11;
            *(double *)((int)ppfVar6 + -8) = (double)fVar11;
            fVar11 = (float)((ulonglong)((double)(*a4_00 - *(float *)((int)ppfVar6 + 4)) * dVar14)
                            >> 0x20);
            thunk_FUN_8c013cd8(a4,a5,iVar5,ar7);
            bVar15 = 0;
            bVar16 = 0;
            bVar18 = 0;
            thunk_FUN_8c013dfc(a4,a5,iVar5,ar7);
            cVar17 = (char)((((uint)bVar15 << 0x12 | (uint)bVar16 << 0x13 | (uint)bVar18 << 0x14) &
                            0x100000) >> 0x14);
          }
          pdVar7 = (double *)((int)ppfVar6 + -8);
          if (cVar17 == '\0') {
            dVar9 = 0.5;
          }
          else {
            dVar9 = -7.963806069003694e+87;
          }
          ppfVar8 = ppfVar6;
          if (cVar17 != '\0') {
            ppfVar8 = (float **)((int)ppfVar6 + 8);
            pdVar7 = (double *)ppfVar6;
          }
          in_dr0 = *pdVar7 + (double)fVar11 * dVar9;
          if (cVar17 == '\0') {
            *a4_00 = (float)in_dr0;
          }
          else {
            *(undefined8 *)a4_00 = in_xd2;
          }
          a4_00 = a4_00 + 1;
          a5_00 = a5_00 + 1;
          ppfVar6 = ppfVar8;
        } while (a4_00 < *ppfVar8);
      }
    }
    if (cVar17 == '\0') {
      *(undefined4 *)((int)ppfVar8 + 0x10) = *(undefined4 *)(*(int *)(ar4 + 0x30) + a6);
    }
    else {
      *(undefined8 *)((int)ppfVar8 + 0x10) = *(undefined8 *)(*(int *)(ar4 + 0x30) + a6);
    }
    cVar17 = '\0';
    FUN_8c10a2cc(a4,a5,iVar5,ar7);
    if (cVar17 == '\0') {
      *(int *)pdVar2 = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *pdVar2 = in_dr0;
    }
    iVar4 = *(int *)(ar4 + 0x30) + *(int *)(ar4 + 0x40) * 4;
    *(int *)(ar4 + 0x30) = iVar4;
    if (iVar4 == *(int *)(ar4 + 0x2c)) {
      *(undefined4 *)(ar4 + 0x30) = *(undefined4 *)(ar4 + 0x28);
    }
    *(int *)(ar4 + 0x38) = *(int *)(ar4 + 0x38) + -1;
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c10a564\n.set _FUN_8c10a564, _FUN_8c10a564_def\n");
