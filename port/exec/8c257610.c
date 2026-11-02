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
undefined4 FUN_8c257610_def(double *ar4,int ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c257610";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int in_r2 = 0;
  double *pdVar7;
  double *pdVar8;
  short *psVar9;
  undefined4 unaff_r8 = 0;
  double *pdVar10;
  undefined4 unaff_r9 = 0;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  float fVar16;
  double dVar14;
  undefined4 uVar17;
  float fVar18;
  double dVar15;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  float fVar24;
  double dVar23;
  undefined4 in_fr5 = 0;
  float fVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  undefined4 uVar29;
  double dVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  undefined4 in_fr11 = 0;
  float fVar35;
  double dVar36;
  undefined4 in_fr13 = 0;
  float fVar37;
  double dVar38;
  float fVar39;
  double in_dr14 = 0;
  double in_xd0 = 0;
  double in_xd2 = 0;
  undefined8 uVar40;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double in_xd8 = 0;
  double dVar41;
  undefined8 in_xd10 = 0;
  double in_xd12 = 0;
  double dVar42;
  double in_xd14 = 0;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  bool bVar52;
  bool bVar53;
  bool bVar54;
  bool bVar55;
  bool bVar56;
  bool bVar57;
  bool bVar58;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  uVar5 = 0xf0000000;
  uVar21 = 0xe0000000;
  if (in_FPSCR_SZ == '\0') {
    (*(undefined4 *)(fr0_ + (int)0xfffffff8)) = CONCAT44(SUB84(in_dr14,0),(*(uint*)((uchar*)((undefined1 *)(fr0_ - 0x10))+8)));
    puVar11 = ((undefined1 *)(fr0_ - 0x10));
  }
  else {
    puVar11 = ((undefined1 *)(fr0_ - 0x20));
  }
  *(undefined4 *)(unsigned)(puVar11 + -4) = unaff_r9;
  *(undefined4 *)(unsigned)(puVar11 + -8) = unaff_r8;
  psVar9 = (short *)(unsigned)(ar5 * 0x14 + *(int *)(unsigned)((int)ar4 + 0x1c));
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D((*(undefined1 *)(unsigned)0x8c2576d4),in_fr5);
  }
  else {
    dVar22 = CONCAT44D(0x8c4aa4d8,(*(undefined1 *)(unsigned)0x8c2576d4));
  }
  fVar18 = F32HI(dVar22);
  if (in_FPSCR_PR == '\0') {
    fVar16 = (float)(int)psVar9[4] * fVar18;
  }
  else {
    fVar16 = (float)((ulonglong)((double)(int)psVar9[4] * dVar22) >> 0x20);
  }
  if (in_FPSCR_PR == '\0') {
    dVar14 = CONCAT44D(fVar16,(float)(int)psVar9[5] * fVar18);
  }
  else {
    dVar14 = CONCAT44D(fVar16,(float)(int)psVar9[5]) * dVar22;
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = (float)(int)psVar9[6] * fVar18;
  }
  else {
    fVar16 = (float)((ulonglong)((double)(int)psVar9[6] * dVar22) >> 0x20);
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = CONCAT44D(fVar16,(float)(int)psVar9[7] * fVar18);
  }
  else {
    dVar22 = CONCAT44D(fVar16,(float)(int)psVar9[7]) * dVar22;
  }
  dVar15 = dVar14;
  dVar26 = dVar22;
  if (((ar6 & 4) != 0) && (dVar15 = dVar22, dVar26 = dVar14, in_FPSCR_SZ == '\0')) {
    dVar15 = CONCAT44D((int)(D2U(dVar22) >> 0x20),SUB84(dVar14,0));
    dVar26 = CONCAT44D((int)(D2U(dVar14) >> 0x20),SUB84(dVar22,0));
  }
  dVar22 = in_xd0;
  dVar14 = in_xd2;
  if (((ar6 & 8) != 0) && (dVar22 = in_xd2, dVar14 = in_xd0, in_FPSCR_SZ == '\0')) {
    uVar17 = SUB84(dVar15,0);
    dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),SUB84(dVar26,0));
    dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),uVar17);
    dVar22 = in_xd0;
    dVar14 = in_xd2;
  }
  sVar1 = *psVar9;
  sVar2 = psVar9[1];
  sVar3 = psVar9[2];
  sVar4 = psVar9[3];
  uVar17 = (undefined4)(D2U(dVar15) >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)(puVar11 + -0xc) = uVar17;
    pdVar10 = (double *)(unsigned)(puVar11 + -0x10);
    *(int *)(unsigned)pdVar10 = SUB84(dVar15,0);
  }
  else {
    *(double *)(unsigned)(puVar11 + -0x10) = dVar15;
    pdVar10 = (double *)(unsigned)(puVar11 + -0x18);
    *pdVar10 = dVar22;
  }
  iVar6 = -(int)sVar3;
  if (in_FPSCR_SZ == '\0') {
    pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
    *(undefined4 *)(unsigned)pdVar10 = uVar17;
  }
  else {
    pdVar10 = pdVar10 + -1;
    *pdVar10 = dVar15;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
    *(int *)(unsigned)pdVar10 = SUB84(dVar26,0);
  }
  else {
    pdVar10 = pdVar10 + -1;
    *pdVar10 = dVar14;
  }
  uVar17 = (undefined4)(D2U(dVar26) >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
    *(undefined4 *)(unsigned)pdVar10 = uVar17;
  }
  else {
    pdVar10 = pdVar10 + -1;
    *pdVar10 = dVar26;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)pdVar10 + -4) = SUB84(dVar15,0);
    pdVar10 = pdVar10 + -1;
    *(undefined4 *)(unsigned)pdVar10 = uVar17;
  }
  else {
    pdVar10[-1] = dVar22;
    pdVar10 = pdVar10 + -2;
    *pdVar10 = dVar26;
  }
  if (in_FPSCR_PR == '\0') {
    fVar18 = (float)iVar6;
  }
  else {
    fVar18 = (float)((ulonglong)(double)iVar6 >> 0x20);
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
    *(int *)(unsigned)pdVar10 = SUB84(dVar26,0);
  }
  else {
    pdVar10 = pdVar10 + -1;
    *pdVar10 = dVar14;
  }
  fVar16 = (float)-(int)sVar4;
  if (in_FPSCR_SZ == '\0') {
    dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0xc),*(undefined4 *)(unsigned)(ar4 + 2));
  }
  else {
    dVar26 = *(double *)(unsigned)((int)ar4 + 0xc);
    in_xd4 = ar4[2];
  }
  fVar24 = F32HI(dVar26);
  if (in_FPSCR_PR == '\0') {
    dVar15 = CONCAT44D(fVar18 * fVar24,fVar16);
    fVar24 = (float)(sVar1 + iVar6) * fVar24;
  }
  else {
    dVar15 = CONCAT44D(fVar18,fVar16) * dVar26;
    fVar24 = (float)((ulonglong)((double)(sVar1 + iVar6) * dVar26) >> 0x20);
  }
  fVar18 = (float)((int)sVar2 + -(int)sVar4);
  if (in_FPSCR_PR == '\0') {
    dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),F32LO(dVar15) * F32LO(dVar26));
    dVar26 = CONCAT44D(fVar24,fVar18 * F32LO(dVar26));
  }
  else {
    dVar15 = dVar15 * dVar26;
    dVar26 = CONCAT44D(fVar24,fVar18) * dVar26;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar27 = CONCAT44D(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)((int)ar4 + 4));
    fVar18 = *(float *)(unsigned)(ar4 + 1);
    pdVar8 = (double *)(unsigned)((int)ar4 + 0xc);
  }
  else {
    dVar27 = *ar4;
    in_xd4 = ar4[1];
    fVar18 = (float)((ulonglong)ar4[2] >> 0x20);
    pdVar8 = ar4 + 3;
  }
                    
  if (in_FPSCR_PR == '\0') {
    fVar19 = F32LO(dVar27);
    fVar35 = F32HI(dVar27);
    fVar16 = F32LO(in_xd12) * fVar18;
    fVar24 = F32HI(in_xd12) * fVar18;
    fVar18 = F32HI(dVar14) * fVar19 +
             F32HI(in_xd6) * fVar35 + F32HI(in_xd10) * 1.0
             + F32HI(in_xd14) * fVar18;
    fVar16 = F32LO(dVar22) * fVar19 + F32LO(in_xd4) * fVar35 + F32LO(in_xd8) * 1.0 + fVar16;
    fVar16 = F32HI(dVar22) * fVar19 +
             F32HI(in_xd4) * fVar35 + F32HI(in_xd8) * 1.0
             + fVar24;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar32 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4d8,*(undefined4 *)(unsigned)0x8c4aa4d4);
  }
  else {
    dVar32 = *(undefined4 *)(unsigned)0x8c4aa4d8;
    in_xd8 = *(undefined4 *)(unsigned)0x8c4aa4d4;
  }
  if (in_FPSCR_PR == '\0') {
    dVar30 = CONCAT44D(fVar18,1.0 / fVar18);
    bVar43 = F32HI(dVar32) < fVar18;
  }
  else {
    dVar30 = CONCAT44D(fVar18,0x3f800000) / CONCAT44D(fVar18,0x3f800000);
    fVar18 = F32HI(dVar30);
    bVar43 = dVar32 < dVar30;
  }
  if (!bVar43) {
    if (in_FPSCR_PR == '\0') {
      bVar43 = fVar18 < SUB84(dVar32,0);
    }
    else {
      bVar43 = dVar30 < dVar32;
    }
    if (!bVar43) {
      if (in_FPSCR_SZ == '\0') {
        dVar36 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4a8,in_fr11);
      }
      else {
        dVar36 = *(undefined4 *)(unsigned)0x8c4aa4a8;
      }
      if (in_FPSCR_PR == '\0') {
        fVar16 = F32HI(dVar36) * F32LO(dVar30);
        dVar36 = CONCAT44D(fVar16,SUB84(dVar36,0));
        dVar15 = CONCAT44D(F32HI(dVar15) * fVar16,SUB84(dVar15,0));
      }
      else {
        dVar36 = dVar36 * dVar30;
        fVar16 = F32HI(dVar36);
        dVar15 = dVar15 * dVar36;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar32 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4dc,SUB84(dVar32,0));
      }
      else {
        dVar32 = *(undefined4 *)(unsigned)0x8c4aa4dc;
      }
      if (in_FPSCR_PR == '\0') {
        dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),F32LO(dVar15) * fVar16);
      }
      else {
        dVar15 = dVar15 * dVar36;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)0x8c4aa4e0);
      }
      else {
        in_xd8 = *(undefined4 *)(unsigned)0x8c4aa4e0;
      }
      if (in_FPSCR_PR == '\0') {
        dVar23 = CONCAT44D(F32HI(dVar26) * fVar16,
                                  F32LO(dVar26) * fVar16);
        fVar24 = F32HI(dVar32) * fVar16;
        dVar26 = CONCAT44D(fVar24,F32LO(dVar32) * fVar16);
        dVar27 = CONCAT44D(F32HI(dVar27) * fVar24,SUB84(dVar27,0));
      }
      else {
        dVar23 = dVar26 * dVar36 * dVar36;
        dVar26 = dVar32 * dVar36 * dVar36;
        dVar27 = dVar27 * dVar26;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar32 = CONCAT44D(*(undefined4 *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc),SUB84(dVar36,0));
        pdVar7 = 0x8c4aa4a8 + 2;
      }
      else {
        dVar32 = *(double *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc);
        pdVar7 = (double *)(unsigned)((unsigned)0x8c4aa4a8 + 0x14);
      }
      if (in_FPSCR_PR == '\0') {
        dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),F32LO(dVar27) * F32LO(dVar26)
                                 );
      }
      else {
        dVar27 = dVar27 * dVar26;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)pdVar7);
      }
      if (in_FPSCR_PR == '\0') {
        dVar27 = CONCAT44D(F32HI(dVar27) +
                                  F32HI(dVar32),SUB84(dVar27,0));
      }
      else {
        dVar27 = dVar27 + dVar32;
      }
      if (in_FPSCR_SZ == '\0') {
        puVar12 = puVar11 + -0x2c;
        *(float *)(unsigned)(puVar11 + -0x2c) = SUB84(dVar30,0);
      }
      else {
        puVar12 = puVar11 + -0x30;
        *(double *)(unsigned)(puVar11 + -0x30) = in_xd6;
      }
      if (in_FPSCR_PR == '\0') {
        dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),F32LO(dVar27) + F32LO(dVar32)
                                 );
      }
      else {
        dVar27 = dVar27 + dVar32;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar12 + -4) = SUB84(dVar27,0);
        puVar13 = (undefined4 *)(unsigned)(puVar12 + -8);
        *(int *)(unsigned)(puVar12 + -8) = (int)(D2U(dVar27) >> 0x20);
      }
      else {
        *(double *)(unsigned)(puVar12 + -8) = in_xd4;
        puVar13 = (undefined4 *)(unsigned)(puVar12 + -0x10);
        *(double *)(unsigned)(puVar12 + -0x10) = dVar27;
      }
      uVar17 = (undefined4)(D2U(dVar15) >> 0x20);
      fVar16 = F32LO(dVar23);
      uVar20 = (undefined4)(D2U(dVar23) >> 0x20);
      dVar26 = in_xd14;
      if ((ar6 & 1) == 0) {
        dVar36 = dVar15;
        dVar27 = dVar23;
        dVar38 = dVar23;
        dVar41 = dVar22;
        dVar42 = dVar14;
        if (in_FPSCR_SZ == '\0') {
          dVar36 = CONCAT44D(uVar17,fVar16);
          dVar27 = CONCAT44D(uVar20,SUB84(dVar15,0));
          dVar14 = in_xd4;
          dVar41 = in_xd8;
          dVar42 = in_xd12;
        }
      }
      else {
        if (in_FPSCR_PR == '\0') {
          fVar24 = ((float)(*(uint *)(unsigned)(pdVar8 + 1) & 0xffff) * 6.2831855) / 65536.0;
          fVar19 = (float)sin(fVar24);
          fVar24 = (float)cos(fVar24);
          dVar32 = CONCAT44D((float)fVar19,(float)fVar24);
        }
        dVar26 = dVar23;
        dVar41 = dVar23;
        dVar38 = dVar15;
        dVar36 = dVar22;
        if (in_FPSCR_SZ == '\0') {
          dVar30 = CONCAT44D(fVar18,SUB84(dVar15,0));
          dVar15 = CONCAT44D(uVar17,uVar17);
          dVar26 = CONCAT44D(uVar20,uVar20);
          dVar41 = in_xd8;
          dVar38 = dVar22;
          dVar36 = in_xd6;
        }
        dVar22 = dVar38;
        fVar18 = F32LO(dVar32);
        fVar24 = F32HI(dVar32);
        if (in_FPSCR_PR == '\0') {
          dVar15 = CONCAT44D(F32HI(dVar15) * fVar18,
                                    F32LO(dVar15) * fVar24);
          dVar33 = CONCAT44D(F32HI(dVar26) * fVar18,
                                    F32LO(dVar26) * fVar24);
        }
        else {
          dVar15 = dVar15 * dVar32 * dVar32;
          dVar33 = dVar26 * dVar32 * dVar32;
        }
        dVar26 = dVar14;
        if (in_FPSCR_SZ == '\0') {
          dVar36 = CONCAT44D(SUB84(dVar30,0),fVar16);
          dVar26 = in_xd14;
        }
        if (in_FPSCR_PR == '\0') {
          dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),F32LO(dVar30) * fVar24);
          dVar23 = CONCAT44D(uVar20,fVar16 * fVar24);
          in_dr14 = CONCAT44D(F32HI(dVar36) * fVar18,
                                     F32LO(dVar36) * fVar18);
        }
        else {
          dVar30 = dVar30 * dVar32;
          dVar23 = dVar23 * dVar32;
          in_dr14 = dVar36 * dVar32 * dVar32;
        }
        fVar18 = F32HI(dVar15);
        dVar36 = dVar15;
        if (in_FPSCR_SZ == '\0') {
          dVar36 = CONCAT44D(fVar18,SUB84(dVar27,0));
        }
        if (in_FPSCR_PR == '\0') {
          dVar36 = CONCAT44D(F32HI(dVar36) - F32LO(dVar23),
                                    SUB84(dVar36,0));
        }
        else {
          dVar36 = dVar36 - dVar23;
        }
        dVar14 = dVar22;
        if (in_FPSCR_SZ == '\0') {
          dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),SUB84(dVar15,0));
          dVar14 = in_xd4;
        }
        fVar16 = F32HI(in_dr14);
        if (in_FPSCR_PR == '\0') {
          dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),
                                    F32LO(dVar36) + F32LO(in_dr14));
          dVar15 = CONCAT44D(fVar18 - F32LO(dVar30),F32LO(dVar15) + fVar16);
        }
        else {
          dVar36 = dVar36 + in_dr14;
          dVar15 = (dVar15 - dVar30) + in_dr14;
        }
        fVar18 = F32HI(dVar33);
        dVar38 = dVar33;
        if (in_FPSCR_SZ == '\0') {
          dVar38 = CONCAT44D(fVar18,in_fr13);
        }
        if (in_FPSCR_PR == '\0') {
          dVar38 = CONCAT44D(F32HI(dVar38) - F32LO(dVar23),
                                    SUB84(dVar38,0));
        }
        else {
          dVar38 = dVar38 - dVar23;
        }
        dVar42 = dVar41;
        if (in_FPSCR_SZ == '\0') {
          dVar38 = CONCAT44D((int)(D2U(dVar38) >> 0x20),SUB84(dVar33,0));
          dVar42 = in_xd12;
        }
        if (in_FPSCR_PR == '\0') {
          dVar38 = CONCAT44D((int)(D2U(dVar38) >> 0x20),
                                    F32LO(dVar38) + F32LO(in_dr14));
          dVar27 = CONCAT44D(fVar18 - F32LO(dVar30),F32LO(dVar33) + fVar16);
        }
        else {
          dVar38 = dVar38 + in_dr14;
          dVar27 = (dVar33 - dVar30) + in_dr14;
        }
      }
      if (in_FPSCR_SZ == '\0') {
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),*puVar13);
        pdVar8 = (double *)(unsigned)(puVar13 + 2);
        dVar30 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4dc,puVar13[1]);
        dVar32 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4e0,SUB84(dVar32,0));
      }
      else {
        pdVar8 = (double *)(unsigned)(puVar13 + 4);
        dVar30 = *(undefined4 *)(unsigned)0x8c4aa4dc;
        dVar32 = *(undefined4 *)(unsigned)0x8c4aa4e0;
      }
      fVar24 = F32HI(dVar30);
      fVar18 = F32LO(dVar23);
      fVar19 = F32HI(dVar32);
      fVar16 = F32LO(dVar30);
      if (in_FPSCR_PR == '\0') {
        dVar33 = CONCAT44D(F32HI(dVar15) * fVar24 + fVar18,
                                  F32LO(dVar15) * fVar19 + fVar16);
        dVar36 = CONCAT44D(F32HI(dVar36) * fVar24 + fVar18,
                                  F32LO(dVar36) * fVar19 + fVar16);
        dVar15 = CONCAT44D(F32HI(dVar27) * fVar24 + fVar18,
                                  F32LO(dVar27) * fVar19 + fVar16);
        dVar27 = CONCAT44D(F32HI(dVar38) * fVar24 + fVar18,
                                  F32LO(dVar38) * fVar19 + fVar16);
      }
      else {
        dVar33 = (dVar15 * dVar30 + dVar23) * dVar32 + dVar30;
        dVar36 = (dVar36 * dVar30 + dVar23) * dVar32 + dVar30;
        dVar15 = (dVar27 * dVar30 + dVar23) * dVar32 + dVar30;
        dVar27 = (dVar38 * dVar30 + dVar23) * dVar32 + dVar30;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(unsigned)0x8c4aa4c4);
        dVar30 = CONCAT44D(fVar24,*(undefined4 *)(unsigned)((unsigned)0x8c4aa4c4 + 4));
        dVar32 = CONCAT44D(fVar19,*(undefined4 *)(unsigned)(0x8c4aa4c4 + 1));
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),
                                  *(undefined4 *)(unsigned)((unsigned)0x8c4aa4c4 + 0xc));
      }
      else {
        dVar26 = *(undefined4 *)(unsigned)0x8c4aa4c4;
      }
      fVar18 = F32LO(dVar33);
      fVar16 = F32LO(dVar23);
      if (in_FPSCR_PR == '\0') {
        bVar43 = fVar16 < fVar18;
      }
      else {
        bVar43 = dVar23 < dVar33;
      }
      fVar24 = F32LO(dVar30);
      if (in_FPSCR_PR == '\0') {
        bVar44 = fVar18 < fVar24;
      }
      else {
        bVar44 = dVar33 < dVar30;
      }
      fVar19 = F32HI(dVar33);
      fVar35 = F32LO(dVar32);
      if (in_FPSCR_PR == '\0') {
        bVar45 = fVar35 < fVar19;
      }
      else {
        bVar45 = dVar32 < dVar33;
      }
      fVar39 = F32LO(in_dr14);
      if (in_FPSCR_PR == '\0') {
        bVar46 = fVar19 < fVar39;
      }
      else {
        bVar46 = dVar33 < in_dr14;
      }
      fVar25 = F32LO(dVar36);
      if (in_FPSCR_PR == '\0') {
        bVar47 = fVar16 < fVar25;
      }
      else {
        bVar47 = dVar23 < dVar36;
      }
      if (in_FPSCR_PR == '\0') {
        bVar48 = fVar25 < fVar24;
      }
      else {
        bVar48 = dVar36 < dVar30;
      }
      fVar28 = F32HI(dVar36);
      if (in_FPSCR_PR == '\0') {
        bVar49 = fVar35 < fVar28;
      }
      else {
        bVar49 = dVar32 < dVar36;
      }
      if (in_FPSCR_PR == '\0') {
        bVar50 = fVar28 < fVar39;
      }
      else {
        bVar50 = dVar36 < in_dr14;
      }
      fVar31 = F32LO(dVar15);
      if (in_FPSCR_PR == '\0') {
        bVar51 = fVar16 < fVar31;
      }
      else {
        bVar51 = dVar23 < dVar15;
      }
      if (in_FPSCR_PR == '\0') {
        bVar52 = fVar31 < fVar24;
      }
      else {
        bVar52 = dVar15 < dVar30;
      }
      fVar34 = F32HI(dVar15);
      if (in_FPSCR_PR == '\0') {
        bVar53 = fVar35 < fVar34;
      }
      else {
        bVar53 = dVar32 < dVar15;
      }
      if (in_FPSCR_PR == '\0') {
        bVar54 = fVar34 < fVar39;
      }
      else {
        bVar54 = dVar15 < in_dr14;
      }
      fVar37 = F32LO(dVar27);
      if (in_FPSCR_PR == '\0') {
        bVar55 = fVar16 < fVar37;
      }
      else {
        bVar55 = dVar23 < dVar27;
      }
      if (in_FPSCR_PR == '\0') {
        bVar56 = fVar37 < fVar24;
      }
      else {
        bVar56 = dVar27 < dVar30;
      }
      fVar24 = F32HI(dVar27);
      if (in_FPSCR_PR == '\0') {
        bVar57 = fVar35 < fVar24;
      }
      else {
        bVar57 = dVar32 < dVar27;
      }
      if (in_FPSCR_PR == '\0') {
        bVar58 = fVar24 < fVar39;
      }
      else {
        bVar58 = dVar27 < in_dr14;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar32 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,fVar16);
      }
      else {
        dVar32 = *pdVar8;
      }
      if ((0xffffffff &
           ((((0x0 << 1 | (uint)bVar43) << 1 | (uint)bVar44) << 1 | (uint)bVar45) << 1 |
           (uint)bVar46) &
           ((((0x0 << 1 | (uint)bVar47) << 1 | (uint)bVar48) << 1 | (uint)bVar49) << 1 |
           (uint)bVar50) &
           ((((0x0 << 1 | (uint)bVar51) << 1 | (uint)bVar52) << 1 | (uint)bVar53) << 1 |
           (uint)bVar54) &
          ((((0x0 << 1 | (uint)bVar55) << 1 | (uint)bVar56) << 1 | (uint)bVar57) << 1 |
          (uint)bVar58)) != 0) {
        return 0;
      }
      uVar17 = (undefined4)(D2U(dVar32) >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        uVar20 = *(undefined4 *)(unsigned)((int)pdVar10 + 0x1c);
        dVar32 = CONCAT44D(uVar17,uVar20);
        uVar29 = *(undefined4 *)(unsigned)(pdVar10 + 3);
        *(undefined4 *)(unsigned)(in_r2 + 0x18) = 0x3f800000;
        *(undefined4 *)(unsigned)(in_r2 + 0x14) = uVar29;
        *(undefined4 *)(unsigned)(in_r2 + 0x10) = uVar20;
        *(undefined4 *)(unsigned)(in_r2 + 0xc) = uVar17;
        *(float *)(unsigned)(in_r2 + 8) = fVar18;
        pdVar8 = (double *)(unsigned)(in_r2 + 4);
        *(float *)(unsigned)pdVar8 = fVar19;
      }
      else {
        uVar40 = *(undefined8 *)(unsigned)((int)pdVar10 + 0x1c);
        dVar30 = pdVar10[3];
        *(double *)(unsigned)(in_r2 + 0x14) = dVar26;
        *(double *)(unsigned)(in_r2 + 0xc) = dVar30;
        *(undefined8 *)(unsigned)(in_r2 + 4) = uVar40;
        *(double *)(unsigned)(in_r2 + -4) = dVar32;
        *(double *)(unsigned)(in_r2 + -0xc) = dVar22;
        pdVar8 = (double *)(unsigned)(in_r2 + -0x14);
        *pdVar8 = dVar33;
      }
      *(undefined4 *)(unsigned)((int)pdVar8 + -4) = uVar21;
      if (in_FPSCR_SZ == '\0') {
        uVar20 = *(undefined4 *)(unsigned)((int)pdVar10 + 0x14);
        dVar32 = CONCAT44D(uVar17,uVar20);
        uVar29 = *(undefined4 *)(unsigned)(pdVar10 + 2);
        *(undefined4 *)(unsigned)((int)pdVar8 + 0x34) = 0x3f800000;
        *(undefined4 *)(unsigned)(pdVar8 + 6) = uVar29;
        *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = uVar20;
        *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar17;
        *(float *)(unsigned)((int)pdVar8 + 0x24) = fVar25;
        pdVar8 = pdVar8 + 4;
        *(float *)(unsigned)pdVar8 = fVar28;
      }
      else {
        dVar22 = *(double *)(unsigned)((int)pdVar10 + 0x14);
        dVar30 = pdVar10[2];
        pdVar8[6] = dVar26;
        pdVar8[5] = dVar30;
        pdVar8[4] = dVar22;
        uVar17 = (undefined4)(D2U(dVar32) >> 0x20);
        pdVar8[3] = dVar32;
        pdVar8[2] = dVar14;
        pdVar8 = pdVar8 + 1;
        *pdVar8 = dVar36;
      }
      *(undefined4 *)(unsigned)((int)pdVar8 + -4) = uVar21;
      if (in_FPSCR_SZ == '\0') {
        uVar20 = *(undefined4 *)(unsigned)((int)pdVar10 + 0xc);
        dVar32 = CONCAT44D(uVar17,uVar20);
        uVar29 = *(undefined4 *)(unsigned)(pdVar10 + 1);
        *(undefined4 *)(unsigned)((int)pdVar8 + 0x34) = 0x3f800000;
        *(undefined4 *)(unsigned)(pdVar8 + 6) = uVar29;
        *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = uVar20;
        *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar17;
        *(float *)(unsigned)((int)pdVar8 + 0x24) = fVar31;
        pdVar8 = pdVar8 + 4;
        *(float *)(unsigned)pdVar8 = fVar34;
      }
      else {
        dVar22 = *(double *)(unsigned)((int)pdVar10 + 0xc);
        dVar14 = pdVar10[1];
        pdVar8[6] = dVar26;
        pdVar8[5] = dVar14;
        pdVar8[4] = dVar22;
        uVar17 = (undefined4)(D2U(dVar32) >> 0x20);
        pdVar8[3] = dVar32;
        pdVar8[2] = dVar41;
        pdVar8 = pdVar8 + 1;
        *pdVar8 = dVar15;
      }
      *(undefined4 *)(unsigned)((int)pdVar8 + -4) = uVar21;
      if (in_FPSCR_SZ == '\0') {
        uVar21 = *(undefined4 *)(unsigned)((int)pdVar10 + 4);
        uVar20 = *(undefined4 *)(unsigned)pdVar10;
        *(undefined4 *)(unsigned)((int)pdVar8 + 0x34) = 0x3f800000;
        *(undefined4 *)(unsigned)(pdVar8 + 6) = uVar20;
        *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = uVar21;
        *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar17;
        *(float *)(unsigned)((int)pdVar8 + 0x24) = fVar37;
        pdVar8 = pdVar8 + 4;
        *(float *)(unsigned)pdVar8 = fVar24;
      }
      else {
        dVar22 = *(double *)(unsigned)((int)pdVar10 + 4);
        dVar14 = *pdVar10;
        pdVar8[6] = dVar26;
        pdVar8[5] = dVar14;
        pdVar8[4] = dVar22;
        pdVar8[3] = dVar32;
        pdVar8[2] = dVar42;
        pdVar8 = pdVar8 + 1;
        *pdVar8 = dVar27;
      }
      *(undefined4 *)(unsigned)((int)pdVar8 + -4) = uVar5;
      return 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c257610\n.set _FUN_8c257610, _FUN_8c257610_def\n");
