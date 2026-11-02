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
undefined4 CAnimal_m2_02573c_def(int ar4,uint ar5,int ****ar6,int ****ar7)

{
  ring[rp++ & 255] = "CAnimal_m2_02573c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 268; for (int i_ = 0; i_ < 268; i_++) z_[i_] = 0; }
  ulonglong uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 *a5;
  undefined4 *a5_00;
  undefined1 *a6;
  int ****ar7_00;
  undefined1 *a7;
  uint ar5_00;
  int ****a6_00;
  float fVar8;
  ulonglong in_dr0 = 0;
  double dVar9;
  float fVar10;
  undefined4 in_fr3 = 0;
  double dVar11;
  char cVar12;
  char cVar13;
  int ****ain0;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar5 = ar5;
  ar7_00 = ar7;
  ain0 = ar6;
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c030e10(((undefined1 *)(fr0_ - 0x3c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c030e5c(&(*(undefined4 *)(fr0_ - 0xac)),uVar5,ar6,ar7_00));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02bef8(ar4 + 0x174,uVar5,ar6,ar7_00));
  a6_00 = (int ****)(unsigned)(int)(short)uVar2;
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c023e44(((undefined1 *)(fr0_ - 0xec)),uVar5,ar6,ar7_00));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02602c(ar5,uVar5,ar6,ar7_00));
  ar5_00 = uVar3 & 0xffff;
  iVar4 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_24_026024(ar7,uVar5,ar6,ar7_00));
  if ((iVar4 != 2) && (*(int *)(unsigned)(ar4 + 0x48c) == 0)) {
    uVar5 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c1011b0(*(undefined4 *)(unsigned)(ar5 + 0x7cc),uVar5,ar6,ar7_00));
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 268)); FUN_8c02601c(ar4 + 0x26c,uVar5 & 0xffff,ar6,ar7_00); });
    uVar5 = ar5_00;
    ar6 = ar7;
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02c030(ar4 + 0x174,ar5_00,ar7,ar7_00));
  }
  iVar6 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c025ff4(ar4 + 0x174,uVar5,ar6,ar7_00));
  if (iVar6 == 1) {
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02a6f8(ar4,uVar5,ar6,ar7_00));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c025fc4(ar4 + 0x174,uVar5,ar6,ar7_00));
  if ((short)uVar2 == 1) {
    if (*(int *)(unsigned)(ar4 + 0x24) == 3) {
      uVar5 = 2;
      iVar6 = (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)((*ar7)[0x47])))(ar7,2,ar6,ar7_00));
      if (iVar6 != 0) {
        uVar5 = 0;
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c025fbc(ar4 + 0x21c,0,ar6,ar7_00));
        goto LAB_8c02590e;
      }
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02bef8(ar4 + 0x174,uVar5,ar6,ar7_00));
    a6_00 = (int ****)(unsigned)(int)(short)uVar2;
    if (a6_00 != (int ****)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xec))))(ar4,0x8c3eb334,(int)a6_00 + -1,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xe0))))(ar4,0x8c3eb334,a6_00,ar7_00));
      uVar5 = ar5;
      ar6 = a6_00;
      (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)) + 0x18))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)),ar5,a6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x5c))))(ar4,uVar5,ar6,ar7_00));
    }
  }
