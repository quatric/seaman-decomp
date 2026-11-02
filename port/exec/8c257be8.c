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
int FUN_8c257be8_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c257be8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 252; for (int i_ = 0; i_ < 252; i_++) z_[i_] = 0; }
  int iVar1;
  double *pdVar2;
  int in_r2 = 0;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  double *pdVar6;
  double *pdVar7;
  undefined8 *puVar8;
  int iVar9;
  byte bVar10;
  uint uVar12;
  double *pdVar13;
  undefined8 *puVar14;
  undefined8 *unaff_r14 = 0;
  undefined8 *puVar15;
  double dVar16;
  float in_fr3 = 0;
  double dVar17;
  double dVar19;
  double in_dr6 = 0;
  double dVar20;
  float fVar22;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar28;
  double dVar27;
  undefined4 uVar29;
  double dVar30;
  undefined4 uVar32;
  undefined8 uVar31;
  double in_xd0 = 0;
  double in_xd4 = 0;
  undefined8 in_xd6 = 0;
  double in_xd10 = 0;
  double dVar33;
  undefined8 in_xd12 = 0;
  double in_xd14 = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  byte bVar11;
  float fVar18;
  float fVar21;
  double dVar23;
  
  puVar8 = ((undefined8 *)(fr0_ - 0x68));
  if (in_FPSCR_SZ == '\0') {
    in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
    dVar30 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0));
    dVar19 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8));
    fVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4);
  }
  else {
    in_xd6 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
    dVar30 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
    dVar19 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4));
    fVar28 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d8);
    in_xd10 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc);
  }
  if (in_FPSCR_PR == '\0') {
    (*(double *)(fr0_ - 0x80)) = CONCAT44D(fVar28,1.0 / fVar28);
  }
  else {
    (*(double *)(fr0_ - 0x80)) = CONCAT44D(fVar28,0x3f800000) / CONCAT44D(fVar28,0x3f800000);
  }
  fVar28 = F32LO(dVar19);
  fVar25 = F32HI(dVar19);
  if (in_FPSCR_SZ == '\0') {
    (*(undefined4 *)(fr0_ + (int)0xffffff90)) = CONCAT44D(fVar28,(*(uint*)((uchar*)((undefined1 *)(fr0_ - 0x74))+4)));
    pdVar2 = (double *)(unsigned)((undefined1 *)(fr0_ - 0x74));
  }
  else {
    (*(undefined4 *)(fr0_ + (int)0xffffff90)) = in_xd10;
    pdVar2 = &(*(double *)(fr0_ - 0x80));
  }
  if (in_FPSCR_PR == '\0') {
    fVar24 = F32HI(dVar30) * F32LO(in_dr6);
    fVar22 = F32LO(dVar30) * F32LO(in_dr6);
    dVar30 = CONCAT44D(1.0 / fVar24,1.0 / fVar22);
    dVar23 = CONCAT44D(fVar24 * F32LO((*(double *)(fr0_ - 0x80))),fVar22 * F32LO((*(double *)(fr0_ - 0x80))));
  }
  else {
    dVar23 = dVar30 * in_dr6 * in_dr6;
    dVar30 = (0.007812501848093234 / dVar23) / dVar23;
    dVar23 = dVar23 * (*(double *)(fr0_ - 0x80)) * (*(double *)(fr0_ - 0x80));
  }
  if (in_FPSCR_SZ == '\0') {
    dVar16 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 100),*(undefined4 *)(unsigned)(ar5 + 0x68));
    in_fr3 = *(float *)(unsigned)(ar5 + 0x6c);
    iVar4 = ar5 + 0x70;
  }
  else {
    dVar16 = *(double *)(unsigned)(ar5 + 100);
    in_xd0 = *(double *)(unsigned)(ar5 + 0x6c);
    iVar4 = ar5 + 0x7c;
  }
  fVar24 = F32HI(dVar30);
  fVar22 = F32LO(dVar30);
  if (in_FPSCR_PR == '\0') {
    fVar18 = 1.0 / in_fr3;
    dVar17 = CONCAT44D(fVar18,in_fr3);
    (*(double *)(fr0_ - 0x30)) = CONCAT44D((F32HI(dVar16) - fVar25) * fVar24 * fVar18,
                                 (F32LO(dVar16) - fVar28) * fVar22 * fVar18);
  }
  else {
    dVar17 = CONCAT44D(0x3f800000,in_fr3) / CONCAT44D(0x3f800000,in_fr3);
    fVar18 = F32HI(dVar17);
    (*(double *)(fr0_ - 0x30)) = ((dVar16 - dVar19) - dVar19) * dVar30 * dVar30 * dVar17 * dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x20)) = CONCAT44D(fVar18,(undefined4)(*(undefined8 *)(fr0_ - 0x20)));
    pdVar6 = (double *)(unsigned)(((undefined1 *)(fr0_ - 0x28)) + 4);
    (*(uint*)((uchar*)((undefined1 *)(fr0_ - 0x28))+4)) = (int)((ulonglong)(*(double *)(fr0_ - 0x30)) >> 0x20);
    dVar16 = CONCAT44D(*(undefined4 *)(unsigned)(iVar4 + -0x2c),*(undefined4 *)(unsigned)(iVar4 + -0x28));
    in_dr6 = (double)(ulonglong)*(uint *)(unsigned)(iVar4 + -0x24);
    iVar4 = iVar4 + -0x20;
  }
  else {
    (*(undefined8 *)(fr0_ - 0x20)) = dVar17;
    *(ulonglong *)(unsigned)((undefined1 *)(fr0_ - 0x28)) = (ulonglong)in_xd0;
    pdVar6 = &(*(double *)(fr0_ - 0x30));
    dVar16 = *(double *)(unsigned)(iVar4 + -0x2c);
    in_xd4 = *(double *)(unsigned)(iVar4 + -0x24);
    in_xd6 = *(undefined8 *)(unsigned)(iVar4 + -0x1c);
    iVar4 = iVar4 + -0x14;
  }
  fVar18 = F32LO(in_dr6);
  if (in_FPSCR_PR == '\0') {
    fVar21 = 1.0 / fVar18;
    dVar20 = CONCAT44D(fVar21,fVar18);
    dVar16 = CONCAT44D((F32HI(dVar16) - fVar25) * fVar24 * fVar21,
                              (F32LO(dVar16) - fVar28) * fVar22 * fVar21);
  }
  else {
    dVar20 = CONCAT44D(0x3f800000,fVar18) / CONCAT44D(0x3f800000,fVar18);
    fVar21 = F32HI(dVar20);
    dVar16 = ((dVar16 - dVar19) - dVar19) * dVar30 * dVar30 * dVar20 * dVar20;
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(unsigned)((int)pdVar6 + -4) = fVar21;
    *(int *)(unsigned)(pdVar6 + -1) = SUB84(dVar16,0);
    pdVar6 = (double *)(unsigned)((int)pdVar6 + -0xc);
    *(int *)(unsigned)pdVar6 = (int)(D2U(dVar16) >> 0x20);
    dVar16 = CONCAT44D(*(undefined4 *)(unsigned)(iVar4 + -0x2c),*(undefined4 *)(unsigned)(iVar4 + -0x28));
    dVar17 = (double)(ulonglong)*(uint *)(unsigned)(iVar4 + -0x24);
    iVar4 = iVar4 + -0x20;
  }
  else {
    pdVar6[-1] = dVar20;
    pdVar6[-2] = in_xd4;
    pdVar6 = pdVar6 + -3;
    *pdVar6 = dVar16;
    dVar16 = *(double *)(unsigned)(iVar4 + -0x2c);
    in_xd0 = *(double *)(unsigned)(iVar4 + -0x24);
    iVar4 = iVar4 + -0x14;
  }
  fVar18 = F32LO(dVar17);
  if (in_FPSCR_PR == '\0') {
    fVar21 = 1.0 / fVar18;
    dVar17 = CONCAT44D(fVar21,fVar18);
    dVar16 = CONCAT44D((F32HI(dVar16) - fVar25) * fVar24 * fVar21,
                              (F32LO(dVar16) - fVar28) * fVar22 * fVar21);
  }
  else {
    dVar17 = CONCAT44D(0x3f800000,fVar18) / CONCAT44D(0x3f800000,fVar18);
    fVar21 = F32HI(dVar17);
    dVar16 = ((dVar16 - dVar19) - dVar19) * dVar30 * dVar30 * dVar17 * dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(unsigned)((int)pdVar6 + -4) = fVar21;
    *(int *)(unsigned)(pdVar6 + -1) = SUB84(dVar16,0);
    pdVar6 = (double *)(unsigned)((int)pdVar6 + -0xc);
    *(int *)(unsigned)pdVar6 = (int)(D2U(dVar16) >> 0x20);
    dVar16 = CONCAT44D(*(undefined4 *)(unsigned)(iVar4 + -0x2c),*(undefined4 *)(unsigned)(iVar4 + -0x28));
    dVar20 = (double)(ulonglong)*(uint *)(unsigned)(iVar4 + -0x24);
    iVar4 = iVar4 + -0x20;
  }
  else {
    pdVar6[-1] = dVar17;
    pdVar6[-2] = in_xd0;
    pdVar6 = pdVar6 + -3;
    *pdVar6 = dVar16;
    dVar16 = *(double *)(unsigned)(iVar4 + -0x2c);
    in_xd4 = *(double *)(unsigned)(iVar4 + -0x24);
    in_xd6 = *(undefined8 *)(unsigned)(iVar4 + -0x1c);
    iVar4 = iVar4 + -0x14;
  }
  fVar18 = F32LO(dVar20);
  if (in_FPSCR_PR == '\0') {
    fVar21 = 1.0 / fVar18;
    dVar20 = CONCAT44D(fVar21,fVar18);
    dVar30 = CONCAT44D((F32HI(dVar16) - fVar25) * fVar24 * fVar21,
                              (F32LO(dVar16) - fVar28) * fVar22 * fVar21);
  }
  else {
    dVar20 = CONCAT44D(0x3f800000,fVar18) / CONCAT44D(0x3f800000,fVar18);
    fVar21 = F32HI(dVar20);
    dVar30 = ((dVar16 - dVar19) - dVar19) * dVar30 * dVar30 * dVar20 * dVar20;
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(unsigned)((int)pdVar6 + -4) = fVar21;
    *(int *)(unsigned)(pdVar6 + -1) = SUB84(dVar30,0);
    pdVar6 = (double *)(unsigned)((int)pdVar6 + -0xc);
    *(int *)(unsigned)pdVar6 = (int)(D2U(dVar30) >> 0x20);
  }
  else {
    pdVar6[-1] = dVar20;
    pdVar6[-2] = in_xd4;
    pdVar6 = pdVar6 + -3;
    *pdVar6 = dVar30;
  }
  puVar5 = (undefined8 *)(unsigned)(iVar4 + -0x10);
  (*(int *)(fr0_ - 0x78)) = 2;
  uVar12 = ar4 >> 1;
  pdVar13 = pdVar6;
  do {
    pdVar7 = pdVar13 + 3;
    puVar14 = puVar5 + 8;
    bVar10 = (((undefined1 *)(unsigned)0x8c271df8))[uVar12];
    uVar3 = 0xe0000000;
    iVar1 = 0;
    iVar9 = 3;
    puVar15 = unaff_r14;
    do {
      bVar11 = (char)bVar10 >> 1;
      if ((bVar10 & 1) != 0) {
        if (in_FPSCR_SZ == '\0') {
          dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,SUB84(dVar19,0));
          pdVar2 = (double *)(unsigned)((int)pdVar2 + 4);
          dVar30 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,*(undefined4 *)(unsigned)((int)pdVar7 + 4));
          dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 1),SUB84(dVar17,0));
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar13,*(undefined4 *)(unsigned)((int)pdVar13 + 4));
          dVar20 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar13 + 1),SUB84(dVar20,0));
          pdVar13 = (double *)(unsigned)((int)pdVar13 + 0xc);
        }
        else {
          dVar16 = *pdVar2;
          pdVar2 = pdVar2 + 1;
          dVar30 = *pdVar7;
          dVar17 = pdVar7[2];
          dVar19 = *pdVar13;
          in_xd4 = pdVar13[1];
          dVar20 = pdVar13[2];
          pdVar13 = pdVar13 + 3;
        }
        fVar28 = F32HI(dVar17);
        if (in_FPSCR_PR == '\0') {
          dVar16 = CONCAT44D(F32HI(dVar16) - fVar28,SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar17;
        }
        uVar26 = (undefined4)(D2U(dVar20) >> 0x20);
        dVar33 = dVar20;
        if (in_FPSCR_SZ == '\0') {
          dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),uVar26);
          dVar33 = in_xd10;
        }
        if (in_FPSCR_PR == '\0') {
          fVar25 = F32LO(dVar16) - fVar28;
          dVar16 = CONCAT44D(F32HI(dVar16) / fVar25,fVar25);
        }
        else {
          dVar16 = (dVar16 - dVar17) / (dVar16 - dVar17);
        }
        dVar27 = in_xd4;
        in_xd10 = dVar19;
        if (in_FPSCR_SZ == '\0') {
          dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),
                                    (int)(D2U(dVar19) >> 0x20));
          dVar27 = CONCAT44D(SUB84(dVar19,0),SUB84((*(double *)(fr0_ - 0x80)),0));
          in_xd10 = dVar33;
        }
        fVar25 = F32HI(dVar30);
        if (in_FPSCR_PR == '\0') {
          fVar22 = F32HI(dVar16);
          dVar19 = CONCAT44D(fVar22,((F32LO(dVar16) - fVar25) * fVar22 + fVar25) *
                                           F32HI(dVar23));
          (*(double *)(fr0_ - 0x80)) = CONCAT44D(((F32HI(dVar27) - F32LO(dVar30)) *
                                        fVar22 + F32LO(dVar30)) * F32LO(dVar23),SUB84(dVar27,0))
          ;
        }
        else {
          dVar16 = (dVar16 - dVar30) * (dVar16 - dVar30);
          dVar19 = (dVar16 + dVar30) * dVar23;
          (*(double *)(fr0_ - 0x80)) = ((dVar27 - dVar30) * dVar16 + dVar30) * dVar23;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar30 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,*(undefined4 *)(unsigned)((int)pdVar2 + 4));
          pdVar2 = pdVar2 + 1;
        }
        else {
          dVar30 = *pdVar2;
          in_xd14 = pdVar2[1];
          pdVar2 = pdVar2 + 2;
        }
        pdVar2 = (double *)(unsigned)((int)pdVar2 + -0xc);
        if (in_FPSCR_PR == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                    F32LO(dVar19) + F32HI(dVar30));
          (*(double *)(fr0_ - 0x80)) = CONCAT44D(F32HI((*(double *)(fr0_ - 0x80))) + F32LO(dVar30),
                                       SUB84((*(double *)(fr0_ - 0x80)),0));
        }
        else {
          dVar19 = dVar19 + dVar30;
          (*(double *)(fr0_ - 0x80)) = (*(double *)(fr0_ - 0x80)) + dVar30;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar17 = CONCAT44D(fVar28,*(undefined4 *)(unsigned)(puVar14 + 2));
          dVar20 = CONCAT44D(uVar26,*(undefined4 *)(unsigned)((int)puVar14 + 0x14));
          dVar30 = CONCAT44D(*(undefined4 *)(unsigned)(puVar5 + 2),*(undefined4 *)(unsigned)((int)puVar5 + 0x14))
          ;
          puVar5 = puVar5 + 3;
        }
        else {
          in_xd6 = puVar14[3];
          dVar30 = (double)puVar5[2];
          in_xd14 = (double)puVar5[3];
          puVar5 = puVar5 + 4;
        }
        puVar5 = puVar5 + -3;
        fVar28 = F32HI(dVar19);
        if (in_FPSCR_PR == '\0') {
          dVar30 = CONCAT44D((F32HI(dVar30) - F32LO(dVar17)) * fVar28
                                    + F32LO(dVar17),
                                    (F32LO(dVar30) - F32LO(dVar20)) * fVar28 + F32LO(dVar20));
        }
        else {
          dVar30 = ((dVar30 - dVar17) - dVar20) * dVar19 * dVar19 + dVar17 + dVar20;
        }
        iVar1 = iVar1 + 1;
        uVar26 = SUB84(dVar19,0);
        uVar32 = (undefined4)(D2U(dVar30) >> 0x20);
        uVar29 = (undefined4)((ulonglong)(*(double *)(fr0_ - 0x80)) >> 0x20);
        pdVar13 = (double *)(unsigned)((int)pdVar13 + -0xc);
        if (iVar1 == 3) {
          if ((char)bVar11 < '\0') {
            if (in_FPSCR_SZ == '\0') {
              *(int *)(unsigned)((int)puVar8 + 0x14) = SUB84(dVar30,0);
              *(undefined4 *)(unsigned)(puVar8 + 2) = uVar32;
              *(int *)(unsigned)((int)puVar8 + 0xc) = SUB84((*(double *)(fr0_ - 0x80)),0);
              *(undefined4 *)(unsigned)(puVar8 + 1) = uVar29;
              pdVar7 = (double *)(unsigned)((int)puVar8 + 4);
              *(undefined4 *)(unsigned)pdVar7 = uVar26;
            }
            else {
              puVar8[2] = in_xd14;
              puVar8[1] = dVar30;
              *puVar8 = in_xd12;
              puVar8[-1] = (*(double *)(fr0_ - 0x80));
              pdVar7 = (double *)(unsigned)(puVar8 + -2);
              *pdVar7 = in_xd10;
            }
            puVar8 = (undefined8 *)(unsigned)((int)pdVar7 + -4);
            puVar15 = puVar8;
            goto LAB_8c257d74;
          }
          uVar3 = 0xf0000000;
        }
        dVar19 = CONCAT44D(0x3f800000,uVar26);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(in_r2 + 0x18) = 0x3f800000;
          *(int *)(unsigned)(in_r2 + 0x14) = SUB84(dVar30,0);
          *(undefined4 *)(unsigned)(in_r2 + 0x10) = uVar32;
          *(int *)(unsigned)(in_r2 + 0xc) = SUB84((*(double *)(fr0_ - 0x80)),0);
          *(undefined4 *)(unsigned)(in_r2 + 8) = uVar29;
          pdVar7 = (double *)(unsigned)(in_r2 + 4);
          *(undefined4 *)(unsigned)pdVar7 = uVar26;
        }
        else {
          *(double *)(unsigned)(in_r2 + 0x14) = dVar19;
          *(double *)(unsigned)(in_r2 + 0xc) = in_xd14;
          *(double *)(unsigned)(in_r2 + 4) = dVar30;
          *(undefined8 *)(unsigned)(in_r2 + -4) = in_xd12;
          *(double *)(unsigned)(in_r2 + -0xc) = (*(double *)(fr0_ - 0x80));
          pdVar7 = (double *)(unsigned)(in_r2 + -0x14);
          *pdVar7 = in_xd10;
        }
        *(undefined4 *)(unsigned)((int)pdVar7 + -4) = uVar3;
        in_r2 = (int)pdVar7 + 0x1c;
      }
