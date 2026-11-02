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
undefined4 FUN_8c050300_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c050300";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 152; for (int i_ = 0; i_ < 152; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 *ar5_00;
  undefined4 uVar3;
  undefined4 *ar6_00;
  undefined4 ar7_00;
  undefined1 *ar7_01;
  undefined4 uVar4;
  uint in_fr1 = 0;
  float fVar5;
  double dVar6;
  undefined8 in_xd0 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar4 = 1;
  uVar3 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x28)),ar7,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x34)),ar7,uVar3,ar7_00));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_6c_028cc4(ar5,ar7,uVar3,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x44)),ar7,uVar3,ar7_00));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x44)),0xffffffff,uVar3,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 152)), object_dtor_delete(((undefined1 *)(fr0_ - 0x34)),0xffffffff,uVar3,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,uVar3,ar7_00));
    uVar4 = 2;
  }
  else {
    ar7_01 = ((undefined1 *)(fr0_ - 0x3c));
    ar6_00 = &(*(undefined4 *)(fr0_ - 0x40));
    ar5_00 = &(*(undefined4 *)(fr0_ - 0x44));
    (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0507a4(iVar1,ar5_00,ar6_00,ar7_01));
    iVar2 = *(int *)(unsigned)(ar4 + 300);
    if (iVar2 == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_00,ar6_00,ar7_01));
      if (iVar1 == 1) {
        ar7_01 = (undefined1 *)(unsigned)0x0;
        ar6_00 = (undefined4 *)(unsigned)0xffffffff;
        ar5_00 = (undefined4 *)(unsigned)0x0;
        (vsp = ((unsigned long)(fr0_ - 152)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 152)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7_01));
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
      }
      (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c05ae54(ar4,ar5_00,ar6_00,ar7_01));
      if (cVar8 == '\0') {
        dVar6 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar6 = 1.23128308427977e-311;
      }
      if (cVar7 == '\0') {
        fVar5 = F32HI(dVar6);
        dVar6 = CONCAT44D(fVar5,F32LO(dVar6) * fVar5);
      }
      else {
        dVar6 = dVar6 * dVar6;
      }
      if (cVar8 == '\0') {
        *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar6,0);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)) + 0x184))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)),ar5_00,ar6_00,ar7_01));
      if (cVar8 == '\0') {
        dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),(*(undefined4 *)(fr0_ - 0x40)));
      }
      if (cVar7 != '\0' || SUB84(dVar6,0) <= F32HI(dVar6)) {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        if (cVar8 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2c) = D2U(dVar6) & 0xffffffff;
        }
      }
    }
    else if (iVar2 == 1) {
      ar6_00 = &(*(undefined4 *)(fr0_ - 0x44));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), pure_virtual_stub(ar4,ar6,ar6_00,ar7_01));
      if ((iVar1 == 0) || (*(int *)(unsigned)(ar4 + 0x40) == 4)) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
        ar7_01 = (undefined1 *)(unsigned)0x0;
        ar6_00 = (undefined4 *)(unsigned)0xffffffff;
        uVar3 = 0x10;
        (vsp = ((unsigned long)(fr0_ - 152)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 152)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6_00,ar7_01));
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        if (cVar8 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)in_fr1;
        }
      }
    }
    else if (iVar2 == 2) {
      (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c05ae54(ar4,ar5_00,ar6_00,ar7_01));
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      ar7_01 = ((undefined1 *)(fr0_ - 0x3c));
      ar6_00 = &(*(undefined4 *)(fr0_ - 0x40));
      (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0507a4(iVar1,&(*(undefined4 *)(fr0_ - 0x44)),ar6_00,ar7_01));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 152)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 152)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x48,ar6_00,ar7_01); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 152)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 152)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c136598),ar6_00,ar7_01); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 152)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 152)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x64)),ar6,ar6_00,ar7_01); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 152)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 152)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x74)),&(*(undefined4 *)(fr0_ - 0x44)),ar6_00,ar7_01); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 152)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 152)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x84)),((undefined1 *)(unsigned)0x8c13659c),ar6_00,ar7_01); });
      (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c023aa0(&(*(undefined4 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x94)),ar6_00,ar7_01));
      (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_00,ar7_01));
      (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7_01));
      (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7_01));
      (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7_01));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7_01));
      (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c036988(iVar1,uVar3,ar6_00,ar7_01));
      if (cVar8 == '\0') {
        dVar6 = CONCAT44D(0x3f59999a,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar6 = 3.73996370277889e-312;
      }
      if (cVar7 == '\0') {
        fVar5 = F32LO(dVar6) * F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar8 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar5;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar6_00,ar7_01));
      if (iVar1 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        uVar4 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
        *(byte *)(unsigned)(ar4 + 0x1fc) = *(byte *)(unsigned)(ar4 + 0x1fc) & 0xfb | 4;
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c03f3e8(ar5,uVar3,ar6_00,ar7_01));
        ar7_01 = (undefined1 *)(unsigned)0x0;
        ar6_00 = (undefined4 *)(unsigned)0xffffffff;
        uVar3 = 0;
        (vsp = ((unsigned long)(fr0_ - 152)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 152)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6_00,ar7_01));
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
        if (cVar8 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)(uint)fVar5;
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7_01));
    (vsp = ((unsigned long)(fr0_ - 152)), object_dtor_delete(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7_01));
    (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7_01));
  }
  return uVar4;
}

__asm__(".globl _FUN_8c050300\n.set _FUN_8c050300, _FUN_8c050300_def\n");
