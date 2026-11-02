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
undefined4 FUN_8c097fcc_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c097fcc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  double dVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 ar5_00;
  undefined1 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  ulonglong in_dr0 = 0;
  double dVar8;
  float fVar10;
  ulonglong uVar9;
  undefined8 in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar4 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  uVar5 = (undefined4)in_dr0;
  if (*(int *)(unsigned)(ar4 + 300) == 0) {
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c022d04(((undefined1 *)(fr0_ - 0x1c)),uVar4,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x28)),uVar4,ar6_00,ar7_00));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x28)),ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(((undefined1 *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x38)),ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7_00));
    uVar4 = 0xffffffff;
    puVar3 = ((undefined1 *)(fr0_ - 0x28));
    (vsp = ((unsigned long)(fr0_ - 116)), object_dtor_delete(puVar3,0xffffffff,ar6_00,ar7_00));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(puVar3,uVar4,ar6_00,ar7_00));
    ar5_00 = 0x168;
    (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,0x168,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0238b4(((undefined1 *)(fr0_ - 0x1c)),ar5_00,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(((undefined1 *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x48)),ar6_00,ar7_00));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_normalize(((undefined1 *)(fr0_ - 0x1c)),uVar4,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(((undefined1 *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7_00));
    uVar4 = 0xffffffff;
    puVar3 = ((undefined1 *)(fr0_ - 0x58));
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(puVar3,0xffffffff,ar6_00,ar7_00));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(puVar3,uVar4,ar6_00,ar7_00));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,0x50,ar6_00,ar7_00));
    if (cVar11 == '\0') {
      dVar8 = CONCAT44D((float)iVar2,uVar5);
    }
    else {
      dVar8 = (double)iVar2;
    }
    dVar1 = dVar8;
    if (cVar12 == '\0') {
      (*(undefined8 *)(fr0_ - 0x70)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x70))+4)),(int)(D2U(dVar8) >> 0x20));
      dVar1 = (*(undefined8 *)(fr0_ - 0x70));
    }
    (*(undefined8 *)(fr0_ - 0x70)) = dVar1;
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023bf4(((undefined1 *)(fr0_ - 0x1c)),&(*(undefined8 *)(fr0_ - 0x70)),ar6_00,ar7_00));
    uVar6 = SUB84(dVar8,0);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_add(ar6,((undefined1 *)(fr0_ - 0x1c)),ar6_00,ar7_00); });
    ar6_00 = ((undefined1 *)(fr0_ - 0x68));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c093e80(ar4,ar5,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7));
    ar7_00 = ar7;
    if (iVar2 == 0) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      ar7_00 = 0;
      ar6_00 = (undefined1 *)(unsigned)0x0;
      uVar4 = 0;
      (vsp = ((unsigned long)(fr0_ - 116)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0,0));
      if (cVar12 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x220) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x220) = (ulonglong)uVar6;
      }
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c030f2c(ar4 + 0x1fc,uVar4,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c03f39c((*(undefined4 *)(fr0_ + 0x00000004)),uVar4,ar6_00,ar7_00));
    }
  }
  else if (*(int *)(unsigned)(ar4 + 300) == 1) {
    if (cVar12 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      fVar7 = *(float *)(unsigned)(ar4 + 0x220);
      fVar10 = 30.0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0 & 0xffffffff;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x220);
      fVar7 = 30.0;
      fVar10 = 2.0;
    }
    if (cVar11 != '\0' || fVar10 <= fVar7) {
      (vsp = ((unsigned long)(fr0_ - 116)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7_00));
      if (cVar12 == '\0') {
        fVar7 = *(float *)(unsigned)(ar4 + 0x220);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x220);
      }
      if (cVar11 == '\0') {
        fVar7 = fVar7 + 1.0;
      }
      else {
        fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x220) = fVar7;
        uVar9 = CONCAT44(0x42f00000,*(undefined4 *)(unsigned)(ar4 + 0x220));
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x220) = in_xd0;
        uVar9 = 0x454d00142f00000;
      }
      if (cVar11 == '\0' && (float)(uVar9 >> 0x20) < (float)uVar9) {
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x220) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x220) = uVar9 & 0xffffffff;
        }
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c03f3ac(ar4 + 0xb0,uVar4,ar6_00,ar7_00));
      if (cVar12 == '\0') {
        fVar7 = *(float *)(unsigned)(ar4 + 0x220);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x220);
      }
      if (cVar11 == '\0') {
        fVar7 = fVar7 + 1.0;
      }
      else {
        fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x220) = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x220) = in_xd0;
      }
    }
  }
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x70))+4)) = 1;
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6_00,ar7_00));
  return (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x70))+4));
}

__asm__(".globl _FUN_8c097fcc\n.set _FUN_8c097fcc, _FUN_8c097fcc_def\n");
