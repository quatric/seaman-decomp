//@unit 8c080890
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
uint FUN_8c080890_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c080890";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 276; for (int i_ = 0; i_ < 276; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  uint uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar3 = 1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 276)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x10c))))(ar6,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x20)),uVar1,ar6,ar7));
  if (cVar4 == '\0') {
    (*(undefined8 *)(fr0_ - 0x1c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1c))+4)),0x44570000);
  }
  else {
    (*(undefined8 *)(fr0_ - 0x1c)) = 0x14c44570000;
  }
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x60)),uVar1,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 276)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 276)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x60)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x70)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x80)),uVar1,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x90))); *(unsigned *)((((unsigned long)(fr0_ - 276)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 276)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x80)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x40)),((undefined1 *)(fr0_ - 0x90)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xa0)),uVar1,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 276)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 276)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0xa0)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x50)),((undefined1 *)(fr0_ - 0xb0)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar6,ar7));
  iVar2 = *(int *)(unsigned)(ar4 + 300);
  if (iVar2 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 276)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6,ar7));
    if (iVar2 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      ar6 = (int *)(unsigned)0x5;
      ar5_00 = 3;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 276)), rand_range(ar4,3,5,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x294) = uVar1;
      (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c032ab0(ar4,ar5_00,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c032ab0(ar4,ar5_00,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c032ab0(ar4,ar5_00,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xc0)),ar5_00,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd0))); *(unsigned *)((((unsigned long)(fr0_ - 276)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 276)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0xc0)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0xd0)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,ar6,ar7));
    }
  }
  else if (iVar2 == 1) {
    ar6 = (int *)(unsigned)(ar4 + 0x54);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 276)), pure_virtual_stub(ar4,ar5,ar6,ar7));
    if (iVar2 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xe0)),ar5,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf0))); *(unsigned *)((((unsigned long)(fr0_ - 276)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 276)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x40)),((undefined1 *)(fr0_ - 0xe0)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0xf0)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,ar6,ar7));
    }
  }
  else if (iVar2 == 2) {
    ar6 = (int *)(unsigned)(ar4 + 0x54);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 276)), pure_virtual_stub(ar4,ar5,ar6,ar7));
    if (iVar2 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x100)),ar5,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x110))); *(unsigned *)((((unsigned long)(fr0_ - 276)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 276)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x50)),((undefined1 *)(fr0_ - 0x100)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x110)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0x110)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0x100)),0xffffffff,ar6,ar7));
    }
  }
  else if (iVar2 == 3) {
    ar6 = (int *)(unsigned)(ar4 + 0x54);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 276)), pure_virtual_stub(ar4,ar5,ar6,ar7));
    if (iVar2 == 0) {
      iVar2 = *(int *)(unsigned)(ar4 + 0x294) + -1;
      *(int *)(unsigned)(ar4 + 0x294) = iVar2;
      uVar3 = (uint)(0 < iVar2);
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 276)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c080890\n.set _FUN_8c080890, _FUN_8c080890_def\n");
//@unit 8c080e80
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
undefined4 FUN_8c080e80_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c080e80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int *ar6_00;
  undefined4 uVar3;
  undefined4 in_fr1 = 0;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined4 in_fr3 = 0;
  undefined8 in_xd0 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar3 = 1;
  ar6_00 = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x10c))))(ar6,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 72)), Vec3_ctor_copy(&(*(int *)(fr0_ - 0x28)),uVar1,ar6_00,ar7));
  if (cVar8 == '\0') {
    (*(undefined8 *)(fr0_ - 0x44)) = CONCAT44D(0x444d0000,in_fr1);
  }
  else {
    (*(undefined8 *)(fr0_ - 0x44)) = -8.332610471145132e-251;
    (*(unsigned *)(fr0_ - 0x20) = (unsigned)(unsigned long)(((void *)0x8c031748)));
  }
  (*(int *)(fr0_ - 0x24)) = 0x444d0000;
  (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c031748(ar4,uVar1,ar6_00,ar7));
  iVar2 = *(int *)(unsigned)(ar4 + 300);
  if (iVar2 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6_00,ar7));
    if (iVar2 == 1) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x294) = 1;
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    }
  }
  else if (iVar2 == 1) {
    if (cVar8 == '\0') {
      dVar6 = CONCAT44D((*(int *)(fr0_ - 0x28)),in_fr3);
      dVar5 = CONCAT44D(0x40a00000,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      dVar6 = CONCAT44D((*(int *)(fr0_ - 0x24)),(*(int *)(fr0_ - 0x28)));
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
      dVar5 = -0.007812501880835043;
    }
    if (cVar7 == '\0') {
      dVar6 = CONCAT44D(F32HI(dVar6) +
                               F32LO(dVar5) * F32HI(dVar5),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 + dVar5 * dVar5;
    }
    iVar2 = (int)(D2U(dVar6) >> 0x20);
    (*(int *)(fr0_ - 0x28)) = iVar2;
    if (cVar8 != '\0') {
      (*(int *)(fr0_ - 0x28)) = SUB84(dVar6,0);
      (*(int *)(fr0_ - 0x24)) = iVar2;
    }
    ar6_00 = &(*(int *)(fr0_ - 0x28));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), pure_virtual_stub(ar4,ar5,ar6_00,ar7));
    if (iVar2 == 0) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      if (*(int *)(unsigned)(ar4 + 0x128) == 7) {
        if (cVar8 == '\0') {
          dVar6 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x48));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
          dVar6 = 0.0008789064584561856;
        }
        if (cVar7 == '\0') {
          fVar4 = F32LO(dVar6) * F32HI(dVar6);
        }
        else {
          fVar4 = SUB84(dVar6 * dVar6,0);
        }
        if (cVar8 == '\0') {
          *(float *)(unsigned)(ar4 + 0x48) = fVar4;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x48) = in_xd0;
        }
      }
      else {
        if (cVar8 == '\0') {
          dVar6 = CONCAT44D(0x3f4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x48));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
          dVar6 = -1.2917774888121279e-250;
        }
        if (cVar7 == '\0') {
          fVar4 = F32LO(dVar6) * F32HI(dVar6);
        }
        else {
          fVar4 = SUB84(dVar6 * dVar6,0);
        }
        if (cVar8 == '\0') {
          *(float *)(unsigned)(ar4 + 0x48) = fVar4;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x48) = in_xd0;
        }
      }
    }
  }
  else if (iVar2 == 2) {
    ar6_00 = &(*(int *)(fr0_ - 0x28));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), pure_virtual_stub(ar4,ar5,ar6_00,ar7));
    if (iVar2 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x10c))))(ar6,ar5,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0d9898(uVar1,ar5,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c032ab0(ar4,ar5,ar6_00,ar7));
      if (cVar8 == '\0') {
        (*(undefined8 *)(fr0_ - 0x44)) = CONCAT44D(uVar1,(int)((ulonglong)(*(undefined8 *)(fr0_ - 0x44)) >> 0x20));
        dVar6 = CONCAT44D(0x3ccccccd,*(undefined4 *)(unsigned)(ar4 + 0x48));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
        dVar6 = -8.39273668135511e-251;
      }
      if (cVar7 == '\0') {
        fVar4 = F32LO(dVar6) * F32HI(dVar6);
      }
      else {
        fVar4 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar8 == '\0') {
        (*(undefined8 *)(fr0_ - 0x44)) = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x44)),-fVar4);
      }
      if (cVar7 == '\0') {
        fVar4 = F32LO((*(undefined8 *)(fr0_ - 0x44))) * F32HI((*(undefined8 *)(fr0_ - 0x44)));
      }
      else {
        fVar4 = SUB84((*(undefined8 *)(fr0_ - 0x44)) * (*(undefined8 *)(fr0_ - 0x44)),0);
      }
      if (cVar8 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar4;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
    }
  }
  else if (iVar2 == 3) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6_00,ar7));
    if (iVar2 == 1) {
      ar7 = 0;
      ar6_00 = (int *)(unsigned)0xffffffff;
      uVar1 = 0;
      (vsp = ((unsigned long)(fr0_ - 72)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
    }
    if (cVar8 == '\0') {
      dVar6 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
      dVar6 = -8.625516738351765e-251;
    }
    if (cVar7 == '\0') {
      fVar4 = F32LO(dVar6) + F32HI(dVar6);
    }
    else {
      fVar4 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar8 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar4;
      fVar4 = *(float *)(unsigned)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
    }
    if (cVar7 != '\0' || 0.0 <= fVar4) {
      *(undefined4 *)(unsigned)(ar4 + 300) = 2;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      iVar2 = *(int *)(unsigned)(ar4 + 0x294) + -1;
      *(int *)(unsigned)(ar4 + 0x294) = iVar2;
      if (iVar2 < 1) {
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        uVar3 = 0;
        (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c03c314(ar4,uVar1,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7));
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(&(*(int *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c080e80\n.set _FUN_8c080e80, _FUN_8c080e80_def\n");
//@unit 8c0811b4
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
undefined4 FUN_8c0811b4_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0811b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 ar7_00;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  float fVar13;
  double dVar14;
  double in_dr14 = 0;
  undefined8 in_xd0 = 0;
  double in_xd14 = 0;
  double dVar15;
  double dVar16;
  bool bVar17;
  undefined4 in_PR = 0;
  char cVar18;
  char cVar19;
  
  cVar19 = '\0';
  cVar18 = '\0';
  (*(undefined4 *)(fr0_ - 0x10)) = 1;
  uVar11 = 1;
  uVar7 = ar5;
  iVar2 = ar6;
  (*(undefined4 *)(fr0_ - 0x14)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 256)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  pcVar8 = ((void *)0x8c023d34);
  (vsp = ((unsigned long)(fr0_ - 256)), Vec3_set_zero(&(*(float *)(fr0_ - 0x2c)),uVar7,ar6,((void *)0x8c023d34)));
  pcVar4 = ((void *)0x8c022c4c);
  (vsp = ((unsigned long)(fr0_ - 256)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x3c)),((void *)0x8c022c4c),ar6,pcVar8));
  (vsp = ((unsigned long)(fr0_ - 256)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x4c)),pcVar4,ar6,pcVar8));
  if (cVar19 == '\0') {
    dVar14 = CONCAT44D(0x3f7d70a4,*(undefined4 *)(unsigned)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
    dVar14 = 7.98396688937273e-312;
  }
  if (cVar18 == '\0') {
    fVar13 = F32HI(dVar14);
    dVar14 = CONCAT44D(fVar13,F32LO(dVar14) * fVar13);
  }
  else {
    dVar14 = dVar14 * dVar14;
  }
  if (cVar19 == '\0') {
    *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar14,0);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
  }
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 256)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 256)) - 8); FUN_8c0230f0(ar4 + 0x14,pcVar4,ar6,pcVar8); });
  pcVar5 = ((void *)0x8c082378);
  (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x5c)),((void *)0x8c082378),pcVar8));
  pcVar4 = (code *)0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,pcVar5,pcVar8));
  iVar3 = *(int *)(unsigned)(ar4 + 0x2b0);
  if (iVar3 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pcVar4,pcVar5,pcVar8));
    if (iVar2 == 1) {
      *(int *)(unsigned)(ar4 + 0x2b0) = *(int *)(unsigned)(ar4 + 0x2b0) + 1;
    }
  }
  else {
    if (iVar3 == 1) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 256)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 256)) - 8); FUN_8c0230f0(ar4 + 0x14,pcVar4,pcVar5,pcVar8); });
      (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x6c)),ar5,pcVar5,pcVar8));
      dVar15 = dVar14;
      if (cVar19 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   (int)(D2U(dVar14) >> 0x20));
        dVar15 = in_xd14;
      }
      (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,pcVar5,pcVar8));
      uVar7 = ar5;
      uVar10 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c023334(ar4 + 0x14,ar5,pcVar5,pcVar8));
      *(undefined4 *)(unsigned)(ar4 + 0x220) = uVar10;
      (vsp = ((unsigned long)(fr0_ - 256)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x7c)),uVar7,pcVar5,pcVar8));
      (vsp = ((unsigned long)(fr0_ - 256)), Vec3_assign(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0x7c)),pcVar5,pcVar8));
      (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,pcVar5,pcVar8));
      if (iVar2 == 1) {
        pcVar5 = ((void *)0x8c023a14);
        (vsp = ((unsigned long)(fr0_ - 256)), Vec3_assign(((undefined1 *)(fr0_ - 0x4c)),ar5,((void *)0x8c023a14),pcVar8));
      }
      else {
        if (cVar19 == '\0') {
          dVar14 = CONCAT44D(0x41200000,SUB84(dVar14,0));
        }
        else {
          dVar14 = 1.29071326503144e-311;
        }
        fVar13 = F32LO(in_dr14);
        if (cVar18 == '\0') {
          bVar17 = F32HI(dVar14) < fVar13;
        }
        else {
          bVar17 = dVar14 < in_dr14;
        }
        if (!bVar17) {
          *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
          uVar11 = 0;
          uVar7 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,uVar7,uVar11));
          (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,uVar7,uVar11));
          (vsp = ((unsigned long)(fr0_ - 256)), object_dtor_delete(&(*(float *)(fr0_ - 0x2c)),0xffffffff,uVar7,uVar11));
          (vsp = ((unsigned long)(fr0_ - 256)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x20)),0xffffffff,uVar7,((void *)0x8c014a34)));
          return 0;
        }
        if (cVar19 == '\0') {
          dVar14 = CONCAT44D(0x42960000,SUB84(dVar14,0));
        }
        else {
          dVar14 = 8.3237428396117e-312;
        }
        if (cVar18 == '\0') {
          bVar17 = F32HI(dVar14) < fVar13;
        }
        else {
          bVar17 = dVar14 < in_dr14;
        }
        if (bVar17) {
          if (cVar19 == '\0') {
            dVar14 = CONCAT44D(0x42d20000,SUB84(dVar14,0));
          }
          else {
            dVar14 = 1.29072731755484e-311;
          }
          if (cVar18 == '\0') {
            bVar17 = F32HI(dVar14) < fVar13;
          }
          else {
            bVar17 = dVar14 < in_dr14;
          }
          if (!bVar17) {
            *(undefined4 *)(unsigned)(ar4 + 0x260) = *(undefined4 *)(unsigned)(ar4 + 0x220);
            *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
            (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
            if (*(int *)(unsigned)(ar4 + 0x260) == 3) {
              uVar10 = 0;
              uVar11 = 0xffffffff;
              uVar7 = 5;
              (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0));
            }
            else if (*(int *)(unsigned)(ar4 + 0x260) == 4) {
              uVar10 = 0;
              uVar11 = 0xffffffff;
              uVar7 = 6;
              (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,6,0xffffffff,0));
            }
            else {
              uVar10 = 0;
              uVar11 = 0xffffffff;
              uVar7 = 0;
              (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
            }
            (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,uVar11,uVar10));
            (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,uVar11,uVar10));
            (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,uVar11,uVar10));
            (vsp = ((unsigned long)(fr0_ - 256)), object_dtor_delete(&(*(float *)(fr0_ - 0x2c)),0xffffffff,uVar11,uVar10));
            (vsp = ((unsigned long)(fr0_ - 256)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x20)),0xffffffff,uVar11,uVar10));
            return 0;
          }
          (vsp = ((unsigned long)(fr0_ - 256)), Vec3_assign(((undefined1 *)(fr0_ - 0x4c)),ar5,pcVar5,pcVar8));
          if (*(int *)(unsigned)(ar4 + 0x220) == 3) {
            (vsp = ((unsigned long)(fr0_ - 256)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x88)),ar5,pcVar5,pcVar8));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x98))); *(unsigned *)((((unsigned long)(fr0_ - 256)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 256)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0x88)),pcVar5,pcVar8); });
            (vsp = ((unsigned long)(fr0_ - 256)), Vec3_assign(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0x98)),pcVar5,pcVar8));
            (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,pcVar5,pcVar8));
            uVar7 = 0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 256)), object_dtor_delete(((undefined1 *)(fr0_ - 0x88)),0xffffffff,pcVar5,pcVar8));
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 256)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xa4)),ar5,pcVar5,pcVar8));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 256)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 256)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0xa4)),pcVar5,pcVar8); });
            (vsp = ((unsigned long)(fr0_ - 256)), Vec3_assign(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0xb4)),pcVar5,pcVar8));
            (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,pcVar5,pcVar8));
            uVar7 = 0xffffffff;
            pcVar5 = ((void *)0x8c014a34);
            (vsp = ((unsigned long)(fr0_ - 256)), object_dtor_delete(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,((void *)0x8c014a34),pcVar8));
          }
          (vsp = ((unsigned long)(fr0_ - 256)), Vec3_normalize(((undefined1 *)(fr0_ - 0x4c)),uVar7,pcVar5,pcVar8));
          (vsp = ((unsigned long)(fr0_ - 256)), Vec3_assign(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0xc4)),pcVar5,pcVar8));
          ar5 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc4)),0xffffffff,pcVar5,pcVar8));
          *(undefined4 *)(unsigned)(ar4 + 0x260) = *(undefined4 *)(unsigned)(ar4 + 0x220);
        }
        else {
          pcVar5 = ((void *)0x8c023a14);
          (vsp = ((unsigned long)(fr0_ - 256)), Vec3_assign(((undefined1 *)(fr0_ - 0x4c)),ar5,((void *)0x8c023a14),pcVar8));
          *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
        }
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd4))); *(unsigned *)((((unsigned long)(fr0_ - 256)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 256)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,pcVar5,pcVar8); });
      (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xd4)),((undefined1 *)(fr0_ - 0x4c)),pcVar5,pcVar8));
      dVar16 = dVar14;
      if (cVar19 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   (int)(D2U(dVar14) >> 0x20));
        dVar16 = dVar15;
      }
      (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd4)),0xffffffff,pcVar5,pcVar8));
      uVar10 = SUB84(dVar14,0);
      uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(fr0_ - 0x4c)),pcVar5,pcVar8));
      *(undefined4 *)(unsigned)(ar4 + 0x220) = uVar7;
      if (cVar19 == '\0') {
        dVar14 = CONCAT44D(0x42b40000,uVar10);
      }
      else {
        dVar14 = 6.28663659401089e-312;
      }
      if (cVar18 == '\0') {
        bVar17 = SUB84(in_dr14,0) < F32HI(dVar14);
      }
      else {
        bVar17 = in_dr14 < dVar14;
      }
      if (bVar17) {
        if (*(int *)(unsigned)(ar4 + 0x128) < 2) {
          uVar11 = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
          goto LAB_8c0822ea;
        }
        if (*(int *)(unsigned)(ar4 + 0x128) == 2) {
          if (*(int *)(unsigned)(ar4 + 0x220) == 3) {
            uVar10 = 0;
            pcVar8 = (code *)0xffffffff;
            uVar7 = 9;
            (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0));
            uVar6 = SUB84(dVar14,0);
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,pcVar8,uVar10));
            uVar10 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,uVar10));
            pcVar5 = ((void *)0x8c015b4c);
            puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar10,uVar7,pcVar8,((void *)0x8c015b4c)));
            uVar7 = puVar1[1];
            *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137618);
          }
          else {
            uVar9 = 0;
            pcVar8 = (code *)0xffffffff;
            uVar7 = 10;
            (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0));
            uVar6 = SUB84(dVar14,0);
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,pcVar8,uVar9));
            uVar10 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,uVar9));
            puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar10,uVar7,pcVar8,uVar9));
            pcVar5 = (code *)(ar4 + 0xb4);
            uVar7 = puVar1[1];
            *(undefined4 *)(unsigned)pcVar5 = *puVar1;
            *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137630);
          }
        }
        else if (*(int *)(unsigned)(ar4 + 0x128) < 6) {
          if (*(int *)(unsigned)(ar4 + 0x220) == 3) {
            pcVar5 = (code *)0x0;
            pcVar8 = (code *)0xffffffff;
            uVar7 = 9;
            (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0));
            uVar6 = SUB84(dVar14,0);
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,pcVar8,pcVar5));
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,pcVar5));
            puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar7,uVar7,pcVar8,pcVar5));
            uVar7 = puVar1[1];
            *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137678);
          }
          else {
            uVar9 = 0;
            uVar10 = 0xffffffff;
            uVar7 = 10;
            (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0));
            uVar6 = SUB84(dVar14,0);
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,uVar10,uVar9));
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,uVar10,uVar9));
            puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar7,uVar7,uVar10,uVar9));
            uVar7 = puVar1[1];
            *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
            pcVar5 = (code *)0xb4;
            pcVar8 = (code *)((undefined1 *)(unsigned)0x8c137690);
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137690);
          }
        }
        else if (*(int *)(unsigned)(ar4 + 0x220) == 3) {
          uVar9 = 0;
          uVar10 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0));
          uVar6 = SUB84(dVar14,0);
          uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,((void *)0x8c026db0),uVar10,uVar9));
          uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,uVar10,uVar9));
          puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar7,uVar7,uVar10,((void *)0x8c015b4c)));
          uVar7 = puVar1[1];
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar1;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
          *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
          pcVar8 = (code *)(*(int *)(unsigned)(ar4 + 0x128) + -6);
          pcVar5 = (code *)0xb4;
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c1376d8) + (int)pcVar8 * 0x18;
        }
        else {
          uVar9 = 0;
          uVar10 = 0xffffffff;
          uVar7 = 10;
          (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0));
          uVar6 = SUB84(dVar14,0);
          uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,uVar10,uVar9));
          uVar9 = 0xb0;
          uVar10 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,0xb0,uVar7));
          pcVar5 = ((void *)0x8c015b4c);
          pcVar8 = (code *)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar10,uVar7,uVar9,((void *)0x8c015b4c)));
          uVar7 = *(undefined4 *)(unsigned)(pcVar8 + 4);
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *(undefined4 *)(unsigned)pcVar8;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
          *(undefined4 *)(unsigned)(ar4 + 0xbc) = *(undefined4 *)(unsigned)(pcVar8 + 8);
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137708) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18;
        }
        if (cVar19 == '\0') {
          dVar14 = CONCAT44D(0x42700000,uVar6);
        }
        else {
          dVar14 = 3.510285662012026e-304;
        }
        if (cVar18 == '\0') {
          fVar13 = F32LO(in_dr14) / F32HI(dVar14);
        }
        else {
          fVar13 = SUB84(in_dr14 / dVar14,0);
        }
        if (cVar19 == '\0') {
          *(float *)(unsigned)(ar4 + 0x240) = fVar13;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x240) = dVar16;
        }
      }
      else {
        if (*(int *)(unsigned)(ar4 + 0x128) < 2) {
          uVar11 = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
          goto LAB_8c0822ea;
        }
        if (*(int *)(unsigned)(ar4 + 0x128) == 2) {
          if (*(int *)(unsigned)(ar4 + 0x220) == 3) {
            pcVar5 = (code *)0x0;
            pcVar8 = (code *)0xffffffff;
            uVar7 = 2;
            (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
            uVar9 = SUB84(dVar14,0);
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,pcVar8,pcVar5));
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,pcVar5));
            puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar7,((void *)0x8c015b4c),pcVar8,pcVar5));
            uVar7 = puVar1[1];
            *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137648);
          }
          else {
            pcVar5 = (code *)0x0;
            pcVar8 = (code *)0xffffffff;
            uVar7 = 3;
            (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0));
            uVar9 = SUB84(dVar14,0);
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,pcVar8,pcVar5));
            uVar10 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,pcVar5));
            puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar10,uVar7,pcVar8,pcVar5));
            uVar7 = puVar1[1];
            *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137660);
          }
        }
        else if (*(int *)(unsigned)(ar4 + 0x128) < 6) {
          if (*(int *)(unsigned)(ar4 + 0x220) == 3) {
            uVar6 = 0;
            uVar10 = 0xffffffff;
            uVar7 = 2;
            (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
            uVar9 = SUB84(dVar14,0);
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,uVar10,uVar6));
            pcVar5 = (code *)(ar4 + 0xb0);
            pcVar8 = ((void *)0x8c03c0f0);
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(pcVar5,uVar7,((void *)0x8c03c0f0),pcVar5));
            puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar7,uVar7,pcVar8,pcVar5));
            uVar7 = puVar1[1];
            *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c1376a8);
          }
          else {
            uVar6 = 0;
            uVar10 = 0xffffffff;
            uVar7 = 3;
            (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0));
            uVar9 = SUB84(dVar14,0);
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,uVar10,uVar6));
            pcVar5 = (code *)(ar4 + 0xb0);
            pcVar8 = ((void *)0x8c03c0f0);
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(pcVar5,uVar7,((void *)0x8c03c0f0),pcVar5));
            puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar7,uVar7,pcVar8,pcVar5));
            uVar7 = puVar1[1];
            *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c1376c0);
          }
        }
        else if (*(int *)(unsigned)(ar4 + 0x220) == 3) {
          pcVar5 = (code *)0x0;
          uVar10 = 0xffffffff;
          uVar7 = 2;
          (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
          uVar9 = SUB84(dVar14,0);
          uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,uVar10,pcVar5));
          pcVar8 = (code *)(vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,uVar10,pcVar5));
          puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(pcVar8,((void *)0x8c015b4c),pcVar8,pcVar5));
          uVar7 = puVar1[1];
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar1;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
          *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137798) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18;
        }
        else {
          ar7_00 = 0;
          uVar6 = 0xffffffff;
          uVar7 = 3;
          (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0));
          uVar9 = SUB84(dVar14,0);
          uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,uVar6,ar7_00));
          uVar10 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,uVar6,ar7_00));
          puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar10,uVar7,uVar6,ar7_00));
          uVar7 = puVar1[1];
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar1;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
          *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
          pcVar8 = (code *)(*(int *)(unsigned)(ar4 + 0x128) + -6);
          pcVar5 = (code *)0xb4;
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c1377c8) + (int)pcVar8 * 0x18;
        }
        if (cVar19 == '\0') {
          dVar14 = CONCAT44D(0x43340000,uVar9);
        }
        else {
          dVar14 = 1.2652665412137e-311;
        }
        if (cVar18 == '\0') {
          fVar13 = F32LO(in_dr14) / F32HI(dVar14);
        }
        else {
          fVar13 = SUB84(in_dr14 / dVar14,0);
        }
        if (cVar19 == '\0') {
          *(float *)(unsigned)(ar4 + 0x240) = fVar13;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x240) = dVar16;
        }
      }
      uVar12 = SUB84(dVar14,0);
      (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c02a1fc(ar4 + 0x254,0x254,pcVar8,pcVar5));
      if (cVar19 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)uVar12;
      }
      pcVar4 = ((void *)0x8c033e68);
      (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,((void *)0x8c033e68),pcVar8,pcVar5));
      pcVar8 = (code *)0x2b0;
      pcVar5 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x2b0));
      *(unsigned *)(unsigned)(ar4 + 0x2b0) = pcVar5 + 1;
    }
    else if (iVar3 != 2) goto LAB_8c0822ea;
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 256)); CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar4,pcVar5,pcVar8); });
    uVar10 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xb4) + 4);
    uVar7 = 0xb0;
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c034650(ar4 + 0xb0,uVar10,0xb0,uVar10));
    (vsp = ((unsigned long)(fr0_ - 256)), vec3_copy_8c023d8c(&(*(undefined4 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0xe0)),uVar7,uVar10));
    (vsp = ((unsigned long)(fr0_ - 256)), object_dtor_delete(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,((void *)0x8c014a34),((undefined1 *)(fr0_ - 0xe0))));
    if (cVar19 == '\0') {
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x254),(*(undefined4 *)(fr0_ - 0x20)));
    }
    else {
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
      dVar14 = *(double *)(unsigned)(ar4 + 0x254);
    }
    if (cVar18 == '\0') {
      fVar13 = F32LO(dVar14) - F32HI(dVar14);
    }
    else {
      fVar13 = SUB84(dVar14 - dVar14,0);
    }
    if (cVar19 == '\0') {
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x240),fVar13);
    }
    else {
      dVar14 = *(double *)(unsigned)(ar4 + 0x240);
    }
    if (cVar18 == '\0') {
      (*(float *)(fr0_ - 0x2c)) = F32LO(dVar14) * F32HI(dVar14);
    }
    else {
      (*(float *)(fr0_ - 0x2c)) = SUB84(dVar14 * dVar14,0);
    }
    if (cVar19 == '\0') {
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 600),(*(undefined4 *)(fr0_ - 0x1c)));
    }
    else {
      (*(float *)(fr0_ - 0x2c)) = (float)in_xd0;
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
      dVar14 = *(double *)(unsigned)(ar4 + 600);
    }
    if (cVar18 == '\0') {
      fVar13 = F32LO(dVar14) - F32HI(dVar14);
    }
    else {
      fVar13 = SUB84(dVar14 - dVar14,0);
    }
    if (cVar19 == '\0') {
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x240),fVar13);
    }
    else {
      dVar14 = *(double *)(unsigned)(ar4 + 0x240);
    }
    if (cVar18 == '\0') {
      (*(float *)(fr0_ - 0x28)) = F32LO(dVar14) * F32HI(dVar14);
    }
    else {
      (*(float *)(fr0_ - 0x28)) = SUB84(dVar14 * dVar14,0);
    }
    if (cVar19 == '\0') {
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x25c),(*(undefined4 *)(fr0_ - 0x18)));
    }
    else {
      (*(float *)(fr0_ - 0x28)) = (float)in_xd0;
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
      dVar14 = *(double *)(unsigned)(ar4 + 0x25c);
    }
    if (cVar18 == '\0') {
      fVar13 = F32LO(dVar14) - F32HI(dVar14);
    }
    else {
      fVar13 = SUB84(dVar14 - dVar14,0);
    }
    if (cVar19 == '\0') {
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x240),fVar13);
    }
    else {
      dVar14 = *(double *)(unsigned)(ar4 + 0x240);
    }
    if (cVar18 == '\0') {
      fVar13 = F32LO(dVar14) * F32HI(dVar14);
    }
    else {
      fVar13 = SUB84(dVar14 * dVar14,0);
    }
    (*(float *)(fr0_ - 0x24)) = fVar13;
    if (cVar19 != '\0') {
      (*(float *)(fr0_ - 0x24)) = (float)in_xd0;
      (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    pcVar8 = (code *)&(*(undefined4 *)(fr0_ - 0x20));
    uVar10 = 0x254;
    (vsp = ((unsigned long)(fr0_ - 256)), vec3_copy_8c023d8c(ar4 + 0x254,pcVar8,0x254,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 256)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0xec)),&(*(float *)(fr0_ - 0x2c)),uVar10,pcVar8));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xfc))); *(unsigned *)((((unsigned long)(fr0_ - 256)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 256)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0xec)),uVar10,pcVar8); });
    (vsp = ((unsigned long)(fr0_ - 256)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xfc)),uVar10,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0xfc)),0xffffffff,uVar10,pcVar8));
    uVar7 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 256)), object_dtor_delete(((undefined1 *)(fr0_ - 0xec)),0xffffffff,uVar10,pcVar8));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar7,uVar10,pcVar8));
    if (iVar2 == 1) {
      uVar11 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
      if (*(int *)(unsigned)(ar4 + 0x260) == 3) {
        pcVar8 = (code *)0x0;
        uVar7 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0));
      }
      else if (*(int *)(unsigned)(ar4 + 0x260) == 4) {
        pcVar8 = (code *)0x0;
        uVar7 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,6,0xffffffff,0));
      }
      else {
        pcVar8 = (code *)0x0;
        uVar7 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,uVar7,pcVar8));
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      if (cVar19 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)(uint)fVar13;
      }
    }
  }
LAB_8c0822ea:
  uVar7 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,0xffffffff,pcVar8));
  (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,uVar7,pcVar8));
  (vsp = ((unsigned long)(fr0_ - 256)), object_dtor_delete(&(*(float *)(fr0_ - 0x2c)),0xffffffff,uVar7,pcVar8));
  (vsp = ((unsigned long)(fr0_ - 256)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x20)),0xffffffff,uVar7,pcVar8));
  return uVar11;
}

