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
int FUN_8c215674_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c215674";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  int iVar7;
  double *pdVar8;
  undefined4 unaff_r8 = 0;
  int iVar9;
  undefined4 unaff_r9 = 0;
  double *pdVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double in_dr6 = 0;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar21;
  double dVar20;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  float fVar28;
  double dVar27;
  float in_xf0 = 0;
  float in_xf1 = 0;
  float in_xf2 = 0;
  float in_xf3 = 0;
  double in_xd4 = 0;
  float in_xf6 = 0;
  float in_xf7 = 0;
  double in_xd8 = 0;
  double in_xd10 = 0;
  double in_xd12 = 0;
  float fVar29;
  double in_xd14 = 0;
  bool bVar30;
  bool bVar31;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    puVar11 = ((undefined1 *)(fr0_ - 0x10));
  }
  else {
    puVar11 = ((undefined1 *)(fr0_ - 0x20));
  }
  *(undefined4 *)(unsigned)(puVar11 + -4) = unaff_r8;
  *(undefined4 *)(unsigned)(puVar11 + -8) = unaff_r9;
  iVar4 = *ar4;
  pdVar6 = (double *)(unsigned)(uint)ar4[1];
  iVar7 = ar4[2];
  pdVar8 = (double *)(unsigned)(uint)ar4[3];
  pdVar5 = (double *)(unsigned)(ar4 + 4);
  iVar9 = 0;
  do {
    if (in_FPSCR_SZ == '\0') {
      dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,*(undefined4 *)(unsigned)((int)pdVar6 + 4));
      fVar28 = *(float *)(unsigned)(pdVar6 + 1);
      pdVar6 = (double *)(unsigned)((int)pdVar6 + 0xc);
    }
    else {
      dVar26 = *pdVar6;
      in_xd12 = pdVar6[1];
      fVar28 = (float)((ulonglong)pdVar6[2] >> 0x20);
      pdVar6 = pdVar6 + 3;
    }
    dVar27 = CONCAT44D(fVar28,0x3f800000);
                    
    fVar14 = F32HI(in_xd4);
    fVar21 = F32HI(in_xd10);
    fVar29 = F32HI(in_xd12);
    fVar18 = F32HI(in_xd14);
    if (in_FPSCR_PR == '\0') {
      fVar24 = F32LO(dVar26);
      fVar23 = F32HI(dVar26);
      fVar25 = in_xf0 * fVar24 + F32LO(in_xd4) * fVar23 + F32LO(in_xd8) * 1.0 +
               F32LO(in_xd12) * fVar28;
      fVar25 = in_xf1 * fVar24 + fVar14 * fVar23 + F32HI(in_xd8) * 1.0 +
               fVar29 * fVar28;
      fVar25 = in_xf2 * fVar24 + in_xf6 * fVar23 + F32LO(in_xd10) * 1.0 +
               F32LO(in_xd14) * fVar28;
      fVar28 = in_xf3 * fVar24 + in_xf7 * fVar23 + fVar21 * 1.0 + fVar18 * fVar28;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,*(undefined4 *)(unsigned)((int)pdVar6 + 4));
      dVar22 = (double)((ulonglong)*(uint *)(unsigned)(pdVar6 + 1) << 0x20);
      pdVar6 = (double *)(unsigned)((int)pdVar6 + 0xc);
    }
    else {
      dVar19 = *pdVar6;
      in_xd8 = pdVar6[1];
      dVar22 = pdVar6[2];
      pdVar6 = pdVar6 + 3;
    }
    dVar22 = (double)(D2U(dVar22) & 0xffffffff00000000);
                    
    if (in_FPSCR_PR == '\0') {
      fVar24 = F32LO(dVar19);
      fVar25 = F32HI(dVar19);
      fVar23 = F32HI(dVar22);
      fVar28 = in_xf0 * fVar24 + F32LO(in_xd4) * fVar25 + F32LO(in_xd8) * 0.0 +
               F32LO(in_xd12) * fVar23;
      fVar28 = in_xf1 * fVar24 + fVar14 * fVar25 + F32HI(in_xd8) * 0.0 +
               fVar29 * fVar23;
      fVar28 = in_xf2 * fVar24 + in_xf6 * fVar25 + F32LO(in_xd10) * 0.0 +
               F32LO(in_xd14) * fVar23;
      fVar28 = in_xf3 * fVar24 + in_xf7 * fVar25 + fVar21 * 0.0 + fVar18 * fVar23;
    }
    dVar20 = 0.0;
    uVar2 = *(undefined4 *)(unsigned)0x8c4c0db0;
    fVar28 = 0.0;
    pdVar10 = (double *)(unsigned)(0x8c4c0db0 + 4);
    fVar14 = 0.0;
    do {
      bVar30 = (uVar2 & 1) != 0;
      uVar2 = uVar2 >> 1 | (uint)bVar30 << 0x1f;
      while( true ) {
        while( true ) {
          while( true ) {
            bVar31 = (uVar2 & 1) != 0;
            uVar2 = uVar2 >> 1;
            uVar3 = uVar2 | (uint)bVar31 << 0x1f;
            fVar21 = F32LO(dVar19);
            fVar29 = F32HI(dVar26);
            if (bVar30) break;
            bVar31 = (uVar2 & 1) != 0;
            pdVar10 = pdVar10 + 4;
            if (bVar31) goto LAB_8c215744;
            bVar30 = (uVar2 & 2) != 0;
            uVar2 = (uVar3 >> 1 | (uint)bVar31 << 0x1f) >> 1 | (uint)bVar30 << 0x1f;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar13 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,*(undefined4 *)(unsigned)((int)pdVar10 + 4));
            pdVar1 = pdVar10 + 1;
          }
          else {
            dVar13 = *pdVar10;
            in_xd4 = pdVar10[1];
            pdVar1 = pdVar10 + 2;
          }
          fVar23 = F32HI(dVar22);
          fVar18 = F32LO(dVar13);
          fVar24 = F32HI(dVar13);
          fVar25 = F32HI(dVar19);
          uVar12 = SUB84(dVar20,0);
          if (bVar31) break;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = CONCAT44D(*(undefined4 *)(unsigned)pdVar1,SUB84(in_dr6,0));
            pdVar1 = (double *)(unsigned)((int)pdVar1 + 4);
          }
          else {
            dVar13 = *pdVar1;
            pdVar1 = pdVar1 + 1;
          }
          dVar22 = (double)((ulonglong)(uint)fVar23 << 0x20);
                    
          if (in_FPSCR_PR == '\0') {
            fVar24 = fVar21 * fVar18 + fVar25 * fVar24 + F32LO(dVar13) * 0.0 +
                     fVar23 * F32HI(dVar13);
          }
          in_dr6 = (double)(D2U(dVar13) & 0xffffffff00000000);
          if (in_FPSCR_PR == '\0') {
            bVar30 = SUB84(dVar22,0) < 0.0;
          }
          else {
            bVar30 = dVar22 < in_dr6;
          }
          pdVar10 = (double *)(unsigned)((int)pdVar1 + 0x14);
          bVar31 = (uVar2 & 1) != 0;
          uVar3 = uVar3 >> 1 | (uint)bVar31 << 0x1f;
          if (bVar30) {
            if (in_FPSCR_SZ == '\0') {
              dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar1 + 1),fVar18);
              pdVar1 = (double *)(unsigned)((int)pdVar1 + 0xc);
              dVar20 = CONCAT44D(SUB84(dVar22,0),uVar12);
            }
            else {
              dVar13 = pdVar1[1];
              pdVar1 = pdVar1 + 2;
              dVar20 = in_xd10;
            }
            if (in_FPSCR_PR == '\0') {
              dVar20 = CONCAT44D(-F32HI(dVar20),SUB84(dVar20,0));
            }
            else {
              dVar20 = -dVar20;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),*(undefined4 *)(unsigned)pdVar1);
              pdVar1 = (double *)(unsigned)((int)pdVar1 + 4);
            }
            else {
              in_xd4 = *pdVar1;
              pdVar1 = pdVar1 + 1;
            }
            if (in_FPSCR_PR == '\0') {
              fVar18 = F32HI(dVar20);
              dVar20 = CONCAT44D(fVar18,fVar18 * F32HI(dVar13) +
                                               SUB84(dVar20,0));
            }
            if (in_FPSCR_SZ == '\0') {
              in_dr6 = (double)((ulonglong)*(uint *)(unsigned)pdVar1 << 0x20);
              pdVar10 = (double *)(unsigned)((int)pdVar1 + 4);
            }
            else {
              in_dr6 = *pdVar1;
              pdVar10 = pdVar1 + 1;
            }
            fVar18 = F32HI(dVar20);
            if (in_FPSCR_PR == '\0') {
              fVar28 = fVar18 * F32LO(dVar13) + fVar28;
              fVar14 = fVar18 * F32HI(in_dr6) + fVar14;
            }
            if (bVar31) goto LAB_8c215744;
            bVar30 = (uVar2 & 2) != 0;
            uVar2 = uVar3 >> 1 | (uint)bVar30 << 0x1f;
          }
          else {
            if (bVar31) goto LAB_8c215744;
            bVar30 = (uVar2 & 2) != 0;
            uVar2 = uVar3 >> 1 | (uint)bVar30 << 0x1f;
          }
        }
        if (in_FPSCR_PR == '\0') {
          dVar13 = CONCAT44D(fVar24 - fVar29,fVar18);
        }
        else {
          dVar13 = dVar13 - dVar26;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)pdVar1,SUB84(in_dr6,0));
          pdVar1 = (double *)(unsigned)((int)pdVar1 + 4);
        }
        else {
          dVar22 = *pdVar1;
          pdVar1 = pdVar1 + 1;
        }
        if (in_FPSCR_PR == '\0') {
          dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),
                                    F32LO(dVar13) - F32LO(dVar26));
        }
        else {
          dVar13 = dVar13 - dVar26;
        }
        fVar18 = F32HI(dVar27);
        if (in_FPSCR_PR == '\0') {
          in_dr6 = (double)((ulonglong)(uint)(F32HI(dVar22) - fVar18) << 0x20);
        }
        else {
          in_dr6 = (double)(D2U(dVar22) & 0xffffffff00000000) - dVar27;
        }
        dVar22 = (double)((ulonglong)(uint)fVar23 << 0x20);
        dVar20 = (double)(D2U(dVar20) & 0xffffffff);
                    
        fVar24 = F32LO(dVar13);
        fVar15 = F32HI(dVar13);
        fVar16 = F32LO(in_dr6);
        fVar17 = F32HI(in_dr6);
        if (in_FPSCR_PR == '\0') {
          fVar25 = fVar21 * fVar24 + fVar25 * fVar15 + fVar16 * 0.0 + fVar23 * fVar17;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar27 = CONCAT44D(fVar18,*(undefined4 *)(unsigned)pdVar1);
          pdVar1 = (double *)(unsigned)((int)pdVar1 + 4);
        }
        else {
          in_xd14 = *pdVar1;
          pdVar1 = pdVar1 + 1;
        }
                    
        if (in_FPSCR_PR == '\0') {
          fVar18 = fVar24 * fVar24 + fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
          bVar30 = 0.0 < SUB84(dVar22,0);
        }
        else {
          bVar30 = dVar20 < dVar22;
        }
        fVar18 = F32LO(in_dr6);
        if (in_FPSCR_SZ == '\0') {
          dVar13 = CONCAT44D(fVar18,fVar24);
        }
        else {
          dVar13 = CONCAT44D(in_xf7,in_xf6);
        }
        if (in_FPSCR_PR == '\0') {
          bVar31 = fVar18 < SUB84(dVar27,0);
          dVar13 = CONCAT44D(1.0 / SQRT(F32HI(dVar13)),SUB84(dVar13,0));
        }
        else {
          bVar31 = in_dr6 < dVar27;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),*(undefined4 *)(unsigned)pdVar1);
          pdVar1 = (double *)(unsigned)((int)pdVar1 + 4);
        }
        else {
          in_xd14 = *pdVar1;
          pdVar1 = pdVar1 + 1;
        }
        if ((byte)(bVar30 << 1 | bVar31) == 3) break;
        bVar31 = (uVar2 & 1) != 0;
        pdVar10 = (double *)(unsigned)((int)pdVar1 + 0xc);
        if (bVar31) goto LAB_8c215744;
        bVar30 = (uVar2 & 2) != 0;
        uVar2 = (uVar3 >> 1 | (uint)bVar31 << 0x1f) >> 1 | (uint)bVar30 << 0x1f;
      }
      fVar24 = F32HI(dVar13);
      if (in_FPSCR_PR == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),F32LO(dVar22) * fVar24);
        bVar30 = SUB84(dVar27,0) < fVar18;
        dVar13 = CONCAT44D(fVar24 * fVar24,SUB84(dVar13,0));
      }
      else {
        dVar22 = dVar22 * dVar13;
        bVar30 = dVar27 < in_dr6;
        dVar13 = dVar13 * dVar13;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),*(undefined4 *)(unsigned)pdVar1);
        pdVar1 = (double *)(unsigned)((int)pdVar1 + 4);
      }
      else {
        in_xd4 = *pdVar1;
        pdVar1 = pdVar1 + 1;
      }
      if (bVar30) {
        if (in_FPSCR_PR == '\0') {
          dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                    F32LO(dVar22) * F32LO(dVar27) *
                                    F32HI(dVar13));
        }
        else {
          dVar22 = dVar22 * dVar27 * dVar13;
        }
      }
      dVar20 = in_xd10;
      if (in_FPSCR_SZ == '\0') {
        dVar20 = CONCAT44D(SUB84(dVar22,0),uVar12);
      }
      bVar30 = (uVar2 & 1) != 0;
      uVar2 = uVar3 >> 1 | (uint)bVar30 << 0x1f;
      if (in_FPSCR_SZ == '\0') {
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)pdVar1,SUB84(dVar13,0));
        pdVar1 = (double *)(unsigned)((int)pdVar1 + 4);
      }
      else {
        dVar13 = *pdVar1;
        pdVar1 = pdVar1 + 1;
      }
      if (in_FPSCR_PR == '\0') {
        fVar24 = F32HI(dVar20);
        dVar20 = CONCAT44D(fVar24,fVar24 * F32LO(dVar13) + F32LO(dVar20));
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)pdVar1,fVar18);
        pdVar10 = (double *)(unsigned)((int)pdVar1 + 4);
      }
      else {
        in_dr6 = *pdVar1;
        pdVar10 = pdVar1 + 1;
      }
      fVar18 = F32HI(dVar20);
      if (in_FPSCR_PR == '\0') {
        fVar28 = fVar18 * F32HI(dVar13) + fVar28;
        fVar14 = fVar18 * F32HI(in_dr6) + fVar14;
      }
    } while (!bVar30);
