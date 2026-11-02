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
undefined4 CAnimal_m3_026078_def(int ar4,uint ar5,int ****ar6,int ****ar7)

{
  ring[rp++ & 255] = "CAnimal_m3_026078";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 456; for (int i_ = 0; i_ < 456; i_++) z_[i_] = 0; }
  ulonglong uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint ar5_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *a5;
  undefined4 *a5_00;
  undefined4 a5_01;
  int ****ar6_00;
  undefined1 *a6;
  int ****ar7_00;
  undefined1 *a7;
  int ****a6_00;
  float fVar7;
  ulonglong in_dr0 = 0;
  double dVar8;
  float fVar9;
  undefined4 in_fr3 = 0;
  double dVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar6 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c030e10(((undefined1 *)(fr0_ - 0x3c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c030e5c(&(*(undefined4 *)(fr0_ - 0xac)),uVar6,ar6_00,ar7_00));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c02bef8(ar4 + 0x174,uVar6,ar6_00,ar7_00));
  a6_00 = (int ****)(unsigned)(int)(short)uVar2;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c02602c(ar5,uVar6,ar6_00,ar7_00));
  ar5_00 = uVar3 & 0xffff;
  iVar4 = (vsp = ((unsigned long)(fr0_ - 456)), get_field_24_026024(ar7,uVar6,ar6_00,ar7_00));
  if ((iVar4 != 2) && (*(int *)(unsigned)(ar4 + 0x48c) == 0)) {
    uVar6 = ar5_00;
    ar6_00 = ar7;
    (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c02c030(ar4 + 0x174,ar5_00,ar7,ar7_00));
  }
  iVar5 = (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c025ff4(ar4 + 0x174,uVar6,ar6_00,ar7_00));
  if (iVar5 == 1) {
    (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c02a6f8(ar4,uVar6,ar6_00,ar7_00));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c025fc4(ar4 + 0x174,uVar6,ar6_00,ar7_00));
  if ((short)uVar2 == 1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c02bef8(ar4 + 0x174,uVar6,ar6_00,ar7_00));
    a6_00 = (int ****)(unsigned)(int)(short)uVar2;
    if (a6_00 != (int ****)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xec))))(ar4,0x8c3eb334,(int)a6_00 + -1,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xe0))))(ar4,0x8c3eb334,a6_00,ar7_00));
      uVar6 = ar5;
      ar6_00 = a6_00;
      (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)) + 0x18))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)),ar5,a6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x5c))))(ar4,uVar6,ar6_00,ar7_00));
    }
  }
  if ((ar5_00 != *(ushort *)(unsigned)(ar4 + 0x464)) &&
     (*(short *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + (int)a6_00 * 0x124 + 0xc4) != 0)) {
    uVar6 = (uint)*(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + (int)a6_00 * 0x124 + 0xc4);
    iVar5 = (vsp = ((unsigned long)(fr0_ - 456)), libgcc_divide_helper_01031c(ar5_00,uVar6,ar6_00,ar7_00));
    if (iVar5 == 0) {
      (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c02ae38(ar4,uVar6,ar6_00,ar7_00));
    }
    *(short *)(unsigned)(ar4 + 0x464) = (short)uVar3;
  }
  if ((((*(int *)(unsigned)(ar4 + 0x358) != 0) || (*(int *)(unsigned)(ar4 + 0x354) != 0)) ||
      (*(int *)(unsigned)(ar4 + 0x360) != 0)) || (*(int *)(unsigned)(ar4 + 0x35c) != 0)) {
    if (cVar12 == '\0') {
      dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x468),in_fr3);
    }
    else {
      dVar10 = *(double *)(unsigned)(ar4 + 0x468);
    }
    if (cVar12 == '\0') {
      dVar8 = CONCAT44D(0x361b5837,(float)(int)*(char *)(unsigned)(ar4 + 0x46c));
    }
    else {
      dVar8 = 512.0001032005592;
    }
    if (cVar11 == '\0') {
      fVar7 = F32LO(dVar8) * F32HI(dVar8);
    }
    else {
      fVar7 = SUB84(dVar8 * dVar8,0);
    }
    if (cVar12 == '\0') {
      dVar8 = CONCAT44D(0x40800000,fVar7);
    }
    else {
      dVar8 = 5.442117166052762e+158;
    }
    if (cVar11 == '\0') {
      fVar9 = F32HI(dVar8);
      fVar7 = F32LO(dVar8) * fVar9;
      dVar8 = CONCAT44D(fVar9,fVar7);
      dVar10 = CONCAT44D(F32HI(dVar10) + fVar7,SUB84(dVar10,0));
    }
    else {
      dVar8 = dVar8 * dVar8;
      dVar10 = dVar10 + dVar8;
    }
    fVar7 = F32LO(dVar8);
    if (cVar12 == '\0') {
      *(int *)(unsigned)(ar4 + 0x468) = (int)(D2U(dVar10) >> 0x20);
      fVar7 = *(float *)(unsigned)(ar4 + 0x468);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x468) = dVar10;
    }
    if (cVar11 != '\0' || fVar7 <= 1.0) {
      if (cVar12 == '\0') {
        fVar7 = *(float *)(unsigned)(ar4 + 0x468);
      }
      in_dr0 = (ulonglong)(uint)fVar7;
      if (cVar11 == '\0' && fVar7 < 0.0) {
        in_dr0 = (ulonglong)(uint)fVar7;
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x468) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x468) = in_dr0;
        }
      }
    }
    else {
      in_dr0 = CONCAT44(0x3f800000,fVar7);
      if (cVar12 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x468) = 0x3f800000;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x468) = in_dr0;
      }
    }
  }
  if (iVar4 != 2) {
    (*(int *)(fr0_ - 0x58)) = ar4 + 0x174;
    (*(undefined4 *)(fr0_ - 0x54)) = *(undefined4 *)(unsigned)(ar4 + 0x30c);
    (*(undefined4 *)(fr0_ - 0x50)) = *(undefined4 *)(unsigned)(ar4 + 0x308);
    (*(int *)(fr0_ - 0x48)) = ar4 + 0x2dc;
    (*(unsigned *)(fr0_ - 0x60) = (unsigned)(unsigned long)((int ***)(unsigned)ar7));
    (*(int *)(fr0_ - 0x5c)) = ar4;
    (*(unsigned *)(fr0_ - 0x44) = (unsigned)(unsigned long)((int ***)(unsigned)ar6));
    (*(uint *)(fr0_ - 0x40)) = ar5;
    (*(undefined4 *)(fr0_ - 0x4c)) = (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)((*ar7)[0x52])))(ar7,uVar6,ar6_00,ar7_00));
    uVar2 = 1;
    (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c0266d4(ar4 + 0x2dc,1,ar6_00,ar7_00));
    uVar6 = (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c02602c(ar5,uVar2,ar6_00,ar7_00));
    ar6_00 = ((int *** *)(fr0_ - 0x60));
    uVar6 = uVar6 & 0xffff;
    (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c034d48(ar4 + 0x2dc,uVar6,ar6_00,ar7_00));
  }
  (*(int *)(fr0_ - 0x78)) = ar4 + 0x174;
  (*(undefined4 *)(fr0_ - 0x74)) = *(undefined4 *)(unsigned)(ar4 + 0x30c);
  (*(int *)(fr0_ - 0x7c)) = ar4;
  (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)((int ***)(unsigned)ar6));
  (*(uint *)(fr0_ - 0x64)) = ar5;
  (*(undefined4 *)(fr0_ - 0x70)) = (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)((*ar7)[0x52])))(ar7,uVar6,ar6_00,ar7_00));
  (*(int *)(fr0_ - 0x6c)) = ar4 + 0x2dc;
  (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)) + 0x10))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)),ar7,&(*(int *)(fr0_ - 0x7c)),ar7_00));
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30))+4)) = ar4 + 0x30;
  (*(int *)(fr0_ - 0x28)) = ar4 + 0x50;
  (*(int *)(fr0_ - 0x24)) = ar4 + 0x5c;
  a7 = ((undefined1 *)(fr0_ - 0x34));
  a6 = ((undefined1 *)(fr0_ - 0x38));
  a5 = ((undefined1 *)(fr0_ - 0x3c));
  (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)((*ar7)[0x48])))(ar7,a5,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)((*ar7)[0x61])))(ar7,a5,a6,a7));
  uVar1 = in_dr0;
  if (cVar12 == '\0') {
    (*(undefined8 *)(fr0_ - 0x30)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30))+4)),(int)(in_dr0 >> 0x20));
    uVar1 = (*(undefined8 *)(fr0_ - 0x30));
  }
  (*(undefined8 *)(fr0_ - 0x30)) = uVar1;
  (*(undefined4 *)(fr0_ - 0xac)) = *(undefined4 *)(unsigned)(ar4 + 0x308);
  (*(int *)(fr0_ - 0xa8)) = (int)&(*(undefined8 *)(fr0_ - 0x30)) + 4;
  (*(undefined4 *)(fr0_ - 0xa4)) = (vsp = ((unsigned long)(fr0_ - 456)), get_field_140_025f70(ar4 + 0x174,a5,a6,a7));
  (*(unsigned *)(fr0_ - 0x90) = (unsigned)(unsigned long)(((undefined1 *)(fr0_ - 0x3c))));
  if (cVar12 == '\0') {
    (*(undefined4 *)(fr0_ - 0x8c)) = *(undefined4 *)(unsigned)(ar4 + 0x408);
    (*(undefined4 *)(fr0_ - 0x88)) = *(undefined4 *)(unsigned)(ar4 + 0x40c);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x8c)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x408);
    (*(undefined4 *)(fr0_ - 0x88)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x40c);
    (*(uint *)(fr0_ - 0x84)) = (uint)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 0x40c) >> 0x20);
  }
  (*(uint *)(fr0_ - 0x84)) = (*(uint *)(fr0_ - 0x84)) & 0xffffff00;
  (*(int *)(fr0_ - 0x9c)) = ((*(uint *)(unsigned)(ar4 + 0x74) & 0x70) >> 4) - 1;
  (*(unsigned *)(fr0_ - 0x94) = (unsigned)(unsigned long)((int ***)(unsigned)ar7));
  (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c10277c(((undefined1 *)(fr0_ - 0xb8)),a5,a6,a7));
  iVar4 = (vsp = ((unsigned long)(fr0_ - 456)), get_field_24_026024(ar7,a5,a6,a7));
  if (iVar4 == 0) {
    if (cVar12 == '\0') {
      (*(undefined8 *)(fr0_ - 0xb4)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xb4))+4)),(int)(*(undefined8 *)(fr0_ - 0x30)));
    }
    else {
      (*(undefined8 *)(fr0_ - 0xb4)) = (*(undefined8 *)(fr0_ - 0x30));
    }
  }
  (*(unsigned *)(fr0_ - 0xa0) = (unsigned)(unsigned long)(((undefined1 *)(fr0_ - 0xb8))));
  a5_00 = &(*(undefined4 *)(fr0_ - 0xac));
  (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30c)) + 0xc))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30c)),a5_00,a6,a7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc8))); *(unsigned *)((((unsigned long)(fr0_ - 456)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 456)) - 8); FUN_8c025f44(*(undefined4 *)(unsigned)(ar4 + 0x30c),a5_00,a6,a7); });
  (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c023aa0(ar4 + 0x30,((undefined1 *)(fr0_ - 0xc8)),a6,a7));
  a5_01 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 456)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xf8))))(ar4,a5_01,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c0f79b8(ar4 + 0xa0,a5_01,a6,a7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c025f68(ar4 + 0x1ec,a5_01,a6,a7));
  if ((char)uVar2 == '\0') {
    iVar4 = *(int *)(unsigned)(ar4 + 0x45c) + -1;
    *(int *)(unsigned)(ar4 + 0x45c) = iVar4;
    if (iVar4 < 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x45c) = 0;
    }
  }
  else {
    iVar4 = *(int *)(unsigned)(ar4 + 0x45c);
    *(int *)(unsigned)(ar4 + 0x45c) = iVar4 + 1;
    if (0x707 < iVar4 + 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x45c) = 0x708;
    }
  }
  iVar4 = (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xb4))))(ar4,a5_01,a6,a7));
  if (iVar4 == 0) {
    (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x4c))))(ar4,a5_01,a6,a7));
  }
  *(undefined4 *)(unsigned)(ar4 + 0x48c) = 0;
  (vsp = ((unsigned long)(fr0_ - 456)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c026038(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,a6,a7));
  return 1;
}

__asm__(".globl _CAnimal_m3_026078\n.set _CAnimal_m3_026078, _CAnimal_m3_026078_def\n");
