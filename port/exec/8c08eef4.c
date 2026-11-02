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
undefined4 FUN_8c08eef4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08eef4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 176; for (int i_ = 0; i_ < 176; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar5_01;
  undefined4 uVar2;
  undefined4 ar6_00;
  int ar5_02;
  float in_fr1 = 0;
  float fVar3;
  float fVar5;
  double dVar4;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  iVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x38)),iVar1,ar6,ar7));
  ar5_02 = ar5 + 0xb;
  uVar2 = 10;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c034148(ar4 + 0xb0,10,ar6,ar7));
  if ((iVar1 == 1) || (iVar1 == 2)) {
    (vsp = ((unsigned long)(fr0_ - 176)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7));
    if (cVar7 == '\0') {
      in_fr1 = *(float *)(unsigned)(ar4 + 0x2cc);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2cc);
    }
    if (cVar6 == '\0') {
      in_fr1 = in_fr1 + 1.0;
    }
    else {
      in_fr1 = SUB84(CONCAT44D(0x3f800000,in_fr1) + CONCAT44D(0x3f800000,in_fr1),0);
    }
    if (cVar7 == '\0') {
      *(float *)(unsigned)(ar4 + 0x2cc) = in_fr1;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x2cc) = in_xd0;
    }
    iVar1 = ar5_02;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c03c0f0(ar4 + 0xb0,ar5_02,ar6,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 176)), deref_u32(uVar2,iVar1,ar6,ar7));
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c0342ac(ar4 + 0xb0,uVar2,0,ar7));
    ar6_00 = 0;
    ar5_01 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c034548(ar4 + 0xb0,uVar2,0,ar7));
    if (cVar7 == '\0') {
      fVar3 = *(float *)(unsigned)(ar4 + 0x2cc);
      fVar5 = 319.0;
    }
    else {
      fVar3 = 319.0;
      fVar5 = 4.2039e-43;
    }
    if (fVar3 == fVar5) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7));
      ar7 = 0;
      ar6_00 = 0xffffffff;
      uVar2 = 0;
      iVar1 = ar4 + 0xb0;
      (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetAnimation_033a94(iVar1,0,0xffffffff,0));
      *(undefined4 *)(unsigned)(ar4 + 0x284) = 0x15;
      if (ar5_02 < 0xe) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 176)), rand(iVar1,uVar2,ar6_00,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 176)), libgcc_divide_helper_01031c(uVar2,0xaf0,ar6_00,ar7));
        if (cVar6 == '\0') {
          dVar4 = CONCAT44D((float)(iVar1 + 0x781),fVar3);
        }
        else {
          dVar4 = (double)(iVar1 + 0x781);
        }
        if (cVar7 == '\0') {
          *(int *)(unsigned)(ar4 + 0x27c) = (int)(D2U(dVar4) >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x27c) = dVar4;
        }
      }
      else {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 176)), rand(iVar1,uVar2,ar6_00,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 176)), libgcc_divide_helper_01031c(uVar2,3000,ar6_00,ar7));
        if (cVar6 == '\0') {
          dVar4 = CONCAT44D((float)(iVar1 + 2000),fVar3);
        }
        else {
          dVar4 = (double)(iVar1 + 2000);
        }
        if (cVar7 == '\0') {
          *(int *)(unsigned)(ar4 + 0x27c) = (int)(D2U(dVar4) >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x27c) = dVar4;
        }
      }
      *(byte *)(unsigned)(ar4 + 0x1fc) = *(byte *)(unsigned)(ar4 + 0x1fc) & 0xfb | 4;
    }
    (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_assign(ar4 + 0x2d0,((undefined1 *)(fr0_ - 0x48)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c023b4c(ar4 + 0x2d0,ar4 + 0x2e0,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c023bf4(ar4 + 0x2d0,ar4 + 0x2c4,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_assign(ar4 + 0x2e0,((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x64)),uVar2,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 176)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 176)) - 8); FUN_8c023484(ar4 + 0x2d0,((undefined1 *)(fr0_ - 0x64)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_assign(ar4 + 0x2d0,((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), object_dtor_delete(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c034650(ar4 + 0xb0,ar5_01,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), vec3_copy_8c023d8c(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x80)),ar6_00,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 176)), object_dtor_delete(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x90)),uVar2,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x9c)),uVar2,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xac))); *(unsigned *)((((unsigned long)(fr0_ - 176)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 176)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x90)),((undefined1 *)(fr0_ - 0x9c)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xac)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0xac)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), object_dtor_delete(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), object_dtor_delete(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 176)), object_dtor_delete(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c08eef4\n.set _FUN_8c08eef4, _FUN_8c08eef4_def\n");