LAB_8c257d74:
      pdVar7 = pdVar13;
      uVar26 = SUB84(dVar19,0);
      bVar10 = (char)bVar10 >> 2;
      puVar14 = puVar5;
      unaff_r14 = puVar15;
      if ((bVar11 & 1) != 0) {
        iVar1 = iVar1 + 1;
        if (iVar1 == 3) {
          unaff_r14 = puVar5;
          if ((char)bVar10 < '\0') goto LAB_8c257db2;
          uVar3 = 0xf0000000;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar26 = *(undefined4 *)(unsigned)((int)puVar5 + 4);
          (*(double *)(fr0_ - 0x80)) = CONCAT44D(*(undefined4 *)(unsigned)(puVar5 + 1),SUB84((*(double *)(fr0_ - 0x80)),0));
          dVar20 = (double)(ulonglong)*(uint *)(unsigned)((int)puVar5 + 0xc);
          uVar31 = CONCAT44(*(undefined4 *)(unsigned)(puVar5 + 2),*(undefined4 *)(unsigned)((int)puVar5 + 0x14));
          puVar5 = puVar5 + 3;
        }
        else {
          in_xd10 = *(double *)(unsigned)((int)puVar5 + 4);
          (*(double *)(fr0_ - 0x80)) = *(double *)(unsigned)((int)puVar5 + 0xc);
          in_xd6 = *(undefined8 *)(unsigned)((int)puVar5 + 0x14);
          uVar31 = *(undefined8 *)(unsigned)((int)puVar5 + 0x1c);
          in_xd14 = *(double *)(unsigned)((int)puVar5 + 0x24);
          puVar5 = (undefined8 *)(unsigned)((int)puVar5 + 0x2c);
        }
        dVar19 = CONCAT44D(0x3f800000,uVar26);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(in_r2 + 0x18) = 0x3f800000;
          *(int *)(unsigned)(in_r2 + 0x14) = (int)uVar31;
          *(int *)(unsigned)(in_r2 + 0x10) = (int)((ulonglong)uVar31 >> 0x20);
          *(int *)(unsigned)(in_r2 + 0xc) = SUB84(dVar20,0);
          *(int *)(unsigned)(in_r2 + 8) = (int)((ulonglong)(*(double *)(fr0_ - 0x80)) >> 0x20);
          pdVar13 = (double *)(unsigned)(in_r2 + 4);
          *(undefined4 *)(unsigned)pdVar13 = uVar26;
        }
        else {
          *(double *)(unsigned)(in_r2 + 0x14) = dVar19;
          *(double *)(unsigned)(in_r2 + 0xc) = in_xd14;
          *(undefined8 *)(unsigned)(in_r2 + 4) = uVar31;
          *(undefined8 *)(unsigned)(in_r2 + -4) = in_xd6;
          *(double *)(unsigned)(in_r2 + -0xc) = (*(double *)(fr0_ - 0x80));
          pdVar13 = (double *)(unsigned)(in_r2 + -0x14);
          *pdVar13 = in_xd10;
        }
        *(undefined4 *)(unsigned)((int)pdVar13 + -4) = uVar3;
        in_r2 = (int)pdVar13 + 0x1c;
        puVar14 = puVar5 + -3;
        unaff_r14 = puVar15;
      }
