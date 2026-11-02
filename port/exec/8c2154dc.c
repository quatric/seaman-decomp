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
int FUN_8c2154dc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2154dc";
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
  undefined4 unaff_r10 = 0;
  undefined4 unaff_r11 = 0;
  undefined1 *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double in_dr6 = 0;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  double dVar27;
  float fVar29;
  double dVar28;
  float in_xf0 = 0;
  float in_xf1 = 0;
  float in_xf2 = 0;
  float in_xf3 = 0;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double in_xd8 = 0;
  double dVar30;
  double in_xd10 = 0;
  double in_xd12 = 0;
  double in_xd14 = 0;
  bool bVar31;
  bool bVar32;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    puVar11 = ((undefined1 *)(fr0_ - 0x10));
  }
  else {
    puVar11 = ((undefined1 *)(fr0_ - 0x20));
  }
  *(undefined4 *)(unsigned)(puVar11 + -4) = unaff_r11;
  *(undefined4 *)(unsigned)(puVar11 + -8) = unaff_r10;
  *(undefined4 *)(unsigned)(puVar11 + -0xc) = unaff_r9;
  *(undefined4 *)(unsigned)(puVar11 + -0x10) = unaff_r8;
  iVar4 = *ar4;
  pdVar6 = (double *)(unsigned)(uint)ar4[1];
  iVar7 = ar4[2];
  pdVar8 = (double *)(unsigned)(uint)ar4[3];
  pdVar5 = (double *)(unsigned)(ar4 + 4);
  iVar9 = 0;
  do {
    if (in_FPSCR_SZ == '\0') {
      dVar27 = CONCAT44D(*(uint *)(unsigned)pdVar6,*(uint *)(unsigned)((int)pdVar6 + 4));
      fVar29 = *(float *)(unsigned)(pdVar6 + 1);
      pdVar6 = (double *)(unsigned)((int)pdVar6 + 0xc);
    }
    else {
      dVar27 = *pdVar6;
      in_xd12 = pdVar6[1];
      fVar29 = (float)((ulonglong)pdVar6[2] >> 0x20);
      pdVar6 = pdVar6 + 3;
    }
    dVar28 = CONCAT44D(fVar29,0x3f800000);
                    
    fVar19 = F32HI(in_xd4);
    fVar20 = F32HI(in_xd6);
    fVar16 = F32HI(in_xd10);
    fVar23 = F32HI(in_xd12);
    fVar24 = F32HI(in_xd14);
    if (in_FPSCR_PR == '\0') {
      fVar17 = F32LO(dVar27);
      fVar22 = F32HI(dVar27);
      fVar26 = in_xf0 * fVar17 + F32LO(in_xd4) * fVar22 + F32LO(in_xd8) * 1.0 +
               F32LO(in_xd12) * fVar29;
      fVar26 = in_xf1 * fVar17 + fVar19 * fVar22 + F32HI(in_xd8) * 1.0 +
               fVar23 * fVar29;
      fVar26 = in_xf2 * fVar17 + F32LO(in_xd6) * fVar22 + F32LO(in_xd10) * 1.0 +
               F32LO(in_xd14) * fVar29;
      fVar29 = in_xf3 * fVar17 + fVar20 * fVar22 + fVar16 * 1.0 + fVar24 * fVar29;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar18 = CONCAT44D(*(uint *)(unsigned)pdVar6,*(uint *)(unsigned)((int)pdVar6 + 4));
      dVar21 = (double)((ulonglong)*(uint *)(unsigned)(pdVar6 + 1) << 0x20);
      pdVar6 = (double *)(unsigned)((int)pdVar6 + 0xc);
      dVar30 = in_xd8;
    }
    else {
      dVar18 = *pdVar6;
      dVar30 = pdVar6[1];
      dVar21 = pdVar6[2];
      pdVar6 = pdVar6 + 3;
    }
    dVar21 = (double)(D2U(dVar21) & 0xffffffff00000000);
                    
    if (in_FPSCR_PR == '\0') {
      fVar29 = F32LO(dVar18);
      fVar26 = F32HI(dVar18);
      fVar22 = F32HI(dVar21);
      fVar17 = in_xf0 * fVar29 + F32LO(in_xd4) * fVar26 + F32LO(dVar30) * 0.0 +
               F32LO(in_xd12) * fVar22;
      fVar19 = in_xf1 * fVar29 + fVar19 * fVar26 + F32HI(dVar30) * 0.0 +
               fVar23 * fVar22;
      fVar19 = in_xf2 * fVar29 + F32LO(in_xd6) * fVar26 + F32LO(in_xd10) * 0.0 +
               F32LO(in_xd14) * fVar22;
      fVar29 = in_xf3 * fVar29 + fVar20 * fVar26 + fVar16 * 0.0 + fVar24 * fVar22;
    }
    dVar12 = 0.0;
    uVar2 = *(undefined4 *)(unsigned)0x8c4c0db0;
    pdVar10 = (double *)(unsigned)(0x8c4c0db0 + 4);
    dVar13 = 0.0;
    do {
      bVar31 = (uVar2 & 1) != 0;
      uVar2 = uVar2 >> 1 | (uint)bVar31 << 0x1f;
      while( true ) {
        while( true ) {
          while( true ) {
            bVar32 = (uVar2 & 1) != 0;
            uVar2 = uVar2 >> 1;
            uVar3 = uVar2 | (uint)bVar32 << 0x1f;
            fVar29 = F32LO(dVar18);
            fVar19 = F32HI(dVar27);
            if (bVar31) break;
            bVar32 = (uVar2 & 1) != 0;
            pdVar10 = pdVar10 + 4;
            if (bVar32) goto LAB_8c2155b4;
            bVar31 = (uVar2 & 2) != 0;
            uVar2 = (uVar3 >> 1 | (uint)bVar32 << 0x1f) >> 1 | (uint)bVar31 << 0x1f;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar14 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,*(undefined4 *)(unsigned)((int)pdVar10 + 4));
            pdVar1 = pdVar10 + 1;
          }
          else {
            dVar14 = *pdVar10;
            in_xd4 = pdVar10[1];
            pdVar1 = pdVar10 + 2;
          }
          fVar17 = F32HI(dVar21);
          fVar16 = F32LO(dVar14);
          fVar23 = F32HI(dVar14);
          fVar24 = F32HI(dVar18);
          fVar20 = F32HI(dVar13);
          uVar25 = SUB84(dVar12,0);
          if (bVar32) break;
          if (in_FPSCR_SZ == '\0') {
            dVar14 = CONCAT44D(*(undefined4 *)(unsigned)pdVar1,SUB84(in_dr6,0));
            pdVar1 = (double *)(unsigned)((int)pdVar1 + 4);
          }
          else {
            dVar14 = *pdVar1;
            pdVar1 = pdVar1 + 1;
          }
          dVar21 = (double)((ulonglong)(uint)fVar17 << 0x20);
                    
          if (in_FPSCR_PR == '\0') {
            fVar23 = fVar29 * fVar16 + fVar24 * fVar23 + F32LO(dVar14) * 0.0 +
                     fVar17 * F32HI(dVar14);
          }
          in_dr6 = (double)(D2U(dVar14) & 0xffffffff00000000);
          if (in_FPSCR_PR == '\0') {
            bVar31 = SUB84(dVar21,0) < 0.0;
          }
          else {
            bVar31 = dVar21 < in_dr6;
          }
          pdVar10 = (double *)(unsigned)((int)pdVar1 + 0x14);
          bVar32 = (uVar2 & 1) != 0;
          uVar3 = uVar3 >> 1 | (uint)bVar32 << 0x1f;
          if (bVar31) {
            if (in_FPSCR_SZ == '\0') {
              dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar1 + 1),fVar16);
              pdVar1 = (double *)(unsigned)((int)pdVar1 + 0xc);
              dVar12 = CONCAT44D(SUB84(dVar21,0),uVar25);
            }
            else {
              dVar14 = pdVar1[1];
              pdVar1 = pdVar1 + 2;
              dVar12 = in_xd10;
            }
            if (in_FPSCR_PR == '\0') {
              dVar12 = CONCAT44D(-F32HI(dVar12),SUB84(dVar12,0));
            }
            else {
              dVar12 = -dVar12;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),*(undefined4 *)(unsigned)pdVar1);
              pdVar1 = (double *)(unsigned)((int)pdVar1 + 4);
            }
            else {
              in_xd4 = *pdVar1;
              pdVar1 = pdVar1 + 1;
            }
            if (in_FPSCR_PR == '\0') {
              fVar16 = F32HI(dVar12);
              dVar12 = CONCAT44D(fVar16,fVar16 * F32HI(dVar14) +
                                               SUB84(dVar12,0));
            }
            if (in_FPSCR_SZ == '\0') {
              in_dr6 = (double)((ulonglong)*(uint *)(unsigned)pdVar1 << 0x20);
              pdVar10 = (double *)(unsigned)((int)pdVar1 + 4);
            }
            else {
              in_dr6 = *pdVar1;
              pdVar10 = pdVar1 + 1;
            }
            fVar16 = F32HI(dVar12);
            if (in_FPSCR_PR == '\0') {
              dVar13 = CONCAT44D(fVar16 * F32LO(dVar14) + fVar20,
                                        fVar16 * F32HI(in_dr6) +
                                        SUB84(dVar13,0));
            }
            if (bVar32) goto LAB_8c2155b4;
            bVar31 = (uVar2 & 2) != 0;
            uVar2 = uVar3 >> 1 | (uint)bVar31 << 0x1f;
          }
          else {
            if (bVar32) goto LAB_8c2155b4;
            bVar31 = (uVar2 & 2) != 0;
            uVar2 = uVar3 >> 1 | (uint)bVar31 << 0x1f;
          }
        }
        if (in_FPSCR_PR == '\0') {
          dVar14 = CONCAT44D(fVar23 - fVar19,fVar16);
        }
        else {
          dVar14 = dVar14 - dVar27;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)pdVar1,SUB84(in_dr6,0));
          pdVar1 = (double *)(unsigned)((int)pdVar1 + 4);
        }
        else {
          dVar21 = *pdVar1;
          pdVar1 = pdVar1 + 1;
        }
        if (in_FPSCR_PR == '\0') {
          dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),
                                    F32LO(dVar14) - F32LO(dVar27));
        }
        else {
          dVar14 = dVar14 - dVar27;
        }
        fVar16 = F32HI(dVar28);
        if (in_FPSCR_PR == '\0') {
          in_dr6 = (double)((ulonglong)(uint)(F32HI(dVar21) - fVar16) << 0x20);
        }
        else {
          in_dr6 = (double)(D2U(dVar21) & 0xffffffff00000000) - dVar28;
        }
        dVar21 = (double)((ulonglong)(uint)fVar17 << 0x20);
        dVar12 = (double)(D2U(dVar12) & 0xffffffff);
                    
        fVar23 = F32LO(dVar14);
        fVar26 = F32HI(dVar14);
        fVar22 = F32LO(in_dr6);
        fVar15 = F32HI(in_dr6);
        if (in_FPSCR_PR == '\0') {
          fVar24 = fVar29 * fVar23 + fVar24 * fVar26 + fVar22 * 0.0 + fVar17 * fVar15;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar28 = CONCAT44D(fVar16,*(undefined4 *)(unsigned)pdVar1);
          pdVar1 = (double *)(unsigned)((int)pdVar1 + 4);
        }
        else {
          in_xd14 = *pdVar1;
          pdVar1 = pdVar1 + 1;
        }
                    
        if (in_FPSCR_PR == '\0') {
          fVar16 = fVar23 * fVar23 + fVar26 * fVar26 + fVar22 * fVar22 + fVar15 * fVar15;
          bVar31 = 0.0 < SUB84(dVar21,0);
        }
        else {
          bVar31 = dVar12 < dVar21;
        }
        fVar16 = F32LO(in_dr6);
        dVar14 = in_xd6;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = CONCAT44D(fVar16,fVar23);
        }
        if (in_FPSCR_PR == '\0') {
          bVar32 = fVar16 < SUB84(dVar28,0);
          dVar14 = CONCAT44D(1.0 / SQRT(F32HI(dVar14)),SUB84(dVar14,0));
        }
        else {
          bVar32 = in_dr6 < dVar28;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),*(undefined4 *)(unsigned)pdVar1);
          pdVar1 = (double *)(unsigned)((int)pdVar1 + 4);
        }
        else {
          in_xd14 = *pdVar1;
          pdVar1 = pdVar1 + 1;
        }
        if ((byte)(bVar31 << 1 | bVar32) == 3) break;
        bVar32 = (uVar2 & 1) != 0;
        pdVar10 = (double *)(unsigned)((int)pdVar1 + 0xc);
        if (bVar32) goto LAB_8c2155b4;
        bVar31 = (uVar2 & 2) != 0;
        uVar2 = (uVar3 >> 1 | (uint)bVar32 << 0x1f) >> 1 | (uint)bVar31 << 0x1f;
      }
      fVar23 = F32HI(dVar14);
      if (in_FPSCR_PR == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) * fVar23);
        bVar31 = SUB84(dVar28,0) < fVar16;
        dVar14 = CONCAT44D(fVar23 * fVar23,SUB84(dVar14,0));
      }
      else {
        dVar21 = dVar21 * dVar14;
        bVar31 = dVar28 < in_dr6;
        dVar14 = dVar14 * dVar14;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),*(undefined4 *)(unsigned)pdVar1);
        pdVar1 = (double *)(unsigned)((int)pdVar1 + 4);
      }
      else {
        in_xd4 = *pdVar1;
        pdVar1 = pdVar1 + 1;
      }
      if (bVar31) {
        if (in_FPSCR_PR == '\0') {
          dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                    F32LO(dVar21) * F32LO(dVar28) *
                                    F32HI(dVar14));
        }
        else {
          dVar21 = dVar21 * dVar28 * dVar14;
        }
      }
      dVar12 = in_xd10;
      if (in_FPSCR_SZ == '\0') {
        dVar12 = CONCAT44D(SUB84(dVar21,0),uVar25);
      }
      bVar31 = (uVar2 & 1) != 0;
      uVar2 = uVar3 >> 1 | (uint)bVar31 << 0x1f;
      if (in_FPSCR_SZ == '\0') {
        dVar14 = CONCAT44D(*(undefined4 *)(unsigned)pdVar1,SUB84(dVar14,0));
        pdVar1 = (double *)(unsigned)((int)pdVar1 + 4);
      }
      else {
        dVar14 = *pdVar1;
        pdVar1 = pdVar1 + 1;
      }
      if (in_FPSCR_PR == '\0') {
        fVar23 = F32HI(dVar12);
        dVar12 = CONCAT44D(fVar23,fVar23 * F32LO(dVar14) + F32LO(dVar12));
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)pdVar1,fVar16);
        pdVar10 = (double *)(unsigned)((int)pdVar1 + 4);
      }
      else {
        in_dr6 = *pdVar1;
        pdVar10 = pdVar1 + 1;
      }
      fVar16 = F32HI(dVar12);
      if (in_FPSCR_PR == '\0') {
        dVar13 = CONCAT44D(fVar16 * F32HI(dVar14) + fVar20,
                                  fVar16 * F32HI(in_dr6) + F32LO(dVar13));
      }
    } while (!bVar31);