__asm__(".globl _FUN_8c0811b4\n.set _FUN_8c0811b4, _FUN_8c0811b4_def\n");
//@unit 8c082378
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
undefined4 FUN_8c082378_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c082378";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  undefined4 in_fr4 = 0;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = ar5;
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_normalize(ar5,uVar3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign(((undefined1 *)(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  iVar2 = *(int *)(unsigned)(ar4 + 0x2b4);
  *(int *)(unsigned)(ar4 + 0x2b4) = iVar2 + 1;
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),(float)(iVar2 + 1));
  }
  else {
    dVar5 = *(double *)(unsigned)(ar4 + 0x38);
  }
  if (cVar6 == '\0') {
    fVar4 = F32LO(dVar5) / F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
  }
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(in_fr4,fVar4);
  }
  else {
    dVar5 = CONCAT44D(iVar2,in_fr4);
  }
  if (cVar6 == '\0') {
    fVar4 = F32LO(dVar5) / F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
  }
  uVar1 = in_xd0;
  if (cVar7 == '\0') {
    (*(undefined8 *)(fr0_ - 0x4c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x4c))+4)),fVar4);
    uVar1 = (*(undefined8 *)(fr0_ - 0x4c));
  }
  (*(undefined8 *)(fr0_ - 0x4c)) = uVar1;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 80)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 80)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x18)),&(*(undefined8 *)(fr0_ - 0x4c)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c023aa0(ar4 + 0x14,((undefined1 *)(fr0_ - 0x38)),ar6,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_normalize(ar4 + 0x14,uVar3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign(ar4 + 0x14,(int)&(*(undefined8 *)(fr0_ - 0x4c)) + 4,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x4c)) + 4,0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c082378\n.set _FUN_8c082378, _FUN_8c082378_def\n");
//@unit 8c08248c
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
undefined4 FUN_8c08248c_def(int ar4,int ar5,undefined4 *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c08248c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 196; for (int i_ = 0; i_ < 196; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined1 *ar5_00;
  undefined4 uVar5;
  int *ar7_00;
  undefined4 uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  double in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar6 = 1;
  ar7_00 = ar7;
  puVar2 = ar6;
  (vsp = ((unsigned long)(fr0_ - 196)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  pcVar4 = ((void *)0x8c022c4c);
  (vsp = ((unsigned long)(fr0_ - 196)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),((void *)0x8c022c4c),ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 196)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x44)),pcVar4,ar6,ar7_00));
  if (cVar12 == '\0') {
    dVar8 = CONCAT44D(0x3f99999a,*(undefined4 *)(unsigned)(ar4 + 0x48));
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x48);
    dVar8 = 7.971355768799707e+24;
  }
  if (cVar11 == '\0') {
    fVar7 = F32LO(dVar8) * F32HI(dVar8);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (cVar12 == '\0') {
    dVar8 = CONCAT44D(0x451a6000,fVar7);
  }
  else {
    dVar8 = 8.23907165070957e-312;
  }
  if (cVar11 == '\0') {
    dVar8 = CONCAT44D(F32HI(dVar8) - F32LO(dVar8),SUB84(dVar8,0));
  }
  else {
    dVar8 = dVar8 - dVar8;
  }
  uVar5 = (undefined4)(D2U(dVar8) >> 0x20);
  (*(undefined4 *)(fr0_ - 0x24)) = uVar5;
  if (cVar12 != '\0') {
    (*(undefined4 *)(fr0_ - 0x24)) = SUB84(dVar8,0);
    (*(float *)(fr0_ - 0x20)) = (float)uVar5;
  }
  (vsp = ((unsigned long)(fr0_ - 196)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x184))))(ar7,*ar7,ar6,ar7_00));
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x42480000,(int)(D2U(dVar8) >> 0x20));
    dVar8 = in_xd0;
  }
  else {
    dVar9 = 5.69244280312755e-312;
  }
  if (cVar11 == '\0') {
    (*(float *)(fr0_ - 0x20)) = F32LO(dVar9) - F32HI(dVar9);
  }
  else {
    (*(float *)(fr0_ - 0x20)) = SUB84(dVar9 - dVar9,0);
  }
  if (cVar12 == '\0') {
    uVar5 = 0x448e8000;
    fVar7 = (*(float *)(fr0_ - 0x20));
  }
  else {
    (*(float *)(fr0_ - 0x20)) = SUB84(dVar8,0);
    fVar7 = 1140.0;
    uVar5 = 0x110;
    (*(undefined4 *)(fr0_ - 0x18)) = 0x110;
  }
  (*(undefined4 *)(fr0_ - 0x1c)) = 0x448e8000;
  pcVar4 = ((void *)0x8c022ce8);
  (vsp = ((unsigned long)(fr0_ - 196)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x54)),((void *)0x8c022ce8),ar6,ar7_00));
  if (*(int *)(unsigned)(ar4 + 0x128) < 7) {
    (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7_00));
    uVar6 = 0;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 196)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x184))))(ar7,pcVar4,ar6,ar7_00));
    if (cVar12 == '\0') {
      uVar10 = CONCAT44(0x43200000,uVar5);
    }
    else {
      dVar8 = CONCAT44D(uVar5,fVar7);
      uVar10 = 0xd843200000;
    }
    if (cVar11 != '\0' || (float)uVar10 <= (float)(uVar10 >> 0x20)) {
      iVar3 = *(int *)(unsigned)(ar4 + 300);
      if ((iVar3 < 5) && (-1 < iVar3)) {
                    
        switch(iVar3) {
        case 0:
          if (cVar12 == '\0') {
            dVar9 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            dVar8 = *(double *)(unsigned)(ar4 + 0x28);
            dVar9 = 3.73996784729797e-312;
          }
          if (cVar11 == '\0') {
            fVar7 = F32LO(dVar9) * F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 * dVar9,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)(ar4 + 0x28) = fVar7;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x28) = dVar8;
          }
          iVar3 = (vsp = ((unsigned long)(fr0_ - 196)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pcVar4,ar6,ar7_00));
          if (iVar3 == 1) {
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          }
          break;
        case 1:
          ar6 = &(*(undefined4 *)(fr0_ - 0x24));
          iVar3 = (vsp = ((unsigned long)(fr0_ - 196)), pure_virtual_stub(ar4,ar5,ar6,ar7_00));
          if (iVar3 == 0) {
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
            *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
            if (cVar12 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar10 & 0xffffffff;
            }
            *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xe;
          }
          break;
        case 2:
          if (cVar12 == '\0') {
            dVar9 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            dVar8 = *(double *)(unsigned)(ar4 + 0x28);
            dVar9 = 4.24924683712963e-312;
          }
          if (cVar11 == '\0') {
            fVar7 = F32LO(dVar9) * F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 * dVar9,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)(ar4 + 0x28) = fVar7;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x28) = dVar8;
          }
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 196)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 196)) - 8); FUN_8c0230f0(ar4 + 0x14,pcVar4,ar6,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 196)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x64)),ar6,ar7_00));
          uVar5 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), vec3_clear(ar4 + 700,uVar5,ar6,ar7_00));
          if (cVar12 == '\0') {
            dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 4),(*(float *)(fr0_ - 0x20)));
          }
          else {
            dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
            dVar9 = *(double *)(unsigned)(ar5 + 4);
          }
          if (cVar11 == '\0') {
            fVar7 = F32LO(dVar9) - F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 - dVar9,0);
          }
          if (cVar12 == '\0') {
            dVar9 = CONCAT44D(0x3c23d70a,fVar7);
          }
          else {
            dVar9 = 3.73969762439725e-312;
          }
          if (cVar11 == '\0') {
            fVar7 = F32LO(dVar9) * F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 * dVar9,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)(ar4 + 0x2c0) = fVar7;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x2c0) = dVar8;
          }
          iVar3 = (vsp = ((unsigned long)(fr0_ - 196)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar5,ar6,ar7_00));
          if ((iVar3 == 1) &&
             (iVar3 = *(int *)(unsigned)(ar4 + 0x294), *(int *)(unsigned)(ar4 + 0x294) = iVar3 + 1, 0 < iVar3)) {
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
          }
          break;
        case 3:
          if (cVar12 == '\0') {
            dVar9 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            dVar8 = *(double *)(unsigned)(ar4 + 0x28);
            dVar9 = 1.4859225791956e-311;
          }
          if (cVar11 == '\0') {
            fVar7 = F32LO(dVar9) * F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 * dVar9,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)(ar4 + 0x28) = fVar7;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x28) = dVar8;
          }
          (vsp = ((unsigned long)(fr0_ - 196)), vec3_clear(ar4 + 700,pcVar4,ar6,ar7_00));
          if (cVar12 == '\0') {
            dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 4),(*(float *)(fr0_ - 0x20)));
          }
          else {
            dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
            dVar9 = *(double *)(unsigned)(ar5 + 4);
          }
          if (cVar11 == '\0') {
            fVar7 = F32LO(dVar9) - F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 - dVar9,0);
          }
          if (cVar12 == '\0') {
            dVar9 = CONCAT44D(0x3c23d70a,fVar7);
          }
          else {
            dVar9 = 4.58849594078336e-312;
          }
          if (cVar11 == '\0') {
            fVar7 = F32LO(dVar9) * F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 * dVar9,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)(ar4 + 0x2c0) = fVar7;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x2c0) = dVar8;
          }
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x74)),((undefined1 *)(fr0_ - 0x54)),ar6,ar7_00));
          ar6 = (undefined4 *)(unsigned)0x1;
          iVar3 = (vsp = ((unsigned long)(fr0_ - 196)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x74)),1,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6,ar7_00));
          if (iVar3 == 0) {
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            ar7_00 = (int *)(unsigned)0x0;
            ar6 = (undefined4 *)(unsigned)0xffffffff;
            uVar5 = 0x32;
            (vsp = ((unsigned long)(fr0_ - 196)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x32,0xffffffff,0));
            uVar5 = (vsp = ((unsigned long)(fr0_ - 196)), FUN_8c026db0(ar4,uVar5,ar6,ar7_00));
            uVar1 = (vsp = ((unsigned long)(fr0_ - 196)), FUN_8c03c0f0(ar4 + 0xb0,uVar5,ar6,ar7_00));
            puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 196)), deref_u32(uVar1,uVar5,ar6,ar7_00));
            uVar1 = puVar2[1];
            *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar2;
            *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar1;
            *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar2[2];
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c1378e8);
            (vsp = ((unsigned long)(fr0_ - 196)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,ar6,ar7_00));
            *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
            (vsp = ((unsigned long)(fr0_ - 196)), vec3_clear(ar4 + 0x244,uVar5,ar6,ar7_00));
            if (cVar12 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)(uint)fVar7;
            }
          }
          break;
        case 4:
          (vsp = ((unsigned long)(fr0_ - 196)), FUN_8c031748(ar4,pcVar4,ar6,ar7_00));
          *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
          *(undefined4 *)(unsigned)(ar4 + 0x2cc) = 1;
          ({ unsigned long ri0_ = (unsigned long)(puVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 196)); CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar4,ar6,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 196)), FUN_8c034384(ar4 + 0xb0,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4)),ar6,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x84)),ar6,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6,ar7_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 196)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 196)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x244,ar6,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_assign(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x94)),ar6,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6,ar7_00));
          ar5_00 = ((undefined1 *)(fr0_ - 0x34));
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_assign(ar4 + 0x244,ar5_00,ar6,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xa4)),ar5_00,ar6,ar7_00));
          iVar3 = (vsp = ((unsigned long)(fr0_ - 196)), FUN_8c023d04(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0xa4)),ar6,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6,ar7_00));
          if (iVar3 != 0) {
            (vsp = ((unsigned long)(fr0_ - 196)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0xb0)),puVar2,ar6,ar7_00));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc0))); *(unsigned *)((((unsigned long)(fr0_ - 196)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 196)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0xb0)),ar6,ar7_00); });
            (vsp = ((unsigned long)(fr0_ - 196)), Vec3_assign(ar4 + 700,((undefined1 *)(fr0_ - 0xc0)),ar6,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,ar6,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 196)), object_dtor_delete(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6,ar7_00));
          }
          iVar3 = CAnimBody_AdvanceFrame_wrapper
                            (ar4 + 0xb0,((void *)0x8c026858),ar6,ar7_00);
          if (iVar3 == 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x2cc) = 0;
            uVar6 = 0;
            uVar5 = 0;
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            (vsp = ((unsigned long)(fr0_ - 196)), vec3_clear(ar4 + 0x244,0,ar6,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 196)), vec3_clear(ar4 + 700,uVar5,ar6,ar7_00));
            ar7_00 = (int *)(unsigned)0x0;
            ar6 = (undefined4 *)(unsigned)0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 196)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
            (vsp = ((unsigned long)(fr0_ - 196)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,ar6,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 196)), FUN_8c03c314(ar4,((void *)0x8c03c314),ar6,ar7_00));
            *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xffffffff;
          }
        }
      }
      (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7_00));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7_00));
      uVar6 = 0;
    }
  }
  return uVar6;
}

__asm__(".globl _FUN_8c08248c\n.set _FUN_8c08248c, _FUN_8c08248c_def\n");
//@unit 8c082c50
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
undefined4 FUN_8c082c50_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c082c50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 248; for (int i_ = 0; i_ < 248; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *ar5_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar4;
  double in_dr0 = 0;
  double dVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = 1;
  uVar4 = 1;
  uVar3 = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
  ar5_00 = ((undefined1 *)(unsigned)0x8c125e78);
  (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c031c74(ar4,((undefined1 *)(unsigned)0x8c125e78),uVar3,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 0x134);
  if (iVar1 == 0) {
    if (*(int *)(unsigned)(ar4 + 100) == 1) {
      uVar4 = 0;
    }
    else if (*(int *)(unsigned)(ar4 + 0x128) < 3) {
      uVar4 = 0;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c031748(ar4,ar5_00,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x40)),((undefined1 *)(unsigned)0x8c125e68),uVar3,ar7));
      uVar3 = 1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x40)),1,ar7));
      (*(undefined8 *)(fr0_ - 0xd4)) = (double)(ulonglong)CONCAT14(iVar1 == 0,(undefined4)(*(undefined8 *)(fr0_ - 0xd4)));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,uVar3,ar7));
      if ((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xd4))+4)) != 0) {
        ar7_00 = 0;
        uVar2 = 0xffffffff;
        uVar3 = 8;
        (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar2,ar7_00));
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 248)), rand_range(ar4,5,7,ar7_00));
        *(undefined4 *)(unsigned)(ar4 + 0x294) = uVar3;
      }
    }
  }
  else {
    if (iVar1 == 1) {
      if (*(int *)(unsigned)(ar4 + 0x128) < 6) {
        ar7 = 0;
        uVar3 = 0xffffffff;
        ar5_00 = (undefined *)(unsigned)0x16;
        (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x16,0xffffffff,0));
      }
      else if (*(int *)(unsigned)(ar4 + 0x128) == 6) {
        ar7 = 0;
        uVar3 = 0xffffffff;
        ar5_00 = (undefined *)(unsigned)0x10;
        (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0));
      }
      else {
        ar7 = 0;
        uVar3 = 0xffffffff;
        ar5_00 = (undefined *)(unsigned)0x10;
        (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,uVar3,ar7));
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
    }
    else if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 1;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xcc))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,uVar3,ar7); });
      (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0xcc)),uVar3,ar7));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0xcc)),0xffffffff,uVar3,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 248)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,uVar3,ar7));
      if (iVar1 != 1) {
        return 1;
      }
      uVar2 = 0;
      uVar3 = 0xffffffff;
      uVar4 = 0;
      (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar3,uVar2));
      *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      return 0;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,uVar3,ar7); });
    (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x50)),uVar3,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,uVar3,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 248)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,uVar3,ar7));
    if (iVar1 == 1) {
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      (*(int *)(fr0_ - 0xf4)) = ar4;
      if ((*(int *)(unsigned)(ar4 + 0x128) < 3) || (5 < *(int *)(unsigned)(ar4 + 0x128))) {
        ar7 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 8;
        (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,ar7));
      }
      else {
        ar7 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 0x14;
        (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x14,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 248)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,ar7));
      }
    }
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0xf4))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 248)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,uVar3,ar7); });
    if (cVar6 == '\0') {
      iVar1 = (int)F32HI(in_dr0);
    }
    else {
      iVar1 = (int)in_dr0;
    }
    if (iVar1 == 0x25) {
      ar7 = *(undefined4 *)(unsigned)(ar5 + 0x18);
      uVar3 = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
      (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c033474(ar4,0x1b,uVar3,ar7));
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x44bb8000,*(undefined4 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)) + 8));
      }
      else {
        dVar5 = 3.14625103273492e-312;
      }
      if (cVar6 == '\0') {
        dVar5 = CONCAT44D(F32HI(dVar5) - F32LO(dVar5),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 - dVar5;
      }
      if (cVar7 == '\0') {
        (*(undefined8 *)(fr0_ - 0xd4)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xd4))+4)),(int)(D2U(dVar5) >> 0x20));
        dVar5 = (*(undefined8 *)(fr0_ - 0xd4));
      }
      (*(undefined8 *)(fr0_ - 0xd4)) = dVar5;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); Vec3_scale(ar4 + 0x14,&(*(undefined8 *)(fr0_ - 0xd4)),uVar3,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x60)),((undefined1 *)(unsigned)0x8c1379c8),uVar3,ar7); });
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x70)),uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,uVar3,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c02374c(((undefined1 *)(fr0_ - 0x20)),uVar2,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_assign(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x80)),uVar3,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x90)),uVar2,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x9c)),*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 4),uVar3,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xac))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x90)),((undefined1 *)(fr0_ - 0x9c)),uVar3,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xbc))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); Vec3_add(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)),((undefined1 *)(fr0_ - 0xac)),uVar3,ar7); });
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0xbc)),uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0xbc)),0xffffffff,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0xac)),0xffffffff,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), object_dtor_delete(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,uVar3,ar7));
      ar6_00 = ((undefined1 *)(fr0_ - 0x20));
      (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c0dba50(*(undefined4 *)(unsigned)(ar5 + 0x18),((undefined1 *)(fr0_ - 0x30)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c031c74(ar4,((undefined1 *)(unsigned)0x8c125e78),*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)),ar7));
  }
  return uVar4;
}

__asm__(".globl _FUN_8c082c50\n.set _FUN_8c082c50, _FUN_8c082c50_def\n");
//@unit 8c0831c8
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
undefined4 FUN_8c0831c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0831c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float in_fr1 = 0;
  float fVar7;
  double dVar8;
  undefined8 in_xd0 = 0;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar6 = 1;
  if (*(int *)(unsigned)(ar4 + 0x128) < 3) {
    uVar6 = 0;
  }
  else {
    iVar1 = *(int *)(unsigned)(ar4 + 300);
    if ((iVar1 < 5) && (-1 < iVar1)) {
                    
      switch(iVar1) {
      case 0:
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x24))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 104)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
        ar5 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
        if (cVar10 == '\0') {
          in_fr1 = *(float *)(unsigned)(ar4 + 0x5c);
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x5c);
        }
        if (cVar9 == '\0' && in_fr1 < 0.0) {
          if (cVar10 == '\0') {
            dVar8 = CONCAT44D(0xbf800000,*(undefined4 *)(unsigned)(ar4 + 0x5c));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x5c);
            dVar8 = 6.38186089609776e-312;
          }
          if (cVar9 == '\0') {
            fVar7 = F32LO(dVar8) * F32HI(dVar8);
          }
          else {
            fVar7 = SUB84(dVar8 * dVar8,0);
          }
          if (cVar10 == '\0') {
            *(float *)(unsigned)(ar4 + 0x5c) = fVar7;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x5c) = in_xd0;
          }
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      case 1:
        (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c031748(ar4,ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x54,ar6,ar7));
        uVar3 = 0;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x34)),0,ar7));
        (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,uVar3,ar7));
        if (iVar1 == 0) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
          uVar4 = 0;
          uVar2 = 0xffffffff;
          uVar3 = 0;
          (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar2,uVar4));
        }
        break;
      case 2:
        uVar3 = ar6;
        (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c031748(ar4,ar5,ar6,ar7));
        if (cVar10 == '\0') {
          dVar8 = CONCAT44D(0x3f7ae148,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar8 = -7.932371482664937e-251;
        }
        if (cVar9 == '\0') {
          fVar7 = F32LO(dVar8) * F32HI(dVar8);
        }
        else {
          fVar7 = SUB84(dVar8 * dVar8,0);
        }
        if (cVar10 == '\0') {
          *(float *)(unsigned)(ar4 + 0x28) = fVar7;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
        (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x44)),ar4 + 0x54,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x44)),ar6,ar7));
        uVar2 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7));
        if (iVar1 == 1) {
          uVar5 = 6;
          uVar4 = 4;
          uVar2 = (vsp = ((unsigned long)(fr0_ - 104)), rand_range(ar4,4,6,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x294) = uVar2;
          uVar2 = (vsp = ((unsigned long)(fr0_ - 104)), get_field_94_02aaa4(uVar3,uVar4,uVar5,ar7));
          iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), libgcc_divide_helper_0101e4(uVar2,5,uVar5,ar7));
          if ((iVar1 == 3) || (iVar1 == 8)) {
            iVar1 = 2;
          }
          else {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), rand_range(ar4,0,2,ar7));
          }
          if (*(int *)(unsigned)(ar4 + 0x128) < 6) {
            uVar4 = 0;
            uVar2 = 0xffffffff;
            ar5_00 = iVar1 + 0x13;
            (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_00,0xffffffff,0));
          }
          else if (*(int *)(unsigned)(ar4 + 0x128) == 6) {
            uVar4 = 0;
            uVar2 = 0xffffffff;
            ar5_00 = iVar1 + 0x25;
            (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_00,0xffffffff,0));
          }
          else {
            uVar4 = 0;
            uVar2 = 0xffffffff;
            ar5_00 = iVar1 + 0x2f;
            (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_00,0xffffffff,0));
          }
          if (iVar1 == 1) {
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 2;
            (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c032ab0(ar4,ar5_00,uVar2,uVar4));
            ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 104)); FUN_8c032204(ar4 + 0xb0,ar5_00,uVar2,uVar4); });
          }
          else {
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c032ab0(ar4,ar5_00,uVar2,uVar4));
            ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 104)); FUN_8c032204(ar4 + 0xb0,ar5_00,uVar2,uVar4); });
          }
          (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,uVar2,uVar4));
          *(int *)(unsigned)(ar4 + 0x218) = iVar1 + 0xb;
        }
        break;
      case 3:
        uVar3 = ar6;
        (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c031748(ar4,ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x54)),ar4 + 0x54,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x54)),ar6,ar7));
        uVar2 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c03f3ac(ar4 + 0xb0,uVar2,ar6,ar7));
        if (iVar1 == 7) {
          (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c032ab0(ar4,uVar2,ar6,ar7));
          ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 104)); FUN_8c032204(ar4 + 0xb0,uVar2,ar6,ar7); });
          iVar1 = *(int *)(unsigned)(ar4 + 0x294) + -1;
          *(int *)(unsigned)(ar4 + 0x294) = iVar1;
          if (iVar1 < 1) {
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 104)); FUN_8c032204(ar4 + 0xb0,uVar2,ar6,ar7); });
          }
        }
        break;
      case 4:
        uVar3 = ar6;
        (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c031748(ar4,ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x64)),ar4 + 0x54,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x64)),ar6,ar7));
        uVar2 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7));
        if (iVar1 == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          uVar6 = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
          uVar5 = 0;
          uVar4 = 0xffffffff;
          uVar2 = 0;
          (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar4,uVar5));
          *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c03c314(ar4,uVar2,uVar4,uVar5));
          ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 104)); FUN_8c032204(ar4 + 0xb0,uVar2,uVar4,uVar5); });
        }
      }
    }
  }
  return uVar6;
}

__asm__(".globl _FUN_8c0831c8\n.set _FUN_8c0831c8, _FUN_8c0831c8_def\n");
//@unit 8c083780
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
undefined4 FUN_8c083780_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c083780";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar6_00;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fr1 = 0;
  char cVar4;
  
  cVar4 = '\0';
  uVar3 = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 0x134);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
    if (iVar1 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 1;
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      (vsp = ((unsigned long)(fr0_ - 104)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x18)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 104)), Vec3_assign(ar4 + 0x280,((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 104)), object_dtor_delete(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
      if (cVar4 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)in_fr1;
      }
    }
  }
  else if (iVar1 == 1) {
    *(float *)(unsigned)(ar4 + 0x28) = *(float *)(unsigned)(ar4 + 0x28) + 0.5;
    if (10.0 < *(float *)(unsigned)(ar4 + 0x28)) {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x41200000;
    }
    (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x280,ar6,ar7));
    ar6_00 = 1;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x38)),1,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
    if (iVar1 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 1;
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      (vsp = ((unsigned long)(fr0_ - 104)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x44)),uVar2,ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x44)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 104)), Vec3_assign(ar4 + 0x280,((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 104)), object_dtor_delete(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
    }
  }
  else if (iVar1 == 2) {
    *(float *)(unsigned)(ar4 + 0x28) = *(float *)(unsigned)(ar4 + 0x28) + 0.5;
    if (10.0 < *(float *)(unsigned)(ar4 + 0x28)) {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x41200000;
    }
    (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x64)),ar4 + 0x280,ar6,ar7));
    uVar2 = 1;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x64)),1,ar7));
    (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,uVar2,ar7));
    if (iVar1 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c083780\n.set _FUN_8c083780, _FUN_8c083780_def\n");
//@unit 8c0839c0
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
uint FUN_8c0839c0_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0839c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 192; for (int i_ = 0; i_ < 192; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  uint uVar4;
  undefined4 uVar7;
  undefined8 uVar5;
  double dVar6;
  undefined4 in_fr3 = 0;
  double dVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar4 = 1;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 192)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 0x18)) + 0x1cc))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 0x18)),ar5,ar6,ar7));
  iVar1 = iVar1 + 4;
  (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),iVar1,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x2b0) == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 192)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6,ar7));
    if (iVar1 == 1) {
      ar7_00 = 0;
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 192)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      *(int *)(unsigned)(ar4 + 0x2b0) = *(int *)(unsigned)(ar4 + 0x2b0) + 1;
      uVar2 = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_assign(ar4 + 0x280,uVar2,uVar3,ar7_00));
      *(undefined4 *)(unsigned)(ar4 + 0x294) = 1;
      if (cVar11 == '\0') {
        uVar7 = 0x42340000;
      }
      else {
        uVar7 = 0xac;
      }
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x30)),uVar2,uVar3,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 192)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 192)) - 8); FUN_8c023484(((undefined1 *)(unsigned)0x8c125e68),((undefined1 *)(fr0_ - 0x30)),uVar3,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 192)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 192)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x40)),ar4 + 0x48,uVar3,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 192)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 192)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x50)),((undefined1 *)(unsigned)0x8c1379cc),uVar3,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 192)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 192)) - 8); Vec3_add(ar4 + 0x280,((undefined1 *)(fr0_ - 0x60)),uVar3,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x70)),uVar3,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,uVar3,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,uVar3,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,uVar3,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,uVar3,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 192)), object_dtor_delete(((undefined1 *)(fr0_ - 0x30)),0xffffffff,uVar3,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c022fc0(ar4 + 0x54,((undefined1 *)(fr0_ - 0x24)),uVar3,ar7_00));
      if (cVar11 == '\0') {
        uVar5 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x48),uVar7);
      }
      else {
        uVar5 = *(undefined8 *)(unsigned)(ar4 + 0x48);
      }
      if (cVar10 == '\0' && (float)uVar5 < F32HI(uVar5)) {
        if (cVar11 == '\0') {
          dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),in_fr3);
          dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
        }
        else {
          dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
          dVar6 = -1.6035025660963675e-250;
        }
        if (cVar10 == '\0') {
          dVar8 = CONCAT44D(F32HI(dVar8) -
                                   F32LO(dVar6) * F32HI(dVar6),SUB84(dVar8,0)
                                  );
        }
        else {
          dVar8 = dVar8 - dVar6 * dVar6;
        }
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x5c) = (int)(D2U(dVar8) >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x5c) = dVar8;
        }
      }
      ar7 = *(undefined4 *)(unsigned)(ar5 + 0x18);
      ar6 = *(int *)(unsigned)(ar5 + 0xc);
      (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c032788(ar4,ar4 + 0x54,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    }
  }
  else if (*(int *)(unsigned)(ar4 + 0x2b0) == 1) {
    ar6 = ar4 + 0x54;
    uVar2 = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 192)), pure_virtual_stub(ar4,uVar2,ar6,ar7));
    if (iVar1 == 0) {
      *(int *)(unsigned)(ar4 + 0x294) = *(int *)(unsigned)(ar4 + 0x294) + 1;
      if (cVar11 == '\0') {
        uVar3 = 0x42340000;
      }
      else {
        uVar3 = 0xac;
      }
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x7c)),uVar2,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x8c))); *(unsigned *)((((unsigned long)(fr0_ - 192)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 192)) - 8); FUN_8c023484(((undefined1 *)(unsigned)0x8c125e68),((undefined1 *)(fr0_ - 0x7c)),ar6,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 192)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 192)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x8c)),ar4 + 0x48,ar6,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xac))); *(unsigned *)((((unsigned long)(fr0_ - 192)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 192)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x9c)),((undefined1 *)(unsigned)0x8c1379d0),ar6,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xbc))); *(unsigned *)((((unsigned long)(fr0_ - 192)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 192)) - 8); Vec3_add(ar4 + 0x280,((undefined1 *)(fr0_ - 0xac)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0xbc)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_dtor(((undefined1 *)(fr0_ - 0xbc)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_dtor(((undefined1 *)(fr0_ - 0xac)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 192)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 192)), object_dtor_delete(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      bVar9 = *(int *)(unsigned)(ar4 + 0x294) < 9;
      if (!bVar9) {
        *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
      }
      uVar4 = (uint)bVar9;
      (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c022fc0(ar4 + 0x54,((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
      if (cVar11 == '\0') {
        uVar5 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x48),uVar3);
      }
      else {
        uVar5 = *(undefined8 *)(unsigned)(ar4 + 0x48);
      }
      if (cVar10 == '\0' && (float)uVar5 < F32HI(uVar5)) {
        if (cVar11 == '\0') {
          dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),in_fr3);
          dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
        }
        else {
          dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
          dVar6 = -1.6035025660963675e-250;
        }
        if (cVar10 == '\0') {
          dVar8 = CONCAT44D(F32HI(dVar8) -
                                   F32LO(dVar6) * F32HI(dVar6),SUB84(dVar8,0)
                                  );
        }
        else {
          dVar8 = dVar8 - dVar6 * dVar6;
        }
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x5c) = (int)(D2U(dVar8) >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x5c) = dVar8;
        }
      }
      ar7 = *(undefined4 *)(unsigned)(ar5 + 0x18);
      ar6 = *(int *)(unsigned)(ar5 + 0xc);
      (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c032788(ar4,ar4 + 0x54,ar6,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 192)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
  return uVar4;
}

__asm__(".globl _FUN_8c0839c0\n.set _FUN_8c0839c0, _FUN_8c0839c0_def\n");
//@unit 8c083d8c
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
undefined4 FUN_8c083d8c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c083d8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 320; for (int i_ = 0; i_ < 320; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0 = 0;
  undefined *puVar8;
  float fVar9;
  double dVar6;
  double dVar7;
  undefined4 in_fr3 = 0;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  fVar5 = F32HI(in_dr0);
  cVar12 = '\0';
  cVar11 = '\0';
  uVar4 = 1;
  (vsp = ((unsigned long)(fr0_ - 320)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 0x134);
  if ((4 < iVar1) || (iVar1 < 0)) goto switchD_8c083dce_default;
                    
  switch(iVar1) {
  case 0:
    ar6 = (vsp = ((unsigned long)(fr0_ - 320)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,ar6,ar7));
    if (ar6 == 1) {
      if (cVar12 == '\0') {
        fVar5 = *(float *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
        puVar8 = (undefined *)(unsigned)0x449a6000;
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
        fVar5 = 1235.0;
        puVar8 = ((undefined1 *)(unsigned)0x8c125e48);
      }
      if (cVar11 != '\0' || fVar5 <= (float)(uint)puVar8) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 320)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 320)) - 8); Vec3_scale(((undefined1 *)(unsigned)0x8c125e48),((undefined1 *)(unsigned)0x8c1379d4),1,ar7); });
        (vsp = ((unsigned long)(fr0_ - 320)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x38)),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 320)), Vec3_assign(ar4 + 0x54,((undefined1 *)(unsigned)0x8c125e48),1,ar7));
      }
      ar7 = 0;
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 320)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 320)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar3,ar7));
      if (cVar12 == '\0') {
        dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),fVar5);
      }
      else {
        dVar6 = *(double *)(unsigned)(ar4 + 0x48);
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(-F32HI(dVar6),SUB84(dVar6,0));
      }
      else {
        dVar6 = -dVar6;
      }
      if (cVar12 == '\0') {
        (*(undefined8 *)(fr0_ - 0xe0)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xe0))+4)),(int)(D2U(dVar6) >> 0x20));
        dVar6 = (*(undefined8 *)(fr0_ - 0xe0));
      }
      (*(undefined8 *)(fr0_ - 0xe0)) = dVar6;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 320)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 320)) - 8); Vec3_scale(ar4 + 0x54,&(*(undefined8 *)(fr0_ - 0xe0)),uVar3,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 320)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 320)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(unsigned)0x8c1379d8),uVar3,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 320)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 320)) - 8); Vec3_add(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)),((undefined1 *)(fr0_ - 0x58)),uVar3,ar7); });
      ar6 = 0x280;
      (vsp = ((unsigned long)(fr0_ - 320)), Vec3_assign(ar4 + 0x280,((undefined1 *)(fr0_ - 0x68)),0x280,ar7));
      (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6,ar7));
      if (cVar12 == '\0') {
        dVar6 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x288));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x288);
        dVar6 = 6.54086966663815e-312;
      }
      if (cVar11 == '\0') {
        fVar5 = F32LO(dVar6) - F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 - dVar6,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x288) = fVar5;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x288) = in_xd0;
      }
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
    }
    break;
  case 1:
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x78)),ar4 + 0x54,ar6,ar7));
    ar6 = 1;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x78)),1,ar7));
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6,ar7));
    if (iVar1 == 0) {
      if (*(int *)(unsigned)(ar4 + 0x128) == 6) {
        ar7 = 0;
        ar6 = -1;
        uVar3 = 0x23;
        (vsp = ((unsigned long)(fr0_ - 320)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x23,0xffffffff,0));
      }
      else {
        ar7 = 0;
        ar6 = -1;
        uVar3 = 0x2d;
        (vsp = ((unsigned long)(fr0_ - 320)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x2d,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 320)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
    }
    break;
  case 2:
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 320)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 320)) - 8); Vec3_sub(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)),ar4 + 0x280,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x88)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x98)),((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x98)),ar6,ar7));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c031748(ar4,uVar3,ar6,ar7));
    ar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
    uVar3 = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c031c74(ar4,uVar3,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 320)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x13c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 320)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7); });
    if (cVar12 == '\0') {
      fVar9 = 100.0;
    }
    else {
      fVar5 = 100.0;
      fVar9 = 4.316e-43;
    }
    if (cVar11 != '\0' || fVar9 <= fVar5) {
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      ar6 = 6;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 320)), rand_range(ar4,4,6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x294) = uVar3;
    }
    break;
  case 3:
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa8))); *(unsigned *)((((unsigned long)(fr0_ - 320)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 320)) - 8); Vec3_sub(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)),ar4 + 0x280,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0xa8)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0xb8)),((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0xb8)),ar6,ar7));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x13c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 320)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7); });
    if (cVar12 == '\0') {
      in_fr15 = fVar5;
    }
    if (cVar11 == '\0') {
      iVar1 = (int)in_fr15;
    }
    else {
      iVar1 = (int)CONCAT44D(in_fr14,in_fr15);
    }
    if ((iVar1 == 0x8a) && (*(int *)(unsigned)(ar4 + 0x294) < 1)) {
      if (cVar12 == '\0') {
        dVar6 = CONCAT44D(0x3ca3d70a,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar6 = 985162545658593.2;
      }
      if (cVar11 == '\0') {
        fVar5 = F32LO(dVar6) + F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar5;
        fVar5 = *(float *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
      }
      if (cVar11 == '\0' && 0.0 < fVar5) {
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
        }
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 320)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,uVar3,ar6,ar7));
      if (iVar1 == 7) {
        ar6 = 6;
        uVar3 = 4;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 320)), rand_range(ar4,4,6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x294) = uVar2;
      }
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c03f3ac(ar4 + 0xb0,uVar3,ar6,ar7));
      if (iVar1 == 7) {
        (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c032ab0(ar4,uVar3,ar6,ar7));
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x13c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 320)); FUN_8c032204(ar4 + 0xb0,uVar3,ar6,ar7); });
        *(int *)(unsigned)(ar4 + 0x294) = *(int *)(unsigned)(ar4 + 0x294) + -1;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c031748(ar4,uVar3,ar6,ar7));
    if (cVar12 == '\0') {
      dVar6 = CONCAT44D(0x3c23d70a,*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
      dVar6 = 87960945987420.16;
    }
    if (cVar11 == '\0') {
      fVar5 = F32LO(dVar6) + F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar12 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar5;
      fVar5 = *(float *)(unsigned)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
    }
    if (cVar11 == '\0' && 0.0 < fVar5) {
      if (cVar12 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
      }
    }
    if (cVar12 == '\0') {
      dVar6 = CONCAT44D(0x42d40000,fVar5);
    }
    else {
      dVar6 = 211106267570176.0;
    }
    if (cVar11 == '\0') {
      bVar10 = F32HI(dVar6) < in_fr15;
    }
    else {
      bVar10 = dVar6 < CONCAT44D(in_fr14,in_fr15);
    }
    if (bVar10) {
      if (cVar12 == '\0') {
        dVar6 = CONCAT44D(0x42e80000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 492581279399936.0;
      }
      if (cVar11 == '\0') {
        bVar10 = in_fr15 < F32HI(dVar6);
      }
      else {
        bVar10 = CONCAT44D(in_fr14,in_fr15) < dVar6;
      }
      if (!bVar10) goto LAB_8c08437e;
LAB_8c08438e:
      if (cVar12 == '\0') {
        dVar6 = CONCAT44D(0xc0400000,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar6 = 1.1920937492693184e-07;
      }
      if (cVar11 == '\0' && F32HI(dVar6) < SUB84(dVar6,0)) {
        if (cVar12 == '\0') {
          dVar6 = CONCAT44D(0x3e800000,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar6 = -7.957972465383526e-251;
        }
        if (cVar11 == '\0') {
          fVar5 = F32HI(dVar6);
          dVar6 = CONCAT44D(fVar5,F32LO(dVar6) - fVar5);
        }
        else {
          dVar6 = dVar6 - dVar6;
        }
        if (cVar12 == '\0') {
          *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar6,0);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
      }
    }
    else {
LAB_8c08437e:
      if (cVar12 == '\0') {
        dVar6 = CONCAT44D(0x42fc0000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 844425070608384.0;
      }
      if (cVar11 == '\0') {
        bVar10 = F32HI(dVar6) < in_fr15;
      }
      else {
        bVar10 = dVar6 < CONCAT44D(in_fr14,in_fr15);
      }
      if (bVar10) {
        if (cVar12 == '\0') {
          dVar6 = CONCAT44D(0x43080000,SUB84(dVar6,0));
        }
        else {
          dVar6 = -32.00000799074769;
        }
        if (cVar11 == '\0') {
          bVar10 = in_fr15 < F32HI(dVar6);
        }
        else {
          bVar10 = CONCAT44D(in_fr14,in_fr15) < dVar6;
        }
        if (bVar10) goto LAB_8c08438e;
      }
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc8))); *(unsigned *)((((unsigned long)(fr0_ - 320)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 320)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd8))); *(unsigned *)((((unsigned long)(fr0_ - 320)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 320)) - 8); Vec3_add(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)),((undefined1 *)(fr0_ - 0xc8)),ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c022fc0(((undefined1 *)(fr0_ - 0xd8)),ar4 + 0x280,ar6,ar7));
    if (cVar12 == '\0') {
      dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),in_fr3);
      dVar7 = CONCAT44D(0x3f99999a,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      dVar7 = -7.932637885456047e-251;
    }
    if (cVar11 == '\0') {
      bVar10 = F32LO(dVar7) * F32HI(dVar7) <
               F32HI(dVar6);
    }
    else {
      bVar10 = dVar7 * dVar7 < dVar6;
    }
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6,ar7));
    if (bVar10) {
      if (*(int *)(unsigned)(ar4 + 0x2b8) == 1) {
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
        ar7 = 0x2b4;
        ar6 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      }
    }
    else {
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      ar6 = ar4;
    }
    break;
  case 4:
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c031748(ar4,((void *)0x8c031748),ar6,ar7));
    ar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
    uVar3 = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c031c74(ar4,uVar3,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 320)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar3,ar6,ar7));
    if (iVar1 == 1) {
      uVar4 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
      (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c03c314(ar4,0,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      ar7 = 0;
      ar6 = -1;
      (vsp = ((unsigned long)(fr0_ - 320)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 320)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x13c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 320)); FUN_8c032204(ar4 + 0xb0,ar4 + 0xb0,ar6,ar7); });
    }
  }
