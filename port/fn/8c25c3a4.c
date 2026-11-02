#include "../decls.h"
int FUN_8c25c3a4_def(double *ar4,int ar5,int ar6,undefined4 ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  undefined8 in_dr2;
  double dVar7;
  undefined4 in_fr5;
  float fVar8;
  double dVar9;
  undefined4 in_fr7;
  float fVar10;
  undefined4 uVar12;
  double dVar11;
  double dVar13;
  undefined4 uVar15;
  double dVar14;
  float fVar16;
  double in_dr10;
  undefined4 in_fr13;
  float fVar17;
  double dVar18;
  float fVar19;
  double in_dr14;
  float fVar20;
  double in_xd2;
  double dVar21;
  double dVar22;
  double in_xd4;
  double dVar23;
  double in_xd6;
  double in_xd12;
  double in_xd14;
  bool bVar24;
  char cVar25;
  char cVar26;
  
  cVar26 = '\0';
  cVar25 = '\0';
  pdVar5 = ar4 + (ar5 + -1) * 2;
  dVar14 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),_DAT_8c4aa4d4);
  dVar18 = (double)CONCAT44(1.0 / _DAT_8c4aa4d4,in_fr13);
  dVar9 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 4),in_fr5);
  dVar13 = (double)((ulonglong)*(uint *)((int)pdVar5 + 0xc) << 0x20);
  uVar2 = *(undefined4 *)pdVar5;
  dVar11 = (double)CONCAT44(*(undefined4 *)(pdVar5 + 1),in_fr7);
  do {
    uVar3 = *(undefined4 *)ar4;
    uVar1 = (ulonglong)dVar14 >> 0x20;
    dVar7 = (double)(uVar1 << 0x20);
    if (cVar26 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)((int)ar4 + 4));
      pdVar4 = ar4 + 1;
    }
    else {
      in_xd14 = *(double *)((int)ar4 + 4);
      pdVar4 = (double *)((int)ar4 + 0xc);
    }
    if (cVar25 == '\0') {
      bVar24 = 0.0 < SUB84(in_dr14,0);
    }
    else {
      bVar24 = dVar7 < in_dr14;
    }
    if (cVar26 == '\0') {
      in_dr14 = (double)CONCAT44(*(undefined4 *)pdVar4,SUB84(in_dr14,0));
      dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),*(undefined4 *)((int)pdVar4 + 4));
      pdVar4 = pdVar4 + 1;
    }
    else {
      in_dr14 = *pdVar4;
      in_xd12 = pdVar4[1];
      pdVar4 = pdVar4 + 2;
    }
    fVar19 = SUB84(in_dr14,0);
    fVar17 = (float)((ulonglong)dVar18 >> 0x20);
    fVar20 = (float)((ulonglong)dVar9 >> 0x20);
    dVar23 = in_xd4;
    if (bVar24) {
      if (cVar25 == '\0') {
        bVar24 = fVar19 < fVar17;
      }
      else {
        bVar24 = in_dr14 < dVar18;
      }
      if (!bVar24) goto LAB_8c25c3fc;
      if (cVar25 == '\0') {
        bVar24 = 0.0 < fVar20;
      }
      else {
        bVar24 = dVar7 < dVar9;
      }
      if (!bVar24) goto LAB_8c25c3fc;
      if (cVar25 == '\0') {
        bVar24 = fVar20 < fVar17;
      }
      else {
        bVar24 = dVar9 < dVar18;
      }
      if (!bVar24) goto LAB_8c25c3fc;
      uVar12 = (undefined4)((ulonglong)dVar11 >> 0x20);
      dVar23 = dVar11;
      if (cVar26 == '\0') {
        dVar9 = (double)CONCAT44(fVar20,uVar12);
        dVar23 = in_xd4;
      }
      fVar20 = (float)((ulonglong)in_dr14 >> 0x20);
      if (cVar25 == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),SUB84(dVar9,0) - fVar20);
      }
      else {
        dVar9 = dVar9 - in_dr14;
      }
      uVar15 = (undefined4)((ulonglong)dVar13 >> 0x20);
      if (cVar26 == '\0') {
        dVar11 = (double)CONCAT44(uVar12,uVar15);
        dVar13 = in_xd6;
      }
      fVar17 = SUB84(dVar18,0);
      if (cVar25 == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),SUB84(dVar11,0) - fVar17);
      }
      else {
        dVar11 = dVar11 - dVar18;
      }
      fVar8 = SUB84(dVar9,0);
      dVar21 = dVar23;
      if (cVar26 == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),fVar8);
        dVar21 = in_xd2;
      }
      if (cVar25 == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) * fVar8);
      }
      else {
        dVar7 = dVar7 * dVar9;
      }
      fVar10 = SUB84(dVar11,0);
      fVar6 = fVar10;
      if (cVar26 != '\0') {
        fVar6 = (float)((ulonglong)dVar13 >> 0x20);
      }
      if (cVar25 == '\0') {
        fVar6 = SQRT(fVar6 * fVar10 + SUB84(dVar7,0));
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar6);
        dVar14 = (double)CONCAT44(uVar15,1.0 / fVar6);
      }
      else {
        dVar7 = SQRT(dVar7);
        dVar14 = (double)CONCAT44(uVar15,0x3f800000) / dVar7;
      }
      if (cVar26 == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),0x3f066666);
      }
      else {
        dVar21 = -3.1050369136217506e+231;
      }
      *(undefined4 *)(ar6 + 0x18) = uVar2;
      uVar12 = (undefined4)((ulonglong)dVar9 >> 0x20);
      if (cVar26 == '\0') {
        pdVar5 = (double *)(ar6 + 0xc);
        *(undefined4 *)pdVar5 = uVar12;
      }
      else {
        pdVar5 = (double *)(ar6 + 8);
        *pdVar5 = dVar9;
      }
      if (cVar25 == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                  fVar10 * SUB84(dVar14,0) * SUB84(dVar7,0));
        dVar9 = (double)CONCAT44(uVar12,fVar8 * SUB84(dVar14,0) * SUB84(dVar7,0));
      }
      else {
        dVar11 = dVar11 * dVar14 * dVar7;
        dVar9 = dVar9 * dVar14 * dVar7;
      }
      fVar8 = (float)((ulonglong)dVar11 >> 0x20);
      dVar22 = dVar11;
      if (cVar26 == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar8);
        dVar22 = dVar21;
      }
      fVar6 = -SUB84(dVar11,0);
      dVar11 = (double)CONCAT44(fVar8,fVar6);
      if (cVar25 == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) - fVar6);
      }
      else {
        dVar7 = dVar7 - dVar11;
      }
      fVar10 = SUB84(dVar9,0);
      dVar21 = dVar23;
      if (cVar26 == '\0') {
        dVar21 = (double)CONCAT44(fVar10,SUB84(in_dr10,0));
      }
      if (cVar25 == '\0') {
        in_dr10 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + fVar10,SUB84(dVar21,0));
      }
      else {
        in_dr10 = dVar21 + dVar9;
      }
      if (cVar26 == '\0') {
        dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),fVar6);
      }
      if (cVar25 == '\0') {
        dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),SUB84(dVar14,0) + fVar6);
      }
      else {
        dVar14 = dVar14 + dVar11;
      }
      fVar16 = (float)((ulonglong)dVar14 >> 0x20);
      if (cVar26 == '\0') {
        pdVar5 = (double *)((int)pdVar5 + -4);
        *(int *)pdVar5 = SUB84(dVar7,0);
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar16);
      }
      else {
        pdVar5 = pdVar5 + -1;
        *pdVar5 = dVar22;
        dVar22 = dVar14;
      }
      if (cVar25 == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) - fVar10);
      }
      else {
        dVar7 = dVar7 - dVar9;
      }
      if (cVar26 == '\0') {
        pdVar5 = (double *)((int)pdVar5 + -4);
        *(int *)pdVar5 = SUB84(dVar7,0);
      }
      else {
        pdVar5 = pdVar5 + -1;
        *pdVar5 = dVar22;
      }
      *(undefined4 *)((int)pdVar5 + -4) = 0xe0000000;
      dVar21 = in_dr14;
      if (cVar26 == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar20);
        dVar21 = dVar22;
      }
      if (cVar25 == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) - fVar6);
      }
      else {
        dVar7 = dVar7 - dVar11;
      }
      *(undefined4 *)((int)pdVar5 + 0x34) = uVar3;
      if (cVar26 == '\0') {
        *(float *)(pdVar5 + 5) = fVar19;
        pdVar5 = (double *)((int)pdVar5 + 0x24);
        *(int *)pdVar5 = SUB84(dVar7,0);
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar17);
      }
      else {
        *(double *)((int)pdVar5 + 0x24) = in_xd14;
        pdVar5 = (double *)((int)pdVar5 + 0x1c);
        *pdVar5 = dVar21;
        dVar21 = in_xd12;
      }
      if (cVar25 == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) - fVar10);
      }
      else {
        dVar7 = dVar7 - dVar9;
      }
      if (cVar26 == '\0') {
        pdVar5 = (double *)((int)pdVar5 + -4);
        *(int *)pdVar5 = SUB84(dVar7,0);
      }
      else {
        pdVar5 = pdVar5 + -1;
        *pdVar5 = dVar21;
      }
      *(undefined4 *)((int)pdVar5 + -4) = 0xe0000000;
      if (cVar25 == '\0') {
        dVar11 = (double)CONCAT44(fVar8 + SUB84(dVar14,0),fVar6);
      }
      else {
        dVar11 = dVar11 + dVar14;
      }
      *(undefined4 *)((int)pdVar5 + 0x34) = uVar2;
      fVar8 = (float)((ulonglong)in_dr10 >> 0x20);
      if (cVar25 == '\0') {
        dVar14 = (double)CONCAT44(fVar16 + fVar8,SUB84(dVar14,0));
      }
      else {
        dVar14 = dVar14 + in_dr10;
      }
      if (cVar26 == '\0') {
        *(int *)(pdVar5 + 5) = (int)((ulonglong)dVar9 >> 0x20);
        *(int *)((int)pdVar5 + 0x24) = (int)((ulonglong)dVar11 >> 0x20);
        pdVar5 = pdVar5 + 4;
        *(int *)pdVar5 = (int)((ulonglong)dVar14 >> 0x20);
      }
      else {
        *(double *)((int)pdVar5 + 0x24) = dVar9;
        *(double *)((int)pdVar5 + 0x1c) = dVar11;
        pdVar5 = (double *)((int)pdVar5 + 0x14);
        *pdVar5 = dVar14;
      }
      *(undefined4 *)((int)pdVar5 + -4) = 0xe0000000;
      in_xd2 = in_dr14;
      if (cVar26 == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar20);
        in_xd2 = dVar21;
      }
      if (cVar25 == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) + SUB84(dVar14,0));
      }
      else {
        dVar7 = dVar7 + dVar14;
      }
      *(undefined4 *)((int)pdVar5 + 0x34) = uVar3;
      if (cVar26 == '\0') {
        *(float *)(pdVar5 + 5) = fVar19;
        pdVar5 = (double *)((int)pdVar5 + 0x24);
        *(int *)pdVar5 = SUB84(dVar7,0);
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar17);
      }
      else {
        *(double *)((int)pdVar5 + 0x24) = in_xd14;
        pdVar5 = (double *)((int)pdVar5 + 0x1c);
        *pdVar5 = in_xd2;
        in_xd2 = in_xd12;
      }
      if (cVar25 == '\0') {
        dVar14 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) + fVar8);
      }
      else {
        dVar14 = dVar7 + in_dr10;
      }
      if (cVar26 == '\0') {
        pdVar5 = (double *)((int)pdVar5 + -4);
        *(int *)pdVar5 = SUB84(dVar14,0);
      }
      else {
        pdVar5 = pdVar5 + -1;
        *pdVar5 = in_xd2;
      }
      *(undefined4 *)((int)pdVar5 + -4) = 0xf0000000;
      ar6 = (int)pdVar5 + 0x1c;
      in_xd6 = dVar13;
    }
    else {
LAB_8c25c3fc:
      if (cVar25 == '\0') {
        bVar24 = 0.0 < fVar20;
      }
      else {
        bVar24 = (double)(uVar1 << 0x20) < dVar9;
      }
      if (bVar24) {
        if (cVar25 == '\0') {
          bVar24 = fVar20 < fVar17;
        }
        else {
          bVar24 = dVar9 < dVar18;
        }
        if (!bVar24) goto LAB_8c25c406;
LAB_8c25c410:
        dVar14 = (double)(uVar1 << 0x20);
        ar6 = FUN_8c25c4d2(pdVar5,ar4,ar6,ar7);
        dVar23 = in_xd4;
      }
      else {
LAB_8c25c406:
        dVar14 = (double)(uVar1 << 0x20);
        if (cVar25 == '\0') {
          bVar24 = 0.0 < fVar19;
        }
        else {
          bVar24 = dVar14 < in_dr14;
        }
        if (bVar24) {
          if (cVar25 == '\0') {
            bVar24 = fVar19 < fVar17;
          }
          else {
            bVar24 = in_dr14 < dVar18;
          }
          if (bVar24) goto LAB_8c25c410;
        }
      }
    }
    dVar7 = in_dr14;
    if (cVar26 == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),SUB84(dVar11,0));
    }
    ar5 = ar5 + -1;
    dVar13 = in_xd12;
    dVar11 = in_xd14;
    if (cVar26 == '\0') {
      dVar13 = (double)((longlong)dVar18 << 0x20);
      dVar11 = (double)CONCAT44(SUB84(in_dr14,0),SUB84(dVar9,0));
    }
    dVar9 = dVar11;
    uVar2 = uVar3;
    pdVar5 = ar4;
    ar4 = pdVar4;
    dVar11 = dVar7;
    in_xd4 = dVar23;
    if (ar5 == 0) {
      return ar6;
    }
  } while( true );
}

__asm__(".globl _FUN_8c25c3a4\n.set _FUN_8c25c3a4, _FUN_8c25c3a4_def\n");
