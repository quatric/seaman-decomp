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
int FUN_8c215988_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c215988";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  double *pdVar1;
  uint uVar2;
  int iVar3;
  double *pdVar4;
  uint uVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  undefined4 unaff_r8 = 0;
  int iVar9;
  undefined4 unaff_r9 = 0;
  uint uVar10;
  double *pdVar11;
  undefined4 unaff_r10 = 0;
  undefined4 unaff_r11 = 0;
  undefined1 *puVar12;
  double in_dr0 = 0;
  double dVar13;
  float fVar14;
  undefined4 uVar15;
  double in_dr4 = 0;
  undefined8 uVar16;
  float fVar17;
  double in_dr6 = 0;
  double dVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  float fVar23;
  double dVar22;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  float fVar32;
  double dVar31;
  double in_xd0 = 0;
  float in_xf2 = 0;
  float in_xf3 = 0;
  double in_xd4 = 0;
  float in_xf6 = 0;
  float in_xf7 = 0;
  double in_xd8 = 0;
  double dVar33;
  double in_xd10 = 0;
  double in_xd12 = 0;
  double in_xd14 = 0;
  bool bVar34;
  bool bVar35;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    puVar12 = ((undefined1 *)(fr0_ - 0x10));
  }
  else {
    puVar12 = ((undefined1 *)(fr0_ - 0x20));
  }
  *(undefined4 *)(unsigned)(puVar12 + -4) = unaff_r11;
  *(undefined4 *)(unsigned)(puVar12 + -8) = unaff_r10;
  *(undefined4 *)(unsigned)(puVar12 + -0xc) = unaff_r9;
  *(undefined4 *)(unsigned)(puVar12 + -0x10) = unaff_r8;
  iVar3 = *ar4;
  pdVar7 = (double *)(unsigned)(uint)ar4[1];
  iVar6 = ar4[2];
  pdVar4 = (double *)(unsigned)(ar4 + 4);
  iVar9 = 0;
  uVar5 = ar5 >> 8 & 0xff;
  do {
    if (in_FPSCR_SZ == '\0') {
      dVar30 = CONCAT44D(*(uint *)(unsigned)pdVar7,*(uint *)(unsigned)((int)pdVar7 + 4));
      fVar32 = *(float *)(unsigned)(pdVar7 + 1);
      pdVar7 = (double *)(unsigned)((int)pdVar7 + 0xc);
    }
    else {
      dVar30 = *pdVar7;
      in_xd12 = pdVar7[1];
      fVar32 = (float)((ulonglong)pdVar7[2] >> 0x20);
      pdVar7 = pdVar7 + 3;
    }
    dVar31 = CONCAT44D(fVar32,0x3f800000);
                    
    fVar14 = F32HI(in_xd0);
    fVar23 = F32HI(in_xd4);
    fVar26 = F32HI(in_xd10);
    fVar20 = F32HI(in_xd12);
    fVar27 = F32HI(in_xd14);
    if (in_FPSCR_PR == '\0') {
      fVar28 = F32LO(dVar30);
      fVar25 = F32HI(dVar30);
      fVar29 = F32LO(in_xd0) * fVar28 + F32LO(in_xd4) * fVar25 + F32LO(in_xd8) * 1.0 +
               F32LO(in_xd12) * fVar32;
      fVar29 = fVar14 * fVar28 + fVar23 * fVar25 + F32HI(in_xd8) * 1.0 +
               fVar20 * fVar32;
      fVar29 = in_xf2 * fVar28 + in_xf6 * fVar25 + F32LO(in_xd10) * 1.0 +
               F32LO(in_xd14) * fVar32;
      fVar32 = in_xf3 * fVar28 + in_xf7 * fVar25 + fVar26 * 1.0 + fVar27 * fVar32;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar21 = CONCAT44D(*(uint *)(unsigned)pdVar7,*(uint *)(unsigned)((int)pdVar7 + 4));
      dVar24 = (double)((ulonglong)*(uint *)(unsigned)(pdVar7 + 1) << 0x20);
      pdVar8 = (double *)(unsigned)((int)pdVar7 + 0xc);
    }
    else {
      dVar21 = *pdVar7;
      in_xd8 = pdVar7[1];
      dVar24 = pdVar7[2];
      pdVar8 = pdVar7 + 3;
    }
    dVar24 = (double)(D2U(dVar24) & 0xffffffff00000000);
    pdVar7 = (double *)(unsigned)((int)pdVar8 + 4);
                    
    if (in_FPSCR_PR == '\0') {
      fVar28 = F32LO(dVar21);
      fVar29 = F32HI(dVar21);
      fVar25 = F32HI(dVar24);
      fVar32 = F32LO(in_xd0) * fVar28 + F32LO(in_xd4) * fVar29 + F32LO(in_xd8) * 0.0 +
               F32LO(in_xd12) * fVar25;
      fVar32 = fVar14 * fVar28 + fVar23 * fVar29 + F32HI(in_xd8) * 0.0 +
               fVar20 * fVar25;
      fVar32 = in_xf2 * fVar28 + in_xf6 * fVar29 + F32LO(in_xd10) * 0.0 +
               F32LO(in_xd14) * fVar25;
      fVar32 = in_xf3 * fVar28 + in_xf7 * fVar29 + fVar26 * 0.0 + fVar27 * fVar25;
    }
    uVar10 = *(uint *)(unsigned)pdVar8 >> 0x10;
    if (in_FPSCR_PR == '\0') {
      dVar13 = CONCAT44D((float)uVar10,SUB84(in_dr0,0));
    }
    else {
      dVar13 = (double)uVar10;
    }
    pdVar8 = (double *)(unsigned)((short)*(uint *)(unsigned)pdVar8 * 0x20 + iVar6);
    if (in_FPSCR_SZ == '\0') {
      dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),(undefined4)(*(undefined1 *)(unsigned)0x8c215b60));
    }
    else {
      in_xd0 = CONCAT44D(0x8c4aa544,(undefined4)(*(undefined1 *)(unsigned)0x8c215b60));
    }
    if (in_FPSCR_PR == '\0') {
      in_dr0 = CONCAT44D(F32HI(dVar13) * F32LO(dVar13),SUB84(dVar13,0)
                               );
    }
    else {
      in_dr0 = dVar13 * dVar13;
    }
    fVar32 = F32HI(in_dr0);
    fVar14 = F32LO(dVar21);
    fVar23 = F32HI(dVar21);
    fVar20 = F32LO(dVar30);
    fVar27 = F32HI(dVar30);
    fVar26 = F32HI(dVar24);
    fVar28 = F32HI(dVar31);
    if (uVar5 == 0) {
      *(undefined4 *)(unsigned)pdVar8 = 0;
      if (in_FPSCR_PR == '\0') {
        dVar24 = CONCAT44D(fVar26 * fVar32,SUB84(dVar24,0));
        dVar21 = CONCAT44D(fVar23 * fVar32,fVar14 * fVar32);
      }
      else {
        dVar24 = dVar24 * in_dr0;
        dVar21 = dVar21 * in_dr0 * in_dr0;
      }
      if (in_FPSCR_SZ == '\0') {
        pdVar8 = (double *)(unsigned)((int)pdVar8 + 0x1c);
        *(int *)(unsigned)pdVar8 = (int)(D2U(dVar24) >> 0x20);
      }
      else {
        pdVar8 = pdVar8 + 3;
        *pdVar8 = dVar24;
      }
      if (in_FPSCR_PR == '\0') {
        dVar31 = CONCAT44D(fVar28 * fVar32,SUB84(dVar31,0));
      }
      else {
        dVar31 = dVar31 * in_dr0;
      }
      if (in_FPSCR_SZ == '\0') {
        pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
        *(int *)(unsigned)pdVar8 = (int)(D2U(dVar21) >> 0x20);
      }
      else {
        pdVar8 = pdVar8 + -1;
        *pdVar8 = dVar21;
      }
      if (in_FPSCR_PR == '\0') {
        dVar30 = CONCAT44D(fVar27,fVar20 * fVar32);
      }
      else {
        dVar30 = dVar30 * in_dr0;
      }
      if (in_FPSCR_SZ == '\0') {
        pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
        *(int *)(unsigned)pdVar8 = (int)(D2U(dVar31) >> 0x20);
      }
      else {
        pdVar8 = pdVar8 + -1;
        *pdVar8 = dVar31;
      }
      if (in_FPSCR_PR == '\0') {
        dVar30 = CONCAT44D(F32HI(dVar30) * fVar32,SUB84(dVar30,0));
      }
      else {
        dVar30 = dVar30 * in_dr0;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)pdVar8 + -4) = (int)(D2U(dVar30) >> 0x20);
      }
      else {
        pdVar8[-1] = dVar30;
      }
    }
    else if (uVar5 == 1) {
      if (in_FPSCR_SZ == '\0') {
        dVar30 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(in_dr4,0));
        dVar31 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(in_dr6,0));
        pdVar8 = pdVar8 + 1;
      }
      else {
        dVar30 = *pdVar8;
        dVar31 = pdVar8[1];
        pdVar8 = pdVar8 + 2;
      }
      if (in_FPSCR_PR == '\0') {
        dVar30 = CONCAT44D(fVar32 * fVar27 + F32HI(dVar30),
                                  fVar32 * fVar20 + F32LO(dVar30));
        dVar31 = CONCAT44D(fVar32 * fVar28 + F32HI(dVar31),
                                  SUB84(dVar31,0));
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)pdVar8 + -4) = (int)(D2U(dVar31) >> 0x20);
        pdVar8 = pdVar8 + -1;
        *(int *)(unsigned)pdVar8 = (int)(D2U(dVar30) >> 0x20);
      }
      else {
        pdVar8[-1] = dVar31;
        pdVar8 = pdVar8 + -2;
        *pdVar8 = dVar30;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 2),SUB84(dVar30,0));
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 0x14),SUB84(dVar31,0));
        pdVar8 = pdVar8 + 3;
      }
      else {
        in_dr4 = pdVar8[2];
        in_dr6 = pdVar8[3];
        pdVar8 = pdVar8 + 4;
      }
      if (in_FPSCR_PR == '\0') {
        in_dr4 = CONCAT44D(fVar32 * fVar23 + F32HI(in_dr4),
                                  fVar32 * fVar14 + F32LO(in_dr4));
        in_dr6 = CONCAT44D(fVar32 * fVar26 + F32HI(in_dr6),
                                  SUB84(in_dr6,0));
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)pdVar8 + -4) = (int)((ulonglong)in_dr6 >> 0x20);
        *(int *)(unsigned)(pdVar8 + -1) = (int)((ulonglong)in_dr4 >> 0x20);
      }
      else {
        pdVar8[-1] = in_dr6;
        pdVar8[-2] = in_dr4;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar30 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(in_dr4,0));
        pdVar8 = (double *)(unsigned)((int)pdVar8 + 4);
      }
      else {
        dVar30 = *pdVar8;
        pdVar8 = pdVar8 + 1;
      }
      if (in_FPSCR_PR == '\0') {
        dVar30 = CONCAT44D(fVar32 * fVar27 + F32HI(dVar30),
                                  SUB84(dVar30,0));
      }
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar30,0));
        pdVar8 = (double *)(unsigned)((int)pdVar8 + 4);
        dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),fVar20);
      }
      else {
        dVar21 = *pdVar8;
        pdVar8 = pdVar8 + 1;
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = CONCAT44D(fVar32 * F32LO(dVar30) + F32HI(dVar21),
                                  SUB84(dVar21,0));
      }
      if (in_FPSCR_SZ == '\0') {
        dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),(int)(D2U(dVar21) >> 0x20))
        ;
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar21,0));
        pdVar8 = (double *)(unsigned)((int)pdVar8 + 4);
      }
      else {
        dVar13 = *pdVar8;
        pdVar8 = pdVar8 + 1;
        in_xd12 = dVar21;
      }
      if (in_FPSCR_PR == '\0') {
        dVar13 = CONCAT44D(fVar32 * fVar28 + F32HI(dVar13),
                                  SUB84(dVar13,0));
      }
      if (in_FPSCR_SZ == '\0') {
        uVar16 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(dVar13,0));
        pdVar8 = pdVar8 + 1;
        dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),SUB84(dVar31,0));
      }
      else {
        uVar16 = *(undefined8 *)(unsigned)((int)pdVar8 + 4);
        pdVar8 = (double *)(unsigned)((int)pdVar8 + 0xc);
      }
      if (in_FPSCR_PR == '\0') {
        uVar16 = CONCAT44(fVar32 * fVar23 + F32HI(uVar16),(int)uVar16);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar31 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,(int)uVar16);
        pdVar8 = (double *)(unsigned)((int)pdVar8 + 4);
        uVar16 = CONCAT44((int)((ulonglong)uVar16 >> 0x20),fVar14);
      }
      else {
        dVar31 = *pdVar8;
        pdVar8 = pdVar8 + 1;
      }
      if (in_FPSCR_PR == '\0') {
        dVar31 = CONCAT44D(fVar32 * (float)uVar16 + F32HI(dVar31),
                                  SUB84(dVar31,0));
      }
      if (in_FPSCR_SZ == '\0') {
        uVar16 = CONCAT44((int)((ulonglong)uVar16 >> 0x20),(int)(D2U(dVar31) >> 0x20));
        dVar21 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar31,0));
        pdVar8 = (double *)(unsigned)((int)pdVar8 + 4);
        dVar31 = in_xd8;
      }
      else {
        dVar21 = *pdVar8;
        pdVar8 = pdVar8 + 1;
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = CONCAT44D(fVar32 * fVar26 + F32HI(dVar21),
                                  SUB84(dVar21,0));
      }
      dVar18 = dVar21;
      if (in_FPSCR_SZ == '\0') {
        dVar18 = CONCAT44D((int)(D2U(dVar21) >> 0x20),SUB84(dVar24,0));
      }
      dVar24 = 0.0;
      uVar10 = *(undefined4 *)(unsigned)0x8c4c0db0;
      fVar32 = 0.0;
      pdVar11 = (double *)(unsigned)(0x8c4c0db0 + 4);
      fVar14 = 0.0;
      do {
        bVar34 = (uVar10 & 1) != 0;
        uVar10 = uVar10 >> 1 | (uint)bVar34 << 0x1f;
        while( true ) {
          while( true ) {
            while( true ) {
              bVar35 = (uVar10 & 1) != 0;
              uVar10 = uVar10 >> 1;
              uVar2 = uVar10 | (uint)bVar35 << 0x1f;
              fVar23 = (float)uVar16;
              fVar26 = F32HI(dVar30);
              if (bVar34) break;
              bVar35 = (uVar10 & 1) != 0;
              pdVar11 = pdVar11 + 4;
              if (bVar35) goto LAB_8c215af4;
              bVar34 = (uVar10 & 2) != 0;
              uVar10 = (uVar2 >> 1 | (uint)bVar35 << 0x1f) >> 1 | (uint)bVar34 << 0x1f;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar21 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,*(undefined4 *)(unsigned)((int)pdVar11 + 4));
              pdVar1 = pdVar11 + 1;
            }
            else {
              dVar21 = *pdVar11;
              in_xd4 = pdVar11[1];
              pdVar1 = pdVar11 + 2;
            }
            fVar29 = F32HI(dVar18);
            fVar20 = F32LO(dVar21);
            fVar27 = F32HI(dVar21);
            fVar28 = F32HI(uVar16);
            uVar15 = SUB84(dVar24,0);
            if (bVar35) break;
            if (in_FPSCR_SZ == '\0') {
              dVar22 = CONCAT44D(*(undefined4 *)(unsigned)pdVar1,SUB84(in_dr6,0));
              pdVar1 = (double *)(unsigned)((int)pdVar1 + 4);
            }
            else {
              dVar22 = *pdVar1;
              pdVar1 = pdVar1 + 1;
            }
            dVar18 = (double)((ulonglong)(uint)fVar29 << 0x20);
                    
            if (in_FPSCR_PR == '\0') {
              fVar27 = fVar23 * fVar20 + fVar28 * fVar27 + F32LO(dVar22) * 0.0 +
                       fVar29 * F32HI(dVar22);
            }
            in_dr6 = (double)(D2U(dVar22) & 0xffffffff00000000);
            if (in_FPSCR_PR == '\0') {
              bVar34 = SUB84(dVar18,0) < 0.0;
            }
            else {
              bVar34 = dVar18 < in_dr6;
            }
            pdVar11 = (double *)(unsigned)((int)pdVar1 + 0x14);
            bVar35 = (uVar10 & 1) != 0;
            uVar2 = uVar2 >> 1 | (uint)bVar35 << 0x1f;
            if (bVar34) {
              if (in_FPSCR_SZ == '\0') {
                dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar1 + 1),fVar20);
                pdVar1 = (double *)(unsigned)((int)pdVar1 + 0xc);
                dVar24 = CONCAT44D(SUB84(dVar18,0),uVar15);
              }
              else {
                dVar21 = pdVar1[1];
                pdVar1 = pdVar1 + 2;
                dVar24 = in_xd10;
              }
              if (in_FPSCR_PR == '\0') {
                dVar24 = CONCAT44D(-F32HI(dVar24),SUB84(dVar24,0));
              }
              else {
                dVar24 = -dVar24;
              }
              if (in_FPSCR_SZ == '\0') {
                dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)pdVar1);
                pdVar1 = (double *)(unsigned)((int)pdVar1 + 4);
              }
              else {
                in_xd4 = *pdVar1;
                pdVar1 = pdVar1 + 1;
              }
              if (in_FPSCR_PR == '\0') {
                fVar20 = F32HI(dVar24);
                dVar24 = CONCAT44D(fVar20,fVar20 * F32HI(dVar21) +
                                                 SUB84(dVar24,0));
              }
              if (in_FPSCR_SZ == '\0') {
                in_dr6 = (double)((ulonglong)*(uint *)(unsigned)pdVar1 << 0x20);
                pdVar11 = (double *)(unsigned)((int)pdVar1 + 4);
              }
              else {
                in_dr6 = *pdVar1;
                pdVar11 = pdVar1 + 1;
              }
              fVar20 = F32HI(dVar24);
              if (in_FPSCR_PR == '\0') {
                fVar32 = fVar20 * F32LO(dVar21) + fVar32;
                fVar14 = fVar20 * F32HI(in_dr6) + fVar14;
              }
              if (bVar35) goto LAB_8c215af4;
              bVar34 = (uVar10 & 2) != 0;
              uVar10 = uVar2 >> 1 | (uint)bVar34 << 0x1f;
            }
            else {
              if (bVar35) goto LAB_8c215af4;
              bVar34 = (uVar10 & 2) != 0;
              uVar10 = uVar2 >> 1 | (uint)bVar34 << 0x1f;
            }
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = CONCAT44D(fVar27 - fVar26,fVar20);
          }
          else {
            dVar21 = dVar21 - dVar30;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar18 = CONCAT44D(*(undefined4 *)(unsigned)pdVar1,SUB84(in_dr6,0));
            pdVar1 = (double *)(unsigned)((int)pdVar1 + 4);
          }
          else {
            dVar18 = *pdVar1;
            pdVar1 = pdVar1 + 1;
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                      F32LO(dVar21) - F32LO(dVar30));
          }
          else {
            dVar21 = dVar21 - dVar30;
          }
          fVar20 = F32HI(dVar13);
          if (in_FPSCR_PR == '\0') {
            in_dr6 = (double)((ulonglong)(uint)(F32HI(dVar18) - fVar20) << 0x20
                             );
          }
          else {
            in_dr6 = (double)(D2U(dVar18) & 0xffffffff00000000) - dVar13;
          }
          dVar18 = (double)((ulonglong)(uint)fVar29 << 0x20);
          dVar24 = (double)(D2U(dVar24) & 0xffffffff);
                    
          fVar27 = F32LO(dVar21);
          fVar25 = F32HI(dVar21);
          fVar17 = F32LO(in_dr6);
          fVar19 = F32HI(in_dr6);
          if (in_FPSCR_PR == '\0') {
            fVar28 = fVar23 * fVar27 + fVar28 * fVar25 + fVar17 * 0.0 + fVar29 * fVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar13 = CONCAT44D(fVar20,*(undefined4 *)(unsigned)pdVar1);
            pdVar1 = (double *)(unsigned)((int)pdVar1 + 4);
          }
          else {
            in_xd14 = *pdVar1;
            pdVar1 = pdVar1 + 1;
          }
                    
          if (in_FPSCR_PR == '\0') {
            fVar20 = fVar27 * fVar27 + fVar25 * fVar25 + fVar17 * fVar17 + fVar19 * fVar19;
            bVar34 = 0.0 < SUB84(dVar18,0);
          }
          else {
            bVar34 = dVar24 < dVar18;
          }
          fVar20 = F32LO(in_dr6);
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D(fVar20,fVar27);
          }
          else {
            dVar21 = CONCAT44D(in_xf7,in_xf6);
          }
          if (in_FPSCR_PR == '\0') {
            bVar35 = fVar20 < SUB84(dVar13,0);
            dVar21 = CONCAT44D(1.0 / SQRT(F32HI(dVar21)),SUB84(dVar21,0)
                                     );
          }
          else {
            bVar35 = in_dr6 < dVar13;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),*(undefined4 *)(unsigned)pdVar1);
            pdVar1 = (double *)(unsigned)((int)pdVar1 + 4);
          }
          else {
            in_xd14 = *pdVar1;
            pdVar1 = pdVar1 + 1;
          }
          if ((byte)(bVar34 << 1 | bVar35) == 3) break;
          bVar35 = (uVar10 & 1) != 0;
          pdVar11 = (double *)(unsigned)((int)pdVar1 + 0xc);
          if (bVar35) goto LAB_8c215af4;
          bVar34 = (uVar10 & 2) != 0;
          uVar10 = (uVar2 >> 1 | (uint)bVar35 << 0x1f) >> 1 | (uint)bVar34 << 0x1f;
        }
        fVar27 = F32HI(dVar21);
        if (in_FPSCR_PR == '\0') {
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),F32LO(dVar18) * fVar27);
          bVar34 = SUB84(dVar13,0) < fVar20;
          dVar21 = CONCAT44D(fVar27 * fVar27,SUB84(dVar21,0));
        }
        else {
          dVar18 = dVar18 * dVar21;
          bVar34 = dVar13 < in_dr6;
          dVar21 = dVar21 * dVar21;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)pdVar1);
          pdVar1 = (double *)(unsigned)((int)pdVar1 + 4);
        }
        else {
          in_xd4 = *pdVar1;
          pdVar1 = pdVar1 + 1;
        }
        if (bVar34) {
          if (in_FPSCR_PR == '\0') {
            dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),
                                      F32LO(dVar18) * F32LO(dVar13) *
                                      F32HI(dVar21));
          }
          else {
            dVar18 = dVar18 * dVar13 * dVar21;
          }
        }
        dVar24 = in_xd10;
        if (in_FPSCR_SZ == '\0') {
          dVar24 = CONCAT44D(SUB84(dVar18,0),uVar15);
        }
        bVar34 = (uVar10 & 1) != 0;
        uVar10 = uVar2 >> 1 | (uint)bVar34 << 0x1f;
        if (in_FPSCR_SZ == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)pdVar1,SUB84(dVar21,0));
          pdVar1 = (double *)(unsigned)((int)pdVar1 + 4);
        }
        else {
          dVar21 = *pdVar1;
          pdVar1 = pdVar1 + 1;
        }
        if (in_FPSCR_PR == '\0') {
          fVar27 = F32HI(dVar24);
          dVar24 = CONCAT44D(fVar27,fVar27 * F32LO(dVar21) + F32LO(dVar24));
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)pdVar1,fVar20);
          pdVar11 = (double *)(unsigned)((int)pdVar1 + 4);
        }
        else {
          in_dr6 = *pdVar1;
          pdVar11 = pdVar1 + 1;
        }
        fVar20 = F32HI(dVar24);
        if (in_FPSCR_PR == '\0') {
          fVar32 = fVar20 * F32HI(dVar21) + fVar32;
          fVar14 = fVar20 * F32HI(in_dr6) + fVar14;
        }
      } while (!bVar34);
