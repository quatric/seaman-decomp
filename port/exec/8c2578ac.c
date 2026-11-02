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
undefined4 FUN_8c2578ac_def(double *ar4,int ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2578ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 264; for (int i_ = 0; i_ < 264; i_++) z_[i_] = 0; }
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int in_r2 = 0;
  byte bVar7;
  short *psVar8;
  double *pdVar9;
  undefined4 unaff_r8 = 0;
  double *pdVar10;
  undefined4 unaff_r9 = 0;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined4 in_fr1 = 0;
  float fVar13;
  double dVar15;
  float fVar18;
  float fVar19;
  double dVar16;
  float fVar20;
  double dVar17;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  float fVar27;
  double dVar25;
  double dVar26;
  undefined4 in_fr5 = 0;
  float fVar28;
  float fVar29;
  double dVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  double in_dr6 = 0;
  float fVar34;
  double dVar35;
  float fVar36;
  float fVar37;
  double in_dr10 = 0;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  undefined8 in_dr12 = 0;
  double dVar41;
  undefined8 in_dr14 = 0;
  double dVar42;
  undefined4 uVar43;
  double in_xd0 = 0;
  double in_xd2 = 0;
  undefined8 uVar44;
  double dVar45;
  double in_xd4 = 0;
  double dVar46;
  double in_xd6 = 0;
  double in_xd8 = 0;
  double dVar47;
  double in_xd10 = 0;
  float fVar48;
  double in_xd12 = 0;
  double dVar49;
  double in_xd14 = 0;
  double dVar50;
  float fVar51;
  bool bVar52;
  bool bVar53;
  bool bVar54;
  bool bVar55;
  bool bVar56;
  bool bVar57;
  bool bVar58;
  bool bVar59;
  bool bVar60;
  bool bVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  bool bVar65;
  bool bVar66;
  bool bVar67;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  float fVar14;
  
  uVar4 = 0xf0000000;
  uVar6 = 0xe0000000;
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x8)) = CONCAT44D((int)in_dr14,(undefined4)(*(undefined8 *)(fr0_ - 0x8)));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x8))+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar11 = &(*(undefined8 *)(fr0_ - 0x10));
    (*(undefined8 *)(fr0_ - 0x10)) = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar11 = (undefined8 *)(unsigned)((undefined1 *)(fr0_ - 0x20));
    (*(undefined8 *)(fr0_ - 0x8)) = in_xd14;
    (*(undefined8 *)(fr0_ - 0x10)) = in_dr14;
  }
  *(undefined4 *)(unsigned)((int)puVar11 + -4) = unaff_r9;
  *(undefined4 *)(unsigned)((int)puVar11 + -8) = unaff_r8;
  psVar8 = (short *)(unsigned)(ar5 * 0x14 + *(int *)(unsigned)((int)ar4 + 0x1c));
  if (in_FPSCR_SZ == '\0') {
    dVar45 = CONCAT44D((*(undefined1 *)(unsigned)0x8c257990),in_fr5);
  }
  else {
    dVar45 = CONCAT44D((*(uint *)(unsigned)0x8c257994),(*(undefined1 *)(unsigned)0x8c257990));
  }
  if (in_FPSCR_PR == '\0') {
    dVar15 = CONCAT44D((float)(int)psVar8[4],in_fr1);
  }
  else {
    dVar15 = (double)(int)psVar8[4];
  }
  fVar19 = F32HI(dVar45);
  if (in_FPSCR_PR == '\0') {
    fVar18 = F32HI(dVar15) * fVar19;
  }
  else {
    fVar18 = (float)((ulonglong)(dVar15 * dVar45) >> 0x20);
  }
  if (in_FPSCR_PR == '\0') {
    dVar15 = CONCAT44D(fVar18,(float)(int)psVar8[5] * fVar19);
  }
  else {
    dVar15 = CONCAT44D(fVar18,(float)(int)psVar8[5]) * dVar45;
  }
  if (in_FPSCR_PR == '\0') {
    fVar18 = (float)(int)psVar8[6] * fVar19;
  }
  else {
    fVar18 = (float)((ulonglong)((double)(int)psVar8[6] * dVar45) >> 0x20);
  }
  if (in_FPSCR_PR == '\0') {
    dVar24 = CONCAT44D(fVar18,(float)(int)psVar8[7] * fVar19);
  }
  else {
    dVar24 = CONCAT44D(fVar18,(float)(int)psVar8[7]) * dVar45;
  }
  dVar16 = dVar15;
  dVar50 = dVar24;
  dVar30 = dVar45;
  if (((ar6 & 4) != 0) && (dVar16 = dVar24, dVar50 = dVar15, dVar30 = dVar15, in_FPSCR_SZ == '\0'))
  {
    uVar23 = (undefined4)(D2U(dVar15) >> 0x20);
    dVar16 = CONCAT44D((int)(D2U(dVar24) >> 0x20),SUB84(dVar15,0));
    dVar50 = CONCAT44D(uVar23,SUB84(dVar24,0));
    dVar30 = CONCAT44D(uVar23,SUB84(dVar45,0));
  }
  dVar24 = dVar30;
  dVar45 = in_xd0;
  dVar15 = in_xd2;
  if (((ar6 & 8) != 0) && (dVar24 = in_xd0, dVar45 = in_xd2, dVar15 = in_xd0, in_FPSCR_SZ == '\0'))
  {
    uVar23 = SUB84(dVar16,0);
    dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),SUB84(dVar50,0));
    dVar50 = CONCAT44D((int)(D2U(dVar50) >> 0x20),uVar23);
    dVar24 = CONCAT44D(uVar23,SUB84(dVar30,0));
    dVar45 = in_xd0;
    dVar15 = in_xd2;
  }
  sVar1 = *psVar8;
  sVar2 = psVar8[1];
  sVar3 = psVar8[3];
  iVar5 = -(int)psVar8[2];
  uVar23 = (undefined4)(D2U(dVar16) >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    pdVar10 = (double *)(unsigned)((int)puVar11 + -0xc);
    *(undefined4 *)(unsigned)pdVar10 = uVar23;
  }
  else {
    pdVar10 = (double *)(unsigned)((int)puVar11 + -0x10);
    *pdVar10 = dVar16;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
    *(int *)(unsigned)pdVar10 = SUB84(dVar16,0);
  }
  else {
    pdVar10 = pdVar10 + -1;
    *pdVar10 = dVar45;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
    *(undefined4 *)(unsigned)pdVar10 = uVar23;
  }
  else {
    pdVar10 = pdVar10 + -1;
    *pdVar10 = dVar16;
  }
  uVar23 = (undefined4)(D2U(dVar50) >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)pdVar10 + -4) = SUB84(dVar50,0);
    *(undefined4 *)(unsigned)(pdVar10 + -1) = uVar23;
    pdVar10 = (double *)(unsigned)((int)pdVar10 + -0xc);
    *(int *)(unsigned)pdVar10 = SUB84(dVar16,0);
  }
  else {
    pdVar10[-1] = dVar15;
    pdVar10[-2] = dVar50;
    pdVar10 = pdVar10 + -3;
    *pdVar10 = dVar45;
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = (float)iVar5;
  }
  else {
    fVar19 = (float)((ulonglong)(double)iVar5 >> 0x20);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)((int)pdVar10 + -4) = uVar23;
    pdVar10 = pdVar10 + -1;
    *(int *)(unsigned)pdVar10 = SUB84(dVar50,0);
  }
  else {
    pdVar10[-1] = dVar50;
    pdVar10 = pdVar10 + -2;
    *pdVar10 = dVar15;
  }
  fVar18 = (float)-(int)sVar3;
  if (in_FPSCR_SZ == '\0') {
    dVar24 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0xc),SUB84(dVar24,0));
  }
  else {
    dVar24 = *(double *)(unsigned)((int)ar4 + 0xc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar27 = (float)(sVar1 + iVar5);
  }
  else {
    fVar27 = (float)((ulonglong)(double)(sVar1 + iVar5) >> 0x20);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 2));
  }
  else {
    in_xd4 = ar4[2];
  }
  fVar21 = (float)((int)sVar2 + -(int)sVar3);
  fVar28 = F32HI(dVar24);
  fVar37 = F32LO(dVar24);
  if (in_FPSCR_PR == '\0') {
    dVar16 = CONCAT44D(fVar19 * fVar28,fVar18 * fVar37);
    dVar24 = CONCAT44D(fVar27 * fVar28,fVar21 * fVar37);
  }
  else {
    dVar16 = CONCAT44D(fVar19,fVar18) * dVar24 * dVar24;
    dVar24 = CONCAT44D(fVar27,fVar21) * dVar24 * dVar24;
  }
  uVar23 = (undefined4)(D2U(dVar16) >> 0x20);
  fVar19 = F32LO(dVar24);
  uVar33 = (undefined4)(D2U(dVar24) >> 0x20);
  dVar50 = in_xd14;
  if ((ar6 & 1) == 0) {
    dVar30 = dVar16;
    dVar42 = dVar24;
    dVar41 = dVar24;
    dVar46 = dVar15;
    dVar47 = dVar45;
    dVar49 = dVar15;
    if (in_FPSCR_SZ == '\0') {
      dVar30 = CONCAT44D(uVar23,fVar19);
      dVar42 = CONCAT44D(uVar33,SUB84(dVar16,0));
      dVar46 = in_xd4;
      dVar47 = in_xd8;
      dVar49 = in_xd12;
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      fVar18 = ((float)(*(uint *)(unsigned)((int)ar4 + 0x14) & 0xffff) * 6.2831855) / 65536.0;
      fVar27 = (float)sin(fVar18);
      fVar18 = (float)cos(fVar18);
      in_dr10 = CONCAT44D((float)fVar27,(float)fVar18);
    }
    dVar50 = dVar24;
    dVar47 = dVar24;
    dVar30 = dVar16;
    if (in_FPSCR_SZ == '\0') {
      in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),SUB84(dVar16,0));
      dVar16 = CONCAT44D(uVar23,uVar23);
      dVar50 = CONCAT44D(uVar33,uVar33);
      dVar47 = in_xd8;
      dVar30 = dVar45;
      dVar45 = in_xd6;
    }
    in_xd6 = dVar45;
    dVar45 = dVar30;
    fVar18 = F32LO(in_dr10);
    fVar27 = F32HI(in_dr10);
    if (in_FPSCR_PR == '\0') {
      dVar16 = CONCAT44D(F32HI(dVar16) * fVar18,F32LO(dVar16) * fVar27
                               );
      dVar35 = CONCAT44D(F32HI(dVar50) * fVar18,F32LO(dVar50) * fVar27
                               );
    }
    else {
      dVar16 = dVar16 * in_dr10 * in_dr10;
      dVar35 = dVar50 * in_dr10 * in_dr10;
    }
    dVar30 = in_xd6;
    dVar50 = dVar15;
    if (in_FPSCR_SZ == '\0') {
      dVar30 = CONCAT44D(SUB84(in_dr6,0),fVar19);
      dVar50 = in_xd14;
    }
    if (in_FPSCR_PR == '\0') {
      in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),F32LO(in_dr6) * fVar27);
      dVar24 = CONCAT44D(uVar33,fVar19 * fVar27);
      dVar42 = CONCAT44D(F32HI(dVar30) * fVar18,F32LO(dVar30) * fVar18
                               );
    }
    else {
      in_dr6 = in_dr6 * in_dr10;
      dVar24 = dVar24 * in_dr10;
      dVar42 = dVar30 * in_dr10 * in_dr10;
    }
    fVar19 = F32HI(dVar16);
    dVar30 = dVar16;
    if (in_FPSCR_SZ == '\0') {
      dVar30 = CONCAT44D(fVar19,fVar37);
    }
    if (in_FPSCR_PR == '\0') {
      dVar30 = CONCAT44D(F32HI(dVar30) - F32LO(dVar24),SUB84(dVar30,0)
                               );
    }
    else {
      dVar30 = dVar30 - dVar24;
    }
    dVar46 = dVar45;
    if (in_FPSCR_SZ == '\0') {
      dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),SUB84(dVar16,0));
      dVar46 = in_xd4;
    }
    fVar18 = F32HI(dVar42);
    if (in_FPSCR_PR == '\0') {
      dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),F32LO(dVar30) + F32LO(dVar42));
      dVar16 = CONCAT44D(fVar19 - F32LO(in_dr6),F32LO(dVar16) + fVar18);
    }
    else {
      dVar30 = dVar30 + dVar42;
      dVar16 = (dVar16 - in_dr6) + dVar42;
    }
    fVar19 = F32HI(dVar35);
    dVar41 = dVar35;
    if (in_FPSCR_SZ == '\0') {
      dVar41 = CONCAT44D(fVar19,(int)in_dr12);
    }
    if (in_FPSCR_PR == '\0') {
      dVar41 = CONCAT44D(F32HI(dVar41) - F32LO(dVar24),SUB84(dVar41,0)
                               );
    }
    else {
      dVar41 = dVar41 - dVar24;
    }
    dVar49 = dVar47;
    if (in_FPSCR_SZ == '\0') {
      dVar41 = CONCAT44D((int)(D2U(dVar41) >> 0x20),SUB84(dVar35,0));
      dVar49 = in_xd12;
    }
    if (in_FPSCR_PR == '\0') {
      dVar41 = CONCAT44D((int)(D2U(dVar41) >> 0x20),F32LO(dVar41) + F32LO(dVar42));
      dVar42 = CONCAT44D(fVar19 - F32LO(in_dr6),F32LO(dVar35) + fVar18);
    }
    else {
      dVar41 = dVar41 + dVar42;
      dVar42 = (dVar35 - in_dr6) + dVar42;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),*(undefined4 *)(unsigned)ar4);
    in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(unsigned)((int)ar4 + 4));
    pdVar9 = ar4 + 1;
  }
  else {
    dVar15 = *ar4;
    in_xd6 = ar4[1];
    pdVar9 = ar4 + 2;
  }
  fVar19 = F32LO(in_dr6);
  if (in_FPSCR_PR == '\0') {
    dVar16 = CONCAT44D(F32HI(dVar16) + F32LO(dVar24),
                              F32LO(dVar16) + fVar19);
  }
  else {
    dVar16 = dVar16 + dVar24 + in_dr6;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar24 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar24,0));
  }
  else {
    dVar24 = *pdVar9;
  }
  fVar18 = F32LO(dVar24);
  if (in_FPSCR_PR == '\0') {
    dVar30 = CONCAT44D(F32HI(dVar30) + fVar18,F32LO(dVar30) + fVar19);
  }
  else {
    dVar30 = dVar30 + dVar24 + in_dr6;
  }
  fVar27 = F32HI(dVar24);
  dVar35 = dVar24;
  if (in_FPSCR_SZ == '\0') {
    dVar35 = CONCAT44D(fVar27,fVar19);
  }
  if (in_FPSCR_PR == '\0') {
    dVar42 = CONCAT44D(F32HI(dVar42) + fVar18,
                              F32LO(dVar42) + F32LO(dVar35));
  }
  else {
    dVar42 = dVar42 + dVar24 + dVar35;
  }
  dVar17 = dVar24;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = CONCAT44D(fVar27,SUB84(in_dr10,0));
  }
  if (in_FPSCR_PR == '\0') {
    dVar41 = CONCAT44D(F32HI(dVar41) + fVar18,
                              F32LO(dVar41) + F32LO(dVar35));
  }
  else {
    dVar41 = dVar41 + dVar24 + dVar35;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),*(undefined4 *)(unsigned)0x8c4aa4d8);
    dVar24 = CONCAT44D(fVar27,*(undefined4 *)(unsigned)0x8c4aa4d4);
  }
  else {
    in_xd10 = *(undefined4 *)(unsigned)0x8c4aa4d8;
    dVar50 = *(undefined4 *)(unsigned)0x8c4aa4d4;
  }
                    
  fVar21 = F32LO(dVar45);
  fVar37 = F32HI(dVar45);
  fVar28 = F32HI(dVar15);
  fVar29 = F32LO(dVar46);
  fVar31 = F32HI(dVar46);
  fVar34 = F32HI(in_xd6);
  fVar36 = F32LO(dVar47);
  fVar40 = F32HI(dVar47);
  fVar48 = F32HI(in_xd10);
  fVar19 = F32LO(dVar49);
  fVar18 = F32HI(dVar49);
  fVar51 = F32HI(dVar50);
  if (in_FPSCR_PR == '\0') {
    fVar14 = F32LO(dVar16);
    fVar20 = F32HI(dVar16);
    fVar13 = fVar19 * fVar27;
    fVar39 = fVar18 * fVar27;
    fVar27 = fVar28 * fVar14 + fVar34 * fVar20 + fVar48 * 1.0 + fVar51 * fVar27;
    fVar13 = fVar21 * fVar14 + fVar29 * fVar20 + fVar36 * 1.0 + fVar13;
    fVar13 = fVar37 * fVar14 + fVar31 * fVar20 + fVar40 * 1.0 + fVar39;
  }
  if (in_FPSCR_PR == '\0') {
    dVar25 = CONCAT44D(fVar27,1.0 / fVar27);
    bVar52 = SUB84(dVar17,0) < fVar27;
    bVar53 = fVar27 < SUB84(dVar24,0);
  }
  else {
    dVar25 = CONCAT44D(fVar27,0x3f800000) / CONCAT44D(fVar27,0x3f800000);
    bVar52 = dVar17 < dVar25;
    bVar53 = dVar25 < dVar24;
  }
  dVar26 = dVar15;
  if (in_FPSCR_SZ == '\0') {
    dVar26 = CONCAT44D(SUB84(dVar25,0),SUB84(dVar25,0));
  }
  fVar27 = F32HI(dVar35);
                    
  if (in_FPSCR_PR == '\0') {
    fVar14 = F32LO(dVar30);
    fVar20 = F32HI(dVar30);
    fVar13 = fVar19 * fVar27;
    fVar39 = fVar18 * fVar27;
    fVar27 = fVar28 * fVar14 + fVar34 * fVar20 + fVar48 * 1.0 + fVar51 * fVar27;
    fVar28 = fVar21 * fVar14 + fVar29 * fVar20 + fVar36 * 1.0 + fVar13;
    fVar28 = fVar37 * fVar14 + fVar31 * fVar20 + fVar40 * 1.0 + fVar39;
  }
  if (in_FPSCR_PR == '\0') {
    dVar35 = CONCAT44D(fVar27,1.0 / fVar27);
    bVar54 = SUB84(dVar17,0) < fVar27;
  }
  else {
    dVar35 = CONCAT44D(fVar27,0x3f800000) / CONCAT44D(fVar27,0x3f800000);
    fVar27 = F32HI(dVar35);
    bVar54 = dVar17 < dVar35;
  }
  if (in_FPSCR_PR == '\0') {
    bVar55 = fVar27 < SUB84(dVar24,0);
  }
  else {
    bVar55 = dVar35 < dVar24;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),*(undefined4 *)(unsigned)0x8c4aa4d8);
    dVar35 = CONCAT44D(SUB84(dVar35,0),*(undefined4 *)(unsigned)0x8c4aa4d4);
    dVar25 = in_xd6;
  }
  else {
    dVar15 = *(undefined4 *)(unsigned)0x8c4aa4d8;
    dVar25 = *(undefined4 *)(unsigned)0x8c4aa4d4;
    dVar35 = in_xd6;
  }
  fVar27 = F32HI(dVar17);
                    
  fVar28 = F32HI(dVar15);
  fVar34 = F32HI(dVar25);
  if (in_FPSCR_PR == '\0') {
    fVar14 = F32LO(dVar42);
    fVar20 = F32HI(dVar42);
    fVar13 = fVar19 * fVar27;
    fVar39 = fVar18 * fVar27;
    fVar27 = fVar28 * fVar14 + fVar34 * fVar20 + fVar48 * 1.0 + fVar51 * fVar27;
    fVar13 = fVar21 * fVar14 + fVar29 * fVar20 + fVar36 * 1.0 + fVar13;
    fVar13 = fVar37 * fVar14 + fVar31 * fVar20 + fVar40 * 1.0 + fVar39;
  }
  fVar13 = F32LO(dVar26);
  if (in_FPSCR_PR == '\0') {
    dVar15 = CONCAT44D(fVar27,1.0 / fVar27);
    bVar56 = fVar13 < fVar27;
  }
  else {
    dVar15 = CONCAT44D(fVar27,0x3f800000) / CONCAT44D(fVar27,0x3f800000);
    fVar27 = F32HI(dVar15);
    bVar56 = dVar26 < dVar15;
  }
  if (in_FPSCR_PR == '\0') {
    bVar57 = fVar27 < SUB84(dVar35,0);
  }
  else {
    bVar57 = dVar15 < dVar35;
  }
  if (in_FPSCR_SZ == '\0') {
    in_xd10 = CONCAT44D(SUB84(dVar15,0),SUB84(dVar15,0));
  }
  fVar27 = F32HI(dVar24);
                    
  if (in_FPSCR_PR == '\0') {
    fVar39 = F32LO(dVar41);
    fVar14 = F32HI(dVar41);
    fVar19 = fVar19 * fVar27;
    fVar18 = fVar18 * fVar27;
    fVar27 = fVar28 * fVar39 + fVar34 * fVar14 + fVar48 * 1.0 + fVar51 * fVar27;
    fVar19 = fVar21 * fVar39 + fVar29 * fVar14 + fVar36 * 1.0 + fVar19;
    fVar19 = fVar37 * fVar39 + fVar31 * fVar14 + fVar40 * 1.0 + fVar18;
  }
  if (in_FPSCR_PR == '\0') {
    dVar15 = CONCAT44D(fVar27,1.0 / fVar27);
    bVar58 = fVar13 < fVar27;
  }
  else {
    dVar15 = CONCAT44D(fVar27,0x3f800000) / CONCAT44D(fVar27,0x3f800000);
    fVar27 = F32HI(dVar15);
    bVar58 = dVar26 < dVar15;
  }
  if (in_FPSCR_PR == '\0') {
    bVar59 = fVar27 < SUB84(dVar35,0);
  }
  else {
    bVar59 = dVar15 < dVar35;
  }
  bVar7 = ((bVar53 << 1 | bVar55) << 1 | bVar57) << 1 | bVar59;
  dVar24 = dVar50;
  if (in_FPSCR_SZ == '\0') {
    dVar24 = CONCAT44D(SUB84(dVar15,0),SUB84(dVar15,0));
  }
  if (((byte)(((bVar52 << 1 | bVar54) << 1 | bVar56) << 1 | bVar58) == 0xf) || (bVar7 == 0xf)) {
    uVar6 = 0;
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      fVar13 = *(undefined4 *)(unsigned)0x8c4aa4a8;
      dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),fVar13);
      dVar35 = CONCAT44D((int)(D2U(dVar35) >> 0x20),fVar13);
      in_xd10 = CONCAT44D((int)((ulonglong)in_xd10 >> 0x20),*(undefined4 *)(unsigned)0x8c4aa4dc);
      dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),*(undefined4 *)(unsigned)0x8c4aa4e0);
    }
    else {
      dVar50 = *(undefined4 *)(unsigned)0x8c4aa4e0;
    }
    if (in_FPSCR_PR == '\0') {
      dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),fVar13 * F32LO(in_xd10));
      dVar35 = CONCAT44D((int)(D2U(dVar35) >> 0x20),F32LO(dVar35) * F32LO(dVar24));
    }
    else {
      dVar26 = dVar26 * in_xd10;
      dVar35 = dVar35 * dVar24;
    }
    if (in_FPSCR_SZ == '\0') {
      in_xd10 = CONCAT44D((int)((ulonglong)in_xd10 >> 0x20),((undefined1 *)(unsigned)3)[0x8c4aa4a8]);
      dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),((undefined1 *)(unsigned)4)[0x8c4aa4a8]);
    }
    else {
      dVar50 = *(double *)(unsigned)(0x8c4aa4a8 + 5);
    }
    fVar18 = F32HI(dVar26);
    fVar19 = F32LO(dVar26);
    fVar27 = F32LO(dVar35);
    fVar21 = F32HI(dVar35);
    fVar37 = F32LO(in_xd10);
    fVar29 = F32LO(dVar24);
    fVar28 = F32HI(in_xd10);
    fVar31 = F32HI(dVar24);
    if (in_FPSCR_PR == '\0') {
      dVar17 = CONCAT44D(F32HI(dVar16) * fVar18 * fVar19 + fVar37,
                                F32LO(dVar16) * fVar18 * fVar27 + fVar29);
      dVar16 = CONCAT44D(F32HI(dVar30) * fVar21 * fVar19 + fVar37,
                                F32LO(dVar30) * fVar21 * fVar27 + fVar29);
      dVar15 = CONCAT44D(F32HI(dVar42) * fVar28 * fVar19 + fVar37,
                                F32LO(dVar42) * fVar28 * fVar27 + fVar29);
      dVar30 = CONCAT44D(F32HI(dVar41) * fVar31 * fVar19 + fVar37,
                                F32LO(dVar41) * fVar31 * fVar27 + fVar29);
    }
    else {
      dVar17 = dVar16 * dVar26 * dVar26 * dVar26 * dVar35 + in_xd10 + dVar24;
      dVar16 = dVar30 * dVar35 * dVar35 * dVar26 * dVar35 + in_xd10 + dVar24;
      dVar15 = dVar42 * in_xd10 * in_xd10 * dVar26 * dVar35 + in_xd10 + dVar24;
      dVar30 = dVar41 * dVar24 * dVar24 * dVar26 * dVar35 + in_xd10 + dVar24;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar24 = CONCAT44D(fVar31,*(undefined4 *)(unsigned)0x8c4aa4c4);
      dVar35 = CONCAT44D(fVar21,*(undefined4 *)(unsigned)((unsigned)0x8c4aa4c4 + 4));
      in_xd10 = CONCAT44D(fVar28,*(undefined4 *)(unsigned)(0x8c4aa4c4 + 1));
      dVar26 = CONCAT44D(fVar18,*(undefined4 *)(unsigned)((unsigned)0x8c4aa4c4 + 0xc));
    }
    else {
      dVar50 = *(undefined4 *)(unsigned)0x8c4aa4c4;
    }
    fVar19 = F32LO(dVar17);
    fVar18 = F32LO(dVar26);
    if (in_FPSCR_PR == '\0') {
      bVar52 = fVar18 < fVar19;
    }
    else {
      bVar52 = dVar26 < dVar17;
    }
    fVar27 = F32LO(dVar35);
    if (in_FPSCR_PR == '\0') {
      bVar53 = fVar19 < fVar27;
    }
    else {
      bVar53 = dVar17 < dVar35;
    }
    fVar21 = F32HI(dVar17);
    fVar37 = F32LO(in_xd10);
    if (in_FPSCR_PR == '\0') {
      bVar54 = fVar37 < fVar21;
    }
    else {
      bVar54 = in_xd10 < dVar17;
    }
    fVar28 = F32LO(dVar24);
    if (in_FPSCR_PR == '\0') {
      bVar55 = fVar21 < fVar28;
    }
    else {
      bVar55 = dVar17 < dVar24;
    }
    fVar29 = F32LO(dVar16);
    if (in_FPSCR_PR == '\0') {
      bVar56 = fVar18 < fVar29;
    }
    else {
      bVar56 = dVar26 < dVar16;
    }
    if (in_FPSCR_PR == '\0') {
      bVar57 = fVar29 < fVar27;
    }
    else {
      bVar57 = dVar16 < dVar35;
    }
    fVar31 = F32HI(dVar16);
    if (in_FPSCR_PR == '\0') {
      bVar58 = fVar37 < fVar31;
    }
    else {
      bVar58 = in_xd10 < dVar16;
    }
    if (in_FPSCR_PR == '\0') {
      bVar59 = fVar31 < fVar28;
    }
    else {
      bVar59 = dVar16 < dVar24;
    }
    fVar34 = F32LO(dVar15);
    if (in_FPSCR_PR == '\0') {
      bVar60 = fVar18 < fVar34;
    }
    else {
      bVar60 = dVar26 < dVar15;
    }
    if (in_FPSCR_PR == '\0') {
      bVar61 = fVar34 < fVar27;
    }
    else {
      bVar61 = dVar15 < dVar35;
    }
    fVar36 = F32HI(dVar15);
    if (in_FPSCR_PR == '\0') {
      bVar62 = fVar37 < fVar36;
    }
    else {
      bVar62 = in_xd10 < dVar15;
    }
    if (in_FPSCR_PR == '\0') {
      bVar63 = fVar36 < fVar28;
    }
    else {
      bVar63 = dVar15 < dVar24;
    }
    fVar40 = F32LO(dVar30);
    if (in_FPSCR_PR == '\0') {
      bVar64 = fVar18 < fVar40;
    }
    else {
      bVar64 = dVar26 < dVar30;
    }
    if (in_FPSCR_PR == '\0') {
      bVar65 = fVar40 < fVar27;
    }
    else {
      bVar65 = dVar30 < dVar35;
    }
    fVar18 = F32HI(dVar30);
    if (in_FPSCR_PR == '\0') {
      bVar66 = fVar37 < fVar18;
    }
    else {
      bVar66 = in_xd10 < dVar30;
    }
    if (in_FPSCR_PR == '\0') {
      bVar67 = fVar18 < fVar28;
    }
    else {
      bVar67 = dVar30 < dVar24;
    }
    if ((0xffffffff &
         ((((0x0 << 1 | (uint)bVar52) << 1 | (uint)bVar53) << 1 | (uint)bVar54) << 1 |
         (uint)bVar55) &
         ((((0x0 << 1 | (uint)bVar56) << 1 | (uint)bVar57) << 1 | (uint)bVar58) << 1 |
         (uint)bVar59) &
         ((((0x0 << 1 | (uint)bVar60) << 1 | (uint)bVar61) << 1 | (uint)bVar62) << 1 |
         (uint)bVar63) &
        ((((0x0 << 1 | (uint)bVar64) << 1 | (uint)bVar65) << 1 | (uint)bVar66) << 1 |
        (uint)bVar67)) == 0) {
      uVar23 = (undefined4)(D2U(dVar26) >> 0x20);
      uVar33 = (undefined4)(D2U(dVar35) >> 0x20);
      uVar38 = (undefined4)((ulonglong)in_xd10 >> 0x20);
      uVar43 = (undefined4)(D2U(dVar24) >> 0x20);
      if (bVar7 == 0) {
        if (in_FPSCR_SZ == '\0') {
          uVar22 = *(undefined4 *)(unsigned)((int)pdVar10 + 0x1c);
          uVar32 = *(undefined4 *)(unsigned)(pdVar10 + 3);
          dVar35 = CONCAT44D(uVar33,uVar32);
          *(undefined4 *)(unsigned)(in_r2 + 0x18) = 0x3f800000;
          *(undefined4 *)(unsigned)(in_r2 + 0x14) = uVar32;
          *(undefined4 *)(unsigned)(in_r2 + 0x10) = uVar22;
          *(undefined4 *)(unsigned)(in_r2 + 0xc) = uVar23;
          *(float *)(unsigned)(in_r2 + 8) = fVar19;
          pdVar9 = (double *)(unsigned)(in_r2 + 4);
          *(float *)(unsigned)pdVar9 = fVar21;
        }
        else {
          uVar44 = *(undefined8 *)(unsigned)((int)pdVar10 + 0x1c);
          dVar24 = pdVar10[3];
          *(double *)(unsigned)(in_r2 + 0x14) = dVar50;
          *(double *)(unsigned)(in_r2 + 0xc) = dVar24;
          *(undefined8 *)(unsigned)(in_r2 + 4) = uVar44;
          *(double *)(unsigned)(in_r2 + -4) = dVar26;
          *(double *)(unsigned)(in_r2 + -0xc) = dVar45;
          pdVar9 = (double *)(unsigned)(in_r2 + -0x14);
          *pdVar9 = dVar17;
        }
        *(undefined4 *)(unsigned)((int)pdVar9 + -4) = uVar6;
        if (in_FPSCR_SZ == '\0') {
          uVar23 = *(undefined4 *)(unsigned)((int)pdVar10 + 0x14);
          uVar33 = *(undefined4 *)(unsigned)(pdVar10 + 2);
          *(undefined4 *)(unsigned)((int)pdVar9 + 0x34) = 0x3f800000;
          *(undefined4 *)(unsigned)(pdVar9 + 6) = uVar33;
          *(undefined4 *)(unsigned)((int)pdVar9 + 0x2c) = uVar23;
          *(int *)(unsigned)(pdVar9 + 5) = (int)(D2U(dVar35) >> 0x20);
          *(float *)(unsigned)((int)pdVar9 + 0x24) = fVar29;
          pdVar9 = pdVar9 + 4;
          *(float *)(unsigned)pdVar9 = fVar31;
        }
        else {
          dVar45 = *(double *)(unsigned)((int)pdVar10 + 0x14);
          dVar24 = pdVar10[2];
          pdVar9[6] = dVar50;
          pdVar9[5] = dVar24;
          pdVar9[4] = dVar45;
          pdVar9[3] = dVar35;
          pdVar9[2] = dVar46;
          pdVar9 = pdVar9 + 1;
          *pdVar9 = dVar16;
        }
        *(undefined4 *)(unsigned)((int)pdVar9 + -4) = uVar6;
        if (in_FPSCR_SZ == '\0') {
          uVar23 = *(undefined4 *)(unsigned)((int)pdVar10 + 0xc);
          uVar33 = *(undefined4 *)(unsigned)(pdVar10 + 1);
          *(undefined4 *)(unsigned)((int)pdVar9 + 0x34) = 0x3f800000;
          *(undefined4 *)(unsigned)(pdVar9 + 6) = uVar33;
          *(undefined4 *)(unsigned)((int)pdVar9 + 0x2c) = uVar23;
          *(undefined4 *)(unsigned)(pdVar9 + 5) = uVar38;
          *(float *)(unsigned)((int)pdVar9 + 0x24) = fVar34;
          pdVar9 = pdVar9 + 4;
          *(float *)(unsigned)pdVar9 = fVar36;
        }
        else {
          dVar45 = *(double *)(unsigned)((int)pdVar10 + 0xc);
          dVar24 = pdVar10[1];
          pdVar9[6] = dVar50;
          pdVar9[5] = dVar24;
          pdVar9[4] = dVar45;
          pdVar9[3] = in_xd10;
          pdVar9[2] = dVar47;
          pdVar9 = pdVar9 + 1;
          *pdVar9 = dVar15;
        }
        *(undefined4 *)(unsigned)((int)pdVar9 + -4) = uVar6;
        if (in_FPSCR_SZ == '\0') {
          uVar6 = *(undefined4 *)(unsigned)((int)pdVar10 + 4);
          uVar23 = *(undefined4 *)(unsigned)pdVar10;
          *(undefined4 *)(unsigned)((int)pdVar9 + 0x34) = 0x3f800000;
          *(undefined4 *)(unsigned)(pdVar9 + 6) = uVar23;
          *(undefined4 *)(unsigned)((int)pdVar9 + 0x2c) = uVar6;
          *(undefined4 *)(unsigned)(pdVar9 + 5) = uVar43;
          *(float *)(unsigned)((int)pdVar9 + 0x24) = fVar40;
          pdVar9 = pdVar9 + 4;
          *(float *)(unsigned)pdVar9 = fVar18;
        }
        else {
          dVar45 = *(double *)(unsigned)((int)pdVar10 + 4);
          dVar15 = *pdVar10;
          pdVar9[6] = dVar50;
          pdVar9[5] = dVar15;
          pdVar9[4] = dVar45;
          pdVar9[3] = CONCAT44D(uVar43,0x3f800000);
          pdVar9[2] = dVar49;
          pdVar9 = pdVar9 + 1;
          *pdVar9 = dVar30;
        }
        *(undefined4 *)(unsigned)((int)pdVar9 + -4) = uVar4;
        uVar6 = 1;
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          uVar6 = *(undefined4 *)(unsigned)((int)pdVar10 + 4);
          *(undefined4 *)(unsigned)((int)puVar11 + -0x34) = *(undefined4 *)(unsigned)pdVar10;
          *(undefined4 *)(unsigned)((int)puVar11 + -0x38) = uVar6;
          *(undefined4 *)(unsigned)((int)puVar11 + -0x3c) = uVar43;
          *(float *)(unsigned)((int)puVar11 + -0x40) = fVar40;
          *(float *)(unsigned)((int)puVar11 + -0x44) = fVar18;
          uVar6 = *(undefined4 *)(unsigned)((int)pdVar10 + 0xc);
          *(undefined4 *)(unsigned)((int)puVar11 + -0x54) = *(undefined4 *)(unsigned)(pdVar10 + 1);
          *(undefined4 *)(unsigned)((int)puVar11 + -0x58) = uVar6;
          *(undefined4 *)(unsigned)((int)puVar11 + -0x5c) = uVar38;
          *(float *)(unsigned)((int)puVar11 + -0x60) = fVar34;
          *(float *)(unsigned)((int)puVar11 + -100) = fVar36;
          uVar6 = *(undefined4 *)(unsigned)((int)pdVar10 + 0x14);
          *(undefined4 *)(unsigned)((int)puVar11 + -0x74) = *(undefined4 *)(unsigned)(pdVar10 + 2);
          *(undefined4 *)(unsigned)((int)puVar11 + -0x78) = uVar6;
          *(undefined4 *)(unsigned)((int)puVar11 + -0x7c) = uVar33;
          *(float *)(unsigned)((int)puVar11 + -0x80) = fVar29;
          *(float *)(unsigned)((int)puVar11 + -0x84) = fVar31;
          uVar6 = *(undefined4 *)(unsigned)((int)pdVar10 + 0x1c);
          *(undefined4 *)(unsigned)((int)puVar11 + -0x94) = *(undefined4 *)(unsigned)(pdVar10 + 3);
          *(undefined4 *)(unsigned)((int)puVar11 + -0x98) = uVar6;
          *(undefined4 *)(unsigned)((int)puVar11 + -0x9c) = uVar23;
          *(float *)(unsigned)((int)puVar11 + -0xa0) = fVar19;
          puVar12 = (undefined1 *)(unsigned)((int)puVar11 + -0xa4);
          *(float *)(unsigned)((int)puVar11 + -0xa4) = fVar21;
        }
        else {
          dVar50 = pdVar10[1];
          *(double *)(unsigned)((int)puVar11 + -0x38) = *pdVar10;
          *(double *)(unsigned)((int)puVar11 + -0x40) = dVar50;
          *(double *)(unsigned)((int)puVar11 + -0x48) = dVar24;
          *(double *)(unsigned)((int)puVar11 + -0x50) = dVar49;
          *(double *)(unsigned)((int)puVar11 + -0x58) = dVar30;
          dVar24 = pdVar10[3];
          *(double *)(unsigned)((int)puVar11 + -0x6c) = pdVar10[2];
          *(double *)(unsigned)((int)puVar11 + -0x74) = dVar24;
          *(double *)(unsigned)((int)puVar11 + -0x7c) = in_xd10;
          *(double *)(unsigned)((int)puVar11 + -0x84) = dVar47;
          *(double *)(unsigned)((int)puVar11 + -0x8c) = dVar15;
          dVar15 = pdVar10[5];
          *(double *)(unsigned)((int)puVar11 + -0xa0) = pdVar10[4];
          *(double *)(unsigned)((int)puVar11 + -0xa8) = dVar15;
          *(double *)(unsigned)((int)puVar11 + -0xb0) = dVar35;
          *(double *)(unsigned)((int)puVar11 + -0xb8) = dVar46;
          *(double *)(unsigned)((int)puVar11 + -0xc0) = dVar16;
          dVar15 = pdVar10[7];
          *(double *)(unsigned)((int)puVar11 + -0xd4) = pdVar10[6];
          *(double *)(unsigned)((int)puVar11 + -0xdc) = dVar15;
          *(double *)(unsigned)((int)puVar11 + -0xe4) = dVar26;
          *(double *)(unsigned)((int)puVar11 + -0xec) = dVar45;
          puVar12 = (undefined1 *)(unsigned)((int)puVar11 + -0xf4);
          *(double *)(unsigned)((int)puVar11 + -0xf4) = dVar17;
        }
        *(undefined4 *)(unsigned)(puVar12 + -8) = in_PR;
        (vsp = (puVar11 ? (unsigned long)puVar11 - 244 : (unsigned long)(fr0_ - 264)), FUN_8c257be8(bVar7,puVar12 + -4,vr6,vr7));
        uVar6 = 1;
      }
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}

__asm__(".globl _FUN_8c2578ac\n.set _FUN_8c2578ac, _FUN_8c2578ac_def\n");
