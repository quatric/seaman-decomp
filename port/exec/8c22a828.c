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
double * FUN_8c22a828_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c22a828";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  uint uVar1;
  double *pdVar2;
  short *psVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double *pdVar10;
  int iVar11;
  double *pdVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar19;
  double in_dr0 = 0;
  float fVar20;
  float fVar21;
  double in_dr2 = 0;
  float fVar25;
  double dVar22;
  ulonglong uVar23;
  float fVar26;
  double dVar24;
  float fVar27;
  double in_dr4 = 0;
  uint uVar30;
  double dVar28;
  double dVar29;
  double in_dr6 = 0;
  undefined8 uVar31;
  double dVar32;
  undefined4 uVar34;
  double dVar33;
  undefined4 uVar36;
  double in_dr8 = 0;
  double dVar37;
  double in_dr10 = 0;
  undefined4 uVar39;
  double dVar38;
  double in_dr12 = 0;
  double in_dr14 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double dVar40;
  double in_xd6 = 0;
  double in_xd8 = 0;
  undefined8 in_xd10 = 0;
  double in_xd12 = 0;
  double in_xd14 = 0;
  bool bVar41;
  undefined4 in_PR = 0;
  char cVar42;
  char cVar43;
  double *pdVar18;
  undefined4 uVar35;
  
  cVar43 = '\0';
  cVar42 = '\0';
  (*(undefined4 *)(fr0_ - 0x20)) = SUB84(in_dr14,0);
  uVar36 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x28)) = SUB84(in_dr12,0);
  uVar35 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  uVar30 = (uint)((ulonglong)in_dr4 >> 0x20);
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x20000) == 0) {
    (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined4 *)(fr0_ - 0x28));
    (*(undefined4 *)(fr0_ - 0x28)) = uVar36;
    (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(in_dr14,0);
    puVar19 = &(*(uint *)(fr0_ - 0x34));
    (*(uint *)(fr0_ - 0x34)) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0);
    uVar1 = ar6 & 0x3fff;
    iVar14 = 0;
    iVar15 = 0;
    iVar9 = (ar6 >> 0xe & 3) << 1;
    dVar22 = CONCAT44D(uVar30,0x3f000000);
    (*(undefined4 *)(fr0_ - 0x20)) = uVar35;
    do {
      iVar6 = (int)*ar4;
      psVar3 = ar4 + 2;
      fVar25 = 1.0;
      if ((*puVar19 & 0x80000000) != 0) {
        fVar25 = -1.0;
      }
      pdVar2 = (double *)(unsigned)(ar4[1] * 0x20 + ar5);
      if (iVar6 < 0) {
        iVar6 = -iVar6;
        fVar25 = -fVar25;
      }
      iVar15 = iVar15 + iVar6;
      iVar6 = iVar6 + -2;
      iVar13 = 0;
      iVar7 = 0;
      ar4 = ar4 + 3;
      pdVar12 = (double *)(unsigned)(*psVar3 * 0x20 + ar5);
      if (cVar43 == '\0') {
        dVar38 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar2 + 3),SUB84(in_dr10,0));
      }
      else {
        dVar38 = pdVar2[3];
      }
      fVar20 = F32LO(dVar22);
      if (cVar42 == '\0') {
        dVar38 = CONCAT44D(F32HI(dVar38) * fVar20 + fVar20,
                                  F32LO(dVar38) * fVar20 + fVar20);
      }
      else {
        dVar38 = dVar38 * dVar22 * dVar22 + dVar22 + dVar22;
      }
      if (cVar43 == '\0') {
        dVar32 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar12 + 3),SUB84(in_dr12,0));
      }
      else {
        dVar32 = pdVar12[3];
      }
      if (cVar42 == '\0') {
        dVar32 = CONCAT44D(F32HI(dVar32) * fVar20 + fVar20,
                                  F32LO(dVar32) * fVar20 + fVar20);
      }
      else {
        dVar32 = dVar32 * dVar22 * dVar22 + dVar22 + dVar22;
      }
      do {
        if (cVar43 == '\0') {
          dVar40 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar2 + 4),SUB84(in_dr0,0));
          dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar2 + 1),SUB84(in_dr6,0));
          iVar8 = (int)pdVar2 + 0xc;
        }
        else {
          dVar40 = *(double *)(unsigned)((int)pdVar2 + 4);
          dVar29 = *(double *)(unsigned)((int)pdVar2 + 0xc);
          iVar8 = (int)pdVar2 + 0x14;
        }
        if (cVar43 == '\0') {
          dVar40 = CONCAT44D((int)(D2U(dVar40) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)pdVar12 + 4));
          pdVar12 = pdVar12 + 1;
        }
        else {
          pdVar12 = (double *)(unsigned)((int)pdVar12 + 0xc);
        }
        iVar11 = *ar4 * 0x20 + ar5;
        if (cVar43 == '\0') {
          dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),*(undefined4 *)(unsigned)pdVar12);
          pdVar10 = (double *)(unsigned)((int)pdVar12 + 4);
        }
        else {
          pdVar10 = pdVar12 + 1;
        }
        pdVar4 = (double *)(unsigned)(iVar8 + -0xc);
        if (cVar42 == '\0') {
          dVar40 = CONCAT44D(F32HI(dVar40) - F32LO(dVar40),
                                    SUB84(dVar40,0));
          dVar29 = CONCAT44D(F32HI(dVar29) - F32LO(dVar29),
                                    SUB84(dVar29,0));
        }
        else {
          dVar40 = dVar40 - dVar40;
          dVar29 = dVar29 - dVar29;
        }
        pdVar2 = (double *)(unsigned)((int)pdVar10 + -0xc);
        if (cVar43 == '\0') {
          dVar28 = CONCAT44D(*(undefined4 *)(unsigned)(iVar11 + 4),SUB84(in_dr2,0));
          dVar37 = CONCAT44D(*(undefined4 *)(unsigned)(iVar11 + 8),fVar25);
          iVar11 = iVar11 + 0xc;
        }
        else {
          dVar28 = *(double *)(unsigned)(iVar11 + 4);
          dVar37 = *(double *)(unsigned)(iVar11 + 0xc);
          iVar11 = iVar11 + 0x14;
        }
        if (cVar42 == '\0') {
          fVar25 = F32HI(dVar28) - F32LO(dVar40);
        }
        else {
          fVar25 = (float)((ulonglong)(dVar28 - dVar40) >> 0x20);
        }
        psVar3 = ar4 + 1;
        if (cVar43 == '\0') {
          dVar28 = CONCAT44D(*(undefined4 *)(unsigned)(iVar11 + 0xc),SUB84(in_dr14,0));
        }
        else {
          dVar28 = *(double *)(unsigned)(iVar11 + 0xc);
        }
        pdVar12 = (double *)(unsigned)(iVar11 + -0xc);
        if (cVar42 == '\0') {
          dVar37 = CONCAT44D(F32HI(dVar37) - F32LO(dVar29),
                                    SUB84(dVar37,0));
        }
        else {
          dVar37 = dVar37 - dVar29;
        }
        dVar24 = CONCAT44D(fVar25,0x3f800000);
        if (cVar42 == '\0') {
          dVar37 = CONCAT44D(F32HI(dVar37) *
                                    F32HI(dVar40),SUB84(dVar37,0));
        }
        else {
          dVar37 = dVar37 * dVar40;
        }
        if (cVar43 == '\0') {
          dVar40 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,SUB84(dVar40,0));
        }
        else {
          dVar40 = *pdVar4;
        }
        if (cVar42 == '\0') {
          in_dr6 = CONCAT44D(F32HI(dVar29) * fVar25,SUB84(dVar29,0));
          bVar41 = F32HI(dVar40) < 1.0;
        }
        else {
          in_dr6 = dVar29 * dVar24;
          bVar41 = dVar40 < dVar24;
        }
        if (cVar43 == '\0') {
          dVar40 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,SUB84(dVar40,0));
        }
        else {
          dVar40 = *pdVar2;
        }
        fVar25 = F32HI(dVar22);
        uVar36 = (undefined4)(D2U(dVar32) >> 0x20);
        uVar35 = (undefined4)(D2U(dVar38) >> 0x20);
        if (bVar41) {
LAB_8c22b03c:
          if (iVar7 == 0) {
            if (iVar13 != 0) {
              if (cVar43 == '\0') {
                dVar40 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,SUB84(dVar40,0));
                dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + -1),0x3f800000);
                dVar29 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + -4),SUB84(in_dr6,0));
              }
              else {
                dVar40 = *pdVar2;
                dVar24 = *(double *)(unsigned)((int)pdVar10 + -4);
                dVar29 = *(double *)(unsigned)((int)pdVar10 + 4);
                pdVar10 = (double *)(unsigned)((int)pdVar10 + 0xc);
              }
              pdVar2 = pdVar10 + -3;
              if (cVar43 == '\0') {
                pdVar10 = (double *)(unsigned)((int)ar7 + 0x14);
                *(undefined4 *)(unsigned)pdVar10 = uVar36;
              }
              else {
                pdVar10 = ar7 + 2;
                *pdVar10 = dVar32;
              }
              if (cVar42 == '\0') {
                dVar29 = CONCAT44D(F32HI(dVar29) + fVar25,
                                          SUB84(dVar29,0));
              }
              else {
                dVar29 = dVar29 + dVar22;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
                *(int *)(unsigned)pdVar10 = (int)(D2U(dVar24) >> 0x20);
              }
              else {
                pdVar10 = pdVar10 + -1;
                *pdVar10 = dVar24;
              }
              if (cVar42 == '\0') {
                bVar41 = F32HI(dVar29) < fVar25;
              }
              else {
                bVar41 = dVar29 < dVar22;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
                *(int *)(unsigned)pdVar10 = (int)(D2U(dVar40) >> 0x20);
              }
              else {
                pdVar10 = pdVar10 + -1;
                *pdVar10 = dVar40;
              }
              in_dr6 = dVar29;
              if ((bVar41) && (in_dr6 = dVar22, cVar43 == '\0')) {
                in_dr6 = CONCAT44D(fVar25,SUB84(dVar29,0));
              }
              iVar14 = iVar14 + iVar13 + 1;
              *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
              iVar13 = 0;
              if (cVar43 == '\0') {
                *(int *)(unsigned)(pdVar10 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
              }
              else {
                pdVar10[3] = in_dr6;
              }
              ar7 = pdVar10 + 4;
            }
          }
          else {
            if (cVar43 == '\0') {
              dVar40 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,SUB84(dVar40,0));
              dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + -1),0x3f800000);
              dVar29 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + -4),SUB84(in_dr6,0));
            }
            else {
              dVar40 = *pdVar2;
              dVar24 = *(double *)(unsigned)((int)pdVar10 + -4);
              dVar29 = *(double *)(unsigned)((int)pdVar10 + 4);
              pdVar10 = (double *)(unsigned)((int)pdVar10 + 0xc);
            }
            pdVar2 = pdVar10 + -3;
            if (cVar42 == '\0') {
              dVar29 = CONCAT44D(-F32HI(dVar29),SUB84(dVar29,0));
            }
            else {
              dVar29 = -dVar29;
            }
            if (cVar43 == '\0') {
              pdVar10 = (double *)(unsigned)((int)ar7 + 0x14);
              *(undefined4 *)(unsigned)pdVar10 = uVar36;
            }
            else {
              pdVar10 = ar7 + 2;
              *pdVar10 = dVar32;
            }
            if (cVar42 == '\0') {
              dVar29 = CONCAT44D(F32HI(dVar29) + fVar25,SUB84(dVar29,0))
              ;
            }
            else {
              dVar29 = dVar29 + dVar22;
            }
            if (cVar43 == '\0') {
              pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
              *(int *)(unsigned)pdVar10 = (int)(D2U(dVar24) >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = dVar24;
            }
            if (cVar42 == '\0') {
              bVar41 = F32HI(dVar29) < fVar25;
            }
            else {
              bVar41 = dVar29 < dVar22;
            }
            if (cVar43 == '\0') {
              pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
              *(int *)(unsigned)pdVar10 = (int)(D2U(dVar40) >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = dVar40;
            }
            dVar33 = dVar29;
            if ((bVar41) && (dVar33 = dVar22, cVar43 == '\0')) {
              dVar33 = CONCAT44D(fVar25,SUB84(dVar29,0));
            }
            uVar36 = (undefined4)(D2U(dVar33) >> 0x20);
            in_dr6 = CONCAT44D(uVar36,-SUB84(dVar33,0));
            iVar14 = iVar14 + iVar7 + 1;
            *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
            iVar7 = 0;
            if (cVar43 == '\0') {
              *(undefined4 *)(unsigned)(pdVar10 + 3) = uVar36;
            }
            else {
              pdVar10[3] = in_dr6;
            }
            ar7 = pdVar10 + 4;
          }
          if (cVar43 == '\0') {
            dVar40 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,SUB84(dVar40,0));
          }
          else {
            dVar40 = *pdVar4;
          }
          in_dr2 = CONCAT44D(0x3f800000,SUB84(dVar24,0));
          if (cVar42 == '\0') {
            bVar41 = 1.0 < F32HI(dVar40);
          }
          else {
            bVar41 = in_dr2 < dVar40;
          }
          if (cVar43 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,SUB84(dVar40,0));
          }
          else {
            in_dr0 = *pdVar2;
          }
          if (!bVar41) {
            if (cVar42 == '\0') {
              bVar41 = 1.0 < F32HI(in_dr0);
            }
            else {
              bVar41 = in_dr2 < in_dr0;
            }
            if (cVar43 == '\0') {
              in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar12,SUB84(in_dr0,0));
            }
            else {
              in_dr0 = *pdVar12;
            }
            if (!bVar41) {
              if (cVar42 == '\0') {
                bVar41 = F32HI(in_dr0) < 1.0;
              }
              else {
                bVar41 = in_dr0 < in_dr2;
              }
              if (bVar41) goto LAB_8c22b190;
            }
          }
          *(uint *)(unsigned)((int)puVar19 + -4) = uVar1;
          *(int *)(unsigned)((int)puVar19 + -8) = iVar14;
          *(int *)(unsigned)((int)puVar19 + -0xc) = iVar15;
          *(unsigned *)(unsigned)((int)puVar19 + -0x10) = psVar3;
          *(int *)(unsigned)((int)puVar19 + -0x14) = ar5;
          *(int *)(unsigned)((int)puVar19 + -0x18) = iVar9;
          if (cVar43 == '\0') {
            *(float *)(unsigned)((int)puVar19 + -0x1c) = fVar25;
            *(int *)(unsigned)((int)puVar19 + -0x20) = SUB84(dVar22,0);
            *(float *)(unsigned)((int)puVar19 + -0x24) = SUB84(dVar37,0);
            *(undefined4 *)(unsigned)((int)puVar19 + -0x28) = uVar35;
            puVar16 = (uint *)(unsigned)((int)puVar19 + -0x2c);
            *(int *)(unsigned)((int)puVar19 + -0x2c) = SUB84(dVar38,0);
          }
          else {
            *(double *)(unsigned)((int)puVar19 + -0x20) = dVar22;
            *(double *)(unsigned)((int)puVar19 + -0x28) = in_xd4;
            *(double *)(unsigned)((int)puVar19 + -0x30) = in_xd8;
            *(double *)(unsigned)((int)puVar19 + -0x38) = dVar38;
            puVar16 = (uint *)(unsigned)((int)puVar19 + -0x40);
            *(undefined8 *)(unsigned)((int)puVar19 + -0x40) = in_xd10;
            in_xd4 = in_xd8;
          }
          ar7 = (double *)(unsigned)(vsp = (puVar19 ? (unsigned long)puVar19 - 64 : (unsigned long)(fr0_ - 116)), FUN_8c2319cc(pdVar4,pdVar2,pdVar12,ar7));
          if (cVar43 == '\0') {
            dVar38 = (double)(ulonglong)*puVar16;
            dVar37 = (double)(ulonglong)puVar16[2];
            pdVar18 = (double *)(unsigned)(puVar16 + 3);
            puVar17 = puVar16 + 5;
          }
          else {
            in_xd10 = *(undefined8 *)(unsigned)puVar16;
            dVar38 = *(double *)(unsigned)(puVar16 + 2);
            in_xd8 = *(double *)(unsigned)(puVar16 + 4);
            in_xd4 = *(double *)(unsigned)(puVar16 + 6);
            pdVar18 = (double *)(unsigned)(puVar16 + 8);
            puVar17 = puVar16 + 10;
          }
          dVar22 = *pdVar18;
          iVar9 = *puVar17;
          ar5 = puVar17[1];
          psVar3 = (short *)(unsigned)puVar17[2];
          iVar15 = puVar17[3];
          iVar14 = puVar17[4];
          uVar1 = puVar17[5];
          puVar19 = puVar17 + 6;
          if (cVar42 == '\0') {
            puVar19 = puVar17 + 6;
          }
        }
        else {
          if (cVar42 == '\0') {
            bVar41 = F32HI(dVar40) < 1.0;
          }
          else {
            bVar41 = dVar40 < dVar24;
          }
          if (cVar43 == '\0') {
            dVar40 = CONCAT44D(*(undefined4 *)(unsigned)pdVar12,SUB84(dVar40,0));
          }
          else {
            dVar40 = *pdVar12;
          }
          if (bVar41) goto LAB_8c22b03c;
          if (cVar42 == '\0') {
            bVar41 = F32HI(dVar40) < 1.0;
            fVar20 = F32HI(in_dr6) - F32HI(dVar37);
          }
          else {
            bVar41 = dVar40 < dVar24;
            fVar20 = (float)((ulonglong)(in_dr6 - dVar37) >> 0x20);
          }
          if (cVar42 == '\0') {
            in_dr6 = (double)((ulonglong)(uint)(fVar20 * F32LO(dVar37)) << 0x20);
          }
          else {
            in_dr6 = (double)((ulonglong)(uint)fVar20 << 0x20) * dVar37;
          }
          if (bVar41) goto LAB_8c22b03c;
          fVar20 = F32LO(in_dr6);
          if (cVar42 != '\0' || fVar20 <= F32HI(in_dr6)) {
            if (iVar13 != 0) {
              if (cVar43 == '\0') {
                dVar40 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,SUB84(dVar40,0));
                dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + -1),0x3f800000);
                dVar29 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + -4),fVar20);
              }
              else {
                dVar40 = *pdVar2;
                dVar24 = *(double *)(unsigned)((int)pdVar10 + -4);
                dVar29 = *(double *)(unsigned)((int)pdVar10 + 4);
                pdVar10 = (double *)(unsigned)((int)pdVar10 + 0xc);
              }
              pdVar2 = pdVar10 + -3;
              if (cVar43 == '\0') {
                pdVar10 = (double *)(unsigned)((int)ar7 + 0x14);
                *(undefined4 *)(unsigned)pdVar10 = uVar36;
              }
              else {
                pdVar10 = ar7 + 2;
                *pdVar10 = dVar32;
              }
              if (cVar42 == '\0') {
                dVar29 = CONCAT44D(F32HI(dVar29) + fVar25,
                                          SUB84(dVar29,0));
              }
              else {
                dVar29 = dVar29 + dVar22;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
                *(int *)(unsigned)pdVar10 = (int)(D2U(dVar24) >> 0x20);
              }
              else {
                pdVar10 = pdVar10 + -1;
                *pdVar10 = dVar24;
              }
              if (cVar42 == '\0') {
                bVar41 = F32HI(dVar29) < fVar25;
              }
              else {
                bVar41 = dVar29 < dVar22;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
                *(int *)(unsigned)pdVar10 = (int)(D2U(dVar40) >> 0x20);
              }
              else {
                pdVar10 = pdVar10 + -1;
                *pdVar10 = dVar40;
              }
              in_dr6 = dVar29;
              if ((bVar41) && (in_dr6 = dVar22, cVar43 == '\0')) {
                in_dr6 = CONCAT44D(fVar25,SUB84(dVar29,0));
              }
              iVar14 = iVar14 + iVar13 + 1;
              *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
              iVar13 = 0;
              if (cVar43 == '\0') {
                *(int *)(unsigned)(pdVar10 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
              }
              else {
                pdVar10[3] = in_dr6;
              }
              ar7 = pdVar10 + 4;
            }
            if (iVar7 == 0) {
              if (cVar43 == '\0') {
                dVar40 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,SUB84(dVar40,0));
                dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(iVar8 + -8),SUB84(dVar24,0));
                dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(iVar8 + -4),SUB84(in_dr6,0));
              }
              else {
                dVar40 = *pdVar4;
                dVar24 = *(double *)(unsigned)(iVar8 + -4);
                dVar29 = *(double *)(unsigned)(iVar8 + 4);
              }
              iVar7 = 1;
              if (cVar42 == '\0') {
                dVar29 = CONCAT44D(-F32HI(dVar29),SUB84(dVar29,0));
              }
              else {
                dVar29 = -dVar29;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)(unsigned)((int)ar7 + 0x14);
                *(undefined4 *)(unsigned)pdVar10 = uVar35;
              }
              else {
                pdVar10 = ar7 + 2;
                *pdVar10 = dVar38;
              }
              if (cVar42 == '\0') {
                dVar29 = CONCAT44D(F32HI(dVar29) + fVar25,
                                          SUB84(dVar29,0));
              }
              else {
                dVar29 = dVar29 + dVar22;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
                *(int *)(unsigned)pdVar10 = (int)(D2U(dVar24) >> 0x20);
              }
              else {
                pdVar10 = pdVar10 + -1;
                *pdVar10 = dVar24;
              }
              if (cVar42 == '\0') {
                bVar41 = F32HI(dVar29) < fVar25;
              }
              else {
                bVar41 = dVar29 < dVar22;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
                *(int *)(unsigned)pdVar10 = (int)(D2U(dVar40) >> 0x20);
              }
              else {
                pdVar10 = pdVar10 + -1;
                *pdVar10 = dVar40;
              }
              dVar33 = dVar29;
              if ((bVar41) && (dVar33 = dVar22, cVar43 == '\0')) {
                dVar33 = CONCAT44D(fVar25,SUB84(dVar29,0));
              }
              uVar35 = (undefined4)(D2U(dVar33) >> 0x20);
              in_dr6 = CONCAT44D(uVar35,-SUB84(dVar33,0));
              *(undefined4 *)(unsigned)pdVar10 = 0xe0000000;
              if (cVar43 == '\0') {
                *(undefined4 *)(unsigned)(pdVar10 + 3) = uVar35;
              }
              else {
                pdVar10[3] = in_dr6;
              }
              ar7 = pdVar10 + 4;
            }
            if (cVar43 == '\0') {
              in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,SUB84(dVar40,0));
              in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar2 + 4),SUB84(dVar24,0));
              dVar40 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar2 + 1),SUB84(in_dr6,0));
              pdVar2 = (double *)(unsigned)((int)pdVar2 + 0xc);
            }
            else {
              in_dr0 = *pdVar2;
              in_dr2 = pdVar2[1];
              dVar40 = pdVar2[2];
              pdVar2 = pdVar2 + 3;
            }
            iVar7 = iVar7 + 1;
            pdVar2 = pdVar2 + -3;
            if (cVar42 == '\0') {
              dVar40 = CONCAT44D(-F32HI(dVar40),SUB84(dVar40,0));
            }
            else {
              dVar40 = -dVar40;
            }
            if (cVar43 == '\0') {
              pdVar10 = (double *)(unsigned)((int)ar7 + 0x14);
              *(undefined4 *)(unsigned)pdVar10 = uVar36;
            }
            else {
              pdVar10 = ar7 + 2;
              *pdVar10 = dVar32;
            }
            if (cVar42 == '\0') {
              dVar40 = CONCAT44D(F32HI(dVar40) + fVar25,SUB84(dVar40,0))
              ;
            }
            else {
              dVar40 = dVar40 + dVar22;
            }
            if (cVar43 == '\0') {
              pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
              *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr2 >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = in_dr2;
            }
            if (cVar42 == '\0') {
              bVar41 = F32HI(dVar40) < fVar25;
            }
            else {
              bVar41 = dVar40 < dVar22;
            }
            if (cVar43 == '\0') {
              pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
              *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr0 >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = in_dr0;
            }
            dVar29 = dVar40;
            if ((bVar41) && (dVar29 = dVar22, cVar43 == '\0')) {
              dVar29 = CONCAT44D(fVar25,SUB84(dVar40,0));
            }
            uVar35 = (undefined4)(D2U(dVar29) >> 0x20);
            in_dr6 = CONCAT44D(uVar35,-SUB84(dVar29,0));
            *(undefined4 *)(unsigned)pdVar10 = 0xe0000000;
            if (cVar43 == '\0') {
              *(undefined4 *)(unsigned)(pdVar10 + 3) = uVar35;
            }
            else {
              pdVar10[3] = in_dr6;
            }
            ar7 = pdVar10 + 4;
          }
          else {
            if (iVar7 != 0) {
              if (cVar43 == '\0') {
                dVar40 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,SUB84(dVar40,0));
                dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + -1),0x3f800000);
                dVar29 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + -4),fVar20);
              }
              else {
                dVar40 = *pdVar2;
                dVar24 = *(double *)(unsigned)((int)pdVar10 + -4);
                dVar29 = *(double *)(unsigned)((int)pdVar10 + 4);
                pdVar10 = (double *)(unsigned)((int)pdVar10 + 0xc);
              }
              pdVar2 = pdVar10 + -3;
              if (cVar42 == '\0') {
                dVar29 = CONCAT44D(-F32HI(dVar29),SUB84(dVar29,0));
              }
              else {
                dVar29 = -dVar29;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)(unsigned)((int)ar7 + 0x14);
                *(undefined4 *)(unsigned)pdVar10 = uVar36;
              }
              else {
                pdVar10 = ar7 + 2;
                *pdVar10 = dVar32;
              }
              if (cVar42 == '\0') {
                dVar29 = CONCAT44D(F32HI(dVar29) + fVar25,
                                          SUB84(dVar29,0));
              }
              else {
                dVar29 = dVar29 + dVar22;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
                *(int *)(unsigned)pdVar10 = (int)(D2U(dVar24) >> 0x20);
              }
              else {
                pdVar10 = pdVar10 + -1;
                *pdVar10 = dVar24;
              }
              if (cVar42 == '\0') {
                bVar41 = F32HI(dVar29) < fVar25;
              }
              else {
                bVar41 = dVar29 < dVar22;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
                *(int *)(unsigned)pdVar10 = (int)(D2U(dVar40) >> 0x20);
              }
              else {
                pdVar10 = pdVar10 + -1;
                *pdVar10 = dVar40;
              }
              dVar33 = dVar29;
              if ((bVar41) && (dVar33 = dVar22, cVar43 == '\0')) {
                dVar33 = CONCAT44D(fVar25,SUB84(dVar29,0));
              }
              uVar34 = (undefined4)(D2U(dVar33) >> 0x20);
              in_dr6 = CONCAT44D(uVar34,-SUB84(dVar33,0));
              iVar14 = iVar14 + iVar7 + 1;
              *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
              iVar7 = 0;
              if (cVar43 == '\0') {
                *(undefined4 *)(unsigned)(pdVar10 + 3) = uVar34;
              }
              else {
                pdVar10[3] = in_dr6;
              }
              ar7 = pdVar10 + 4;
            }
            if (iVar13 == 0) {
              if (cVar43 == '\0') {
                dVar40 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,SUB84(dVar40,0));
                dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(iVar8 + -8),SUB84(dVar24,0));
                dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(iVar8 + -4),SUB84(in_dr6,0));
                pdVar10 = (double *)(unsigned)((int)ar7 + 0x14);
                *(undefined4 *)(unsigned)pdVar10 = uVar35;
              }
              else {
                dVar40 = *pdVar4;
                dVar24 = *(double *)(unsigned)(iVar8 + -4);
                dVar29 = *(double *)(unsigned)(iVar8 + 4);
                pdVar10 = ar7 + 2;
                *pdVar10 = dVar38;
              }
              iVar13 = 1;
              if (cVar42 == '\0') {
                dVar29 = CONCAT44D(F32HI(dVar29) + fVar25,
                                          SUB84(dVar29,0));
              }
              else {
                dVar29 = dVar29 + dVar22;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
                *(int *)(unsigned)pdVar10 = (int)(D2U(dVar24) >> 0x20);
              }
              else {
                pdVar10 = pdVar10 + -1;
                *pdVar10 = dVar24;
              }
              if (cVar42 == '\0') {
                bVar41 = F32HI(dVar29) < fVar25;
              }
              else {
                bVar41 = dVar29 < dVar22;
              }
              if (cVar43 == '\0') {
                pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
                *(int *)(unsigned)pdVar10 = (int)(D2U(dVar40) >> 0x20);
              }
              else {
                pdVar10 = pdVar10 + -1;
                *pdVar10 = dVar40;
              }
              in_dr6 = dVar29;
              if ((bVar41) && (in_dr6 = dVar22, cVar43 == '\0')) {
                in_dr6 = CONCAT44D(fVar25,SUB84(dVar29,0));
              }
              *(undefined4 *)(unsigned)pdVar10 = 0xe0000000;
              if (cVar43 == '\0') {
                *(int *)(unsigned)(pdVar10 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
              }
              else {
                pdVar10[3] = in_dr6;
              }
              ar7 = pdVar10 + 4;
            }
            if (cVar43 == '\0') {
              in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,SUB84(dVar40,0));
              in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar2 + 4),SUB84(dVar24,0));
              dVar40 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar2 + 1),SUB84(in_dr6,0));
              pdVar2 = (double *)(unsigned)((int)pdVar2 + 0xc);
            }
            else {
              in_dr0 = *pdVar2;
              in_dr2 = pdVar2[1];
              dVar40 = pdVar2[2];
              pdVar2 = pdVar2 + 3;
            }
            iVar13 = iVar13 + 1;
            pdVar2 = pdVar2 + -3;
            if (cVar43 == '\0') {
              pdVar10 = (double *)(unsigned)((int)ar7 + 0x14);
              *(undefined4 *)(unsigned)pdVar10 = uVar36;
            }
            else {
              pdVar10 = ar7 + 2;
              *pdVar10 = dVar32;
            }
            if (cVar42 == '\0') {
              dVar40 = CONCAT44D(F32HI(dVar40) + fVar25,SUB84(dVar40,0))
              ;
            }
            else {
              dVar40 = dVar40 + dVar22;
            }
            if (cVar43 == '\0') {
              pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
              *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr2 >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = in_dr2;
            }
            if (cVar42 == '\0') {
              bVar41 = F32HI(dVar40) < fVar25;
            }
            else {
              bVar41 = dVar40 < dVar22;
            }
            if (cVar43 == '\0') {
              pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
              *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr0 >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = in_dr0;
            }
            in_dr6 = dVar40;
            if ((bVar41) && (in_dr6 = dVar22, cVar43 == '\0')) {
              in_dr6 = CONCAT44D(fVar25,SUB84(dVar40,0));
            }
            *(undefined4 *)(unsigned)pdVar10 = 0xe0000000;
            if (cVar43 == '\0') {
              *(int *)(unsigned)(pdVar10 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
            }
            else {
              pdVar10[3] = in_dr6;
            }
            ar7 = pdVar10 + 4;
          }
        }
