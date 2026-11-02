#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c25c3d0_def(undefined4 ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25c3d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ulonglong uVar1;
  undefined4 uVar2;
  double *in_r3 = 0;
  undefined4 uVar3;
  int unaff_r8 = 0;
  double *unaff_r9 = 0;
  undefined4 uVar4;
  double *unaff_r12 = 0;
  double *pdVar5;
  int unaff_r14 = 0;
  double *pdVar6;
  float fVar7;
  double in_dr2 = 0;
  double dVar8;
  undefined4 in_fr5 = 0;
  float fVar9;
  double dVar10;
  undefined4 in_fr7 = 0;
  float fVar11;
  undefined4 uVar13;
  double dVar12;
  double dVar14;
  undefined4 uVar16;
  double dVar15;
  float fVar17;
  double in_dr10 = 0;
  double dVar18;
  float fVar19;
  double in_dr12 = 0;
  double dVar20;
  float fVar21;
  double in_dr14 = 0;
  float fVar22;
  double in_xd2 = 0;
  double dVar23;
  double in_xd4 = 0;
  double dVar24;
  double in_xd6 = 0;
  double in_xd12 = 0;
  double in_xd14 = 0;
  bool bVar25;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  uVar2 = 0xe0000000;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)in_r3);
  }
  else {
    in_xd2 = *in_r3;
  }
  if (in_FPSCR_PR == '\0') {
    dVar20 = CONCAT44D(F32HI(in_dr12) / F32LO(in_dr2),SUB84(in_dr12,0)
                             );
  }
  else {
    dVar20 = in_dr12 / in_dr2;
  }
  uVar3 = *ar6;
  if (in_FPSCR_SZ == '\0') {
    dVar10 = CONCAT44D(ar6[1],in_fr5);
    dVar14 = (double)((ulonglong)(uint)ar6[3] << 0x20);
    dVar12 = CONCAT44D(ar6[2],in_fr7);
  }
  else {
    dVar10 = *(double *)(unsigned)(ar6 + 1);
    dVar14 = *(double *)(unsigned)(ar6 + 5);
    dVar12 = *(double *)(unsigned)(ar6 + 3);
  }
  do {
    uVar4 = *(undefined4 *)(unsigned)unaff_r12;
    uVar1 = (ulonglong)in_dr2 >> 0x20;
    dVar8 = (double)(uVar1 << 0x20);
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(unsigned)((int)unaff_r12 + 4));
      pdVar5 = unaff_r12 + 1;
    }
    else {
      in_xd14 = *(double *)(unsigned)((int)unaff_r12 + 4);
      pdVar5 = (double *)(unsigned)((int)unaff_r12 + 0xc);
    }
    if (in_FPSCR_PR == '\0') {
      bVar25 = 0.0 < SUB84(in_dr14,0);
    }
    else {
      bVar25 = dVar8 < in_dr14;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(in_dr14,0));
      dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar5 + 4));
      pdVar5 = pdVar5 + 1;
    }
    else {
      in_dr14 = *pdVar5;
      in_xd12 = pdVar5[1];
      pdVar5 = pdVar5 + 2;
    }
    fVar21 = F32LO(in_dr14);
    fVar19 = F32HI(dVar20);
    fVar22 = F32HI(dVar10);
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
      uVar13 = (undefined4)(D2U(dVar12) >> 0x20);
      dVar24 = dVar12;
      if (in_FPSCR_SZ == '\0') {
        dVar10 = CONCAT44D(fVar22,uVar13);
        dVar24 = in_xd4;
      }
      fVar22 = F32HI(in_dr14);
      if (in_FPSCR_PR == '\0') {
        dVar10 = CONCAT44D((int)(D2U(dVar10) >> 0x20),F32LO(dVar10) - fVar22);
      }
      else {
        dVar10 = dVar10 - in_dr14;
      }
      uVar16 = (undefined4)(D2U(dVar14) >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        dVar12 = CONCAT44D(uVar13,uVar16);
        dVar14 = in_xd6;
      }
      fVar19 = F32LO(dVar20);
      if (in_FPSCR_PR == '\0') {
        dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),F32LO(dVar12) - fVar19);
      }
      else {
        dVar12 = dVar12 - dVar20;
      }
      fVar9 = F32LO(dVar10);
      dVar18 = dVar24;
      if (in_FPSCR_SZ == '\0') {
        dVar8 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar9);
        dVar18 = in_xd2;
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),F32LO(dVar8) * fVar9);
      }
      else {
        dVar8 = dVar8 * dVar10;
      }
      fVar11 = F32LO(dVar12);
      fVar7 = fVar11;
      if (in_FPSCR_SZ != '\0') {
        fVar7 = F32HI(dVar14);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SQRT(fVar7 * fVar11 + F32LO(dVar8));
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),fVar7);
        dVar15 = CONCAT44D(uVar16,1.0 / fVar7);
      }
      else {
        dVar8 = SQRT(dVar8);
        dVar15 = CONCAT44D(uVar16,0x3f800000) / dVar8;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),(*(undefined1 *)(unsigned)0x8c25c68c));
      }
      else {
        dVar18 = CONCAT44D(0xf0000000,(*(undefined1 *)(unsigned)0x8c25c68c));
      }
      *(undefined4 *)(unsigned)(unaff_r14 + 0x18) = uVar3;
      uVar13 = (undefined4)(D2U(dVar10) >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        pdVar6 = (double *)(unsigned)(unaff_r14 + 0xc);
        *(undefined4 *)(unsigned)pdVar6 = uVar13;
      }
      else {
        pdVar6 = (double *)(unsigned)(unaff_r14 + 8);
        *pdVar6 = dVar10;
      }
      if (in_FPSCR_PR == '\0') {
        dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),
                                  fVar11 * F32LO(dVar15) * F32LO(dVar8));
        dVar10 = CONCAT44D(uVar13,fVar9 * F32LO(dVar15) * F32LO(dVar8));
      }
      else {
        dVar12 = dVar12 * dVar15 * dVar8;
        dVar10 = dVar10 * dVar15 * dVar8;
      }
      fVar9 = F32HI(dVar12);
      dVar23 = dVar12;
      if (in_FPSCR_SZ == '\0') {
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),fVar9);
        dVar23 = dVar18;
      }
      fVar7 = -SUB84(dVar12,0);
      dVar12 = CONCAT44D(fVar9,fVar7);
      if (in_FPSCR_PR == '\0') {
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),F32LO(dVar8) - fVar7);
      }
      else {
        dVar8 = dVar8 - dVar12;
      }
      fVar11 = F32LO(dVar10);
      dVar18 = dVar24;
      if (in_FPSCR_SZ == '\0') {
        dVar18 = CONCAT44D(fVar11,SUB84(in_dr10,0));
      }
      if (in_FPSCR_PR == '\0') {
        in_dr10 = CONCAT44D(F32HI(dVar18) + fVar11,SUB84(dVar18,0));
      }
      else {
        in_dr10 = dVar18 + dVar10;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),fVar7);
      }
      if (in_FPSCR_PR == '\0') {
        dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),F32LO(dVar15) + fVar7);
      }
      else {
        dVar15 = dVar15 + dVar12;
      }
      fVar17 = F32HI(dVar15);
      if (in_FPSCR_SZ == '\0') {
        pdVar6 = (double *)(unsigned)((int)pdVar6 + -4);
        *(int *)(unsigned)pdVar6 = SUB84(dVar8,0);
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),fVar17);
      }
      else {
        pdVar6 = pdVar6 + -1;
        *pdVar6 = dVar23;
        dVar23 = dVar15;
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),F32LO(dVar8) - fVar11);
      }
      else {
        dVar8 = dVar8 - dVar10;
      }
      if (in_FPSCR_SZ == '\0') {
        pdVar6 = (double *)(unsigned)((int)pdVar6 + -4);
        *(int *)(unsigned)pdVar6 = SUB84(dVar8,0);
      }
      else {
        pdVar6 = pdVar6 + -1;
        *pdVar6 = dVar23;
      }
      *(undefined4 *)(unsigned)((int)pdVar6 + -4) = uVar2;
      dVar18 = in_dr14;
      if (in_FPSCR_SZ == '\0') {
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),fVar22);
        dVar18 = dVar23;
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),F32LO(dVar8) - fVar7);
      }
      else {
        dVar8 = dVar8 - dVar12;
      }
      *(undefined4 *)(unsigned)((int)pdVar6 + 0x34) = uVar4;
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(pdVar6 + 5) = fVar21;
        pdVar6 = (double *)(unsigned)((int)pdVar6 + 0x24);
        *(int *)(unsigned)pdVar6 = SUB84(dVar8,0);
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),fVar19);
      }
      else {
        *(double *)(unsigned)((int)pdVar6 + 0x24) = in_xd14;
        pdVar6 = (double *)(unsigned)((int)pdVar6 + 0x1c);
        *pdVar6 = dVar18;
        dVar18 = in_xd12;
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),F32LO(dVar8) - fVar11);
      }
      else {
        dVar8 = dVar8 - dVar10;
      }
      if (in_FPSCR_SZ == '\0') {
        pdVar6 = (double *)(unsigned)((int)pdVar6 + -4);
        *(int *)(unsigned)pdVar6 = SUB84(dVar8,0);
      }
      else {
        pdVar6 = pdVar6 + -1;
        *pdVar6 = dVar18;
      }
      *(undefined4 *)(unsigned)((int)pdVar6 + -4) = uVar2;
      if (in_FPSCR_PR == '\0') {
        dVar12 = CONCAT44D(fVar9 + F32LO(dVar15),fVar7);
      }
      else {
        dVar12 = dVar12 + dVar15;
      }
      *(undefined4 *)(unsigned)((int)pdVar6 + 0x34) = uVar3;
      fVar9 = F32HI(in_dr10);
      if (in_FPSCR_PR == '\0') {
        dVar15 = CONCAT44D(fVar17 + fVar9,SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 + in_dr10;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(pdVar6 + 5) = (int)(D2U(dVar10) >> 0x20);
        *(int *)(unsigned)((int)pdVar6 + 0x24) = (int)(D2U(dVar12) >> 0x20);
        pdVar6 = pdVar6 + 4;
        *(int *)(unsigned)pdVar6 = (int)(D2U(dVar15) >> 0x20);
      }
      else {
        *(double *)(unsigned)((int)pdVar6 + 0x24) = dVar10;
        *(double *)(unsigned)((int)pdVar6 + 0x1c) = dVar12;
        pdVar6 = (double *)(unsigned)((int)pdVar6 + 0x14);
        *pdVar6 = dVar15;
      }
      *(undefined4 *)(unsigned)((int)pdVar6 + -4) = uVar2;
      uVar3 = 0xf0000000;
      in_xd2 = in_dr14;
      if (in_FPSCR_SZ == '\0') {
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),fVar22);
        in_xd2 = dVar18;
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),F32LO(dVar8) + F32LO(dVar15));
      }
      else {
        dVar8 = dVar8 + dVar15;
      }
      *(undefined4 *)(unsigned)((int)pdVar6 + 0x34) = uVar4;
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(pdVar6 + 5) = fVar21;
        pdVar6 = (double *)(unsigned)((int)pdVar6 + 0x24);
        *(int *)(unsigned)pdVar6 = SUB84(dVar8,0);
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),fVar19);
      }
      else {
        *(double *)(unsigned)((int)pdVar6 + 0x24) = in_xd14;
        pdVar6 = (double *)(unsigned)((int)pdVar6 + 0x1c);
        *pdVar6 = in_xd2;
        in_xd2 = in_xd12;
      }
      if (in_FPSCR_PR == '\0') {
        in_dr2 = CONCAT44D((int)(D2U(dVar8) >> 0x20),F32LO(dVar8) + fVar9);
      }
      else {
        in_dr2 = dVar8 + in_dr10;
      }
      if (in_FPSCR_SZ == '\0') {
        pdVar6 = (double *)(unsigned)((int)pdVar6 + -4);
        *(int *)(unsigned)pdVar6 = SUB84(in_dr2,0);
      }
      else {
        pdVar6 = pdVar6 + -1;
        *pdVar6 = in_xd2;
      }
      *(undefined4 *)(unsigned)((int)pdVar6 + -4) = uVar3;
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
        unaff_r14 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25c4d2(unaff_r9,unaff_r12,unaff_r14,ar7));
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
      dVar8 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),SUB84(dVar12,0));
    }
    unaff_r8 = unaff_r8 + -1;
    dVar14 = in_xd12;
    dVar12 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)((longlong)dVar20 << 0x20);
      dVar12 = CONCAT44D(SUB84(in_dr14,0),SUB84(dVar10,0));
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
