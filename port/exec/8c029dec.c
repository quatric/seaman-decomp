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
undefined4 FUN_8c029dec_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c029dec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  double in_dr14 = 0;
  undefined8 in_xd0 = 0;
  bool bVar12;
  int ar6_00;
  int iVar13;
  char cVar14;
  char cVar15;
  undefined2 uVar16;
  
  uVar16 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0x64)) >> 0x10);
  cVar15 = '\0';
  cVar14 = '\0';
  iVar3 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  uVar7 = CONCAT22(uVar16,(short)uVar1);
  if (*(int *)(unsigned)(ar4 + 0x3dc) == *(int *)(unsigned)(ar4 + 0x3d8)) {
    *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)) =
         *(undefined4 *)(unsigned)
          (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + (short)uVar1 * 0x124) + *(int *)(unsigned)(ar4 + 0x3e4) * 4 + 0x40
          );
  }
  else {
    ar6 = (int)*(short *)(unsigned)(ar4 + 0x3fa);
    iVar3 = -0x73d86cf8;
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c02ab24(ar4,0x8c279308,ar6,ar7));
    *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)) = 0x8c279308;
  }
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0f52c8(ar4,iVar3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x430),iVar3,ar6,ar7));
  iVar4 = 0;
  piVar2 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 100)), get_field_4_0253e4(*(undefined4 *)(unsigned)(ar4 + 0x430),iVar3,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x460) != 0) {
    if (*(int *)(unsigned)(ar4 + 0x460) != 2) goto LAB_8c029f42;
    iVar4 = 2;
  }
  iVar4 = iVar4 + 6;
  for (iVar3 = 0; iVar3 < 2; iVar3 = iVar3 + 1) {
    uVar1 = *(undefined4 *)(unsigned)(iVar3 * 0xc + *piVar2 + 8);
    *(undefined4 *)(unsigned)(iVar3 * 0xc + *piVar2 + 8) =
         *(undefined4 *)(unsigned)((iVar4 + iVar3) * 0xc + *piVar2 + 8);
    *(undefined4 *)(unsigned)((iVar4 + iVar3) * 0xc + *piVar2 + 8) = uVar1;
  }