LAB_8c257db2:
      uVar26 = SUB84(dVar19,0);
      pdVar13 = (double *)(unsigned)((int)pdVar7 + 0xc);
      iVar9 = iVar9 + -1;
      puVar5 = puVar14 + 4;
      puVar15 = unaff_r14;
    } while (iVar9 != 0);
    if ((char)bVar10 < '\0') {
      if (in_FPSCR_SZ == '\0') {
        uVar26 = *(undefined4 *)(unsigned)((int)unaff_r14 + 4);
        (*(double *)(fr0_ - 0x80)) = CONCAT44D(*(undefined4 *)(unsigned)(unaff_r14 + 1),
                                     *(undefined4 *)(unsigned)((int)unaff_r14 + 0xc));
        uVar31 = CONCAT44(*(undefined4 *)(unsigned)(unaff_r14 + 2),*(undefined4 *)(unsigned)((int)unaff_r14 + 0x14));
        unaff_r14 = unaff_r14 + 3;
      }
      else {
        in_xd10 = *(double *)(unsigned)((int)unaff_r14 + 4);
        (*(double *)(fr0_ - 0x80)) = *(double *)(unsigned)((int)unaff_r14 + 0xc);
        in_xd12 = *(undefined8 *)(unsigned)((int)unaff_r14 + 0x14);
        uVar31 = *(undefined8 *)(unsigned)((int)unaff_r14 + 0x1c);
        in_xd14 = *(double *)(unsigned)((int)unaff_r14 + 0x24);
        unaff_r14 = (undefined8 *)(unsigned)((int)unaff_r14 + 0x2c);
      }
      dVar19 = CONCAT44D(0x3f800000,uVar26);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(in_r2 + 0x18) = 0x3f800000;
        *(int *)(unsigned)(in_r2 + 0x14) = (int)uVar31;
        *(int *)(unsigned)(in_r2 + 0x10) = (int)((ulonglong)uVar31 >> 0x20);
        *(int *)(unsigned)(in_r2 + 0xc) = SUB84((*(double *)(fr0_ - 0x80)),0);
        *(int *)(unsigned)(in_r2 + 8) = (int)((ulonglong)(*(double *)(fr0_ - 0x80)) >> 0x20);
        pdVar13 = (double *)(unsigned)(in_r2 + 4);
        *(undefined4 *)(unsigned)pdVar13 = uVar26;
      }
      else {
        *(double *)(unsigned)(in_r2 + 0x14) = dVar19;
        *(double *)(unsigned)(in_r2 + 0xc) = in_xd14;
        *(undefined8 *)(unsigned)(in_r2 + 4) = uVar31;
        *(undefined8 *)(unsigned)(in_r2 + -4) = in_xd12;
        *(double *)(unsigned)(in_r2 + -0xc) = (*(double *)(fr0_ - 0x80));
        pdVar13 = (double *)(unsigned)(in_r2 + -0x14);
        *pdVar13 = in_xd10;
      }
      *(undefined4 *)(unsigned)((int)pdVar13 + -4) = 0xf0000000;
      in_r2 = (int)pdVar13 + 0x1c;
    }
    (*(int *)(fr0_ - 0x78)) = (*(int *)(fr0_ - 0x78)) + -1;
    if ((*(int *)(fr0_ - 0x78)) == 0) {
      return iVar1;
    }
    puVar5 = (undefined8 *)(unsigned)(iVar4 + 0x10);
    pdVar13 = (double *)(unsigned)((int)pdVar6 + 0xc);
    uVar12 = ar4 & 7;
  } while( true );
}

__asm__(".globl _FUN_8c257be8\n.set _FUN_8c257be8, _FUN_8c257be8_def\n");
