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
double * FUN_8c22f6c0_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c22f6c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  double *a4;
  uint uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar18;
  double in_dr0 = 0;
  double dVar19;
  double in_dr2 = 0;
  double dVar20;
  float fVar21;
  double in_dr4 = 0;
  double in_dr6 = 0;
  double dVar22;
  undefined4 uVar26;
  undefined4 uVar27;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar29;
  double dVar30;
  float fVar32;
  double dVar31;
  undefined8 in_dr12 = 0;
  undefined8 in_dr14 = 0;
  double dVar33;
  undefined8 in_xd4 = 0;
  undefined8 in_xd8 = 0;
  undefined8 in_xd10 = 0;
  undefined8 uVar34;
  undefined8 in_xd14 = 0;
  bool bVar35;
  char cVar36;
  char cVar37;
  double *pdVar17;
  undefined4 uVar28;
  
  cVar37 = '\0';
  cVar36 = '\0';
  (*(undefined4 *)(fr0_ - 0x20)) = (int)((ulonglong)in_dr12 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x24)) = (int)in_dr12;
  (*(undefined4 *)(fr0_ - 0x28)) = (int)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x2c)) = (int)in_dr14;
  puVar18 = ((undefined4 *)(fr0_ - 0x34));
  ((undefined4 *)(fr0_ - 0x34))[0] = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0);
  uVar1 = ar6 & 0x3fff;
  iVar2 = 0;
  iVar3 = 0;
  iVar6 = (ar6 >> 0xe & 3) << 1;
  do {
    iVar7 = (int)*ar4;
    fVar29 = 1.0;
    if ((*puVar18 & 0x80000000) != 0) {
      fVar29 = -1.0;
    }
    pdVar8 = (double *)(unsigned)(ar4[1] * 0x20 + ar5);
    if (iVar7 < 0) {
      iVar7 = -iVar7;
      fVar29 = -fVar29;
    }
    iVar3 = iVar3 + iVar7;
    iVar7 = iVar7 + -2;
    iVar13 = 0;
    iVar14 = 0;
    if (cVar36 == '\0') {
      fVar32 = (float)(int)ar4[2];
    }
    else {
      fVar32 = (float)((ulonglong)(double)(int)ar4[2] >> 0x20);
    }
    psVar5 = ar4 + 5;
    fVar21 = F32LO(in_dr4);
    if (cVar36 == '\0') {
      dVar31 = CONCAT44D(fVar32 * fVar21,(float)(int)ar4[3]);
    }
    else {
      dVar31 = CONCAT44D(fVar32,(float)(int)ar4[3]) * in_dr4;
    }
    pdVar10 = (double *)(unsigned)(ar4[4] * 0x20 + ar5);
    if (cVar36 == '\0') {
      dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),F32LO(dVar31) * fVar21);
    }
    else {
      dVar31 = dVar31 * in_dr4;
    }
    psVar4 = ar4 + 6;
    ar4 = ar4 + 7;
    if (cVar36 == '\0') {
      fVar32 = (float)(int)*psVar5;
    }
    else {
      fVar32 = (float)((ulonglong)(double)(int)*psVar5 >> 0x20);
    }
    if (cVar36 == '\0') {
      dVar25 = CONCAT44D(fVar32 * fVar21,(float)(int)*psVar4 * fVar21);
    }
    else {
      dVar25 = CONCAT44D(fVar32,(float)(int)*psVar4) * in_dr4 * in_dr4;
    }
    do {
      if (cVar36 == '\0') {
        fVar32 = (float)(int)ar4[1];
      }
      else {
        fVar32 = (float)((ulonglong)(double)(int)ar4[1] >> 0x20);
      }
      if (cVar37 == '\0') {
        dVar19 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(in_dr0,0));
        pdVar8 = pdVar8 + 1;
      }
      else {
        dVar19 = *(double *)(unsigned)((int)pdVar8 + 4);
        pdVar8 = (double *)(unsigned)((int)pdVar8 + 0xc);
      }
      if (cVar37 == '\0') {
        dVar22 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(in_dr6,0));
        pdVar9 = (double *)(unsigned)((int)pdVar8 + 4);
      }
      else {
        dVar22 = *pdVar8;
        pdVar9 = pdVar8 + 1;
      }
      if (cVar37 == '\0') {
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar10 + 4)
                                 );
        pdVar10 = pdVar10 + 1;
      }
      else {
        pdVar10 = (double *)(unsigned)((int)pdVar10 + 0xc);
      }
      iVar12 = *ar4 * 0x20 + ar5;
      if (cVar37 == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)pdVar10);
        pdVar11 = (double *)(unsigned)((int)pdVar10 + 4);
      }
      else {
        pdVar11 = pdVar10 + 1;
      }
      fVar21 = F32LO(in_dr4);
      if (cVar36 == '\0') {
        dVar33 = CONCAT44D(fVar32 * fVar21,(float)(int)ar4[2] * fVar21);
        dVar19 = CONCAT44D(F32HI(dVar19) - F32LO(dVar19),
                                  SUB84(dVar19,0));
        dVar22 = CONCAT44D(F32HI(dVar22) - F32LO(dVar22),
                                  SUB84(dVar22,0));
      }
      else {
        dVar33 = CONCAT44D(fVar32,(float)(int)ar4[2]) * in_dr4 * in_dr4;
        dVar19 = dVar19 - dVar19;
        dVar22 = dVar22 - dVar22;
      }
      a4 = (double *)(unsigned)((int)pdVar9 + -0xc);
      pdVar8 = (double *)(unsigned)((int)pdVar11 + -0xc);
      if (cVar37 == '\0') {
        dVar20 = CONCAT44D(*(undefined4 *)(unsigned)(iVar12 + 4),SUB84(in_dr2,0));
        dVar30 = CONCAT44D(*(undefined4 *)(unsigned)(iVar12 + 8),fVar29);
        iVar12 = iVar12 + 0xc;
      }
      else {
        dVar20 = *(double *)(unsigned)(iVar12 + 4);
        dVar30 = *(double *)(unsigned)(iVar12 + 0xc);
        iVar12 = iVar12 + 0x14;
      }
      pdVar10 = (double *)(unsigned)(iVar12 + -0xc);
      if (cVar36 == '\0') {
        fVar29 = F32HI(dVar20) - F32LO(dVar19);
      }
      else {
        fVar29 = (float)((ulonglong)(dVar20 - dVar19) >> 0x20);
      }
      psVar5 = ar4 + 3;
      if (cVar37 == '\0') {
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)a4);
      }
      if (cVar36 == '\0') {
        dVar30 = CONCAT44D(F32HI(dVar30) - F32LO(dVar22),
                                  SUB84(dVar30,0));
      }
      else {
        dVar30 = dVar30 - dVar22;
      }
      dVar20 = CONCAT44D(fVar29,0x3f800000);
      if (cVar36 == '\0') {
        dVar30 = CONCAT44D(F32HI(dVar30) *
                                  F32HI(dVar19),SUB84(dVar30,0));
        bVar35 = SUB84(dVar19,0) < 1.0;
        in_dr6 = CONCAT44D(F32HI(dVar22) * fVar29,SUB84(dVar22,0));
      }
      else {
        dVar30 = dVar30 * dVar19;
        bVar35 = dVar19 < dVar20;
        in_dr6 = dVar22 * dVar20;
      }
      fVar29 = F32HI(in_dr4);
      uVar28 = (undefined4)(D2U(dVar25) >> 0x20);
      uVar27 = (undefined4)(D2U(dVar31) >> 0x20);
      dVar22 = dVar33;
      if (bVar35) {
LAB_8c22f846:
        if (iVar13 == 0) {
          if (iVar14 != 0) {
            if (cVar37 == '\0') {
              dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar19,0));
              pdVar11 = pdVar11 + -1;
            }
            else {
              dVar19 = *pdVar8;
              pdVar11 = (double *)(unsigned)((int)pdVar11 + -4);
            }
            if (cVar37 == '\0') {
              dVar20 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,0x3f800000);
              dVar23 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 4),SUB84(in_dr6,0));
              pdVar11 = pdVar11 + 1;
            }
            else {
              dVar20 = *pdVar11;
              dVar23 = pdVar11[1];
              pdVar11 = pdVar11 + 2;
            }
            if (cVar36 == '\0') {
              dVar23 = CONCAT44D(-F32HI(dVar23),SUB84(dVar23,0));
            }
            else {
              dVar23 = -dVar23;
            }
            pdVar8 = pdVar11 + -3;
            if (cVar37 == '\0') {
              pdVar9 = (double *)(unsigned)((int)ar7 + 0x14);
              *(undefined4 *)(unsigned)pdVar9 = uVar28;
            }
            else {
              pdVar9 = ar7 + 2;
              *pdVar9 = dVar25;
            }
            if (cVar36 == '\0') {
              dVar23 = CONCAT44D(F32HI(dVar23) + fVar29,SUB84(dVar23,0))
              ;
            }
            else {
              dVar23 = dVar23 + in_dr4;
            }
            if (cVar37 == '\0') {
              pdVar9 = (double *)(unsigned)((int)pdVar9 + -4);
              *(int *)(unsigned)pdVar9 = (int)(D2U(dVar20) >> 0x20);
            }
            else {
              pdVar9 = pdVar9 + -1;
              *pdVar9 = dVar20;
            }
            if (cVar36 == '\0') {
              bVar35 = F32HI(dVar23) < fVar29;
            }
            else {
              bVar35 = dVar23 < in_dr4;
            }
            if (cVar37 == '\0') {
              pdVar9 = (double *)(unsigned)((int)pdVar9 + -4);
              *(int *)(unsigned)pdVar9 = (int)(D2U(dVar19) >> 0x20);
            }
            else {
              pdVar9 = pdVar9 + -1;
              *pdVar9 = dVar19;
            }
            dVar24 = dVar23;
            if ((bVar35) && (dVar24 = in_dr4, cVar37 == '\0')) {
              dVar24 = CONCAT44D(fVar29,SUB84(dVar23,0));
            }
            uVar28 = (undefined4)(D2U(dVar24) >> 0x20);
            in_dr6 = CONCAT44D(uVar28,-SUB84(dVar24,0));
            iVar2 = iVar2 + iVar14 + 1;
            *(undefined4 *)(unsigned)pdVar9 = 0xf0000000;
            if (cVar37 == '\0') {
              *(undefined4 *)(unsigned)(pdVar9 + 3) = uVar28;
            }
            else {
              pdVar9[3] = in_dr6;
            }
            ar7 = pdVar9 + 4;
          }
        }
        else {
          if (cVar37 == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar19,0));
            pdVar11 = pdVar11 + -1;
          }
          else {
            dVar19 = *pdVar8;
            pdVar11 = (double *)(unsigned)((int)pdVar11 + -4);
          }
          if (cVar37 == '\0') {
            dVar20 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,0x3f800000);
            dVar23 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 4),SUB84(in_dr6,0));
            pdVar11 = pdVar11 + 1;
          }
          else {
            dVar20 = *pdVar11;
            dVar23 = pdVar11[1];
            pdVar11 = pdVar11 + 2;
          }
          pdVar8 = pdVar11 + -3;
          if (cVar37 == '\0') {
            pdVar9 = (double *)(unsigned)((int)ar7 + 0x14);
            *(undefined4 *)(unsigned)pdVar9 = uVar28;
          }
          else {
            pdVar9 = ar7 + 2;
            *pdVar9 = dVar25;
          }
          if (cVar36 == '\0') {
            dVar23 = CONCAT44D(F32HI(dVar23) + fVar29,SUB84(dVar23,0));
          }
          else {
            dVar23 = dVar23 + in_dr4;
          }
          if (cVar37 == '\0') {
            pdVar9 = (double *)(unsigned)((int)pdVar9 + -4);
            *(int *)(unsigned)pdVar9 = (int)(D2U(dVar20) >> 0x20);
          }
          else {
            pdVar9 = pdVar9 + -1;
            *pdVar9 = dVar20;
          }
          if (cVar36 == '\0') {
            bVar35 = F32HI(dVar23) < fVar29;
          }
          else {
            bVar35 = dVar23 < in_dr4;
          }
          if (cVar37 == '\0') {
            pdVar9 = (double *)(unsigned)((int)pdVar9 + -4);
            *(int *)(unsigned)pdVar9 = (int)(D2U(dVar19) >> 0x20);
          }
          else {
            pdVar9 = pdVar9 + -1;
            *pdVar9 = dVar19;
          }
          in_dr6 = dVar23;
          if ((bVar35) && (in_dr6 = in_dr4, cVar37 == '\0')) {
            in_dr6 = CONCAT44D(fVar29,SUB84(dVar23,0));
          }
          iVar2 = iVar2 + iVar13 + 1;
          *(undefined4 *)(unsigned)pdVar9 = 0xf0000000;
          if (cVar37 == '\0') {
            *(int *)(unsigned)(pdVar9 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            pdVar9[3] = in_dr6;
          }
          ar7 = pdVar9 + 4;
        }
        iVar13 = 0;
        if (cVar37 == '\0') {
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)a4,SUB84(dVar19,0));
        }
        else {
          dVar19 = *a4;
        }
        iVar14 = 0;
        in_dr2 = CONCAT44D((int)(D2U(dVar20) >> 0x20),0x3f800000);
        if (cVar36 == '\0') {
          bVar35 = 1.0 < F32HI(dVar19);
        }
        else {
          bVar35 = in_dr2 < dVar19;
        }
        if (cVar37 == '\0') {
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar19,0));
        }
        else {
          dVar19 = *pdVar8;
        }
        if (!bVar35) {
          if (cVar36 == '\0') {
            bVar35 = 1.0 < F32HI(dVar19);
          }
          else {
            bVar35 = in_dr2 < dVar19;
          }
          if (cVar37 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(dVar19,0));
          }
          else {
            in_dr0 = *pdVar10;
          }
          if (!bVar35) {
            if (cVar36 == '\0') {
              bVar35 = F32HI(in_dr0) < 1.0;
            }
            else {
              bVar35 = in_dr0 < in_dr2;
            }
            if (bVar35) goto LAB_8c22f9ac;
          }
        }
        *(uint *)(unsigned)((int)puVar18 + -4) = uVar1;
        *(int *)(unsigned)((int)puVar18 + -8) = iVar2;
        *(int *)(unsigned)((int)puVar18 + -0xc) = iVar3;
        *(unsigned *)(unsigned)((int)puVar18 + -0x10) = psVar5;
        *(int *)(unsigned)((int)puVar18 + -0x14) = ar5;
        *(int *)(unsigned)((int)puVar18 + -0x18) = iVar6;
        if (cVar37 == '\0') {
          *(float *)(unsigned)((int)puVar18 + -0x1c) = fVar29;
          *(float *)(unsigned)((int)puVar18 + -0x20) = fVar21;
          *(float *)(unsigned)((int)puVar18 + -0x24) = SUB84(dVar30,0);
          *(undefined4 *)(unsigned)((int)puVar18 + -0x28) = uVar27;
          puVar15 = (uint *)(unsigned)((int)puVar18 + -0x2c);
          *(int *)(unsigned)((int)puVar18 + -0x2c) = SUB84(dVar31,0);
          uVar34 = in_xd10;
          in_dr6 = (double)(D2U(dVar25) & 0xffffffff);
          in_xd10 = in_xd4;
          in_dr0 = (double)(D2U(dVar30) & 0xffffffff);
        }
        else {
          *(double *)(unsigned)((int)puVar18 + -0x20) = in_dr4;
          *(undefined8 *)(unsigned)((int)puVar18 + -0x28) = in_xd4;
          *(undefined8 *)(unsigned)((int)puVar18 + -0x30) = in_xd8;
          *(double *)(unsigned)((int)puVar18 + -0x38) = dVar31;
          puVar15 = (uint *)(unsigned)((int)puVar18 + -0x40);
          *(undefined8 *)(unsigned)((int)puVar18 + -0x40) = in_xd10;
          uVar34 = in_xd8;
          in_xd8 = in_xd14;
          in_dr6 = dVar25;
          in_dr0 = in_dr4;
        }
        ar7 = (double *)(unsigned)(vsp = (puVar18 ? (unsigned long)puVar18 - 64 : (unsigned long)(fr0_ - 120)), FUN_8c22fa7c(a4,pdVar8,pdVar10,ar7));
        if (cVar37 == '\0') {
          dVar31 = (double)(ulonglong)*puVar15;
          pdVar17 = (double *)(unsigned)(puVar15 + 3);
          puVar16 = puVar15 + 5;
          in_xd4 = in_xd10;
          dVar30 = (double)(ulonglong)puVar15[2];
          in_xd10 = uVar34;
        }
        else {
          in_xd10 = *(undefined8 *)(unsigned)puVar15;
          dVar31 = *(double *)(unsigned)(puVar15 + 2);
          in_xd8 = *(undefined8 *)(unsigned)(puVar15 + 4);
          in_xd4 = *(undefined8 *)(unsigned)(puVar15 + 6);
          pdVar17 = (double *)(unsigned)(puVar15 + 8);
          puVar16 = puVar15 + 10;
          dVar30 = dVar33;
        }
        in_dr4 = *pdVar17;
        iVar6 = *puVar16;
        ar5 = puVar16[1];
        psVar5 = (short *)(unsigned)puVar16[2];
        iVar3 = puVar16[3];
        iVar2 = puVar16[4];
        uVar1 = puVar16[5];
        puVar18 = puVar16 + 6;
        if (cVar36 == '\0') {
          puVar18 = puVar16 + 6;
        }
      }
      else {
        if (cVar37 == '\0') {
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar19,0));
        }
        else {
          dVar19 = *pdVar8;
        }
        if (cVar36 == '\0') {
          fVar32 = F32HI(in_dr6) - F32HI(dVar30);
          bVar35 = F32HI(dVar19) < 1.0;
        }
        else {
          fVar32 = (float)((ulonglong)(in_dr6 - dVar30) >> 0x20);
          bVar35 = dVar19 < dVar20;
        }
        in_dr6 = (double)((ulonglong)(uint)fVar32 << 0x20);
        if (bVar35) goto LAB_8c22f846;
        if (cVar37 == '\0') {
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(dVar19,0));
        }
        else {
          dVar19 = *pdVar10;
        }
        if (cVar36 == '\0') {
          in_dr6 = (double)((ulonglong)(uint)(fVar32 * F32LO(dVar30)) << 0x20);
          bVar35 = F32HI(dVar19) < 1.0;
        }
        else {
          in_dr6 = in_dr6 * dVar30;
          bVar35 = dVar19 < dVar20;
        }
        if (bVar35) goto LAB_8c22f846;
        fVar32 = F32LO(in_dr6);
        if (cVar36 != '\0' || fVar32 <= F32HI(in_dr6)) {
          if (iVar13 != 0) {
            if (cVar37 == '\0') {
              dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar19,0));
              dVar20 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar11 + -1),0x3f800000);
              dVar33 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + -4),fVar32);
            }
            else {
              dVar19 = *pdVar8;
              dVar20 = *(double *)(unsigned)((int)pdVar11 + -4);
              dVar33 = *(double *)(unsigned)((int)pdVar11 + 4);
              pdVar11 = (double *)(unsigned)((int)pdVar11 + 0xc);
            }
            pdVar8 = pdVar11 + -3;
            if (cVar37 == '\0') {
              pdVar11 = (double *)(unsigned)((int)ar7 + 0x14);
              *(undefined4 *)(unsigned)pdVar11 = uVar28;
            }
            else {
              pdVar11 = ar7 + 2;
              *pdVar11 = dVar25;
            }
            if (cVar36 == '\0') {
              dVar33 = CONCAT44D(F32HI(dVar33) + fVar29,SUB84(dVar33,0))
              ;
            }
            else {
              dVar33 = dVar33 + in_dr4;
            }
            if (cVar37 == '\0') {
              pdVar11 = (double *)(unsigned)((int)pdVar11 + -4);
              *(int *)(unsigned)pdVar11 = (int)(D2U(dVar20) >> 0x20);
            }
            else {
              pdVar11 = pdVar11 + -1;
              *pdVar11 = dVar20;
            }
            if (cVar36 == '\0') {
              bVar35 = F32HI(dVar33) < fVar29;
            }
            else {
              bVar35 = dVar33 < in_dr4;
            }
            if (cVar37 == '\0') {
              pdVar11 = (double *)(unsigned)((int)pdVar11 + -4);
              *(int *)(unsigned)pdVar11 = (int)(D2U(dVar19) >> 0x20);
            }
            else {
              pdVar11 = pdVar11 + -1;
              *pdVar11 = dVar19;
            }
            in_dr6 = dVar33;
            if ((bVar35) && (in_dr6 = in_dr4, cVar37 == '\0')) {
              in_dr6 = CONCAT44D(fVar29,SUB84(dVar33,0));
            }
            iVar2 = iVar2 + iVar13 + 1;
            *(undefined4 *)(unsigned)pdVar11 = 0xf0000000;
            iVar13 = 0;
            if (cVar37 == '\0') {
              *(int *)(unsigned)(pdVar11 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
            }
            else {
              pdVar11[3] = in_dr6;
            }
            ar7 = pdVar11 + 4;
          }
          if (iVar14 == 0) {
            if (cVar37 == '\0') {
              dVar19 = CONCAT44D(*(undefined4 *)(unsigned)a4,SUB84(dVar19,0));
              dVar20 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + -1),SUB84(dVar20,0));
              dVar33 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + -4),SUB84(in_dr6,0));
            }
            else {
              dVar19 = *a4;
              dVar20 = *(double *)(unsigned)((int)pdVar9 + -4);
              dVar33 = *(double *)(unsigned)((int)pdVar9 + 4);
            }
            iVar14 = 1;
            if (cVar36 == '\0') {
              dVar33 = CONCAT44D(-F32HI(dVar33),SUB84(dVar33,0));
            }
            else {
              dVar33 = -dVar33;
            }
            if (cVar37 == '\0') {
              pdVar9 = (double *)(unsigned)((int)ar7 + 0x14);
              *(undefined4 *)(unsigned)pdVar9 = uVar27;
            }
            else {
              pdVar9 = ar7 + 2;
              *pdVar9 = dVar31;
            }
            if (cVar36 == '\0') {
              dVar33 = CONCAT44D(F32HI(dVar33) + fVar29,SUB84(dVar33,0))
              ;
            }
            else {
              dVar33 = dVar33 + in_dr4;
            }
            if (cVar37 == '\0') {
              pdVar9 = (double *)(unsigned)((int)pdVar9 + -4);
              *(int *)(unsigned)pdVar9 = (int)(D2U(dVar20) >> 0x20);
            }
            else {
              pdVar9 = pdVar9 + -1;
              *pdVar9 = dVar20;
            }
            if (cVar36 == '\0') {
              bVar35 = F32HI(dVar33) < fVar29;
            }
            else {
              bVar35 = dVar33 < in_dr4;
            }
            if (cVar37 == '\0') {
              pdVar9 = (double *)(unsigned)((int)pdVar9 + -4);
              *(int *)(unsigned)pdVar9 = (int)(D2U(dVar19) >> 0x20);
            }
            else {
              pdVar9 = pdVar9 + -1;
              *pdVar9 = dVar19;
            }
            dVar23 = dVar33;
            if ((bVar35) && (dVar23 = in_dr4, cVar37 == '\0')) {
              dVar23 = CONCAT44D(fVar29,SUB84(dVar33,0));
            }
            uVar27 = (undefined4)(D2U(dVar23) >> 0x20);
            in_dr6 = CONCAT44D(uVar27,-SUB84(dVar23,0));
            *(undefined4 *)(unsigned)pdVar9 = 0xe0000000;
            if (cVar37 == '\0') {
              *(undefined4 *)(unsigned)(pdVar9 + 3) = uVar27;
            }
            else {
              pdVar9[3] = in_dr6;
            }
            ar7 = pdVar9 + 4;
          }
          if (cVar37 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar19,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(dVar20,0));
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 1),SUB84(in_dr6,0));
            pdVar8 = (double *)(unsigned)((int)pdVar8 + 0xc);
          }
          else {
            in_dr0 = *pdVar8;
            in_dr2 = pdVar8[1];
            dVar19 = pdVar8[2];
            pdVar8 = pdVar8 + 3;
          }
          iVar14 = iVar14 + 1;
          pdVar8 = pdVar8 + -3;
          if (cVar36 == '\0') {
            dVar19 = CONCAT44D(-F32HI(dVar19),SUB84(dVar19,0));
          }
          else {
            dVar19 = -dVar19;
          }
          if (cVar37 == '\0') {
            pdVar9 = (double *)(unsigned)((int)ar7 + 0x14);
            *(undefined4 *)(unsigned)pdVar9 = uVar28;
          }
          else {
            pdVar9 = ar7 + 2;
            *pdVar9 = dVar25;
          }
          if (cVar36 == '\0') {
            dVar19 = CONCAT44D(F32HI(dVar19) + fVar29,SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + in_dr4;
          }
          if (cVar37 == '\0') {
            pdVar9 = (double *)(unsigned)((int)pdVar9 + -4);
            *(int *)(unsigned)pdVar9 = (int)((ulonglong)in_dr2 >> 0x20);
          }
          else {
            pdVar9 = pdVar9 + -1;
            *pdVar9 = in_dr2;
          }
          if (cVar36 == '\0') {
            bVar35 = F32HI(dVar19) < fVar29;
          }
          else {
            bVar35 = dVar19 < in_dr4;
          }
          if (cVar37 == '\0') {
            pdVar9 = (double *)(unsigned)((int)pdVar9 + -4);
            *(int *)(unsigned)pdVar9 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            pdVar9 = pdVar9 + -1;
            *pdVar9 = in_dr0;
          }
          dVar33 = dVar19;
          if ((bVar35) && (dVar33 = in_dr4, cVar37 == '\0')) {
            dVar33 = CONCAT44D(fVar29,SUB84(dVar19,0));
          }
          uVar27 = (undefined4)(D2U(dVar33) >> 0x20);
          in_dr6 = CONCAT44D(uVar27,-SUB84(dVar33,0));
          *(undefined4 *)(unsigned)pdVar9 = 0xe0000000;
          if (cVar37 == '\0') {
            *(undefined4 *)(unsigned)(pdVar9 + 3) = uVar27;
          }
          else {
            pdVar9[3] = in_dr6;
          }
          ar7 = pdVar9 + 4;
        }
        else {
          if (iVar14 != 0) {
            if (cVar37 == '\0') {
              dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar19,0));
              dVar20 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar11 + -1),0x3f800000);
              dVar33 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + -4),fVar32);
            }
            else {
              dVar19 = *pdVar8;
              dVar20 = *(double *)(unsigned)((int)pdVar11 + -4);
              dVar33 = *(double *)(unsigned)((int)pdVar11 + 4);
              pdVar11 = (double *)(unsigned)((int)pdVar11 + 0xc);
            }
            pdVar8 = pdVar11 + -3;
            if (cVar36 == '\0') {
              dVar33 = CONCAT44D(-F32HI(dVar33),SUB84(dVar33,0));
            }
            else {
              dVar33 = -dVar33;
            }
            if (cVar37 == '\0') {
              pdVar11 = (double *)(unsigned)((int)ar7 + 0x14);
              *(undefined4 *)(unsigned)pdVar11 = uVar28;
            }
            else {
              pdVar11 = ar7 + 2;
              *pdVar11 = dVar25;
            }
            if (cVar36 == '\0') {
              dVar33 = CONCAT44D(F32HI(dVar33) + fVar29,SUB84(dVar33,0))
              ;
            }
            else {
              dVar33 = dVar33 + in_dr4;
            }
            if (cVar37 == '\0') {
              pdVar11 = (double *)(unsigned)((int)pdVar11 + -4);
              *(int *)(unsigned)pdVar11 = (int)(D2U(dVar20) >> 0x20);
            }
            else {
              pdVar11 = pdVar11 + -1;
              *pdVar11 = dVar20;
            }
            if (cVar36 == '\0') {
              bVar35 = F32HI(dVar33) < fVar29;
            }
            else {
              bVar35 = dVar33 < in_dr4;
            }
            if (cVar37 == '\0') {
              pdVar11 = (double *)(unsigned)((int)pdVar11 + -4);
              *(int *)(unsigned)pdVar11 = (int)(D2U(dVar19) >> 0x20);
            }
            else {
              pdVar11 = pdVar11 + -1;
              *pdVar11 = dVar19;
            }
            dVar23 = dVar33;
            if ((bVar35) && (dVar23 = in_dr4, cVar37 == '\0')) {
              dVar23 = CONCAT44D(fVar29,SUB84(dVar33,0));
            }
            uVar26 = (undefined4)(D2U(dVar23) >> 0x20);
            in_dr6 = CONCAT44D(uVar26,-SUB84(dVar23,0));
            iVar2 = iVar2 + iVar14 + 1;
            *(undefined4 *)(unsigned)pdVar11 = 0xf0000000;
            iVar14 = 0;
            if (cVar37 == '\0') {
              *(undefined4 *)(unsigned)(pdVar11 + 3) = uVar26;
            }
            else {
              pdVar11[3] = in_dr6;
            }
            ar7 = pdVar11 + 4;
          }
          if (iVar13 == 0) {
            if (cVar37 == '\0') {
              dVar19 = CONCAT44D(*(undefined4 *)(unsigned)a4,SUB84(dVar19,0));
              dVar20 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + -1),SUB84(dVar20,0));
              dVar33 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + -4),SUB84(in_dr6,0));
              pdVar9 = (double *)(unsigned)((int)ar7 + 0x14);
              *(undefined4 *)(unsigned)pdVar9 = uVar27;
            }
            else {
              dVar19 = *a4;
              dVar20 = *(double *)(unsigned)((int)pdVar9 + -4);
              dVar33 = *(double *)(unsigned)((int)pdVar9 + 4);
              pdVar9 = ar7 + 2;
              *pdVar9 = dVar31;
            }
            iVar13 = 1;
            if (cVar36 == '\0') {
              dVar33 = CONCAT44D(F32HI(dVar33) + fVar29,SUB84(dVar33,0))
              ;
            }
            else {
              dVar33 = dVar33 + in_dr4;
            }
            if (cVar37 == '\0') {
              pdVar9 = (double *)(unsigned)((int)pdVar9 + -4);
              *(int *)(unsigned)pdVar9 = (int)(D2U(dVar20) >> 0x20);
            }
            else {
              pdVar9 = pdVar9 + -1;
              *pdVar9 = dVar20;
            }
            if (cVar36 == '\0') {
              bVar35 = F32HI(dVar33) < fVar29;
            }
            else {
              bVar35 = dVar33 < in_dr4;
            }
            if (cVar37 == '\0') {
              pdVar9 = (double *)(unsigned)((int)pdVar9 + -4);
              *(int *)(unsigned)pdVar9 = (int)(D2U(dVar19) >> 0x20);
            }
            else {
              pdVar9 = pdVar9 + -1;
              *pdVar9 = dVar19;
            }
            in_dr6 = dVar33;
            if ((bVar35) && (in_dr6 = in_dr4, cVar37 == '\0')) {
              in_dr6 = CONCAT44D(fVar29,SUB84(dVar33,0));
            }
            *(undefined4 *)(unsigned)pdVar9 = 0xe0000000;
            if (cVar37 == '\0') {
              *(int *)(unsigned)(pdVar9 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
            }
            else {
              pdVar9[3] = in_dr6;
            }
            ar7 = pdVar9 + 4;
          }
          if (cVar37 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar19,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(dVar20,0));
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 1),SUB84(in_dr6,0));
            pdVar8 = (double *)(unsigned)((int)pdVar8 + 0xc);
          }
          else {
            in_dr0 = *pdVar8;
            in_dr2 = pdVar8[1];
            dVar19 = pdVar8[2];
            pdVar8 = pdVar8 + 3;
          }
          iVar13 = iVar13 + 1;
          pdVar8 = pdVar8 + -3;
          if (cVar37 == '\0') {
            pdVar9 = (double *)(unsigned)((int)ar7 + 0x14);
            *(undefined4 *)(unsigned)pdVar9 = uVar28;
          }
          else {
            pdVar9 = ar7 + 2;
            *pdVar9 = dVar25;
          }
          if (cVar36 == '\0') {
            dVar19 = CONCAT44D(F32HI(dVar19) + fVar29,SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + in_dr4;
          }
          if (cVar37 == '\0') {
            pdVar9 = (double *)(unsigned)((int)pdVar9 + -4);
            *(int *)(unsigned)pdVar9 = (int)((ulonglong)in_dr2 >> 0x20);
          }
          else {
            pdVar9 = pdVar9 + -1;
            *pdVar9 = in_dr2;
          }
          if (cVar36 == '\0') {
            bVar35 = F32HI(dVar19) < fVar29;
          }
          else {
            bVar35 = dVar19 < in_dr4;
          }
          if (cVar37 == '\0') {
            pdVar9 = (double *)(unsigned)((int)pdVar9 + -4);
            *(int *)(unsigned)pdVar9 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            pdVar9 = pdVar9 + -1;
            *pdVar9 = in_dr0;
          }
          in_dr6 = dVar19;
          if ((bVar35) && (in_dr6 = in_dr4, cVar37 == '\0')) {
            in_dr6 = CONCAT44D(fVar29,SUB84(dVar19,0));
          }
          *(undefined4 *)(unsigned)pdVar9 = 0xe0000000;
          if (cVar37 == '\0') {
            *(int *)(unsigned)(pdVar9 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            pdVar9[3] = in_dr6;
          }
          ar7 = pdVar9 + 4;
        }
      }
