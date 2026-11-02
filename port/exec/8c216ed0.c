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
int FUN_8c216ed0_def(short *ar4,int ar5,uint ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c216ed0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  int iVar9;
  double *pdVar10;
  double *ar5_00;
  double *pdVar11;
  int iVar12;
  int *piVar13;
  double *pdVar14;
  double in_dr0 = 0;
  double dVar15;
  double extraout_dr0 = 0;
  float extraout_fr3 = 0;
  float fVar17;
  float fVar18;
  double in_dr4 = 0;
  double in_dr6 = 0;
  float fVar19;
  double in_dr8 = 0;
  float fVar22;
  double dVar20;
  double dVar21;
  double dVar23;
  undefined4 uVar25;
  double dVar24;
  double dVar26;
  double dVar27;
  undefined8 in_xd2 = 0;
  double in_xd6 = 0;
  double dVar28;
  double in_xd8 = 0;
  double in_xd12 = 0;
  double in_xd14 = 0;
  bool bVar29;
  char cVar30;
  char cVar31;
  undefined4 uVar16;
  
  cVar31 = '\0';
  cVar30 = '\0';
  piVar13 = (int *)(unsigned)((undefined1 *)(fr0_ - 0x30));
  uVar3 = ar6 & 0x3fff;
  iVar6 = (ar6 >> 0xe & 3) << 1;
  iVar1 = 0;
  iVar2 = 0;
  fVar17 = F32HI(in_dr4);
  do {
    iVar9 = (int)*ar4;
    pdVar10 = (double *)(unsigned)(ar4[1] * 0x10 + ar5);
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    iVar2 = iVar2 + iVar9;
    iVar9 = iVar9 + -2;
    iVar12 = 0;
    if (cVar30 == '\0') {
      fVar22 = (float)(int)ar4[2] * fVar17;
    }
    else {
      fVar22 = (float)((ulonglong)((double)(int)ar4[2] * CONCAT44D(0x3f800000,fVar17)) >>
                      0x20);
    }
    if (cVar30 == '\0') {
      dVar20 = CONCAT44D(fVar22,(float)(int)ar4[3] * fVar17);
    }
    else {
      dVar20 = CONCAT44D(fVar22,(float)(int)ar4[3]) * CONCAT44D(0x3f800000,fVar17);
    }
    if (cVar31 == '\0') {
      in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(pdVar10 + 1));
    }
    psVar5 = ar4 + 5;
    psVar4 = ar4 + 6;
    ar5_00 = (double *)(unsigned)(ar4[4] * 0x10 + ar5);
    ar4 = ar4 + 7;
    if (cVar30 == '\0') {
      fVar22 = (float)(int)*psVar5 * fVar17;
    }
    else {
      fVar22 = (float)((ulonglong)((double)(int)*psVar5 * CONCAT44D(0x3f800000,fVar17)) >>
                      0x20);
    }
    if (cVar30 == '\0') {
      dVar23 = CONCAT44D(fVar22,(float)(int)*psVar4 * fVar17);
    }
    else {
      dVar23 = CONCAT44D(fVar22,(float)(int)*psVar4) * CONCAT44D(0x3f800000,fVar17);
    }
    if (cVar31 == '\0') {
      in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(unsigned)(ar5_00 + 1));
      dVar28 = in_xd6;
    }
    else {
      dVar28 = ar5_00[1];
    }
    do {
      pdVar11 = (double *)(unsigned)(*ar4 * 0x10 + ar5);
      psVar5 = ar4 + 3;
      if (cVar30 == '\0') {
        fVar22 = (float)(int)ar4[1] * fVar17;
      }
      else {
        fVar22 = (float)((ulonglong)((double)(int)ar4[1] * CONCAT44D(0x3f800000,fVar17)) >>
                        0x20);
      }
      dVar15 = (double)((ulonglong)in_dr0 & 0xffffffff);
      fVar18 = F32LO(in_dr4);
      if (cVar30 == '\0') {
        bVar29 = 0.0 < fVar18;
      }
      else {
        bVar29 = dVar15 < in_dr4;
      }
      if (cVar30 == '\0') {
        dVar26 = CONCAT44D(fVar22,(float)(int)ar4[2] * fVar17);
      }
      else {
        dVar26 = CONCAT44D(fVar22,(float)(int)ar4[2]) * CONCAT44D(0x3f800000,fVar17);
      }
      if (cVar31 == '\0') {
        in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),*(undefined4 *)(unsigned)(pdVar11 + 1));
      }
      else {
        in_xd8 = pdVar11[1];
      }
      fVar22 = F32LO(in_dr6);
      fVar19 = F32LO(in_dr8);
      uVar25 = (undefined4)(D2U(dVar23) >> 0x20);
      dVar21 = dVar20;
      dVar24 = dVar23;
      dVar27 = dVar26;
      if (bVar29) {
        if (cVar30 == '\0') {
          bVar29 = 0.0 < fVar22;
        }
        else {
          bVar29 = dVar15 < in_dr6;
        }
        if (!bVar29) goto LAB_8c216fd8;
        if (cVar30 == '\0') {
          bVar29 = 0.0 < fVar19;
        }
        else {
          bVar29 = dVar15 < in_dr8;
        }
        if (!bVar29) goto LAB_8c216fd8;
        if (cVar30 == '\0') {
          bVar29 = 1.0 < fVar18;
        }
        else {
          bVar29 = CONCAT44D(0x3f800000,fVar17) < in_dr4;
        }
        if (bVar29) goto LAB_8c216fd8;
        if (cVar30 == '\0') {
          bVar29 = 1.0 < fVar22;
        }
        else {
          bVar29 = CONCAT44D(0x3f800000,fVar17) < in_dr6;
        }
        if (bVar29) goto LAB_8c216fd8;
        if (cVar30 == '\0') {
          bVar29 = 1.0 < fVar19;
        }
        else {
          bVar29 = CONCAT44D(0x3f800000,fVar17) < in_dr8;
        }
        if (bVar29) goto LAB_8c216fd8;
        iVar7 = ar7 + 0x20;
        if (iVar12 == 0) {
          if (cVar31 == '\0') {
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,fVar22);
            in_dr4 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),fVar18);
            pdVar10 = pdVar10 + 1;
          }
          else {
            in_dr6 = *pdVar10;
            in_dr4 = pdVar10[1];
            pdVar10 = pdVar10 + 2;
          }
          if (cVar31 == '\0') {
            uVar16 = *(undefined4 *)(unsigned)((int)pdVar10 + 4);
            dVar15 = CONCAT44D(uVar16,uVar16);
          }
          else {
            dVar15 = *(double *)(unsigned)((int)pdVar10 + 4);
          }
          if (cVar30 == '\0') {
            dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),F32LO(dVar15) - 1.0);
          }
          else {
            dVar15 = dVar15 - CONCAT44D(0x3f800000,fVar17);
          }
          if (cVar31 == '\0') {
            *(int *)(unsigned)(ar7 + 0x1c) = (int)(D2U(dVar15) >> 0x20);
            *(int *)(unsigned)(ar7 + 0x18) = (int)(D2U(dVar20) >> 0x20);
            pdVar10 = (double *)(unsigned)(ar7 + 0x14);
            *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            *(double *)(unsigned)(ar7 + 0x18) = dVar15;
            *(double *)(unsigned)(ar7 + 0x10) = dVar20;
            pdVar10 = (double *)(unsigned)(ar7 + 8);
            *pdVar10 = in_dr4;
          }
          iVar12 = 1;
          if (cVar31 == '\0') {
            pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
            *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            pdVar10 = pdVar10 + -1;
            *pdVar10 = in_dr6;
          }
          *(undefined4 *)(unsigned)((int)pdVar10 + -4) = 0xe0000000;
          iVar7 = (int)pdVar10 + 0x3c;
        }
        if (cVar31 == '\0') {
          in_dr4 = CONCAT44D(*(undefined4 *)(unsigned)ar5_00,SUB84(in_dr4,0));
          in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5_00 + 4),SUB84(in_dr6,0));
          pdVar10 = ar5_00 + 1;
        }
        else {
          in_dr4 = *ar5_00;
          in_dr6 = ar5_00[1];
          pdVar10 = ar5_00 + 2;
        }
        if (cVar31 == '\0') {
          uVar16 = *(undefined4 *)(unsigned)((int)pdVar10 + 4);
          dVar20 = CONCAT44D(uVar16,uVar16);
        }
        else {
          dVar20 = *(double *)(unsigned)((int)pdVar10 + 4);
        }
        if (cVar30 == '\0') {
          in_dr0 = CONCAT44D((int)(D2U(dVar20) >> 0x20),F32LO(dVar20) - 1.0);
        }
        else {
          in_dr0 = dVar20 - CONCAT44D(0x3f800000,fVar17);
        }
        if (cVar31 == '\0') {
          *(int *)(unsigned)(iVar7 + -4) = (int)((ulonglong)in_dr0 >> 0x20);
          *(undefined4 *)(unsigned)(iVar7 + -8) = uVar25;
          *(int *)(unsigned)(iVar7 + -0xc) = (int)((ulonglong)in_dr6 >> 0x20);
          pdVar10 = (double *)(unsigned)(iVar7 + -0x10);
          *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr4 >> 0x20);
        }
        else {
          *(double *)(unsigned)(iVar7 + -8) = in_dr0;
          *(double *)(unsigned)(iVar7 + -0x10) = dVar23;
          *(double *)(unsigned)(iVar7 + -0x18) = in_dr6;
          pdVar10 = (double *)(unsigned)(iVar7 + -0x18) + -1;
          *pdVar10 = in_dr4;
        }
        iVar12 = iVar12 + 1;
        *(undefined4 *)(unsigned)((int)pdVar10 + -4) = 0xe0000000;
        ar7 = (int)pdVar10 + 0x1c;
      }
      else {
LAB_8c216fd8:
        if (iVar12 != 0) {
          if (cVar31 == '\0') {
            in_dr4 = CONCAT44D(*(undefined4 *)(unsigned)ar5_00,fVar18);
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5_00 + 4),fVar22);
            pdVar8 = ar5_00 + 1;
          }
          else {
            in_dr4 = *ar5_00;
            in_dr6 = ar5_00[1];
            pdVar8 = ar5_00 + 2;
          }
          if (cVar31 == '\0') {
            uVar16 = *(undefined4 *)(unsigned)((int)pdVar8 + 4);
            dVar15 = CONCAT44D(uVar16,uVar16);
          }
          else {
            dVar15 = *(double *)(unsigned)((int)pdVar8 + 4);
          }
          if (cVar30 == '\0') {
            dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),F32LO(dVar15) - 1.0);
          }
          else {
            dVar15 = dVar15 - CONCAT44D(0x3f800000,fVar17);
          }
          if (cVar31 == '\0') {
            *(int *)(unsigned)(ar7 + 0x1c) = (int)(D2U(dVar15) >> 0x20);
            pdVar8 = (double *)(unsigned)(ar7 + 0x18);
            *(undefined4 *)(unsigned)pdVar8 = uVar25;
          }
          else {
            *(double *)(unsigned)(ar7 + 0x18) = dVar15;
            pdVar8 = (double *)(unsigned)(ar7 + 0x10);
            *pdVar8 = dVar23;
          }
          iVar1 = iVar1 + iVar12;
          if (cVar31 == '\0') {
            pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
            *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            pdVar8 = pdVar8 + -1;
            *pdVar8 = in_dr6;
          }
          iVar12 = 0;
          iVar1 = iVar1 + 1;
          if (cVar31 == '\0') {
            pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
            *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            pdVar8 = pdVar8 + -1;
            *pdVar8 = in_dr4;
          }
          *(undefined4 *)(unsigned)((int)pdVar8 + -4) = 0xf0000000;
          ar7 = (int)pdVar8 + 0x1c;
        }
        in_dr0 = (double)(D2U(dVar15) & 0xffffffff);
        if (cVar30 == '\0') {
          bVar29 = 0.0 < SUB84(in_dr4,0);
        }
        else {
          bVar29 = in_dr0 < in_dr4;
        }
        fVar22 = F32LO(in_dr6);
        if (bVar29) {
          if (cVar30 == '\0') {
            bVar29 = SUB84(in_dr4,0) < 1.0;
          }
          else {
            bVar29 = in_dr4 < CONCAT44D(0x3f800000,fVar17);
          }
          if (!bVar29) goto LAB_8c21700e;
LAB_8c217098:
          *(int *)(unsigned)((int)piVar13 + -4) = iVar6;
          *(int *)(unsigned)((int)piVar13 + -8) = ar5;
          *(unsigned *)(unsigned)((int)piVar13 + -0xc) = psVar5;
          *(uint *)(unsigned)((int)piVar13 + -0x10) = uVar3;
          *(int *)(unsigned)((int)piVar13 + -0x14) = iVar2;
          *(int *)(unsigned)((int)piVar13 + -0x18) = iVar1;
          if (cVar31 == '\0') {
            *(float *)(unsigned)((int)piVar13 + -0x1c) = fVar17;
            *(float *)(unsigned)((int)piVar13 + -0x20) = fVar22;
            pdVar8 = (double *)(unsigned)((int)piVar13 + -0x24);
            *(float *)(unsigned)((int)piVar13 + -0x24) = fVar19;
          }
          else {
            *(undefined8 *)(unsigned)((int)piVar13 + -0x20) = in_xd2;
            *(double *)(unsigned)((int)piVar13 + -0x28) = dVar28;
            pdVar8 = (double *)(unsigned)((int)piVar13 + -0x30);
            *(double *)(unsigned)((int)piVar13 + -0x30) = in_xd8;
            in_xd8 = in_xd14;
            dVar28 = in_xd12;
          }
          ar7 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c2170f4(pdVar10,ar5_00,pdVar11,ar7));
          if (cVar31 == '\0') {
            fVar17 = *(float *)(unsigned)(pdVar8 + 1);
            pdVar14 = (double *)(unsigned)((int)pdVar8 + 0xc);
            in_dr6 = CONCAT44D((int)(D2U(dVar23) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar8 + 4));
            in_dr8 = CONCAT44D((int)(D2U(dVar26) >> 0x20),*(undefined4 *)(unsigned)pdVar8);
          }
          else {
            in_xd8 = *pdVar8;
            dVar28 = pdVar8[1];
            in_xd2 = pdVar8[2];
            pdVar14 = pdVar8 + 3;
            fVar17 = extraout_fr3;
            in_dr6 = dVar23;
            in_dr8 = dVar26;
          }
          iVar1 = *(int *)(unsigned)pdVar14;
          iVar2 = *(int *)(unsigned)((int)pdVar14 + 4);
          uVar3 = *(uint *)(unsigned)((int)pdVar14 + 8);
          psVar5 = ((short *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar14 + 0xc));
          ar5 = *(int *)(unsigned)((int)pdVar14 + 0x10);
          iVar6 = *(int *)(unsigned)((int)pdVar14 + 0x14);
          piVar13 = (int *)(unsigned)((int)pdVar14 + 0x18);
          in_dr0 = extraout_dr0;
          in_dr4 = dVar20;
        }
        else {
LAB_8c21700e:
          if (cVar30 == '\0') {
            bVar29 = 0.0 < fVar22;
          }
          else {
            bVar29 = in_dr0 < in_dr6;
          }
          if (bVar29) {
            if (cVar30 == '\0') {
              bVar29 = fVar22 < 1.0;
            }
            else {
              bVar29 = in_dr6 < CONCAT44D(0x3f800000,fVar17);
            }
            if (bVar29) goto LAB_8c217098;
          }
          if (cVar30 == '\0') {
            bVar29 = 0.0 < fVar19;
          }
          else {
            bVar29 = in_dr0 < in_dr8;
          }
          if (bVar29) {
            if (cVar30 == '\0') {
              bVar29 = fVar19 < 1.0;
            }
            else {
              bVar29 = in_dr8 < CONCAT44D(0x3f800000,fVar17);
            }
            if (bVar29) goto LAB_8c217098;
          }
        }
      }
      ar4 = (short *)(unsigned)((int)psVar5 + iVar6);
      uVar25 = (undefined4)(D2U(dVar27) >> 0x20);
      dVar23 = dVar27;
      dVar20 = dVar24;
      if (cVar31 == '\0') {
        dVar23 = CONCAT44D(uVar25,SUB84(dVar24,0));
        dVar20 = CONCAT44D((int)(D2U(dVar24) >> 0x20),SUB84(dVar21,0));
      }
      iVar9 = iVar9 + -1;
      in_xd6 = in_xd8;
      if (cVar31 == '\0') {
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),SUB84(in_dr6,0));
        in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),SUB84(in_dr8,0));
        in_xd6 = dVar28;
      }
      pdVar10 = ar5_00;
      ar5_00 = pdVar11;
      dVar28 = in_xd6;
    } while (iVar9 != 0);
    if (iVar12 != 0) {
      if (cVar31 == '\0') {
        in_dr4 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,SUB84(in_dr4,0));
        in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 4),SUB84(in_dr8,0));
        pdVar11 = pdVar11 + 1;
      }
      else {
        in_dr4 = *pdVar11;
        in_dr8 = pdVar11[1];
        pdVar11 = pdVar11 + 2;
      }
      if (cVar31 == '\0') {
        uVar16 = *(undefined4 *)(unsigned)((int)pdVar11 + 4);
        dVar20 = CONCAT44D(uVar16,uVar16);
      }
      else {
        dVar20 = *(double *)(unsigned)((int)pdVar11 + 4);
      }
      if (cVar30 == '\0') {
        in_dr0 = CONCAT44D((int)(D2U(dVar20) >> 0x20),F32LO(dVar20) - 1.0);
      }
      else {
        in_dr0 = dVar20 - CONCAT44D(0x3f800000,fVar17);
      }
      if (cVar31 == '\0') {
        *(int *)(unsigned)(ar7 + 0x1c) = (int)((ulonglong)in_dr0 >> 0x20);
        pdVar10 = (double *)(unsigned)(ar7 + 0x18);
        *(undefined4 *)(unsigned)pdVar10 = uVar25;
      }
      else {
        *(double *)(unsigned)(ar7 + 0x18) = in_dr0;
        pdVar10 = (double *)(unsigned)(ar7 + 0x10);
        *pdVar10 = dVar27;
      }
      if (cVar31 == '\0') {
        *(int *)(unsigned)((int)pdVar10 + -4) = (int)((ulonglong)in_dr8 >> 0x20);
        pdVar10 = pdVar10 + -1;
        *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr4 >> 0x20);
      }
      else {
        pdVar10[-1] = in_dr8;
        pdVar10 = pdVar10 + -1 + -1;
        *pdVar10 = in_dr4;
      }
      *(undefined4 *)(unsigned)((int)pdVar10 + -4) = 0xf0000000;
      iVar1 = iVar1 + iVar12 + 1;
      ar7 = (int)pdVar10 + 0x1c;
    }
    uVar3 = uVar3 - 1;
    if (uVar3 == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar1;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar2;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c216ed0\n.set _FUN_8c216ed0, _FUN_8c216ed0_def\n");
