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
double * FUN_8c229150_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c229150";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  int iVar8;
  double *ar4_00;
  double *pdVar9;
  double *pdVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  double in_dr0 = 0;
  double dVar17;
  double in_dr2 = 0;
  double in_dr4 = 0;
  float fVar18;
  float fVar19;
  double in_dr6 = 0;
  double dVar20;
  float fVar22;
  undefined4 uVar23;
  double dVar21;
  float fVar24;
  double dVar25;
  double in_dr12 = 0;
  undefined8 in_dr14 = 0;
  double dVar26;
  undefined8 in_xd8 = 0;
  bool bVar27;
  char cVar28;
  char cVar29;
  
  cVar29 = '\0';
  cVar28 = '\0';
  (*(undefined4 *)(fr0_ - 0x20)) = (int)((ulonglong)in_dr12 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x24)) = SUB84(in_dr12,0);
  (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x2c)) = (int)in_dr14;
  puVar16 = ((undefined4 *)(fr0_ - 0x34));
  ((undefined4 *)(fr0_ - 0x34))[0] = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0);
  uVar1 = ar6 & 0x3fff;
  iVar2 = 0;
  iVar3 = 0;
  iVar5 = (ar6 >> 0xe & 3) << 1;
  dVar26 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),0x3f800000);
  do {
    iVar6 = (int)*ar4;
    psVar4 = ar4 + 2;
    fVar24 = 1.0;
    if ((*puVar16 & 0x80000000) != 0) {
      fVar24 = -1.0;
    }
    pdVar7 = (double *)(unsigned)(ar4[1] * 0x20 + ar5);
    if (iVar6 < 0) {
      iVar6 = -iVar6;
      fVar24 = -fVar24;
    }
    iVar3 = iVar3 + iVar6;
    iVar6 = iVar6 + -2;
    iVar12 = 0;
    iVar13 = 0;
    ar4 = ar4 + 3;
    pdVar9 = (double *)(unsigned)(*psVar4 * 0x20 + ar5);
    do {
      if (cVar29 == '\0') {
        dVar17 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),SUB84(in_dr0,0));
        dVar20 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 1),SUB84(in_dr6,0));
        iVar8 = (int)pdVar7 + 0xc;
      }
      else {
        dVar17 = *(double *)(unsigned)((int)pdVar7 + 4);
        dVar20 = *(double *)(unsigned)((int)pdVar7 + 0xc);
        iVar8 = (int)pdVar7 + 0x14;
      }
      if (cVar29 == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar9 + 4))
        ;
        pdVar9 = pdVar9 + 1;
      }
      else {
        pdVar9 = (double *)(unsigned)((int)pdVar9 + 0xc);
      }
      iVar11 = *ar4 * 0x20 + ar5;
      if (cVar29 == '\0') {
        dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),*(undefined4 *)(unsigned)pdVar9);
        pdVar10 = (double *)(unsigned)((int)pdVar9 + 4);
      }
      else {
        pdVar10 = pdVar9 + 1;
      }
      ar4_00 = (double *)(unsigned)(iVar8 + -0xc);
      if (cVar28 == '\0') {
        dVar17 = CONCAT44D(F32HI(dVar17) - F32LO(dVar17),
                                  SUB84(dVar17,0));
        in_dr6 = CONCAT44D(F32HI(dVar20) - F32LO(dVar20),
                                  SUB84(dVar20,0));
      }
      else {
        dVar17 = dVar17 - dVar17;
        in_dr6 = dVar20 - dVar20;
      }
      pdVar7 = (double *)(unsigned)((int)pdVar10 + -0xc);
      if (cVar29 == '\0') {
        dVar20 = CONCAT44D(*(undefined4 *)(unsigned)(iVar11 + 4),SUB84(in_dr2,0));
        dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(iVar11 + 8),fVar24);
        iVar11 = iVar11 + 0xc;
      }
      else {
        dVar20 = *(double *)(unsigned)(iVar11 + 4);
        dVar25 = *(double *)(unsigned)(iVar11 + 0xc);
        iVar11 = iVar11 + 0x14;
      }
      fVar24 = F32LO(dVar17);
      if (cVar28 == '\0') {
        in_dr2 = CONCAT44D(F32HI(dVar20) - fVar24,SUB84(dVar20,0));
      }
      else {
        in_dr2 = dVar20 - dVar17;
      }
      psVar4 = ar4 + 1;
      pdVar9 = (double *)(unsigned)(iVar11 + -0xc);
      if (cVar29 == '\0') {
        in_dr12 = CONCAT44D(*(undefined4 *)(unsigned)ar4_00,SUB84(in_dr12,0));
      }
      else {
        in_dr12 = *ar4_00;
      }
      fVar19 = F32LO(dVar26);
      if (cVar28 == '\0') {
        bVar27 = F32HI(in_dr12) < fVar19;
        dVar20 = CONCAT44D((F32HI(dVar25) - F32LO(in_dr6)) *
                                  F32HI(dVar17),SUB84(dVar25,0));
      }
      else {
        bVar27 = in_dr12 < dVar26;
        dVar20 = (dVar25 - in_dr6) * dVar17;
      }
      uVar23 = SUB84(in_dr2,0);
      fVar18 = F32HI(in_dr4);
      if (bVar27) {
LAB_8c2292a0:
        if (iVar12 == 0) {
          if (iVar13 != 0) {
            if (cVar29 == '\0') {
              dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,fVar24);
              pdVar10 = pdVar10 + -1;
            }
            else {
              dVar17 = *pdVar7;
              pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
            }
            if (cVar29 == '\0') {
              in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,uVar23);
              dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),SUB84(in_dr6,0));
              pdVar10 = pdVar10 + 1;
            }
            else {
              in_dr2 = *pdVar10;
              dVar25 = pdVar10[1];
              pdVar10 = pdVar10 + 2;
            }
            if (cVar28 == '\0') {
              dVar25 = CONCAT44D(-F32HI(dVar25) + fVar18,SUB84(dVar25,0)
                                       );
            }
            else {
              dVar25 = -dVar25 + in_dr4;
            }
            pdVar7 = pdVar10 + -3;
            if (cVar29 == '\0') {
              pdVar10 = (double *)(unsigned)((int)ar7 + 0xc);
              *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr2 >> 0x20);
            }
            else {
              pdVar10 = ar7 + 1;
              *pdVar10 = in_dr2;
            }
            if (cVar28 == '\0') {
              bVar27 = F32HI(dVar25) < fVar18;
            }
            else {
              bVar27 = dVar25 < in_dr4;
            }
            if (cVar29 == '\0') {
              pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
              *(int *)(unsigned)pdVar10 = (int)(D2U(dVar17) >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = dVar17;
            }
            dVar21 = dVar25;
            if ((bVar27) && (dVar21 = in_dr4, cVar29 == '\0')) {
              dVar21 = CONCAT44D(fVar18,SUB84(dVar25,0));
            }
            uVar23 = (undefined4)(D2U(dVar21) >> 0x20);
            in_dr6 = CONCAT44D(uVar23,-SUB84(dVar21,0));
            iVar2 = iVar2 + iVar13 + 1;
            *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
            if (cVar29 == '\0') {
              *(undefined4 *)(unsigned)(pdVar10 + 3) = uVar23;
            }
            else {
              pdVar10[3] = in_dr6;
            }
            ar7 = pdVar10 + 4;
          }
        }
        else {
          if (cVar29 == '\0') {
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,fVar24);
            pdVar10 = pdVar10 + -1;
          }
          else {
            dVar17 = *pdVar7;
            pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
          }
          if (cVar29 == '\0') {
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,uVar23);
            dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),SUB84(in_dr6,0));
            pdVar10 = pdVar10 + 1;
          }
          else {
            in_dr2 = *pdVar10;
            dVar25 = pdVar10[1];
            pdVar10 = pdVar10 + 2;
          }
          pdVar7 = pdVar10 + -3;
          if (cVar28 == '\0') {
            dVar25 = CONCAT44D(F32HI(dVar25) + fVar18,SUB84(dVar25,0));
          }
          else {
            dVar25 = dVar25 + in_dr4;
          }
          if (cVar29 == '\0') {
            pdVar10 = (double *)(unsigned)((int)ar7 + 0xc);
            *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr2 >> 0x20);
          }
          else {
            pdVar10 = ar7 + 1;
            *pdVar10 = in_dr2;
          }
          if (cVar28 == '\0') {
            bVar27 = F32HI(dVar25) < fVar18;
          }
          else {
            bVar27 = dVar25 < in_dr4;
          }
          if (cVar29 == '\0') {
            pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
            *(int *)(unsigned)pdVar10 = (int)(D2U(dVar17) >> 0x20);
          }
          else {
            pdVar10 = pdVar10 + -1;
            *pdVar10 = dVar17;
          }
          in_dr6 = dVar25;
          if ((bVar27) && (in_dr6 = in_dr4, cVar29 == '\0')) {
            in_dr6 = CONCAT44D(fVar18,SUB84(dVar25,0));
          }
          iVar2 = iVar2 + iVar12 + 1;
          *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
          if (cVar29 == '\0') {
            *(int *)(unsigned)(pdVar10 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            pdVar10[3] = in_dr6;
          }
          ar7 = pdVar10 + 4;
        }
        iVar12 = 0;
        if (cVar29 == '\0') {
          dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar4_00,SUB84(dVar17,0));
        }
        else {
          dVar17 = *ar4_00;
        }
        iVar13 = 0;
        if (cVar28 == '\0') {
          bVar27 = fVar19 < F32HI(dVar17);
        }
        else {
          bVar27 = dVar26 < dVar17;
        }
        if (cVar29 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar17,0));
        }
        else {
          in_dr0 = *pdVar7;
        }
        if (!bVar27) {
          if (cVar28 == '\0') {
            bVar27 = fVar19 < F32HI(in_dr0);
          }
          else {
            bVar27 = dVar26 < in_dr0;
          }
          if (cVar29 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(in_dr0,0));
          }
          else {
            in_dr0 = *pdVar9;
          }
          if (!bVar27) {
            if (cVar28 == '\0') {
              bVar27 = F32HI(in_dr0) < fVar19;
            }
            else {
              bVar27 = in_dr0 < dVar26;
            }
            if (bVar27) goto LAB_8c2293dc;
          }
        }
        *(uint *)(unsigned)((int)puVar16 + -4) = uVar1;
        *(int *)(unsigned)((int)puVar16 + -8) = iVar2;
        *(int *)(unsigned)((int)puVar16 + -0xc) = iVar3;
        *(unsigned *)(unsigned)((int)puVar16 + -0x10) = psVar4;
        *(int *)(unsigned)((int)puVar16 + -0x14) = ar5;
        *(int *)(unsigned)((int)puVar16 + -0x18) = iVar5;
        if (cVar29 == '\0') {
          *(float *)(unsigned)((int)puVar16 + -0x1c) = fVar18;
          puVar14 = (uint *)(unsigned)((int)puVar16 + -0x20);
          *(float *)(unsigned)((int)puVar16 + -0x20) = SUB84(dVar20,0);
          in_dr4 = (double)(D2U(dVar20) & 0xffffffff);
        }
        else {
          *(double *)(unsigned)((int)puVar16 + -0x20) = in_dr4;
          puVar14 = (uint *)(unsigned)((int)puVar16 + -0x28);
          *(undefined8 *)(unsigned)((int)puVar16 + -0x28) = in_xd8;
        }
        uVar23 = SUB84(in_dr4,0);
        ar7 = (double *)(unsigned)(vsp = ((unsigned long)(fr0_ - 96)), FUN_8c2294a4(ar4_00,pdVar7,pdVar9,ar7));
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)*puVar14;
          in_dr4 = CONCAT44D(puVar14[1],uVar23);
          puVar15 = puVar14 + 2;
        }
        else {
          in_xd8 = *(undefined8 *)(unsigned)puVar14;
          in_dr4 = *(double *)(unsigned)(puVar14 + 2);
          puVar15 = puVar14 + 4;
        }
        iVar5 = *puVar15;
        ar5 = puVar15[1];
        psVar4 = (short *)(unsigned)puVar15[2];
        iVar3 = puVar15[3];
        iVar2 = puVar15[4];
        uVar1 = puVar15[5];
        puVar16 = puVar15 + 6;
        if (cVar28 == '\0') {
          puVar16 = puVar15 + 6;
        }
      }
      else {
        if (cVar29 == '\0') {
          in_dr12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(in_dr12,0));
        }
        else {
          in_dr12 = *pdVar7;
        }
        if (cVar28 == '\0') {
          fVar22 = F32HI(in_dr6) * F32HI(in_dr2);
          bVar27 = F32HI(in_dr12) < fVar19;
        }
        else {
          fVar22 = (float)((ulonglong)(in_dr6 * in_dr2) >> 0x20);
          bVar27 = in_dr12 < dVar26;
        }
        in_dr6 = (double)((ulonglong)(uint)fVar22 << 0x20);
        if (bVar27) goto LAB_8c2292a0;
        if (cVar29 == '\0') {
          in_dr12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(in_dr12,0));
        }
        else {
          in_dr12 = *pdVar9;
        }
        if (cVar28 == '\0') {
          bVar27 = F32HI(in_dr12) < fVar19;
          in_dr6 = (double)((ulonglong)
                            (uint)((fVar22 - F32HI(dVar20)) * F32LO(dVar20))
                           << 0x20);
        }
        else {
          bVar27 = in_dr12 < dVar26;
          in_dr6 = (in_dr6 - dVar20) * dVar20;
        }
        if (bVar27) goto LAB_8c2292a0;
        fVar19 = F32LO(in_dr6);
        if (cVar28 != '\0' || fVar19 <= F32HI(in_dr6)) {
          if (iVar12 != 0) {
            if (cVar29 == '\0') {
              dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,fVar24);
              in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + -1),uVar23);
              dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + -4),fVar19);
            }
            else {
              dVar17 = *pdVar7;
              in_dr2 = *(double *)(unsigned)((int)pdVar10 + -4);
              dVar25 = *(double *)(unsigned)((int)pdVar10 + 4);
              pdVar10 = (double *)(unsigned)((int)pdVar10 + 0xc);
            }
            pdVar7 = pdVar10 + -3;
            if (cVar28 == '\0') {
              dVar25 = CONCAT44D(F32HI(dVar25) + fVar18,SUB84(dVar25,0))
              ;
            }
            else {
              dVar25 = dVar25 + in_dr4;
            }
            if (cVar29 == '\0') {
              pdVar10 = (double *)(unsigned)((int)ar7 + 0xc);
              *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr2 >> 0x20);
            }
            else {
              pdVar10 = ar7 + 1;
              *pdVar10 = in_dr2;
            }
            if (cVar28 == '\0') {
              bVar27 = F32HI(dVar25) < fVar18;
            }
            else {
              bVar27 = dVar25 < in_dr4;
            }
            if (cVar29 == '\0') {
              pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
              *(int *)(unsigned)pdVar10 = (int)(D2U(dVar17) >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = dVar17;
            }
            in_dr6 = dVar25;
            if ((bVar27) && (in_dr6 = in_dr4, cVar29 == '\0')) {
              in_dr6 = CONCAT44D(fVar18,SUB84(dVar25,0));
            }
            iVar2 = iVar2 + iVar12 + 1;
            *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
            iVar12 = 0;
            if (cVar29 == '\0') {
              *(int *)(unsigned)(pdVar10 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
            }
            else {
              pdVar10[3] = in_dr6;
            }
            ar7 = pdVar10 + 4;
          }
          if (iVar13 == 0) {
            if (cVar29 == '\0') {
              dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar4_00,SUB84(dVar17,0));
              in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)(iVar8 + -8),SUB84(in_dr2,0));
              dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(iVar8 + -4),SUB84(in_dr6,0));
            }
            else {
              dVar17 = *ar4_00;
              in_dr2 = *(double *)(unsigned)(iVar8 + -4);
              dVar25 = *(double *)(unsigned)(iVar8 + 4);
            }
            iVar13 = 1;
            if (cVar28 == '\0') {
              dVar25 = CONCAT44D(-F32HI(dVar25) + fVar18,SUB84(dVar25,0)
                                       );
            }
            else {
              dVar25 = -dVar25 + in_dr4;
            }
            if (cVar29 == '\0') {
              pdVar10 = (double *)(unsigned)((int)ar7 + 0xc);
              *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr2 >> 0x20);
            }
            else {
              pdVar10 = ar7 + 1;
              *pdVar10 = in_dr2;
            }
            if (cVar28 == '\0') {
              bVar27 = F32HI(dVar25) < fVar18;
            }
            else {
              bVar27 = dVar25 < in_dr4;
            }
            if (cVar29 == '\0') {
              pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
              *(int *)(unsigned)pdVar10 = (int)(D2U(dVar17) >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = dVar17;
            }
            dVar21 = dVar25;
            if ((bVar27) && (dVar21 = in_dr4, cVar29 == '\0')) {
              dVar21 = CONCAT44D(fVar18,SUB84(dVar25,0));
            }
            uVar23 = (undefined4)(D2U(dVar21) >> 0x20);
            in_dr6 = CONCAT44D(uVar23,-SUB84(dVar21,0));
            *(undefined4 *)(unsigned)pdVar10 = 0xe0000000;
            if (cVar29 == '\0') {
              *(undefined4 *)(unsigned)(pdVar10 + 3) = uVar23;
            }
            else {
              pdVar10[3] = in_dr6;
            }
            ar7 = pdVar10 + 4;
          }
          if (cVar29 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar17,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),SUB84(in_dr2,0));
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 1),SUB84(in_dr6,0));
            pdVar7 = (double *)(unsigned)((int)pdVar7 + 0xc);
          }
          else {
            in_dr0 = *pdVar7;
            in_dr2 = pdVar7[1];
            dVar17 = pdVar7[2];
            pdVar7 = pdVar7 + 3;
          }
          iVar13 = iVar13 + 1;
          pdVar7 = pdVar7 + -3;
          if (cVar28 == '\0') {
            dVar17 = CONCAT44D(-F32HI(dVar17) + fVar18,SUB84(dVar17,0));
          }
          else {
            dVar17 = -dVar17 + in_dr4;
          }
          if (cVar29 == '\0') {
            pdVar10 = (double *)(unsigned)((int)ar7 + 0xc);
            *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr2 >> 0x20);
          }
          else {
            pdVar10 = ar7 + 1;
            *pdVar10 = in_dr2;
          }
          if (cVar28 == '\0') {
            bVar27 = F32HI(dVar17) < fVar18;
          }
          else {
            bVar27 = dVar17 < in_dr4;
          }
          if (cVar29 == '\0') {
            pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
            *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            pdVar10 = pdVar10 + -1;
            *pdVar10 = in_dr0;
          }
          dVar25 = dVar17;
          if ((bVar27) && (dVar25 = in_dr4, cVar29 == '\0')) {
            dVar25 = CONCAT44D(fVar18,SUB84(dVar17,0));
          }
          uVar23 = (undefined4)(D2U(dVar25) >> 0x20);
          in_dr6 = CONCAT44D(uVar23,-SUB84(dVar25,0));
          *(undefined4 *)(unsigned)pdVar10 = 0xe0000000;
          if (cVar29 == '\0') {
            *(undefined4 *)(unsigned)(pdVar10 + 3) = uVar23;
          }
          else {
            pdVar10[3] = in_dr6;
          }
          ar7 = pdVar10 + 4;
        }
        else {
          if (iVar13 != 0) {
            if (cVar29 == '\0') {
              dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,fVar24);
              in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + -1),uVar23);
              dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + -4),fVar19);
            }
            else {
              dVar17 = *pdVar7;
              in_dr2 = *(double *)(unsigned)((int)pdVar10 + -4);
              dVar25 = *(double *)(unsigned)((int)pdVar10 + 4);
              pdVar10 = (double *)(unsigned)((int)pdVar10 + 0xc);
            }
            pdVar7 = pdVar10 + -3;
            if (cVar28 == '\0') {
              dVar25 = CONCAT44D(-F32HI(dVar25) + fVar18,SUB84(dVar25,0)
                                       );
            }
            else {
              dVar25 = -dVar25 + in_dr4;
            }
            if (cVar29 == '\0') {
              pdVar10 = (double *)(unsigned)((int)ar7 + 0xc);
              *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr2 >> 0x20);
            }
            else {
              pdVar10 = ar7 + 1;
              *pdVar10 = in_dr2;
            }
            if (cVar28 == '\0') {
              bVar27 = F32HI(dVar25) < fVar18;
            }
            else {
              bVar27 = dVar25 < in_dr4;
            }
            if (cVar29 == '\0') {
              pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
              *(int *)(unsigned)pdVar10 = (int)(D2U(dVar17) >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = dVar17;
            }
            dVar21 = dVar25;
            if ((bVar27) && (dVar21 = in_dr4, cVar29 == '\0')) {
              dVar21 = CONCAT44D(fVar18,SUB84(dVar25,0));
            }
            uVar23 = (undefined4)(D2U(dVar21) >> 0x20);
            in_dr6 = CONCAT44D(uVar23,-SUB84(dVar21,0));
            iVar2 = iVar2 + iVar13 + 1;
            *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
            iVar13 = 0;
            if (cVar29 == '\0') {
              *(undefined4 *)(unsigned)(pdVar10 + 3) = uVar23;
            }
            else {
              pdVar10[3] = in_dr6;
            }
            ar7 = pdVar10 + 4;
          }
          if (iVar12 == 0) {
            if (cVar29 == '\0') {
              dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar4_00,SUB84(dVar17,0));
              in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)(iVar8 + -8),SUB84(in_dr2,0));
              dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(iVar8 + -4),SUB84(in_dr6,0));
            }
            else {
              dVar17 = *ar4_00;
              in_dr2 = *(double *)(unsigned)(iVar8 + -4);
              dVar25 = *(double *)(unsigned)(iVar8 + 4);
            }
            iVar12 = 1;
            if (cVar28 == '\0') {
              dVar25 = CONCAT44D(F32HI(dVar25) + fVar18,SUB84(dVar25,0))
              ;
            }
            else {
              dVar25 = dVar25 + in_dr4;
            }
            if (cVar29 == '\0') {
              pdVar10 = (double *)(unsigned)((int)ar7 + 0xc);
              *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr2 >> 0x20);
            }
            else {
              pdVar10 = ar7 + 1;
              *pdVar10 = in_dr2;
            }
            if (cVar28 == '\0') {
              bVar27 = F32HI(dVar25) < fVar18;
            }
            else {
              bVar27 = dVar25 < in_dr4;
            }
            if (cVar29 == '\0') {
              pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
              *(int *)(unsigned)pdVar10 = (int)(D2U(dVar17) >> 0x20);
            }
            else {
              pdVar10 = pdVar10 + -1;
              *pdVar10 = dVar17;
            }
            in_dr6 = dVar25;
            if ((bVar27) && (in_dr6 = in_dr4, cVar29 == '\0')) {
              in_dr6 = CONCAT44D(fVar18,SUB84(dVar25,0));
            }
            *(undefined4 *)(unsigned)pdVar10 = 0xe0000000;
            if (cVar29 == '\0') {
              *(int *)(unsigned)(pdVar10 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
            }
            else {
              pdVar10[3] = in_dr6;
            }
            ar7 = pdVar10 + 4;
          }
          if (cVar29 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar17,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),SUB84(in_dr2,0));
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 1),SUB84(in_dr6,0));
            pdVar7 = (double *)(unsigned)((int)pdVar7 + 0xc);
          }
          else {
            in_dr0 = *pdVar7;
            in_dr2 = pdVar7[1];
            dVar17 = pdVar7[2];
            pdVar7 = pdVar7 + 3;
          }
          iVar12 = iVar12 + 1;
          pdVar7 = pdVar7 + -3;
          if (cVar28 == '\0') {
            dVar17 = CONCAT44D(F32HI(dVar17) + fVar18,SUB84(dVar17,0));
          }
          else {
            dVar17 = dVar17 + in_dr4;
          }
          if (cVar29 == '\0') {
            pdVar10 = (double *)(unsigned)((int)ar7 + 0xc);
            *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr2 >> 0x20);
          }
          else {
            pdVar10 = ar7 + 1;
            *pdVar10 = in_dr2;
          }
          if (cVar28 == '\0') {
            bVar27 = F32HI(dVar17) < fVar18;
          }
          else {
            bVar27 = dVar17 < in_dr4;
          }
          if (cVar29 == '\0') {
            pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
            *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            pdVar10 = pdVar10 + -1;
            *pdVar10 = in_dr0;
          }
          in_dr6 = dVar17;
          if ((bVar27) && (in_dr6 = in_dr4, cVar29 == '\0')) {
            in_dr6 = CONCAT44D(fVar18,SUB84(dVar17,0));
          }
          *(undefined4 *)(unsigned)pdVar10 = 0xe0000000;
          if (cVar29 == '\0') {
            *(int *)(unsigned)(pdVar10 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            pdVar10[3] = in_dr6;
          }
          ar7 = pdVar10 + 4;
        }
      }