switchD_8c083dce_default:
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xe0))+4)) = uVar4;
  (vsp = ((unsigned long)(fr0_ - 320)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  return (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xe0))+4));
}

__asm__(".globl _FUN_8c083d8c\n.set _FUN_8c083d8c, _FUN_8c083d8c_def\n");
//@unit 8c0845f4
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
undefined4 FUN_8c0845f4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0845f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 252; for (int i_ = 0; i_ < 252; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0 = 0;
  float fVar8;
  double dVar6;
  double dVar7;
  undefined4 in_fr3 = 0;
  undefined8 in_xd0 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar4 = 1;
  iVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 252)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  iVar2 = *(int *)(unsigned)(ar4 + 0x134);
  if ((iVar2 < 5) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 252)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6,ar7));
      if (iVar1 == 1) {
        if (cVar11 == '\0') {
          fVar5 = *(float *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
          fVar8 = 1235.0;
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
          fVar5 = 1235.0;
          fVar8 = 2.74654e-43;
        }
        if (cVar10 != '\0' || fVar5 <= fVar8) {
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_assign(ar4 + 0x54,((undefined1 *)(unsigned)0x8c125e48),ar6,ar7));
        }
        else {
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); Vec3_scale(((undefined1 *)(unsigned)0x8c125e48),((undefined1 *)(unsigned)0x8c1379dc),ar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x34)),ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
        }
        ar7 = 0;
        ar6 = 0xffffffff;
        uVar3 = 0;
        (vsp = ((unsigned long)(fr0_ - 252)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 252)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); Vec3_scale(ar4 + 0x54,ar4 + 0x48,ar6,ar7); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(unsigned)0x8c1379e0),ar6,ar7); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); Vec3_add(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)),((undefined1 *)(fr0_ - 0x54)),ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 252)), Vec3_assign(ar4 + 0x280,((undefined1 *)(fr0_ - 0x64)),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7));
        if (cVar11 == '\0') {
          dVar6 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x288));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x288);
          dVar6 = 6.54086966663815e-312;
        }
        if (cVar10 == '\0') {
          fVar5 = F32LO(dVar6) - F32HI(dVar6);
        }
        else {
          fVar5 = SUB84(dVar6 - dVar6,0);
        }
        if (cVar11 == '\0') {
          *(float *)(unsigned)(ar4 + 0x288) = fVar5;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x288) = in_xd0;
        }
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
      }
      break;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 252)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x74)),ar4 + 0x54,ar6,ar7));
      ar6 = 1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x74)),1,ar7));
      (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6,ar7));
      if (iVar1 == 0) {
        if (*(int *)(unsigned)(ar4 + 0x128) == 6) {
          ar7 = 0;
          ar6 = 0xffffffff;
          uVar3 = 0x24;
          (vsp = ((unsigned long)(fr0_ - 252)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x24,0xffffffff,0));
        }
        else {
          ar7 = 0;
          ar6 = 0xffffffff;
          uVar3 = 0x2e;
          (vsp = ((unsigned long)(fr0_ - 252)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x2e,0xffffffff,0));
        }
        (vsp = ((unsigned long)(fr0_ - 252)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      }
      break;
    case 2:
      (vsp = ((unsigned long)(fr0_ - 252)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6,ar7));
      fVar5 = F32HI(in_dr0);
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xf8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 252)); CAnimBody_GetCurFrame(ar4 + 0xb0,iVar1,ar6,ar7); });
      if (cVar11 == '\0') {
        fVar8 = 90.0;
      }
      else {
        fVar5 = 90.0;
        fVar8 = 4.316e-43;
      }
      if (cVar10 != '\0' || fVar8 <= fVar5) {
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      }
      break;
    case 3:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); Vec3_sub(ar4 + 0x280,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 252)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x84)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 252)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x94)),((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x94)),ar6,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c03f3ac(ar4 + 0xb0,uVar3,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xf8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 252)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7); });
      if (cVar11 == '\0') {
        (*(undefined8 *)(fr0_ - 0xb8)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xb8))+4)),(int)((ulonglong)in_dr0 >> 0x20));
        dVar6 = CONCAT44D(0x40400000,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar6 = 1.3411048278844095e-08;
        (*(undefined8 *)(fr0_ - 0xb8)) = in_dr0;
      }
      if (cVar10 == '\0' && SUB84(dVar6,0) < F32HI(dVar6)) {
        if (cVar11 == '\0') {
          dVar6 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar6 = -7.957972460180408e-251;
        }
        if (cVar10 == '\0') {
          fVar5 = F32HI(dVar6);
          dVar6 = CONCAT44D(fVar5,F32LO(dVar6) + fVar5);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar6,0);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7); });
      ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0xb8)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 252)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 252)) - 8); Vec3_add(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)),((undefined1 *)(fr0_ - 0xa4)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c022fc0((int)&(*(undefined8 *)(fr0_ - 0xb8)) + 4,ar4 + 0x280,ar6,ar7));
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),in_fr3);
        dVar7 = CONCAT44D(0x3f99999a,*(undefined4 *)(unsigned)(ar4 + 0x48));
      }
      else {
        dVar7 = 6.54101886946819e-312;
      }
      if (cVar10 == '\0') {
        bVar9 = F32LO(dVar7) * F32HI(dVar7) <
                F32HI(dVar6);
      }
      else {
        bVar9 = dVar7 * dVar7 < dVar6;
      }
      (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0xb8)) + 4,0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6,ar7));
      if (bVar9) {
        if (*(int *)(unsigned)(ar4 + 0x2b8) == 1) {
          *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
        }
      }
      else {
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      }
      break;
    case 4:
      ar6 = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
      uVar3 = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
      (vsp = ((unsigned long)(fr0_ - 252)), FUN_8c031c74(ar4,uVar3,ar6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 252)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar3,ar6,ar7));
      if (iVar1 == 1) {
        uVar4 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
        ar7 = 0;
        ar6 = 0xffffffff;
        uVar3 = 0;
        (vsp = ((unsigned long)(fr0_ - 252)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 252)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xf8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 252)); FUN_8c032204(ar4 + 0xb0,uVar3,ar6,ar7); });
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xffffffff;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 252)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
  return uVar4;
}

__asm__(".globl _FUN_8c0845f4\n.set _FUN_8c0845f4, _FUN_8c0845f4_def\n");
//@unit 8c084bc0
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
undefined4 get_field_2cc_084bc0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_2cc_084bc0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x2cc + ar4);
}

__asm__(".globl _get_field_2cc_084bc0\n.set _get_field_2cc_084bc0, _get_field_2cc_084bc0_def\n");
//@unit 8c084bcc
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
undefined4 FUN_8c084bcc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c084bcc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 388; for (int i_ = 0; i_ < 388; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  (*(undefined4 *)(fr0_ - 0x128)) = (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125e48)),ar5,ar6,ar7));
  puVar2 = ((void *)(unsigned)0x8c022cb0);
  uVar1 = 0x8c280e00;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x128)),((void *)(unsigned)0x8c022cb0),0x8c280e00,ar7));
  (*(undefined4 *)(fr0_ - 0x12c)) = (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125e58)),puVar2,uVar1,ar7));
  puVar2 = ((void *)(unsigned)0x8c022cb0);
  uVar1 = 0x8c280e0c;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x12c)),((void *)(unsigned)0x8c022cb0),0x8c280e0c,ar7));
  (*(undefined4 *)(fr0_ - 0x130)) = (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125e68)),puVar2,uVar1,ar7));
  puVar2 = ((void *)(unsigned)0x8c022cb0);
  uVar1 = 0x8c280e18;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x130)),((void *)(unsigned)0x8c022cb0),0x8c280e18,ar7));
  (*(undefined4 *)(fr0_ - 0x134)) = (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125e78)),puVar2,uVar1,ar7));
  puVar2 = ((void *)(unsigned)0x8c022cb0);
  uVar1 = 0x8c280e24;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x134)),((void *)(unsigned)0x8c022cb0),0x8c280e24,ar7));
  (*(undefined4 *)(fr0_ - 0x138)) = (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125e88)),puVar2,uVar1,ar7));
  puVar2 = ((void *)(unsigned)0x8c022cb0);
  uVar1 = 0x8c280e30;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x138)),((void *)(unsigned)0x8c022cb0),0x8c280e30,ar7));
  (*(undefined4 *)(fr0_ - 0x13c)) = (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125e98)),puVar2,uVar1,ar7));
  puVar2 = ((void *)(unsigned)0x8c022cb0);
  uVar1 = 0x8c280e3c;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x13c)),((void *)(unsigned)0x8c022cb0),0x8c280e3c,ar7));
  (*(undefined4 *)(fr0_ - 0x140)) = (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125ea8)),puVar2,uVar1,ar7));
  puVar2 = ((void *)(unsigned)0x8c022cb0);
  uVar1 = 0x8c280e48;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x140)),((void *)(unsigned)0x8c022cb0),0x8c280e48,ar7));
  (*(undefined4 *)(fr0_ - 0x144)) = (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125eb8)),puVar2,uVar1,ar7));
  puVar2 = ((void *)(unsigned)0x8c022cb0);
  uVar1 = 0x8c280e54;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x144)),((void *)(unsigned)0x8c022cb0),0x8c280e54,ar7));
  (*(undefined4 *)(fr0_ - 0x148)) = (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125ec8)),puVar2,uVar1,ar7));
  puVar2 = ((void *)(unsigned)0x8c022cb0);
  uVar1 = 0x8c280e60;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x148)),((void *)(unsigned)0x8c022cb0),0x8c280e60,ar7));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x16c,puVar2,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x14c)) = (vsp = ((unsigned long)(fr0_ - 388)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c88))))
                         ((&(*(undefined1 *)(unsigned)0x8c125ed8)),(int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x16c,uVar1,ar7));
  uVar1 = 0x8c280e6c;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x14c)),((void *)(unsigned)0x8c022cb0),0x8c280e6c,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x16c,0xffffffff,uVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x15c,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x150)) = (vsp = ((unsigned long)(fr0_ - 388)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c88))))
                         ((&(*(undefined1 *)(unsigned)0x8c125ed8)) + 0x10,(int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x15c,uVar1,ar7));
  uVar1 = 0x8c280e78;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x150)),((void *)(unsigned)0x8c022cb0),0x8c280e78,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x15c,0xffffffff,uVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x14c,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x154)) = (vsp = ((unsigned long)(fr0_ - 388)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c88))))
                         ((&(*(undefined1 *)(unsigned)0x8c125f10)),(int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x14c,uVar1,ar7));
  uVar1 = 0x8c280e84;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x154)),((void *)(unsigned)0x8c022cb0),0x8c280e84,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x14c,0xffffffff,uVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x13c,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x158)) = (vsp = ((unsigned long)(fr0_ - 388)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c88))))
                         ((&(*(undefined1 *)(unsigned)0x8c125f10)) + 0x10,(int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x13c,uVar1,ar7));
  uVar1 = 0x8c280e90;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x158)),((void *)(unsigned)0x8c022cb0),0x8c280e90,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x13c,0xffffffff,uVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x12c,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x15c)) = (vsp = ((unsigned long)(fr0_ - 388)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c88))))
                         ((&(*(undefined1 *)(unsigned)0x8c125f30)),(int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x12c,uVar1,ar7));
  uVar1 = 0x8c280e9c;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x15c)),((void *)(unsigned)0x8c022cb0),0x8c280e9c,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x12c,0xffffffff,uVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x11c,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x160)) = (vsp = ((unsigned long)(fr0_ - 388)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c88))))
                         ((&(*(undefined1 *)(unsigned)0x8c125f30)) + 0x10,(int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x11c,uVar1,ar7));
  uVar1 = 0x8c280ea8;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x160)),((void *)(unsigned)0x8c022cb0),0x8c280ea8,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x11c,0xffffffff,uVar1,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c030e34((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x104,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x164)) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c05d608(0x8c280eb4,uVar3,uVar1,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c030e34((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0xec,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x168)) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c05d608(0x8c280eb4 + 0x18,uVar3,uVar1,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c030e34((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0xd4,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x16c)) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c05d608(0x8c280eb4 + 0x30,uVar3,uVar1,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c030e34((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0xbc,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x170)) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c05d608(0x8c280eb4 + 0x48,uVar3,uVar1,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c030e34((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0xa4,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x174)) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c05d608(0x8c280eb4 + 0x60,uVar3,uVar1,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c030e34((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x8c,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x178)) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c05d608(0x8c280eb4 + 0x78,uVar3,uVar1,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c030e34(((undefined1 *)(fr0_ - 0x10c)),uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x17c)) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c05d608(0x8c280eb4 + 0x90,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x180)) = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c030e34(((undefined1 *)(fr0_ - 0x124)),uVar3,uVar1,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c05d608(0x8c280eb4 + 0xa8,(*(undefined4 *)(fr0_ - 0x180)),uVar1,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c084bcc\n.set _FUN_8c084bcc, _FUN_8c084bcc_def\n");
//@unit 8c08516c
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
int CAnimal_m0_08516c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m0_08516c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12a434);
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129938_m0_017084(ar4 + 0x1014,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12a25c_m0_06f3c4(ar4 + 0xd20,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12c3c4_m0_1030a4(ar4 + 0x490,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), CAnimal_m0_025688(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _CAnimal_m0_08516c\n.set _CAnimal_m0_08516c, _CAnimal_m0_08516c_def\n");
//@unit 8c0851f4
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
int s_GRAPHICS_HIGYOLINE_0851fa_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_HIGYOLINE_0851fa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar2;
  
  ar6_00 = 1;
  uVar1 = 3;
  ar7_00 = ar6;
  ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(ar5); unsigned long t2_ = (unsigned long)(0x8c280fb4); unsigned long t3_ = (unsigned long)(0x8c2818e0); unsigned long t4_ = (unsigned long)(*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c137b2c))); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0254d0))))
            (ar4,3,1,ar6); });
  *(unsigned *)(unsigned)(ar4 + 8) = (&(*(undefined1 *)(unsigned)0x8c12a434));
  (vsp = ((unsigned long)(fr0_ - 0)), s_HIGYOLINE_102eee(ar4 + 0x490,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c06e4ec(ar4 + 0xd20,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016fcc(ar4 + 0x1014,uVar1,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c138590)) + 0x182b); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
            (ar4 + 0xc,uVar1,ar6_00,ar7_00); });
  *(int *)(unsigned)(0x308 + ar4) = ar4 + 0x490;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c034d38(ar4 + 0x2dc,ar6,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(undefined4 *)(unsigned)(0x308 + ar4),uVar1,ar6_00,ar7_00));
  *(int *)(unsigned)(0x30c + ar4) = ar4 + 0xd20;
  *(undefined1 *)(unsigned)(0x10d8 + ar4) = 0;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    *(undefined4 *)(unsigned)(0x10a8 + ar4 + iVar2 * 4) = 0;
    *(undefined4 *)(unsigned)(0x10c0 + ar4 + iVar2 * 4) = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0f532c))))
            (ar4,*(undefined4 *)(unsigned)(0xb4 + *(int *)(unsigned)(0x328 + ar4)),ar4 + 0x1014,
             ar7_00));
  *(undefined4 *)(unsigned)(0x3d8 + ar4) = *(undefined4 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(0x328 + ar4)) + 0x40);
  *(undefined4 *)(unsigned)(0x3dc + ar4) = *(undefined4 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(0x328 + ar4)) + 0x40);
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x10;
  return ar4;
}

__asm__(".globl _s_GRAPHICS_HIGYOLINE_0851fa\n.set _s_GRAPHICS_HIGYOLINE_0851fa, _s_GRAPHICS_HIGYOLINE_0851fa_def\n");
//@unit 8c085390
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
undefined4 CAnimal_m2_085390_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m2_085390";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 ar5_00;
  undefined4 ar7_00;
  
  ar5_00 = ar5;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), CAnimal_m2_02573c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02a788(ar4,ar5_00,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02aabc(ar4,ar5_00,ar6,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if (((((char)uVar1 == '\x01') && (*(int *)(unsigned)(0x10c0 + ar4) == 0)) &&
      (*(int *)(unsigned)(0x10c4 + ar4) == 0)) &&
     (((*(int *)(unsigned)(0x10c8 + ar4) == 0 && (*(int *)(unsigned)(0x10cc + ar4) == 0)) &&
      ((*(int *)(unsigned)(0x10d0 + ar4) == 0 && (*(int *)(unsigned)(0x10d4 + ar4) == 0)))))) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0858e4(ar4,ar5,ar6,ar7_00));
  }
  if (((*(int *)(unsigned)(0x10c0 + ar4) != 0) || (*(int *)(unsigned)(0x10c4 + ar4) != 0)) ||
     ((*(int *)(unsigned)(0x10c8 + ar4) != 0 ||
      (((*(int *)(unsigned)(0x10cc + ar4) != 0 || (*(int *)(unsigned)(0x10d0 + ar4) != 0)) ||
       (*(int *)(unsigned)(0x10d4 + ar4) != 0)))))) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0859c8(ar4,ar5,ar6,ar7_00));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((char)uVar1 == '\x02') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_290_085544(ar4 + 0xd20,ar5_00,ar6,ar7_00));
    if (iVar2 != -1) {
      if (*(char *)(unsigned)(0x10d8 + ar4) == '\0') {
        *(undefined1 *)(unsigned)(0x10d8 + ar4) = 1;
        *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bcc4)) = 0;
      }
      (vsp = ((unsigned long)(fr0_ - 0)), s_CSquidLine_085b18(ar4,ar7,ar5,ar7_00));
      ar5_00 = ar7;
      ar6 = ar5;
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((char)uVar1 == '\x02') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_290_085544(ar4 + 0xd20,ar5_00,ar6,ar7_00));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)) + 0x44))))
                      (((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)),ar5_00,ar6,ar7_00));
    if ((iVar3 + -1 <= iVar2) && (*(char *)(unsigned)(0x10d8 + ar4) == '\x01')) {
      *(undefined1 *)(unsigned)(0x10d8 + ar4) = 0;
    }
  }
  return 1;
}

__asm__(".globl _CAnimal_m2_085390\n.set _CAnimal_m2_085390, _CAnimal_m2_085390_def\n");
//@unit 8c085544
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
undefined4 get_field_290_085544_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_290_085544";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x290 + ar4);
}

__asm__(".globl _get_field_290_085544\n.set _get_field_290_085544, _get_field_290_085544_def\n");
//@unit 8c085550
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
undefined4 CAnimal_m3_085550_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m3_085550";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 ar5_00;
  undefined4 ar7_00;
  
  ar5_00 = ar5;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), CAnimal_m3_026078(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02a788(ar4,ar5_00,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02aabc(ar4,ar5_00,ar6,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if (((((char)uVar1 == '\x01') && (*(int *)(unsigned)(0x10c0 + ar4) == 0)) &&
      (*(int *)(unsigned)(0x10c4 + ar4) == 0)) &&
     (((*(int *)(unsigned)(0x10c8 + ar4) == 0 && (*(int *)(unsigned)(0x10cc + ar4) == 0)) &&
      ((*(int *)(unsigned)(0x10d0 + ar4) == 0 && (*(int *)(unsigned)(0x10d4 + ar4) == 0)))))) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0858e4(ar4,ar5,ar6,ar7_00));
  }
  if (((*(int *)(unsigned)(0x10c0 + ar4) != 0) || (*(int *)(unsigned)(0x10c4 + ar4) != 0)) ||
     ((*(int *)(unsigned)(0x10c8 + ar4) != 0 ||
      (((*(int *)(unsigned)(0x10cc + ar4) != 0 || (*(int *)(unsigned)(0x10d0 + ar4) != 0)) ||
       (*(int *)(unsigned)(0x10d4 + ar4) != 0)))))) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0859c8(ar4,ar5,ar6,ar7_00));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((char)uVar1 == '\x02') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_290_085544(ar4 + 0xd20,ar5_00,ar6,ar7_00));
    if (iVar2 != -1) {
      if (*(char *)(unsigned)(0x10d8 + ar4) == '\0') {
        *(undefined1 *)(unsigned)(0x10d8 + ar4) = 1;
        *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bcc4)) = 0;
      }
      (vsp = ((unsigned long)(fr0_ - 0)), s_CSquidLine_085b18(ar4,ar7,ar5,ar7_00));
      ar5_00 = ar7;
      ar6 = ar5;
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((char)uVar1 == '\x02') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_290_085544(ar4 + 0xd20,ar5_00,ar6,ar7_00));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)) + 0x44))))
                      (((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)),ar5_00,ar6,ar7_00));
    if ((iVar3 + -1 <= iVar2) && (*(char *)(unsigned)(0x10d8 + ar4) == '\x01')) {
      *(undefined1 *)(unsigned)(0x10d8 + ar4) = 0;
    }
  }
  return 1;
}

__asm__(".globl _CAnimal_m3_085550\n.set _CAnimal_m3_085550, _CAnimal_m3_085550_def\n");
//@unit 8c085704
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
int FUN_8c085704_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c085704";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint in_fr1 = 0;
  ulonglong uVar5;
  char cVar6;
  
  cVar6 = '\0';
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02702c(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  piVar4 = (int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + (short)uVar1 * 0x124);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c015bb8(piVar4 + 0x1c,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x344) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x2c) + 0x2c) + 0x2c);
  *(undefined4 *)(unsigned)(ar4 + 0x348) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x344) + 0x2c);
  *(undefined4 *)(unsigned)(ar4 + 0x34c) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x344) + 0x2c) + 0x30);
  *(undefined4 *)(unsigned)(ar4 + 0x350) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x344) + 0x2c) + 0x30) + 0x30);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c015510(*piVar4 + 0x1e8,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x348) + 4) = uVar1;
  *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x34c) + 4) = uVar1;
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x374) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x374) = (ulonglong)in_fr1;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x378) = 0;
    uVar5 = CONCAT44(0x40a00000,in_fr1);
    *(undefined4 *)(unsigned)(ar4 + 0x37c) = 0x40a00000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x378) = (ulonglong)in_fr1;
    uVar5 = 0x3a040a00000;
    *(undefined8 *)(unsigned)(ar4 + 0x37c) = 0x3a040a00000;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x3a0) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x3a0) = uVar5 & 0xffffffff;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x3a4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x3a8) = 0x40a00000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x3a4) = uVar5 & 0xffffffff;
    *(undefined8 *)(unsigned)(ar4 + 0x3a8) = 0x3a040a00000;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02a788(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02aabc(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x358) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x354) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x360) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x35c) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  iVar3 = (int)(short)uVar1;
  if (iVar3 == 6) {
    *(undefined4 *)(unsigned)(ar4 + 0x358) =
         *(undefined4 *)(unsigned)
          (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x2c) +
                                                       0x2c) + 0x30) + 0x30) + 0x30) + 0x2c) + 0x2c)
    ;
    iVar3 = 0x354;
    *(undefined4 *)(unsigned)(ar4 + 0x354) =
         *(undefined4 *)(unsigned)
          (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) +
                                                                         0x2c) + 0x2c) + 0x30) +
                                              0x30) + 0x30) + 0x2c) + 0x30) + 0x2c);
  }
  return iVar3;
}

__asm__(".globl _FUN_8c085704\n.set _FUN_8c085704, _FUN_8c085704_def\n");
//@unit 8c0858bc
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
undefined4 FUN_8c0858bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0858bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0366e4(*(undefined4 *)(unsigned)(0x308 + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0858bc\n.set _FUN_8c0858bc, _FUN_8c0858bc_def\n");
//@unit 8c0858e4
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
undefined4 FUN_8c0858e4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0858e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 a6;
  int iVar3;
  
  iVar2 = ar5;
  for (iVar3 = 0; iVar3 < 6; iVar3 = iVar3 + 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_a0_035724(ar5,iVar2,ar6,ar7));
    if ((char)uVar1 == '\x02') {
      a6 = 5;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(0x8c3eb324,6,5,ar7));
      *(undefined4 *)(unsigned)(0x10a8 + ar4 + iVar3 * 4) = uVar1;
    }
    else {
      a6 = 0x15;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(0x8c3eb324,4,0x15,ar7));
      *(undefined4 *)(unsigned)(0x10a8 + ar4 + iVar3 * 4) = uVar1;
    }
    iVar2 = *(int *)(unsigned)(0x10a8 + ar4 + iVar3 * 4);
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar2 + 8) + 0x54))))(iVar2,0x8c3eb324,a6,ar7));
    ar6 = 0;
    iVar2 = *(int *)(unsigned)(0x10a8 + ar4 + iVar3 * 4);
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fed70))))
                      (*(undefined4 *)(unsigned)(0x7d0 + ar5),iVar2,0,ar7));
    *(undefined4 *)(unsigned)(0x10c0 + ar4 + iVar3 * 4) = uVar1;
  }
  return 6;
}

__asm__(".globl _FUN_8c0858e4\n.set _FUN_8c0858e4, _FUN_8c0858e4_def\n");
//@unit 8c0859c8
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
int FUN_8c0859c8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0859c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    if (*(int *)(unsigned)(0x10c0 + ar4 + iVar3 * 4) != 0) {
      ar5_00 = *(int *)(unsigned)(0x10c0 + ar4 + iVar3 * 4);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feef8(*(undefined4 *)(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
      if (iVar1 == 1) {
        ar5_00 = ar4 + iVar3 * 4 + 0x10c0;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feeb0(*(undefined4 *)(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
        *(undefined4 *)(unsigned)(0x10a8 + ar4 + iVar3 * 4) = uVar2;
      }
    }
  }
  if (*(int *)(unsigned)(0x10d4 + ar4) != 0) {
    ar5_00 = *(int *)(unsigned)(0x10d4 + ar4);
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feef8(*(undefined4 *)(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
    if (iVar3 == 1) {
      ar5_00 = ar4 + 0x10d4;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feeb0(*(undefined4 *)(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
      *(undefined4 *)(unsigned)(0x10bc + ar4) = uVar2;
    }
  }
  iVar3 = *(int *)(unsigned)(0x10c0 + ar4);
  if ((((iVar3 == 0) && (iVar3 = *(int *)(unsigned)(0x10c4 + ar4), iVar3 == 0)) &&
      (iVar3 = *(int *)(unsigned)(0x10c8 + ar4), iVar3 == 0)) &&
     (((iVar3 = *(int *)(unsigned)(0x10cc + ar4), iVar3 == 0 &&
       (iVar3 = *(int *)(unsigned)(0x10d0 + ar4), iVar3 == 0)) &&
      (iVar3 = *(int *)(unsigned)(0x10d4 + ar4), iVar3 == 0)))) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7));
    iVar3 = (int)(char)uVar2;
    if (iVar3 == 1) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035f4c(ar4 + 0x490,2,ar6,ar7));
    }
  }
  return iVar3;
}

__asm__(".globl _FUN_8c0859c8\n.set _FUN_8c0859c8, _FUN_8c0859c8_def\n");
//@unit 8c085b14
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
int s_CSquidLine_085b18_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CSquidLine_085b18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 a6;
  
  a6 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_290_085544(ar4 + 0xd20,ar5,ar6,ar7));
  if (*(int *)(unsigned)(0x10a8 + ar4 + iVar1 * 4) == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      ((&(*(undefined1 *)(unsigned)0x8c138590)) + 0x1835,
                       (&(*(undefined1 *)(unsigned)0x8c138590)) + 0x1840,1,2));
  }
  else {
    iVar2 = *(int *)(unsigned)(0x10a8 + ar4 + iVar1 * 4);
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x10c + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,ar6,a6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036988(*(undefined4 *)(unsigned)(0x10a8 + ar4 + iVar1 * 4),ar6,a6,ar7));
    iVar2 = *(int *)(unsigned)(0x10a8 + ar4 + iVar1 * 4);
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar2 + 8) + 0x5c))))(iVar2,ar6,a6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x4c))))(ar5,*(undefined4 *)(unsigned)(0x10a8 + ar4 + iVar1 * 4),a6,ar7));
    iVar2 = 0x10a8;
    *(undefined4 *)(unsigned)(0x10a8 + ar4 + iVar1 * 4) = 0;
  }
  return iVar2;
}

__asm__(".globl _s_CSquidLine_085b18\n.set _s_CSquidLine_085b18, _s_CSquidLine_085b18_def\n");
//@unit 8c085c1c
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
undefined4 FUN_8c085c1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c085c1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x490) + 0x1c))))
                    ((int *)(unsigned)(ar4 + 0x490),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c085c1c\n.set _FUN_8c085c1c, _FUN_8c085c1c_def\n");
//@unit 8c085c3c
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
int FUN_8c085c3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c085c3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 148; for (int i_ = 0; i_ < 148; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined1 *puVar2;
  undefined4 *ar6_00;
  float *ar6_01;
  float fVar3;
  double dVar4;
  float fVar5;
  undefined8 in_dr6 = 0;
  float in_fr8 = 0;
  float in_xf0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  fVar5 = (float)in_dr6;
  ar5_00 = 1;
  (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c036d3c(*(undefined4 *)(unsigned)(ar4 + 0x308),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c085e8c(ar4 + 0xd20,ar5_00,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 148)), get_field_2a4_085e80(ar4 + 0xd20,ar5_00,ar6,ar7));
  if (iVar1 == 1) {
    iVar1 = ar4 + 0x50;
    (vsp = ((unsigned long)(fr0_ - 148)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x40)),iVar1,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x144))))(ar4,iVar1,ar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 148)) - 8); FUN_8c023484(iVar1 + 0xd8,((undefined1 *)(fr0_ - 0x40)),ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 148)) - 8); Vec3_add(ar4 + 0x30,((undefined1 *)(fr0_ - 0x50)),ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_ctor_copy(&(*(undefined4 *)(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x60)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), object_dtor_delete(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6,ar7));
    if (cVar7 != '\0') {
      (*(undefined4 *)(fr0_ - 0x18)) = (*(undefined4 *)(fr0_ - 0xc));
    }
    ar6_00 = &(*(undefined4 *)(fr0_ - 0x90));
    puVar2 = ((undefined1 *)(fr0_ - 0x24));
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c256294(0,puVar2,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x34)),puVar2,ar6_00,ar7));
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x90)),fVar5);
      (*(float *)(fr0_ - 0x30)) = in_xf0;
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x8c)),(*(undefined4 *)(fr0_ - 0x90)));
      (*(float *)(fr0_ - 0x30)) = fVar5;
    }
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) - F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),fVar3);
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
    }
    if (cVar6 == '\0') {
      (*(float *)(fr0_ - 0x34)) = F32LO(dVar4) + F32HI(dVar4);
    }
    else {
      (*(float *)(fr0_ - 0x34)) = SUB84(dVar4 + dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x8c)),in_fr8);
    }
    else {
      dVar4 = CONCAT44D(((undefined4 *)(fr0_ - 0x88))[0],(*(undefined4 *)(fr0_ - 0x8c)));
      (*(float *)(fr0_ - 0x34)) = (*(float *)(fr0_ - 0x30));
      (*(float *)(fr0_ - 0x30)) = in_fr8;
    }
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) - F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D(0xbf800000,fVar3);
    }
    else {
      dVar4 = 1.65674406927311e-311;
    }
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),fVar3);
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
    }
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) + F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar7 == '\0') {
      (*(float *)(fr0_ - 0x30)) = fVar3;
      fVar5 = (*(float *)(fr0_ - 0x28));
    }
    (*(float *)(fr0_ - 0x28)) = fVar5;
    (*(undefined4 *)(fr0_ - 0x2c)) = (int)((ulonglong)in_dr6 >> 0x20);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 148)) - 8); FUN_8c02ace4(*(undefined4 *)(unsigned)(ar4 + 0x30c),puVar2,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x7c)),puVar2,ar6_00,ar7));
    puVar2 = ((undefined1 *)(fr0_ - 0x70));
    ar6_01 = &(*(float *)(fr0_ - 0x34));
    ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x88))); unsigned long t1_ = (unsigned long)(((undefined1 *)(fr0_ - 0x7c))); *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 148)) - 8); FUN_8c0332b4(*(undefined4 *)(unsigned)(ar4 + 0x30c),&(*(undefined4 *)(fr0_ - 0x18)),ar6_01,puVar2); });
    (vsp = ((unsigned long)(fr0_ - 148)), vec3_copy_8c023d8c(ar4 + 0x3fc,((undefined4 *)(fr0_ - 0x88)),ar6_01,puVar2));
    (vsp = ((unsigned long)(fr0_ - 148)), object_dtor_delete(((undefined4 *)(fr0_ - 0x88)),0xffffffff,ar6_01,puVar2));
    (vsp = ((unsigned long)(fr0_ - 148)), object_dtor_delete(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6_01,puVar2));
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_01,puVar2));
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(&(*(float *)(fr0_ - 0x34)),0xffffffff,ar6_01,puVar2));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x18)),0xffffffff,ar6_01,puVar2));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c085c3c\n.set _FUN_8c085c3c, _FUN_8c085c3c_def\n");
//@unit 8c085e80
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
undefined4 get_field_2a4_085e80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_2a4_085e80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x2a4 + ar4);
}

__asm__(".globl _get_field_2a4_085e80\n.set _get_field_2a4_085e80, _get_field_2a4_085e80_def\n");
//@unit 8c085e8c
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
int FUN_8c085e8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c085e8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x2a8;
  *(undefined4 *)(unsigned)(0x2a8 + ar4) = 1;
  return iVar1;
}

__asm__(".globl _FUN_8c085e8c\n.set _FUN_8c085e8c, _FUN_8c085e8c_def\n");
//@unit 8c085e9c
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
undefined4 FUN_8c085e9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c085e9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = (float)*(int *)(unsigned)(ar4 + 0x458) / 216000.0;
  *(float *)(unsigned)(ar4 + 0x438) = (*(undefined4 *)(unsigned)(unsigned)0x8c137b1c) * fVar3;
  *(float *)(unsigned)(ar4 + 0x43c) = (*(undefined1 *)(unsigned)0x8c137b20) * fVar3;
  *(float *)(unsigned)(ar4 + 0x440) = (*(undefined1 *)(unsigned)0x8c137b24) * fVar3;
  *(float *)(unsigned)(ar4 + 0x444) = (*(undefined1 *)(unsigned)0x8c137b28) * fVar3;
  iVar1 = *(int *)(unsigned)(ar4 + 0x458);
  *(int *)(unsigned)(ar4 + 0x458) = iVar1 + 1;
  uVar2 = 0x34bc0;
  if (0x34bc0 < iVar1 + 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x458) = 0;
    uVar2 = 0x74;
    *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0x7fffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c085e9c\n.set _FUN_8c085e9c, _FUN_8c085e9c_def\n");