LAB_8c22b190:
        fVar25 = F32LO(dVar22);
        if (cVar42 == '\0') {
          dVar28 = CONCAT44D(F32HI(dVar28) * fVar25,SUB84(dVar28,0));
        }
        else {
          dVar28 = dVar28 * dVar22;
        }
        ar4 = (short *)(unsigned)((int)psVar3 + iVar9);
        if (cVar42 == '\0') {
          dVar40 = CONCAT44D(F32HI(dVar28) + fVar25,
                                    F32LO(dVar28) * fVar25);
        }
        else {
          dVar40 = dVar28 * dVar22 + dVar22;
        }
        iVar6 = iVar6 + -1;
        if (cVar42 == '\0') {
          in_dr14 = CONCAT44D((int)(D2U(dVar40) >> 0x20),F32LO(dVar40) + fVar25);
        }
        else {
          in_dr14 = dVar40 + dVar22;
        }
        in_dr10 = dVar32;
        if (cVar43 == '\0') {
          in_dr10 = CONCAT44D((int)(D2U(dVar32) >> 0x20),SUB84(dVar38,0));
        }
        fVar25 = -SUB84(dVar37,0);
        uVar35 = (undefined4)((ulonglong)in_dr14 >> 0x20);
        in_dr12 = in_dr14;
        if (cVar43 == '\0') {
          in_dr12 = CONCAT44D(uVar35,SUB84(dVar32,0));
        }
        dVar38 = in_dr10;
        dVar32 = in_dr12;
      } while (iVar6 != 0);
      fVar25 = F32HI(dVar22);
      if (iVar13 == 0) {
        if (iVar7 != 0) {
          if (cVar43 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar12,SUB84(in_dr0,0));
            pdVar2 = (double *)(unsigned)(iVar11 + -8);
          }
          else {
            in_dr0 = *pdVar12;
            pdVar2 = (double *)(unsigned)(iVar11 + -4);
          }
          if (cVar43 == '\0') {
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,SUB84(in_dr2,0));
            dVar38 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar2 + 4),SUB84(in_dr6,0));
          }
          else {
            in_dr2 = *pdVar2;
            dVar38 = pdVar2[1];
          }
          if (cVar42 == '\0') {
            dVar38 = CONCAT44D(-F32HI(dVar38),SUB84(dVar38,0));
          }
          else {
            dVar38 = -dVar38;
          }
          if (cVar43 == '\0') {
            pdVar2 = (double *)(unsigned)((int)ar7 + 0x14);
            *(undefined4 *)(unsigned)pdVar2 = uVar35;
          }
          else {
            pdVar2 = ar7 + 2;
            *pdVar2 = in_dr14;
          }
          if (cVar42 == '\0') {
            dVar38 = CONCAT44D(F32HI(dVar38) + fVar25,SUB84(dVar38,0));
          }
          else {
            dVar38 = dVar38 + dVar22;
          }
          if (cVar43 == '\0') {
            pdVar2 = (double *)(unsigned)((int)pdVar2 + -4);
            *(int *)(unsigned)pdVar2 = (int)((ulonglong)in_dr2 >> 0x20);
          }
          else {
            pdVar2 = pdVar2 + -1;
            *pdVar2 = in_dr2;
          }
          if (cVar42 == '\0') {
            bVar41 = F32HI(dVar38) < fVar25;
          }
          else {
            bVar41 = dVar38 < dVar22;
          }
          if (cVar43 == '\0') {
            pdVar2 = (double *)(unsigned)((int)pdVar2 + -4);
            *(int *)(unsigned)pdVar2 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            pdVar2 = pdVar2 + -1;
            *pdVar2 = in_dr0;
          }
          dVar32 = dVar38;
          if ((bVar41) && (dVar32 = dVar22, cVar43 == '\0')) {
            dVar32 = CONCAT44D(fVar25,SUB84(dVar38,0));
          }
          uVar35 = (undefined4)(D2U(dVar32) >> 0x20);
          in_dr6 = CONCAT44D(uVar35,-SUB84(dVar32,0));
          iVar14 = iVar14 + iVar7 + 1;
          *(undefined4 *)(unsigned)pdVar2 = 0xf0000000;
          if (cVar43 == '\0') {
            *(undefined4 *)(unsigned)(pdVar2 + 3) = uVar35;
          }
          else {
            pdVar2[3] = in_dr6;
          }
          ar7 = pdVar2 + 4;
        }
      }
      else {
        if (cVar43 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar12,SUB84(in_dr0,0));
          pdVar2 = (double *)(unsigned)(iVar11 + -8);
        }
        else {
          in_dr0 = *pdVar12;
          pdVar2 = (double *)(unsigned)(iVar11 + -4);
        }
        if (cVar43 == '\0') {
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,SUB84(in_dr2,0));
          dVar38 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar2 + 4),SUB84(in_dr6,0));
          pdVar2 = (double *)(unsigned)((int)ar7 + 0x14);
          *(undefined4 *)(unsigned)pdVar2 = uVar35;
        }
        else {
          in_dr2 = *pdVar2;
          dVar38 = pdVar2[1];
          pdVar2 = ar7 + 2;
          *pdVar2 = in_dr14;
        }
        if (cVar42 == '\0') {
          dVar38 = CONCAT44D(F32HI(dVar38) + fVar25,SUB84(dVar38,0));
        }
        else {
          dVar38 = dVar38 + dVar22;
        }
        if (cVar43 == '\0') {
          pdVar2 = (double *)(unsigned)((int)pdVar2 + -4);
          *(int *)(unsigned)pdVar2 = (int)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          pdVar2 = pdVar2 + -1;
          *pdVar2 = in_dr2;
        }
        if (cVar42 == '\0') {
          bVar41 = F32HI(dVar38) < fVar25;
        }
        else {
          bVar41 = dVar38 < dVar22;
        }
        if (cVar43 == '\0') {
          pdVar2 = (double *)(unsigned)((int)pdVar2 + -4);
          *(int *)(unsigned)pdVar2 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          pdVar2 = pdVar2 + -1;
          *pdVar2 = in_dr0;
        }
        in_dr6 = dVar38;
        if ((bVar41) && (in_dr6 = dVar22, cVar43 == '\0')) {
          in_dr6 = CONCAT44D(fVar25,SUB84(dVar38,0));
        }
        iVar14 = iVar14 + iVar13 + 1;
        *(undefined4 *)(unsigned)pdVar2 = 0xf0000000;
        if (cVar43 == '\0') {
          *(int *)(unsigned)(pdVar2 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
        }
        else {
          pdVar2[3] = in_dr6;
        }
        ar7 = pdVar2 + 4;
      }
      uVar1 = uVar1 - 1;
      if (uVar1 == 0) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar14;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar15;
        return ar7;
      }
    } while( true );
  }
  fVar25 = (*(undefined4 *)(unsigned)(unsigned)0x8c277af8) + 0.5;
  dVar38 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c277afc) + 0.5,(*(undefined4 *)(fr0_ - 0x28)));
  iVar14 = 0;
  iVar15 = 0;
  (*(uint *)(fr0_ - 0x44)) = ar6 & 0x3fff;
  dVar22 = CONCAT44D(fVar25,0x3f800000);
  (*(uint *)(fr0_ - 0x34)) = 0x3f800000;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x80000000) != 0) {
    dVar22 = 1.58735232019473e-314;
    (*(uint *)(fr0_ - 0x34)) = 0xbf800000;
  }
  (*(int *)(fr0_ - 0x38)) = (ar6 >> 0xe & 3) << 1;
  (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(ar7));
  (*(unsigned *)(fr0_ - 0x50) = (unsigned)(unsigned long)(ar4));
  (*(undefined4 *)(fr0_ - 0x30)) = in_PR;
  (*(undefined4 *)(fr0_ - 0x2c)) = uVar35;
  (*(undefined4 *)(fr0_ - 0x24)) = uVar36;
  do {
    fVar20 = F32LO(dVar22);
    iVar9 = (int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x50));
    psVar3 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x50)) + 2;
    pdVar2 = (double *)(unsigned)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x50))[1] * 0x20 + ar5);
    if (cVar43 == '\0') {
      dVar38 = CONCAT44D((int)(D2U(dVar38) >> 0x20),(*(uint *)(fr0_ - 0x34)));
    }
    else {
      in_xd12 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),(*(uint *)(fr0_ - 0x34)));
    }
    if (iVar9 < 0) {
      dVar38 = CONCAT44D((int)(D2U(dVar38) >> 0x20),-SUB84(dVar38,0));
      iVar9 = -iVar9;
    }
    uVar1 = (uint)(D2U(dVar38) >> 0x20);
    if (cVar43 == '\0') {
      in_dr10 = CONCAT44D(fVar25,SUB84(in_dr10,0));
      in_dr0 = CONCAT44D(0x3f000000,SUB84(in_dr0,0));
      fVar20 = *(float *)(unsigned)(pdVar2 + 3);
      in_dr8 = (double)(ulonglong)uVar1;
    }
    else {
      in_dr10 = CONCAT44D((*(uint *)(fr0_ - 0x44)),fVar25);
      in_dr0 = -7.44486205083996e+89;
      in_xd2 = pdVar2[3];
      in_xd8 = dVar38;
    }
    (*(unsigned *)(fr0_ - 0x50) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x50)) + 3));
    fVar26 = F32HI(in_dr0);
    if (cVar42 == '\0') {
      in_dr10 = CONCAT44D(fVar26 * fVar20 + F32HI(in_dr10),
                                 SUB84(in_dr10,0));
    }
    if (cVar43 == '\0') {
      fVar20 = *(float *)(unsigned)((int)pdVar2 + 0x1c);
    }
    else {
      in_xd2 = *(double *)(unsigned)((int)pdVar2 + 0x1c);
    }
    if (cVar42 == '\0') {
      in_dr8 = (double)(ulonglong)(uint)(fVar26 * fVar20 + F32LO(in_dr8));
    }
    iVar7 = 0;
    iVar6 = 0;
    iVar15 = iVar15 + iVar9;
    pdVar12 = (double *)(unsigned)(*psVar3 * 0x20 + ar5);
    iVar9 = iVar9 + -2;
    if (cVar43 == '\0') {
      fVar20 = *(float *)(unsigned)(pdVar12 + 3);
      dVar32 = CONCAT44D(uVar1,fVar25);
    }
    else {
      in_xd14 = CONCAT44D((*(uint *)(fr0_ - 0x44)),fVar25);
      in_xd2 = pdVar12[3];
      dVar32 = dVar38;
    }
    if (cVar42 == '\0') {
      dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),fVar26 * fVar20 + F32LO(dVar32));
    }
    if (cVar43 == '\0') {
      fVar20 = *(float *)(unsigned)((int)pdVar12 + 0x1c);
    }
    else {
      in_xd2 = *(double *)(unsigned)((int)pdVar12 + 0x1c);
    }
    dVar40 = in_xd14;
    if (cVar42 == '\0') {
      dVar32 = CONCAT44D(fVar26 * fVar20 + F32HI(dVar32),SUB84(dVar32,0)
                               );
    }
    do {
      psVar3 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x50)) + 1;
      pdVar10 = (double *)(unsigned)(*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x50)) * 0x20 + ar5);
      if (cVar43 == '\0') {
        in_dr0 = CONCAT44D(0x3f000000,SUB84(in_dr0,0));
        dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 3),fVar25);
      }
      else {
        in_xd2 = CONCAT44D((*(uint *)(fr0_ - 0x44)),fVar25);
        in_dr0 = -7.44486205083996e+89;
        dVar22 = pdVar10[3];
      }
      fVar20 = F32HI(in_dr0);
      if (cVar42 == '\0') {
        dVar22 = (double)(ulonglong)
                         (uint)(fVar20 * F32HI(dVar22) + F32LO(dVar22));
      }
      (*(uint *)(fr0_ - 0x3c)) = SUB84(dVar22,0);
      if (cVar43 == '\0') {
        uVar23 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar10 + 0x1c),(int)(D2U(dVar38) >> 0x20));
      }
      else {
        (*(uint *)(fr0_ - 0x3c)) = SUB84(in_xd2,0);
        (*(int *)(fr0_ - 0x38)) = (int)((ulonglong)in_xd2 >> 0x20);
        uVar23 = *(ulonglong *)(unsigned)((int)pdVar10 + 0x1c);
        in_xd2 = dVar38;
      }
      if (cVar42 == '\0') {
        uVar23 = (ulonglong)(uint)(fVar20 * (float)(uVar23 >> 0x20) + (float)uVar23);
      }
      if (cVar43 == '\0') {
        (*(undefined4 *)(fr0_ - 0x40)) = (undefined4)uVar23;
        fVar26 = *(float *)(unsigned)pdVar2;
      }
      else {
        (*(undefined4 *)(fr0_ - 0x40)) = SUB84(in_xd2,0);
        (*(uint *)(fr0_ - 0x3c)) = (uint)((ulonglong)in_xd2 >> 0x20);
        fVar26 = (float)((ulonglong)*pdVar2 >> 0x20);
      }
      dVar22 = CONCAT44D(fVar26,0x3f800000);
      uVar36 = SUB84(dVar32,0);
      uVar34 = (undefined4)(D2U(dVar32) >> 0x20);
      uVar35 = SUB84(in_dr8,0);
      if (cVar42 != '\0' || 1.0 <= fVar26) {
        if (cVar43 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)pdVar12,0x3f800000);
        }
        else {
          dVar22 = *pdVar12;
        }
        if (cVar42 == '\0' && F32HI(dVar22) < SUB84(dVar22,0))
        goto LAB_8c22aca4;
        if (cVar43 == '\0') {
          fVar26 = *(float *)(unsigned)pdVar10;
        }
        else {
          fVar26 = (float)((ulonglong)*pdVar10 >> 0x20);
        }
        dVar22 = CONCAT44D(fVar26,0x3f800000);
        if (cVar42 == '\0' && fVar26 < 1.0) goto LAB_8c22aca4;
        if (cVar43 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),*(undefined4 *)(unsigned)(pdVar2 + 1));
          dVar29 = *(double *)(unsigned)((int)pdVar12 + 4);
        }
        else {
          in_xd2 = pdVar2[1];
          dVar29 = pdVar12[1];
          dVar22 = *(double *)(unsigned)((int)pdVar10 + 4);
          in_xd4 = *(double *)(unsigned)((int)pdVar12 + 4);
        }
        fVar26 = F32HI(dVar29);
        fVar27 = F32LO(dVar29);
        if (cVar42 == '\0') {
          fVar21 = (F32LO(dVar22) - fVar26) * (F32HI(dVar22) - fVar27);
        }
        else {
          dVar22 = (dVar22 - dVar29) - dVar29;
          fVar21 = SUB84(dVar22 * dVar22,0);
        }
        if (cVar43 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar2 + 4),fVar21);
          in_dr0 = CONCAT44D(fVar20,*(undefined4 *)(unsigned)(pdVar10 + 1));
        }
        else {
          dVar22 = *(double *)(unsigned)((int)pdVar2 + 4);
        }
        if (cVar42 == '\0') {
          fVar26 = F32LO(in_dr0) - fVar26;
          in_dr0 = (double)(ulonglong)(uint)fVar26;
          fVar26 = (F32HI(dVar22) - fVar27) * fVar26;
          dVar22 = CONCAT44D(fVar26,F32LO(dVar22) - fVar26);
        }
        else {
          in_dr0 = in_dr0 - dVar29;
          dVar22 = (dVar22 - dVar29) * in_dr0;
          dVar22 = dVar22 - dVar22;
        }
        dVar29 = in_xd2;
        if (cVar43 == '\0') {
          dVar29 = CONCAT44D(SUB84(dVar22,0),fVar27);
        }
        if (cVar42 == '\0') {
          dVar29 = CONCAT44D(F32HI(dVar29) * F32LO(dVar38),
                                    SUB84(dVar29,0));
        }
        else {
          dVar29 = dVar29 * dVar38;
        }
        dVar22 = (double)(D2U(dVar22) & 0xffffffff00000000);
        fVar20 = F32HI(dVar29);
        if (cVar42 == '\0') {
          bVar41 = fVar20 < 0.0;
        }
        else {
          bVar41 = dVar29 < dVar22;
        }
        uVar39 = (undefined4)((ulonglong)in_dr10 >> 0x20);
        if (bVar41) {
          if (iVar6 != 0) {
            if (cVar43 == '\0') {
              dVar29 = CONCAT44D(fVar20,uVar30);
              uVar31 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar12 + 4),*(undefined4 *)(unsigned)(pdVar12 + 1));
              in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar12 + 0xc),uVar35);
              dVar22 = (double)((ulonglong)*(uint *)(unsigned)(pdVar12 + 2) << 0x20);
              pdVar4 = (double *)(unsigned)((int)pdVar12 + 0x14);
              dVar28 = in_xd4;
            }
            else {
              uVar31 = *(undefined8 *)(unsigned)((int)pdVar12 + 4);
              dVar28 = CONCAT44D(psVar3,uVar30);
              in_xd6 = *(double *)(unsigned)((int)pdVar12 + 0xc);
              in_dr8 = *(double *)(unsigned)((int)pdVar12 + 0x14);
              dVar22 = *(double *)(unsigned)((int)pdVar12 + 0x1c);
              pdVar4 = (double *)(unsigned)((int)pdVar12 + 0x24);
            }
            if (cVar42 == '\0') {
              fVar20 = F32LO(dVar29) - F32HI(dVar22);
            }
            else {
              fVar20 = SUB84(dVar29 - dVar22,0);
            }
            if (cVar43 == '\0') {
              dVar22 = CONCAT44D(uVar30,SUB84(dVar22,0));
              dVar29 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,fVar20);
            }
            else {
              dVar22 = CONCAT44D(psVar3,uVar30);
              dVar29 = *pdVar4;
            }
            fVar20 = F32HI(dVar22);
            if (cVar42 == '\0') {
              bVar41 = SUB84(dVar29,0) < fVar20;
              dVar29 = CONCAT44D(-F32HI(dVar29),SUB84(dVar29,0));
            }
            else {
              bVar41 = dVar29 < dVar22;
              dVar29 = -dVar29;
            }
            in_xd4 = dVar28;
            if ((bVar41) && (in_xd4 = dVar22, cVar43 == '\0')) {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),fVar20);
              in_xd4 = dVar28;
            }
            if (cVar43 == '\0') {
              *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x1c) = (int)(D2U(dVar29) >> 0x20);
              *(int *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 3) = SUB84(dVar29,0);
              *(undefined4 *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x14) = uVar34;
              *(undefined4 *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 2) = uVar36;
              *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0xc) = (int)((ulonglong)in_dr8 >> 0x20);
              *(int *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 1) = (int)uVar31;
              *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4) = (int)((ulonglong)uVar31 >> 0x20);
            }
            else {
              *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x1c) = dVar29;
              ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[3] = in_xd4;
              *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x14) = dVar32;
              ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[2] = dVar40;
              *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0xc) = in_dr8;
              ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[1] = in_xd6;
              *(undefined8 *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4) = uVar31;
            }
            *(undefined4 *)(unsigned)(*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(0xf0000000));
            iVar14 = iVar14 + iVar6 + 1;
            (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4));
            iVar6 = 0;
          }
          if (iVar7 == 0) {
            if (cVar43 == '\0') {
              in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar2 + 4),SUB84(in_dr8,0));
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),uVar30);
              dVar28 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar2 + 1),
                                        *(undefined4 *)(unsigned)((int)pdVar2 + 0xc));
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),*(undefined4 *)(unsigned)(pdVar2 + 2)
                                       );
              pdVar2 = (double *)(unsigned)((int)pdVar2 + 0x14);
            }
            else {
              in_dr8 = *(double *)(unsigned)((int)pdVar2 + 4);
              in_xd2 = CONCAT44D(psVar3,uVar30);
              dVar28 = *(double *)(unsigned)((int)pdVar2 + 0xc);
              in_xd6 = *(double *)(unsigned)((int)pdVar2 + 0x14);
              in_xd4 = *(double *)(unsigned)((int)pdVar2 + 0x1c);
              pdVar2 = (double *)(unsigned)((int)pdVar2 + 0x24);
            }
            if (cVar42 == '\0') {
              fVar20 = F32LO(dVar29) + F32LO(dVar22);
              bVar41 = fVar20 < SUB84(dVar22,0);
            }
            else {
              fVar20 = SUB84(dVar29 + dVar22,0);
              bVar41 = dVar29 + dVar22 < dVar22;
            }
            if (cVar43 == '\0') {
              dVar29 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,fVar20);
            }
            else {
              dVar29 = *pdVar2;
            }
            if (bVar41) {
              if (cVar43 == '\0') {
                dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),uVar30);
              }
              else {
                in_xd4 = CONCAT44D(psVar3,uVar30);
              }
            }
            if (cVar43 == '\0') {
              *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x1c) = (int)(D2U(dVar29) >> 0x20);
              *(int *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 3) = SUB84(dVar29,0);
              *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x14) = SUB84(in_dr8,0);
              *(undefined4 *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 2) = uVar39;
              *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0xc) = SUB84(dVar28,0);
              *(int *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 1) = (int)(D2U(dVar28) >> 0x20);
              *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4) = (int)((ulonglong)in_dr8 >> 0x20);
            }
            else {
              *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x1c) = dVar29;
              ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[3] = in_xd4;
              *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x14) = in_xd8;
              ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[2] = in_dr10;
              *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0xc) = in_xd6;
              ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[1] = dVar28;
              *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4) = in_dr8;
            }
            *(undefined4 *)(unsigned)(*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(0xe0000000));
            (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4));
            iVar7 = 1;
          }
          if (cVar43 == '\0') {
            in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar12 + 4),SUB84(in_dr8,0));
            dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),uVar30);
            dVar28 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar12 + 1),
                                      *(undefined4 *)(unsigned)((int)pdVar12 + 0xc));
            dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),*(undefined4 *)(unsigned)(pdVar12 + 2))
            ;
            pdVar2 = (double *)(unsigned)((int)pdVar12 + 0x14);
          }
          else {
            in_dr8 = *(double *)(unsigned)((int)pdVar12 + 4);
            in_xd2 = CONCAT44D(psVar3,uVar30);
            dVar28 = *(double *)(unsigned)((int)pdVar12 + 0xc);
            in_xd6 = *(double *)(unsigned)((int)pdVar12 + 0x14);
            in_xd4 = *(double *)(unsigned)((int)pdVar12 + 0x1c);
            pdVar2 = (double *)(unsigned)((int)pdVar12 + 0x24);
          }
          if (cVar42 == '\0') {
            fVar20 = F32LO(dVar29) + F32LO(dVar22);
            bVar41 = fVar20 < SUB84(dVar22,0);
          }
          else {
            fVar20 = SUB84(dVar29 + dVar22,0);
            bVar41 = dVar29 + dVar22 < dVar22;
          }
          if (cVar43 == '\0') {
            in_dr4 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,fVar20);
          }
          else {
            in_dr4 = *pdVar2;
          }
          if (bVar41) {
            if (cVar43 == '\0') {
              in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),uVar30);
            }
            else {
              in_xd4 = CONCAT44D(psVar3,uVar30);
            }
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x1c) = (int)((ulonglong)in_dr4 >> 0x20);
            *(int *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 3) = SUB84(in_dr4,0);
            *(undefined4 *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x14) = uVar34;
            *(undefined4 *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 2) = uVar36;
            *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0xc) = SUB84(dVar28,0);
            *(int *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 1) = (int)(D2U(dVar28) >> 0x20);
            *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4) = (int)((ulonglong)in_dr8 >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x1c) = in_dr4;
            ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[3] = in_xd4;
            *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x14) = dVar32;
            ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[2] = dVar40;
            *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0xc) = in_xd6;
            ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[1] = dVar28;
            *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4) = in_dr8;
          }
          *(undefined4 *)(unsigned)(*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(0xe0000000));
          (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4));
          iVar7 = iVar7 + 1;
        }
        else {
          if (iVar7 != 0) {
            if (cVar43 == '\0') {
              dVar22 = (double)((ulonglong)uVar30 << 0x20);
              uVar31 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar12 + 4),*(undefined4 *)(unsigned)(pdVar12 + 1));
              in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar12 + 0xc),uVar35);
              dVar29 = CONCAT44D(fVar20,*(undefined4 *)(unsigned)(pdVar12 + 2));
              pdVar4 = (double *)(unsigned)((int)pdVar12 + 0x14);
            }
            else {
              uVar31 = *(undefined8 *)(unsigned)((int)pdVar12 + 4);
              dVar22 = CONCAT44D(psVar3,uVar30);
              in_xd6 = *(double *)(unsigned)((int)pdVar12 + 0xc);
              in_dr8 = *(double *)(unsigned)((int)pdVar12 + 0x14);
              in_xd4 = *(double *)(unsigned)((int)pdVar12 + 0x1c);
              pdVar4 = (double *)(unsigned)((int)pdVar12 + 0x24);
            }
            fVar20 = F32HI(dVar22);
            if (cVar42 == '\0') {
              fVar26 = F32LO(dVar29) + fVar20;
              bVar41 = fVar26 < fVar20;
            }
            else {
              fVar26 = SUB84(dVar29 + dVar22,0);
              bVar41 = dVar29 + dVar22 < dVar22;
            }
            if (cVar43 == '\0') {
              dVar29 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,fVar26);
            }
            else {
              dVar29 = *pdVar4;
            }
            if (bVar41) {
              if (cVar43 == '\0') {
                dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),uVar30);
              }
              else {
                in_xd4 = CONCAT44D(psVar3,uVar30);
              }
            }
            if (cVar43 == '\0') {
              *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x1c) = (int)(D2U(dVar29) >> 0x20);
              *(int *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 3) = SUB84(dVar29,0);
              *(undefined4 *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x14) = uVar34;
              *(undefined4 *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 2) = uVar36;
              *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0xc) = (int)((ulonglong)in_dr8 >> 0x20);
              *(int *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 1) = (int)uVar31;
              *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4) = (int)((ulonglong)uVar31 >> 0x20);
            }
            else {
              *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x1c) = dVar29;
              ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[3] = in_xd4;
              *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x14) = dVar32;
              ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[2] = dVar40;
              *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0xc) = in_dr8;
              ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[1] = in_xd6;
              *(undefined8 *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4) = uVar31;
            }
            *(undefined4 *)(unsigned)(*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(0xf0000000));
            iVar14 = iVar14 + iVar7 + 1;
            (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4));
            iVar7 = 0;
          }
          if (iVar6 == 0) {
            if (cVar43 == '\0') {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),uVar30);
              in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar2 + 1),SUB84(in_dr8,0));
              uVar31 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar2 + 0xc),*(undefined4 *)(unsigned)((int)pdVar2 + 4))
              ;
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)(pdVar2 + 2)
                                       );
              pdVar2 = (double *)(unsigned)((int)pdVar2 + 0x14);
              dVar28 = in_xd4;
            }
            else {
              in_xd6 = *(double *)(unsigned)((int)pdVar2 + 4);
              dVar28 = CONCAT44D(psVar3,uVar30);
              in_dr8 = *(double *)(unsigned)((int)pdVar2 + 0xc);
              uVar31 = *(undefined8 *)(unsigned)((int)pdVar2 + 0x14);
              in_xd2 = *(double *)(unsigned)((int)pdVar2 + 0x1c);
              pdVar2 = (double *)(unsigned)((int)pdVar2 + 0x24);
            }
            if (cVar42 == '\0') {
              fVar20 = F32LO(dVar29) - F32LO(dVar22);
            }
            else {
              fVar20 = SUB84(dVar29 - dVar22,0);
            }
            if (cVar43 == '\0') {
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),uVar30);
              dVar29 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,fVar20);
            }
            else {
              in_xd2 = CONCAT44D(psVar3,uVar30);
              dVar29 = *pdVar2;
            }
            if (cVar42 == '\0') {
              bVar41 = SUB84(dVar29,0) < SUB84(dVar22,0);
              dVar29 = CONCAT44D(-F32HI(dVar29),SUB84(dVar29,0));
            }
            else {
              bVar41 = dVar29 < dVar22;
              dVar29 = -dVar29;
            }
            in_xd4 = dVar28;
            if ((bVar41) && (in_xd4 = in_xd2, cVar43 == '\0')) {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),SUB84(dVar22,0));
              in_xd4 = dVar28;
            }
            if (cVar43 == '\0') {
              *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x1c) = (int)(D2U(dVar29) >> 0x20);
              *(int *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 3) = SUB84(dVar29,0);
              *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x14) = SUB84(in_dr8,0);
              *(undefined4 *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 2) = uVar39;
              *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0xc) = (int)((ulonglong)uVar31 >> 0x20);
              *(int *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 1) = (int)((ulonglong)in_dr8 >> 0x20);
              *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4) = (int)uVar31;
            }
            else {
              *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x1c) = dVar29;
              ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[3] = in_xd4;
              *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x14) = in_xd8;
              ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[2] = in_dr10;
              *(undefined8 *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0xc) = uVar31;
              ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[1] = in_dr8;
              *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4) = in_xd6;
            }
            *(undefined4 *)(unsigned)(*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(0xe0000000));
            (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4));
            iVar6 = 1;
          }
          if (cVar43 == '\0') {
            in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar12 + 4),SUB84(in_dr8,0));
            pdVar4 = pdVar12 + 1;
            dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),uVar30);
            dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)(pdVar12 + 2))
            ;
            pdVar2 = (double *)(unsigned)((int)pdVar12 + 0x14);
            dVar28 = in_xd4;
          }
          else {
            in_dr8 = *(double *)(unsigned)((int)pdVar12 + 4);
            dVar28 = CONCAT44D(psVar3,uVar30);
            in_xd6 = *(double *)(unsigned)((int)pdVar12 + 0xc);
            pdVar4 = (double *)(unsigned)((int)pdVar12 + 0x14);
            in_xd2 = *(double *)(unsigned)((int)pdVar12 + 0x1c);
            pdVar2 = (double *)(unsigned)((int)pdVar12 + 0x24);
          }
          dVar37 = *pdVar4;
          if (cVar42 == '\0') {
            fVar20 = F32LO(dVar29) - F32LO(dVar22);
          }
          else {
            fVar20 = SUB84(dVar29 - dVar22,0);
          }
          if (cVar43 == '\0') {
            dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),uVar30);
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,fVar20);
          }
          else {
            in_xd2 = CONCAT44D(psVar3,uVar30);
            dVar29 = *pdVar2;
          }
          if (cVar42 == '\0') {
            bVar41 = SUB84(dVar29,0) < SUB84(dVar22,0);
            in_dr4 = CONCAT44D(-F32HI(dVar29),SUB84(dVar29,0));
          }
          else {
            bVar41 = dVar29 < dVar22;
            in_dr4 = -dVar29;
          }
          in_xd4 = dVar28;
          if ((bVar41) && (in_xd4 = in_xd2, cVar43 == '\0')) {
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),SUB84(dVar22,0));
            in_xd4 = dVar28;
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x1c) = (int)((ulonglong)in_dr4 >> 0x20);
            *(int *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 3) = SUB84(in_dr4,0);
            *(undefined4 *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x14) = uVar34;
            *(undefined4 *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 2) = uVar36;
            *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0xc) = (int)(D2U(dVar37) >> 0x20);
            *(int *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 1) = SUB84(dVar37,0);
            *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4) = (int)((ulonglong)in_dr8 >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x1c) = in_dr4;
            ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[3] = in_xd4;
            *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x14) = dVar32;
            ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[2] = dVar40;
            *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0xc) = dVar37;
            ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[1] = in_xd6;
            *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4) = in_dr8;
          }
          *(undefined4 *)(unsigned)(*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(0xe0000000));
          (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4));
          iVar6 = iVar6 + 1;
        }
      }
      else {
LAB_8c22aca4:
        if (iVar6 != 0) {
          if (cVar43 == '\0') {
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),uVar30);
            uVar31 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar12 + 4),*(undefined4 *)(unsigned)(pdVar12 + 1));
            in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar12 + 0xc),uVar35);
            dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)(pdVar12 + 2))
            ;
            pdVar4 = (double *)(unsigned)((int)pdVar12 + 0x14);
            dVar29 = in_xd4;
          }
          else {
            uVar31 = *(undefined8 *)(unsigned)((int)pdVar12 + 4);
            dVar29 = CONCAT44D(psVar3,uVar30);
            in_xd6 = *(double *)(unsigned)((int)pdVar12 + 0xc);
            in_dr8 = *(double *)(unsigned)((int)pdVar12 + 0x14);
            in_xd2 = *(double *)(unsigned)((int)pdVar12 + 0x1c);
            pdVar4 = (double *)(unsigned)((int)pdVar12 + 0x24);
          }
          if (cVar42 == '\0') {
            fVar20 = F32LO(in_dr4) - F32LO(dVar22);
          }
          else {
            fVar20 = SUB84(in_dr4 - dVar22,0);
          }
          if (cVar43 == '\0') {
            dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),uVar30);
            dVar28 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,fVar20);
          }
          else {
            in_xd2 = CONCAT44D(psVar3,uVar30);
            dVar28 = *pdVar4;
          }
          if (cVar42 == '\0') {
            bVar41 = SUB84(dVar28,0) < SUB84(dVar22,0);
            in_dr4 = CONCAT44D(-F32HI(dVar28),SUB84(dVar28,0));
          }
          else {
            bVar41 = dVar28 < dVar22;
            in_dr4 = -dVar28;
          }
          in_xd4 = dVar29;
          if ((bVar41) && (in_xd4 = in_xd2, cVar43 == '\0')) {
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),SUB84(dVar22,0));
            in_xd4 = dVar29;
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x1c) = (int)((ulonglong)in_dr4 >> 0x20);
            *(int *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 3) = SUB84(in_dr4,0);
            *(undefined4 *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x14) = uVar34;
            *(undefined4 *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 2) = uVar36;
            *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0xc) = (int)((ulonglong)in_dr8 >> 0x20);
            *(int *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 1) = (int)uVar31;
            *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4) = (int)((ulonglong)uVar31 >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x1c) = in_dr4;
            ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[3] = in_xd4;
            *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x14) = dVar32;
            ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[2] = dVar40;
            *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0xc) = in_dr8;
            ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[1] = in_xd6;
            *(undefined8 *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4) = uVar31;
          }
          *(undefined4 *)(unsigned)(*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(0xf0000000));
          iVar14 = iVar14 + iVar6 + 1;
          (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4));
          iVar6 = 0;
        }
        if (iVar7 != 0) {
          pdVar4 = (double *)(unsigned)((int)pdVar12 + 4);
          if (cVar43 == '\0') {
            dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),uVar30);
            in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar12 + 0xc),SUB84(in_dr8,0));
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(pdVar12 + 2))
            ;
            pdVar5 = (double *)(unsigned)((int)pdVar12 + 0x14);
          }
          else {
            in_xd6 = *pdVar4;
            pdVar4 = (double *)(unsigned)((int)pdVar12 + 0xc);
            in_xd2 = CONCAT44D(psVar3,uVar30);
            in_dr8 = *(double *)(unsigned)((int)pdVar12 + 0x14);
            in_xd4 = *(double *)(unsigned)((int)pdVar12 + 0x1c);
            pdVar5 = (double *)(unsigned)((int)pdVar12 + 0x24);
          }
          dVar29 = *pdVar4;
          if (cVar42 == '\0') {
            fVar20 = F32LO(in_dr4) + F32LO(dVar22);
            bVar41 = fVar20 < SUB84(dVar22,0);
          }
          else {
            fVar20 = SUB84(in_dr4 + dVar22,0);
            bVar41 = in_dr4 + dVar22 < dVar22;
          }
          if (cVar43 == '\0') {
            in_dr4 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar20);
          }
          else {
            in_dr4 = *pdVar5;
          }
          if (bVar41) {
            if (cVar43 == '\0') {
              in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),uVar30);
            }
            else {
              in_xd4 = CONCAT44D(psVar3,uVar30);
            }
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x1c) = (int)((ulonglong)in_dr4 >> 0x20);
            *(int *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 3) = SUB84(in_dr4,0);
            *(undefined4 *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x14) = uVar34;
            *(undefined4 *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 2) = uVar36;
            *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0xc) = (int)((ulonglong)in_dr8 >> 0x20);
            *(int *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 1) = (int)(D2U(dVar29) >> 0x20);
            *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4) = SUB84(dVar29,0);
          }
          else {
            *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x1c) = in_dr4;
            ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[3] = in_xd4;
            *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x14) = dVar32;
            ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[2] = dVar40;
            *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0xc) = in_dr8;
            ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[1] = dVar29;
            *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4) = in_xd6;
          }
          *(undefined4 *)(unsigned)(*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(0xf0000000));
          iVar14 = iVar14 + iVar7 + 1;
          (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4));
          iVar7 = 0;
        }
        if (cVar43 == '\0') {
          fVar20 = *(float *)(unsigned)pdVar2;
        }
        else {
          fVar20 = (float)((ulonglong)*pdVar2 >> 0x20);
        }
        dVar22 = CONCAT44D(fVar20,0x3f800000);
        if (cVar42 != '\0' || fVar20 <= 1.0) {
          if (cVar43 == '\0') {
            dVar22 = CONCAT44D(*(undefined4 *)(unsigned)pdVar12,0x3f800000);
          }
          else {
            dVar22 = *pdVar12;
          }
          if (cVar42 != '\0' || F32HI(dVar22) <= SUB84(dVar22,0)) {
            if (cVar43 == '\0') {
              fVar20 = *(float *)(unsigned)pdVar10;
            }
            else {
              fVar20 = (float)((ulonglong)*pdVar10 >> 0x20);
            }
            dVar22 = CONCAT44D(fVar20,0x3f800000);
            if (cVar42 != '\0' || fVar20 <= 1.0) goto LAB_8c22adbc;
          }
        }
        if (cVar43 == '\0') {
          in_dr4 = CONCAT44D(uVar30,SUB84(dVar38,0));
        }
        else {
          in_dr4 = CONCAT44D(psVar3,uVar30);
          in_xd4 = in_xd12;
        }
        (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)((double *)(unsigned)(vsp = (puVar19 ? (unsigned long)puVar19 - 64 : (unsigned long)(fr0_ - 116)), FUN_8c2319cc(pdVar2,pdVar12,pdVar10,((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))))));
      }