LAB_8c215af4:
      if (in_FPSCR_SZ == '\0') {
        dVar22 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa544,fVar23);
        pdVar11 = (double *)(unsigned)((unsigned)0x8c4aa544 + 4);
      }
      else {
        dVar22 = *(undefined4 *)(unsigned)0x8c4aa544;
        pdVar11 = 0x8c4aa544 + 1;
      }
      fVar23 = F32HI(dVar22);
      fVar20 = F32HI(dVar13);
      if (in_FPSCR_PR == '\0') {
        bVar34 = fVar23 < fVar20;
      }
      else {
        bVar34 = dVar22 < dVar13;
      }
      uVar15 = SUB84(dVar21,0);
      if (bVar34) {
        if (in_FPSCR_SZ == '\0') {
          dVar22 = CONCAT44D(fVar23,*(undefined4 *)(unsigned)pdVar11);
          pdVar11 = (double *)(unsigned)((int)pdVar11 + 4);
          dVar33 = dVar31;
        }
        else {
          dVar33 = *pdVar11;
          pdVar11 = pdVar11 + 1;
        }
        if (in_FPSCR_PR == '\0') {
          bVar34 = fVar20 < SUB84(dVar22,0);
        }
        else {
          bVar34 = dVar13 < dVar22;
        }
        if (bVar34) {
          if (in_FPSCR_SZ == '\0') {
            dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),*(undefined4 *)(unsigned)pdVar11);
          }
          else {
            in_xd10 = *pdVar11;
          }
          dVar31 = dVar13;
          if (in_FPSCR_SZ == '\0') {
            dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),fVar20);
            dVar31 = dVar33;
          }
          if (in_FPSCR_PR == '\0') {
            in_dr4 = CONCAT44D(1.0 - (F32LO(dVar22) - F32HI(dVar22)) *
                                            SUB84(dVar18,0),uVar15);
          }
          else {
            in_dr4 = CONCAT44D(0x3f800000,uVar15) - (dVar22 - dVar22) * dVar18;
          }
        }
        else {
          in_dr4 = (double)(D2U(dVar21) & 0xffffffff);
          dVar31 = dVar33;
        }
      }
      else {
        in_dr4 = CONCAT44D(0x3f800000,uVar15);
      }
      dVar21 = CONCAT44D(0x3f800000,SUB84(dVar24,0));
      if (in_FPSCR_PR == '\0') {
        bVar34 = fVar20 < 1.0;
        in_dr0 = CONCAT44D(1.0 / fVar20,SUB84(dVar24,0));
      }
      else {
        bVar34 = dVar13 < dVar21;
        in_dr0 = dVar21 / dVar13;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar24 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,*(undefined4 *)(unsigned)((int)pdVar4 + 4));
        dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar4 + 1),SUB84(dVar18,0));
        pdVar4 = (double *)(unsigned)((int)pdVar4 + 0xc);
        in_xd8 = dVar31;
      }
      else {
        dVar24 = *pdVar4;
        in_xd8 = pdVar4[1];
        dVar21 = pdVar4[2];
        pdVar4 = pdVar4 + 3;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)pdVar4);
        pdVar4 = (double *)(unsigned)((int)pdVar4 + 4);
      }
      else {
        in_xd10 = *pdVar4;
        pdVar4 = pdVar4 + 1;
      }
      pdVar4 = pdVar4 + -2;
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)pdVar8 = fVar14;
      }
      else {
        pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
        *pdVar8 = CONCAT44D(in_xf3,in_xf2);
      }
      if (in_FPSCR_PR == '\0') {
        dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),F32LO(dVar24) * F32LO(dVar30)
                                 );
      }
      else {
        dVar24 = dVar24 * dVar30;
      }
      if (in_FPSCR_SZ == '\0') {
        pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
        *(float *)(unsigned)pdVar8 = fVar32;
      }
      else {
        pdVar8 = pdVar8 + -1;
        *pdVar8 = CONCAT44D(fVar32,fVar14);
      }
      if (in_FPSCR_PR == '\0') {
        dVar24 = CONCAT44D(F32HI(dVar24) * fVar26,SUB84(dVar24,0));
      }
      else {
        dVar24 = dVar24 * dVar30;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)pdVar8 + -4) = SUB84(in_dr0,0);
        pdVar8 = pdVar8 + -1;
        *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr4 >> 0x20);
      }
      else {
        pdVar8[-1] = in_xd0;
        pdVar8 = pdVar8 + -2;
        *pdVar8 = in_dr4;
      }
      fVar32 = F32HI(in_dr0);
      if (in_FPSCR_PR == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                  fVar32 * F32LO(dVar24) + F32LO(dVar21));
      }
      if (in_FPSCR_SZ == '\0') {
        pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
        *(float *)(unsigned)pdVar8 = fVar32;
      }
      else {
        pdVar8 = pdVar8 + -1;
        *pdVar8 = in_dr0;
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = CONCAT44D(fVar32 * F32HI(dVar24) +
                                  F32HI(dVar21),SUB84(dVar21,0));
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)pdVar8 + -4) = SUB84(dVar21,0);
        pdVar8 = pdVar8 + -1;
        *(int *)(unsigned)pdVar8 = (int)(D2U(dVar21) >> 0x20);
      }
      else {
        pdVar8[-1] = in_xd10;
        pdVar8 = pdVar8 + -2;
        *pdVar8 = dVar21;
      }
      iVar9 = iVar9 + (uint)bVar34;
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)((int)pdVar8 + -4) = fVar20;
      }
      else {
        pdVar8[-1] = dVar13;
      }
    }
    bVar34 = iVar3 == 1;
    iVar3 = iVar3 + -1;
    if (bVar34) {
      return iVar9;
    }
  } while( true );
}

__asm__(".globl _FUN_8c215988\n.set _FUN_8c215988, _FUN_8c215988_def\n");