//@unit 8c085f4c
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
undefined4 s_gm1_Home_njd_085f50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_gm1_Home_njd_085f50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 336; for (int i_ = 0; i_ < 336; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  undefined8 in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  (*(undefined4 *)(unsigned)(unsigned)0x8c28107c) = (ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c28107c);
  cVar12 = '\0';
  cVar11 = '\0';
  for (iVar8 = 0; iVar8 < 8; iVar8 = iVar8 + 1) {
    *(unsigned *)(unsigned)(iVar8 * 0x124 + -0x73d7f04c) = ((undefined1 *)(unsigned)0x8c27d1fc);
  }
  *(unsigned *)0x8c280fb8 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137b58));
  *(unsigned *)0x8c280fbc = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137ba0));
  (*(undefined4 *)(unsigned)(unsigned)0x8c280fc0) = (*(undefined4 *)(unsigned)(unsigned)0x8c137b34);
  (*(undefined4 *)(unsigned)(unsigned)0x8c280fc4) = (*(undefined4 *)(unsigned)(unsigned)0x8c137b4c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c280fc8) = (*(undefined4 *)(unsigned)(unsigned)0x8c137b50);
  (*(undefined4 *)(unsigned)(unsigned)0x8c280fcc) = (*(undefined4 *)(unsigned)(unsigned)0x8c137b38);
  (*(undefined4 *)(unsigned)(unsigned)0x8c280fd0) = (*(undefined4 *)(unsigned)(unsigned)0x8c137b54);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281068) = 0x8c283444;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28107c) = CONCAT44(0x3ca3d70a,(*(undefined4 *)(unsigned)(unsigned)0x8c28107c));
  (*(undefined4 *)(unsigned)(unsigned)0x8c281084) = 0x3f4ccccd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281088) = 0x42f00000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28108c) = 0;
  uVar2 = 0xdc;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281090) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281094) = 0x41100000;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 336)); Class_129920_m0_015248(0x8c28103c,&(*(undefined4 *)(unsigned)(unsigned)0x8c13841c),0xdc,0x8c280fb4); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 336)); Class_129920_m0_015248(0x8c281044,&(*(undefined4 *)(unsigned)(unsigned)0x8c13841c),uVar2,0x8c281044); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c280fd4) = (*(undefined4 *)(unsigned)(unsigned)0x8c137b3c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c280fd8) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c280fe4) = 0x8c282160;
  (*(undefined4 *)(unsigned)(unsigned)0x8c280fe8) = (*(undefined4 *)(unsigned)(unsigned)0x8c137b40);
  (*(undefined4 *)(unsigned)(unsigned)0x8c280fec) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c280ff8) = 0x8c282184;
  (*(undefined4 *)(unsigned)(unsigned)0x8c280ffc) = (*(undefined4 *)(unsigned)(unsigned)0x8c137b44);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281000) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28100c) = 0x8c2821a8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281010) = (*(undefined4 *)(unsigned)(unsigned)0x8c137b48);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281014) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281020) = 0x8c282220;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281054) = 0x8c28191c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281058) = 0x12;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28105c) = 0x8c281970;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281060) = 0x12;
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x18)),0x12,0x8c28191c,0x8c282220));
  uVar5 = 0x8c280fb4;
  pcVar3 = ((void *)0x8c023d8c);
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c2810ac,((undefined1 *)(fr0_ - 0x18)),((void *)0x8c023d8c),0x8c280fb4));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x18)),0xffffffff,pcVar3,uVar5));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x24)),uVar2,pcVar3,uVar5));
  uVar4 = 0x8c2810b8;
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c2810b8,((undefined1 *)(fr0_ - 0x24)),0x8c2810b8,uVar5));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x24)),0xffffffff,uVar4,uVar5));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x30)),uVar2,uVar4,uVar5));
  uVar2 = 0x8c2810c4;
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c2810c4,((undefined1 *)(fr0_ - 0x30)),0x8c2810c4,uVar5));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x30)),0xffffffff,uVar2,uVar5));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2810d4) = CONCAT44((*(undefined1 *)(unsigned)0x8c2810d4),0x42b40000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2810a0) = CONCAT44((*(undefined1 *)(unsigned)0x8c2810a0),0x41600000);
    dVar10 = CONCAT44D(0x3f000000,(*(undefined4 *)(unsigned)(unsigned)0x8c28107c));
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2810d4) = 0x12842b40000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2810a0) = 0xc841600000;
    dVar10 = -1.7008876239802676e-250;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c28107c);
  }
  if (cVar11 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281194) = F32LO(dVar10) * F32HI(dVar10);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281194) = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28107c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c281080),(*(undefined4 *)(unsigned)(unsigned)0x8c281194));
    uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c28107c);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c28107c) = uVar1;
  *(unsigned *)0x8c2810dc = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137c10));
  *(unsigned *)0x8c2810e0 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137c60));
  (*(undefined4 *)(unsigned)(unsigned)0x8c2810e4) = (*(undefined4 *)(unsigned)(unsigned)0x8c137bec);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2810e8) = (*(undefined4 *)(unsigned)(unsigned)0x8c137c04);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2810ec) = (*(undefined4 *)(unsigned)(unsigned)0x8c137c08);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2810f0) = (*(undefined4 *)(unsigned)(unsigned)0x8c137bf0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2810f4) = (*(undefined4 *)(unsigned)(unsigned)0x8c137c0c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2810f8) = (*(undefined4 *)(unsigned)(unsigned)0x8c137bf4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2810fc) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281108) = 0x8c282298;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28110c) = (*(undefined4 *)(unsigned)(unsigned)0x8c137bf8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281110) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28111c) = 0x8c2822bc;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281120) = (*(undefined4 *)(unsigned)(unsigned)0x8c137bfc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281124) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281130) = 0x8c2822e0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281134) = (*(undefined4 *)(unsigned)(unsigned)0x8c137c00);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281138) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281144) = 0x8c282358;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28118c) = 0x8c2834e4;
  if (cVar12 != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281194) = 0.75;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281190) = 0x3f400000;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281194) = 1.0;
    dVar10 = 0.0004882813655058271;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281198) = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,(*(undefined4 *)(unsigned)(unsigned)0x8c281194));
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c281194),0x3f400000);
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) - F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c281198),fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)(unsigned)0x8c28119e),CONCAT24((*(undefined4 *)(unsigned)(unsigned)0x8c28119c),(*(undefined4 *)(unsigned)(unsigned)0x8c281198)));
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) / F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x46610000,fVar9);
  }
  else {
    dVar10 = 1.0361173199865e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = F32HI(dVar10) / F32LO(dVar10);
    dVar10 = CONCAT44D(fVar9,SUB84(dVar10,0));
    (*(undefined4 *)(unsigned)(unsigned)0x8c28119c) = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    (*(undefined4 *)(unsigned)(unsigned)0x8c28119c) = (short)(int)dVar10;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c28119c) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28119c) = 1;
  }
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2811b4) = SUB84(dVar10,0);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2811b4) = 0x430c0000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2811ac) = 0x430c0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2811a8) = 0x3f4ccccd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2811a0) = CONCAT44(0x3ca3d70a,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c2811a0));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2811b4) = 0;
  }
  else {
    *(unsigned *)0x8c2811bc = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c138460));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2811b8) = 0x4179999a;
  uVar4 = 0x8c281160;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2811b0) = (*(undefined4 *)(unsigned)(unsigned)0x8c2811b4);
  Class_129920_m0_015248
            (0x8c281160,&(*(undefined4 *)(unsigned)(unsigned)0x8c138460),((void *)0x8c015248),0x8c281160,(*(undefined4 *)(fr0_ - 0x14c)));
  uVar2 = 0x8c280fb4;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 336)); Class_129920_m0_015248(0x8c281168,&(*(undefined4 *)(unsigned)(unsigned)0x8c138460),0x8c280fb4,uVar4); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c281178) = 0x8c2819c4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28117c) = 0x14;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281180) = 0x8c281a20;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281184) = 0x14;
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x3c)),0x14,uVar2,uVar4));
  puVar6 = ((undefined1 *)(fr0_ - 0x3c));
  uVar4 = 0x8c280fb4;
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(&(*(uint *)(unsigned)0x8c2811d0),puVar6,0x8c280fb4,puVar6));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,uVar4,puVar6));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x48)),uVar2,uVar4,puVar6));
  pcVar3 = ((void *)0x8c023d8c);
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c2811dc,((undefined1 *)(fr0_ - 0x48)),uVar4,((void *)0x8c023d8c)));
  uVar2 = 0xffffffff;
  puVar6 = ((undefined1 *)(fr0_ - 0x48));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(puVar6,0xffffffff,puVar6,pcVar3));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x54)),uVar2,puVar6,pcVar3));
  puVar6 = ((undefined1 *)(fr0_ - 0x54));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c2811e8,puVar6,puVar6,pcVar3));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x54)),0xffffffff,puVar6,pcVar3));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2811f8) = CONCAT44((*(undefined1 *)(unsigned)0x8c2811f8),0x42c80000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2811c8) = 0x43938000;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2811f8) = 0x21442c80000;
    (*(uint *)(unsigned)0x8c2811d0) = 0x210;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2811c8) = 0x1ec;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2811cc) = 0x43960000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2811c4) = 0x41b00000;
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x3f333333,(*(undefined4 *)(unsigned)(unsigned)0x8c2811a0));
  }
  else {
    dVar10 = 1.24825739279838e-311;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c2811a0);
  }
  if (cVar11 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812b8) = F32LO(dVar10) * F32HI(dVar10);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812b8) = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2811a0) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c2811a4),(*(undefined4 *)(unsigned)(unsigned)0x8c2812b8));
    uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c2811a0);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2811a0) = uVar1;
  *(unsigned *)0x8c281200 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137cd8));
  *(unsigned *)0x8c281204 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137d44));
  (*(undefined4 *)(unsigned)(unsigned)0x8c281208) = (*(undefined4 *)(unsigned)(unsigned)0x8c137cb4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c28120c) = (*(undefined4 *)(unsigned)(unsigned)0x8c137ccc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281210) = (*(undefined4 *)(unsigned)(unsigned)0x8c137cd0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281214) = (*(undefined4 *)(unsigned)(unsigned)0x8c137cb8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281218) = (*(undefined4 *)(unsigned)(unsigned)0x8c137cd4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c28121c) = (*(undefined4 *)(unsigned)(unsigned)0x8c137cbc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281220) = 6;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28122c) = 0x8c2823d0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281230) = (*(undefined4 *)(unsigned)(unsigned)0x8c137cc0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281234) = 6;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281240) = 0x8c282418;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281244) = (*(undefined4 *)(unsigned)(unsigned)0x8c137cc4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281248) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281254) = 0x8c282460;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281258) = (*(undefined4 *)(unsigned)(unsigned)0x8c137cc8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c28125c) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281268) = 0x8c2824d8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812b0) = 0x8c283584;
  if (cVar12 != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812b8) = 0.85;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812b4) = 0x3f59999a;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812b8) = 1.0;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812bc) = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,(*(undefined4 *)(unsigned)(unsigned)0x8c2812b8));
  }
  puVar6 = ((undefined1 *)(unsigned)0x8c2812b4);
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x3f59999a,(*(undefined4 *)(unsigned)(unsigned)0x8c2812b8));
  }
  else {
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c2812b8),0x3f59999a);
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) - F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c2812bc),fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)(unsigned)0x8c2812c2),CONCAT24((*(undefined4 *)(unsigned)(unsigned)0x8c2812c0),(*(undefined4 *)(unsigned)(unsigned)0x8c2812bc)));
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) / F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x46610000,fVar9);
  }
  else {
    dVar10 = 1.0361173199865e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = F32HI(dVar10) / F32LO(dVar10);
    dVar10 = CONCAT44D(fVar9,SUB84(dVar10,0));
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812c0) = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812c0) = (short)(int)dVar10;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2812c0) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812c0) = 1;
  }
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812d4) = SUB84(dVar10,0);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812d4) = 0x430c0000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812d0) = 0x430c0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812cc) = 0x3f4ccccd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812c4) = CONCAT44(0x3ca3d70a,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c2812c4));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812d4) = 0;
  }
  else {
    *(unsigned *)0x8c2812e0 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1384a4));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812dc) = 0x41b40000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812d8) = 0xbfa66666;
  pcVar3 = ((void *)0x8c015248);
  Class_129920_m0_015248
            (0x8c281284,&(*(undefined4 *)(unsigned)(unsigned)0x8c1384a4),((void *)0x8c015248),((undefined1 *)(unsigned)0x8c2812b4),(*(undefined4 *)(fr0_ - 0x14c)));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 336)); Class_129920_m0_015248(0x8c28128c,&(*(undefined4 *)(unsigned)(unsigned)0x8c1384a4),pcVar3,puVar6); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c28129c) = 0x8c281a7c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812a0) = 0x1b;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812a4) = 0x8c281af4;
  uVar4 = 0x1b;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812a8) = 0x1b;
  puVar6 = ((undefined1 *)(fr0_ - 0x60));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(puVar6,0x8c281af4,puVar6,0x1b));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(&(*(uint *)(unsigned)0x8c2812f4),((undefined1 *)(fr0_ - 0x60)),puVar6,uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x60)),0xffffffff,puVar6,uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x6c)),((void *)0x8c023d68),puVar6,uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c281300,((undefined1 *)(fr0_ - 0x6c)),puVar6,uVar4));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,puVar6,uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x78)),uVar2,puVar6,uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c28130c,((undefined1 *)(fr0_ - 0x78)),puVar6,uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x78)),0xffffffff,puVar6,uVar4));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28131c) = CONCAT44((*(undefined1 *)(unsigned)0x8c28131c),0x430c0000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812ec) = 0x43938000;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28131c) = 0x338430c0000;
    (*(uint *)(unsigned)0x8c2812f4) = 0x334;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812ec) = 0x310;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812f0) = 0x43960000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812e8) = 0x42040000;
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x3f333333,(*(undefined4 *)(unsigned)(unsigned)0x8c2812c4));
  }
  else {
    dVar10 = 1.86788016376024e-311;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c2812c4);
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) * F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812c4) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c2812c8),fVar9);
    uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c2812c4);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812c4) = uVar1;
  *(unsigned *)0x8c281324 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137e08));
  *(unsigned *)0x8c281328 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137e78));
  (*(undefined4 *)(unsigned)(unsigned)0x8c28132c) = (*(undefined4 *)(unsigned)(unsigned)0x8c137db4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281330) = (*(undefined4 *)(unsigned)(unsigned)0x8c137df4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281334) = (*(undefined4 *)(unsigned)(unsigned)0x8c137df8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281338) = (*(undefined4 *)(unsigned)(unsigned)0x8c137db8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c28133c) = (*(undefined4 *)(unsigned)(unsigned)0x8c137dfc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281340) = (*(undefined4 *)(unsigned)(unsigned)0x8c137dc4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281344) = 9;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281350) = 0x8c282550;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281354) = (*(undefined4 *)(unsigned)(unsigned)0x8c137dc8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281358) = 9;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281364) = 0x8c2825bc;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281368) = (*(undefined4 *)(unsigned)(unsigned)0x8c137ddc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c28136c) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281378) = 0x8c2827d8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28137c) = (*(undefined4 *)(unsigned)(unsigned)0x8c137de0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281380) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28138c) = 0x8c282850;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813d4) = 0x8c283624;
  if (cVar12 == '\0') {
    dVar10 = 5.004884578511337e-05;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2813e0) = 0x430;
    in_xd0 = 0x4303f2e147b;
    dVar10 = 0.00022949223013711163;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813dc) = 0x3f2e147b;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813d8) = 0x3f0a3d71;
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) - F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c2813e0),fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)(unsigned)0x8c2813e6),CONCAT24((*(undefined4 *)(unsigned)(unsigned)0x8c2813e4),(*(undefined4 *)(unsigned)(unsigned)0x8c2813e0)));
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) / F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x46610000,fVar9);
  }
  else {
    dVar10 = 2.29233882823794e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = F32HI(dVar10) / F32LO(dVar10);
    dVar10 = CONCAT44D(fVar9,SUB84(dVar10,0));
    (*(undefined4 *)(unsigned)(unsigned)0x8c2813e4) = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2813e4) = (short)(int)dVar10;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2813e4) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2813e4) = 1;
  }
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2813f8) = SUB84(dVar10,0);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2813f8) = 0x435c0000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813f4) = 0x435c0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813f0) = 0x3e99999a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813e8) = CONCAT44(0x3a1d4952,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c2813e8));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2813f8) = 0;
  }
  else {
    *(unsigned *)0x8c281404 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1384e8));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281400) = 0x42630000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813fc) = 0x3f400000;
  uVar4 = 0x8c280fb4;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 336)); Class_129920_m0_015248(0x8c2813a8,&(*(undefined4 *)(unsigned)(unsigned)0x8c1384e8),((undefined1 *)(unsigned)0x8c2813f4),0x8c280fb4); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 336)); Class_129920_m0_015248(0x8c2813b0,&(*(undefined4 *)(unsigned)(unsigned)0x8c1384e8),0x3fc,uVar4); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813c0) = 0x8c281b6c;
  uVar2 = 0x410;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813c4) = 0x1c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813c8) = 0x8c281be8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813cc) = 0x1c;
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x84)),0x418,0x410,uVar4));
  uVar5 = 0x464;
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c281418,((undefined1 *)(fr0_ - 0x84)),uVar2,0x464));
  uVar4 = 0xffffffff;
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x84)),0xffffffff,0xffffffff,uVar5));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x90)),uVar2,uVar4,uVar5));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c281424,((undefined1 *)(fr0_ - 0x90)),uVar4,uVar5));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x90)),0xffffffff,uVar4,uVar5));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x9c)),uVar2,uVar4,uVar5));
  uVar2 = 0x8c281430;
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c281430,((undefined1 *)(fr0_ - 0x9c)),0x8c281430,uVar5));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,uVar2,uVar5));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281440) = CONCAT44((*(undefined1 *)(unsigned)0x8c281440),0x43160000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c28140c) = CONCAT44((*(undefined1 *)(unsigned)0x8c28140c),0x427c0000);
    dVar10 = CONCAT44D(0x3f333333,(*(undefined4 *)(unsigned)(unsigned)0x8c2813e8));
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281440) = 0x45843160000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c28140c) = 0x434427c0000;
    dVar10 = 2.48750293472209e-311;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c2813e8);
  }
  if (cVar11 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281500) = F32LO(dVar10) * F32HI(dVar10);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281500) = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2813e8) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c2813ec),(*(undefined4 *)(unsigned)(unsigned)0x8c281500));
    uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c2813e8);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813e8) = uVar1;
  *(unsigned *)0x8c281448 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137ee8));
  *(unsigned *)0x8c28144c = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137f58));
  (*(undefined4 *)(unsigned)(unsigned)0x8c281450) = (*(undefined4 *)(unsigned)(unsigned)0x8c137db4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281454) = (*(undefined4 *)(unsigned)(unsigned)0x8c137df4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281458) = (*(undefined4 *)(unsigned)(unsigned)0x8c137df8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c28145c) = (*(undefined4 *)(unsigned)(unsigned)0x8c137dbc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281460) = (*(undefined4 *)(unsigned)(unsigned)0x8c137e00);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281464) = (*(undefined4 *)(unsigned)(unsigned)0x8c137dcc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281468) = 9;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281474) = 0x8c282628;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281478) = (*(undefined4 *)(unsigned)(unsigned)0x8c137dd0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c28147c) = 9;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281488) = 0x8c282694;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28148c) = (*(undefined4 *)(unsigned)(unsigned)0x8c137de4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281490) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28149c) = 0x8c2828c8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2814a0) = (*(undefined4 *)(unsigned)(unsigned)0x8c137de8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2814a4) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2814b0) = 0x8c282940;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2814f8) = 0x8c283624;
  if (cVar12 != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281500) = 0.68;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2814fc) = 0x3f2e147b;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281500) = 1.0;
    dVar10 = 0.0002294922303462954;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281504) = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,(*(undefined4 *)(unsigned)(unsigned)0x8c281500));
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c281500),0x3f2e147b);
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) - F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c281504),fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)(unsigned)0x8c28150a),CONCAT24((*(undefined4 *)(unsigned)(unsigned)0x8c281508),(*(undefined4 *)(unsigned)(unsigned)0x8c281504)));
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) / F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x46610000,fVar9);
  }
  else {
    dVar10 = 2.9119615991998e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = F32HI(dVar10) / F32LO(dVar10);
    dVar10 = CONCAT44D(fVar9,SUB84(dVar10,0));
    (*(undefined4 *)(unsigned)(unsigned)0x8c281508) = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    (*(undefined4 *)(unsigned)(unsigned)0x8c281508) = (short)(int)dVar10;
  }
  iVar8 = (int)(*(undefined4 *)(unsigned)(unsigned)0x8c281508);
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c281508) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281508) = 1;
  }
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28151c) = SUB84(dVar10,0);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28151c) = 0x435c0000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281518) = 0x435c0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281514) = 0x3e99999a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28150c) = CONCAT44(0x3a03126f,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c28150c));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28151c) = 0;
  }
  else {
    *(unsigned *)0x8c281528 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1384e8));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281524) = 0x42630000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281520) = 0x3f400000;
  pcVar3 = ((void *)0x8c015248);
  Class_129920_m0_015248
            (0x8c2814cc,&(*(undefined4 *)(unsigned)(unsigned)0x8c1384e8),((void *)0x8c015248),iVar8,(*(undefined4 *)(fr0_ - 0x14c)));
  Class_129920_m0_015248
            (0x8c2814d4,&(*(undefined4 *)(unsigned)(unsigned)0x8c1384e8),pcVar3,((void *)0x8c015248),(*(undefined4 *)(fr0_ - 0x14c)));
  (*(undefined4 *)(unsigned)(unsigned)0x8c2814e4) = 0x8c281c64;
  uVar2 = 0x1c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2814e8) = 0x1c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2814ec) = 0x8c281ce0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2814f0) = 0x1c;
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xa8)),0x8c280fb4,0x1c,0x8c281c64));
  pcVar7 = ((void *)0x8c023d8c);
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c28153c,((undefined1 *)(fr0_ - 0xa8)),uVar2,((void *)0x8c023d8c)));
  pcVar3 = ((void *)0x8c014a34);
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,((void *)0x8c014a34),pcVar7));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xb4)),((undefined1 *)(fr0_ - 0xb4)),pcVar3,pcVar7));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c281548,((undefined1 *)(fr0_ - 0xb4)),((void *)0x8c023d8c),pcVar7));
  puVar6 = ((undefined1 *)(fr0_ - 0xb4));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(puVar6,0xffffffff,puVar6,pcVar7));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xc0)),((undefined1 *)(fr0_ - 0xc0)),puVar6,pcVar7));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c281554,((undefined1 *)(fr0_ - 0xc0)),((void *)0x8c023d8c),pcVar7));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,((undefined1 *)(fr0_ - 0xc0)),pcVar7));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281564) = CONCAT44((*(undefined1 *)(unsigned)0x8c281564),0x43160000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c281530) = CONCAT44((*(undefined1 *)(unsigned)0x8c281530),0x427c0000);
    dVar10 = CONCAT44D(0x3f666666,(*(undefined4 *)(unsigned)(unsigned)0x8c28150c));
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281564) = 0x8c280fb443160000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c281530) = 0x558427c0000;
    dVar10 = 3.10712736349307e-311;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c28150c);
  }
  if (cVar11 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281620) = F32LO(dVar10) * F32HI(dVar10);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281620) = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28150c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c281510),(*(undefined4 *)(unsigned)(unsigned)0x8c281620));
    uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c28150c);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c28150c) = uVar1;
  *(unsigned *)0x8c28156c = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137fc8));
  *(unsigned *)0x8c281570 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c138038));
  (*(undefined4 *)(unsigned)(unsigned)0x8c281574) = (*(undefined4 *)(unsigned)(unsigned)0x8c137db4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281578) = (*(undefined4 *)(unsigned)(unsigned)0x8c137df4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c28157c) = (*(undefined4 *)(unsigned)(unsigned)0x8c137df8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281580) = (*(undefined4 *)(unsigned)(unsigned)0x8c137dc0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281584) = (*(undefined4 *)(unsigned)(unsigned)0x8c137e04);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281588) = (*(undefined4 *)(unsigned)(unsigned)0x8c137dd4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c28158c) = 9;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281598) = 0x8c282700;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28159c) = (*(undefined4 *)(unsigned)(unsigned)0x8c137dd8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2815a0) = 9;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2815ac) = 0x8c28276c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2815b0) = (*(undefined4 *)(unsigned)(unsigned)0x8c137dec);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2815b4) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2815c0) = 0x8c2829b8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2815c4) = (*(undefined4 *)(unsigned)(unsigned)0x8c137df0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2815c8) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2815d4) = 0x8c282a30;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28161c) = 0x8c283624;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281620) = 1.0;
    dVar10 = 0.007812501854205038;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281628) = 0x678;
    in_xd0 = 0x6783fb5c28f;
    dVar10 = CONCAT44D(0x3fb5c28f,(*(undefined4 *)(unsigned)(unsigned)0x8c281620));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281624) = 0x3fb5c28f;
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) - F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c281628),fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)(unsigned)0x8c28162e),CONCAT24((*(undefined4 *)(unsigned)(unsigned)0x8c28162c),(*(undefined4 *)(unsigned)(unsigned)0x8c281628)));
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) / F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x46610000,fVar9);
  }
  else {
    dVar10 = 3.53158437016166e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = F32HI(dVar10) / F32LO(dVar10);
    dVar10 = CONCAT44D(fVar9,SUB84(dVar10,0));
    (*(undefined4 *)(unsigned)(unsigned)0x8c28162c) = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    (*(undefined4 *)(unsigned)(unsigned)0x8c28162c) = (short)(int)dVar10;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c28162c) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28162c) = 1;
  }
  if (cVar12 == '\0') {
    uVar2 = SUB84(dVar10,0);
  }
  else {
    uVar2 = 0x435c0000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c28163c) = 0x435c0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281638) = 0x3e99999a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281634) = 0x3a03126f;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281640) = 0;
    uVar4 = uVar2;
  }
  else {
    uVar4 = 0x42630000;
    *(unsigned *)0x8c28164c = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1384e8));
    (*(undefined4 *)(unsigned)(unsigned)0x8c281640) = uVar2;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281648) = 0x42630000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281644) = 0x3f400000;
  Class_129920_m0_015248
            (0x8c2815f0,&(*(undefined4 *)(unsigned)(unsigned)0x8c1384e8),((undefined1 *)(unsigned)0x8c281624),((void *)0x8c015248),(*(undefined4 *)(fr0_ - 0x14c)));
  uVar2 = 0x8c280fb4;
  pcVar3 = ((void *)0x8c015248);
  (vsp = ((unsigned long)(fr0_ - 336)), Class_129920_m0_015248(0x8c2815f8,&(*(undefined4 *)(unsigned)(unsigned)0x8c1384e8),((void *)0x8c015248),0x8c280fb4));
  (*(undefined4 *)(unsigned)(unsigned)0x8c281608) = 0x8c281d5c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28160c) = 0x1c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281610) = 0x8c281dd8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281614) = 0x1c;
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xcc)),0x65c,pcVar3,uVar2));
  uVar5 = 0x8c281660;
  pcVar3 = ((void *)0x8c023d8c);
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c281660,((undefined1 *)(fr0_ - 0xcc)),((void *)0x8c023d8c),0x8c281660));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0xcc)),0xffffffff,pcVar3,uVar5));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xd8)),uVar2,pcVar3,uVar5));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c28166c,((undefined1 *)(fr0_ - 0xd8)),pcVar3,uVar5));
  uVar2 = 0xffffffff;
  pcVar7 = ((void *)0x8c014a34);
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,pcVar3,((void *)0x8c014a34)));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xe4)),uVar2,((void *)0x8c023d68),pcVar7));
  uVar2 = 0x8c281678;
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c281678,((undefined1 *)(fr0_ - 0xe4)),0x8c281678,pcVar7));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,uVar2,pcVar7));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281654) = CONCAT44((*(undefined1 *)(unsigned)0x8c281654),0x427c0000);
  }
  else {
    uVar4 = 0x427c0000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c281654) = 0x558427c0000;
  }
  *(unsigned *)0x8c281690 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1380d0));
  *(unsigned *)0x8c281694 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c138174));
  (*(undefined4 *)(unsigned)(unsigned)0x8c281698) = (*(undefined4 *)(unsigned)(unsigned)0x8c1380ac);
  (*(undefined4 *)(unsigned)(unsigned)0x8c28169c) = (*(undefined4 *)(unsigned)(unsigned)0x8c1380c4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816a0) = (*(undefined4 *)(unsigned)(unsigned)0x8c1380c8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816a4) = (*(undefined4 *)(unsigned)(unsigned)0x8c1380b0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816a8) = (*(undefined4 *)(unsigned)(unsigned)0x8c1380cc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816ac) = (*(undefined4 *)(unsigned)(unsigned)0x8c1380b4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816b0) = 0xd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816bc) = 0x8c282aa8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816c0) = (*(undefined4 *)(unsigned)(unsigned)0x8c1380b8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816c4) = 0xd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816d0) = 0x8c282b44;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816d4) = (*(undefined4 *)(unsigned)(unsigned)0x8c1380bc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816d8) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816e4) = 0x8c282be0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816e8) = (*(undefined4 *)(unsigned)(unsigned)0x8c1380c0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816ec) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816f8) = 0x8c282c58;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281740) = 0x8c2836c4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281748) = uVar4;
  if (cVar12 != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281748) = 0x3f5374bc;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281744) = 0x3f5374bc;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281748) = 0x3f800000;
    dVar10 = 0.0011874998435814632;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28174c) = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,(*(undefined4 *)(unsigned)(unsigned)0x8c281748));
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c281748),0x3f5374bc);
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) - F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c28174c),fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)(unsigned)0x8c281752),CONCAT24((*(undefined4 *)(unsigned)(unsigned)0x8c281750),(*(undefined4 *)(unsigned)(unsigned)0x8c28174c)));
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) / F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x46610000,fVar9);
  }
  else {
    dVar10 = 4.15120714112352e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = F32HI(dVar10) / F32LO(dVar10);
    dVar10 = CONCAT44D(fVar9,SUB84(dVar10,0));
    (*(undefined4 *)(unsigned)(unsigned)0x8c281750) = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    (*(undefined4 *)(unsigned)(unsigned)0x8c281750) = (short)(int)dVar10;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c281750) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281750) = 1;
  }
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281764) = SUB84(dVar10,0);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281764) = 0x3e19999a;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c28175c) = 0x3e19999a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281754) = CONCAT44(0x3ba3d70a,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c281754));
  uVar2 = 0x8c280fb4;
  if (cVar12 != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281764) = 0x43b40000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281760) = 0x43b40000;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281764) = 0;
  }
  else {
    (*(uint *)(unsigned)0x8c281770) = 0x7c0;
    *(unsigned *)0x8c281778 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c13852c));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281774) = 0x41ec0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28176c) = 0x429f0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281768) = 0x3fd33333;
  Class_129920_m0_015248
            (0x8c281714,&(*(undefined4 *)(unsigned)(unsigned)0x8c13852c),((void *)0x8c015248),0x8c280fb4,(*(undefined4 *)(fr0_ - 0x14c)));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 336)); Class_129920_m0_015248(0x8c28171c,&(*(undefined4 *)(unsigned)(unsigned)0x8c13852c),0x8c280fb4,uVar2); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c28172c) = 0x8c281e54;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281730) = 0x29;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281734) = 0x8c281f04;
  uVar4 = 0x784;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281738) = 0x29;
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xf0)),0x29,0x784,uVar2));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c281784,((undefined1 *)(fr0_ - 0xf0)),uVar4,uVar2));
  uVar4 = 0xffffffff;
  pcVar3 = ((void *)0x8c014a34);
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,((void *)0x8c014a34),uVar2));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xfc)),uVar4,pcVar3,uVar2));
  uVar4 = 0x8c281790;
  pcVar3 = ((void *)0x8c023d8c);
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c281790,((undefined1 *)(fr0_ - 0xfc)),((void *)0x8c023d8c),0x8c281790));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0xfc)),0xffffffff,pcVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x108)),uVar2,pcVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c28179c,((undefined1 *)(fr0_ - 0x108)),pcVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x108)),0xffffffff,pcVar3,uVar4));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2817ac) = CONCAT44((*(undefined1 *)(unsigned)0x8c2817ac),0x437a0000);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2817ac) = 0x7c4437a0000;
    (*(uint *)(unsigned)0x8c28177c) = 0x7a0;
  }
  *(unsigned *)0x8c281778 = (unsigned)(unsigned long)((undefined **)(unsigned)0x42e40000);
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x3fa66666,(*(undefined4 *)(unsigned)(unsigned)0x8c281754));
  }
  else {
    dVar10 = 4.3463749776783e-311;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c281754);
  }
  if (cVar11 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28186c) = F32LO(dVar10) * F32HI(dVar10);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28186c) = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281754) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c281758),(*(undefined4 *)(unsigned)(unsigned)0x8c28186c));
    uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c281754);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281754) = uVar1;
  *(unsigned *)0x8c2817b4 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c138240));
  *(unsigned *)0x8c2817b8 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c138310));
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817bc) = (*(undefined4 *)(unsigned)(unsigned)0x8c13821c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817c0) = (*(undefined4 *)(unsigned)(unsigned)0x8c138234);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817c4) = (*(undefined4 *)(unsigned)(unsigned)0x8c138238);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817c8) = (*(undefined4 *)(unsigned)(unsigned)0x8c138220);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817cc) = (*(undefined4 *)(unsigned)(unsigned)0x8c13823c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817d0) = (*(undefined4 *)(unsigned)(unsigned)0x8c138224);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817d4) = 0xd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817e0) = 0x8c282cd0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817e4) = (*(undefined4 *)(unsigned)(unsigned)0x8c138228);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817e8) = 0xd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817f4) = 0x8c282d6c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817f8) = (*(undefined4 *)(unsigned)(unsigned)0x8c13822c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817fc) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281808) = 0x8c282e08;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28180c) = (*(undefined4 *)(unsigned)(unsigned)0x8c138230);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281810) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28181c) = 0x8c282e80;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281864) = 0x8c283764;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28186c) = 1.0;
    dVar10 = 0.007812501848093234;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281870) = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,(*(undefined4 *)(unsigned)(unsigned)0x8c28186c));
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c28186c),(*(undefined4 *)(unsigned)(unsigned)0x8c28186c));
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) - F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c281870),fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)(unsigned)0x8c281876),CONCAT24((*(undefined4 *)(unsigned)(unsigned)0x8c281874),(*(undefined4 *)(unsigned)(unsigned)0x8c281870)));
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) / F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x46610000,fVar9);
  }
  else {
    dVar10 = 4.77082991208538e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = F32HI(dVar10) / F32LO(dVar10);
    dVar10 = CONCAT44D(fVar9,SUB84(dVar10,0));
    (*(undefined4 *)(unsigned)(unsigned)0x8c281874) = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    (*(undefined4 *)(unsigned)(unsigned)0x8c281874) = (short)(int)dVar10;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c281874) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281874) = 1;
  }
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281888) = SUB84(dVar10,0);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281888) = 0x3ba3d70a;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281878) = CONCAT44(0x3ba3d70a,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c281878));
  uVar2 = 0x8c280fb4;
  if (cVar12 != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281888) = 0x43be0000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281884) = 0x43be0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281880) = 0x3e19999a;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281888) = 0;
  }
  else {
    (*(uint *)(unsigned)0x8c281894) = 0x8e4;
    *(unsigned *)0x8c28189c = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c138570));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281898) = 0x42120000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281890) = 0x42c00000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28188c) = 0x40000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281868) = (*(undefined4 *)(unsigned)(unsigned)0x8c28186c);
  Class_129920_m0_015248
            (0x8c281838,&(*(undefined4 *)(unsigned)(unsigned)0x8c138570),((void *)0x8c015248),0x8c280fb4,(*(undefined4 *)(fr0_ - 0x14c)));
  pcVar3 = ((void *)0x8c015248);
  (vsp = ((unsigned long)(fr0_ - 336)), Class_129920_m0_015248(0x8c281840,&(*(undefined4 *)(unsigned)(unsigned)0x8c138570),((void *)0x8c015248),uVar2));
  (*(undefined4 *)(unsigned)(unsigned)0x8c281850) = 0x8c281fb4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281854) = 0x34;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281858) = 0x8c282090;
  uVar4 = 0x8a8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28185c) = 0x34;
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x114)),0x8c280fb4,pcVar3,0x8a8));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c2818a8,((undefined1 *)(fr0_ - 0x114)),0x8f4,uVar4));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x114)),0xffffffff,((undefined1 *)(fr0_ - 0x114)),uVar4));
  pcVar3 = ((void *)0x8c023d68);
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x120)),uVar2,((void *)0x8c023d68),uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c2818b4,((undefined1 *)(fr0_ - 0x120)),pcVar3,uVar4));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x120)),0xffffffff,pcVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x12c)),uVar2,pcVar3,((void *)0x8c023d68)));
  uVar2 = 0x8c280fb4;
  pcVar3 = ((void *)0x8c023d8c);
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c2818c0,((undefined1 *)(fr0_ - 0x12c)),((void *)0x8c023d8c),0x8c280fb4));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x12c)),0xffffffff,pcVar3,uVar2));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2818d0) = CONCAT44((*(undefined1 *)(unsigned)0x8c2818d0),0x43960000);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2818d0) = 0x8e843960000;
    (*(uint *)(unsigned)0x8c2818a0) = 0x8c4;
  }
  *(unsigned *)0x8c28189c = (unsigned)(unsigned long)((undefined **)(unsigned)0x42fe0000);
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x3fc00000,(*(undefined4 *)(unsigned)(unsigned)0x8c281878));
  }
  else {
    dVar10 = -4.2070694879144825e-250;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c281878);
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) * F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281878) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c28187c),fVar9);
    uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c281878);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281878) = uVar1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2818e0) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2818e4) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2818e8) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2818ec) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2818f0) = 6;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2818f4) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2818f8) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2818fc) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281900) = 0xffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281904) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281908) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28190c) = 0;
  return 0x20;
}

