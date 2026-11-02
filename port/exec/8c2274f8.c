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
double * FUN_8c2274f8_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c2274f8";
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
  double *pdVar8;
  double *ar4_00;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  int iVar12;
  uint *puVar13;
  undefined8 *puVar14;
  int *piVar15;
  float fVar16;
  double in_dr0 = 0;
  double in_dr2 = 0;
  double in_dr4 = 0;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  double in_dr6 = 0;
  float fVar20;
  double in_dr8 = 0;
  float fVar21;
  double in_dr10 = 0;
  double dVar22;
  double in_dr12 = 0;
  undefined8 in_dr14 = 0;
  double dVar23;
  undefined8 in_xd4 = 0;
  bool bVar24;
  bool bVar25;
  char cVar26;
  char cVar27;
  
  cVar27 = '\0';
  cVar26 = '\0';
  (*(undefined4 *)(fr0_ - 0x20)) = (int)((ulonglong)in_dr12 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x24)) = SUB84(in_dr12,0);
  (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x2c)) = (int)in_dr14;
  puVar13 = ((undefined4 *)(fr0_ - 0x34));
  ((undefined4 *)(fr0_ - 0x34))[0] = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0);
  uVar1 = ar6 & 0x3fff;
  iVar2 = 0;
  iVar3 = 0;
  iVar5 = (ar6 >> 0xe & 3) << 1;
  dVar23 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),0x3f800000);
  do {
    iVar6 = (int)*ar4;
    psVar4 = ar4 + 2;
    uVar17 = (undefined4)((ulonglong)in_dr4 >> 0x20);
    in_dr4 = CONCAT44D(uVar17,0x3f800000);
    if ((*puVar13 & 0x80000000) != 0) {
      in_dr4 = CONCAT44D(uVar17,0xbf800000);
    }
    pdVar7 = (double *)(unsigned)(ar4[1] * 0x20 + ar5);
    if (iVar6 < 0) {
      iVar6 = -iVar6;
      in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),-SUB84(in_dr4,0));
    }
    ar4 = ar4 + 3;
    iVar3 = iVar3 + iVar6;
    pdVar9 = (double *)(unsigned)(*psVar4 * 0x20 + ar5);
    iVar6 = iVar6 + -2;
    iVar12 = 0;
    do {
      if (cVar27 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(in_dr0,0));
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),SUB84(in_dr2,0));
        pdVar8 = pdVar7 + 1;
      }
      else {
        in_dr0 = *pdVar7;
        in_dr2 = pdVar7[1];
        pdVar8 = pdVar7 + 2;
      }
      ar4_00 = pdVar8 + -2;
      psVar4 = ar4 + 1;
      if (cVar27 == '\0') {
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(in_dr6,0));
        pdVar9 = (double *)(unsigned)((int)pdVar9 + 4);
      }
      else {
        in_dr6 = *pdVar9;
        pdVar9 = pdVar9 + 1;
      }
      pdVar11 = (double *)(unsigned)(*ar4 * 0x20 + ar5);
      if (cVar27 == '\0') {
        in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(in_dr8,0));
        pdVar10 = (double *)(unsigned)((int)pdVar9 + 4);
      }
      else {
        in_dr8 = *pdVar9;
        pdVar10 = pdVar9 + 1;
      }
      pdVar7 = pdVar10 + -2;
      bVar25 = true;
      if (cVar27 == '\0') {
        dVar22 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,SUB84(in_dr10,0));
        pdVar11 = (double *)(unsigned)((int)pdVar11 + 4);
      }
      else {
        dVar22 = *pdVar11;
        pdVar11 = pdVar11 + 1;
      }
      fVar19 = F32LO(dVar23);
      if (cVar26 == '\0') {
        bVar24 = F32HI(in_dr0) < fVar19;
      }
      else {
        bVar24 = in_dr0 < dVar23;
      }
      if (cVar27 == '\0') {
        in_dr12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,SUB84(in_dr12,0));
        pdVar11 = (double *)(unsigned)((int)pdVar11 + 4);
      }
      else {
        in_dr12 = *pdVar11;
        pdVar11 = pdVar11 + 1;
      }
      pdVar9 = pdVar11 + -2;
      if (cVar26 == '\0') {
        in_dr10 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                   F32LO(dVar22) - F32LO(in_dr6));
      }
      else {
        in_dr10 = dVar22 - in_dr6;
      }
      fVar16 = F32LO(in_dr0);
      fVar18 = F32HI(in_dr4);
      if (bVar24) {
LAB_8c2275fe:
        if (iVar12 != 0) {
          if (cVar27 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,fVar16);
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + -0xc),SUB84(in_dr2,0));
            dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + -1),SUB84(in_dr6,0));
            pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
          }
          else {
            in_dr0 = *pdVar7;
            in_dr2 = pdVar10[-1];
            dVar22 = *pdVar10;
            pdVar10 = pdVar10 + 1;
          }
          pdVar7 = pdVar10 + -3;
          if (cVar26 == '\0') {
            dVar22 = CONCAT44D(F32HI(dVar22) + fVar18,SUB84(dVar22,0));
          }
          else {
            dVar22 = dVar22 + in_dr4;
          }
          if (cVar27 == '\0') {
            pdVar8 = (double *)(unsigned)((int)ar7 + 0xc);
            *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr2 >> 0x20);
          }
          else {
            pdVar8 = ar7 + 1;
            *pdVar8 = in_dr2;
          }
          if (cVar26 == '\0') {
            bVar24 = F32HI(dVar22) < fVar18;
          }
          else {
            bVar24 = dVar22 < in_dr4;
          }
          if (cVar27 == '\0') {
            pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
            *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            pdVar8 = pdVar8 + -1;
            *pdVar8 = in_dr0;
          }
          in_dr6 = dVar22;
          if ((bVar24) && (in_dr6 = in_dr4, cVar27 == '\0')) {
            in_dr6 = CONCAT44D(fVar18,SUB84(dVar22,0));
          }
          iVar2 = iVar2 + iVar12 + 1;
          *(undefined4 *)(unsigned)pdVar8 = 0xf0000000;
          iVar12 = 0;
          if (cVar27 == '\0') {
            *(int *)(unsigned)(pdVar8 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            pdVar8[3] = in_dr6;
          }
          ar7 = pdVar8 + 4;
        }
      }
      else {
        fVar21 = F32HI(in_dr8);
        if (cVar26 == '\0') {
          fVar20 = F32HI(in_dr6);
          in_dr6 = CONCAT44D(fVar20,F32LO(in_dr6) - fVar16);
          bVar24 = fVar20 < fVar19;
          in_dr12 = CONCAT44D(F32HI(in_dr12) - fVar21,SUB84(in_dr12,0));
        }
        else {
          in_dr6 = in_dr6 - in_dr0;
          bVar24 = in_dr6 < dVar23;
          in_dr12 = in_dr12 - in_dr8;
        }
        if (bVar24) goto LAB_8c2275fe;
        if (cVar26 == '\0') {
          in_dr8 = CONCAT44D(fVar21 - F32HI(in_dr2),SUB84(in_dr8,0));
          bVar24 = F32HI(in_dr10) < fVar19;
          in_dr6 = (double)(ulonglong)(uint)(F32LO(in_dr6) * F32HI(in_dr12));
        }
        else {
          in_dr8 = in_dr8 - in_dr2;
          bVar24 = in_dr10 < dVar23;
          in_dr6 = in_dr6 * in_dr12;
        }
        if (bVar24) goto LAB_8c2275fe;
        if (cVar26 == '\0') {
          in_dr8 = CONCAT44D(F32HI(in_dr8) * F32LO(in_dr10),
                                    SUB84(in_dr8,0));
        }
        else {
          in_dr8 = in_dr8 * in_dr10;
        }
        if (cVar26 == '\0') {
          in_dr6 = (double)(ulonglong)
                           (uint)((F32LO(in_dr6) - F32HI(in_dr8)) *
                                 SUB84(in_dr4,0));
        }
        else {
          in_dr6 = ((double)((ulonglong)in_dr6 & 0xffffffff) - in_dr8) * in_dr4;
        }
        bVar25 = false;
        if (cVar26 != '\0' || F32HI(in_dr6) <= SUB84(in_dr6,0))
        goto LAB_8c2275fe;
        if (iVar12 == 0) {
          if (cVar27 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)ar4_00,fVar16);
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + -0xc),SUB84(in_dr2,0));
            dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + -1),SUB84(in_dr6,0));
            pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
          }
          else {
            in_dr0 = *ar4_00;
            in_dr2 = pdVar8[-1];
            dVar22 = *pdVar8;
            pdVar8 = pdVar8 + 1;
          }
          iVar12 = 1;
          ar4_00 = pdVar8 + -3;
          if (cVar26 == '\0') {
            dVar22 = CONCAT44D(F32HI(dVar22) + fVar18,SUB84(dVar22,0));
          }
          else {
            dVar22 = dVar22 + in_dr4;
          }
          if (cVar27 == '\0') {
            pdVar8 = (double *)(unsigned)((int)ar7 + 0xc);
            *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr2 >> 0x20);
          }
          else {
            pdVar8 = ar7 + 1;
            *pdVar8 = in_dr2;
          }
          if (cVar26 == '\0') {
            bVar24 = F32HI(dVar22) < fVar18;
          }
          else {
            bVar24 = dVar22 < in_dr4;
          }
          if (cVar27 == '\0') {
            pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
            *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            pdVar8 = pdVar8 + -1;
            *pdVar8 = in_dr0;
          }
          in_dr6 = dVar22;
          if ((bVar24) && (in_dr6 = in_dr4, cVar27 == '\0')) {
            in_dr6 = CONCAT44D(fVar18,SUB84(dVar22,0));
          }
          *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
          if (cVar27 == '\0') {
            *(int *)(unsigned)(pdVar8 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            pdVar8[3] = in_dr6;
          }
          ar7 = pdVar8 + 4;
        }
        if (cVar27 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(in_dr0,0));
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + -0xc),SUB84(in_dr2,0));
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + -1),SUB84(in_dr6,0));
          pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
        }
        else {
          in_dr0 = *pdVar7;
          in_dr2 = pdVar10[-1];
          dVar22 = *pdVar10;
          pdVar10 = pdVar10 + 1;
        }
        iVar12 = iVar12 + 1;
        pdVar7 = pdVar10 + -3;
        if (cVar26 == '\0') {
          dVar22 = CONCAT44D(F32HI(dVar22) + fVar18,SUB84(dVar22,0));
        }
        else {
          dVar22 = dVar22 + in_dr4;
        }
        if (cVar27 == '\0') {
          pdVar8 = (double *)(unsigned)((int)ar7 + 0xc);
          *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          pdVar8 = ar7 + 1;
          *pdVar8 = in_dr2;
        }
        if (cVar26 == '\0') {
          bVar24 = F32HI(dVar22) < fVar18;
        }
        else {
          bVar24 = dVar22 < in_dr4;
        }
        if (cVar27 == '\0') {
          pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
          *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          pdVar8 = pdVar8 + -1;
          *pdVar8 = in_dr0;
        }
        in_dr6 = dVar22;
        if ((bVar24) && (in_dr6 = in_dr4, cVar27 == '\0')) {
          in_dr6 = CONCAT44D(fVar18,SUB84(dVar22,0));
        }
        *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
        if (cVar27 == '\0') {
          *(int *)(unsigned)(pdVar8 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
        }
        else {
          pdVar8[3] = in_dr6;
        }
        ar7 = pdVar8 + 4;
      }
      if (bVar25) {
        if (cVar27 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)ar4_00,SUB84(in_dr0,0));
        }
        else {
          dVar22 = *ar4_00;
        }
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),0x3f800000);
        if (cVar26 == '\0') {
          bVar25 = 1.0 < F32HI(dVar22);
        }
        else {
          bVar25 = in_dr2 < dVar22;
        }
        if (cVar27 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar22,0));
        }
        else {
          in_dr0 = *pdVar7;
        }
        if (!bVar25) {
          if (cVar26 == '\0') {
            bVar25 = 1.0 < F32HI(in_dr0);
          }
          else {
            bVar25 = in_dr2 < in_dr0;
          }
          if (cVar27 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(in_dr0,0));
          }
          else {
            in_dr0 = *pdVar9;
          }
          if (!bVar25) {
            if (cVar26 == '\0') {
              bVar25 = 1.0 < F32HI(in_dr0);
            }
            else {
              bVar25 = in_dr2 < in_dr0;
            }
            if (!bVar25) goto LAB_8c227632;
          }
        }
        *(uint *)(unsigned)((int)puVar13 + -4) = uVar1;
        *(int *)(unsigned)((int)puVar13 + -8) = iVar2;
        *(int *)(unsigned)((int)puVar13 + -0xc) = iVar3;
        *(unsigned *)(unsigned)((int)puVar13 + -0x10) = psVar4;
        *(int *)(unsigned)((int)puVar13 + -0x14) = ar5;
        *(int *)(unsigned)((int)puVar13 + -0x18) = iVar5;
        if (cVar27 == '\0') {
          *(float *)(unsigned)((int)puVar13 + -0x1c) = fVar18;
          puVar14 = (undefined8 *)(unsigned)((int)puVar13 + -0x20);
          *(float *)(unsigned)((int)puVar13 + -0x20) = SUB84(in_dr4,0);
        }
        else {
          *(double *)(unsigned)((int)puVar13 + -0x20) = in_dr4;
          puVar14 = (undefined8 *)(unsigned)((int)puVar13 + -0x28);
          *(undefined8 *)(unsigned)((int)puVar13 + -0x28) = in_xd4;
        }
        ar7 = (double *)(unsigned)(vsp = ((unsigned long)(fr0_ - 96)), FUN_8c22b26c(ar4_00,pdVar7,pdVar9,ar7));
        if (cVar27 == '\0') {
          piVar15 = (int *)(unsigned)(puVar14 + 1);
          pdVar8 = (double *)(unsigned)puVar14;
        }
        else {
          in_xd4 = *puVar14;
          pdVar8 = (double *)(unsigned)(puVar14 + 1);
          piVar15 = (int *)(unsigned)(puVar14 + 2);
        }
        in_dr4 = *pdVar8;
        iVar5 = *piVar15;
        ar5 = piVar15[1];
        psVar4 = (short *)(unsigned)piVar15[2];
        iVar3 = piVar15[3];
        iVar2 = piVar15[4];
        uVar1 = piVar15[5];
        puVar13 = (uint *)(unsigned)(piVar15 + 6);
      }
