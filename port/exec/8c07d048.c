#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c07d048_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c07d048";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 344; for (int i_ = 0; i_ < 344; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *ar5_00;
  undefined4 uVar4;
  undefined *ar6_00;
  undefined4 uVar5;
  undefined1 *ar7_00;
  undefined4 uVar6;
  float fVar7;
  undefined8 in_dr0 = 0;
  undefined8 uVar8;
  float fVar10;
  double dVar9;
  undefined8 in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  ar7_00 = (undefined1 *)(unsigned)0x0;
  *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
  ar6_00 = (undefined *)(unsigned)0x1fc;
  uVar4 = ar5;
  (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c030f2c(ar4 + 0x1fc,ar5,0x1fc,0));
  uVar6 = 1;
  (vsp = ((unsigned long)(fr0_ - 344)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),uVar4,ar6_00,ar7_00));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 344)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x1d0))))(ar7,uVar4,ar6_00,ar7_00));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 344)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x1cc))))(ar7,uVar4,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 344)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x50)),uVar4,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 344)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 344)) - 8); Vec3_add(iVar2 + 4,((undefined1 *)(fr0_ - 0x50)),ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 344)), Vec3_assign(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x60)),ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6_00,ar7_00));
  ar5_00 = (undefined1 *)(unsigned)0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6_00,ar7_00));
  iVar3 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar3 < 6) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x70)),ar5_00,ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 344)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 344)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x70)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_assign(ar4 + 0x280,((undefined1 *)(fr0_ - 0x80)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6_00,ar7_00));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c031748(ar4,uVar4,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x90)),((void *)0x8c022ce8),ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa0))); *(unsigned *)((((unsigned long)(fr0_ - 344)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 344)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x90)),((undefined1 *)(unsigned)0x8c1379b8),ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 344)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 344)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0xa0)),ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc0))); *(unsigned *)((((unsigned long)(fr0_ - 344)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 344)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xb0)),ar5,ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd0))); *(unsigned *)((((unsigned long)(fr0_ - 344)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 344)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xc0)),((undefined1 *)(unsigned)0x8c1379bc),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0xd0)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 344)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x128))))(ar7,ar4 + 0x54,ar6_00,ar7_00));
      (*(undefined4 *)(fr0_ - 0x150)) = (undefined4)((ulonglong)in_dr0 >> 0x20);
      if (cVar12 == '\0') {
        uVar8 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x58),(*(undefined4 *)(fr0_ - 0x150)));
        in_dr0 = in_xd0;
      }
      else {
        (*(undefined4 *)(fr0_ - 0x150)) = (undefined4)in_dr0;
        uVar8 = *(undefined8 *)(unsigned)(ar4 + 0x58);
      }
      if (cVar11 == '\0' && F32HI(uVar8) < (float)uVar8) {
        (vsp = ((unsigned long)(fr0_ - 344)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x128))))(ar7,ar4 + 0x54,ar6_00,ar7_00));
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
          (*(undefined4 *)(fr0_ - 0x154)) = uVar4;
        }
        else {
          (*(undefined4 *)(fr0_ - 0x154)) = (undefined4)uVar8;
          in_dr0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
          dVar9 = 6.37129236237323e-312;
          (*(undefined4 *)(fr0_ - 0x150)) = uVar4;
        }
        if (cVar11 == '\0') {
          fVar7 = F32LO(dVar9) * F32HI(dVar9);
        }
        else {
          fVar7 = SUB84(dVar9 * dVar9,0);
        }
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D((*(undefined4 *)(fr0_ - 0x154)),fVar7);
        }
        else {
          dVar9 = CONCAT44D((*(undefined4 *)(fr0_ - 0x150)),(*(undefined4 *)(fr0_ - 0x154)));
        }
        if (cVar11 == '\0') {
          fVar7 = F32LO(dVar9) + F32HI(dVar9);
        }
        else {
          fVar7 = SUB84(dVar9 + dVar9,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)(ar4 + 0x58) = fVar7;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x58) = in_dr0;
        }
      }
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 1:
      ar6_00 = (undefined *)(unsigned)(ar4 + 0x54);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 344)), pure_virtual_stub(ar4,ar5,ar6_00,ar7_00));
      if (iVar1 == 0) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      ar5_00 = (undefined1 *)(unsigned)(ar4 + 0x14);
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_assign(ar4 + 0x80,ar5_00,ar6_00,ar7_00));
      break;
    case 2:
      uVar4 = 1;
      (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c031de8(ar4,1,ar6_00,ar7_00));
      fVar7 = F32HI(in_dr0);
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xe0)),uVar4,ar6_00,ar7_00));
      ar7_00 = ((undefined1 *)(fr0_ - 0xe0));
      ar6_00 = ((undefined1 *)(fr0_ - 0x30));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c032d48(ar4,ar5,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,ar6_00,ar7_00));
      if (iVar2 == 0) {
        (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7_00));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      ar5_00 = (undefined1 *)(unsigned)(ar4 + 0x14);
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_assign(ar4 + 0x80,ar5_00,ar6_00,ar7_00));
      if ((*(int *)(fr0_ + 0x00000004)) == 0) {
        ar5_00 = ((undefined1 *)(fr0_ - 0x30));
        (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c022fc0(ar5,ar5_00,ar6_00,ar7_00));
        if (cVar12 == '\0') {
          fVar10 = 1000.0;
        }
        else {
          fVar7 = 1000.0;
          fVar10 = 5.26888e-43;
        }
        if ((cVar11 == '\0' && fVar10 < fVar7) && (iVar1 == 0)) {
          uVar6 = 2;
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        }
      }
      break;
    case 3:
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xf0)),ar5_00,ar6_00,ar7_00));
      ar6_00 = (undefined *)(unsigned)0x1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0xf0)),1,ar7_00));
      ar5_00 = (undefined1 *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,ar6_00,ar7_00));
      if (iVar1 == 0) {
        (vsp = ((unsigned long)(fr0_ - 344)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x100)),ar5_00,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 344)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x100)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0x100)),0xffffffff,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 344)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7_00));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        ar7_00 = (undefined1 *)(unsigned)0x0;
        uVar5 = 0xffffffff;
        uVar4 = 0x27;
        (vsp = ((unsigned long)(fr0_ - 344)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x27,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 344)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar5,ar7_00));
        ar6_00 = ((undefined1 *)(unsigned)0x8c137888);
        ar5_00 = (undefined1 *)(unsigned)0x27;
        (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c07f1e4(ar4,0x27,((undefined1 *)(unsigned)0x8c137888),ar7_00));
      }
      break;
    case 4:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 344)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7_00));
      if (iVar1 == 1) {
        ar7_00 = (undefined1 *)(unsigned)0x0;
        uVar5 = 0xffffffff;
        uVar4 = 0x28;
        (vsp = ((unsigned long)(fr0_ - 344)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x28,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 344)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar5,ar7_00));
        ar6_00 = ((undefined1 *)(unsigned)0x8c1378a0);
        ar5_00 = (undefined1 *)(unsigned)0x28;
        (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c07f1e4(ar4,0x28,((undefined1 *)(unsigned)0x8c1378a0),ar7_00));
        (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c03f39c(ar6,ar5_00,ar6_00,ar7_00));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 344)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x10c)),(*(undefined4 *)(fr0_ + 0x00000000)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c07f268(ar4,((undefined1 *)(fr0_ - 0x10c)),ar6_00,ar7_00));
        ar5_00 = (undefined1 *)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 344)), object_dtor_delete(((undefined1 *)(fr0_ - 0x10c)),0xffffffff,ar6_00,ar7_00));
      }
      break;
    case 5:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 344)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7_00));
      if (iVar1 == 1) {
        ar7_00 = (undefined1 *)(unsigned)0x0;
        ar6_00 = (undefined *)(unsigned)0xffffffff;
        uVar4 = 0;
        (vsp = ((unsigned long)(fr0_ - 344)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 344)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7_00));
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
        (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c030eb8(ar4 + 0x1fc,uVar4,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 344)), Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6_00,ar7_00));
        ar5_00 = (undefined1 *)(unsigned)0x178;
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        uVar6 = 0;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 344)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x118)),(*(undefined4 *)(fr0_ + 0x00000000)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c07f268(ar4,((undefined1 *)(fr0_ - 0x118)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 344)), object_dtor_delete(((undefined1 *)(fr0_ - 0x118)),0xffffffff,ar6_00,ar7_00));
        ar5_00 = (undefined1 *)(unsigned)(ar4 + 0x80);
        (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c07f418(ar4,ar5_00,ar6_00,ar7_00));
        ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 344)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6_00,ar7_00); });
        fVar7 = F32HI(in_dr0);
        if (cVar12 == '\0') {
          fVar10 = 160.0;
          in_dr0 = in_xd0;
        }
        else {
          fVar7 = 160.0;
          fVar10 = 480.0;
        }
        if (cVar11 == '\0' && fVar10 < fVar7) {
          ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 344)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6_00,ar7_00); });
          if (cVar12 == '\0') {
            fVar7 = 480.0;
          }
          else {
            in_dr0 = CONCAT44(fVar10,fVar7);
            fVar10 = 480.0;
            fVar7 = 0.25;
          }
          if (cVar11 == '\0' && fVar10 < fVar7) {
            if (cVar12 == '\0') {
              dVar9 = CONCAT44D(0x3e800000,*(undefined4 *)(unsigned)(ar4 + 0x28));
            }
            else {
              in_dr0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
              dVar9 = -0.007812501818989404;
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
              *(undefined8 *)(unsigned)(ar4 + 0x28) = in_dr0;
            }
            (vsp = ((unsigned long)(fr0_ - 344)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x128)),((undefined1 *)(fr0_ - 0x128)),ar6_00,ar7_00));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x138))); *(unsigned *)((((unsigned long)(fr0_ - 344)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 344)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x128)),ar4 + 0x28,ar6_00,ar7_00); });
            (vsp = ((unsigned long)(fr0_ - 344)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x40)),((undefined1 *)(fr0_ - 0x138)),ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0x138)),0xffffffff,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0x128)),0xffffffff,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c023aa0(iVar2 + 4,((undefined1 *)(fr0_ - 0x40)),ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c023aa0(iVar2 + 0x14,((undefined1 *)(fr0_ - 0x40)),ar6_00,ar7_00));
            ar5_00 = (undefined1 *)(unsigned)0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6_00,ar7_00));
          }
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 344)), FUN_8c031700(ar4,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 344)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7_00));
  return uVar6;
}

__asm__(".globl _FUN_8c07d048\n.set _FUN_8c07d048, _FUN_8c07d048_def\n");