LAB_8c22f9ac:
      ar4 = (short *)(unsigned)((int)psVar5 + iVar6);
      fVar29 = -SUB84(dVar30,0);
      iVar7 = iVar7 + -1;
      uVar27 = (undefined4)(D2U(dVar22) >> 0x20);
      dVar19 = dVar22;
      if (cVar37 == '\0') {
        dVar19 = CONCAT44D(uVar27,SUB84(dVar25,0));
        dVar25 = CONCAT44D((int)(D2U(dVar25) >> 0x20),SUB84(dVar31,0));
      }
      dVar31 = dVar25;
      dVar25 = dVar19;
    } while (iVar7 != 0);
    fVar29 = F32HI(in_dr4);
    if (iVar13 == 0) {
      if (iVar14 != 0) {
        if (cVar37 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(in_dr0,0));
          pdVar8 = (double *)(unsigned)(iVar12 + -8);
        }
        else {
          in_dr0 = *pdVar10;
          pdVar8 = (double *)(unsigned)(iVar12 + -4);
        }
        if (cVar37 == '\0') {
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(in_dr2,0));
          dVar31 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(in_dr6,0));
        }
        else {
          in_dr2 = *pdVar8;
          dVar31 = pdVar8[1];
        }
        if (cVar36 == '\0') {
          dVar31 = CONCAT44D(-F32HI(dVar31),SUB84(dVar31,0));
        }
        else {
          dVar31 = -dVar31;
        }
        if (cVar37 == '\0') {
          pdVar8 = (double *)(unsigned)((int)ar7 + 0x14);
          *(undefined4 *)(unsigned)pdVar8 = uVar27;
        }
        else {
          pdVar8 = ar7 + 2;
          *pdVar8 = dVar22;
        }
        if (cVar36 == '\0') {
          dVar31 = CONCAT44D(F32HI(dVar31) + fVar29,SUB84(dVar31,0));
        }
        else {
          dVar31 = dVar31 + in_dr4;
        }
        if (cVar37 == '\0') {
          pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
          *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          pdVar8 = pdVar8 + -1;
          *pdVar8 = in_dr2;
        }
        if (cVar36 == '\0') {
          bVar35 = F32HI(dVar31) < fVar29;
        }
        else {
          bVar35 = dVar31 < in_dr4;
        }
        if (cVar37 == '\0') {
          pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
          *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          pdVar8 = pdVar8 + -1;
          *pdVar8 = in_dr0;
        }
        dVar25 = dVar31;
        if ((bVar35) && (dVar25 = in_dr4, cVar37 == '\0')) {
          dVar25 = CONCAT44D(fVar29,SUB84(dVar31,0));
        }
        uVar27 = (undefined4)(D2U(dVar25) >> 0x20);
        in_dr6 = CONCAT44D(uVar27,-SUB84(dVar25,0));
        iVar2 = iVar2 + iVar14 + 1;
        *(undefined4 *)(unsigned)pdVar8 = 0xf0000000;
        if (cVar37 == '\0') {
          *(undefined4 *)(unsigned)(pdVar8 + 3) = uVar27;
        }
        else {
          pdVar8[3] = in_dr6;
        }
        ar7 = pdVar8 + 4;
      }
    }
    else {
      if (cVar37 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(in_dr0,0));
        pdVar8 = (double *)(unsigned)(iVar12 + -8);
      }
      else {
        in_dr0 = *pdVar10;
        pdVar8 = (double *)(unsigned)(iVar12 + -4);
      }
      if (cVar37 == '\0') {
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(in_dr2,0));
        dVar31 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(in_dr6,0));
        pdVar8 = (double *)(unsigned)((int)ar7 + 0x14);
        *(undefined4 *)(unsigned)pdVar8 = uVar27;
      }
      else {
        in_dr2 = *pdVar8;
        dVar31 = pdVar8[1];
        pdVar8 = ar7 + 2;
        *pdVar8 = dVar22;
      }
      if (cVar36 == '\0') {
        dVar31 = CONCAT44D(F32HI(dVar31) + fVar29,SUB84(dVar31,0));
      }
      else {
        dVar31 = dVar31 + in_dr4;
      }
      if (cVar37 == '\0') {
        pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
        *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        pdVar8 = pdVar8 + -1;
        *pdVar8 = in_dr2;
      }
      if (cVar36 == '\0') {
        bVar35 = F32HI(dVar31) < fVar29;
      }
      else {
        bVar35 = dVar31 < in_dr4;
      }
      if (cVar37 == '\0') {
        pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
        *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        pdVar8 = pdVar8 + -1;
        *pdVar8 = in_dr0;
      }
      in_dr6 = dVar31;
      if ((bVar35) && (in_dr6 = in_dr4, cVar37 == '\0')) {
        in_dr6 = CONCAT44D(fVar29,SUB84(dVar31,0));
      }
      iVar2 = iVar2 + iVar13 + 1;
      *(undefined4 *)(unsigned)pdVar8 = 0xf0000000;
      if (cVar37 == '\0') {
        *(int *)(unsigned)(pdVar8 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
      }
      else {
        pdVar8[3] = in_dr6;
      }
      ar7 = pdVar8 + 4;
    }
    uVar1 = uVar1 - 1;
    if (uVar1 == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar2;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar3;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c22f6c0\n.set _FUN_8c22f6c0, _FUN_8c22f6c0_def\n");
