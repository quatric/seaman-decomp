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
undefined4 FUN_8c0b6604_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b6604";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *a5;
  undefined4 *a6;
  undefined4 *a7;
  float fVar4;
  double in_dr0 = 0;
  double dVar5;
  float fVar6;
  undefined4 in_fr3 = 0;
  undefined4 uVar7;
  double dVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x20)) = 0;
  a7 = &(*(undefined4 *)(fr0_ - 0x2c));
  a6 = &(*(undefined4 *)(fr0_ - 0x28));
  a5 = &(*(undefined4 *)(fr0_ - 0x24));
  (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x120))))(ar5,a5,a6,a7));
  iVar9 = ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), get_field_4_05eed8(ar4,a5,a6,a7));
  if ((iVar1 != 1) && (iVar1 == 8)) {
    if (cVar11 == '\0') {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),in_fr3);
      dVar5 = CONCAT44D(0x3dcccccd,(*(undefined4 *)(fr0_ - 0x24)));
    }
    else {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
      dVar5 = 1.3411048210842936e-08;
    }
    if (cVar10 == '\0') {
      dVar8 = CONCAT44D(F32HI(dVar8) -
                               F32LO(dVar5) * F32HI(dVar5),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - dVar5 * dVar5;
    }
    (*(undefined4 *)(fr0_ - 0x24)) = SUB84(dVar8,0);
    uVar3 = (undefined4)(D2U(dVar8) >> 0x20);
    if (cVar11 == '\0') {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(undefined4 *)(fr0_ - 0x24)));
      dVar5 = CONCAT44D(0x3e4ccccd,(*(undefined4 *)(fr0_ - 0x28)));
      (*(undefined4 *)(fr0_ - 0x24)) = uVar3;
    }
    else {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
      dVar5 = -7.532505548438758e-251;
      (*(undefined4 *)(fr0_ - 0x20)) = uVar3;
    }
    if (cVar10 == '\0') {
      dVar8 = CONCAT44D(F32HI(dVar8) -
                               F32LO(dVar5) * F32HI(dVar5),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - dVar5 * dVar5;
    }
    (*(undefined4 *)(fr0_ - 0x28)) = SUB84(dVar8,0);
    uVar3 = (undefined4)(D2U(dVar8) >> 0x20);
    if (cVar11 == '\0') {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),(*(undefined4 *)(fr0_ - 0x28)));
      dVar5 = CONCAT44D(0x3dcccccd,(*(undefined4 *)(fr0_ - 0x2c)));
      (*(undefined4 *)(fr0_ - 0x28)) = uVar3;
    }
    else {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(undefined4 *)(fr0_ - 0x2c)));
      dVar5 = 1.3411048210842936e-08;
      (*(undefined4 *)(fr0_ - 0x24)) = uVar3;
    }
    if (cVar10 == '\0') {
      fVar6 = F32HI(dVar5);
      fVar4 = F32LO(dVar5) * fVar6;
      dVar5 = CONCAT44D(fVar6,fVar4);
      dVar8 = CONCAT44D(F32HI(dVar8) - fVar4,SUB84(dVar8,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
      dVar8 = dVar8 - dVar5;
    }
    uVar3 = SUB84(dVar5,0);
    uVar2 = (undefined4)(D2U(dVar8) >> 0x20);
    (*(undefined4 *)(fr0_ - 0x2c)) = uVar2;
    if (cVar11 != '\0') {
      (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(dVar8,0);
      (*(undefined4 *)(fr0_ - 0x28)) = uVar2;
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 64)), rand(iVar9,a5,a6,a7));
    uVar7 = SUB84(dVar8,0);
    if (cVar11 == '\0') {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),uVar3);
    }
    else {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
    }
    if (cVar10 == '\0') {
      iVar9 = (int)F32HI(dVar8);
    }
    else {
      iVar9 = (int)dVar8;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), libgcc_divide_helper_01031c(uVar2,iVar9,a6,a7));
    if (cVar10 == '\0') {
      dVar8 = CONCAT44D((float)iVar1,uVar7);
    }
    else {
      dVar8 = (double)iVar1;
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D(0x40000000,(*(undefined4 *)(fr0_ - 0x24)));
    }
    else {
      dVar5 = 8.15376882678406e-312;
    }
    if (cVar10 == '\0') {
      fVar6 = F32HI(dVar5);
      fVar4 = F32LO(dVar5) / fVar6;
      dVar5 = CONCAT44D(fVar6,fVar4);
      dVar8 = CONCAT44D(F32HI(dVar8) - fVar4,SUB84(dVar8,0));
    }
    else {
      dVar5 = dVar5 / dVar5;
      dVar8 = dVar8 - dVar5;
    }
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar4 + 0x28) = (int)(D2U(dVar8) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x28) = dVar8;
    }
    uVar3 = (vsp = ((unsigned long)(fr0_ - 64)), rand(uVar2,iVar9,a6,a7));
    uVar2 = SUB84(dVar8,0);
    (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x180))))(ar5,iVar9,a6,a7));
    if (cVar11 == '\0') {
      (*(undefined8 *)(fr0_ - 0x3c)) = CONCAT44D(uVar3,(int)(D2U(dVar5) >> 0x20));
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),SUB84(dVar5,0));
    }
    else {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
      (*(undefined8 *)(fr0_ - 0x3c)) = dVar5;
    }
    if (cVar10 == '\0') {
      iVar9 = (int)F32HI(dVar8);
    }
    else {
      iVar9 = (int)dVar8;
    }
    uVar3 = (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x3c))+4));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), libgcc_divide_helper_01031c((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x3c))+4)),iVar9,a6,a7));
    if (cVar10 == '\0') {
      dVar8 = CONCAT44D((float)iVar1,uVar2);
    }
    else {
      dVar8 = (double)iVar1;
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D(0x42c80000,(undefined4)(*(undefined8 *)(fr0_ - 0x3c)));
    }
    else {
      dVar5 = 6.28664306982812e-312;
    }
    if (cVar10 == '\0') {
      fVar6 = F32HI(dVar5);
      fVar4 = F32LO(dVar5) / fVar6;
      dVar5 = CONCAT44D(fVar6,fVar4);
      dVar8 = CONCAT44D(F32HI(dVar8) * fVar4,SUB84(dVar8,0));
    }
    else {
      dVar5 = dVar5 / dVar5;
      dVar8 = dVar8 * dVar5;
    }
    uVar2 = SUB84(dVar5,0);
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar4 + 0x2c) = (int)(D2U(dVar8) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x2c) = dVar8;
    }
    uVar3 = (vsp = ((unsigned long)(fr0_ - 64)), rand(uVar3,iVar9,a6,a7));
    uVar7 = SUB84(dVar8,0);
    if (cVar11 == '\0') {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),uVar2);
    }
    else {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(undefined4 *)(fr0_ - 0x2c)));
    }
    if (cVar10 == '\0') {
      iVar9 = (int)F32HI(dVar8);
    }
    else {
      iVar9 = (int)dVar8;
    }
    iVar9 = (vsp = ((unsigned long)(fr0_ - 64)), libgcc_divide_helper_01031c(uVar3,iVar9,a6,a7));
    if (cVar10 == '\0') {
      dVar8 = CONCAT44D((float)iVar9,uVar7);
    }
    else {
      dVar8 = (double)iVar9;
    }
    if (cVar11 == '\0') {
      in_dr0 = CONCAT44D(0x40000000,(*(undefined4 *)(fr0_ - 0x2c)));
    }
    else {
      in_dr0 = 8.15376882678406e-312;
    }
    if (cVar10 == '\0') {
      fVar6 = F32HI(in_dr0);
      fVar4 = F32LO(in_dr0) / fVar6;
      in_dr0 = CONCAT44D(fVar6,fVar4);
      dVar8 = CONCAT44D(F32HI(dVar8) - fVar4,SUB84(dVar8,0));
    }
    else {
      in_dr0 = in_dr0 / in_dr0;
      dVar8 = dVar8 - in_dr0;
    }
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar4 + 0x30) = (int)(D2U(dVar8) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x30) = dVar8;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,ar4 + 0x28,a6,a7));
  if (cVar11 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x2c));
  }
  if (cVar10 != '\0' || SUB84(in_dr0,0) <= F32HI(in_dr0)) {
    (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,ar4 + 0x28,a6,a7));
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar4 + 0x2c) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x2c) = in_dr0;
    }
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,a6,a7));
  return uVar3;
}

__asm__(".globl _FUN_8c0b6604\n.set _FUN_8c0b6604, _FUN_8c0b6604_def\n");