__asm__(".globl _s_gm1_Home_njd_085f50\n.set _s_gm1_Home_njd_085f50, _s_gm1_Home_njd_085f50_def\n");
//@unit 8c087ed0
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
int s_GRAPHICS_HIGYOLINE_087ed2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_HIGYOLINE_087ed2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar6_00;
  int ar6_01;
  undefined4 ar7_00;
  
  ar7_00 = 0x15;
  ar6_00 = 1;
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(ar5); unsigned long t2_ = (unsigned long)(0x8c283804); unsigned long t3_ = (unsigned long)(0x8c283934); unsigned long t4_ = (unsigned long)((*(undefined4 *)(unsigned)(unsigned)0x8c138578)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c0254d0(ar4,4,1,0x15); });
  *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12a298);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016fcc(ar4 + 0x490,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ff6c(ar4 + 0x528,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030fa0(ar4 + 0x5c4,uVar1,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c139e22)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c014334(ar4 + 0xc,uVar1,ar6_00,ar7_00); });
  *(int *)(unsigned)(ar4 + 0x308) = ar4 + 0x528;
  *(int *)(unsigned)(ar4 + 0x30c) = ar4 + 0x5c4;
  *(undefined1 *)(unsigned)(ar4 + 0x524) = 0xff;
  ar6_01 = ar4 + 0x490;
  uVar1 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xb4);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f532c(ar4,uVar1,ar6_01,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c027224(ar4 + 0x5c4,uVar1,ar6_01,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xa8) + 0x28))))((int *)(unsigned)(ar4 + 0xa8),ar4 + 0x30,ar6_01,ar7_00));
  *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
  return ar4;
}

__asm__(".globl _s_GRAPHICS_HIGYOLINE_087ed2\n.set _s_GRAPHICS_HIGYOLINE_087ed2, _s_GRAPHICS_HIGYOLINE_087ed2_def\n");
//@unit 8c08800c
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
int CAnimal_m0_08800c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m0_08800c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12a298);
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129cbc_m0_0312f4(ar4 + 0x5c4,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129c24_m0_02ff90(ar4 + 0x528,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129938_m0_017084(ar4 + 0x490,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), CAnimal_m0_025688(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _CAnimal_m0_08800c\n.set _CAnimal_m0_08800c, _CAnimal_m0_08800c_def\n");
//@unit 8c088094
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
undefined4 CAnimal_m2_088094_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "CAnimal_m2_088094";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  
  cVar1 = *(char *)(unsigned)(0x524 + ar4);
  uVar4 = ar5;
  uVar5 = ar6;
  piVar6 = ar7;
  if (cVar1 == -1) {
    if (*(int *)(unsigned)(0x330 + ar4) != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x10c + *(int *)(unsigned)(*(int *)(unsigned)(0x330 + ar4) + 8)))))
                (*(int *)(unsigned)(0x330 + ar4),ar5,ar6,ar7));
    }
    *(undefined1 *)(unsigned)(0x524 + ar4) = 0;
  }
  else if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      uVar5 = 0x1b;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar5,0x16,0x1b,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x110 + *(int *)(unsigned)(*(int *)(unsigned)(0x330 + ar4) + 8)))))
                (*(int *)(unsigned)(0x330 + ar4),0,uVar5,piVar6));
      uVar4 = *(undefined4 *)(unsigned)(0x330 + ar4);
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x4c))))(ar7,uVar4,uVar5,piVar6));
      *(undefined4 *)(unsigned)(0x330 + ar4) = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4d84(ar4,uVar4,uVar5,piVar6));
      *(undefined1 *)(unsigned)(0x524 + ar4) = 2;
    }
    goto LAB_8c0881ac;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,uVar4,uVar5,piVar6));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_02d1b8(ar4 + 0x21c,uVar4,uVar5,piVar6));
  uVar4 = 0x3c;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                    ((uVar2 & 0xffff) - iVar3,0x3c,uVar5,piVar6));
  if (9 < iVar3) {
    *(undefined1 *)(unsigned)(0x524 + ar4) = 1;
  }
  if (*(int *)(unsigned)(0x330 + ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x110 + *(int *)(unsigned)(*(int *)(unsigned)(0x330 + ar4) + 8)))))
              (*(int *)(unsigned)(0x330 + ar4),1,uVar5,piVar6));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(0x330 + ar4) + 8) + 0x10))))
              (*(int *)(unsigned)(0x330 + ar4),ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036988(*(undefined4 *)(unsigned)(0x330 + ar4),ar5,ar6,ar7));
    uVar4 = ar5;
    uVar5 = ar6;
    piVar6 = ar7;
  }
LAB_8c0881ac:
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xf8 + *(int *)(unsigned)(ar4 + 8)))))(ar4,uVar4,uVar5,piVar6));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f79b8(ar4 + 0xa0,uVar4,uVar5,piVar6));
  return 1;
}

__asm__(".globl _CAnimal_m2_088094\n.set _CAnimal_m2_088094, _CAnimal_m2_088094_def\n");
//@unit 8c088210
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
undefined4 * CAnimal_m7_088210_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m7_088210";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  double in_dr0 = 0;
  double dVar2;
  undefined4 in_fr3 = 0;
  double dVar4;
  double in_dr14 = 0;
  double in_xd14 = 0;
  bool bVar5;
  char cVar6;
  char cVar7;
  float fVar3;
  
  cVar7 = '\0';
  cVar6 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x184))))(ar5,ar5,ar6,ar7));
  if (cVar7 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    in_dr0 = in_xd14;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), CAnimal_m7_0f49b8(ar4,ar5,ar6,ar7));
  puVar1 = (undefined4 *)(unsigned)(*(uint *)(unsigned)(ar4 + 0x74) & 0x40);
  if (puVar1 != (undefined4 *)(unsigned)0x40) {
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),in_fr3);
    }
    else {
      dVar4 = *(double *)(unsigned)(ar4 + 0x34);
    }
    puVar1 = ((undefined4 *)(unsigned)0x8c08827c);
    dVar2 = in_dr0;
    if (cVar7 == '\0') {
      dVar2 = CONCAT44D(SUB84(in_dr14,0),0x41200000);
    }
    if (cVar6 == '\0') {
      fVar3 = F32HI(dVar2) - F32LO(dVar2);
      dVar2 = CONCAT44D(fVar3,SUB84(dVar2,0));
      bVar5 = fVar3 < F32HI(dVar4);
    }
    else {
      dVar2 = dVar2 - dVar2;
      bVar5 = dVar2 < dVar4;
    }
    if (bVar5) {
      puVar1 = ((undefined4 *)(unsigned)0x8c08827c);
      if (cVar7 == '\0') {
        dVar4 = CONCAT44D(0x41200000,SUB84(dVar2,0));
      }
      else {
        dVar4 = 1.251627927188126e-308;
      }
      if (cVar6 == '\0') {
        fVar3 = F32LO(in_dr14) - F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(in_dr14 - dVar4,0);
      }
      if (cVar7 == '\0') {
        *(float *)(unsigned)(ar4 + 0x34) = fVar3;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x34) = in_dr0;
      }
    }
  }
  return puVar1;
}

__asm__(".globl _CAnimal_m7_088210\n.set _CAnimal_m7_088210, _CAnimal_m7_088210_def\n");
//@unit 8c088280
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
undefined4 noop_088280_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_088280";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_088280\n.set _noop_088280, _noop_088280_def\n");
//@unit 8c088284
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
undefined4 noop_088284_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_088284";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_088284\n.set _noop_088284, _noop_088284_def\n");
//@unit 8c088288
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
undefined4 FUN_8c088288_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c088288";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  int ar7_00;
  int ar6_00;
  int ar5_00;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c01538c(*(int *)(unsigned)(ar4 + 0x328) + 0x78,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); FUN_8c256328(0,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_00 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    ar7_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar6_00 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    ar6_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_00 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    ar5_00 = (int)(dVar3 / dVar3);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); FUN_8c256b0c(0,ar5_00,ar6_00,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); FUN_8c256fec(0,ar5_00,ar6_00,ar7_00); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + 0x70,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c219a9a(uVar1,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c256210(1,ar5_00,ar6_00,ar7_00));
  uVar1 = 0;
  if (*(int *)(unsigned)(ar4 + 0x330) != 0) {
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c0f4b44(*(undefined4 *)(unsigned)(ar4 + 0x330),ar5_00,ar6_00,ar7_00));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x34))))
                      (*(int *)(unsigned)(ar4 + 0x330),ar5_00,ar6_00,ar7_00));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c088288\n.set _FUN_8c088288, _FUN_8c088288_def\n");
//@unit 8c0883a8
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
undefined4 FUN_8c0883a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0883a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_038c8c(ar4,ar5,ar6,ar7); });
  uVar1 = 0;
  if (*(int *)(unsigned)(ar4 + 0x330) != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x5c))))
                      (*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0883a8\n.set _FUN_8c0883a8, _FUN_8c0883a8_def\n");
//@unit 8c0883e0
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
undefined4 FUN_8c0883e0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0883e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4e34(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02cbe4(ar4 + 0x174,ar5 + 0x4c,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035338(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0883e0\n.set _FUN_8c0883e0, _FUN_8c0883e0_def\n");
//@unit 8c088440
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
undefined4 FUN_8c088440_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c088440";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4f0c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02cf20(ar4 + 0x174,ar5 + 0x4c,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03539c(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c088440\n.set _FUN_8c088440, _FUN_8c088440_def\n");
//@unit 8c0884a0
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
undefined4 FUN_8c0884a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0884a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a6;
  undefined4 uVar1;
  
  a6 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(ar5,3,2,ar7));
  uVar1 = 0;
  if (a6 != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *(int *)(unsigned)(ar4 + 8)))))(ar4,0,a6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0884a0\n.set _FUN_8c0884a0, _FUN_8c0884a0_def\n");
//@unit 8c0884ec
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
int FUN_8c0884ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0884ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x330;
  *(undefined4 *)(unsigned)(0x330 + ar4) = ar6;
  return iVar1;
}

__asm__(".globl _FUN_8c0884ec\n.set _FUN_8c0884ec, _FUN_8c0884ec_def\n");
//@unit 8c0884f8
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
undefined4 FUN_8c0884f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0884f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(unsigned)(0x330 + ar4) != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ff500(ar5,ar4 + 0x330,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0884f8\n.set _FUN_8c0884f8, _FUN_8c0884f8_def\n");
//@unit 8c08852c
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
undefined4 s_CHigyoEgg_LoadGRReq_088532_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CHigyoEgg_LoadGRReq_088532";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(unsigned)(0x420 + ar4) == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_load_Pack_CAnimal__027a86(ar4,ar5,ar6,ar7));
    if (iVar1 == 1) {
      *(undefined4 *)(unsigned)(0x420 + ar4) = 1;
    }
  }
  else if (*(int *)(unsigned)(0x420 + ar4) == 1) {
    if (*(int *)(unsigned)(0x330 + ar4) == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                ((&(*(undefined1 *)(unsigned)0x8c138590)) + 0x189b,
                 (&(*(undefined1 *)(unsigned)0x8c138590)) + 0x18ad,0,2));
      *(undefined4 *)(unsigned)(0x420 + ar4) = 0;
      uVar2 = 1;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xdc + *(int *)(unsigned)(*(int *)(unsigned)(0x330 + ar4) + 8)))))
                        (*(int *)(unsigned)(0x330 + ar4),ar5,0,ar7));
      if (iVar1 == 1) {
        *(undefined2 *)(unsigned)(0x41c + ar4) = 0;
        *(undefined4 *)(unsigned)(0x420 + ar4) = 0;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _s_CHigyoEgg_LoadGRReq_088532\n.set _s_CHigyoEgg_LoadGRReq_088532, _s_CHigyoEgg_LoadGRReq_088532_def\n");
//@unit 8c0885fc
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
undefined4 FUN_8c0885fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0885fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_Load_CAnimal_LoadG_0284b8(ar4,ar5,ar6,ar7));
  uVar1 = 0;
  if (*(int *)(unsigned)(0x330 + ar4) != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xe0 + *(int *)(unsigned)(*(int *)(unsigned)(0x330 + ar4) + 8)))))
                      (*(int *)(unsigned)(0x330 + ar4),ar5,0,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0885fc\n.set _FUN_8c0885fc, _FUN_8c0885fc_def\n");
//@unit 8c08864c
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
undefined4 FUN_8c08864c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08864c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028afc(ar4,ar5,ar6,ar7));
  uVar1 = 0;
  if (*(int *)(unsigned)(0x330 + ar4) != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xec + *(int *)(unsigned)(*(int *)(unsigned)(0x330 + ar4) + 8)))))
                      (*(int *)(unsigned)(0x330 + ar4),ar5,0,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c08864c\n.set _FUN_8c08864c, _FUN_8c08864c_def\n");
//@unit 8c08869c
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
undefined4 s_gme_Home_nj_08869c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_gme_Home_nj_08869c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c7fc) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c75c) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c748) = 0;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7c758) = 0;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7c750) = 0;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7c7f8) = &(*(undefined4 *)(unsigned)(unsigned)0x8c138588);
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7c7f4) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13858c);
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7c7f0) = (*(undefined4 *)(unsigned)(unsigned)0x8c13857c);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c7ec) = 0;
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7c7e8) = (*(undefined4 *)(unsigned)(unsigned)0x8c138584);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c7e4) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c75c) = 0x8c283950;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7c758) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c754) = 0x8c283960;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7c750) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c748) = 0x8c283a50;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c740) = 0x3f800000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c730) = 0x3ca3d70a;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c72c) = 0x3f4ccccd;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c728) = 0x42c80000;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined2 *)(unsigned)(iVar1 * 0x10 + -0x73d7c6cc) = 0xffff;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7c6c8) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7c6c4) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7c6c0) = 0;
  }
  return 1;
}

__asm__(".globl _s_gme_Home_nj_08869c\n.set _s_gme_Home_nj_08869c, _s_gme_Home_nj_08869c_def\n");
//@unit 8c08891c
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
undefined4 CAnimal_m3_08891c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m3_08891c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x10))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _CAnimal_m3_08891c\n.set _CAnimal_m3_08891c, _CAnimal_m3_08891c_def\n");
//@unit 8c088944
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
undefined4 ret_const_1_088944_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_1_088944";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl _ret_const_1_088944\n.set _ret_const_1_088944, _ret_const_1_088944_def\n");
//@unit 8c08894c
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
undefined4 FUN_8c08894c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08894c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  char cVar6;
  
  cVar6 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125f50),((void *)0x8c022ce8),ar6,ar7));
  uVar3 = 0x8c280f78;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280f78,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125f60),((void *)0x8c022ce8),uVar3,ar7));
  uVar3 = 0x8c280f84;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280f84,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125f70),((void *)0x8c022ce8),uVar3,ar7));
  uVar3 = 0x8c280f90;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280f90,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125f80),((void *)0x8c022ce8),uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280f9c,ar7));
  if (cVar6 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c125f90) = CONCAT44((*(undefined1 *)(unsigned)0x8c125f94),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c125f90) = 0xffffffff00800000;
  }
  uVar1 = 0x124;
  ({ unsigned long t0_ = (unsigned long)(8); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c280fb4,((void *)0x8c02452c),((void *)0x8c03a4ac),0x124); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c08a154),0x8c280fa8,uVar1));
  uVar1 = 0x10;
  ({ unsigned long t0_ = (unsigned long)(3); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(((undefined1 *)(unsigned)0x8c2818e0),((void *)0x8c024824),((void *)0x8c03a454),0x10); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c08a130),0x8c2818d4,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x12); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c28191c,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c08a10c),0x8c281910,uVar1));
  ({ unsigned long t0_ = (unsigned long)(0x12); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c281970,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c08a0e8),0x8c281964,0));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x14); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c2819c4,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c08a0c4),0x8c2819b8,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x14); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c281a20,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c08a0a0),0x8c281a14,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x1b); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c281a7c,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c08a07c),0x8c281a70,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x1b); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c281af4,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c08a058),0x8c281ae8,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x1c); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c281b6c,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c08a034),0x8c281b60,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x1c); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c281be8,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c08a010),0x8c281bdc,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x1c); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c281c64,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c089fec),0x8c281c58,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x1c); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c281ce0,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c089fc8),0x8c281cd4,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x1c); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c281d5c,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c089fa4),0x8c281d50,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x1c); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c281dd8,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c089f80),0x8c281dcc,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x29); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c281e54,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c089f5c),0x8c281e48,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x29); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c281f04,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c089f38),0x8c281ef8,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x34); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c281fb4,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c089f14),0x8c281fa8,uVar1));
  uVar4 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x34); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c282090,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c089ef0),0x8c282084,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c282f04,((void *)0x8c022ce8),0x8c282f04,uVar4));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c282ef8,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c282f20,((void *)0x8c022ce8),0x8c282f20,uVar4));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c282f14,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c282f3c,((void *)0x8c022ce8),0x8c282f3c,uVar4));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c282f30,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c282f58,((void *)0x8c022ce8),0x8c282f58,uVar4));
  uVar3 = 0x8c282f4c;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c282f4c,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c282f74,((void *)0x8c022ce8),uVar3,uVar4));
  uVar3 = 0x8c282f68;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c282f68,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c282f90,0x8c282f90,uVar3,uVar4));
  uVar3 = 0x8c282f84;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c282f84,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c282fac,0x8c282fac,uVar3,uVar4));
  uVar3 = 0x8c282fa0;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c282fa0,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c282fc8,0x8c282fc8,uVar3,uVar4));
  uVar3 = 0x8c282fbc;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c282fbc,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c282fe4,0x8c282fe4,uVar3,uVar4));
  uVar3 = 0x8c282fd8;
  pcVar2 = ((void *)0x8c022cb0);
  pcVar5 = ((void *)0x8c0101a0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c282fd8,((void *)0x8c0101a0)));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c283000,pcVar2,uVar3,pcVar5));
  uVar3 = 0x8c282ff4;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c282ff4,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c28301c,pcVar2,uVar3,pcVar5));
  uVar3 = 0x8c283010;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283010,uVar1));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c283038,pcVar2,uVar3,uVar1));
  uVar3 = 0x8c28302c;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28302c,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c283054,0x8c283054,uVar3,uVar1));
  uVar4 = 0x8c283048;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)0x8c022cb0),0x8c283048,uVar1));
  pcVar5 = ((void *)0x8c022ce8);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c283070,pcVar2,uVar4,((void *)0x8c022ce8)));
  uVar3 = 0x8c283064;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283064,pcVar5));
  pcVar5 = ((void *)0x8c022ce8);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c28308c,0x8c28308c,uVar3,((void *)0x8c022ce8)));
  uVar3 = 0x8c283080;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283080,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2830a8,pcVar2,uVar3,pcVar5));
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28309c,pcVar5));
  uVar4 = 0x8c2830c4;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2830c4,pcVar2,((void *)0x8c022ce8),0x8c2830c4));
  uVar3 = 0x8c2830b8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2830b8,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2830e0,pcVar2,uVar3,uVar4));
  uVar4 = 0x8c2830d4;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2830d4,0x8c2830d4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2830fc,pcVar2,((void *)0x8c022ce8),uVar4));
  uVar3 = 0x8c2830f0;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2830f0,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c283118,((void *)0x8c022ce8),uVar3,uVar4));
  uVar3 = 0x8c28310c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28310c,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c283134,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c283128;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283128,uVar1));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c283150,pcVar2,uVar3,uVar1));
  uVar3 = 0x8c283144;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283144,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c28316c,0x8c28316c,uVar3,uVar1));
  uVar4 = 0x8c283160;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)0x8c022cb0),0x8c283160,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c283188,pcVar2,uVar4,uVar1));
  uVar4 = 0x8c28317c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)0x8c022cb0),0x8c28317c,uVar1));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2831a4,pcVar2,uVar4,uVar1));
  uVar3 = 0x8c283198;
  pcVar5 = ((void *)0x8c022cb0);
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283198,((void *)0x8c022cb0)));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2831c0,pcVar2,uVar3,pcVar5));
  uVar3 = 0x8c2831b4;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2831b4,pcVar5));
  uVar4 = 0x8c2831dc;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2831dc,pcVar2,uVar3,0x8c2831dc));
  uVar3 = 0x8c2831d0;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2831d0,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2831f8,pcVar2,uVar3,uVar4));
  uVar4 = 0x8c2831ec;
  uVar3 = 0x8c2831ec;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2831ec,0x8c2831ec));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c283214,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c283208;
  pcVar2 = ((void *)0x8c022cb0);
  pcVar5 = ((void *)0x8c0101a0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283208,((void *)0x8c0101a0)));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c283230,pcVar2,uVar3,pcVar5));
  uVar3 = 0x8c283224;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283224,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c28324c,pcVar2,uVar3,pcVar5));
  uVar3 = 0x8c283240;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283240,uVar1));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c283268,pcVar2,uVar3,uVar1));
  uVar3 = 0x8c28325c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28325c,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c283284,pcVar2,uVar3,uVar1));
  uVar4 = 0x8c283278;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)0x8c022cb0),0x8c283278,uVar1));
  pcVar5 = ((void *)0x8c022ce8);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2832a0,pcVar2,uVar4,((void *)0x8c022ce8)));
  uVar3 = 0x8c283294;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283294,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2832bc,pcVar2,uVar3,pcVar5));
  uVar3 = 0x8c2832b0;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2832b0,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2832d8,pcVar2,uVar3,pcVar5));
  uVar3 = 0x8c2832cc;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2832cc,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2832f4,pcVar2,uVar3,pcVar5));
  uVar3 = 0x8c2832e8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2832e8,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c283310,pcVar2,uVar3,pcVar5));
  uVar3 = 0x8c283304;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283304,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c28332c,pcVar2,uVar3,pcVar5));
  uVar3 = 0x8c283320;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283320,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c283348,((void *)0x8c022ce8),uVar3,pcVar5));
  uVar3 = 0x8c28333c;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28333c,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c283364,((void *)0x8c022ce8),uVar3,pcVar5));
  uVar3 = 0x8c283358;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283358,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c283380,((void *)0x8c022ce8),uVar3,pcVar5));
  uVar3 = 0x8c283374;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283374,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c28339c,((void *)0x8c022ce8),uVar3,pcVar5));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283390,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2833b8,((void *)0x8c022ce8),0x8c2833b8,pcVar5));
  uVar4 = 0x8c2833ac;
  uVar3 = 0x8c2833ac;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2833ac,0x8c2833ac));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2833d4,((void *)0x8c022ce8),uVar3,uVar4));
  pcVar2 = ((void *)0x8c0101a0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2833c8,((void *)0x8c0101a0)));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2833f0,((void *)0x8c022ce8),0x8c2833f0,pcVar2));
  uVar3 = 0x8c2833e4;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2833e4,pcVar2));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c28340c,((void *)0x8c022ce8),uVar3,pcVar2));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283400,uVar1));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c283428,((void *)0x8c022ce8),0x8c283428,uVar1));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28341c,uVar1));
  uVar3 = 0x8c282f3c;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c282f58); unsigned long t1_ = (unsigned long)(0x8c282f74); unsigned long t2_ = (unsigned long)(0x8c282f90); unsigned long t3_ = (unsigned long)(
                       0x8c282fac); unsigned long t4_ = (unsigned long)(0x8c282fc8); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c283444,0x8c282f04,0x8c282f20,0x8c282f3c); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c283438,uVar3));
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c283038); unsigned long t1_ = (unsigned long)(0x8c283054); unsigned long t2_ = (unsigned long)(0x8c283070); unsigned long t3_ = (unsigned long)(
                       0x8c28308c); unsigned long t4_ = (unsigned long)(0x8c2830a8); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c2834e4,0x8c282fe4,0x8c283000,0x8c28301c); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c2834d8,uVar1));
  uVar3 = 0x8c2830fc;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c283118); unsigned long t1_ = (unsigned long)(0x8c283134); unsigned long t2_ = (unsigned long)(0x8c283150); unsigned long t3_ = (unsigned long)(
                       0x8c28316c); unsigned long t4_ = (unsigned long)(0x8c283188); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c283584,0x8c2830c4,0x8c2830e0,0x8c2830fc); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c283578,uVar3));
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c2831f8); unsigned long t1_ = (unsigned long)(0x8c283214); unsigned long t2_ = (unsigned long)(0x8c283230); unsigned long t3_ = (unsigned long)(
                       0x8c28324c); unsigned long t4_ = (unsigned long)(0x8c283268); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c283624,0x8c2831a4,0x8c2831c0,0x8c2831dc); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c283618,uVar1));
  uVar3 = 0x8c2832bc;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c2832d8); unsigned long t1_ = (unsigned long)(0x8c2832f4); unsigned long t2_ = (unsigned long)(0x8c283310); unsigned long t3_ = (unsigned long)(
                       0x8c28332c); unsigned long t4_ = (unsigned long)(0x8c283348); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c2836c4,0x8c283284,0x8c2832a0,0x8c2832bc); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c2836b8,uVar3));
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c2833b8); unsigned long t1_ = (unsigned long)(0x8c2833d4); unsigned long t2_ = (unsigned long)(0x8c2833f0); unsigned long t3_ = (unsigned long)(
                       0x8c28340c); unsigned long t4_ = (unsigned long)(0x8c283428); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c283764,0x8c283364,0x8c283380,0x8c28339c); });
  uVar3 = 0x8c283758;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c283758,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02452c(0x8c283804,0x8c283804,uVar3,uVar1));
  uVar4 = 0x8c2837f8;
  pcVar2 = ((void *)0x8c03a4ac);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)0x8c03a4ac),0x8c2837f8,uVar1));
  pcVar5 = ((void *)0x8c024824);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c024824(0x8c283934,pcVar2,uVar4,((void *)0x8c024824)));
  uVar3 = 0x8c283928;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a454),0x8c283928,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015b94(0x8c283950,0x8c283950,uVar3,pcVar5));
  uVar3 = 0x8c283944;
  pcVar5 = ((void *)0x8c0247b0);
  pcVar2 = ((void *)0x8c0247b0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0247b0),0x8c283944,((void *)0x8c0247b0)));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015bc8(0x8c283960,pcVar2,uVar3,pcVar5));
  pcVar2 = ((void *)0x8c03a3dc);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a3dc),0x8c283954,pcVar5));
  uVar4 = 0x8c283970;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c283970,pcVar2,((void *)0x8c022ce8),0x8c283970));
  uVar3 = 0x8c283964;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283964,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c28398c,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c283980;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283980,0x8c283980));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2839a8,pcVar2,((void *)0x8c022ce8),uVar3));
  pcVar5 = ((void *)0x8c0101a0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28399c,((void *)0x8c0101a0)));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2839c4,((void *)0x8c022ce8),0x8c2839c4,pcVar5));
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2839b8,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2839e0,pcVar2,((void *)0x8c022ce8),pcVar5));
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2839d4,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2839fc,pcVar2,((void *)0x8c022ce8),pcVar5));
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2839f0,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c283a18,pcVar2,((void *)0x8c022ce8),pcVar5));
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283a0c,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c283a34,pcVar2,((void *)0x8c022ce8),pcVar5));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283a28,pcVar5));
  uVar3 = 0x8c2839a8;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c2839c4); unsigned long t1_ = (unsigned long)(0x8c2839e0); unsigned long t2_ = (unsigned long)(0x8c2839fc); unsigned long t3_ = (unsigned long)(
                       0x8c283a18); unsigned long t4_ = (unsigned long)(0x8c283a34); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c283a50,0x8c283970,0x8c28398c,0x8c2839a8); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c283a44,uVar3));
  return uVar1;
}

__asm__(".globl _FUN_8c08894c\n.set _FUN_8c08894c, _FUN_8c08894c_def\n");
//@unit 8c089ef0
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
undefined4 FUN_8c089ef0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c089ef0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c282090,((void *)0x8c03a3dc),4,0x34); });
  return uVar1;
}

__asm__(".globl _FUN_8c089ef0\n.set _FUN_8c089ef0, _FUN_8c089ef0_def\n");
//@unit 8c089f14
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
undefined4 FUN_8c089f14_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c089f14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c281fb4,((void *)0x8c0247b0),4,0x34); });
  return uVar1;
}

__asm__(".globl _FUN_8c089f14\n.set _FUN_8c089f14, _FUN_8c089f14_def\n");
//@unit 8c089f38
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
undefined4 FUN_8c089f38_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c089f38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c281f04,((void *)0x8c03a3dc),4,0x29); });
  return uVar1;
}

__asm__(".globl _FUN_8c089f38\n.set _FUN_8c089f38, _FUN_8c089f38_def\n");
//@unit 8c089f5c
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
undefined4 FUN_8c089f5c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c089f5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c281e54,((void *)0x8c0247b0),4,0x29); });
  return uVar1;
}

__asm__(".globl _FUN_8c089f5c\n.set _FUN_8c089f5c, _FUN_8c089f5c_def\n");
//@unit 8c089f80
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
undefined4 FUN_8c089f80_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c089f80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c281dd8,((void *)0x8c03a3dc),4,0x1c); });
  return uVar1;
}

__asm__(".globl _FUN_8c089f80\n.set _FUN_8c089f80, _FUN_8c089f80_def\n");
//@unit 8c089fa4
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
undefined4 FUN_8c089fa4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c089fa4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c281d5c,((void *)0x8c0247b0),4,0x1c); });
  return uVar1;
}

__asm__(".globl _FUN_8c089fa4\n.set _FUN_8c089fa4, _FUN_8c089fa4_def\n");
//@unit 8c089fc8
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
undefined4 FUN_8c089fc8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c089fc8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c281ce0,((void *)0x8c03a3dc),4,0x1c); });
  return uVar1;
}

__asm__(".globl _FUN_8c089fc8\n.set _FUN_8c089fc8, _FUN_8c089fc8_def\n");
//@unit 8c089fec
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
undefined4 FUN_8c089fec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c089fec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c281c64,((void *)0x8c0247b0),4,0x1c); });
  return uVar1;
}

__asm__(".globl _FUN_8c089fec\n.set _FUN_8c089fec, _FUN_8c089fec_def\n");
//@unit 8c08a010
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
undefined4 FUN_8c08a010_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08a010";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c281be8,((void *)0x8c03a3dc),4,0x1c); });
  return uVar1;
}

__asm__(".globl _FUN_8c08a010\n.set _FUN_8c08a010, _FUN_8c08a010_def\n");
//@unit 8c08a034
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
undefined4 FUN_8c08a034_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08a034";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c281b6c,((void *)0x8c0247b0),4,0x1c); });
  return uVar1;
}

__asm__(".globl _FUN_8c08a034\n.set _FUN_8c08a034, _FUN_8c08a034_def\n");
//@unit 8c08a058
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
undefined4 FUN_8c08a058_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08a058";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c281af4,((void *)0x8c03a3dc),4,0x1b); });
  return uVar1;
}

__asm__(".globl _FUN_8c08a058\n.set _FUN_8c08a058, _FUN_8c08a058_def\n");
//@unit 8c08a07c
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
undefined4 FUN_8c08a07c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08a07c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c281a7c,((void *)0x8c0247b0),4,0x1b); });
  return uVar1;
}

__asm__(".globl _FUN_8c08a07c\n.set _FUN_8c08a07c, _FUN_8c08a07c_def\n");
//@unit 8c08a0a0
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
undefined4 FUN_8c08a0a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08a0a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c281a20,((void *)0x8c03a3dc),4,0x14); });
  return uVar1;
}

__asm__(".globl _FUN_8c08a0a0\n.set _FUN_8c08a0a0, _FUN_8c08a0a0_def\n");
//@unit 8c08a0c4
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
undefined4 FUN_8c08a0c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08a0c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c2819c4,((void *)0x8c0247b0),4,0x14); });
  return uVar1;
}

__asm__(".globl _FUN_8c08a0c4\n.set _FUN_8c08a0c4, _FUN_8c08a0c4_def\n");
//@unit 8c08a0e8
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
undefined4 FUN_8c08a0e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08a0e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c281970,((void *)0x8c03a3dc),4,0x12); });
  return uVar1;
}

__asm__(".globl _FUN_8c08a0e8\n.set _FUN_8c08a0e8, _FUN_8c08a0e8_def\n");
//@unit 8c08a10c
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
undefined4 FUN_8c08a10c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08a10c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c28191c,((void *)0x8c0247b0),4,0x12); });
  return uVar1;
}

__asm__(".globl _FUN_8c08a10c\n.set _FUN_8c08a10c, _FUN_8c08a10c_def\n");
//@unit 8c08a130
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
undefined4 FUN_8c08a130_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08a130";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(((undefined1 *)(unsigned)0x8c2818e0),((void *)0x8c03a454),0x10,3); });
  return uVar1;
}

__asm__(".globl _FUN_8c08a130\n.set _FUN_8c08a130, _FUN_8c08a130_def\n");
//@unit 8c08a154
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
undefined4 FUN_8c08a154_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08a154";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c280fb4,((void *)0x8c03a4ac),0x124,8); });
  return uVar1;
}

__asm__(".globl _FUN_8c08a154\n.set _FUN_8c08a154, _FUN_8c08a154_def\n");
//@unit 8c08a17c
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
int s_GRAPHICS_MOTHLINE_08a182_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_MOTHLINE_08a182";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar2;
  
  ar6_00 = 1;
  uVar1 = 10;
  ar7_00 = ar6;
  ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(ar5); unsigned long t2_ = (unsigned long)(0x8c283b30); unsigned long t3_ = (unsigned long)(0x8c283fcc); unsigned long t4_ = (unsigned long)(*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c139e80))); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0254d0))))
            (ar4,10,1,ar6); });
  *(unsigned *)(unsigned)(ar4 + 8) = (&(*(undefined1 *)(unsigned)0x8c12a5d0));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c098ca8(ar4 + 0x490,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c08dad4(ar4 + 0x538,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015b94(ar4 + 0x850,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015bc8(ar4 + 0x854,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016fcc(ar4 + 0x858,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x900,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 0x910,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023dac(ar4 + 0x91c,uVar1,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c139fcc)) + 0x45d); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
            (ar4 + 0xc,uVar1,ar6_00,ar7_00); });
  *(int *)(unsigned)(0x308 + ar4) = ar4 + 0x490;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c034d38(ar4 + 0x2dc,ar6,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(undefined4 *)(unsigned)(0x308 + ar4),uVar1,ar6_00,ar7_00));
  *(int *)(unsigned)(0x30c + ar4) = ar4 + 0x538;
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    *(undefined4 *)(unsigned)(0x8ec + ar4 + iVar2 * 4) = 0;
    *(undefined4 *)(unsigned)(0x8f4 + ar4 + iVar2 * 4) = 0;
  }
  iVar2 = ar4 + 0x858;
  uVar1 = *(undefined4 *)(unsigned)(0xb4 + *(int *)(unsigned)(0x328 + ar4));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f532c(ar4,uVar1,iVar2,ar7_00));
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023d7c(ar4 + 0x338,uVar1,iVar2,ar7_00));
  *(undefined4 *)(unsigned)(0x8fc + ar4) = 0;
  *(undefined4 *)(unsigned)(0x840 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x844 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x848 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x84c + ar4) = 0;
  return ar4;
}

