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
undefined4 FUN_8c055750_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c055750";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 216; for (int i_ = 0; i_ < 216; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int ar6_00;
  int ar7_00;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  ulonglong in_dr0 = 0;
  ulonglong uVar6;
  double dVar7;
  undefined8 in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar3 = 1;
  uVar2 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 216)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c10277c(((undefined1 *)(fr0_ - 0x34)),uVar2,ar6_00,ar7_00));
  uVar4 = (uint)in_dr0;
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c057164(ar4,ar5,ar6_00,ar7_00));
    if (iVar1 == 0) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
  }
  else {
    if (iVar1 == 1) {
      if (cVar9 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = in_dr0 & 0xffffffff;
        uVar4 = 0x40a00000;
      }
      (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c03263c(ar4,ar6,ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 216)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 216)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x44)),ar5,ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 216)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7_00));
      if (cVar9 != '\0') {
        uVar4 = 0x40400000;
      }
      (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c032788(ar4,ar4 + 0x54,ar7,(*(int *)(fr0_ + 0x00000000))));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      uVar2 = ar5;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 216)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 216)) - 8); Vec3_sub(ar4 + 0x54,ar5,ar7,(*(int *)(fr0_ + 0x00000000))); });
      (vsp = ((unsigned long)(fr0_ - 216)), Vec3_normalize(((undefined1 *)(fr0_ - 0x64)),uVar2,ar7,(*(int *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 216)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x74)),ar7,(*(int *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar7,(*(int *)(fr0_ + 0x00000000))));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar7,(*(int *)(fr0_ + 0x00000000))));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 216)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 216)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar7,(*(int *)(fr0_ + 0x00000000))); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 216)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 216)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x28)),uVar2,ar7,(*(int *)(fr0_ + 0x00000000))); });
      (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x84)),((undefined1 *)(fr0_ - 0x94)),ar7,(*(int *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar7,(*(int *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar7,(*(int *)(fr0_ + 0x00000000))));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      ar6_00 = ar7;
      ar7_00 = (*(int *)(fr0_ + 0x00000000));
    }
    else if (iVar1 != 2) {
      if (iVar1 == 3) {
        if (cVar9 == '\0') {
          dVar7 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar7 = -8.394521626779552e-251;
        }
        if (cVar8 == '\0') {
          fVar5 = F32LO(dVar7) * F32HI(dVar7);
        }
        else {
          fVar5 = SUB84(dVar7 * dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(unsigned)(ar4 + 0x28) = fVar5;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 216)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
        if (iVar1 == 1) {
          *(undefined4 *)(unsigned)(ar4 + 700) = 0;
          uVar3 = 0;
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        }
      }
      goto LAB_8c055a78;
    }
    uVar2 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 216)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 216)) - 8); Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 216)), Vec3_normalize(((undefined1 *)(fr0_ - 0xa4)),uVar2,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 216)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0xb4)),ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_00,ar7_00));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6_00,ar7_00));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc4))); *(unsigned *)((((unsigned long)(fr0_ - 216)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 216)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar6_00,ar7_00); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd4))); *(unsigned *)((((unsigned long)(fr0_ - 216)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 216)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x28)),uVar2,ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xc4)),((undefined1 *)(fr0_ - 0xd4)),ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd4)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc4)),0xffffffff,ar6_00,ar7_00));
    uVar6 = (ulonglong)uVar4;
    if (cVar9 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x58) = uVar6;
    }
    ar6_00 = ar4 + 0x54;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c04c314(ar4,ar5,ar6_00,ar7_00));
    if (iVar1 == 0) {
      if (cVar9 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f800000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x278) = CONCAT44(0x3f800000,(int)uVar6);
      }
      ar7_00 = 0;
      ar6_00 = -1;
      uVar2 = 0x1a;
      (vsp = ((unsigned long)(fr0_ - 216)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
      *(undefined4 *)(unsigned)(ar4 + 0x218) = 0;
      (vsp = ((unsigned long)(fr0_ - 216)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
  }
LAB_8c055a78:
  (vsp = ((unsigned long)(fr0_ - 216)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7_00));
  return uVar3;
}

__asm__(".globl _FUN_8c055750\n.set _FUN_8c055750, _FUN_8c055750_def\n");
