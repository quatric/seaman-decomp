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
undefined4 FUN_8c0911f0_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0911f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 136; for (int i_ = 0; i_ < 136; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 ar5_01;
  int iVar3;
  undefined4 uVar4;
  undefined4 ar6_00;
  float in_fr1 = 0;
  float fVar5;
  float fVar7;
  double dVar6;
  undefined8 in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = ar5;
  iVar3 = ar6;
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x3c)),uVar4,iVar3,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 136)), libgcc_divide_helper_01031c(ar5,3,iVar3,ar7));
  iVar1 = iVar1 + 0x11;
  uVar4 = 10;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c034148(ar4 + 0xb0,10,iVar3,ar7));
  if ((iVar2 == 1) || (iVar2 == 2)) {
    (vsp = ((unsigned long)(fr0_ - 136)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,iVar3,ar7));
    if (cVar9 == '\0') {
      in_fr1 = *(float *)(unsigned)(ar4 + 0x2cc);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2cc);
    }
    if (cVar8 == '\0') {
      in_fr1 = in_fr1 + 1.0;
    }
    else {
      in_fr1 = SUB84(CONCAT44D(0x3f800000,in_fr1) + CONCAT44D(0x3f800000,in_fr1),0);
    }
    if (cVar9 == '\0') {
      *(float *)(unsigned)(ar4 + 0x2cc) = in_fr1;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x2cc) = in_xd0;
    }
    uVar4 = (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c03c0f0(ar4 + 0xb0,iVar1,iVar3,ar7));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 136)), deref_u32(uVar4,iVar1,iVar3,ar7));
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c0342ac(ar4 + 0xb0,uVar4,0,ar7));
    ar6_00 = 0;
    ar5_01 = (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c034548(ar4 + 0xb0,uVar4,0,ar7));
    if (cVar9 == '\0') {
      fVar5 = *(float *)(unsigned)(ar4 + 0x2cc);
      fVar7 = 319.0;
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2cc);
      fVar5 = 319.0;
      fVar7 = 4.2039e-43;
    }
    if (fVar5 == fVar7) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      (vsp = ((unsigned long)(fr0_ - 136)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7));
      ar7 = 0;
      ar6_00 = 0xffffffff;
      uVar4 = 0;
      iVar3 = ar4 + 0xb0;
      (vsp = ((unsigned long)(fr0_ - 136)), s_CAnimBody_SetAnimation_033a94(iVar3,0,0xffffffff,0));
      uVar4 = (vsp = ((unsigned long)(fr0_ - 136)), rand(iVar3,uVar4,ar6_00,ar7));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 136)), libgcc_divide_helper_01031c(uVar4,0x4c4,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 0x284) = iVar3 + 0x9c4;
    }
    (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(ar4 + 0x2d0,((undefined1 *)(fr0_ - 0x4c)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c023b4c(ar4 + 0x2d0,ar4 + 0x2e0,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c023bf4(ar4 + 0x2d0,ar4 + 0x2c4,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(ar4 + 0x2e0,((undefined1 *)(fr0_ - 0x5c)),ar6_00,ar7));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x68)),uVar4,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 136)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 136)) - 8); FUN_8c023484(ar4 + 0x2d0,((undefined1 *)(fr0_ - 0x68)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(ar4 + 0x2d0,((undefined1 *)(fr0_ - 0x78)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), object_dtor_delete(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c034650(ar4 + 0xb0,ar5_01,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), vec3_copy_8c023d8c(ar6,((undefined1 *)(fr0_ - 0x84)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), object_dtor_delete(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2a0),*(undefined4 *)(unsigned)(ar6 + 4));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar6 + 4);
      dVar6 = *(double *)(unsigned)(ar4 + 0x2a0);
    }
    if (cVar8 == '\0') {
      fVar5 = F32LO(dVar6) + F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 700),fVar5);
    }
    else {
      dVar6 = *(double *)(unsigned)(ar4 + 700);
    }
    if (cVar8 == '\0') {
      fVar5 = F32LO(dVar6) + F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D(0x43340000,fVar5);
    }
    else {
      dVar6 = 1.4180502381632e-311;
    }
    if (cVar8 == '\0') {
      fVar5 = F32LO(dVar6) + F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar9 == '\0') {
      *(float *)(unsigned)(ar6 + 4) = fVar5;
    }
    else {
      *(undefined8 *)(unsigned)(ar6 + 4) = in_xd0;
    }
    (vsp = ((unsigned long)(fr0_ - 136)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 136)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,iVar3,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,iVar3,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c0911f0\n.set _FUN_8c0911f0, _FUN_8c0911f0_def\n");
