#include "../decls.h"
double * FUN_8c25c868_def(double *ar4,int ar5,double *ar6,undefined4 ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double *pdVar4;
  double *pdVar5;
  uint *puVar6;
  float fVar7;
  undefined8 in_dr2;
  double dVar9;
  float fVar11;
  double dVar10;
  double dVar12;
  float fVar14;
  double dVar13;
  double dVar15;
  double dVar16;
  float fVar17;
  undefined4 uVar19;
  double dVar18;
  undefined4 in_fr13;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  double in_dr14;
  float fVar24;
  double in_xd2;
  double dVar25;
  double in_xd4;
  double in_xd6;
  double dVar26;
  double in_xd8;
  double in_xd12;
  double in_xd14;
  bool bVar27;
  undefined4 in_PR;
  char cVar28;
  char cVar29;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  double dVar8;
  
  cVar29 = '\0';
  cVar28 = '\0';
  dVar9 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),_DAT_8c4aa4d4);
  pdVar5 = ar4 + (ar5 + -1) * 3;
  dVar21 = (double)CONCAT44(1.0 / _DAT_8c4aa4d4,in_fr13);
  uVar19 = *(undefined4 *)((int)pdVar5 + 4);
  dVar16 = (double)(ulonglong)*(uint *)(pdVar5 + 1);
  dVar10 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 0xc),*(undefined4 *)(pdVar5 + 2));
  dVar13 = (double)(ulonglong)*(uint *)((int)pdVar5 + 0x14);
  uVar2 = *(undefined4 *)pdVar5;
  uStack_30 = in_PR;
  do {
    uVar3 = *(undefined4 *)ar4;
    if (cVar29 == '\0') {
      uStack_38 = *(undefined4 *)((int)ar4 + 4);
      uStack_3c = *(uint *)(ar4 + 1);
      dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),uStack_3c);
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)((int)ar4 + 0xc));
      pdVar4 = ar4 + 2;
    }
    else {
      uStack_34 = (undefined4)((ulonglong)*(undefined8 *)((int)ar4 + 4) >> 0x20);
      in_xd2 = *(double *)((int)ar4 + 0xc);
      uStack_3c = SUB84(in_xd2,0);
      uStack_38 = (undefined4)((ulonglong)in_xd2 >> 0x20);
      in_xd14 = *(double *)((int)ar4 + 0x14);
      pdVar4 = (double *)((int)ar4 + 0x1c);
    }
    uVar1 = (ulonglong)dVar9 >> 0x20;
    dVar8 = (double)(uVar1 << 0x20);
    if (cVar28 == '\0') {
      bVar27 = 0.0 < SUB84(in_dr14,0);
    }
    else {
      bVar27 = dVar8 < in_dr14;
    }
    if (cVar29 == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)pdVar4);
      in_dr14 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 4),SUB84(in_dr14,0));
      pdVar4 = pdVar4 + 1;
    }
    else {
      in_xd12 = *pdVar4;
      in_dr14 = pdVar4[1];
      pdVar4 = pdVar4 + 2;
    }
    fVar23 = SUB84(in_dr14,0);
    fVar22 = (float)((ulonglong)dVar21 >> 0x20);
    fVar11 = (float)((ulonglong)dVar10 >> 0x20);
    dVar26 = in_xd6;
    if (bVar27) {
      if (cVar28 == '\0') {
        bVar27 = fVar23 < fVar22;
      }
      else {
        bVar27 = in_dr14 < dVar21;
      }
      if (!bVar27) goto LAB_8c25c8d6;
      if (cVar28 == '\0') {
        bVar27 = 0.0 < fVar11;
      }
      else {
        bVar27 = dVar8 < dVar10;
      }
      if (!bVar27) goto LAB_8c25c8d6;
      if (cVar28 == '\0') {
        bVar27 = fVar11 < fVar22;
      }
      else {
        bVar27 = dVar10 < dVar21;
      }
      if (!bVar27) goto LAB_8c25c8d6;
      fVar22 = SUB84(dVar10,0);
      dVar12 = in_xd4;
      if (cVar29 == '\0') {
        dVar12 = (double)CONCAT44(fVar22,SUB84(dVar13,0));
      }
      fVar20 = SUB84(dVar21,0);
      if (cVar28 == '\0') {
        dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) - fVar20,SUB84(dVar12,0));
      }
      else {
        dVar12 = dVar12 - dVar21;
      }
      dVar15 = in_xd6;
      if (cVar29 == '\0') {
        dVar15 = (double)CONCAT44(SUB84(dVar12,0),SUB84(dVar16,0));
      }
      fVar24 = (float)((ulonglong)in_dr14 >> 0x20);
      if (cVar28 == '\0') {
        dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) - fVar24,SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 - in_dr14;
      }
      fVar14 = (float)((ulonglong)dVar12 >> 0x20);
      dVar25 = dVar12;
      if (cVar29 == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),fVar14);
        dVar25 = in_xd2;
      }
      fVar17 = (float)((ulonglong)dVar15 >> 0x20);
      if (cVar28 == '\0') {
        fVar7 = SQRT(fVar17 * fVar17 + SUB84(dVar8,0) * fVar14);
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),fVar7);
        dVar18 = (double)CONCAT44(uVar19,1.0 / fVar7);
      }
      else {
        dVar8 = SQRT(dVar8 * dVar12);
        dVar18 = (double)CONCAT44(uVar19,0x3f800000) / dVar8;
      }
      if (cVar29 == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),0x3f066666);
      }
      else {
        dVar25 = -3.1050369136217506e+231;
      }
      if (cVar28 == '\0') {
        dVar13 = (double)CONCAT44(fVar14 * SUB84(dVar18,0) * SUB84(dVar8,0),SUB84(dVar12,0));
        dVar16 = (double)CONCAT44(fVar17 * SUB84(dVar18,0) * SUB84(dVar8,0),SUB84(dVar15,0));
      }
      else {
        dVar13 = dVar12 * dVar18 * dVar8;
        dVar16 = dVar15 * dVar18 * dVar8;
      }
      fVar14 = (float)((ulonglong)dVar13 >> 0x20);
      in_xd2 = dVar13;
      if (cVar29 == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),fVar14);
        in_xd2 = dVar25;
      }
      if (cVar28 == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),SUB84(dVar8,0) + fVar14);
        dVar16 = (double)CONCAT44(-(float)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0));
      }
      else {
        dVar8 = dVar8 + dVar13;
        dVar16 = -dVar16;
      }
      fVar17 = (float)((ulonglong)dVar16 >> 0x20);
      if (cVar29 == '\0') {
        dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),fVar17);
      }
      if (cVar28 == '\0') {
        dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),SUB84(dVar18,0) + fVar17);
      }
      else {
        dVar18 = dVar18 + dVar16;
      }
      if (cVar29 == '\0') {
        uStack_34 = SUB84(dVar8,0);
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),fVar22);
      }
      else {
        uStack_34 = SUB84(in_xd2,0);
        uStack_30 = (undefined4)((ulonglong)in_xd2 >> 0x20);
        in_xd2 = in_xd4;
      }
      if (cVar28 == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),SUB84(dVar8,0) - fVar17);
      }
      else {
        dVar8 = dVar8 - dVar16;
      }
      *(undefined4 *)(ar6 + 3) = uVar2;
      uVar19 = (undefined4)((ulonglong)dVar18 >> 0x20);
      if (cVar29 == '\0') {
        *(undefined4 *)((int)ar6 + 0x14) = uVar19;
        *(int *)(ar6 + 2) = SUB84(dVar16,0);
        *(float *)((int)ar6 + 0xc) = fVar11;
        pdVar5 = ar6 + 1;
        *(int *)pdVar5 = SUB84(dVar8,0);
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),SUB84(dVar13,0));
      }
      else {
        ar6[2] = dVar18;
        ar6[1] = in_xd8;
        *ar6 = dVar10;
        pdVar5 = ar6 + -1;
        *pdVar5 = in_xd2;
        in_xd2 = in_xd6;
      }
      if (cVar28 == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),SUB84(dVar8,0) - fVar14);
      }
      else {
        dVar8 = dVar8 - dVar13;
      }
      if (cVar29 == '\0') {
        pdVar5 = (double *)((int)pdVar5 + -4);
        *(int *)pdVar5 = SUB84(dVar8,0);
      }
      else {
        pdVar5 = pdVar5 + -1;
        *pdVar5 = in_xd2;
      }
      *(undefined4 *)((int)pdVar5 + -4) = 0xe0000000;
      *(undefined4 *)((int)pdVar5 + 0x34) = uVar3;
      if (cVar29 == '\0') {
        *(undefined4 *)(pdVar5 + 6) = uStack_38;
        puVar6 = (uint *)((int)pdVar5 + 0x2c);
        *puVar6 = uStack_3c;
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),fVar20);
      }
      else {
        *(ulonglong *)((int)pdVar5 + 0x2c) = CONCAT44(uStack_34,uStack_38);
        puVar6 = (uint *)((int)pdVar5 + 0x24);
        *(ulonglong *)puVar6 = CONCAT44(uStack_38,uStack_3c);
        in_xd2 = in_xd12;
      }
      if (cVar28 == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),SUB84(dVar8,0) - fVar17);
      }
      else {
        dVar8 = dVar8 - dVar16;
      }
      if (cVar29 == '\0') {
        puVar6[-1] = (uint)fVar23;
        pdVar5 = (double *)(puVar6 + -2);
        *(int *)pdVar5 = SUB84(dVar8,0);
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),fVar24);
      }
      else {
        *(double *)(puVar6 + -2) = in_xd14;
        pdVar5 = (double *)(puVar6 + -4);
        *pdVar5 = in_xd2;
        in_xd2 = in_dr14;
      }
      if (cVar28 == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),SUB84(dVar8,0) - fVar14);
      }
      else {
        dVar8 = dVar8 - dVar13;
      }
      if (cVar29 == '\0') {
        pdVar5 = (double *)((int)pdVar5 + -4);
        *(int *)pdVar5 = SUB84(dVar8,0);
      }
      else {
        pdVar5 = pdVar5 + -1;
        *pdVar5 = in_xd2;
      }
      *(undefined4 *)((int)pdVar5 + -4) = 0xe0000000;
      if (cVar28 == '\0') {
        dVar10 = (double)CONCAT44(fVar11,fVar22 + SUB84(dVar18,0));
      }
      else {
        dVar10 = dVar10 + dVar18;
      }
      *(undefined4 *)((int)pdVar5 + 0x34) = uVar2;
      if (cVar29 == '\0') {
        *(undefined4 *)(pdVar5 + 6) = uVar19;
        *(int *)((int)pdVar5 + 0x2c) = SUB84(dVar16,0);
        *(int *)(pdVar5 + 5) = (int)((ulonglong)dVar10 >> 0x20);
        pdVar5 = (double *)((int)pdVar5 + 0x24);
        *(int *)pdVar5 = SUB84(dVar10,0);
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),uStack_34);
      }
      else {
        *(double *)((int)pdVar5 + 0x2c) = dVar18;
        *(double *)((int)pdVar5 + 0x24) = in_xd8;
        *(double *)((int)pdVar5 + 0x1c) = dVar10;
        pdVar5 = (double *)((int)pdVar5 + 0x14);
        *pdVar5 = in_xd4;
        in_xd2 = (double)CONCAT44(uStack_30,uStack_34);
      }
      if (cVar28 == '\0') {
        dVar13 = (double)(ulonglong)(uint)(SUB84(dVar13,0) + SUB84(dVar8,0));
      }
      else {
        dVar13 = dVar13 + dVar8;
      }
      if (cVar29 == '\0') {
        pdVar5 = (double *)((int)pdVar5 + -4);
        *(int *)pdVar5 = SUB84(dVar13,0);
      }
      else {
        pdVar5 = pdVar5 + -1;
        *pdVar5 = in_xd6;
      }
      *(undefined4 *)((int)pdVar5 + -4) = 0xe0000000;
      dVar9 = in_dr14;
      if (cVar29 == '\0') {
        dVar9 = (double)CONCAT44(fVar24,SUB84(dVar8,0));
      }
      *(undefined4 *)((int)pdVar5 + 0x34) = uVar3;
      if (cVar29 == '\0') {
        *(undefined4 *)(pdVar5 + 6) = uStack_38;
        puVar6 = (uint *)((int)pdVar5 + 0x2c);
        *puVar6 = uStack_3c;
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),fVar20);
      }
      else {
        *(ulonglong *)((int)pdVar5 + 0x2c) = CONCAT44(uStack_34,uStack_38);
        puVar6 = (uint *)((int)pdVar5 + 0x24);
        *(ulonglong *)puVar6 = CONCAT44(uStack_38,uStack_3c);
        in_xd2 = in_xd12;
      }
      if (cVar28 == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),SUB84(dVar9,0) + SUB84(dVar18,0));
      }
      else {
        dVar9 = dVar9 + dVar18;
      }
      if (cVar29 == '\0') {
        puVar6[-1] = (uint)fVar23;
        pdVar5 = (double *)(puVar6 + -2);
        *(int *)pdVar5 = SUB84(dVar9,0);
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),uStack_34);
      }
      else {
        *(double *)(puVar6 + -2) = in_xd14;
        pdVar5 = (double *)(puVar6 + -4);
        *pdVar5 = in_xd2;
        in_xd2 = (double)CONCAT44(uStack_30,uStack_34);
      }
      if (cVar28 == '\0') {
        dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) + SUB84(dVar9,0),SUB84(dVar9,0));
      }
      else {
        dVar9 = dVar9 + dVar9;
      }
      if (cVar29 == '\0') {
        pdVar5 = (double *)((int)pdVar5 + -4);
        *(int *)pdVar5 = (int)((ulonglong)dVar9 >> 0x20);
      }
      else {
        pdVar5 = pdVar5 + -1;
        *pdVar5 = dVar9;
      }
      *(undefined4 *)((int)pdVar5 + -4) = 0xf0000000;
      ar6 = (double *)((int)pdVar5 + 0x1c);
    }
    else {
LAB_8c25c8d6:
      if (cVar28 == '\0') {
        bVar27 = 0.0 < fVar11;
      }
      else {
        bVar27 = (double)(uVar1 << 0x20) < dVar10;
      }
      if (bVar27) {
        if (cVar28 == '\0') {
          bVar27 = fVar11 < fVar22;
        }
        else {
          bVar27 = dVar10 < dVar21;
        }
        if (!bVar27) goto LAB_8c25c8e0;
LAB_8c25c8ea:
        dVar9 = (double)(uVar1 << 0x20);
        ar6 = (double *)FUN_8c25c9d8(pdVar5,ar4,ar6,ar7);
        dVar26 = in_xd6;
      }
      else {
LAB_8c25c8e0:
        dVar9 = (double)(uVar1 << 0x20);
        if (cVar28 == '\0') {
          bVar27 = 0.0 < fVar23;
        }
        else {
          bVar27 = dVar9 < in_dr14;
        }
        if (bVar27) {
          if (cVar28 == '\0') {
            bVar27 = fVar23 < fVar22;
          }
          else {
            bVar27 = in_dr14 < dVar21;
          }
          if (bVar27) goto LAB_8c25c8ea;
        }
      }
    }
    if (cVar29 == '\0') {
      dVar16 = (double)(ulonglong)uStack_3c;
      uVar19 = uStack_38;
    }
    else {
      in_xd8 = (double)CONCAT44(uStack_38,uStack_3c);
      uVar19 = uStack_34;
    }
    ar5 = ar5 + -1;
    in_xd6 = in_dr14;
    dVar10 = in_xd14;
    dVar8 = in_xd12;
    if (cVar29 == '\0') {
      dVar13 = (double)((ulonglong)in_dr14 >> 0x20);
      in_xd6 = dVar26;
      dVar10 = (double)CONCAT44(SUB84(in_dr14,0),SUB84(dVar21,0));
      dVar8 = in_xd4;
    }
    in_xd4 = dVar8;
    uVar2 = uVar3;
    pdVar5 = ar4;
    ar4 = pdVar4;
    if (ar5 == 0) {
      return ar6;
    }
  } while( true );
}

__asm__(".globl _FUN_8c25c868\n.set _FUN_8c25c868, _FUN_8c25c868_def\n");