LAB_8c227632:
      fVar19 = F32HI(in_dr4);
      in_dr4 = CONCAT44D(fVar19,-SUB84(in_dr4,0));
      iVar6 = iVar6 + -1;
      ar4 = (short *)(unsigned)((int)psVar4 + iVar5);
    } while (iVar6 != 0);
    if (iVar12 != 0) {
      if (cVar27 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(in_dr0,0));
        pdVar11 = (double *)(unsigned)((int)pdVar11 + -0xc);
      }
      else {
        in_dr0 = *pdVar9;
        pdVar11 = pdVar11 + -1;
      }
      if (cVar27 == '\0') {
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,SUB84(in_dr2,0));
        dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 4),SUB84(in_dr6,0));
      }
      else {
        in_dr2 = *pdVar11;
        dVar22 = pdVar11[1];
      }
      if (cVar26 == '\0') {
        dVar22 = CONCAT44D(F32HI(dVar22) + fVar19,SUB84(dVar22,0));
      }
      else {
        dVar22 = dVar22 + in_dr4;
      }
      if (cVar27 == '\0') {
        pdVar7 = (double *)(unsigned)((int)ar7 + 0xc);
        *(int *)(unsigned)pdVar7 = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        pdVar7 = ar7 + 1;
        *pdVar7 = in_dr2;
      }
      if (cVar26 == '\0') {
        bVar25 = F32HI(dVar22) < fVar19;
      }
      else {
        bVar25 = dVar22 < in_dr4;
      }
      if (cVar27 == '\0') {
        pdVar7 = (double *)(unsigned)((int)pdVar7 + -4);
        *(int *)(unsigned)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        pdVar7 = pdVar7 + -1;
        *pdVar7 = in_dr0;
      }
      in_dr6 = dVar22;
      if ((bVar25) && (in_dr6 = in_dr4, cVar27 == '\0')) {
        in_dr6 = CONCAT44D(fVar19,SUB84(dVar22,0));
      }
      iVar2 = iVar2 + iVar12 + 1;
      *(undefined4 *)(unsigned)pdVar7 = 0xf0000000;
      if (cVar27 == '\0') {
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

__asm__(".globl _FUN_8c2274f8\n.set _FUN_8c2274f8, _FUN_8c2274f8_def\n");