__asm__(".globl _s_GRAPHICS_MOTHLINE_08a182\n.set _s_GRAPHICS_MOTHLINE_08a182, _s_GRAPHICS_MOTHLINE_08a182_def\n");
//@unit 8c08a3a4
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
int Class_12a5d0_m0_08a3a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a5d0_m0_08a3a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12a5d0);
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016ac4(ar4 + 0x91c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x910,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x900,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129938_m0_017084(ar4 + 0x858,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_03a3dc(ar4 + 0x854,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0247b0(ar4 + 0x850,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12a76c_m0_08dca8(ar4 + 0x538,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12a7a8_m0_098ccc(ar4 + 0x490,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), CAnimal_m0_025688(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12a5d0_m0_08a3a4\n.set _Class_12a5d0_m0_08a3a4, _Class_12a5d0_m0_08a3a4_def\n");
//@unit 8c08a49c
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
undefined4 Class_12a5d0_m2_08a49c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a5d0_m2_08a49c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 ar7_00;
  float fVar3;
  ulonglong in_dr0 = 0;
  double dVar4;
  ulonglong in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  *(undefined4 *)(unsigned)(ar4 + 0x928) = ar7;
  if (*(int *)(unsigned)(ar4 + 0x48c) == 1) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031b08(ar4 + 0x538,0,1,ar7));
  }
  ar5_00 = ar5;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 4)), CAnimal_m2_02573c(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((((char)uVar1 == '\x01') && (*(int *)(unsigned)(ar4 + 0x8f8) == 0)) && (*(int *)(unsigned)(ar4 + 0x8f4) == 0)) {
    ar5_00 = ar7;
    ar6 = ar5;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c08ab58(ar4,ar7,ar5,ar7_00));
  }
  if ((*(int *)(unsigned)(ar4 + 0x8f4) != 0) || (*(int *)(unsigned)(ar4 + 0x8f8) != 0)) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c08ac38(ar4,ar5,ar6,ar7_00));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if (((char)uVar1 == '\x02') &&
     (iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_25c_08a6f8(ar4 + 0x538,ar5_00,ar6,ar7_00)), iVar2 != -1)) {
    (vsp = ((unsigned long)(fr0_ - 4)), s_CMothLine_08ad54(ar4,ar7,ar5,ar7_00));
    ar5_00 = ar7;
    ar6 = ar5;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((((char)uVar1 == '\x02') && (*(int *)(unsigned)(ar4 + 0x8ec) == 0)) && (*(int *)(unsigned)(ar4 + 0x8f0) == 0)) {
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c035f4c(ar4 + 0x490,0,ar6,ar7_00));
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_124_027930(ar4 + 0x538,ar5_00,ar6,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02bef8(ar4 + 0x174,ar5_00,ar6,ar7_00));
  if ((iVar2 == 3) && ((short)uVar1 == 2)) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c08a6e8(ar4 + 0x538,ar5_00,ar6,ar7_00));
    if (cVar6 == '\0') {
      dVar4 = CONCAT44D(0xc5e10000,(int)(in_dr0 >> 0x20));
      in_dr0 = in_xd0;
    }
    else {
      dVar4 = -0.007812505759034138;
    }
    if (cVar5 == '\0') {
      fVar3 = F32LO(dVar4) / F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 / dVar4,0);
    }
    if (cVar6 == '\0') {
      dVar4 = CONCAT44D(0xbf800000,fVar3);
    }
    else {
      dVar4 = 4.89066565470418e-311;
    }
    if (cVar5 == '\0') {
      fVar3 = F32LO(dVar4) + F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar6 == '\0') {
      *(float *)(unsigned)(ar4 + 0x438) = fVar3;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x438) = in_dr0;
    }
  }
  else {
    if (cVar6 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x438) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x438) = in_dr0 & 0xffffffff;
    }
    if ((iVar2 == 9) && ((short)uVar1 == 3)) {
      (vsp = ((unsigned long)(fr0_ - 4)), Vec3_assign(ar4 + 0x900,ar4 + 0x30,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 4)), vec3_copy_8c023d8c(ar4 + 0x910,ar4 + 0x50,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c023e04(ar4 + 0x91c,ar4 + 0x5c,ar6,ar7_00));
      *(undefined4 *)(unsigned)(ar4 + 0x8fc) = 0x1e;
    }
    else {
      iVar2 = *(int *)(unsigned)(ar4 + 0x8fc) + -1;
      *(int *)(unsigned)(ar4 + 0x8fc) = iVar2;
      if (iVar2 < 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x8fc) = 0;
      }
    }
  }
  return 1;
}

__asm__(".globl _Class_12a5d0_m2_08a49c\n.set _Class_12a5d0_m2_08a49c, _Class_12a5d0_m2_08a49c_def\n");
//@unit 8c08a6e8
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
undefined4 FUN_8c08a6e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08a6e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0x2fc;
}

__asm__(".globl _FUN_8c08a6e8\n.set _FUN_8c08a6e8, _FUN_8c08a6e8_def\n");
//@unit 8c08a6f8
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
undefined4 get_field_25c_08a6f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_25c_08a6f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x25c + ar4);
}

__asm__(".globl _get_field_25c_08a6f8\n.set _get_field_25c_08a6f8, _get_field_25c_08a6f8_def\n");
//@unit 8c08a704
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
undefined4 Class_12a5d0_m3_08a704_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a5d0_m3_08a704";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 ar7_00;
  float fVar3;
  ulonglong in_dr0 = 0;
  double dVar4;
  ulonglong in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x48c) == 1) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031b08(ar4 + 0x538,0,1,ar7));
  }
  ar5_00 = ar5;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 4)), CAnimal_m3_026078(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((((char)uVar1 == '\x01') && (*(int *)(unsigned)(ar4 + 0x8f8) == 0)) && (*(int *)(unsigned)(ar4 + 0x8f4) == 0)) {
    ar5_00 = ar7;
    ar6 = ar5;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c08ab58(ar4,ar7,ar5,ar7_00));
  }
  if ((*(int *)(unsigned)(ar4 + 0x8f4) != 0) || (*(int *)(unsigned)(ar4 + 0x8f8) != 0)) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c08ac38(ar4,ar5,ar6,ar7_00));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if (((char)uVar1 == '\x02') &&
     (iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_25c_08a6f8(ar4 + 0x538,ar5_00,ar6,ar7_00)), iVar2 != -1)) {
    (vsp = ((unsigned long)(fr0_ - 4)), s_CMothLine_08ad54(ar4,ar7,ar5,ar7_00));
    ar5_00 = ar7;
    ar6 = ar5;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((((char)uVar1 == '\x02') && (*(int *)(unsigned)(ar4 + 0x8ec) == 0)) && (*(int *)(unsigned)(ar4 + 0x8f0) == 0)) {
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c035f4c(ar4 + 0x490,0,ar6,ar7_00));
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_124_027930(ar4 + 0x538,ar5_00,ar6,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02bef8(ar4 + 0x174,ar5_00,ar6,ar7_00));
  if ((iVar2 == 3) && ((short)uVar1 == 2)) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c08a6e8(ar4 + 0x538,ar5_00,ar6,ar7_00));
    if (cVar6 == '\0') {
      dVar4 = CONCAT44D(0xc5e10000,(int)(in_dr0 >> 0x20));
      in_dr0 = in_xd0;
    }
    else {
      dVar4 = -0.007812505759034138;
    }
    if (cVar5 == '\0') {
      fVar3 = F32LO(dVar4) / F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 / dVar4,0);
    }
    if (cVar6 == '\0') {
      dVar4 = CONCAT44D(0xbf800000,fVar3);
    }
    else {
      dVar4 = 4.89066565470418e-311;
    }
    if (cVar5 == '\0') {
      fVar3 = F32LO(dVar4) + F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar6 == '\0') {
      *(float *)(unsigned)(ar4 + 0x438) = fVar3;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x438) = in_dr0;
    }
  }
  else {
    if (cVar6 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x438) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x438) = in_dr0 & 0xffffffff;
    }
    if ((iVar2 == 9) && ((short)uVar1 == 3)) {
      (vsp = ((unsigned long)(fr0_ - 4)), Vec3_assign(ar4 + 0x900,ar4 + 0x30,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 4)), vec3_copy_8c023d8c(ar4 + 0x910,ar4 + 0x50,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c023e04(ar4 + 0x91c,ar4 + 0x5c,ar6,ar7_00));
      *(undefined4 *)(unsigned)(ar4 + 0x8fc) = 0x1e;
    }
    else {
      iVar2 = *(int *)(unsigned)(ar4 + 0x8fc) + -1;
      *(int *)(unsigned)(ar4 + 0x8fc) = iVar2;
      if (iVar2 < 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x8fc) = 0;
      }
    }
  }
  return 1;
}

__asm__(".globl _Class_12a5d0_m3_08a704\n.set _Class_12a5d0_m3_08a704, _Class_12a5d0_m3_08a704_def\n");
//@unit 8c08a948
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
undefined4 FUN_8c08a948_def(int ar4,float *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08a948";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float *ar5_00;
  int ar6_00;
  float fVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0f5398(ar4,ar5,ar6,ar7));
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 36)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x20)),ar5,ar6_00,ar7));
  if (ar6 == 0) {
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c08a9b8(ar4 + 0x5c,ar5_00,ar6_00,ar7));
    if (cVar5 == '\0') {
      fVar2 = *ar5;
      pcVar3 = (code *)0x447a0000;
    }
    else {
      fVar2 = 1000.0;
      pcVar3 = ((void *)0x8c022cb0);
    }
    if (cVar4 == '\0' && (float)(uint)pcVar3 < fVar2) {
      if (cVar5 == '\0') {
        *ar5 = 1000.0;
      }
      else {
        ar5[0] = 1000.0;
        ar5[1] = -1.0028283e-31;
      }
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c08a948\n.set _FUN_8c08a948, _FUN_8c08a948_def\n");
//@unit 8c08a9b8
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
undefined4 FUN_8c08a9b8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08a9b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ar4[2] = 0x3f800000;
  ar4[1] = 0x3f800000;
  *ar4 = 0x3f800000;
  return 0;
}

__asm__(".globl _FUN_8c08a9b8\n.set _FUN_8c08a9b8, _FUN_8c08a9b8_def\n");
//@unit 8c08a9ec
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
undefined4 Class_12a5d0_m4_08a9ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a5d0_m4_08a9ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
  uVar1 = ar6;
  (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)) + 0x14))))(((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)),ar6,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x30c + ar4)) + 0x14))))
                    (((int *)(unsigned long)*(unsigned *)(unsigned)(0x30c + ar4)),ar6,uVar1,ar7));
  return uVar1;
}

__asm__(".globl _Class_12a5d0_m4_08a9ec\n.set _Class_12a5d0_m4_08a9ec, _Class_12a5d0_m4_08a9ec_def\n");
//@unit 8c08aa6c
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
undefined4 Class_12a5d0_m5_08aa6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a5d0_m5_08aa6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x30c + ar4)) + 0x14))))
                    (((int *)(unsigned long)*(unsigned *)(unsigned)(0x30c + ar4)),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Class_12a5d0_m5_08aa6c\n.set _Class_12a5d0_m5_08aa6c, _Class_12a5d0_m5_08aa6c_def\n");
//@unit 8c08aad8
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
undefined4 Class_12a5d0_m6_08aad8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a5d0_m6_08aad8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02c398(ar4 + 0x174,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x30c + ar4)) + 0x14))))
                    (((int *)(unsigned long)*(unsigned *)(unsigned)(0x30c + ar4)),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Class_12a5d0_m6_08aad8\n.set _Class_12a5d0_m6_08aad8, _Class_12a5d0_m6_08aad8_def\n");
//@unit 8c08ab58
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
undefined4 FUN_8c08ab58_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08ab58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int a4;
  undefined4 a6;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    if (*(undefined4 *)(unsigned)0x8c431a54 == 0) {
      *(undefined4 *)(unsigned)0x8c431a54 = 1;
      a6 = 0x19;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(0x8c3eb324,0xc,0x19,ar7));
      *(undefined4 *)(unsigned)(0x8ec + ar4 + iVar2 * 4) = uVar1;
    }
    else {
      a6 = 0x17;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(0x8c3eb324,0xb,0x17,ar7));
      *(undefined4 *)(unsigned)(0x8ec + ar4 + iVar2 * 4) = uVar1;
    }
    a4 = *(int *)(unsigned)(0x8ec + ar4 + iVar2 * 4);
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x54))))(a4,0x8c3eb324,a6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fed70))))
                      (*(undefined4 *)(unsigned)(0x7d0 + ar6),
                       *(undefined4 *)(unsigned)(0x8ec + ar4 + iVar2 * 4),0,ar7));
    *(undefined4 *)(unsigned)(0x8f4 + ar4 + iVar2 * 4) = uVar1;
  }
  return 2;
}

__asm__(".globl _FUN_8c08ab58\n.set _FUN_8c08ab58, _FUN_8c08ab58_def\n");
//@unit 8c08ac38
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
int FUN_8c08ac38_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08ac38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  for (iVar3 = 0; iVar3 < 1; iVar3 = iVar3 + 1) {
    if (*(int *)(unsigned)(0x8f4 + ar4 + iVar3 * 4) != 0) {
      ar5_00 = *(int *)(unsigned)(0x8f4 + ar4 + iVar3 * 4);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feef8(*(undefined4 *)(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
      if (iVar1 == 1) {
        ar5_00 = ar4 + iVar3 * 4 + 0x8f4;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feeb0(*(undefined4 *)(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
        *(undefined4 *)(unsigned)(0x8ec + ar4 + iVar3 * 4) = uVar2;
      }
    }
  }
  if (*(int *)(unsigned)(0x8f8 + ar4) != 0) {
    ar5_00 = *(int *)(unsigned)(0x8f8 + ar4);
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feef8(*(undefined4 *)(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
    if (iVar3 == 1) {
      ar5_00 = ar4 + 0x8f8;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feeb0(*(undefined4 *)(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
      *(undefined4 *)(unsigned)(0x8f0 + ar4) = uVar2;
    }
  }
  iVar3 = *(int *)(unsigned)(0x8f4 + ar4);
  if ((iVar3 == 0) && (iVar3 = *(int *)(unsigned)(0x8f8 + ar4), iVar3 == 0)) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7));
    iVar3 = (int)(char)uVar2;
    if (iVar3 == 1) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035f4c(ar4 + 0x490,2,ar6,ar7));
    }
  }
  return iVar3;
}

__asm__(".globl _FUN_8c08ac38\n.set _FUN_8c08ac38, _FUN_8c08ac38_def\n");
//@unit 8c08ad50
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
undefined4 s_CMothLine_08ad54_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CMothLine_08ad54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 400; for (int i_ = 0; i_ < 400; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  (*(unsigned *)(fr0_ - 0xc4) = (unsigned)(unsigned long)(ar5));
  (*(undefined4 *)(fr0_ - 0xc0)) = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 400)), get_field_25c_08a6f8(ar4 + 0x538,ar5,ar6,ar7));
  (*(int *)(fr0_ - 0xa0)) = iVar1;
  (vsp = ((unsigned long)(fr0_ - 400)), Vec3_ctor_zero((int)((int * *)(fr0_ - 0xc4)) + 0xa8,ar5,ar6,ar7));
  (*(int *)(fr0_ - 0xa4)) = iVar1;
  if (*(int *)(unsigned)(0x8ec + ar4 + iVar1 * 4) == 0) {
    ar7 = 2;
    ar6 = 1;
    (vsp = ((unsigned long)(fr0_ - 400)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c139fcc)) + 0x466,
               (&(*(undefined1 *)(unsigned)0x8c139fcc)) + 0x470,1,2));
  }
  else {
    iVar3 = *(int *)(unsigned)(0x8ec + ar4 + iVar1 * 4);
    uVar2 = (*(undefined4 *)(fr0_ - 0xc0));
    (*(int *)(fr0_ - 0xa8)) = iVar1;
    (vsp = ((unsigned long)(fr0_ - 400)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x10c + *(int *)(unsigned)(iVar3 + 8)))))(iVar3,(*(undefined4 *)(fr0_ - 0xc0)),ar6,ar7));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 400)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x140 + *(int *)(unsigned)(ar4 + 8)))))(ar4,uVar2,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)((int)((int * *)(fr0_ - 0xc4)) + 0x88); *(unsigned *)((((unsigned long)(fr0_ - 400)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 400)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0230f0))))
                ((fr0_ + (int)0xffffff38) + 0x9c,uVar2,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_normalize((fr0_ + (int)0xffffff38) + 0x8c,uVar2,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 400)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 400)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x4c)),(&(*(undefined1 *)(unsigned)0x8c139fc4)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_assign((int)((int * *)(fr0_ - 0xc4)) + 0xa8,((undefined1 *)(fr0_ - 0x5c)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_dtor((int)((int * *)(fr0_ - 0xc4)) + 0x88,0xffffffff,ar6,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_dtor((int)((int * *)(fr0_ - 0xc4)) + 0x98,0xffffffff,ar6,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 400)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x140 + *(int *)(unsigned)(ar4 + 8)))))(ar4,uVar2,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x7c))); *(unsigned *)((((unsigned long)(fr0_ - 400)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 400)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x6c)),uVar2,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_normalize(((undefined1 *)(fr0_ - 0x7c)),uVar2,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 400)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 400)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x8c)),(&(*(undefined1 *)(unsigned)0x8c139fc8)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_assign((int)((int * *)(fr0_ - 0xc4)) + 0xa8,((undefined1 *)(fr0_ - 0x9c)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6,ar7));
    }
    (*(int *)(fr0_ - 0xac)) = iVar1;
    (vsp = ((unsigned long)(fr0_ - 400)), FUN_8c036988(*(undefined4 *)(unsigned)(0x8ec + ar4 + iVar1 * 4),uVar2,ar6,ar7));
    iVar3 = *(int *)(unsigned)(0x8ec + ar4 + iVar1 * 4);
    (*(int *)(fr0_ - 0xb0)) = iVar1;
    (vsp = ((unsigned long)(fr0_ - 400)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar3 + 8) + 0x5c))))(iVar3,uVar2,ar6,ar7));
    uVar2 = *(undefined4 *)(unsigned)(0x8ec + ar4 + iVar1 * 4);
    (*(int *)(fr0_ - 0xb4)) = iVar1;
    (vsp = ((unsigned long)(fr0_ - 400)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ - 0xc4)) + 0x4c))))(((int *)(unsigned long)*(unsigned *)(fr0_ - 0xc4)),uVar2,ar6,ar7));
    (*(int *)(fr0_ - 0xb8)) = iVar1;
    (vsp = ((unsigned long)(fr0_ - 400)), FUN_8c036988(*(undefined4 *)(unsigned)(0x8ec + ar4 + iVar1 * 4),uVar2,ar6,ar7));
    *(undefined4 *)(unsigned)(0x8ec + ar4 + iVar1 * 4) = 0;
    (*(int *)(fr0_ - 0xbc)) = iVar1;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 400)), Vec3_dtor((int)((int * *)(fr0_ - 0xc4)) + 0xa8,0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _s_CMothLine_08ad54\n.set _s_CMothLine_08ad54, _s_CMothLine_08ad54_def\n");
//@unit 8c08b020
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
undefined4 FUN_8c08b020_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08b020";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 128; for (int i_ = 0; i_ < 128; i_++) z_[i_] = 0; }
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  int ar7_00;
  int ar5_00;
  char cVar11;
  char cVar12;
  undefined2 uVar13;
  
  uVar13 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0x80)) >> 0x10);
  cVar12 = '\0';
  cVar11 = '\0';
  iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), get_field_124_027930(ar4 + 0x538,ar5,ar6,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  sVar1 = (short)uVar3;
  uVar3 = CONCAT22(uVar13,sVar1);
  iVar7 = *(int *)(unsigned)(ar4 + 0x328) + sVar1 * 0x124;
  (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x42c),ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256328(0,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    ar7_00 = (int)(F32LO(dVar9) / F32HI(dVar9));
  }
  else {
    ar7_00 = (int)(dVar9 / dVar9);
  }
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    (*(int *)(fr0_ - 0x34)) = (int)(F32LO(dVar9) / F32HI(dVar9));
  }
  else {
    (*(int *)(fr0_ - 0x34)) = (int)(dVar9 / dVar9);
  }
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    fVar10 = F32HI(dVar9);
    fVar8 = F32LO(dVar9) / fVar10;
    dVar9 = CONCAT44D(fVar10,fVar8);
    ar5_00 = (int)fVar8;
  }
  else {
    dVar9 = dVar9 / dVar9;
    ar5_00 = (int)dVar9;
  }
  (*(int *)(fr0_ - 0x4c)) = (int)(D2U(dVar9) >> 0x20);
  ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256b0c(0,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256fec(0,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00); });
  if (sVar1 == 3) {
    uVar4 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c015bb8(iVar7 + 0x70,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 128)), deref_u32(*(int *)(unsigned)(iVar7 + 0xa0) + iVar5 * 4,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    iVar6 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    iVar7 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c026d74(*(int *)(unsigned)(iVar7 + 0xa8) + iVar6 * 4,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x4c));
    if (cVar12 == '\0') {
      (*(int *)(fr0_ - 0x34)) = iVar7;
    }
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c21bbb0(uVar4,iVar5,(*(int *)(fr0_ - 0x34)),ar7_00); });
    ar5_00 = iVar5;
  }
  else if (*(int *)(unsigned)(ar4 + 0x6c) < 0x32) {
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c219a9a(*(undefined4 *)(unsigned)(ar4 + 0x848),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
  }
  else {
    uVar4 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c015bb8(iVar7 + 0x70,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 128)), deref_u32(*(int *)(unsigned)(iVar7 + 0xa0) + iVar5 * 4,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    iVar6 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    iVar7 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c026d74(*(int *)(unsigned)(iVar7 + 0xa8) + iVar6 * 4,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    if (cVar12 == '\0') {
      (*(int *)(fr0_ - 0x4c)) = iVar7;
    }
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c21bbb0(uVar4,iVar5,(*(int *)(fr0_ - 0x4c)),ar7_00); });
    ar5_00 = iVar5;
    (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x4c));
  }
  (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c256210(1,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
  if (sVar1 == 2) {
    if (iVar2 == 3) {
      (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c233dac(((undefined1 *)(unsigned)0x8c139e5c),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    }
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c08a6e8(ar4 + 0x538,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c25b3ec(*(undefined4 *)(unsigned)(ar4 + 0x844),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256328(0,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c25b5d0(0,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00); });
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x43b40000,fVar8);
    }
    else {
      dVar9 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
      ar7_00 = (int)(F32LO(dVar9) / F32HI(dVar9));
    }
    else {
      ar7_00 = (int)(dVar9 / dVar9);
    }
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x43b40000,fVar8);
    }
    else {
      dVar9 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
      iVar2 = (int)(F32LO(dVar9) / F32HI(dVar9));
    }
    else {
      iVar2 = (int)(dVar9 / dVar9);
    }
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x43b40000,fVar8);
    }
    else {
      dVar9 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
      iVar7 = (int)(F32LO(dVar9) / F32HI(dVar9));
    }
    else {
      iVar7 = (int)(dVar9 / dVar9);
    }
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256b0c(0,iVar7,iVar2,ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256fec(0,iVar7,iVar2,ar7_00); });
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 128)), deref_u32(ar4 + 0x850,iVar7,iVar2,ar7_00));
    (*(int *)(fr0_ - 0x34)) = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c026d74(ar4 + 0x854,iVar7,iVar2,ar7_00));
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c21bbb0(*(undefined4 *)(unsigned)(ar4 + 0x840),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c256210(1,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
  }
  else if ((sVar1 == 3) && (*(int *)(unsigned)(ar4 + 0x8fc) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c08a6e8(ar4 + 0x538,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c25b3ec(*(undefined4 *)(unsigned)(ar4 + 0x844),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256328(0,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c25b5d0(0,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00); });
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x918));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x43b40000,fVar8);
    }
    else {
      dVar9 = 4.93207941252472e-311;
    }
    if (cVar11 == '\0') {
      ar7_00 = (int)(F32LO(dVar9) / F32HI(dVar9));
    }
    else {
      ar7_00 = (int)(dVar9 / dVar9);
    }
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x914));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x43b40000,fVar8);
    }
    else {
      dVar9 = 4.93207941252472e-311;
    }
    if (cVar11 == '\0') {
      iVar2 = (int)(F32LO(dVar9) / F32HI(dVar9));
    }
    else {
      iVar2 = (int)(dVar9 / dVar9);
    }
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x910));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = CONCAT44D(0x43b40000,fVar8);
    }
    else {
      dVar9 = 4.93207941252472e-311;
    }
    if (cVar11 == '\0') {
      iVar7 = (int)(F32LO(dVar9) / F32HI(dVar9));
    }
    else {
      iVar7 = (int)(dVar9 / dVar9);
    }
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256b0c(0,iVar7,iVar2,ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256fec(0,iVar7,iVar2,ar7_00); });
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 128)), deref_u32(ar4 + 0x850,iVar7,iVar2,ar7_00));
    (*(int *)(fr0_ - 0x34)) = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c026d74(ar4 + 0x854,iVar7,iVar2,ar7_00));
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c21bbb0(*(undefined4 *)(unsigned)(ar4 + 0x840),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c256210(1,ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c233dac(((undefined1 *)(unsigned)0x8c139e5c),ar5_00,(*(int *)(fr0_ - 0x34)),ar7_00));
  return uVar3;
}

__asm__(".globl _FUN_8c08b020\n.set _FUN_8c08b020, _FUN_8c08b020_def\n");
//@unit 8c08b5a8
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
undefined4 FUN_8c08b5a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08b5a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_fr0 = 0;
  char cVar5;
  undefined2 uVar6;
  undefined4 ain0;
  
  uVar6 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0x34)) >> 0x10);
  cVar5 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  ain0 = CONCAT22(uVar6,(short)uVar1);
  iVar4 = *(int *)(unsigned)(ar4 + 0x328) + (short)uVar1 * 0x124;
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x42c),ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c015bb8(iVar4 + 0x70,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 52)), deref_u32(*(int *)(unsigned)(iVar4 + 0xa0) + iVar2 * 4,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c026d74(*(int *)(unsigned)(iVar4 + 0xa8) + iVar2 * 4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x20)) = extraout_fr0;
  if (cVar5 == '\0') {
    (*(undefined4 *)(fr0_ - 0x20)) = uVar3;
  }
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); FUN_8c21bbb0(uVar1,ar5_00,(*(undefined4 *)(fr0_ - 0x20)),ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c08b5a8\n.set _FUN_8c08b5a8, _FUN_8c08b5a8_def\n");
//@unit 8c08b694
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
int FUN_8c08b694_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08b694";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4e34(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02cbe4(ar4 + 0x174,ar5 + 0x4c,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035338(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)) + 0x24))))
            (((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)),ar5 + 0xc8,ar6,ar7));
  iVar1 = 0x460;
  *(undefined4 *)(unsigned)(0x460 + ar4) = *(undefined4 *)(unsigned)(0xe8 + ar5);
  return iVar1;
}

__asm__(".globl _FUN_8c08b694\n.set _FUN_8c08b694, _FUN_8c08b694_def\n");
//@unit 8c08b720
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
int FUN_8c08b720_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08b720";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4ebc(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ce58(ar4 + 0x174,ar5 + 0x24,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035338(ar4 + 0x2dc,ar5 + 0x58,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)) + 0x24))))
            (((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)),ar5 + 0x48,ar6,ar7));
  iVar1 = 0x460;
  *(undefined4 *)(unsigned)(0x460 + ar4) = *(undefined4 *)(unsigned)(ar5 + 0x68);
  return iVar1;
}

__asm__(".globl _FUN_8c08b720\n.set _FUN_8c08b720, _FUN_8c08b720_def\n");
//@unit 8c08b798
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
undefined8 * FUN_8c08b798_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08b798";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined8 *puVar2;
  ulonglong in_dr0 = 0;
  char cVar3;
  
  cVar3 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  if ((short)uVar1 == 2) {
    *(undefined4 *)(unsigned)(ar4 + 0x478) = 0;
  }
  else if (*(int *)(unsigned)(ar4 + 0x460) == 2) {
    *(undefined4 *)(unsigned)(ar4 + 0x478) = 1;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02702c(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  if ((short)uVar1 < 2) {
    puVar2 = ((undefined1 *)(unsigned)0x8c08b828);
    if (cVar3 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x334) = 0x40800000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x334) = 0x2fd62fe640800000;
    }
  }
  else {
    puVar2 = (undefined8 *)(unsigned)0x334;
    if (cVar3 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x334) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x334) = in_dr0 & 0xffffffff;
    }
  }
  return puVar2;
}

__asm__(".globl _FUN_8c08b798\n.set _FUN_8c08b798, _FUN_8c08b798_def\n");
//@unit 8c08bd20
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
int s_cp_ESA_FRONT_HOME_njd_08bd28_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_cp_ESA_FRONT_HOME_njd_08bd28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int ar7_00;
  
  iVar1 = -0x208;
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c028afc(ar4,ar5,ar6,ar7));
  ar7_00 = ar4 + ar6;
  (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c139e9c)),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
  if (ar6 == 2) {
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
              (ar5,*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f68)),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020c60))))
              (ar5,*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f6c)),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
    uVar4 = *(undefined4 *)(unsigned)(0x410 + ar4);
    uVar3 = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f70));
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c020d58(ar5,uVar3,uVar4,ar7_00));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c256670(*(undefined4 *)(unsigned)(0x844 + ar4),uVar3,uVar4,ar7_00));
    *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffff0) + iVar1) = uVar2;
    ar6 = *(int *)(unsigned)((fr0_ + (int)0xfffffff0) + iVar1);
    if (ar6 == -1) {
      *(undefined4 *)(unsigned)((int)((int *)(fr0_ - 0x18)) + iVar1) =
           *(undefined4 *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x844 + ar4));
      *(unsigned *)(unsigned)((int)&(*(undefined4 *)(fr0_ - 0x1c)) + iVar1) = (&(*(undefined1 *)(unsigned)0x8c139fcc)) + 0x5be;
      ({ unsigned long t0_ = (unsigned long)(
                 *(undefined4 *)(unsigned)((int)&(*(undefined4 *)(fr0_ - 0x1c)) + iVar1)); *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 44)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
                ((int)&(*(undefined4 *)(fr0_ - 0x1c)) + 0x110 + iVar1,uVar3,uVar4,ar7_00); });
      *(undefined4 *)(unsigned)((int)((int *)(fr0_ - 0x18)) + iVar1) = 5;
      ar6 = (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      ((int)((int *)(fr0_ - 0x18)) + 0x10c + iVar1,
                       (&(*(undefined1 *)(unsigned)0x8c139fcc)) + 0x5dd,1,2));
    }
  }
  else if (ar6 == 3) {
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
              (ar5,*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f44)),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020b68))))
              (ar5,*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f44)),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020c60))))
              (ar5,*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f54)),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020d58))))
              (ar5,*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f5c)),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020c60))))
              (ar5,*(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c139f54)) + 4),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00))
    ;
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020d58))))
              (ar5,*(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c139f5c)) + 4),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00))
    ;
    uVar4 = *(undefined4 *)(unsigned)(0x410 + ar4);
    uVar3 = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f4c));
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c020e48(ar5,uVar3,uVar4,ar7_00));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c256670(*(undefined4 *)(unsigned)(0x844 + ar4),uVar3,uVar4,ar7_00));
    *(undefined4 *)(unsigned)((int)((int *)(fr0_ - 0x18)) + iVar1 + 4) = uVar2;
    ar6 = *(int *)(unsigned)((int)((int *)(fr0_ - 0x18)) + iVar1 + 4);
    if (ar6 == -1) {
      *(undefined4 *)(unsigned)((int)((int *)(fr0_ - 0x18)) + iVar1) =
           *(undefined4 *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x844 + ar4));
      *(unsigned *)(unsigned)((int)&(*(undefined4 *)(fr0_ - 0x1c)) + iVar1) = (&(*(undefined1 *)(unsigned)0x8c139fcc)) + 0x5be;
      ({ unsigned long t0_ = (unsigned long)(
                 *(undefined4 *)(unsigned)((int)&(*(undefined4 *)(fr0_ - 0x1c)) + iVar1)); *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 44)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
                ((fr0_ + (int)0xfffffff4) + iVar1,uVar3,uVar4,ar7_00); });
      *(undefined4 *)(unsigned)((int)((int *)(fr0_ - 0x18)) + iVar1) = 5;
      ar6 = (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      ((fr0_ + (int)0xfffffff4) + iVar1,(&(*(undefined1 *)(unsigned)0x8c139fcc)) + 0x5ff,1,2));
    }
  }
  return ar6;
}

__asm__(".globl _s_cp_ESA_FRONT_HOME_njd_08bd28\n.set _s_cp_ESA_FRONT_HOME_njd_08bd28, _s_cp_ESA_FRONT_HOME_njd_08bd28_def\n");
//@unit 8c08bf2c
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
undefined1 * s_Cp_Home_njd_08bf2c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Cp_Home_njd_08bf2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c4d0) = 0;
    *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c283bd0) + iVar1 * 0x124) = 0;
    *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c283be4) + iVar1 * 0x124) = 0;
    *(undefined2 *)(unsigned)(((undefined1 *)(unsigned)0x8c283bd4) + iVar1 * 0x124) = 0;
    *(undefined2 *)(unsigned)(((undefined1 *)(unsigned)0x8c283bdc) + iVar1 * 0x124) = 0;
  }
  *(unsigned *)0x8c283b34 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c139ea4));
  *(unsigned *)0x8c283b38 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c139ef4));
  (*(undefined4 *)(unsigned)(unsigned)0x8c283b3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c139e88);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283b40) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283b44) = (*(undefined4 *)(unsigned)(unsigned)0x8c139ea0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283b48) = (*(undefined4 *)(unsigned)(unsigned)0x8c139e8c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283b50) = (*(undefined4 *)(unsigned)(unsigned)0x8c139e90);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283b64) = (*(undefined4 *)(unsigned)(unsigned)0x8c139e94);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283b68) = 0xb;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283b54) = 0xb;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283b60) = 0x8c28412c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283b74) = 0x8c2841b0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283be4) = 0x8c284488;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c08) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c0c) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283bd0) = 0x8c284008;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283bd4) = 0x14;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283bd8) = 0x8c284064;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283bdc) = 0x14;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283bec) = 0x3f800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283bf4) = (short)(int)(14400.0 / (0.5 / (*(undefined4 *)(unsigned)(unsigned)0x8c283bf0)));
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c283bf4) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c283bf4) = 1;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c283bf8) = (*(undefined4 *)(unsigned)(unsigned)0x8c283bf8) * 0.7;
  *(unsigned *)0x8c283c58 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c139ea4));
  *(unsigned *)0x8c283c5c = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c139ef4));
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c60) = (*(undefined4 *)(unsigned)(unsigned)0x8c139e88);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c64) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c68) = (*(undefined4 *)(unsigned)(unsigned)0x8c139ea0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c6c) = (*(undefined4 *)(unsigned)(unsigned)0x8c139e8c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c74) = (*(undefined4 *)(unsigned)(unsigned)0x8c139e90);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c88) = (*(undefined4 *)(unsigned)(unsigned)0x8c139e94);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c8c) = 0xb;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c78) = 0xb;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c84) = 0x8c28412c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c98) = 0x8c2841b0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d08) = 0x8c284488;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d2c) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d30) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283cf4) = 0x8c284008;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283cf8) = 0x14;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283cfc) = 0x8c284064;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d00) = 0x14;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d1c) = (*(undefined4 *)(unsigned)(unsigned)0x8c283d1c) * 0.7;
  *(unsigned *)0x8c283d7c = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c139f54));
  *(unsigned *)0x8c283d80 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c139f5c));
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d84) = (*(undefined4 *)(unsigned)(unsigned)0x8c139f44);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d88) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d8c) = (*(undefined4 *)(unsigned)(unsigned)0x8c139f50);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d90) = (*(undefined4 *)(unsigned)(unsigned)0x8c139f4c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e2c) = 0x8c284608;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e34) = 0x3f800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e48) = 0x3f800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e50) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e54) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e18) = 0x8c2840c0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e1c) = 2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e20) = 0x8c2840d4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e24) = 2;
  *(unsigned *)0x8c283ea0 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c139f8c));
  *(unsigned *)0x8c283ea4 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c139fa8));
  (*(undefined4 *)(unsigned)(unsigned)0x8c283ea8) = (*(undefined4 *)(unsigned)(unsigned)0x8c139f78);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283eac) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283eb0) = (*(undefined4 *)(unsigned)(unsigned)0x8c139f80);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283eb4) = (*(undefined4 *)(unsigned)(unsigned)0x8c139f7c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283ebc) = (*(undefined4 *)(unsigned)(unsigned)0x8c139f84);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283ed0) = (*(undefined4 *)(unsigned)(unsigned)0x8c139f88);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283ed4) = 0xf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283ec0) = 0xf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283ecc) = 0x8c284234;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283ee0) = 0x8c2842e8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f50) = 0x8c284608;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f58) = 0x3f800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f74) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f78) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f3c) = 0x8c2840e8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f40) = 7;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f44) = 0x8c284110;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f48) = 7;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f64) = (*(undefined4 *)(unsigned)(unsigned)0x8c283f64) * 0.7;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283fbc) = 0x43660000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283fcc) = 2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283fd0) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283fd4) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283fd8) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283fdc) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283fe0) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283fe4) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283fe8) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283fec) = 0xffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283ff0) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283ff4) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283ff8) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283be8) = 0x3f000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283bfc) = 0x3c23d70a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c00) = 0x3f000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c04) = 0x43480000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c10) = 0x418c0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c1c) = 0x41400000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c50) = 0x43200000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d20) = 0x3c23d70a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d24) = 0x3f000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d28) = 0x43480000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d34) = 0x418c0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d40) = 0x41400000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d74) = 0x43200000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e44) = 0x3c23d70a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e4c) = 0x43480000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e58) = 0x418c0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e98) = 0x43200000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f68) = 0x3c23d70a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f6c) = 0x3e99999a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f70) = 0x43660000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f7c) = 0xc0400000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f88) = 0x41a00000;
  return ((undefined1 *)(unsigned)0x8c283fcc);
}

