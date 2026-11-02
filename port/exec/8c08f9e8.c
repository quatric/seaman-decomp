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
undefined4 FUN_8c08f9e8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08f9e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 176; for (int i_ = 0; i_ < 176; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  undefined4 ar6_00;
  int ar5_01;
  undefined4 uVar3;
  float in_fr1 = 0;
  float fVar4;
  float fVar5;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x38)),ar5_00,ar6,ar7));
  ar5_01 = ar5 + 0xb;
  (vsp = ((unsigned long)(fr0_ - 176)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7));
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
  uVar1 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c03c0f0(ar4 + 0xb0,ar5_01,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 176)), deref_u32(uVar1,ar5_01,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c0342ac(ar4 + 0xb0,uVar1,0,ar7));
  ar6_00 = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c034548(ar4 + 0xb0,uVar1,0,ar7));
  if (cVar7 == '\0') {
    fVar4 = *(float *)(unsigned)(ar4 + 0x2cc);
    fVar5 = 6640.0;
  }
  else {
    fVar4 = 6640.0;
    fVar5 = 9040.0;
  }
  if (fVar4 != fVar5) {
    if (cVar7 == '\0') {
      fVar4 = *(float *)(unsigned)(ar4 + 0x2cc);
      fVar5 = 9040.0;
    }
    else {
      fVar4 = 9040.0;
      fVar5 = 4.2039e-43;
    }
    if (fVar4 != fVar5) goto LAB_8c08faa8;
  }
  *(undefined4 *)(unsigned)(ar4 + 300) = 0;
  uVar3 = 0;
LAB_8c08faa8:
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c034384(ar4 + 0xb0,uVar2,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_assign(ar4 + 0x2d0,((undefined1 *)(fr0_ - 0x48)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c023b4c(ar4 + 0x2d0,ar4 + 0x2e0,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c023bf4(ar4 + 0x2d0,ar4 + 0x2c4,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c034384(ar4 + 0xb0,uVar2,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_assign(ar4 + 0x2e0,((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x64)),uVar2,ar6_00,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 176)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 176)) - 8); FUN_8c023484(ar4 + 0x2d0,((undefined1 *)(fr0_ - 0x64)),ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_assign(ar4 + 0x2d0,((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), object_dtor_delete(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c034650(ar4 + 0xb0,uVar1,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), vec3_copy_8c023d8c(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x80)),ar6_00,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 176)), object_dtor_delete(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x90)),uVar1,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x9c)),uVar1,ar6_00,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xac))); *(unsigned *)((((unsigned long)(fr0_ - 176)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 176)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x90)),((undefined1 *)(fr0_ - 0x9c)),ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xac)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0xac)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), object_dtor_delete(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), object_dtor_delete(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 176)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c08f9e8\n.set _FUN_8c08f9e8, _FUN_8c08f9e8_def\n");