LAB_8c22adbc:
      (*(unsigned *)(fr0_ - 0x50) = (unsigned)(unsigned long)((short *)(unsigned)((int)psVar3 + (*(int *)(fr0_ - 0x38)))));
      if (cVar43 == '\0') {
        dVar29 = CONCAT44D((int)(D2U(dVar32) >> 0x20),(*(uint *)(fr0_ - 0x3c)));
        in_xd14 = dVar40;
        in_dr10 = CONCAT44D(SUB84(dVar32,0),SUB84(in_dr10,0));
      }
      else {
        in_xd14 = CONCAT44D((*(int *)(fr0_ - 0x38)),(*(uint *)(fr0_ - 0x3c)));
        dVar29 = dVar32;
        in_dr10 = dVar40;
      }
      iVar9 = iVar9 + -1;
      dVar38 = CONCAT44D((int)(D2U(dVar38) >> 0x20),-SUB84(dVar38,0));
      if (cVar43 == '\0') {
        in_dr8 = (double)(D2U(dVar29) >> 0x20);
        dVar32 = CONCAT44D((*(undefined4 *)(fr0_ - 0x40)),SUB84(dVar29,0));
      }
      else {
        dVar32 = CONCAT44D((*(uint *)(fr0_ - 0x3c)),(*(undefined4 *)(fr0_ - 0x40)));
        in_xd8 = dVar29;
      }
      pdVar2 = pdVar12;
      pdVar12 = pdVar10;
      dVar40 = in_xd14;
    } while (iVar9 != 0);
    if ((iVar7 != 0) || (iVar6 != 0)) {
      if (cVar43 == '\0') {
        in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),SUB84(in_dr8,0));
        pdVar10 = pdVar10 + 1;
      }
      else {
        in_dr8 = *(double *)(unsigned)((int)pdVar10 + 4);
        pdVar10 = (double *)(unsigned)((int)pdVar10 + 0xc);
      }
      if (cVar43 == '\0') {
        dVar32 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,*(undefined4 *)(unsigned)((int)pdVar10 + 4));
        pdVar10 = pdVar10 + 1;
      }
      else {
        dVar32 = *pdVar10;
        in_xd6 = pdVar10[1];
        pdVar10 = pdVar10 + 2;
      }
      uVar35 = (undefined4)(D2U(dVar22) >> 0x20);
      dVar40 = in_xd4;
      if (iVar7 == 0) {
        if (cVar43 == '\0') {
          dVar22 = CONCAT44D(uVar35,*(undefined4 *)(unsigned)pdVar10);
          dVar29 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),uVar30);
        }
        else {
          in_xd2 = *pdVar10;
          dVar40 = CONCAT44D(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x50)),uVar30);
          dVar29 = pdVar10[1];
        }
        iVar14 = iVar14 + iVar6 + 1;
        if (cVar42 == '\0') {
          in_dr4 = CONCAT44D(-F32HI(dVar29),
                                    F32LO(dVar29) - F32LO(dVar22));
        }
        else {
          in_dr4 = -(dVar29 - dVar22);
        }
      }
      else {
        if (cVar43 == '\0') {
          dVar22 = CONCAT44D(uVar35,uVar30);
        }
        else {
          dVar40 = *pdVar10;
          pdVar10 = pdVar10 + 1;
          in_xd2 = CONCAT44D(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x50)),uVar30);
        }
        dVar29 = *pdVar10;
        if (cVar42 == '\0') {
          in_dr4 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                    F32LO(dVar29) + F32LO(dVar22));
        }
        else {
          in_dr4 = dVar29 + dVar22;
        }
        iVar14 = iVar14 + iVar7 + 1;
      }
      if (cVar43 == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),uVar30);
      }
      else {
        in_xd2 = CONCAT44D(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x50)),uVar30);
      }
      if (cVar42 == '\0') {
        bVar41 = SUB84(in_dr4,0) < SUB84(dVar22,0);
      }
      else {
        bVar41 = in_dr4 < dVar22;
      }
      in_xd4 = dVar40;
      if ((bVar41) && (in_xd4 = in_xd2, cVar43 == '\0')) {
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),SUB84(dVar22,0));
        in_xd4 = dVar40;
      }
      if (cVar43 == '\0') {
        *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x1c) = (int)((ulonglong)in_dr4 >> 0x20);
        *(int *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 3) = SUB84(in_dr4,0);
        *(undefined4 *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x14) = (*(undefined4 *)(fr0_ - 0x40));
        dVar22 = (double)(ulonglong)(*(uint *)(fr0_ - 0x3c));
        *(uint *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 2) = (*(uint *)(fr0_ - 0x3c));
        *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0xc) = SUB84(dVar32,0);
        *(int *)(unsigned)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 1) = (int)(D2U(dVar32) >> 0x20);
        *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4) = (int)((ulonglong)in_dr8 >> 0x20);
      }
      else {
        *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x1c) = in_dr4;
        ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[3] = in_xd4;
        *(ulonglong *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0x14) = CONCAT44((*(uint *)(fr0_ - 0x3c)),(*(undefined4 *)(fr0_ - 0x40)));
        in_xd2 = CONCAT44D((*(int *)(fr0_ - 0x38)),(*(uint *)(fr0_ - 0x3c)));
        ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[2] = in_xd2;
        *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 0xc) = in_xd6;
        ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[1] = dVar32;
        *(double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4) = in_dr8;
      }
      *(undefined4 *)(unsigned)(*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(0xf0000000));
      (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 4));
    }
    (*(uint *)(fr0_ - 0x44)) = (*(uint *)(fr0_ - 0x44)) - 1;
    if ((*(uint *)(fr0_ - 0x44)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar14;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar15;
      return ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x58));
    }
  } while( true );
}

__asm__(".globl _FUN_8c22a828\n.set _FUN_8c22a828, _FUN_8c22a828_def\n");
