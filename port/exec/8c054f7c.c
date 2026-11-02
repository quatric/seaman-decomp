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
undefined4 FUN_8c054f7c_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c054f7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 184; for (int i_ = 0; i_ < 184; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *ar5_00;
  undefined4 uVar2;
  int ar6_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 in_dr0 = 0;
  ulonglong uVar5;
  double dVar6;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar3 = 1;
  uVar2 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 184)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  if (cVar8 == '\0') {
    in_fr15 = 1.5;
  }
  (vsp = ((unsigned long)(fr0_ - 184)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x38)),uVar2,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c102748(((undefined1 *)(fr0_ - 0x44)),uVar2,ar6_00,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    if (((*(int *)(fr0_ + 0x00000000)) == 0) || ((*(int *)(fr0_ + 0x00000000)) == 2)) {
      (vsp = ((unsigned long)(fr0_ - 184)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
      return 0;
    }
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c033474(ar4,7,ar5,*(undefined4 *)(unsigned)(ar4 + 0x244)));
    uVar4 = (undefined4)in_dr0;
    ar7 = 0;
    ar6_00 = -1;
    uVar2 = 5;
    (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_sub(ar6,ar5,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_normalize(((undefined1 *)(fr0_ - 0x54)),ar5,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x64)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
    ar5_00 = ((undefined1 *)(unsigned)0x8c1365d4);
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c023bf4(ar4 + 0x2a8,((undefined1 *)(unsigned)0x8c1365d4),ar6_00,ar7));
    if (cVar8 == '\0') {
      uVar5 = CONCAT44((*(undefined4 *)(fr0_ - 0x24)),uVar4);
      *(undefined4 *)(unsigned)(ar4 + 0x2ac) = (*(undefined4 *)(fr0_ - 0x24));
    }
    else {
      uVar5 = CONCAT44((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
      *(ulonglong *)(unsigned)(ar4 + 0x2ac) = uVar5;
    }
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c031748(ar4,ar5_00,ar6_00,ar7));
    if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0xa0) = uVar5 & 0xffffffff;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
    *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
    if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar5 & 0xffffffff;
    }
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x2d4,ar4 + 0x2a8,ar6_00,ar7));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else if (iVar1 == 1) {
    iVar1 = ar4 + 0x2d4;
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x2a8,iVar1,ar6_00,ar7));
    uVar2 = (undefined4)in_dr0;
    *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
    (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar1,ar6_00,ar7));
    if (cVar8 == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2ac),uVar2);
    }
    else {
      dVar6 = *(double *)(unsigned)(ar4 + 0x2ac);
    }
    if (cVar7 == '\0') {
      dVar6 = CONCAT44D(F32HI(dVar6) - in_fr15,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 - CONCAT44D(in_fr14,in_fr15);
    }
    if (cVar8 == '\0') {
      *(int *)(unsigned)(ar4 + 0x2ac) = (int)(D2U(dVar6) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x2ac) = dVar6;
    }
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_normalize(ar4 + 0x2a8,iVar1,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x2a8,ar6_00,ar7));
    if (((*(int *)(fr0_ + 0x00000000)) == 0) || ((*(int *)(fr0_ + 0x00000000)) == 2)) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c023bf4(ar4 + 0x2a8,((undefined1 *)(unsigned)0x8c1365d8),ar6_00,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x2d4,ar4 + 0x2a8,ar6_00,ar7));
  }
  else {
    if (iVar1 == 2) {
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c05ae54(ar4,uVar2,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_length_sq(ar4 + 0x2d4,uVar2,ar6_00,ar7));
      if (cVar8 == '\0') {
        *(int *)(unsigned)(ar4 + 0x28) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_dr0;
      }
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_normalize(ar4 + 0x2d4,uVar2,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x84)),ar6_00,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), vec3_clear(ar4 + 0x2d4,uVar2,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), vec3_clear(ar4 + 0x2a8,uVar2,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x48,ar6_00,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x94)),((undefined1 *)(unsigned)0x8c1365dc),ar6_00,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xa4)),ar5,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0xb4)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
    else if (iVar1 != 3) goto LAB_8c0553ee;
    ar6_00 = ar4 + 0x54;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 184)), pure_virtual_stub(ar4,ar5,ar6_00,ar7));
    if (iVar1 == 0) {
      uVar3 = 0;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
    }
  }
LAB_8c0553ee:
  (vsp = ((unsigned long)(fr0_ - 184)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c054f7c\n.set _FUN_8c054f7c, _FUN_8c054f7c_def\n");