LAB_8c2155b4:
    fVar20 = F32LO(dVar21);
    if (in_FPSCR_SZ == '\0') {
      dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),(*(undefined1 *)(unsigned)0x8c21566c));
      dVar21 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa544,fVar29);
      pdVar10 = (double *)(unsigned)((unsigned)0x8c4aa544 + 4);
    }
    else {
      in_xd14 = CONCAT44D((*(undefined1 *)(unsigned)0x8c215670),(*(undefined1 *)(unsigned)0x8c21566c));
      dVar21 = *(undefined4 *)(unsigned)0x8c4aa544;
      pdVar10 = 0x8c4aa544 + 1;
    }
    fVar29 = F32HI(dVar21);
    fVar16 = F32HI(dVar28);
    if (in_FPSCR_PR == '\0') {
      bVar31 = fVar29 < fVar16;
    }
    else {
      bVar31 = dVar21 < dVar28;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar21 = CONCAT44D(fVar29,*(undefined4 *)(unsigned)pdVar10);
      pdVar10 = (double *)(unsigned)((int)pdVar10 + 4);
    }
    else {
      dVar30 = *pdVar10;
      pdVar10 = pdVar10 + 1;
    }
    in_xd8 = dVar30;
    if (bVar31) {
      if (in_FPSCR_PR == '\0') {
        bVar31 = fVar16 < SUB84(dVar21,0);
      }
      else {
        bVar31 = dVar28 < dVar21;
      }
      if (in_FPSCR_SZ == '\0') {
        fVar20 = *(float *)(unsigned)pdVar10;
      }
      else {
        in_xd10 = *pdVar10;
      }
      if (bVar31) {
        in_xd8 = dVar28;
        if (in_FPSCR_SZ == '\0') {
          dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),fVar16);
          in_xd8 = dVar30;
        }
        if (in_FPSCR_PR == '\0') {
          fVar29 = F32HI(dVar21);
          dVar21 = CONCAT44D(fVar29,F32LO(dVar21) - fVar29);
        }
        else {
          dVar21 = dVar21 - dVar21;
        }
        if (in_FPSCR_PR == '\0') {
          fVar29 = 1.0 - F32LO(dVar21) * fVar20;
        }
        else {
          fVar29 = (float)((ulonglong)
                           (CONCAT44D(0x3f800000,fVar20) -
                           dVar21 * CONCAT44D(0x3f800000,fVar20)) >> 0x20);
        }
      }
      else {
        fVar29 = 0.0;
      }
    }
    else {
      fVar29 = 1.0;
    }
    uVar2 = *(uint *)(unsigned)pdVar6;
    dVar30 = CONCAT44D(0x3f800000,SUB84(dVar12,0));
    if (in_FPSCR_PR == '\0') {
      bVar31 = fVar16 < 1.0;
      dVar30 = CONCAT44D(1.0 / fVar16,SUB84(dVar12,0));
    }
    else {
      bVar31 = dVar28 < dVar30;
      dVar30 = dVar30 / dVar28;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar21 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,*(undefined4 *)(unsigned)((int)pdVar5 + 4));
      pdVar5 = pdVar5 + 1;
    }
    else {
      dVar21 = *pdVar5;
      in_xd4 = pdVar5[1];
      pdVar5 = pdVar5 + 2;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(in_dr6,0));
      pdVar5 = (double *)(unsigned)((int)pdVar5 + 4);
    }
    else {
      in_dr6 = *pdVar5;
      pdVar5 = pdVar5 + 1;
    }
    fVar20 = F32LO(dVar28);
    if (in_FPSCR_PR == '\0') {
      dVar18 = CONCAT44D(fVar29,(float)(uVar2 & 0xff) * fVar20);
    }
    else {
      dVar18 = CONCAT44D(fVar29,(float)(uVar2 & 0xff)) * dVar28;
    }
    if (in_FPSCR_PR == '\0') {
      dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),F32LO(dVar13) * F32LO(dVar18));
    }
    else {
      dVar13 = dVar13 * dVar18;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(unsigned)pdVar5);
      pdVar5 = (double *)(unsigned)((int)pdVar5 + 4);
    }
    else {
      in_xd6 = *pdVar5;
      pdVar5 = pdVar5 + 1;
    }
    uVar25 = (undefined4)(D2U(dVar18) >> 0x20);
    fVar29 = (float)(uVar2 >> 8 & 0xff);
    if (in_FPSCR_PR == '\0') {
      fVar29 = fVar29 * fVar20;
      dVar18 = CONCAT44D(uVar25,fVar29);
      dVar13 = CONCAT44D(F32HI(dVar13) * fVar29,SUB84(dVar13,0));
    }
    else {
      dVar18 = CONCAT44D(uVar25,fVar29) * dVar28;
      dVar13 = dVar13 * dVar18;
    }
    uVar25 = (undefined4)(D2U(dVar18) >> 0x20);
    fVar29 = (float)(uVar2 >> 0x10 & 0xff);
    pdVar5 = pdVar5 + -2;
    if (in_FPSCR_PR == '\0') {
      dVar18 = CONCAT44D(uVar25,fVar29 * fVar20);
    }
    else {
      dVar18 = CONCAT44D(uVar25,fVar29) * dVar28;
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)(unsigned)((int)pdVar8 + 0x1c);
      *(int *)(unsigned)pdVar8 = SUB84(dVar13,0);
    }
    else {
      pdVar8 = pdVar8 + 3;
      *pdVar8 = CONCAT44D(in_xf3,in_xf2);
    }
    if (in_FPSCR_PR == '\0') {
      dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),F32LO(dVar30) * F32LO(dVar18));
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) * F32LO(dVar27));
    }
    else {
      dVar30 = dVar30 * dVar18;
      dVar21 = dVar21 * dVar27;
    }
    fVar29 = F32HI(dVar18);
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
      *(int *)(unsigned)pdVar8 = (int)(D2U(dVar13) >> 0x20);
    }
    else {
      pdVar8 = pdVar8 + -1;
      *pdVar8 = dVar13;
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = CONCAT44D(F32HI(dVar21) * fVar19,SUB84(dVar21,0));
    }
    else {
      dVar21 = dVar21 * dVar27;
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
      *(int *)(unsigned)pdVar8 = SUB84(dVar30,0);
    }
    else {
      pdVar8 = pdVar8 + -1;
      *pdVar8 = CONCAT44D(in_xf1,in_xf0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar29 = (float)(uVar2 >> 0x18) * fVar20 * fVar29;
    }
    else {
      dVar27 = CONCAT44D(fVar29,(float)(uVar2 >> 0x18)) * dVar28;
      fVar29 = SUB84(dVar27 * dVar27,0);
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
      *(float *)(unsigned)pdVar8 = fVar29;
    }
    else {
      pdVar8 = pdVar8 + -1;
      *pdVar8 = in_xd10;
    }
    fVar29 = F32HI(dVar30);
    if (in_FPSCR_PR == '\0') {
      in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),
                                fVar29 * F32LO(dVar21) + F32LO(in_dr6));
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
      *(float *)(unsigned)pdVar8 = fVar29;
    }
    else {
      pdVar8 = pdVar8 + -1;
      *pdVar8 = dVar30;
    }
    if (in_FPSCR_PR == '\0') {
      in_dr6 = CONCAT44D(fVar29 * F32HI(dVar21) +
                                F32HI(in_dr6),SUB84(in_dr6,0));
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)pdVar8 + -4) = SUB84(in_dr6,0);
      pdVar8 = pdVar8 + -1;
      *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr6 >> 0x20);
    }
    else {
      pdVar8[-1] = in_xd6;
      pdVar8 = pdVar8 + -2;
      *pdVar8 = in_dr6;
    }
    pdVar6 = (double *)(unsigned)((int)pdVar6 + 4);
    iVar4 = iVar4 + -1;
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
      *(float *)(unsigned)pdVar8 = fVar16;
    }
    else {
      pdVar8 = pdVar8 + -1;
      *pdVar8 = dVar28;
    }
    iVar9 = iVar9 + (uint)bVar31;
    CacheBlockInvalidate(iVar7);
    iVar7 = iVar7 + 0x20;
    if (iVar4 == 0) {
      return iVar9;
    }
    pdVar8 = pdVar8 + 4;
  } while( true );
}

__asm__(".globl _FUN_8c2154dc\n.set _FUN_8c2154dc, _FUN_8c2154dc_def\n");
