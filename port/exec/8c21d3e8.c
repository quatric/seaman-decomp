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
undefined4 FUN_8c21d3e8_def(int ar4,int ar5,int ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c21d3e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  float fVar10;
  double in_dr0 = 0;
  double dVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 in_fr5 = 0;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  double in_dr6 = 0;
  double dVar25;
  float fVar26;
  undefined4 in_fr9 = 0;
  double dVar27;
  double in_dr10 = 0;
  uint uVar28;
  undefined4 in_fr13 = 0;
  double dVar29;
  double in_dr14 = 0;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double in_xd8 = 0;
  double in_xd10 = 0;
  double in_xd12 = 0;
  double in_xd14 = 0;
  bool bVar30;
  undefined4 in_PR = 0;
  char cVar31;
  char cVar32;
  float fVar20;
  
  cVar32 = '\0';
  cVar31 = '\0';
  iVar2 = (vsp = ((unsigned long)(fr0_ - 76)), libgcc_divide_helper_0106dc(ar5 + ar6 + -1,ar6,vr6,vr7));
  piVar6 = (int *)(unsigned)(iVar2 * 0x10 + ar4);
  piVar9 = (int *)(unsigned)(ar5 * 0x10 + ar4);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 76)), libgcc_divide_helper_0106dc(ar5 + 1,ar6,vr6,vr7));
  piVar8 = (int *)(unsigned)(iVar2 * 0x10 + ar4);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 76)), libgcc_divide_helper_0106dc(ar5 + 2,ar6,vr6,vr7));
  piVar7 = (int *)(unsigned)(iVar2 * 0x10 + ar4);
  fVar12 = (float)*piVar8;
  if (*piVar8 < 0) {
    if (cVar31 == '\0') {
      fVar12 = fVar12 + 4.2949673e+09;
    }
    else {
      fVar12 = SUB84(CONCAT44D(0x4f800000,fVar12) + CONCAT44D(0x4f800000,fVar12),0);
    }
  }
  iVar2 = *piVar9;
  if (cVar31 == '\0') {
    dVar14 = CONCAT44D((float)iVar2,fVar12);
  }
  else {
    dVar14 = (double)iVar2;
  }
  if (iVar2 < 0) {
    if (cVar32 == '\0') {
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar31 == '\0') {
      dVar14 = CONCAT44D(F32HI(dVar14) + F32LO(in_dr0),SUB84(dVar14,0)
                               );
    }
    else {
      dVar14 = dVar14 + in_dr0;
    }
  }
  dVar15 = in_xd2;
  if (cVar32 == '\0') {
    in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),SUB84(dVar14,0));
    dVar15 = in_xd6;
  }
  fVar12 = F32HI(dVar14);
  if (cVar31 == '\0') {
    in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),F32LO(in_dr6) - fVar12);
  }
  else {
    in_dr6 = in_dr6 - dVar14;
  }
  if (cVar31 == '\0') {
    bVar30 = 0.0 < SUB84(in_dr6,0);
  }
  else {
    bVar30 = (double)((ulonglong)(uint)fVar12 << 0x20) < in_dr6;
  }
  dVar27 = CONCAT44D(0x3f800000,in_fr9);
  dVar14 = dVar15;
  if ((!bVar30) && (dVar14 = dVar27, cVar32 == '\0')) {
    in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),0x3f800000);
    dVar14 = dVar15;
  }
  fVar12 = (float)*piVar7;
  if (*piVar7 < 0) {
    if (cVar31 == '\0') {
      fVar12 = fVar12 + 4.2949673e+09;
    }
    else {
      fVar12 = SUB84(CONCAT44D(0x4f800000,fVar12) + CONCAT44D(0x4f800000,fVar12),0);
    }
  }
  iVar2 = *piVar8;
  if (cVar31 == '\0') {
    dVar15 = CONCAT44D((float)iVar2,fVar12);
  }
  else {
    dVar15 = (double)iVar2;
  }
  if (iVar2 < 0) {
    if (cVar32 == '\0') {
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar31 == '\0') {
      dVar15 = CONCAT44D(F32HI(dVar15) + F32LO(in_dr0),SUB84(dVar15,0)
                               );
    }
    else {
      dVar15 = dVar15 + in_dr0;
    }
  }
  dVar16 = in_xd2;
  if (cVar32 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),SUB84(dVar15,0));
    dVar16 = in_xd14;
  }
  fVar12 = F32HI(dVar15);
  if (cVar31 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),F32LO(in_dr14) - fVar12);
  }
  else {
    in_dr14 = in_dr14 - dVar15;
  }
  if (cVar31 == '\0') {
    bVar30 = 0.0 < SUB84(in_dr14,0);
  }
  else {
    bVar30 = (double)((ulonglong)(uint)fVar12 << 0x20) < in_dr14;
  }
  dVar15 = dVar16;
  if ((!bVar30) && (dVar15 = dVar27, cVar32 == '\0')) {
    in_dr14 = 5.26354424712089e-315;
    dVar15 = dVar16;
  }
  fVar12 = (float)*piVar9;
  if (*piVar9 < 0) {
    if (cVar31 == '\0') {
      fVar12 = fVar12 + 4.2949673e+09;
    }
    else {
      fVar12 = SUB84(CONCAT44D(0x4f800000,fVar12) + CONCAT44D(0x4f800000,fVar12),0);
    }
  }
  iVar2 = *piVar6;
  if (cVar31 == '\0') {
    dVar16 = CONCAT44D((float)iVar2,fVar12);
  }
  else {
    dVar16 = (double)iVar2;
  }
  if (iVar2 < 0) {
    if (cVar32 == '\0') {
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar31 == '\0') {
      dVar16 = CONCAT44D(F32HI(dVar16) + F32LO(in_dr0),SUB84(dVar16,0)
                               );
    }
    else {
      dVar16 = dVar16 + in_dr0;
    }
  }
  dVar17 = in_xd2;
  if (cVar32 == '\0') {
    in_dr10 = CONCAT44D((int)((ulonglong)in_dr10 >> 0x20),SUB84(dVar16,0));
    dVar17 = in_xd10;
  }
  fVar12 = F32HI(dVar16);
  if (cVar31 == '\0') {
    in_dr10 = CONCAT44D((int)((ulonglong)in_dr10 >> 0x20),F32LO(in_dr10) - fVar12);
  }
  else {
    in_dr10 = in_dr10 - dVar16;
  }
  if (cVar31 == '\0') {
    bVar30 = 0.0 < SUB84(in_dr10,0);
  }
  else {
    bVar30 = (double)((ulonglong)(uint)fVar12 << 0x20) < in_dr10;
  }
  dVar16 = dVar17;
  if ((!bVar30) && (dVar16 = dVar27, cVar32 == '\0')) {
    in_dr10 = 5.26354424712089e-315;
    dVar16 = dVar17;
  }
  fVar12 = (float)*piVar9;
  if (*piVar9 < 0) {
    if (cVar31 == '\0') {
      fVar12 = fVar12 + 4.2949673e+09;
    }
    else {
      fVar12 = SUB84(CONCAT44D(0x4f800000,fVar12) + CONCAT44D(0x4f800000,fVar12),0);
    }
  }
  dVar17 = dVar15;
  if (cVar32 == '\0') {
    dVar17 = CONCAT44D(SUB84(in_dr14,0),fVar12);
  }
  fVar12 = F32LO(in_dr6);
  if (cVar31 == '\0') {
    dVar17 = CONCAT44D(F32HI(dVar17) + fVar12,SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 + in_dr6;
  }
  if (cVar32 == '\0') {
    dVar11 = CONCAT44D(fVar12,(*(undefined4 *)(unsigned)(unsigned)0x8c4aad54));
  }
  else {
    in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad58),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad54));
    dVar11 = dVar14;
  }
  if (cVar31 == '\0') {
    dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),F32LO(dVar11) - F32LO(dVar17));
  }
  else {
    dVar11 = dVar11 - dVar17;
  }
  if (cVar32 == '\0') {
    in_fr5 = 0x3f800000;
    dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),0x3eaaaa3b);
    dVar27 = CONCAT44D(0x3f800000,fVar12);
  }
  else {
    in_xd2 = 32.00000747044802;
    in_xd8 = dVar14;
    in_xd4 = dVar27;
  }
  if (cVar31 == '\0') {
    dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),F32LO(dVar27) * F32LO(dVar17));
  }
  else {
    dVar27 = dVar27 * dVar17;
  }
  dVar22 = in_xd0;
  if (cVar32 == '\0') {
    dVar22 = CONCAT44D(SUB84(dVar11,0),in_fr5);
  }
  if (cVar31 == '\0') {
    dVar22 = CONCAT44D(F32HI(dVar22) / fVar12,SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 / in_dr6;
  }
  if (cVar32 == '\0') {
    dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),fVar12);
    dVar14 = in_xd0;
  }
  if (cVar31 == '\0') {
    dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),
                              F32LO(dVar11) / F32HI(dVar17));
  }
  else {
    dVar11 = dVar11 / dVar17;
  }
  dVar18 = dVar16;
  if (cVar32 == '\0') {
    dVar18 = CONCAT44D(SUB84(in_dr10,0),SUB84(dVar17,0));
  }
  if (cVar31 == '\0') {
    fVar20 = F32HI(dVar18) + fVar12;
    dVar18 = CONCAT44D(fVar20,SUB84(dVar18,0));
    dVar11 = CONCAT44D(F32HI(dVar11) / fVar20,SUB84(dVar11,0));
    fVar23 = F32HI(dVar22);
    dVar22 = CONCAT44D(fVar23,F32LO(dVar22) - fVar23);
  }
  else {
    dVar18 = dVar18 + in_dr6;
    fVar20 = F32HI(dVar18);
    dVar11 = dVar11 / dVar18;
    dVar22 = dVar22 - dVar22;
  }
  fVar23 = F32HI(dVar22);
  dVar17 = dVar22;
  if (cVar32 == '\0') {
    dVar17 = CONCAT44D(fVar23,SUB84(in_dr10,0));
  }
  if (cVar31 == '\0') {
    dVar17 = CONCAT44D(F32HI(dVar17) * fVar23,SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 * dVar22;
  }
  fVar21 = F32LO(dVar22);
  (*(float *)(fr0_ - 0x38)) = SUB84(dVar11,0);
  if (cVar32 == '\0') {
    dVar25 = CONCAT44D(fVar21,fVar12);
    dVar29 = CONCAT44D(fVar23,in_fr13);
    (*(float *)(fr0_ - 0x34)) = (*(float *)(fr0_ - 0x38));
  }
  else {
    (*(float *)(fr0_ - 0x34)) = SUB84(dVar14,0);
    (*(float *)(fr0_ - 0x30)) = F32HI(dVar14);
    dVar25 = in_xd4;
    dVar29 = dVar22;
  }
  if (cVar31 == '\0') {
    dVar25 = CONCAT44D(F32HI(dVar25) * fVar21,SUB84(dVar25,0));
  }
  else {
    dVar25 = dVar25 * dVar22;
  }
  if (cVar32 == '\0') {
    dVar18 = CONCAT44D(fVar20,fVar21);
    in_xd4 = in_xd2;
  }
  fVar12 = F32HI(dVar17);
  if (cVar31 == '\0') {
    dVar29 = CONCAT44D(F32HI(dVar29) * fVar12,SUB84(dVar29,0));
  }
  else {
    dVar29 = dVar29 * dVar17;
  }
  fVar10 = F32HI(dVar11);
  fVar20 = fVar10;
  if (cVar32 == '\0') {
    (*(float *)(fr0_ - 0x38)) = fVar10;
    fVar20 = (*(float *)(fr0_ - 0x34));
  }
  (*(float *)(fr0_ - 0x34)) = fVar20;
  fVar20 = F32HI(dVar25);
  if (cVar31 == '\0') {
    fVar13 = F32LO(dVar18) * fVar20;
    dVar22 = CONCAT44D(fVar23 * fVar20,fVar21);
  }
  else {
    fVar13 = SUB84(dVar18 * dVar25,0);
    dVar22 = dVar22 * dVar25;
  }
  (*(float *)(fr0_ - 0x3c)) = fVar13;
  if (cVar32 != '\0') {
    (*(float *)(fr0_ - 0x3c)) = SUB84(in_xd4,0);
    (*(float *)(fr0_ - 0x38)) = F32HI(in_xd4);
  }
  if (cVar31 == '\0') {
    dVar17 = CONCAT44D(fVar12 * F32LO(dVar22),SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 * dVar22;
  }
  fVar12 = F32HI(dVar27);
  if (cVar32 == '\0') {
    dVar18 = CONCAT44D(0x40400000,SUB84(in_dr14,0));
    dVar19 = CONCAT44D(fVar12,fVar13);
  }
  else {
    dVar18 = 1.038459620262114e+34;
    dVar19 = dVar27;
  }
  fVar20 = F32HI(dVar18);
  if (cVar31 == '\0') {
    dVar19 = CONCAT44D(F32HI(dVar19) - fVar10,SUB84(dVar19,0));
    fVar23 = F32HI(dVar22) * fVar20;
    dVar17 = CONCAT44D(F32HI(dVar17) * fVar20,SUB84(dVar17,0));
  }
  else {
    dVar19 = dVar19 - dVar11;
    fVar23 = (float)((ulonglong)(dVar22 * dVar18) >> 0x20);
    dVar17 = dVar17 * dVar18;
  }
  uVar4 = 0;
  (*(float *)(fr0_ - 0x40)) = F32HI(dVar17);
  fVar20 = F32LO(dVar19);
  (*(float *)(fr0_ - 0x44)) = F32HI(dVar19);
  if (cVar32 == '\0') {
    dVar25 = CONCAT44D(0x47000000,SUB84(dVar25,0));
    dVar22 = 2.658457962370374e+36;
    (*(float *)(fr0_ - 0x48)) = (*(float *)(fr0_ - 0x44));
    (*(float *)(fr0_ - 0x44)) = (*(float *)(fr0_ - 0x40));
    (*(float *)(fr0_ - 0x40)) = fVar23;
  }
  else {
    dVar25 = -1.0384596463749117e+34;
    dVar22 = -2.633278440589894e-265;
    (*(float *)(fr0_ - 0x48)) = fVar20;
    (*(float *)(fr0_ - 0x3c)) = fVar23;
  }
  fVar23 = (*(float *)(fr0_ - 0x48));
  fVar26 = F32HI(dVar25);
  fVar21 = F32LO(dVar22);
  fVar13 = F32HI(dVar22);
  fVar24 = F32LO(dVar25);
  if (ar5 == ar6 + -2) {
    if (cVar32 == '\0') {
      dVar14 = CONCAT44D((*(float *)(fr0_ - 0x38)),fVar20);
    }
    else {
      dVar14 = CONCAT44D((*(float *)(fr0_ - 0x34)),(*(float *)(fr0_ - 0x38)));
    }
    if (cVar31 == '\0') {
      dVar14 = CONCAT44D(F32HI(dVar14) + fVar12,SUB84(dVar14,0));
    }
    else {
      dVar14 = dVar14 + dVar27;
    }
    uVar3 = (undefined4)(D2U(dVar14) >> 0x20);
    (*(undefined4 *)(fr0_ - 0x28)) = uVar3;
    (*(undefined4 *)(fr0_ - 0x24)) = in_PR;
    if (cVar32 != '\0') {
      (*(undefined4 *)(fr0_ - 0x28)) = SUB84(dVar14,0);
      (*(undefined4 *)(fr0_ - 0x24)) = uVar3;
    }
    do {
      iVar2 = *(int *)(unsigned)((int)piVar9 + uVar4 + 4);
      dVar14 = in_xd4;
      if (cVar32 == '\0') {
        dVar14 = CONCAT44D((float)iVar2,SUB84(dVar17,0));
      }
      dVar16 = in_xd4;
      if (cVar32 == '\0') {
        dVar16 = CONCAT44D((float)*(int *)(unsigned)((int)piVar8 + uVar4 + 4),SUB84(dVar27,0));
      }
      fVar12 = F32HI(dVar14);
      if (cVar31 == '\0') {
        dVar16 = CONCAT44D(F32HI(dVar16) - fVar12,SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 - dVar14;
      }
      fVar20 = F32HI(dVar16);
      if (cVar31 == '\0') {
        bVar30 = fVar26 < fVar20;
      }
      else {
        bVar30 = dVar25 < dVar16;
      }
      dVar27 = in_xd4;
      if (cVar32 == '\0') {
        dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),
                                  (float)(iVar2 - *(int *)(unsigned)((int)piVar6 + uVar4 + 4)));
        dVar27 = dVar15;
      }
      if (bVar30) {
        if (cVar31 == '\0') {
          dVar16 = CONCAT44D(fVar20 - fVar13,SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar22;
        }
      }
      else {
        if (cVar31 == '\0') {
          bVar30 = fVar21 < fVar20;
        }
        else {
          bVar30 = dVar22 < dVar16;
        }
        if (!bVar30) {
          if (cVar31 == '\0') {
            dVar16 = CONCAT44D(fVar20 + fVar13,SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 + dVar22;
          }
        }
      }
      if (cVar31 == '\0') {
        bVar30 = fVar26 < SUB84(dVar18,0);
      }
      else {
        bVar30 = dVar25 < dVar18;
      }
      fVar20 = F32HI(dVar16);
      dVar15 = dVar16;
      if (cVar32 == '\0') {
        dVar15 = CONCAT44D(fVar20,SUB84(dVar18,0));
      }
      if (cVar31 == '\0') {
        dVar15 = CONCAT44D(F32HI(dVar15) + fVar12,SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 + dVar14;
      }
      uVar3 = (undefined4)(D2U(dVar15) >> 0x20);
      fVar23 = F32LO(dVar15);
      if (bVar30) {
        if (cVar31 == '\0') {
          dVar15 = CONCAT44D(uVar3,fVar23 - fVar13);
        }
        else {
          dVar15 = dVar15 - dVar22;
        }
      }
      else {
        if (cVar31 == '\0') {
          bVar30 = fVar21 < fVar23;
        }
        else {
          bVar30 = dVar22 < dVar15;
        }
        if (!bVar30) {
          if (cVar31 == '\0') {
            dVar15 = CONCAT44D(uVar3,fVar23 + fVar13);
          }
          else {
            dVar15 = dVar15 + dVar22;
          }
        }
      }
      if (cVar32 == '\0') {
        dVar17 = CONCAT44D((*(float *)(fr0_ - 0x38)),(*(float *)(fr0_ - 0x48)));
      }
      else {
        in_xd4 = CONCAT44D((*(float *)(fr0_ - 0x44)),(*(float *)(fr0_ - 0x48)));
        dVar17 = CONCAT44D((*(float *)(fr0_ - 0x34)),(*(float *)(fr0_ - 0x38)));
      }
      if (cVar31 == '\0') {
        dVar17 = CONCAT44D(F32HI(dVar17) * F32LO(dVar15),
                                  (F32LO(dVar17) * fVar20) / fVar24);
      }
      else {
        dVar17 = (dVar17 * dVar16 * dVar15) / dVar25;
      }
      if (cVar32 == '\0') {
        dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),(int)(D2U(dVar17) >> 0x20))
        ;
      }
      if (cVar31 == '\0') {
        dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),F32LO(dVar29) / F32LO(dVar14)
                                 );
      }
      else {
        dVar29 = dVar29 / dVar14;
      }
      if (cVar32 == '\0') {
        dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),SUB84(dVar17,0));
        fVar23 = F32HI(dVar27);
        dVar17 = CONCAT44D(SUB84(dVar16,0),(*(undefined4 *)(fr0_ - 0x28)));
        dVar11 = in_xd4;
      }
      else {
        fVar23 = F32HI(in_xd4);
        dVar11 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
        dVar17 = in_xd8;
        dVar27 = in_xd4;
      }
      if (cVar31 == '\0') {
        dVar18 = CONCAT44D((int)(D2U(dVar15) >> 0x20),F32LO(dVar15) + F32LO(dVar29)
                                 );
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),F32LO(dVar17) * fVar20);
      }
      else {
        dVar18 = dVar15 + dVar29;
        dVar17 = dVar17 * dVar16;
      }
      if (cVar32 == '\0') {
        fVar23 = F32LO(dVar18);
      }
      if (cVar31 == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),F32LO(dVar17) / fVar24);
      }
      else {
        dVar17 = dVar17 / dVar25;
      }
      dVar19 = dVar11;
      if (cVar32 == '\0') {
        dVar19 = CONCAT44D(SUB84(dVar17,0),SUB84(dVar16,0));
      }
      if (cVar31 == '\0') {
        dVar19 = CONCAT44D(F32HI(dVar19) - F32LO(dVar29),
                                  SUB84(dVar19,0));
      }
      else {
        dVar19 = dVar19 - dVar29;
      }
      dVar15 = dVar14;
      if (cVar32 == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),fVar12);
        dVar15 = dVar11;
      }
      if (cVar31 == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                  fVar23 * F32LO(dVar19) + F32LO(dVar17));
      }
      dVar16 = dVar14;
      if (cVar32 == '\0') {
        dVar16 = (double)((ulonglong)(uint)fVar12 << 0x20);
      }
      if (cVar31 == '\0') {
        dVar17 = CONCAT44D(F32HI(dVar17) *
                                  F32HI(dVar19),SUB84(dVar17,0));
      }
      else {
        dVar17 = dVar17 * dVar19;
      }
      uVar3 = (undefined4)(D2U(dVar18) >> 0x20);
      if (cVar32 == '\0') {
        dVar18 = CONCAT44D(uVar3,SUB84(dVar17,0));
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),(*(float *)(fr0_ - 0x40)));
        in_xd4 = dVar15;
        dVar15 = dVar27;
        dVar27 = CONCAT44D(uVar3,SUB84(dVar19,0));
      }
      else {
        in_xd4 = CONCAT44D((*(float *)(fr0_ - 0x3c)),(*(float *)(fr0_ - 0x40)));
        dVar27 = dVar18;
      }
      if (cVar31 == '\0') {
        fVar12 = F32HI(dVar17);
        dVar17 = CONCAT44D(fVar12,F32LO(dVar17) * F32LO(dVar18));
        dVar27 = CONCAT44D(F32HI(dVar27) - fVar12,SUB84(dVar27,0));
      }
      else {
        dVar17 = dVar17 * dVar18;
        dVar27 = dVar27 - dVar17;
      }
      fVar12 = (*(float *)(fr0_ - 0x3c));
      fVar20 = (*(float *)(fr0_ - 0x38));
      if (cVar32 == '\0') {
        fVar12 = F32LO(dVar17);
        fVar20 = (*(float *)(fr0_ - 0x3c));
      }
      if (cVar31 == '\0') {
        fVar12 = F32HI(dVar16) * fVar20 + fVar12;
      }
      uVar3 = 8;
      if (cVar32 == '\0') {
        dVar17 = CONCAT44D((*(float *)(fr0_ - 0x44)),fVar12);
        dVar16 = (double)(D2U(dVar27) & 0xffffffff00000000);
      }
      else {
        dVar17 = CONCAT44D((*(float *)(fr0_ - 0x40)),(*(float *)(fr0_ - 0x44)));
        dVar16 = dVar27;
      }
      uVar4 = uVar4 + 4;
      if (cVar31 == '\0') {
        iVar2 = (int)(F32HI(dVar18) * F32HI(dVar29) +
                     F32HI(dVar16) * F32HI(dVar17) +
                     SUB84(dVar17,0));
      }
      else {
        iVar2 = (int)dVar17;
      }
      *ar7 = iVar2;
      ar7 = ar7 + 1;
      dVar17 = dVar14;
    } while (uVar4 < 0xc);
  }
  else {
    if (cVar32 == '\0') {
      dVar11 = CONCAT44D(fVar10,fVar12);
      dVar15 = CONCAT44D((*(float *)(fr0_ - 0x34)),fVar20);
    }
    else {
      dVar15 = CONCAT44D((*(float *)(fr0_ - 0x30)),(*(float *)(fr0_ - 0x34)));
      dVar14 = dVar27;
    }
    fVar20 = F32HI(dVar15);
    if (cVar31 == '\0') {
      fVar10 = F32LO(dVar11) - fVar20;
    }
    else {
      fVar10 = SUB84(dVar11 - dVar15,0);
    }
    (*(float *)(fr0_ - 0x48)) = F32HI(dVar14);
    fVar1 = (*(float *)(fr0_ - 0x48));
    if (cVar32 == '\0') {
      (*(float *)(fr0_ - 0x48)) = fVar23;
    }
    (*(float *)(fr0_ - 0x4c)) = SUB84(dVar14,0);
    if (ar5 == 0) {
      if (cVar31 == '\0') {
        dVar15 = CONCAT44D(fVar20 + fVar12,SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 + dVar27;
      }
      uVar3 = (undefined4)(D2U(dVar15) >> 0x20);
      (*(float *)(fr0_ - 0x2c)) = (float)uVar3;
      if (cVar32 != '\0') {
        (*(float *)(fr0_ - 0x2c)) = SUB84(dVar15,0);
        fVar10 = (*(float *)(fr0_ - 0x4c));
        (*(float *)(fr0_ - 0x48)) = fVar1;
        (*(undefined4 *)(fr0_ - 0x28)) = uVar3;
      }
      do {
        (*(float *)(fr0_ - 0x4c)) = fVar10;
        iVar2 = *(int *)(unsigned)((int)piVar8 + uVar4 + 4);
        dVar14 = in_xd4;
        if (cVar32 == '\0') {
          dVar14 = CONCAT44D((float)*(int *)(unsigned)((int)piVar9 + uVar4 + 4),SUB84(dVar17,0));
        }
        dVar15 = in_xd4;
        if (cVar32 == '\0') {
          dVar15 = CONCAT44D((float)iVar2,SUB84(dVar27,0));
        }
        fVar12 = F32HI(dVar14);
        if (cVar31 == '\0') {
          dVar15 = CONCAT44D(F32HI(dVar15) - fVar12,SUB84(dVar15,0));
        }
        else {
          dVar15 = dVar15 - dVar14;
        }
        fVar20 = F32HI(dVar15);
        if (cVar31 == '\0') {
          bVar30 = fVar26 < fVar20;
        }
        else {
          bVar30 = dVar25 < dVar15;
        }
        dVar27 = in_xd4;
        if (cVar32 == '\0') {
          dVar14 = CONCAT44D(fVar12,(float)(*(int *)(unsigned)((int)piVar7 + uVar4 + 4) - iVar2));
          dVar27 = dVar16;
        }
        if (bVar30) {
          if (cVar31 == '\0') {
            dVar15 = CONCAT44D(fVar20 - fVar13,SUB84(dVar15,0));
          }
          else {
            dVar15 = dVar15 - dVar22;
          }
        }
        else {
          if (cVar31 == '\0') {
            bVar30 = fVar21 < fVar20;
          }
          else {
            bVar30 = dVar22 < dVar15;
          }
          if (!bVar30) {
            if (cVar31 == '\0') {
              dVar15 = CONCAT44D(fVar20 + fVar13,SUB84(dVar15,0));
            }
            else {
              dVar15 = dVar15 + dVar22;
            }
          }
        }
        fVar12 = F32LO(dVar14);
        if (cVar31 == '\0') {
          bVar30 = fVar26 < fVar12;
        }
        else {
          bVar30 = dVar25 < dVar14;
        }
        fVar20 = F32HI(dVar15);
        dVar16 = dVar15;
        if (cVar32 == '\0') {
          dVar16 = CONCAT44D(fVar20,SUB84(dVar18,0));
        }
        fVar23 = F32HI(dVar14);
        if (cVar31 == '\0') {
          dVar18 = CONCAT44D(F32HI(dVar16) + fVar23,SUB84(dVar16,0));
        }
        else {
          dVar18 = dVar16 + dVar14;
        }
        if (bVar30) {
          if (cVar31 == '\0') {
            dVar14 = CONCAT44D(fVar23,fVar12 - fVar13);
          }
          else {
            dVar14 = dVar14 - dVar22;
          }
        }
        else {
          if (cVar31 == '\0') {
            bVar30 = fVar21 < fVar12;
          }
          else {
            bVar30 = dVar22 < dVar14;
          }
          if (!bVar30) {
            if (cVar31 == '\0') {
              dVar14 = CONCAT44D(fVar23,fVar12 + fVar13);
            }
            else {
              dVar14 = dVar14 + dVar22;
            }
          }
        }
        if (cVar32 == '\0') {
          dVar16 = CONCAT44D((*(float *)(fr0_ - 0x34)),(*(float *)(fr0_ - 0x2c)));
        }
        else {
          in_xd4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
          dVar16 = CONCAT44D((*(float *)(fr0_ - 0x30)),(*(float *)(fr0_ - 0x34)));
        }
        if (cVar31 == '\0') {
          dVar16 = CONCAT44D(F32HI(dVar16) * F32LO(dVar14),
                                    (F32LO(dVar16) * fVar20) / fVar24);
        }
        else {
          dVar16 = (dVar16 * dVar15 * dVar14) / dVar25;
        }
        if (cVar32 == '\0') {
          dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                    (int)(D2U(dVar16) >> 0x20));
        }
        if (cVar31 == '\0') {
          dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                    F32LO(dVar29) / F32LO(dVar18));
        }
        else {
          dVar29 = dVar29 / dVar18;
        }
        if (cVar32 == '\0') {
          dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),SUB84(dVar16,0));
          fVar12 = F32HI(dVar27);
          dVar11 = CONCAT44D(SUB84(dVar15,0),(*(float *)(fr0_ - 0x4c)));
          dVar19 = in_xd4;
        }
        else {
          fVar12 = F32HI(in_xd4);
          dVar19 = CONCAT44D((*(float *)(fr0_ - 0x48)),(*(float *)(fr0_ - 0x4c)));
          dVar11 = in_xd8;
          dVar27 = in_xd4;
        }
        if (cVar31 == '\0') {
          dVar17 = CONCAT44D((int)(D2U(dVar14) >> 0x20),
                                    F32LO(dVar14) - F32LO(dVar29));
          dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),F32LO(dVar11) * fVar20);
        }
        else {
          dVar17 = dVar14 - dVar29;
          dVar11 = dVar11 * dVar15;
        }
        if (cVar32 == '\0') {
          fVar12 = F32LO(dVar17);
        }
        if (cVar31 == '\0') {
          dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),F32LO(dVar11) / fVar24);
        }
        else {
          dVar11 = dVar11 / dVar25;
        }
        dVar14 = dVar19;
        if (cVar32 == '\0') {
          dVar14 = CONCAT44D(SUB84(dVar11,0),SUB84(dVar15,0));
        }
        if (cVar31 == '\0') {
          dVar14 = CONCAT44D(F32HI(dVar14) + F32LO(dVar29),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 + dVar29;
        }
        uVar28 = (uint)(D2U(dVar17) >> 0x20);
        dVar16 = dVar17;
        if (cVar32 == '\0') {
          dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),uVar28);
          dVar16 = dVar19;
        }
        if (cVar31 == '\0') {
          dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),
                                    fVar12 * F32LO(dVar14) + F32LO(dVar11));
        }
        dVar15 = dVar17;
        if (cVar32 == '\0') {
          dVar15 = (double)((ulonglong)uVar28 << 0x20);
        }
        if (cVar31 == '\0') {
          dVar11 = CONCAT44D(F32HI(dVar11) *
                                    F32HI(dVar14),SUB84(dVar11,0));
        }
        else {
          dVar11 = dVar11 * dVar14;
        }
        fVar12 = F32HI(dVar18);
        if (cVar32 == '\0') {
          dVar17 = CONCAT44D(uVar28,SUB84(dVar11,0));
          dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),(*(float *)(fr0_ - 0x40)));
          in_xd4 = dVar16;
          dVar16 = dVar27;
          dVar27 = CONCAT44D(fVar12,SUB84(dVar14,0));
        }
        else {
          in_xd4 = CONCAT44D((*(float *)(fr0_ - 0x3c)),(*(float *)(fr0_ - 0x40)));
          dVar27 = dVar18;
        }
        if (cVar31 == '\0') {
          fVar20 = F32HI(dVar11);
          dVar11 = CONCAT44D(fVar20,F32LO(dVar11) * F32LO(dVar17));
          dVar27 = CONCAT44D(F32HI(dVar27) - fVar20,SUB84(dVar27,0));
        }
        else {
          dVar11 = dVar11 * dVar17;
          dVar27 = dVar27 - dVar11;
        }
        fVar20 = (*(float *)(fr0_ - 0x3c));
        fVar23 = (*(float *)(fr0_ - 0x38));
        if (cVar32 == '\0') {
          fVar20 = F32LO(dVar11);
          fVar23 = (*(float *)(fr0_ - 0x3c));
        }
        if (cVar31 == '\0') {
          fVar20 = F32HI(dVar15) * fVar23 + fVar20;
        }
        dVar14 = dVar27;
        if (cVar32 == '\0') {
          dVar14 = (double)(D2U(dVar27) & 0xffffffff00000000);
        }
        uVar3 = 8;
        if (cVar32 == '\0') {
          dVar15 = CONCAT44D((*(float *)(fr0_ - 0x44)),fVar20);
        }
        else {
          dVar15 = CONCAT44D((*(float *)(fr0_ - 0x40)),(*(float *)(fr0_ - 0x44)));
        }
        uVar4 = uVar4 + 4;
        if (cVar31 == '\0') {
          iVar2 = (int)(fVar12 * F32HI(dVar29) +
                       F32HI(dVar14) * F32HI(dVar15) +
                       SUB84(dVar15,0));
        }
        else {
          iVar2 = (int)dVar15;
        }
        *ar7 = iVar2;
        ar7 = ar7 + 1;
        fVar10 = (*(float *)(fr0_ - 0x4c));
      } while (uVar4 < 0xc);
    }
    else {
      if (cVar32 == '\0') {
        fVar1 = (*(float *)(fr0_ - 0x48));
        (*(float *)(fr0_ - 0x4c)) = fVar10;
      }
      do {
        (*(float *)(fr0_ - 0x48)) = fVar1;
        iVar5 = *(int *)(unsigned)((int)piVar9 + uVar4 + 4);
        iVar2 = *(int *)(unsigned)((int)piVar8 + uVar4 + 4);
        dVar14 = in_xd4;
        if (cVar32 == '\0') {
          dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),(float)iVar5);
          dVar14 = in_xd12;
        }
        dVar16 = in_xd4;
        if (cVar32 == '\0') {
          dVar16 = CONCAT44D((float)iVar2,SUB84(dVar27,0));
        }
        fVar12 = F32LO(dVar29);
        if (cVar31 == '\0') {
          dVar16 = CONCAT44D(F32HI(dVar16) - fVar12,SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar29;
        }
        dVar27 = in_xd4;
        if (cVar32 == '\0') {
          dVar27 = CONCAT44D((float)(iVar5 - *(int *)(unsigned)((int)piVar6 + uVar4 + 4)),
                                    SUB84(dVar18,0));
        }
        fVar20 = (float)(*(int *)(unsigned)((int)piVar7 + uVar4 + 4) - iVar2);
        fVar23 = F32HI(dVar16);
        if (cVar31 == '\0') {
          bVar30 = fVar26 < fVar23;
        }
        else {
          bVar30 = dVar25 < dVar16;
        }
        dVar11 = in_xd4;
        if (cVar32 == '\0') {
          dVar11 = CONCAT44D(fVar20,SUB84(dVar17,0));
        }
        if (bVar30) {
          if (cVar31 == '\0') {
            dVar16 = CONCAT44D(fVar23 - fVar13,SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 - dVar22;
          }
        }
        else {
          if (cVar31 == '\0') {
            bVar30 = fVar21 < fVar23;
          }
          else {
            bVar30 = dVar22 < dVar16;
          }
          if (!bVar30) {
            if (cVar31 == '\0') {
              dVar16 = CONCAT44D(fVar23 + fVar13,SUB84(dVar16,0));
            }
            else {
              dVar16 = dVar16 + dVar22;
            }
          }
        }
        fVar23 = F32HI(dVar16);
        dVar18 = dVar16;
        if (cVar32 == '\0') {
          dVar18 = in_xd4;
          fVar20 = fVar23;
        }
        fVar10 = F32HI(dVar27);
        if (cVar31 == '\0') {
          bVar30 = fVar26 < fVar10;
          (*(float *)(fr0_ - 0x30)) = fVar20 + fVar12;
        }
        else {
          bVar30 = dVar25 < dVar27;
          (*(float *)(fr0_ - 0x30)) = SUB84(CONCAT44D((int)(D2U(dVar15) >> 0x20),fVar20) + dVar29,0);
        }
        if (cVar32 != '\0') {
          (*(float *)(fr0_ - 0x30)) = SUB84(dVar18,0);
          (*(float *)(fr0_ - 0x2c)) = F32HI(dVar18);
        }
        if (bVar30) {
          if (cVar31 == '\0') {
            dVar27 = CONCAT44D(fVar10 - fVar13,SUB84(dVar27,0));
          }
          else {
            dVar27 = dVar27 - dVar22;
          }
        }
        else {
          if (cVar31 == '\0') {
            bVar30 = fVar21 < fVar10;
          }
          else {
            bVar30 = dVar22 < dVar27;
          }
          if (!bVar30) {
            if (cVar31 == '\0') {
              dVar27 = CONCAT44D(fVar10 + fVar13,SUB84(dVar27,0));
            }
            else {
              dVar27 = dVar27 + dVar22;
            }
          }
        }
        fVar20 = F32HI(dVar11);
        if (cVar31 == '\0') {
          bVar30 = fVar26 < fVar20;
        }
        else {
          bVar30 = dVar25 < dVar11;
        }
        if (bVar30) {
          if (cVar31 == '\0') {
            dVar11 = CONCAT44D(fVar20 - fVar13,SUB84(dVar11,0));
          }
          else {
            dVar11 = dVar11 - dVar22;
          }
        }
        else {
          if (cVar31 == '\0') {
            bVar30 = fVar21 < fVar20;
          }
          else {
            bVar30 = dVar22 < dVar11;
          }
          if (!bVar30) {
            if (cVar31 == '\0') {
              dVar11 = CONCAT44D(fVar20 + fVar13,SUB84(dVar11,0));
            }
            else {
              dVar11 = dVar11 + dVar22;
            }
          }
        }
        if (cVar32 == '\0') {
          dVar15 = CONCAT44D((*(float *)(fr0_ - 0x38)),(*(float *)(fr0_ - 0x48)));
        }
        else {
          dVar18 = CONCAT44D((*(float *)(fr0_ - 0x44)),(*(float *)(fr0_ - 0x48)));
          dVar15 = CONCAT44D((*(float *)(fr0_ - 0x34)),(*(float *)(fr0_ - 0x38)));
        }
        if (cVar31 == '\0') {
          dVar15 = CONCAT44D((F32HI(dVar15) *
                                    F32HI(dVar27)) / F32LO(dVar11),
                                    (F32LO(dVar15) * fVar23) / fVar24);
        }
        else {
          dVar15 = ((dVar15 * dVar16 * dVar27) / dVar25) / dVar11;
        }
        if (cVar32 == '\0') {
          uVar3 = SUB84(dVar15,0);
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),(*(float *)(fr0_ - 0x4c)));
          dVar19 = dVar18;
          dVar18 = CONCAT44D(uVar3,SUB84(dVar27,0));
        }
        else {
          dVar19 = CONCAT44D((*(float *)(fr0_ - 0x48)),(*(float *)(fr0_ - 0x4c)));
        }
        if (cVar31 == '\0') {
          dVar18 = CONCAT44D(F32HI(dVar18) +
                                    F32HI(dVar15),SUB84(dVar18,0));
        }
        else {
          dVar18 = dVar18 + dVar15;
        }
        if (cVar32 == '\0') {
          dVar15 = CONCAT44D((*(float *)(fr0_ - 0x34)),SUB84(dVar15,0));
        }
        else {
          dVar15 = CONCAT44D((*(float *)(fr0_ - 0x30)),(*(float *)(fr0_ - 0x34)));
        }
        if (cVar31 == '\0') {
          dVar15 = CONCAT44D(F32HI(dVar15) *
                                    F32HI(dVar11),F32LO(dVar15) * fVar23);
        }
        else {
          dVar15 = dVar15 * dVar16 * dVar11;
        }
        dVar17 = dVar14;
        if (cVar32 == '\0') {
          dVar17 = CONCAT44D(fVar12,SUB84(dVar11,0));
        }
        if (cVar31 == '\0') {
          dVar17 = CONCAT44D(F32HI(dVar18) * F32LO(dVar16) +
                                    F32HI(dVar17),SUB84(dVar17,0));
        }
        dVar11 = dVar14;
        if (cVar32 == '\0') {
          dVar11 = (double)((longlong)dVar29 << 0x20);
        }
        if (cVar31 == '\0') {
          dVar15 = CONCAT44D(F32HI(dVar15) / F32LO(dVar18),
                                    F32LO(dVar15) / fVar24);
        }
        else {
          dVar15 = (dVar15 / dVar25) / dVar18;
        }
        dVar27 = dVar19;
        if (cVar32 == '\0') {
          dVar27 = CONCAT44D(SUB84(dVar15,0),SUB84(dVar16,0));
        }
        fVar12 = F32HI(dVar15);
        if (cVar31 == '\0') {
          dVar27 = CONCAT44D(F32HI(dVar27) + fVar12,SUB84(dVar27,0));
        }
        else {
          dVar27 = dVar27 + dVar15;
        }
        in_xd4 = in_xd8;
        if (cVar32 == '\0') {
          dVar15 = CONCAT44D(fVar12,SUB84(dVar27,0));
          in_xd4 = dVar19;
        }
        if (cVar31 == '\0') {
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),
                                    F32LO(dVar15) * F32HI(dVar27));
        }
        else {
          dVar15 = dVar15 * dVar27;
        }
        if (cVar32 == '\0') {
          dVar27 = CONCAT44D((*(float *)(fr0_ - 0x30)),SUB84(dVar27,0));
        }
        else {
          dVar27 = CONCAT44D((*(float *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
        }
        if (cVar31 == '\0') {
          dVar27 = CONCAT44D(F32HI(dVar27) - F32LO(dVar15),
                                    SUB84(dVar27,0));
        }
        else {
          dVar27 = dVar27 - dVar15;
        }
        if (cVar32 == '\0') {
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),(*(float *)(fr0_ - 0x40)));
        }
        else {
          in_xd4 = CONCAT44D((*(float *)(fr0_ - 0x3c)),(*(float *)(fr0_ - 0x40)));
        }
        if (cVar31 == '\0') {
          fVar12 = F32LO(dVar15) * F32HI(dVar17);
        }
        else {
          fVar12 = SUB84(dVar15 * dVar17,0);
        }
        fVar20 = (*(float *)(fr0_ - 0x3c));
        fVar23 = (*(float *)(fr0_ - 0x38));
        if (cVar32 == '\0') {
          fVar20 = fVar12;
          fVar23 = (*(float *)(fr0_ - 0x3c));
        }
        uVar4 = uVar4 + 4;
        if (cVar31 == '\0') {
          fVar20 = F32HI(dVar11) * fVar23 + fVar20;
        }
        if (cVar32 == '\0') {
          dVar15 = CONCAT44D((*(float *)(fr0_ - 0x44)),fVar20);
          dVar16 = (double)(D2U(dVar27) & 0xffffffff00000000);
        }
        else {
          dVar15 = CONCAT44D((*(float *)(fr0_ - 0x40)),(*(float *)(fr0_ - 0x44)));
          dVar16 = dVar27;
        }
        uVar3 = 0x1c;
        if (cVar31 == '\0') {
          fVar12 = F32HI(dVar15);
          dVar15 = CONCAT44D(fVar12,F32HI(dVar16) * fVar12 +
                                           SUB84(dVar15,0));
        }
        fVar12 = (*(float *)(fr0_ - 0x2c));
        if (cVar32 == '\0') {
          fVar12 = (*(float *)(fr0_ - 0x30));
        }
        if (cVar31 == '\0') {
          fVar12 = fVar12 * F32HI(dVar29) + F32LO(dVar15);
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),fVar12);
          iVar2 = (int)fVar12;
        }
        else {
          iVar2 = (int)dVar15;
        }
        *ar7 = iVar2;
        ar7 = ar7 + 1;
        in_xd12 = dVar14;
        fVar1 = (*(float *)(fr0_ - 0x48));
      } while (uVar4 < 0xc);
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c21d3e8\n.set _FUN_8c21d3e8, _FUN_8c21d3e8_def\n");
