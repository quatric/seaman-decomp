//@unit 8c090bc4
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
undefined4 FUN_8c090bc4_def(int ar4,undefined1 *ar5,undefined1 *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c090bc4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 280; for (int i_ = 0; i_ < 280; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int iVar2;
  undefined1 *ar5_00;
  undefined1 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar3;
  uint in_fr1 = 0;
  float fVar4;
  double dVar5;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar5_00 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c08e9b0(((undefined1 *)(fr0_ - 0x70)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 280)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x80)),ar5_00,ar6_00,ar7));
  uVar3 = 1;
  iVar2 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar2 < 7) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 280)), get_field_24_026024(((undefined1 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar5_00,ar6_00,ar7));
      if (iVar2 != 1) {
LAB_8c090c8a:
        if (cVar7 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)in_fr1;
        }
        *(undefined4 *)(unsigned)(ar4 + 300) = 6;
        (vsp = ((unsigned long)(fr0_ - 280)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7));
        ar7_00 = 0;
        uVar3 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 280)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (*(undefined4 *)(fr0_ - 0x10c)) = 1;
        (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,uVar3,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c08e93c(((undefined1 *)(fr0_ - 0x70)),0xffffffff,uVar3,ar7_00));
        return (*(undefined4 *)(fr0_ - 0x10c));
      }
      ar5_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 280)), get_field_24_026024(((undefined1 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar5_00,ar6_00,ar7));
      ar6_00 = (undefined1 *)(unsigned)0x1;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c069c24(((undefined1 *)(fr0_ - 0x70)),ar5_00,1,ar7));
      if ((iVar2 == 0) ||
         (ar5_00 = ((undefined1 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)), iVar2 = (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c091854(ar4,((undefined1 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar6_00,ar7)),
         iVar2 == 1)) goto LAB_8c090c8a;
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_assign(ar4 + 0x28c,((undefined1 *)(fr0_ - 0x60)),ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x90))); *(unsigned *)((((unsigned long)(fr0_ - 280)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 280)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x50)),&(*(undefined4 *)(fr0_ - 0x28)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x90)),ar6_00,ar7));
      ar5_00 = (undefined1 *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6_00,ar7));
      if (cVar7 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x29c) = (*(undefined4 *)(fr0_ - 0x40));
        *(undefined4 *)(unsigned)(ar4 + 0x2a0) = (*(undefined4 *)(fr0_ - 0x3c));
        *(undefined4 *)(unsigned)(ar4 + 0x2a4) = (*(undefined4 *)(fr0_ - 0x38));
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = (*(undefined4 *)(fr0_ - 0x34));
        *(undefined4 *)(unsigned)(ar4 + 700) = (*(undefined4 *)(fr0_ - 0x30));
        *(undefined4 *)(unsigned)(ar4 + 0x2c0) = (*(undefined4 *)(fr0_ - 0x2c));
        *(undefined4 *)(unsigned)(ar4 + 0x2c4) = (*(undefined4 *)(fr0_ - 0x28));
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x29c) = CONCAT44((*(undefined4 *)(fr0_ - 0x3c)),(*(undefined4 *)(fr0_ - 0x40)));
        *(ulonglong *)(unsigned)(ar4 + 0x2a0) = CONCAT44((*(undefined4 *)(fr0_ - 0x38)),(*(undefined4 *)(fr0_ - 0x3c)));
        *(ulonglong *)(unsigned)(ar4 + 0x2a4) = CONCAT44((*(undefined4 *)(fr0_ - 0x34)),(*(undefined4 *)(fr0_ - 0x38)));
        *(ulonglong *)(unsigned)(ar4 + 0x2b8) = CONCAT44((*(undefined4 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
        *(ulonglong *)(unsigned)(ar4 + 700) = CONCAT44((*(undefined4 *)(fr0_ - 0x2c)),(*(undefined4 *)(fr0_ - 0x30)));
        *(ulonglong *)(unsigned)(ar4 + 0x2c0) = CONCAT44((*(undefined4 *)(fr0_ - 0x28)),(*(undefined4 *)(fr0_ - 0x2c)));
        *(ulonglong *)(unsigned)(ar4 + 0x2c4) = CONCAT44((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2c8) = (*(undefined4 *)(fr0_ - 0x6c));
      *(undefined4 *)(unsigned)(ar4 + 0x2f4) = (*(undefined4 *)(fr0_ - 0x68));
      *(undefined4 *)(unsigned)(ar4 + 0x2f8) = (*(undefined4 *)(fr0_ - 0x64));
      (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c022d04(ar4 + 0x2e0,ar5_00,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x9c)),ar5_00,ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xac))); *(unsigned *)((((unsigned long)(fr0_ - 280)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 280)) - 8); FUN_8c023484(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x9c)),ar6_00,ar7); });
      iVar2 = ar4 + 0x28c;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xbc))); *(unsigned *)((((unsigned long)(fr0_ - 280)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 280)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xac)),iVar2,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xcc)),iVar2,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xd8)),iVar2,ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe8))); *(unsigned *)((((unsigned long)(fr0_ - 280)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 280)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0xcc)),((undefined1 *)(fr0_ - 0xd8)),ar6_00,ar7); });
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x42000000,*(undefined4 *)(unsigned)(ar4 + 0x2c4));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2c4);
        dVar5 = 3.14602454102719e-312;
      }
      if (cVar6 == '\0') {
        fVar4 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      uVar1 = in_xd0;
      if (cVar7 == '\0') {
        (*(undefined8 *)(fr0_ - 0x114)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x114))+4)),fVar4);
        uVar1 = (*(undefined8 *)(fr0_ - 0x114));
      }
      (*(undefined8 *)(fr0_ - 0x114)) = uVar1;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf8))); *(unsigned *)((((unsigned long)(fr0_ - 280)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 280)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xe8)),&(*(undefined8 *)(fr0_ - 0x114)),ar6_00,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x108))); *(unsigned *)((((unsigned long)(fr0_ - 280)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 280)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0xbc)),((undefined1 *)(fr0_ - 0xf8)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_assign(((undefined1 *)(fr0_ - 0x80)),((undefined1 *)(fr0_ - 0x108)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x108)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf8)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe8)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 280)), object_dtor_delete(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0xcc)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0xbc)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0xac)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 280)), object_dtor_delete(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6_00,ar7));
      ar6_00 = ((undefined1 *)(fr0_ - 0x80));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c08e9fc(ar4,ar5,ar6_00,ar6));
      ar5_00 = ar5;
      ar7 = ar6;
      if (iVar2 == 0) {
        if (cVar7 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar4;
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      break;
    case 2:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c08eb8c(ar4,ar6,ar6_00,ar7));
      ar5_00 = ar6;
      if (iVar2 == 0) {
        if (cVar7 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2cc) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2cc) = (ulonglong)in_fr1;
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x240) = 1;
        *(undefined4 *)(unsigned)(ar4 + 0x244) = 1;
      }
      break;
    case 3:
      ar5_00 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x2c8));
      (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c0911f0(ar4,ar5_00,ar6,ar7));
      ar6_00 = ar6;
      break;
    case 4:
      ar5_00 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x2c8));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c091570(ar4,ar5_00,ar6,ar7));
      ar6_00 = ar6;
      if (iVar2 == 0) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      break;
    case 5:
      uVar3 = 0;
      break;
    case 6:
      (vsp = ((unsigned long)(fr0_ - 280)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5_00,ar6_00,ar7));
      uVar3 = 0;
    }
  }
  if (((-1 < *(int *)(unsigned)(ar4 + 0x2f4)) && (-1 < *(int *)(unsigned)(ar4 + 0x2f8))) &&
     ((iVar2 = (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c06b054(*(undefined4 *)(unsigned)(ar4 + 0x2f4),ar5_00,ar6_00,ar7)), iVar2 == 0 ||
      (iVar2 = (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c091854(ar4,((undefined1 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar6_00,ar7)), iVar2 == 1)))) {
    (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c06b1d8(*(undefined4 *)(unsigned)(ar4 + 0x2f4),*(undefined4 *)(unsigned)(ar4 + 0x2f8),ar6_00,ar7));
    uVar3 = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x240) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x2f4) = 0xffffffff;
    *(undefined4 *)(unsigned)(ar4 + 0x2f8) = 0xffffffff;
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
    *(undefined4 *)(unsigned)(ar4 + 300) = 0;
  }
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x114))+4)) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c08e93c(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_00,ar7));
  return (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x114))+4));
}

__asm__(".globl _FUN_8c090bc4\n.set _FUN_8c090bc4, _FUN_8c090bc4_def\n");
//@unit 8c0911f0
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
undefined4 FUN_8c0911f0_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0911f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 136; for (int i_ = 0; i_ < 136; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 ar5_01;
  int iVar3;
  undefined4 uVar4;
  undefined4 ar6_00;
  float in_fr1 = 0;
  float fVar5;
  float fVar7;
  double dVar6;
  undefined8 in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = ar5;
  iVar3 = ar6;
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x3c)),uVar4,iVar3,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 136)), libgcc_divide_helper_01031c(ar5,3,iVar3,ar7));
  iVar1 = iVar1 + 0x11;
  uVar4 = 10;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c034148(ar4 + 0xb0,10,iVar3,ar7));
  if ((iVar2 == 1) || (iVar2 == 2)) {
    (vsp = ((unsigned long)(fr0_ - 136)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,iVar3,ar7));
    if (cVar9 == '\0') {
      in_fr1 = *(float *)(unsigned)(ar4 + 0x2cc);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2cc);
    }
    if (cVar8 == '\0') {
      in_fr1 = in_fr1 + 1.0;
    }
    else {
      in_fr1 = SUB84(CONCAT44D(0x3f800000,in_fr1) + CONCAT44D(0x3f800000,in_fr1),0);
    }
    if (cVar9 == '\0') {
      *(float *)(unsigned)(ar4 + 0x2cc) = in_fr1;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x2cc) = in_xd0;
    }
    uVar4 = (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c03c0f0(ar4 + 0xb0,iVar1,iVar3,ar7));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 136)), deref_u32(uVar4,iVar1,iVar3,ar7));
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c0342ac(ar4 + 0xb0,uVar4,0,ar7));
    ar6_00 = 0;
    ar5_01 = (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c034548(ar4 + 0xb0,uVar4,0,ar7));
    if (cVar9 == '\0') {
      fVar5 = *(float *)(unsigned)(ar4 + 0x2cc);
      fVar7 = 319.0;
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2cc);
      fVar5 = 319.0;
      fVar7 = 4.2039e-43;
    }
    if (fVar5 == fVar7) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      (vsp = ((unsigned long)(fr0_ - 136)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7));
      ar7 = 0;
      ar6_00 = 0xffffffff;
      uVar4 = 0;
      iVar3 = ar4 + 0xb0;
      (vsp = ((unsigned long)(fr0_ - 136)), s_CAnimBody_SetAnimation_033a94(iVar3,0,0xffffffff,0));
      uVar4 = (vsp = ((unsigned long)(fr0_ - 136)), rand(iVar3,uVar4,ar6_00,ar7));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 136)), libgcc_divide_helper_01031c(uVar4,0x4c4,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 0x284) = iVar3 + 0x9c4;
    }
    (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(ar4 + 0x2d0,((undefined1 *)(fr0_ - 0x4c)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c023b4c(ar4 + 0x2d0,ar4 + 0x2e0,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c023bf4(ar4 + 0x2d0,ar4 + 0x2c4,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(ar4 + 0x2e0,((undefined1 *)(fr0_ - 0x5c)),ar6_00,ar7));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x68)),uVar4,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 136)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 136)) - 8); FUN_8c023484(ar4 + 0x2d0,((undefined1 *)(fr0_ - 0x68)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(ar4 + 0x2d0,((undefined1 *)(fr0_ - 0x78)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), object_dtor_delete(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c034650(ar4 + 0xb0,ar5_01,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), vec3_copy_8c023d8c(ar6,((undefined1 *)(fr0_ - 0x84)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), object_dtor_delete(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2a0),*(undefined4 *)(unsigned)(ar6 + 4));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar6 + 4);
      dVar6 = *(double *)(unsigned)(ar4 + 0x2a0);
    }
    if (cVar8 == '\0') {
      fVar5 = F32LO(dVar6) + F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 700),fVar5);
    }
    else {
      dVar6 = *(double *)(unsigned)(ar4 + 700);
    }
    if (cVar8 == '\0') {
      fVar5 = F32LO(dVar6) + F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D(0x43340000,fVar5);
    }
    else {
      dVar6 = 1.4180502381632e-311;
    }
    if (cVar8 == '\0') {
      fVar5 = F32LO(dVar6) + F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar9 == '\0') {
      *(float *)(unsigned)(ar6 + 4) = fVar5;
    }
    else {
      *(undefined8 *)(unsigned)(ar6 + 4) = in_xd0;
    }
    (vsp = ((unsigned long)(fr0_ - 136)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 136)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,iVar3,ar7));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,iVar3,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c0911f0\n.set _FUN_8c0911f0, _FUN_8c0911f0_def\n");
//@unit 8c091570
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
uint FUN_8c091570_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c091570";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 136; for (int i_ = 0; i_ < 136; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int ar6_00;
  undefined4 ar6_01;
  float in_fr1 = 0;
  float fVar5;
  double dVar6;
  undefined8 in_xd0 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x3c)),uVar4,ar6_00,ar7));
  uVar4 = 3;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 136)), libgcc_divide_helper_01031c(ar5,3,ar6_00,ar7));
  iVar2 = iVar2 + 0x11;
  (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c03f3ac(ar4 + 0xb0,uVar4,ar6_00,ar7));
  if (cVar9 == '\0') {
    in_fr1 = *(float *)(unsigned)(ar4 + 0x2cc);
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2cc);
  }
  if (cVar8 == '\0') {
    in_fr1 = in_fr1 + 1.0;
  }
  else {
    in_fr1 = SUB84(CONCAT44D(0x3f800000,in_fr1) + CONCAT44D(0x3f800000,in_fr1),0);
  }
  if (cVar9 == '\0') {
    *(float *)(unsigned)(ar4 + 0x2cc) = in_fr1;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x2cc) = in_xd0;
  }
  uVar4 = (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c03c0f0(ar4 + 0xb0,iVar2,ar6_00,ar7));
  uVar4 = (vsp = ((unsigned long)(fr0_ - 136)), deref_u32(uVar4,iVar2,ar6_00,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c0342ac(ar4 + 0xb0,uVar4,0,ar7));
  ar6_01 = 0;
  uVar4 = (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c034548(ar4 + 0xb0,uVar4,0,ar7));
  if (cVar9 == '\0') {
    in_fr1 = *(float *)(unsigned)(ar4 + 0x2cc);
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2cc);
  }
  if (cVar8 == '\0') {
    dVar6 = CONCAT44D((float)*(int *)(unsigned)(ar4 + 0x284),in_fr1);
  }
  else {
    dVar6 = (double)*(int *)(unsigned)(ar4 + 0x284);
  }
  bVar1 = cVar8 == '\0';
  bVar7 = SUB84(dVar6,0) < F32HI(dVar6);
  if (!bVar1 || !bVar7) {
    *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c034384(ar4 + 0xb0,uVar3,ar6_01,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(ar4 + 0x2d0,((undefined1 *)(fr0_ - 0x4c)),ar6_01,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6_01,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c023b4c(ar4 + 0x2d0,ar4 + 0x2e0,ar6_01,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c023bf4(ar4 + 0x2d0,ar4 + 0x2c4,ar6_01,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c034384(ar4 + 0xb0,uVar3,ar6_01,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(ar4 + 0x2e0,((undefined1 *)(fr0_ - 0x5c)),ar6_01,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6_01,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x68)),uVar3,ar6_01,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 136)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 136)) - 8); FUN_8c023484(ar4 + 0x2d0,((undefined1 *)(fr0_ - 0x68)),ar6_01,ar7); });
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(ar4 + 0x2d0,((undefined1 *)(fr0_ - 0x78)),ar6_01,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6_01,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), object_dtor_delete(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_01,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c034650(ar4 + 0xb0,uVar4,ar6_01,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), vec3_copy_8c023d8c(ar6,((undefined1 *)(fr0_ - 0x84)),ar6_01,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), object_dtor_delete(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_01,ar7));
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2a0),*(undefined4 *)(unsigned)(ar6 + 4));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar6 + 4);
    dVar6 = *(double *)(unsigned)(ar4 + 0x2a0);
  }
  if (cVar8 == '\0') {
    fVar5 = F32LO(dVar6) + F32HI(dVar6);
  }
  else {
    fVar5 = SUB84(dVar6 + dVar6,0);
  }
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 700),fVar5);
  }
  else {
    dVar6 = *(double *)(unsigned)(ar4 + 700);
  }
  if (cVar8 == '\0') {
    fVar5 = F32LO(dVar6) + F32HI(dVar6);
  }
  else {
    fVar5 = SUB84(dVar6 + dVar6,0);
  }
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D(0x43340000,fVar5);
  }
  else {
    dVar6 = 1.4180502381632e-311;
  }
  if (cVar8 == '\0') {
    fVar5 = F32LO(dVar6) + F32HI(dVar6);
  }
  else {
    fVar5 = SUB84(dVar6 + dVar6,0);
  }
  if (cVar9 == '\0') {
    *(float *)(unsigned)(ar6 + 4) = fVar5;
  }
  else {
    *(undefined8 *)(unsigned)(ar6 + 4) = in_xd0;
  }
  (vsp = ((unsigned long)(fr0_ - 136)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_01,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6_01,ar7));
  return (uint)(bVar1 && bVar7);
}

__asm__(".globl _FUN_8c091570\n.set _FUN_8c091570, _FUN_8c091570_def\n");
//@unit 8c091854
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
int FUN_8c091854_def(undefined4 ar4,int *ar5,float *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c091854";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  int iVar1;
  int ar4_00;
  undefined4 uVar2;
  undefined1 *ar5_00;
  int iVar3;
  int a6;
  float fVar4;
  code *pcVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  iVar3 = 0;
  a6 = 0;
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,10,ar6,ar7));
  while ((a6 < iVar1 && (iVar3 == 0))) {
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,10,a6,ar7));
    ar7 = ((undefined1 *)(fr0_ - 0x20));
    ar6 = &(*(float *)(fr0_ - 0x24));
    ar5_00 = ((undefined1 *)(fr0_ - 0x28));
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c0507a4(ar4_00,ar5_00,ar6,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x148))))(ar4_00,ar5_00,ar6,ar7));
    if ((short)uVar2 == 2) {
      if (cVar7 == '\0') {
        pcVar5 = (code *)0x42dc0000;
        fVar4 = (*(float *)(fr0_ - 0x24));
      }
      else {
        fVar4 = 110.0;
        pcVar5 = ((void *)0x8c022cb0);
      }
      if (cVar6 != '\0' || (float)(uint)pcVar5 <= fVar4) {
        iVar3 = 1;
      }
    }
    a6 = a6 + 1;
  }
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  return iVar3;
}

__asm__(".globl _FUN_8c091854\n.set _FUN_8c091854, _FUN_8c091854_def\n");
//@unit 8c091924
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
undefined4 FUN_8c091924_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c091924";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  undefined4 uVar4;
  float fVar5;
  float fVar8;
  double dVar6;
  ulonglong uVar7;
  undefined8 in_xd0 = 0;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar4 = 1;
  uVar2 = ar5;
  uVar3 = ar6;
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if ((5 < iVar1) || (iVar1 < 0)) goto switchD_8c091960_caseD_2;
                    
  switch(iVar1) {
  case 0:
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,uVar3,ar7); });
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x30)),uVar3,ar7));
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,uVar3,ar7));
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c031b68(ar4,0x8c2846d0,uVar3,ar7));
    uVar2 = ar5;
    uVar3 = ar6;
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c031bb4(ar4,ar5,ar6,ar7));
    if (cVar10 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3d4ccccd;
      *(undefined4 *)(unsigned)(ar4 + 0x24) = 0x3d4ccccd;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x28) = 0xb03d4ccccd;
      *(undefined8 *)(unsigned)(ar4 + 0x24) = 0xb03d4ccccd;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), get_field_1c_026dd8(ar4 + 0xb0,uVar2,uVar3,ar7));
    if (iVar1 != 0) {
      ar7_00 = 0;
      uVar3 = 0xffffffff;
      uVar2 = 0;
      (vsp = ((unsigned long)(fr0_ - 120)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 120)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,ar7_00));
    }
    ar7 = ar4 + 0x14;
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c092884(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 120)), vec3_copy_8c023d8c(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x3c)),ar6,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 120)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7));
    if (cVar10 == '\0') {
      fVar8 = 90.0;
      fVar5 = (*(float *)(fr0_ - 0x1c));
    }
    else {
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
      fVar5 = 90.0;
      fVar8 = -90.0;
    }
    if (cVar9 != '\0' || fVar8 <= fVar5) {
LAB_8c091a60:
      if (cVar10 == '\0') {
        fVar5 = 90.0;
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
        (*(float *)(fr0_ - 0x1c)) = 90.0;
        fVar5 = -90.0;
      }
      if (cVar9 == '\0' && (*(float *)(fr0_ - 0x1c)) < fVar5) {
        *(undefined4 *)(unsigned)(ar4 + 0x22c) = 2;
        ar7 = 0;
        ar6 = 0xffffffff;
        uVar2 = 9;
        (vsp = ((unsigned long)(fr0_ - 120)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0));
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x22c) = 1;
        ar7 = 0;
        ar6 = 0xffffffff;
        uVar2 = 8;
        (vsp = ((unsigned long)(fr0_ - 120)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 120)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7));
    }
    else {
      if (cVar10 == '\0') {
        fVar8 = -90.0;
        fVar5 = (*(float *)(fr0_ - 0x1c));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
        fVar5 = -90.0;
        fVar8 = 7.79122e-43;
      }
      if (cVar9 != '\0' || fVar5 <= fVar8) goto LAB_8c091a60;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
    uVar3 = ar6;
  case 1:
    if (*(int *)(unsigned)(ar4 + 0x22c) == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
    }
    else {
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x220));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x220);
        dVar6 = 21990236605644.8;
      }
      if (cVar9 == '\0') {
        fVar5 = F32LO(dVar6) + F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar10 == '\0') {
        *(float *)(unsigned)(ar4 + 0x220) = fVar5;
        uVar7 = CONCAT44(0x42b40000,*(undefined4 *)(unsigned)(ar4 + 0x220));
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x220) = in_xd0;
        uVar7 = 0x42f0000042b40000;
      }
      if (cVar9 != '\0' || (float)uVar7 <= (float)(uVar7 >> 0x20)) {
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c03f3ac(ar4 + 0xb0,uVar2,uVar3,ar7));
        if (*(int *)(unsigned)(ar4 + 0x22c) == 1) {
          (vsp = ((unsigned long)(fr0_ - 120)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x48)),uVar2,uVar3,ar7));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x48)),uVar3,ar7); });
          (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x58)),uVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,uVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 120)), object_dtor_delete(((undefined1 *)(fr0_ - 0x48)),0xffffffff,uVar3,ar7));
        }
        else if (*(int *)(unsigned)(ar4 + 0x22c) == 2) {
          (vsp = ((unsigned long)(fr0_ - 120)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x64)),uVar2,uVar3,ar7));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x64)),uVar3,ar7); });
          (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x74)),uVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,uVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 120)), object_dtor_delete(((undefined1 *)(fr0_ - 0x64)),0xffffffff,uVar3,ar7));
        }
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,uVar3,ar7));
        if (iVar1 == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
          *(undefined4 *)(unsigned)(ar4 + 0x22c) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
          if (cVar10 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x220) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x220) = uVar7 & 0xffffffff;
          }
          ar7 = 0;
          uVar3 = 0xffffffff;
          uVar2 = 0;
          (vsp = ((unsigned long)(fr0_ - 120)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 120)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,ar7));
        }
      }
    }
    break;
  case 3:
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c03f3ac(ar4 + 0xb0,uVar2,uVar3,ar7));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c031764(ar4,ar6,ar5,ar7));
    uVar3 = ar5;
  }
switchD_8c091960_caseD_2:
  (vsp = ((unsigned long)(fr0_ - 120)), object_dtor_delete(((undefined1 *)(fr0_ - 0x20)),0xffffffff,uVar3,ar7));
  return uVar4;
}

__asm__(".globl _FUN_8c091924\n.set _FUN_8c091924, _FUN_8c091924_def\n");
//@unit 8c091d40
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
uint FUN_8c091d40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c091d40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(unsigned)(0x12c + ar4);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7));
    uVar4 = 0;
    uVar3 = 0xffffffff;
    uVar2 = 5;
    (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0))
    ;
    (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,uVar4));
    *(int *)(unsigned)(0x12c + ar4) = *(int *)(unsigned)(0x12c + ar4) + 1;
  }
  else if (iVar1 != 1) {
    uVar2 = ar5;
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 1;
      }
      return 0;
    }
    goto LAB_8c091dca;
  }
  *(int *)(unsigned)(0x12c + ar4) = *(int *)(unsigned)(0x12c + ar4) + 1;
  uVar2 = 0x21;
  ar7 = ar6;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c033474(ar4,0x21,ar5,ar6));
  ar6 = ar5;
LAB_8c091dca:
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c026858))))
                    (ar4 + 0xb0,uVar2,ar6,ar7));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030eb8(ar4 + 0x1fc,uVar2,ar6,ar7));
    uVar4 = 0;
    uVar3 = 0xffffffff;
    uVar2 = 0;
    (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0))
    ;
    (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,uVar4));
    *(int *)(unsigned)(0x12c + ar4) = *(int *)(unsigned)(0x12c + ar4) + 1;
  }
  return (uint)(iVar1 != 1);
}

__asm__(".globl _FUN_8c091d40\n.set _FUN_8c091d40, _FUN_8c091d40_def\n");
//@unit 8c091e60
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
undefined4 FUN_8c091e60_def(ulonglong *ar4,ulonglong *ar5,int *ar6,ulonglong *ar7)

{
  ring[rp++ & 255] = "FUN_8c091e60";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 288; for (int i_ = 0; i_ < 288; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *ar5_00;
  ulonglong *ar5_01;
  int *ar6_00;
  ulonglong *ar7_00;
  uint uVar4;
  float fVar5;
  ulonglong in_dr0 = 0;
  float fVar9;
  ulonglong uVar6;
  double dVar7;
  ulonglong uVar8;
  ulonglong in_xd0 = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  uVar4 = (uint)in_dr0;
  (*(undefined4 *)(fr0_ - 0x100)) = 1;
  ar5_01 = ar4 + 0xd;
  iVar1 = (int)*ar5_01;
  if ((4 < iVar1) || (iVar1 < 0)) goto switchD_8c091ea8_default;
                    
  switch(iVar1) {
  case 0:
    while( true ) {
      uVar4 = (uint)in_dr0;
      uVar3 = 0x8c2846d0;
      (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c031b68(ar4,0x8c2846d0,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c03c314(ar4,uVar3,ar6_00,ar7_00));
      ar7_00 = (ulonglong *)(unsigned)0x0;
      ar6_00 = (int *)(unsigned)0xffffffff;
      uVar3 = 1;
      (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,1,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,uVar3,ar6_00,ar7_00));
      uVar8 = (ulonglong)uVar4;
      if (cVar11 == '\0') {
        *(int *)(unsigned)((int)ar4 + 0x224) = 0;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x224) = uVar8;
      }
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(ar4 + 0x46,(int *)(unsigned)((int)ar4 + 0x14),ar6_00,ar7_00));
      uVar8 = uVar8 & 0xffffffff;
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 0x44) = 0;
      }
      else {
        ar4[0x44] = uVar8;
      }
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign((int *)(unsigned)((int)ar4 + 0x54),ar5,ar6_00,ar7_00));
      ar5_01 = ar5;
      (vsp = ((unsigned long)(fr0_ - 288)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*ar7 + 0x128))))(ar7,ar5,ar6_00,ar7_00));
      iVar1 = (int)(uVar8 >> 0x20);
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 0xb) = iVar1;
        dVar7 = CONCAT44D(0x3a83126f,*(int *)(unsigned)((int)ar4 + 0x54));
      }
      else {
        ar4[0xb] = uVar8;
        in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x54);
        dVar7 = 6.577018791706446e+182;
        (*(int *)(fr0_ - 0x11c)) = iVar1;
      }
      if (cVar10 == '\0') {
        fVar5 = F32LO(dVar7) + F32HI(dVar7);
      }
      else {
        fVar5 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar11 == '\0') {
        *(float *)(unsigned)((int)ar4 + 0x54) = fVar5;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x54) = in_xd0;
      }
      if (ar6 != (int *)(unsigned)0x0) {
        if (ar6 == (int *)(unsigned)0x3) {
          if (cVar11 == '\0') {
            uVar8 = CONCAT44(0x3e4ccccd,fVar5);
            *(int *)(unsigned)(ar4 + 0x14) = 0x3e4ccccd;
          }
          else {
            uVar8 = 0xb03e4ccccd;
            ar4[0x14] = 0xb03e4ccccd;
          }
          ar5_01 = ar4 + 5;
          if (cVar11 == '\0') {
            *(int *)(unsigned)ar5_01 = 0;
          }
          else {
            *ar5_01 = uVar8 & 0xffffffff;
          }
          *(int *)(unsigned)(ar4 + 0xd) = (int)ar4[0xd] + 1;
        }
        goto switchD_8c091ea8_caseD_1;
      }
      if (cVar11 == '\0') {
        in_dr0 = CONCAT44(0x3ba3d70a,fVar5);
        *(int *)(unsigned)(ar4 + 0x14) = 0x3ba3d70a;
      }
      else {
        in_dr0 = 0x61e3d41b3ba3d70a;
        ar4[0x14] = 0x61e3d41b3ba3d70a;
      }
      in_dr0 = in_dr0 & 0xffffffff;
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 5) = 0;
      }
      else {
        ar4[5] = in_dr0;
      }
      ar5_01 = (ulonglong *)(unsigned)0x2;
      *(int *)(unsigned)(ar4 + 0xd) = 2;
switchD_8c091ea8_caseD_2:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,ar5_01,ar6_00,ar7_00));
      if (iVar1 == 1) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 288)), rand_range(ar4,0,100,ar7_00));
        if (iVar1 < 0x32) {
          ar7_00 = (ulonglong *)(unsigned)0x0;
          ar6_00 = (int *)(unsigned)0xffffffff;
          ar5_01 = (ulonglong *)(unsigned)0x1;
          (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,1,0xffffffff,0));
        }
        else {
          ar7_00 = (ulonglong *)(unsigned)0x0;
          ar6_00 = (int *)(unsigned)0xffffffff;
          ar5_01 = (ulonglong *)(unsigned)0x7;
          (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,7,0xffffffff,0));
        }
        (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,ar5_01,ar6_00,ar7_00));
      }
      fVar5 = (float)in_dr0;
      if (ar6 != (int *)(unsigned)0x3) break;
      *(int *)(unsigned)(ar4 + 0xd) = 0;
      *(int *)(unsigned)(ar4 + 0x45) = 0;
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 3) = 0;
      }
      else {
        ar4[3] = in_dr0 & 0xffffffff;
      }
      in_dr0 = in_dr0 & 0xffffffff;
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 0x44) = 0;
      }
      else {
        ar4[0x44] = in_dr0;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x70)),ar5_01,ar6_00,ar7_00));
    ar7_00 = (ulonglong *)(unsigned)((int)ar4 + 0x14);
    ar6_00 = (int *)(unsigned)((int)ar4 + 0x54);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); FUN_8c031eb0(ar4,ar5,ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign((int *)(unsigned)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x80)),ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6_00,ar7_00));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 288)), object_dtor_delete(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_00,ar7_00));
    if (cVar11 == '\0') {
      fVar5 = *(float *)(unsigned)((int)ar4 + 0x224);
    }
    else {
      in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x224);
    }
    if (cVar10 != '\0' || fVar5 <= 1.0) {
      if (cVar11 == '\0') {
        dVar7 = CONCAT44D(0x3c23d70a,*(int *)(unsigned)((int)ar4 + 0x224));
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x224);
        dVar7 = 4.1640967825903e-312;
      }
      if (cVar10 == '\0') {
        fVar5 = F32LO(dVar7) + F32HI(dVar7);
      }
      else {
        fVar5 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar11 == '\0') {
        *(float *)(unsigned)((int)ar4 + 0x224) = fVar5;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x224) = in_xd0;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x8c)),uVar3,ar6_00,ar7_00));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); FUN_8c023484((int *)(unsigned)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x8c)),ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign((int *)(unsigned)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x9c)),ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6_00,ar7_00));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 288)), object_dtor_delete(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6_00,ar7_00));
    if ((ar6 != (int *)(unsigned)0x1) && (ar6 != (int *)(unsigned)0x2)) {
      (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c0324ac(ar4,uVar3,ar6_00,ar7_00));
      break;
    }
    *(int *)(unsigned)(ar4 + 0xd) = 4;
    *(int *)(unsigned)(ar4 + 0x45) = 0;
    uVar8 = (ulonglong)(uint)fVar5;
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar4 + 0x44) = 0;
    }
    else {
      ar4[0x44] = uVar8;
    }
    ar5_01 = (ulonglong *)(unsigned)((int)ar4 + 0x14);
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(ar4 + 0x46,ar5_01,ar6_00,ar7_00));
    uVar4 = (uint)uVar8;
    *(int *)(unsigned)((int)ar4 + 0x244) = 0;
  case 4:
    uVar8 = (ulonglong)uVar4;
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar4 + 0x14) = 0;
    }
    else {
      ar4[0x14] = uVar8;
    }
    (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c073c9c(ar4,ar5_01,ar6_00,ar7_00));
    uVar6 = uVar8 & 0xffffffff;
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar4 + 5) = 0;
    }
    else {
      ar4[5] = uVar6;
    }
    if ((ar6 == (int *)(unsigned)0x1) || (ar6 == (int *)(unsigned)0x2)) {
      ar6_00 = (int *)(unsigned)0xb0;
      (vsp = ((unsigned long)(fr0_ - 288)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0x16,ar4 + 0x16,0xb0,ar7_00));
      fVar5 = (float)uVar6;
      if (cVar11 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 3);
      }
      else {
        in_xd0 = ar4[3];
      }
      uVar8 = (ulonglong)(uint)fVar5;
      if (fVar5 != 0.0) {
        piVar2 = (int *)(unsigned)((int)ar4 + 0x14);
        (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),piVar2,ar6_00,ar7_00));
        uVar8 = uVar8 & 0xffffffff;
        if (cVar11 == '\0') {
          (*(undefined8 *)(fr0_ - 0x20)) = (*(undefined8 *)(fr0_ - 0x20)) & 0xffffffff00000000;
          uVar8 = (*(undefined8 *)(fr0_ - 0x20));
        }
        (*(undefined8 *)(fr0_ - 0x20)) = uVar8;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 288)), Vec3_length(((undefined1 *)(fr0_ - 0x24)),piVar2,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),uVar3,ar6_00,ar7_00));
        if (cVar11 == '\0') {
          dVar7 = CONCAT44D(0x3d4ccccd,(int)ar4[0x44]);
        }
        else {
          in_xd0 = ar4[0x44];
          dVar7 = 1.18882576146403e-311;
        }
        if (cVar10 == '\0') {
          fVar5 = F32LO(dVar7) + F32HI(dVar7);
        }
        else {
          fVar5 = SUB84(dVar7 + dVar7,0);
        }
        if (cVar11 == '\0') {
          *(float *)(unsigned)(ar4 + 0x44) = fVar5;
          fVar5 = *(float *)(unsigned)(ar4 + 0x44);
        }
        else {
          ar4[0x44] = in_xd0;
        }
        if (cVar10 != '\0' || 1.0 <= fVar5) {
          if (cVar11 == '\0') {
            *(int *)(unsigned)(ar4 + 0x44) = 0x3f800000;
          }
          else {
            ar4[0x44] = CONCAT44(0x3f800000,fVar5);
          }
        }
        if (cVar11 == '\0') {
          fVar5 = *(float *)(unsigned)(ar4 + 0x44);
        }
        if (cVar10 == '\0') {
          dVar7 = CONCAT44D(1.0 - fVar5,fVar5);
        }
        else {
          dVar7 = CONCAT44D(0x3f800000,fVar5) - CONCAT44D(0x3f800000,fVar5);
        }
        iVar1 = (int)(D2U(dVar7) >> 0x20);
        (*(int *)(fr0_ - 0x118)) = iVar1;
        if (cVar11 != '\0') {
          (*(int *)(fr0_ - 0x118)) = SUB84(dVar7,0);
          (*(int *)(fr0_ - 0x114)) = iVar1;
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xdc))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_scale(ar4 + 0x46,&(*(int *)(fr0_ - 0x118)),ar6_00,ar7_00); });
        if (cVar11 == '\0') {
          (*(int *)(fr0_ - 0x11c)) = (int)ar4[0x44];
          uVar8 = CONCAT44((*(int *)(fr0_ - 0x11c)),SUB84(dVar7,0));
        }
        else {
          uVar8 = ar4[0x44];
          (*(int *)(fr0_ - 0x11c)) = (int)uVar8;
          (*(int *)(fr0_ - 0x118)) = (int)(uVar8 >> 0x20);
        }
        fVar5 = (float)uVar8;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xec))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x24)),&(*(int *)(fr0_ - 0x11c)),ar6_00,ar7_00); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xfc))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xdc)),((undefined1 *)(fr0_ - 0xec)),ar6_00,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign((int *)(unsigned)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0xfc)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xfc)),0xffffffff,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xec)),0xffffffff,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xdc)),0xffffffff,ar6_00,ar7_00));
        if (cVar11 == '\0') {
          fVar5 = *(float *)(unsigned)(ar4 + 0x44);
        }
        if (fVar5 == 1.0) {
          if (cVar11 == '\0') {
            *(int *)(unsigned)(ar4 + 0x44) = 0;
          }
          else {
            ar4[0x44] = (ulonglong)(uint)fVar5;
          }
        }
      }
    }
    else {
      ar6_00 = (int *)(unsigned)0x0;
      *(int *)(unsigned)(ar4 + 0xd) = 0;
      *(int *)(unsigned)(ar4 + 0x45) = 0;
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 3) = 0;
      }
      else {
        ar4[3] = uVar8 & 0xffffffff;
      }
      ar7_00 = ar4 + 0x44;
      if (cVar11 == '\0') {
        *(int *)(unsigned)ar7_00 = 0;
      }
      else {
        *ar7_00 = uVar8 & 0xffffffff;
      }
    }
    break;
  case 1:
switchD_8c091ea8_caseD_1:
    iVar1 = (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,ar5_01,ar6_00,ar7_00));
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 288)), rand_range(ar4,0,100,ar7_00));
      if (iVar1 < 0x32) {
        ar7_00 = (ulonglong *)(unsigned)0x0;
        ar6_00 = (int *)(unsigned)0xffffffff;
        ar5_01 = (ulonglong *)(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,1,0xffffffff,0));
      }
      else {
        ar7_00 = (ulonglong *)(unsigned)0x0;
        ar6_00 = (int *)(unsigned)0xffffffff;
        ar5_01 = (ulonglong *)(unsigned)0x7;
        (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,7,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,ar5_01,ar6_00,ar7_00));
    }
    if (ar6 == (int *)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c073c9c(ar4,ar5_01,ar6_00,ar7_00));
      *(int *)(unsigned)(ar4 + 0xd) = 0;
      break;
    }
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x3c4ccccd,(int)ar4[0x44]);
    }
    else {
      in_xd0 = ar4[0x44];
      dVar7 = 0.007750001682143193;
    }
    if (cVar10 == '\0') {
      fVar5 = F32LO(dVar7) + F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar11 == '\0') {
      *(float *)(unsigned)(ar4 + 0x44) = fVar5;
      fVar5 = *(float *)(unsigned)(ar4 + 0x44);
      fVar9 = 0.999;
    }
    else {
      ar4[0x44] = in_xd0;
      in_xd0 = ar4[0x44];
      fVar5 = 0.999;
      fVar9 = 3.97969e-43;
    }
    if (cVar10 != '\0' || fVar9 <= fVar5) {
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 0x44) = 0x3f7fbe77;
      }
      else {
        ar4[0x44] = 0x11c3f7fbe77;
      }
    }
    if (cVar11 == '\0') {
      uVar8 = CONCAT44(0x3f7fbe77,(int)ar4[0x44]);
    }
    else {
      in_xd0 = ar4[0x44];
      uVar8 = 0x11c3f7fbe77;
    }
    if ((float)uVar8 != (float)(uVar8 >> 0x20)) {
      if (cVar11 == '\0') {
        uVar8 = (ulonglong)(uint)ar4[0x44];
      }
      else {
        in_xd0 = ar4[0x44];
      }
      fVar5 = (float)uVar8;
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(1.0 - fVar5,fVar5);
      }
      else {
        dVar7 = CONCAT44D(0x3f800000,fVar5) - CONCAT44D(0x3f800000,fVar5);
      }
      uVar3 = (undefined4)(D2U(dVar7) >> 0x20);
      (*(undefined4 *)(fr0_ - 0x108)) = uVar3;
      if (cVar11 != '\0') {
        (*(undefined4 *)(fr0_ - 0x108)) = SUB84(dVar7,0);
        (*(undefined4 *)(fr0_ - 0x104)) = uVar3;
      }
      ar5_00 = &(*(undefined4 *)(fr0_ - 0x108));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_scale(ar4 + 0x46,ar5_00,ar6_00,ar7_00); });
      uVar3 = SUB84(dVar7,0);
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x44)),ar5_00,ar6_00,ar7_00));
      if (cVar11 == '\0') {
        (*(int *)(fr0_ - 0x10c)) = (int)ar4[0x44];
        uVar8 = CONCAT44((*(int *)(fr0_ - 0x10c)),uVar3);
      }
      else {
        uVar8 = ar4[0x44];
        (*(int *)(fr0_ - 0x10c)) = (int)uVar8;
        (*(undefined4 *)(fr0_ - 0x108)) = (undefined4)(uVar8 >> 0x20);
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x44)),&(*(int *)(fr0_ - 0x10c)),ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign((int *)(unsigned)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x64)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7_00));
      ar5_01 = (ulonglong *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7_00));
    }
    if ((ar6 != (int *)(unsigned)0x1) && (ar6 != (int *)(unsigned)0x2)) {
      (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c0324ac(ar4,ar5_01,ar6_00,ar7_00));
      break;
    }
    *(int *)(unsigned)(ar4 + 0xd) = 3;
    uVar8 = uVar8 & 0xffffffff;
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar4 + 0x44) = 0;
    }
    else {
      ar4[0x44] = uVar8;
    }
    ar5_01 = (ulonglong *)(unsigned)((int)ar4 + 0x14);
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(ar4 + 0x46,ar5_01,ar6_00,ar7_00));
    uVar4 = (uint)uVar8;
    *(int *)(unsigned)((int)ar4 + 0x244) = 0;
    if ((ar6 == (int *)(unsigned)0x1) && ((*(char *)(fr0_ + 0x00000000)) == '\x01')) {
      ar7_00 = (ulonglong *)(unsigned)0xa;
      ar6_00 = (int *)(unsigned)0x1;
      (vsp = ((unsigned long)(fr0_ - 288)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*ar7 + 0xd0))))(ar7,ar5,1,10));
      ar5_01 = ar5;
    }
  case 3:
    uVar8 = (ulonglong)uVar4;
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar4 + 0x14) = 0;
    }
    else {
      ar4[0x14] = uVar8;
    }
    (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c073c9c(ar4,ar5_01,ar6_00,ar7_00));
    uVar6 = uVar8 & 0xffffffff;
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar4 + 5) = 0;
    }
    else {
      ar4[5] = uVar6;
    }
    if ((ar6 == (int *)(unsigned)0x1) || (ar6 == (int *)(unsigned)0x2)) {
      (vsp = ((unsigned long)(fr0_ - 288)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0x16,ar5_01,ar6_00,ar7_00));
      uVar4 = (uint)uVar6;
      piVar2 = (int *)(unsigned)((int)ar4 + 0x14);
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),piVar2,ar6_00,ar7_00));
      uVar8 = (ulonglong)uVar4;
      if (cVar11 == '\0') {
        (*(undefined8 *)(fr0_ - 0x20)) = (ulonglong)(*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x20))+4)) << 0x20;
        uVar8 = (*(undefined8 *)(fr0_ - 0x20));
      }
      (*(undefined8 *)(fr0_ - 0x20)) = uVar8;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 288)), Vec3_length(((undefined1 *)(fr0_ - 0x24)),piVar2,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),uVar3,ar6_00,ar7_00));
      ar6_00 = (int *)(unsigned)0x220;
      if (cVar11 == '\0') {
        dVar7 = CONCAT44D(0x3e4ccccd,(int)ar4[0x44]);
      }
      else {
        in_xd0 = ar4[0x44];
        dVar7 = 3.48523717287845e-312;
      }
      if (cVar10 == '\0') {
        fVar5 = F32LO(dVar7) + F32HI(dVar7);
      }
      else {
        fVar5 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar11 == '\0') {
        *(float *)(unsigned)(ar4 + 0x44) = fVar5;
        fVar5 = *(float *)(unsigned)(ar4 + 0x44);
      }
      else {
        ar4[0x44] = in_xd0;
      }
      if (cVar10 != '\0' || 1.0 <= fVar5) {
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x44) = 0x3f800000;
        }
        else {
          ar4[0x44] = CONCAT44(0x3f800000,fVar5);
        }
      }
      if (cVar11 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 0x44);
      }
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(1.0 - fVar5,fVar5);
      }
      else {
        dVar7 = CONCAT44D(0x3f800000,fVar5) - CONCAT44D(0x3f800000,fVar5);
      }
      iVar1 = (int)(D2U(dVar7) >> 0x20);
      (*(int *)(fr0_ - 0x110)) = iVar1;
      if (cVar11 != '\0') {
        (*(int *)(fr0_ - 0x110)) = SUB84(dVar7,0);
        (*(int *)(fr0_ - 0x10c)) = iVar1;
      }
      ar7_00 = ar4;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xac))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_scale(ar4 + 0x46,&(*(int *)(fr0_ - 0x110)),0x220,ar4); });
      if (cVar11 == '\0') {
        (*(int *)(fr0_ - 0x114)) = (int)ar4[0x44];
        uVar8 = CONCAT44((*(int *)(fr0_ - 0x114)),SUB84(dVar7,0));
      }
      else {
        uVar8 = ar4[0x44];
        (*(int *)(fr0_ - 0x114)) = (int)uVar8;
        (*(int *)(fr0_ - 0x110)) = (int)(uVar8 >> 0x20);
      }
      fVar5 = (float)uVar8;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xbc))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x24)),&(*(int *)(fr0_ - 0x114)),ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xcc))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xac)),((undefined1 *)(fr0_ - 0xbc)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign((int *)(unsigned)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0xcc)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xcc)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xbc)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xac)),0xffffffff,ar6_00,ar7_00));
      if (cVar11 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 0x44);
      }
      if (fVar5 == 1.0) {
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x44) = 0;
        }
        else {
          ar4[0x44] = (ulonglong)(uint)fVar5;
        }
        *(int *)(unsigned)(ar4 + 0x45) = 1;
        ar6_00 = (int *)(unsigned)0x40;
        *(int *)(unsigned)(ar4 + 8) = 5;
      }
    }
    else {
      *(int *)(unsigned)(ar4 + 0xd) = 0;
      *(int *)(unsigned)(ar4 + 0x45) = 0;
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 3) = 0;
      }
      else {
        ar4[3] = uVar8 & 0xffffffff;
      }
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 0x44) = 0;
      }
      else {
        ar4[0x44] = uVar8 & 0xffffffff;
      }
    }
    break;
  case 2:
    goto switchD_8c091ea8_caseD_2;
  }
switchD_8c091ea8_default:
  (*(undefined4 *)(fr0_ - 0x104)) = 0;
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7_00));
  return (*(undefined4 *)(fr0_ - 0x104));
}

__asm__(".globl _FUN_8c091e60\n.set _FUN_8c091e60, _FUN_8c091e60_def\n");
//@unit 8c092884
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
undefined4 FUN_8c092884_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c092884";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float fVar3;
  double in_dr0 = 0;
  double dVar4;
  undefined8 in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_set_zero(&(*(float *)(fr0_ - 0x14)),ar5,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_sub(ar6,ar5,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_normalize(((undefined1 *)(fr0_ - 0x34)),ar5,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x44)),ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7_00));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); FUN_8c0230f0(ar7,uVar2,ar6_00,ar7_00); });
  ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x68)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x24)),uVar2,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x54)),(int)&(*(undefined8 *)(fr0_ - 0x68)) + 4,ar6_00,ar7_00));
  (*(undefined4 *)(fr0_ - 0x10)) = SUB84(in_dr0,0);
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  dVar4 = in_dr0;
  if (cVar6 == '\0') {
    (*(undefined8 *)(fr0_ - 0x68)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x68))+4)),uVar2);
    dVar4 = (*(undefined8 *)(fr0_ - 0x68));
    (*(undefined4 *)(fr0_ - 0x10)) = uVar2;
    uVar2 = (*(undefined4 *)(fr0_ - 0xc));
  }
  (*(undefined4 *)(fr0_ - 0xc)) = uVar2;
  (*(undefined8 *)(fr0_ - 0x68)) = dVar4;
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x68)) + 4,0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7_00));
  ar5_00 = ((undefined1 *)(fr0_ - 0x24));
  (*(int *)(fr0_ - 0x6c)) = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023334(ar7,ar5_00,ar6_00,ar7_00));
  if ((*(int *)(fr0_ - 0x6c)) == 4) {
    if (cVar6 == '\0') {
      in_dr0 = CONCAT44D(0xbf800000,(*(undefined4 *)(fr0_ - 0x10)));
    }
    else {
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0xc)),(*(undefined4 *)(fr0_ - 0x10)));
      in_dr0 = -7.941325842067545e-251;
    }
    if (cVar5 == '\0') {
      fVar3 = F32HI(in_dr0);
      in_dr0 = CONCAT44D(fVar3,F32LO(in_dr0) * fVar3);
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
    }
    if (cVar6 == '\0') {
      (*(undefined4 *)(fr0_ - 0x10)) = SUB84(in_dr0,0);
    }
    else {
      (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)in_xd0;
      (*(undefined4 *)(fr0_ - 0xc)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
  }
  (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0231c8(((undefined1 *)(fr0_ - 0x24)),ar5_00,ar6_00,ar7_00));
  iVar1 = (int)((ulonglong)in_dr0 >> 0x20);
  (*(int *)(fr0_ - 0x70)) = iVar1;
  if (cVar6 != '\0') {
    (*(int *)(fr0_ - 0x70)) = SUB84(in_dr0,0);
    (*(int *)(fr0_ - 0x6c)) = iVar1;
  }
  (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0231c8(ar7,ar5_00,ar6_00,ar7_00));
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar6 == '\0') {
    in_dr0 = CONCAT44D(uVar2,(*(int *)(fr0_ - 0x70)));
  }
  else {
    in_xd0 = CONCAT44((*(int *)(fr0_ - 0x6c)),uVar2);
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(in_dr0) - F32HI(in_dr0);
  }
  else {
    fVar3 = SUB84(in_dr0 - in_dr0,0);
  }
  (*(float *)(fr0_ - 0x14)) = fVar3;
  if (cVar6 != '\0') {
    (*(float *)(fr0_ - 0x14)) = (float)in_xd0;
    (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  if (cVar5 == '\0' && fVar3 < 0.0) {
    if (cVar6 == '\0') {
      dVar4 = CONCAT44D(0xbf800000,(*(float *)(fr0_ - 0x14)));
    }
    else {
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(float *)(fr0_ - 0x14)));
      dVar4 = -7.941325842067545e-251;
    }
    if (cVar5 == '\0') {
      (*(float *)(fr0_ - 0x14)) = F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      (*(float *)(fr0_ - 0x14)) = SUB84(dVar4 * dVar4,0);
    }
    if (cVar6 != '\0') {
      (*(float *)(fr0_ - 0x14)) = (float)in_xd0;
      (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0232e8(ar7,((undefined1 *)(fr0_ - 0x24)),ar6_00,ar7_00));
  if (iVar1 == 1) {
    if (cVar6 == '\0') {
      dVar4 = CONCAT44D(0xbf800000,(*(float *)(fr0_ - 0x14)));
    }
    else {
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(float *)(fr0_ - 0x14)));
      dVar4 = -7.941325842067545e-251;
    }
    if (cVar5 == '\0') {
      (*(float *)(fr0_ - 0x14)) = F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      (*(float *)(fr0_ - 0x14)) = SUB84(dVar4 * dVar4,0);
    }
    if (cVar6 != '\0') {
      (*(float *)(fr0_ - 0x14)) = (float)in_xd0;
      (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
  }
  (vsp = ((unsigned long)(fr0_ - 116)), vec3_copy_8c02b5fc((*(undefined4 *)(fr0_ + 0x00000000)),&(*(float *)(fr0_ - 0x14)),ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 116)), object_dtor_delete(&(*(float *)(fr0_ - 0x14)),0xffffffff,ar6_00,ar7_00));
  return 0;
}

__asm__(".globl _FUN_8c092884\n.set _FUN_8c092884, _FUN_8c092884_def\n");
//@unit 8c092a28
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
undefined4 FUN_8c092a28_def(code *ar4,undefined4 ar5,code *ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c092a28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 296; for (int i_ = 0; i_ < 296; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  code *ar6_00;
  code *ar7_00;
  undefined4 uVar4;
  float fVar5;
  double in_dr0 = 0;
  undefined8 uVar6;
  double dVar7;
  undefined8 in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 296)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 296)) - 8); FUN_8c03f480(ar5,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 296)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x48)),ar6_00,ar7_00));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 296)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 296)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x38)),uVar2,ar6_00,ar7_00));
  iVar1 = *(int *)(unsigned)(ar4 + 0x124);
  if ((iVar1 < 0xc) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      uVar4 = 0;
      break;
    default:
      goto switchD_8c092a98_caseD_1;
    case 2:
    case 7:
      uVar4 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c09344c(ar4,((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
      ar6_00 = ar6;
      ar7_00 = ar7;
      break;
    case 4:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), get_field_24_026024(ar7,0xb,ar6_00,ar7_00));
      if (iVar1 != 0) {
        ar6_00 = (code *)((undefined1 *)(fr0_ - 0x28));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c093e80(ar4,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar6_00,ar6));
        ar7_00 = ar6;
        break;
      }
      iVar1 = *(int *)(unsigned)(ar4 + 300);
      if (iVar1 == 0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
        if (cVar9 == '\0') {
          *(int *)(unsigned)(ar4 + 0x2e0) = *(int *)(unsigned)(iVar1 + 4);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2e0) = *(undefined8 *)(unsigned)(iVar1 + 4);
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
        if (cVar9 == '\0') {
          *(int *)(unsigned)(ar4 + 0x2e4) = *(int *)(unsigned)(iVar1 + 8);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2e4) = *(undefined8 *)(unsigned)(iVar1 + 8);
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
        if (cVar9 == '\0') {
          *(int *)(unsigned)(ar4 + 0x2e8) = *(int *)(unsigned)(iVar1 + 0xc);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2e8) = *(undefined8 *)(unsigned)(iVar1 + 0xc);
        }
        ar7_00 = (code *)0x5;
        *(int *)(unsigned)(ar4 + 0x40) = 5;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        ar6_00 = ar4;
LAB_8c092c4e:
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
        if (cVar9 == '\0') {
          (*(undefined4 *)(fr0_ - 0x38)) = *(undefined4 *)(unsigned)(iVar1 + 4);
        }
        else {
          uVar6 = *(undefined8 *)(unsigned)(iVar1 + 4);
          (*(undefined4 *)(fr0_ - 0x38)) = (undefined4)uVar6;
          (*(float *)(fr0_ - 0x34)) = F32HI(uVar6);
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
        if (cVar9 == '\0') {
          dVar7 = CONCAT44D(0x42a00000,*(undefined4 *)(unsigned)(iVar1 + 8));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(iVar1 + 8);
          dVar7 = 5.0983124752531e-312;
        }
        if (cVar8 == '\0') {
          (*(float *)(fr0_ - 0x34)) = F32LO(dVar7) + F32HI(dVar7);
        }
        else {
          (*(float *)(fr0_ - 0x34)) = SUB84(dVar7 + dVar7,0);
        }
        if (cVar9 != '\0') {
          (*(float *)(fr0_ - 0x34)) = (float)in_xd0;
          (*(float *)(fr0_ - 0x30)) = F32HI(in_xd0);
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
        if (cVar9 == '\0') {
          dVar7 = CONCAT44D(0x41f00000,*(undefined4 *)(unsigned)(iVar1 + 0xc));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(iVar1 + 0xc);
          dVar7 = 262144.06439208984;
        }
        if (cVar8 == '\0') {
          fVar5 = F32LO(dVar7) + F32HI(dVar7);
        }
        else {
          fVar5 = SUB84(dVar7 + dVar7,0);
        }
        if (cVar9 == '\0') {
          dVar7 = CONCAT44D(0x41100000,fVar5);
        }
        else {
          dVar7 = 5.18306279054705e-312;
        }
        if (cVar8 == '\0') {
          (*(float *)(fr0_ - 0x30)) = F32LO(dVar7) + F32HI(dVar7);
        }
        else {
          (*(float *)(fr0_ - 0x30)) = SUB84(dVar7 + dVar7,0);
        }
        if (cVar9 != '\0') {
          (*(float *)(fr0_ - 0x30)) = (float)in_xd0;
          (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
        }
        if (0 < *(int *)(unsigned)(ar4 + 0x260)) {
          (vsp = ((unsigned long)(fr0_ - 296)), Vec3_assign(ar4 + 0x264,&(*(undefined4 *)(fr0_ - 0x38)),ar6_00,ar7_00));
        }
        pcVar3 = ((void *)0x8c022ce8);
        (vsp = ((unsigned long)(fr0_ - 296)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x68)),((void *)0x8c022ce8),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 296)), Vec3_normalize(((undefined1 *)(fr0_ - 0x68)),pcVar3,ar6_00,ar7_00));
        ar7_00 = (code *)((undefined1 *)(fr0_ - 0x78));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c095548(ar4,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),&(*(undefined4 *)(fr0_ - 0x38)),ar7_00));
        (vsp = ((unsigned long)(fr0_ - 296)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,((void *)0x8c022cb0),ar7_00));
        ar6_00 = ((void *)0x8c022cb0);
        (vsp = ((unsigned long)(fr0_ - 296)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,((void *)0x8c022cb0),ar7_00));
        if (iVar1 == 0) {
          *(int *)(unsigned)(ar4 + 0x40) = 5;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
      }
      else {
        if (iVar1 == 1) goto LAB_8c092c4e;
        if (iVar1 == 2) {
          if (cVar9 == '\0') {
            *(int *)(unsigned)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
          }
          iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
          if (cVar9 == '\0') {
            (*(undefined4 *)(fr0_ - 0x38)) = *(undefined4 *)(unsigned)(iVar1 + 4);
          }
          else {
            uVar6 = *(undefined8 *)(unsigned)(iVar1 + 4);
            (*(undefined4 *)(fr0_ - 0x38)) = (undefined4)uVar6;
            (*(float *)(fr0_ - 0x34)) = F32HI(uVar6);
          }
          iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
          if (cVar9 == '\0') {
            dVar7 = CONCAT44D(0x42a00000,*(undefined4 *)(unsigned)(iVar1 + 8));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(iVar1 + 8);
            dVar7 = 5.0983124752531e-312;
          }
          if (cVar8 == '\0') {
            (*(float *)(fr0_ - 0x34)) = F32LO(dVar7) + F32HI(dVar7);
          }
          else {
            (*(float *)(fr0_ - 0x34)) = SUB84(dVar7 + dVar7,0);
          }
          if (cVar9 != '\0') {
            (*(float *)(fr0_ - 0x34)) = (float)in_xd0;
            (*(float *)(fr0_ - 0x30)) = F32HI(in_xd0);
          }
          iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
          if (cVar9 == '\0') {
            dVar7 = CONCAT44D(0x41f00000,*(undefined4 *)(unsigned)(iVar1 + 0xc));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(iVar1 + 0xc);
            dVar7 = 262144.06439208984;
          }
          if (cVar8 == '\0') {
            fVar5 = F32LO(dVar7) + F32HI(dVar7);
          }
          else {
            fVar5 = SUB84(dVar7 + dVar7,0);
          }
          if (cVar9 == '\0') {
            dVar7 = CONCAT44D(0x41100000,fVar5);
          }
          else {
            dVar7 = 5.18306279054705e-312;
          }
          if (cVar8 == '\0') {
            (*(float *)(fr0_ - 0x30)) = F32LO(dVar7) + F32HI(dVar7);
          }
          else {
            (*(float *)(fr0_ - 0x30)) = SUB84(dVar7 + dVar7,0);
          }
          if (cVar9 != '\0') {
            (*(float *)(fr0_ - 0x30)) = (float)in_xd0;
            (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
          }
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c031de8(ar4,1,ar6_00,ar7_00));
          uVar4 = 0;
        }
        else {
          *(int *)(unsigned)(ar4 + 300) = 0;
        }
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(*(int *)(unsigned)(ar4 + 0x2e0),*(undefined4 *)(unsigned)(iVar1 + 4));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(iVar1 + 4);
        dVar7 = *(double *)(unsigned)(ar4 + 0x2e0);
      }
      if (cVar8 == '\0') {
        fVar5 = F32LO(dVar7) - F32HI(dVar7);
      }
      else {
        fVar5 = SUB84(dVar7 - dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(unsigned)(ar4 + 0x2d0) = fVar5;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2d0) = in_xd0;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(*(int *)(unsigned)(ar4 + 0x2e4),*(undefined4 *)(unsigned)(iVar1 + 8));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(iVar1 + 8);
        dVar7 = *(double *)(unsigned)(ar4 + 0x2e4);
      }
      if (cVar8 == '\0') {
        fVar5 = F32LO(dVar7) - F32HI(dVar7);
      }
      else {
        fVar5 = SUB84(dVar7 - dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(unsigned)(ar4 + 0x2d4) = fVar5;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2d4) = in_xd0;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(*(int *)(unsigned)(ar4 + 0x2e8),*(undefined4 *)(unsigned)(iVar1 + 0xc));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(iVar1 + 0xc);
        dVar7 = *(double *)(unsigned)(ar4 + 0x2e8);
      }
      if (cVar8 == '\0') {
        fVar5 = F32LO(dVar7) - F32HI(dVar7);
      }
      else {
        fVar5 = SUB84(dVar7 - dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(unsigned)(ar4 + 0x2d8) = fVar5;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2d8) = in_xd0;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2e0) = *(int *)(unsigned)(iVar1 + 4);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2e0) = *(undefined8 *)(unsigned)(iVar1 + 4);
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2e4) = *(int *)(unsigned)(iVar1 + 8);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2e4) = *(undefined8 *)(unsigned)(iVar1 + 8);
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2e8) = *(int *)(unsigned)(iVar1 + 0xc);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2e8) = *(undefined8 *)(unsigned)(iVar1 + 0xc);
      }
      break;
    case 6:
      ar6_00 = (code *)((undefined1 *)(fr0_ - 0x28));
      uVar4 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c093e80(ar4,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar6_00,ar6));
      ar7_00 = ar6;
      break;
    case 8:
      (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c0988a4(ar4,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar7,ar7_00));
      ar6_00 = ar7;
      break;
    case 9:
      *(int *)(unsigned)(ar4 + 0x214) = 0;
      if (*(int *)(unsigned)(ar4 + 300) == 0) {
        ar7_00 = (code *)0x0;
        ar6_00 = (code *)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 296)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0));
        pcVar3 = ar4 + 0xb0;
        (vsp = ((unsigned long)(fr0_ - 296)), s_CAnimBody_SetFrame_033e6e(pcVar3,pcVar3,ar6_00,ar7_00));
        ({ unsigned long ri0_ = (unsigned long)(((code *)(unsigned long)*(unsigned *)(fr0_ - 0x124))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 296)); FUN_8c032204(ar4 + 0xb0,pcVar3,ar6_00,ar7_00); });
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        (*(unsigned *)(fr0_ - 0x124) = (unsigned)(unsigned long)(ar4));
      }
      uVar2 = 5;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c031de8(ar4,5,ar6_00,ar7_00));
      if (iVar1 == 0) {
        *(int *)(unsigned)(ar4 + 300) = 0;
        ({ unsigned long ri0_ = (unsigned long)(((code *)(unsigned long)*(unsigned *)(fr0_ - 0x124))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 296)); FUN_8c032204(ar4 + 0xb0,uVar2,ar6_00,ar7_00); });
        uVar4 = 0;
        if ((-1 < *(int *)(unsigned)(ar4 + 0x2f4)) && (-1 < *(int *)(unsigned)(ar4 + 0x2f8))) {
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c06b1d8(*(int *)(unsigned)(ar4 + 0x2f4),*(int *)(unsigned)(ar4 + 0x2f8),ar6_00,ar7_00));
          ar7_00 = (code *)0x2f4;
          *(int *)(unsigned)(ar4 + 0x2f4) = -1;
          *(int *)(unsigned)(ar4 + 0x2f8) = -1;
        }
      }
      else {
        ({ unsigned long ri0_ = (unsigned long)(((code *)(unsigned long)*(unsigned *)(fr0_ - 0x124))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 296)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6_00,ar7_00); });
        if (cVar9 == '\0') {
          *(int *)(unsigned)(ar4 + 0x2fc) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x2fc) = in_dr0;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x28)),((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar7_00));
      ar6_00 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      break;
    case 10:
      *(int *)(unsigned)(ar4 + 0x214) = 0;
      *(int *)(unsigned)(ar4 + 0x25c) = -1;
      iVar1 = *(int *)(unsigned)(ar4 + 300);
      if (iVar1 == 0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c093aec(ar4,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar6,ar7));
        ar6_00 = ar6;
        ar7_00 = ar7;
        if (iVar1 == 0) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          ar7_00 = ar7;
        }
      }
      else if (iVar1 == 1) {
        ar6_00 = (code *)((undefined1 *)(fr0_ - 0x28));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c0967d8(ar4,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar6_00,ar6));
        ar7_00 = ar6;
        if (iVar1 == 0) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
      }
      else if (iVar1 == 2) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c034148(ar4 + 0xb0,6,ar6_00,ar7_00));
        if (0 < iVar1) {
          uVar2 = 300;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 296)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 296)) - 8); FUN_8c0230f0(ar4 + 0x14,300,ar6_00,ar7_00); });
          uVar2 = (vsp = ((unsigned long)(fr0_ - 296)), Vec3_length(((undefined1 *)(fr0_ - 0x88)),uVar2,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 296)), Vec3_assign(ar4 + 0x14,uVar2,ar6_00,ar7_00));
          uVar2 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 296)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c031748(ar4,uVar2,ar6_00,ar7_00));
          *(int *)(unsigned)(ar4 + 0x284) = 0;
          ar6_00 = ((void *)0x8c032204);
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c032204(ar4 + 0xb0,0,((void *)0x8c032204),ar7_00));
        }
      }
      else if (iVar1 == 3) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c031de8(ar4,6,ar6_00,ar7_00));
        if (iVar1 == 0) {
          iVar1 = *(int *)(unsigned)(ar4 + 0x284);
          *(int *)(unsigned)(ar4 + 0x284) = iVar1 + 1;
          if (1 < iVar1 + 1) {
            *(int *)(unsigned)(ar4 + 0x284) = 0;
            *(int *)(unsigned)(ar4 + 300) = 0;
            uVar4 = 0;
            *(int *)(unsigned)(ar4 + 0x248) = 0;
            *(int *)(unsigned)(ar4 + 0x40) = 5;
          }
        }
        else {
          ({ unsigned long ri0_ = (unsigned long)(((code *)(unsigned long)*(unsigned *)(fr0_ - 0x124))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 296)); CAnimBody_GetCurFrame(ar4 + 0xb0,((void *)0x8c026da8),ar6_00,ar7_00); });
          if (cVar8 == '\0') {
            iVar1 = (int)F32HI(in_dr0);
          }
          else {
            iVar1 = (int)in_dr0;
          }
          if (iVar1 == 0x38) {
            *(int *)(unsigned)(ar4 + 0x25c) = *(int *)(unsigned)(ar4 + 0x284);
          }
        }
      }
      break;
    case 0xb:
      (vsp = ((unsigned long)(fr0_ - 296)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x58)),0xb,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 296)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 296)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7_00));
      ar6_00 = (code *)((undefined1 *)(fr0_ - 0x28));
      uVar4 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c097fcc(ar4,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar6_00,ar6));
      ar7_00 = ar6;
    }
  }
  else {
switchD_8c092a98_caseD_1:
    uVar4 = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 296)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 296)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7_00));
  return uVar4;
}

__asm__(".globl _FUN_8c092a28\n.set _FUN_8c092a28, _FUN_8c092a28_def\n");
//@unit 8c09344c
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
int FUN_8c09344c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09344c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 268; for (int i_ = 0; i_ < 268; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  
  iVar6 = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 0x248);
  if (iVar1 == 0) {
    iVar1 = ar4;
    iVar6 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c093aec(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),ar6,ar7));
    if (iVar6 == 0) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 268)), rand(iVar1,(*(undefined4 *)(fr0_ + 0x00000000)),ar6,ar7));
      uVar2 = 100;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 268)), libgcc_divide_helper_01031c(uVar3,100,ar6,ar7));
      if (iVar1 < 0xf) {
        *(undefined4 *)(unsigned)(ar4 + 0x248) = 2;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 268)), rand(uVar3,uVar2,ar6,ar7));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 268)), libgcc_divide_helper_01031c(uVar3,10,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x2f0) = uVar3;
      }
    }
  }
  else if (iVar1 == 2) {
    if (*(char *)(unsigned)(ar4 + 0x280) == '\x01') {
      *(undefined4 *)(unsigned)(ar4 + 0x288) = 1;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf8))); *(unsigned *)((((unsigned long)(fr0_ - 268)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 268)) - 8); FUN_8c0230f0(ar4 + 0x80,ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 268)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xf8)),ar6,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf8)),0xffffffff,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x248) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      (vsp = ((unsigned long)(fr0_ - 268)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
    }
    else {
      uVar3 = ar5;
      uVar2 = ar6;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_24_026024(ar7,ar5,ar6,ar7));
      if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 == 2)) {
        *(undefined4 *)(unsigned)(ar4 + 0x2f0) = 10;
      }
      iVar1 = *(int *)(unsigned)(ar4 + 0x2f0);
      if (iVar1 == 0) {
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c032ab0(ar4,uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c032ab0(ar4,uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x38)),uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x48)),uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_normalize(((undefined1 *)(fr0_ - 0x48)),uVar3,uVar2,ar7));
        puVar5 = ((undefined1 *)(fr0_ - 0x58));
        puVar4 = ((undefined1 *)(fr0_ - 0x38));
        iVar6 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c095548(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,puVar4,puVar5));
      }
      else if (iVar1 == 1) {
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c032ab0(ar4,uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c032ab0(ar4,uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x68)),uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x78)),uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_normalize(((undefined1 *)(fr0_ - 0x78)),uVar3,uVar2,ar7));
        puVar5 = ((undefined1 *)(fr0_ - 0x88));
        puVar4 = ((undefined1 *)(fr0_ - 0x68));
        iVar6 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c095548(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,puVar4,puVar5));
      }
      else if (iVar1 == 2) {
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c032ab0(ar4,uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c032ab0(ar4,uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x98)),uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xa8)),uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_normalize(((undefined1 *)(fr0_ - 0xa8)),uVar3,uVar2,ar7));
        puVar5 = ((undefined1 *)(fr0_ - 0xb8));
        puVar4 = ((undefined1 *)(fr0_ - 0x98));
        iVar6 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c095548(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,puVar4,puVar5));
      }
      else if (iVar1 == 3) {
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c032ab0(ar4,uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c032ab0(ar4,uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xc8)),uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xd8)),uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_normalize(((undefined1 *)(fr0_ - 0xd8)),uVar3,uVar2,ar7));
        puVar5 = ((undefined1 *)(fr0_ - 0xe8));
        puVar4 = ((undefined1 *)(fr0_ - 0xc8));
        iVar6 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c095548(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe8)),0xffffffff,puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,puVar4,puVar5));
      }
      else {
        iVar6 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c094514(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),ar5,ar6));
      }
    }
  }
  else if (iVar1 == 3) {
    if (*(char *)(unsigned)(ar4 + 0x280) == '\x01') {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x108))); *(unsigned *)((((unsigned long)(fr0_ - 268)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 268)) - 8); FUN_8c0230f0(ar4 + 0x80,ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 268)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x108)),ar6,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0x108)),0xffffffff,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x248) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      (vsp = ((unsigned long)(fr0_ - 268)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c097888(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),ar5,ar6));
    }
  }
  return iVar6;
}

__asm__(".globl _FUN_8c09344c\n.set _FUN_8c09344c, _FUN_8c09344c_def\n");
//@unit 8c093aec
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
undefined4 FUN_8c093aec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c093aec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 164; for (int i_ = 0; i_ < 164; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double in_dr0 = 0;
  double dVar6;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  double in_xd0 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar2 = ar6;
  uVar4 = ar7;
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  ar5_00 = ar4 + 0x24c;
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),ar5_00,uVar2,uVar4));
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c093b3c:
    if (*(char *)(unsigned)(ar4 + 0x280) == '\x01') {
      uVar4 = 0;
      uVar2 = 0xffffffff;
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 164)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 164)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar2,uVar4));
      *(undefined1 *)(unsigned)(ar4 + 0x280) = 0;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c034148(ar4 + 0xb0,0,uVar2,uVar4));
      if ((iVar1 != 1) && (iVar1 != 2)) {
        (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,uVar2,uVar4));
        return 1;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c022fc0(ar5,((undefined1 *)(fr0_ - 0x2c)),uVar2,uVar4));
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),(int)((ulonglong)in_dr0 >> 0x20));
      in_dr0 = in_xd0;
    }
    else {
      dVar6 = *(double *)(unsigned)(ar4 + 0x24);
    }
    if (cVar8 == '\0') {
      fVar5 = F32LO(dVar6) / F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar9 == '\0') {
      *(float *)(unsigned)(ar4 + 0x30) = fVar5;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x30) = in_dr0;
      fVar5 = 2.0;
    }
    uVar2 = ar6;
    uVar4 = ar7;
    (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c032518(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 164)), Vec3_assign(ar4 + 0x24c,((undefined1 *)(fr0_ - 0x4c)),uVar2,uVar4));
    (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,uVar2,uVar4));
    if (cVar9 == '\0') {
      in_dr0 = CONCAT44D(0x40a00000,fVar5);
    }
    else {
      in_dr0 = -8.360315941118363e-251;
    }
    uVar2 = ar7;
    uVar4 = (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c032788(ar4,ar4 + 0x24c,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 164)), Vec3_assign(ar4 + 0x24c,uVar4,ar6,uVar2));
    (vsp = ((unsigned long)(fr0_ - 164)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),ar4 + 0x24c,ar6,uVar2));
    uVar4 = 0x8c2846e8;
    (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c031b68(ar4,0x8c2846e8,ar6,uVar2));
    (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c031c64(ar4,uVar4,ar6,uVar2));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
    ar5_00 = 0x24;
    uVar2 = ar5;
    (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c033474(ar4,0x24,ar5,ar7));
    uVar4 = ar7;
  }
  else if (iVar1 != 3) {
    if (iVar1 != 5) goto LAB_8c093cfc;
    goto LAB_8c093b3c;
  }
  (vsp = ((unsigned long)(fr0_ - 164)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_00,uVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c0231c8(ar4 + 0x14,ar5_00,uVar2,uVar4));
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D(0xc1700000,SUB84(in_dr0,0));
    in_fr15 = F32HI(in_dr0);
  }
  else {
    dVar6 = 16777228.08984375;
  }
  if (cVar8 == '\0') {
    bVar7 = in_fr15 < F32HI(dVar6);
  }
  else {
    bVar7 = CONCAT44D(in_fr14,in_fr15) < dVar6;
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      in_dr0 = CONCAT44D(0xc1700000,SUB84(dVar6,0));
    }
    else {
      in_dr0 = 16777228.08984375;
    }
    if (cVar8 == '\0') {
      in_dr0 = CONCAT44D(F32HI(in_dr0) - in_fr15,SUB84(in_dr0,0));
    }
    else {
      in_dr0 = in_dr0 - CONCAT44D(in_fr14,in_fr15);
    }
  }
  else {
    if (cVar9 == '\0') {
      in_dr0 = CONCAT44D(0x41700000,SUB84(dVar6,0));
    }
    else {
      in_dr0 = -7.950726470801028e-251;
    }
    if (cVar8 == '\0') {
      bVar7 = F32HI(in_dr0) < in_fr15;
    }
    else {
      bVar7 = in_dr0 < CONCAT44D(in_fr14,in_fr15);
    }
    if (bVar7) {
      if (cVar9 == '\0') {
        in_dr0 = CONCAT44D(0x41700000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = -7.950726470801028e-251;
      }
      if (cVar8 == '\0') {
        in_dr0 = CONCAT44D(F32HI(in_dr0) - in_fr15,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 - CONCAT44D(in_fr14,in_fr15);
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c02374c(ar4 + 0x14,ar5_00,uVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x5c)),uVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,uVar2,uVar4));
LAB_8c093cfc:
  uVar3 = ar5;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 164)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 164)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x2c)),ar5,uVar2,uVar4); });
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_normalize(((undefined1 *)(fr0_ - 0x6c)),uVar3,uVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x7c)),uVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,uVar2,uVar4));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,uVar2,uVar4));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x8c))); *(unsigned *)((((unsigned long)(fr0_ - 164)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 164)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar3,uVar2,uVar4); });
  ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0xa0)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 164)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 164)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x3c)),uVar3,uVar2,uVar4); });
  (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x8c)),(int)&(*(undefined8 *)(fr0_ - 0xa0)) + 4,uVar2,uVar4));
  dVar6 = in_dr0;
  if (cVar9 == '\0') {
    (*(undefined8 *)(fr0_ - 0xa0)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xa0))+4)),(int)((ulonglong)in_dr0 >> 0x20));
    dVar6 = (*(undefined8 *)(fr0_ - 0xa0));
  }
  (*(undefined8 *)(fr0_ - 0xa0)) = dVar6;
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0xa0)) + 4,0xffffffff,uVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,uVar2,uVar4));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c097ba4(ar4,((undefined1 *)(fr0_ - 0x2c)),ar5,uVar4));
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar5,uVar4));
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar5,uVar4));
  return uVar2;
}

__asm__(".globl _FUN_8c093aec\n.set _FUN_8c093aec, _FUN_8c093aec_def\n");
//@unit 8c093e80
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
int FUN_8c093e80_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c093e80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 412; for (int i_ = 0; i_ < 412; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 ar5_00;
  undefined1 *ar5_01;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  double in_dr0 = 0;
  double dVar7;
  float fVar9;
  double dVar8;
  undefined4 in_fr3 = 0;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  double in_xd0 = 0;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar4 = ar5;
  iVar3 = ar6;
  iVar5 = ar7;
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x44)),uVar4,iVar3,iVar5));
  uVar4 = ar5;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); Vec3_sub(ar6,ar5,iVar3,iVar5); });
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x64)),uVar4,iVar3,iVar5));
  iVar2 = (int)((ulonglong)in_dr0 >> 0x20);
  if (cVar12 == '\0') {
    in_dr0 = CONCAT44D(iVar2,in_fr3);
    dVar7 = CONCAT44D(0x41200000,*(undefined4 *)(unsigned)(ar4 + 0x48));
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x48);
    dVar7 = -7.932637925129825e-251;
    (*(int *)(fr0_ - 0x170)) = iVar2;
  }
  if (cVar11 == '\0') {
    fVar9 = F32HI(dVar7);
    fVar6 = F32LO(dVar7) * fVar9;
    dVar7 = CONCAT44D(fVar9,fVar6);
    bVar10 = fVar6 < F32HI(in_dr0);
  }
  else {
    dVar7 = dVar7 * dVar7;
    bVar10 = dVar7 < in_dr0;
  }
  (*(int *)(fr0_ - 0x168)) = 1 - (uint)bVar10;
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,iVar3,iVar5));
  uVar4 = SUB84(in_dr0,0);
  if ((*(int *)(fr0_ - 0x168)) == 0) {
    iVar2 = ar4 + 0x24c;
    (vsp = ((unsigned long)(fr0_ - 412)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),iVar2,iVar3,iVar5));
  }
  else {
    iVar2 = ar6;
    (vsp = ((unsigned long)(fr0_ - 412)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar6,iVar3,iVar5));
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c093f74:
    iVar2 = (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c034148(ar4 + 0xb0,0,iVar3,iVar5));
    if ((iVar2 != 1) && (iVar2 != 2)) {
      (*(undefined4 *)(fr0_ - 0x160)) = 1;
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,iVar3,iVar5));
      return (*(undefined4 *)(fr0_ - 0x160));
    }
    ar5_00 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); Vec3_sub(ar6,ar5,iVar3,iVar5); });
    (vsp = ((unsigned long)(fr0_ - 412)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x74)),ar5_00,iVar3,iVar5));
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),uVar4);
      dVar8 = CONCAT44D(0x41200000,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x48);
      dVar8 = -7.932637925129825e-251;
    }
    if (cVar11 == '\0') {
      fVar9 = F32HI(dVar8);
      fVar6 = F32LO(dVar8) * fVar9;
      dVar8 = CONCAT44D(fVar9,fVar6);
      bVar10 = fVar6 < F32HI(dVar7);
    }
    else {
      dVar8 = dVar8 * dVar8;
      bVar10 = dVar8 < dVar7;
    }
    (*(int *)(fr0_ - 0x16c)) = 1 - (uint)bVar10;
    (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,iVar3,iVar5));
    if ((*(int *)(fr0_ - 0x16c)) == 0) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); Vec3_sub(ar6,ar5,iVar3,iVar5); });
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_assign(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x84)),iVar3,iVar5));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x44)),uVar4,iVar3,iVar5));
      uVar4 = (undefined4)(D2U(dVar8) >> 0x20);
      (*(undefined4 *)(fr0_ - 0x158)) = uVar4;
      if (cVar12 != '\0') {
        (*(undefined4 *)(fr0_ - 0x184)) = SUB84(dVar8,0);
        (*(undefined4 *)(fr0_ - 0x158)) = (*(undefined4 *)(fr0_ - 0x184));
        ((undefined4 *)(fr0_ - 0x154))[0] = uVar4;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x44)),ar4 + 0x48,iVar3,iVar5); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x94)),((undefined1 *)(unsigned)0x8c13a768),iVar3,iVar5); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0xa4)),&(*(undefined4 *)(fr0_ - 0x158)),iVar3,iVar5); });
      iVar3 = ar7;
      iVar5 = (*(int *)(fr0_ + 0x00000000));
      (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c032518(ar4,ar5,ar7,(*(int *)(fr0_ + 0x00000000))));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd4))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0xc4)),ar5,iVar3,iVar5); });
      if (cVar12 == '\0') {
        dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x158)),0x43480000);
      }
      else {
        dVar7 = CONCAT44D(((undefined4 *)(fr0_ - 0x154))[0],(*(undefined4 *)(fr0_ - 0x158)));
        in_xd0 = 1548112654106624.0;
      }
      if (cVar11 == '\0') {
        fVar6 = F32LO(dVar7) / F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      if (cVar11 == '\0') {
        dVar7 = CONCAT44D(1.0 - fVar6,fVar6);
      }
      else {
        dVar7 = CONCAT44D(0x3f800000,fVar6) - CONCAT44D(0x3f800000,fVar6);
      }
      iVar2 = (int)(D2U(dVar7) >> 0x20);
      (*(int *)(fr0_ - 0x170)) = iVar2;
      if (cVar12 != '\0') {
        (*(int *)(fr0_ - 0x170)) = SUB84(dVar7,0);
        (*(int *)(fr0_ - 0x16c)) = iVar2;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe4))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xd4)),&(*(int *)(fr0_ - 0x170)),iVar3,iVar5); });
      uVar4 = SUB84(dVar7,0);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf4))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xb4)),((undefined1 *)(fr0_ - 0xe4)),iVar3,iVar5); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x104))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0xf4)),((undefined1 *)(unsigned)0x8c13a76c),iVar3,iVar5); });
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_assign(ar4 + 0x24c,((undefined1 *)(fr0_ - 0x104)),iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x104)),0xffffffff,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd4)),0xffffffff,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc4)),0xffffffff,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c023aa0(ar4 + 0x24c,ar5,iVar3,iVar5));
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(0x40000000,uVar4);
      }
      else {
        dVar8 = 13510801029595136.0;
      }
      (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c032788(ar4,ar4 + 0x24c,ar7,(*(int *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x24c,ar7,(*(int *)(fr0_ + 0x00000000))));
    }
    else {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 412)), Vec3_assign(ar4 + 0x24c,ar6,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),uVar4,iVar3,iVar5));
      ar7 = iVar3;
      (*(int *)(fr0_ + 0x00000000)) = iVar5;
    }
    ar5_01 = ((undefined1 *)(fr0_ - 0x34));
    (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c022fc0(ar5,ar5_01,ar7,(*(int *)(fr0_ + 0x00000000))));
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),(int)(D2U(dVar8) >> 0x20));
      dVar8 = in_xd0;
    }
    else {
      dVar7 = *(double *)(unsigned)(ar4 + 0x24);
    }
    if (cVar11 == '\0') {
      fVar6 = F32HI(dVar7);
      dVar7 = CONCAT44D(fVar6,F32LO(dVar7) / fVar6);
    }
    else {
      dVar7 = dVar7 / dVar7;
    }
    if (cVar12 == '\0') {
      *(int *)(unsigned)(ar4 + 0x30) = SUB84(dVar7,0);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x30) = dVar8;
    }
    (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c031c64(ar4,ar5_01,ar7,(*(int *)(fr0_ + 0x00000000))));
    iVar2 = -0x73d7b918;
    (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c031b68(ar4,0x8c2846e8,ar7,(*(int *)(fr0_ + 0x00000000))));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
    iVar3 = ar7;
    iVar5 = (*(int *)(fr0_ + 0x00000000));
  }
  else if (iVar1 != 3) {
    if (iVar1 != 5) goto LAB_8c094390;
    goto LAB_8c093f74;
  }
  (vsp = ((unsigned long)(fr0_ - 412)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar2,iVar3,iVar5));
  (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c0231c8(ar4 + 0x14,iVar2,iVar3,iVar5));
  if (cVar12 == '\0') {
    dVar8 = CONCAT44D(0xc1700000,SUB84(dVar7,0));
    in_fr15 = F32HI(dVar7);
  }
  else {
    dVar8 = -4.808686934874603e+231;
  }
  if (cVar11 == '\0') {
    bVar10 = in_fr15 < F32HI(dVar8);
  }
  else {
    bVar10 = CONCAT44D(in_fr14,in_fr15) < dVar8;
  }
  if (bVar10) {
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(0xc1700000,SUB84(dVar8,0));
    }
    else {
      dVar7 = -4.808686934874603e+231;
    }
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(F32HI(dVar7) - in_fr15,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - CONCAT44D(in_fr14,in_fr15);
    }
  }
  else {
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(0x41700000,SUB84(dVar8,0));
    }
    else {
      dVar7 = 2.97621825186588e-312;
    }
    if (cVar11 == '\0') {
      bVar10 = F32HI(dVar7) < in_fr15;
    }
    else {
      bVar10 = dVar7 < CONCAT44D(in_fr14,in_fr15);
    }
    if (bVar10) {
      if (cVar12 == '\0') {
        dVar7 = CONCAT44D(0x41700000,SUB84(dVar7,0));
      }
      else {
        dVar7 = 2.97621825186588e-312;
      }
      if (cVar11 == '\0') {
        dVar7 = CONCAT44D(F32HI(dVar7) - in_fr15,SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 - CONCAT44D(in_fr14,in_fr15);
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c02374c(ar4 + 0x14,iVar2,iVar3,iVar5));
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x114)),iVar3,iVar5));
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x114)),0xffffffff,iVar3,iVar5));
LAB_8c094390:
  uVar4 = ar5;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x124))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x34)),ar5,iVar3,iVar5); });
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_normalize(((undefined1 *)(fr0_ - 0x124)),uVar4,iVar3,iVar5));
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x134)),iVar3,iVar5));
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x134)),0xffffffff,iVar3,iVar5));
  uVar4 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x124)),0xffffffff,iVar3,iVar5));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x144))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,iVar3,iVar5); });
  ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x154))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x54)),uVar4,iVar3,iVar5); });
  (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x144)),((undefined4 *)(fr0_ - 0x154)),iVar3,iVar5));
  uVar4 = (undefined4)(D2U(dVar7) >> 0x20);
  (*(undefined4 *)(fr0_ - 0x15c)) = uVar4;
  if (cVar12 != '\0') {
    (*(undefined4 *)(fr0_ - 0x15c)) = SUB84(dVar7,0);
    (*(undefined4 *)(fr0_ - 0x158)) = uVar4;
  }
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined4 *)(fr0_ - 0x154)),0xffffffff,iVar3,iVar5));
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x144)),0xffffffff,iVar3,iVar5));
  uVar4 = ar5;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c097ba4(ar4,((undefined1 *)(fr0_ - 0x34)),ar5,iVar5));
  if (iVar3 == 0) {
    (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c022fc0(ar5,ar6,uVar4,iVar5));
    (*(float *)(fr0_ - 0x194)) = F32HI(dVar7);
    if (cVar12 == '\0') {
      (*(float *)(fr0_ - 0x198)) = (*(float *)(fr0_ - 0x194));
      (*(float *)(fr0_ - 0x194)) = 0.0;
    }
    else {
      (*(float *)(fr0_ - 0x198)) = SUB84(dVar7,0);
    }
    (vsp = ((unsigned long)(fr0_ - 412)), Vec3_length_sq(ar4 + 4,ar6,uVar4,iVar5));
    fVar6 = F32HI(dVar7);
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(fVar6,*(undefined4 *)(unsigned)(ar4 + 0x48));
      fVar6 = (*(float *)(fr0_ - 0x198));
    }
    (*(float *)(fr0_ - 0x198)) = fVar6;
    if (cVar11 == '\0') {
      fVar6 = F32LO(dVar7) + F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 + dVar7,0);
    }
    fVar9 = (*(float *)(fr0_ - 0x198));
    if (cVar12 == '\0') {
      fVar9 = fVar6;
      (*(float *)(fr0_ - 0x194)) = (*(float *)(fr0_ - 0x198));
    }
    if (cVar11 == '\0' && fVar9 < (*(float *)(fr0_ - 0x194))) {
      iVar3 = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    }
  }
  (*(int *)(fr0_ - 0x164)) = iVar3;
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,uVar4,iVar5));
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,uVar4,iVar5));
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,uVar4,iVar5));
  return (*(int *)(fr0_ - 0x164));
}

__asm__(".globl _FUN_8c093e80\n.set _FUN_8c093e80, _FUN_8c093e80_def\n");
//@unit 8c094514
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
int FUN_8c094514_def(int ar4,code *ar5,code *ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c094514";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 704; for (int i_ = 0; i_ < 704; i_++) z_[i_] = 0; }
  double dVar1;
  int iVar2;
  undefined4 ar5_00;
  code *pcVar3;
  int *ar5_01;
  undefined1 *puVar4;
  undefined4 uVar5;
  code *ar6_00;
  code *pcVar6;
  int ar5_02;
  float fVar7;
  double in_dr0 = 0;
  float fVar10;
  double dVar8;
  double dVar9;
  undefined4 in_fr3 = 0;
  double in_xd0 = 0;
  bool bVar11;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  pcVar3 = ar5;
  pcVar6 = ar7;
  (vsp = ((unsigned long)(fr0_ - 704)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 704)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x44)),pcVar3,ar6,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 704)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x54)),pcVar3,ar6,pcVar6));
  ar5_02 = 1;
  ar5_01 = (int *)(unsigned)(ar4 + 0x40);
  iVar2 = *ar5_01;
  if (iVar2 == 0) {
LAB_8c09458c:
    iVar2 = (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c034148(ar4 + 0xb0,0,ar6,pcVar6));
    if ((iVar2 != 1) && (iVar2 != 2)) {
      (*(undefined4 *)(fr0_ - 0x2ac)) = 1;
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,((void *)0x8c022cb0),pcVar6));
      return (*(undefined4 *)(fr0_ - 0x2ac));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
    if (cVar13 == '\0') {
      uVar5 = SUB84(in_dr0,0);
      pcVar3 = (code *)0x40000000;
    }
    else {
      uVar5 = 0x40000000;
      pcVar3 = ((void *)0x8c031ce8);
    }
    ar6_00 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
    (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c031ce8(ar4,ar7,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(ar4 + 0x264,((undefined1 *)(fr0_ - 0x64)),ar6_00,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,pcVar6));
    ar6 = ar7;
    pcVar6 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c032788(ar4,ar4 + 0x264,ar7,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(ar4 + 0x264,ar5_00,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar4 + 0x264,ar6,pcVar6));
    if (cVar13 == '\0') {
      dVar8 = CONCAT44D(0x41100000,pcVar3);
    }
    else {
      in_xd0 = CONCAT44D(pcVar3,uVar5);
      dVar8 = 1.46047241024329e-311;
    }
    if (cVar12 == '\0') {
      fVar7 = F32HI(dVar8);
      dVar8 = CONCAT44D(fVar7,F32LO(dVar8) + fVar7);
    }
    else {
      dVar8 = dVar8 + dVar8;
    }
    if (cVar13 == '\0') {
      *(int *)(unsigned)(ar4 + 0x268) = SUB84(dVar8,0);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x268) = in_xd0;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_sub(ar4 + 0x264,ar5,ar6,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x74)),ar6,pcVar6));
    uVar5 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x54)),uVar5,ar6,pcVar6));
    fVar7 = F32HI(dVar8);
    if (cVar13 == '\0') {
      (*(undefined8 *)(fr0_ - 0x2a8)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2a8))+4)),fVar7);
      pcVar3 = (code *)0x43960000;
      dVar8 = in_xd0;
    }
    else {
      fVar7 = 300.0;
      pcVar3 = (code *)0x2a0;
      (*(undefined8 *)(fr0_ - 0x2a8)) = dVar8;
    }
    if (cVar12 == '\0' && (float)(uint)pcVar3 < fVar7) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x54)),ar4 + 0x48,ar6,pcVar6); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x84)),((undefined1 *)(unsigned)0x8c13a770),ar6,pcVar6); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0x94)),&(*(undefined8 *)(fr0_ - 0x2a8)),ar6,pcVar6); });
      pcVar3 = ar7;
      pcVar6 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c032518(ar4,ar5,ar7,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc4))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0xb4)),ar5,pcVar3,pcVar6); });
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x2a8)),0x43960000);
      }
      else {
        dVar8 = 1.4265413944775e-311;
        dVar9 = (*(undefined8 *)(fr0_ - 0x2a8));
      }
      if (cVar12 == '\0') {
        fVar7 = F32LO(dVar9) / F32HI(dVar9);
      }
      else {
        fVar7 = SUB84(dVar9 / dVar9,0);
      }
      if (cVar12 == '\0') {
        dVar9 = CONCAT44D(1.0 - fVar7,fVar7);
      }
      else {
        dVar9 = CONCAT44D(0x3f800000,fVar7) - CONCAT44D(0x3f800000,fVar7);
      }
      dVar1 = dVar9;
      if (cVar13 == '\0') {
        (*(undefined8 *)(fr0_ - 0x2b4)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2b4))+4)),(int)(D2U(dVar9) >> 0x20));
        dVar1 = (*(undefined8 *)(fr0_ - 0x2b4));
      }
      (*(undefined8 *)(fr0_ - 0x2b4)) = dVar1;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd4))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xc4)),&(*(undefined8 *)(fr0_ - 0x2b4)),pcVar3,pcVar6); });
      fVar7 = F32LO(dVar9);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe4))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xa4)),((undefined1 *)(fr0_ - 0xd4)),pcVar3,pcVar6); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf4))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0xe4)),((undefined1 *)(unsigned)0x8c13a774),pcVar3,pcVar6); });
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(ar4 + 0x24c,((undefined1 *)(fr0_ - 0xf4)),pcVar3,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,pcVar3,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,pcVar3,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd4)),0xffffffff,pcVar3,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc4)),0xffffffff,pcVar3,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,pcVar3,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,pcVar3,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,pcVar3,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,pcVar3,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c023aa0(ar4 + 0x24c,ar5,((void *)0x8c023aa0),pcVar6));
      if (cVar13 == '\0') {
        pcVar3 = (code *)0x40000000;
      }
      else {
        fVar7 = 2.0;
        pcVar3 = ((void *)0x8c031ce8);
      }
      ar6 = ar7;
      pcVar6 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c032788(ar4,ar4 + 0x24c,ar7,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x24c,ar6,pcVar6));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x264,ar6,pcVar6));
    }
    (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c022fc0(ar5,((undefined1 *)(fr0_ - 0x34)),ar6,pcVar6));
    if (cVar13 == '\0') {
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),pcVar3);
      in_xd0 = dVar8;
    }
    else {
      in_xd0 = CONCAT44D(pcVar3,fVar7);
      dVar9 = *(double *)(unsigned)(ar4 + 0x24);
    }
    if (cVar12 == '\0') {
      fVar7 = F32LO(dVar9) / F32HI(dVar9);
    }
    else {
      fVar7 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar13 == '\0') {
      *(float *)(unsigned)(ar4 + 0x30) = fVar7;
      in_dr0 = CONCAT44D(0x40a00000,fVar7);
      *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x40a00000;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x30) = in_xd0;
      in_dr0 = -8.34132164470162e-251;
      *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x8c031c6440a00000;
    }
    (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c031c64(ar4,ar4 + 0x24,ar6,pcVar6));
    ar5_01 = (int *)(unsigned)0x8c2846e8;
    (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c031b68(ar4,0x8c2846e8,ar6,pcVar6));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
  }
  else if (iVar2 != 3) {
    if (iVar2 != 5) goto LAB_8c0954c6;
    goto LAB_8c09458c;
  }
  iVar2 = *(int *)(unsigned)(ar4 + 0x260);
  if (iVar2 == 0) {
    (vsp = ((unsigned long)(fr0_ - 704)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,((void *)0x8c033b98),ar6,pcVar6));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x104))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_sub(ar4 + 0x264,ar5,ar6,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x104)),ar6,pcVar6));
    uVar5 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x104)),0xffffffff,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x54)),uVar5,ar6,pcVar6));
    fVar7 = F32HI(in_dr0);
    if (cVar13 == '\0') {
      (*(undefined8 *)(fr0_ - 0x2a8)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2a8))+4)),fVar7);
      fVar10 = 300.0;
      in_dr0 = in_xd0;
    }
    else {
      fVar7 = 300.0;
      fVar10 = 8.23963e-43;
      (*(undefined8 *)(fr0_ - 0x2a8)) = in_dr0;
    }
    if (cVar12 != '\0' || fVar7 <= fVar10) {
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x264,ar6,pcVar6));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x24c,ar6,pcVar6));
    }
    (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c022fc0(ar4 + 0x264,ar5,ar6,pcVar6));
    if (cVar13 == '\0') {
      dVar8 = CONCAT44D(0x43960000,fVar10);
    }
    else {
      in_dr0 = CONCAT44D(fVar10,fVar7);
      dVar8 = 1.12097400057851e-311;
    }
    if (cVar12 != '\0' || SUB84(dVar8,0) <= F32HI(dVar8)) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x114))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_sub(ar4 + 0x264,ar5,ar6,pcVar6); });
      (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c022dac(ar4 + 0x14,((undefined1 *)(fr0_ - 0x114)),ar6,pcVar6));
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(0x41200000,(int)(D2U(dVar8) >> 0x20));
      }
      else {
        dVar9 = -7.932637925129825e-251;
        in_dr0 = dVar8;
      }
      dVar8 = dVar9;
      (*(undefined8 *)(fr0_ - 0x2bc)) = (double)(ulonglong)
                           CONCAT14(cVar12 != '\0' ||
                                    SUB84(dVar8,0) <= F32HI(dVar8),
                                    (undefined4)(*(undefined8 *)(fr0_ - 0x2bc)));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x114)),0xffffffff,ar6,pcVar6));
      if ((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2bc))+4)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c022fc0(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,pcVar6));
        if (cVar13 == '\0') {
          *(int *)(unsigned)(ar4 + 0x274) = (int)(D2U(dVar8) >> 0x20);
          dVar8 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x274));
        }
        else {
          *(double *)(unsigned)(ar4 + 0x274) = dVar8;
          in_dr0 = *(double *)(unsigned)(ar4 + 0x274);
          dVar8 = 1.35011982200165e-311;
        }
        if (cVar12 == '\0') {
          fVar7 = F32LO(dVar8) * F32HI(dVar8);
        }
        else {
          fVar7 = SUB84(dVar8 * dVar8,0);
        }
        if (cVar13 == '\0') {
          dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),fVar7);
        }
        else {
          dVar8 = *(double *)(unsigned)(ar4 + 0x28);
        }
        if (cVar12 == '\0') {
          fVar7 = F32LO(dVar8) / F32HI(dVar8);
        }
        else {
          fVar7 = SUB84(dVar8 / dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(unsigned)(ar4 + 0x278) = fVar7;
          dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x278),*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          *(double *)(unsigned)(ar4 + 0x278) = in_dr0;
          in_dr0 = *(double *)(unsigned)(ar4 + 0x28);
          dVar8 = *(double *)(unsigned)(ar4 + 0x278);
        }
        if (cVar12 == '\0') {
          fVar7 = F32HI(dVar8);
          dVar8 = CONCAT44D(fVar7,F32LO(dVar8) / fVar7);
        }
        else {
          dVar8 = dVar8 / dVar8;
        }
        if (cVar13 == '\0') {
          *(int *)(unsigned)(ar4 + 0x27c) = SUB84(dVar8,0);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x27c) = in_dr0;
        }
        *(int *)(unsigned)(ar4 + 0x260) = *(int *)(unsigned)(ar4 + 0x260) + 1;
      }
    }
    pcVar3 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x124))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_normalize(((undefined1 *)(fr0_ - 0x124)),pcVar3,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x134)),ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x134)),0xffffffff,ar6,pcVar6));
    uVar5 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x124)),0xffffffff,ar6,pcVar6));
    pcVar6 = ((void *)0x8c0230f0);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x144))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar5,ar6,((void *)0x8c0230f0)); });
    puVar4 = ((undefined1 *)(fr0_ - 0x154));
    ({ unsigned long t0_ = (unsigned long)(puVar4); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x44)),uVar5,puVar4,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x144)),((undefined1 *)(fr0_ - 0x154)),puVar4,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x154)),0xffffffff,puVar4,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x144)),0xffffffff,puVar4,pcVar6));
    puVar4 = ((undefined1 *)(fr0_ - 0x34));
    ar6 = ar5;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c097ba4(ar4,puVar4,ar5,pcVar6));
    if (iVar2 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x164))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_sub(ar4 + 0x264,ar5,ar6,pcVar6); });
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x164)),ar6,pcVar6));
      uVar5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x164)),0xffffffff,ar6,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x54)),uVar5,ar6,pcVar6));
      fVar7 = F32HI(dVar8);
      if (cVar13 == '\0') {
        (*(undefined8 *)(fr0_ - 0x2a8)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2a8))+4)),fVar7);
        fVar10 = 300.0;
      }
      else {
        fVar7 = 300.0;
        fVar10 = 7.39886e-43;
        (*(undefined8 *)(fr0_ - 0x2a8)) = dVar8;
      }
      if (cVar12 == '\0' && fVar10 < fVar7) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x174))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x54)),ar4 + 0x48,ar6,pcVar6); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x184))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x174)),((undefined1 *)(unsigned)0x8c13a778),ar6,pcVar6); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x194))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0x184)),&(*(undefined8 *)(fr0_ - 0x2a8)),((undefined1 *)(fr0_ - 0x194)),pcVar6); });
        pcVar3 = ar7;
        pcVar6 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
        (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c032518(ar4,ar5,ar7,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1b4))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x1a4)),ar5,pcVar3,pcVar6); });
        dVar8 = (*(undefined8 *)(fr0_ - 0x2a8));
        if (cVar13 == '\0') {
          dVar8 = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x2a8)),0x43960000);
        }
        if (cVar12 == '\0') {
          fVar7 = F32LO(dVar8) / F32HI(dVar8);
        }
        else {
          fVar7 = SUB84(dVar8 / dVar8,0);
        }
        if (cVar12 == '\0') {
          dVar8 = CONCAT44D(1.0 - fVar7,fVar7);
        }
        else {
          dVar8 = CONCAT44D(0x3f800000,fVar7) - CONCAT44D(0x3f800000,fVar7);
        }
        if (cVar13 == '\0') {
          (*(undefined8 *)(fr0_ - 0x2bc)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2bc))+4)),(int)(D2U(dVar8) >> 0x20));
          dVar8 = (*(undefined8 *)(fr0_ - 0x2bc));
        }
        (*(undefined8 *)(fr0_ - 0x2bc)) = dVar8;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c4))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x1b4)),&(*(undefined8 *)(fr0_ - 0x2bc)),pcVar3,pcVar6); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1d4))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x194)),((undefined1 *)(fr0_ - 0x1c4)),pcVar3,pcVar6); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1e4))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0x1d4)),((undefined1 *)(unsigned)0x8c13a77c),pcVar3,pcVar6); });
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(ar4 + 0x24c,((undefined1 *)(fr0_ - 0x1e4)),pcVar3,pcVar6));
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1e4)),0xffffffff,pcVar3,pcVar6));
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1d4)),0xffffffff,pcVar3,pcVar6));
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c4)),0xffffffff,pcVar3,pcVar6));
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1b4)),0xffffffff,pcVar3,pcVar6));
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1a4)),0xffffffff,pcVar3,pcVar6));
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x194)),0xffffffff,pcVar3,pcVar6));
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x184)),0xffffffff,pcVar3,pcVar6));
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x174)),0xffffffff,pcVar3,pcVar6));
        (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c023aa0(ar4 + 0x24c,ar5,pcVar3,pcVar6));
        (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c032788(ar4,ar4 + 0x24c,ar7,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
        puVar4 = (undefined1 *)(unsigned)(ar4 + 0x24c);
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),puVar4,ar7,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
        ar6 = ar7;
        pcVar6 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      }
      else {
        puVar4 = (undefined1 *)(unsigned)(ar4 + 0x264);
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),puVar4,ar6,pcVar6));
      }
    }
    (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c0231c8(ar4 + 0x14,puVar4,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c02374c(ar4 + 0x14,((undefined1 *)(fr0_ - 0x1f4)),ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x1f4)),ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1f4)),0xffffffff,ar6,pcVar6));
  }
  else if (iVar2 == 1) {
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x264,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,((void *)0x8c033b98),ar6,pcVar6));
    if (cVar13 == '\0') {
      dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x27c),*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
      dVar8 = *(double *)(unsigned)(ar4 + 0x27c);
    }
    if (cVar12 == '\0') {
      fVar7 = F32LO(dVar8) - F32HI(dVar8);
    }
    else {
      fVar7 = SUB84(dVar8 - dVar8,0);
    }
    if (cVar13 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar7;
      dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),in_fr3);
      dVar9 = CONCAT44D(0x42700000,*(undefined4 *)(unsigned)(ar4 + 0x27c));
    }
    else {
      *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
      dVar8 = *(double *)(unsigned)(ar4 + 0x28);
      dVar9 = 1.29072414440439e-311;
    }
    if (cVar12 == '\0') {
      fVar7 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar13 == '\0') {
      dVar9 = CONCAT44D(0x40000000,fVar7);
    }
    else {
      dVar9 = 3.74001758157629e-312;
    }
    if (cVar12 == '\0') {
      bVar11 = F32HI(dVar8) <
               F32LO(dVar9) / F32HI(dVar9);
    }
    else {
      bVar11 = dVar8 < dVar9 / dVar9;
    }
    if (bVar11) {
      *(int *)(unsigned)(ar4 + 0x260) = *(int *)(unsigned)(ar4 + 0x260) + 1;
      pcVar6 = (code *)0x0;
      ar6 = (code *)0x0;
      (vsp = ((unsigned long)(fr0_ - 704)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0,0));
    }
    pcVar3 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x204))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_normalize(((undefined1 *)(fr0_ - 0x204)),pcVar3,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x214)),ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x214)),0xffffffff,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x204)),0xffffffff,ar6,pcVar6));
    iVar2 = ar4 + 0x14;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x224))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c0230f0(iVar2,iVar2,ar6,pcVar6); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x234))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x44)),iVar2,ar6,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x224)),((undefined1 *)(fr0_ - 0x234)),ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x234)),0xffffffff,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x224)),0xffffffff,ar6,pcVar6));
    ar5_02 = (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c097ba4(ar4,((undefined1 *)(fr0_ - 0x34)),ar5,pcVar6));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x244))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_02,ar5,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x244)),ar5,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x244)),0xffffffff,ar5,pcVar6));
    ar6 = ar5;
  }
  else if (iVar2 == 2) {
    iVar2 = ar4 + 0x264;
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),iVar2,ar6,pcVar6));
    uVar5 = SUB84(in_dr0,0);
    (vsp = ((unsigned long)(fr0_ - 704)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar2,ar6,pcVar6));
    if (cVar13 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x48) = 0x3f800000;
      dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x27c),*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x48) = CONCAT44(0x3f800000,uVar5);
      in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
      dVar8 = *(double *)(unsigned)(ar4 + 0x27c);
    }
    if (cVar12 == '\0') {
      fVar7 = F32LO(dVar8) - F32HI(dVar8);
    }
    else {
      fVar7 = SUB84(dVar8 - dVar8,0);
    }
    if (cVar13 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar7;
      fVar7 = *(float *)(unsigned)(ar4 + 0x28);
      fVar10 = 0.5;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
      fVar7 = 0.5;
      fVar10 = 2.9147e-43;
    }
    if (cVar12 == '\0' && fVar7 < fVar10) {
      if (cVar13 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3f000000;
      }
      else {
        fVar7 = 0.5;
        *(undefined8 *)(unsigned)(ar4 + 0x28) = 0xd03f000000;
      }
    }
    pcVar3 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x254))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_normalize(((undefined1 *)(fr0_ - 0x254)),pcVar3,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x264)),ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x264)),0xffffffff,ar6,pcVar6));
    uVar5 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x254)),0xffffffff,ar6,pcVar6));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x274))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar5,ar6,pcVar6); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x284))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x44)),uVar5,ar6,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x274)),((undefined1 *)(fr0_ - 0x284)),ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x284)),0xffffffff,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x274)),0xffffffff,ar6,pcVar6));
    ar5_02 = (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c097ba4(ar4,((undefined1 *)(fr0_ - 0x34)),ar5,pcVar6));
    ar6 = ar5;
    if (ar5_02 == 0) {
      ar5_02 = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      pcVar6 = (code *)0x0;
      ar6 = (code *)0x0;
      iVar2 = ar4 + 0xb0;
      (vsp = ((unsigned long)(fr0_ - 704)), s_CAnimBody_SetAnimation_033a94(iVar2,1,0,0));
      if (cVar13 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar7;
      }
      uVar5 = (vsp = ((unsigned long)(fr0_ - 704)), rand(iVar2,((void *)0x8c014200),ar6,pcVar6));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 704)), libgcc_divide_helper_01031c(uVar5,10,ar6,pcVar6));
      *(int *)(unsigned)(ar4 + 0x284) = iVar2 + 0xf;
      *(int *)(unsigned)(ar4 + 0x260) = *(int *)(unsigned)(ar4 + 0x260) + 1;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x294))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c0230f0(ar4 + 0x14,ar4 + 0x14,ar6,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x294)),ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x294)),0xffffffff,ar6,pcVar6));
  }
  else if (iVar2 == 3) {
    if (cVar13 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 704)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_01,ar6,pcVar6));
    if (iVar2 == 1) {
      ar6 = (code *)0x284;
      *(int *)(unsigned)(ar4 + 0x284) = *(int *)(unsigned)(ar4 + 0x284) + -1;
      if (*(int *)(unsigned)(ar4 + 0x284) < 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x248) = 3;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      }
    }
    ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x2a8)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c0230f0(ar4 + 0x14,(int)&(*(undefined8 *)(fr0_ - 0x2a8)) + 4,ar6,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(ar4 + 0x80,(int)&(*(undefined8 *)(fr0_ - 0x2a8)) + 4,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x2a8)) + 4,0xffffffff,ar6,pcVar6));
  }
LAB_8c0954c6:
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2b4))+4)) = ar5_02;
  (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,pcVar6));
  return (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2b4))+4));
}

__asm__(".globl _FUN_8c094514\n.set _FUN_8c094514, _FUN_8c094514_def\n");
//@unit 8c095548
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
int FUN_8c095548_def(int ar4,code *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c095548";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 816; for (int i_ = 0; i_ < 816; i_++) z_[i_] = 0; }
  int iVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  double in_dr0 = 0;
  double dVar9;
  double dVar10;
  float fVar11;
  uint uVar12;
  undefined4 in_fr3 = 0;
  double in_xd0 = 0;
  bool bVar13;
  char cVar14;
  char cVar15;
  
  cVar15 = '\0';
  cVar14 = '\0';
  pcVar2 = ((void *)0x8c022c4c);
  uVar6 = ar7;
  (vsp = ((unsigned long)(fr0_ - 816)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x38)),((void *)0x8c022c4c),ar6,ar7));
  pcVar5 = ((void *)0x8c022c4c);
  (vsp = ((unsigned long)(fr0_ - 816)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x48)),pcVar2,((void *)0x8c022c4c),uVar6));
  (vsp = ((unsigned long)(fr0_ - 816)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x58)),pcVar2,pcVar5,uVar6));
  iVar7 = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c0955d0:
    iVar1 = (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c034148(ar4 + 0xb0,0,pcVar5,uVar6));
    if ((iVar1 != 1) && (iVar1 != 2)) {
      (*(undefined4 *)(fr0_ - 0x310)) = 1;
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,pcVar5,uVar6));
      return (*(undefined4 *)(fr0_ - 0x310));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(ar4 + 0x264,ar6,pcVar5,uVar6));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_sub(ar4 + 0x264,ar5,pcVar5,uVar6); });
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0x68)),pcVar5,uVar6));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x58)),uVar4,pcVar5,uVar6));
    fVar8 = F32HI(in_dr0);
    if (cVar15 == '\0') {
      (*(undefined8 *)(fr0_ - 0x30c)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30c))+4)),fVar8);
      fVar11 = 300.0;
      in_dr0 = in_xd0;
    }
    else {
      fVar8 = 300.0;
      fVar11 = 1.13225e-42;
      (*(undefined8 *)(fr0_ - 0x30c)) = in_dr0;
    }
    if (cVar14 == '\0' && fVar11 < fVar8) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x58)),ar4 + 0x48,pcVar5,uVar6); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x78)),((undefined1 *)(unsigned)0x8c13a780),pcVar5,uVar6); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x98))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0x88)),&(*(undefined8 *)(fr0_ - 0x30c)),pcVar5,uVar6); });
      pcVar5 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      uVar6 = (*(undefined4 *)(fr0_ + 0x00000004));
      (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c032518(ar4,ar5,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),(*(undefined4 *)(fr0_ + 0x00000004))));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0xa8)),ar5,pcVar5,uVar6); });
      if (cVar15 == '\0') {
        dVar9 = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x30c)),0x43960000);
      }
      else {
        in_dr0 = 1.71513282204878e-311;
        dVar9 = (*(undefined8 *)(fr0_ - 0x30c));
      }
      if (cVar14 == '\0') {
        fVar8 = F32LO(dVar9) / F32HI(dVar9);
      }
      else {
        fVar8 = SUB84(dVar9 / dVar9,0);
      }
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(1.0 - fVar8,fVar8);
      }
      else {
        dVar9 = CONCAT44D(0x3f800000,fVar8) - CONCAT44D(0x3f800000,fVar8);
      }
      dVar10 = dVar9;
      if (cVar15 == '\0') {
        (*(undefined8 *)(fr0_ - 0x318)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x318))+4)),(int)(D2U(dVar9) >> 0x20));
        dVar10 = (*(undefined8 *)(fr0_ - 0x318));
      }
      (*(undefined8 *)(fr0_ - 0x318)) = dVar10;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xb8)),&(*(undefined8 *)(fr0_ - 0x318)),pcVar5,uVar6); });
      fVar8 = F32LO(dVar9);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x98)),((undefined1 *)(fr0_ - 0xc8)),pcVar5,uVar6); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0xd8)),((undefined1 *)(unsigned)0x8c13a784),pcVar5,uVar6); });
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(ar4 + 0x24c,((undefined1 *)(fr0_ - 0xe8)),pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe8)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c023aa0(ar4 + 0x24c,ar5,pcVar5,uVar6));
      if (cVar15 == '\0') {
        fVar11 = 2.0;
      }
      else {
        fVar8 = 2.0;
        fVar11 = 200.0;
      }
      pcVar5 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      uVar6 = (*(undefined4 *)(fr0_ + 0x00000004));
      (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c032788(ar4,ar4 + 0x24c,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),(*(undefined4 *)(fr0_ + 0x00000004))));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x24c,pcVar5,uVar6));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x264,pcVar5,uVar6));
    }
    puVar3 = ((undefined1 *)(fr0_ - 0x38));
    (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c022fc0(ar5,puVar3,pcVar5,uVar6));
    if (cVar15 == '\0') {
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),fVar11);
      in_xd0 = in_dr0;
    }
    else {
      in_xd0 = CONCAT44D(fVar11,fVar8);
      dVar9 = *(double *)(unsigned)(ar4 + 0x24);
    }
    if (cVar14 == '\0') {
      fVar8 = F32LO(dVar9) / F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar15 == '\0') {
      *(float *)(unsigned)(ar4 + 0x30) = fVar8;
      in_dr0 = CONCAT44D(0x40a00000,fVar8);
      *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x40a00000;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x30) = in_xd0;
      in_dr0 = -8.34132164470162e-251;
      *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x8c031c6440a00000;
    }
    (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c031c64(ar4,puVar3,pcVar5,uVar6));
    pcVar2 = (code *)0x8c2846e8;
    (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c031b68(ar4,0x8c2846e8,pcVar5,uVar6));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
  }
  else if (iVar1 != 3) {
    if (iVar1 != 5) goto LAB_8c096760;
    goto LAB_8c0955d0;
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x260);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 816)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar2,pcVar5,uVar6));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_sub(ar4 + 0x264,ar5,pcVar5,uVar6); });
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0xf8)),pcVar5,uVar6));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf8)),0xffffffff,pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x58)),uVar4,pcVar5,uVar6));
    fVar8 = F32HI(in_dr0);
    if (cVar15 == '\0') {
      (*(undefined8 *)(fr0_ - 0x30c)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30c))+4)),fVar8);
      fVar11 = 300.0;
      in_dr0 = in_xd0;
    }
    else {
      fVar8 = 300.0;
      fVar11 = 8.23963e-43;
      (*(undefined8 *)(fr0_ - 0x30c)) = in_dr0;
    }
    if (cVar14 != '\0' || fVar8 <= fVar11) {
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x264,pcVar5,uVar6));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x24c,pcVar5,uVar6));
    }
    (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c022fc0(ar4 + 0x264,ar5,pcVar5,uVar6));
    if (cVar15 == '\0') {
      dVar9 = CONCAT44D(0x43960000,fVar11);
    }
    else {
      in_dr0 = CONCAT44D(fVar11,fVar8);
      dVar9 = 1.40956542814978e-311;
    }
    if (cVar14 != '\0' || SUB84(dVar9,0) <= F32HI(dVar9)) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x108))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_sub(ar4 + 0x264,ar5,pcVar5,uVar6); });
      (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c022dac(ar4 + 0x14,((undefined1 *)(fr0_ - 0x108)),pcVar5,uVar6));
      if (cVar15 == '\0') {
        dVar10 = CONCAT44D(0x41200000,(int)(D2U(dVar9) >> 0x20));
      }
      else {
        dVar10 = 2.80643268531973e-312;
        in_dr0 = dVar9;
      }
      dVar9 = dVar10;
      (*(undefined8 *)(fr0_ - 0x320)) = (double)(ulonglong)
                           CONCAT14(cVar14 != '\0' ||
                                    SUB84(dVar9,0) <= F32HI(dVar9),
                                    (undefined4)(*(undefined8 *)(fr0_ - 0x320)));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x108)),0xffffffff,pcVar5,uVar6));
      if ((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x320))+4)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c022fc0(((undefined1 *)(fr0_ - 0x38)),ar5,pcVar5,uVar6));
        if (cVar15 == '\0') {
          *(int *)(unsigned)(ar4 + 0x274) = (int)(D2U(dVar9) >> 0x20);
          dVar9 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x274));
        }
        else {
          *(double *)(unsigned)(ar4 + 0x274) = dVar9;
          in_dr0 = *(double *)(unsigned)(ar4 + 0x274);
          dVar9 = 1.35011982200165e-311;
        }
        if (cVar14 == '\0') {
          fVar8 = F32LO(dVar9) * F32HI(dVar9);
        }
        else {
          fVar8 = SUB84(dVar9 * dVar9,0);
        }
        if (cVar15 == '\0') {
          dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),fVar8);
        }
        else {
          dVar9 = *(double *)(unsigned)(ar4 + 0x28);
        }
        if (cVar14 == '\0') {
          fVar8 = F32LO(dVar9) / F32HI(dVar9);
        }
        else {
          fVar8 = SUB84(dVar9 / dVar9,0);
        }
        if (cVar15 == '\0') {
          *(float *)(unsigned)(ar4 + 0x278) = fVar8;
          dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x278),*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          *(double *)(unsigned)(ar4 + 0x278) = in_dr0;
          in_dr0 = *(double *)(unsigned)(ar4 + 0x28);
          dVar9 = *(double *)(unsigned)(ar4 + 0x278);
        }
        if (cVar14 == '\0') {
          fVar8 = F32HI(dVar9);
          dVar9 = CONCAT44D(fVar8,F32LO(dVar9) / fVar8);
        }
        else {
          dVar9 = dVar9 / dVar9;
        }
        if (cVar15 == '\0') {
          *(int *)(unsigned)(ar4 + 0x27c) = SUB84(dVar9,0);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x27c) = in_dr0;
        }
        *(int *)(unsigned)(ar4 + 0x260) = *(int *)(unsigned)(ar4 + 0x260) + 1;
      }
    }
    pcVar2 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x118))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x38)),ar5,pcVar5,uVar6); });
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_normalize(((undefined1 *)(fr0_ - 0x118)),pcVar2,pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x128)),pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x128)),0xffffffff,pcVar5,uVar6));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x118)),0xffffffff,pcVar5,uVar6));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x138))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,pcVar5,uVar6); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x148))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x48)),uVar4,pcVar5,uVar6); });
    (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x138)),((undefined1 *)(fr0_ - 0x148)),pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x148)),0xffffffff,pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x138)),0xffffffff,pcVar5,uVar6));
    pcVar5 = ar5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c097ba4(ar4,((undefined1 *)(fr0_ - 0x38)),ar5,uVar6));
    if (iVar1 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x158))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_sub(ar4 + 0x264,ar5,pcVar5,uVar6); });
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0x158)),pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x158)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x58)),((void *)0x8c022e78),pcVar5,uVar6));
      fVar8 = F32HI(dVar9);
      if (cVar15 == '\0') {
        (*(undefined8 *)(fr0_ - 0x30c)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30c))+4)),fVar8);
        fVar11 = 300.0;
      }
      else {
        fVar8 = 300.0;
        fVar11 = 9.30462e-43;
        (*(undefined8 *)(fr0_ - 0x30c)) = dVar9;
      }
      if (cVar14 == '\0' && fVar11 < fVar8) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x168))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x58)),ar4 + 0x48,pcVar5,uVar6); });
        pcVar5 = ((void *)0x8c023b8c);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x178))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x168)),((undefined1 *)(unsigned)0x8c13a788),((void *)0x8c023b8c),uVar6); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x188))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0x178)),&(*(undefined8 *)(fr0_ - 0x30c)),pcVar5,uVar6); });
        pcVar5 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
        uVar6 = (*(undefined4 *)(fr0_ + 0x00000004));
        (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c032518(ar4,ar5,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),(*(undefined4 *)(fr0_ + 0x00000004))));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1a8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x198)),ar5,pcVar5,uVar6); });
        dVar9 = (*(undefined8 *)(fr0_ - 0x30c));
        if (cVar15 == '\0') {
          dVar9 = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x30c)),0x43960000);
        }
        if (cVar14 == '\0') {
          fVar8 = F32LO(dVar9) / F32HI(dVar9);
        }
        else {
          fVar8 = SUB84(dVar9 / dVar9,0);
        }
        if (cVar14 == '\0') {
          dVar9 = CONCAT44D(1.0 - fVar8,fVar8);
        }
        else {
          dVar9 = CONCAT44D(0x3f800000,fVar8) - CONCAT44D(0x3f800000,fVar8);
        }
        if (cVar15 == '\0') {
          (*(undefined8 *)(fr0_ - 0x320)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x320))+4)),(int)(D2U(dVar9) >> 0x20));
          dVar9 = (*(undefined8 *)(fr0_ - 0x320));
        }
        (*(undefined8 *)(fr0_ - 0x320)) = dVar9;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1b8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x1a8)),&(*(undefined8 *)(fr0_ - 0x320)),pcVar5,uVar6); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x188)),((undefined1 *)(fr0_ - 0x1b8)),pcVar5,uVar6); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1d8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0x1c8)),((undefined1 *)(unsigned)0x8c13a78c),pcVar5,uVar6); });
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(ar4 + 0x24c,((undefined1 *)(fr0_ - 0x1d8)),pcVar5,uVar6));
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1d8)),0xffffffff,pcVar5,uVar6));
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c8)),0xffffffff,pcVar5,uVar6));
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1b8)),0xffffffff,pcVar5,uVar6));
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1a8)),0xffffffff,pcVar5,uVar6));
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x198)),0xffffffff,pcVar5,uVar6));
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x188)),0xffffffff,pcVar5,uVar6));
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x178)),0xffffffff,pcVar5,uVar6));
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x168)),0xffffffff,pcVar5,uVar6));
        (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c023aa0(ar4 + 0x24c,ar5,pcVar5,uVar6));
        (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c032788(ar4,ar4 + 0x24c,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),(*(undefined4 *)(fr0_ + 0x00000004))));
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x24c,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),(*(undefined4 *)(fr0_ + 0x00000004))));
        pcVar5 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
        uVar6 = (*(undefined4 *)(fr0_ + 0x00000004));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x264,pcVar5,uVar6));
      }
    }
    (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c0231c8(ar4 + 0x14,ar4 + 0x14,pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c02374c(ar4 + 0x14,ar4 + 0x14,pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x1e8)),pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1e8)),0xffffffff,pcVar5,uVar6));
  }
  else if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x264,pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,pcVar5,uVar6));
    if (cVar15 == '\0') {
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x27c),*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
      dVar9 = *(double *)(unsigned)(ar4 + 0x27c);
    }
    if (cVar14 == '\0') {
      fVar8 = F32LO(dVar9) - F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 - dVar9,0);
    }
    if (cVar15 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar8;
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),in_fr3);
      dVar10 = CONCAT44D(0x42700000,*(undefined4 *)(unsigned)(ar4 + 0x27c));
    }
    else {
      *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
      dVar9 = *(double *)(unsigned)(ar4 + 0x28);
      dVar10 = 1.29072414440439e-311;
    }
    if (cVar14 == '\0') {
      fVar8 = F32LO(dVar10) * F32HI(dVar10);
    }
    else {
      fVar8 = SUB84(dVar10 * dVar10,0);
    }
    if (cVar15 == '\0') {
      dVar10 = CONCAT44D(0x40000000,fVar8);
    }
    else {
      dVar10 = 3.74001758157629e-312;
    }
    if (cVar14 == '\0') {
      fVar11 = F32HI(dVar10);
      fVar8 = F32LO(dVar10) / fVar11;
      dVar10 = CONCAT44D(fVar11,fVar8);
      bVar13 = F32HI(dVar9) < fVar8;
    }
    else {
      dVar10 = dVar10 / dVar10;
      bVar13 = dVar9 < dVar10;
    }
    fVar8 = F32HI(dVar10);
    if (bVar13) {
      *(int *)(unsigned)(ar4 + 0x260) = *(int *)(unsigned)(ar4 + 0x260) + 1;
      uVar6 = 0;
      pcVar5 = (code *)0x0;
      uVar4 = 3;
      (vsp = ((unsigned long)(fr0_ - 816)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0,0));
      *(undefined4 *)(unsigned)(ar4 + 0x288) = 0;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1f8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c0230f0(ar7,uVar4,pcVar5,uVar6); });
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_normalize(((undefined1 *)(fr0_ - 0x1f8)),uVar4,pcVar5,uVar6));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x218))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c0230f0(ar4 + 0x80,uVar4,pcVar5,uVar6); });
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_normalize(((undefined1 *)(fr0_ - 0x218)),uVar4,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x208)),((undefined1 *)(fr0_ - 0x228)),pcVar5,uVar6));
      if (cVar15 == '\0') {
        pcVar2 = (code *)0x42340000;
      }
      else {
        fVar8 = 45.0;
        pcVar2 = ((void *)0x8c022cb0);
      }
      (*(uint *)(fr0_ - 0x324)) = (uint)(cVar14 == '\0' && fVar8 < (float)(uint)pcVar2);
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x228)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x218)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x208)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1f8)),0xffffffff,pcVar5,uVar6));
      if ((*(uint *)(fr0_ - 0x324)) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x284) = 0x1e;
      }
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x238))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x38)),ar5,pcVar5,uVar6); });
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_normalize(((undefined1 *)(fr0_ - 0x238)),((void *)0x8c022ec0),pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x248)),pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x248)),0xffffffff,pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x238)),0xffffffff,pcVar5,uVar6));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x258))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c0230f0(ar4 + 0x14,((undefined1 *)(fr0_ - 0x258)),pcVar5,uVar6); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x268))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x48)),pcVar5,uVar6); });
    (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x258)),((undefined1 *)(fr0_ - 0x268)),pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x268)),0xffffffff,pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x258)),0xffffffff,pcVar5,uVar6));
    puVar3 = ((undefined1 *)(fr0_ - 0x38));
    iVar7 = (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c097ba4(ar4,puVar3,ar5,uVar6));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x278))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c0230f0(ar4 + 0x14,puVar3,ar5,uVar6); });
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x278)),ar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x278)),0xffffffff,ar5,uVar6));
    pcVar5 = ar5;
  }
  else if (iVar1 == 2) {
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x264,pcVar5,uVar6));
    uVar4 = SUB84(in_dr0,0);
    (vsp = ((unsigned long)(fr0_ - 816)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0xb0,pcVar5,uVar6));
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x48) = 0x3f800000;
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x27c),*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x48) = CONCAT44(0x3f800000,uVar4);
      in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
      dVar9 = *(double *)(unsigned)(ar4 + 0x27c);
    }
    if (cVar14 == '\0') {
      fVar8 = F32LO(dVar9) - F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 - dVar9,0);
    }
    if (cVar15 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar8;
      fVar8 = *(float *)(unsigned)(ar4 + 0x28);
      fVar11 = 0.5;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
      fVar8 = 0.5;
      fVar11 = 3.92364e-43;
    }
    if (cVar14 == '\0' && fVar8 < fVar11) {
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3f000000;
      }
      else {
        fVar8 = 0.5;
        *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x1183f000000;
      }
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x288))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x38)),ar5,pcVar5,uVar6); });
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_normalize(((undefined1 *)(fr0_ - 0x288)),((undefined1 *)(fr0_ - 0x288)),pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x298)),pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x298)),0xffffffff,pcVar5,uVar6));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x288)),0xffffffff,pcVar5,uVar6));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2a8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,pcVar5,uVar6); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2b8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x48)),uVar4,pcVar5,uVar6); });
    (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x2a8)),((undefined1 *)(fr0_ - 0x2b8)),pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2b8)),0xffffffff,pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2a8)),0xffffffff,pcVar5,uVar6));
    iVar7 = (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c097ba4(ar4,((undefined1 *)(fr0_ - 0x38)),ar5,uVar6));
    if (iVar7 == 0) {
      iVar7 = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      uVar6 = 0;
      pcVar5 = (code *)0x0;
      iVar1 = ar4 + 0xb0;
      (vsp = ((unsigned long)(fr0_ - 816)), s_CAnimBody_SetAnimation_033a94(iVar1,1,0,0));
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar8;
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 816)), rand(iVar1,((void *)0x8c014200),pcVar5,uVar6));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 816)), libgcc_divide_helper_01031c(uVar4,10,pcVar5,uVar6));
      *(int *)(unsigned)(ar4 + 0x284) = iVar1 + 0xf;
      *(int *)(unsigned)(ar4 + 0x260) = *(int *)(unsigned)(ar4 + 0x260) + 1;
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(ar4 + 0x80,ar7,pcVar5,uVar6));
    }
    else {
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D((float)*(int *)(unsigned)(ar4 + 0x284),fVar8);
      }
      else {
        dVar9 = (double)*(int *)(unsigned)(ar4 + 0x284);
      }
      uVar12 = (uint)(D2U(dVar9) >> 0x20);
      (*(uint *)(fr0_ - 0x328)) = uVar12;
      if (cVar15 != '\0') {
        (*(uint *)(fr0_ - 0x328)) = SUB84(dVar9,0);
        (*(uint *)(fr0_ - 0x324)) = uVar12;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2c8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_scale(ar4 + 0x80,&(*(uint *)(fr0_ - 0x328)),ar5,uVar6); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2d8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0x2c8)),((undefined1 *)(unsigned)0x8c13a790),ar5,uVar6); });
      if (cVar15 == '\0') {
        dVar9 = CONCAT44D(0x41f00000,(float)*(int *)(unsigned)(ar4 + 0x284));
      }
      else {
        dVar9 = 3.9099378451209e-312;
      }
      if (cVar14 == '\0') {
        fVar8 = F32LO(dVar9) / F32HI(dVar9);
      }
      else {
        fVar8 = SUB84(dVar9 / dVar9,0);
      }
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(1.0 - fVar8,fVar8);
      }
      else {
        dVar9 = CONCAT44D(0x3f800000,fVar8) - CONCAT44D(0x3f800000,fVar8);
      }
      uVar12 = (uint)(D2U(dVar9) >> 0x20);
      (*(uint *)(fr0_ - 0x32c)) = uVar12;
      if (cVar15 != '\0') {
        (*(uint *)(fr0_ - 0x32c)) = SUB84(dVar9,0);
        (*(uint *)(fr0_ - 0x328)) = uVar12;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2e8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_scale(ar7,&(*(uint *)(fr0_ - 0x32c)),ar5,uVar6); });
      puVar3 = ((undefined1 *)(fr0_ - 0x2e8));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2f8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x2d8)),puVar3,ar5,uVar6); });
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_normalize(((undefined1 *)(fr0_ - 0x2f8)),puVar3,ar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(ar4 + 0x80,(int)&(*(undefined8 *)(fr0_ - 0x30c)) + 4,ar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x30c)) + 4,0xffffffff,ar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2f8)),0xffffffff,ar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2e8)),0xffffffff,ar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2d8)),0xffffffff,ar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c8)),0xffffffff,ar5,uVar6));
      *(int *)(unsigned)(ar4 + 0x284) = *(int *)(unsigned)(ar4 + 0x284) + -1;
      pcVar5 = ar5;
      if (*(int *)(unsigned)(ar4 + 0x284) < 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
      }
    }
  }
  else if (iVar1 == 3) {
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 816)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pcVar2,pcVar5,uVar6));
    if (iVar1 == 1) {
      *(int *)(unsigned)(ar4 + 0x284) = *(int *)(unsigned)(ar4 + 0x284) + -1;
      if (*(int *)(unsigned)(ar4 + 0x284) < 1) {
        iVar7 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        iVar1 = ar4 + 0x80;
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(ar4 + 0x14,iVar1,pcVar5,uVar6));
        *(undefined4 *)(unsigned)(ar4 + 0x288) = 1;
        uVar6 = (vsp = ((unsigned long)(fr0_ - 816)), rand(0x288,iVar1,pcVar5,uVar6));
        pcVar5 = ((void *)0x8c01031c);
        uVar4 = (vsp = ((unsigned long)(fr0_ - 816)), libgcc_divide_helper_01031c(uVar6,10,((void *)0x8c01031c),uVar6));
        *(undefined4 *)(unsigned)(ar4 + 0x2f0) = uVar4;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(ar4 + 0x80,ar7,pcVar5,uVar6));
      }
    }
  }
LAB_8c096760:
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x318))+4)) = iVar7;
  (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,pcVar5,uVar6));
  (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,pcVar5,uVar6));
  (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,pcVar5,uVar6));
  return (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x318))+4));
}

__asm__(".globl _FUN_8c095548\n.set _FUN_8c095548, _FUN_8c095548_def\n");
//@unit 8c0967d8
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
int FUN_8c0967d8_def(int ar4,int *ar5,int *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c0967d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 716; for (int i_ = 0; i_ < 716; i_++) z_[i_] = 0; }
  int iVar1;
  ulonglong *ar4_00;
  code *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *ar5_00;
  int ar5_01;
  int *piVar5;
  int iVar6;
  float fVar7;
  double in_dr0 = 0;
  float fVar10;
  double dVar8;
  double dVar9;
  undefined4 in_fr3 = 0;
  double in_xd0 = 0;
  bool bVar11;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  piVar5 = ar7;
  (vsp = ((unsigned long)(fr0_ - 716)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,ar7));
  pcVar2 = ((void *)0x8c022c4c);
  (vsp = ((unsigned long)(fr0_ - 716)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x44)),((void *)0x8c022c4c),ar6,piVar5));
  (vsp = ((unsigned long)(fr0_ - 716)), Vec3_ctor_zero(((undefined4 *)(fr0_ - 0x54)),pcVar2,ar6,piVar5));
  (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c102748(&(*(undefined4 *)(fr0_ - 0x60)),pcVar2,ar6,piVar5));
  iVar6 = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c096864:
    iVar1 = (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c034148(ar4 + 0xb0,0,ar6,piVar5));
    if ((iVar1 != 1) && (iVar1 != 2)) {
      (*(undefined4 *)(fr0_ - 0x2b8)) = 1;
      (vsp = ((unsigned long)(fr0_ - 716)), free_if_nonnull_wrap_102790(&(*(undefined4 *)(fr0_ - 0x60)),0xffffffff,ar6,piVar5));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined4 *)(fr0_ - 0x54)),0xffffffff,ar6,piVar5));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,piVar5));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,piVar5));
      return (*(undefined4 *)(fr0_ - 0x2b8));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
    if (cVar13 != '\0') {
      ((undefined4 *)(fr0_ - 0x54))[0] = 0x2dc;
    }
    (*(undefined4 *)(fr0_ - 0x58)) = 0x43480000;
    (*(undefined4 *)(fr0_ - 0x5c)) = 0x44098000;
    (*(undefined4 *)(fr0_ - 0x60)) = 0x443b8000;
    piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
    (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c031ce8(ar4,&(*(undefined4 *)(fr0_ - 0x60)),((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(ar4 + 0x264,((undefined1 *)(fr0_ - 0x70)),piVar3,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,piVar3,piVar5));
    ar6 = ar7;
    piVar5 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c032788(ar4,ar4 + 0x264,ar7,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(ar4 + 0x264,uVar4,ar6,piVar5));
    if (cVar13 == '\0') {
      dVar8 = CONCAT44D(0x442f0000,*(undefined4 *)(unsigned)(ar4 + 0x26c));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x26c);
      dVar8 = 6.28675931074746e-312;
    }
    if (cVar12 == '\0') {
      fVar7 = F32HI(dVar8);
      dVar8 = CONCAT44D(fVar7,F32LO(dVar8) + fVar7);
    }
    else {
      dVar8 = dVar8 + dVar8;
    }
    if (cVar13 == '\0') {
      *(int *)(unsigned)(ar4 + 0x26c) = SUB84(dVar8,0);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x26c) = in_xd0;
    }
    (vsp = ((unsigned long)(fr0_ - 716)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar4 + 0x264,ar6,piVar5));
    if (cVar13 == '\0') {
      dVar9 = CONCAT44D(0x41100000,(int)(D2U(dVar8) >> 0x20));
      dVar8 = in_xd0;
    }
    else {
      dVar9 = 1.46896039340715e-311;
    }
    if (cVar12 == '\0') {
      fVar7 = F32HI(dVar9);
      in_xd0 = CONCAT44D(fVar7,F32LO(dVar9) + fVar7);
    }
    else {
      in_xd0 = dVar9 + dVar9;
    }
    if (cVar13 == '\0') {
      *(int *)(unsigned)(ar4 + 0x268) = SUB84(in_xd0,0);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x268) = dVar8;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_sub(ar4 + 0x264,ar5,ar6,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined4 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x80)),ar6,piVar5));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_length_sq(((undefined4 *)(fr0_ - 0x54)),uVar4,ar6,piVar5));
    fVar7 = F32HI(in_xd0);
    if (cVar13 == '\0') {
      (*(undefined8 *)(fr0_ - 0x2b4)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2b4))+4)),fVar7);
      pcVar2 = (code *)0x43960000;
      in_xd0 = dVar8;
    }
    else {
      fVar7 = 300.0;
      pcVar2 = (code *)0x2a4;
      (*(undefined8 *)(fr0_ - 0x2b4)) = in_xd0;
    }
    if (cVar12 == '\0' && (float)(uint)pcVar2 < fVar7) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x90))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_scale(((undefined4 *)(fr0_ - 0x54)),ar4 + 0x48,ar6,piVar5); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x90)),((undefined1 *)(unsigned)0x8c13a794),ar6,piVar5); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0xa0)),&(*(undefined8 *)(fr0_ - 0x2b4)),ar6,piVar5); });
      piVar5 = ar7;
      piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c032518(ar4,ar5,ar7,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0xc0)),ar5,piVar5,piVar3); });
      if (cVar13 == '\0') {
        dVar8 = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x2b4)),0x43960000);
      }
      else {
        in_xd0 = 1.43502937764137e-311;
        dVar8 = (*(undefined8 *)(fr0_ - 0x2b4));
      }
      if (cVar12 == '\0') {
        fVar7 = F32LO(dVar8) / F32HI(dVar8);
      }
      else {
        fVar7 = SUB84(dVar8 / dVar8,0);
      }
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(1.0 - fVar7,fVar7);
      }
      else {
        dVar8 = CONCAT44D(0x3f800000,fVar7) - CONCAT44D(0x3f800000,fVar7);
      }
      dVar9 = dVar8;
      if (cVar13 == '\0') {
        (*(undefined8 *)(fr0_ - 0x2c0)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2c0))+4)),(int)(D2U(dVar8) >> 0x20));
        dVar9 = (*(undefined8 *)(fr0_ - 0x2c0));
      }
      (*(undefined8 *)(fr0_ - 0x2c0)) = dVar9;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xd0)),&(*(undefined8 *)(fr0_ - 0x2c0)),piVar5,piVar3); });
      fVar7 = F32LO(dVar8);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xb0)),((undefined1 *)(fr0_ - 0xe0)),piVar5,piVar3); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x100))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0xf0)),((undefined1 *)(unsigned)0x8c13a798),piVar5,piVar3); });
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(ar4 + 0x24c,((undefined1 *)(fr0_ - 0x100)),piVar5,piVar3));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x100)),0xffffffff,piVar5,piVar3));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,piVar5,piVar3));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,piVar5,piVar3));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,piVar5,piVar3));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,piVar5,piVar3));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,piVar5,piVar3));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,piVar5,piVar3));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,piVar5,piVar3));
      (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c023aa0(ar4 + 0x24c,ar5,((void *)0x8c023aa0),piVar3));
      if (cVar13 == '\0') {
        pcVar2 = (code *)0x40000000;
      }
      else {
        fVar7 = 2.0;
        pcVar2 = ((void *)0x8c031ce8);
      }
      ar6 = ar7;
      piVar5 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c032788(ar4,ar4 + 0x24c,ar7,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x24c,ar6,piVar5));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x264,ar6,piVar5));
    }
    (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c022fc0(ar5,((undefined1 *)(fr0_ - 0x34)),ar6,piVar5));
    if (cVar13 == '\0') {
      dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),pcVar2);
    }
    else {
      in_xd0 = CONCAT44D(pcVar2,fVar7);
      dVar8 = *(double *)(unsigned)(ar4 + 0x24);
    }
    if (cVar12 == '\0') {
      fVar7 = F32LO(dVar8) / F32HI(dVar8);
    }
    else {
      fVar7 = SUB84(dVar8 / dVar8,0);
    }
    if (cVar13 == '\0') {
      *(float *)(unsigned)(ar4 + 0x30) = fVar7;
      in_dr0 = CONCAT44D(0x40a00000,fVar7);
      *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x40a00000;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x30) = in_xd0;
      in_dr0 = -8.34132164470162e-251;
      *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x8c031c6440a00000;
    }
    (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c031c64(ar4,ar4 + 0x24,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c031b68(ar4,0x8c2846e8,ar6,piVar5));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
  }
  else if (iVar1 != 3) {
    if (iVar1 != 5) goto LAB_8c0977f2;
    goto LAB_8c096864;
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x260);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 716)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,((void *)0x8c033b98),ar6,piVar5));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x110))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_sub(ar4 + 0x264,ar5,ar6,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined4 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x110)),ar6,piVar5));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x110)),0xffffffff,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_length_sq(((undefined4 *)(fr0_ - 0x54)),uVar4,ar6,piVar5));
    fVar7 = F32HI(in_dr0);
    if (cVar13 == '\0') {
      (*(undefined8 *)(fr0_ - 0x2b4)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2b4))+4)),fVar7);
      fVar10 = 300.0;
      in_dr0 = in_xd0;
    }
    else {
      fVar7 = 300.0;
      fVar10 = 8.23963e-43;
      (*(undefined8 *)(fr0_ - 0x2b4)) = in_dr0;
    }
    if (cVar12 != '\0' || fVar7 <= fVar10) {
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x264,ar6,piVar5));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x24c,ar6,piVar5));
    }
    (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c022fc0(ar4 + 0x264,ar5,ar6,piVar5));
    if (cVar13 == '\0') {
      dVar8 = CONCAT44D(0x43960000,fVar10);
    }
    else {
      in_dr0 = CONCAT44D(fVar10,fVar7);
      dVar8 = 1.12946198374237e-311;
    }
    if (cVar12 != '\0' || SUB84(dVar8,0) <= F32HI(dVar8)) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x120))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_sub(ar4 + 0x264,ar5,ar6,piVar5); });
      (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c022dac(ar4 + 0x14,((undefined1 *)(fr0_ - 0x120)),ar6,piVar5));
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(0x41200000,(int)(D2U(dVar8) >> 0x20));
      }
      else {
        dVar9 = -7.932637925129825e-251;
        in_dr0 = dVar8;
      }
      dVar8 = dVar9;
      (*(undefined8 *)(fr0_ - 0x2c8)) = (double)(ulonglong)
                           CONCAT14(cVar12 != '\0' ||
                                    SUB84(dVar8,0) <= F32HI(dVar8),
                                    (undefined4)(*(undefined8 *)(fr0_ - 0x2c8)));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x120)),0xffffffff,ar6,piVar5));
      if ((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2c8))+4)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c022fc0(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,piVar5));
        if (cVar13 == '\0') {
          *(int *)(unsigned)(ar4 + 0x274) = (int)(D2U(dVar8) >> 0x20);
          dVar8 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x274));
        }
        else {
          *(double *)(unsigned)(ar4 + 0x274) = dVar8;
          in_dr0 = *(double *)(unsigned)(ar4 + 0x274);
          dVar8 = 1.35011982200165e-311;
        }
        if (cVar12 == '\0') {
          fVar7 = F32LO(dVar8) * F32HI(dVar8);
        }
        else {
          fVar7 = SUB84(dVar8 * dVar8,0);
        }
        if (cVar13 == '\0') {
          dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),fVar7);
        }
        else {
          dVar8 = *(double *)(unsigned)(ar4 + 0x28);
        }
        if (cVar12 == '\0') {
          fVar7 = F32LO(dVar8) / F32HI(dVar8);
        }
        else {
          fVar7 = SUB84(dVar8 / dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(unsigned)(ar4 + 0x278) = fVar7;
          dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x278),*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          *(double *)(unsigned)(ar4 + 0x278) = in_dr0;
          in_dr0 = *(double *)(unsigned)(ar4 + 0x28);
          dVar8 = *(double *)(unsigned)(ar4 + 0x278);
        }
        if (cVar12 == '\0') {
          fVar7 = F32HI(dVar8);
          dVar8 = CONCAT44D(fVar7,F32LO(dVar8) / fVar7);
        }
        else {
          dVar8 = dVar8 / dVar8;
        }
        if (cVar13 == '\0') {
          *(int *)(unsigned)(ar4 + 0x27c) = SUB84(dVar8,0);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x27c) = in_dr0;
        }
        *(int *)(unsigned)(ar4 + 0x260) = *(int *)(unsigned)(ar4 + 0x260) + 1;
      }
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x130))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_normalize(((undefined1 *)(fr0_ - 0x130)),((void *)0x8c022ec0),ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x140)),ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x140)),0xffffffff,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x130)),0xffffffff,ar6,piVar5));
    piVar5 = ((int *)(fr0_ - 0x150));
    pcVar2 = ((void *)0x8c0230f0);
    ({ unsigned long t0_ = (unsigned long)(piVar5); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c0230f0(ar4 + 0x14,((void *)0x8c0230f0),ar6,piVar5); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x160))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x44)),pcVar2,ar6,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c022dac(((int *)(fr0_ - 0x150)),((undefined1 *)(fr0_ - 0x160)),ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x160)),0xffffffff,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((int *)(fr0_ - 0x150)),0xffffffff,ar6,piVar5));
    ar6 = ar5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c097ba4(ar4,((undefined1 *)(fr0_ - 0x34)),ar5,piVar5));
    if (iVar1 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x170))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_sub(ar4 + 0x264,ar5,ar6,piVar5); });
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined4 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x170)),ar6,piVar5));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x170)),0xffffffff,ar6,piVar5));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_length_sq(((undefined4 *)(fr0_ - 0x54)),((void *)0x8c022e78),ar6,piVar5));
      fVar7 = F32HI(dVar8);
      if (cVar13 == '\0') {
        (*(undefined8 *)(fr0_ - 0x2b4)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2b4))+4)),fVar7);
        fVar10 = 300.0;
      }
      else {
        fVar7 = 300.0;
        fVar10 = 7.45491e-43;
        (*(undefined8 *)(fr0_ - 0x2b4)) = dVar8;
      }
      if (cVar12 == '\0' && fVar10 < fVar7) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x180))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_scale(((undefined4 *)(fr0_ - 0x54)),ar4 + 0x48,ar6,piVar5); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x190))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x180)),((undefined1 *)(unsigned)0x8c13a79c),ar6,piVar5); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1a0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0x190)),&(*(undefined8 *)(fr0_ - 0x2b4)),ar6,piVar5); });
        piVar5 = ar7;
        piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
        (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c032518(ar4,ar5,ar7,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x1b0)),ar5,piVar5,piVar3); });
        dVar8 = (*(undefined8 *)(fr0_ - 0x2b4));
        if (cVar13 == '\0') {
          dVar8 = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x2b4)),0x43960000);
        }
        if (cVar12 == '\0') {
          fVar7 = F32LO(dVar8) / F32HI(dVar8);
        }
        else {
          fVar7 = SUB84(dVar8 / dVar8,0);
        }
        if (cVar12 == '\0') {
          dVar8 = CONCAT44D(1.0 - fVar7,fVar7);
        }
        else {
          dVar8 = CONCAT44D(0x3f800000,fVar7) - CONCAT44D(0x3f800000,fVar7);
        }
        if (cVar13 == '\0') {
          (*(undefined8 *)(fr0_ - 0x2c8)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2c8))+4)),(int)(D2U(dVar8) >> 0x20));
          dVar8 = (*(undefined8 *)(fr0_ - 0x2c8));
        }
        (*(undefined8 *)(fr0_ - 0x2c8)) = dVar8;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1d0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x1c0)),&(*(undefined8 *)(fr0_ - 0x2c8)),piVar5,piVar3); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1e0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x1a0)),((undefined1 *)(fr0_ - 0x1d0)),piVar5,piVar3); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1f0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0x1e0)),((undefined1 *)(unsigned)0x8c13a7a0),piVar5,piVar3); });
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(ar4 + 0x24c,((undefined1 *)(fr0_ - 0x1f0)),piVar5,piVar3));
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1f0)),0xffffffff,piVar5,piVar3));
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1e0)),0xffffffff,piVar5,piVar3));
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1d0)),0xffffffff,piVar5,piVar3));
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c0)),0xffffffff,piVar5,piVar3));
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1b0)),0xffffffff,piVar5,piVar3));
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1a0)),0xffffffff,piVar5,piVar3));
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x190)),0xffffffff,piVar5,piVar3));
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x180)),0xffffffff,piVar5,piVar3));
        (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c023aa0(ar4 + 0x24c,ar5,piVar5,piVar3));
        (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c032788(ar4,ar4 + 0x24c,ar7,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
        iVar1 = ar4 + 0x24c;
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),iVar1,ar7,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
        ar6 = ar7;
        piVar5 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      }
      else {
        iVar1 = ar4 + 0x264;
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),iVar1,ar6,piVar5));
      }
    }
    (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c0231c8(ar4 + 0x14,iVar1,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c02374c(ar4 + 0x14,((undefined1 *)(fr0_ - 0x200)),ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x200)),ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x200)),0xffffffff,ar6,piVar5));
  }
  else if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x264,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,((void *)0x8c033b98),ar6,piVar5));
    if (cVar13 == '\0') {
      dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x27c),*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
      dVar8 = *(double *)(unsigned)(ar4 + 0x27c);
    }
    if (cVar12 == '\0') {
      fVar7 = F32LO(dVar8) - F32HI(dVar8);
    }
    else {
      fVar7 = SUB84(dVar8 - dVar8,0);
    }
    if (cVar13 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar7;
      dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),in_fr3);
      dVar9 = CONCAT44D(0x42700000,*(undefined4 *)(unsigned)(ar4 + 0x27c));
    }
    else {
      *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
      dVar8 = *(double *)(unsigned)(ar4 + 0x28);
      dVar9 = 1.29072414440439e-311;
    }
    if (cVar12 == '\0') {
      fVar7 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar13 == '\0') {
      dVar9 = CONCAT44D(0x40000000,fVar7);
    }
    else {
      dVar9 = 3.74001758157629e-312;
    }
    if (cVar12 == '\0') {
      bVar11 = F32HI(dVar8) <
               F32LO(dVar9) / F32HI(dVar9);
    }
    else {
      bVar11 = dVar8 < dVar9 / dVar9;
    }
    if (bVar11) {
      *(int *)(unsigned)(ar4 + 0x260) = *(int *)(unsigned)(ar4 + 0x260) + 1;
      piVar5 = (int *)(unsigned)0x0;
      ar6 = (int *)(unsigned)0x0;
      (vsp = ((unsigned long)(fr0_ - 716)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0,0));
    }
    piVar3 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x210))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_normalize(((undefined1 *)(fr0_ - 0x210)),piVar3,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x220)),ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x220)),0xffffffff,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x210)),0xffffffff,ar6,piVar5));
    iVar6 = ar4 + 0x14;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x230))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c0230f0(iVar6,iVar6,ar6,piVar5); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x240))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x44)),iVar6,ar6,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x230)),((undefined1 *)(fr0_ - 0x240)),ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x240)),0xffffffff,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x230)),0xffffffff,ar6,piVar5));
    iVar6 = (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c097ba4(ar4,((undefined1 *)(fr0_ - 0x34)),ar5,piVar5));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x250))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c0230f0(ar4 + 0x14,iVar6,ar5,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x250)),ar5,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x250)),0xffffffff,ar5,piVar5));
    ar6 = ar5;
  }
  else if (iVar1 == 2) {
    iVar6 = ar4 + 0x264;
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),iVar6,ar6,piVar5));
    uVar4 = SUB84(in_dr0,0);
    (vsp = ((unsigned long)(fr0_ - 716)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar6,ar6,piVar5));
    if (cVar13 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x48) = 0x3f800000;
      dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x27c),*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x48) = CONCAT44(0x3f800000,uVar4);
      in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
      dVar8 = *(double *)(unsigned)(ar4 + 0x27c);
    }
    if (cVar12 == '\0') {
      fVar7 = F32LO(dVar8) - F32HI(dVar8);
    }
    else {
      fVar7 = SUB84(dVar8 - dVar8,0);
    }
    if (cVar13 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar7;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
    }
    piVar3 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x260))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_normalize(((undefined1 *)(fr0_ - 0x260)),piVar3,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x270)),ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x270)),0xffffffff,ar6,piVar5));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x260)),0xffffffff,ar6,piVar5));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x280))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,ar6,piVar5); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x290))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x44)),((void *)0x8c0230f0),ar6,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x280)),((undefined1 *)(fr0_ - 0x290)),ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x290)),0xffffffff,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x280)),0xffffffff,ar6,piVar5));
    ar5_00 = ((undefined1 *)(fr0_ - 0x34));
    iVar6 = (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c097ba4(ar4,ar5_00,ar5,piVar5));
    ar6 = ar5;
    if (iVar6 == 0) {
      iVar6 = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      piVar5 = (int *)(unsigned)0x0;
      ar6 = (int *)(unsigned)0x0;
      uVar4 = 1;
      (vsp = ((unsigned long)(fr0_ - 716)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0,0));
      ar4_00 = (ulonglong *)(unsigned)(ar4 + 0x28);
      if (cVar13 == '\0') {
        *(undefined4 *)(unsigned)ar4_00 = 0;
      }
      else {
        *ar4_00 = (ulonglong)(uint)fVar7;
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 716)), rand(ar4_00,uVar4,ar6,piVar5));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 716)), libgcc_divide_helper_01031c(uVar4,10,ar6,piVar5));
      *(int *)(unsigned)(ar4 + 0x284) = iVar1 + 0xf;
      ar5_00 = (undefined1 *)(unsigned)0x260;
      *(int *)(unsigned)(ar4 + 0x260) = *(int *)(unsigned)(ar4 + 0x260) + 1;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2a0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x2a0)),ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2a0)),0xffffffff,ar6,piVar5));
  }
  else if (iVar1 == 3) {
    ar5_01 = 0xb0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 716)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,ar6,piVar5));
    if (iVar1 == 1) {
      ar5_01 = *(int *)(unsigned)(ar4 + 0x284) + -1;
      *(int *)(unsigned)(ar4 + 0x284) = ar5_01;
      if (*(int *)(unsigned)(ar4 + 0x284) < 1) {
        iVar6 = 0;
        ar5_01 = 0x40;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      }
    }
    ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x2b4)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_01,ar6,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(ar4 + 0x80,(int)&(*(undefined8 *)(fr0_ - 0x2b4)) + 4,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x2b4)) + 4,0xffffffff,ar6,piVar5));
  }
LAB_8c0977f2:
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2c0))+4)) = iVar6;
  (vsp = ((unsigned long)(fr0_ - 716)), free_if_nonnull_wrap_102790(&(*(undefined4 *)(fr0_ - 0x60)),0xffffffff,ar6,piVar5));
  (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined4 *)(fr0_ - 0x54)),0xffffffff,ar6,piVar5));
  (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,piVar5));
  (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,piVar5));
  return (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2c0))+4));
}

__asm__(".globl _FUN_8c0967d8\n.set _FUN_8c0967d8, _FUN_8c0967d8_def\n");
//@unit 8c097888
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
undefined4 FUN_8c097888_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c097888";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 156; for (int i_ = 0; i_ < 156; i_++) z_[i_] = 0; }
  int iVar1;
  undefined1 *ar5_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0 = 0;
  code *pcVar7;
  double dVar6;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined4 ain0;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar2 = ar5;
  ain0 = ar7;
  (vsp = ((unsigned long)(fr0_ - 156)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 156)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),uVar2,ar6,ar7));
  uVar3 = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c0978d0:
    iVar1 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c034148(ar4 + 0xb0,4,ar6,ar7));
    uVar4 = (undefined4)in_dr0;
    if ((iVar1 != 1) && (iVar1 != 2)) {
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
      return 1;
    }
    uVar2 = 0x8c2846e8;
    (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c031b68(ar4,0x8c2846e8,ar6,ar7));
    in_dr0 = CONCAT44(0x3f800000,uVar4);
    if (cVar10 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x48) = 0x3f800000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x48) = in_dr0;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 3) {
      iVar1 = ar4 + 0x24c;
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),iVar1,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 156)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar1,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 156)); CAnimBody_GetCurFrame(ar4 + 0xb0,iVar1,ar6,ar7); });
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x42920000,(int)in_dr0);
        in_fr15 = F32HI(in_dr0);
      }
      else {
        dVar6 = 1.23979734631016e-311;
      }
      if (cVar9 == '\0') {
        bVar8 = in_fr15 < F32HI(dVar6);
      }
      else {
        bVar8 = CONCAT44D(in_fr14,in_fr15) < dVar6;
      }
      if (!bVar8) {
        *(undefined4 *)(unsigned)(ar4 + 0x248) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 156)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 156)) - 8); FUN_8c0230f0(ar4 + 0x14,iVar1,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x54)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7));
      uVar2 = ar5;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 156)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 156)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_normalize(((undefined1 *)(fr0_ - 0x64)),uVar2,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x74)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 156)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 156)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar6,ar7); });
      ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x98)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 156)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 156)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x34)),uVar2,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x84)),(int)&(*(undefined8 *)(fr0_ - 0x98)) + 4,ar6,ar7));
      if (cVar10 == '\0') {
        (*(undefined8 *)(fr0_ - 0x98)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x98))+4)),(int)(D2U(dVar6) >> 0x20));
        dVar6 = (*(undefined8 *)(fr0_ - 0x98));
      }
      (*(undefined8 *)(fr0_ - 0x98)) = dVar6;
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x98)) + 4,0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6,ar7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c097ba4(ar4,((undefined1 *)(fr0_ - 0x24)),ar5,ar7));
      ar6 = ar5;
      goto LAB_8c097b04;
    }
    if (iVar1 != 5) goto LAB_8c097b04;
    goto LAB_8c0978d0;
  }
  (vsp = ((unsigned long)(fr0_ - 156)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 156)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6,ar7); });
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(0x42200000,(int)in_dr0);
    in_fr15 = F32HI(in_dr0);
  }
  else {
    dVar6 = 2.7216357441417e-312;
  }
  if (cVar9 == '\0') {
    bVar8 = F32HI(dVar6) < in_fr15;
  }
  else {
    bVar8 = dVar6 < CONCAT44D(in_fr14,in_fr15);
  }
  if (bVar8) {
    (vsp = ((unsigned long)(fr0_ - 156)), Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6,ar7));
    if (cVar10 == '\0') {
      uVar2 = SUB84(dVar6,0);
      pcVar7 = (code *)0x40000000;
    }
    else {
      uVar2 = 0x40000000;
      pcVar7 = ((void *)0x8c033b98);
    }
    (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c031ce8(ar4,ain0,(*(undefined4 *)(fr0_ + 0x00000000)),ar7));
    (vsp = ((unsigned long)(fr0_ - 156)), Vec3_assign(ar4 + 0x24c,((undefined1 *)(fr0_ - 0x44)),(*(undefined4 *)(fr0_ + 0x00000000)),ar7));
    (vsp = ((unsigned long)(fr0_ - 156)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,(*(undefined4 *)(fr0_ + 0x00000000)),ar7));
    ar5_00 = ((undefined1 *)(fr0_ - 0x24));
    (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c022fc0(ar5,ar5_00,(*(undefined4 *)(fr0_ + 0x00000000)),ar7));
    if (cVar10 == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),pcVar7);
    }
    else {
      in_xd0 = CONCAT44(pcVar7,uVar2);
      dVar6 = *(double *)(unsigned)(ar4 + 0x24);
    }
    if (cVar9 == '\0') {
      fVar5 = F32LO(dVar6) / F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar10 == '\0') {
      *(float *)(unsigned)(ar4 + 0x30) = fVar5;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd0;
    }
    (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c031c64(ar4,ar5_00,(*(undefined4 *)(fr0_ + 0x00000000)),ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
    ar6 = (*(undefined4 *)(fr0_ + 0x00000000));
  }
LAB_8c097b04:
  (vsp = ((unsigned long)(fr0_ - 156)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 156)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c097888\n.set _FUN_8c097888, _FUN_8c097888_def\n");
//@unit 8c097ba4
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
undefined4 FUN_8c097ba4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c097ba4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 152; for (int i_ = 0; i_ < 152; i_++) z_[i_] = 0; }
  double *pdVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar3 = ar6;
  ar6_00 = ar6;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 152)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 152)) - 8); Vec3_sub(ar5,ar6,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_normalize(((undefined1 *)(fr0_ - 0x34)),uVar3,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x44)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
  uVar3 = 1;
  if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
    (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
    uVar3 = 0;
  }
  else {
    if ((*(int *)(unsigned)(ar4 + 0x40) == 1) || (*(int *)(unsigned)(ar4 + 0x40) == 3)) {
      if (*(int *)(unsigned)(ar4 + 0x44) == 1) {
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c031fc4(ar4,uVar2,ar6_00,ar7));
      }
      pdVar1 = (double *)(unsigned)(ar4 + 0x2c);
      if (cVar9 != '\0') {
        in_xd0 = *pdVar1;
        pdVar1 = (double *)(unsigned)(ar4 + 0x30);
      }
      dVar5 = *pdVar1;
      if (cVar8 == '\0') {
        fVar4 = F32LO(dVar5) / F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 / dVar5,0);
      }
      dVar5 = in_xd0;
      if (cVar9 == '\0') {
        (*(undefined8 *)(fr0_ - 0x88)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x88))+4)),fVar4);
        dVar5 = (*(undefined8 *)(fr0_ - 0x88));
      }
      (*(undefined8 *)(fr0_ - 0x88)) = dVar5;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 152)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 152)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x24)),&(*(undefined8 *)(fr0_ - 0x88)),ar6_00,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 152)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 152)) - 8); Vec3_add(ar4 + 0x14,((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c023aa0(ar4 + 0x14,((undefined1 *)(fr0_ - 0x64)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 152)), Vec3_normalize(ar4 + 0x14,uVar2,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 152)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7));
      pdVar1 = (double *)(unsigned)(ar4 + 0x2c);
      if (cVar9 != '\0') {
        in_xd0 = *pdVar1;
        pdVar1 = (double *)(unsigned)(ar4 + 0x30);
      }
      dVar5 = *pdVar1;
      if (SUB84(dVar5,0) != F32HI(dVar5)) {
        if (cVar9 == '\0') {
          dVar5 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x28);
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        }
        if (cVar8 == '\0' && 0.0 < SUB84(dVar5,0)) {
          if (cVar9 == '\0') {
            dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
            dVar5 = *(double *)(unsigned)(ar4 + 0x24);
          }
          if (cVar8 == '\0') {
            fVar4 = F32LO(dVar5) / F32HI(dVar5);
          }
          else {
            fVar4 = SUB84(dVar5 / dVar5,0);
          }
          if (cVar9 == '\0') {
            dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c),fVar4);
          }
          else {
            dVar5 = *(double *)(unsigned)(ar4 + 0x2c);
          }
          if (cVar8 == '\0') {
            fVar4 = F32LO(dVar5) + F32HI(dVar5);
          }
          else {
            fVar4 = SUB84(dVar5 + dVar5,0);
          }
          if (cVar9 == '\0') {
            *(float *)(unsigned)(ar4 + 0x2c) = fVar4;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x2c) = in_xd0;
          }
        }
        pdVar1 = (double *)(unsigned)(ar4 + 0x2c);
        if (cVar9 != '\0') {
          in_xd0 = *pdVar1;
          pdVar1 = (double *)(unsigned)(ar4 + 0x30);
        }
        dVar5 = *pdVar1;
        if (cVar8 == '\0' && F32HI(dVar5) < SUB84(dVar5,0)) {
          if (cVar9 == '\0') {
            uVar2 = *(undefined4 *)(unsigned)(ar4 + 0x30);
            dVar5 = CONCAT44D(uVar2,SUB84(dVar5,0));
            *(undefined4 *)(unsigned)(ar4 + 0x2c) = uVar2;
          }
          else {
            dVar5 = *(double *)(unsigned)(ar4 + 0x30);
            *(double *)(unsigned)(ar4 + 0x2c) = dVar5;
          }
        }
      }
      (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c022fc0(ar6,ar5,ar6_00,ar7));
      uVar2 = (undefined4)(D2U(dVar5) >> 0x20);
      if (cVar9 == '\0') {
        dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),*(undefined4 *)(unsigned)(ar4 + 0x28));
        (*(undefined4 *)(fr0_ - 0x94)) = uVar2;
      }
      else {
        (*(undefined4 *)(fr0_ - 0x94)) = SUB84(dVar5,0);
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        dVar5 = *(double *)(unsigned)(ar4 + 0x48);
        (*(undefined4 *)(fr0_ - 0x90)) = uVar2;
      }
      if (cVar8 == '\0') {
        fVar4 = F32LO(dVar5) + F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 + dVar5,0);
      }
      if (cVar9 == '\0') {
        uVar6 = CONCAT44((*(undefined4 *)(fr0_ - 0x94)),fVar4);
      }
      else {
        uVar6 = CONCAT44((*(undefined4 *)(fr0_ - 0x90)),(*(undefined4 *)(fr0_ - 0x94)));
      }
      if (cVar8 != '\0' || (float)(uVar6 >> 0x20) <= (float)uVar6) {
        dVar5 = (double)(uVar6 & 0xffffffff);
        if (cVar9 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x2c) = dVar5;
        }
        ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x88)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 152)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 152)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c022dac(ar4 + 0x14,(int)&(*(undefined8 *)(fr0_ - 0x88)) + 4,ar6_00,ar7));
        if (cVar9 == '\0') {
          dVar7 = CONCAT44D(0x42340000,(int)(D2U(dVar5) >> 0x20));
          dVar5 = in_xd0;
        }
        else {
          dVar7 = 2.993931213754161e-78;
        }
        if (cVar8 == '\0') {
          fVar4 = F32LO(dVar7) + F32HI(dVar7);
        }
        else {
          fVar4 = SUB84(dVar7 + dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(unsigned)(ar4 + 0x38) = fVar4;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x38) = dVar5;
        }
        (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x88)) + 4,0xffffffff,ar6_00,ar7));
        if (cVar9 == '\0') {
          dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          dVar5 = *(double *)(unsigned)(ar4 + 0x28);
          dVar7 = *(double *)(unsigned)(ar4 + 0x38);
        }
        if (cVar8 == '\0') {
          fVar4 = F32LO(dVar7) / F32HI(dVar7);
        }
        else {
          fVar4 = SUB84(dVar7 / dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(unsigned)(ar4 + 0x3c) = fVar4;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x3c) = dVar5;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
        uVar3 = 0;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
  }
  return uVar3;
}

__asm__(".globl _FUN_8c097ba4\n.set _FUN_8c097ba4, _FUN_8c097ba4_def\n");
//@unit 8c097e0c
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
uint FUN_8c097e0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c097e0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  
  iVar1 = *(int *)(unsigned)(0x12c + ar4);
  if (iVar1 == 0) {
    ar7 = 0;
    ar6 = 0xffffffff;
    ar5 = 2;
    (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0))
    ;
    (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7));
    *(int *)(unsigned)(0x12c + ar4) = *(int *)(unsigned)(0x12c + ar4) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 1;
    }
    return 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c026858))))
                    (ar4 + 0xb0,ar5,ar6,ar7));
  if (iVar1 == 1) {
    ar5_00 = 2;
    (vsp = ((unsigned long)(fr0_ - 4)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6,ar7));
    *(int *)(unsigned)(0x12c + ar4) = *(int *)(unsigned)(0x12c + ar4) + 1;
  }
  return (uint)(iVar1 != 1);
}

__asm__(".globl _FUN_8c097e0c\n.set _FUN_8c097e0c, _FUN_8c097e0c_def\n");
//@unit 8c097ef0
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
undefined4 FUN_8c097ef0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c097ef0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 in_PR = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 300) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
  *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031b58(ar4 + 0xb0,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c032204(ar4 + 0xb0,ar5,ar6,ar7); });
  ar5_00 = 1;
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c0321fc(ar4 + 0xb0,1,ar6,ar7); });
  *(undefined4 *)(unsigned)(ar4 + 0x138) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1e8) = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030eb8(ar4 + 0x1fc,ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
  if ((-1 < *(int *)(unsigned)(ar4 + 0x2f4)) && (-1 < *(int *)(unsigned)(ar4 + 0x2f8))) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c06b1d8(*(undefined4 *)(unsigned)(ar4 + 0x2f4),*(undefined4 *)(unsigned)(ar4 + 0x2f8),ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x2f4) = 0xffffffff;
    *(undefined4 *)(unsigned)(ar4 + 0x2f8) = 0xffffffff;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x240) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x244) = 0;
  return 0x244;
}

__asm__(".globl _FUN_8c097ef0\n.set _FUN_8c097ef0, _FUN_8c097ef0_def\n");
//@unit 8c097fcc
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
//@unit 8c0982b8
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
int FUN_8c0982b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0982b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x280;
  *(undefined1 *)(unsigned)(0x280 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0982b8\n.set _FUN_8c0982b8, _FUN_8c0982b8_def\n");
//@unit 8c0982c4
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
undefined4 FUN_8c0982c4_def(int *ar4,float *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0982c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 260; for (int i_ = 0; i_ < 260; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float *pfVar2;
  undefined1 *puVar3;
  int ar6_00;
  undefined4 unaff_r12 = 0;
  undefined4 unaff_r13 = 0;
  undefined4 unaff_r14 = 0;
  undefined8 *puVar4;
  float fVar5;
  double in_dr0 = 0;
  undefined4 uVar8;
  ulonglong uVar6;
  double dVar7;
  double in_dr14 = 0;
  double dVar9;
  undefined8 in_xd0 = 0;
  undefined8 in_xd14 = 0;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    puVar4 = (undefined8 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x8)) + 4);
    (*(undefined8 *)(fr0_ - 0x8)) = CONCAT44(SUB84(in_dr14,0),(undefined4)(*(undefined8 *)(fr0_ - 0x8)));
  }
  else {
    puVar4 = &(*(undefined8 *)(fr0_ - 0x8));
    (*(undefined8 *)(fr0_ - 0x8)) = in_xd14;
  }
  *(undefined4 *)(unsigned)((int)puVar4 + -4) = unaff_r14;
  *(undefined4 *)(unsigned)((int)puVar4 + -8) = unaff_r13;
  *(undefined4 *)(unsigned)((int)puVar4 + -0xc) = unaff_r12;
  *(undefined4 *)(unsigned)((int)puVar4 + -0x10) = in_PR;
  *(undefined4 *)(unsigned)((int)puVar4 + -0xf4) = ar7;
  pfVar2 = ar5;
  ar6_00 = ar6;
  (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), FUN_8c022d04((int)ar4 + 0x200,ar5,ar6,ar7));
  (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c4c))))
            ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),pfVar2,ar6_00,ar7));
  (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c4c))))
            ((undefined1 *)(unsigned)((int)puVar4 + 0xc4 + -0xf4),pfVar2,ar6_00,ar7));
  (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c4c))))
            ((undefined1 *)(unsigned)((int)puVar4 + 0xb4 + -0xf4),pfVar2,ar6_00,ar7));
  if ((*(int *)(unsigned)(ar6 + 0x68) != 0) && ((int)((uint)*(byte *)(unsigned)(0x1fc + (int)ar4) << 0x1e) < 0))
  {
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xc4 + -0xf4),ar5,ar6_00,ar7));
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xb4 + -0xf4),*(int *)(unsigned)(ar6 + 0x68) + 4,ar6_00,
               ar7));
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar6 + 0x68) + 0x158));
    }
    *(unsigned *)(unsigned)((int)puVar4 + -0xf8) = (undefined1 *)(unsigned)((int)puVar4 + 0xa4 + -0xf4);
    ({ unsigned long t0_ = (unsigned long)(
               *(undefined4 *)(unsigned)((int)puVar4 + -0xf8)); *(unsigned *)(((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023ae0))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xc8 + -0xf8),
               (undefined1 *)(unsigned)((int)puVar4 + 0xb8 + -0xf8),ar6_00,ar7); });
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),
               (undefined1 *)(unsigned)((int)puVar4 + 0xa4 + -0xf4),ar6_00,ar7));
    uVar1 = 0xffffffff;
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xa4 + -0xf4),0xffffffff,ar6_00,ar7));
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022e78))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),uVar1,ar6_00,ar7));
    uVar8 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((int)puVar4 + -200) = uVar8;
      in_dr0 = CONCAT44D(uVar8,ar4[0x12]);
    }
    else {
      *(double *)(unsigned)((int)puVar4 + -200) = in_dr0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x12);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = F32LO(in_dr0) + F32LO(in_dr14);
    }
    else {
      fVar5 = SUB84(in_dr0 + in_dr14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar4 + -200),fVar5);
    }
    else {
      dVar7 = *(double *)(unsigned)((int)puVar4 + -200);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar7 - dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar4 + -0xc4) = fVar5;
      fVar5 = *(float *)(unsigned)((int)puVar4 + -0xc4);
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar4 + -0xc4) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)((int)puVar4 + -0xc4);
    }
    uVar6 = (ulonglong)(uint)fVar5;
    if (in_FPSCR_PR != '\0' || fVar5 <= 0.0) {
      if (in_FPSCR_SZ == '\0') {
        uVar6 = CONCAT44((*(undefined1 *)(unsigned)0x8c098500),fVar5);
        *(undefined4 *)(unsigned)((int)puVar4 + -0xc4) = (*(undefined1 *)(unsigned)0x8c098500);
      }
      else {
        uVar6 = CONCAT44(((void *)(unsigned)0x8c022f54),(*(undefined1 *)(unsigned)0x8c098500));
        *(ulonglong *)(unsigned)((int)puVar4 + -0xc4) = uVar6;
      }
    }
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022f54))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),uVar1,ar6_00,ar7));
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), Vec3_length_sq(ar4 + 1,uVar1,ar6_00,ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar4 + -0xcc) = (int)(uVar6 >> 0x20);
      uVar6 = (ulonglong)*(uint *)(unsigned)((int)puVar4 + -0xcc);
    }
    else {
      *(ulonglong *)(unsigned)((int)puVar4 + -0xcc) = uVar6;
      in_xd0 = *(undefined8 *)(unsigned)((int)puVar4 + -0xcc);
    }
    fVar5 = (float)uVar6;
    if (in_FPSCR_PR == '\0' && 0.0 < fVar5) {
      *(unsigned *)(unsigned)((int)puVar4 + -0xf8) = (undefined1 *)(unsigned)((int)puVar4 + 0x94 + -0xf4);
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar4 + -0xf8)); *(unsigned *)(((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023b8c))))
                (ar4 + 5,(&(*(undefined1 *)(unsigned)0x8c13a7a4)),ar6_00,ar7); });
      *(unsigned *)(unsigned)((int)puVar4 + -0xf8) = (undefined1 *)(unsigned)((int)puVar4 + 0x84 + -0xf4);
      puVar3 = (undefined1 *)(unsigned)((int)puVar4 + 0x98 + -0xf8);
      ({ unsigned long t0_ = (unsigned long)(
                 *(undefined4 *)(unsigned)((int)puVar4 + -0xf8)); *(unsigned *)(((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a34))))
                ((undefined1 *)(unsigned)((int)puVar4 + 0xd8 + -0xf8),puVar3,ar6_00,ar7); });
      uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022f54))))
                        ((undefined1 *)(unsigned)((int)puVar4 + 0x84 + -0xf4),puVar3,ar6_00,ar7));
      *(undefined4 *)(unsigned)((int)puVar4 + -0xd0) = uVar1;
      (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
                ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),
                 *(undefined4 *)(unsigned)((int)puVar4 + -0xd0),ar6_00,ar7));
      (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
                ((undefined1 *)(unsigned)((int)puVar4 + 0x84 + -0xf4),0xffffffff,ar6_00,ar7));
      (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
                ((undefined1 *)(unsigned)((int)puVar4 + 0x94 + -0xf4),0xffffffff,ar6_00,ar7));
    }
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023bf4))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),
               (undefined1 *)(unsigned)((int)puVar4 + -0xc4),ar6_00,ar7));
    in_dr0 = (double)(ulonglong)(uint)fVar5;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((int)puVar4 + 0xd8 + -0xf4) = 0;
    }
    else {
      *(double *)(unsigned)((int)puVar4 + 0xd8 + -0xf4) = in_dr0;
    }
    pfVar2 = (float *)(unsigned)((int)puVar4 + 0xd4 + -0xf4);
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), Vec3_assign((int)ar4 + 0x200,pfVar2,ar6_00,ar7));
  }
  if ((*(int *)(unsigned)(ar6 + 100) != 0) && ((int)((uint)*(byte *)(unsigned)(0x1fc + (int)ar4) << 0x1d) < 0)) {
    if ((-1 < *(int *)(unsigned)(0x2f4 + (int)ar4)) && (-1 < *(int *)(unsigned)(0x2f8 + (int)ar4))) {
      uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x114 + *(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8)))))
                        (*(int *)(unsigned)(ar6 + 0x50),pfVar2,ar6_00,ar7));
      *(undefined4 *)(unsigned)((int)puVar4 + -0xd4) = uVar1;
      if (*(int *)(unsigned)((int)puVar4 + -0xd4) == 0x12) {
        (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x2c))))(ar4,pfVar2,ar6_00,ar7));
      }
      else {
        uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x114 + *(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8)))))
                          (*(int *)(unsigned)(ar6 + 0x50),pfVar2,ar6_00,ar7));
        *(undefined4 *)(unsigned)((int)puVar4 + -0xd8) = uVar1;
        if (*(int *)(unsigned)((int)puVar4 + -0xd8) == 0x13) {
          uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x180 + *(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8)))))
                            (*(int *)(unsigned)(ar6 + 0x50),pfVar2,ar6_00,ar7));
          *(undefined4 *)(unsigned)((int)puVar4 + -0xdc) = uVar1;
          if (*(int *)(unsigned)((int)puVar4 + -0xdc) == 9) {
            (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x2c))))(ar4,pfVar2,ar6_00,ar7));
          }
        }
      }
      (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
                ((undefined1 *)(unsigned)((int)puVar4 + 0xb4 + -0xf4),0xffffffff,ar6_00,ar7));
      (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
                ((undefined1 *)(unsigned)((int)puVar4 + 0xc4 + -0xf4),0xffffffff,ar6_00,ar7));
      uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
                        ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),0xffffffff,ar6_00,ar7));
      return uVar1;
    }
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x170 + *(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8)))))
              (*(int *)(unsigned)(ar6 + 0x50),pfVar2,ar6_00,ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar4 + -0xe0) = (int)((ulonglong)in_dr0 >> 0x20);
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(unsigned)((int)puVar4 + -0xe0));
      dVar7 = CONCAT44D((*(undefined1 *)(unsigned)0x8c09873c),SUB84(in_dr0,0));
    }
    else {
      *(double *)(unsigned)((int)puVar4 + -0xe0) = in_dr0;
      dVar7 = CONCAT44D(0xc4,(*(undefined1 *)(unsigned)0x8c09873c));
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                               F32LO(in_dr14) + F32HI(dVar7));
    }
    else {
      dVar9 = in_dr14 + dVar7;
    }
    pfVar2 = ar5;
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xc4 + -0xf4),ar5,ar6_00,ar7));
    *(unsigned *)(unsigned)((int)puVar4 + -0xf8) = (undefined1 *)(unsigned)((int)puVar4 + -0x80);
    ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar4 + -0xf8)); *(unsigned *)(((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02f670))))
              (*(undefined4 *)(unsigned)(ar6 + 0x50),pfVar2,ar6_00,ar7); });
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xb4 + -0xf4),
               (undefined1 *)(unsigned)((int)puVar4 + -0x80),ar6_00,ar7));
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar4 + -0x80),0xffffffff,ar6_00,ar7));
    *(unsigned *)(unsigned)((int)puVar4 + -0xf8) = (undefined1 *)(unsigned)((int)puVar4 + -0x90);
    ({ unsigned long t0_ = (unsigned long)(
               *(undefined4 *)(unsigned)((int)puVar4 + -0xf8)); *(unsigned *)(((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023ae0))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xc8 + -0xf8),
               (undefined1 *)(unsigned)((int)puVar4 + 0xb8 + -0xf8),ar6_00,ar7); });
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),
               (undefined1 *)(unsigned)((int)puVar4 + -0x90),ar6_00,ar7));
    uVar1 = 0xffffffff;
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar4 + -0x90),0xffffffff,ar6_00,ar7));
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022e78))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),uVar1,ar6_00,ar7));
    uVar8 = (undefined4)(D2U(dVar7) >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((int)puVar4 + -0xe4) = uVar8;
      dVar7 = CONCAT44D(uVar8,ar4[0x12]);
    }
    else {
      *(double *)(unsigned)((int)puVar4 + -0xe4) = dVar7;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x12);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = F32LO(dVar7) + F32LO(dVar9);
    }
    else {
      fVar5 = SUB84(dVar7 + dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar4 + -0xe4),fVar5);
    }
    else {
      dVar7 = *(double *)(unsigned)((int)puVar4 + -0xe4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar7 - dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = CONCAT44D((*(undefined1 *)(unsigned)0x8c098768),fVar5);
    }
    else {
      dVar7 = CONCAT44D((*(undefined1 *)(unsigned)0x8c09876c),(*(undefined1 *)(unsigned)0x8c098768));
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = F32LO(dVar7) * F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar4 + -0xc4) = fVar5;
      fVar5 = *(float *)(unsigned)((int)puVar4 + -0xc4);
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar4 + -0xc4) = in_xd0;
    }
    uVar6 = (ulonglong)(uint)fVar5;
    if (in_FPSCR_PR != '\0' || fVar5 <= 0.0) {
      if (in_FPSCR_SZ == '\0') {
        uVar6 = CONCAT44((*(undefined1 *)(unsigned)0x8c09876c),fVar5);
        *(undefined4 *)(unsigned)((int)puVar4 + -0xc4) = (*(undefined1 *)(unsigned)0x8c09876c);
      }
      else {
        uVar6 = CONCAT44(((void *)(unsigned)0x8c022f54),(*(undefined1 *)(unsigned)0x8c09876c));
        *(ulonglong *)(unsigned)((int)puVar4 + -0xc4) = uVar6;
      }
    }
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022f54))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),uVar1,ar6_00,ar7));
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), Vec3_length_sq(ar4 + 1,uVar1,ar6_00,ar7));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar4 + -0xe8) = (int)(uVar6 >> 0x20);
      uVar6 = (ulonglong)*(uint *)(unsigned)((int)puVar4 + -0xe8);
    }
    else {
      *(ulonglong *)(unsigned)((int)puVar4 + -0xe8) = uVar6;
    }
    fVar5 = (float)uVar6;
    if (in_FPSCR_PR == '\0' && 0.0 < fVar5) {
      *(unsigned *)(unsigned)((int)puVar4 + -0xf8) = (undefined1 *)(unsigned)((int)puVar4 + -0xa0);
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar4 + -0xf8)); *(unsigned *)(((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023b8c))))
                (ar4 + 5,(&(*(undefined1 *)(unsigned)0x8c13a7a8)),ar6_00,ar7); });
      *(unsigned *)(unsigned)((int)puVar4 + -0xf8) = (undefined1 *)(unsigned)((int)puVar4 + -0xb0);
      puVar3 = (undefined1 *)(unsigned)((int)puVar4 + -0xa0);
      ({ unsigned long t0_ = (unsigned long)(
                 *(undefined4 *)(unsigned)((int)puVar4 + -0xf8)); *(unsigned *)(((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a34))))
                ((undefined1 *)(unsigned)((int)puVar4 + 0xd8 + -0xf8),puVar3,ar6_00,ar7); });
      uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022f54))))
                        ((undefined1 *)(unsigned)((int)puVar4 + -0xb0),puVar3,ar6_00,ar7));
      *(undefined4 *)(unsigned)((int)puVar4 + -0xec) = uVar1;
      (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023a14))))
                ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),
                 *(undefined4 *)(unsigned)((int)puVar4 + -0xec),ar6_00,ar7));
      (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar4 + -0xb0),0xffffffff,ar6_00,ar7));
      (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar4 + -0xa0),0xffffffff,ar6_00,ar7));
    }
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c023bf4))))
              ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),
               (undefined1 *)(unsigned)((int)puVar4 + -0xc4),ar6_00,ar7));
    puVar3 = (undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4);
    (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), FUN_8c023aa0((int)ar4 + 0x200,puVar3,ar6_00,ar7));
    if (*(int *)(unsigned)(0x128 + (int)ar4) == 3) {
      if ((*(int *)(unsigned)(0x124 + (int)ar4) == 10) && (*(int *)(unsigned)(0x12c + (int)ar4) < 2)) {
        *(undefined4 *)(unsigned)(0x12c + (int)ar4) = 0;
        ar4[0x10] = 5;
      }
      else if ((*(int *)(unsigned)(0x248 + (int)ar4) == 2) && (*(int *)(unsigned)(0x124 + (int)ar4) != 10)
              ) {
        *(undefined4 *)(unsigned)(0x288 + (int)ar4) = 1;
        *(unsigned *)(unsigned)((int)puVar4 + -0xf8) = (undefined1 *)(unsigned)((int)puVar4 + -0xc0);
        ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar4 + -0xf8)); *(unsigned *)(((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0230f0))))
                  ((int)ar4 + 0x80,puVar3,ar6_00,ar7); });
        (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), Vec3_assign(ar4 + 5,(undefined1 *)(unsigned)((int)puVar4 + -0xc0),ar6_00,ar7));
        uVar1 = 0xffffffff;
        (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar4 + -0xc0),0xffffffff,ar6_00,ar7))
        ;
        *(undefined4 *)(unsigned)(0x248 + (int)ar4) = 0;
        ar4[0x10] = 5;
        (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033e68))))
                  ((int)ar4 + 0xb0,uVar1,ar6_00,ar7));
      }
    }
    else {
      uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c026024))))
                        (*(undefined4 *)(unsigned)((int)puVar4 + -0xf4),puVar3,ar6_00,ar7));
      *(undefined4 *)(unsigned)((int)puVar4 + -0xf0) = uVar1;
      if (*(int *)(unsigned)((int)puVar4 + -0xf0) == 0) {
        if (in_FPSCR_SZ == '\0') {
          fVar5 = *ar5;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar7 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0x200),fVar5);
        }
        else {
          dVar7 = *(double *)(unsigned)((int)ar4 + 0x200);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = F32LO(dVar7) + F32HI(dVar7);
        }
        else {
          fVar5 = SUB84(dVar7 + dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar6 = CONCAT44((*(undefined1 *)(unsigned)0x8c098890),fVar5);
        }
        else {
          uVar6 = CONCAT44(0xb4,(*(undefined1 *)(unsigned)0x8c098890));
        }
        if (in_FPSCR_PR == '\0' && (float)(uVar6 >> 0x20) < (float)uVar6) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)((int)ar4 + 0x200) = 0;
          }
          else {
            *(ulonglong *)(unsigned)((int)ar4 + 0x200) = uVar6 & 0xffffffff;
          }
        }
      }
    }
  }
  (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
            ((undefined1 *)(unsigned)((int)puVar4 + 0xb4 + -0xf4),0xffffffff,ar6_00,ar7));
  (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
            ((undefined1 *)(unsigned)((int)puVar4 + 0xc4 + -0xf4),0xffffffff,ar6_00,ar7));
  uVar1 = (vsp = (puVar4 ? (unsigned long)puVar4 - 248 : (unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022cb0))))
                    ((undefined1 *)(unsigned)((int)puVar4 + 0xd4 + -0xf4),0xffffffff,ar6_00,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0982c4\n.set _FUN_8c0982c4, _FUN_8c0982c4_def\n");
//@unit 8c0988a4
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
undefined4 FUN_8c0988a4_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0988a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int *a6;
  float fVar2;
  ulonglong in_dr0 = 0;
  double dVar3;
  undefined8 in_xd0 = 0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
    if (cVar5 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0 & 0xffffffff;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x300) = 0;
    if (cVar5 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0xa0) = in_dr0 & 0xffffffff;
    }
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c314(ar4,ar5,ar6,ar7));
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 1;
    }
    a6 = ar6;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0324ac(ar4,ar5,ar6,ar7));
    iVar1 = ar5;
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x128))))(ar6,ar5,a6,ar7));
    if (cVar5 == '\0') {
      in_dr0 = CONCAT44((int)(in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar5 + 4));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar5 + 4);
    }
    if (cVar4 != '\0' || (float)in_dr0 <= (float)(in_dr0 >> 0x20)) {
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x300) = 0;
      if (cVar5 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xa0) = in_dr0 & 0xffffffff;
      }
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c073c9c(ar4,iVar1,a6,ar7));
      return 0;
    }
    if (cVar5 == '\0') {
      dVar3 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0xa0));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0xa0);
      dVar3 = 1.6066918270171573e+73;
    }
    if (cVar4 == '\0') {
      fVar2 = F32LO(dVar3) + F32HI(dVar3);
    }
    else {
      fVar2 = SUB84(dVar3 + dVar3,0);
    }
    if (cVar5 == '\0') {
      *(float *)(unsigned)(ar4 + 0xa0) = fVar2;
      return 1;
    }
    *(undefined8 *)(unsigned)(ar4 + 0xa0) = in_xd0;
    return 1;
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x300);
  *(int *)(unsigned)(ar4 + 0x300) = iVar1 + 1;
  if (0x95 < iVar1 + 1) {
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c0988a4\n.set _FUN_8c0988a4, _FUN_8c0988a4_def\n");
//@unit 8c0989f0
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
int FUN_8c0989f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0989f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  undefined8 in_dr0 = 0;
  char cVar4;
  
  cVar4 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7));
    if (iVar1 == 1) {
      uVar3 = 100;
      uVar2 = 0;
      (*(int *)(fr0_ - 0x10)) = (vsp = ((unsigned long)(fr0_ - 28)), rand_range(ar4,0,100,ar7));
      if ((*(int *)(fr0_ - 0x10)) < 0x3c) {
        (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c032ab0(ar4,uVar2,uVar3,ar7));
        iVar1 = (int)((ulonglong)in_dr0 >> 0x20);
        (*(int *)(fr0_ - 0x14)) = iVar1;
        if (cVar4 != '\0') {
          (*(int *)(fr0_ - 0x14)) = (int)in_dr0;
          (*(int *)(fr0_ - 0x10)) = iVar1;
        }
        iVar1 = 0x14;
        if (cVar4 == '\0') {
          *(int *)(unsigned)(ar4 + 0x304) = (*(int *)(fr0_ - 0x14));
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x304) = CONCAT44((*(int *)(fr0_ - 0x10)),(*(int *)(fr0_ - 0x14)));
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c032ab0(ar4,uVar2,uVar3,ar7));
        uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
        (*(undefined4 *)(fr0_ - 0x18)) = uVar2;
        if (cVar4 != '\0') {
          (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)in_dr0;
          (*(int *)(fr0_ - 0x14)) = uVar2;
        }
        iVar1 = 0x10;
        if (cVar4 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x304) = (*(undefined4 *)(fr0_ - 0x18));
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x304) = CONCAT44((*(int *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
        }
      }
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7));
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), rand_range(ar4,0,100,ar7));
      if (iVar1 < 0x50) {
        ar7_00 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 1;
        (vsp = ((unsigned long)(fr0_ - 28)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c032ab0(ar4,uVar2,uVar3,ar7_00));
        if (cVar4 == '\0') {
          *(int *)(unsigned)(ar4 + 0x304) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x304) = in_dr0;
        }
      }
      else {
        ar7_00 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 7;
        (vsp = ((unsigned long)(fr0_ - 28)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c032ab0(ar4,uVar2,uVar3,ar7_00));
        if (cVar4 == '\0') {
          *(int *)(unsigned)(ar4 + 0x304) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x304) = in_dr0;
        }
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,ar7_00));
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0989f0\n.set _FUN_8c0989f0, _FUN_8c0989f0_def\n");
//@unit 8c098b6c
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
undefined4 FUN_8c098b6c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c098b6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125ff0),ar5,ar6,ar7));
  uVar3 = 0x8c2846a0;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 52)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2846a0,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126000),pcVar2,uVar3,ar7));
  uVar3 = 0x8c2846ac;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 52)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2846ac,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126010),pcVar2,uVar3,ar7));
  uVar3 = 0x8c2846b8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 52)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2846b8,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126020),pcVar2,uVar3,ar7));
  uVar3 = 0x8c2846c4;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 52)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2846c4,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126030) = CONCAT44((*(undefined1 *)(unsigned)0x8c126034),0x800000);
  }
  else {
                    
    (*(undefined4 *)(unsigned)(unsigned)0x8c126030) = 0xffffffff00800000;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c030e34(((undefined1 *)(fr0_ - 0x1c)),pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c05d608(0x8c2846d0,uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c030e34(((undefined1 *)(fr0_ - 0x34)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c05d608(0x8c2846e8,uVar1,uVar3,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c098b6c\n.set _FUN_8c098b6c, _FUN_8c098b6c_def\n");
//@unit 8c098ca8
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
undefined4 * FUN_8c098ca8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c098ca8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f064(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12a7a8));
  return ar4;
}

__asm__(".globl _FUN_8c098ca8\n.set _FUN_8c098ca8, _FUN_8c098ca8_def\n");
//@unit 8c098ccc
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
undefined4 * Class_12a7a8_m0_098ccc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a7a8_m0_098ccc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12a7a8);
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 12)), Class_129c70_m0_02f1b8(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12a7a8_m0_098ccc\n.set _Class_12a7a8_m0_098ccc, _Class_12a7a8_m0_098ccc_def\n");
//@unit 8c098d14
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
int Class_12a7a8_m1_098d14_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a7a8_m1_098d14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *ar6_00;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar6 = 0;
  (*(undefined1 *)(unsigned)0x8c13a920) = *(undefined4 *)(unsigned)(ar4 + 0x9c);
  (*(undefined1 *)(unsigned)0x8c13a924) = *(undefined4 *)(unsigned)(ar4 + 0xa0);
  (*(undefined1 *)(unsigned)0x8c13a928) = *(undefined4 *)(unsigned)(ar4 + 0xa4);
  piVar5 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c099858(ar4,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_026024(ar5,piVar5,ar6_00,ar7));
  if (iVar1 == 0) {
    iVar4 = ar6[1];
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(iVar4,piVar5,ar6_00,ar7));
    if (iVar1 == 0x13) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), rand(iVar4,piVar5,ar6_00,ar7));
      piVar5 = (int *)(unsigned)0x64;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar2,100,ar6_00,ar7));
      if ((iVar1 < 1) && (*(int *)(unsigned)(ar4 + 4) != 0xb)) {
        *(undefined4 *)(unsigned)(ar4 + 4) = 0xb;
        *(undefined4 *)(unsigned)(ar4 + 8) = 0x55;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c099b0c(ar4,ar5,ar6_00,ar7));
        piVar5 = (int *)(unsigned)0x4a6;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f298(ar4,0x4a6,ar6_00,ar7));
      }
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_026024(ar5,piVar5,ar6_00,ar7));
  if (iVar1 == 1) {
    iVar4 = ar6[1];
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(iVar4,piVar5,ar6_00,ar7));
    if (iVar1 == 0x13) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), rand(iVar4,piVar5,ar6_00,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar2,10000,ar6_00,ar7));
      if (iVar1 < 1) {
        piVar5 = (int *)(unsigned)0x0;
        while( true ) {
          uVar2 = 10;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,10,ar6_00,ar7));
          if (iVar1 <= (int)piVar5) break;
          uVar2 = 10;
          ar6_00 = piVar5;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,10,piVar5,ar7));
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x114))))(iVar1,uVar2,ar6_00,ar7));
          if (iVar1 == 0x13) {
            uVar2 = 10;
            ar6_00 = piVar5;
            iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,10,piVar5,ar7));
            iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0xb4))))(iVar1,uVar2,ar6_00,ar7));
            if (iVar1 == 1) {
              iVar6 = iVar6 + 1;
              uVar2 = 10;
              ar6_00 = piVar5;
              iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,10,piVar5,ar7));
              iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x180))))(iVar1,uVar2,ar6_00,ar7));
              if (iVar1 == 0xb) {
                iVar7 = iVar7 + 1;
              }
            }
          }
          piVar5 = (int *)(unsigned)((int)piVar5 + 1);
        }
        if ((((iVar7 == 0) && (3 < iVar6)) && (*(int *)(unsigned)(ar4 + 4) == 0)) &&
           (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x1a8))))(ar5,uVar2,ar6_00,ar7)), iVar1 == 1)) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0996e4(ar6[3],*ar6,ar6_00,ar7));
          *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
          *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
          *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 0xb;
          *(undefined4 *)(unsigned)(ar4 + 0x9c) = 0xb;
          (*(undefined1 *)(unsigned)0x8c13a920) = 0xb;
          *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0xc;
          (*(undefined1 *)(unsigned)0x8c13a924) = 0xc;
          *(undefined4 *)(unsigned)(ar4 + 0xa4) = 0xc;
          (*(undefined1 *)(unsigned)0x8c13a928) = 0xc;
        }
      }
    }
  }
  piVar5 = ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f20c(ar4,ar6,ar6_00,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_05eed8(ar4,piVar5,ar6_00,ar7));
  piVar5 = ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c099714(ar4,ar5,ar6,uVar2));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar6[1],ar5,piVar5,uVar2));
  if ((((short)uVar3 == 1) && (uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035bf8(ar6[3],ar5,piVar5,uVar2)), (char)uVar3 == '\0'))
     && (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(ar6[1],ar5,piVar5,uVar2)), iVar1 == 0x11)) {
    *(undefined1 *)(unsigned)(ar4 + 0x98) = 3;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar6 + 8) + 0xb8))))(*ar6,ar5,piVar5,uVar2));
  if ((iVar1 == 1) && (*(char *)(unsigned)(ar4 + 0x98) < '\t')) {
    *(undefined1 *)(unsigned)(ar4 + 0x98) = 8;
  }
  if ((*(char *)(unsigned)(ar4 + 0x98) < '\n') && (-1 < *(char *)(unsigned)(ar4 + 0x98))) {
                    
    *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
    *(undefined4 *)(unsigned)(ar4 + 0x9c) = 1;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
    (*(undefined1 *)(unsigned)0x8c13a920) = 1;
    *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0xc;
    (*(undefined1 *)(unsigned)0x8c13a924) = 0xc;
    *(undefined4 *)(unsigned)(ar4 + 0xa4) = 0xc;
    (*(undefined1 *)(unsigned)0x8c13a928) = 0xc;
    piVar5 = (int *)(unsigned)0x1b;
    ar5 = (int *)(unsigned)0x26;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar6[6],0x26,0x1b,uVar2));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c099ab8(ar4,ar5,piVar5,uVar2));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c05ee90(ar6[2],ar5,piVar5,uVar2));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_124_027930(ar6[2],ar5,piVar5,uVar2));
  iVar6 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_40_05eea0(ar4,ar5,piVar5,uVar2));
  if (iVar1 != iVar6) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_40_05eea0(ar4,ar5,piVar5,uVar2));
    iVar6 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c031b08(ar6[2],uVar3,1,uVar2));
  }
  return iVar6;
}

__asm__(".globl _Class_12a7a8_m1_098d14\n.set _Class_12a7a8_m1_098d14, _Class_12a7a8_m1_098d14_def\n");
//@unit 8c0996c4
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
undefined4 FUN_8c0996c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0996c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 0x50) = *(char *)(unsigned)(ar4 + 0x50) + -1;
  return 0x50;
}

__asm__(".globl _FUN_8c0996c4\n.set _FUN_8c0996c4, _FUN_8c0996c4_def\n");
//@unit 8c0996dc
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
undefined4 FUN_8c0996dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0996dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0x4c) = (undefined1)ar5;
  return 0x4c;
}

__asm__(".globl _FUN_8c0996dc\n.set _FUN_8c0996dc, _FUN_8c0996dc_def\n");
//@unit 8c0996e4
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
undefined4 FUN_8c0996e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0996e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x48) = ar5;
  return 0x48;
}

__asm__(".globl _FUN_8c0996e4\n.set _FUN_8c0996e4, _FUN_8c0996e4_def\n");
//@unit 8c0996ec
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
undefined4 ret_const_0_0996ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_0996ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0996ec\n.set _ret_const_0_0996ec, _ret_const_0_0996ec_def\n");
//@unit 8c0996f4
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
undefined4 Class_12a7a8_m2_0996f4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a7a8_m2_0996f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0xc))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Class_12a7a8_m2_0996f4\n.set _Class_12a7a8_m2_0996f4, _Class_12a7a8_m2_0996f4_def\n");
//@unit 8c099714
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
undefined4 FUN_8c099714_def(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c099714";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 a5;
  int *piVar2;
  
  piVar2 = ar6;
  if (*(int *)(unsigned)(ar4 + 0x38) == 2) {
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) =
         *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13a884) + *(int *)(unsigned)(ar4 + 0xc) * 4 + ar7 * 0xc);
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c099914(ar4,ar5,ar6,ar7));
    a5 = 1;
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c02f404(ar4,1,piVar2,ar7); });
  }
  else {
    (*(int *)(fr0_ - 0x28)) = *(int *)(unsigned)(ar4 + 0xc);
    *(undefined4 *)(unsigned)(ar4 + 0x40) = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13a884) + (*(int *)(fr0_ - 0x28)) * 4 + ar7 * 0xc)
    ;
    a5 = ar5;
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 == 2) {
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c02f404(ar4,3,piVar2,ar7); });
  }
  else if (iVar1 == 4) {
    if (*(int *)(unsigned)(ar4 + 0x8c) == 1) {
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 7;
      *(undefined4 *)(unsigned)(ar4 + 0x8c) = 0;
    }
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c099b0c(ar4,ar5,piVar2,ar7));
  }
  else if (iVar1 == 8) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar6 + 8) + 0xb4))))(*ar6,a5,piVar2,ar7));
    if (iVar1 == 1) {
      iVar1 = *ar6;
      (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c027954(iVar1,a5,piVar2,ar7));
      (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c0c4e2c(iVar1,a5,piVar2,ar7));
    }
  }
  else if ((iVar1 == 0xb) && (*(int *)(unsigned)(ar4 + 0x8c) == 1)) {
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c099850(ar6[3],1,piVar2,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x8c) = 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c099714\n.set _FUN_8c099714, _FUN_8c099714_def\n");
//@unit 8c099850
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
undefined4 FUN_8c099850_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c099850";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0x45) = (undefined1)ar5;
  return 0x45;
}

__asm__(".globl _FUN_8c099850\n.set _FUN_8c099850, _FUN_8c099850_def\n");
//@unit 8c099858
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
int FUN_8c099858_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c099858";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar6_00;
  
  if (*(int *)(unsigned)(ar4 + 0x3c) == 0) {
    ar6_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0999ac(ar4,ar5,ar6,ar7));
    *(int *)(unsigned)(ar4 + 0xc) = *(int *)(unsigned)(ar4 + 0xc) + 1;
    (*(int *)(fr0_ - 0x1c)) = *(int *)(unsigned)(ar4 + 0xc);
    *(undefined4 *)(unsigned)(ar4 + 0x40) =
         *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13a884) + (*(int *)(fr0_ - 0x1c)) * 4 + *(int *)(unsigned)(ar4 + 4) * 0xc);
    if ((*(int *)(unsigned)(ar4 + 0x40) == 0xc) || (*(int *)(unsigned)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 2;
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02f404(ar4,0,ar6_00,ar7); });
      ar6 = ar6_00;
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02f404(ar4,3,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c099914(ar4,ar5,ar6,ar7));
    }
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x3c);
  if (iVar1 == 2) {
    iVar1 = ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02f404(ar4,2,ar6,ar7); });
  }
  return iVar1;
}

__asm__(".globl _FUN_8c099858\n.set _FUN_8c099858, _FUN_8c099858_def\n");
//@unit 8c099914
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
int FUN_8c099914_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c099914";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 a5;
  int *ar6_00;
  
  a5 = ar5;
  ar6_00 = ar6;
  if ((*(int *)(unsigned)(ar4 + 0x38) == 2) && (*(int *)(unsigned)(ar4 + 0x6c) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))(*(int *)(unsigned)(ar4 + 0x6c),ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 == 4) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c099b0c(ar4,ar5,ar6_00,ar7));
  }
  else if ((iVar1 == 8) &&
          (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb4 + *(int *)(unsigned)(*ar6 + 8)))))(*ar6,a5,ar6_00,ar7)), iVar1 == 1)
          ) {
    iVar1 = *ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027954(iVar1,a5,ar6_00,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(iVar1,a5,ar6_00,ar7));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c099914\n.set _FUN_8c099914, _FUN_8c099914_def\n");
//@unit 8c0999ac
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
undefined * FUN_8c0999ac_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0999ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 ar5_00;
  int *ar6_00;
  undefined4 ar6_01;
  
  iVar2 = *(int *)(unsigned)(ar4 + 0x40);
  puVar1 = (undefined *)(unsigned)0xa;
  if ((iVar2 < 0xb) && (puVar1 = (undefined *)(unsigned)0x1, 0 < iVar2)) {
    puVar1 = (&(*(undefined1 *)(unsigned)0x8c0999d8))[iVar2 + -1];
                    
    switch(iVar2) {
    case 1:
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 2;
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(ar4,ar5,ar6,ar7));
      break;
    case 3:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(ar6[1],ar5,ar6,ar7));
      if (puVar1 == (undefined *)(unsigned)0x12) {
        ar6_01 = 0x1b;
        ar5_00 = 0x27;
        iVar2 = ar6[6];
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(iVar2,0x27,0x1b,ar7));
        *(undefined1 *)(unsigned)(ar4 + 0x98) = 5;
        puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(iVar2,ar5_00,ar6_01,ar7));
      }
      break;
    case 4:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0996dc(ar6[3],1,ar6,ar7));
      break;
    case 8:
      ar6_00 = ar6;
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar6 + 8) + 0xb4))))(*ar6,ar5,ar6,ar7));
      if (puVar1 == (undefined *)(unsigned)0x1) {
        iVar2 = *ar6;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027954(iVar2,ar5,ar6_00,ar7));
        puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(iVar2,ar5,ar6_00,ar7));
      }
      break;
    case 9:
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 5;
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(ar4,ar5,ar6,ar7));
      break;
    case 10:
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(ar4,ar5,ar6,ar7));
      puVar1 = (undefined *)(unsigned)0x98;
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 5;
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0999ac\n.set _FUN_8c0999ac, _FUN_8c0999ac_def\n");
//@unit 8c099ab8
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
undefined4 * FUN_8c099ab8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c099ab8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  
  if (*(int *)(unsigned)(ar4 + 4) == 2) {
    (vsp = ((unsigned long)(fr0_ - 0)), get_field_8_066620(ar4,ar5,ar6,ar7));
    puVar1 = ((undefined4 *)(unsigned)0x8c099b04);
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), get_field_8_066620(ar4,ar5,ar6,ar7));
    puVar1 = ((undefined4 *)(unsigned)0x8c099b08);
  }
  return puVar1;
}

__asm__(".globl _FUN_8c099ab8\n.set _FUN_8c099ab8, _FUN_8c099ab8_def\n");
//@unit 8c099b0c
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
undefined4 FUN_8c099b0c_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c099b0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 200; for (int i_ = 0; i_ < 200; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int *ar5_00;
  undefined1 *puVar3;
  undefined4 ar5_01;
  undefined1 *ar6_00;
  undefined1 *a7;
  undefined1 *puVar4;
  char cVar5;
  
  cVar5 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 200)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 200)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x30)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 200)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x40)),ar5_00,ar6,ar7));
  a7 = ((undefined1 *)(fr0_ - 0xa4));
  puVar3 = ((undefined1 *)(fr0_ - 0xa0));
  puVar4 = ((undefined1 *)(fr0_ - 0x9c));
  (vsp = ((unsigned long)(fr0_ - 200)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x120))))(ar5,puVar4,puVar3,a7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 200)), get_field_4_05eed8(ar4,puVar4,puVar3,a7));
  if (((iVar1 != 1) && (iVar1 != 8)) && (iVar1 == 0xb)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 200)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,5,puVar3,a7));
    if (iVar1 == 0) {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc4))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 200)); FUN_8c02f404(ar4,2,puVar3,a7); });
      if (cVar5 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x43fa0000;
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x43fa0000;
        *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x43fa0000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x10043fa0000;
        *(undefined8 *)(unsigned)(ar4 + 0x2c) = 0x10043fa0000;
        *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x10043fa0000;
      }
    }
    else {
      for (puVar4 = (undefined1 *)(unsigned)0x0; iVar1 = (vsp = ((unsigned long)(fr0_ - 200)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,5,puVar3,a7)),
          (int)puVar4 < iVar1; puVar4 = puVar4 + 1) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 200)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,5,puVar4,a7));
        a7 = ((undefined1 *)(fr0_ - 0xb0));
        ar6_00 = ((undefined1 *)(fr0_ - 0xac));
        puVar3 = ((undefined1 *)(fr0_ - 0xa8));
        (vsp = ((unsigned long)(fr0_ - 200)), FUN_8c03f414(uVar2,puVar3,ar6_00,a7));
        (vsp = ((unsigned long)(fr0_ - 200)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x4c)),puVar3,ar6_00,a7));
        (vsp = ((unsigned long)(fr0_ - 200)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x68)),((undefined1 *)(fr0_ - 0x4c)),ar6_00,a7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 200)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 200)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x68)),ar6_00,a7); });
        (vsp = ((unsigned long)(fr0_ - 200)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x5c)),((undefined1 *)(fr0_ - 0x78)),ar6_00,a7));
        (vsp = ((unsigned long)(fr0_ - 200)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6_00,a7));
        (vsp = ((unsigned long)(fr0_ - 200)), object_dtor_delete(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,a7));
        ar5_01 = 5;
        puVar3 = puVar4;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 200)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,5,puVar4,a7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 200)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 200)) - 8); FUN_8c02f670(uVar2,ar5_01,puVar3,a7); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x98))); *(unsigned *)((((unsigned long)(fr0_ - 200)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 200)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x88)),((undefined1 *)(fr0_ - 0x5c)),puVar3,a7); });
        (vsp = ((unsigned long)(fr0_ - 200)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x98)),puVar3,a7));
        (vsp = ((unsigned long)(fr0_ - 200)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,puVar3,a7));
        (vsp = ((unsigned long)(fr0_ - 200)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,puVar3,a7));
        if (cVar5 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = (*(undefined4 *)(fr0_ - 0x20));
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = (*(undefined4 *)(fr0_ - 0x1c));
          *(undefined4 *)(unsigned)(ar4 + 0x30) = (*(undefined4 *)(fr0_ - 0x18));
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
          *(ulonglong *)(unsigned)(ar4 + 0x2c) = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
          *(ulonglong *)(unsigned)(ar4 + 0x30) = CONCAT44((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
        }
        (vsp = ((unsigned long)(fr0_ - 200)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,puVar3,a7));
        (vsp = ((unsigned long)(fr0_ - 200)), object_dtor_delete(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,puVar3,a7));
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 200)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,puVar3,a7));
  (vsp = ((unsigned long)(fr0_ - 200)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,puVar3,a7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 200)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x20)),0xffffffff,puVar3,a7));
  return uVar2;
}

__asm__(".globl _FUN_8c099b0c\n.set _FUN_8c099b0c, _FUN_8c099b0c_def\n");
//@unit 8c099dbc
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
undefined4 FUN_8c099dbc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c099dbc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126038),ar5,ar6,ar7));
  uVar3 = 0x8c284700;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284700,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126048),pcVar2,uVar3,ar7));
  uVar3 = 0x8c28470c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28470c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126058),pcVar2,uVar3,ar7));
  uVar3 = 0x8c284718;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284718,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126068),pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284724,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126078) = CONCAT44((*(undefined1 *)(unsigned)0x8c12607c),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126078) = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c099dbc\n.set _FUN_8c099dbc, _FUN_8c099dbc_def\n");
//@unit 8c099e74
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
int s_GRAPHICS_MOTHLINE_099e76_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_MOTHLINE_099e76";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar6_00;
  int ar6_01;
  undefined4 ar7_00;
  uint in_fr1 = 0;
  char cVar2;
  
  cVar2 = '\0';
  ar7_00 = 0x17;
  ar6_00 = 1;
  uVar1 = 0xb;
  ({ unsigned long t0_ = (unsigned long)(1); unsigned long t1_ = (unsigned long)(ar5); unsigned long t2_ = (unsigned long)(0x8c28476c); unsigned long t3_ = (unsigned long)(0x8c28489c); unsigned long t4_ = (unsigned long)((*(undefined4 *)(unsigned)(unsigned)0x8c13a9bc)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c0254d0(ar4,0xb,1,0x17); });
  *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12a7f4);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016fcc(ar4 + 0x490,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ff6c(ar4 + 0x530,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030fa0(ar4 + 0x5cc,uVar1,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c13aa31)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c014334(ar4 + 0xc,uVar1,ar6_00,ar7_00); });
  *(int *)(unsigned)(ar4 + 0x308) = ar4 + 0x530;
  *(int *)(unsigned)(ar4 + 0x30c) = ar4 + 0x5cc;
  *(undefined1 *)(unsigned)(ar4 + 0x524) = 0xff;
  ar6_01 = ar4 + 0x490;
  uVar1 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xb4);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f532c(ar4,uVar1,ar6_01,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c027224(ar4 + 0x5cc,uVar1,ar6_01,ar7_00); });
  if (cVar2 != '\0') {
    in_fr1 = 0x40000000;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xa8) + 0x28))))((int *)(unsigned)(ar4 + 0xa8),ar4 + 0x30,ar6_01,ar7_00));
  *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x528) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x528) = (ulonglong)in_fr1;
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x52c) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x52c) = (ulonglong)in_fr1;
  }
  return ar4;
}

__asm__(".globl _s_GRAPHICS_MOTHLINE_099e76\n.set _s_GRAPHICS_MOTHLINE_099e76, _s_GRAPHICS_MOTHLINE_099e76_def\n");
//@unit 8c099fd8
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
int Class_12a7f4_m0_099fd8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a7f4_m0_099fd8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12a7f4);
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129cbc_m0_0312f4(ar4 + 0x5cc,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129c24_m0_02ff90(ar4 + 0x530,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129938_m0_017084(ar4 + 0x490,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), CAnimal_m0_025688(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12a7f4_m0_099fd8\n.set _Class_12a7f4_m0_099fd8, _Class_12a7f4_m0_099fd8_def\n");
//@unit 8c09a060
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
undefined4 Class_12a7f4_m2_09a060_def(int ar4,uint ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "Class_12a7f4_m2_09a060";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *a7;
  float fVar6;
  undefined8 in_dr0 = 0;
  float fVar8;
  double dVar7;
  undefined4 in_fr3 = 0;
  double dVar9;
  undefined8 in_xd0 = 0;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  if ((*(uint *)(unsigned)(ar4 + 0x74) & 0x40) == 0x40) {
    *(float *)(unsigned)(ar4 + 0x34) = *(float *)(unsigned)(ar4 + 0x34) - *(float *)(unsigned)(ar4 + 0x52c);
    *(float *)(unsigned)(ar4 + 0x52c) = *(float *)(unsigned)(ar4 + 0x52c) + 0.5;
    fVar6 = *(float *)(unsigned)(ar4 + 0x52c);
    in_dr0 = CONCAT44(0x41200000,fVar6);
    if (10.0 < fVar6) {
      in_dr0 = CONCAT44(0x41200000,fVar6);
      *(undefined4 *)(unsigned)(ar4 + 0x52c) = 0x41200000;
    }
  }
  iVar4 = (int)*(char *)(unsigned)(ar4 + 0x524);
  a7 = ar7;
  if ((iVar4 < 4) && (-2 < iVar4)) {
                    
    switch(iVar4) {
    case 0:
      uVar5 = ar5;
      uVar3 = ar6;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,ar5,ar6,ar7));
      fVar6 = F32HI(in_dr0);
      iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_02d1b8(ar4 + 0x21c,uVar5,ar6,a7));
      if (*(int *)(unsigned)(ar4 + 0x330) != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x10c))))(*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,a7))
        ;
        uVar5 = 1;
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x110))))(*(int *)(unsigned)(ar4 + 0x330),1,ar6,a7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036988(*(undefined4 *)(unsigned)(ar4 + 0x330),uVar5,ar6,a7));
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x144))))
                  (*(int *)(unsigned)(ar4 + 0x330),uVar5,ar6,a7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c038a10(*(undefined4 *)(unsigned)(ar4 + 0x330),uVar5,ar6,a7));
      }
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x188))))(ar7,uVar5,ar6,a7));
      if (cVar12 == '\0') {
        fVar8 = 40.0;
      }
      else {
        fVar6 = 40.0;
        fVar8 = 4.59626e-43;
      }
      if (cVar11 != '\0' || fVar8 <= fVar6) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x148))))(ar7,uVar5,ar6,a7));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035b50(uVar2,uVar5,ar6,a7));
        if ((char)uVar2 < '\x04') {
          ar5 = 0x3c;
          iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4((uVar1 & 0xffff) - iVar4,0x3c,ar6,a7));
          if (0 < iVar4) {
            *(undefined1 *)(unsigned)(ar4 + 0x524) = 1;
            uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x148))))(ar7,ar5,ar6,a7));
            (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c09a540(uVar3,ar5,ar6,a7));
          }
          break;
        }
      }
      uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ee4(ar5,uVar5,ar6,a7));
      uVar5 = uVar5 & 0xffff;
      ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c028edc(ar4 + 0x21c,uVar5,ar6,a7); });
      uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,uVar5,ar6,a7));
      ar5 = uVar5 & 0xffff;
      ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c028ed4(ar4 + 0x21c,ar5,ar6,a7); });
      break;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x10))))(*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x110))))(*(int *)(unsigned)(ar4 + 0x330),0,ar6,a7));
      ar5 = *(uint *)(unsigned)(ar4 + 0x330);
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x4c))))(ar7,ar5,ar6,a7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027954(ar4,ar5,ar6,a7));
      *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
      *(undefined1 *)(unsigned)(ar4 + 0x524) = 2;
    case 2:
      fVar6 = (float)in_dr0;
      if (cVar12 == '\0') {
        fVar6 = *(float *)(unsigned)(ar4 + 0x528);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x528);
      }
      if (cVar11 == '\0') {
        fVar6 = fVar6 + 1.0;
      }
      else {
        fVar6 = SUB84(CONCAT44D(0x3f800000,fVar6) + CONCAT44D(0x3f800000,fVar6),0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x528) = fVar6;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x528) = in_xd0;
      }
      iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c031588(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa0),ar5,ar6,a7));
      if (cVar12 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x528),in_fr3);
      }
      else {
        dVar9 = *(double *)(unsigned)(ar4 + 0x528);
      }
      fVar6 = (float)(iVar4 + -1);
      dVar7 = (double)(ulonglong)(uint)fVar6;
      if (cVar11 == '\0' && fVar6 < 0.0) {
        if (cVar12 == '\0') {
          dVar7 = CONCAT44D(0x4f800000,fVar6);
        }
        else {
          dVar7 = -8.508938065399998e+77;
        }
        if (cVar11 == '\0') {
          fVar6 = F32HI(dVar7);
          dVar7 = CONCAT44D(fVar6,F32LO(dVar7) + fVar6);
        }
        else {
          dVar7 = dVar7 + dVar7;
        }
      }
      if (cVar11 == '\0') {
        bVar10 = F32HI(dVar9) < SUB84(dVar7,0);
      }
      else {
        bVar10 = dVar9 < dVar7;
      }
      if (!bVar10) {
        *(undefined1 *)(unsigned)(ar4 + 0x524) = 3;
      }
      break;
    case -1:
      uVar3 = ar6;
      uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ee4(ar5,ar5,ar6,ar7));
      uVar5 = uVar5 & 0xffff;
      ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c028edc(ar4 + 0x21c,uVar5,ar6,ar7); });
      uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,uVar5,ar6,ar7));
      uVar5 = uVar5 & 0xffff;
      ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c028ed4(ar4 + 0x21c,uVar5,ar6,ar7); });
      if (*(int *)(unsigned)(ar4 + 0x330) != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x10c))))
                  (*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
        uVar5 = 1;
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x110))))(*(int *)(unsigned)(ar4 + 0x330),1,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036988(*(undefined4 *)(unsigned)(ar4 + 0x330),uVar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x144))))
                  (*(int *)(unsigned)(ar4 + 0x330),uVar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c038a10(*(undefined4 *)(unsigned)(ar4 + 0x330),uVar5,ar6,ar7));
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,uVar5,ar6,ar7));
      ar5 = uVar5;
      a7 = ar7;
      if ((ushort)uVar3 < 5) {
        *(undefined1 *)(unsigned)(ar4 + 0x524) = 0;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xf8))))(ar4,ar5,ar6,a7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f79b8(ar4 + 0xa0,ar5,ar6,a7));
  return 1;
}

__asm__(".globl _Class_12a7f4_m2_09a060\n.set _Class_12a7f4_m2_09a060, _Class_12a7f4_m2_09a060_def\n");
//@unit 8c09a528
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
undefined4 FUN_8c09a528_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09a528";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 0x4d) = *(char *)(unsigned)(ar4 + 0x4d) + -1;
  return 0x4d;
}

__asm__(".globl _FUN_8c09a528\n.set _FUN_8c09a528, _FUN_8c09a528_def\n");
//@unit 8c09a540
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
undefined4 FUN_8c09a540_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09a540";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 0x4e) = *(char *)(unsigned)(ar4 + 0x4e) + '\x01';
  return 0x4e;
}

__asm__(".globl _FUN_8c09a540\n.set _FUN_8c09a540, _FUN_8c09a540_def\n");
//@unit 8c09a558
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
undefined4 Class_12a7f4_m3_09a558_def(int ar4,uint ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "Class_12a7f4_m3_09a558";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *a7;
  float fVar6;
  undefined8 in_dr0 = 0;
  float fVar8;
  double dVar7;
  undefined4 in_fr3 = 0;
  double dVar9;
  undefined8 in_xd0 = 0;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  if ((*(uint *)(unsigned)(ar4 + 0x74) & 0x40) == 0x40) {
    *(float *)(unsigned)(ar4 + 0x34) = *(float *)(unsigned)(ar4 + 0x34) - *(float *)(unsigned)(ar4 + 0x52c);
    *(float *)(unsigned)(ar4 + 0x52c) = *(float *)(unsigned)(ar4 + 0x52c) + 0.5;
    fVar6 = *(float *)(unsigned)(ar4 + 0x52c);
    in_dr0 = CONCAT44(0x41200000,fVar6);
    if (10.0 < fVar6) {
      in_dr0 = CONCAT44(0x41200000,fVar6);
      *(undefined4 *)(unsigned)(ar4 + 0x52c) = 0x41200000;
    }
  }
  iVar4 = (int)*(char *)(unsigned)(ar4 + 0x524);
  a7 = ar7;
  if ((iVar4 < 4) && (-2 < iVar4)) {
                    
    switch(iVar4) {
    case 0:
      uVar5 = ar5;
      uVar3 = ar6;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,ar5,ar6,ar7));
      fVar6 = F32HI(in_dr0);
      iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_02d1b8(ar4 + 0x21c,uVar5,ar6,a7));
      if (*(int *)(unsigned)(ar4 + 0x330) != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x10c))))(*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,a7))
        ;
        uVar5 = 1;
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x110))))(*(int *)(unsigned)(ar4 + 0x330),1,ar6,a7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036988(*(undefined4 *)(unsigned)(ar4 + 0x330),uVar5,ar6,a7));
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x144))))
                  (*(int *)(unsigned)(ar4 + 0x330),uVar5,ar6,a7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c038a10(*(undefined4 *)(unsigned)(ar4 + 0x330),uVar5,ar6,a7));
      }
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x188))))(ar7,uVar5,ar6,a7));
      if (cVar12 == '\0') {
        fVar8 = 40.0;
      }
      else {
        fVar6 = 40.0;
        fVar8 = 4.59626e-43;
      }
      if (cVar11 != '\0' || fVar8 <= fVar6) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x148))))(ar7,uVar5,ar6,a7));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035b50(uVar2,uVar5,ar6,a7));
        if ((char)uVar2 < '\x04') {
          ar5 = 0x3c;
          iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4((uVar1 & 0xffff) - iVar4,0x3c,ar6,a7));
          if (0 < iVar4) {
            *(undefined1 *)(unsigned)(ar4 + 0x524) = 1;
            uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x148))))(ar7,ar5,ar6,a7));
            (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c09a540(uVar3,ar5,ar6,a7));
          }
          break;
        }
      }
      uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ee4(ar5,uVar5,ar6,a7));
      uVar5 = uVar5 & 0xffff;
      ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c028edc(ar4 + 0x21c,uVar5,ar6,a7); });
      uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,uVar5,ar6,a7));
      ar5 = uVar5 & 0xffff;
      ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c028ed4(ar4 + 0x21c,ar5,ar6,a7); });
      break;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x14))))(*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x110))))(*(int *)(unsigned)(ar4 + 0x330),0,ar6,a7));
      ar5 = *(uint *)(unsigned)(ar4 + 0x330);
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x4c))))(ar7,ar5,ar6,a7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027954(ar4,ar5,ar6,a7));
      *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
      *(undefined1 *)(unsigned)(ar4 + 0x524) = 2;
    case 2:
      fVar6 = (float)in_dr0;
      if (cVar12 == '\0') {
        fVar6 = *(float *)(unsigned)(ar4 + 0x528);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x528);
      }
      if (cVar11 == '\0') {
        fVar6 = fVar6 + 1.0;
      }
      else {
        fVar6 = SUB84(CONCAT44D(0x3f800000,fVar6) + CONCAT44D(0x3f800000,fVar6),0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x528) = fVar6;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x528) = in_xd0;
      }
      iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c031588(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa0),ar5,ar6,a7));
      if (cVar12 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x528),in_fr3);
      }
      else {
        dVar9 = *(double *)(unsigned)(ar4 + 0x528);
      }
      fVar6 = (float)(iVar4 + -1);
      dVar7 = (double)(ulonglong)(uint)fVar6;
      if (cVar11 == '\0' && fVar6 < 0.0) {
        if (cVar12 == '\0') {
          dVar7 = CONCAT44D(0x4f800000,fVar6);
        }
        else {
          dVar7 = -8.508938065399998e+77;
        }
        if (cVar11 == '\0') {
          fVar6 = F32HI(dVar7);
          dVar7 = CONCAT44D(fVar6,F32LO(dVar7) + fVar6);
        }
        else {
          dVar7 = dVar7 + dVar7;
        }
      }
      if (cVar11 == '\0') {
        bVar10 = F32HI(dVar9) < SUB84(dVar7,0);
      }
      else {
        bVar10 = dVar9 < dVar7;
      }
      if (!bVar10) {
        *(undefined1 *)(unsigned)(ar4 + 0x524) = 3;
      }
      break;
    case -1:
      uVar3 = ar6;
      uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ee4(ar5,ar5,ar6,ar7));
      uVar5 = uVar5 & 0xffff;
      ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c028edc(ar4 + 0x21c,uVar5,ar6,ar7); });
      uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,uVar5,ar6,ar7));
      uVar5 = uVar5 & 0xffff;
      ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c028ed4(ar4 + 0x21c,uVar5,ar6,ar7); });
      if (*(int *)(unsigned)(ar4 + 0x330) != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x10c))))
                  (*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
        uVar5 = 1;
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x110))))(*(int *)(unsigned)(ar4 + 0x330),1,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036988(*(undefined4 *)(unsigned)(ar4 + 0x330),uVar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x144))))
                  (*(int *)(unsigned)(ar4 + 0x330),uVar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c038a10(*(undefined4 *)(unsigned)(ar4 + 0x330),uVar5,ar6,ar7));
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,uVar5,ar6,ar7));
      ar5 = uVar5;
      a7 = ar7;
      if ((ushort)uVar3 < 5) {
        *(undefined1 *)(unsigned)(ar4 + 0x524) = 0;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xf8))))(ar4,ar5,ar6,a7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f79b8(ar4 + 0xa0,ar5,ar6,a7));
  return 1;
}

__asm__(".globl _Class_12a7f4_m3_09a558\n.set _Class_12a7f4_m3_09a558, _Class_12a7f4_m3_09a558_def\n");
//@unit 8c09aa20
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
undefined4 ret_const_1_09aa20_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_1_09aa20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl _ret_const_1_09aa20\n.set _ret_const_1_09aa20, _ret_const_1_09aa20_def\n");
//@unit 8c09aa28
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
undefined4 Class_12a7f4_m6_09aa28_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a7f4_m6_09aa28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0294c0(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Class_12a7f4_m6_09aa28\n.set _Class_12a7f4_m6_09aa28, _Class_12a7f4_m6_09aa28_def\n");
//@unit 8c09aa48
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
undefined4
Class_12a7f4_m5_09aa48_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a7f4_m5_09aa48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = -0x7d0;
  *(undefined4 *)(unsigned)((int)&(*(undefined4 *)(fr0_ - 0x4)) + iVar1) = ar4;
  (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c0b7a54((int)&s0 + iVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c0294c0(*(undefined4 *)(unsigned)((int)&(*(undefined4 *)(fr0_ - 0x4)) + iVar1),(int)&s0 + iVar1,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c068818((int)&s0 + iVar1,0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _Class_12a7f4_m5_09aa48\n.set _Class_12a7f4_m5_09aa48, _Class_12a7f4_m5_09aa48_def\n");
//@unit 8c09aa8c
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
undefined4 Class_12a7f4_m4_09aa8c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a7f4_m4_09aa8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0294c0(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Class_12a7f4_m4_09aa8c\n.set _Class_12a7f4_m4_09aa8c, _Class_12a7f4_m4_09aa8c_def\n");
//@unit 8c09aaac
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
undefined4 FUN_8c09aaac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09aaac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4c0c(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c09aaac\n.set _FUN_8c09aaac, _FUN_8c09aaac_def\n");
//@unit 8c09aac8
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
undefined4 noop_09aac8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_09aac8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_09aac8\n.set _noop_09aac8, _noop_09aac8_def\n");
//@unit 8c09aacc
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
undefined4 noop_09aacc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_09aacc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_09aacc\n.set _noop_09aacc, _noop_09aacc_def\n");
//@unit 8c09aad0
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
undefined4 FUN_8c09aad0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09aad0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  float fVar2;
  double dVar3;
  int ar7_00;
  int ar6_01;
  int ar5_01;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c01538c(*(int *)(unsigned)(ar4 + 0x328) + 0x78,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c256328(0,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
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
    ar6_01 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    ar6_01 = (int)(dVar3 / dVar3);
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
    ar5_01 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    ar5_01 = (int)(dVar3 / dVar3);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c256b0c(0,ar5_01,ar6_01,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c256fec(0,ar5_01,ar6_01,ar7_00); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + 0x70,ar5_01,ar6_01,ar7_00));
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 20)), deref_u32(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa0),ar5_01,ar6_01,ar7_00));
  ar6_00 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c026d74(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa8),ar5_01,ar6_01,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)(ar6_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c21bbb0(uVar1,ar5_00,ar6_00,ar7_00); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c256210(1,ar5_00,ar6_00,ar7_00));
  return uVar1;
}

__asm__(".globl _FUN_8c09aad0\n.set _FUN_8c09aad0, _FUN_8c09aad0_def\n");
//@unit 8c09abfc
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
undefined4 FUN_8c09abfc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09abfc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(*(int *)(unsigned)(0x328 + ar4) + 0x78,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015bb8(*(int *)(unsigned)(0x328 + ar4) + 0x70,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219a9a(uVar1,ar5,ar6,ar7));
  uVar1 = 0;
  if (*(int *)(unsigned)(0x330 + ar4) != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(0x330 + ar4) + 8) + 0x3c))))
                      (*(int *)(unsigned)(0x330 + ar4),ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c09abfc\n.set _FUN_8c09abfc, _FUN_8c09abfc_def\n");
//@unit 8c09ac58
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
undefined4 FUN_8c09ac58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09ac58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x3c))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c09ac58\n.set _FUN_8c09ac58, _FUN_8c09ac58_def\n");
//@unit 8c09ac70
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
undefined4 FUN_8c09ac70_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09ac70";
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

__asm__(".globl _FUN_8c09ac70\n.set _FUN_8c09ac70, _FUN_8c09ac70_def\n");
//@unit 8c09aca8
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
undefined4 FUN_8c09aca8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09aca8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a6;
  undefined4 uVar1;
  
  a6 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(ar5,10,0x11,ar7));
  uVar1 = 0;
  if (a6 != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *(int *)(unsigned)(ar4 + 8)))))(ar4,0,a6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c09aca8\n.set _FUN_8c09aca8, _FUN_8c09aca8_def\n");
//@unit 8c09acf4
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
int FUN_8c09acf4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09acf4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x330;
  *(undefined4 *)(unsigned)(0x330 + ar4) = ar6;
  return iVar1;
}

__asm__(".globl _FUN_8c09acf4\n.set _FUN_8c09acf4, _FUN_8c09acf4_def\n");
//@unit 8c09ad00
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
undefined4 FUN_8c09ad00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09ad00";
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

__asm__(".globl _FUN_8c09ad00\n.set _FUN_8c09ad00, _FUN_8c09ad00_def\n");
//@unit 8c09ad34
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
undefined4 FUN_8c09ad34_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09ad34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4e34(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02cbe4(ar4 + 0x174,ar5 + 0x4c,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035338(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c09ad34\n.set _FUN_8c09ad34, _FUN_8c09ad34_def\n");
//@unit 8c09ad94
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
undefined4 FUN_8c09ad94_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09ad94";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4ebc(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ce58(ar4 + 0x174,ar5 + 0x24,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035338(ar4 + 0x2dc,ar5 + 0x58,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c09ad94\n.set _FUN_8c09ad94, _FUN_8c09ad94_def\n");
//@unit 8c09adec
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
undefined4 FUN_8c09adec_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09adec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4f0c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02cf20(ar4 + 0x174,ar5 + 0x4c,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03539c(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c09adec\n.set _FUN_8c09adec, _FUN_8c09adec_def\n");
//@unit 8c09ae4c
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
undefined4 FUN_8c09ae4c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09ae4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4fa4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1f4(ar4 + 0x174,ar5 + 0x24,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03539c(ar4 + 0x2dc,ar5 + 0x58,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c09ae4c\n.set _FUN_8c09ae4c, _FUN_8c09ae4c_def\n");
//@unit 8c09aea4
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
undefined4 s_CMothEgg_LoadGRReq_09aeaa_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CMothEgg_LoadGRReq_09aeaa";
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
                ((&(*(undefined1 *)(unsigned)0x8c13a9d0)) + 0x69,(&(*(undefined1 *)(unsigned)0x8c13a9d0)) + 0x7b,0,2));
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

__asm__(".globl _s_CMothEgg_LoadGRReq_09aeaa\n.set _s_CMothEgg_LoadGRReq_09aeaa, _s_CMothEgg_LoadGRReq_09aeaa_def\n");
//@unit 8c09af68
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
undefined4 FUN_8c09af68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09af68";
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

__asm__(".globl _FUN_8c09af68\n.set _FUN_8c09af68, _FUN_8c09af68_def\n");
//@unit 8c09afb8
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
undefined4 FUN_8c09afb8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09afb8";
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

__asm__(".globl _FUN_8c09afb8\n.set _FUN_8c09afb8, _FUN_8c09afb8_def\n");
//@unit 8c09b008
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
undefined4 s_Cpe_Home_nj_09b008_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Cpe_Home_nj_09b008";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7b890) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13a9c8);
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7b88c) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13a9cc);
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7b888) = (*(undefined4 *)(unsigned)(unsigned)0x8c13a9c0);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b884) = 0;
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7b880) = (*(undefined4 *)(unsigned)(unsigned)0x8c13a9c4);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b87c) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b7f4) = 0x8c2848b8;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7b7f0) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b7ec) = 0x8c2848c8;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7b7e8) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b7e0) = 0x8c2849b8;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b7d8) = 0x3f800000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b7c8) = 0x3ca3d70a;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b7c4) = 0x3f4ccccd;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b7c0) = 0x42c80000;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined2 *)(unsigned)(iVar1 * 0x10 + -0x73d7b764) = 0xffff;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7b760) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7b75c) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7b758) = 0;
  }
  return 1;
}

__asm__(".globl _s_Cpe_Home_nj_09b008\n.set _s_Cpe_Home_nj_09b008, _s_Cpe_Home_nj_09b008_def\n");
//@unit 8c09b208
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
undefined4 ret_const_1_09b208_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_1_09b208";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl _ret_const_1_09b208\n.set _ret_const_1_09b208, _ret_const_1_09b208_def\n");
//@unit 8c09b210
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
undefined4 FUN_8c09b210_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09b210";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126080),ar5,ar6,ar7));
  uVar3 = 0x8c284730;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284730,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126090),pcVar2,uVar3,ar7));
  uVar3 = 0x8c28473c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28473c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1260a0),pcVar2,uVar3,ar7));
  uVar3 = 0x8c284748;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284748,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1260b0),pcVar2,uVar3,ar7));
  uVar3 = 0x8c284754;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284754,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c1260c0) = CONCAT44((*(undefined1 *)(unsigned)0x8c1260c4),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c1260c0) = 0xffffffff00800000;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02452c(0x8c28476c,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284760;
  pcVar2 = ((void *)0x8c03a4ac);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a4ac),0x8c284760,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c024824(0x8c28489c,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284890;
  pcVar2 = ((void *)0x8c03a454);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a454),0x8c284890,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015b94(0x8c2848b8,pcVar2,uVar3,ar7));
  uVar3 = 0x8c2848ac;
  pcVar2 = ((void *)0x8c0247b0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0247b0),0x8c2848ac,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015bc8(0x8c2848c8,pcVar2,uVar3,ar7));
  uVar3 = 0x8c2848bc;
  pcVar2 = ((void *)0x8c03a3dc);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a3dc),0x8c2848bc,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2848d8,pcVar2,uVar3,ar7));
  uVar3 = 0x8c2848cc;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2848cc,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2848f4,pcVar2,uVar3,ar7));
  uVar3 = 0x8c2848e8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2848e8,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284910,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284904;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284904,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c28492c,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284920;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284920,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284948,pcVar2,uVar3,ar7));
  uVar3 = 0x8c28493c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28493c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284964,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284958;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284958,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284980,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284974;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284974,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c28499c,pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284990,ar7));
  uVar3 = 0x8c284910;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c28492c); unsigned long t1_ = (unsigned long)(0x8c284948); unsigned long t2_ = (unsigned long)(0x8c284964); unsigned long t3_ = (unsigned long)(
                       0x8c284980); unsigned long t4_ = (unsigned long)(0x8c28499c); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c2849b8,0x8c2848d8,0x8c2848f4,0x8c284910); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c2849ac,uVar3));
  return uVar1;
}

__asm__(".globl _FUN_8c09b210\n.set _FUN_8c09b210, _FUN_8c09b210_def\n");
//@unit 8c09b508
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
int FUN_8c09b508_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09b508";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023dac(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023dac(ar4 + 0xc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023dac(ar4 + 0x18,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c09b844(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c09b508\n.set _FUN_8c09b508, _FUN_8c09b508_def\n");
//@unit 8c09b544
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
float * FUN_8c09b544_def(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09b544";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  float *pfVar1;
  int iVar2;
  undefined8 *ar4_00;
  float fVar3;
  double dVar4;
  float fVar7;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  pfVar1 = ((float *)(unsigned long)*(unsigned *)(unsigned)((int)ar4 + 0x24));
  if ((int)pfVar1 <= *(int *)(unsigned)((int)ar4 + 0x2c) - *(int *)(unsigned)(ar4 + 5)) {
    *(undefined4 *)(unsigned)(ar4 + 5) = *(undefined4 *)(unsigned)((int)ar4 + 0x2c);
    ar4_00 = ar4;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4,ar5,ar6,ar7));
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D(0x47000000,(float)iVar2);
    }
    else {
      dVar4 = 2.0716562097687757e+17;
    }
    if (cVar8 == '\0') {
      fVar3 = F32LO(dVar4) / F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 / dVar4,0);
    }
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D(0x43870000,fVar3);
    }
    else {
      dVar4 = 85899363207.0;
    }
    if (cVar8 == '\0') {
      fVar3 = F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D(0x42340000,fVar3);
    }
    else {
      dVar4 = 3.051758565142393e-05;
    }
    if (cVar8 == '\0') {
      fVar7 = F32HI(dVar4);
      fVar3 = F32LO(dVar4) + fVar7;
      dVar4 = CONCAT44D(fVar7,fVar3);
      iVar2 = (int)fVar3;
    }
    else {
      dVar4 = dVar4 + dVar4;
      iVar2 = (int)dVar4;
    }
    *(int *)(unsigned)((int)ar4 + 0x24) = iVar2;
    if (cVar9 == '\0') {
      dVar4 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 3);
    }
    else {
      in_xd0 = ar4[3];
    }
    uVar5 = D2U(dVar4) & 0xffffffff;
    if (SUB84(dVar4,0) == 0.0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4_00,ar5,ar6,ar7));
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(0x47000000,(float)iVar2);
      }
      else {
        dVar4 = 2.0716562097687757e+17;
      }
      if (cVar8 == '\0') {
        fVar3 = F32LO(dVar4) / F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 / dVar4,0);
      }
      if (cVar9 == '\0') {
        uVar5 = CONCAT44(0x3f000000,fVar3);
      }
      else {
        uVar5 = 0x3e0f5c293f000000;
      }
      if (cVar8 == '\0' && (float)uVar5 < (float)(uVar5 >> 0x20)) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4_00,ar5,ar6,ar7));
        if (cVar9 == '\0') {
          dVar4 = CONCAT44D(0x47000000,(float)iVar2);
        }
        else {
          dVar4 = 2.0716562097687757e+17;
        }
        if (cVar8 == '\0') {
          fVar3 = F32LO(dVar4) / F32HI(dVar4);
        }
        else {
          fVar3 = SUB84(dVar4 / dVar4,0);
        }
        if (cVar9 == '\0') {
          dVar4 = CONCAT44D(0x3e0f5c29,fVar3);
        }
        else {
          dVar4 = 0.0036718756750633475;
        }
        if (cVar8 == '\0') {
          fVar3 = F32LO(dVar4) * F32HI(dVar4);
        }
        else {
          fVar3 = SUB84(dVar4 * dVar4,0);
        }
        if (cVar9 == '\0') {
          dVar4 = CONCAT44D(0x3f6e147b,fVar3);
        }
        else {
          dVar4 = 1.971999614954473e-24;
        }
        if (cVar8 == '\0') {
          fVar3 = F32LO(dVar4) + F32HI(dVar4);
        }
        else {
          fVar3 = SUB84(dVar4 + dVar4,0);
        }
        if (cVar9 == '\0') {
          *(float *)(unsigned)((int)ar4 + 0xc) = fVar3;
          fVar3 = *(float *)(unsigned)((int)ar4 + 0xc);
        }
        else {
          *(undefined8 *)(unsigned)((int)ar4 + 0xc) = in_xd0;
          in_xd0 = *(undefined8 *)(unsigned)((int)ar4 + 0xc);
        }
        if (fVar3 == 1.0) {
          if (cVar9 == '\0') {
            *(undefined4 *)(unsigned)((int)ar4 + 0xc) = 0x3f6e147b;
          }
          else {
            *(undefined8 *)(unsigned)((int)ar4 + 0xc) = 0x3b03126f3f6e147b;
          }
        }
        if (cVar9 == '\0') {
          uVar6 = CONCAT44(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)((int)ar4 + 0xc));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)((int)ar4 + 0xc);
          uVar6 = *ar4;
        }
        fVar3 = (float)uVar6;
        if (cVar8 != '\0' || fVar3 <= F32HI(uVar6)) {
          if (cVar9 == '\0') {
            uVar5 = CONCAT44(0xbb03126f,fVar3);
            *(undefined4 *)(unsigned)(ar4 + 3) = 0xbb03126f;
          }
          else {
            uVar5 = 0x4f222fe6bb03126f;
            ar4[3] = 0x4f222fe6bb03126f;
          }
        }
        else if (cVar9 == '\0') {
          uVar5 = CONCAT44(0x3b03126f,fVar3);
          *(undefined4 *)(unsigned)(ar4 + 3) = 0x3b03126f;
        }
        else {
          uVar5 = 0xbb03126f3b03126f;
          ar4[3] = 0xbb03126f3b03126f;
        }
      }
    }
    fVar3 = (float)uVar5;
    pfVar1 = (float *)(unsigned)((int)ar4 + 0x1c);
    if (cVar9 == '\0') {
      fVar3 = *pfVar1;
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)pfVar1;
    }
    if (fVar3 == 0.0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4_00,ar5,ar6,ar7));
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(0x47000000,(float)iVar2);
      }
      else {
        dVar4 = 2.0716562097687757e+17;
      }
      if (cVar8 == '\0') {
        fVar3 = F32LO(dVar4) / F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 / dVar4,0);
      }
      pfVar1 = (float *)(unsigned)((undefined1 *)(unsigned)0x8c09b6b0);
      if (cVar9 == '\0') {
        fVar7 = 0.5;
      }
      else {
        fVar3 = 0.5;
        fVar7 = 0.14;
      }
      if (cVar8 == '\0' && fVar3 < fVar7) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4_00,ar5,ar6,ar7));
        if (cVar9 == '\0') {
          dVar4 = CONCAT44D(0x47000000,(float)iVar2);
        }
        else {
          dVar4 = 2.0716562097687757e+17;
        }
        if (cVar8 == '\0') {
          fVar3 = F32LO(dVar4) / F32HI(dVar4);
        }
        else {
          fVar3 = SUB84(dVar4 / dVar4,0);
        }
        if (cVar9 == '\0') {
          dVar4 = CONCAT44D(0x3e0f5c29,fVar3);
        }
        else {
          dVar4 = 0.0036718756750633475;
        }
        if (cVar8 == '\0') {
          fVar3 = F32LO(dVar4) * F32HI(dVar4);
        }
        else {
          fVar3 = SUB84(dVar4 * dVar4,0);
        }
        if (cVar9 == '\0') {
          dVar4 = CONCAT44D(0x3f6e147b,fVar3);
        }
        else {
          dVar4 = 1.971999614954473e-24;
        }
        if (cVar8 == '\0') {
          fVar3 = F32LO(dVar4) + F32HI(dVar4);
        }
        else {
          fVar3 = SUB84(dVar4 + dVar4,0);
        }
        if (cVar9 == '\0') {
          *(float *)(unsigned)(ar4 + 2) = fVar3;
          fVar3 = *(float *)(unsigned)(ar4 + 2);
        }
        else {
          ar4[2] = in_xd0;
        }
        if (fVar3 == 1.0) {
          if (cVar9 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 2) = 0x3f6e147b;
          }
          else {
            ar4[2] = 0x3b03126f3f6e147b;
          }
        }
        if (cVar9 == '\0') {
          uVar6 = CONCAT44(*(undefined4 *)(unsigned)((int)ar4 + 4),*(undefined4 *)(unsigned)(ar4 + 2));
        }
        else {
          uVar6 = *(undefined8 *)(unsigned)((int)ar4 + 4);
        }
        if (cVar8 != '\0' || (float)uVar6 <= F32HI(uVar6)) {
          pfVar1 = (float *)(unsigned)((undefined1 *)(unsigned)0x8c09b6c0);
          if (cVar9 == '\0') {
            *(undefined4 *)(unsigned)((int)ar4 + 0x1c) = 0xbb03126f;
          }
          else {
            *(undefined8 *)(unsigned)((int)ar4 + 0x1c) = 0x4f222fe6bb03126f;
          }
        }
        else {
          pfVar1 = (float *)(unsigned)((undefined1 *)(unsigned)0x8c09b6bc);
          if (cVar9 == '\0') {
            *(undefined4 *)(unsigned)((int)ar4 + 0x1c) = 0x3b03126f;
          }
          else {
            *(undefined8 *)(unsigned)((int)ar4 + 0x1c) = 0xbb03126f3b03126f;
          }
        }
      }
    }
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c09b544\n.set _FUN_8c09b544, _FUN_8c09b544_def\n");
//@unit 8c09b6c4
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
float FUN_8c09b6c4_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09b6c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  float *ar4_00;
  float fVar1;
  ulonglong in_dr0 = 0;
  ulonglong uVar2;
  double dVar3;
  float fVar4;
  ulonglong in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  ar4_00 = ar4;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c010e38(ar4,ar5,ar6,ar7); });
  if (cVar6 == '\0') {
    uVar2 = CONCAT44(0x3b03126f,(int)(in_dr0 >> 0x20));
    in_dr0 = in_xd0;
  }
  else {
    uVar2 = 0x4f222fe63b03126f;
  }
  if (cVar5 != '\0' || (float)(uVar2 >> 0x20) <= (float)uVar2) {
    if (cVar6 == '\0') {
      dVar3 = CONCAT44D(ar4[6],*ar4);
    }
    else {
      in_dr0 = *(ulonglong *)(unsigned)ar4;
      dVar3 = *(double *)(unsigned)(ar4 + 6);
    }
    if (cVar5 == '\0') {
      fVar1 = F32LO(dVar3) + F32HI(dVar3);
    }
    else {
      fVar1 = SUB84(dVar3 + dVar3,0);
    }
    if (cVar6 == '\0') {
      *ar4 = fVar1;
      fVar1 = ar4[6];
    }
    else {
      *(ulonglong *)(unsigned)ar4 = in_dr0;
      in_dr0 = *(ulonglong *)(unsigned)(ar4 + 6);
    }
    uVar2 = (ulonglong)(uint)fVar1;
    if (cVar5 == '\0' && fVar1 < 0.0) {
LAB_8c09b712:
      fVar1 = (float)uVar2;
      if (cVar6 == '\0') {
        fVar1 = ar4[6];
      }
      else {
        in_dr0 = *(ulonglong *)(unsigned)(ar4 + 6);
      }
      uVar2 = (ulonglong)(uint)fVar1;
      if (cVar5 == '\0' && fVar1 < 0.0) {
        if (cVar6 == '\0') {
          uVar2 = CONCAT44(ar4[3],*ar4);
        }
        else {
          in_dr0 = *(ulonglong *)(unsigned)ar4;
          uVar2 = *(ulonglong *)(unsigned)(ar4 + 3);
        }
        if (cVar5 == '\0' && (float)uVar2 < (float)(uVar2 >> 0x20)) goto LAB_8c09b72a;
      }
    }
    else {
      if (cVar6 == '\0') {
        uVar2 = CONCAT44(ar4[3],*ar4);
      }
      else {
        in_dr0 = *(ulonglong *)(unsigned)ar4;
        uVar2 = *(ulonglong *)(unsigned)(ar4 + 3);
      }
      if (cVar5 == '\0' && (float)uVar2 < (float)(uVar2 >> 0x20)) goto LAB_8c09b712;
LAB_8c09b72a:
      fVar1 = (float)uVar2;
      if (cVar6 == '\0') {
        fVar1 = ar4[3];
      }
      else {
        in_dr0 = *(ulonglong *)(unsigned)(ar4 + 3);
      }
      if (fVar1 == 1.0) {
        if (cVar6 == '\0') {
          ar4[3] = 1.0;
          *ar4 = 1.0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 3) = CONCAT44(0x3f800000,fVar1);
          *(ulonglong *)(unsigned)ar4 = CONCAT44(0x3f800000,fVar1);
        }
        uVar2 = (ulonglong)(uint)fVar1;
        if (cVar6 == '\0') {
          ar4[6] = 0.0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 6) = uVar2;
        }
      }
      else {
        if (cVar6 == '\0') {
          dVar3 = CONCAT44D(ar4[6],fVar1);
        }
        else {
          dVar3 = *(double *)(unsigned)(ar4 + 6);
        }
        if (cVar5 == '\0') {
          dVar3 = CONCAT44D(-F32HI(dVar3),SUB84(dVar3,0));
        }
        else {
          dVar3 = -dVar3;
        }
        if (cVar6 == '\0') {
          ar4[6] = F32HI(dVar3);
        }
        else {
          *(double *)(unsigned)(ar4 + 6) = dVar3;
        }
        uVar2 = CONCAT44(0x3f800000,SUB84(dVar3,0));
        if (cVar6 == '\0') {
          ar4[3] = 1.0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 3) = uVar2;
        }
      }
    }
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c010e38(ar4_00,ar5,ar6,ar7); });
  fVar1 = (float)(uVar2 >> 0x20);
  if (cVar6 == '\0') {
    fVar4 = 0.002;
    uVar2 = in_dr0;
  }
  else {
    fVar1 = 0.002;
    fVar4 = 2.721048e+09;
  }
  if (cVar5 == '\0' && fVar1 < fVar4) goto LAB_8c09b826;
  if (cVar6 == '\0') {
    dVar3 = CONCAT44D(ar4[7],ar4[1]);
  }
  else {
    uVar2 = *(ulonglong *)(unsigned)(ar4 + 1);
    dVar3 = *(double *)(unsigned)(ar4 + 7);
  }
  if (cVar5 == '\0') {
    fVar1 = F32LO(dVar3) + F32HI(dVar3);
  }
  else {
    fVar1 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar6 == '\0') {
    ar4[1] = fVar1;
    fVar1 = ar4[7];
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 1) = uVar2;
  }
  uVar2 = (ulonglong)(uint)fVar1;
  if (cVar5 == '\0' && fVar1 < 0.0) {
LAB_8c09b7be:
    fVar1 = (float)uVar2;
    if (cVar6 == '\0') {
      fVar1 = ar4[7];
    }
    if (cVar5 != '\0' || 0.0 <= fVar1) goto LAB_8c09b826;
    if (cVar6 == '\0') {
      uVar2 = CONCAT44(ar4[4],ar4[1]);
    }
    else {
      uVar2 = *(ulonglong *)(unsigned)(ar4 + 4);
    }
    if (cVar5 != '\0' || (float)(uVar2 >> 0x20) <= (float)uVar2) goto LAB_8c09b826;
  }
  else {
    if (cVar6 == '\0') {
      uVar2 = CONCAT44(ar4[4],ar4[1]);
    }
    else {
      uVar2 = *(ulonglong *)(unsigned)(ar4 + 4);
    }
    if (cVar5 == '\0' && (float)uVar2 < (float)(uVar2 >> 0x20)) goto LAB_8c09b7be;
  }
  fVar1 = (float)uVar2;
  if (cVar6 == '\0') {
    fVar1 = ar4[4];
  }
  if (fVar1 == 1.0) {
    if (cVar6 == '\0') {
      ar4[4] = 1.0;
      ar4[1] = 1.0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 4) = CONCAT44(0x3f800000,fVar1);
      *(ulonglong *)(unsigned)(ar4 + 1) = CONCAT44(0x3f800000,fVar1);
    }
    if (cVar6 == '\0') {
      ar4[7] = 0.0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 7) = (ulonglong)(uint)fVar1;
    }
  }
  else {
    if (cVar6 == '\0') {
      dVar3 = CONCAT44D(ar4[7],fVar1);
    }
    else {
      dVar3 = *(double *)(unsigned)(ar4 + 7);
    }
    if (cVar5 == '\0') {
      dVar3 = CONCAT44D(-F32HI(dVar3),SUB84(dVar3,0));
    }
    else {
      dVar3 = -dVar3;
    }
    if (cVar6 == '\0') {
      ar4[7] = F32HI(dVar3);
    }
    else {
      *(double *)(unsigned)(ar4 + 7) = dVar3;
    }
    if (cVar6 == '\0') {
      ar4[4] = 1.0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 4) = CONCAT44(0x3f800000,SUB84(dVar3,0));
    }
  }
LAB_8c09b826:
  fVar1 = ar4[0xb];
  ar4[0xb] = (float)((int)fVar1 + 1);
  return (float)((int)fVar1 + 1);
}

__asm__(".globl _FUN_8c09b6c4\n.set _FUN_8c09b6c4, _FUN_8c09b6c4_def\n");
//@unit 8c09b844
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
undefined4 FUN_8c09b844_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09b844";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c08a9b8(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c08a9b8(ar4 + 0xc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c078f84(ar4 + 0x18,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x24) = 0x2d;
  *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
  return 0;
}

__asm__(".globl _FUN_8c09b844\n.set _FUN_8c09b844, _FUN_8c09b844_def\n");
//@unit 8c09b88c
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
int FUN_8c09b88c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09b88c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016ac4(ar4 + 0x18,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016ac4(ar4 + 0xc,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016ac4(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c09b88c\n.set _FUN_8c09b88c, _FUN_8c09b88c_def\n");
//@unit 8c09b8e4
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
int s_GRAPHICS_MUSHROOMERLINE_09b8e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_MUSHROOMERLINE_09b8e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *ar5_00;
  undefined4 uVar2;
  code *ar6_00;
  int iVar3;
  undefined4 ar7_00;
  uint in_fr1 = 0;
  ulonglong uVar4;
  char cVar5;
  
  cVar5 = '\0';
  ar7_00 = 0;
  uVar2 = 1;
  uVar1 = 0;
  ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(ar5); unsigned long t2_ = (unsigned long)(0x8c284a8c); unsigned long t3_ = (unsigned long)(0x8c284bbc); unsigned long t4_ = (unsigned long)((*(undefined4 *)(unsigned)(unsigned)0x8c13aa6c)); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 4)) - 24); FUN_8c0254d0(ar4,0,1,0); });
  *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12a990);
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c016fcc(ar4 + 0x490,uVar1,uVar2,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(8); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c010120(ar4 + 0x544,((void *)0x8c022c4c),((void *)0x8c022cb0),0x10); });
  ({ unsigned long t0_ = (unsigned long)(8); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c010120(ar4 + 0x5c4,((void *)0x8c022c4c),((void *)0x8c022cb0),0x10); });
  uVar2 = 0x10;
  ar6_00 = ((void *)0x8c022cb0);
  ar5_00 = ((void *)0x8c022c4c);
  ({ unsigned long t0_ = (unsigned long)(8); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c010120(ar4 + 0x644,((void *)0x8c022c4c),((void *)0x8c022cb0),0x10); });
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02ff6c(ar4 + 0x6e4,ar5_00,ar6_00,uVar2));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030fa0(ar4 + 0x780,ar5_00,ar6_00,uVar2));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c09b508(ar4 + 0x9a4,ar5_00,ar6_00,uVar2));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c13aabd)); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c014334(ar4 + 0xc,ar5_00,ar6_00,uVar2); });
  *(undefined1 *)(unsigned)(ar4 + 0x6e0) = 0xff;
  iVar3 = ar4 + 0x490;
  uVar1 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xb4);
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0f532c(ar4,uVar1,iVar3,uVar2));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c027224(ar4 + 0x780,uVar1,iVar3,uVar2); });
  if (cVar5 != '\0') {
    in_fr1 = 0x40000000;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xa8) + 0x28))))((int *)(unsigned)(ar4 + 0xa8),ar4 + 0x30,iVar3,uVar2));
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    *(undefined4 *)(unsigned)(ar4 + iVar3 * 4 + 0x524) = 0;
  }
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
  *(int *)(unsigned)(ar4 + 0x308) = ar4 + 0x6e4;
  *(int *)(unsigned)(ar4 + 0x30c) = ar4 + 0x780;
  if (cVar5 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x6c4) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x6c4) = (ulonglong)in_fr1;
  }
  *(undefined1 *)(unsigned)(ar4 + 0x9a0) = 0;
  if (cVar5 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x6c8) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x6cc) = 0x3e4ccccd;
    uVar4 = CONCAT44(0x3dcccccd,in_fr1);
    *(undefined4 *)(unsigned)(ar4 + 0x6d0) = 0x3dcccccd;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x6c8) = (ulonglong)in_fr1;
    *(undefined8 *)(unsigned)(ar4 + 0x6cc) = 0x6d03e4ccccd;
    uVar4 = 0x6d43dcccccd;
    *(undefined8 *)(unsigned)(ar4 + 0x6d0) = 0x6d43dcccccd;
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x6d4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x6d8) = 0x3e4ccccd;
    *(undefined4 *)(unsigned)(ar4 + 0x6dc) = 0x3dcccccd;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x6d4) = uVar4 & 0xffffffff;
    *(undefined8 *)(unsigned)(ar4 + 0x6d8) = 0x6d03e4ccccd;
    *(undefined8 *)(unsigned)(ar4 + 0x6dc) = 0x6d43dcccccd;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x9d4) = 0;
  return ar4;
}

__asm__(".globl _s_GRAPHICS_MUSHROOMERLINE_09b8e8\n.set _s_GRAPHICS_MUSHROOMERLINE_09b8e8, _s_GRAPHICS_MUSHROOMERLINE_09b8e8_def\n");
//@unit 8c09bb44
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
int Class_12a990_m0_09bb44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a990_m0_09bb44";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12a990);
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c09b88c(ar4 + 0x9a4,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129cbc_m0_0312f4(ar4 + 0x780,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129c24_m0_02ff90(ar4 + 0x6e4,0xffffffff,ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x644,((void *)0x8c022cb0),0x10,8); });
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x5c4,((void *)0x8c022cb0),0x10,8); });
    ar7_00 = 8;
    ar6_00 = 0x10;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x544,((void *)0x8c022cb0),0x10,8); });
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129938_m0_017084(ar4 + 0x490,0xffffffff,ar6_00,ar7_00));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), CAnimal_m0_025688(ar4,0,ar6_00,ar7_00));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12a990_m0_09bb44\n.set _Class_12a990_m0_09bb44, _Class_12a990_m0_09bb44_def\n");
//@unit 8c09bc2c
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
undefined4 Class_12a990_m2_09bc2c_def(int ar4,float *ar5,code *ar6,code *ar7)

{
  ring[rp++ & 255] = "Class_12a990_m2_09bc2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 228; for (int i_ = 0; i_ < 228; i_++) z_[i_] = 0; }
  char cVar1;
  uint uVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  code *pcVar8;
  code *pcVar9;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  double dVar13;
  float fVar14;
  undefined8 in_dr2 = 0;
  double dVar15;
  undefined8 in_xd0 = 0;
  bool bVar16;
  char cVar17;
  char cVar18;
  undefined2 uVar19;
  
  cVar18 = '\0';
  cVar17 = '\0';
  pfVar7 = (float *)(unsigned)0x0;
  cVar1 = *(char *)(unsigned)(ar4 + 0x6e0);
  pcVar9 = ar7;
  if (cVar1 == -1) {
    pcVar8 = ar6;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c028ee4(ar5,0,ar6,ar7));
    uVar2 = uVar2 & 0xffff;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xe0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 228)); FUN_8c028edc(ar4 + 0x21c,uVar2,pcVar8,pcVar9); });
    uVar2 = (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c02602c(ar5,uVar2,pcVar8,pcVar9));
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xe0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 228)); FUN_8c028ed4(ar4 + 0x21c,uVar2 & 0xffff,pcVar8,pcVar9); });
    pcVar8 = (code *)0x0;
    pfVar7 = (float *)(unsigned)0x4;
    (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c0b9ed4(ar5,4,0,pcVar9));
    for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
      if (*(int *)(unsigned)(ar4 + iVar5 * 4 + 0x524) != 0) {
        iVar10 = *(int *)(unsigned)(ar4 + iVar5 * 4 + 0x524);
        pfVar7 = ar5;
        (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar10 + 8) + 0x10c))))(iVar10,ar5,pcVar8,pcVar9));
      }
    }
    if (cVar18 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x6cc) = 0x3e4ccccd;
      *(undefined4 *)(unsigned)(ar4 + 0x6d0) = 0x3dcccccd;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x6cc) = 0x6d03e4ccccd;
      *(undefined8 *)(unsigned)(ar4 + 0x6d0) = 0x6e03dcccccd;
    }
    *(undefined1 *)(unsigned)(ar4 + 0x6e0) = 0;
  }
  else {
    pcVar8 = ar6;
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        uVar4 = (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c02602c(ar5,0,ar6,ar7));
        uVar2 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xe0)) >> 0x10),(short)uVar4);
        iVar5 = (vsp = ((unsigned long)(fr0_ - 228)), get_field_c_02d1b8(ar4 + 0x21c,pfVar7,pcVar8,pcVar9));
        iVar5 = (uVar2 & 0xffff) - iVar5;
        for (iVar10 = 0; iVar10 < 8; iVar10 = iVar10 + 1) {
          if (*(int *)(unsigned)(ar4 + iVar10 * 4 + 0x524) != 0) {
            iVar6 = *(int *)(unsigned)(ar4 + iVar10 * 4 + 0x524);
            (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar6 + 8) + 0x110))))(iVar6,1,pcVar8,pcVar9));
            iVar6 = *(int *)(unsigned)(ar4 + iVar10 * 4 + 0x524);
            pfVar7 = ar5;
            pcVar8 = ar6;
            pcVar9 = ar7;
            (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar6 + 8) + 0x10))))(iVar6,ar5,ar6,ar7));
          }
        }
        ar6 = ((code *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 8) + 0xb4));
        iVar6 = (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)ar6))(ar4,pfVar7,ar6,pcVar9));
        iVar10 = 0;
        if (iVar6 != 0) {
          iVar10 = iVar5;
          (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c02c030(ar4 + 0x174,iVar5,ar7,pcVar9));
          ar6 = ar7;
        }
        if (*(char *)(unsigned)(ar4 + 0x9a0) == '\x01') {
          if (cVar18 == '\0') {
            dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x6dc),*(undefined4 *)(unsigned)(ar4 + 0x6d4));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x6d4);
            dVar13 = *(double *)(unsigned)(ar4 + 0x6dc);
          }
          if (cVar17 == '\0') {
            fVar11 = F32LO(dVar13) + F32HI(dVar13);
          }
          else {
            fVar11 = SUB84(dVar13 + dVar13,0);
          }
          if (cVar18 == '\0') {
            *(float *)(unsigned)(ar4 + 0x6d4) = fVar11;
            dVar13 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x6d4));
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x6d4) = in_xd0;
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x6d4);
            dVar13 = 12831.689682006836;
          }
          if (cVar17 == '\0') {
            fVar11 = F32LO(dVar13) * F32HI(dVar13);
          }
          else {
            fVar11 = SUB84(dVar13 * dVar13,0);
          }
          if (cVar18 == '\0') {
            dVar13 = CONCAT44D(0x40c90fd8,fVar11);
          }
          else {
            dVar13 = -3.74578248742155e-250;
          }
          if (cVar17 == '\0') {
            fVar14 = F32HI(dVar13);
            fVar11 = F32LO(dVar13) / fVar14;
            dVar13 = CONCAT44D(fVar14,fVar11);
            iVar6 = (int)fVar11;
          }
          else {
            dVar13 = dVar13 / dVar13;
            iVar6 = (int)dVar13;
          }
          ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 228)); FUN_8c25747c(iVar6,iVar10,ar6,pcVar9); });
          if (cVar18 == '\0') {
            dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x6d8))
            ;
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x6d8);
          }
          if (cVar17 == '\0') {
            fVar11 = F32LO(dVar13) * F32HI(dVar13);
          }
          else {
            fVar11 = SUB84(dVar13 * dVar13,0);
          }
          if (cVar18 == '\0') {
            dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x30),fVar11);
          }
          else {
            dVar13 = *(double *)(unsigned)(ar4 + 0x30);
          }
          if (cVar17 == '\0') {
            fVar11 = F32LO(dVar13) + F32HI(dVar13);
          }
          else {
            fVar11 = SUB84(dVar13 + dVar13,0);
          }
          if (cVar18 == '\0') {
            *(float *)(unsigned)(ar4 + 0x30) = fVar11;
            fVar11 = *(float *)(unsigned)(ar4 + 0x6d4);
            fVar14 = 18.84;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd0;
            fVar11 = 18.84;
            fVar14 = 1.3589516e+11;
          }
          if (cVar17 != '\0' || fVar14 <= fVar11) {
            *(undefined1 *)(unsigned)(ar4 + 0x9a0) = 0;
          }
        }
        else {
          if (cVar18 == '\0') {
            dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x6d0),*(undefined4 *)(unsigned)(ar4 + 0x6c8));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x6c8);
            dVar13 = *(double *)(unsigned)(ar4 + 0x6d0);
          }
          ar6 = (code *)(ar4 + 0x6d0);
          if (cVar17 == '\0') {
            fVar11 = F32LO(dVar13) + F32HI(dVar13);
          }
          else {
            fVar11 = SUB84(dVar13 + dVar13,0);
          }
          if (cVar18 == '\0') {
            *(float *)(unsigned)(ar4 + 0x6c8) = fVar11;
            dVar13 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x6c8));
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x6c8) = in_xd0;
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x6c8);
            dVar13 = 12831.689682006836;
          }
          if (cVar17 == '\0') {
            fVar11 = F32LO(dVar13) * F32HI(dVar13);
          }
          else {
            fVar11 = SUB84(dVar13 * dVar13,0);
          }
          if (cVar18 == '\0') {
            dVar13 = CONCAT44D(0x40c90fd8,fVar11);
          }
          else {
            dVar13 = -3.74578248742155e-250;
          }
          if (cVar17 == '\0') {
            fVar14 = F32HI(dVar13);
            fVar11 = F32LO(dVar13) / fVar14;
            dVar13 = CONCAT44D(fVar14,fVar11);
            iVar10 = (int)fVar11;
          }
          else {
            dVar13 = dVar13 / dVar13;
            iVar10 = (int)dVar13;
          }
          ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 228)); FUN_8c25747c(iVar10,0x6c8,ar6,pcVar9); });
          if (cVar18 == '\0') {
            dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x6cc))
            ;
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x6cc);
          }
          if (cVar17 == '\0') {
            fVar11 = F32LO(dVar13) * F32HI(dVar13);
          }
          else {
            fVar11 = SUB84(dVar13 * dVar13,0);
          }
          if (cVar18 == '\0') {
            dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),fVar11);
          }
          else {
            dVar13 = *(double *)(unsigned)(ar4 + 0x34);
          }
          if (cVar17 == '\0') {
            fVar11 = F32LO(dVar13) + F32HI(dVar13);
          }
          else {
            fVar11 = SUB84(dVar13 + dVar13,0);
          }
          if (cVar18 == '\0') {
            *(float *)(unsigned)(ar4 + 0x34) = fVar11;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x34) = in_xd0;
          }
        }
        *(int *)(unsigned)(ar4 + 0x9d4) = *(int *)(unsigned)(ar4 + 0x9d4) + 1;
        for (iVar10 = 0; iVar10 < 8; iVar10 = iVar10 + 1) {
          (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c09cdf4(ar4,iVar10,ar6,pcVar9));
          (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c036988(*(undefined4 *)(unsigned)(ar4 + iVar10 * 4 + 0x524),iVar10,ar6,pcVar9));
        }
        pfVar7 = (float *)(unsigned)0x3c;
        iVar5 = (vsp = ((unsigned long)(fr0_ - 228)), libgcc_divide_helper_0101e4(iVar5,0x3c,ar6,pcVar9));
        if (2 < iVar5) {
          *(undefined1 *)(unsigned)(ar4 + 0x6e0) = 2;
        }
        if ((*(char *)(unsigned)(ar4 + 0x9a0) == '\0') &&
           (iVar5 = (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c02c518(ar4 + 0x174,pfVar7,ar6,pcVar9)), iVar5 != -1)) {
          *(undefined1 *)(unsigned)(ar4 + 0x6e0) = 0xff;
          *(undefined4 *)(unsigned)(ar4 + 0x9d4) = 0;
        }
      }
      else if (cVar1 == '\x02') {
        ar6 = (code *)0x1b;
        pfVar7 = (float *)(unsigned)0x5;
        (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c0b9ed4(ar5,5,0x1b,ar7));
        for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
          iVar10 = *(int *)(unsigned)(ar4 + iVar5 * 4 + 0x524);
          (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar10 + 8) + 0x110))))(iVar10,0,ar6,pcVar9));
          pfVar7 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar5 * 4 + 0x524));
          (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x4c))))(ar7,pfVar7,ar6,pcVar9));
          *(undefined4 *)(unsigned)(ar4 + iVar5 * 4 + 0x524) = 0;
        }
        (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c0f4d84(ar4,pfVar7,ar6,pcVar9));
      }
      goto LAB_8c09c65a;
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c028ee4(ar5,pfVar7,pcVar8,pcVar9));
  uVar2 = uVar2 & 0xffff;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xe0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 228)); FUN_8c028edc(ar4 + 0x21c,uVar2,pcVar8,pcVar9); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c02602c(ar5,uVar2,pcVar8,pcVar9));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xe0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 228)); FUN_8c028ed4(ar4 + 0x21c,uVar2 & 0xffff,pcVar8,pcVar9); });
  pcVar8 = (code *)0x0;
  pfVar7 = (float *)(unsigned)0x4;
  (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c0b9ed4(ar5,4,0,pcVar9));
  for (iVar5 = 0; uVar19 = (undefined2)(*(undefined4 *)(fr0_ - 0xe0)), iVar5 < 8; iVar5 = iVar5 + 1) {
    if (*(int *)(unsigned)(ar4 + iVar5 * 4 + 0x524) != 0) {
      iVar10 = *(int *)(unsigned)(ar4 + iVar5 * 4 + 0x524);
      pfVar7 = ar5;
      (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar10 + 8) + 0x10c))))(iVar10,ar5,pcVar8,pcVar9));
    }
  }
  if (cVar18 == '\0') {
    dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x6d0),*(undefined4 *)(unsigned)(ar4 + 0x6c8));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x6c8);
    dVar13 = *(double *)(unsigned)(ar4 + 0x6d0);
  }
  if (cVar17 == '\0') {
    fVar11 = F32LO(dVar13) + F32HI(dVar13);
  }
  else {
    fVar11 = SUB84(dVar13 + dVar13,0);
  }
  if (cVar18 == '\0') {
    *(float *)(unsigned)(ar4 + 0x6c8) = fVar11;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x6c8) = in_xd0;
  }
  uVar4 = (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c02602c(ar5,pfVar7,pcVar8,pcVar9));
  uVar2 = CONCAT22((short)uVar4,uVar19);
  iVar5 = (vsp = ((unsigned long)(fr0_ - 228)), get_field_c_02d1b8(ar4 + 0x21c,pfVar7,pcVar8,pcVar9));
  pfVar3 = (float *)(unsigned)((uVar2 >> 0x10) - iVar5);
  for (iVar5 = 0; uVar4 = (undefined4)in_dr2, iVar5 < 8; iVar5 = iVar5 + 1) {
    if (*(int *)(unsigned)(ar4 + iVar5 * 4 + 0x524) != 0) {
      iVar10 = *(int *)(unsigned)(ar4 + iVar5 * 4 + 0x524);
      (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar10 + 8) + 0x110))))(iVar10,1,pcVar8,pcVar9));
      iVar10 = *(int *)(unsigned)(ar4 + iVar5 * 4 + 0x524);
      pfVar7 = ar5;
      pcVar8 = ar6;
      pcVar9 = ar7;
      (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar10 + 8) + 0x10))))(iVar10,ar5,ar6,ar7));
    }
  }
  iVar5 = (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xb4))))(ar4,pfVar7,pcVar8,pcVar9));
  ar6 = pcVar8;
  if (iVar5 != 0) {
    ar6 = ar7;
    (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c02c030(ar4 + 0x174,pfVar3,ar7,pcVar9));
    pfVar7 = pfVar3;
  }
  iVar5 = (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c027988(ar4,pfVar7,ar6,pcVar9));
  if (iVar5 == 1) {
    pfVar7 = (float *)(unsigned)(ar4 + 0x34);
    if (cVar18 == '\0') {
      dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x6c4),*(undefined4 *)(unsigned)(ar4 + 0x34));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x34);
      dVar13 = *(double *)(unsigned)(ar4 + 0x6c4);
    }
    if (cVar17 == '\0') {
      fVar11 = F32LO(dVar13) - F32HI(dVar13);
    }
    else {
      fVar11 = SUB84(dVar13 - dVar13,0);
    }
    if (cVar18 == '\0') {
      *pfVar7 = fVar11;
      dVar13 = CONCAT44D(0x3f000000,*(undefined4 *)(unsigned)(ar4 + 0x6c4));
    }
    else {
      *(undefined8 *)(unsigned)pfVar7 = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x6c4);
      dVar13 = 524288.123046875;
    }
    if (cVar17 == '\0') {
      fVar11 = F32LO(dVar13) + F32HI(dVar13);
    }
    else {
      fVar11 = SUB84(dVar13 + dVar13,0);
    }
    if (cVar18 == '\0') {
      *(float *)(unsigned)(ar4 + 0x6c4) = fVar11;
      fVar11 = *(float *)(unsigned)(ar4 + 0x6c4);
      fVar14 = 10.0;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x6c4) = in_xd0;
      fVar11 = 10.0;
      fVar14 = 2.1188467e-29;
    }
    if (cVar17 == '\0' && fVar14 < fVar11) {
      if (cVar18 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x6c4) = 0x41200000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x6c4) = 0xfd6e06841200000;
      }
    }
  }
  else {
    if (cVar18 == '\0') {
      dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x6c4),*(undefined4 *)(unsigned)(ar4 + 0x34));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x34);
      dVar13 = *(double *)(unsigned)(ar4 + 0x6c4);
    }
    if (cVar17 == '\0') {
      fVar11 = F32LO(dVar13) - F32HI(dVar13);
    }
    else {
      fVar11 = SUB84(dVar13 - dVar13,0);
    }
    if (cVar18 == '\0') {
      *(float *)(unsigned)(ar4 + 0x34) = fVar11;
      dVar13 = CONCAT44D(0x3f6b851f,*(undefined4 *)(unsigned)(ar4 + 0x6c4));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x34) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x6c4);
      dVar13 = 1.3411048255806968e-08;
    }
    if (cVar17 == '\0') {
      fVar11 = F32LO(dVar13) * F32HI(dVar13);
    }
    else {
      fVar11 = SUB84(dVar13 * dVar13,0);
    }
    if (cVar18 == '\0') {
      *(float *)(unsigned)(ar4 + 0x6c4) = fVar11;
      fVar11 = *(float *)(unsigned)(ar4 + 0x6c4);
      fVar14 = 0.2;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x6c4) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x6c4);
      fVar11 = 0.2;
      fVar14 = 2.43265e-42;
    }
    if (cVar17 == '\0' && fVar11 < fVar14) {
      if (cVar18 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x6c4) = 0x3e4ccccd;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x6c4) = 0x6c83e4ccccd;
      }
    }
    if (cVar18 == '\0') {
      dVar13 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x6c8));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x6c8);
      dVar13 = 12831.689682006836;
    }
    if (cVar17 == '\0') {
      fVar11 = F32LO(dVar13) * F32HI(dVar13);
    }
    else {
      fVar11 = SUB84(dVar13 * dVar13,0);
    }
    if (cVar18 == '\0') {
      dVar13 = CONCAT44D(0x40c90fd8,fVar11);
    }
    else {
      dVar13 = -3.74578248742155e-250;
    }
    if (cVar17 == '\0') {
      fVar14 = F32HI(dVar13);
      fVar11 = F32LO(dVar13) / fVar14;
      dVar13 = CONCAT44D(fVar14,fVar11);
      iVar5 = (int)fVar11;
    }
    else {
      dVar13 = dVar13 / dVar13;
      iVar5 = (int)dVar13;
    }
    ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 228)); FUN_8c25747c(iVar5,pfVar7,ar6,pcVar9); });
    if (cVar18 == '\0') {
      dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x6cc));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x6cc);
    }
    if (cVar17 == '\0') {
      fVar11 = F32LO(dVar13) * F32HI(dVar13);
    }
    else {
      fVar11 = SUB84(dVar13 * dVar13,0);
    }
    if (cVar18 == '\0') {
      dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),fVar11);
    }
    else {
      dVar13 = *(double *)(unsigned)(ar4 + 0x34);
    }
    if (cVar17 == '\0') {
      fVar11 = F32HI(dVar13);
      dVar13 = CONCAT44D(fVar11,F32LO(dVar13) + fVar11);
    }
    else {
      dVar13 = dVar13 + dVar13;
    }
    if (cVar18 == '\0') {
      *(int *)(unsigned)(ar4 + 0x34) = SUB84(dVar13,0);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x34) = in_xd0;
    }
    pfVar7 = (float *)(unsigned)(ar4 + 0x30);
    (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x128))))(ar7,pfVar7,ar6,pcVar9));
    if (cVar18 == '\0') {
      dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),uVar4);
      dVar13 = CONCAT44D(0x435c0000,(int)(D2U(dVar13) >> 0x20));
    }
    else {
      dVar15 = *(double *)(unsigned)(ar4 + 0x34);
      dVar13 = 7.89940779200925e-312;
    }
    if (cVar17 == '\0') {
      fVar14 = F32HI(dVar13);
      fVar11 = F32LO(dVar13) + fVar14;
      dVar13 = CONCAT44D(fVar14,fVar11);
      bVar16 = fVar11 < F32HI(dVar15);
    }
    else {
      dVar13 = dVar13 + dVar13;
      bVar16 = dVar13 < dVar15;
    }
    if (!bVar16) {
      uVar12 = D2U(dVar13) & 0xffffffff;
      if (cVar18 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x6c4) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x6c4) = uVar12;
      }
      iVar5 = (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c02c518(ar4 + 0x174,pfVar7,ar6,pcVar9));
      if (iVar5 == -1) {
        if (cVar18 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x6cc) = 0x3f99999a;
          uVar12 = CONCAT44(0x3d23d70a,(int)uVar12);
          *(undefined4 *)(unsigned)(ar4 + 0x6d0) = 0x3d23d70a;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x6cc) = 0x6d03f99999a;
          uVar12 = 0x6e03d23d70a;
          *(undefined8 *)(unsigned)(ar4 + 0x6d0) = 0x6e03d23d70a;
        }
        if (cVar18 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x6c8) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x6c8) = uVar12 & 0xffffffff;
        }
        *(undefined1 *)(unsigned)(ar4 + 0x6e0) = 1;
      }
    }
  }
  *(int *)(unsigned)(ar4 + 0x9d4) = *(int *)(unsigned)(ar4 + 0x9d4) + -5;
  if (*(int *)(unsigned)(ar4 + 0x9d4) < 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x9d4) = 0;
  }
  for (pfVar3 = (float *)(unsigned)0x0; (int)pfVar3 < 8; pfVar3 = (float *)(unsigned)((int)pfVar3 + 1)) {
    pfVar7 = pfVar3;
    (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c09cdf4(ar4,pfVar3,ar6,pcVar9));
    (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c036988(*(undefined4 *)(unsigned)(ar4 + (int)pfVar3 * 4 + 0x524),pfVar7,ar6,pcVar9));
  }
LAB_8c09c65a:
  (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xf8))))(ar4,pfVar7,ar6,pcVar9));
  (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c0f79b8(ar4 + 0xa0,pfVar7,ar6,pcVar9));
  return 1;
}

__asm__(".globl _Class_12a990_m2_09bc2c\n.set _Class_12a990_m2_09bc2c, _Class_12a990_m2_09bc2c_def\n");
//@unit 8c09c6a4
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
int Class_12a990_m6_09c6a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a990_m6_09c6a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a4;
  undefined4 ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0294c0(ar4,ar5,ar6,ar7));
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(unsigned)(0x524 + ar4 + iVar1 * 4) != 0) {
      a4 = *(int *)(unsigned)(0x524 + ar4 + iVar1 * 4);
      ar5_00 = ar5;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x20))))(a4,ar5,ar6,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c09b544(ar4 + 0x9a4,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c09b6c4(ar4 + 0x9a4,ar5_00,ar6,ar7));
  iVar1 = 0x6e0;
  *(undefined1 *)(unsigned)(0x6e0 + ar4) = 0xff;
  return iVar1;
}

__asm__(".globl _Class_12a990_m6_09c6a4\n.set _Class_12a990_m6_09c6a4, _Class_12a990_m6_09c6a4_def\n");
//@unit 8c09c738
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
undefined4
Class_12a990_m5_09c738_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a990_m5_09c738";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = -0x7d0;
  *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x4)) + iVar1) = ar4;
  (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c0b7a54((int)&s0 + iVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 8)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x4)) + iVar1) + 8) + 0x20))))
            (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x4)) + iVar1),(int)&s0 + iVar1,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c068818((int)&s0 + iVar1,0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _Class_12a990_m5_09c738\n.set _Class_12a990_m5_09c738, _Class_12a990_m5_09c738_def\n");
//@unit 8c09c77c
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
undefined4 Class_12a990_m4_09c77c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a990_m4_09c77c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0294c0(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Class_12a990_m4_09c77c\n.set _Class_12a990_m4_09c77c, _Class_12a990_m4_09c77c_def\n");
//@unit 8c09c79c
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
undefined4 FUN_8c09c79c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09c79c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4c0c(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c09c79c\n.set _FUN_8c09c79c, _FUN_8c09c79c_def\n");
//@unit 8c09c7b8
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
undefined4 noop_09c7b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_09c7b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_09c7b8\n.set _noop_09c7b8, _noop_09c7b8_def\n");
//@unit 8c09c7bc
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
undefined4 noop_09c7bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_09c7bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_09c7bc\n.set _noop_09c7bc, _noop_09c7bc_def\n");
//@unit 8c09c7c0
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
undefined4 FUN_8c09c7c0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09c7c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4e34(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02cbe4(ar4 + 0x174,ar5 + 0x4c,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035338(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c09c7c0\n.set _FUN_8c09c7c0, _FUN_8c09c7c0_def\n");
//@unit 8c09c820
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
undefined4 FUN_8c09c820_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09c820";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4ebc(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ce58(ar4 + 0x174,ar5 + 0x24,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035338(ar4 + 0x2dc,ar5 + 0x58,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c09c820\n.set _FUN_8c09c820, _FUN_8c09c820_def\n");
//@unit 8c09c878
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
undefined4 FUN_8c09c878_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09c878";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4f0c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02cf20(ar4 + 0x174,ar5 + 0x4c,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03539c(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c09c878\n.set _FUN_8c09c878, _FUN_8c09c878_def\n");
//@unit 8c09c8d8
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
undefined4 FUN_8c09c8d8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09c8d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4fa4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1f4(ar4 + 0x174,ar5 + 0x24,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03539c(ar4 + 0x2dc,ar5 + 0x58,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c09c8d8\n.set _FUN_8c09c8d8, _FUN_8c09c8d8_def\n");
//@unit 8c09c930
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
undefined4 FUN_8c09c930_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09c930";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int a4;
  int iVar1;
  float fVar2;
  double dVar3;
  int ar7_00;
  int ar6_00;
  int ar5_00;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c01538c(*(int *)(unsigned)(ar4 + 0x328) + 0x78,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c256328(0,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
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
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c256b0c(0,ar5_00,ar6_00,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c256fec(0,ar5_00,ar6_00,ar7_00); });
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + 0x70,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c21a80e(ar4_00,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c256210(1,ar5_00,ar6_00,ar7_00));
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(unsigned)(ar4 + iVar1 * 4 + 0x524) != 0) {
      (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0f4b44(*(undefined4 *)(unsigned)(ar4 + iVar1 * 4 + 0x524),ar5_00,ar6_00,ar7_00));
      a4 = *(int *)(unsigned)(ar4 + iVar1 * 4 + 0x524);
      (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x34))))(a4,ar5_00,ar6_00,ar7_00));
    }
  }
  return 8;
}

__asm__(".globl _FUN_8c09c930\n.set _FUN_8c09c930, _FUN_8c09c930_def\n");
//@unit 8c09ca80
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
undefined4 FUN_8c09ca80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09ca80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int a4;
  int iVar2;
  
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c01538c(*(int *)(unsigned)(ar4 + 0x328) + 0x78,ar5,ar6,ar7));
  uVar1 = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c256328(0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c019198(uVar1,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + 0x70,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c219a9a(uVar1,ar5,ar6,ar7));
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    if (*(int *)(unsigned)(ar4 + iVar2 * 4 + 0x524) != 0) {
      a4 = *(int *)(unsigned)(ar4 + iVar2 * 4 + 0x524);
      (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x3c))))(a4,ar5,ar6,ar7));
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c256210(1,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c09ca80\n.set _FUN_8c09ca80, _FUN_8c09ca80_def\n");
//@unit 8c09cb40
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
undefined4 FUN_8c09cb40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09cb40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x3c))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c09cb40\n.set _FUN_8c09cb40, _FUN_8c09cb40_def\n");
//@unit 8c09cb58
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
undefined4 FUN_8c09cb58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09cb58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int a4;
  int iVar1;
  
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); noop_038c8c(ar4,ar5,ar6,ar7); });
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(unsigned)(ar4 + iVar1 * 4 + 0x524) != 0) {
      a4 = *(int *)(unsigned)(ar4 + iVar1 * 4 + 0x524);
      (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x5c))))(a4,ar5,ar6,ar7));
    }
  }
  return 8;
}

__asm__(".globl _FUN_8c09cb58\n.set _FUN_8c09cb58, _FUN_8c09cb58_def\n");
//@unit 8c09cbb8
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
undefined4 FUN_8c09cbb8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09cbb8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a6;
  int a5;
  
  for (a5 = 0; a5 < 8; a5 = a5 + 1) {
    a6 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(ar5,1,1,ar7));
    if (a6 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *(int *)(unsigned)(ar4 + 8)))))(ar4,a5,a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c09cca8(ar4,a5,a6,ar7));
    }
  }
  return 8;
}

__asm__(".globl _FUN_8c09cbb8\n.set _FUN_8c09cbb8, _FUN_8c09cbb8_def\n");
//@unit 8c09cc34
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
int FUN_8c09cc34_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09cc34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x524;
  *(undefined4 *)(unsigned)(0x524 + ar4 + ar5 * 4) = ar6;
  return iVar1;
}

__asm__(".globl _FUN_8c09cc34\n.set _FUN_8c09cc34, _FUN_8c09cc34_def\n");
//@unit 8c09cc4c
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
undefined4 FUN_8c09cc4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09cc4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(unsigned)(0x524 + ar4 + iVar1 * 4) != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ff500(ar5,ar4 + iVar1 * 4 + 0x524,ar6,ar7));
    }
  }
  return 8;
}

__asm__(".globl _FUN_8c09cc4c\n.set _FUN_8c09cc4c, _FUN_8c09cc4c_def\n");
//@unit 8c09cca8
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
undefined4 FUN_8c09cca8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09cca8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  double *pdVar3;
  float *pfVar4;
  ulonglong *puVar5;
  undefined4 in_fr1 = 0;
  float fVar6;
  undefined4 uVar7;
  double dVar8;
  float fVar9;
  undefined4 in_fr3 = 0;
  undefined4 uVar10;
  double dVar11;
  undefined4 in_fr4 = 0;
  undefined8 in_dr14 = 0;
  double dVar12;
  undefined8 in_xd0 = 0;
  undefined8 in_xd14 = 0;
  int iVar13;
  char cVar14;
  char cVar15;
  
  cVar15 = '\0';
  cVar14 = '\0';
  dVar12 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4,ar5,ar6,ar7));
  if (cVar14 == '\0') {
    iVar13 = (int)SUB84(dVar12,0);
  }
  else {
    iVar13 = (int)dVar12;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,iVar13,ar6,ar7));
  pdVar3 = (double *)(unsigned)(ar4 + ar5 * 0x10 + 0x5c4);
  if (cVar14 == '\0') {
    dVar11 = CONCAT44D((float)iVar2,in_fr3);
  }
  else {
    dVar11 = (double)iVar2;
  }
  if (cVar15 == '\0') {
    dVar8 = CONCAT44D(0x42c80000,in_fr1);
  }
  else {
    dVar8 = 2.0000004975590855;
  }
  if (cVar14 == '\0') {
    dVar11 = CONCAT44D(F32HI(dVar11) / F32HI(dVar8)
                              ,SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 / dVar8;
  }
  if (cVar15 == '\0') {
    dVar8 = CONCAT44D(0x42c80000,SUB84(dVar12,0));
  }
  else {
    dVar8 = 2.0000004975590855;
    in_xd0 = in_xd14;
  }
  if (cVar14 == '\0') {
    fVar6 = F32LO(dVar8) / F32HI(dVar8);
  }
  else {
    fVar6 = SUB84(dVar8 / dVar8,0);
  }
  if (cVar15 == '\0') {
    dVar8 = CONCAT44D(0x40000000,fVar6);
  }
  else {
    dVar8 = 3.14108426957634e-311;
  }
  if (cVar14 == '\0') {
    fVar9 = F32HI(dVar8);
    fVar6 = F32LO(dVar8) / fVar9;
    dVar8 = CONCAT44D(fVar9,fVar6);
    dVar11 = CONCAT44D(F32HI(dVar11) - fVar6,SUB84(dVar11,0));
  }
  else {
    dVar8 = dVar8 / dVar8;
    dVar11 = dVar11 - dVar8;
  }
  uVar7 = SUB84(dVar8,0);
  if (cVar15 == '\0') {
    *(int *)(unsigned)pdVar3 = (int)(D2U(dVar11) >> 0x20);
  }
  else {
    *pdVar3 = dVar11;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(uVar1,iVar13,ar6,ar7));
  uVar10 = SUB84(dVar11,0);
  if (cVar14 == '\0') {
    iVar13 = (int)SUB84(dVar12,0);
  }
  else {
    iVar13 = (int)dVar12;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,iVar13,ar6,ar7));
  pdVar3 = (double *)(unsigned)(ar4 + ar5 * 0x10 + 0x5c8);
  if (cVar14 == '\0') {
    dVar11 = CONCAT44D((float)iVar2,uVar10);
  }
  else {
    dVar11 = (double)iVar2;
  }
  if (cVar15 == '\0') {
    dVar8 = CONCAT44D(0x42c80000,uVar7);
  }
  else {
    dVar8 = 2.0000004975590855;
  }
  if (cVar14 == '\0') {
    dVar11 = CONCAT44D(F32HI(dVar11) / F32HI(dVar8)
                              ,SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 / dVar8;
  }
  if (cVar15 == '\0') {
    dVar8 = CONCAT44D(0x42c80000,SUB84(dVar12,0));
    in_xd14 = in_xd0;
  }
  else {
    dVar8 = 2.0000004975590855;
  }
  if (cVar14 == '\0') {
    fVar6 = F32LO(dVar8) / F32HI(dVar8);
  }
  else {
    fVar6 = SUB84(dVar8 / dVar8,0);
  }
  if (cVar15 == '\0') {
    dVar8 = CONCAT44D(0x40000000,fVar6);
  }
  else {
    dVar8 = 3.14108426957634e-311;
  }
  if (cVar14 == '\0') {
    dVar11 = CONCAT44D(F32HI(dVar11) -
                              F32LO(dVar8) / F32HI(dVar8),SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 - dVar8 / dVar8;
  }
  if (cVar15 == '\0') {
    *(int *)(unsigned)pdVar3 = (int)(D2U(dVar11) >> 0x20);
  }
  else {
    *pdVar3 = dVar11;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(uVar1,iVar13,ar6,ar7));
  if (cVar14 == '\0') {
    iVar13 = (int)SUB84(dVar12,0);
  }
  else {
    iVar13 = (int)dVar12;
  }
  iVar13 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,iVar13,ar6,ar7));
  pfVar4 = (float *)(unsigned)(ar4 + ar5 * 0x10 + 0x5cc);
  if (cVar15 == '\0') {
    dVar11 = CONCAT44D(0x42c80000,(float)iVar13);
  }
  else {
    dVar11 = 2.0000004975590855;
  }
  if (cVar14 == '\0') {
    fVar6 = F32LO(dVar11) / F32HI(dVar11);
  }
  else {
    fVar6 = SUB84(dVar11 / dVar11,0);
  }
  if (cVar15 == '\0') {
    dVar11 = CONCAT44D(0x42c80000,fVar6);
  }
  else {
    dVar11 = 2.0000004975590855;
  }
  if (cVar14 == '\0') {
    dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),
                              F32LO(dVar12) / F32HI(dVar11));
  }
  else {
    dVar12 = dVar12 / dVar11;
  }
  if (cVar15 == '\0') {
    dVar11 = CONCAT44D(0x40000000,SUB84(dVar11,0));
  }
  else {
    dVar11 = 3.14108426957634e-311;
  }
  if (cVar14 == '\0') {
    fVar6 = F32LO(dVar11) - F32LO(dVar12) / F32HI(dVar11);
  }
  else {
    fVar6 = SUB84(dVar11 - dVar12 / dVar11,0);
  }
  if (cVar15 == '\0') {
    *pfVar4 = fVar6;
  }
  else {
    *(undefined8 *)(unsigned)pfVar4 = in_xd14;
  }
  puVar5 = (ulonglong *)(unsigned)(ar4 + ar5 * 0x10 + 0x644);
  if (cVar15 == '\0') {
    *(undefined4 *)(unsigned)puVar5 = 0;
  }
  else {
    *puVar5 = (ulonglong)(uint)fVar6;
  }
  puVar5 = (ulonglong *)(unsigned)(ar4 + ar5 * 0x10 + 0x648);
  if (cVar15 == '\0') {
    *(undefined4 *)(unsigned)puVar5 = 0;
  }
  else {
    *puVar5 = (ulonglong)(uint)fVar6;
  }
  puVar5 = (ulonglong *)(unsigned)(ar4 + ar5 * 0x10 + 0x64c);
  if (cVar15 == '\0') {
    *(undefined4 *)(unsigned)puVar5 = 0;
  }
  else {
    *puVar5 = (ulonglong)(uint)fVar6;
  }
  return 0x64c;
}

__asm__(".globl _FUN_8c09cca8\n.set _FUN_8c09cca8, _FUN_8c09cca8_def\n");
//@unit 8c09cdf4
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
undefined4 * FUN_8c09cdf4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09cdf4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *puVar2;
  undefined8 in_dr4 = 0;
  float fVar3;
  
  iVar1 = ar4 + ar5 * 0x10;
  fVar3 = F32HI(in_dr4);
  *(float *)(unsigned)(iVar1 + 0x644) =
       (*(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x5c4) - *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x644)) / fVar3 +
       *(float *)(unsigned)(iVar1 + 0x644);
  iVar1 = ar4 + ar5 * 0x10;
  *(float *)(unsigned)(iVar1 + 0x648) =
       (*(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x5c8) - *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x648)) / fVar3 +
       *(float *)(unsigned)(iVar1 + 0x648);
  iVar1 = ar4 + ar5 * 0x10;
  *(float *)(unsigned)(iVar1 + 0x64c) =
       (*(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x5cc) - *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x64c)) / fVar3 +
       *(float *)(unsigned)(iVar1 + 0x64c);
  iVar1 = ar4 + ar5 * 0x10;
  *(float *)(unsigned)(iVar1 + 0x544) = *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x644) + *(float *)(unsigned)(iVar1 + 0x544);
  iVar1 = ar4 + ar5 * 0x10;
  *(float *)(unsigned)(iVar1 + 0x548) = *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x648) + *(float *)(unsigned)(iVar1 + 0x548);
  iVar1 = ar4 + ar5 * 0x10;
  *(float *)(unsigned)(iVar1 + 0x54c) = *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x64c) + *(float *)(unsigned)(iVar1 + 0x54c);
  if ((fVar3 / 3.0 < *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x544)) &&
     (0.0 < *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x5c4))) {
    iVar1 = ar4 + ar5 * 0x10;
    *(float *)(unsigned)(iVar1 + 0x5c4) = *(float *)(unsigned)(iVar1 + 0x5c4) * -1.0;
  }
  if ((fVar3 / 3.0 < *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x548)) &&
     (0.0 < *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x5c8))) {
    iVar1 = ar4 + ar5 * 0x10;
    *(float *)(unsigned)(iVar1 + 0x5c8) = *(float *)(unsigned)(iVar1 + 0x5c8) * -1.0;
  }
  if ((fVar3 / 3.0 < *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x54c)) &&
     (0.0 < *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x5cc))) {
    iVar1 = ar4 + ar5 * 0x10;
    *(float *)(unsigned)(iVar1 + 0x5cc) = *(float *)(unsigned)(iVar1 + 0x5cc) * -1.0;
  }
  if ((*(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x544) < fVar3 / -3.0) &&
     (*(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x5c4) < 0.0)) {
    iVar1 = ar4 + ar5 * 0x10;
    *(float *)(unsigned)(iVar1 + 0x5c4) = *(float *)(unsigned)(iVar1 + 0x5c4) * -1.0;
  }
  if ((*(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x548) < fVar3 / -3.0) &&
     (*(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x5c8) < 0.0)) {
    iVar1 = ar4 + ar5 * 0x10;
    *(float *)(unsigned)(iVar1 + 0x5c8) = *(float *)(unsigned)(iVar1 + 0x5c8) * -1.0;
  }
  puVar2 = ((undefined4 *)(unsigned)0x8c09d2a4);
  if ((*(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x54c) < fVar3 / -3.0) &&
     (puVar2 = (undefined4 *)(unsigned)0x5cc, *(float *)(unsigned)(ar4 + ar5 * 0x10 + 0x5cc) < 0.0)) {
    iVar1 = ar4 + ar5 * 0x10;
    puVar2 = ((undefined4 *)(unsigned)0x8c09d29c);
    *(float *)(unsigned)(iVar1 + 0x5cc) = *(float *)(unsigned)(iVar1 + 0x5cc) * -1.0;
  }
  return puVar2;
}

__asm__(".globl _FUN_8c09cdf4\n.set _FUN_8c09cdf4, _FUN_8c09cdf4_def\n");
//@unit 8c09d2b4
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
int FUN_8c09d2b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09d2b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 1;
  if ((*(char *)(unsigned)(ar4 + 0x9a0) != '\x01') && (iVar1 = (int)*(char *)(unsigned)(ar4 + 0x6e0), iVar1 == 1)) {
    *(undefined1 *)(unsigned)(ar4 + 0x9a0) = 1;
    *(undefined4 *)(unsigned)(ar4 + 0x6d8) = 0x3f8ccccd;
    *(undefined4 *)(unsigned)(ar4 + 0x6dc) = 0x3e2e147b;
    iVar1 = 0x6d4;
    *(undefined4 *)(unsigned)(ar4 + 0x6d4) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c09d2b4\n.set _FUN_8c09d2b4, _FUN_8c09d2b4_def\n");
//@unit 8c09d310
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
undefined4 FUN_8c09d310_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09d310";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a4;
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_Load_CAnimal_LoadG_0284b8(ar4,ar5,ar6,ar7));
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(unsigned)(0x524 + ar4 + iVar1 * 4) != 0) {
      a4 = *(int *)(unsigned)(0x524 + ar4 + iVar1 * 4);
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xe0 + *(int *)(unsigned)(a4 + 8)))))(a4,ar5,0,ar7));
    }
  }
  return 8;
}

__asm__(".globl _FUN_8c09d310\n.set _FUN_8c09d310, _FUN_8c09d310_def\n");
//@unit 8c09d384
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
undefined4 FUN_8c09d384_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09d384";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a4;
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028afc(ar4,ar5,ar6,ar7));
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(unsigned)(0x524 + ar4 + iVar1 * 4) != 0) {
      a4 = *(int *)(unsigned)(0x524 + ar4 + iVar1 * 4);
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xec + *(int *)(unsigned)(a4 + 8)))))(a4,ar5,0,ar7));
    }
  }
  return 8;
}

__asm__(".globl _FUN_8c09d384\n.set _FUN_8c09d384, _FUN_8c09d384_def\n");
//@unit 8c09d3f8
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
undefined4 Class_12a990_m8_09d3f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a990_m8_09d3f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), CAnimal_m8_0f511c(ar4,ar5,ar6,ar7));
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(unsigned)(0x524 + ar4 + iVar1 * 4) != 0) {
      ar5 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_74_09d474(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c09d46c(*(undefined4 *)(unsigned)(0x524 + ar4 + iVar1 * 4),ar5,ar6,ar7));
    }
  }
  return 8;
}

__asm__(".globl _Class_12a990_m8_09d3f8\n.set _Class_12a990_m8_09d3f8, _Class_12a990_m8_09d3f8_def\n");
//@unit 8c09d46c
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
undefined4 FUN_8c09d46c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09d46c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x74) = ar5;
  return 0x74;
}

__asm__(".globl _FUN_8c09d46c\n.set _FUN_8c09d46c, _FUN_8c09d46c_def\n");
//@unit 8c09d474
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
undefined4 get_field_74_09d474_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_74_09d474";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x74);
}

__asm__(".globl _get_field_74_09d474\n.set _get_field_74_09d474, _get_field_74_09d474_def\n");
//@unit 8c09d47c
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
undefined4 s_MrEgg_Home_nj_09d47c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_MrEgg_Home_nj_09d47c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b570) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b56c) = 0;
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7b568) = (*(undefined4 *)(unsigned)(unsigned)0x8c13aa70);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b564) = 0;
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7b560) = (*(undefined4 *)(unsigned)(unsigned)0x8c13aa74);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b55c) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b4c0) = 0x8c284cb8;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b4b8) = 0x3f800000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b4a8) = 0x3ca3d70a;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b4a4) = 0x3ecccccd;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b4a0) = 0x43480000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b4ac) = 0x3eb33333;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7b454) = 0x43898000;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined2 *)(unsigned)(iVar1 * 0x10 + -0x73d7b444) = 0xffff;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7b440) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7b43c) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7b438) = 0;
  }
  return 1;
}

__asm__(".globl _s_MrEgg_Home_nj_09d47c\n.set _s_MrEgg_Home_nj_09d47c, _s_MrEgg_Home_nj_09d47c_def\n");
//@unit 8c09d644
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
undefined4 FUN_8c09d644_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09d644";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *ar4 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02a1fc(ar4 + 1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c08a9b8(ar4 + 4,ar5,ar6,ar7));
  ar4[7] = 10;
  ar4[8] = ar4[8] | 0x80000001;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c09d6b8(ar4 + 9,ar5,ar6,ar7));
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined1 *)(unsigned)((int)ar4 + iVar1 + 0x58) = 0;
  }
  return 0xf;
}

__asm__(".globl _FUN_8c09d644\n.set _FUN_8c09d644, _FUN_8c09d644_def\n");
//@unit 8c09d6b8
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
undefined4 FUN_8c09d6b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09d6b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x10) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x1c) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x1e) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x20) = 0;
  return 0;
}

__asm__(".globl _FUN_8c09d6b8\n.set _FUN_8c09d6b8, _FUN_8c09d6b8_def\n");
//@unit 8c09d6e8
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
undefined4 Class_12a990_m3_09d6e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a990_m3_09d6e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x10))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Class_12a990_m3_09d6e8\n.set _Class_12a990_m3_09d6e8, _Class_12a990_m3_09d6e8_def\n");
//@unit 8c09d710
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
undefined4 ret_const_1_09d710_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_1_09d710";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl _ret_const_1_09d710\n.set _ret_const_1_09d710, _ret_const_1_09d710_def\n");
//@unit 8c09d718
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
undefined4 FUN_8c09d718_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09d718";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1260c8),ar5,ar6,ar7));
  uVar3 = 0x8c284a50;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284a50,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1260d8),pcVar2,uVar3,ar7));
  uVar3 = 0x8c284a5c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284a5c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1260e8),pcVar2,uVar3,ar7));
  uVar3 = 0x8c284a68;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284a68,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1260f8),pcVar2,uVar3,ar7));
  uVar3 = 0x8c284a74;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284a74,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126108) = CONCAT44((*(undefined1 *)(unsigned)0x8c12610c),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126108) = 0xffffffff00800000;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02452c(0x8c284a8c,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284a80;
  pcVar2 = ((void *)0x8c03a4ac);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a4ac),0x8c284a80,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c024824(0x8c284bbc,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284bb0;
  pcVar2 = ((void *)0x8c03a454);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a454),0x8c284bb0,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284bd8,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284bcc;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284bcc,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284bf4,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284be8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284be8,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284c10,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284c04;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284c04,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284c2c,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284c20;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284c20,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284c48,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284c3c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284c3c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284c64,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284c58;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284c58,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284c80,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284c74;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284c74,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284c9c,pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284c90,ar7));
  uVar3 = 0x8c284c10;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c284c2c); unsigned long t1_ = (unsigned long)(0x8c284c48); unsigned long t2_ = (unsigned long)(0x8c284c64); unsigned long t3_ = (unsigned long)(
                       0x8c284c80); unsigned long t4_ = (unsigned long)(0x8c284c9c); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c284cb8,0x8c284bd8,0x8c284bf4,0x8c284c10); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c284cac,uVar3));
  return uVar1;
}

__asm__(".globl _FUN_8c09d718\n.set _FUN_8c09d718, _FUN_8c09d718_def\n");
//@unit 8c09d9c0
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
int s_GRAPHICS_MUSHROOMERLINE_09d9c2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_MUSHROOMERLINE_09d9c2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar7_00 = 1;
  ar6_00 = 1;
  ar5_00 = 1;
  ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(ar5); unsigned long t2_ = (unsigned long)(0x8c284d90); unsigned long t3_ = (unsigned long)(0x8c284ec0); unsigned long t4_ = (unsigned long)(*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13aafc))); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0254d0))))
            (ar4,1,1,1); });
  *(unsigned *)(unsigned)(ar4 + 8) = (&(*(undefined1 *)(unsigned)0x8c12ab2c));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c09f3b4(ar4 + 0x490,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0a0818(ar4 + 0xcc4,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016fcc(ar4 + 0xf3c,ar5_00,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c13ab90)) + 0x256); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
            (ar4 + 0xc,ar5_00,ar6_00,ar7_00); });
  *(int *)(unsigned)(0x308 + ar4) = ar4 + 0x490;
  *(int *)(unsigned)(0x30c + ar4) = ar4 + 0xcc4;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0f532c))))
            (ar4,*(undefined4 *)(unsigned)(0xb4 + *(int *)(unsigned)(0x328 + ar4)),ar4 + 0xf3c,
             ar7_00));
  *(undefined4 *)(unsigned)(0xfd0 + ar4) = 0;
  return ar4;
}

__asm__(".globl _s_GRAPHICS_MUSHROOMERLINE_09d9c2\n.set _s_GRAPHICS_MUSHROOMERLINE_09d9c2, _s_GRAPHICS_MUSHROOMERLINE_09d9c2_def\n");
//@unit 8c09dab8
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
int Class_12ab2c_m0_09dab8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12ab2c_m0_09dab8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5);
  if (ar4 != 0) {
    *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12ab2c);
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c09efb4(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129938_m0_017084(ar4 + 0xf3c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12ad14_m0_0a0950(ar4 + 0xcc4,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12acc8_m0_09f428(ar4 + 0x490,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), CAnimal_m0_025688(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12ab2c_m0_09dab8\n.set _Class_12ab2c_m0_09dab8, _Class_12ab2c_m0_09dab8_def\n");
//@unit 8c09db4c
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
undefined4 Class_12ab2c_m2_09db4c_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "Class_12ab2c_m2_09db4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  int iVar1;
  int *a7;
  float extraout_fr1 = 0;
  float fVar2;
  float extraout_fr1_00 = 0;
  char cVar3;
  
  cVar3 = '\0';
  a7 = ar7;
  (vsp = ((unsigned long)(fr0_ - 16)), CAnimal_m2_02573c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x198))))(ar7,ar5,ar6,a7));
  if ((((*(byte *)(fr0_ - 0x10)) & 3) >> 1) - ((int)((uint)(*(byte *)(fr0_ - 0x10)) << 0x1f) >> 0x1f) == 2) {
    if (0 < *(int *)(unsigned)(ar4 + 0xfd0)) {
      fVar2 = extraout_fr1;
      if (cVar3 == '\0') {
        fVar2 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4);
      }
      if (fVar2 != 0.0) {
        (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c09edf0(ar4,ar5,ar6,a7));
      }
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 16)), get_field_124_027930(ar4 + 0xcc4,ar5,ar6,a7));
    if ((iVar1 == 2) || (iVar1 = (vsp = ((unsigned long)(fr0_ - 16)), get_field_124_027930(ar4 + 0xcc4,ar5,ar6,a7)), iVar1 == 9)) {
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c09ea78(ar4,ar5,ar6,a7));
    }
    else if (0 < *(int *)(unsigned)(ar4 + 0xfd0)) {
      fVar2 = extraout_fr1_00;
      if (cVar3 == '\0') {
        fVar2 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4);
      }
      if (fVar2 != 0.0) {
        (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c09edf0(ar4,ar5,ar6,a7));
      }
    }
  }
  return 1;
}

__asm__(".globl _Class_12ab2c_m2_09db4c\n.set _Class_12ab2c_m2_09db4c, _Class_12ab2c_m2_09db4c_def\n");
//@unit 8c09dc64
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
undefined4 FUN_8c09dc64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09dc64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0366e4(*(undefined4 *)(unsigned)(0x308 + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c09dc64\n.set _FUN_8c09dc64, _FUN_8c09dc64_def\n");
//@unit 8c09dc8c
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
undefined4 Class_12ab2c_m4_09dc8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12ab2c_m4_09dc8c";
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

__asm__(".globl _Class_12ab2c_m4_09dc8c\n.set _Class_12ab2c_m4_09dc8c, _Class_12ab2c_m4_09dc8c_def\n");
//@unit 8c09dcf8
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
undefined4 Class_12ab2c_m5_09dcf8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12ab2c_m5_09dcf8";
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

__asm__(".globl _Class_12ab2c_m5_09dcf8\n.set _Class_12ab2c_m5_09dcf8, _Class_12ab2c_m5_09dcf8_def\n");
//@unit 8c09dd64
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
undefined4 Class_12ab2c_m6_09dd64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12ab2c_m6_09dd64";
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

__asm__(".globl _Class_12ab2c_m6_09dd64\n.set _Class_12ab2c_m6_09dd64, _Class_12ab2c_m6_09dd64_def\n");
//@unit 8c09dde4
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
undefined4 FUN_8c09dde4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09dde4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  if (*(int *)(unsigned)(ar4 + 0xfd0) != 0) {
    ar5 = 1;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c221916(*(int *)(unsigned)(ar4 + 0xfd0) + 1,1,ar6,ar7));
  }
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2219de(2,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2219de(3,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2219de(4,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c21418e(2,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c21418e(3,ar5,ar6,ar7); });
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c21418e(4,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c09dde4\n.set _FUN_8c09dde4, _FUN_8c09dde4_def\n");
//@unit 8c09de7c
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
undefined4 FUN_8c09de7c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09de7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c221916(2,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c221916(3,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c221916(4,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2140c6(2,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2140c6(3,0,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2140c6(4,0,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c09de7c\n.set _FUN_8c09de7c, _FUN_8c09de7c_def\n");
//@unit 8c09dec8
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
int FUN_8c09dec8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09dec8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  int iVar10;
  int ar5_00;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xb4))))(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c284fb4) = (vsp = ((unsigned long)(fr0_ - 116)), get_field_24c_09e1f8(ar4 + 0xcc4,ar5,ar6,ar7));
  piVar2 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 116)), get_field_4_0253e4(*(int *)(unsigned)(ar4 + 0x328) + 0x78,ar5,ar6,ar7));
  uVar6 = *(undefined4 *)(unsigned)(*piVar2 + 8);
  *(undefined4 *)(unsigned)(*piVar2 + 8) = *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c284fb4) * 0xc + *piVar2 + 8);
  *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c284fb4) * 0xc + *piVar2 + 8) = uVar6;
  (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c01538c(*(int *)(unsigned)(ar4 + 0x328) + 0x78,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); FUN_8c256328(0,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
  if (cVar12 == '\0') {
    dVar8 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar8 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar7 = F32LO(dVar8) * F32HI(dVar8);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (cVar12 == '\0') {
    dVar8 = CONCAT44D(0x43b40000,fVar7);
  }
  else {
    dVar8 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    iVar1 = (int)(F32LO(dVar8) / F32HI(dVar8));
  }
  else {
    iVar1 = (int)(dVar8 / dVar8);
  }
  if (cVar12 == '\0') {
    dVar8 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar8 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar7 = F32LO(dVar8) * F32HI(dVar8);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (cVar12 == '\0') {
    dVar8 = CONCAT44D(0x43b40000,fVar7);
  }
  else {
    dVar8 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    iVar10 = (int)(F32LO(dVar8) / F32HI(dVar8));
  }
  else {
    iVar10 = (int)(dVar8 / dVar8);
  }
  if (cVar12 == '\0') {
    dVar8 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar8 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar7 = F32LO(dVar8) * F32HI(dVar8);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (cVar12 == '\0') {
    dVar8 = CONCAT44D(0x43b40000,fVar7);
  }
  else {
    dVar8 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    fVar9 = F32HI(dVar8);
    fVar7 = F32LO(dVar8) / fVar9;
    dVar8 = CONCAT44D(fVar9,fVar7);
    ar5_00 = (int)fVar7;
  }
  else {
    dVar8 = dVar8 / dVar8;
    ar5_00 = (int)dVar8;
  }
  (*(undefined4 *)(fr0_ - 0x4c)) = (undefined4)(D2U(dVar8) >> 0x20);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); FUN_8c256b0c(0,ar5_00,iVar10,iVar1); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); FUN_8c256fec(0,ar5_00,iVar10,iVar1); });
  iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xb4))))(ar4,ar5_00,iVar10,iVar1));
  if (iVar3 == 0) {
    (*(undefined4 *)(fr0_ - 0x34)) = (*(undefined4 *)(fr0_ - 0x4c));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + 0x70,ar5_00,iVar10,iVar1));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,iVar10,iVar1));
    uVar6 = (vsp = ((unsigned long)(fr0_ - 116)), deref_u32(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa0) + iVar3 * 4,ar5_00,iVar10,iVar1));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,iVar10,iVar1));
    uVar5 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c026d74(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa8) + iVar3 * 4,ar5_00,iVar10,iVar1));
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,iVar10,iVar1));
    if (cVar12 == '\0') {
      (*(undefined4 *)(fr0_ - 0x34)) = uVar5;
    }
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); FUN_8c21bbb0(uVar4,uVar6,(*(undefined4 *)(fr0_ - 0x34)),iVar1); });
  }
  else {
    uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + 0x70,ar5_00,iVar10,iVar1));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,iVar10,iVar1));
    uVar6 = (vsp = ((unsigned long)(fr0_ - 116)), deref_u32(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa0) + iVar3 * 4,ar5_00,iVar10,iVar1));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,iVar10,iVar1));
    uVar5 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c026d74(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa8) + iVar3 * 4,ar5_00,iVar10,iVar1));
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_00,iVar10,iVar1));
    if (cVar12 == '\0') {
      (*(undefined4 *)(fr0_ - 0x4c)) = uVar5;
    }
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c21af26(uVar4,uVar6,(*(undefined4 *)(fr0_ - 0x4c)),iVar1));
    (*(undefined4 *)(fr0_ - 0x34)) = (*(undefined4 *)(fr0_ - 0x4c));
  }
  (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c256210(1,uVar6,(*(undefined4 *)(fr0_ - 0x34)),iVar1));
  uVar4 = *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c284fb4) * 0xc + *piVar2 + 8);
  *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c284fb4) * 0xc + *piVar2 + 8) = *(undefined4 *)(unsigned)(*piVar2 + 8);
  *(undefined4 *)(unsigned)(*piVar2 + 8) = uVar4;
  iVar10 = (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xb4))))(ar4,uVar6,(*(undefined4 *)(fr0_ - 0x34)),iVar1));
  if (iVar10 == 0) {
    iVar10 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c233dac(((undefined1 *)(unsigned)0x8c13aad4),uVar6,(*(undefined4 *)(fr0_ - 0x34)),iVar1));
  }
  return iVar10;
}

__asm__(".globl _FUN_8c09dec8\n.set _FUN_8c09dec8, _FUN_8c09dec8_def\n");
//@unit 8c09e1f8
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
undefined4 get_field_24c_09e1f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_24c_09e1f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x24c + ar4);
}

__asm__(".globl _get_field_24c_09e1f8\n.set _get_field_24c_09e1f8, _get_field_24c_09e1f8_def\n");
//@unit 8c09e204
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
undefined4 FUN_8c09e204_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09e204";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  int ar6_00;
  int ar5_00;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar2 = ar4 + 0x5c;
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c023e24((fr0_ + (int)0xffffffec),iVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c08a9b8(ar4 + 0x5c,iVar2,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c256328(0,iVar2,ar6,ar7); });
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar5 == '\0') {
    iVar2 = (int)(F32LO(dVar4) / F32HI(dVar4));
  }
  else {
    iVar2 = (int)(dVar4 / dVar4);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar5 == '\0') {
    ar6_00 = (int)(F32LO(dVar4) / F32HI(dVar4));
  }
  else {
    ar6_00 = (int)(dVar4 / dVar4);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar5 == '\0') {
    ar5_00 = (int)(F32LO(dVar4) / F32HI(dVar4));
  }
  else {
    ar5_00 = (int)(dVar4 / dVar4);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c256b0c(0,ar5_00,ar6_00,iVar2); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c256fec(0,ar5_00,ar6_00,iVar2); });
  (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x3c))))(ar4,ar5_00,ar6_00,iVar2));
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c256210(1,ar5_00,ar6_00,iVar2));
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c023e04(ar4 + 0x5c,(fr0_ + (int)0xffffffec),ar6_00,iVar2));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 40)), free_if_nonnull_wrap_016ac4((fr0_ + (int)0xffffffec),0xffffffff,ar6_00,iVar2));
  return uVar1;
}

__asm__(".globl _FUN_8c09e204\n.set _FUN_8c09e204, _FUN_8c09e204_def\n");
//@unit 8c09e2e8
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
int FUN_8c09e2e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09e2e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  int *piVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  int iVar8;
  int ar6_00;
  int ar5_01;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  (*(undefined4 *)(unsigned)(unsigned)0x8c284fb8) = (vsp = ((unsigned long)(fr0_ - 72)), get_field_24c_09e1f8(ar4 + 0xcc4,ar5,ar6,ar7));
  piVar1 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 72)), get_field_4_0253e4(*(int *)(unsigned)(ar4 + 0x328) + 0x78,ar5,ar6,ar7));
  uVar4 = *(undefined4 *)(unsigned)(*piVar1 + 8);
  *(undefined4 *)(unsigned)(*piVar1 + 8) = *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c284fb8) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c284fb8) * 0xc + *piVar1 + 8) = uVar4;
  (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c01538c(*(int *)(unsigned)(ar4 + 0x328) + 0x78,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c256328(0,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(0x43b40000,fVar5);
  }
  else {
    dVar6 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    iVar8 = (int)(F32LO(dVar6) / F32HI(dVar6));
  }
  else {
    iVar8 = (int)(dVar6 / dVar6);
  }
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(0x43b40000,fVar5);
  }
  else {
    dVar6 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    ar6_00 = (int)(F32LO(dVar6) / F32HI(dVar6));
  }
  else {
    ar6_00 = (int)(dVar6 / dVar6);
  }
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(0x43b40000,fVar5);
  }
  else {
    dVar6 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    fVar7 = F32HI(dVar6);
    fVar5 = F32LO(dVar6) / fVar7;
    dVar6 = CONCAT44D(fVar7,fVar5);
    ar5_01 = (int)fVar5;
  }
  else {
    dVar6 = dVar6 / dVar6;
    ar5_01 = (int)dVar6;
  }
  (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)(D2U(dVar6) >> 0x20);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c256b0c(0,ar5_01,ar6_00,iVar8); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c256fec(0,ar5_01,ar6_00,iVar8); });
  uVar4 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + 0x70,ar5_01,ar6_00,iVar8));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_01,ar6_00,iVar8));
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 72)), deref_u32(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa0) + iVar2 * 4,ar5_01,ar6_00,iVar8));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_01,ar6_00,iVar8));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c026d74(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa8) + iVar2 * 4,ar5_01,ar6_00,iVar8));
  (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5_01,ar6_00,iVar8));
  if (cVar10 == '\0') {
    (*(undefined4 *)(fr0_ - 0x2c)) = uVar3;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c21bbb0(uVar4,ar5_00,(*(undefined4 *)(fr0_ - 0x2c)),iVar8); });
  (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c256210(1,ar5_00,(*(undefined4 *)(fr0_ - 0x2c)),iVar8));
  uVar4 = *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c284fb8) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c284fb8) * 0xc + *piVar1 + 8) = *(undefined4 *)(unsigned)(*piVar1 + 8);
  iVar8 = *piVar1;
  *(undefined4 *)(unsigned)(iVar8 + 8) = uVar4;
  return iVar8;
}

__asm__(".globl _FUN_8c09e2e8\n.set _FUN_8c09e2e8, _FUN_8c09e2e8_def\n");
//@unit 8c09e4fc
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
undefined4 FUN_8c09e4fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09e4fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  undefined4 extraout_fr0 = 0;
  char cVar4;
  
  cVar4 = '\0';
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c01538c(*(int *)(unsigned)(ar4 + 0x328) + 0x78,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + 0x70,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 28)), deref_u32(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa0) + iVar2 * 4,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c026d74(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa8) + iVar2 * 4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x1c)) = extraout_fr0;
  if (cVar4 == '\0') {
    (*(undefined4 *)(fr0_ - 0x1c)) = uVar3;
  }
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c21bbb0(uVar1,ar5_00,(*(undefined4 *)(fr0_ - 0x1c)),ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c09e4fc\n.set _FUN_8c09e4fc, _FUN_8c09e4fc_def\n");
//@unit 8c09e5c0
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
undefined4 s_Mr3_Home_njd_09e5c2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Mr3_Home_njd_09e5c2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  float *pfVar2;
  undefined4 uVar3;
  int iVar4;
  float in_fr1 = 0;
  double dVar5;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  for (iVar4 = 0; iVar4 < 1; iVar4 = iVar4 + 1) {
    *(undefined4 *)(unsigned)(iVar4 * 0x124 + -0x73d7b270) = 0;
    *(undefined4 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1d0) = 0;
    *(undefined4 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1bc) = 0;
    *(undefined2 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1cc) = 0;
    *(undefined2 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1c4) = 0;
  }
  for (iVar4 = 0; iVar4 < 1; iVar4 = iVar4 + 1) {
    *(undefined ***)(unsigned)(iVar4 * 0x124 + -0x73d7b26c) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13ab18);
    *(undefined ***)(unsigned)(iVar4 * 0x124 + -0x73d7b268) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13ab54);
    *(unsigned *)(unsigned)(iVar4 * 0x124 + -0x73d7b264) = (*(undefined4 *)(unsigned)(unsigned)0x8c13ab04);
    *(undefined4 *)(unsigned)(iVar4 * 0x124 + -0x73d7b260) = 0;
    *(unsigned *)(unsigned)(iVar4 * 0x124 + -0x73d7b25c) = (*(undefined4 *)(unsigned)(unsigned)0x8c13ab10);
    *(unsigned *)(unsigned)(iVar4 * 0x124 + -0x73d7b258) = (*(undefined4 *)(unsigned)(unsigned)0x8c13ab08);
    *(unsigned *)(unsigned)(iVar4 * 0x124 + -0x73d7b254) = (*(undefined4 *)(unsigned)(unsigned)0x8c13ab14);
    *(unsigned *)(unsigned)(iVar4 * 0x124 + -0x73d7b250) = (*(undefined4 *)(unsigned)(unsigned)0x8c13ab0c);
    *(undefined4 *)(unsigned)(iVar4 * 0x124 + -0x73d7b24c) = 7;
    *(undefined4 *)(unsigned)(iVar4 * 0x124 + -0x73d7b240) = 0x8c284ed0;
    *(undefined4 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1bc) = 0x8c2850a8;
    puVar1 = (undefined8 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1b4);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,in_fr1);
    }
    puVar1 = (undefined8 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1a4);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,in_fr1);
    }
    puVar1 = (undefined8 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1a0);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,in_fr1);
    }
    puVar1 = (undefined8 *)(unsigned)(iVar4 * 0x124 + -0x73d7b19c);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)puVar1 = 0x43340000;
    }
    else {
      *puVar1 = 0xa043340000;
    }
    *(undefined4 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1d0) = 0x8c284f30;
    *(undefined2 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1cc) = 0xf;
    *(undefined4 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1c8) = 0x8c284f78;
    *(undefined2 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1c4) = 0xf;
    (vsp = ((unsigned long)(fr0_ - 48)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x14)),ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), vec3_copy_8c023d8c(iVar4 * 0x124 + -0x73d7b178,((undefined1 *)(fr0_ - 0x14)),ar6,ar7));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 48)), object_dtor_delete(((undefined1 *)(fr0_ - 0x14)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x20)),uVar3,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), vec3_copy_8c023d8c(iVar4 * 0x124 + -0x73d7b16c,((undefined1 *)(fr0_ - 0x20)),ar6,ar7));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 48)), object_dtor_delete(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x2c)),uVar3,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), vec3_copy_8c023d8c(iVar4 * 0x124 + -0x73d7b160,((undefined1 *)(fr0_ - 0x2c)),ar6,ar7));
    ar5 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 48)), object_dtor_delete(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
    puVar1 = (undefined8 *)(unsigned)(iVar4 * 0x124 + -0x73d7b150);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)puVar1 = 0x43160000;
    }
    else {
      *puVar1 = 0xec43160000;
    }
    puVar1 = (undefined8 *)(unsigned)(iVar4 * 0x124 + -0x73d7b184);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)puVar1 = 0x41100000;
    }
    else {
      *puVar1 = 0xc841100000;
    }
    pfVar2 = (float *)(unsigned)(iVar4 * 0x124 + -0x73d7b1a8);
    puVar1 = (undefined8 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1a8);
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)puVar1);
    }
    else {
      in_xd0 = *puVar1;
      dVar5 = 4.92819431073484e-312;
    }
    if (cVar6 == '\0') {
      in_fr1 = F32LO(dVar5) * F32HI(dVar5);
    }
    else {
      in_fr1 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar7 == '\0') {
      *pfVar2 = in_fr1;
    }
    else {
      *(undefined8 *)(unsigned)pfVar2 = in_xd0;
    }
    puVar1 = (undefined8 *)(unsigned)(iVar4 * 0x124 + -0x73d7b188);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)puVar1 = 0x41e80000;
    }
    else {
      in_fr1 = 29.0;
      *puVar1 = 0x54f31fe341e80000;
    }
  }
  for (iVar4 = 0; iVar4 < 1; iVar4 = iVar4 + 1) {
    *(undefined2 *)(unsigned)(iVar4 * 0x10 + -0x73d7b140) = 0xffff;
    *(undefined4 *)(unsigned)(iVar4 * 0x10 + -0x73d7b13c) = 1;
    *(undefined4 *)(unsigned)(iVar4 * 0x10 + -0x73d7b138) = 0;
    *(undefined4 *)(unsigned)(iVar4 * 0x10 + -0x73d7b134) = 0;
  }
  return 1;
}

__asm__(".globl _s_Mr3_Home_njd_09e5c2\n.set _s_Mr3_Home_njd_09e5c2, _s_Mr3_Home_njd_09e5c2_def\n");
//@unit 8c09ea78
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
undefined4 FUN_8c09ea78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09ea78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 124; for (int i_ = 0; i_ < 124; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  undefined1 *ar4_00;
  int ar5_00;
  undefined4 ar5_01;
  float fVar5;
  ulonglong in_dr0 = 0;
  double dVar6;
  code *pcVar7;
  undefined8 in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  ar4_00 = ((undefined1 *)(fr0_ - 0x1c));
  (vsp = ((unsigned long)(fr0_ - 124)), Vec3_ctor_zero(ar4_00,ar5,ar6,ar7));
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c284d80) < 3) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 124)), rand(ar4_00,ar5,ar6,ar7));
    ar5 = 5;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 124)), libgcc_divide_helper_01031c(uVar2,5,ar6,ar7));
    if (iVar3 == 0) {
      for (iVar3 = 0; fVar5 = (float)in_dr0, iVar3 < 3; iVar3 = iVar3 + 1) {
        if (cVar9 == '\0') {
          fVar5 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + iVar3 * 4);
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + iVar3 * 4);
        }
        in_dr0 = (ulonglong)(uint)fVar5;
        if ((fVar5 == 0.0) && (*(int *)(unsigned)(ar4 + 0xfd0) == 0)) {
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 124)); FUN_8c22195c(iVar3 + 2,ar5,ar6,ar7); });
          ar5_00 = ar4 + 0x30;
          (vsp = ((unsigned long)(fr0_ - 124)), Vec3_assign(((undefined1 *)(fr0_ - 0x1c)),ar5_00,ar6,ar7));
          if (cVar9 == '\0') {
            dVar6 = CONCAT44D(0x41700000,(undefined4)(*(undefined8 *)(fr0_ - 0x14)));
          }
          else {
            dVar6 = -3.1600868374053233e-250;
            in_xd0 = (*(undefined8 *)(fr0_ - 0x14));
          }
          if (cVar8 == '\0') {
            fVar5 = F32LO(dVar6) + F32HI(dVar6);
          }
          else {
            fVar5 = SUB84(dVar6 + dVar6,0);
          }
          uVar1 = in_xd0;
          if (cVar9 == '\0') {
            (*(undefined8 *)(fr0_ - 0x14)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x14))+4)),fVar5);
            uVar1 = (*(undefined8 *)(fr0_ - 0x14));
          }
          (*(undefined8 *)(fr0_ - 0x14)) = uVar1;
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 124)); FUN_8c2219ac(iVar3 + 2,ar5_00,ar6,ar7); });
          if (cVar9 == '\0') {
            *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + iVar3 * 4) = 0x3dcccccd;
          }
          else {
            *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + iVar3 * 4) = 0x8c22195c3dcccccd;
          }
          *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aaf0) + iVar3 * 4) = 1;
          (*(undefined4 *)(unsigned)(unsigned)0x8c284d80) = (*(undefined4 *)(unsigned)(unsigned)0x8c284d80) + 1;
          *(int *)(unsigned)(ar4 + 0xfd0) = iVar3 + 1;
          ar5 = 1;
          (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c221916(*(int *)(unsigned)(ar4 + 0xfd0) + 1,1,ar6,ar7));
          break;
        }
      }
    }
  }
  if (*(int *)(unsigned)(ar4 + 0xfd0) != 0) {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 124)); FUN_8c22195c(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 124)); FUN_8c21410c(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 124)); FUN_8c2219ac(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5,ar6,ar7); });
    iVar3 = *(int *)(unsigned)(ar4 + 0xfd0) + 1;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 124)); FUN_8c21415c(iVar3,ar5,ar6,ar7); });
    if (*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c13aaf0) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4) == 1) {
      pfVar4 = (float *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4);
      if (cVar9 == '\0') {
        dVar6 = CONCAT44D(0x3c23d70a,*pfVar4);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)pfVar4;
        dVar6 = -3.01216570193662e-250;
      }
      if (cVar8 == '\0') {
        fVar5 = F32LO(dVar6) + F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar9 == '\0') {
        *pfVar4 = fVar5;
      }
      else {
        *(undefined8 *)(unsigned)pfVar4 = in_xd0;
      }
      if (cVar9 == '\0') {
        fVar5 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4);
      }
      if (cVar8 != '\0' || 1.0 <= fVar5) {
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aaf0) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4) = 0;
      }
    }
    else {
      pfVar4 = (float *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4);
      if (cVar9 == '\0') {
        dVar6 = CONCAT44D(0x3c23d70a,*pfVar4);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)pfVar4;
        dVar6 = -3.01216570193662e-250;
      }
      if (cVar8 == '\0') {
        fVar5 = F32LO(dVar6) - F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 - dVar6,0);
      }
      if (cVar9 == '\0') {
        *pfVar4 = fVar5;
      }
      else {
        *(undefined8 *)(unsigned)pfVar4 = in_xd0;
      }
      if (cVar9 == '\0') {
        fVar5 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4);
        pcVar7 = (code *)0x3dcccccd;
      }
      else {
        fVar5 = 0.1;
        pcVar7 = ((void *)0x8c22195c);
      }
      if (cVar8 != '\0' || fVar5 <= (float)(uint)pcVar7) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 124)), rand(iVar3,ar5,ar6,ar7));
        ar5_01 = 10;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 124)), libgcc_divide_helper_01031c(uVar2,10,ar6,ar7));
        if (iVar3 == 0) {
          if (cVar9 == '\0') {
            *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4) =
                 (ulonglong)(uint)fVar5;
          }
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 124)); FUN_8c22195c(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5_01,ar6,ar7); });
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 124)); FUN_8c21410c(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5_01,ar6,ar7); });
          (*(undefined4 *)(unsigned)(unsigned)0x8c284d80) = (*(undefined4 *)(unsigned)(unsigned)0x8c284d80) + -1;
          (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c221916(*(int *)(unsigned)(ar4 + 0xfd0) + 1,0,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c2140c6(*(int *)(unsigned)(ar4 + 0xfd0) + 1,0,ar6,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0xfd0) = 0;
        }
        else {
          *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aaf0) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4) = 1;
        }
      }
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 124)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c09ea78\n.set _FUN_8c09ea78, _FUN_8c09ea78_def\n");
//@unit 8c09edf0
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
undefined4 * FUN_8c09edf0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09edf0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  double dVar4;
  code *pcVar5;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); FUN_8c2219ac(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); FUN_8c22195c(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); FUN_8c21415c(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); FUN_8c21410c(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5,ar6,ar7); });
  pfVar2 = (float *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4);
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(0x3c23d70a,*pfVar2);
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)pfVar2;
    dVar4 = 5.2386906893627653e-11;
  }
  if (cVar6 == '\0') {
    fVar3 = F32LO(dVar4) - F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 - dVar4,0);
  }
  if (cVar7 == '\0') {
    *pfVar2 = fVar3;
  }
  else {
    *(undefined8 *)(unsigned)pfVar2 = in_xd0;
  }
  if (cVar7 == '\0') {
    fVar3 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4);
  }
  puVar1 = ((undefined4 *)(unsigned)0x8c09efa0);
  if (cVar7 == '\0') {
    pcVar5 = (code *)0x3dcccccd;
  }
  else {
    fVar3 = 0.1;
    pcVar5 = ((void *)0x8c221916);
  }
  if (cVar6 != '\0' || fVar3 <= (float)(uint)pcVar5) {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); FUN_8c22195c(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); FUN_8c21410c(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c221916(*(int *)(unsigned)(ar4 + 0xfd0) + 1,0,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c2140c6(*(int *)(unsigned)(ar4 + 0xfd0) + 1,0,ar6,ar7));
    (*(undefined4 *)(unsigned)(unsigned)0x8c284d80) = (*(undefined4 *)(unsigned)(unsigned)0x8c284d80) + -1;
    *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aaf0) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4) = 0;
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4) = (ulonglong)(uint)fVar3;
    }
    puVar1 = (undefined4 *)(unsigned)0xfd0;
    *(undefined4 *)(unsigned)(ar4 + 0xfd0) = 0;
  }
  return puVar1;
}

__asm__(".globl _FUN_8c09edf0\n.set _FUN_8c09edf0, _FUN_8c09edf0_def\n");
//@unit 8c09efb4
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
undefined4 FUN_8c09efb4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09efb4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(unsigned)(ar4 + 0xfd0) != 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c284d80) = (*(undefined4 *)(unsigned)(unsigned)0x8c284d80) + -1;
    *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4) = 0;
    *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aaf0) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4) = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c221916(*(int *)(unsigned)(ar4 + 0xfd0) + 1,1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2140c6(*(int *)(unsigned)(ar4 + 0xfd0) + 1,1,ar6,ar7));
    uVar1 = 0xfd0;
    *(undefined4 *)(unsigned)(ar4 + 0xfd0) = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c09efb4\n.set _FUN_8c09efb4, _FUN_8c09efb4_def\n");
//@unit 8c09f038
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
undefined4 Class_12ab2c_m3_09f038_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12ab2c_m3_09f038";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x10))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Class_12ab2c_m3_09f038\n.set _Class_12ab2c_m3_09f038, _Class_12ab2c_m3_09f038_def\n");
//@unit 8c09f060
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
undefined4 FUN_8c09f060_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09f060";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126110),ar5,ar6,ar7));
  uVar3 = 0x8c284d50;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284d50,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126120),pcVar2,uVar3,ar7));
  uVar3 = 0x8c284d5c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284d5c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126130),pcVar2,uVar3,ar7));
  uVar3 = 0x8c284d68;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284d68,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126140),pcVar2,uVar3,ar7));
  uVar3 = 0x8c284d74;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284d74,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126150) = CONCAT44((*(undefined1 *)(unsigned)0x8c126154),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126150) = 0xffffffff00800000;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02452c(0x8c284d90,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284d84;
  pcVar2 = ((void *)0x8c03a4ac);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a4ac),0x8c284d84,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c024824(0x8c284ec0,pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a454),0x8c284eb4,ar7));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0xf); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c284f30,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c09f390),0x8c284f24,uVar1));
  ar7_00 = 4;
  ({ unsigned long t0_ = (unsigned long)(0xf); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c284f78,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  uVar1 = 0x8c284f6c;
  pcVar2 = ((void *)0x8c09f36c);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c09f36c),0x8c284f6c,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284fc8,pcVar2,uVar1,ar7_00));
  uVar3 = 0x8c284fbc;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284fbc,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284fe4,pcVar2,uVar3,ar7_00));
  uVar3 = 0x8c284fd8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284fd8,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c285000,pcVar2,uVar3,ar7_00));
  uVar3 = 0x8c284ff4;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284ff4,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c28501c,pcVar2,uVar3,ar7_00));
  uVar3 = 0x8c285010;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285010,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c285038,pcVar2,uVar3,ar7_00));
  uVar3 = 0x8c28502c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28502c,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c285054,pcVar2,uVar3,ar7_00));
  uVar3 = 0x8c285048;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285048,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c285070,pcVar2,uVar3,ar7_00));
  uVar3 = 0x8c285064;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285064,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c28508c,pcVar2,uVar3,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285080,ar7_00));
  uVar3 = 0x8c285000;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c28501c); unsigned long t1_ = (unsigned long)(0x8c285038); unsigned long t2_ = (unsigned long)(0x8c285054); unsigned long t3_ = (unsigned long)(
                       0x8c285070); unsigned long t4_ = (unsigned long)(0x8c28508c); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c2850a8,0x8c284fc8,0x8c284fe4,0x8c285000); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c28509c,uVar3));
  return uVar1;
}

__asm__(".globl _FUN_8c09f060\n.set _FUN_8c09f060, _FUN_8c09f060_def\n");
//@unit 8c09f36c
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
undefined4 FUN_8c09f36c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09f36c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c284f78,((void *)0x8c03a3dc),4,0xf); });
  return uVar1;
}

__asm__(".globl _FUN_8c09f36c\n.set _FUN_8c09f36c, _FUN_8c09f36c_def\n");
//@unit 8c09f390
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
undefined4 FUN_8c09f390_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09f390";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c284f30,((void *)0x8c0247b0),4,0xf); });
  return uVar1;
}

__asm__(".globl _FUN_8c09f390\n.set _FUN_8c09f390, _FUN_8c09f390_def\n");
//@unit 8c09f3b4
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
undefined4 * FUN_8c09f3b4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09f3b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f064(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12acc8));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0300a4((int)ar4 + 0xa8,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(0x9c + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0x828 + (int)ar4) = 0xf;
  *(undefined4 *)(unsigned)(0x82c + (int)ar4) = 0xf;
  *(undefined4 *)(unsigned)(0x830 + (int)ar4) = 0xf;
  *(undefined1 *)(unsigned)(0xa4 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0xa0 + (int)ar4) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c09f3b4\n.set _FUN_8c09f3b4, _FUN_8c09f3b4_def\n");
//@unit 8c09f428
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
undefined4 * Class_12acc8_m0_09f428_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12acc8_m0_09f428";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12acc8);
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 12)), Class_129c70_m0_02f1b8(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12acc8_m0_09f428\n.set _Class_12acc8_m0_09f428, _Class_12acc8_m0_09f428_def\n");
//@unit 8c09f470
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
undefined4 Class_12acc8_m1_09f470_def(int *ar4,int *ar5,code *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12acc8_m1_09f470";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 332; for (int i_ = 0; i_ < 332; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  code *pcVar9;
  int *a5;
  undefined4 uVar10;
  code *pcVar11;
  undefined4 ar6_00;
  undefined4 *ar6_01;
  undefined4 in_fr1 = 0;
  float fVar12;
  float fVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double in_dr14 = 0;
  double in_xd0 = 0;
  char cVar17;
  char cVar18;
  undefined2 uVar19;
  
  uVar19 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0x148)) >> 0x10);
  cVar18 = '\0';
  cVar17 = '\0';
  piVar7 = ar5;
  pcVar11 = ar6;
  (vsp = ((unsigned long)(fr0_ - 332)), Vec3_ctor_zero(&(*(int *)(fr0_ - 0x24)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 332)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x34)),piVar7,pcVar11,ar7));
  puVar8 = ((undefined1 *)(fr0_ - 0x54));
  puVar5 = ((undefined1 *)(unsigned)0x8c13aea4);
  iVar4 = 0x10;
  do {
    puVar6 = puVar5 + 1;
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar8[1] = *puVar6;
    puVar8 = puVar8 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (cVar18 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),0xbf800000);
    (*(undefined4 *)(fr0_ - 0xb8)) = 0;
  }
  else {
    ((undefined4 *)(fr0_ - 0xb0))[0] = 0;
    (*(undefined4 *)(fr0_ - 0xb8)) = in_fr1;
  }
  (*(undefined4 *)(fr0_ - 0xb4)) = 0;
  (*(undefined1 *)(unsigned)0x8c13ae98) = ar4[0x20a];
  (*(undefined1 *)(unsigned)0x8c13ae9c) = ar4[0x20b];
  (*(undefined1 *)(unsigned)0x8c13aea0) = ar4[0x20c];
  uVar1 = (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c1011b0(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar6 + 0x18) + 0x7cc),0xa0,pcVar11,ar7));
  uVar3 = CONCAT22(uVar19,(ushort)uVar1);
  if (0x78 < (ushort)uVar1) {
    ar4[0x27] = 0;
  }
  iVar4 = (vsp = ((unsigned long)(fr0_ - 332)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,2,pcVar11,ar7));
  if (iVar4 == 1) {
    uVar10 = 0;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 332)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,2,0,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 332)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 332)) - 8); FUN_8c02f670(uVar1,((void *)0x8c02f670),uVar10,ar7); });
    (vsp = ((unsigned long)(fr0_ - 332)), Vec3_assign(&(*(int *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x80)),uVar10,ar7));
    (vsp = ((unsigned long)(fr0_ - 332)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,uVar10,ar7));
    if (cVar18 == '\0') {
      ar4[0x1c] = (*(int *)(fr0_ - 0x24));
      ar4[0x1d] = (*(int *)(fr0_ - 0x20));
      dVar16 = CONCAT44D((*(int *)(fr0_ - 0x1c)),in_fr1);
      ar4[0x1e] = (*(int *)(fr0_ - 0x1c));
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x1c) = CONCAT44((*(int *)(fr0_ - 0x20)),(*(int *)(fr0_ - 0x24)));
      *(ulonglong *)(unsigned)(ar4 + 0x1d) = CONCAT44((*(int *)(fr0_ - 0x1c)),(*(int *)(fr0_ - 0x20)));
      dVar16 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(int *)(fr0_ - 0x1c)));
      *(double *)(unsigned)(ar4 + 0x1e) = dVar16;
    }
    pcVar11 = (code *)(ar4 + 0x1d);
  }
  else if (cVar18 == '\0') {
    ar4[0x1e] = -0x383cb000;
    ar4[0x1d] = -0x383cb000;
    dVar16 = CONCAT44D(0xc7c35000,in_fr1);
    ar4[0x1c] = -0x383cb000;
  }
  else {
    ar4[0x1e] = -0x383cb000;
    ar4[0x1f] = 0x11c;
    ar4[0x1d] = -0x383cb000;
    ar4[0x1e] = 0x11c;
    dVar16 = 6.04302648840037e-312;
    ar4[0x1c] = -0x383cb000;
    ar4[0x1d] = 0x11c;
  }
  iVar4 = (vsp = ((unsigned long)(fr0_ - 332)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,3,pcVar11,ar7));
  if (0 < iVar4) {
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 332)); FUN_8c02cbd4(*(int *)(unsigned)(ar6 + 4) + 0xa8,999,pcVar11,ar7); });
  }
  pcVar11 = ar6;
  (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c0a0040(ar4,ar5,ar6,ar7));
  iVar4 = (int)*(char *)(unsigned)((int)ar4 + 0x82);
  dVar14 = dVar16;
  if ((*(char *)(unsigned)((int)ar4 + 0x82) == '\x01') && (ar4[1] != 1)) {
    (vsp = ((unsigned long)(fr0_ - 332)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,1,pcVar11,ar7));
    if (cVar18 == '\0') {
      dVar14 = CONCAT44D(0x41200000,(int)(D2U(dVar16) >> 0x20));
    }
    else {
      dVar14 = 3.48547133842862e-312;
      in_xd0 = dVar16;
    }
    if (cVar17 == '\0' && F32HI(dVar14) < SUB84(dVar14,0)) {
      if ((char)ar4[0x29] == '\0') {
        *(undefined1 *)(unsigned)(ar4 + 0x29) = 1;
        ar4[1] = 0xc;
        ar4[0x10] = 4;
        ar4[2] = 0x55;
        ar4[3] = 0;
        iVar4 = 0x505;
        (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c02f298(ar4,0x505,pcVar11,ar7));
      }
      else {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 332)), rand((int)(char)ar4[0x29],iVar4,pcVar11,ar7));
        iVar4 = 3000;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 332)), libgcc_divide_helper_01031c(uVar1,3000,pcVar11,ar7));
        if (iVar2 == 1) {
          ar4[1] = 0xc;
          ar4[0x10] = 4;
          ar4[2] = 0x55;
          ar4[3] = 0;
          iVar4 = 0x505;
          (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c02f298(ar4,0x505,pcVar11,ar7));
        }
      }
      *(undefined1 *)(unsigned)((int)ar4 + 0x82) = 0;
      goto LAB_8c09f768;
    }
  }
  *(undefined1 *)(unsigned)(ar4 + 0x29) = 0;
LAB_8c09f768:
  iVar2 = (vsp = ((unsigned long)(fr0_ - 332)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)ar6 + 8) + 0xb8))))(*(int *)(unsigned)ar6,iVar4,pcVar11,ar7));
  if ((iVar2 == 1) && (ar4[1] != 1)) {
    ar4[1] = 0xb;
    ar4[2] = 99;
    if (ar4[0x1b] != 0) {
      (vsp = ((unsigned long)(fr0_ - 332)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x1b] + 8) + 0x78))))(ar4[0x1b],iVar4,pcVar11,ar7));
      ar4[0x1b] = 0;
    }
    pcVar11 = ((void *)0x8c02f46c);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 332)), get_field_6c_02f46c(*(int *)(unsigned)ar6,iVar4,((void *)0x8c02f46c),ar7));
    if ((iVar2 == 0) && (iVar4 = (vsp = ((unsigned long)(fr0_ - 332)), get_field_70_05f490(*(int *)(unsigned)ar6,iVar4,pcVar11,ar7)), iVar4 == 0)) {
      (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c0f4d84(*(int *)(unsigned)ar6,((void *)0x8c0f4d84),pcVar11,ar7));
    }
  }
  pcVar9 = ar6;
  (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c02f20c(ar4,ar6,pcVar11,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 332)), get_field_4_05eed8(ar4,pcVar9,pcVar11,ar7));
  piVar7 = ar4;
  a5 = ar5;
  pcVar11 = ar6;
  (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c09ff1c(ar4,ar5,ar6,uVar1));
  if (ar4[1] != 1) {
    piVar7 = ar5;
    (vsp = ((unsigned long)(fr0_ - 332)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,a5,pcVar11,uVar1));
    if (cVar18 == '\0') {
      dVar16 = CONCAT44D(0x41200000,(int)(D2U(dVar14) >> 0x20));
    }
    else {
      dVar16 = 2.74277281159077e-312;
      in_xd0 = dVar14;
    }
    dVar14 = dVar16;
    if ((cVar17 == '\0' && F32HI(dVar14) < SUB84(dVar14,0)) &&
       (((*(char *)(unsigned)((int)ar4 + 0x81) == '\x01' || (*(char *)(unsigned)((int)ar4 + 0x83) == '\x02')) ||
        (*(char *)(unsigned)((int)ar4 + 0x83) == '\x03')))) {
      pcVar11 = (code *)0x2;
      a5 = (int *)(unsigned)0x0;
      (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c09fef8(*(int *)(unsigned)(ar6 + 0xc),0,2,uVar1));
      iVar4 = ar4[0x27];
      if ((iVar4 < 7) && (-1 < iVar4)) {
                    
        switch(iVar4) {
        default:
          ar4[0x20a] = 8;
          ar4[0x10] = 8;
          (*(undefined1 *)(unsigned)0x8c13ae98) = 8;
          ar4[1] = 0xd;
          ar4[2] = 0x5f;
          ar4[3] = 0;
          break;
        case 4:
        case 5:
          iVar4 = (vsp = ((unsigned long)(fr0_ - 332)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,2,pcVar11,uVar1));
          uVar3 = SUB84(dVar14,0);
          if (iVar4 == 1) {
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_assign(&(*(float *)(fr0_ - 0x34)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,pcVar11,uVar1));
            ar6_00 = 0;
            uVar10 = 2;
            uVar3 = (vsp = ((unsigned long)(fr0_ - 332)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,2,0,uVar1));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x90))); *(unsigned *)((((unsigned long)(fr0_ - 332)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 332)) - 8); FUN_8c02f670(uVar3,uVar10,ar6_00,uVar1); });
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_assign(&(*(int *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x90)),ar6_00,uVar1));
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6_00,uVar1));
            ar6_01 = &(*(undefined4 *)(fr0_ - 0xc0));
            puVar5 = ((undefined1 *)(fr0_ - 0x60));
            (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c256294(0,puVar5,ar6_01,uVar1));
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x70)),puVar5,ar6_01,uVar1));
            pcVar11 = (code *)&(*(undefined4 *)(fr0_ - 0xb8));
            (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c101210(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar6 + 0x18) + 0x7cc),&(*(undefined4 *)(fr0_ - 0xb4)),pcVar11,uVar1));
            if (cVar18 == '\0') {
              dVar16 = CONCAT44D((*(undefined4 *)(fr0_ - 0xc0)),(*(undefined4 *)(fr0_ - 0xb4)));
            }
            else {
              in_xd0 = CONCAT44D(((undefined4 *)(fr0_ - 0xb0))[0],(*(undefined4 *)(fr0_ - 0xb4)));
              dVar16 = CONCAT44D((*(undefined4 *)(fr0_ - 0xbc)),(*(undefined4 *)(fr0_ - 0xc0)));
            }
            if (cVar17 == '\0') {
              (*(float *)(fr0_ - 0x34)) = F32LO(dVar16) - F32HI(dVar16);
            }
            else {
              (*(float *)(fr0_ - 0x34)) = SUB84(dVar16 - dVar16,0);
            }
            if (cVar18 == '\0') {
              dVar16 = CONCAT44D((*(undefined4 *)(fr0_ - 0xbc)),(*(undefined4 *)(fr0_ - 0xb8)));
            }
            else {
              (*(float *)(fr0_ - 0x34)) = SUB84(in_xd0,0);
              in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0xb4)),(*(undefined4 *)(fr0_ - 0xb8)));
              dVar16 = CONCAT44D((*(undefined4 *)(fr0_ - 0xb8)),(*(undefined4 *)(fr0_ - 0xbc)));
            }
            if (cVar17 == '\0') {
              fVar13 = F32LO(dVar16) - F32HI(dVar16);
            }
            else {
              fVar13 = SUB84(dVar16 - dVar16,0);
            }
            fVar12 = (*(float *)(fr0_ - 0x34));
            (*(float *)(fr0_ - 0x30)) = fVar13;
            if (cVar18 != '\0') {
              (*(float *)(fr0_ - 0x30)) = SUB84(in_xd0,0);
              (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
              in_xd0 = CONCAT44D((*(float *)(fr0_ - 0x30)),(*(float *)(fr0_ - 0x34)));
              fVar12 = fVar13;
            }
            if (cVar17 == '\0' && fVar12 < 0.0) {
              if (cVar18 == '\0') {
                dVar16 = CONCAT44D(0xbf800000,(*(float *)(fr0_ - 0x34)));
              }
              else {
                in_xd0 = CONCAT44D((*(float *)(fr0_ - 0x30)),(*(float *)(fr0_ - 0x34)));
                dVar16 = 52776583233536.0;
              }
              if (cVar17 == '\0') {
                fVar12 = F32LO(dVar16) * F32HI(dVar16);
              }
              else {
                fVar12 = SUB84(dVar16 * dVar16,0);
              }
              (*(float *)(fr0_ - 0x34)) = fVar12;
              if (cVar18 != '\0') {
                (*(float *)(fr0_ - 0x34)) = SUB84(in_xd0,0);
                (*(float *)(fr0_ - 0x30)) = F32HI(in_xd0);
              }
            }
            fVar13 = (*(float *)(fr0_ - 0x30));
            if (cVar18 != '\0') {
              in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
              fVar13 = fVar12;
            }
            if (cVar17 == '\0' && fVar13 < 0.0) {
              if (cVar18 == '\0') {
                dVar16 = CONCAT44D(0xbf800000,(*(float *)(fr0_ - 0x30)));
              }
              else {
                in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
                dVar16 = 52776583233536.0;
              }
              if (cVar17 == '\0') {
                (*(float *)(fr0_ - 0x30)) = F32LO(dVar16) * F32HI(dVar16);
              }
              else {
                (*(float *)(fr0_ - 0x30)) = SUB84(dVar16 * dVar16,0);
              }
              if (cVar18 != '\0') {
                (*(float *)(fr0_ - 0x30)) = SUB84(in_xd0,0);
                (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
              }
            }
            if (cVar18 == '\0') {
              dVar16 = CONCAT44D(0x42c80000,(*(float *)(fr0_ - 0x34)));
            }
            else {
              in_xd0 = CONCAT44D((*(float *)(fr0_ - 0x30)),(*(float *)(fr0_ - 0x34)));
              dVar16 = -1.1352410522239538e-250;
            }
            if (cVar17 == '\0' && SUB84(dVar16,0) < F32HI(dVar16)) {
              if (cVar18 == '\0') {
                dVar16 = CONCAT44D(0x42c80000,(*(float *)(fr0_ - 0x30)));
              }
              else {
                in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
                dVar16 = -1.1352410522239538e-250;
              }
              if (cVar17 == '\0' && SUB84(dVar16,0) < F32HI(dVar16)) {
                if (cVar18 == '\0') {
                  in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(*(float *)(fr0_ - 0x34)));
                  dVar16 = CONCAT44D((*(float *)(fr0_ - 0x30)),SUB84(dVar16,0));
                }
                else {
                  dVar16 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
                }
                if (cVar17 == '\0') {
                  in_dr14 = (double)(ulonglong)
                                    (uint)(F32LO(in_dr14) + F32HI(dVar16));
                }
                else {
                  in_dr14 = in_dr14 + dVar16;
                }
              }
            }
            uVar3 = SUB84(dVar16,0);
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,pcVar11,uVar1));
          }
          if (cVar18 == '\0') {
            dVar14 = CONCAT44D(0xbf800000,uVar3);
          }
          else {
            dVar14 = 52776583233536.0;
          }
          if (SUB84(in_dr14,0) == F32HI(dVar14)) {
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0xa0)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,pcVar11,uVar1));
            uVar3 = SUB84(dVar14,0);
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0xa0)),pcVar11,uVar1));
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,pcVar11,uVar1));
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_ctor_copy(((undefined4 *)(fr0_ - 0xb0)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,pcVar11,uVar1));
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_assign_wrap_05f640(ar4,((undefined4 *)(fr0_ - 0xb0)),pcVar11,uVar1));
            a5 = (int *)(unsigned)0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 332)), Vec3_dtor(((undefined4 *)(fr0_ - 0xb0)),0xffffffff,pcVar11,uVar1));
            piVar7 = ar4 + 0xc;
            if (cVar18 == '\0') {
              *piVar7 = 0x44960000;
              dVar14 = CONCAT44D(0x44af0000,uVar3);
              ar4[0x1e] = 0x44af0000;
            }
            else {
              piVar7[0] = 0x44960000;
              piVar7[1] = 0x44af0000;
              dVar14 = 3.1118736849719273e-159;
              ar4[0x1e] = 0x44af0000;
              ar4[0x1f] = 0x1f05e005;
            }
            ar4[1] = 8;
            ar4[0x10] = 3;
            ar4[2] = 0x55;
            ar4[3] = 0;
          }
          else {
            ar4[1] = 0xb;
            ar4[0x10] = 3;
            ar4[2] = 0x55;
            ar4[3] = 0;
            (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c0a0278(ar4,ar5,pcVar11,uVar1));
            a5 = (int *)(unsigned)0x4a6;
            (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c02f298(ar4,0x4a6,pcVar11,uVar1));
          }
          break;
        case 6:
          ar4[0x20a] = 5;
          ar4[0x10] = 5;
          (*(undefined1 *)(unsigned)0x8c13ae98) = 5;
          ar4[1] = 0xd;
          ar4[2] = 0x5f;
          a5 = (int *)(unsigned)0x0;
          ar4[3] = 0;
        }
      }
      piVar7 = (int *)(unsigned)0x0;
      *(undefined1 *)(unsigned)((int)ar4 + 0x81) = 0;
    }
  }
  if ((ar4[1] == 0) && (ar4[1] != 1)) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 332)), rand(piVar7,a5,pcVar11,uVar1));
    iVar4 = (vsp = ((unsigned long)(fr0_ - 332)), libgcc_divide_helper_01031c(uVar3,300,pcVar11,uVar1));
    if (iVar4 < 1) {
      ar4[0x20a] = 9;
      ar4[0x10] = 9;
      (*(undefined1 *)(unsigned)0x8c13ae98) = 9;
      ar4[1] = 0xd;
      ar4[2] = 0x4b;
      ar4[3] = 0;
      uVar3 = 2;
      (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c09fed4(*(int *)(unsigned)(ar6 + 0xc),0,2,uVar1));
      if (cVar18 == '\0') {
        uVar15 = CONCAT44(0x47c35000,(int)(D2U(dVar14) >> 0x20));
        dVar14 = in_xd0;
      }
      else {
        uVar15 = 0x8c0a027847c35000;
      }
      if ((float)uVar15 == F32HI(uVar15)) {
        (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c0a0278(ar4,ar5,uVar3,uVar1));
        (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c09fef8(*(int *)(unsigned)(ar6 + 0xc),0,0,uVar1));
        (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c09fef8(*(int *)(unsigned)(ar6 + 0xc),0,1,uVar1));
        pcVar11 = (code *)0x2;
        (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c09fef8(*(int *)(unsigned)(ar6 + 0xc),0,2,uVar1));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c09fed4(*(int *)(unsigned)(ar6 + 0xc),0,0,uVar1));
        (*(float *)(fr0_ - 0xfc)) = (float)uVar15;
        fVar13 = F32HI(uVar15);
        if (cVar18 == '\0') {
          ar4[10] = (int)fVar13;
          (*(float *)(fr0_ - 0xfc)) = fVar13;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 10) = uVar15;
        }
        uVar10 = 1;
        uVar3 = 0;
        iVar4 = *(int *)(unsigned)(ar6 + 0xc);
        (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c09fed4(iVar4,0,1,uVar1));
        fVar13 = F32HI(uVar15);
        (*(float *)(fr0_ - 0x100)) = fVar13;
        if (cVar18 != '\0') {
          (*(float *)(fr0_ - 0x100)) = (float)uVar15;
          (*(float *)(fr0_ - 0xfc)) = fVar13;
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 332)), rand(iVar4,uVar3,uVar10,uVar1));
        fVar13 = (float)uVar15;
        iVar4 = (vsp = ((unsigned long)(fr0_ - 332)), libgcc_divide_helper_01031c(uVar3,400,uVar10,uVar1));
        if (cVar18 != '\0') {
          dVar14 = CONCAT44D((*(float *)(fr0_ - 0xfc)),(*(float *)(fr0_ - 0x100)));
          (*(float *)(fr0_ - 0x100)) = fVar13;
        }
        if (cVar17 == '\0') {
          (*(float *)(fr0_ - 0x100)) = (*(float *)(fr0_ - 0x100)) + (float)iVar4;
        }
        else {
          (*(float *)(fr0_ - 0x100)) = SUB84((double)iVar4 + (double)iVar4,0);
        }
        if (cVar18 == '\0') {
          dVar16 = CONCAT44D(0x43480000,(*(float *)(fr0_ - 0x100)));
        }
        else {
          dVar16 = 3.23101057606842e-312;
        }
        if (cVar17 == '\0') {
          fVar13 = F32HI(dVar16);
          dVar16 = CONCAT44D(fVar13,F32LO(dVar16) - fVar13);
        }
        else {
          dVar16 = dVar16 - dVar16;
        }
        if (cVar18 == '\0') {
          ar4[0xb] = SUB84(dVar16,0);
        }
        else {
          *(double *)(unsigned)(ar4 + 0xb) = dVar14;
        }
        pcVar11 = (code *)0x2;
        uVar10 = 0;
        iVar4 = *(int *)(unsigned)(ar6 + 0xc);
        (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c09fed4(iVar4,0,2,uVar1));
        (*(undefined8 *)(fr0_ - 0x108)) = dVar16;
        if (cVar18 == '\0') {
          (*(undefined8 *)(fr0_ - 0x108)) = CONCAT44D(uVar3,(int)(D2U(dVar16) >> 0x20));
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 332)), rand(iVar4,uVar10,pcVar11,uVar1));
        fVar13 = F32LO(dVar16);
        iVar4 = (vsp = ((unsigned long)(fr0_ - 332)), libgcc_divide_helper_01031c(uVar3,400,pcVar11,uVar1));
        dVar16 = (*(undefined8 *)(fr0_ - 0x108));
        if (cVar18 == '\0') {
          dVar16 = dVar14;
          fVar13 = (float)(*(undefined8 *)(fr0_ - 0x108));
        }
        if (cVar17 == '\0') {
          fVar13 = fVar13 + (float)iVar4;
        }
        else {
          fVar13 = SUB84((double)iVar4 + (double)iVar4,0);
        }
        if (cVar18 == '\0') {
          dVar14 = CONCAT44D(0x43480000,fVar13);
        }
        else {
          dVar14 = 3.23101057606842e-312;
        }
        if (cVar17 == '\0') {
          fVar13 = F32LO(dVar14) - F32HI(dVar14);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        if (cVar18 == '\0') {
          ar4[0xc] = (int)fVar13;
        }
        else {
          *(double *)(unsigned)(ar4 + 0xc) = dVar16;
        }
      }
    }
  }
  if ((char)ar4[0x26] == '\0') {
    iVar4 = *(int *)(unsigned)(*(int *)(unsigned)ar6 + 8);
    iVar4 = (vsp = ((unsigned long)(fr0_ - 332)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18c))))(*(int *)(unsigned)ar6,iVar4,pcVar11,uVar1));
    if (iVar4 == 1) {
      ar4[0x10] = 0xb;
      (*(undefined1 *)(unsigned)0x8c13ae98) = 0xb;
      ar4[1] = 0xd;
      ar4[2] = 0x5f;
      ar4[3] = 0;
    }
    else {
      *(undefined1 *)(unsigned)(ar4 + 0x26) = 1;
    }
  }
  else if ((char)ar4[0x26] == '\x01') {
    ar4[0x10] = 0xc;
    (*(undefined1 *)(unsigned)0x8c13ae98) = 0xc;
    ar4[1] = 0xd;
    ar4[2] = 0x5f;
    ar4[3] = 0;
  }
  pcVar9 = ar6;
  (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c0a0224(ar4,ar6,pcVar11,uVar1));
  (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c05ee90(*(int *)(unsigned)(ar6 + 8),pcVar9,pcVar11,uVar1));
  iVar4 = (vsp = ((unsigned long)(fr0_ - 332)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar9,pcVar11,uVar1));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 332)), get_field_40_05eea0(ar4,pcVar9,pcVar11,uVar1));
  if (iVar4 != iVar2) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 332)), get_field_40_05eea0(ar4,pcVar9,pcVar11,uVar1));
    pcVar11 = (code *)0x1;
    (vsp = ((unsigned long)(fr0_ - 332)), FUN_8c031b08(*(int *)(unsigned)(ar6 + 8),uVar3,1,uVar1));
  }
  *(undefined1 *)(unsigned)((int)ar4 + 0x83) = 4;
  *(undefined1 *)(unsigned)((int)ar4 + 0x81) = 0;
  (vsp = ((unsigned long)(fr0_ - 332)), Vec3_dtor(&(*(float *)(fr0_ - 0x34)),0xffffffff,pcVar11,uVar1));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 332)), Vec3_dtor(&(*(int *)(fr0_ - 0x24)),0xffffffff,pcVar11,&(*(int *)(fr0_ - 0x24))));
  return uVar1;
}

__asm__(".globl _Class_12acc8_m1_09f470\n.set _Class_12acc8_m1_09f470, _Class_12acc8_m1_09f470_def\n");
//@unit 8c09fed4
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
int FUN_8c09fed4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09fed4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)(short)ar6 << 2;
}

__asm__(".globl _FUN_8c09fed4\n.set _FUN_8c09fed4, _FUN_8c09fed4_def\n");
//@unit 8c09fef8
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
int FUN_8c09fef8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09fef8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr4 = 0;
  
  *(undefined4 *)(unsigned)((short)ar5 * 0xc + ar4 + (short)ar6 * 4 + 0x14) = in_fr4;
  return (short)ar6 * 4;
}

__asm__(".globl _FUN_8c09fef8\n.set _FUN_8c09fef8, _FUN_8c09fef8_def\n");
//@unit 8c09ff1c
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
undefined4 FUN_8c09ff1c_def(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c09ff1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 a5;
  int *ar6_00;
  
  a5 = ar5;
  ar6_00 = ar6;
  iVar2 = ar7;
  if (*(int *)(unsigned)(ar4 + 0x38) == 2) {
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) =
         *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13adfc) + *(int *)(unsigned)(ar4 + 0xc) * 4 + ar7 * 0xc);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0a00f8(ar4,ar5,ar6,ar7));
    a5 = 1;
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02f404(ar4,1,ar6_00,ar7); });
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 == 2) {
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02f404(ar4,3,ar6_00,ar7); });
  }
  else if (iVar1 == 3) {
    if (*(int *)(unsigned)(ar4 + 4) == 0xb) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0a0278(ar4,ar5,ar6_00,ar7));
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02f404(ar4,3,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02fdd8(ar4,ar5,ar6_00,ar7));
    }
  }
  else if (iVar1 == 6) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar6 + 8) + 0xb4))))(*ar6,a5,ar6_00,ar7));
    if (iVar2 == 1) {
      iVar2 = *ar6;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027954(iVar2,a5,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(iVar2,a5,ar6_00,ar7));
    }
  }
  else if (((iVar1 == 10) && (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(ar6[1],a5,ar6_00,ar7)), iVar2 != 0)) &&
          (iVar2 == 1)) {
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0xe;
  }
  return 1;
}

__asm__(".globl _FUN_8c09ff1c\n.set _FUN_8c09ff1c, _FUN_8c09ff1c_def\n");