LAB_8c02590e:
  if ((ar5_00 != *(ushort *)(unsigned)(ar4 + 0x464)) &&
     (*(short *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + (int)a6_00 * 0x124 + 0xc4) != 0)) {
    uVar5 = (uint)*(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + (int)a6_00 * 0x124 + 0xc4);
    iVar6 = (vsp = ((unsigned long)(fr0_ - 268)), libgcc_divide_helper_01031c(ar5_00,uVar5,ar6,ar7_00));
    if (iVar6 == 0) {
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02ae38(ar4,uVar5,ar6,ar7_00));
    }
    *(short *)(unsigned)(ar4 + 0x464) = (short)uVar3;
  }
  if ((((*(int *)(unsigned)(ar4 + 0x358) != 0) || (*(int *)(unsigned)(ar4 + 0x354) != 0)) ||
      (*(int *)(unsigned)(ar4 + 0x360) != 0)) || (*(int *)(unsigned)(ar4 + 0x35c) != 0)) {
    if (cVar13 == '\0') {
      dVar11 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x468),in_fr3);
    }
    else {
      dVar11 = *(double *)(unsigned)(ar4 + 0x468);
    }
    if (cVar13 == '\0') {
      dVar9 = CONCAT44D(0x361b5837,(float)(int)*(char *)(unsigned)(ar4 + 0x46c));
    }
    else {
      dVar9 = 512.0001032005592;
    }
    if (cVar12 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar13 == '\0') {
      dVar9 = CONCAT44D(0x40800000,fVar8);
    }
    else {
      dVar9 = 5.441987277913441e+158;
    }
    if (cVar12 == '\0') {
      fVar10 = F32HI(dVar9);
      fVar8 = F32LO(dVar9) * fVar10;
      dVar9 = CONCAT44D(fVar10,fVar8);
      dVar11 = CONCAT44D(F32HI(dVar11) + fVar8,SUB84(dVar11,0));
    }
    else {
      dVar9 = dVar9 * dVar9;
      dVar11 = dVar11 + dVar9;
    }
    fVar8 = F32LO(dVar9);
    if (cVar13 == '\0') {
      *(int *)(unsigned)(ar4 + 0x468) = (int)(D2U(dVar11) >> 0x20);
      fVar8 = *(float *)(unsigned)(ar4 + 0x468);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x468) = dVar11;
    }
    if (cVar12 != '\0' || fVar8 <= 1.0) {
      if (cVar13 == '\0') {
        fVar8 = *(float *)(unsigned)(ar4 + 0x468);
      }
      in_dr0 = (ulonglong)(uint)fVar8;
      if (cVar12 == '\0' && fVar8 < 0.0) {
        in_dr0 = (ulonglong)(uint)fVar8;
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x468) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x468) = in_dr0;
        }
      }
    }
    else {
      in_dr0 = CONCAT44(0x3f800000,fVar8);
      if (cVar13 == '\0') {
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
    (*(unsigned *)(fr0_ - 0x44) = (unsigned)(unsigned long)((int ***)(unsigned)ain0));
    (*(uint *)(fr0_ - 0x40)) = ar5;
    (*(undefined4 *)(fr0_ - 0x4c)) = (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)((*ar7)[0x52])))(ar7,uVar5,ar6,ar7_00));
    uVar5 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02602c(ar5,uVar5,ar6,ar7_00));
    ar6 = ((int *** *)(fr0_ - 0x60));
    uVar5 = uVar5 & 0xffff;
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c034d48(ar4 + 0x2dc,uVar5,ar6,ar7_00));
  }
  (*(int *)(fr0_ - 0x78)) = ar4 + 0x174;
  (*(undefined4 *)(fr0_ - 0x74)) = *(undefined4 *)(unsigned)(ar4 + 0x30c);
  (*(int *)(fr0_ - 0x7c)) = ar4;
  (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)((int ***)(unsigned)ain0));
  (*(uint *)(fr0_ - 0x64)) = ar5;
  (*(undefined4 *)(fr0_ - 0x70)) = (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)((*ar7)[0x52])))(ar7,uVar5,ar6,ar7_00));
  (*(int *)(fr0_ - 0x6c)) = ar4 + 0x2dc;
  (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)) + 0xc))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)),ar7,&(*(int *)(fr0_ - 0x7c)),ar7_00));
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30))+4)) = ar4 + 0x30;
  (*(int *)(fr0_ - 0x28)) = ar4 + 0x50;
  (*(int *)(fr0_ - 0x24)) = ar4 + 0x5c;
  a7 = ((undefined1 *)(fr0_ - 0x34));
  a6 = ((undefined1 *)(fr0_ - 0x38));
  a5 = ((undefined1 *)(fr0_ - 0x3c));
  (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)((*ar7)[0x48])))(ar7,a5,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)((*ar7)[0x61])))(ar7,a5,a6,a7));
  uVar1 = in_dr0;
  if (cVar13 == '\0') {
    (*(undefined8 *)(fr0_ - 0x30)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30))+4)),(int)(in_dr0 >> 0x20));
    uVar1 = (*(undefined8 *)(fr0_ - 0x30));
  }
  (*(undefined8 *)(fr0_ - 0x30)) = uVar1;
  (*(undefined4 *)(fr0_ - 0xac)) = *(undefined4 *)(unsigned)(ar4 + 0x308);
  (*(int *)(fr0_ - 0xa8)) = (int)&(*(undefined8 *)(fr0_ - 0x30)) + 4;
  (*(undefined4 *)(fr0_ - 0xa4)) = (vsp = ((unsigned long)(fr0_ - 268)), get_field_140_025f70(ar4 + 0x174,a5,a6,a7));
  (*(unsigned *)(fr0_ - 0x90) = (unsigned)(unsigned long)(((undefined1 *)(fr0_ - 0x3c))));
  if (cVar13 == '\0') {
    (*(undefined4 *)(fr0_ - 0x8c)) = *(undefined4 *)(unsigned)(ar4 + 0x408);
    (*(undefined4 *)(fr0_ - 0x88)) = *(undefined4 *)(unsigned)(ar4 + 0x40c);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x8c)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x408);
    (*(undefined4 *)(fr0_ - 0x88)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x40c);
    (*(undefined4 *)(fr0_ - 0x84)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 0x40c) >> 0x20);
  }
  (*(undefined4 *)(fr0_ - 0x84)) = CONCAT31((*(uint*)((uchar*)&(*(undefined4 *)(fr0_ - 0x84))+1)),1);
  (*(int *)(fr0_ - 0x9c)) = ((*(uint *)(unsigned)(ar4 + 0x74) & 0x70) >> 4) - 1;
  (*(unsigned *)(fr0_ - 0x94) = (unsigned)(unsigned long)((int ***)(unsigned)ar7));
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c10277c(((undefined1 *)(fr0_ - 0xf8)),a5,a6,a7));
  iVar4 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_24_026024(ar7,a5,a6,a7));
  if (iVar4 == 0) {
    if (cVar13 == '\0') {
      (*(undefined8 *)(fr0_ - 0xf4)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xf4))+4)),(int)(*(undefined8 *)(fr0_ - 0x30)));
    }
    else {
      (*(undefined8 *)(fr0_ - 0xf4)) = (*(undefined8 *)(fr0_ - 0x30));
    }
  }
  (*(unsigned *)(fr0_ - 0xa0) = (unsigned)(unsigned long)(((undefined1 *)(fr0_ - 0xf8))));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c025f68(ar4 + 0x1ec,a5,a6,a7));
  (*(uint *)(fr0_ - 0x80)) = (uint)((char)uVar2 != '\0');
  a5_00 = &(*(undefined4 *)(fr0_ - 0xac));
  (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30c)) + 0xc))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30c)),a5_00,a6,a7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x108))); *(unsigned *)((((unsigned long)(fr0_ - 268)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 268)) - 8); FUN_8c025f44(*(undefined4 *)(unsigned)(ar4 + 0x30c),a5_00,a6,a7); });
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c023aa0(ar4 + 0x30,((undefined1 *)(fr0_ - 0x108)),a6,a7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0x108)),0xffffffff,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c023e7c(((undefined1 *)(fr0_ - 0xec)),uVar2,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c023f70(((undefined1 *)(fr0_ - 0xec)),uVar2,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c023fdc(((undefined1 *)(fr0_ - 0xec)),uVar2,a6,a7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02bef8(ar4 + 0x174,uVar2,a6,a7));
  iVar6 = *(int *)(unsigned)(ar4 + 0x328) + (short)uVar2 * 0x124 + 0xd8;
  iVar4 = ar4 + 0x3c8;
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c024010(((undefined1 *)(fr0_ - 0xec)),iVar4,iVar6,a7));
  (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xf8))))(ar4,iVar4,iVar6,a7));
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0f79b8(ar4 + 0xa0,iVar4,iVar6,a7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c025f68(ar4 + 0x1ec,iVar4,iVar6,a7));
  if ((char)uVar2 == '\0') {
    iVar4 = *(int *)(unsigned)(ar4 + 0x45c) + -1;
    *(int *)(unsigned)(ar4 + 0x45c) = iVar4;
    if (iVar4 < 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x45c) = 0;
    }
  }
  else {
    iVar7 = *(int *)(unsigned)(ar4 + 0x45c);
    *(int *)(unsigned)(ar4 + 0x45c) = iVar7 + 1;
    if (0x707 < iVar7 + 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x45c) = 0x708;
    }
  }
  iVar7 = (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xb4))))(ar4,iVar4,iVar6,a7));
  if (iVar7 == 0) {
    (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x4c))))(ar4,iVar4,iVar6,a7));
  }
  *(undefined4 *)(unsigned)(ar4 + 0x48c) = 0;
  (vsp = ((unsigned long)(fr0_ - 268)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0xf8)),0xffffffff,iVar6,a7));
  (vsp = ((unsigned long)(fr0_ - 268)), free_if_nonnull_wrap_023e4c(((undefined1 *)(fr0_ - 0xec)),0xffffffff,iVar6,a7));
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c026038(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,iVar6,a7));
  return 1;
}

__asm__(".globl _CAnimal_m2_02573c\n.set _CAnimal_m2_02573c, _CAnimal_m2_02573c_def\n");
