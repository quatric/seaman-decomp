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
undefined4 FUN_8c0c4370_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c0c4370";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  char cVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int ar5_00;
  int ar7_00;
  short sVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  double in_dr2 = 0;
  double dVar10;
  undefined8 in_dr4 = 0;
  undefined4 in_fr7 = 0;
  undefined4 in_fr6 = 0;
  float fVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  undefined8 in_xd0 = 0;
  undefined4 in_PR = 0;
  char cVar15;
  char cVar16;
  
  cVar16 = '\0';
  cVar15 = '\0';
  dVar12 = CONCAT44D(in_fr6,(int)((ulonglong)in_dr4 >> 0x20));
  dVar14 = CONCAT44D((int)in_dr4,in_fr7);
  ar7_00 = ar7;
  (*(undefined4 *)(fr0_ - 0x30)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c01538c(ar4 + 4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c014a94(ar4 + 4,0,ar6,ar7_00));
  for (iVar7 = 0; *(char *)(unsigned)(iVar7 + ar5) != '\0'; iVar7 = iVar7 + 1) {
    cVar1 = *(char *)(unsigned)(iVar7 + ar5);
    fVar13 = F32LO(dVar14);
    fVar11 = F32LO(dVar12);
    if (cVar15 == '\0') {
      fVar8 = (float)ar7 * fVar13 * (float)iVar7 + fVar11;
    }
    else {
      fVar8 = SUB84((double)iVar7 * (double)iVar7 + dVar12,0);
    }
    (*(float *)(fr0_ - 0x50)) = (float)in_xd0;
    (*(float *)(fr0_ - 0x48)) = (*(float *)(fr0_ - 0x50));
    if (cVar16 == '\0') {
      (*(float *)(fr0_ - 0x50)) = fVar8;
    }
    if (cVar15 == '\0') {
      fVar8 = (float)ar7 * fVar13 * (float)iVar7 + fVar11;
    }
    else {
      fVar8 = SUB84((double)iVar7 * (double)iVar7 + dVar12,0);
    }
    if (cVar16 == '\0') {
      (*(float *)(fr0_ - 0x48)) = fVar8;
    }
    if (cVar15 == '\0') {
      dVar10 = CONCAT44D((float)ar7 * fVar13,SUB84(in_dr2,0));
    }
    else {
      dVar10 = (double)ar7 * dVar14;
    }
    if (cVar15 == '\0') {
      dVar10 = CONCAT44D(F32HI(dVar10) +
                                (float)ar7 * fVar13 * (float)iVar7 + fVar11,SUB84(dVar10,0));
    }
    else {
      dVar10 = dVar10 + (double)iVar7 * (double)iVar7 + dVar12;
    }
    (*(float *)(fr0_ - 0x40)) = SUB84(dVar10,0);
    if (cVar16 == '\0') {
      (*(float *)(fr0_ - 0x40)) = F32HI(dVar10);
    }
    if (cVar15 == '\0') {
      dVar10 = CONCAT44D((float)ar7 * fVar13,SUB84(dVar10,0));
    }
    else {
      dVar10 = (double)ar7 * dVar14;
    }
    if (cVar15 == '\0') {
      fVar8 = (float)ar7 * fVar13 * (float)iVar7;
      in_dr2 = CONCAT44D(F32HI(dVar10) + fVar8 + fVar11,SUB84(dVar10,0))
      ;
    }
    else {
      dVar9 = (double)iVar7 * (double)iVar7;
      fVar8 = F32LO(dVar9);
      in_dr2 = dVar10 + dVar9 + dVar12;
    }
    if (cVar16 == '\0') {
      (*(float *)(fr0_ - 0x38)) = F32HI(in_dr2);
    }
    else {
      (*(float *)(fr0_ - 0x38)) = SUB84(in_dr2,0);
    }
    fVar11 = F32HI(dVar14);
    if (cVar15 == '\0') {
      dVar10 = CONCAT44D((float)(*(int *)(fr0_ + 0x00000000)) * fVar13 + fVar11,fVar8);
    }
    else {
      dVar10 = (double)(*(int *)(fr0_ + 0x00000000)) * dVar14 + dVar14;
    }
    fVar8 = F32HI(dVar10);
    (*(float *)(fr0_ - 0x4c)) = SUB84(dVar10,0);
    fVar3 = fVar11;
    (*(float *)(fr0_ - 0x3c)) = fVar13;
    fVar4 = fVar11;
    if (cVar16 == '\0') {
      (*(float *)(fr0_ - 0x4c)) = fVar8;
      fVar8 = (*(float *)(fr0_ - 0x48));
      fVar3 = (*(float *)(fr0_ - 0x40));
      (*(float *)(fr0_ - 0x3c)) = fVar11;
      fVar4 = (*(float *)(fr0_ - 0x38));
    }
    (*(float *)(fr0_ - 0x38)) = fVar4;
    (*(float *)(fr0_ - 0x40)) = fVar3;
    (*(float *)(fr0_ - 0x48)) = fVar8;
    if (cVar15 == '\0') {
      dVar10 = CONCAT44D((float)(*(int *)(fr0_ + 0x00000000)) * fVar13 + fVar11,SUB84(dVar10,0));
    }
    else {
      dVar10 = (double)(*(int *)(fr0_ + 0x00000000)) * dVar14 + dVar14;
    }
    uVar5 = (undefined4)(D2U(dVar10) >> 0x20);
    (*(undefined4 *)(fr0_ - 0x34)) = uVar5;
    if (cVar16 != '\0') {
      (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar10,0);
      (*(undefined4 *)(fr0_ - 0x30)) = uVar5;
    }
    (*(float *)(fr0_ - 0x44)) = (*(float *)(fr0_ - 0x3c));
    uVar5 = (vsp = ((unsigned long)(fr0_ - 80)), libgcc_divide_helper_01031c((int)cVar1,0x10,ar6,ar7_00));
    sVar6 = (short)uVar5 * 0x10;
    uVar5 = (vsp = ((unsigned long)(fr0_ - 80)), libgcc_divide_helper_0101e4((int)cVar1,0x10,ar6,ar7_00));
    sVar2 = ((short)uVar5 + -2) * 0x20;
    *(short *)(unsigned)(ar4 + 0x184) = sVar6;
    *(short *)(unsigned)(ar4 + 0x186) = sVar2 + 0x1f;
    *(short *)(unsigned)(ar4 + 0x188) = sVar6;
    *(short *)(unsigned)(ar4 + 0x18a) = sVar2;
    *(short *)(unsigned)(ar4 + 0x18c) = sVar6 + 0xf;
    *(short *)(unsigned)(ar4 + 0x18e) = sVar2;
    *(short *)(unsigned)(ar4 + 400) = sVar6 + 0xf;
    *(short *)(unsigned)(ar4 + 0x192) = sVar2 + 0x1f;
    ar7_00 = 4;
    ar6 = ar4 + 0x154;
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c016318(ar4 + 0x20,&(*(float *)(fr0_ - 0x50)),ar6,4); });
    ar5_00 = ar4 + 0x184;
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c016324(ar4 + 0x20,ar5_00,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c016340(ar4 + 0x20,ar5_00,ar6,ar7_00));
  }
  return 0;
}

__asm__(".globl _FUN_8c0c4370\n.set _FUN_8c0c4370, _FUN_8c0c4370_def\n");
