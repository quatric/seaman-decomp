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
uint FUN_8c23ab90_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23ab90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  float fVar6;
  double dVar5;
  float in_fr3 = 0;
  undefined8 uVar7;
  float fVar9;
  undefined8 uVar8;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float in_fr11 = 0;
  undefined8 in_xd4 = 0;
  char cVar13;
  char cVar14;
  
  cVar14 = '\0';
                    
  cVar13 = '\0';
                    
  fVar12 = 1.0 / in_fr11;
                    
  fVar10 = 0.0;
  fVar6 = in_fr3 * in_fr3 * fVar12;
  fVar9 = in_fr3 * in_fr3 * fVar12;
  uVar1 = (((uint)(0.0 < in_fr3) << 1 | (uint)(in_fr11 < *(float *)(unsigned)(ar4 + 0x6c))) << 1 |
          (uint)(0.0 < -in_fr3)) << 1 | (uint)(*(float *)(unsigned)(ar4 + 0x74) < fVar9);
  if (uVar1 == 0xf) {
    if (*(float *)(unsigned)(ar4 + 0x68) < in_fr11) {
      fVar6 = fVar6 * *(float *)(unsigned)(ar4 + 0x68) * fVar12;
    }
    if (*(float *)(unsigned)(ar4 + 0x70) <= fVar9) {
      fVar10 = *(float *)(unsigned)(ar4 + 0x114);
      dVar5 = CONCAT44D(fVar6,*(float *)(unsigned)(ar4 + 0x118));
      fVar12 = *(float *)(unsigned)(ar4 + 0x11c);
      fVar9 = *(float *)(unsigned)(ar4 + 0x120);
      ar5[5] = fVar6 * *(float *)(unsigned)(ar4 + 0x118) + ar5[5];
      ar5[6] = fVar6 * fVar12 + ar5[6];
      ar5[7] = fVar6 * fVar9 + ar5[7];
      *ar5 = fVar6 * fVar10 + *ar5;
    }
    else {
      dVar5 = CONCAT44D(fVar6 * *(float *)(unsigned)(ar4 + 0x80),*(undefined4 *)(unsigned)(ar4 + 0xa0));
      ({ unsigned long ri0_ = (unsigned long)(0x88); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); FUN_8c23a8d8(*(undefined4 *)(unsigned)(ar4 + 0x88),ar5,ar6,ar7); });
      if (cVar14 == '\0') {
        dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),(*(int *)(fr0_ - 0xc)));
        piVar4 = (int *)(unsigned)((undefined1 *)(fr0_ - 0x8));
      }
      else {
        piVar4 = (int *)(unsigned)((undefined1 *)(fr0_ - 0x4));
      }
      ar4 = *piVar4;
      if (cVar13 == '\0') {
        dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 * dVar5;
      }
    }
    uVar1 = 4;
    pfVar3 = ar5 + 1;
    if (cVar14 == '\0') {
      dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x108));
      uVar7 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x10c),*(undefined4 *)(unsigned)(ar4 + 0x110));
      uVar8 = CONCAT44(*pfVar3,ar5[2]);
      pfVar2 = ar5 + 3;
      uVar11 = CONCAT44(*pfVar2,fVar10);
    }
    else {
      uVar7 = *(undefined8 *)(unsigned)(ar4 + 0x110);
      uVar8 = *(undefined8 *)(unsigned)pfVar3;
      in_xd4 = *(undefined8 *)(unsigned)(ar5 + 3);
      pfVar2 = ar5 + 5;
      uVar11 = *(undefined8 *)(unsigned)pfVar2;
    }
    fVar6 = F32HI(dVar5);
    if (cVar13 == '\0') {
      uVar8 = CONCAT44(fVar6 * F32LO(dVar5) + F32HI(uVar8),
                       fVar6 * F32HI(uVar7) + (float)uVar8);
      uVar11 = CONCAT44(fVar6 * (float)uVar7 + F32HI(uVar11),(int)uVar11);
    }
    if (cVar14 == '\0') {
      *pfVar3 = F32HI(uVar8);
      ar5[2] = (float)uVar8;
      *pfVar2 = F32HI(uVar11);
    }
    else {
      *(undefined8 *)(unsigned)pfVar3 = uVar8;
      *(undefined8 *)(unsigned)(ar5 + 2) = in_xd4;
      *(undefined8 *)(unsigned)pfVar2 = uVar11;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c23ab90\n.set _FUN_8c23ab90, _FUN_8c23ab90_def\n");
