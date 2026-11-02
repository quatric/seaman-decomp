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
undefined4 FUN_8c07e828_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c07e828";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  undefined1 *ar5_01;
  undefined4 uVar3;
  undefined4 unaff_r9 = 0;
  undefined4 unaff_r10 = 0;
  undefined4 unaff_r11 = 0;
  undefined4 uVar4;
  undefined4 unaff_r12 = 0;
  int *a4;
  undefined4 unaff_r13 = 0;
  undefined4 unaff_r14 = 0;
  undefined1 *puVar5;
  float fVar6;
  undefined8 in_dr0 = 0;
  double dVar7;
  undefined8 uVar8;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  bool bVar9;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    puVar5 = ((undefined1 *)(fr0_ - 0x4));
  }
  else {
    puVar5 = ((undefined1 *)(fr0_ - 0x8));
  }
  *(undefined4 *)(unsigned)(puVar5 + -4) = unaff_r14;
  *(undefined4 *)(unsigned)(puVar5 + -8) = unaff_r13;
  *(undefined4 *)(unsigned)(puVar5 + -0xc) = unaff_r12;
  *(undefined4 *)(unsigned)(puVar5 + -0x10) = unaff_r11;
  *(undefined4 *)(unsigned)(puVar5 + -0x14) = unaff_r10;
  *(undefined4 *)(unsigned)(puVar5 + -0x18) = unaff_r9;
  *(undefined4 *)(unsigned)(puVar5 + -0x1c) = in_PR;
  *(undefined4 *)(unsigned)(puVar5 + -0x104) = ar6;
  a4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(puVar5 + 4));
  *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
  uVar3 = ar5;
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7));
  uVar4 = 1;
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c031700(ar4,uVar3,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x290) = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 12)), Vec3_ctor_zero(puVar5 + -0x2c,uVar3,ar6,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c031748(ar4,uVar3,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c031c74(ar4,((undefined1 *)(unsigned)0x8c125e78),ar5,ar7));
    ar6 = ar5;
    if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c034148(ar4 + 0xb0,0x29,ar5,ar7));
      *(undefined4 *)(unsigned)(puVar5 + -0xc4) = uVar3;
      ar6 = ar5;
      if (0 < *(int *)(unsigned)(puVar5 + -0xc4)) {
        *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x290) = *(undefined4 *)(unsigned)(ar4 + 0x294);
        *(int *)(unsigned)(puVar5 + -0xf0) = ar4;
        *(int *)(unsigned)(*(int *)(unsigned)(puVar5 + -0xf0) + 300) = *(int *)(unsigned)(*(int *)(unsigned)(puVar5 + -0xf0) + 300) + 1;
      }
    }
  }
  else if (iVar1 == 1) {
    ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar5 + -0x104)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7); });
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(puVar5 + -200) = (int)((ulonglong)in_dr0 >> 0x20);
      in_fr15 = *(float *)(unsigned)(puVar5 + -200);
      dVar7 = CONCAT44D(0x43250000,(int)in_dr0);
    }
    else {
      *(undefined8 *)(unsigned)(puVar5 + -200) = in_dr0;
      dVar7 = 6.03203368746242e-312;
    }
    if (in_FPSCR_PR == '\0') {
      bVar9 = F32HI(dVar7) < in_fr15;
    }
    else {
      bVar9 = dVar7 < CONCAT44D(in_fr14,in_fr15);
    }
    if (bVar9) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x11c))))(a4,6,ar6,ar7));
      *(undefined4 *)(unsigned)(puVar5 + -0xcc) = uVar3;
      if (*(int *)(unsigned)(puVar5 + -0xcc) == 0) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x11c))))(a4,4,ar6,ar7));
        *(undefined4 *)(unsigned)(puVar5 + -0xd0) = uVar3;
        if (*(int *)(unsigned)(puVar5 + -0xd0) == 0) {
          *(undefined4 *)(unsigned)(puVar5 + -0xb8) = 2;
          (vsp = ((unsigned long)(fr0_ - 12)), Vec3_dtor(puVar5 + -0x2c,0xffffffff,ar6,ar7));
          return *(undefined4 *)(unsigned)(puVar5 + -0xb8);
        }
        uVar3 = 4;
      }
      else {
        uVar3 = 6;
      }
      ar5_00 = 0x2c;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c03c0f0(ar4 + 0xb0,0x2c,ar6,ar7));
      *(undefined4 *)(unsigned)(puVar5 + -0xd4) = uVar2;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 12)), deref_u32(*(undefined4 *)(unsigned)(puVar5 + -0xd4),ar5_00,ar6,ar7));
      *(undefined4 *)(unsigned)(puVar5 + -0xd8) = uVar2;
      ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar5 + -0x104)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7); });
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar5 + -0xdc) = (int)(D2U(dVar7) >> 0x20);
      }
      else {
        *(double *)(unsigned)(puVar5 + -0xdc) = dVar7;
      }
      *(unsigned *)(unsigned)(puVar5 + -0x108) = puVar5 + -0x4c;
      if (in_FPSCR_SZ == '\0') {
        uVar8 = CONCAT44(0x42f40000,SUB84(dVar7,0));
      }
      else {
        uVar8 = 0x8c0342d842f40000;
      }
      (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c0342d8(ar4 + 0xb0,*(undefined4 *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(puVar5 + -0xd8)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_assign(puVar5 + -0x2c,puVar5 + -0x4c,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_dtor(puVar5 + -0x4c,0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 12)), vec3_copy_8c02b5fc(puVar5 + -0x58,*(undefined4 *)(unsigned)(puVar5 + -0x104),ar6,ar7));
      *(unsigned *)(unsigned)(puVar5 + -0x108) = puVar5 + -0x68;
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar5 + -0x108)); *(unsigned *)((((unsigned long)(fr0_ - 12)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 12)) - 8); FUN_8c023484(puVar5 + -0x2c,puVar5 + -0x58,ar6,ar7); });
      *(unsigned *)(unsigned)(puVar5 + -0x108) = puVar5 + -0x78;
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar5 + -0x108)); *(unsigned *)((((unsigned long)(fr0_ - 12)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 12)) - 8); Vec3_add(puVar5 + -0x68,ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_assign(puVar5 + -0x2c,puVar5 + -0x78,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_dtor(puVar5 + -0x78,0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_dtor(puVar5 + -0x68,0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 12)), object_dtor_delete(puVar5 + -0x58,0xffffffff,ar6,ar7));
      ar6 = *(undefined4 *)(unsigned)(ar4 + 0x294);
      uVar2 = (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x100))))(a4,uVar3,ar6,ar7));
      *(undefined4 *)(unsigned)(puVar5 + -0xe0) = uVar2;
      iVar1 = *(int *)(unsigned)(puVar5 + -0xe0);
      if (iVar1 != 0) {
        (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c036988(iVar1,uVar3,ar6,ar7));
      }
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_ctor_xyz(puVar5 + -0x88,uVar3,ar6,ar7));
      *(undefined4 *)(unsigned)(puVar5 + -0xf4) = *(undefined4 *)(unsigned)(ar4 + 0x294);
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_set_xyz(puVar5 + -0x94,uVar3,ar6,ar7));
      *(unsigned *)(unsigned)(puVar5 + -0x108) = puVar5 + -0xa4;
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar5 + -0x108)); *(unsigned *)((((unsigned long)(fr0_ - 12)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 12)) - 8); FUN_8c023484(puVar5 + -0x88,puVar5 + -0x94,ar6,ar7); });
      *(unsigned *)(unsigned)(puVar5 + -0x108) = puVar5 + -0xb4;
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar5 + -0x108)); *(unsigned *)((((unsigned long)(fr0_ - 12)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 12)) - 8); Vec3_scale(puVar5 + -0xa4,((undefined1 *)(unsigned)0x8c1379c0),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_ctor_copy(puVar5 + -0x3c,puVar5 + -0xb4,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_dtor(puVar5 + -0xb4,0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_dtor(puVar5 + -0xa4,0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 12)), object_dtor_delete(puVar5 + -0x94,0xffffffff,ar6,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_dtor(puVar5 + -0x88,0xffffffff,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar5 + -0x104)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7); });
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar5 + -0xe4) = (int)((ulonglong)uVar8 >> 0x20);
        dVar7 = CONCAT44D(0x42f40000,*(undefined4 *)(unsigned)(puVar5 + -0xe4));
      }
      else {
        *(undefined8 *)(unsigned)(puVar5 + -0xe4) = uVar8;
        in_xd0 = *(undefined8 *)(unsigned)(puVar5 + -0xe4);
        dVar7 = -8.406882663868896e-251;
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = F32LO(dVar7) - F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar7 = CONCAT44D(0x42f00000,fVar6);
      }
      else {
        dVar7 = -7.95866521996774e-251;
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = F32LO(dVar7) / F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(puVar5 + -0xc0) = fVar6;
      }
      else {
        *(undefined8 *)(unsigned)(puVar5 + -0xc0) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c023bf4(puVar5 + -0x3c,puVar5 + -0xc0,ar6,ar7));
      ar5_01 = puVar5 + -0x3c;
      (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c023aa0(puVar5 + -0x2c,ar5_01,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c036988(iVar1,ar5_01,ar6,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 12)), Vec3_dtor(puVar5 + -0x3c,0xffffffff,ar6,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 12)), vec3_clear(puVar5 + -0x2c,uVar3,ar6,ar7));
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c03f3ac(ar4 + 0xb0,uVar3,ar6,ar7));
    *(undefined4 *)(unsigned)(puVar5 + -0xe8) = uVar2;
    if (*(int *)(unsigned)(puVar5 + -0xe8) == 7) {
      if (in_FPSCR_PR == '\0') {
        iVar1 = (int)in_fr15;
      }
      else {
        iVar1 = (int)CONCAT44D(in_fr14,in_fr15);
      }
      if (iVar1 == 0xa5) {
        uVar3 = 6;
        (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c033474(ar4,6,ar5,a4));
        ar6 = ar5;
        ar7 = a4;
      }
      *(int *)(unsigned)(puVar5 + -0xf8) = ar4;
      *(undefined4 *)(unsigned)(puVar5 + -0xfc) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(puVar5 + -0xf8) + 0x294);
      *(int *)(unsigned)(*(int *)(unsigned)(puVar5 + -0xf8) + 0x294) = *(int *)(unsigned)(puVar5 + -0xfc) + 1;
      if (*(int *)(unsigned)(puVar5 + -0xfc) + 1 < 6) {
        *(undefined4 *)(unsigned)(ar4 + 0x290) = *(undefined4 *)(unsigned)(ar4 + 0x294);
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 12)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
        *(int *)(unsigned)(puVar5 + -0x100) = ar4;
        *(int *)(unsigned)(*(int *)(unsigned)(puVar5 + -0x100) + 300) = *(int *)(unsigned)(*(int *)(unsigned)(puVar5 + -0x100) + 300) + 1;
      }
    }
  }
  else if (iVar1 == 2) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 12)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar6,ar7));
    *(undefined4 *)(unsigned)(puVar5 + -0xec) = uVar2;
    if (*(int *)(unsigned)(puVar5 + -0xec) == 1) {
      uVar4 = 0;
      (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c03c314(ar4,uVar3,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
    }
  }
  *(undefined4 *)(unsigned)(puVar5 + -0xbc) = uVar4;
  (vsp = ((unsigned long)(fr0_ - 12)), Vec3_dtor(puVar5 + -0x2c,0xffffffff,ar6,ar7));
  return *(undefined4 *)(unsigned)(puVar5 + -0xbc);
}

__asm__(".globl _FUN_8c07e828\n.set _FUN_8c07e828, _FUN_8c07e828_def\n");