__asm__(".globl _s_Cp_Home_njd_08bf2c\n.set _s_Cp_Home_njd_08bf2c, _s_Cp_Home_njd_08bf2c_def\n");
//@unit 8c08c688
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
undefined4 FUN_8c08c688_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08c688";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0982b8(ar4 + 0x538,1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c08c688\n.set _FUN_8c08c688, _FUN_8c08c688_def\n");
//@unit 8c08c6ac
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
undefined4 Class_12a5d0_m7_08c6ac_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a5d0_m7_08c6ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int *ar5_00;
  undefined4 *a6;
  float fVar3;
  double in_dr0 = 0;
  double dVar4;
  double dVar5;
  float fVar6;
  undefined8 in_dr14 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar9 = '\0';
  cVar8 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x34)),ar5_00,ar6,ar7));
  dVar5 = CONCAT44D(uVar2,0x3f800000);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), get_field_288_08c818(ar4 + 0x538,ar5_00,ar6,ar7));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x170))))(ar4,ar5_00,ar6,ar7));
    if (cVar9 == '\0') {
      dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    }
  }
  a6 = &(*(undefined4 *)(fr0_ - 0x34));
  (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x124))))(ar5,&(*(undefined4 *)(fr0_ - 0x24)),a6,ar7));
  if (cVar9 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x30));
  }
  fVar6 = F32LO(dVar5);
  if (cVar8 == '\0') {
    fVar3 = F32LO(in_dr0) - fVar6;
  }
  else {
    fVar3 = SUB84(in_dr0 - dVar5,0);
  }
  if (cVar9 == '\0') {
    dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),fVar3);
  }
  else {
    dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
  }
  fVar3 = F32HI(dVar4);
  if (cVar8 == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D(fVar3,*(undefined4 *)(unsigned)(ar4 + 0x30));
    }
    if (cVar8 == '\0') {
      fVar3 = F32LO(dVar4) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar5,0);
    }
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),fVar3);
    }
    else {
      dVar4 = CONCAT44D((*(float *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
    }
    if (cVar8 != '\0' || F32HI(dVar4) <= SUB84(dVar4,0)) {
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),SUB84(dVar4,0));
      }
      else {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
      }
      if (cVar8 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar5;
      }
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x30) = (int)(D2U(dVar4) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x30) = dVar4;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),SUB84(dVar4,0));
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
    }
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D(F32HI(dVar4) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar5;
    }
    if (cVar9 == '\0') {
      *(int *)(unsigned)(ar4 + 0x30) = (int)(D2U(dVar4) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x30) = dVar4;
    }
  }
  if (cVar9 == '\0') {
    dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x38));
  }
  if (cVar8 == '\0') {
    fVar3 = F32LO(dVar4) - fVar6;
  }
  else {
    fVar3 = SUB84(dVar4 - dVar5,0);
  }
  if (cVar9 == '\0') {
    dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),fVar3);
  }
  else {
    dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
  }
  fVar3 = F32HI(dVar4);
  if (cVar8 == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D(fVar3,*(undefined4 *)(unsigned)(ar4 + 0x38));
    }
    if (cVar8 == '\0') {
      fVar3 = F32LO(dVar4) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar5,0);
    }
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D((*(float *)(fr0_ - 0x2c)),fVar3);
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
    }
    if (cVar8 != '\0' || F32HI(dVar4) <= SUB84(dVar4,0)) {
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x2c)),SUB84(dVar4,0));
      }
      else {
        dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
      }
      if (cVar8 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar5;
      }
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x38) = (int)(D2U(dVar4) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x38) = dVar4;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),SUB84(dVar4,0));
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
    }
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D(F32HI(dVar4) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar5;
    }
    if (cVar9 == '\0') {
      *(int *)(unsigned)(ar4 + 0x38) = (int)(D2U(dVar4) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x38) = dVar4;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,ar4 + 0x30,a6,ar7));
  uVar2 = SUB84(dVar4,0);
  if (cVar9 == '\0') {
    dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),SUB84(dVar5,0));
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),uVar2);
  }
  else {
    dVar5 = *(double *)(unsigned)(ar4 + 0x34);
  }
  fVar6 = F32HI(dVar4);
  if (cVar8 == '\0') {
    bVar7 = fVar6 < F32HI(dVar5);
  }
  else {
    bVar7 = dVar4 < dVar5;
  }
  if (bVar7) {
    fVar6 = (*(float *)(fr0_ - 0x30));
    fVar3 = (*(float *)(fr0_ - 0x2c));
    if (cVar9 == '\0') {
      fVar6 = *(float *)(unsigned)(ar4 + 0x34);
      fVar3 = (*(float *)(fr0_ - 0x30));
    }
    if (cVar8 != '\0' || fVar3 <= fVar6) {
      if (cVar9 == '\0') {
        *(float *)(unsigned)(ar4 + 0x34) = (*(float *)(fr0_ - 0x30));
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x34) = CONCAT44((*(float *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
      }
    }
  }
  else if (cVar9 == '\0') {
    *(float *)(unsigned)(ar4 + 0x34) = fVar6;
  }
  else {
    *(double *)(unsigned)(ar4 + 0x34) = dVar4;
  }
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x34)),0xffffffff,a6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x24)),0xffffffff,a6,ar7));
  return uVar2;
}

__asm__(".globl _Class_12a5d0_m7_08c6ac\n.set _Class_12a5d0_m7_08c6ac, _Class_12a5d0_m7_08c6ac_def\n");
//@unit 8c08c818
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
undefined4 get_field_288_08c818_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_288_08c818";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x288 + ar4);
}

__asm__(".globl _get_field_288_08c818\n.set _get_field_288_08c818, _get_field_288_08c818_def\n");
//@unit 8c08c824
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
undefined4 FUN_8c08c824_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08c824";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 in_fr1 = 0;
  double dVar3;
  float fVar4;
  undefined8 in_dr14 = 0;
  double dVar5;
  char cVar6;
  char cVar7;
  
  uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar7 = '\0';
  cVar6 = '\0';
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_026024(*(undefined4 *)(unsigned)(ar4 + 0x928),ar5,ar6,ar7));
  if (iVar1 == 1) {
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D(0x42c80000,in_fr1);
    }
    else {
      dVar3 = 3.829877612487459e+27;
    }
    if (cVar6 == '\0') {
      dVar5 = CONCAT44D(uVar2,(float)*(int *)(unsigned)(ar4 + 0x458) /
                                     F32HI(dVar3));
    }
    else {
      dVar5 = CONCAT44D(uVar2,(float)*(int *)(unsigned)(ar4 + 0x458)) / dVar3;
    }
  }
  else {
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D(0x45a8c000,in_fr1);
    }
    else {
      dVar3 = 2.29233286239132e-311;
    }
    if (cVar6 == '\0') {
      dVar5 = CONCAT44D(uVar2,(float)*(int *)(unsigned)(ar4 + 0x458) /
                                     F32HI(dVar3));
    }
    else {
      dVar5 = CONCAT44D(uVar2,(float)*(int *)(unsigned)(ar4 + 0x458)) / dVar3;
    }
  }
  fVar4 = F32LO(dVar5);
  if (*(int *)(unsigned)(ar4 + 0x458) < 0x65) {
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c139e6c),SUB84(dVar3,0));
    }
    else {
      dVar3 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c139e70),(*(undefined4 *)(unsigned)(unsigned)0x8c139e6c));
    }
    if (cVar6 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(unsigned)(ar4 + 0x438) = (int)(D2U(dVar3) >> 0x20);
      dVar3 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c139e70),SUB84(dVar3,0));
    }
    else {
      *(double *)(unsigned)(ar4 + 0x438) = dVar3;
      dVar3 = CONCAT44D((*(undefined1 *)(unsigned)0x8c139e74),(*(undefined4 *)(unsigned)(unsigned)0x8c139e70));
    }
    if (cVar6 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(unsigned)(ar4 + 0x43c) = (int)(D2U(dVar3) >> 0x20);
      dVar3 = CONCAT44D((*(undefined1 *)(unsigned)0x8c139e74),SUB84(dVar3,0));
    }
    else {
      *(double *)(unsigned)(ar4 + 0x43c) = dVar3;
      dVar3 = CONCAT44D((*(undefined1 *)(unsigned)0x8c139e78),(*(undefined1 *)(unsigned)0x8c139e74));
    }
    if (cVar6 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(unsigned)(ar4 + 0x440) = (int)(D2U(dVar3) >> 0x20);
      dVar3 = CONCAT44D((*(undefined1 *)(unsigned)0x8c139e78),SUB84(dVar3,0));
    }
    else {
      *(double *)(unsigned)(ar4 + 0x440) = dVar3;
      dVar3 = CONCAT44D((*(uint *)(unsigned)0x8c139e7c),(*(undefined1 *)(unsigned)0x8c139e78));
    }
    if (cVar6 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(unsigned)(ar4 + 0x444) = (int)(D2U(dVar3) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x444) = dVar3;
    }
  }
  if (899 < *(int *)(unsigned)(ar4 + 0x458)) {
    if (cVar6 == '\0') {
      dVar5 = CONCAT44D((float)*(int *)(unsigned)(ar4 + 0x458),fVar4);
    }
    else {
      dVar5 = (double)*(int *)(unsigned)(ar4 + 0x458);
    }
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D(0x44610000,SUB84(dVar3,0));
    }
    else {
      dVar3 = 1099511907856.0;
    }
    if (cVar6 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) - F32HI(dVar3)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 - dVar3;
    }
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D(0x42700000,SUB84(dVar3,0));
    }
    else {
      dVar3 = 2.12254649446278e-311;
    }
    if (cVar6 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) / F32HI(dVar3)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar3;
    }
    if (cVar6 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) + 1.0,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 + CONCAT44D(0x3f800000,SUB84(dVar3,0));
    }
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c139e6c),SUB84(dVar3,0));
    }
    else {
      dVar3 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c139e70),(*(undefined4 *)(unsigned)(unsigned)0x8c139e6c));
    }
    fVar4 = F32HI(dVar5);
    if (cVar6 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(unsigned)(ar4 + 0x438) = (int)(D2U(dVar3) >> 0x20);
      dVar3 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c139e70),SUB84(dVar3,0));
    }
    else {
      *(double *)(unsigned)(ar4 + 0x438) = dVar3;
      dVar3 = CONCAT44D((*(undefined1 *)(unsigned)0x8c139e74),(*(undefined4 *)(unsigned)(unsigned)0x8c139e70));
    }
    if (cVar6 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(unsigned)(ar4 + 0x43c) = (int)(D2U(dVar3) >> 0x20);
      dVar3 = CONCAT44D((*(undefined1 *)(unsigned)0x8c139e74),SUB84(dVar3,0));
    }
    else {
      *(double *)(unsigned)(ar4 + 0x43c) = dVar3;
      dVar3 = CONCAT44D((*(undefined1 *)(unsigned)0x8c139e78),(*(undefined1 *)(unsigned)0x8c139e74));
    }
    if (cVar6 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(unsigned)(ar4 + 0x440) = (int)(D2U(dVar3) >> 0x20);
      dVar3 = CONCAT44D((*(undefined1 *)(unsigned)0x8c139e78),SUB84(dVar3,0));
    }
    else {
      *(double *)(unsigned)(ar4 + 0x440) = dVar3;
      dVar3 = CONCAT44D((*(uint *)(unsigned)0x8c139e7c),(*(undefined1 *)(unsigned)0x8c139e78));
    }
    if (cVar6 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(unsigned)(ar4 + 0x444) = (int)(D2U(dVar3) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x444) = dVar3;
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_026024(*(undefined4 *)(unsigned)(ar4 + 0x928),ar5,ar6,ar7));
  if (iVar1 == 1) {
    iVar1 = *(int *)(unsigned)(ar4 + 0x458);
    *(int *)(unsigned)(ar4 + 0x458) = iVar1 + 1;
    uVar2 = 1000;
    if (1000 < iVar1 + 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x458) = 0;
      uVar2 = 0x74;
      *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0x7fffffff;
    }
  }
  else {
    iVar1 = *(int *)(unsigned)(ar4 + 0x458);
    *(int *)(unsigned)(ar4 + 0x458) = iVar1 + 1;
    uVar2 = 0x1518;
    if (0x1518 < iVar1 + 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x458) = 0;
      uVar2 = 0x74;
      *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0x7fffffff;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c08c824\n.set _FUN_8c08c824, _FUN_8c08c824_def\n");
//@unit 8c08c9dc
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
undefined4 s_cp_ESA_FRONT_HOME_njd_08c9ea_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_cp_ESA_FRONT_HOME_njd_08c9ea";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 184; for (int i_ = 0; i_ < 184; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *ar5_00;
  code *a6;
  int *a7;
  undefined4 *puVar4;
  undefined4 ar6_00;
  undefined4 uVar5;
  int s0;
  
  ((undefined4 *)(fr0_ - 0x24))[0] = 0;
  (*(undefined4 *)(fr0_ - 0x28)) = 0;
  uVar5 = 0;
  a7 = (int *)(unsigned)0x2;
  iVar1 = *(int *)(unsigned)(ar4 + 0x328) + ar6 * 0x124;
  s0 = ar4 + ar6;
  (*(undefined4 *)(fr0_ - 0x2c)) = 0;
  iVar2 = *(int *)(unsigned)(ar4 + 0x418);
  a6 = (code *)0xb;
  if ((iVar2 < 0xc) && (-1 < iVar2)) {
    ar5_00 = (&(*(undefined1 *)(unsigned)0x8c08ca68))[iVar2];
                    
    switch(iVar2) {
    case 0:
      *(undefined2 *)(unsigned)(ar4 + 0x414) = 0;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c0209b0(ar5,(*(undefined4 *)(unsigned)(unsigned)0x8c139e9c),*(undefined4 *)(unsigned)(ar4 + 0x410),
                           ((undefined4 *)(fr0_ - 0x24))));
      if (iVar2 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x848) = ((undefined4 *)(fr0_ - 0x24))[0];
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 1;
      }
      else if (iVar2 == 0) {
        (vsp = ((unsigned long)(fr0_ - 184)), report_error_message(*(undefined4 *)(unsigned)(iVar1 + 0xc),((undefined1 *)(unsigned)0x8c13a5ed),0,2));
      }
      break;
    case 1:
      if (*(int *)(unsigned)(iVar1 + 0x18) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 2;
      }
      else {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c020d90(ar5,*(undefined4 *)(unsigned)(iVar1 + 0x18),*(undefined4 *)(unsigned)(ar4 + 0x410),s0));
        if (iVar2 == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x418) = 2;
        }
        else if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(unsigned)(iVar1 + 0x18),((undefined1 *)(unsigned)0x8c13a600),0,2);
        }
      }
      break;
    case 2:
      if (*(int *)(unsigned)(iVar1 + 4) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 3;
      }
      else {
        iVar1 = s_Failed_to_Read_CAnimal_LoadM_02839e
                          (ar4,*(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x414) * 4 + *(int *)(unsigned)(iVar1 + 4)),
                           *(undefined4 *)(unsigned)(ar4 + 0x410),
                           *(int *)(unsigned)(iVar1 + 0xa0) + *(short *)(unsigned)(ar4 + 0x414) * 4,ar4 + 0x414,
                           (int)*(short *)(unsigned)(iVar1 + 0xa4),ar5,s0,0);
        if (iVar1 == 1) {
          *(undefined2 *)(unsigned)(ar4 + 0x414) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x418) = 3;
        }
      }
      break;
    case 3:
      if (*(int *)(unsigned)(iVar1 + 0x1c) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 4;
      }
      else {
        puVar4 = &(*(undefined4 *)(fr0_ - 0x2c));
        uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x410);
        iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c020ba0(ar5,*(undefined4 *)(unsigned)(iVar1 + 0x1c),uVar3,puVar4));
        if (iVar2 == 1) {
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 184)); FUN_8c015bb0(iVar1 + 0xb0,(*(undefined4 *)(fr0_ - 0x2c)),uVar3,puVar4); });
          *(undefined4 *)(unsigned)(ar4 + 0x418) = 4;
        }
        else if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(unsigned)(iVar1 + 0x18),((undefined1 *)(unsigned)0x8c13a600),0,2);
        }
      }
      break;
    case 4:
      if (*(int *)(unsigned)(iVar1 + 8) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 5;
      }
      else {
        iVar1 = s_Failed_to_Read_CAnimal_LoadM_02839e
                          (ar4,*(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x414) * 4 + *(int *)(unsigned)(iVar1 + 8)),
                           *(undefined4 *)(unsigned)(ar4 + 0x410),
                           *(int *)(unsigned)(iVar1 + 0xa8) + *(short *)(unsigned)(ar4 + 0x414) * 4,ar4 + 0x414,
                           (int)*(short *)(unsigned)(iVar1 + 0xac),ar5,s0,1);
        if (iVar1 == 1) {
          *(undefined2 *)(unsigned)(ar4 + 0x414) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x418) = 5;
        }
      }
      break;
    case 5:
      puVar4 = ((undefined4 *)(fr0_ - 0x24));
      uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x410);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c0209b0(ar5,*(undefined4 *)(unsigned)(iVar1 + 0xc),uVar3,puVar4));
      if (iVar2 == 1) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 184)); FUN_8c015ad4(iVar1 + 0x70,((undefined4 *)(fr0_ - 0x24))[0],uVar3,puVar4); });
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 6;
      }
      else if (iVar2 == 0) {
        (vsp = ((unsigned long)(fr0_ - 184)), report_error_message(*(undefined4 *)(unsigned)(iVar1 + 0xc),((undefined1 *)(unsigned)0x8c13a5ed),0,2));
      }
      break;
    case 6:
      if (*(int *)(unsigned)(iVar1 + 0x20) == 0) {
        puVar4 = &(*(undefined4 *)(fr0_ - 0x28));
        uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x410);
        iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c020aa8(ar5,*(undefined4 *)(unsigned)(iVar1 + 0xc),uVar3,puVar4));
        if (iVar2 == 1) {
          (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 0x78) + 8))))((int *)(unsigned)(iVar1 + 0x78),(*(undefined4 *)(fr0_ - 0x28)),uVar3,puVar4));
          *(undefined4 *)(unsigned)(ar4 + 0x418) = 7;
        }
        else if (iVar2 == 0) {
          (vsp = ((unsigned long)(fr0_ - 184)), report_error_message(*(undefined4 *)(unsigned)(iVar1 + 0xc),((undefined1 *)(unsigned)0x8c13a629),0,2));
        }
      }
      else {
        uVar3 = *(undefined4 *)(unsigned)(iVar1 + 0xc);
        (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x20,uVar3,2));
        (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 0x78) + 8))))((int *)(unsigned)(iVar1 + 0x78),iVar1 + 0x28,uVar3,a7));
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 7;
      }
      break;
    case 7:
      if (*(int *)(unsigned)(iVar1 + 0x20) == 0) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 184)), get_field_4_0253e4(iVar1 + 0x78,ar5_00,0xb,2));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c020e80(ar5,*(undefined4 *)(unsigned)(iVar1 + 0x14),*(undefined4 *)(unsigned)(ar4 + 0x410),uVar3));
        if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(unsigned)(iVar1 + 0x14),((undefined1 *)(unsigned)0x8c13a65e),0,2);
        }
      }
      else {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 184)), get_field_4_0253e4(iVar1 + 0x78,ar5_00,0xb,2));
        iVar2 = s_CDCGD_ReadPVMFileReq_021082
                          (ar5,*(undefined4 *)(unsigned)(iVar1 + 0x20),*(undefined4 *)(unsigned)(ar4 + 0x410),uVar3,s0);
        if (iVar2 == 0) {
          report_error_message
                    (((undefined1 *)(unsigned)0x8c13a495),
                     ((undefined1 *)(unsigned)0x8c13a63c),0,2);
        }
      }
      if (iVar2 == 1) {
        if (*(int *)(unsigned)(iVar1 + 0x34) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x418) = 8;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x418) = 9;
        }
      }
      break;
    case 8:
      if (*(int *)(unsigned)(iVar1 + 0x10) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 0;
        uVar5 = 1;
      }
      else {
        if (*(int *)(unsigned)(iVar1 + 0x48) == 0) {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 184)), get_field_4_0253e4(iVar1 + 0x88,ar5_00,0xb,2));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c020e80(ar5,*(undefined4 *)(unsigned)(iVar1 + 0x10),*(undefined4 *)(unsigned)(ar4 + 0x410),uVar3))
          ;
          if (iVar2 == 0) {
            report_error_message
                      (*(undefined4 *)(unsigned)(iVar1 + 0x10),((undefined1 *)(unsigned)0x8c13a65e),0,2
                      );
          }
        }
        else {
          ar6_00 = *(undefined4 *)(unsigned)(iVar1 + 0xc);
          uVar3 = ar6_00;
          (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x48,ar6_00,ar6_00));
          iVar2 = iVar1 + 0x50;
          (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 0x88) + 8))))((int *)(unsigned)(iVar1 + 0x88),iVar2,ar6_00,uVar3));
          uVar3 = (vsp = ((unsigned long)(fr0_ - 184)), get_field_4_0253e4(iVar1 + 0x88,iVar2,ar6_00,uVar3));
          iVar2 = s_CDCGD_ReadPVMFileReq_021082
                            (ar5,*(undefined4 *)(unsigned)(iVar1 + 0x48),*(undefined4 *)(unsigned)(ar4 + 0x410),uVar3,s0
                            );
          if (iVar2 == 0) {
            report_error_message
                      (((undefined1 *)(unsigned)0x8c13a6cc),
                       ((undefined1 *)(unsigned)0x8c13a6b0),0,2);
          }
        }
        if (iVar2 == 1) {
          if (*(int *)(unsigned)(iVar1 + 0x5c) == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x418) = 0;
            uVar5 = 1;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 0x418) = 0xb;
          }
        }
      }
      break;
    case 9:
      (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x34,*(undefined4 *)(unsigned)(iVar1 + 0xc),2));
      a7 = (int *)(unsigned)(iVar1 + 0x80);
      a6 = ((code *)(unsigned long)*(unsigned *)(unsigned)(*a7 + 8));
      (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)a6))(a7,iVar1 + 0x3c,a6,a7));
      ar5_00 = (undefined *)(unsigned)0xa;
      *(undefined4 *)(unsigned)(ar4 + 0x418) = 10;
    case 10:
      uVar3 = (vsp = ((unsigned long)(fr0_ - 184)), get_field_4_0253e4(iVar1 + 0x80,ar5_00,a6,a7));
      iVar1 = s_CDCGD_ReadPVMFileReq_021082
                        (ar5,*(undefined4 *)(unsigned)(iVar1 + 0x34),*(undefined4 *)(unsigned)(ar4 + 0x410),uVar3,s0);
      if (iVar1 == 0) {
        report_error_message
                  (((undefined1 *)(unsigned)0x8c13a686),
                   ((undefined1 *)(unsigned)0x8c13a6b0),0,2);
      }
      if (iVar1 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 8;
      }
      break;
    case 0xb:
      uVar3 = *(undefined4 *)(unsigned)(iVar1 + 0xc);
      (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x5c,uVar3,2));
      iVar2 = iVar1 + 100;
      (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 0x90) + 8))))((int *)(unsigned)(iVar1 + 0x90),iVar2,uVar3,a7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 184)), get_field_4_0253e4(iVar1 + 0x90,iVar2,uVar3,a7));
      iVar1 = s_CDCGD_ReadPVMFileReq_021082
                        (ar5,*(undefined4 *)(unsigned)(iVar1 + 0x5c),*(undefined4 *)(unsigned)(ar4 + 0x410),uVar3,s0);
      if (iVar1 == 0) {
        report_error_message
                  (((undefined1 *)(unsigned)0x8c13a6ee),
                   ((undefined1 *)(unsigned)0x8c13a6b0),0,2);
      }
      if (iVar1 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 0;
        uVar5 = 1;
      }
    }
  }
  else {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13a718),((undefined1 *)(unsigned)0x8c13a6b0),0,2);
  }
  return uVar5;
}

__asm__(".globl _s_cp_ESA_FRONT_HOME_njd_08c9ea\n.set _s_cp_ESA_FRONT_HOME_njd_08c9ea, _s_cp_ESA_FRONT_HOME_njd_08c9ea_def\n");
//@unit 8c08d380
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
undefined4 FUN_8c08d380_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08d380";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  
  cVar5 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125f98),ar5,ar6,ar7));
  uVar3 = 0x8c283ae8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283ae8,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125fa8),pcVar2,uVar3,ar7));
  uVar3 = 0x8c283af4;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283af4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125fb8),pcVar2,uVar3,ar7));
  uVar3 = 0x8c283b00;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283b00,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125fc8),pcVar2,uVar3,ar7));
  uVar3 = 0x8c283b0c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283b0c,ar7));
  if (cVar5 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c125fd8) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c125fdc),0x800000);
  }
  else {
                    
    (*(undefined4 *)(unsigned)(unsigned)0x8c125fd8) = 0xffffffff00800000;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125fdc),pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c283b18,ar7));
  uVar1 = 0x124;
  ({ unsigned long t0_ = (unsigned long)(4); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c283b30,((void *)0x8c02452c),((void *)0x8c03a4ac),0x124); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c08daac),0x8c283b24,uVar1));
  uVar1 = 0x10;
  ({ unsigned long t0_ = (unsigned long)(3); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(((undefined1 *)(unsigned)0x8c283fcc),((void *)0x8c024824),((void *)0x8c03a454),0x10); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c08da88),0x8c283fc0,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x14); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c284008,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c08da64),0x8c283ffc,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x14); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c284064,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c08da40),0x8c284058,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(2); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c2840c0,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c08da1c),0x8c2840b4,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(2); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c2840d4,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c08d9f8),0x8c2840c8,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(7); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c2840e8,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c08d9d4),0x8c2840dc,uVar1));
  uVar4 = 4;
  ({ unsigned long t0_ = (unsigned long)(7); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c284110,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  uVar1 = 0x8c284104;
  pcVar2 = ((void *)0x8c08d9b0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c08d9b0),0x8c284104,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2843a8,pcVar2,uVar1,uVar4));
  uVar3 = 0x8c28439c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28439c,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2843c4,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c2843b8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2843b8,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2843e0,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c2843d4;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2843d4,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2843fc,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c2843f0;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2843f0,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284418,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c28440c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28440c,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284434,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c284428;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284428,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284450,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c284444;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284444,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c28446c,pcVar2,uVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284460,uVar4));
  uVar4 = 0x8c2843e0;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c2843fc); unsigned long t1_ = (unsigned long)(0x8c284418); unsigned long t2_ = (unsigned long)(0x8c284434); unsigned long t3_ = (unsigned long)(
                       0x8c284450); unsigned long t4_ = (unsigned long)(0x8c28446c); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c284488,0x8c2843a8,0x8c2843c4,0x8c2843e0); });
  uVar3 = 0x8c28447c;
  pcVar2 = ((void *)0x8c017084);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c28447c,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284528,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c28451c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28451c,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284544,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c284538;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284538,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284560,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c284554;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284554,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c28457c,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c284570;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284570,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284598,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c28458c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28458c,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2845b4,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c2845a8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2845a8,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2845d0,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c2845c4;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2845c4,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2845ec,pcVar2,uVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2845e0,uVar4));
  uVar3 = 0x8c284560;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c28457c); unsigned long t1_ = (unsigned long)(0x8c284598); unsigned long t2_ = (unsigned long)(0x8c2845b4); unsigned long t3_ = (unsigned long)(
                       0x8c2845d0); unsigned long t4_ = (unsigned long)(0x8c2845ec); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c284608,0x8c284528,0x8c284544,0x8c284560); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c2845fc,uVar3));
  return uVar1;
}

__asm__(".globl _FUN_8c08d380\n.set _FUN_8c08d380, _FUN_8c08d380_def\n");
//@unit 8c08d9b0
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
undefined4 FUN_8c08d9b0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08d9b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c284110,((void *)0x8c03a3dc),4,7); });
  return uVar1;
}

__asm__(".globl _FUN_8c08d9b0\n.set _FUN_8c08d9b0, _FUN_8c08d9b0_def\n");
//@unit 8c08d9d4
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
undefined4 FUN_8c08d9d4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08d9d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c2840e8,((void *)0x8c0247b0),4,7); });
  return uVar1;
}

__asm__(".globl _FUN_8c08d9d4\n.set _FUN_8c08d9d4, _FUN_8c08d9d4_def\n");
//@unit 8c08d9f8
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
undefined4 FUN_8c08d9f8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08d9f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c2840d4,((void *)0x8c03a3dc),4,2); });
  return uVar1;
}

__asm__(".globl _FUN_8c08d9f8\n.set _FUN_8c08d9f8, _FUN_8c08d9f8_def\n");
//@unit 8c08da1c
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
undefined4 FUN_8c08da1c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08da1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c2840c0,((void *)0x8c0247b0),4,2); });
  return uVar1;
}

__asm__(".globl _FUN_8c08da1c\n.set _FUN_8c08da1c, _FUN_8c08da1c_def\n");
//@unit 8c08da40
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
undefined4 FUN_8c08da40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08da40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c284064,((void *)0x8c03a3dc),4,0x14); });
  return uVar1;
}

__asm__(".globl _FUN_8c08da40\n.set _FUN_8c08da40, _FUN_8c08da40_def\n");
//@unit 8c08da64
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
undefined4 FUN_8c08da64_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08da64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c284008,((void *)0x8c0247b0),4,0x14); });
  return uVar1;
}

__asm__(".globl _FUN_8c08da64\n.set _FUN_8c08da64, _FUN_8c08da64_def\n");
//@unit 8c08da88
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
undefined4 FUN_8c08da88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08da88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(((undefined1 *)(unsigned)0x8c283fcc),((void *)0x8c03a454),0x10,3); });
  return uVar1;
}

__asm__(".globl _FUN_8c08da88\n.set _FUN_8c08da88, _FUN_8c08da88_def\n");
//@unit 8c08daac
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
undefined4 FUN_8c08daac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08daac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c283b30,((void *)0x8c03a4ac),0x124,4); });
  return uVar1;
}

__asm__(".globl _FUN_8c08daac\n.set _FUN_8c08daac, _FUN_8c08daac_def\n");
//@unit 8c08dad4
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
undefined4 * FUN_8c08dad4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08dad4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030fa0(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12a76c));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x230,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x24c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x264,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x28c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero((int)ar4 + 0x29c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x2a8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero((int)ar4 + 0x2b8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x2d0,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x2e0,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c08db9c(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c08dad4\n.set _FUN_8c08dad4, _FUN_8c08dad4_def\n");
//@unit 8c08db9c
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
undefined4 FUN_8c08db9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08db9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 in_fr1 = 0;
  ulonglong uVar1;
  char cVar2;
  
  cVar2 = '\0';
  *(undefined ***)(unsigned)(ar4 + 0x1c8) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13a734);
  *(undefined4 *)(unsigned)(ar4 + 0x1cc) = 0xc;
  *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x25c) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x248) = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), vec3_clear(ar4 + 0x90,ar5,ar6,ar7));
  if (cVar2 == '\0') {
    uVar1 = CONCAT44(0xbdcccccd,in_fr1);
    *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0xbdcccccd;
  }
  else {
    uVar1 = 0xa4bdcccccd;
    *(undefined8 *)(unsigned)(ar4 + 0xa0) = 0xa4bdcccccd;
  }
  *(undefined4 *)(unsigned)(ar4 + 0xa4) = 1;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c314(ar4,ar5,ar6,ar7));
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x220) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x220) = uVar1 & 0xffffffff;
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x224) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x224) = uVar1 & 0xffffffff;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x228) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x22c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2f0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2f4) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x2f8) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x240) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x244) = 0;
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x2fc) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x2fc) = uVar1 & 0xffffffff;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x288) = 1;
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x304) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x304) = CONCAT44(0x3f800000,(int)uVar1);
  }
  return 0x304;
}

__asm__(".globl _FUN_8c08db9c\n.set _FUN_8c08db9c, _FUN_8c08db9c_def\n");
//@unit 8c08dca8
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
undefined4 * Class_12a76c_m0_08dca8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a76c_m0_08dca8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12a76c);
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xb8,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xb4,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0xae,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xaa,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0xa7,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xa3,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x99,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x93,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x8c,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129cbc_m0_0312f4(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12a76c_m0_08dca8\n.set _Class_12a76c_m0_08dca8, _Class_12a76c_m0_08dca8_def\n");
//@unit 8c08dd98
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
undefined8 * FUN_8c08dd98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08dd98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  char cVar2;
  
  cVar2 = '\0';
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031684(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
    *(undefined4 *)(unsigned)(ar4 + 0x248) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    puVar1 = ((undefined1 *)(unsigned)0x8c08de1c);
    if (cVar2 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x24) = 0x41200000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x24) = 0x21441200000;
    }
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030eb8(ar4 + 0x1fc,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x240) = 0;
    puVar1 = ((undefined8 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x2f4));
    if ((-1 < (int)puVar1) && (puVar1 = ((undefined8 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x2f8)), -1 < (int)puVar1)) {
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c06b1d8(*(undefined4 *)(unsigned)(ar4 + 0x2f4),*(undefined4 *)(unsigned)(ar4 + 0x2f8),ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x2f4) = 0xffffffff;
      puVar1 = (undefined8 *)(unsigned)0x2f8;
      *(undefined4 *)(unsigned)(ar4 + 0x2f8) = 0xffffffff;
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c08dd98\n.set _FUN_8c08dd98, _FUN_8c08dd98_def\n");
//@unit 8c08de3c
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
undefined8 * FUN_8c08de3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08de3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 in_xd14 = 0;
  char cVar4;
  
  cVar4 = '\0';
  *(undefined4 *)(unsigned)(ar4 + 0x128) = ar5;
  iVar1 = *(int *)(unsigned)(ar4 + 0x128);
  if ((iVar1 == 0) || (iVar1 == 1)) {
    uVar3 = *(undefined4 *)(unsigned)(ar4 + 0xa0);
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031b68(ar4,0x8c2846d0,ar6,ar7));
    puVar2 = (undefined8 *)(unsigned)0xa0;
    if (cVar4 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0xa0) = uVar3;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0xa0) = in_xd14;
    }
  }
  else {
    if (iVar1 == 2) {
      ar7 = 0;
      ar6 = 0xffffffff;
      uVar3 = 1;
      (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
    }
    else if (iVar1 != 3) {
      return (undefined8 *)(unsigned)iVar1;
    }
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031b68(ar4,0x8c2846e8,ar6,ar7));
    puVar2 = ((undefined1 *)(unsigned)0x8c08dee8);
    if (cVar4 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x24) = 0x41200000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x24) = 0x2fd62fe641200000;
    }
  }
  return puVar2;
}

