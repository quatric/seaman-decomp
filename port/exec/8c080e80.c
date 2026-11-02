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
