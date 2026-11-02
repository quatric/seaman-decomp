#include "../decls.h"
int FUN_8c25c3d0_def(undefined4 ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  double *in_r3;
  undefined4 uVar3;
  int unaff_r8;
  double *unaff_r9;
  undefined4 uVar4;
  double *unaff_r12;
  double *pdVar5;
  int unaff_r14;
  double *pdVar6;
  float fVar7;
  double in_dr2;
  double dVar8;
  undefined4 in_fr5;
  float fVar9;
  double dVar10;
  undefined4 in_fr7;
  float fVar11;
  undefined4 uVar13;
  double dVar12;
  double dVar14;
  undefined4 uVar16;
  double dVar15;
  float fVar17;
  double in_dr10;
  double dVar18;
  float fVar19;
  double in_dr12;
  double dVar20;
  float fVar21;
  double in_dr14;
  float fVar22;
  double in_xd2;
  double dVar23;
  double in_xd4;
  double dVar24;
  double in_xd6;
  double in_xd12;
  double in_xd14;
  bool bVar25;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  uVar2 = 0xe0000000;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)in_r3);
  }
  else {
    in_xd2 = *in_r3;
  }
  if (in_FPSCR_PR == '\0') {
    dVar20 = (double)CONCAT44((float)((ulonglong)in_dr12 >> 0x20) / SUB84(in_dr2,0),SUB84(in_dr12,0)
                             );
  }
  else {
    dVar20 = in_dr12 / in_dr2;
  }
  uVar3 = *ar6;
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(ar6[1],in_fr5);
    dVar14 = (double)((ulonglong)(uint)ar6[3] << 0x20);
    dVar12 = (double)CONCAT44(ar6[2],in_fr7);
  }
  else {
    dVar10 = *(double *)(ar6 + 1);
    dVar14 = *(double *)(ar6 + 5);
    dVar12 = *(double *)(ar6 + 3);
  }
  do {
    uVar4 = *(undefined4 *)unaff_r12;
    uVar1 = (ulonglong)in_dr2 >> 0x20;
    dVar8 = (double)(uVar1 << 0x20);
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)((int)unaff_r12 + 4));
      pdVar5 = unaff_r12 + 1;
    }
    else {
      in_xd14 = *(double *)((int)unaff_r12 + 4);
      pdVar5 = (double *)((int)unaff_r12 + 0xc);
    }
    if (in_FPSCR_PR == '\0') {
      bVar25 = 0.0 < SUB84(in_dr14,0);
    }
    else {
      bVar25 = dVar8 < in_dr14;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(in_dr14,0));
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)((int)pdVar5 + 4));
      pdVar5 = pdVar5 + 1;
    }
    else {
      in_dr14 = *pdVar5;
      in_xd12 = pdVar5[1];
      pdVar5 = pdVar5 + 2;
    }
    fVar21 = SUB84(in_dr14,0);
    fVar19 = (float)((ulonglong)dVar20 >> 0x20);
    fVar22 = (float)((ulonglong)dVar10 >> 0x20);
    dVar24 = in_xd4;
    if (bVar25) {
      if (in_FPSCR_PR == '\0') {
        bVar25 = fVar21 < fVar19;
      }
      else {
        bVar25 = in_dr14 < dVar20;
      }
      if (!bVar25) goto LAB_8c25c3fc;
      if (in_FPSCR_PR == '\0') {
        bVar25 = 0.0 < fVar22;
      }
      else {
        bVar25 = dVar8 < dVar10;
      }
      if (!bVar25) goto LAB_8c25c3fc;
      if (in_FPSCR_PR == '\0') {
        bVar25 = fVar22 < fVar19;
      }
      else {
        bVar25 = dVar10 < dVar20;
      }
      if (!bVar25) goto LAB_8c25c3fc;
      uVar13 = (undefined4)((ulonglong)dVar12 >> 0x20);
      dVar24 = dVar12;
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(fVar22,uVar13);
        dVar24 = in_xd4;
      }
      fVar22 = (float)((ulonglong)in_dr14 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),SUB84(dVar10,0) - fVar22);
      }
      else {
        dVar10 = dVar10 - in_dr14;
      }
      uVar16 = (undefined4)((ulonglong)dVar14 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(uVar13,uVar16);
        dVar14 = in_xd6;
      }
      fVar19 = SUB84(dVar20,0);
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),SUB84(dVar12,0) - fVar19);
      }
      else {
        dVar12 = dVar12 - dVar20;
      }
      fVar9 = SUB84(dVar10,0);
      dVar18 = dVar24;
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
        dVar18 = in_xd2;
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),SUB84(dVar8,0) * fVar9);
      }
      else {
        dVar8 = dVar8 * dVar10;
      }
      fVar11 = SUB84(dVar12,0);
      fVar7 = fVar11;
      if (in_FPSCR_SZ != '\0') {
        fVar7 = (float)((ulonglong)dVar14 >> 0x20);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SQRT(fVar7 * fVar11 + SUB84(dVar8,0));
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),fVar7);
        dVar15 = (double)CONCAT44(uVar16,1.0 / fVar7);
      }
      else {
        dVar8 = SQRT(dVar8);
        dVar15 = (double)CONCAT44(uVar16,0x3f800000) / dVar8;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),DAT_8c25c68c);
      }
      else {
        dVar18 = (double)CONCAT44(0xf0000000,DAT_8c25c68c);
      }
      *(undefined4 *)(unaff_r14 + 0x18) = uVar3;
      uVar13 = (undefined4)((ulonglong)dVar10 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        pdVar6 = (double *)(unaff_r14 + 0xc);
        *(undefined4 *)pdVar6 = uVar13;
      }
      else {
        pdVar6 = (double *)(unaff_r14 + 8);
        *pdVar6 = dVar10;
      }
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),
                                  fVar11 * SUB84(dVar15,0) * SUB84(dVar8,0));
        dVar10 = (double)CONCAT44(uVar13,fVar9 * SUB84(dVar15,0) * SUB84(dVar8,0));
      }
      else {
        dVar12 = dVar12 * dVar15 * dVar8;
        dVar10 = dVar10 * dVar15 * dVar8;
      }
      fVar9 = (float)((ulonglong)dVar12 >> 0x20);
      dVar23 = dVar12;
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),fVar9);
        dVar23 = dVar18;
      }
      fVar7 = -SUB84(dVar12,0);
      dVar12 = (double)CONCAT44(fVar9,fVar7);
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),SUB84(dVar8,0) - fVar7);
      }
      else {
        dVar8 = dVar8 - dVar12;
      }
      fVar11 = SUB84(dVar10,0);
      dVar18 = dVar24;
      if (in_FPSCR_SZ == '\0') {
        dVar18 = (double)CONCAT44(fVar11,SUB84(in_dr10,0));
      }
      if (in_FPSCR_PR == '\0') {
        in_dr10 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) + fVar11,SUB84(dVar18,0));
      }
      else {
        in_dr10 = dVar18 + dVar10;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),fVar7);
      }
      if (in_FPSCR_PR == '\0') {
        dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0) + fVar7);
      }
      else {
        dVar15 = dVar15 + dVar12;
      }
      fVar17 = (float)((ulonglong)dVar15 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        pdVar6 = (double *)((int)pdVar6 + -4);
        *(int *)pdVar6 = SUB84(dVar8,0);
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),fVar17);
      }
      else {
        pdVar6 = pdVar6 + -1;
        *pdVar6 = dVar23;
        dVar23 = dVar15;
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),SUB84(dVar8,0) - fVar11);
      }
      else {
        dVar8 = dVar8 - dVar10;
      }
      if (in_FPSCR_SZ == '\0') {
        pdVar6 = (double *)((int)pdVar6 + -4);
        *(int *)pdVar6 = SUB84(dVar8,0);
      }
      else {
        pdVar6 = pdVar6 + -1;
        *pdVar6 = dVar23;
      }
      *(undefined4 *)((int)pdVar6 + -4) = uVar2;
      dVar18 = in_dr14;
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),fVar22);
        dVar18 = dVar23;
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),SUB84(dVar8,0) - fVar7);
      }
      else {
        dVar8 = dVar8 - dVar12;
      }
      *(undefined4 *)((int)pdVar6 + 0x34) = uVar4;
      if (in_FPSCR_SZ == '\0') {
        *(float *)(pdVar6 + 5) = fVar21;
        pdVar6 = (double *)((int)pdVar6 + 0x24);
        *(int *)pdVar6 = SUB84(dVar8,0);
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),fVar19);
      }
      else {
        *(double *)((int)pdVar6 + 0x24) = in_xd14;
        pdVar6 = (double *)((int)pdVar6 + 0x1c);
        *pdVar6 = dVar18;
        dVar18 = in_xd12;
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),SUB84(dVar8,0) - fVar11);
      }
      else {
        dVar8 = dVar8 - dVar10;
      }
      if (in_FPSCR_SZ == '\0') {
        pdVar6 = (double *)((int)pdVar6 + -4);
        *(int *)pdVar6 = SUB84(dVar8,0);
      }
      else {
        pdVar6 = pdVar6 + -1;
        *pdVar6 = dVar18;
      }
      *(undefined4 *)((int)pdVar6 + -4) = uVar2;
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44(fVar9 + SUB84(dVar15,0),fVar7);
      }
      else {
        dVar12 = dVar12 + dVar15;
      }
      *(undefined4 *)((int)pdVar6 + 0x34) = uVar3;
      fVar9 = (float)((ulonglong)in_dr10 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar15 = (double)CONCAT44(fVar17 + fVar9,SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 + in_dr10;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(pdVar6 + 5) = (int)((ulonglong)dVar10 >> 0x20);
        *(int *)((int)pdVar6 + 0x24) = (int)((ulonglong)dVar12 >> 0x20);
        pdVar6 = pdVar6 + 4;
        *(int *)pdVar6 = (int)((ulonglong)dVar15 >> 0x20);
      }
      else {
        *(double *)((int)pdVar6 + 0x24) = dVar10;
        *(double *)((int)pdVar6 + 0x1c) = dVar12;
        pdVar6 = (double *)((int)pdVar6 + 0x14);
        *pdVar6 = dVar15;
      }
      *(undefined4 *)((int)pdVar6 + -4) = uVar2;
      uVar3 = 0xf0000000;
      in_xd2 = in_dr14;
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),fVar22);
        in_xd2 = dVar18;
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),SUB84(dVar8,0) + SUB84(dVar15,0));
      }
      else {
        dVar8 = dVar8 + dVar15;
      }
      *(undefined4 *)((int)pdVar6 + 0x34) = uVar4;
      if (in_FPSCR_SZ == '\0') {
        *(float *)(pdVar6 + 5) = fVar21;
        pdVar6 = (double *)((int)pdVar6 + 0x24);
        *(int *)pdVar6 = SUB84(dVar8,0);
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),fVar19);
      }
      else {
        *(double *)((int)pdVar6 + 0x24) = in_xd14;
        pdVar6 = (double *)((int)pdVar6 + 0x1c);
        *pdVar6 = in_xd2;
        in_xd2 = in_xd12;
      }
      if (in_FPSCR_PR == '\0') {
        in_dr2 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),SUB84(dVar8,0) + fVar9);
      }
      else {
        in_dr2 = dVar8 + in_dr10;
      }
      if (in_FPSCR_SZ == '\0') {
        pdVar6 = (double *)((int)pdVar6 + -4);
        *(int *)pdVar6 = SUB84(in_dr2,0);
      }
      else {
        pdVar6 = pdVar6 + -1;
        *pdVar6 = in_xd2;
      }
      *(undefined4 *)((int)pdVar6 + -4) = uVar3;
      unaff_r14 = (int)pdVar6 + 0x1c;
      in_xd6 = dVar14;
    }
    else {
LAB_8c25c3fc:
      if (in_FPSCR_PR == '\0') {
        bVar25 = 0.0 < fVar22;
      }
      else {
        bVar25 = (double)(uVar1 << 0x20) < dVar10;
      }
      if (bVar25) {
        if (in_FPSCR_PR == '\0') {
          bVar25 = fVar22 < fVar19;
        }
        else {
          bVar25 = dVar10 < dVar20;
        }
        if (!bVar25) goto LAB_8c25c406;
LAB_8c25c410:
        in_dr2 = (double)(uVar1 << 0x20);
        unaff_r14 = FUN_8c25c4d2(unaff_r9,unaff_r12,unaff_r14,ar7);
        dVar24 = in_xd4;
      }
      else {
LAB_8c25c406:
        in_dr2 = (double)(uVar1 << 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar25 = 0.0 < fVar21;
        }
        else {
          bVar25 = in_dr2 < in_dr14;
        }
        if (bVar25) {
          if (in_FPSCR_PR == '\0') {
            bVar25 = fVar21 < fVar19;
          }
          else {
            bVar25 = in_dr14 < dVar20;
          }
          if (bVar25) goto LAB_8c25c410;
        }
      }
    }
    dVar8 = in_dr14;
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),SUB84(dVar12,0));
    }
    unaff_r8 = unaff_r8 + -1;
    dVar14 = in_xd12;
    dVar12 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)((longlong)dVar20 << 0x20);
      dVar12 = (double)CONCAT44(SUB84(in_dr14,0),SUB84(dVar10,0));
    }
    dVar10 = dVar12;
    uVar3 = uVar4;
    unaff_r9 = unaff_r12;
    unaff_r12 = pdVar5;
    dVar12 = dVar8;
    in_xd4 = dVar24;
    if (unaff_r8 == 0) {
      return unaff_r14;
    }
  } while( true );
}

__asm__(".globl _FUN_8c25c3d0\n.set _FUN_8c25c3d0, _FUN_8c25c3d0_def\n");
