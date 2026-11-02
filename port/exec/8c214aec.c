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
double * FUN_8c214aec_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c214aec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  double *pdVar7;
  int iVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  int iVar12;
  int *piVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  double *pdVar18;
  double *pdVar19;
  int *piVar20;
  double in_dr0 = 0;
  double dVar21;
  double dVar22;
  undefined4 uVar25;
  double dVar23;
  double in_dr2 = 0;
  double dVar27;
  undefined4 uVar28;
  float fVar29;
  undefined8 in_dr4 = 0;
  float fVar31;
  double dVar30;
  float fVar32;
  undefined8 in_dr6 = 0;
  float fVar34;
  double dVar33;
  undefined8 in_dr8 = 0;
  double dVar35;
  float fVar36;
  float fVar37;
  float fVar39;
  double dVar38;
  undefined8 in_dr12 = 0;
  undefined8 in_dr14 = 0;
  double dVar40;
  double in_xd4 = 0;
  undefined8 in_xd6 = 0;
  double in_xd10 = 0;
  undefined8 in_xd12 = 0;
  bool bVar41;
  char cVar42;
  char cVar43;
  undefined4 uVar24;
  undefined4 uVar26;
  
  cVar43 = '\0';
  cVar42 = '\0';
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)((ulonglong)in_dr12 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)in_dr12;
  (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)in_dr14;
  piVar13 = (int *)(unsigned)((undefined1 *)(fr0_ - 0x30));
  uVar1 = ar6 & 0x3fff;
  iVar2 = 0;
  dVar35 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),0x3f800000);
  iVar3 = 0;
  iVar6 = (ar6 >> 0xe & 3) << 1;
  dVar30 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),(float)in_dr4 - 1.0);
  dVar33 = CONCAT44D(F32HI(in_dr6) - 1.0,(float)in_dr6 - 1.0);
  do {
    iVar8 = (int)*ar4;
    pdVar9 = (double *)(unsigned)(ar4[1] * 0x20 + ar5);
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    iVar3 = iVar3 + iVar8;
    iVar8 = iVar8 + -2;
    iVar12 = 0;
    if (cVar42 == '\0') {
      fVar39 = (float)(int)ar4[2];
    }
    else {
      fVar39 = (float)((ulonglong)(double)(int)ar4[2] >> 0x20);
    }
    psVar5 = ar4 + 5;
    fVar36 = F32HI(dVar35);
    if (cVar42 == '\0') {
      dVar38 = CONCAT44D(fVar39 * fVar36,(float)(int)ar4[3]);
    }
    else {
      dVar38 = CONCAT44D(fVar39,(float)(int)ar4[3]) * dVar35;
    }
    pdVar10 = (double *)(unsigned)(ar4[4] * 0x20 + ar5);
    if (cVar42 == '\0') {
      dVar38 = CONCAT44D((int)(D2U(dVar38) >> 0x20),F32LO(dVar38) * fVar36);
    }
    else {
      dVar38 = dVar38 * dVar35;
    }
    psVar4 = ar4 + 6;
    ar4 = ar4 + 7;
    if (cVar42 == '\0') {
      fVar39 = (float)(int)*psVar5;
    }
    else {
      fVar39 = (float)((ulonglong)(double)(int)*psVar5 >> 0x20);
    }
    if (cVar42 == '\0') {
      dVar23 = CONCAT44D(fVar39 * fVar36,(float)(int)*psVar4 * fVar36);
    }
    else {
      dVar23 = CONCAT44D(fVar39,(float)(int)*psVar4) * dVar35 * dVar35;
    }
    do {
      pdVar11 = (double *)(unsigned)(*ar4 * 0x20 + ar5);
      if (cVar43 == '\0') {
        dVar21 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(in_dr0,0));
      }
      else {
        dVar21 = *pdVar9;
      }
      psVar5 = ar4 + 3;
      if (cVar42 == '\0') {
        fVar39 = (float)(int)ar4[1];
      }
      else {
        fVar39 = (float)((ulonglong)(double)(int)ar4[1] >> 0x20);
      }
      fVar37 = F32HI(dVar35);
      fVar36 = F32LO(dVar35);
      if (cVar42 == '\0') {
        dVar40 = CONCAT44D(fVar39 * fVar37,(float)(int)ar4[2] * fVar37);
        bVar41 = F32HI(dVar21) < fVar36;
      }
      else {
        dVar40 = CONCAT44D(fVar39,(float)(int)ar4[2]) * dVar35 * dVar35;
        bVar41 = dVar21 < dVar35;
      }
      if (cVar43 == '\0') {
        dVar27 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(in_dr2,0));
      }
      else {
        dVar27 = *pdVar10;
      }
      uVar25 = (undefined4)(D2U(dVar38) >> 0x20);
      uVar26 = (undefined4)(D2U(dVar23) >> 0x20);
      fVar39 = F32LO(dVar30);
      fVar31 = F32HI(dVar30);
      fVar32 = F32LO(dVar33);
      fVar34 = F32HI(dVar33);
      if (bVar41) {
LAB_8c214c0c:
        if (iVar12 != 0) {
          if (cVar43 == '\0') {
            uVar24 = *(undefined4 *)(unsigned)pdVar10;
            dVar22 = CONCAT44D(uVar24,SUB84(dVar21,0));
            uVar28 = *(undefined4 *)(unsigned)((int)pdVar10 + 4);
            dVar21 = CONCAT44D(uVar28,SUB84(dVar27,0));
            pdVar10 = pdVar10 + 1;
            *(undefined4 *)(unsigned)((int)ar7 + 0x14) = uVar26;
            *(undefined4 *)(unsigned)(ar7 + 2) = uVar28;
            ar7 = (double *)(unsigned)((int)ar7 + 0xc);
            *(undefined4 *)(unsigned)ar7 = uVar24;
          }
          else {
            dVar22 = *pdVar10;
            dVar21 = pdVar10[1];
            pdVar10 = pdVar10 + 2;
            ar7[2] = dVar23;
            ar7[1] = dVar21;
            *ar7 = dVar22;
          }
          *(undefined4 *)(unsigned)ar7 = 0xf0000000;
          if (cVar43 == '\0') {
            dVar27 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(dVar22,0));
            dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),SUB84(dVar21,0));
            pdVar10 = pdVar10 + 1;
          }
          else {
            dVar27 = *pdVar10;
            dVar22 = pdVar10[1];
            pdVar10 = pdVar10 + 2;
          }
          if (cVar42 == '\0') {
            dVar21 = CONCAT44D(F32HI(dVar27) * fVar31,
                                      F32LO(dVar27) + fVar39);
            dVar27 = CONCAT44D(F32HI(dVar22) + fVar34,
                                      F32LO(dVar22) + fVar32);
          }
          else {
            dVar21 = dVar27 * dVar30 + dVar30;
            dVar27 = dVar22 + dVar33 + dVar33;
          }
          pdVar10 = pdVar10 + -4;
          fVar29 = F32HI(dVar27);
          uVar26 = (undefined4)(D2U(dVar21) >> 0x20);
          if (cVar43 == '\0') {
            *(float *)(unsigned)((int)ar7 + 0x3c) = fVar29;
            pdVar7 = ar7 + 7;
            *(undefined4 *)(unsigned)pdVar7 = uVar26;
          }
          else {
            ar7[7] = dVar27;
            pdVar7 = ar7 + 6;
            *pdVar7 = dVar21;
          }
          if (cVar42 == '\0') {
            dVar21 = CONCAT44D(uVar26,F32LO(dVar21) + fVar36);
            dVar27 = CONCAT44D(fVar29 + fVar36,SUB84(dVar27,0));
          }
          else {
            dVar21 = dVar21 + dVar35;
            dVar27 = dVar27 + dVar35;
          }
          iVar2 = iVar2 + iVar12 + 1;
          if (cVar42 == '\0') {
            dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),F32LO(dVar27) + fVar36);
          }
          else {
            dVar27 = dVar27 + dVar35;
          }
          if (cVar43 == '\0') {
            pdVar7 = (double *)(unsigned)((int)pdVar7 + -4);
            *(int *)(unsigned)pdVar7 = (int)(D2U(dVar27) >> 0x20);
          }
          else {
            pdVar7 = pdVar7 + -1;
            *pdVar7 = dVar27;
          }
          iVar12 = 0;
          if (cVar43 == '\0') {
            pdVar7 = (double *)(unsigned)((int)pdVar7 + -4);
            *(int *)(unsigned)pdVar7 = (int)(D2U(dVar21) >> 0x20);
          }
          else {
            pdVar7 = pdVar7 + -1;
            *pdVar7 = dVar21;
          }
          ar7 = pdVar7 + 4;
        }
        if (cVar43 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar21,0));
        }
        else {
          in_dr0 = *pdVar9;
        }
        if (cVar42 == '\0') {
          bVar41 = F32HI(in_dr0) < fVar36;
        }
        else {
          bVar41 = in_dr0 < dVar35;
        }
        if (cVar43 == '\0') {
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(dVar27,0));
        }
        else {
          in_dr2 = *pdVar10;
        }
        if (bVar41) {
          if (cVar42 == '\0') {
            bVar41 = F32HI(in_dr2) < fVar36;
          }
          else {
            bVar41 = in_dr2 < dVar35;
          }
          if (cVar43 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,SUB84(in_dr0,0));
          }
          else {
            in_dr0 = *pdVar11;
          }
          if (bVar41) {
            if (cVar42 == '\0') {
              bVar41 = F32HI(in_dr0) < fVar36;
            }
            else {
              bVar41 = in_dr0 < dVar35;
            }
            if (bVar41) goto LAB_8c214c5c;
          }
        }
        *(uint *)(unsigned)((int)piVar13 + -4) = uVar1;
        *(int *)(unsigned)((int)piVar13 + -8) = iVar2;
        *(int *)(unsigned)((int)piVar13 + -0xc) = iVar3;
        *(unsigned *)(unsigned)((int)piVar13 + -0x10) = psVar5;
        *(int *)(unsigned)((int)piVar13 + -0x14) = ar5;
        *(int *)(unsigned)((int)piVar13 + -0x18) = iVar6;
        if (cVar43 == '\0') {
          *(float *)(unsigned)((int)piVar13 + -0x1c) = fVar31;
          *(float *)(unsigned)((int)piVar13 + -0x20) = fVar39;
          *(float *)(unsigned)((int)piVar13 + -0x24) = fVar34;
          *(float *)(unsigned)((int)piVar13 + -0x28) = fVar32;
          puVar14 = (undefined1 *)(unsigned)((int)piVar13 + -0x2c);
          *(float *)(unsigned)((int)piVar13 + -0x2c) = fVar37;
        }
        else {
          *(double *)(unsigned)((int)piVar13 + -0x20) = dVar30;
          *(double *)(unsigned)((int)piVar13 + -0x28) = in_xd4;
          *(double *)(unsigned)((int)piVar13 + -0x30) = dVar33;
          *(undefined8 *)(unsigned)((int)piVar13 + -0x38) = in_xd6;
          puVar14 = (undefined1 *)(unsigned)((int)piVar13 + -0x40);
          *(double *)(unsigned)((int)piVar13 + -0x40) = dVar35;
        }
        if (cVar42 == '\0') {
          dVar30 = (double)((ulonglong)(uint)fVar31 << 0x20);
        }
        else {
          dVar30 = dVar30 + dVar35;
        }
        if (cVar43 == '\0') {
          puVar15 = puVar14 + -4;
          *(undefined4 *)(unsigned)(puVar14 + -4) = uVar25;
        }
        else {
          puVar15 = puVar14 + -8;
          *(double *)(unsigned)(puVar14 + -8) = dVar38;
        }
        if (cVar42 == '\0') {
          dVar33 = CONCAT44D(fVar34 + fVar36,fVar32);
        }
        else {
          dVar33 = dVar33 + dVar35;
        }
        if (cVar43 == '\0') {
          puVar16 = puVar15 + -4;
          *(int *)(unsigned)(puVar15 + -4) = SUB84(dVar38,0);
        }
        else {
          puVar16 = puVar15 + -8;
          *(double *)(unsigned)(puVar15 + -8) = in_xd10;
        }
        if (cVar42 == '\0') {
          dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),F32LO(dVar33) + fVar36);
        }
        else {
          dVar33 = dVar33 + dVar35;
        }
        if (cVar43 == '\0') {
          in_dr0 = (double)(D2U(dVar30) >> 0x20);
          *(int *)(unsigned)(puVar16 + -4) = SUB84(dVar33,0);
          puVar17 = puVar16 + -8;
          *(int *)(unsigned)(puVar16 + -8) = (int)(D2U(dVar33) >> 0x20);
          dVar33 = in_xd10;
          in_xd10 = in_xd4;
          in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff);
        }
        else {
          *(undefined8 *)(unsigned)(puVar16 + -8) = in_xd6;
          puVar17 = puVar16 + -0x10;
          *(double *)(unsigned)(puVar16 + -0x10) = dVar33;
          dVar33 = in_xd4;
          in_xd6 = in_xd12;
          in_dr2 = in_xd4;
        }
        ar7 = (double *)(unsigned)(vsp = ((unsigned long)(fr0_ - 52)), FUN_8c214d6c(pdVar9,pdVar10,pdVar11,ar7));
        if (cVar43 == '\0') {
          dVar38 = (double)(ulonglong)*(uint *)(unsigned)(puVar17 + 8);
          uVar25 = *(undefined4 *)(unsigned)(puVar17 + 0x10);
          pdVar18 = (double *)(unsigned)(puVar17 + 0x14);
          pdVar19 = (double *)(unsigned)(puVar17 + 0x1c);
          piVar20 = (int *)(unsigned)(puVar17 + 0x24);
          in_xd4 = in_xd10;
          in_xd10 = dVar33;
        }
        else {
          in_xd10 = *(double *)(unsigned)(puVar17 + 8);
          dVar38 = *(double *)(unsigned)(puVar17 + 0x10);
          uVar25 = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(puVar17 + 0x18) >> 0x20);
          in_xd6 = *(undefined8 *)(unsigned)(puVar17 + 0x20);
          pdVar18 = (double *)(unsigned)(puVar17 + 0x28);
          in_xd4 = *(double *)(unsigned)(puVar17 + 0x30);
          pdVar19 = (double *)(unsigned)(puVar17 + 0x38);
          piVar20 = (int *)(unsigned)(puVar17 + 0x40);
        }
        dVar33 = *pdVar18;
        dVar30 = *pdVar19;
        iVar6 = *piVar20;
        ar5 = piVar20[1];
        psVar5 = (short *)(unsigned)piVar20[2];
        iVar3 = piVar20[3];
        iVar2 = piVar20[4];
        uVar1 = piVar20[5];
        piVar13 = piVar20 + 6;
        dVar35 = CONCAT44D(uVar25,0x3f800000);
      }
      else {
        if (cVar42 == '\0') {
          bVar41 = F32HI(dVar27) < fVar36;
        }
        else {
          bVar41 = dVar27 < dVar35;
        }
        if (cVar43 == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,SUB84(dVar21,0));
        }
        else {
          dVar21 = *pdVar11;
        }
        if (bVar41) goto LAB_8c214c0c;
        if (cVar42 == '\0') {
          bVar41 = F32HI(dVar21) < fVar36;
        }
        else {
          bVar41 = dVar21 < dVar35;
        }
        if (bVar41) goto LAB_8c214c0c;
        if (iVar12 == 0) {
          if (cVar43 == '\0') {
            uVar24 = *(undefined4 *)(unsigned)pdVar9;
            dVar22 = CONCAT44D(uVar24,SUB84(dVar21,0));
            uVar28 = *(undefined4 *)(unsigned)((int)pdVar9 + 4);
            dVar21 = CONCAT44D(uVar28,SUB84(dVar27,0));
            pdVar9 = pdVar9 + 1;
            *(undefined4 *)(unsigned)((int)ar7 + 0x14) = uVar25;
            *(undefined4 *)(unsigned)(ar7 + 2) = uVar28;
            ar7 = (double *)(unsigned)((int)ar7 + 0xc);
            *(undefined4 *)(unsigned)ar7 = uVar24;
          }
          else {
            dVar22 = *pdVar9;
            dVar21 = pdVar9[1];
            pdVar9 = pdVar9 + 2;
            ar7[2] = dVar38;
            ar7[1] = dVar21;
            *ar7 = dVar22;
          }
          *(undefined4 *)(unsigned)ar7 = 0xe0000000;
          if (cVar43 == '\0') {
            dVar27 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar22,0));
            dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),SUB84(dVar21,0));
          }
          else {
            dVar27 = *pdVar9;
            dVar22 = pdVar9[1];
          }
          if (cVar42 == '\0') {
            dVar21 = CONCAT44D(F32HI(dVar27) * fVar31,
                                      F32LO(dVar27) + fVar39);
            dVar27 = CONCAT44D(F32HI(dVar22) + fVar34,
                                      F32LO(dVar22) + fVar32);
          }
          else {
            dVar21 = dVar27 * dVar30 + dVar30;
            dVar27 = dVar22 + dVar33 + dVar33;
          }
          fVar37 = F32HI(dVar27);
          uVar25 = (undefined4)(D2U(dVar21) >> 0x20);
          if (cVar43 == '\0') {
            *(float *)(unsigned)((int)ar7 + 0x3c) = fVar37;
            pdVar9 = ar7 + 7;
            *(undefined4 *)(unsigned)pdVar9 = uVar25;
          }
          else {
            ar7[7] = dVar27;
            pdVar9 = ar7 + 6;
            *pdVar9 = dVar21;
          }
          if (cVar42 == '\0') {
            dVar21 = CONCAT44D(uVar25,F32LO(dVar21) + fVar36);
            dVar27 = CONCAT44D(fVar37 + fVar36,F32LO(dVar27) + fVar36);
          }
          else {
            dVar21 = dVar21 + dVar35;
            dVar27 = dVar27 + dVar35 + dVar35;
          }
          if (cVar43 == '\0') {
            *(int *)(unsigned)((int)pdVar9 + -4) = (int)(D2U(dVar27) >> 0x20);
            pdVar9 = pdVar9 + -1;
            *(int *)(unsigned)pdVar9 = (int)(D2U(dVar21) >> 0x20);
          }
          else {
            pdVar9[-1] = dVar27;
            pdVar9 = pdVar9 + -2;
            *pdVar9 = dVar21;
          }
          iVar12 = 1;
          ar7 = pdVar9 + 4;
        }
        if (cVar43 == '\0') {
          uVar25 = *(undefined4 *)(unsigned)pdVar10;
          dVar22 = CONCAT44D(uVar25,SUB84(dVar21,0));
          uVar24 = *(undefined4 *)(unsigned)((int)pdVar10 + 4);
          dVar21 = CONCAT44D(uVar24,SUB84(dVar27,0));
          pdVar10 = pdVar10 + 1;
          *(undefined4 *)(unsigned)((int)ar7 + 0x14) = uVar26;
          *(undefined4 *)(unsigned)(ar7 + 2) = uVar24;
          ar7 = (double *)(unsigned)((int)ar7 + 0xc);
          *(undefined4 *)(unsigned)ar7 = uVar25;
        }
        else {
          dVar22 = *pdVar10;
          dVar21 = pdVar10[1];
          pdVar10 = pdVar10 + 2;
          ar7[2] = dVar23;
          ar7[1] = dVar21;
          *ar7 = dVar22;
        }
        *(undefined4 *)(unsigned)ar7 = 0xe0000000;
        if (cVar43 == '\0') {
          dVar27 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(dVar22,0));
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),SUB84(dVar21,0));
          pdVar10 = pdVar10 + 1;
        }
        else {
          dVar27 = *pdVar10;
          dVar21 = pdVar10[1];
          pdVar10 = pdVar10 + 2;
        }
        if (cVar42 == '\0') {
          dVar27 = CONCAT44D(F32HI(dVar27) * fVar31,
                                    F32LO(dVar27) + fVar39);
          dVar21 = CONCAT44D(F32HI(dVar21) + fVar34,
                                    F32LO(dVar21) + fVar32);
        }
        else {
          dVar27 = dVar27 * dVar30 + dVar30;
          dVar21 = dVar21 + dVar33 + dVar33;
        }
        fVar39 = F32HI(dVar21);
        uVar25 = (undefined4)(D2U(dVar27) >> 0x20);
        if (cVar43 == '\0') {
          *(float *)(unsigned)((int)ar7 + 0x3c) = fVar39;
          pdVar9 = ar7 + 7;
          *(undefined4 *)(unsigned)pdVar9 = uVar25;
        }
        else {
          ar7[7] = dVar21;
          pdVar9 = ar7 + 6;
          *pdVar9 = dVar27;
        }
        if (cVar42 == '\0') {
          in_dr0 = CONCAT44D(uVar25,F32LO(dVar27) + fVar36);
          in_dr2 = CONCAT44D(fVar39 + fVar36,F32LO(dVar21) + fVar36);
        }
        else {
          in_dr0 = dVar27 + dVar35;
          in_dr2 = dVar21 + dVar35 + dVar35;
        }
        if (cVar43 == '\0') {
          *(int *)(unsigned)((int)pdVar9 + -4) = (int)((ulonglong)in_dr2 >> 0x20);
          pdVar9 = pdVar9 + -1;
          *(int *)(unsigned)pdVar9 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          pdVar9[-1] = in_dr2;
          pdVar9 = pdVar9 + -2;
          *pdVar9 = in_dr0;
        }
        iVar12 = iVar12 + 1;
        ar7 = pdVar9 + 4;
        pdVar10 = pdVar10 + -4;
      }
