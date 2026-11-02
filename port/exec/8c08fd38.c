#include "../decls.h"
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
