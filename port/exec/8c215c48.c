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
double * FUN_8c215c48_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c215c48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *ar5_00;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  double *pdVar14;
  double *pdVar15;
  float fVar16;
  double in_dr4 = 0;
  float fVar17;
  double in_dr6 = 0;
  float fVar18;
  double in_dr8 = 0;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 in_fr11 = 0;
  double dVar21;
  undefined4 in_fr13 = 0;
  double dVar22;
  undefined8 in_xd6 = 0;
  undefined8 uVar23;
  undefined8 in_xd8 = 0;
  bool bVar24;
  char cVar25;
  char cVar26;
  
  cVar26 = '\0';
  cVar25 = '\0';
  piVar13 = (int *)(unsigned)((undefined1 *)(fr0_ - 0x30));
  uVar4 = ar6 & 0x3fff;
  iVar6 = (ar6 >> 0xe & 3) << 1;
  iVar2 = 0;
  iVar3 = 0;
  dVar21 = CONCAT44D(0xe0000000,in_fr11);
  dVar22 = CONCAT44D(0xf0000000,in_fr13);
  do {
    iVar9 = (int)*ar4;
    psVar5 = ar4 + 2;
    puVar10 = (undefined4 *)(unsigned)(ar4[1] * 0x10 + ar5);
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    iVar3 = iVar3 + iVar9;
    iVar9 = iVar9 + -2;
    iVar12 = 0;
    if (cVar26 == '\0') {
      in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),puVar10[2]);
    }
    ar4 = ar4 + 3;
    ar5_00 = (undefined4 *)(unsigned)(*psVar5 * 0x10 + ar5);
    if (cVar26 == '\0') {
      in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),ar5_00[2]);
      uVar23 = in_xd6;
    }
    else {
      uVar23 = *(undefined8 *)(unsigned)(ar5_00 + 2);
    }
    do {
      psVar5 = ar4 + 1;
      fVar16 = F32LO(in_dr4);
      if (cVar25 == '\0') {
        bVar24 = 0.0 < fVar16;
      }
      else {
        bVar24 = 5.26354424712089e-315 < in_dr4;
      }
      puVar11 = (undefined4 *)(unsigned)(*ar4 * 0x10 + ar5);
      if (cVar26 == '\0') {
        in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),puVar11[2]);
      }
      else {
        in_xd8 = *(undefined8 *)(unsigned)(puVar11 + 2);
      }
      fVar17 = F32LO(in_dr6);
      fVar18 = F32LO(in_dr8);
      uVar19 = (undefined4)(D2U(dVar21) >> 0x20);
      if (bVar24) {
        if (cVar25 == '\0') {
          bVar24 = 0.0 < fVar17;
        }
        else {
          bVar24 = 5.26354424712089e-315 < in_dr6;
        }
        if (!bVar24) goto LAB_8c215d10;
        if (cVar25 == '\0') {
          bVar24 = 0.0 < fVar18;
        }
        else {
          bVar24 = 5.26354424712089e-315 < in_dr8;
        }
        if (!bVar24) goto LAB_8c215d10;
        if (cVar25 == '\0') {
          bVar24 = 1.0 < fVar16;
        }
        else {
          bVar24 = 5.26354424712089e-315 < in_dr4;
        }
        if (bVar24) goto LAB_8c215d10;
        if (cVar25 == '\0') {
          bVar24 = 1.0 < fVar17;
        }
        else {
          bVar24 = 5.26354424712089e-315 < in_dr6;
        }
        if (bVar24) goto LAB_8c215d10;
        if (cVar25 == '\0') {
          bVar24 = 1.0 < fVar18;
        }
        else {
          bVar24 = 5.26354424712089e-315 < in_dr8;
        }
        if (bVar24) goto LAB_8c215d10;
        iVar7 = (int)ar7 + 0x1c;
        if (iVar12 == 0) {
          if (cVar26 == '\0') {
            dVar21 = CONCAT44D(uVar19,*puVar10);
            in_dr4 = CONCAT44D(puVar10[1],fVar16);
            puVar10 = puVar10 + 2;
          }
          else {
            in_dr4 = *(double *)(unsigned)(puVar10 + 2);
            puVar10 = puVar10 + 4;
          }
          if (cVar26 == '\0') {
            uVar19 = puVar10[1];
            in_dr8 = CONCAT44D(uVar19,fVar18);
            pdVar8 = ar7 + 3;
            *(undefined4 *)(unsigned)pdVar8 = uVar19;
            *(int *)(unsigned)((int)pdVar8 + -0xc) = (int)((ulonglong)in_dr4 >> 0x20);
            pdVar8 = pdVar8 + -2;
            *(int *)(unsigned)pdVar8 = (int)(D2U(dVar21) >> 0x20);
          }
          else {
            in_dr8 = *(double *)(unsigned)(puVar10 + 1);
            pdVar8 = (double *)(unsigned)((int)ar7 + 0x14);
            *pdVar8 = in_dr8;
            pdVar8[-2] = in_dr4;
            pdVar8 = pdVar8 + -3;
            *pdVar8 = dVar21;
          }
          iVar12 = 1;
          iVar7 = (int)pdVar8 + 0x3c;
        }
        if (cVar26 == '\0') {
          dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*ar5_00);
          in_dr6 = CONCAT44D(ar5_00[1],fVar17);
          puVar10 = ar5_00 + 2;
        }
        else {
          in_dr6 = *(double *)(unsigned)(ar5_00 + 2);
          puVar10 = ar5_00 + 4;
        }
        if (cVar26 == '\0') {
          uVar19 = puVar10[1];
          in_dr8 = CONCAT44D(uVar19,SUB84(in_dr8,0));
          *(undefined4 *)(unsigned)(iVar7 + -4) = uVar19;
          *(int *)(unsigned)(iVar7 + -0x10) = (int)((ulonglong)in_dr6 >> 0x20);
          pdVar8 = (double *)(unsigned)(iVar7 + -0x14);
          *(int *)(unsigned)pdVar8 = (int)(D2U(dVar21) >> 0x20);
        }
        else {
          in_dr8 = *(double *)(unsigned)(puVar10 + 1);
          pdVar8 = (double *)(unsigned)(iVar7 + -8);
          *pdVar8 = in_dr8;
          pdVar8[-2] = in_dr6;
          pdVar8 = pdVar8 + -3;
          *pdVar8 = dVar21;
        }
        iVar12 = iVar12 + 1;
        ar7 = pdVar8 + 4;
      }
      else {
LAB_8c215d10:
        if (iVar12 != 0) {
          if (cVar26 == '\0') {
            dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*ar5_00);
            in_dr6 = CONCAT44D(ar5_00[1],fVar17);
            puVar1 = ar5_00 + 2;
          }
          else {
            in_dr6 = *(double *)(unsigned)(ar5_00 + 2);
            puVar1 = ar5_00 + 4;
          }
          if (cVar26 == '\0') {
            uVar20 = puVar1[1];
            in_dr8 = CONCAT44D(uVar20,fVar18);
            *(undefined4 *)(unsigned)(ar7 + 3) = uVar20;
            pdVar8 = (double *)(unsigned)((int)(ar7 + 3) + -0xc);
            *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            in_dr8 = *(double *)(unsigned)(puVar1 + 1);
            *(double *)(unsigned)((int)ar7 + 0x14) = in_dr8;
            pdVar8 = (double *)(unsigned)((int)ar7 + 0x14) + -2;
            *pdVar8 = in_dr6;
          }
          iVar2 = iVar2 + iVar12;
          iVar12 = 0;
          iVar2 = iVar2 + 1;
          if (cVar26 == '\0') {
            pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
            *(int *)(unsigned)pdVar8 = (int)(D2U(dVar22) >> 0x20);
          }
          else {
            pdVar8 = pdVar8 + -1;
            *pdVar8 = dVar22;
          }
          ar7 = pdVar8 + 4;
        }
        if (cVar25 == '\0') {
          bVar24 = 0.0 < fVar16;
        }
        else {
          bVar24 = 5.26354424712089e-315 < in_dr4;
        }
        fVar17 = F32LO(in_dr6);
        fVar18 = F32LO(in_dr8);
        if (bVar24) {
          if (cVar25 == '\0') {
            bVar24 = fVar16 < 1.0;
          }
          else {
            bVar24 = in_dr4 < 5.26354424712089e-315;
          }
          if (!bVar24) goto LAB_8c215d3e;
LAB_8c215dba:
          *(int *)(unsigned)((int)piVar13 + -4) = iVar6;
          *(int *)(unsigned)((int)piVar13 + -8) = ar5;
          *(unsigned *)(unsigned)((int)piVar13 + -0xc) = psVar5;
          *(uint *)(unsigned)((int)piVar13 + -0x10) = uVar4;
          *(int *)(unsigned)((int)piVar13 + -0x14) = iVar3;
          *(int *)(unsigned)((int)piVar13 + -0x18) = iVar2;
          if (cVar26 == '\0') {
            *(float *)(unsigned)((int)piVar13 + -0x1c) = fVar17;
            *(float *)(unsigned)((int)piVar13 + -0x20) = fVar18;
            *(undefined4 *)(unsigned)((int)piVar13 + -0x24) = uVar19;
            pdVar14 = (double *)(unsigned)((int)piVar13 + -0x28);
            *(int *)(unsigned)((int)piVar13 + -0x28) = (int)(D2U(dVar22) >> 0x20);
          }
          else {
            *(undefined8 *)(unsigned)((int)piVar13 + -0x20) = uVar23;
            *(undefined8 *)(unsigned)((int)piVar13 + -0x28) = in_xd8;
            *(double *)(unsigned)((int)piVar13 + -0x30) = dVar21;
            pdVar14 = (double *)(unsigned)((int)piVar13 + -0x38);
            *(double *)(unsigned)((int)piVar13 + -0x38) = dVar22;
          }
          ar7 = (double *)(unsigned)(vsp = ((unsigned long)(fr0_ - 48)), FUN_8c215e10(puVar10,ar5_00,puVar11,ar7));
          if (cVar26 == '\0') {
            dVar22 = CONCAT44D(*(undefined4 *)(unsigned)pdVar14,SUB84(dVar22,0));
            dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar14 + 4),SUB84(dVar21,0));
            in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),*(undefined4 *)(unsigned)(pdVar14 + 1))
            ;
            in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar14 + 0xc));
            pdVar15 = pdVar14 + 2;
          }
          else {
            dVar22 = *pdVar14;
            dVar21 = pdVar14[1];
            in_xd8 = pdVar14[2];
            uVar23 = pdVar14[3];
            pdVar15 = pdVar14 + 4;
          }
          iVar2 = *(int *)(unsigned)pdVar15;
          iVar3 = *(int *)(unsigned)((int)pdVar15 + 4);
          uVar4 = *(uint *)(unsigned)((int)pdVar15 + 8);
          psVar5 = ((short *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar15 + 0xc));
          ar5 = *(int *)(unsigned)((int)pdVar15 + 0x10);
          iVar6 = *(int *)(unsigned)((int)pdVar15 + 0x14);
          piVar13 = (int *)(unsigned)((int)pdVar15 + 0x18);
        }
        else {
LAB_8c215d3e:
          if (cVar25 == '\0') {
            bVar24 = 0.0 < fVar17;
          }
          else {
            bVar24 = 5.26354424712089e-315 < in_dr6;
          }
          if (bVar24) {
            if (cVar25 == '\0') {
              bVar24 = fVar17 < 1.0;
            }
            else {
              bVar24 = in_dr6 < 5.26354424712089e-315;
            }
            if (bVar24) goto LAB_8c215dba;
          }
          if (cVar25 == '\0') {
            bVar24 = 0.0 < fVar18;
          }
          else {
            bVar24 = 5.26354424712089e-315 < in_dr8;
          }
          if (bVar24) {
            if (cVar25 == '\0') {
              bVar24 = fVar18 < 1.0;
            }
            else {
              bVar24 = in_dr8 < 5.26354424712089e-315;
            }
            if (bVar24) goto LAB_8c215dba;
          }
        }
      }
      ar4 = (short *)(unsigned)((int)psVar5 + iVar6);
      in_xd6 = in_xd8;
      if (cVar26 == '\0') {
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),SUB84(in_dr6,0));
        in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),SUB84(in_dr8,0));
        in_xd6 = uVar23;
      }
      iVar9 = iVar9 + -1;
      puVar10 = ar5_00;
      ar5_00 = puVar11;
      uVar23 = in_xd6;
    } while (iVar9 != 0);
    if (iVar12 != 0) {
      if (cVar26 == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*puVar11);
        in_dr8 = CONCAT44D(puVar11[1],SUB84(in_dr8,0));
        puVar11 = puVar11 + 2;
      }
      else {
        in_dr8 = *(double *)(unsigned)(puVar11 + 2);
        puVar11 = puVar11 + 4;
      }
      if (cVar26 == '\0') {
        uVar19 = puVar11[1];
        in_dr6 = CONCAT44D(uVar19,SUB84(in_dr6,0));
        *(undefined4 *)(unsigned)(ar7 + 3) = uVar19;
        pdVar8 = (double *)(unsigned)((int)(ar7 + 3) + -0xc);
        *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr8 >> 0x20);
      }
      else {
        in_dr6 = *(double *)(unsigned)(puVar11 + 1);
        *(double *)(unsigned)((int)ar7 + 0x14) = in_dr6;
        pdVar8 = (double *)(unsigned)((int)ar7 + 0x14) + -2;
        *pdVar8 = in_dr8;
      }
      if (cVar26 == '\0') {
        pdVar8 = (double *)(unsigned)((int)pdVar8 + -4);
        *(int *)(unsigned)pdVar8 = (int)(D2U(dVar22) >> 0x20);
      }
      else {
        pdVar8 = pdVar8 + -1;
        *pdVar8 = dVar22;
      }
      iVar2 = iVar2 + iVar12 + 1;
      ar7 = pdVar8 + 4;
    }
    uVar4 = uVar4 - 1;
    if (uVar4 == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar2;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar3;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c215c48\n.set _FUN_8c215c48, _FUN_8c215c48_def\n");