LAB_8c2293dc:
      fVar24 = -SUB84(dVar20,0);
      iVar6 = iVar6 + -1;
      ar4 = (short *)(unsigned)((int)psVar4 + iVar5);
    } while (iVar6 != 0);
    fVar24 = F32HI(in_dr4);
    if (iVar12 == 0) {
      if (iVar13 != 0) {
        if (cVar29 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(in_dr0,0));
          pdVar7 = (double *)(unsigned)(iVar11 + -8);
        }
        else {
          in_dr0 = *pdVar9;
          pdVar7 = (double *)(unsigned)(iVar11 + -4);
        }
        if (cVar29 == '\0') {
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(in_dr2,0));
          dVar17 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),SUB84(in_dr6,0));
        }
        else {
          in_dr2 = *pdVar7;
          dVar17 = pdVar7[1];
        }
        if (cVar28 == '\0') {
          dVar17 = CONCAT44D(-F32HI(dVar17) + fVar24,SUB84(dVar17,0));
        }
        else {
          dVar17 = -dVar17 + in_dr4;
        }
        if (cVar29 == '\0') {
          pdVar7 = (double *)(unsigned)((int)ar7 + 0xc);
          *(int *)(unsigned)pdVar7 = (int)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          pdVar7 = ar7 + 1;
          *pdVar7 = in_dr2;
        }
        if (cVar28 == '\0') {
          bVar27 = F32HI(dVar17) < fVar24;
        }
        else {
          bVar27 = dVar17 < in_dr4;
        }
        if (cVar29 == '\0') {
          pdVar7 = (double *)(unsigned)((int)pdVar7 + -4);
          *(int *)(unsigned)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          pdVar7 = pdVar7 + -1;
          *pdVar7 = in_dr0;
        }
        dVar20 = dVar17;
        if ((bVar27) && (dVar20 = in_dr4, cVar29 == '\0')) {
          dVar20 = CONCAT44D(fVar24,SUB84(dVar17,0));
        }
        uVar23 = (undefined4)(D2U(dVar20) >> 0x20);
        in_dr6 = CONCAT44D(uVar23,-SUB84(dVar20,0));
        iVar2 = iVar2 + iVar13 + 1;
        *(undefined4 *)(unsigned)pdVar7 = 0xf0000000;
        if (cVar29 == '\0') {
          *(undefined4 *)(unsigned)(pdVar7 + 3) = uVar23;
        }
        else {
          pdVar7[3] = in_dr6;
        }
        ar7 = pdVar7 + 4;
      }
    }
    else {
      if (cVar29 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(in_dr0,0));
        pdVar7 = (double *)(unsigned)(iVar11 + -8);
      }
      else {
        in_dr0 = *pdVar9;
        pdVar7 = (double *)(unsigned)(iVar11 + -4);
      }
      if (cVar29 == '\0') {
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(in_dr2,0));
        dVar17 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),SUB84(in_dr6,0));
      }
      else {
        in_dr2 = *pdVar7;
        dVar17 = pdVar7[1];
      }
      if (cVar28 == '\0') {
        dVar17 = CONCAT44D(F32HI(dVar17) + fVar24,SUB84(dVar17,0));
      }
      else {
        dVar17 = dVar17 + in_dr4;
      }
      if (cVar29 == '\0') {
        pdVar7 = (double *)(unsigned)((int)ar7 + 0xc);
        *(int *)(unsigned)pdVar7 = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        pdVar7 = ar7 + 1;
        *pdVar7 = in_dr2;
      }
      if (cVar28 == '\0') {
        bVar27 = F32HI(dVar17) < fVar24;
      }
      else {
        bVar27 = dVar17 < in_dr4;
      }
      if (cVar29 == '\0') {
        pdVar7 = (double *)(unsigned)((int)pdVar7 + -4);
        *(int *)(unsigned)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        pdVar7 = pdVar7 + -1;
        *pdVar7 = in_dr0;
      }
      in_dr6 = dVar17;
      if ((bVar27) && (in_dr6 = in_dr4, cVar29 == '\0')) {
        in_dr6 = CONCAT44D(fVar24,SUB84(dVar17,0));
      }
      iVar2 = iVar2 + iVar12 + 1;
      *(undefined4 *)(unsigned)pdVar7 = 0xf0000000;
      if (cVar29 == '\0') {
        *(int *)(unsigned)(pdVar7 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
      }
      else {
        pdVar7[3] = in_dr6;
      }
      ar7 = pdVar7 + 4;
    }
    uVar1 = uVar1 - 1;
    if (uVar1 == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar2;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar3;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c229150\n.set _FUN_8c229150, _FUN_8c229150_def\n");
