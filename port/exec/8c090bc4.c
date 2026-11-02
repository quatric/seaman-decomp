#include "../decls.h"
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