LAB_8c029f42:
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x404));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x404);
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar14 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = 2.17348488426987e-311;
  }
  if (cVar14 == '\0') {
    iVar3 = (int)(F32LO(dVar9) / F32HI(dVar9));
  }
  else {
    iVar3 = (int)(dVar9 / dVar9);
  }
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x400));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x400);
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar14 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = 2.17348488426987e-311;
  }
  if (cVar14 == '\0') {
    ar6_00 = (int)(F32LO(dVar9) / F32HI(dVar9));
  }
  else {
    ar6_00 = (int)(dVar9 / dVar9);
  }
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x3fc));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x3fc);
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar14 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = 2.17348488426987e-311;
  }
  if (cVar14 == '\0') {
    iVar13 = (int)(F32LO(dVar9) / F32HI(dVar9));
  }
  else {
    iVar13 = (int)(dVar9 / dVar9);
  }
  ({ unsigned long ri0_ = (unsigned long)(uVar7); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c256b0c(0,iVar13,ar6_00,iVar3); });
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x3fc));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x3fc);
    dVar9 = 5.238690724707756e-11;
  }
  if (cVar14 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(unsigned)(ar4 + 0x3fc) = fVar8;
    dVar9 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x400));
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x3fc) = in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x400);
    dVar9 = 5.238690724707756e-11;
  }
  if (cVar14 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(unsigned)(ar4 + 0x400) = fVar8;
    dVar9 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x404));
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x400) = in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x404);
    dVar9 = 5.238690724707756e-11;
  }
  if (cVar14 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(unsigned)(ar4 + 0x404) = fVar8;
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x3fc));
    dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x400),fVar8);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x404) = in_xd0;
    dVar9 = *(double *)(unsigned)(ar4 + 0x400);
  }
  if (cVar14 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                               F32LO(in_dr14) + F32HI(dVar9));
  }
  else {
    in_dr14 = in_dr14 + dVar9;
  }
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x404),SUB84(dVar9,0));
  }
  else {
    dVar9 = *(double *)(unsigned)(ar4 + 0x404);
  }
  if (cVar14 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                               F32LO(in_dr14) + F32HI(dVar9));
  }
  else {
    in_dr14 = in_dr14 + dVar9;
  }
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x3dcccccd,SUB84(dVar9,0));
  }
  else {
    dVar9 = -5.238690707360522e-11;
  }
  if (cVar14 == '\0') {
    bVar12 = SUB84(in_dr14,0) < F32HI(dVar9);
  }
  else {
    bVar12 = in_dr14 < dVar9;
  }
  if (bVar12) {
    if (cVar15 == '\0') {
      dVar9 = CONCAT44D(0xbdcccccd,SUB84(dVar9,0));
    }
    else {
      dVar9 = -8.132627400321583e-251;
    }
    if (cVar14 == '\0') {
      bVar12 = F32HI(dVar9) < SUB84(in_dr14,0);
    }
    else {
      bVar12 = dVar9 < in_dr14;
    }
    if (bVar12) {
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c02a1fc(ar4 + 0x3fc,iVar13,ar6_00,iVar3));
    }
  }
  uVar6 = SUB84(dVar9,0);
  uVar11 = SUB84(in_dr14,0);
  uVar1 = *(undefined4 *)(unsigned)(ar5 + 4);
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c02a29c(ar4,uVar1,ar6_00,iVar3));
  if (*(int *)(unsigned)(ar4 + 0x460) != 1) {
    for (iVar13 = 0; iVar13 < 2; iVar13 = iVar13 + 1) {
      uVar5 = *(undefined4 *)(unsigned)((iVar4 + iVar13) * 0xc + *piVar2 + 8);
      *(undefined4 *)(unsigned)((iVar4 + iVar13) * 0xc + *piVar2 + 8) =
           *(undefined4 *)(unsigned)(iVar13 * 0xc + *piVar2 + 8);
      *(undefined4 *)(unsigned)(iVar13 * 0xc + *piVar2 + 8) = uVar5;
    }
  }
  if (*(int *)(unsigned)(ar4 + 0x45c) != 0) {
    if (cVar14 == '\0') {
      dVar9 = CONCAT44D((float)*(int *)(unsigned)(ar4 + 0x45c),uVar11);
    }
    else {
      dVar9 = (double)*(int *)(unsigned)(ar4 + 0x45c);
    }
    if (cVar15 == '\0') {
      dVar10 = CONCAT44D(0x44e10000,uVar6);
    }
    else {
      dVar10 = 2.3262783273243e-311;
    }
    if (cVar14 == '\0') {
      dVar9 = CONCAT44D(F32HI(dVar9) /
                               F32HI(dVar10),SUB84(dVar9,0));
    }
    else {
      dVar9 = dVar9 / dVar10;
    }
    if (cVar14 == '\0') {
      dVar9 = CONCAT44D(F32HI(dVar9) - 1.0,SUB84(dVar9,0));
    }
    else {
      dVar9 = dVar9 - CONCAT44D(0x3f800000,SUB84(dVar10,0));
    }
    if (cVar15 == '\0') {
      *(int *)(unsigned)(ar4 + 0x448) = (int)(D2U(dVar9) >> 0x20);
      *(undefined4 *)(unsigned)(ar4 + 0x44c) = *(undefined4 *)(unsigned)(ar4 + 0x43c);
      *(undefined4 *)(unsigned)(ar4 + 0x450) = *(undefined4 *)(unsigned)(ar4 + 0x440);
      *(undefined4 *)(unsigned)(ar4 + 0x454) = *(undefined4 *)(unsigned)(ar4 + 0x444);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x448) = dVar9;
      *(undefined8 *)(unsigned)(ar4 + 0x44c) = *(undefined8 *)(unsigned)(ar4 + 0x43c);
      *(undefined8 *)(unsigned)(ar4 + 0x450) = *(undefined8 *)(unsigned)(ar4 + 0x440);
      *(undefined8 *)(unsigned)(ar4 + 0x454) = *(undefined8 *)(unsigned)(ar4 + 0x444);
    }
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c233dac(ar4 + 0x448,uVar1,ar6_00,iVar3));
    uVar6 = *(undefined4 *)(unsigned)(*piVar2 + 8);
    *(undefined4 *)(unsigned)(*piVar2 + 8) = *(undefined4 *)(unsigned)(*piVar2 + 0x44);
    *(undefined4 *)(unsigned)(*piVar2 + 0x44) = uVar6;
    ({ unsigned long ri0_ = (unsigned long)(uVar7); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c256328(0,uVar1,ar6_00,iVar3); });
    ({ unsigned long ri0_ = (unsigned long)(uVar7); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c256fec(0,uVar1,ar6_00,iVar3); });
    uVar1 = *(undefined4 *)(unsigned)(ar5 + 4);
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c02a29c(ar4,uVar1,ar6_00,iVar3));
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c256210(1,uVar1,ar6_00,iVar3));
    uVar7 = *(undefined4 *)(unsigned)(*piVar2 + 0x44);
    *(undefined4 *)(unsigned)(*piVar2 + 0x44) = *(undefined4 *)(unsigned)(*piVar2 + 8);
    *(undefined4 *)(unsigned)(*piVar2 + 8) = uVar7;
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x448) = *(undefined4 *)(unsigned)(ar4 + 0x438);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x448) = *(undefined8 *)(unsigned)(ar4 + 0x438);
    }
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c233dac(ar4 + 0x448,uVar1,ar6_00,iVar3));
  }
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x42c),uVar1,ar6_00,iVar3));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0f5308(ar4,uVar1,ar6_00,iVar3));
  return uVar1;
}

__asm__(".globl _FUN_8c029dec\n.set _FUN_8c029dec, _FUN_8c029dec_def\n");
