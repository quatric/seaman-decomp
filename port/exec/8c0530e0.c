#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0530e0_def(int ar4,int *ar5,undefined1 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0530e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 136; for (int i_ = 0; i_ < 136; i_++) z_[i_] = 0; }
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *ar5_00;
  int *ar5_01;
  undefined1 *ar6_00;
  undefined4 uVar4;
  double dVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  ar5_01 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c031748(ar4,ar5_01,ar6_00,ar7));
  if (cVar9 == '\0') {
    dVar5 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
    dVar5 = 4294968310.4;
  }
  if (cVar8 == '\0') {
    fVar6 = F32HI(dVar5);
    dVar5 = CONCAT44D(fVar6,F32LO(dVar5) * fVar6);
  }
  else {
    dVar5 = dVar5 * dVar5;
  }
  if (cVar9 == '\0') {
    *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar5,0);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
  }
  (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c05ae54(ar4,ar5_01,ar6_00,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c053724(ar5,ar5_01,ar6_00,ar7));
  if ((char)uVar2 == '\0') {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 136)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x34))))(ar5,ar5_01,ar6_00,ar7));
    if (iVar3 != 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 136)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x34))))(ar5,ar5_01,ar6_00,ar7));
      uVar7 = (undefined4)(D2U(dVar5) >> 0x20);
      *(undefined4 *)(unsigned)(ar4 + 0x348) = uVar2;
      ar5_00 = ((undefined1 *)(unsigned)0x8c125d48);
      (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),((undefined1 *)(unsigned)0x8c125d48),ar6_00,ar7));
      if (*(int *)(unsigned)(ar4 + 0x348) == 3) {
        (vsp = ((unsigned long)(fr0_ - 136)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x34)),ar5_00,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x34)),ar6_00,ar7));
        ar5_00 = (undefined *)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
      }
      else if (*(int *)(unsigned)(ar4 + 0x348) == 4) {
        (vsp = ((unsigned long)(fr0_ - 136)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x44)),ar5_00,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x44)),ar6_00,ar7));
        ar5_00 = (undefined *)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x348) = 0;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 136)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 136)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x24)),ar6_00,ar7));
      if (cVar9 == '\0') {
        dVar5 = CONCAT44D(0x40a00000,uVar7);
      }
      else {
        dVar5 = -7.932637912122029e-251;
      }
      fVar6 = F32LO(dVar5);
      uVar1 = D2U(dVar5) >> 0x20;
      (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
      if (cVar8 == '\0' && fVar6 < (float)uVar1) {
        *(undefined4 *)(unsigned)(ar4 + 0x348) = 0;
      }
      ar5_01 = (int *)(unsigned)0x0;
      (vsp = ((unsigned long)(fr0_ - 136)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x38))))(ar5,0,ar6_00,ar7));
      if ((*(int *)(unsigned)(ar4 + 0x348) != *(int *)(unsigned)(ar4 + 0x344)) && (*(int *)(unsigned)(ar4 + 0x344) == 0)) {
        *(undefined4 *)(unsigned)(ar4 + 0x344) = *(undefined4 *)(unsigned)(ar4 + 0x348);
        *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
      }
    }
    iVar3 = *(int *)(unsigned)(ar4 + 0x344);
    if (iVar3 == 0) {
      iVar3 = *(int *)(unsigned)(ar4 + 300);
      if (iVar3 == 0) {
        (vsp = ((unsigned long)(fr0_ - 136)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_01,ar6_00,ar7));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      else if (iVar3 != 1) {
        if (iVar3 == 2) {
          if (*(int *)(unsigned)(ar4 + 0x27c) == 0) {
            iVar3 = (vsp = ((unsigned long)(fr0_ - 136)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_01,ar6_00,ar7));
          }
          else {
            iVar3 = (vsp = ((unsigned long)(fr0_ - 136)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5_01,ar6_00,ar7));
          }
          if ((iVar3 == 7) || (iVar3 == 1)) {
            *(undefined4 *)(unsigned)(ar4 + 300) = 1;
          }
        }
        goto LAB_8c0536da;
      }
      iVar3 = *(int *)(unsigned)(ar4 + 0x27c);
      if (iVar3 == 0) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 136)), rand_range(ar4,0,100,ar7));
        if (iVar3 == 0) {
          ar7 = 0;
          ar6_00 = (undefined1 *)(unsigned)0xffffffff;
          ar5_01 = (int *)(unsigned)0x2;
          (vsp = ((unsigned long)(fr0_ - 136)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
        }
        else {
          ar5_01 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 136)), FUN_8c032af8(ar4,0,2,10));
          ar7 = 0;
          ar6_00 = (undefined1 *)(unsigned)0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 136)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_01,0xffffffff,0));
        }
        (vsp = ((unsigned long)(fr0_ - 136)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_01,ar6_00,ar7));
      }
      else if (iVar3 == 3) {
        ar7 = 0;
        ar6_00 = (undefined1 *)(unsigned)0xffffffff;
        ar5_01 = (int *)(unsigned)0xb;
        (vsp = ((unsigned long)(fr0_ - 136)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xb,0xffffffff,0));
      }
      else if (iVar3 == 4) {
        ar7 = 0;
        ar6_00 = (undefined1 *)(unsigned)0xffffffff;
        ar5_01 = (int *)(unsigned)0xc;
        (vsp = ((unsigned long)(fr0_ - 136)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xc,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c032ab0(ar4,ar5_01,ar6_00,ar7));
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x340) = (int)(D2U(dVar5) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x340) = dVar5;
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
    }
    else if ((iVar3 == 3) || (iVar3 == 4)) {
      if (*(int *)(unsigned)(ar4 + 300) == 0) {
        if (*(int *)(unsigned)(ar4 + 0x344) == 3) {
          (vsp = ((unsigned long)(fr0_ - 136)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x64)),ar5_01,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x64)),ar6_00,ar7));
          uVar2 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 136)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x74)),ar5_01,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7));
          uVar2 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7));
        }
        if (*(int *)(unsigned)(ar4 + 0x128) == 0) {
          if (cVar9 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x5c) = 0x3f000000;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x5c) = 0x8c022f543f000000;
          }
        }
        (vsp = ((unsigned long)(fr0_ - 136)), Vec3_length(ar4 + 0x54,uVar2,ar6_00,ar7));
        if (*(int *)(unsigned)(ar4 + 0x27c) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x28c) = 1;
          (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c02a1fc(ar4 + 0x2c8,uVar2,ar6_00,ar7));
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      else if (*(int *)(unsigned)(ar4 + 300) != 1) goto LAB_8c0536da;
      (vsp = ((unsigned long)(fr0_ - 136)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x84)),ar4 + 0x54,ar6_00,ar7));
      ar6_00 = ((undefined1 *)(fr0_ - 0x84));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c051c14(ar4,ar6,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
      if (iVar3 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        if (*(int *)(unsigned)(ar4 + 0x344) == 3) {
          *(undefined4 *)(unsigned)(ar4 + 0x27c) = 4;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x27c) = 3;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x344) = 0;
      }
    }
  }
  else {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 136)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_01,ar6_00,ar7));
    if (iVar3 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      if (cVar9 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x340) = 0x3f800000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x340) = CONCAT44(0x3f800000,SUB84(dVar5,0));
      }
      uVar4 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
    }
  }
LAB_8c0536da:
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
  return uVar4;
}

__asm__(".globl _FUN_8c0530e0\n.set _FUN_8c0530e0, _FUN_8c0530e0_def\n");
