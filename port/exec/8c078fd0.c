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
undefined4 FUN_8c078fd0_def(int ar4,int *ar5,int *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c078fd0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 432; for (int i_ = 0; i_ < 432; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *ar6_00;
  code *pcVar4;
  undefined1 *ar6_01;
  int *ar7_00;
  undefined4 uVar5;
  float fVar6;
  undefined8 in_dr0 = 0;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar10;
  double dVar9;
  undefined8 in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar5 = 1;
  piVar2 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 432)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c102748(((undefined1 *)(fr0_ - 0x3c)),piVar2,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 432)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)) + 0x184))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),piVar2,ar6_00,ar7_00));
  if (cVar12 == '\0') {
    uVar7 = CONCAT44(0x44610000,(int)((ulonglong)in_dr0 >> 0x20));
    in_dr0 = in_xd0;
  }
  else {
    uVar7 = 0x1fc44610000;
  }
  uVar8 = uVar7;
  if (cVar11 == '\0' && (float)uVar7 < F32HI(uVar7)) {
    ar6_00 = (int *)(unsigned)(ar4 + 0x1fc);
    (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c030f2c(ar6_00,piVar2,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 432)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)) + 0x184))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),piVar2,ar6_00,ar7_00));
    if (cVar12 == '\0') {
      uVar8 = CONCAT44(0x43200000,(int)((ulonglong)uVar7 >> 0x20));
    }
    else {
      uVar8 = 0x13443200000;
      in_dr0 = uVar7;
    }
    if (cVar11 == '\0' && F32HI(uVar8) < (float)uVar8) {
      piVar2 = (int *)(unsigned)(ar4 + 0x50);
    }
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x134);
  if ((iVar1 < 10) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      ar6_00 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x128));
      if (((int)ar6_00 < 8) && (-1 < (int)ar6_00)) {
                    
                    
        uVar5 = (vsp = ((unsigned long)(fr0_ - 432)), (*(code *)xlat((unsigned long)(((code **)&(*(undefined1 *)(unsigned)0x8c079148))[(int)ar6_00])))(vr4,vr5,vr6,vr7));
        return uVar5;
      }
      break;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c031c74(ar4,ar5,ar5,ar7_00));
      iVar1 = *((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      (vsp = ((unsigned long)(fr0_ - 432)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar1 + 0x184))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),iVar1,ar5,ar7_00));
      if (cVar12 == '\0') {
        fVar6 = F32HI(uVar8);
        fVar10 = 900.0;
        uVar8 = in_dr0;
      }
      else {
        fVar6 = 900.0;
        fVar10 = 0.97;
      }
      if (cVar11 == '\0' && fVar6 < fVar10) {
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(0x3f7851ec,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          uVar8 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar9 = 3.73997364963455e-312;
        }
        if (cVar11 == '\0') {
          fVar6 = F32LO(dVar9) * F32HI(dVar9);
        }
        else {
          fVar6 = SUB84(dVar9 * dVar9,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)(ar4 + 0x28) = fVar6;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = uVar8;
        }
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 432)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar5,ar7_00));
      ar6_00 = ar5;
      if (iVar1 == 1) {
        ar7_00 = (int *)(unsigned)0x0;
        ar6_00 = (int *)(unsigned)0xffffffff;
        uVar5 = 0;
        (vsp = ((unsigned long)(fr0_ - 432)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 432)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c03c314(ar4,uVar5,ar6_00,ar7_00));
        uVar5 = 0;
        iVar1 = *(int *)(unsigned)(ar4 + 0x2a0) + -1;
        *(int *)(unsigned)(ar4 + 0x2a0) = iVar1;
        if (iVar1 < 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 0;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      }
      break;
    case 2:
      iVar1 = *((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      (vsp = ((unsigned long)(fr0_ - 432)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar1 + 0x184))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),iVar1,ar6_00,ar7_00));
      if (cVar12 == '\0') {
        fVar6 = F32HI(uVar8);
        fVar10 = 900.0;
        uVar8 = in_dr0;
      }
      else {
        fVar6 = 900.0;
        fVar10 = 0.97;
      }
      if (cVar11 == '\0' && fVar6 < fVar10) {
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(0x3f7851ec,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          uVar8 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar9 = 3.73997364963455e-312;
        }
        if (cVar11 == '\0') {
          fVar6 = F32LO(dVar9) * F32HI(dVar9);
        }
        else {
          fVar6 = SUB84(dVar9 * dVar9,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)(ar4 + 0x28) = fVar6;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = uVar8;
        }
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 432)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6_00,ar7_00));
      if (iVar1 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        ar6_00 = (int *)(unsigned)0x134;
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      }
      break;
    case 3:
      if (*(int *)(unsigned)(ar4 + 0x1d4) == 1) {
        (vsp = ((unsigned long)(fr0_ - 432)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x6c)),piVar2,ar6_00,ar7_00));
        fVar6 = F32HI(uVar8);
        pcVar4 = ((void *)0x8c022ce8);
        (vsp = ((unsigned long)(fr0_ - 432)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x16c)),piVar2,((void *)0x8c022ce8),ar7_00));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c023cd4(ar4 + 0x200,((undefined1 *)(fr0_ - 0x16c)),pcVar4,ar7_00));
        uVar3 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 432)), Vec3_dtor(((undefined1 *)(fr0_ - 0x16c)),0xffffffff,pcVar4,ar7_00));
        if (iVar1 == 0) {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 432)), Vec3_length(ar4 + 0x200,uVar3,pcVar4,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 432)), Vec3_assign(((undefined1 *)(fr0_ - 0x6c)),uVar3,pcVar4,ar7_00));
        }
        else {
          iVar1 = ar4 + 0x54;
          piVar2 = ar5;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x17c))); *(unsigned *)((((unsigned long)(fr0_ - 432)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 432)) - 8); Vec3_sub(iVar1,ar5,iVar1,ar7_00); });
          uVar3 = (vsp = ((unsigned long)(fr0_ - 432)), Vec3_length(((undefined1 *)(fr0_ - 0x17c)),piVar2,iVar1,ar7_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x18c))); *(unsigned *)((((unsigned long)(fr0_ - 432)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 432)) - 8); Vec3_scale(uVar3,((undefined1 *)(unsigned)0x8c137998),iVar1,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 432)), Vec3_assign(((undefined1 *)(fr0_ - 0x6c)),((undefined1 *)(fr0_ - 0x18c)),iVar1,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 432)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18c)),0xffffffff,iVar1,ar7_00));
          pcVar4 = (code *)((undefined1 *)(fr0_ - 0x17c));
          (vsp = ((unsigned long)(fr0_ - 432)), Vec3_dtor(pcVar4,0xffffffff,pcVar4,ar7_00));
        }
        (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x6c)),ar4 + 0x14,pcVar4,ar7_00));
        if (cVar12 == '\0') {
          fVar10 = 90.0;
        }
        else {
          fVar6 = 90.0;
          fVar10 = 2.9147e-43;
        }
        if (cVar11 == '\0' && fVar10 < fVar6) {
          ar6_01 = ((undefined1 *)(fr0_ - 0x19c));
          (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c03263c(ar4,((undefined1 *)(fr0_ - 0x6c)),ar6_01,ar7_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1ac))); *(unsigned *)((((unsigned long)(fr0_ - 432)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 432)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x19c)),ar5,ar6_01,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 432)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x1ac)),ar6_01,ar7_00));
          pcVar4 = ((void *)0x8c022cb0);
          (vsp = ((unsigned long)(fr0_ - 432)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1ac)),0xffffffff,((void *)0x8c022cb0),ar7_00));
          (vsp = ((unsigned long)(fr0_ - 432)), Vec3_dtor(((undefined1 *)(fr0_ - 0x19c)),0xffffffff,pcVar4,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c032788(ar4,ar4 + 0x54,ar7,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          ar7_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
        }
        (vsp = ((unsigned long)(fr0_ - 432)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,((void *)0x8c022cb0),ar7_00));
      }
      ar6_00 = (int *)(unsigned)(ar4 + 0x54);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 432)), pure_virtual_stub(ar4,ar5,ar6_00,ar7_00));
      if (iVar1 == 0) {
        uVar5 = 0;
        ar6_00 = (int *)(unsigned)0x0;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      }
      break;
    case 4:
      ar6_00 = (int *)(unsigned)(ar4 + 0x54);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c07f8e0(ar4,ar5,ar6_00,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
      ar7_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      if (iVar1 == 0) {
        uVar5 = 0;
        ar6_00 = (int *)(unsigned)0x0;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      }
      break;
    case 5:
      ar6_00 = (int *)(unsigned)(ar4 + 0x54);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c07ff08(ar4,ar5,ar6_00,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
      ar7_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      if (iVar1 == 0) {
        uVar5 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      }
      break;
    case 6:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c080e80(ar4,ar5,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),ar7_00));
      ar6_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      if (iVar1 == 0) {
        uVar5 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      }
      break;
    case 7:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c08248c(ar4,ar5,ar6,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
      ar6_00 = ar6;
      ar7_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      if (iVar1 == 0) {
        uVar5 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
        ar6_00 = ar6;
      }
      break;
    case 8:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c0831c8(ar4,ar5,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
      ar6_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      ar7_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      if (iVar1 == 0) {
        uVar5 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
        ar6_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      }
      break;
    case 9:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 432)), FUN_8c080890(ar4,ar5,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),ar7_00));
      ar6_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      if (iVar1 == 0) {
        uVar5 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 432)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 432)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7_00));
  return uVar5;
}

__asm__(".globl _FUN_8c078fd0\n.set _FUN_8c078fd0, _FUN_8c078fd0_def\n");
