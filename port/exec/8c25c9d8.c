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
int FUN_8c25c9d8_def(uint *ar4,uint *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25c9d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  double *pdVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined4 in_fr1 = 0;
  float fVar5;
  double in_dr2 = 0;
  double dVar6;
  uint uVar9;
  double dVar7;
  float fVar10;
  double dVar8;
  undefined4 uVar11;
  undefined4 in_fr5 = 0;
  undefined4 uVar14;
  float fVar15;
  double dVar12;
  float fVar16;
  double dVar13;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 in_dr8 = 0;
  double dVar22;
  double dVar23;
  undefined8 in_dr10 = 0;
  double dVar24;
  float fVar25;
  double in_dr12 = 0;
  double dVar26;
  undefined4 in_fr15 = 0;
  double dVar27;
  double in_xd2 = 0;
  double dVar28;
  double dVar29;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double dVar30;
  double in_xd8 = 0;
  double in_xd10 = 0;
  double in_xd12 = 0;
  double in_xd14 = 0;
  bool bVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  uVar11 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    puVar4 = ((undefined8 *)(fr0_ - 0x10));
    ((undefined8 *)(fr0_ - 0x10))[0] = CONCAT44(SUB84(in_dr12,0),uVar11);
  }
  else {
    puVar4 = (undefined8 *)(unsigned)((undefined1 *)(fr0_ - 0x20));
  }
  if (in_FPSCR_SZ == '\0') {
    uVar14 = *(undefined4 *)(unsigned)0x8c4aa4a8;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)0x8c4aa4dc);
    in_dr12 = CONCAT44D(uVar11,uVar14);
    dVar18 = CONCAT44D(*(undefined4 *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc),
                              *(undefined4 *)(unsigned)(0x8c4aa4a8 + 2));
    dVar24 = CONCAT44D(uVar14,in_fr5);
  }
  else {
    in_xd12 = *(undefined4 *)(unsigned)0x8c4aa4a8;
    dVar18 = *(double *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc);
    in_xd2 = *(undefined4 *)(unsigned)0x8c4aa4dc;
    uVar14 = (undefined4)((ulonglong)in_xd12 >> 0x20);
    in_xd6 = ((undefined1 *)(unsigned)2)[0x8c4aa4a8];
    dVar24 = in_xd12;
  }
  if (in_FPSCR_PR == '\0') {
    dVar26 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),F32LO(in_dr12) * F32LO(in_dr2));
  }
  else {
    dVar26 = in_dr12 * in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4e0,ar4[3]);
    dVar27 = CONCAT44D(uVar14,in_fr15);
  }
  else {
    dVar6 = *(undefined4 *)(unsigned)0x8c4aa4e0;
    in_xd2 = *(double *)(unsigned)(ar4 + 3);
    dVar27 = dVar24;
  }
  fVar10 = F32HI(dVar6);
  if (in_FPSCR_PR == '\0') {
    dVar27 = CONCAT44D(F32HI(dVar27) * fVar10,SUB84(dVar27,0));
    fVar15 = 1.0 / F32LO(dVar6);
  }
  else {
    dVar27 = dVar27 * dVar6;
    fVar15 = (float)((ulonglong)(CONCAT44D(0x3f800000,SUB84(dVar24,0)) / dVar6) >> 0x20);
  }
  uVar11 = (undefined4)((ulonglong)in_dr10 >> 0x20);
  fVar25 = F32LO(dVar26);
  fVar16 = F32HI(dVar27);
  if (in_FPSCR_PR == '\0') {
    fVar20 = 1.0 / fVar25;
    dVar24 = CONCAT44D(uVar11,1.0 / fVar16);
  }
  else {
    fVar20 = SUB84(CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),0x3f800000) / dVar26,0);
    dVar24 = CONCAT44D(uVar11,0x3f800000) / dVar27;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = CONCAT44D(fVar10,ar5[3]);
    dVar22 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4d4,fVar20);
  }
  else {
    in_xd2 = *(double *)(unsigned)(ar5 + 3);
    dVar22 = *(undefined4 *)(unsigned)0x8c4aa4d4;
  }
  fVar10 = F32HI(dVar22);
  if (in_FPSCR_PR == '\0') {
    bVar31 = fVar15 < fVar10;
    dVar12 = CONCAT44D(fVar15,1.0 / F32LO(dVar6));
  }
  else {
    bVar31 = CONCAT44D(fVar15,0x3f800000) < dVar22;
    dVar12 = CONCAT44D(fVar15,0x3f800000) / dVar6;
  }
  fVar21 = F32LO(dVar22);
  uVar11 = (undefined4)(D2U(dVar6) >> 0x20);
  fVar17 = F32LO(dVar18);
  fVar19 = F32HI(dVar18);
  fVar20 = F32LO(dVar12);
  fVar15 = F32LO(in_xd10);
  if (bVar31) {
    if (in_FPSCR_SZ == '\0') {
      dVar6 = CONCAT44D(uVar11,ar4[3]);
    }
    else {
      in_xd2 = *(double *)(unsigned)(ar4 + 3);
    }
    if (in_FPSCR_PR == '\0') {
      dVar12 = CONCAT44D(1.0 / F32LO(dVar6),fVar20);
    }
    else {
      dVar12 = CONCAT44D(0x3f800000,fVar20) / dVar6;
    }
    pdVar3 = (double *)(unsigned)*ar4;
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar4 + -0x14) = SUB84(dVar6,0);
      dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),ar4[4]);
      dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),ar4[5]);
    }
    else {
      *(double *)(unsigned)((int)puVar4 + -0x14) = in_xd2;
      in_xd2 = *(double *)(unsigned)(ar4 + 4);
      in_xd4 = *(double *)(unsigned)(ar4 + 5);
    }
    if (in_FPSCR_PR == '\0') {
      fVar20 = F32LO(dVar6) - fVar17;
    }
    else {
      fVar20 = SUB84(dVar6 - dVar18,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar9 = ar4[1];
      dVar26 = CONCAT44D(uVar9,fVar20);
      *(uint *)(unsigned)((int)puVar4 + -0x34) = uVar9;
    }
    else {
      dVar26 = *(double *)(unsigned)(ar4 + 1);
      uVar9 = (uint)(D2U(dVar26) >> 0x20);
      *(double *)(unsigned)((int)puVar4 + -0x34) = dVar26;
    }
    fVar20 = F32HI(dVar12);
    if (in_FPSCR_PR == '\0') {
      dVar26 = CONCAT44D(uVar9,F32LO(dVar26) * fVar20);
    }
    else {
      dVar26 = dVar26 * dVar12;
    }
    dVar6 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = CONCAT44D(SUB84(dVar26,0),SUB84(dVar24,0));
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = CONCAT44D(F32HI(dVar6) * F32LO(dVar6),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 * dVar6;
    }
    dVar28 = in_xd4;
    if (in_FPSCR_SZ == '\0') {
      dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),SUB84(dVar12,0));
      dVar28 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      dVar12 = CONCAT44D((int)(D2U(dVar26) >> 0x20),(F32LO(dVar26) - fVar19) * fVar20
                               );
    }
    else {
      dVar12 = (dVar26 - dVar18) * dVar12;
    }
    dVar30 = dVar28;
    if (in_FPSCR_SZ == '\0') {
      dVar27 = CONCAT44D(fVar16,SUB84(dVar12,0));
      dVar30 = in_xd14;
    }
    if (in_FPSCR_PR == '\0') {
      dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),F32LO(dVar27) * fVar21);
    }
    else {
      dVar27 = dVar27 * dVar22;
    }
    if (in_FPSCR_SZ == '\0') {
      *(uint *)(unsigned)((int)puVar4 + -0x30) = ar4[2];
      dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),ar5[3]);
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar4 + -0x30) = *(undefined8 *)(unsigned)(ar4 + 2);
      dVar28 = *(double *)(unsigned)(ar5 + 3);
    }
    pdVar1 = (double *)(unsigned)*ar5;
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar4 + -0x10) = SUB84(dVar12,0);
    }
    else {
      *(double *)(unsigned)((int)puVar4 + -0x10) = dVar28;
    }
    if (in_FPSCR_PR == '\0') {
      dVar12 = CONCAT44D(fVar20,1.0 / F32LO(dVar12));
    }
    else {
      dVar12 = CONCAT44D(fVar20,0x3f800000) / dVar12;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar15 = (float)ar5[4];
      *(float *)(unsigned)((int)puVar4 + -4) = fVar15;
      dVar7 = CONCAT44D(SUB84(dVar6,0),fVar15);
    }
    else {
      dVar28 = *(double *)(unsigned)(ar5 + 4);
      *(double *)(unsigned)((int)puVar4 + -4) = dVar28;
      dVar7 = in_xd10;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),fVar15 - fVar17);
    }
    else {
      dVar7 = dVar7 - dVar18;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar26 = CONCAT44D(ar5[5],fVar25);
    }
    else {
      dVar26 = *(double *)(unsigned)(ar5 + 5);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),F32LO(dVar7) * F32LO(dVar12));
    }
    else {
      dVar7 = dVar7 * dVar12;
    }
    dVar29 = dVar28;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),SUB84(dVar7,0));
      dVar29 = in_xd10;
    }
    fVar15 = F32HI(dVar7);
    if (in_FPSCR_PR == '\0') {
      dVar24 = CONCAT44D((int)(D2U(dVar6) >> 0x20),F32LO(dVar6) * fVar15);
    }
    else {
      dVar24 = dVar6 * dVar7;
    }
    uVar11 = (undefined4)(D2U(dVar26) >> 0x20);
    in_xd2 = dVar26;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = CONCAT44D(fVar15,uVar11);
      in_xd2 = dVar28;
    }
    if (in_FPSCR_PR == '\0') {
      fVar15 = F32LO(dVar7) - fVar19;
    }
    else {
      fVar15 = SUB84(dVar7 - dVar18,0);
    }
    dVar6 = in_xd8;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = CONCAT44D(fVar21,fVar15);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),F32LO(dVar6) * F32LO(dVar12));
    }
    else {
      dVar6 = dVar6 * dVar12;
    }
    dVar28 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar22 = CONCAT44D(fVar10,SUB84(dVar6,0));
      dVar28 = in_xd8;
    }
    fVar10 = F32HI(dVar6);
    if (in_FPSCR_PR == '\0') {
      dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),F32LO(dVar22) * fVar10);
    }
    else {
      dVar22 = dVar22 * dVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      *(uint *)(unsigned)((int)puVar4 + -0x20) = ar5[1];
      *(uint *)(unsigned)((int)puVar4 + -0x24) = ar5[2];
      *(undefined4 *)(unsigned)((int)puVar4 + -0x1c) = *(undefined4 *)(unsigned)((int)puVar4 + -0x10);
      dVar6 = CONCAT44D(fVar10,*(undefined4 *)(unsigned)((int)puVar4 + -4));
      *(undefined4 *)(unsigned)((int)puVar4 + -0x28) = *(undefined4 *)(unsigned)((int)puVar4 + -4);
      *(undefined4 *)(unsigned)((int)puVar4 + -0x2c) = uVar11;
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar4 + -0x20) = *(undefined8 *)(unsigned)(ar5 + 1);
      *(undefined8 *)(unsigned)((int)puVar4 + -0x24) = *(undefined8 *)(unsigned)(ar5 + 2);
      *(undefined8 *)(unsigned)((int)puVar4 + -0x1c) = *(undefined8 *)(unsigned)((int)puVar4 + -0x10);
      in_xd2 = *(double *)(unsigned)((int)puVar4 + -4);
      *(double *)(unsigned)((int)puVar4 + -0x28) = in_xd2;
      *(double *)(unsigned)((int)puVar4 + -0x2c) = dVar26;
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar31 = fVar20 < fVar10;
    }
    else {
      bVar31 = dVar12 < dVar22;
    }
    pdVar1 = 0x8c4aa4d4;
    pdVar3 = 0x8c4aa4a8;
    dVar28 = in_xd8;
    dVar29 = in_xd10;
    dVar30 = in_xd14;
    if (bVar31) {
      if (in_FPSCR_SZ == '\0') {
        fVar20 = (float)ar5[3];
      }
      else {
        in_xd4 = *(double *)(unsigned)(ar5 + 3);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = CONCAT44D(uVar11,ar5[4]);
      }
      else {
        in_xd2 = *(double *)(unsigned)(ar5 + 4);
      }
      if (in_FPSCR_PR == '\0') {
        dVar26 = CONCAT44D(1.0 / fVar20,fVar20);
      }
      else {
        dVar26 = CONCAT44D(0x3f800000,fVar20) / CONCAT44D(0x3f800000,fVar20);
      }
      pdVar3 = (double *)(unsigned)*ar5;
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)((int)puVar4 + -0x18) = SUB84(dVar6,0);
      }
      else {
        *(double *)(unsigned)((int)puVar4 + -0x18) = in_xd2;
      }
      fVar20 = F32HI(dVar26);
      if (in_FPSCR_PR == '\0') {
        fVar5 = (F32LO(dVar6) - fVar17) * fVar20;
      }
      else {
        fVar5 = SUB84((dVar6 - dVar18) * dVar26,0);
      }
      dVar6 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = CONCAT44D(fVar5,SUB84(dVar24,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) * F32LO(dVar6),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 * dVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = CONCAT44D(ar5[1],ar5[5]);
      }
      else {
        in_xd2 = *(double *)(unsigned)(ar5 + 5);
        dVar12 = *(double *)(unsigned)(ar5 + 1);
      }
      if (in_FPSCR_PR == '\0') {
        dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),F32LO(dVar12) - fVar19);
      }
      else {
        dVar12 = dVar12 - dVar18;
      }
      uVar11 = (undefined4)(D2U(dVar12) >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)puVar4 + -0x34) = uVar11;
      }
      else {
        *(double *)(unsigned)((int)puVar4 + -0x34) = dVar12;
      }
      if (in_FPSCR_PR == '\0') {
        dVar12 = CONCAT44D(uVar11,F32LO(dVar12) * fVar20);
      }
      else {
        dVar12 = dVar12 * dVar26;
      }
      dVar30 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar27 = CONCAT44D(fVar16,SUB84(dVar12,0));
        dVar30 = in_xd14;
      }
      if (in_FPSCR_PR == '\0') {
        dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),F32LO(dVar27) * fVar21);
      }
      else {
        dVar27 = dVar27 * dVar22;
      }
      if (in_FPSCR_SZ == '\0') {
        *(uint *)(unsigned)((int)puVar4 + -0x30) = ar5[2];
        dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),ar4[3]);
      }
      else {
        *(undefined8 *)(unsigned)((int)puVar4 + -0x30) = *(undefined8 *)(unsigned)(ar5 + 2);
        in_xd2 = *(double *)(unsigned)(ar4 + 3);
      }
      pdVar1 = (double *)(unsigned)*ar4;
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)((int)puVar4 + -0xc) = SUB84(dVar12,0);
      }
      else {
        *(double *)(unsigned)((int)puVar4 + -0xc) = in_xd2;
      }
      if (in_FPSCR_PR == '\0') {
        dVar12 = CONCAT44D(fVar20,1.0 / F32LO(dVar12));
      }
      else {
        dVar12 = CONCAT44D(fVar20,0x3f800000) / dVar12;
      }
      if (in_FPSCR_SZ == '\0') {
        fVar15 = (float)ar4[4];
        *(float *)(unsigned)((int)puVar4 + -8) = fVar15;
        dVar28 = CONCAT44D(SUB84(dVar6,0),fVar15);
        dVar7 = in_xd2;
      }
      else {
        dVar7 = *(double *)(unsigned)(ar4 + 4);
        *(double *)(unsigned)((int)puVar4 + -8) = dVar7;
        dVar28 = in_xd10;
      }
      if (in_FPSCR_PR == '\0') {
        dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),fVar15 - fVar17);
      }
      else {
        dVar28 = dVar28 - dVar18;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar26 = CONCAT44D(ar4[5],fVar25);
      }
      else {
        dVar26 = *(double *)(unsigned)(ar4 + 5);
      }
      if (in_FPSCR_PR == '\0') {
        dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),F32LO(dVar28) * F32LO(dVar12)
                                 );
      }
      else {
        dVar28 = dVar28 * dVar12;
      }
      dVar29 = dVar7;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),SUB84(dVar28,0));
        dVar29 = in_xd10;
      }
      fVar15 = F32HI(dVar28);
      if (in_FPSCR_PR == '\0') {
        dVar24 = CONCAT44D((int)(D2U(dVar6) >> 0x20),F32LO(dVar6) * fVar15);
      }
      else {
        dVar24 = dVar6 * dVar28;
      }
      uVar11 = (undefined4)(D2U(dVar26) >> 0x20);
      in_xd2 = dVar26;
      if (in_FPSCR_SZ == '\0') {
        dVar28 = CONCAT44D(fVar15,uVar11);
        in_xd2 = dVar7;
      }
      if (in_FPSCR_PR == '\0') {
        fVar15 = F32LO(dVar28) - fVar19;
      }
      else {
        fVar15 = SUB84(dVar28 - dVar18,0);
      }
      dVar6 = in_xd8;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = CONCAT44D(fVar21,fVar15);
      }
      if (in_FPSCR_PR == '\0') {
        dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),F32LO(dVar6) * F32LO(dVar12));
      }
      else {
        dVar6 = dVar6 * dVar12;
      }
      dVar28 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar22 = CONCAT44D(fVar10,SUB84(dVar6,0));
        dVar28 = in_xd8;
      }
      fVar10 = F32HI(dVar6);
      if (in_FPSCR_PR == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),F32LO(dVar22) * fVar10);
      }
      else {
        dVar22 = dVar22 * dVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        *(uint *)(unsigned)((int)puVar4 + -0x20) = ar4[1];
        *(uint *)(unsigned)((int)puVar4 + -0x24) = ar4[2];
        *(undefined4 *)(unsigned)((int)puVar4 + -0x1c) = *(undefined4 *)(unsigned)((int)puVar4 + -0xc);
        dVar6 = CONCAT44D(fVar10,*(undefined4 *)(unsigned)((int)puVar4 + -8));
        *(undefined4 *)(unsigned)((int)puVar4 + -0x28) = *(undefined4 *)(unsigned)((int)puVar4 + -8);
        *(undefined4 *)(unsigned)((int)puVar4 + -0x2c) = uVar11;
      }
      else {
        *(undefined8 *)(unsigned)((int)puVar4 + -0x20) = *(undefined8 *)(unsigned)(ar4 + 1);
        *(undefined8 *)(unsigned)((int)puVar4 + -0x24) = *(undefined8 *)(unsigned)(ar4 + 2);
        *(undefined8 *)(unsigned)((int)puVar4 + -0x1c) = *(undefined8 *)(unsigned)((int)puVar4 + -0xc);
        in_xd2 = *(double *)(unsigned)((int)puVar4 + -8);
        *(double *)(unsigned)((int)puVar4 + -0x28) = in_xd2;
        *(double *)(unsigned)((int)puVar4 + -0x2c) = dVar26;
      }
    }
  }
  uVar11 = (undefined4)(D2U(dVar22) >> 0x20);
  dVar7 = dVar22;
  if (in_FPSCR_SZ == '\0') {
    dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),uVar11);
    dVar7 = in_xd2;
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = F32HI(dVar12);
    dVar12 = CONCAT44D(fVar10,F32LO(dVar12) - fVar10);
    dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),F32LO(dVar6) - fVar10);
    fVar10 = F32HI(dVar24);
    dVar24 = CONCAT44D(fVar10,F32LO(dVar24) - fVar10);
  }
  else {
    dVar12 = dVar12 - dVar12;
    dVar6 = dVar6 - dVar12;
    dVar24 = dVar24 - dVar24;
  }
  dVar23 = dVar24;
  if (in_FPSCR_SZ == '\0') {
    dVar23 = CONCAT44D((int)(D2U(dVar24) >> 0x20),SUB84(dVar12,0));
  }
  fVar10 = F32LO(dVar27);
  if (in_FPSCR_PR == '\0') {
    dVar22 = CONCAT44D(uVar11,F32LO(dVar22) - fVar10);
    fVar15 = F32LO(dVar6) / F32LO(dVar23);
  }
  else {
    dVar22 = dVar22 - dVar27;
    fVar15 = SUB84(dVar6 / dVar23,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),fVar10);
    *(float *)(unsigned)((int)puVar4 + -0x38) = fVar15;
    dVar6 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar4 + -0x34),in_fr1);
    dVar12 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar4 + -0x20),fVar15);
    dVar30 = in_xd4;
  }
  else {
    *(double *)(unsigned)((int)puVar4 + -0x38) = dVar7;
    dVar6 = *(double *)(unsigned)((int)puVar4 + -0x34);
    dVar12 = *(double *)(unsigned)((int)puVar4 + -0x20);
  }
  fVar15 = F32HI(dVar6);
  if (in_FPSCR_PR == '\0') {
    dVar12 = CONCAT44D(F32HI(dVar12) - fVar15,SUB84(dVar12,0));
  }
  else {
    dVar12 = dVar12 - dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar11 = SUB84(dVar12,0);
    dVar6 = CONCAT44D(fVar15,uVar11);
    dVar12 = CONCAT44D(uVar11,(int)(D2U(dVar12) >> 0x20));
  }
  else {
    uVar11 = SUB84(dVar6,0);
    dVar12 = dVar7;
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = CONCAT44D(F32HI(dVar12) * F32LO(dVar12) +
                             F32HI(dVar6),uVar11);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)puVar4 + -0x34) = (int)(D2U(dVar6) >> 0x20);
    dVar12 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar4 + -0x30),SUB84(dVar12,0));
    dVar6 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar4 + -0x24),SUB84(dVar6,0));
  }
  else {
    *(double *)(unsigned)((int)puVar4 + -0x34) = dVar6;
    dVar12 = *(double *)(unsigned)((int)puVar4 + -0x30);
    dVar6 = *(double *)(unsigned)((int)puVar4 + -0x24);
  }
  fVar15 = F32HI(dVar12);
  if (in_FPSCR_PR == '\0') {
    dVar6 = CONCAT44D(F32HI(dVar6) - fVar15,SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 - dVar12;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar11 = SUB84(dVar6,0);
    dVar12 = CONCAT44D(fVar15,uVar11);
    dVar6 = CONCAT44D(uVar11,(int)(D2U(dVar6) >> 0x20));
  }
  else {
    uVar11 = SUB84(dVar12,0);
    dVar6 = dVar7;
  }
  fVar15 = F32HI(dVar6);
  if (in_FPSCR_PR == '\0') {
    dVar12 = CONCAT44D(fVar15 * F32LO(dVar6) + F32HI(dVar12),uVar11);
    dVar23 = CONCAT44D(fVar15 * F32LO(dVar24) + F32HI(dVar23),
                              SUB84(dVar23,0));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)puVar4 + -0x30) = (int)(D2U(dVar12) >> 0x20);
  }
  else {
    *(double *)(unsigned)((int)puVar4 + -0x30) = dVar12;
  }
  fVar25 = F32HI(dVar22);
  if (in_FPSCR_PR == '\0') {
    dVar26 = CONCAT44D(1.0 / fVar25,SUB84(dVar26,0));
  }
  else {
    dVar26 = CONCAT44D(0x3f800000,SUB84(dVar26,0)) / dVar22;
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = F32HI(dVar23);
    dVar23 = CONCAT44D(fVar16,fVar15 * F32LO(dVar22) + F32LO(dVar23));
    dVar27 = CONCAT44D(F32HI(dVar27) * fVar16,fVar10);
  }
  else {
    dVar27 = dVar27 * dVar23;
  }
  if (in_FPSCR_PR == '\0') {
    dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),F32LO(dVar26) * F32LO(dVar23));
    fVar10 = (float)((uint)pdVar3 >> 0x18);
    dVar6 = CONCAT44D(fVar10,SUB84(dVar12,0));
    bVar31 = fVar10 < 0.0;
  }
  else {
    dVar26 = dVar26 * dVar23;
    dVar6 = (double)((uint)pdVar3 >> 0x18);
    fVar10 = F32HI(dVar6);
    bVar31 = dVar6 < (double)((ulonglong)(uint)fVar15 << 0x20);
  }
  uVar9 = (uint)(D2U(dVar26) >> 0x20);
  dVar12 = dVar26;
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)((ulonglong)uVar9 << 0x20);
  }
  fVar15 = F32HI(dVar12);
  if (in_FPSCR_PR == '\0') {
    dVar18 = CONCAT44D(fVar15 * F32LO(dVar26) + fVar19,
                              fVar15 * F32HI(dVar27) + fVar17);
  }
  uVar11 = SUB84(dVar18,0);
  dVar13 = dVar6;
  dVar12 = in_xd6;
  if (in_FPSCR_SZ == '\0') {
    dVar26 = CONCAT44D(uVar9,(int)(D2U(dVar18) >> 0x20));
    dVar13 = CONCAT44D(fVar10,SUB84(dVar23,0));
    dVar18 = in_xd12;
    dVar12 = CONCAT44D(uVar11,SUB84(dVar27,0));
  }
  if (bVar31) {
    if (in_FPSCR_SZ == '\0') {
      dVar27 = CONCAT44D((*(undefined1 *)(unsigned)0x8c25cdc8),SUB84(dVar6,0));
    }
    else {
      dVar27 = CONCAT44D(0x4f000000,(*(undefined1 *)(unsigned)0x8c25cdc8));
    }
    if (in_FPSCR_PR == '\0') {
      dVar13 = CONCAT44D(F32HI(dVar13) +
                                F32HI(dVar27),SUB84(dVar13,0));
    }
    else {
      dVar13 = dVar13 + dVar27;
    }
  }
  fVar10 = (float)((uint)pdVar3 >> 0x10 & 0xff);
  dVar27 = dVar7;
  if (in_FPSCR_SZ == '\0') {
    dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),fVar10);
    dVar27 = dVar30;
  }
  if (in_FPSCR_PR == '\0' && fVar10 < 0.0) {
    fVar15 = (*(undefined1 *)(unsigned)0x8c25cdc8);
    if (in_FPSCR_SZ != '\0') {
      dVar7 = CONCAT44D(0x4f000000,(*(undefined1 *)(unsigned)0x8c25cdc8));
      fVar15 = fVar10;
    }
    if (in_FPSCR_PR == '\0') {
      dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),F32LO(dVar13) + fVar15);
    }
    else {
      dVar13 = dVar13 + (double)(ulonglong)(uint)fVar15;
    }
  }
  fVar10 = (float)((uint)pdVar3 >> 8 & 0xff);
  dVar6 = dVar7;
  if (in_FPSCR_SZ == '\0') {
    dVar6 = CONCAT44D(fVar10,uVar11);
  }
  uVar9 = (uint)(D2U(dVar6) >> 0x20);
  dVar30 = dVar6;
  if (in_FPSCR_PR != '\0' || 0.0 <= fVar10) {
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)(ulonglong)uVar9;
      dVar30 = in_xd6;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar6 = CONCAT44D(uVar9,uVar9);
      dVar30 = in_xd6;
      fVar10 = (*(undefined1 *)(unsigned)0x8c25cdc8);
    }
    else {
      dVar7 = CONCAT44D(0x4f000000,(*(undefined1 *)(unsigned)0x8c25cdc8));
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)(ulonglong)(uint)(F32LO(dVar6) + fVar10);
    }
    else {
      dVar6 = dVar6 + (double)(ulonglong)(uint)fVar10;
    }
  }
  fVar10 = (float)((uint)pdVar3 & 0xff);
  dVar23 = dVar7;
  if (in_FPSCR_SZ == '\0') {
    dVar23 = CONCAT44D(fVar10,SUB84(dVar6,0));
  }
  uVar9 = (uint)(D2U(dVar23) >> 0x20);
  dVar6 = dVar23;
  if (in_FPSCR_PR != '\0' || 0.0 <= fVar10) {
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)(ulonglong)uVar9;
      dVar6 = dVar28;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar22 = CONCAT44D(fVar25,uVar9);
      dVar6 = dVar28;
      fVar10 = (*(undefined1 *)(unsigned)0x8c25cdc8);
    }
    else {
      dVar7 = CONCAT44D(0x4f000000,(*(undefined1 *)(unsigned)0x8c25cdc8));
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)(ulonglong)(uint)(F32LO(dVar22) + fVar10);
    }
    else {
      dVar22 = dVar22 + (double)(ulonglong)(uint)fVar10;
    }
  }
  fVar10 = (float)((uint)pdVar1 >> 0x18);
  dVar28 = dVar7;
  if (in_FPSCR_SZ == '\0') {
    dVar28 = CONCAT44D(fVar10,SUB84(dVar23,0));
  }
  if (in_FPSCR_PR == '\0' && fVar10 < 0.0) {
    fVar15 = (*(undefined1 *)(unsigned)0x8c25cdc8);
    if (in_FPSCR_SZ != '\0') {
      dVar7 = CONCAT44D(0x4f000000,(*(undefined1 *)(unsigned)0x8c25cdc8));
      fVar15 = fVar10;
    }
    if (in_FPSCR_PR == '\0') {
      dVar28 = CONCAT44D(F32HI(dVar28) + fVar15,SUB84(dVar28,0));
    }
    else {
      dVar28 = dVar28 + (double)(ulonglong)(uint)fVar15;
    }
  }
  fVar10 = (float)((uint)pdVar1 >> 0x10 & 0xff);
  dVar23 = dVar7;
  if (in_FPSCR_SZ == '\0') {
    dVar23 = CONCAT44D(fVar10,SUB84(dVar22,0));
  }
  if (in_FPSCR_PR == '\0' && fVar10 < 0.0) {
    fVar15 = (*(undefined1 *)(unsigned)0x8c25cdc8);
    if (in_FPSCR_SZ != '\0') {
      dVar7 = CONCAT44D(0x4f000000,(*(undefined1 *)(unsigned)0x8c25cdc8));
      fVar15 = fVar10;
    }
    if (in_FPSCR_PR == '\0') {
      dVar23 = CONCAT44D(F32HI(dVar23) + fVar15,SUB84(dVar23,0));
    }
    else {
      dVar23 = dVar23 + (double)(ulonglong)(uint)fVar15;
    }
  }
  fVar10 = (float)((uint)pdVar1 >> 8 & 0xff);
  dVar22 = dVar7;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D(fVar10,SUB84(dVar24,0));
  }
  if (in_FPSCR_PR == '\0' && fVar10 < 0.0) {
    fVar15 = (*(undefined1 *)(unsigned)0x8c25cdc8);
    if (in_FPSCR_SZ != '\0') {
      dVar7 = CONCAT44D(0x4f000000,(*(undefined1 *)(unsigned)0x8c25cdc8));
      fVar15 = fVar10;
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = CONCAT44D(F32HI(dVar22) + fVar15,SUB84(dVar22,0));
    }
    else {
      dVar22 = dVar22 + (double)(ulonglong)(uint)fVar15;
    }
  }
  fVar10 = (float)((uint)pdVar1 & 0xff);
  dVar8 = (double)(ulonglong)(uint)fVar10;
  dVar24 = dVar7;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),fVar10);
    dVar24 = dVar29;
  }
  uVar11 = SUB84(dVar22,0);
  uVar14 = (undefined4)(D2U(dVar12) >> 0x20);
  if (in_FPSCR_PR != '\0' || 0.0 <= fVar10) {
    if (in_FPSCR_SZ == '\0') {
      dVar12 = CONCAT44D(uVar14,uVar11);
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar12 = CONCAT44D(uVar14,uVar11);
      dVar8 = (double)(ulonglong)(uint)(*(undefined1 *)(unsigned)0x8c25cdc8);
    }
    else {
      dVar7 = CONCAT44D(0x4f000000,(*(undefined1 *)(unsigned)0x8c25cdc8));
    }
    if (in_FPSCR_PR == '\0') {
      dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),F32LO(dVar12) + F32LO(dVar8));
    }
    else {
      dVar12 = dVar12 + dVar8;
    }
  }
  fVar10 = F32HI(dVar13);
  if (in_FPSCR_PR == '\0') {
    dVar28 = CONCAT44D(F32HI(dVar28) - fVar10,SUB84(dVar28,0));
  }
  else {
    dVar28 = dVar28 - dVar13;
  }
  if (in_FPSCR_SZ == '\0') {
    fVar15 = *(float *)(unsigned)((int)puVar4 + -0x38);
  }
  else {
    fVar15 = (float)((ulonglong)*(undefined8 *)(unsigned)((int)puVar4 + -0x38) >> 0x20);
  }
  fVar25 = F32LO(dVar28);
  if (in_FPSCR_PR == '\0') {
    dVar22 = CONCAT44D(F32HI(dVar22) - fVar25,uVar11);
  }
  else {
    dVar22 = dVar22 - dVar28;
  }
  dVar29 = dVar13;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),fVar10);
    dVar29 = dVar24;
  }
  fVar10 = F32LO(dVar13);
  if (in_FPSCR_PR == '\0') {
    fVar16 = F32LO(dVar23);
    dVar23 = CONCAT44D(F32HI(dVar23) - fVar10,fVar16);
    dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),F32LO(dVar12) - fVar16);
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                              fVar15 * F32HI(dVar28) + F32LO(dVar22));
  }
  else {
    dVar23 = dVar23 - dVar13;
    fVar16 = F32LO(dVar23);
    dVar12 = dVar12 - dVar23;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)(D2U(dVar28) & 0xffffffff);
    dVar24 = dVar27;
    dVar27 = CONCAT44D(fVar10,fVar25);
  }
  else {
    fVar25 = F32LO(dVar27);
    dVar24 = dVar30;
  }
  fVar10 = F32LO(dVar13);
  fVar20 = F32LO(dVar8);
  if (in_FPSCR_PR == '\0') {
    fVar10 = fVar15 * F32HI(dVar22) + fVar10;
    dVar27 = CONCAT44D(fVar15 * F32HI(dVar23) +
                              F32HI(dVar27),fVar25);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = CONCAT44D(fVar16,fVar10);
    fVar20 = F32LO(dVar22);
    dVar29 = dVar7;
  }
  dVar22 = CONCAT44D(0x4f000000,fVar20);
  if (in_FPSCR_PR == '\0') {
    dVar6 = CONCAT44D(fVar15 * F32LO(dVar12) + F32HI(dVar6),
                             SUB84(dVar6,0));
  }
  if (in_FPSCR_PR != '\0' || 0x4f000000 <= fVar20) {
    if (in_FPSCR_PR == '\0') {
      dVar22 = CONCAT44D(0x4f000000 + 0x4f000000,
                                fVar20 - (0x4f000000 + 0x4f000000));
    }
    else {
      dVar22 = (dVar22 + dVar22) - (dVar22 + dVar22);
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar32 = (int)SUB84(dVar22,0);
  }
  else {
    iVar32 = (int)dVar22;
  }
  uVar11 = (undefined4)(D2U(dVar22) >> 0x20);
  dVar22 = CONCAT44D(uVar11,0x4f000000);
  fVar10 = F32HI(dVar27);
  if (in_FPSCR_PR == '\0') {
    bVar31 = fVar10 < 0x4f000000;
  }
  else {
    bVar31 = dVar27 < dVar22;
  }
  if (!bVar31) {
    if (in_FPSCR_PR == '\0') {
      dVar22 = CONCAT44D(uVar11,0x4f000000 + 0x4f000000);
      dVar27 = CONCAT44D(fVar10 - (0x4f000000 + 0x4f000000),SUB84(dVar27,0));
    }
    else {
      dVar22 = dVar22 + dVar22;
      dVar27 = dVar27 - dVar22;
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar33 = (int)F32HI(dVar27);
  }
  else {
    iVar33 = (int)dVar27;
  }
  uVar11 = (undefined4)(D2U(dVar22) >> 0x20);
  dVar22 = CONCAT44D(uVar11,0x4f000000);
  if (in_FPSCR_PR == '\0') {
    bVar31 = SUB84(dVar6,0) < 0x4f000000;
  }
  else {
    bVar31 = dVar6 < dVar22;
  }
  if (!bVar31) {
    if (in_FPSCR_PR == '\0') {
      dVar22 = CONCAT44D(uVar11,0x4f000000 + 0x4f000000);
      dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),
                               F32LO(dVar6) - (0x4f000000 + 0x4f000000));
    }
    else {
      dVar22 = dVar22 + dVar22;
      dVar6 = dVar6 - dVar22;
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar34 = (int)SUB84(dVar6,0);
  }
  else {
    iVar34 = (int)dVar6;
  }
  dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),0x4f000000);
  fVar10 = F32HI(dVar6);
  if (in_FPSCR_PR == '\0') {
    bVar31 = fVar10 < 0x4f000000;
  }
  else {
    bVar31 = dVar6 < dVar22;
  }
  if (!bVar31) {
    if (in_FPSCR_PR == '\0') {
      dVar6 = CONCAT44D(fVar10 - (0x4f000000 + 0x4f000000),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 - (dVar22 + dVar22);
    }
  }
  fVar10 = F32HI(dVar12);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),fVar10);
    pdVar3 = (double *)(unsigned)((int)puVar4 + -0x2c);
  }
  else {
    dVar29 = *(double *)(unsigned)((int)puVar4 + -0x2c);
    pdVar3 = (double *)(unsigned)((int)puVar4 + -0x28);
    dVar24 = dVar12;
  }
  dVar22 = *pdVar3;
  if (in_FPSCR_PR == '\0') {
    uVar9 = (uint)F32HI(dVar6);
  }
  else {
    uVar9 = (uint)dVar6;
  }
  fVar15 = F32LO(dVar26);
  dVar28 = dVar18;
  if (in_FPSCR_SZ == '\0') {
    dVar28 = CONCAT44D(fVar15,SUB84(dVar6,0));
  }
  fVar25 = F32HI(dVar22);
  if (in_FPSCR_PR == '\0') {
    dVar6 = CONCAT44D(F32HI(dVar28) - F32LO(dVar22),
                             F32LO(dVar28) - fVar25);
  }
  else {
    dVar6 = (dVar28 - dVar22) - dVar22;
  }
  fVar16 = (*(undefined1 *)(unsigned)0x8c25cdd0);
  if (in_FPSCR_SZ != '\0') {
    dVar30 = CONCAT44D(0xe0000000,(*(undefined1 *)(unsigned)0x8c25cdd0));
    fVar16 = F32LO(dVar27);
  }
  fVar17 = F32HI(dVar6);
  fVar20 = F32LO(dVar6);
  if (in_FPSCR_PR == '\0') {
    dVar27 = CONCAT44D(fVar17,fVar17 * fVar17 + fVar20 * fVar20);
  }
  else {
    dVar27 = dVar6 * dVar6;
  }
  uVar9 = iVar32 << 0x18 | iVar33 << 0x10 | iVar34 << 8 | uVar9;
  *(uint *)(unsigned)(ar6 + 0x18) = uVar9;
  uVar11 = 0xe0000000;
  if (in_FPSCR_PR == '\0') {
    fVar19 = 1.0 / SQRT(SUB84(dVar27,0));
    dVar27 = CONCAT44D(fVar19,fVar16);
    dVar6 = CONCAT44D(-(fVar17 * fVar19 * fVar16),fVar20 * fVar19 * fVar16);
  }
  else {
    dVar27 = CONCAT44D(0x3f800000,fVar16) / SQRT(dVar27);
    fVar19 = F32HI(dVar27);
    dVar6 = -(dVar6 * dVar27 * dVar27 * dVar27 * dVar27);
  }
  fVar16 = F32LO(dVar6);
  if (in_FPSCR_SZ == '\0') {
    dVar27 = CONCAT44D(fVar19,fVar16);
    dVar24 = dVar30;
  }
  if (in_FPSCR_PR == '\0') {
    fVar20 = F32LO(dVar27) + fVar16;
  }
  else {
    fVar20 = SUB84(dVar27 + dVar6,0);
  }
  fVar17 = F32HI(dVar6);
  dVar27 = dVar6;
  if (in_FPSCR_SZ == '\0') {
    dVar27 = CONCAT44D(fVar17,fVar20);
  }
  if (in_FPSCR_PR == '\0') {
    dVar27 = CONCAT44D(F32HI(dVar27) + fVar17,SUB84(dVar27,0));
  }
  else {
    dVar27 = dVar27 + dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)(ar6 + 0x14) = *(undefined4 *)(unsigned)((int)puVar4 + -0x34);
    puVar2 = (undefined8 *)(unsigned)(ar6 + 0x10);
    *(undefined4 *)(unsigned)puVar2 = *(undefined4 *)(unsigned)((int)puVar4 + -0x30);
    dVar22 = CONCAT44D(fVar25,fVar10);
  }
  else {
    *(undefined8 *)(unsigned)(ar6 + 0x10) = *(undefined8 *)(unsigned)((int)puVar4 + -0x34);
    puVar2 = (undefined8 *)(unsigned)(ar6 + 8);
    *puVar2 = *(undefined8 *)(unsigned)((int)puVar4 + -0x30);
    dVar29 = dVar12;
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),F32LO(dVar22) - fVar17);
  }
  else {
    dVar22 = dVar22 - dVar6;
  }
  uVar14 = (undefined4)(D2U(dVar26) >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)((int)puVar2 + -4) = uVar14;
    pdVar3 = (double *)(unsigned)(puVar2 + -1);
    *(int *)(unsigned)pdVar3 = SUB84(dVar22,0);
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),fVar15);
    dVar18 = dVar29;
  }
  else {
    puVar2[-1] = dVar26;
    pdVar3 = (double *)(unsigned)(puVar2 + -2);
    *pdVar3 = dVar29;
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),F32LO(dVar22) - fVar16);
  }
  else {
    dVar22 = dVar22 - dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar3 = (double *)(unsigned)((int)pdVar3 + -4);
    *(int *)(unsigned)pdVar3 = SUB84(dVar22,0);
  }
  else {
    pdVar3 = pdVar3 + -1;
    *pdVar3 = dVar18;
  }
  *(undefined4 *)(unsigned)((int)pdVar3 + -4) = uVar11;
  *(unsigned *)(unsigned)((int)pdVar3 + 0x34) = pdVar1;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)(pdVar3 + 6) = *(undefined4 *)(unsigned)((int)puVar4 + -0x20);
    *(undefined4 *)(unsigned)((int)pdVar3 + 0x2c) = *(undefined4 *)(unsigned)((int)puVar4 + -0x24);
    pdVar3 = pdVar3 + 5;
    *(undefined4 *)(unsigned)pdVar3 = *(undefined4 *)(unsigned)((int)puVar4 + -0x1c);
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)((int)puVar4 + -0x28))
    ;
  }
  else {
    *(undefined8 *)(unsigned)((int)pdVar3 + 0x2c) = *(undefined8 *)(unsigned)((int)puVar4 + -0x20);
    *(undefined8 *)(unsigned)((int)pdVar3 + 0x24) = *(undefined8 *)(unsigned)((int)puVar4 + -0x24);
    pdVar3 = (double *)(unsigned)((int)pdVar3 + 0x1c);
    *pdVar3 = *(double *)(unsigned)((int)puVar4 + -0x1c);
    dVar18 = *(double *)(unsigned)((int)puVar4 + -0x28);
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),F32LO(dVar22) - fVar17);
  }
  else {
    dVar22 = dVar22 - dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar3 = (double *)(unsigned)((int)pdVar3 + -4);
    *(int *)(unsigned)pdVar3 = SUB84(dVar22,0);
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)((int)puVar4 + -0x2c))
    ;
  }
  else {
    pdVar3 = pdVar3 + -1;
    *pdVar3 = dVar18;
    dVar18 = *(double *)(unsigned)((int)puVar4 + -0x2c);
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),F32LO(dVar22) - fVar16);
  }
  else {
    dVar22 = dVar22 - dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar3 = (double *)(unsigned)((int)pdVar3 + -4);
    *(int *)(unsigned)pdVar3 = SUB84(dVar22,0);
  }
  else {
    pdVar3 = pdVar3 + -1;
    *pdVar3 = dVar18;
  }
  *(undefined4 *)(unsigned)((int)pdVar3 + -4) = uVar11;
  *(uint *)(unsigned)((int)pdVar3 + 0x34) = uVar9;
  fVar25 = F32HI(dVar27);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)(pdVar3 + 6) = *(undefined4 *)(unsigned)((int)puVar4 + -0x34);
    puVar2 = (undefined8 *)(unsigned)((int)pdVar3 + 0x2c);
    *(undefined4 *)(unsigned)puVar2 = *(undefined4 *)(unsigned)((int)puVar4 + -0x30);
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),fVar25);
  }
  else {
    *(undefined8 *)(unsigned)((int)pdVar3 + 0x2c) = *(undefined8 *)(unsigned)((int)puVar4 + -0x34);
    puVar2 = (undefined8 *)(unsigned)((int)pdVar3 + 0x24);
    *puVar2 = *(undefined8 *)(unsigned)((int)puVar4 + -0x30);
    dVar18 = dVar27;
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),F32LO(dVar22) + fVar10);
  }
  else {
    dVar22 = dVar22 + dVar12;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)((int)puVar2 + -4) = uVar14;
    pdVar3 = (double *)(unsigned)(puVar2 + -1);
    *(int *)(unsigned)pdVar3 = SUB84(dVar22,0);
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),SUB84(dVar27,0));
  }
  else {
    puVar2[-1] = dVar26;
    pdVar3 = (double *)(unsigned)(puVar2 + -2);
    *pdVar3 = dVar18;
    dVar18 = dVar24;
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),F32LO(dVar22) + fVar15);
  }
  else {
    dVar22 = dVar22 + dVar26;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar3 = (double *)(unsigned)((int)pdVar3 + -4);
    *(int *)(unsigned)pdVar3 = SUB84(dVar22,0);
  }
  else {
    pdVar3 = pdVar3 + -1;
    *pdVar3 = dVar18;
  }
  *(undefined4 *)(unsigned)((int)pdVar3 + -4) = uVar11;
  uVar11 = 0xf0000000;
  *(unsigned *)(unsigned)((int)pdVar3 + 0x34) = pdVar1;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)(pdVar3 + 6) = *(undefined4 *)(unsigned)((int)puVar4 + -0x20);
    *(undefined4 *)(unsigned)((int)pdVar3 + 0x2c) = *(undefined4 *)(unsigned)((int)puVar4 + -0x24);
    pdVar3 = pdVar3 + 5;
    *(undefined4 *)(unsigned)pdVar3 = *(undefined4 *)(unsigned)((int)puVar4 + -0x1c);
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)((int)puVar4 + -0x28))
    ;
  }
  else {
    *(undefined8 *)(unsigned)((int)pdVar3 + 0x2c) = *(undefined8 *)(unsigned)((int)puVar4 + -0x20);
    *(undefined8 *)(unsigned)((int)pdVar3 + 0x24) = *(undefined8 *)(unsigned)((int)puVar4 + -0x24);
    pdVar3 = (double *)(unsigned)((int)pdVar3 + 0x1c);
    *pdVar3 = *(double *)(unsigned)((int)puVar4 + -0x1c);
  }
  if (in_FPSCR_PR == '\0') {
    dVar27 = CONCAT44D(fVar25 + F32LO(dVar22),SUB84(dVar27,0));
  }
  else {
    dVar27 = dVar27 + dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar3 = (double *)(unsigned)((int)pdVar3 + -4);
    *(int *)(unsigned)pdVar3 = (int)(D2U(dVar27) >> 0x20);
    dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)((int)puVar4 + -0x2c))
    ;
  }
  else {
    pdVar3 = pdVar3 + -1;
    *pdVar3 = dVar27;
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = F32LO(dVar27) + F32LO(dVar22);
  }
  else {
    fVar10 = SUB84(dVar27 + dVar22,0);
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar3 = (double *)(unsigned)((int)pdVar3 + -4);
    *(float *)(unsigned)pdVar3 = fVar10;
  }
  else {
    pdVar3 = pdVar3 + -1;
    *pdVar3 = dVar24;
  }
  *(undefined4 *)(unsigned)((int)pdVar3 + -4) = uVar11;
  return (int)pdVar3 + 0x1c;
}

__asm__(".globl _FUN_8c25c9d8\n.set _FUN_8c25c9d8, _FUN_8c25c9d8_def\n");