LAB_8c214c5c:
      pdVar9 = pdVar10;
      ar4 = (short *)(unsigned)((int)psVar5 + iVar6);
      iVar8 = iVar8 + -1;
      uVar25 = (undefined4)(D2U(dVar40) >> 0x20);
      dVar21 = dVar40;
      if (cVar43 == '\0') {
        dVar21 = CONCAT44D(uVar25,SUB84(dVar23,0));
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),SUB84(dVar38,0));
      }
      dVar38 = dVar23;
      pdVar10 = pdVar11;
      dVar23 = dVar21;
    } while (iVar8 != 0);
    if (iVar12 != 0) {
      if (cVar43 == '\0') {
        uVar26 = *(undefined4 *)(unsigned)pdVar11;
        dVar23 = CONCAT44D(uVar26,SUB84(in_dr0,0));
        uVar24 = *(undefined4 *)(unsigned)((int)pdVar11 + 4);
        dVar38 = CONCAT44D(uVar24,SUB84(in_dr2,0));
        pdVar11 = pdVar11 + 1;
        *(undefined4 *)(unsigned)((int)ar7 + 0x14) = uVar25;
        *(undefined4 *)(unsigned)(ar7 + 2) = uVar24;
        ar7 = (double *)(unsigned)((int)ar7 + 0xc);
        *(undefined4 *)(unsigned)ar7 = uVar26;
      }
      else {
        dVar23 = *pdVar11;
        dVar38 = pdVar11[1];
        pdVar11 = pdVar11 + 2;
        ar7[2] = dVar40;
        ar7[1] = dVar38;
        *ar7 = dVar23;
      }
      *(undefined4 *)(unsigned)ar7 = 0xf0000000;
      if (cVar43 == '\0') {
        dVar23 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,SUB84(dVar23,0));
        dVar38 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 4),SUB84(dVar38,0));
      }
      else {
        dVar23 = *pdVar11;
        dVar38 = pdVar11[1];
      }
      if (cVar42 == '\0') {
        dVar23 = CONCAT44D(F32HI(dVar23) *
                                  F32HI(dVar30),
                                  F32LO(dVar23) + F32LO(dVar30));
        dVar38 = CONCAT44D(F32HI(dVar38) +
                                  F32HI(dVar33),
                                  F32LO(dVar38) + F32LO(dVar33));
      }
      else {
        dVar23 = dVar23 * dVar30 + dVar30;
        dVar38 = dVar38 + dVar33 + dVar33;
      }
      fVar39 = F32HI(dVar38);
      uVar25 = (undefined4)(D2U(dVar23) >> 0x20);
      if (cVar43 == '\0') {
        *(float *)(unsigned)((int)ar7 + 0x3c) = fVar39;
        pdVar9 = ar7 + 7;
        *(undefined4 *)(unsigned)pdVar9 = uVar25;
      }
      else {
        ar7[7] = dVar38;
        pdVar9 = ar7 + 6;
        *pdVar9 = dVar23;
      }
      fVar36 = F32LO(dVar35);
      if (cVar42 == '\0') {
        in_dr0 = CONCAT44D(uVar25,F32LO(dVar23) + fVar36);
      }
      else {
        in_dr0 = dVar23 + dVar35;
      }
      if (cVar42 == '\0') {
        in_dr2 = CONCAT44D(fVar39 + fVar36,F32LO(dVar38) + fVar36);
      }
      else {
        in_dr2 = dVar38 + dVar35 + dVar35;
      }
      if (cVar43 == '\0') {
        *(int *)(unsigned)((int)pdVar9 + -4) = (int)((ulonglong)in_dr2 >> 0x20);
        pdVar9 = pdVar9 + -1;
        *(int *)(unsigned)pdVar9 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        pdVar9[-1] = in_dr2;
        pdVar9 = pdVar9 + -2;
        *pdVar9 = in_dr0;
      }
      iVar2 = iVar2 + iVar12 + 1;
      ar7 = pdVar9 + 4;
    }
    uVar1 = uVar1 - 1;
    if (uVar1 == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar2;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar3;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c214aec\n.set _FUN_8c214aec, _FUN_8c214aec_def\n");