__asm__(".globl _FUN_8c08de3c\n.set _FUN_8c08de3c, _FUN_8c08de3c_def\n");
//@unit 8c08e6e8
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
int FUN_8c08e6e8_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08e6e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 140; for (int i_ = 0; i_ < 140; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 in_dr0 = 0;
  char cVar5;
  
  cVar5 = '\0';
  iVar4 = 1;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 140)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 140)) - 8); FUN_8c03f480((*(undefined4 *)(fr0_ + 0x00000000)),ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 140)), Vec3_ctor_copy(&(*(int *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x88)),ar6,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 140)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c08e9b0(((undefined1 *)(fr0_ - 0x78)),uVar3,ar6,ar7));
  iVar2 = *(int *)(unsigned)(ar4 + 0x124);
  if ((iVar2 < 0xc) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      ar7 = 0;
      ar6 = (int *)(unsigned)0xffffffff;
      uVar3 = 5;
      (vsp = ((unsigned long)(fr0_ - 140)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 140)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
      iVar4 = 0;
      break;
    case 1:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c091d40(ar4,*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000018)),ar7));
      ar6 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000018));
      break;
    default:
      ar6 = (int *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))[1];
      iVar4 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c08fd38(ar4,*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),ar6,(*(undefined4 *)(fr0_ + 0x0000000c))));
      ar7 = (*(undefined4 *)(fr0_ + 0x0000000c));
      if (iVar4 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
      break;
    case 3:
      ar6 = (int *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))[1];
      iVar4 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c090bc4(ar4,*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),ar6,(*(undefined4 *)(fr0_ + 0x0000000c))));
      ar7 = (*(undefined4 *)(fr0_ + 0x0000000c));
      break;
    case 4:
      (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000018)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000018)),*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),ar6,ar7));
      uVar1 = in_dr0;
      if (cVar5 == '\0') {
        (*(undefined8 *)(fr0_ - 0x18)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x18))+4)),(int)((ulonglong)in_dr0 >> 0x20));
        uVar1 = (*(undefined8 *)(fr0_ - 0x18));
      }
      (*(undefined8 *)(fr0_ - 0x18)) = uVar1;
      ar6 = &(*(int *)(fr0_ - 0x1c));
      iVar4 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c091924(ar4,*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),ar6,ar7));
      break;
    case 8:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c097e0c(ar4,*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),ar6,ar7));
      ar6 = (int *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c031c74(ar4,&(*(int *)(fr0_ - 0x1c)),ar6,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c08e93c(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), Vec3_dtor(&(*(int *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return iVar4;
}

__asm__(".globl _FUN_8c08e6e8\n.set _FUN_8c08e6e8, _FUN_8c08e6e8_def\n");
//@unit 8c08e93c
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
int FUN_8c08e93c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08e93c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x4c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x3c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x30,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x20,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x10,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c08e93c\n.set _FUN_8c08e93c, _FUN_8c08e93c_def\n");
//@unit 8c08e9b0
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
int FUN_8c08e9b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08e9b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x20,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 0x30,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 0x3c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x4c,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c08e9b0\n.set _FUN_8c08e9b0, _FUN_8c08e9b0_def\n");
//@unit 8c08e9fc
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
undefined4 FUN_8c08e9fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08e9fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 uVar3;
  float fVar4;
  undefined8 in_dr0 = 0;
  float fVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  uVar2 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 52)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c08ea30:
    uVar2 = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c034148(ar4 + 0xb0,0,ar6_00,ar7));
    uVar3 = (undefined4)in_dr0;
    if ((iVar1 != 1) && (iVar1 != 2)) {
      (vsp = ((unsigned long)(fr0_ - 52)), object_dtor_delete(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7));
      return 1;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(unsigned *)((((unsigned long)(fr0_ - 52)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 52)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 52)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x30)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 52)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c031b68(ar4,0x8c2846d0,ar6_00,ar7));
    in_dr0 = CONCAT44(0x3f800000,uVar3);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x48) = 0x3f800000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x48) = in_dr0;
    }
    uVar2 = ar5;
    ar6_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c031bb4(ar4,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
  }
  else if (iVar1 != 3) {
    if (iVar1 != 5) goto LAB_8c08eb0e;
    goto LAB_8c08ea30;
  }
  fVar4 = F32HI(in_dr0);
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c03f3ac(ar4 + 0xb0,uVar2,ar6_00,ar7));
  ar6_00 = ar5;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c097ba4(ar4,ar6,ar5,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7));
  if (cVar7 == '\0') {
    fVar5 = 100.0;
  }
  else {
    fVar4 = 100.0;
    fVar5 = 7.1186e-43;
  }
  if (cVar6 == '\0' && fVar4 < fVar5) {
    *(byte *)(unsigned)(ar4 + 0x1fc) = *(byte *)(unsigned)(ar4 + 0x1fc) & 0xfb;
  }
LAB_8c08eb0e:
  (vsp = ((unsigned long)(fr0_ - 52)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), object_dtor_delete(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c08e9fc\n.set _FUN_8c08e9fc, _FUN_8c08e9fc_def\n");
//@unit 8c08eb8c
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
undefined4 FUN_8c08eb8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08eb8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 248; for (int i_ = 0; i_ < 248; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int ar5_00;
  undefined4 ar5_01;
  undefined4 uVar3;
  undefined4 in_fr1 = 0;
  ulonglong uVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar3 = 1;
  (vsp = ((unsigned long)(fr0_ - 248)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  if (cVar6 != '\0') {
    in_fr1 = (undefined4)*(undefined8 *)(unsigned)(ar4 + 700);
  }
  (vsp = ((unsigned long)(fr0_ - 248)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x34)),ar6,ar7); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(fr0_ - 0x44)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 248)), object_dtor_delete(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  if (iVar1 == 3) {
    iVar1 = 8;
  }
  else {
    iVar1 = 9;
  }
  ar5_00 = iVar1;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c034148(ar4 + 0xb0,iVar1,ar6,ar7));
  if ((iVar2 == 1) || (iVar2 == 2)) {
    (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 248)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x54)),ar5_00,ar6,ar7));
    if (cVar6 == '\0') {
      uVar4 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 700),in_fr1);
    }
    else {
      uVar4 = *(ulonglong *)(unsigned)(ar4 + 700);
    }
    (vsp = ((unsigned long)(fr0_ - 248)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x60)),ar5_00,ar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x60)),ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 248)), FUN_8c022dac(ar4 + 0x14,((undefined1 *)(fr0_ - 0x70)),ar6,ar7));
    if (cVar6 == '\0') {
      uVar4 = uVar4 >> 0x20;
    }
    (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 248)), object_dtor_delete(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6,ar7));
    ar5_01 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7));
    if (cVar5 != '\0' || (float)uVar4 <= 1.0) {
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xd8)),ar5_01,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xe4)),ar5_01,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf4))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0xd8)),((undefined1 *)(fr0_ - 0xe4)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xf4)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), object_dtor_delete(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,ar6,ar7));
      uVar3 = 0;
    }
    else if (iVar1 == 8) {
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x80)),ar5_01,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x8c)),ar5_01,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x80)),((undefined1 *)(fr0_ - 0x8c)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x9c)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), object_dtor_delete(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xac)),ar5_01,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xb8)),ar5_01,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc8))); *(unsigned *)((((unsigned long)(fr0_ - 248)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 248)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0xac)),((undefined1 *)(fr0_ - 0xb8)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xc8)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), object_dtor_delete(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 248)), Vec3_dtor(((undefined1 *)(fr0_ - 0xac)),0xffffffff,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 248)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7));
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c08eb8c\n.set _FUN_8c08eb8c, _FUN_8c08eb8c_def\n");
//@unit 8c08eef4
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
//@unit 8c08f354
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
undefined4 FUN_8c08f354_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c08f354";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 180; for (int i_ = 0; i_ < 180; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 ar5_01;
  int iVar2;
  int iVar3;
  int ar5_02;
  undefined4 ar6_00;
  int iVar4;
  undefined4 in_fr1 = 0;
  float fVar5;
  undefined8 uVar6;
  code *pcVar8;
  float fVar9;
  double dVar7;
  undefined8 in_xd0 = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  iVar3 = ar6;
  iVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x3c)),ar5,iVar3,ar7));
  iVar4 = iVar2 + 0xb;
  if (cVar11 == '\0') {
    in_fr1 = *(undefined4 *)(unsigned)(ar4 + 0x2cc);
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2cc);
  }
  ar5_02 = 0x27c;
  if (cVar11 == '\0') {
    uVar6 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x27c),in_fr1);
  }
  else {
    uVar6 = *(undefined8 *)(unsigned)(ar4 + 0x27c);
  }
  if (((float)uVar6 == F32HI(uVar6)) &&
     (ar5_02 = *(int *)(unsigned)(ar4 + 0x284), 0 < ar5_02)) {
    if (*(int *)(unsigned)(ar4 + 0x284) == 0x15) {
      ar7 = 0;
      uVar1 = 0xffffffff;
      ar5_02 = 4;
      (vsp = ((unsigned long)(fr0_ - 180)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 180)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_02,uVar1,ar7));
      *(int *)(unsigned)(ar4 + 0x284) = *(int *)(unsigned)(ar4 + 0x284) + -1;
      iVar3 = ar4;
    }
    fVar5 = F32HI(uVar6);
    iVar4 = (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c03f3ac(ar4 + 0xb0,ar5_02,iVar3,ar7));
    if (iVar4 == 7) {
      *(int *)(unsigned)(ar4 + 0x284) = *(int *)(unsigned)(ar4 + 0x284) + -1;
      if (*(int *)(unsigned)(ar4 + 0x284) == 0) {
        ar7 = 0;
        iVar3 = -1;
        ar5_02 = 0;
        (vsp = ((unsigned long)(fr0_ - 180)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      }
      else if (*(int *)(unsigned)(ar4 + 0x284) == 10) {
        ar5_02 = *(int *)(unsigned)(ar4 + 0x2f8);
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c06b154(*(undefined4 *)(unsigned)(ar4 + 0x2f4),ar5_02,iVar3,ar7));
      }
    }
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 180)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_02,iVar3,ar7); });
    if (cVar11 == '\0') {
      pcVar8 = (code *)0x42480000;
    }
    else {
      fVar5 = 50.0;
      pcVar8 = ((void *)0x8c01031c);
    }
    if (fVar5 == (float)(uint)pcVar8) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 180)), libgcc_divide_helper_01031c(iVar2,3,iVar3,ar7));
      if (iVar2 == 0) {
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c033474(ar4,0x22,ar6,(*(int *)(fr0_ + 0x00000000))));
        iVar3 = ar6;
        ar7 = (*(int *)(fr0_ + 0x00000000));
      }
      else if (iVar2 == 1) {
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c033474(ar4,0x23,ar6,(*(int *)(fr0_ + 0x00000000))));
        iVar3 = ar6;
        ar7 = (*(int *)(fr0_ + 0x00000000));
      }
      else if (iVar2 == 2) {
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c033474(ar4,0x25,ar6,(*(int *)(fr0_ + 0x00000000))));
        iVar3 = ar6;
        ar7 = (*(int *)(fr0_ + 0x00000000));
      }
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c03f3ac(ar4 + 0xb0,ar5_02,iVar3,ar7));
    fVar5 = (float)uVar6;
    if (cVar11 == '\0') {
      fVar5 = *(float *)(unsigned)(ar4 + 0x2cc);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2cc);
    }
    if (cVar10 == '\0') {
      fVar5 = fVar5 + 1.0;
    }
    else {
      fVar5 = SUB84(CONCAT44D(0x3f800000,fVar5) + CONCAT44D(0x3f800000,fVar5),0);
    }
    if (cVar11 == '\0') {
      *(float *)(unsigned)(ar4 + 0x2cc) = fVar5;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x2cc) = in_xd0;
    }
    iVar2 = iVar4;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c03c0f0(ar4 + 0xb0,iVar4,iVar3,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 180)), deref_u32(uVar1,iVar2,iVar3,ar7));
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c0342ac(ar4 + 0xb0,uVar1,0,ar7));
    ar6_00 = 0;
    iVar3 = ar4 + 0xb0;
    ar5_01 = (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c034548(iVar3,uVar1,0,ar7));
    if (iVar4 < 0xe) {
      if (cVar11 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 0x2cc);
        pcVar8 = (code *)0x45938000;
      }
      else {
        fVar5 = 4720.0;
        pcVar8 = ((void *)0x8c014200);
      }
      if (fVar5 == (float)(uint)pcVar8) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 180)), rand(iVar3,uVar1,ar6_00,ar7));
        uVar1 = 2;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 180)), libgcc_divide_helper_01031c(iVar3,2,ar6_00,ar7));
        if (iVar2 != 0) {
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2cc) = 0x45cf8800;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x2cc) = 0x45c5800045cf8800;
          }
        }
      }
      if (cVar11 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 0x2cc);
        fVar9 = 6320.0;
      }
      else {
        fVar5 = 6320.0;
        fVar9 = 4.2039e-43;
      }
      if (fVar5 == fVar9) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        (vsp = ((unsigned long)(fr0_ - 180)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_00,ar7));
        ar7 = 0;
        ar6_00 = 0xffffffff;
        uVar1 = 10;
        iVar3 = ar4 + 0xb0;
        (vsp = ((unsigned long)(fr0_ - 180)), s_CAnimBody_SetAnimation_033a94(iVar3,10,0xffffffff,0));
      }
      if (cVar11 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 0x2cc);
        fVar9 = 7040.0;
      }
      else {
        fVar5 = 7040.0;
        fVar9 = 1921.0;
      }
      if (fVar5 == fVar9) {
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2cc) = 0x44f02000;
        }
        else {
          fVar5 = 1921.0;
          *(undefined8 *)(unsigned)(ar4 + 0x2cc) = 0x28444f02000;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x284) = 0x15;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 180)), rand(iVar3,uVar1,ar6_00,ar7));
        iVar3 = (vsp = ((unsigned long)(fr0_ - 180)), libgcc_divide_helper_01031c(uVar1,0xaf0,ar6_00,ar7));
        if (cVar10 == '\0') {
          dVar7 = CONCAT44D((float)(iVar3 + 0x781),fVar5);
        }
        else {
          dVar7 = (double)(iVar3 + 0x781);
        }
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x27c) = (int)(D2U(dVar7) >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x27c) = dVar7;
        }
      }
    }
    else {
      if (cVar11 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 0x2cc);
        fVar9 = 8720.0;
      }
      else {
        fVar5 = 8720.0;
        fVar9 = 4.2039e-43;
      }
      if (fVar5 == fVar9) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        (vsp = ((unsigned long)(fr0_ - 180)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_00,ar7));
        ar7 = 0;
        ar6_00 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 180)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0));
      }
    }
    (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_assign(ar4 + 0x2d0,((undefined1 *)(fr0_ - 0x4c)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c023b4c(ar4 + 0x2d0,ar4 + 0x2e0,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c023bf4(ar4 + 0x2d0,ar4 + 0x2c4,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_assign(ar4 + 0x2e0,((undefined1 *)(fr0_ - 0x5c)),ar6_00,ar7));
    uVar1 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x68)),uVar1,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 180)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 180)) - 8); FUN_8c023484(ar4 + 0x2d0,((undefined1 *)(fr0_ - 0x68)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_assign(ar4 + 0x2d0,((undefined1 *)(fr0_ - 0x78)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), object_dtor_delete(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c034650(ar4 + 0xb0,ar5_01,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), vec3_copy_8c023d8c(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x84)),ar6_00,ar7));
    uVar1 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 180)), object_dtor_delete(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x94)),uVar1,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xa0)),uVar1,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 180)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 180)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x94)),((undefined1 *)(fr0_ - 0xa0)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xb0)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), object_dtor_delete(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_00,ar7));
    ar7 = ar4 + 0x14;
    iVar3 = 0x80;
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_assign(ar4 + 0x80,ar7,0x80,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 180)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,iVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,((void *)0x8c022cb0),ar7));
  return 1;
}

__asm__(".globl _FUN_8c08f354\n.set _FUN_8c08f354, _FUN_8c08f354_def\n");
//@unit 8c08f9e8
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
//@unit 8c08fd38
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
int FUN_8c08fd38_def(code *ar4,code *ar5,code *ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c08fd38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 624; for (int i_ = 0; i_ < 624; i_++) z_[i_] = 0; }
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  code *ar5_00;
  code *pcVar4;
  undefined4 uVar5;
  undefined1 *ar6_00;
  code *pcVar6;
  int iVar7;
  float fVar8;
  ulonglong in_dr0 = 0;
  double dVar9;
  undefined8 uVar10;
  ulonglong in_xd0 = 0;
  undefined4 in_PR = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  pcVar4 = ar6;
  pcVar6 = ar7;
  (*(undefined4 *)(fr0_ - 0x1c)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 624)), FUN_8c102748(&(*(int *)(fr0_ - 0x28)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x104)),((void *)0x8c022ce8),pcVar4,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x88)),((undefined1 *)(fr0_ - 0x104)),pcVar4,pcVar6));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x104)),0xffffffff,pcVar4,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x114)),uVar3,pcVar4,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x78)),((undefined1 *)(fr0_ - 0x114)),pcVar4,pcVar6));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x114)),0xffffffff,pcVar4,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x124)),uVar3,pcVar4,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x68)),((undefined1 *)(fr0_ - 0x124)),pcVar4,pcVar6));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x124)),0xffffffff,pcVar4,pcVar6));
  pcVar4 = ((void *)0x8c022ce8);
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x134)),uVar3,((void *)0x8c022ce8),pcVar6));
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0x134)),pcVar4,pcVar6));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x134)),0xffffffff,pcVar4,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x144)),uVar3,pcVar4,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x144)),pcVar4,pcVar6));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x144)),0xffffffff,pcVar4,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x154)),uVar3,pcVar4,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x154)),pcVar4,pcVar6));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x154)),0xffffffff,pcVar4,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 624)), FUN_8c08e9b0(((undefined1 *)(fr0_ - 0xe4)),uVar3,pcVar4,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0xf4)),uVar3,pcVar4,pcVar6));
  iVar7 = 1;
  if (*(int *)(unsigned)(ar4 + 0x134) == 0) {
    pcVar4 = (code *)0x64;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 624)), rand_range(ar4,0,100,pcVar6));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 624)), libgcc_divide_helper_0101e4(uVar3,10,pcVar4,pcVar6));
    *(int *)(unsigned)(ar4 + 0x134) = iVar2;
    *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
    *(int *)(unsigned)(ar4 + 300) = 0;
  }
  iVar2 = *(int *)(unsigned)(ar4 + 0x134);
  uVar3 = 10;
  if ((iVar2 < 0xb) && (4 < iVar2)) {
                    
    switch(iVar2) {
    default:
      if (*(int *)(unsigned)(ar4 + 300) == 0) {
        if (cVar12 == '\0') {
          *(int *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0 & 0xffffffff;
        }
        iVar2 = (vsp = ((unsigned long)(fr0_ - 624)), rand_range(ar4,0,3,pcVar6));
        if (iVar2 == 0) {
          pcVar6 = (code *)0x0;
          (vsp = ((unsigned long)(fr0_ - 624)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0,0));
        }
        else if (iVar2 == 1) {
          pcVar6 = (code *)0x0;
          (vsp = ((unsigned long)(fr0_ - 624)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0,0));
        }
        else if (iVar2 == 2) {
          uVar3 = 0;
          (vsp = ((unsigned long)(fr0_ - 624)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,6,0,0));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 624)), rand_range(ar4,0,2,uVar3));
          (vsp = ((unsigned long)(fr0_ - 624)), FUN_8c033474(ar4,iVar2 + 0x1f,ar5,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
          pcVar6 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        pcVar4 = ar4;
      }
      else if (*(int *)(unsigned)(ar4 + 300) != 1) break;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 624)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,300,pcVar4,pcVar6));
      if (iVar2 == 1) {
        iVar7 = 0;
      }
      break;
    case 9:
      iVar2 = *(int *)(unsigned)(ar4 + 300);
      if ((iVar2 < 6) && (-1 < iVar2)) {
                    
        switch(iVar2) {
        case 0:
          iVar2 = (vsp = ((unsigned long)(fr0_ - 624)), get_field_24_026024(((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),10,pcVar4,pcVar6));
          if (iVar2 != 1) {
            (*(undefined4 *)(fr0_ - 0x264)) = 0;
            (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,pcVar4,pcVar6));
            (vsp = ((unsigned long)(fr0_ - 624)), FUN_8c08e93c(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,pcVar4,pcVar6));
            (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,pcVar4,pcVar6));
            (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,pcVar4,pcVar6));
            (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,pcVar4,pcVar6));
            (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,pcVar4,pcVar6));
            (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,pcVar4,pcVar6));
            (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,pcVar4,pcVar6));
            (vsp = ((unsigned long)(fr0_ - 624)), free_if_nonnull_wrap_102790(&(*(int *)(fr0_ - 0x28)),0xffffffff,pcVar4,pcVar6));
            return (*(undefined4 *)(fr0_ - 0x264));
          }
          uVar3 = (vsp = ((unsigned long)(fr0_ - 624)), get_field_24_026024(((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),uVar3,pcVar4,pcVar6));
          uVar5 = 0;
          iVar2 = (vsp = ((unsigned long)(fr0_ - 624)), FUN_8c069c24(((undefined1 *)(fr0_ - 0xe4)),uVar3,0,pcVar6));
          if (iVar2 == 0) {
            (*(undefined4 *)(fr0_ - 0x260)) = 0;
            (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,uVar5,pcVar6));
            (vsp = ((unsigned long)(fr0_ - 624)), FUN_8c08e93c(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,uVar5,pcVar6));
            (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,uVar5,pcVar6));
            (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,uVar5,pcVar6));
            (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,uVar5,pcVar6));
            (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,uVar5,pcVar6));
            (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,uVar5,pcVar6));
            (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,uVar5,pcVar6));
            (vsp = ((unsigned long)(fr0_ - 624)), free_if_nonnull_wrap_102790(&(*(int *)(fr0_ - 0x28)),0xffffffff,uVar5,pcVar6));
            return (*(undefined4 *)(fr0_ - 0x260));
          }
          (vsp = ((unsigned long)(fr0_ - 624)), Vec3_assign(ar4 + 0x28c,((undefined1 *)(fr0_ - 0xd4)),uVar5,pcVar6));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x164))); *(unsigned *)((((unsigned long)(fr0_ - 624)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 624)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xc4)),&(*(int *)(fr0_ - 0x9c)),uVar5,pcVar6); });
          pcVar4 = ((void *)0x8c023a14);
          (vsp = ((unsigned long)(fr0_ - 624)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x164)),((void *)0x8c023a14),pcVar6));
          (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x164)),0xffffffff,pcVar4,pcVar6));
          if (cVar12 == '\0') {
            *(int *)(unsigned)(ar4 + 0x29c) = (*(int *)(fr0_ - 0xb4));
            *(int *)(unsigned)(ar4 + 0x2a0) = (*(int *)(fr0_ - 0xb0));
            *(int *)(unsigned)(ar4 + 0x2a4) = (*(int *)(fr0_ - 0xac));
            *(int *)(unsigned)(ar4 + 0x2b8) = (*(int *)(fr0_ - 0xa8));
            *(int *)(unsigned)(ar4 + 700) = (*(int *)(fr0_ - 0xa4));
            *(int *)(unsigned)(ar4 + 0x2c0) = (*(int *)(fr0_ - 0xa0));
            *(int *)(unsigned)(ar4 + 0x2c4) = (*(int *)(fr0_ - 0x9c));
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x29c) = CONCAT44((*(int *)(fr0_ - 0xb0)),(*(int *)(fr0_ - 0xb4)));
            *(ulonglong *)(unsigned)(ar4 + 0x2a0) = CONCAT44((*(int *)(fr0_ - 0xac)),(*(int *)(fr0_ - 0xb0)));
            *(ulonglong *)(unsigned)(ar4 + 0x2a4) = CONCAT44((*(int *)(fr0_ - 0xa8)),(*(int *)(fr0_ - 0xac)));
            *(ulonglong *)(unsigned)(ar4 + 0x2b8) = CONCAT44((*(int *)(fr0_ - 0xa4)),(*(int *)(fr0_ - 0xa8)));
            *(ulonglong *)(unsigned)(ar4 + 700) = CONCAT44((*(int *)(fr0_ - 0xa0)),(*(int *)(fr0_ - 0xa4)));
            *(ulonglong *)(unsigned)(ar4 + 0x2c0) = CONCAT44((*(int *)(fr0_ - 0x9c)),(*(int *)(fr0_ - 0xa0)));
            *(ulonglong *)(unsigned)(ar4 + 0x2c4) = CONCAT44((*(undefined4 *)(fr0_ - 0x98)),(*(int *)(fr0_ - 0x9c)));
          }
          pcVar6 = ar4 + 0x2c4;
          *(int *)(unsigned)(ar4 + 0x2c8) = (*(int *)(fr0_ - 0xe0));
          *(int *)(unsigned)(ar4 + 0x2f4) = (*(int *)(fr0_ - 0xdc));
          *(int *)(unsigned)(ar4 + 0x2f8) = (*(int *)(fr0_ - 0xd8));
          pcVar4 = (code *)0x2e0;
          (vsp = ((unsigned long)(fr0_ - 624)), Vec3_assign(ar4 + 0x2e0,((undefined1 *)(fr0_ - 0x88)) + *(int *)(unsigned)(ar4 + 0x2c8) * 0x10,0x2e0,pcVar6));
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        case 1:
          (vsp = ((unsigned long)(fr0_ - 624)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x170)),ar4 + 0x2a0,pcVar4,pcVar6));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x180))); *(unsigned *)((((unsigned long)(fr0_ - 624)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 624)) - 8); FUN_8c023484(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x170)),pcVar4,pcVar6); });
          ar5_00 = ar4 + 0x28c;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x190))); *(unsigned *)((((unsigned long)(fr0_ - 624)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 624)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x180)),ar5_00,pcVar4,pcVar6); });
          (vsp = ((unsigned long)(fr0_ - 624)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x1a0)),ar5_00,pcVar4,pcVar6));
          (vsp = ((unsigned long)(fr0_ - 624)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x1ac)),700,pcVar4,pcVar6));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1bc))); *(unsigned *)((((unsigned long)(fr0_ - 624)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 624)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x1a0)),((undefined1 *)(fr0_ - 0x1ac)),pcVar4,pcVar6); });
          if (cVar12 == '\0') {
            dVar9 = CONCAT44D(0x41a00000,*(int *)(unsigned)(ar4 + 0x2c4));
          }
          else {
            in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x2c4);
            dVar9 = 5.43774891134696e-312;
          }
          if (cVar11 == '\0') {
            fVar8 = F32LO(dVar9) * F32HI(dVar9);
          }
          else {
            fVar8 = SUB84(dVar9 * dVar9,0);
          }
          uVar1 = in_xd0;
          if (cVar12 == '\0') {
            (*(undefined8 *)(fr0_ - 0x26c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x26c))+4)),fVar8);
            uVar1 = (*(undefined8 *)(fr0_ - 0x26c));
          }
          (*(undefined8 *)(fr0_ - 0x26c)) = uVar1;
          ar6_00 = ((undefined1 *)(fr0_ - 0x1cc));
          ({ unsigned long t0_ = (unsigned long)(ar6_00); *(unsigned *)((((unsigned long)(fr0_ - 624)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 624)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x1bc)),&(*(undefined8 *)(fr0_ - 0x26c)),ar6_00,pcVar6); });
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1dc))); *(unsigned *)((((unsigned long)(fr0_ - 624)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 624)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x190)),((undefined1 *)(fr0_ - 0x1cc)),ar6_00,pcVar6); });
          (vsp = ((unsigned long)(fr0_ - 624)), Vec3_assign(((undefined1 *)(fr0_ - 0xf4)),((undefined1 *)(fr0_ - 0x1dc)),ar6_00,pcVar6));
          (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1dc)),0xffffffff,ar6_00,pcVar6));
          (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1cc)),0xffffffff,ar6_00,pcVar6));
          (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1bc)),0xffffffff,ar6_00,pcVar6));
          (vsp = ((unsigned long)(fr0_ - 624)), object_dtor_delete(((undefined1 *)(fr0_ - 0x1ac)),0xffffffff,ar6_00,pcVar6));
          (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1a0)),0xffffffff,ar6_00,pcVar6));
          (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x190)),0xffffffff,ar6_00,pcVar6));
          (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x180)),0xffffffff,ar6_00,pcVar6));
          (vsp = ((unsigned long)(fr0_ - 624)), object_dtor_delete(((undefined1 *)(fr0_ - 0x170)),0xffffffff,ar6_00,pcVar6));
          pcVar4 = (code *)((undefined1 *)(fr0_ - 0xf4));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 624)), FUN_8c08e9fc(ar4,ar5,pcVar4,ar6));
          pcVar6 = ar6;
          if (iVar2 == 0) {
            if (cVar12 == '\0') {
              *(int *)(unsigned)(ar4 + 0x28) = 0;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar8;
            }
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          }
          break;
        case 2:
          iVar2 = (vsp = ((unsigned long)(fr0_ - 624)), FUN_8c08eb8c(ar4,ar6,pcVar4,pcVar6));
          if (iVar2 == 0) {
            if (cVar12 == '\0') {
              *(int *)(unsigned)(ar4 + 0x2cc) = 0;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x2cc) = in_dr0 & 0xffffffff;
            }
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            *(int *)(unsigned)(ar4 + 0x240) = 1;
          }
          break;
        case 3:
          (vsp = ((unsigned long)(fr0_ - 624)), FUN_8c08eef4(ar4,*(int *)(unsigned)(ar4 + 0x2c8),ar6,pcVar6));
          pcVar4 = ar6;
          break;
        case 4:
          (vsp = ((unsigned long)(fr0_ - 624)), FUN_8c08f354(ar4,*(int *)(unsigned)(ar4 + 0x2c8),ar5,ar6));
          pcVar4 = ar5;
          pcVar6 = ar6;
          break;
        case 5:
          iVar7 = (vsp = ((unsigned long)(fr0_ - 624)), FUN_8c08f9e8(ar4,*(int *)(unsigned)(ar4 + 0x2c8),ar6,pcVar6));
          pcVar4 = ar6;
          if (iVar7 == 0) {
            *(int *)(unsigned)(ar4 + 0x240) = 0;
            if ((-1 < *(int *)(unsigned)(ar4 + 0x2f4)) && (-1 < *(int *)(unsigned)(ar4 + 0x2f8))) {
              (vsp = ((unsigned long)(fr0_ - 624)), FUN_8c06b1d8(*(int *)(unsigned)(ar4 + 0x2f4),*(int *)(unsigned)(ar4 + 0x2f8),ar6,pcVar6));
              *(int *)(unsigned)(ar4 + 0x2f4) = -1;
              *(int *)(unsigned)(ar4 + 0x2f8) = -1;
            }
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1ec))); *(unsigned *)((((unsigned long)(fr0_ - 624)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 624)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,pcVar6); });
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1fc))); *(unsigned *)((((unsigned long)(fr0_ - 624)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 624)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0x1ec)),ar6,pcVar6); });
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x20c))); *(unsigned *)((((unsigned long)(fr0_ - 624)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 624)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x1fc)),ar4 + 0x90,ar6,pcVar6); });
            pcVar4 = (code *)((undefined1 *)(fr0_ - 0x20c));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x21c))); *(unsigned *)((((unsigned long)(fr0_ - 624)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 624)) - 8); Vec3_add(pcVar4,ar4 + 0x2d0,pcVar4,pcVar6); });
            (vsp = ((unsigned long)(fr0_ - 624)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar5,pcVar4,pcVar6));
            if (cVar12 == '\0') {
              dVar9 = CONCAT44D((*(undefined4 *)(fr0_ - 0x218)),(int)(in_dr0 >> 0x20));
              in_dr0 = in_xd0;
            }
            else {
              dVar9 = CONCAT44D((*(undefined4 *)(fr0_ - 0x214)),(*(undefined4 *)(fr0_ - 0x218)));
            }
            if (cVar11 == '\0') {
              fVar8 = F32LO(dVar9) - F32HI(dVar9);
            }
            else {
              fVar8 = SUB84(dVar9 - dVar9,0);
            }
            if (cVar12 == '\0') {
              dVar9 = CONCAT44D(0x38d1b717,fVar8);
            }
            else {
              dVar9 = -7.932637709049515e-251;
            }
            if (cVar11 == '\0') {
              fVar8 = F32LO(dVar9) + F32HI(dVar9);
            }
            else {
              fVar8 = SUB84(dVar9 + dVar9,0);
            }
            if (cVar12 == '\0') {
              dVar9 = CONCAT44D(*(int *)(unsigned)(ar4 + 0x2d4),fVar8);
            }
            else {
              dVar9 = *(double *)(unsigned)(ar4 + 0x2d4);
            }
            if (cVar11 == '\0') {
              fVar8 = F32LO(dVar9) + F32HI(dVar9);
            }
            else {
              fVar8 = SUB84(dVar9 + dVar9,0);
            }
            if (cVar12 == '\0') {
              *(float *)(unsigned)(ar4 + 0x2d4) = fVar8;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x2d4) = in_dr0;
            }
            (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x21c)),0xffffffff,pcVar4,pcVar6));
            (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20c)),0xffffffff,pcVar4,pcVar6));
            (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1fc)),0xffffffff,pcVar4,pcVar6));
            (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1ec)),0xffffffff,pcVar4,pcVar6));
          }
        }
      }
      if (((-1 < *(int *)(unsigned)(ar4 + 0x2f4)) && (-1 < *(int *)(unsigned)(ar4 + 0x2f8))) &&
         (iVar2 = (vsp = ((unsigned long)(fr0_ - 624)), FUN_8c06b054(*(int *)(unsigned)(ar4 + 0x2f4),((void *)0x8c06b054),pcVar4,pcVar6)), iVar2 == 0)) {
        (vsp = ((unsigned long)(fr0_ - 624)), FUN_8c06b1d8(*(int *)(unsigned)(ar4 + 0x2f4),*(int *)(unsigned)(ar4 + 0x2f8),pcVar4,pcVar6));
        iVar7 = 0;
        *(int *)(unsigned)(ar4 + 0x240) = 0;
        *(int *)(unsigned)(ar4 + 0x2f4) = -1;
        *(int *)(unsigned)(ar4 + 0x2f8) = -1;
      }
    }
  }
  else {
    if (*(int *)(unsigned)(ar4 + 300) == 0) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x22c))); *(unsigned *)((((unsigned long)(fr0_ - 624)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 624)) - 8); FUN_8c0230f0(ar4 + 0x80,ar4 + 0x80,pcVar4,pcVar6); });
      uVar5 = (undefined4)in_dr0;
      (vsp = ((unsigned long)(fr0_ - 624)), Vec3_normalize(((undefined1 *)(fr0_ - 0x22c)),((undefined1 *)(fr0_ - 0x22c)),pcVar4,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 624)), FUN_8c03263c(ar4,((undefined1 *)(fr0_ - 0x23c)),pcVar4,pcVar6));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x25c))); *(unsigned *)((((unsigned long)(fr0_ - 624)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 624)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x24c)),ar5,pcVar4,pcVar6); });
      (vsp = ((unsigned long)(fr0_ - 624)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x25c)),pcVar4,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x25c)),0xffffffff,pcVar4,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24c)),0xffffffff,pcVar4,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x23c)),0xffffffff,pcVar4,pcVar6));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x22c)),0xffffffff,pcVar4,pcVar6));
      iVar7 = (vsp = ((unsigned long)(fr0_ - 624)), get_field_24_026024(((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),uVar3,pcVar4,pcVar6));
      pcVar6 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      if (iVar7 == 0) {
        if (cVar12 == '\0') {
          (*(int *)(fr0_ - 0x24)) = *(int *)(unsigned)(ar7 + 4);
          (*(int *)(fr0_ - 0x20)) = *(int *)(unsigned)(ar7 + 8);
          uVar10 = CONCAT44((*(int *)(fr0_ - 0x20)),uVar5);
        }
        else {
          (*(int *)(fr0_ - 0x24)) = (int)*(undefined8 *)(unsigned)(ar7 + 4);
          uVar10 = *(undefined8 *)(unsigned)(ar7 + 8);
          (*(int *)(fr0_ - 0x20)) = (int)uVar10;
          (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)((ulonglong)uVar10 >> 0x20);
        }
        (*(int *)(fr0_ - 0x28)) = 0x447a0000;
        if (cVar12 == '\0') {
          uVar10 = CONCAT44(0x40000000,(int)uVar10);
        }
        else {
          uVar10 = 0x8c03278840000000;
        }
        ar7 = (code *)&(*(int *)(fr0_ - 0x28));
        (vsp = ((unsigned long)(fr0_ - 624)), FUN_8c032788(ar4,ar4 + 0x54,ar7,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      }
      else {
        if (cVar12 == '\0') {
          uVar10 = CONCAT44(0x40000000,uVar5);
        }
        else {
          uVar10 = 0x8c03278840000000;
        }
        (vsp = ((unsigned long)(fr0_ - 624)), FUN_8c032788(ar4,ar4 + 0x54,ar7,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      }
      (vsp = ((unsigned long)(fr0_ - 624)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar4 + 0x54,ar7,pcVar6));
      if (cVar12 == '\0') {
        *(int *)(unsigned)(ar4 + 0x58) = (int)((ulonglong)uVar10 >> 0x20);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x58) = uVar10;
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
    else if (*(int *)(unsigned)(ar4 + 300) != 1) goto LAB_8c090ada;
    pcVar4 = ar4 + 0x54;
    iVar7 = (vsp = ((unsigned long)(fr0_ - 624)), FUN_8c091924(ar4,ar5,pcVar4,pcVar6));
  }
LAB_8c090ada:
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x26c))+4)) = iVar7;
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,pcVar4,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 624)), FUN_8c08e93c(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,pcVar4,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,pcVar4,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,pcVar4,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,pcVar4,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,pcVar4,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,pcVar4,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 624)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,pcVar4,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 624)), free_if_nonnull_wrap_102790(&(*(int *)(fr0_ - 0x28)),0xffffffff,pcVar4,pcVar6));
  return (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x26c))+4));
}

__asm__(".globl _FUN_8c08fd38\n.set _FUN_8c08fd38, _FUN_8c08fd38_def\n");