LAB_8c215744:
    if (in_FPSCR_SZ == '\0') {
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa544,fVar21);
      pdVar10 = (double *)(unsigned)((unsigned)0x8c4aa544 + 4);
    }
    else {
      dVar19 = *(undefined4 *)(unsigned)0x8c4aa544;
      pdVar10 = 0x8c4aa544 + 1;
    }
    dVar13 = CONCAT44D(0x3f800000,SUB84(dVar20,0));
    fVar21 = F32HI(dVar19);
    fVar18 = F32HI(dVar27);
    if (in_FPSCR_PR == '\0') {
      bVar30 = fVar21 < fVar18;
    }
    else {
      bVar30 = dVar19 < dVar27;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = CONCAT44D(fVar21,*(undefined4 *)(unsigned)pdVar10);
      pdVar10 = (double *)(unsigned)((int)pdVar10 + 4);
    }
    else {
      in_xd8 = *pdVar10;
      pdVar10 = pdVar10 + 1;
    }
    if (bVar30) {
      if (in_FPSCR_PR == '\0') {
        bVar30 = fVar18 < SUB84(dVar19,0);
      }
      else {
        bVar30 = dVar27 < dVar19;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)pdVar10);
      }
      else {
        in_xd10 = *pdVar10;
      }
      if (bVar30) {
        if (in_FPSCR_SZ == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),fVar18);
          dVar27 = in_xd8;
        }
        if (in_FPSCR_PR == '\0') {
          fVar21 = F32HI(dVar19);
          dVar19 = CONCAT44D(fVar21,F32LO(dVar19) - fVar21);
        }
        else {
          dVar19 = dVar19 - dVar19;
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = CONCAT44D(fVar18,1.0 - F32LO(dVar19) * F32LO(dVar22));
        }
        else {
          dVar19 = CONCAT44D(fVar18,0x3f800000) - dVar19 * dVar22;
        }
      }
      else {
        dVar19 = (double)((ulonglong)(uint)fVar18 << 0x20);
        dVar27 = in_xd8;
      }
    }
    else {
      dVar19 = CONCAT44D(fVar18,0x3f800000);
      dVar27 = in_xd8;
    }
    fVar21 = F32HI(dVar19);
    if (in_FPSCR_PR == '\0') {
      bVar30 = fVar21 < 1.0;
      dVar13 = CONCAT44D(1.0 / fVar21,SUB84(dVar20,0));
    }
    else {
      bVar30 = dVar19 < dVar13;
      dVar13 = dVar13 / dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,*(undefined4 *)(unsigned)((int)pdVar5 + 4));
      dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar5 + 1),SUB84(dVar22,0));
      pdVar5 = (double *)(unsigned)((int)pdVar5 + 0xc);
      in_xd8 = dVar27;
    }
    else {
      dVar20 = *pdVar5;
      in_xd8 = pdVar5[1];
      dVar22 = pdVar5[2];
      pdVar5 = pdVar5 + 3;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)pdVar5);
      pdVar5 = (double *)(unsigned)((int)pdVar5 + 4);
    }
    else {
      in_xd10 = *pdVar5;
      pdVar5 = pdVar5 + 1;
    }
    pdVar5 = pdVar5 + -2;
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)(unsigned)((int)pdVar8 + 0x1c);
      *(float *)(unsigned)pdVar8 = fVar14;
    }
    else {
      pdVar8 = pdVar8 + 3;
      *pdVar8 = CONCAT44D(in_xf3,in_xf2);
    }
    if (in_FPSCR_PR == '\0') {
      dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),F32LO(dVar20) * F32LO(dVar26));
    }
    else {
      dVar20 = dVar20 * dVar26;
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
      *(float *)(unsigned)pdVar8 = fVar28;
    }
    else {
      pdVar8 = pdVar8 + -1;
      *pdVar8 = CONCAT44D(fVar28,fVar14);
    }
    if (in_FPSCR_PR == '\0') {
      dVar20 = CONCAT44D(F32HI(dVar20) * fVar29,SUB84(dVar20,0));
    }
    else {
      dVar20 = dVar20 * dVar26;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)pdVar8 + -4) = SUB84(dVar13,0);
      pdVar8 = pdVar8 + -1;
      *(int *)(unsigned)pdVar8 = SUB84(dVar19,0);
    }
    else {
      pdVar8[-1] = CONCAT44D(in_xf1,in_xf0);
      pdVar8 = pdVar8 + -2;
      *pdVar8 = in_xd14;
    }
    fVar28 = F32HI(dVar13);
    if (in_FPSCR_PR == '\0') {
      dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                fVar28 * F32LO(dVar20) + F32LO(dVar22));
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
      *(float *)(unsigned)pdVar8 = fVar28;
    }
    else {
      pdVar8 = pdVar8 + -1;
      *pdVar8 = dVar13;
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = CONCAT44D(fVar28 * F32HI(dVar20) +
                                F32HI(dVar22),SUB84(dVar22,0));
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)pdVar8 + -4) = SUB84(dVar22,0);
      pdVar8 = pdVar8 + -1;
      *(int *)(unsigned)pdVar8 = (int)(D2U(dVar22) >> 0x20);
    }
    else {
      pdVar8[-1] = in_xd10;
      pdVar8 = pdVar8 + -2;
      *pdVar8 = dVar22;
    }
    iVar4 = iVar4 + -1;
    CacheBlockInvalidate(iVar7);
    iVar9 = iVar9 + (uint)bVar30;
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
      *(float *)(unsigned)pdVar8 = fVar21;
    }
    else {
      pdVar8 = pdVar8 + -1;
      *pdVar8 = dVar19;
    }
    iVar7 = iVar7 + 0x20;
    pdVar8 = pdVar8 + 4;
    if (iVar4 == 0) {
      return iVar9;
    }
  } while( true );
}

__asm__(".globl _FUN_8c215674\n.set _FUN_8c215674, _FUN_8c215674_def\n");
