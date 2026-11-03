//@unit 8c0502f8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0502f8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_0502f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0502f8\n.set _ret_const_0_0502f8, _ret_const_0_0502f8_def\n");
//@unit 8c050300
#include "../decls.h"
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
//@unit 8c0507a4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0507a4_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c0507a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar5 = *(undefined4 *)(unsigned)(ar4 + 0x30);
  *ar6 = *(undefined4 *)(unsigned)(ar4 + 0x34);
  *ar7 = *(undefined4 *)(unsigned)(ar4 + 0x38);
  return (undefined4 *)(unsigned)(ar4 + 0x34);
}

__asm__(".globl _FUN_8c0507a4\n.set _FUN_8c0507a4, _FUN_8c0507a4_def\n");
//@unit 8c0507c0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0507c0_def(int *ar4,float *ar5,code *ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c0507c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 604; for (int i_ = 0; i_ < 604; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  code *pcVar5;
  undefined4 uVar6;
  code *ar6_00;
  undefined4 ar6_01;
  undefined1 *ar5_00;
  float fVar7;
  uint uVar8;
  ulonglong in_dr0 = 0;
  undefined8 uVar9;
  float fVar13;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  undefined4 in_fr3 = 0;
  undefined8 in_dr4 = 0;
  undefined4 in_fr15 = 0;
  float fVar14;
  ulonglong in_xd0 = 0;
  char cVar15;
  char cVar16;
  code *ain0;
  
  cVar16 = '\0';
  cVar15 = '\0';
  dVar11 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),in_fr15);
  pcVar5 = (code *)ar5;
  ar6_00 = ar6;
  ain0 = ar7;
  (vsp = ((unsigned long)(fr0_ - 604)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 604)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x44)),pcVar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c031700(ar4,pcVar5,ar6_00,ar7));
  iVar1 = ar4[0x1a];
  if (iVar1 == 0) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); FUN_8c0230f0(ar4 + 0x20,((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7); });
    (*(float *)(fr0_ - 0x1f8)) = (float)in_dr0;
    (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 0x20,((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
    if (ar4[0x4a] < 3) {
      ar7 = (code *)0x0;
      ar6_00 = (code *)0xffffffff;
      uVar6 = 0;
      (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c022d04(ar4 + 5,uVar6,ar6_00,ar7));
      if (ar4[0x49] != 0x2e) {
        if (cVar16 == '\0') {
          fVar7 = ar5[2];
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)(ar5 + 2);
          fVar7 = 0.0;
        }
        if (cVar15 == '\0' && fVar7 < 0.0) {
          pfVar4 = ar5 + 2;
          if (cVar16 == '\0') {
            *pfVar4 = 0.0;
          }
          else {
            pfVar4[0] = 0.0;
            pfVar4[1] = 0.0;
          }
        }
        if (cVar16 == '\0') {
          (*(float *)(fr0_ - 0x1f8)) = *ar5;
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)ar5;
          (*(float *)(fr0_ - 0x1f8)) = 0.0;
        }
        if (cVar15 == '\0' && (*(float *)(fr0_ - 0x1f8)) < 0.0) {
          if (cVar16 == '\0') {
            *ar5 = 0.0;
          }
          else {
            (*(float *)(fr0_ - 0x1f8)) = 0.0;
            ar5[0] = 0.0;
            ar5[1] = 0.0;
          }
        }
      }
    }
    else {
      if (cVar16 == '\0') {
        (*(float *)(fr0_ - 0x1f8)) = *ar5;
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)ar5;
        (*(float *)(fr0_ - 0x1f8)) = 0.0;
      }
      if (cVar15 == '\0' && 0.0 < (*(float *)(fr0_ - 0x1f8))) {
        if (cVar16 == '\0') {
          (*(float *)(fr0_ - 0x1f8)) = ar5[2];
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)(ar5 + 2);
          (*(float *)(fr0_ - 0x1f8)) = 0.0;
        }
        if (cVar15 == '\0' && (*(float *)(fr0_ - 0x1f8)) < 0.0) {
          pfVar4 = ar5 + 2;
          if (cVar16 == '\0') {
            *pfVar4 = 0.0;
          }
          else {
            (*(float *)(fr0_ - 0x1f8)) = 0.0;
            pfVar4[0] = 0.0;
            pfVar4[1] = 0.0;
          }
        }
      }
      piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      pfVar4 = ar5;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 604)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)) + 0x130))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),ar5,ar6_00,ar7));
      if (iVar1 == 0) {
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_length(ar4 + 0x20,pfVar4,ar6_00,ar7));
        pfVar4 = (float *)(unsigned)(ar4 + 0x22);
        if (cVar16 == '\0') {
          (*(float *)(fr0_ - 0x1f8)) = *pfVar4;
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)pfVar4;
        }
        if ((*(float *)(fr0_ - 0x1f8)) == 0.0) {
          if (cVar16 == '\0') {
            (*(float *)(fr0_ - 0x1f8)) = (float)ar4[0x20];
          }
          else {
            in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x20);
          }
          if ((*(float *)(fr0_ - 0x1f8)) == 0.0) {
            ar6_00 = ((void *)0x8c022d04);
            (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c022d04(ar4 + 0x20,pfVar4,((void *)0x8c022d04),ar7));
          }
        }
        (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c02374c(ar4 + 0x20,pfVar4,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 0x20,((undefined1 *)(fr0_ - 0x64)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
        if ((*(int *)(fr0_ + 0x00000008)) == 1) {
          iVar1 = 10;
        }
        else {
          iVar1 = 2;
        }
        uVar6 = 100;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 604)), rand_range(ar4,0,100,ar7));
        if ((iVar1 < iVar2) || (ar4[0x4a] != 4)) {
          ar7 = (code *)0x0;
          ar6_00 = (code *)0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,99,0xffffffff,0));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x70)),((void *)0x8c023d68),uVar6,ar7));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); FUN_8c023484(ar4 + 0x20,((undefined1 *)(fr0_ - 0x70)),uVar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 0x20,((undefined1 *)(fr0_ - 0x80)),uVar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,uVar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), object_dtor_delete(((undefined1 *)(fr0_ - 0x70)),0xffffffff,uVar6,ar7));
          ar7 = (code *)0x0;
          ar6_00 = (code *)0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0x49,0xffffffff,0));
        }
      }
      else if (iVar1 == 1) {
        ar7 = (code *)0x0;
        ar6_00 = (code *)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0,0xffffffff,0));
      }
      else if (iVar1 == 2) {
        if (cVar16 == '\0') {
          uVar9 = CONCAT44(*ar5,(*(float *)(fr0_ - 0x1f8)));
        }
        else {
          uVar9 = *(undefined8 *)(unsigned)ar5;
        }
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 604)); FUN_8c010e38(piVar3,pfVar4,ar6_00,ar7); });
        fVar7 = F32HI(uVar9);
        if (cVar16 == '\0') {
          fVar13 = 1100.0;
          (*(float *)(fr0_ - 0x1f8)) = fVar7;
          fVar14 = (float)uVar9;
        }
        else {
          fVar14 = 1100.0;
          fVar13 = -1.0;
          (*(float *)(fr0_ - 0x1f8)) = (float)uVar9;
          (*(float *)(fr0_ - 0x1f4)) = fVar7;
        }
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 604)); FUN_8c010e38(piVar3,pfVar4,ar6_00,ar7); });
        if (cVar16 != '\0') {
          in_xd0 = CONCAT44((*(float *)(fr0_ - 0x1f4)),fVar13);
          (*(float *)(fr0_ - 0x1f8)) = fVar14;
        }
        if (cVar15 != '\0' || fVar13 <= (*(float *)(fr0_ - 0x1f8))) {
          pcVar5 = ((void *)0x8c022f54);
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_length(ar4 + 0x20,pfVar4,ar6_00,((void *)0x8c022f54)));
          uVar6 = 0x88;
          if (cVar16 == '\0') {
            (*(float *)(fr0_ - 0x1f8)) = (float)ar4[0x22];
          }
          else {
            in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x22);
          }
          if ((*(float *)(fr0_ - 0x1f8)) == 0.0) {
            if (cVar16 == '\0') {
              (*(float *)(fr0_ - 0x1f8)) = (float)ar4[0x20];
            }
            else {
              in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x20);
            }
            if ((*(float *)(fr0_ - 0x1f8)) == 0.0) {
              (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c022d04(ar4 + 0x20,pfVar4,0x88,pcVar5));
            }
          }
          (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c02374c(ar4 + 0x20,pfVar4,uVar6,pcVar5));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 0x20,((undefined1 *)(fr0_ - 0x90)),uVar6,pcVar5));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,uVar6,pcVar5));
          if (cVar16 == '\0') {
            *ar5 = 1100.0;
          }
          else {
            (*(float *)(fr0_ - 0x1f8)) = 1100.0;
            ar5[0] = 1100.0;
            ar5[1] = -1.0;
          }
          ar7 = (code *)0x0;
          ar6_00 = (code *)0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,99,0xffffffff,0));
        }
        else {
          if (cVar16 == '\0') {
            *ar5 = 1600.0;
          }
          else {
            (*(float *)(fr0_ - 0x1f8)) = 1600.0;
            ar5[0] = 1600.0;
            ar5[1] = -9.942077e-32;
          }
          ar7 = (code *)0x0;
          ar6_00 = (code *)0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0,0xffffffff,0));
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 0x15,ar4 + 0x20,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 604)), Vec3_length(ar4 + 5,((void *)0x8c022f54),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,((void *)0x8c033e68),ar6_00,ar7));
    ar4[0xae] = 2;
    if (cVar16 == '\0') {
      ar4[10] = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 10) = (ulonglong)(uint)(*(float *)(fr0_ - 0x1f8));
    }
    (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c031b68(ar4,ar4[0x4a] * 0x18 + -0x73d7fc0c,ar6_00,ar7));
    if (cVar16 == '\0') {
      dVar10 = CONCAT44D(0x43a00000,(int)*(ulonglong *)(unsigned)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x28);
      dVar10 = -8.625516889892592e-251;
    }
    if (cVar15 == '\0') {
      fVar7 = F32LO(dVar10) * F32HI(dVar10);
    }
    else {
      fVar7 = SUB84(dVar10 * dVar10,0);
    }
    if (cVar16 == '\0') {
      ar4[0x28] = (int)fVar7;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = in_xd0;
    }
    pcVar5 = ((void *)0x8c03c314);
    (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c03c314(ar4,((void *)0x8c03c314),ar6_00,ar7));
    in_dr0 = (ulonglong)(uint)fVar7;
    if (cVar16 == '\0') {
      ar4[0xb] = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0xb) = in_dr0;
    }
    ar4[0x1a] = ar4[0x1a] + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (ar4[0x4a] == 0) {
        pcVar5 = ((void *)0x8c0230f0);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x160))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); FUN_8c0230f0(ar4 + 0x20,((void *)0x8c0230f0),ar6_00,ar7); });
        fVar7 = (float)in_dr0;
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_normalize(((undefined1 *)(fr0_ - 0x160)),pcVar5,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x170)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x170)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x160)),0xffffffff,ar6_00,ar7));
        if (cVar16 == '\0') {
          fVar7 = (float)ar4[0xb];
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0xb);
        }
        if (cVar15 == '\0') {
          fVar7 = fVar7 + 1.0;
        }
        else {
          fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0);
        }
        (*(undefined8 *)(fr0_ - 0x240)) = in_xd0;
        if (cVar16 == '\0') {
          (*(undefined8 *)(fr0_ - 0x240)) = CONCAT44(ar4,fVar7);
        }
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x240))+4)) + 0x2c) = (undefined4)(*(undefined8 *)(fr0_ - 0x240));
          dVar11 = CONCAT44D(0x42c80000,(undefined4)(*(undefined8 *)(fr0_ - 0x240)));
        }
        else {
          *(ulonglong *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x240))+4)) + 0x2c) = (*(undefined8 *)(fr0_ - 0x240));
          dVar11 = 2.89144980428368e-312;
          in_xd0 = (*(undefined8 *)(fr0_ - 0x240));
        }
        if (cVar15 == '\0') {
          (*(float *)(fr0_ - 0x1e0)) = F32LO(dVar11) / F32HI(dVar11);
        }
        else {
          (*(float *)(fr0_ - 0x1e0)) = SUB84(dVar11 / dVar11,0);
        }
        if (cVar16 != '\0') {
          (*(float *)(fr0_ - 0x1e0)) = (float)in_xd0;
          ((undefined4 *)(fr0_ - 0x1dc))[0] = (undefined4)(in_xd0 >> 0x20);
        }
      }
      else {
        piVar3 = ar4 + 0x20;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x180))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); FUN_8c0230f0(piVar3,piVar3,ar6_00,ar7); });
        fVar7 = (float)in_dr0;
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_normalize(((undefined1 *)(fr0_ - 0x180)),piVar3,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x190)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x190)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x180)),0xffffffff,ar6_00,ar7));
        if (cVar16 == '\0') {
          fVar7 = (float)ar4[0xb];
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0xb);
        }
        if (cVar15 == '\0') {
          fVar7 = fVar7 + 1.0;
        }
        else {
          fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0);
        }
        (*(undefined8 *)(fr0_ - 0x248)) = in_xd0;
        if (cVar16 == '\0') {
          (*(undefined8 *)(fr0_ - 0x248)) = CONCAT44(ar4,fVar7);
        }
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x248))+4)) + 0x2c) = (undefined4)(*(undefined8 *)(fr0_ - 0x248));
          dVar11 = CONCAT44D(0x43fa0000,(undefined4)(*(undefined8 *)(fr0_ - 0x248)));
        }
        else {
          *(ulonglong *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x248))+4)) + 0x2c) = (*(undefined8 *)(fr0_ - 0x248));
          dVar11 = 2.89154888428735e-312;
          in_xd0 = (*(undefined8 *)(fr0_ - 0x248));
        }
        if (cVar15 == '\0') {
          (*(float *)(fr0_ - 0x1e0)) = F32LO(dVar11) / F32HI(dVar11);
        }
        else {
          (*(float *)(fr0_ - 0x1e0)) = SUB84(dVar11 / dVar11,0);
        }
        if (cVar16 != '\0') {
          (*(float *)(fr0_ - 0x1e0)) = (float)in_xd0;
          ((undefined4 *)(fr0_ - 0x1dc))[0] = (undefined4)(in_xd0 >> 0x20);
        }
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1a0))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x34)),&(*(float *)(fr0_ - 0x1e0)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c023aa0(ar4 + 0x20,((undefined1 *)(fr0_ - 0x1a0)),ar6_00,ar7));
      uVar6 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1a0)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 604)), Vec3_length(ar4 + 0x20,uVar6,ar6_00,ar7));
      if (cVar16 == '\0') {
        dVar11 = CONCAT44D(0x3f70a3d7,(int)*(ulonglong *)(unsigned)(ar4 + 10));
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)(ar4 + 10);
        dVar11 = -9.106528023795323e-251;
      }
      if (cVar15 == '\0') {
        fVar7 = F32LO(dVar11) * F32HI(dVar11);
      }
      else {
        fVar7 = SUB84(dVar11 * dVar11,0);
      }
      if (cVar16 == '\0') {
        ar4[10] = (int)fVar7;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 10) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c04dd34(ar4,*(int *)(unsigned)(ar6 + 4),ar6_00,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c031de8(ar4,0,ar6_00,ar7));
      if (iVar1 == 0) {
        (vsp = ((unsigned long)(fr0_ - 604)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x2c))))(ar4,*ar4,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c031b68(ar4,ar4[0x4a] * 0x18 + -0x73d7fc0c,ar6_00,ar7));
        ar4[0x1a] = 0;
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 5,ar4 + 0x20,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c04dd34(ar4,*(int *)(unsigned)(ar6 + 4),ar6_00,ar7));
      }
    }
    else if (iVar1 == 3) {
      pcVar5 = ((void *)0x8c031748);
      (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c031748(ar4,((void *)0x8c031748),ar6_00,ar7));
      fVar7 = (float)in_dr0;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1b0))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); FUN_8c0230f0(ar4 + 0x20,pcVar5,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x1b0)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1b0)),0xffffffff,ar6_00,ar7));
      if (cVar16 == '\0') {
        fVar7 = (float)ar4[0xb];
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0xb);
      }
      if (cVar15 == '\0') {
        fVar7 = fVar7 + 1.0;
      }
      else {
        fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0);
      }
      (*(undefined8 *)(fr0_ - 0x258)) = in_xd0;
      if (cVar16 == '\0') {
        (*(undefined8 *)(fr0_ - 0x258)) = CONCAT44(ar4,fVar7);
      }
      if (cVar16 == '\0') {
        *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x258))+4)) + 0x2c) = (undefined4)(*(undefined8 *)(fr0_ - 0x258));
        dVar11 = CONCAT44D(0x43fa0000,(undefined4)(*(undefined8 *)(fr0_ - 0x258)));
      }
      else {
        *(ulonglong *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x258))+4)) + 0x2c) = (*(undefined8 *)(fr0_ - 0x258));
        dVar11 = 2.89154888428735e-312;
        in_xd0 = (*(undefined8 *)(fr0_ - 0x258));
      }
      if (cVar15 == '\0') {
        fVar7 = F32LO(dVar11) / F32HI(dVar11);
      }
      else {
        fVar7 = SUB84(dVar11 / dVar11,0);
      }
      (*(float *)(fr0_ - 0x1e0)) = fVar7;
      if (cVar16 != '\0') {
        (*(float *)(fr0_ - 0x1e0)) = (float)in_xd0;
        ((undefined4 *)(fr0_ - 0x1dc))[0] = (undefined4)(in_xd0 >> 0x20);
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c0))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x34)),&(*(float *)(fr0_ - 0x1e0)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c023aa0(ar4 + 0x20,((undefined1 *)(fr0_ - 0x1c0)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c0)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 604)), Vec3_length(ar4 + 0x20,ar4 + 0x20,ar6_00,ar7));
      ar7 = (code *)(ar4 + 10);
      uVar12 = (ulonglong)(uint)fVar7;
      if (cVar16 == '\0') {
        *(int *)(unsigned)ar7 = 0;
      }
      else {
        *(ulonglong *)(unsigned)ar7 = uVar12;
      }
      ar6_01 = 0x128;
      (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c031b68(ar4,ar4[0x4a] * 0x18 + -0x73d7fc0c,0x128,ar7));
      uVar6 = 0xb0;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 604)), get_field_1c_026dd8(ar4 + 0x2c,0xb0,ar6_01,ar7));
      if (iVar1 == 99) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x2c,uVar6,ar6_01,ar7));
        uVar8 = (uint)uVar12;
        if (iVar1 == 1) {
          ar4[0x1a] = 0;
          (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c031b68(ar4,ar4[0x4a] * 0x18 + -0x73d7fc0c,ar6_01,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 5,ar4 + 0x20,ar6_01,ar7));
          ar7 = (code *)0x0;
          uVar6 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0x1a,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,0xb0,uVar6,ar7));
          ar4[0xae] = 2;
          ar4[0xba] = 2;
          if (cVar16 == '\0') {
            ar4[0xb] = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0xb) = (ulonglong)uVar8;
          }
        }
      }
      else {
        ar4[0x86] = 0x12;
        uVar6 = 0xb0;
        piVar3 = ar4 + 0x2c;
        (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_AdvanceFrame_033ba0(piVar3,piVar3,0xb0,ar7));
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 604)); CAnimBody_GetCurFrame(ar4 + 0x2c,piVar3,uVar6,ar7); });
        if (cVar16 == '\0') {
          uVar12 = uVar12 >> 0x20;
        }
        fVar7 = (float)uVar12;
        if (cVar15 != '\0' || fVar7 <= 0.0) {
          ar4[0x1a] = 0;
          (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c031b68(ar4,ar4[0x4a] * 0x18 + -0x73d7fc0c,uVar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x1cc)),((undefined1 *)(fr0_ - 0x1cc)),uVar6,ar7));
          pcVar5 = ((void *)0x8c023484);
          ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x1dc))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); FUN_8c023484(ar4 + 0x20,((undefined1 *)(fr0_ - 0x1cc)),uVar6,((void *)0x8c023484)); });
          uVar6 = (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 0x20,((undefined4 *)(fr0_ - 0x1dc)),((undefined4 *)(fr0_ - 0x1dc)),pcVar5));
          piVar3 = ar4 + 5;
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(piVar3,uVar6,piVar3,uVar6));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined4 *)(fr0_ - 0x1dc)),0xffffffff,piVar3,uVar6));
          (vsp = ((unsigned long)(fr0_ - 604)), object_dtor_delete(((undefined1 *)(fr0_ - 0x1cc)),0xffffffff,((undefined1 *)(fr0_ - 0x1cc)),0xffffffff));
          uVar6 = 0;
          (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0x1a,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ar4 + 0x2c,0xb0,uVar6));
          ar4[0xae] = 2;
          ar4[0xba] = 2;
          ar7 = (code *)(ar4 + 0xb);
          if (cVar16 == '\0') {
            *(int *)(unsigned)ar7 = 0;
          }
          else {
            *(ulonglong *)(unsigned)ar7 = (ulonglong)(uint)fVar7;
          }
        }
      }
    }
    goto LAB_8c0519c6;
  }
  if (ain0 != (code *)0x0) {
    if (ain0 == (code *)0x1) {
      if ((char)ar4[0x84] == '\x01') {
        ar7 = (code *)0x5;
        ar6_00 = (code *)0x1;
        pcVar5 = (code *)ar5;
        (vsp = ((unsigned long)(fr0_ - 604)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar4[0x91] + 0xd0))))((int *)(unsigned)(uint)ar4[0x91],ar5,1,5));
      }
      uVar8 = (uint)in_dr0;
      (vsp = ((unsigned long)(fr0_ - 604)), vec3_clear(ar4 + 0xaa,pcVar5,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 604)), vec3_clear(ar4 + 0x24,pcVar5,ar6_00,ar7));
      if (cVar16 == '\0') {
        ar4[0x28] = 0;
        dVar11 = CONCAT44D(ar5[1],0x43340000);
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)uVar8;
        dVar11 = *(double *)(unsigned)(ar5 + 1);
        in_xd0 = 0x4120000043340000;
      }
      if (cVar15 == '\0') {
        fVar7 = F32LO(dVar11) - F32HI(dVar11);
      }
      else {
        fVar7 = SUB84(dVar11 - dVar11,0);
      }
      if (cVar16 == '\0') {
        dVar11 = CONCAT44D(0x41200000,fVar7);
      }
      else {
        dVar11 = 1.063644295445812e+156;
      }
      if (cVar15 == '\0') {
        fVar7 = F32LO(dVar11) - F32HI(dVar11);
      }
      else {
        fVar7 = SUB84(dVar11 - dVar11,0);
      }
      if (cVar16 == '\0') {
        ar4[0xab] = (int)fVar7;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xab) = in_xd0;
      }
      if (cVar16 == '\0') {
        ar4[0xb] = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xb) = (ulonglong)(uint)fVar7;
      }
      ar7 = (code *)0x3;
      ar4[0x1a] = 3;
      if (cVar16 == '\0') {
        ar4[0xb] = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xb) = (ulonglong)(uint)fVar7;
      }
      goto LAB_8c0519c6;
    }
    if (ain0 != (code *)0x2) {
      if (ain0 == (code *)0x3) {
        (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x2c,((void *)0x8c033b98),ar6_00,ar7));
        fVar7 = (float)in_dr0;
        pcVar5 = ((void *)0x8c026dd8);
        iVar1 = (vsp = ((unsigned long)(fr0_ - 604)), get_field_1c_026dd8(ar4 + 0x2c,((void *)0x8c026dd8),ar6_00,ar7));
        fVar14 = F32HI(dVar11);
        if (iVar1 == 99) {
          if (cVar16 == '\0') {
            dVar10 = CONCAT44D(0x43340000,fVar7);
          }
          else {
            dVar10 = 2.80660494205813e-312;
          }
          if (cVar15 == '\0') {
            dVar11 = CONCAT44D(fVar14 - F32HI(dVar10),SUB84(dVar11,0));
          }
          else {
            dVar11 = dVar11 - dVar10;
          }
          fVar7 = F32HI(dVar11);
          (*(float *)(fr0_ - 0x1e4)) = fVar7;
          if (cVar16 != '\0') {
            (*(float *)(fr0_ - 0x1e4)) = SUB84(dVar11,0);
            (*(float *)(fr0_ - 0x1e0)) = fVar7;
          }
          (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,pcVar5,ar6_00,ar7));
          if (cVar16 == '\0') {
            dVar11 = CONCAT44D((*(float *)(fr0_ - 0x1e4)),in_fr3);
            dVar10 = CONCAT44D(0x43340000,ar5[1]);
          }
          else {
            dVar11 = CONCAT44D((*(float *)(fr0_ - 0x1e0)),(*(float *)(fr0_ - 0x1e4)));
            dVar10 = 4294968371.25;
          }
          if (cVar15 == '\0') {
            fVar7 = F32LO(dVar10) - F32HI(dVar10);
            dVar11 = CONCAT44D(F32HI(dVar11) - fVar7,SUB84(dVar11,0));
          }
          else {
            fVar7 = SUB84(dVar10 - dVar10,0);
            dVar11 = dVar11 - (dVar10 - dVar10);
          }
          if (cVar16 == '\0') {
            dVar10 = CONCAT44D((*(float *)(fr0_ - 0x1e4)),fVar7);
          }
          else {
            dVar10 = CONCAT44D((*(float *)(fr0_ - 0x1e0)),(*(float *)(fr0_ - 0x1e4)));
          }
          if (cVar15 == '\0') {
            dVar11 = CONCAT44D(F32HI(dVar11) /
                                      F32HI(dVar10),SUB84(dVar11,0));
          }
          else {
            dVar11 = dVar11 / dVar10;
          }
          if (cVar16 == '\0') {
            dVar10 = CONCAT44D(0x38d1b717,SUB84(dVar10,0));
          }
          else {
            dVar10 = 2.72086438209188e-312;
          }
          if (cVar15 == '\0') {
            dVar11 = CONCAT44D(F32HI(dVar11) -
                                      F32HI(dVar10),SUB84(dVar11,0));
          }
          else {
            dVar11 = dVar11 - dVar10;
          }
          fVar7 = F32HI(dVar11);
          if (cVar16 == '\0') {
            dVar10 = (double)(ulonglong)(uint)fVar7;
            (*(float *)(fr0_ - 0x1e4)) = fVar7;
          }
          else {
            (*(float *)(fr0_ - 0x1e4)) = SUB84(dVar11,0);
            (*(float *)(fr0_ - 0x1e0)) = fVar7;
          }
          fVar7 = F32LO(dVar10);
          if (cVar15 == '\0') {
            dVar11 = CONCAT44D(1.0 - fVar7,fVar7);
          }
          else {
            dVar11 = CONCAT44D(0x3f800000,fVar7) - CONCAT44D(0x3f800000,fVar7);
          }
          fVar7 = F32HI(dVar11);
          (*(float *)(fr0_ - 0x1e8)) = fVar7;
          if (cVar16 != '\0') {
            (*(float *)(fr0_ - 0x1e8)) = SUB84(dVar11,0);
            (*(float *)(fr0_ - 0x1e4)) = fVar7;
          }
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa0))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); Vec3_scale(ar4 + 0x15,&(*(float *)(fr0_ - 0x1e8)),ar6_00,ar7); });
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); FUN_8c0230f0(ar4 + 0x20,0x80,ar6_00,ar7); });
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc0))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xb0)),&(*(float *)(fr0_ - 0x1e4)),ar6_00,ar7); });
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd0))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xa0)),((undefined1 *)(fr0_ - 0xc0)),ar6_00,ar7); });
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 0x20,((undefined1 *)(fr0_ - 0xd0)),ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_length(ar4 + 0x20,((void *)0x8c022f54),ar6_00,ar7));
        }
        else if (iVar1 == 0x49) {
          if (cVar16 == '\0') {
            dVar10 = CONCAT44D(0x43340000,fVar7);
          }
          else {
            dVar10 = 2.80660494205813e-312;
          }
          if (cVar15 == '\0') {
            dVar11 = CONCAT44D(fVar14 - F32HI(dVar10),SUB84(dVar11,0));
          }
          else {
            dVar11 = dVar11 - dVar10;
          }
          fVar7 = F32HI(dVar11);
          (*(float *)(fr0_ - 0x1e4)) = fVar7;
          if (cVar16 != '\0') {
            (*(float *)(fr0_ - 0x1e4)) = SUB84(dVar11,0);
            (*(float *)(fr0_ - 0x1e0)) = fVar7;
          }
          uVar6 = 0x49;
          (vsp = ((unsigned long)(fr0_ - 604)), s_Check_This_Motion_Data_0314fc(ar4 + 0x2c,0x49,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,uVar6,ar6_00,ar7));
          if (cVar16 == '\0') {
            dVar11 = CONCAT44D((*(float *)(fr0_ - 0x1e4)),in_fr3);
            dVar10 = CONCAT44D(0x43340000,ar5[1]);
          }
          else {
            dVar11 = CONCAT44D((*(float *)(fr0_ - 0x1e0)),(*(float *)(fr0_ - 0x1e4)));
            dVar10 = 2.80660494205813e-312;
          }
          if (cVar15 == '\0') {
            fVar7 = F32LO(dVar10) - F32HI(dVar10);
            dVar11 = CONCAT44D(F32HI(dVar11) - fVar7,SUB84(dVar11,0));
          }
          else {
            fVar7 = SUB84(dVar10 - dVar10,0);
            dVar11 = dVar11 - (dVar10 - dVar10);
          }
          if (cVar16 == '\0') {
            dVar10 = CONCAT44D((*(float *)(fr0_ - 0x1e4)),fVar7);
          }
          else {
            dVar10 = CONCAT44D((*(float *)(fr0_ - 0x1e0)),(*(float *)(fr0_ - 0x1e4)));
          }
          if (cVar15 == '\0') {
            dVar11 = CONCAT44D(F32HI(dVar11) /
                                      F32HI(dVar10),SUB84(dVar11,0));
          }
          else {
            dVar11 = dVar11 / dVar10;
          }
          if (cVar16 == '\0') {
            dVar10 = CONCAT44D(0x38d1b717,SUB84(dVar10,0));
          }
          else {
            dVar10 = 8.3229332702402e-312;
          }
          if (cVar15 == '\0') {
            dVar11 = CONCAT44D(F32HI(dVar11) -
                                      F32HI(dVar10),SUB84(dVar11,0));
          }
          else {
            dVar11 = dVar11 - dVar10;
          }
          fVar7 = F32HI(dVar11);
          if (cVar16 == '\0') {
            dVar10 = (double)(ulonglong)(uint)fVar7;
            (*(float *)(fr0_ - 0x1e4)) = fVar7;
          }
          else {
            (*(float *)(fr0_ - 0x1e4)) = SUB84(dVar11,0);
            (*(float *)(fr0_ - 0x1e0)) = fVar7;
          }
          fVar7 = F32LO(dVar10);
          if (cVar15 == '\0') {
            dVar11 = CONCAT44D(1.0 - fVar7,fVar7);
          }
          else {
            dVar11 = CONCAT44D(0x3f800000,fVar7) - CONCAT44D(0x3f800000,fVar7);
          }
          fVar7 = F32HI(dVar11);
          (*(float *)(fr0_ - 0x1ec)) = fVar7;
          if (cVar16 != '\0') {
            (*(float *)(fr0_ - 0x1ec)) = SUB84(dVar11,0);
            (*(float *)(fr0_ - 0x1e8)) = fVar7;
          }
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe0))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); Vec3_scale(ar4 + 0x15,&(*(float *)(fr0_ - 0x1ec)),ar6_00,ar7); });
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf0))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); FUN_8c0230f0(ar4 + 0x20,0x80,ar6_00,ar7); });
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x100))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xf0)),&(*(float *)(fr0_ - 0x1e4)),ar6_00,ar7); });
          ar7 = ((void *)0x8c023a34);
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x110))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xe0)),((undefined1 *)(fr0_ - 0x100)),ar6_00,((void *)0x8c023a34)); });
          ar6_00 = (code *)((undefined1 *)(fr0_ - 0x110));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 0x20,ar6_00,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x110)),0xffffffff,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x100)),0xffffffff,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,ar6_00,ar7));
          uVar6 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_length(ar4 + 0x20,uVar6,ar6_00,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x120)),pcVar5,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x120)),ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x120)),0xffffffff,ar6_00,ar7));
          if (cVar16 == '\0') {
            fVar7 = (float)ar4[0xb];
          }
          else {
            in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0xb);
          }
          if (cVar15 == '\0') {
            fVar7 = fVar7 + 1.0;
          }
          else {
            fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0)
            ;
          }
          (*(undefined8 *)(fr0_ - 0x234)) = in_xd0;
          if (cVar16 == '\0') {
            (*(undefined8 *)(fr0_ - 0x234)) = CONCAT44(ar4,fVar7);
          }
          if (cVar16 == '\0') {
            *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x234))+4)) + 0x2c) = (undefined4)(*(undefined8 *)(fr0_ - 0x234));
            dVar11 = CONCAT44D(0x43480000,(undefined4)(*(undefined8 *)(fr0_ - 0x234)));
          }
          else {
            *(ulonglong *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x234))+4)) + 0x2c) = (*(undefined8 *)(fr0_ - 0x234));
            dVar11 = 2.89149124951398e-312;
            in_xd0 = (*(undefined8 *)(fr0_ - 0x234));
          }
          if (cVar15 == '\0') {
            (*(float *)(fr0_ - 0x1e0)) = F32LO(dVar11) / F32HI(dVar11);
          }
          else {
            (*(float *)(fr0_ - 0x1e0)) = SUB84(dVar11 / dVar11,0);
          }
          if (cVar16 != '\0') {
            (*(float *)(fr0_ - 0x1e0)) = (float)in_xd0;
            ((undefined4 *)(fr0_ - 0x1dc))[0] = (undefined4)(in_xd0 >> 0x20);
          }
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x130))); *(unsigned *)((((unsigned long)(fr0_ - 604)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 604)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x34)),&(*(float *)(fr0_ - 0x1e0)),ar6_00,ar7); });
          ar6_00 = (code *)(ar4 + 0x20);
          (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c023aa0(ar6_00,((undefined1 *)(fr0_ - 0x130)),ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x130)),0xffffffff,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 604)), Vec3_length(ar4 + 0x20,0x80,ar6_00,ar7));
        }
        (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
        uVar6 = (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
        return uVar6;
      }
      goto LAB_8c0519c6;
    }
  }
  piVar3 = ar4 + 0x2c;
  pcVar5 = ((void *)0x8c033b98);
  (vsp = ((unsigned long)(fr0_ - 604)), s_CAnimBody_AdvanceFrame_033ba0(piVar3,((void *)0x8c033b98),piVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 604)), Vec3_length_sq(ar4 + 1,pcVar5,piVar3,ar7));
  if (cVar16 == '\0') {
    dVar11 = CONCAT44D(0x3dcccccd,(int)(in_dr0 >> 0x20));
    in_dr0 = in_xd0;
  }
  else {
    dVar11 = 6.28623017172232e-312;
  }
  if (cVar15 == '\0') {
    fVar7 = F32LO(dVar11) * F32HI(dVar11);
  }
  else {
    fVar7 = SUB84(dVar11 * dVar11,0);
  }
  if (cVar16 == '\0') {
    ar4[10] = (int)fVar7;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 10) = in_dr0;
  }
  (vsp = ((unsigned long)(fr0_ - 604)), Vec3_normalize(ar4 + 1,pcVar5,piVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(ar4 + 5,((undefined1 *)(fr0_ - 0x140)),piVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x140)),0xffffffff,piVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c031b68(ar4,ar4[0x4a] * 0x18 + -0x73d7fc0c,piVar3,ar7));
  if (cVar16 == '\0') {
    iVar1 = 0x41200000;
  }
  else {
    fVar7 = 10.0;
    iVar1 = 0x270;
  }
  (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c032518(ar4,ar5,(*(undefined4 *)(fr0_ + 0x00000000)),((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
  ar5_00 = ((undefined1 *)(fr0_ - 0x150));
  piVar3 = ar4 + 0x15;
  (vsp = ((unsigned long)(fr0_ - 604)), Vec3_assign(piVar3,ar5_00,piVar3,ar5_00));
  uVar6 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x150)),0xffffffff,piVar3,ar5_00));
  ar7 = (code *)(ar4 + 0x14);
  (vsp = ((unsigned long)(fr0_ - 604)), FUN_8c032ab0(ar4,uVar6,ar4 + 0x13,ar7));
  if (cVar16 == '\0') {
    ar4[9] = iVar1;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 9) = CONCAT44(iVar1,fVar7);
  }
  ar4[0x11] = 1;
  if (cVar16 == '\0') {
    ar4[0xb] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xb) = (ulonglong)(uint)fVar7;
  }
  ar4[0x10] = 5;
  ar4[0xa0] = 0;
  ar4[0x1a] = 2;
LAB_8c0519c6:
  uVar6 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,0xffffffff,ar7));
  uVar6 = (vsp = ((unsigned long)(fr0_ - 604)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,uVar6,ar7));
  return uVar6;
}

__asm__(".globl _FUN_8c0507c0\n.set _FUN_8c0507c0, _FUN_8c0507c0_def\n");
//@unit 8c051a68
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c051a68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c051a68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  float fVar6;
  double dVar7;
  double in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ar6;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x3c))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_sub(ar5,ar6,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_normalize(((undefined1 *)(fr0_ - 0x3c)),ar6,uVar1,ar7));
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x4c)),uVar1,ar7));
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,uVar1,ar7));
    uVar5 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,uVar1,ar7));
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),uVar5,uVar1,ar7));
    iVar2 = *(int *)(unsigned)(ar4 + 0x40);
    if ((iVar2 == 1) || (iVar2 == 3)) {
      pdVar3 = (double *)(unsigned)(ar4 + 0x2c);
      if (cVar9 != '\0') {
        in_xd0 = *pdVar3;
        pdVar3 = (double *)(unsigned)(ar4 + 0x30);
      }
      dVar7 = *pdVar3;
      if (cVar8 == '\0') {
        fVar6 = F32LO(dVar7) / F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      dVar7 = in_xd0;
      if (cVar9 == '\0') {
        (*(undefined8 *)(fr0_ - 0x70)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x70))+4)),fVar6);
        dVar7 = (*(undefined8 *)(fr0_ - 0x70));
      }
      (*(undefined8 *)(fr0_ - 0x70)) = dVar7;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x1c)),&(*(undefined8 *)(fr0_ - 0x70)),uVar1,ar7); });
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023aa0(ar4 + 0x14,((undefined1 *)(fr0_ - 0x5c)),uVar1,ar7));
      uVar5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,uVar1,ar7));
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_normalize(ar4 + 0x14,uVar5,uVar1,ar7));
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(ar4 + 0x14,(int)&(*(undefined8 *)(fr0_ - 0x70)) + 4,uVar1,ar7));
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x70)) + 4,0xffffffff,uVar1,ar7));
      pdVar3 = (double *)(unsigned)(ar4 + 0x2c);
      if (cVar9 != '\0') {
        in_xd0 = *pdVar3;
        pdVar3 = (double *)(unsigned)(ar4 + 0x30);
      }
      dVar7 = *pdVar3;
      if (SUB84(dVar7,0) != F32HI(dVar7)) {
        if (cVar9 == '\0') {
          dVar7 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x28);
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        }
        if (cVar8 == '\0' && 0.0 < SUB84(dVar7,0)) {
          if (cVar9 == '\0') {
            dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
            dVar7 = *(double *)(unsigned)(ar4 + 0x24);
          }
          if (cVar8 == '\0') {
            fVar6 = F32LO(dVar7) / F32HI(dVar7);
          }
          else {
            fVar6 = SUB84(dVar7 / dVar7,0);
          }
          if (cVar9 == '\0') {
            dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c),fVar6);
          }
          else {
            dVar7 = *(double *)(unsigned)(ar4 + 0x2c);
          }
          if (cVar8 == '\0') {
            fVar6 = F32LO(dVar7) + F32HI(dVar7);
          }
          else {
            fVar6 = SUB84(dVar7 + dVar7,0);
          }
          puVar4 = (undefined8 *)(unsigned)(ar4 + 0x30);
          if (cVar9 == '\0') {
            *(float *)(unsigned)(ar4 + 0x2c) = fVar6;
            puVar4 = (undefined8 *)(unsigned)(ar4 + 0x2c);
          }
          else {
            *(double *)(unsigned)(ar4 + 0x2c) = in_xd0;
          }
          if (cVar8 == '\0' && (float)((ulonglong)*puVar4 >> 0x20) < (float)*puVar4) {
            if (cVar9 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x2c) = *(undefined4 *)(unsigned)(ar4 + 0x30);
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x2c) = *(undefined8 *)(unsigned)(ar4 + 0x30);
            }
          }
        }
      }
    }
    else if (iVar2 == 4) {
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c05ae54(ar4,uVar5,uVar1,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,uVar1,ar7));
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,uVar1,ar7));
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c051a68\n.set _FUN_8c051a68, _FUN_8c051a68_def\n");
//@unit 8c051c14
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c051c14_def(int ar4,undefined4 ar5,undefined *ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c051c14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 428; for (int i_ = 0; i_ < 428; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined1 *ar5_00;
  undefined4 uVar4;
  code *ar5_01;
  undefined4 uVar5;
  undefined *ar6_00;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  double in_dr0 = 0;
  double dVar9;
  undefined4 uVar10;
  undefined4 in_fr3 = 0;
  double dVar11;
  undefined4 in_fr15 = 0;
  undefined8 in_xd0 = 0;
  bool bVar12;
  char cVar13;
  char cVar14;
  
  cVar14 = '\0';
  cVar13 = '\0';
  uVar6 = 1;
  uVar5 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_ctor_zero(((undefined4 *)(fr0_ - 0x3c)),uVar5,ar6_00,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 428)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 428)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar5,ar6_00,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 428)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 428)) - 8); FUN_8c0230f0(ar6,uVar5,ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x74)),((undefined1 *)(fr0_ - 0x84)),ar6_00,ar7));
  dVar11 = in_dr0;
  if (cVar14 == '\0') {
    dVar11 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
  puVar3 = (undefined *)(unsigned)0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_set_zero(&(*(float *)(fr0_ - 0x48)),puVar3,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x54)),puVar3,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x64)),puVar3,ar6_00,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 0x28c);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 428)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,puVar3,ar6_00,ar7));
    if (iVar1 == 1) {
      (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c02a1fc(ar4 + 0x2c8,puVar3,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 1;
    }
  }
  else {
    if (iVar1 == 1) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 428)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 428)) - 8); FUN_8c0230f0(ar4 + 0x14,puVar3,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x94)),ar6,ar6_00,ar7));
      if (cVar14 == '\0') {
        *(int *)(unsigned)(ar4 + 0x224) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x224) = in_dr0;
      }
      uVar5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c0231c8(ar6,uVar5,ar6_00,ar7));
      iVar1 = ar4 + 0x14;
      (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c0231c8(iVar1,uVar5,ar6_00,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1a8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 428)); FUN_8c010e38(iVar1,((void *)0x8c010e38),ar6_00,ar7); });
      if (cVar14 == '\0') {
        *(int *)(unsigned)(ar4 + 0x228) = (int)((ulonglong)in_dr0 >> 0x20);
        fVar7 = *(float *)(unsigned)(ar4 + 0x224);
        fVar8 = 3.0;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x228) = in_dr0;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x224);
        fVar7 = 3.0;
        fVar8 = 3.64338e-43;
      }
      if (cVar13 == '\0' && fVar7 < fVar8) {
        uVar6 = 0;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 428)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 428)) - 8); FUN_8c0230f0(ar4 + 0x14,((undefined1 *)(fr0_ - 0xa4)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xa4)),((undefined1 *)(unsigned)0x8c125d48),ar6_00,ar7));
        if (cVar14 == '\0') {
          fVar7 = 45.0;
        }
        else {
          fVar8 = 45.0;
          fVar7 = 8.91226e-43;
        }
        (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6_00,ar7));
        if (cVar13 != '\0' || fVar7 <= fVar8) {
          uVar5 = (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125d48),ar6_00,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x27c) = uVar5;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x27c) = 0;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
        goto LAB_8c0525f2;
      }
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(0x40400000,*(undefined4 *)(unsigned)(ar4 + 0x224));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x224);
        dVar9 = 6.28643325334977e-312;
      }
      if (cVar13 == '\0') {
        fVar7 = F32LO(dVar9) - F32HI(dVar9);
      }
      else {
        fVar7 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar14 == '\0') {
        *(float *)(unsigned)(ar4 + 0x224) = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x224) = in_xd0;
      }
      if (*(int *)(unsigned)(ar4 + 0x128) == 0) {
        ar7 = (code *)0x0;
        ar6_00 = (undefined *)(unsigned)0xffffffff;
        puVar3 = (undefined *)(unsigned)0x5;
        (vsp = ((unsigned long)(fr0_ - 428)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0));
      }
      else {
        puVar3 = ar6;
        uVar5 = (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c023334(ar4 + 0x14,ar6,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x27c) = uVar5;
        if (*(int *)(unsigned)(ar4 + 0x27c) == 3) {
          ar7 = (code *)0x0;
          ar6_00 = (undefined *)(unsigned)0xffffffff;
          uVar5 = 7;
          (vsp = ((unsigned long)(fr0_ - 428)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0));
          uVar5 = (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c026db0(ar4,uVar5,ar6_00,ar7));
          uVar4 = (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c03c0f0(ar4 + 0xb0,uVar5,ar6_00,ar7));
          puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 428)), deref_u32(uVar4,uVar5,ar6_00,ar7));
          uVar5 = puVar2[1];
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar2;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar5;
          puVar3 = (undefined *)(unsigned)puVar2[2];
          *(unsigned *)(unsigned)(ar4 + 0xbc) = puVar3;
          if (*(int *)(unsigned)(ar4 + 0x128) == 1) {
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c13630c);
          }
          else {
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c136354);
          }
          if (cVar14 == '\0') {
            dVar9 = CONCAT44D(0x42700000,*(undefined4 *)(unsigned)(ar4 + 0x224));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x224);
            dVar9 = -3.102702123153873e+34;
          }
          if (cVar13 == '\0') {
            fVar7 = F32LO(dVar9) / F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 / dVar9,0);
          }
          if (cVar14 == '\0') {
            *(float *)(unsigned)(ar4 + 0x2c0) = fVar7;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x2c0) = in_xd0;
          }
        }
        else if (*(int *)(unsigned)(ar4 + 0x27c) == 4) {
          ar7 = (code *)0x0;
          ar6_00 = (undefined *)(unsigned)0xffffffff;
          uVar5 = 8;
          (vsp = ((unsigned long)(fr0_ - 428)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
          puVar3 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 428)), FUN_8c026db0(ar4,uVar5,ar6_00,ar7));
          uVar5 = (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c03c0f0(ar4 + 0xb0,puVar3,ar6_00,ar7));
          puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 428)), deref_u32(uVar5,puVar3,ar6_00,ar7));
          uVar5 = puVar2[1];
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar2;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar5;
          *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar2[2];
          if (*(int *)(unsigned)(ar4 + 0x128) == 1) {
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c136324);
          }
          else {
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c13636c);
          }
          if (cVar14 == '\0') {
            dVar9 = CONCAT44D(0x42700000,*(undefined4 *)(unsigned)(ar4 + 0x224));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x224);
            dVar9 = 1.53687565615637e-311;
          }
          if (cVar13 == '\0') {
            fVar7 = F32LO(dVar9) / F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 / dVar9,0);
          }
          if (cVar14 == '\0') {
            *(float *)(unsigned)(ar4 + 0x2c0) = fVar7;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x2c0) = in_xd0;
          }
        }
      }
      (vsp = ((unsigned long)(fr0_ - 428)), vec3_clear(ar4 + 0x2d4,puVar3,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 428)), vec3_clear(ar4 + 0x2a8,puVar3,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 428)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,puVar3,ar6_00,ar7));
      in_dr0 = (double)(ulonglong)(uint)fVar7;
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x2c) = in_dr0;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
      *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 1;
    }
    else if (iVar1 != 2) goto LAB_8c0525f2;
    uVar5 = SUB84(in_dr0,0);
    (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c05ae54(ar4,puVar3,ar6_00,ar7));
    if (*(int *)(unsigned)(ar4 + 0x128) == 0) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 428)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 428)) - 8); Vec3_scale(ar6,((undefined1 *)(unsigned)0x8c1365a0),ar6_00,ar7); });
      ar5_00 = ((undefined1 *)(fr0_ - 0xb4));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc4))); *(unsigned *)((((unsigned long)(fr0_ - 428)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 428)) - 8); Vec3_add(ar5,ar5_00,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 428)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xd0)),ar5_00,ar6_00,ar7));
      ar7 = (code *)(ar4 + 0x14);
      ar6_00 = ((undefined1 *)(fr0_ - 0xc4));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe0))); *(unsigned *)((((unsigned long)(fr0_ - 428)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 428)) - 8); FUN_8c031eb0(ar4,ar5,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 428)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xe0)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 428)), object_dtor_delete(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc4)),0xffffffff,ar6_00,ar7));
      puVar3 = (undefined *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_00,ar7));
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(0x40400000,uVar5);
      }
      else {
        dVar9 = 4.58883662057755e-312;
      }
      if (cVar13 == '\0') {
        bVar12 = F32HI(dVar9) < F32HI(dVar11);
      }
      else {
        bVar12 = dVar9 < dVar11;
      }
      if (!bVar12) {
        *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
        uVar6 = 0;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf0))); *(unsigned *)((((unsigned long)(fr0_ - 428)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 428)) - 8); FUN_8c0230f0(ar4 + 0x14,puVar3,ar6_00,ar7); });
        fVar7 = F32HI(dVar9);
        (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xf0)),((undefined1 *)(unsigned)0x8c125d48),ar6_00,ar7));
        if (cVar14 == '\0') {
          fVar8 = 45.0;
        }
        else {
          fVar7 = 45.0;
          fVar8 = 8.91226e-43;
        }
        puVar3 = (undefined *)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,ar6_00,ar7));
        if (cVar13 != '\0' || fVar8 <= fVar7) {
          puVar3 = ((undefined1 *)(unsigned)0x8c125d48);
          uVar5 = (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125d48),ar6_00,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x27c) = uVar5;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x27c) = 0;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 428)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,puVar3,ar6_00,ar7));
    }
    else {
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(0x3d4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar9 = 5.238690701939511e-11;
      }
      if (cVar13 == '\0') {
        fVar7 = F32LO(dVar9) + F32HI(dVar9);
      }
      else {
        fVar7 = SUB84(dVar9 + dVar9,0);
      }
      if (cVar14 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar7;
        fVar7 = *(float *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
      }
      dVar9 = CONCAT44D(0x3f800000,fVar7);
      if (cVar13 == '\0' && 1.0 < fVar7) {
        if (cVar14 == '\0') {
          dVar9 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar9 = 3.73983522256399e-312;
        }
        if (cVar13 == '\0') {
          fVar7 = F32HI(dVar9);
          dVar9 = CONCAT44D(fVar7,F32LO(dVar9) - fVar7);
        }
        else {
          dVar9 = dVar9 - dVar9;
        }
        (*(int *)(fr0_ - 0x1a8)) = ar4;
        if (cVar14 == '\0') {
          *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar9,0);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
      }
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1a8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 428)); CAnimBody_GetCurFrame(ar4 + 0xb0,puVar3,ar6_00,ar7); });
      uVar5 = (undefined4)(D2U(dVar11) >> 0x20);
      (*(undefined4 *)(fr0_ - 0x180)) = (undefined4)(D2U(dVar9) >> 0x20);
      if (cVar14 != '\0') {
        (*(undefined4 *)(fr0_ - 0x180)) = SUB84(dVar9,0);
      }
      (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xb4) + 4),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 428)), vec3_copy_8c023d8c(&(*(undefined4 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0xfc)),ar6_00,ar7));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 428)), object_dtor_delete(((undefined1 *)(fr0_ - 0xfc)),0xffffffff,ar6_00,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1a8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 428)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6_00,ar7); });
      uVar10 = (undefined4)(D2U(dVar9) >> 0x20);
      (*(undefined4 *)(fr0_ - 0x184)) = uVar10;
      if (cVar14 != '\0') {
        (*(undefined4 *)(fr0_ - 0x184)) = SUB84(dVar9,0);
        (*(undefined4 *)(fr0_ - 0x180)) = uVar10;
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 428)), get_field_1c_026dd8(ar4 + 0xb0,uVar4,ar6_00,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 428)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar4,ar6_00,ar7));
      if (cVar14 == '\0') {
        dVar11 = CONCAT44D((*(undefined4 *)(fr0_ - 0x184)),in_fr3);
      }
      else {
        dVar11 = CONCAT44D((*(undefined4 *)(fr0_ - 0x180)),(*(undefined4 *)(fr0_ - 0x184)));
      }
      fVar7 = (float)iVar1;
      dVar9 = (double)(ulonglong)(uint)fVar7;
      if (cVar13 == '\0' && fVar7 < 0.0) {
        if (cVar14 == '\0') {
          dVar9 = CONCAT44D(0x4f800000,fVar7);
        }
        else {
          dVar9 = 2.0000005923211575;
        }
        if (cVar13 == '\0') {
          fVar7 = F32HI(dVar9);
          dVar9 = CONCAT44D(fVar7,F32LO(dVar9) + fVar7);
        }
        else {
          dVar9 = dVar9 + dVar9;
        }
      }
      if (cVar13 == '\0') {
        dVar11 = CONCAT44D(F32HI(dVar11) / F32LO(dVar9),
                                  SUB84(dVar11,0));
      }
      else {
        dVar11 = dVar11 / dVar9;
      }
      if (cVar13 == '\0') {
        dVar11 = CONCAT44D(uVar5,1.0 - F32HI(dVar11));
      }
      else {
        dVar11 = CONCAT44D(uVar5,0x3f800000) - dVar11;
      }
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(0x40000000,SUB84(dVar9,0));
      }
      else {
        dVar9 = 1.51139150211502e-311;
      }
      if (cVar13 == '\0') {
        dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),
                                  F32LO(dVar11) * F32HI(dVar9));
      }
      else {
        dVar11 = dVar11 * dVar9;
      }
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c8),(*(undefined4 *)(fr0_ - 0x54)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x50)),(*(undefined4 *)(fr0_ - 0x54)));
        dVar9 = *(double *)(unsigned)(ar4 + 0x2c8);
      }
      if (cVar13 == '\0') {
        fVar7 = F32LO(dVar9) - F32HI(dVar9);
      }
      else {
        fVar7 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c0),fVar7);
      }
      else {
        dVar9 = *(double *)(unsigned)(ar4 + 0x2c0);
      }
      fVar7 = F32LO(dVar11);
      if (cVar13 == '\0') {
        (*(float *)(fr0_ - 0x48)) = F32LO(dVar9) * F32HI(dVar9) * fVar7;
      }
      else {
        (*(float *)(fr0_ - 0x48)) = SUB84(dVar9 * dVar9 * dVar11,0);
      }
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2cc),(*(undefined4 *)(fr0_ - 0x50)));
      }
      else {
        (*(float *)(fr0_ - 0x48)) = (float)in_xd0;
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x4c)),(*(undefined4 *)(fr0_ - 0x50)));
        dVar9 = *(double *)(unsigned)(ar4 + 0x2cc);
      }
      if (cVar13 == '\0') {
        fVar8 = F32LO(dVar9) - F32HI(dVar9);
      }
      else {
        fVar8 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c0),fVar8);
      }
      else {
        dVar9 = *(double *)(unsigned)(ar4 + 0x2c0);
      }
      if (cVar13 == '\0') {
        (*(float *)(fr0_ - 0x44)) = F32LO(dVar9) * F32HI(dVar9) * fVar7;
      }
      else {
        (*(float *)(fr0_ - 0x44)) = SUB84(dVar9 * dVar9 * dVar11,0);
      }
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2d0),(*(undefined4 *)(fr0_ - 0x4c)));
      }
      else {
        (*(float *)(fr0_ - 0x44)) = (float)in_xd0;
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x48)),(*(undefined4 *)(fr0_ - 0x4c)));
        dVar9 = *(double *)(unsigned)(ar4 + 0x2d0);
      }
      if (cVar13 == '\0') {
        fVar8 = F32LO(dVar9) - F32HI(dVar9);
      }
      else {
        fVar8 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c0),fVar8);
      }
      else {
        dVar9 = *(double *)(unsigned)(ar4 + 0x2c0);
      }
      if (cVar13 == '\0') {
        fVar8 = F32HI(dVar9);
        dVar11 = CONCAT44D(fVar8,F32LO(dVar9) * fVar8 * fVar7);
      }
      else {
        dVar11 = dVar9 * dVar9 * dVar11;
      }
      if (cVar14 == '\0') {
        (*(undefined4 *)(fr0_ - 0x40)) = SUB84(dVar11,0);
      }
      else {
        (*(undefined4 *)(fr0_ - 0x40)) = (undefined4)in_xd0;
        ((undefined4 *)(fr0_ - 0x3c))[0] = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      (vsp = ((unsigned long)(fr0_ - 428)), vec3_copy_8c023d8c(ar4 + 0x2c8,&(*(undefined4 *)(fr0_ - 0x54)),ar6_00,ar7));
      fVar7 = F32HI(dVar11);
      (vsp = ((unsigned long)(fr0_ - 428)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x108)),&(*(float *)(fr0_ - 0x48)),ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x118))); *(unsigned *)((((unsigned long)(fr0_ - 428)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 428)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x108)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 428)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x118)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0x118)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 428)), object_dtor_delete(((undefined1 *)(fr0_ - 0x108)),0xffffffff,ar6_00,ar7));
      ar5_01 = ((void *)0x8c022f54);
      (vsp = ((unsigned long)(fr0_ - 428)), Vec3_length(ar4 + 0x14,((void *)0x8c022f54),ar6_00,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 428)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_01,ar6_00,ar7));
      if (iVar1 == 1) {
        uVar6 = 0;
        uVar4 = 0xffffffff;
        uVar5 = 0;
        (vsp = ((unsigned long)(fr0_ - 428)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 428)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar4,uVar6));
        *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
        uVar6 = 0;
        ar7 = ((void *)0x8c0230f0);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x128))); *(unsigned *)((((unsigned long)(fr0_ - 428)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 428)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar5,uVar4,((void *)0x8c0230f0)); });
        ar6_00 = ((undefined1 *)(unsigned)0x8c125d48);
        (vsp = ((unsigned long)(fr0_ - 428)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x128)),((undefined1 *)(unsigned)0x8c125d48),((undefined1 *)(unsigned)0x8c125d48),ar7));
        if (cVar14 == '\0') {
          fVar8 = 45.0;
        }
        else {
          fVar7 = 45.0;
          fVar8 = 8.91226e-43;
        }
        (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0x128)),0xffffffff,ar6_00,ar7));
        if (cVar13 != '\0' || fVar8 <= fVar7) {
          ar7 = ((void *)0x8c023334);
          ar6_00 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 428)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125d48),ar6_00,((void *)0x8c023334)));
          *(unsigned *)(unsigned)(ar4 + 0x27c) = ar6_00;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x27c) = 0;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      }
    }
  }
LAB_8c0525f2:
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 428)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 428)), object_dtor_delete(&(*(float *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined4 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 428)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
  return uVar6;
}

__asm__(".globl _FUN_8c051c14\n.set _FUN_8c051c14, _FUN_8c051c14_def\n");
//@unit 8c0526a0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0526a0_def(code *ar4,code *ar5,code *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0526a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 388; for (int i_ = 0; i_ < 388; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  code *ar6_00;
  code *ar7_00;
  undefined4 ar7_01;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 in_dr0 = 0;
  float fVar12;
  double dVar10;
  ulonglong uVar11;
  undefined8 in_xd0 = 0;
  char cVar13;
  char cVar14;
  
  cVar14 = '\0';
  cVar13 = '\0';
  uVar4 = 1;
  uVar8 = 1;
  pcVar3 = ar6;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x20)),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),uVar4,pcVar3,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,pcVar3,ar7); });
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x50)),uVar4,pcVar3,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x50)),uVar4,pcVar3,ar7); });
  (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x40)),((undefined1 *)(fr0_ - 0x60)),pcVar3,ar7));
  uVar1 = in_dr0;
  if (cVar14 == '\0') {
    (*(undefined8 *)(fr0_ - 0x180)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x180))+4)),(int)((ulonglong)in_dr0 >> 0x20));
    uVar1 = (*(undefined8 *)(fr0_ - 0x180));
  }
  (*(undefined8 *)(fr0_ - 0x180)) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,pcVar3,ar7));
  ar7_00 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,pcVar3,((void *)0x8c022cb0)));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,pcVar3,ar7_00));
  if (ar6 != (code *)0x0) {
    if (ar6 == (code *)0x1) {
      pcVar3 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x28c));
      uVar4 = 5;
      if (((int)pcVar3 < 6) && (-1 < (int)pcVar3)) {
        ar6_00 = (code *)((int)pcVar3 * 4);
                    
        switch((unsigned long)pcVar3) {
        case 0x0:
          if (*(int *)(unsigned)(ar4 + 0x324) == 1) {
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7_00));
            return 0;
          }
          *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 1;
          ar6_00 = ar4;
        case 0x1:
          pcVar3 = ar6_00;
          iVar5 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c057164(ar4,ar5,pcVar3,ar7_00));
          if (iVar5 == 0) {
            *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 1;
          }
          break;
        case 0x2:
          (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x70)),5,ar6_00,ar7_00));
          uVar4 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(fr0_ - 0x70)),ar6_00,ar7_00));
          *(undefined4 *)(unsigned)(ar4 + 0x27c) = uVar4;
          uVar4 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_00,ar7_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,ar6_00,ar7_00); });
          ar6_00 = ((void *)0x8c022ce8);
          (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x90)),uVar4,((void *)0x8c022ce8),ar7_00));
          (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x80)),((undefined1 *)(fr0_ - 0x90)),ar6_00,ar7_00));
          if (cVar14 == '\0') {
            *(int *)(unsigned)(ar4 + 0x224) = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x224) = in_dr0;
          }
          (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6_00,ar7_00));
          uVar4 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6_00,ar7_00));
          if (cVar14 == '\0') {
            fVar9 = *(float *)(unsigned)(ar4 + 0x224);
            fVar12 = 30.0;
          }
          else {
            fVar9 = 30.0;
            fVar12 = -1.0;
          }
          if (cVar13 == '\0' && fVar9 < fVar12) {
            ar7_01 = 0;
            uVar7 = 0xffffffff;
            uVar4 = 0x1a;
            (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
            (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar7,ar7_01));
            *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 3;
            *(undefined4 *)(unsigned)(ar4 + 0x27c) = 0;
            pcVar3 = (code *)0x28c;
            ar7_00 = ar4;
            break;
          }
          if (cVar14 == '\0') {
            fVar9 = *(float *)(unsigned)(ar4 + 0x224);
            fVar12 = 70.0;
          }
          else {
            fVar9 = 70.0;
            fVar12 = -1.0;
          }
          if (cVar13 == '\0' && fVar9 < fVar12) {
            ar7_00 = (code *)0x0;
            pcVar3 = (code *)0xffffffff;
            uVar4 = 0x1a;
            (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
            (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,pcVar3,ar7_00));
            *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 3;
            break;
          }
          if (*(int *)(unsigned)(ar4 + 0x27c) == 3) {
            (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c032ab0(ar4,uVar4,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c032ab0(ar4,uVar4,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xc0)),uVar4,ar6_00,ar7_00));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd0))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0xc0)),ar6_00,ar7_00); });
            ar6_00 = (code *)((undefined1 *)(fr0_ - 0xd0));
            (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c057b6c(ar4,ar5,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,ar6_00,ar7_00));
            uVar4 = 0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,ar6_00,ar7_00));
          }
          else if (*(int *)(unsigned)(ar4 + 0x27c) == 4) {
            (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c032ab0(ar4,uVar4,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c032ab0(ar4,uVar4,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xa0)),uVar4,ar6_00,ar7_00));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0xa0)),ar6_00,ar7_00); });
            ar6_00 = (code *)((undefined1 *)(fr0_ - 0xb0));
            (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c057b6c(ar4,ar5,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6_00,ar7_00));
            uVar4 = 0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar6_00,ar7_00));
          }
          (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7_00));
          *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 1;
        case 0x3:
          iVar5 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c057e58(ar4,uVar4,ar6_00,ar7_00));
          pcVar3 = ar6_00;
          if (iVar5 == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x28c) = 1;
          }
          break;
        case 0x4:
          iVar5 = (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,5,ar6_00,ar7_00));
          pcVar3 = ar6_00;
          if (iVar5 == 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
            uVar8 = 0;
          }
          break;
        case 0x5:
          *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
          uVar8 = 0;
          pcVar3 = ar6_00;
        }
      }
      goto switchD_8c0527a4_default;
    }
    if (ar6 != (code *)0x2) goto switchD_8c0527a4_default;
  }
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe0))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); Vec3_scale(ar4 + 0x14,((undefined1 *)(unsigned)0x8c1365a4),pcVar3,ar7_00); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf0))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0xe0)),pcVar3,ar7_00); });
  pcVar3 = ar5;
  (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0xf0)),ar5,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,pcVar3,ar7_00));
  iVar5 = -1;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,pcVar3,ar7_00));
  if (cVar14 == '\0') {
    dVar10 = CONCAT44D(0x3f7d70a4,*(undefined4 *)(unsigned)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
    dVar10 = 1.38406752724369e-311;
  }
  if (cVar13 == '\0') {
    fVar9 = F32HI(dVar10);
    dVar10 = CONCAT44D(fVar9,F32LO(dVar10) * fVar9);
  }
  else {
    dVar10 = dVar10 * dVar10;
  }
  if (cVar14 == '\0') {
    *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar10,0);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
  }
  iVar2 = *(int *)(unsigned)(ar4 + 0x28c);
  if (iVar2 == 0) {
    iVar5 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c05c28c(ar4,iVar5,pcVar3,ar7_00));
    if (iVar5 == 0) {
      *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 1;
    }
    goto switchD_8c0527a4_default;
  }
  if (iVar2 == 1) {
    (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x100)),iVar5,pcVar3,ar7_00));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(fr0_ - 0x100)),pcVar3,ar7_00));
    *(undefined4 *)(unsigned)(ar4 + 0x27c) = uVar4;
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x100)),0xffffffff,pcVar3,ar7_00));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x110))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,pcVar3,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x120)),uVar4,pcVar3,ar7_00));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x130))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x120)),uVar4,pcVar3,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x110)),((undefined1 *)(fr0_ - 0x130)),pcVar3,ar7_00));
    if (cVar14 == '\0') {
      *(int *)(unsigned)(ar4 + 0x224) = (int)(D2U(dVar10) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x224) = dVar10;
    }
    (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x130)),0xffffffff,pcVar3,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x120)),0xffffffff,pcVar3,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x110)),0xffffffff,pcVar3,ar7_00));
    if (cVar14 == '\0') {
      uVar11 = CONCAT44(0x420c0000,*(undefined4 *)(unsigned)(ar4 + 0x224));
    }
    else {
      uVar11 = 0x28c420c0000;
    }
    if (cVar13 == '\0' && (float)uVar11 < (float)(uVar11 >> 0x20)) {
      *(undefined4 *)(unsigned)(ar4 + 0x27c) = 0;
      uVar8 = 0;
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar11 & 0xffffffff;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
      goto switchD_8c0527a4_default;
    }
    if (cVar14 == '\0') {
      uVar11 = CONCAT44(0x425c0000,*(undefined4 *)(unsigned)(ar4 + 0x224));
    }
    else {
      uVar11 = 0x28c425c0000;
    }
    fVar9 = (float)uVar11;
    if (cVar13 == '\0' && fVar9 < (float)(uVar11 >> 0x20)) {
      uVar8 = 0;
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar11 & 0xffffffff;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
      goto switchD_8c0527a4_default;
    }
    if (cVar14 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x224) = 0x42340000;
    }
    else {
      fVar9 = 45.0;
      *(undefined8 *)(unsigned)(ar4 + 0x224) = 0x27c42340000;
    }
    if (*(int *)(unsigned)(ar4 + 0x27c) == 3) {
      ar7_00 = (code *)0x0;
      pcVar3 = (code *)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0));
    }
    else if (*(int *)(unsigned)(ar4 + 0x27c) == 4) {
      ar7_00 = (code *)0x0;
      pcVar3 = (code *)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
    (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,pcVar3,ar7_00));
    if (cVar14 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)(uint)fVar9;
    }
    pcVar3 = (code *)0x28c;
    iVar5 = *(int *)(unsigned)(ar4 + 0x28c);
    *(int *)(unsigned)(ar4 + 0x28c) = iVar5 + 1;
  }
  else if (iVar2 != 2) {
    if (iVar2 == 3) {
      uVar8 = 0;
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = D2U(dVar10) & 0xffffffff;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
      pcVar3 = (code *)0x0;
      ar7_00 = (code *)0x28c;
    }
    goto switchD_8c0527a4_default;
  }
  (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c05ae54(ar4,iVar5,pcVar3,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x140)),iVar5,pcVar3,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x140)),((undefined1 *)(unsigned)0x8c1365a8),pcVar3,ar7_00); });
  puVar6 = ((undefined1 *)(fr0_ - 0x150));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x160))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); Vec3_add(ar5,puVar6,pcVar3,ar7_00); });
  uVar4 = (vsp = ((unsigned long)(fr0_ - 388)), get_field_1c_026dd8(ar4 + 0xb0,puVar6,pcVar3,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 388)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar4,pcVar3,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x16c)),ar4 + 0x224,pcVar3,ar7_00));
  pcVar3 = ar4 + 0x14;
  puVar6 = ((undefined1 *)(fr0_ - 0x160));
  ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x180)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c031eb0(ar4,ar5,puVar6,pcVar3); });
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_assign(ar4 + 0x14,(int)&(*(undefined8 *)(fr0_ - 0x180)) + 4,puVar6,pcVar3));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x180)) + 4,0xffffffff,puVar6,pcVar3));
  (vsp = ((unsigned long)(fr0_ - 388)), object_dtor_delete(((undefined1 *)(fr0_ - 0x16c)),0xffffffff,puVar6,pcVar3));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x160)),0xffffffff,puVar6,pcVar3));
  uVar7 = 0xffffffff;
  puVar6 = ((undefined1 *)(fr0_ - 0x150));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(puVar6,0xffffffff,puVar6,0xffffffff));
  uVar4 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x140)),0xffffffff,puVar6,uVar7));
  pcVar3 = (code *)(vsp = ((unsigned long)(fr0_ - 388)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,puVar6,uVar7));
  ar7_00 = pcVar3;
  if (pcVar3 == (code *)0x1) {
    *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + -1;
  }
switchD_8c0527a4_default:
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,pcVar3,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,pcVar3,ar7_00));
  return uVar8;
}

__asm__(".globl _FUN_8c0526a0\n.set _FUN_8c0526a0, _FUN_8c0526a0_def\n");
//@unit 8c0530e0
#include "../decls.h"
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
//@unit 8c053724
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c053724_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c053724";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(0x80 + ar4);
}

__asm__(".globl _FUN_8c053724\n.set _FUN_8c053724, _FUN_8c053724_def\n");
//@unit 8c053730
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c053730_def(int ar4,int *ar5,undefined4 ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c053730";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 304; for (int i_ = 0; i_ < 304; i_++) z_[i_] = 0; }
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  code *ar5_00;
  undefined4 uVar4;
  undefined *ar5_01;
  undefined1 *puVar5;
  undefined1 *ar7_00;
  undefined4 uVar6;
  double dVar7;
  float fVar9;
  undefined8 uVar8;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined4 ain0;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar6 = 1;
  ar5_00 = ((void *)0x8c022c4c);
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),((void *)0x8c022c4c),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c031748(ar4,ar5_00,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c022d04(ar4 + 0x90,ar5_00,ar6,ar7_00));
  puVar5 = ((undefined1 *)(fr0_ - 0x38));
  ({ unsigned long t0_ = (unsigned long)(puVar5); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); Vec3_scale(ar4 + 0x14,((undefined1 *)(unsigned)0x8c1365ac),puVar5,ar7_00); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); Vec3_add(ar7,((undefined1 *)(fr0_ - 0x38)),puVar5,ar7_00); });
  puVar5 = ar7;
  (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x48)),ar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,puVar5,ar7_00));
  uVar4 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,puVar5,ar7_00));
  if (cVar12 == '\0') {
    dVar7 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
    dVar7 = 52776566443212.8;
  }
  if (cVar11 == '\0') {
    fVar9 = F32HI(dVar7);
    dVar7 = CONCAT44D(fVar9,F32LO(dVar7) * fVar9);
  }
  else {
    dVar7 = dVar7 * dVar7;
  }
  if (cVar12 == '\0') {
    *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar7,0);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
  }
  (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c05ae54(ar4,uVar4,puVar5,ar7_00));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c053724(ar5,uVar4,puVar5,ar7_00));
  ain0 = CONCAT31((int3)((uint)(*(undefined4 *)(fr0_ - 0x12c)) >> 8),(char)uVar2);
  if ((char)uVar2 == '\0') {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 304)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x34))))(ar5,uVar4,puVar5,ar7_00));
    if (iVar3 != 0) {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 304)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x34))))(ar5,uVar4,puVar5,ar7_00));
      uVar2 = (undefined4)(D2U(dVar7) >> 0x20);
      *(undefined4 *)(unsigned)(ar4 + 0x348) = uVar4;
      ar5_01 = ((undefined1 *)(unsigned)0x8c125d48);
      (vsp = ((unsigned long)(fr0_ - 304)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(unsigned)0x8c125d48),puVar5,ar7_00));
      if (*(int *)(unsigned)(ar4 + 0x348) == 3) {
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x58)),ar5_01,puVar5,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x58)),puVar5,ar7_00));
        ar5_01 = (undefined *)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,puVar5,ar7_00));
      }
      else if (*(int *)(unsigned)(ar4 + 0x348) == 4) {
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x68)),ar5_01,puVar5,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x68)),puVar5,ar7_00));
        ar5_01 = (undefined *)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,puVar5,ar7_00));
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x348) = 0;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_01,puVar5,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x78)),((undefined1 *)(fr0_ - 0x28)),puVar5,ar7_00));
      if (cVar12 == '\0') {
        dVar7 = CONCAT44D(0x41200000,uVar2);
      }
      else {
        dVar7 = -7.932637925129825e-251;
      }
      bVar10 = cVar11 == '\0';
      fVar9 = F32LO(dVar7);
      uVar1 = D2U(dVar7) >> 0x20;
      (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,puVar5,ar7_00));
      if (bVar10 && fVar9 < (float)uVar1) {
        *(undefined4 *)(unsigned)(ar4 + 0x348) = 0;
      }
      uVar4 = 0;
      (vsp = ((unsigned long)(fr0_ - 304)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x38))))(ar5,0,puVar5,ar7_00));
      if ((*(int *)(unsigned)(ar4 + 0x348) != *(int *)(unsigned)(ar4 + 0x344)) && (*(int *)(unsigned)(ar4 + 0x344) == 0)) {
        *(undefined4 *)(unsigned)(ar4 + 0x344) = *(undefined4 *)(unsigned)(ar4 + 0x348);
        *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
    }
    iVar3 = *(int *)(unsigned)(ar4 + 0x344);
    if (iVar3 == 0) {
      iVar3 = *(int *)(unsigned)(ar4 + 300);
      if (iVar3 == 0) {
        (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,puVar5,ar7_00));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      else if (iVar3 != 1) {
        if (iVar3 == 2) {
          ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 304)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,puVar5,ar7_00); });
          if (cVar12 == '\0') {
            uVar8 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x24c),(int)(D2U(dVar7) >> 0x20));
          }
          else {
            uVar8 = *(undefined8 *)(unsigned)(ar4 + 0x24c);
          }
          if (cVar11 != '\0' || F32HI(uVar8) <= (float)uVar8) {
            iVar3 = (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,uVar4,puVar5,ar7_00));
            if (iVar3 == 7) {
              (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00));
              if (cVar12 == '\0') {
                *(int *)(unsigned)(ar4 + 0x248) = (int)((ulonglong)uVar8 >> 0x20);
              }
              else {
                *(undefined8 *)(unsigned)(ar4 + 0x248) = uVar8;
              }
              *(undefined4 *)(unsigned)(ar4 + 300) = 1;
            }
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar4,puVar5,ar7_00));
          }
        }
        goto LAB_8c053eda;
      }
      iVar3 = *(int *)(unsigned)(ar4 + 0x27c);
      if (iVar3 == 0) {
        ar7_00 = (undefined1 *)(unsigned)0x0;
        puVar5 = (undefined1 *)(unsigned)0xffffffff;
        uVar4 = 0;
        (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      }
      else if (iVar3 == 3) {
        ar7_00 = (undefined1 *)(unsigned)0x0;
        puVar5 = (undefined1 *)(unsigned)0xffffffff;
        uVar4 = 0xb;
        (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xb,0xffffffff,0));
      }
      else if (iVar3 == 4) {
        ar7_00 = (undefined1 *)(unsigned)0x0;
        puVar5 = (undefined1 *)(unsigned)0xffffffff;
        uVar4 = 0xc;
        (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xc,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c022d04(ar4 + 0x248,uVar4,puVar5,ar7_00));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
      (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00));
      if (cVar12 == '\0') {
        *(int *)(unsigned)(ar4 + 0x248) = (int)(D2U(dVar7) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x248) = dVar7;
      }
    }
    else if ((iVar3 == 3) || (iVar3 == 4)) {
      iVar3 = *(int *)(unsigned)(ar4 + 300);
      if (iVar3 == 0) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 304)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,puVar5,ar7_00));
        if (iVar3 == 1) {
          if (*(int *)(unsigned)(ar4 + 0x344) == 3) {
            (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 304)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x88)),uVar4,puVar5,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 304)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x88)),puVar5,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,puVar5,ar7_00));
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 304)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x98)),uVar4,puVar5,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 304)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x98)),puVar5,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,puVar5,ar7_00));
          }
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
      }
      else if (iVar3 == 1) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa8))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,puVar5,ar7_00); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb8))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); FUN_8c0230f0(ar4 + 0x54,uVar4,puVar5,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xa8)),((undefined1 *)(fr0_ - 0xb8)),puVar5,ar7_00));
        if (cVar12 == '\0') {
          in_fr15 = F32HI(dVar7);
        }
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,puVar5,ar7_00));
        uVar2 = SUB84(dVar7,0);
        uVar4 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,puVar5,ar7_00));
        if (cVar12 == '\0') {
          dVar7 = CONCAT44D(0x41200000,uVar2);
        }
        else {
          dVar7 = 6.37138561414139e-312;
        }
        if (cVar11 == '\0') {
          bVar10 = F32HI(dVar7) < in_fr15;
        }
        else {
          bVar10 = dVar7 < CONCAT44D(in_fr14,in_fr15);
        }
        if (bVar10) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          *(undefined4 *)(unsigned)(ar4 + 0x298) = 1;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          if (*(int *)(unsigned)(ar4 + 0x344) == 3) {
            *(undefined4 *)(unsigned)(ar4 + 0x27c) = 4;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 0x27c) = 3;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x344) = 0;
        }
        (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,puVar5,ar7_00));
      }
      else if (iVar3 == 2) {
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0xc8)),ar4 + 0x54,puVar5,ar7_00));
        ar7_00 = ((undefined1 *)(fr0_ - 0xc8));
        iVar3 = (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c04e2d0(ar4,ar7,ar7,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar7,ar7_00));
        puVar5 = ar7;
        if (iVar3 == 0) {
          puVar5 = (undefined1 *)(unsigned)0x12c;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + -1;
        }
      }
    }
  }
  else {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 304)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,((void *)0x8c026858),puVar5,ar7_00));
    if (iVar3 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      uVar6 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
    }
  }
LAB_8c053eda:
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,puVar5,ar7_00));
  return uVar6;
}

__asm__(".globl _FUN_8c053730\n.set _FUN_8c053730, _FUN_8c053730_def\n");
//@unit 8c053f24
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c053f24_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c053f24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 396; for (int i_ = 0; i_ < 396; i_++) z_[i_] = 0; }
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *ar5_00;
  undefined4 uVar6;
  code *ar5_01;
  code *ar6_00;
  undefined4 *ar7_00;
  undefined4 uVar7;
  float fVar8;
  undefined8 in_dr0 = 0;
  undefined8 uVar9;
  double dVar10;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  bool bVar11;
  char cVar12;
  char cVar13;
  undefined4 ain0;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar7 = 1;
  ar7_00 = ((undefined4 *)(fr0_ - 0x44));
  ar6_00 = (code *)((undefined4 *)(unsigned)0x8c1365b0);
  ((undefined4 *)(fr0_ - 0x44))[0] = (*(undefined4 *)(unsigned)(unsigned)0x8c1365b0);
  ((undefined4 *)(fr0_ - 0x44))[1] = (*(undefined1 *)(unsigned)0x8c1365b4);
  ((undefined4 *)(fr0_ - 0x44))[2] = (*(undefined1 *)(unsigned)0x8c1365b8);
  ((undefined4 *)(fr0_ - 0x44))[3] = (*(undefined1 *)(unsigned)0x8c1365bc);
  (*(undefined4 *)(fr0_ - 0x34)) = (*(undefined1 *)(unsigned)0x8c1365c0);
  (*(undefined4 *)(fr0_ - 0x30)) = (*(undefined1 *)(unsigned)0x8c1365c4);
  (*(undefined4 *)(fr0_ - 0x2c)) = (*(undefined1 *)(unsigned)0x8c1365c8);
  (*(undefined4 *)(fr0_ - 0x28)) = (*(undefined1 *)(unsigned)0x8c1365cc);
  (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined1 *)(unsigned)0x8c1365d0);
  uVar6 = (*(undefined1 *)(unsigned)0x8c1365cc);
  (vsp = ((unsigned long)(fr0_ - 396)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x54)),(*(undefined1 *)(unsigned)0x8c1365cc),((undefined4 *)(unsigned)0x8c1365b0),ar7_00));
  (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c022d04(ar4 + 0x90,uVar6,ar6_00,ar7_00));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c053724(ar5,uVar6,ar6_00,ar7_00));
  ain0 = CONCAT31((int3)((uint)(*(undefined4 *)(fr0_ - 0x188)) >> 8),(char)uVar2);
  if ((char)uVar2 == '\0') {
    iVar5 = (vsp = ((unsigned long)(fr0_ - 396)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x34))))(ar5,uVar6,ar6_00,ar7_00));
    if (iVar5 != 0) {
      uVar6 = (vsp = ((unsigned long)(fr0_ - 396)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x34))))(ar5,uVar6,ar6_00,ar7_00));
      uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      *(undefined4 *)(unsigned)(ar4 + 0x348) = uVar6;
      ar5_00 = ((undefined1 *)(unsigned)0x8c125d48);
      (vsp = ((unsigned long)(fr0_ - 396)), Vec3_assign(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c125d48),ar6_00,ar7_00));
      if (*(int *)(unsigned)(ar4 + 0x348) == 3) {
        (vsp = ((unsigned long)(fr0_ - 396)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x64)),((void *)0x8c022ce8),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 396)), Vec3_assign(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x64)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7_00));
      }
      else if (*(int *)(unsigned)(ar4 + 0x348) == 4) {
        (vsp = ((unsigned long)(fr0_ - 396)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x74)),ar5_00,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 396)), Vec3_assign(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7_00));
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x348) = 0;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c0230f0(ar4 + 0x14,((void *)0x8c0230f0),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x84)),((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7_00));
      if (cVar13 == '\0') {
        in_dr0 = CONCAT44(0x41200000,uVar2);
      }
      else {
        in_dr0 = 0x8841200000;
      }
      bVar11 = cVar12 == '\0';
      fVar8 = (float)in_dr0;
      uVar1 = (ulonglong)in_dr0 >> 0x20;
      (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7_00));
      if (bVar11 && fVar8 < (float)uVar1) {
        *(undefined4 *)(unsigned)(ar4 + 0x348) = 0;
      }
      uVar6 = 0;
      (vsp = ((unsigned long)(fr0_ - 396)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x38))))(ar5,0,ar6_00,ar7_00));
      if ((*(int *)(unsigned)(ar4 + 0x348) != *(int *)(unsigned)(ar4 + 0x344)) && (*(int *)(unsigned)(ar4 + 0x344) == 0)) {
        *(undefined4 *)(unsigned)(ar4 + 0x344) = *(undefined4 *)(unsigned)(ar4 + 0x348);
        uVar6 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
    }
    if (*(int *)(unsigned)(ar4 + 0x324) == 1) {
      uVar6 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x344) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x27c) = 3;
    }
    iVar5 = *(int *)(unsigned)(ar4 + 0x344);
    if (iVar5 == 0) {
      iVar5 = *(int *)(unsigned)(ar4 + 300);
      if ((iVar5 < 5) && (-1 < iVar5)) {
                    
        switch(iVar5) {
        case 0:
          (vsp = ((unsigned long)(fr0_ - 396)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar5,ar6_00,ar7_00));
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        case 1:
          if (*(int *)(unsigned)(ar4 + 0x324) == 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x27c) = 3;
          }
          ar6_00 = (code *)0x64;
          iVar5 = 0;
          iVar4 = (vsp = ((unsigned long)(fr0_ - 396)), rand_range(ar4,0,100,ar7_00));
          if (iVar4 < 0x33) {
            iVar4 = 0;
          }
          else {
            ar6_00 = (code *)0x9;
            uVar6 = 1;
            iVar4 = (vsp = ((unsigned long)(fr0_ - 396)), rand_range(ar4,1,9,ar7_00));
            uVar6 = (vsp = ((unsigned long)(fr0_ - 396)), get_field_94_02aaa4(ar5,uVar6,ar6_00,ar7_00));
            iVar5 = 5;
            iVar3 = (vsp = ((unsigned long)(fr0_ - 396)), libgcc_divide_helper_0101e4(uVar6,5,ar6_00,ar7_00));
            if (iVar3 == 1) {
              iVar4 = 7;
            }
            else if (iVar3 == 4) {
              iVar4 = 7;
            }
          }
          if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
            (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c022d04(ar4 + 0x248,iVar5,ar6_00,ar7_00));
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c022d04(ar4 + 0x248,iVar5,ar6_00,ar7_00));
          }
          iVar3 = *(int *)(unsigned)(ar4 + 0x27c);
          if (iVar3 == 0) {
            ar7_00 = (undefined4 *)(unsigned)0x0;
            ar6_00 = (code *)0xffffffff;
            iVar5 = iVar4 + 0x38;
            (vsp = ((unsigned long)(fr0_ - 396)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar5,0xffffffff,0));
          }
          else if (iVar3 == 3) {
            ar7_00 = (undefined4 *)(unsigned)0x0;
            ar6_00 = (code *)0xffffffff;
            iVar5 = iVar4 + 0x26;
            (vsp = ((unsigned long)(fr0_ - 396)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar5,0xffffffff,0));
          }
          else if (iVar3 == 4) {
            ar7_00 = (undefined4 *)(unsigned)0x0;
            ar6_00 = (code *)0xffffffff;
            iVar5 = iVar4 + 0x2f;
            (vsp = ((unsigned long)(fr0_ - 396)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar5,0xffffffff,0));
          }
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
          *(undefined4 *)(unsigned)(ar4 + 0x280) = ((undefined4 *)(fr0_ - 0x44))[iVar4];
          (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c032ab0(ar4,iVar5,ar6_00,ar7_00));
          if (cVar13 == '\0') {
            *(int *)(unsigned)(ar4 + 0x248) = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x248) = in_dr0;
          }
        case 2:
          uVar6 = (undefined4)((ulonglong)in_dr0 >> 0x20);
          ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 396)); CAnimBody_GetCurFrame(ar4 + 0xb0,iVar5,ar6_00,ar7_00); });
          if (cVar13 == '\0') {
            uVar9 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x24c),uVar6);
          }
          else {
            uVar9 = *(undefined8 *)(unsigned)(ar4 + 0x24c);
          }
          if (cVar12 != '\0' || F32HI(uVar9) <= (float)uVar9) {
            if (*(int *)(unsigned)(ar4 + 0x324) == 0) {
              iVar4 = (vsp = ((unsigned long)(fr0_ - 396)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,iVar5,ar6_00,ar7_00));
              if (iVar4 == 7) {
                (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c032ab0(ar4,iVar5,ar6_00,ar7_00));
                if (cVar13 == '\0') {
                  *(int *)(unsigned)(ar4 + 0x248) = (int)((ulonglong)uVar9 >> 0x20);
                }
                else {
                  *(undefined8 *)(unsigned)(ar4 + 0x248) = uVar9;
                }
                iVar5 = *(int *)(unsigned)(ar4 + 0x280) + -1;
                *(int *)(unsigned)(ar4 + 0x280) = iVar5;
                if (iVar5 < 0) {
                  ar6_00 = (code *)0x64;
                  iVar5 = (vsp = ((unsigned long)(fr0_ - 396)), rand_range(ar4,0,100,ar7_00));
                  if (iVar5 < 5) {
                    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
                  }
                  else {
                    *(undefined4 *)(unsigned)(ar4 + 300) = 1;
                  }
                  *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
                }
              }
            }
            else {
              iVar5 = (vsp = ((unsigned long)(fr0_ - 396)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar5,ar6_00,ar7_00));
              if (iVar5 == 1) {
                *(undefined4 *)(unsigned)(ar4 + 300) = 0;
                (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7_00));
                return 0;
              }
            }
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 396)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar5,ar6_00,ar7_00));
          }
          break;
        case 3:
          iVar5 = (vsp = ((unsigned long)(fr0_ - 396)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar5,ar6_00,ar7_00));
          if (iVar5 == 1) {
            ar7_00 = (undefined4 *)(unsigned)0x0;
            ar6_00 = (code *)0xffffffff;
            uVar6 = 2;
            (vsp = ((unsigned long)(fr0_ - 396)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
            (vsp = ((unsigned long)(fr0_ - 396)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar6,ar6_00,ar7_00));
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          }
          break;
        case 4:
          iVar5 = (vsp = ((unsigned long)(fr0_ - 396)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar5,ar6_00,ar7_00));
          if (iVar5 == 1) {
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          }
        }
      }
    }
    else if ((iVar5 == 3) || (iVar5 == 4)) {
      iVar5 = *(int *)(unsigned)(ar4 + 300);
      if (iVar5 == 0) {
        iVar5 = (vsp = ((unsigned long)(fr0_ - 396)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar6,ar6_00,ar7_00));
        if (iVar5 == 1) {
          iVar5 = *(int *)(unsigned)(ar4 + 0x344);
          if (iVar5 == 3) {
            (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c032ab0(ar4,3,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c032ab0(ar4,iVar5,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 396)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x94)),iVar5,ar6_00,ar7_00));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); Vec3_add(ar7,((undefined1 *)(fr0_ - 0x94)),ar6_00,ar7_00); });
            (vsp = ((unsigned long)(fr0_ - 396)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0xa4)),ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_00,ar7_00));
          }
          else {
            ar5_01 = ((void *)0x8c032ab0);
            (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c032ab0(ar4,((void *)0x8c032ab0),ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c032ab0(ar4,ar5_01,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 396)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xb4)),((void *)0x8c022ce8),ar6_00,ar7_00));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc4))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); Vec3_add(ar7,((undefined1 *)(fr0_ - 0xb4)),ar6_00,ar7_00); });
            (vsp = ((unsigned long)(fr0_ - 396)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0xc4)),ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc4)),0xffffffff,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_00,ar7_00));
          }
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
      }
      else if (iVar5 == 1) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd4))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar6,ar6_00,ar7_00); });
        uVar6 = ar7;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe4))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); Vec3_sub(ar4 + 0x54,ar7,ar6_00,ar7_00); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf4))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0xe4)),uVar6,ar6_00,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xd4)),((undefined1 *)(fr0_ - 0xf4)),ar6_00,ar7_00));
        if (cVar13 == '\0') {
          in_fr15 = F32HI(in_dr0);
        }
        (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,ar6_00,ar7_00));
        uVar2 = (undefined4)in_dr0;
        (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,ar6_00,ar7_00));
        uVar6 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd4)),0xffffffff,ar6_00,ar7_00));
        if (cVar13 == '\0') {
          dVar10 = CONCAT44D(0x41200000,uVar2);
        }
        else {
          dVar10 = -9.376284372703036e-251;
        }
        if (cVar12 == '\0') {
          bVar11 = F32HI(dVar10) < in_fr15;
        }
        else {
          bVar11 = dVar10 < CONCAT44D(in_fr14,in_fr15);
        }
        if (bVar11) {
          ar6_00 = (code *)(ar4 + 0x54);
          (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c057b6c(ar4,ar7,ar6_00,ar7_00));
          uVar6 = 300;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          if (*(int *)(unsigned)(ar4 + 0x344) == 3) {
            *(undefined4 *)(unsigned)(ar4 + 0x27c) = 4;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 0x27c) = 3;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x344) = 0;
        }
        (vsp = ((unsigned long)(fr0_ - 396)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar6,ar6_00,ar7_00));
      }
      else if (iVar5 == 2) {
        ar6_00 = ((void *)0x8c057e58);
        iVar5 = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c057e58(ar4,uVar6,((void *)0x8c057e58),ar7_00));
        if (iVar5 == 0) {
          ar6_00 = (code *)0x12c;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + -1;
        }
      }
    }
  }
  else {
    iVar5 = (vsp = ((unsigned long)(fr0_ - 396)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar6,ar6_00,ar7_00));
    if (iVar5 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      uVar7 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7_00));
  return uVar7;
}

__asm__(".globl _FUN_8c053f24\n.set _FUN_8c053f24, _FUN_8c053f24_def\n");
//@unit 8c054a14
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c054a14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c054a14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double in_dr0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar3 = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x2f0) = 0xffffffff;
  if (*(int *)(unsigned)(ar4 + 300) == 0) {
    ar7 = 0;
    ar6 = 0xffffffff;
    uVar2 = 0x4e;
    (vsp = ((unsigned long)(fr0_ - 24)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x4e,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 24)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else {
    uVar2 = ar5;
    if (*(int *)(unsigned)(ar4 + 300) != 1) {
      return 1;
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c030eb8(ar4 + 0x1fc,uVar2,ar6,ar7));
    uVar3 = 0;
    *(undefined4 *)(unsigned)(ar4 + 300) = 0;
  }
  else {
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6,ar7); });
    (*(undefined8 *)(fr0_ - 0x14)) = in_dr0;
    if (cVar6 == '\0') {
      (*(undefined8 *)(fr0_ - 0x14)) = CONCAT44D(iVar1,(int)((ulonglong)in_dr0 >> 0x20));
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x4e,ar6,ar7));
    uVar4 = SUB84(in_dr0,0);
    uVar2 = (vsp = ((unsigned long)(fr0_ - 24)), libgcc_divide_helper_0101e4(iVar1 + -1,6,ar6,ar7));
    if (cVar6 == '\0') {
      (*(undefined8 *)(fr0_ - 0x14)) = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x14)),uVar4);
    }
    if (cVar5 == '\0') {
      iVar1 = (int)F32HI((*(undefined8 *)(fr0_ - 0x14)));
    }
    else {
      iVar1 = (int)(*(undefined8 *)(fr0_ - 0x14));
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), libgcc_divide_helper_01031c(iVar1,uVar2,ar6,ar7));
    if (iVar1 == 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 24)), rand_range(ar4,0x19,0x1b,ar7));
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c033474(ar4,uVar2,ar5,*(undefined4 *)(unsigned)(ar4 + 0x244)));
      iVar1 = *(int *)(unsigned)(ar4 + 0x280);
      *(int *)(unsigned)(ar4 + 0x280) = iVar1 + 1;
      *(int *)(unsigned)(ar4 + 0x2f0) = iVar1;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c054a14\n.set _FUN_8c054a14, _FUN_8c054a14_def\n");
//@unit 8c054b74
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c054b74_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c054b74";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 in_fr1 = 0;
  double dVar3;
  undefined8 in_dr14 = 0;
  double dVar4;
  bool bVar5;
  char cVar6;
  
  cVar6 = '\0';
  dVar3 = CONCAT44D(0x40200000,in_fr1);
  dVar4 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),*(float *)(unsigned)(ar4 + 0x48) * 2.5);
  if (*(int *)(unsigned)(ar4 + 0x31c) != 0) {
    return 0;
  }
  while( true ) {
    iVar1 = *(int *)(unsigned)(ar4 + 300);
    if (4 < iVar1) {
      return 1;
    }
    if (iVar1 < 0) break;
                    
    switch(iVar1) {
    case 0:
      if (ar7 == 1) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      else {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 2;
      }
      break;
    case 1:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c057164(ar4,ar5,ar6,ar7));
      if (iVar1 != 0) {
        return 1;
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 2;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      return 1;
    case 2:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c055c38(ar4,ar5,ar4 + 0x34c,ar7));
      if (iVar1 != 0) {
        return 1;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      return 1;
    case 3:
      uVar2 = ar6;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c04c314(ar4,ar5,ar6,ar7));
      if (iVar1 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 300) = 4;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022fc0(ar5,ar6,uVar2,ar7));
        if (cVar6 == '\0') {
          bVar5 = F32HI(dVar3) < SUB84(dVar4,0);
        }
        else {
          bVar5 = dVar3 < dVar4;
        }
        if ((bVar5) && (*(int *)(unsigned)(ar4 + 0x304) == 1)) {
          *(undefined4 *)(unsigned)(ar4 + 300) = 4;
        }
      }
      if (*(int *)(unsigned)(ar4 + 0x21c) != 1) {
        return 1;
      }
      *(undefined4 *)(unsigned)(ar4 + 300) = 4;
      return 1;
    case 4:
      uVar2 = ar6;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c057164(ar4,ar5,ar6,ar7));
      if (iVar1 != 0) {
        return 1;
      }
      (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign(ar4 + 600,ar6,uVar2,ar7));
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c054b74\n.set _FUN_8c054b74, _FUN_8c054b74_def\n");
//@unit 8c054d6c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c054d6c_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c054d6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int ar6_00;
  int ar7_00;
  undefined4 uVar3;
  undefined4 in_fr1 = 0;
  double dVar4;
  double in_dr14 = 0;
  bool bVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  iVar2 = ar6;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x2c)),ar6,ar6,ar7));
  if (cVar7 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x48));
    dVar4 = CONCAT44D(0x40200000,in_fr1);
  }
  else {
    dVar4 = 6.3713027236808e-312;
  }
  if (cVar6 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                               F32LO(in_dr14) * F32HI(dVar4));
  }
  else {
    in_dr14 = in_dr14 * dVar4;
  }
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    (vsp = ((unsigned long)(fr0_ - 48)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar2,ar6_00,ar7_00));
    if (*(int *)(unsigned)(ar4 + 0x128) < 3) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 2;
    }
    else if (ar7 == 1) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
    else {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 2;
    }
  }
  else if (iVar1 == 1) {
    ar6_00 = ar4 + 0x34c;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0564c4(ar4,ar5,ar6_00,ar7));
    if (iVar2 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
    ar7_00 = ar7;
    if ((*(int *)(unsigned)(ar4 + 0x2b8) == 2) && (*(int *)(unsigned)(ar4 + 0x21c) == 1)) {
      *(undefined4 *)(unsigned)(ar4 + 300) = 3;
    }
  }
  else if (iVar1 == 2) {
    ar6_00 = ar6;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), pure_virtual_stub(ar4,ar5,ar6,ar7_00));
    if (iVar2 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 300) = 3;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00));
      if (cVar6 == '\0') {
        bVar5 = F32HI(dVar4) < SUB84(in_dr14,0);
      }
      else {
        bVar5 = dVar4 < in_dr14;
      }
      if ((bVar5) && (*(int *)(unsigned)(ar4 + 0x304) == 1)) {
        *(undefined4 *)(unsigned)(ar4 + 300) = 3;
      }
    }
    if (*(int *)(unsigned)(ar4 + 0x21c) == 1) {
      *(undefined4 *)(unsigned)(ar4 + 300) = 3;
    }
  }
  else if (iVar1 == 3) {
    uVar3 = 0;
    *(undefined4 *)(unsigned)(ar4 + 300) = 0;
    (vsp = ((unsigned long)(fr0_ - 48)), Vec3_assign(ar4 + 600,ar6,ar6_00,ar7_00));
    *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7_00));
  return uVar3;
}

__asm__(".globl _FUN_8c054d6c\n.set _FUN_8c054d6c, _FUN_8c054d6c_def\n");
//@unit 8c054f7c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c054f7c_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c054f7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 184; for (int i_ = 0; i_ < 184; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *ar5_00;
  undefined4 uVar2;
  int ar6_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 in_dr0 = 0;
  ulonglong uVar5;
  double dVar6;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar3 = 1;
  uVar2 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 184)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  if (cVar8 == '\0') {
    in_fr15 = 1.5;
  }
  (vsp = ((unsigned long)(fr0_ - 184)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x38)),uVar2,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c102748(((undefined1 *)(fr0_ - 0x44)),uVar2,ar6_00,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    if (((*(int *)(fr0_ + 0x00000000)) == 0) || ((*(int *)(fr0_ + 0x00000000)) == 2)) {
      (vsp = ((unsigned long)(fr0_ - 184)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
      return 0;
    }
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c033474(ar4,7,ar5,*(undefined4 *)(unsigned)(ar4 + 0x244)));
    uVar4 = (undefined4)in_dr0;
    ar7 = 0;
    ar6_00 = -1;
    uVar2 = 5;
    (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_sub(ar6,ar5,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_normalize(((undefined1 *)(fr0_ - 0x54)),ar5,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x64)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
    ar5_00 = ((undefined1 *)(unsigned)0x8c1365d4);
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c023bf4(ar4 + 0x2a8,((undefined1 *)(unsigned)0x8c1365d4),ar6_00,ar7));
    if (cVar8 == '\0') {
      uVar5 = CONCAT44((*(undefined4 *)(fr0_ - 0x24)),uVar4);
      *(undefined4 *)(unsigned)(ar4 + 0x2ac) = (*(undefined4 *)(fr0_ - 0x24));
    }
    else {
      uVar5 = CONCAT44((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
      *(ulonglong *)(unsigned)(ar4 + 0x2ac) = uVar5;
    }
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c031748(ar4,ar5_00,ar6_00,ar7));
    if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0xa0) = uVar5 & 0xffffffff;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
    *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
    if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar5 & 0xffffffff;
    }
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x2d4,ar4 + 0x2a8,ar6_00,ar7));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else if (iVar1 == 1) {
    iVar1 = ar4 + 0x2d4;
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x2a8,iVar1,ar6_00,ar7));
    uVar2 = (undefined4)in_dr0;
    *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
    (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar1,ar6_00,ar7));
    if (cVar8 == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2ac),uVar2);
    }
    else {
      dVar6 = *(double *)(unsigned)(ar4 + 0x2ac);
    }
    if (cVar7 == '\0') {
      dVar6 = CONCAT44D(F32HI(dVar6) - in_fr15,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 - CONCAT44D(in_fr14,in_fr15);
    }
    if (cVar8 == '\0') {
      *(int *)(unsigned)(ar4 + 0x2ac) = (int)(D2U(dVar6) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x2ac) = dVar6;
    }
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_normalize(ar4 + 0x2a8,iVar1,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x2a8,ar6_00,ar7));
    if (((*(int *)(fr0_ + 0x00000000)) == 0) || ((*(int *)(fr0_ + 0x00000000)) == 2)) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c023bf4(ar4 + 0x2a8,((undefined1 *)(unsigned)0x8c1365d8),ar6_00,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x2d4,ar4 + 0x2a8,ar6_00,ar7));
  }
  else {
    if (iVar1 == 2) {
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c05ae54(ar4,uVar2,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_length_sq(ar4 + 0x2d4,uVar2,ar6_00,ar7));
      if (cVar8 == '\0') {
        *(int *)(unsigned)(ar4 + 0x28) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_dr0;
      }
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_normalize(ar4 + 0x2d4,uVar2,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x84)),ar6_00,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), vec3_clear(ar4 + 0x2d4,uVar2,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), vec3_clear(ar4 + 0x2a8,uVar2,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x48,ar6_00,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x94)),((undefined1 *)(unsigned)0x8c1365dc),ar6_00,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xa4)),ar5,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0xb4)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
    else if (iVar1 != 3) goto LAB_8c0553ee;
    ar6_00 = ar4 + 0x54;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 184)), pure_virtual_stub(ar4,ar5,ar6_00,ar7));
    if (iVar1 == 0) {
      uVar3 = 0;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
    }
  }
LAB_8c0553ee:
  (vsp = ((unsigned long)(fr0_ - 184)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c054f7c\n.set _FUN_8c054f7c, _FUN_8c054f7c_def\n");
//@unit 8c055490
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c055490_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c055490";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 136; for (int i_ = 0; i_ < 136; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  undefined4 uVar3;
  undefined4 *ar6_00;
  undefined4 uVar4;
  uint in_fr1 = 0;
  ulonglong uVar5;
  code *pcVar6;
  char cVar7;
  
  cVar7 = '\0';
  uVar4 = 1;
  uVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),uVar2,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 300) == 0) {
    uVar5 = (ulonglong)in_fr1;
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar5;
    }
    iVar1 = ar4 + 0x14;
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(((undefined1 *)(fr0_ - 0x30)),iVar1,ar6,ar7));
    uVar2 = (undefined4)uVar5;
    (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c022d04(ar4 + 0x14,iVar1,ar6,ar7));
    ar6_00 = ((undefined4 *)(unsigned)0x8c125bf0);
    if (cVar7 == '\0') {
      uVar5 = CONCAT44(0x40400000,uVar2);
    }
    else {
      uVar5 = 0x41a0000040400000;
    }
    (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c032518(ar4,ar5,((undefined4 *)(unsigned)0x8c125bf0),(*(undefined4 *)(fr0_ + 0x00000000))));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x40)),ar6_00,(*(undefined4 *)(fr0_ + 0x00000000))));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6_00,(*(undefined4 *)(fr0_ + 0x00000000))));
    ar5_00 = ((undefined1 *)(fr0_ - 0x30));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(ar4 + 0x14,ar5_00,ar6_00,(*(undefined4 *)(fr0_ + 0x00000000))));
    (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c032ab0(ar4,ar5_00,ar6_00,(*(undefined4 *)(fr0_ + 0x00000000))));
    iVar1 = ar4 + 0x54;
    (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c031bb4(ar4,ar5,iVar1,(*(undefined4 *)(fr0_ + 0x00000000))));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x90) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x90) = uVar5 & 0xffffffff;
    }
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x98) = 0;
      uVar2 = (undefined4)uVar5;
      pcVar6 = (code *)0x3f333333;
      *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f333333;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x98) = uVar5 & 0xffffffff;
      uVar2 = 0x3f333333;
      pcVar6 = ((void *)0x8c023ae0);
      *(undefined8 *)(unsigned)(ar4 + 0x278) = 0x8c023ae03f333333;
    }
    uVar3 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 136)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 136)) - 8); Vec3_sub(ar4 + 0x54,ar5,iVar1,(*(undefined4 *)(fr0_ + 0x00000000))); });
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_normalize(((undefined1 *)(fr0_ - 0x50)),uVar3,iVar1,(*(undefined4 *)(fr0_ + 0x00000000))));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_assign(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x60)),iVar1,(*(undefined4 *)(fr0_ + 0x00000000))));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,iVar1,(*(undefined4 *)(fr0_ + 0x00000000))));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,iVar1,(*(undefined4 *)(fr0_ + 0x00000000))));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 136)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 136)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar3,iVar1,(*(undefined4 *)(fr0_ + 0x00000000))); });
    ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x84)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 136)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 136)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x20)),uVar3,iVar1,(*(undefined4 *)(fr0_ + 0x00000000))); });
    (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x70)),(int)&(*(undefined8 *)(fr0_ - 0x84)) + 4,iVar1,(*(undefined4 *)(fr0_ + 0x00000000))));
    if (cVar7 == '\0') {
      (*(undefined8 *)(fr0_ - 0x84)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x84))+4)),pcVar6);
    }
    else {
      (*(undefined8 *)(fr0_ - 0x84)) = CONCAT44(pcVar6,uVar2);
    }
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x84)) + 4,0xffffffff,iVar1,(*(undefined4 *)(fr0_ + 0x00000000))));
    (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,iVar1,(*(undefined4 *)(fr0_ + 0x00000000))));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    if (*(int *)(unsigned)(ar4 + 0x128) == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
    }
  }
  else {
    (*(undefined4 *)(fr0_ + 0x00000000)) = ar7;
    if (*(int *)(unsigned)(ar4 + 300) != 1) goto LAB_8c0556a8;
  }
  ar6 = ar4 + 0x54;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 136)), pure_virtual_stub(ar4,ar5,ar6,(*(undefined4 *)(fr0_ + 0x00000000))));
  if (iVar1 == 0) {
    uVar4 = 0;
    *(undefined4 *)(unsigned)(ar4 + 300) = 0;
    *(undefined4 *)(unsigned)(ar4 + 700) = 0;
  }
LAB_8c0556a8:
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,(*(undefined4 *)(fr0_ + 0x00000000))));
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,(*(undefined4 *)(fr0_ + 0x00000000))));
  return uVar4;
}

__asm__(".globl _FUN_8c055490\n.set _FUN_8c055490, _FUN_8c055490_def\n");
//@unit 8c055750
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c055750_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c055750";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 216; for (int i_ = 0; i_ < 216; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int ar6_00;
  int ar7_00;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  ulonglong in_dr0 = 0;
  ulonglong uVar6;
  double dVar7;
  undefined8 in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar3 = 1;
  uVar2 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 216)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c10277c(((undefined1 *)(fr0_ - 0x34)),uVar2,ar6_00,ar7_00));
  uVar4 = (uint)in_dr0;
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c057164(ar4,ar5,ar6_00,ar7_00));
    if (iVar1 == 0) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
  }
  else {
    if (iVar1 == 1) {
      if (cVar9 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = in_dr0 & 0xffffffff;
        uVar4 = 0x40a00000;
      }
      (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c03263c(ar4,ar6,ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 216)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 216)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x44)),ar5,ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 216)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7_00));
      if (cVar9 != '\0') {
        uVar4 = 0x40400000;
      }
      (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c032788(ar4,ar4 + 0x54,ar7,(*(int *)(fr0_ + 0x00000000))));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      uVar2 = ar5;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 216)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 216)) - 8); Vec3_sub(ar4 + 0x54,ar5,ar7,(*(int *)(fr0_ + 0x00000000))); });
      (vsp = ((unsigned long)(fr0_ - 216)), Vec3_normalize(((undefined1 *)(fr0_ - 0x64)),uVar2,ar7,(*(int *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 216)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x74)),ar7,(*(int *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar7,(*(int *)(fr0_ + 0x00000000))));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar7,(*(int *)(fr0_ + 0x00000000))));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 216)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 216)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar7,(*(int *)(fr0_ + 0x00000000))); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 216)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 216)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x28)),uVar2,ar7,(*(int *)(fr0_ + 0x00000000))); });
      (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x84)),((undefined1 *)(fr0_ - 0x94)),ar7,(*(int *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar7,(*(int *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar7,(*(int *)(fr0_ + 0x00000000))));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      ar6_00 = ar7;
      ar7_00 = (*(int *)(fr0_ + 0x00000000));
    }
    else if (iVar1 != 2) {
      if (iVar1 == 3) {
        if (cVar9 == '\0') {
          dVar7 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar7 = -8.394521626779552e-251;
        }
        if (cVar8 == '\0') {
          fVar5 = F32LO(dVar7) * F32HI(dVar7);
        }
        else {
          fVar5 = SUB84(dVar7 * dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(unsigned)(ar4 + 0x28) = fVar5;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 216)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
        if (iVar1 == 1) {
          *(undefined4 *)(unsigned)(ar4 + 700) = 0;
          uVar3 = 0;
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        }
      }
      goto LAB_8c055a78;
    }
    uVar2 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 216)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 216)) - 8); Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 216)), Vec3_normalize(((undefined1 *)(fr0_ - 0xa4)),uVar2,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 216)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0xb4)),ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_00,ar7_00));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6_00,ar7_00));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc4))); *(unsigned *)((((unsigned long)(fr0_ - 216)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 216)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar6_00,ar7_00); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd4))); *(unsigned *)((((unsigned long)(fr0_ - 216)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 216)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x28)),uVar2,ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xc4)),((undefined1 *)(fr0_ - 0xd4)),ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd4)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc4)),0xffffffff,ar6_00,ar7_00));
    uVar6 = (ulonglong)uVar4;
    if (cVar9 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x58) = uVar6;
    }
    ar6_00 = ar4 + 0x54;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c04c314(ar4,ar5,ar6_00,ar7_00));
    if (iVar1 == 0) {
      if (cVar9 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f800000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x278) = CONCAT44(0x3f800000,(int)uVar6);
      }
      ar7_00 = 0;
      ar6_00 = -1;
      uVar2 = 0x1a;
      (vsp = ((unsigned long)(fr0_ - 216)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
      *(undefined4 *)(unsigned)(ar4 + 0x218) = 0;
      (vsp = ((unsigned long)(fr0_ - 216)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
  }
LAB_8c055a78:
  (vsp = ((unsigned long)(fr0_ - 216)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 216)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7_00));
  return uVar3;
}

__asm__(".globl _FUN_8c055750\n.set _FUN_8c055750, _FUN_8c055750_def\n");
//@unit 8c055b50
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c055b50_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c055b50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint extraout_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c032160(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x2a4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x298) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022d04(ar4 + 0x2a8,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x29c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x288) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
  *(undefined4 *)(unsigned)(ar4 + 700) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)extraout_fr1;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030eb8(ar4 + 0x1fc,ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x324) == 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x334) = 0;
  return 0x334;
}

__asm__(".globl _FUN_8c055b50\n.set _FUN_8c055b50, _FUN_8c055b50_def\n");
//@unit 8c055c38
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c055c38_def(int ar4,int ar5,float *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c055c38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 280; for (int i_ = 0; i_ < 280; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float *ar5_00;
  undefined4 uVar4;
  undefined1 *ar5_01;
  undefined1 *ar7_00;
  undefined4 *puVar5;
  undefined4 uVar6;
  float fVar7;
  uint uVar8;
  double dVar9;
  float fVar10;
  undefined4 in_fr3 = 0;
  double dVar11;
  undefined8 in_xd0 = 0;
  char cVar12;
  char cVar13;
  float *ain0;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar6 = 1;
  ar7_00 = ar7;
  ar5_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 280)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 280)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x3c)),((void *)0x8c022c4c),ar6,ar7_00));
  ain0 = ar5_00;
  (vsp = ((unsigned long)(fr0_ - 280)), Vec3_ctor_copy(&(*(float *)(fr0_ - 0x4c)),ar5_00,ar6,ar7_00));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 280)), get_field_24_026024(*(undefined4 *)(unsigned)(ar4 + 0x244),ar5_00,ar6,ar7_00));
  if (iVar1 != 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x2a4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
    *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
    (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(&(*(float *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7_00));
    return 0;
  }
  (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c031748(ar4,((void *)0x8c031748),ar6,ar7_00));
  if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
    if (cVar13 == '\0') {
      dVar9 = CONCAT44D(0x42e6c234,(*(float *)(fr0_ - 0x48)));
    }
    else {
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x44)),(*(float *)(fr0_ - 0x48)));
      dVar9 = 6.20177319754504e-312;
    }
    if (cVar12 == '\0') {
      (*(float *)(fr0_ - 0x48)) = F32LO(dVar9) - F32HI(dVar9);
    }
    else {
      (*(float *)(fr0_ - 0x48)) = SUB84(dVar9 - dVar9,0);
    }
    if (cVar13 == '\0') {
      dVar9 = CONCAT44D(0x438a051f,(*(float *)(fr0_ - 0x4c)));
    }
    else {
      (*(float *)(fr0_ - 0x48)) = (float)in_xd0;
      (*(undefined4 *)(fr0_ - 0x44)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
      in_xd0 = CONCAT44((*(float *)(fr0_ - 0x48)),(*(float *)(fr0_ - 0x4c)));
      dVar9 = -9.507220658418769e+240;
    }
    if (cVar12 == '\0') {
      (*(float *)(fr0_ - 0x4c)) = F32LO(dVar9) + F32HI(dVar9);
    }
    else {
      (*(float *)(fr0_ - 0x4c)) = SUB84(dVar9 + dVar9,0);
    }
    if (cVar13 != '\0') {
      (*(float *)(fr0_ - 0x4c)) = (float)in_xd0;
      (*(float *)(fr0_ - 0x48)) = F32HI(in_xd0);
    }
  }
  else {
    if (cVar13 == '\0') {
      dVar9 = CONCAT44D(0x42e6c234,(*(float *)(fr0_ - 0x48)));
    }
    else {
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x44)),(*(float *)(fr0_ - 0x48)));
      dVar9 = 6.20177319754504e-312;
    }
    if (cVar12 == '\0') {
      (*(float *)(fr0_ - 0x48)) = F32LO(dVar9) - F32HI(dVar9);
    }
    else {
      (*(float *)(fr0_ - 0x48)) = SUB84(dVar9 - dVar9,0);
    }
    if (cVar13 == '\0') {
      dVar9 = CONCAT44D(0x43938ccd,(*(float *)(fr0_ - 0x4c)));
    }
    else {
      (*(float *)(fr0_ - 0x48)) = (float)in_xd0;
      (*(undefined4 *)(fr0_ - 0x44)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
      in_xd0 = CONCAT44((*(float *)(fr0_ - 0x48)),(*(float *)(fr0_ - 0x4c)));
      dVar9 = 1.74908467537556e-311;
    }
    if (cVar12 == '\0') {
      (*(float *)(fr0_ - 0x4c)) = F32LO(dVar9) + F32HI(dVar9);
    }
    else {
      (*(float *)(fr0_ - 0x4c)) = SUB84(dVar9 + dVar9,0);
    }
    if (cVar13 != '\0') {
      (*(float *)(fr0_ - 0x4c)) = (float)in_xd0;
      (*(float *)(fr0_ - 0x48)) = F32HI(in_xd0);
    }
  }
  uVar4 = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x338) = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 0x2a4);
  if (iVar1 == 0) {
    if (ar7 == (undefined1 *)(unsigned)0x1) {
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
      uVar6 = 0;
      goto LAB_8c0563fa;
    }
    uVar4 = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 280)), rand_range(ar4,0,0x1e,ar7_00));
    *(int *)(unsigned)(ar4 + 0x2f8) = iVar1 + 0x14;
    ar7_00 = (undefined1 *)(unsigned)0x5;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    ar6 = (float *)(unsigned)0x2d4;
    (vsp = ((unsigned long)(fr0_ - 280)), vec3_clear(ar4 + 0x2d4,uVar4,0x2d4,5));
    (vsp = ((unsigned long)(fr0_ - 280)), vec3_clear(ar4 + 0x2a8,uVar4,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 280)), vec3_clear(ar4 + 0x90,uVar4,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 280)), vec3_clear(ar4 + 0x6c,uVar4,ar6,ar7_00));
    *(int *)(unsigned)(ar4 + 0x2a4) = *(int *)(unsigned)(ar4 + 0x2a4) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      *(undefined4 *)(unsigned)(ar4 + 0x334) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c026db0(ar4,1,ar6,ar7_00));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c03c0f0(ar4 + 0xb0,uVar4,ar6,ar7_00));
      puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 280)), deref_u32(uVar2,uVar4,ar6,ar7_00));
      uVar2 = puVar3[1];
      *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar3;
      *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar2;
      *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar3[2];
      if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
        puVar5 = ((undefined4 *)(unsigned)0x8c135f7c);
        puVar3 = ((undefined4 *)(unsigned)0x8c135f94);
      }
      else {
        puVar5 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c13621c);
        puVar3 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c136234);
      }
      (vsp = ((unsigned long)(fr0_ - 280)), vec3_clear(((undefined1 *)(fr0_ - 0x3c)),uVar4,ar6,ar7_00));
      *(unsigned *)(unsigned)(ar4 + 0xb4) = puVar5;
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 280)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c034384(ar4 + 0xb0,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4)),ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x6c)),ar6,ar7_00));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6,ar7_00));
      (*(undefined4 *)(fr0_ - 0x38)) = (*(undefined4 *)(fr0_ - 0x28));
      *(unsigned *)(unsigned)(ar4 + 0xb4) = puVar3;
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 280)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c034384(ar4 + 0xb0,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4)),ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x7c)),ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6,ar7_00));
      (*(undefined4 *)(fr0_ - 0x34)) = (*(undefined4 *)(fr0_ - 0x24));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x8c))); *(unsigned *)((((unsigned long)(fr0_ - 280)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 280)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x3c)),ar4 + 0x2d4,ar6,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x8c)),ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6,ar7_00));
      ar5_01 = ((undefined1 *)(fr0_ - 0x3c));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_assign(ar4 + 0x2d4,ar5_01,ar6,ar7_00));
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D((*(undefined4 *)(fr0_ - 0x38)),(*(float *)(fr0_ - 0x48)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x44)),(*(float *)(fr0_ - 0x48)));
        dVar9 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),(*(undefined4 *)(fr0_ - 0x38)));
      }
      if (cVar12 == '\0') {
        fVar7 = F32LO(dVar9) + F32HI(dVar9);
      }
      else {
        fVar7 = SUB84(dVar9 + dVar9,0);
      }
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 4),fVar7);
      }
      else {
        dVar9 = *(double *)(unsigned)(ar5 + 4);
      }
      if (cVar12 == '\0') {
        fVar7 = F32LO(dVar9) - F32HI(dVar9);
      }
      else {
        fVar7 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(0x3dcccccd,fVar7);
      }
      else {
        dVar9 = 4.50375370731149e-312;
      }
      if (cVar12 == '\0') {
        fVar7 = F32LO(dVar9) * F32HI(dVar9);
      }
      else {
        fVar7 = SUB84(dVar9 * dVar9,0);
      }
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2ac),fVar7);
      }
      else {
        dVar9 = *(double *)(unsigned)(ar4 + 0x2ac);
      }
      if (cVar12 == '\0') {
        fVar7 = F32HI(dVar9);
        dVar9 = CONCAT44D(fVar7,F32LO(dVar9) + fVar7);
      }
      else {
        dVar9 = dVar9 + dVar9;
      }
      if (cVar13 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2ac) = SUB84(dVar9,0);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2ac) = in_xd0;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 280)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 280)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_01,ar6,ar7_00); });
      uVar2 = (undefined4)(D2U(dVar9) >> 0x20);
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xac)),ar5_01,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x9c)),((undefined1 *)(fr0_ - 0xac)),ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0xac)),0xffffffff,ar6,ar7_00));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xbc)),uVar4,ar6,ar7_00));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(fr0_ - 0xbc)),ar6,ar7_00));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0xbc)),0xffffffff,ar6,ar7_00));
      if (iVar1 == 3) {
        (vsp = ((unsigned long)(fr0_ - 280)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xc8)),uVar4,ar6,ar7_00));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd8))); *(unsigned *)((((unsigned long)(fr0_ - 280)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 280)) - 8); FUN_8c023484(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0xc8)),ar6,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 280)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0xd8)),ar6,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,ar6,ar7_00));
        uVar4 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 280)), object_dtor_delete(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6,ar7_00));
      }
      else if (iVar1 == 4) {
        (vsp = ((unsigned long)(fr0_ - 280)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xe4)),uVar4,ar6,ar7_00));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf4))); *(unsigned *)((((unsigned long)(fr0_ - 280)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 280)) - 8); FUN_8c023484(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0xe4)),ar6,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 280)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0xf4)),ar6,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,ar6,ar7_00));
        uVar4 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 280)), object_dtor_delete(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,ar6,ar7_00));
      }
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 280)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6,ar7_00); });
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(0x43660000,uVar2);
      }
      else {
        dVar9 = 1.45200378977295e-311;
      }
      if (cVar12 == '\0' && F32HI(dVar9) < SUB84(dVar9,0)) {
        if (cVar13 == '\0') {
          dVar11 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2ac),in_fr3);
          dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 4),0x43340000);
        }
        else {
          dVar11 = *(double *)(unsigned)(ar4 + 0x2ac);
          dVar9 = *(double *)(unsigned)(ar5 + 4);
        }
        if (cVar12 == '\0') {
          fVar7 = F32LO(dVar9) - F32HI(dVar9);
        }
        else {
          fVar7 = SUB84(dVar9 - dVar9,0);
        }
        if (cVar13 == '\0') {
          dVar9 = CONCAT44D(0x3e99999a,fVar7);
        }
        else {
          dVar9 = 1.57928376276162e-311;
        }
        if (cVar12 == '\0') {
          fVar10 = F32HI(dVar9);
          fVar7 = F32LO(dVar9) * fVar10;
          dVar9 = CONCAT44D(fVar10,fVar7);
          dVar11 = CONCAT44D(F32HI(dVar11) + fVar7,SUB84(dVar11,0));
        }
        else {
          dVar9 = dVar9 * dVar9;
          dVar11 = dVar11 + dVar9;
        }
        if (cVar13 == '\0') {
          *(int *)(unsigned)(ar4 + 0x2ac) = (int)(D2U(dVar11) >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x2ac) = dVar11;
        }
      }
      uVar8 = SUB84(dVar9,0);
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x104))); *(unsigned *)((((unsigned long)(fr0_ - 280)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 280)) - 8); FUN_8c0230f0(ar4 + 0x14,((undefined1 *)(fr0_ - 0x104)),ar6,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_normalize(((undefined1 *)(fr0_ - 0x104)),((undefined1 *)(fr0_ - 0x114)),ar6,ar7_00));
      uVar4 = (vsp = ((unsigned long)(fr0_ - 280)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x114)),ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_assign(ar4 + 0x80,uVar4,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x114)),0xffffffff,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x104)),0xffffffff,ar6,ar7_00));
      ar6 = (float *)(unsigned)(ar4 + 0xb0);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 280)), s_CAnimBody_AdvanceFrame_033ba0(ar6,((void *)0x8c033b98),ar6,ar7_00));
      if (iVar1 == 1) {
        (vsp = ((unsigned long)(fr0_ - 280)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7_00));
        uVar2 = 0;
        uVar4 = 0xffffffff;
        uVar6 = 0x1a;
        (vsp = ((unsigned long)(fr0_ - 280)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 280)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar6,uVar4,uVar2));
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)uVar8;
        }
        (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c031700(ar4,uVar6,uVar4,uVar2));
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
        (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c030eb8(ar4 + 0x1fc,uVar6,uVar4,uVar2));
        *(undefined4 *)(unsigned)(ar4 + 0x334) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
        ar7_00 = (undefined1 *)(unsigned)0x0;
        uVar6 = 0;
        ar6 = (float *)(unsigned)0x2a4;
        *(undefined4 *)(unsigned)(ar4 + 0x2a4) = 0;
      }
    }
    goto LAB_8c0563fa;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x334) = 1;
  (vsp = ((unsigned long)(fr0_ - 280)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x5c)),uVar4,ar6,ar7_00));
  ar7_00 = ((undefined1 *)(fr0_ - 0x5c));
  ar6 = &(*(float *)(fr0_ - 0x4c));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c04e2d0(ar4,ar5,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6,ar7_00));
  uVar4 = 0;
  if (iVar1 == 0) {
    ar7_00 = (undefined1 *)(unsigned)0x0;
    ar6 = (float *)(unsigned)0xffffffff;
    uVar4 = 0x48;
    (vsp = ((unsigned long)(fr0_ - 280)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x48,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 280)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6,ar7_00));
    *(int *)(unsigned)(ar4 + 0x2a4) = *(int *)(unsigned)(ar4 + 0x2a4) + 1;
    *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
  }
  if (*(int *)(unsigned)(ar4 + 0x298) == 1) {
    (vsp = ((unsigned long)(fr0_ - 280)), FUN_8c030f2c(ar4 + 0x1fc,uVar4,ar6,ar7_00));
  }
LAB_8c0563fa:
  (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(&(*(float *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 280)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,((void *)0x8c022cb0),((undefined1 *)(fr0_ - 0x2c))));
  return uVar6;
}

__asm__(".globl _FUN_8c055c38\n.set _FUN_8c055c38, _FUN_8c055c38_def\n");
//@unit 8c0564c4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0564c4_def(int ar4,undefined4 ar5,int ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c0564c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 544; for (int i_ = 0; i_ < 544; i_++) z_[i_] = 0; }
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined *ar5_00;
  code *ar5_01;
  undefined4 uVar4;
  undefined4 unaff_r9 = 0;
  undefined4 unaff_r10 = 0;
  undefined4 unaff_r11 = 0;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 unaff_r13 = 0;
  undefined4 uVar7;
  undefined4 unaff_r14 = 0;
  undefined8 *puVar8;
  float fVar9;
  undefined8 in_dr0 = 0;
  float fVar12;
  double dVar10;
  undefined8 uVar11;
  ulonglong in_dr14 = 0;
  double dVar13;
  undefined8 in_xd0 = 0;
  undefined8 in_xd14 = 0;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x8)) = CONCAT44((int)in_dr14,(undefined4)(*(undefined8 *)(fr0_ - 0x8)));
    puVar8 = &(*(undefined8 *)(fr0_ - 0x8));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x8))+0)) = (int)(in_dr14 >> 0x20);
  }
  else {
    puVar8 = (undefined8 *)(unsigned)((undefined1 *)(fr0_ - 0x10));
    (*(undefined8 *)(fr0_ - 0x8)) = in_xd14;
  }
  *(undefined4 *)(unsigned)((int)puVar8 + -4) = unaff_r14;
  *(undefined4 *)(unsigned)((int)puVar8 + -8) = unaff_r13;
  *(undefined4 *)(unsigned)((int)puVar8 + -0xc) = 1;
  *(undefined4 *)(unsigned)((int)puVar8 + -0x10) = unaff_r11;
  *(undefined4 *)(unsigned)((int)puVar8 + -0x14) = unaff_r10;
  *(undefined4 *)(unsigned)((int)puVar8 + -0x18) = unaff_r9;
  *(undefined4 *)(unsigned)((int)puVar8 + -0x1c) = in_PR;
  uVar7 = 1;
  uVar3 = ar5;
  (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_ctor_zero((undefined1 *)(unsigned)((int)puVar8 + -0x2c),ar5,ar6,ar7));
  (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_ctor_zero((undefined1 *)(unsigned)((int)puVar8 + -0x3c),uVar3,ar6,ar7));
  (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_ctor_zero((undefined1 *)(unsigned)((int)puVar8 + -0x4c),uVar3,ar6,ar7));
  *(undefined4 *)(unsigned)((int)puVar8 + -0x1a8) = 0;
  (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar8 + -0x7c),uVar3,ar6,ar7));
  (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)puVar8 + -0x5c),(undefined1 *)(unsigned)((int)puVar8 + -0x7c),ar6,ar7));
  uVar3 = 0xffffffff;
  (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0x7c),0xffffffff,ar6,ar7));
  (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_ctor_zero((undefined1 *)(unsigned)((int)puVar8 + -0x6c),uVar3,ar6,ar7));
  uVar3 = (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), get_field_24_026024(*(undefined4 *)(unsigned)(ar4 + 0x244),uVar3,ar6,ar7));
  *(undefined4 *)(unsigned)((int)puVar8 + -0x1c0) = uVar3;
  if (*(int *)(unsigned)((int)puVar8 + -0x1c0) == 0) {
    iVar1 = *(int *)(unsigned)(ar4 + 0x2a4);
    if ((iVar1 < 5) && (-1 < iVar1)) {
      ar5_00 = (&(*(undefined1 *)(unsigned)0x8c056644))[iVar1];
                    
      switch(iVar1) {
      case 0:
        ar6 = 0x14;
        uVar3 = (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), rand_range(ar4,0,0x14,ar7));
        *(undefined4 *)(unsigned)((int)puVar8 + -0x1c4) = uVar3;
        *(int *)(unsigned)(ar4 + 0x2f8) = *(int *)(unsigned)((int)puVar8 + -0x1c4) + 5;
        *(int *)(unsigned)((int)puVar8 + -0x1fc) = ar4;
        *(int *)(unsigned)(*(int *)(unsigned)((int)puVar8 + -0x1fc) + 0x2a4) =
             *(int *)(unsigned)(*(int *)(unsigned)((int)puVar8 + -0x1fc) + 0x2a4) + 1;
      case 1:
        uVar3 = (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), FUN_8c057164(ar4,ar5,ar6,ar7));
        *(undefined4 *)(unsigned)((int)puVar8 + -0x1c8) = uVar3;
        iVar1 = *(int *)(unsigned)((int)puVar8 + -0x1c8);
        if (iVar1 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 700) = 1;
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), FUN_8c022d04(ar4 + 0x54,0,ar6,ar7));
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), FUN_8c022d04(ar4 + 0x2d4,iVar1,ar6,ar7));
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), FUN_8c022d04(ar4 + 0x2a8,iVar1,ar6,ar7));
          *(int *)(unsigned)((int)puVar8 + -0x200) = ar4;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar8 + -0x200) + 0x2a4) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar8 + -0x200) + 0x2a4) + 1;
          *(unsigned *)(unsigned)((int)puVar8 + -0x214) = (undefined1 *)(unsigned)((int)puVar8 + -0x8c);
          puVar2 = (undefined1 *)(unsigned)((int)puVar8 + -0x5c);
          ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar8 + -0x214)); *(unsigned *)(((puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)) - 8); Vec3_sub(ar5,puVar2,ar6,ar7); });
          *(unsigned *)(unsigned)((int)puVar8 + -0x214) = (undefined1 *)(unsigned)((int)puVar8 + -0x9c);
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_normalize((undefined1 *)(unsigned)((int)puVar8 + -0x8c),puVar2,ar6,ar7));
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_assign(ar4 + 0x54,(undefined1 *)(unsigned)((int)puVar8 + -0x9c),ar6,ar7));
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0x9c),0xffffffff,ar6,ar7));
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0x8c),0xffffffff,ar6,ar7));
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), FUN_8c022fc0(ar4 + 0x34c,(undefined1 *)(unsigned)((int)puVar8 + -0x5c),ar6,ar7));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar8 + -0x1cc) = (int)((ulonglong)in_dr0 >> 0x20);
            *(undefined4 *)(unsigned)((int)puVar8 + -0x1b4) = *(undefined4 *)(unsigned)((int)puVar8 + -0x1cc);
          }
          else {
            *(undefined8 *)(unsigned)((int)puVar8 + -0x1cc) = in_dr0;
            *(undefined8 *)(unsigned)((int)puVar8 + -0x1b4) = *(undefined8 *)(unsigned)((int)puVar8 + -0x1cc);
          }
          *(unsigned *)(unsigned)((int)puVar8 + -0x214) = (undefined1 *)(unsigned)((int)puVar8 + -0xac);
          ({ unsigned long t0_ = (unsigned long)(
                     *(undefined4 *)(unsigned)((int)puVar8 + -0x214)); *(unsigned *)(((puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)) - 8); Vec3_scale(ar4 + 0x54,(undefined1 *)(unsigned)((int)puVar8 + -0x1b4),ar6,ar7); });
          *(unsigned *)(unsigned)((int)puVar8 + -0x214) = (undefined1 *)(unsigned)((int)puVar8 + -0xbc);
          ({ unsigned long t0_ = (unsigned long)(
                   *(undefined4 *)(unsigned)((int)puVar8 + -0x214)); *(unsigned *)(((puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)) - 8); Vec3_add((undefined1 *)(unsigned)((int)puVar8 + -0xac),(undefined1 *)(unsigned)((int)puVar8 + -0x5c),ar6,ar7); });
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_assign(ar4 + 0x268,(undefined1 *)(unsigned)((int)puVar8 + -0xbc),ar6,ar7));
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0xbc),0xffffffff,ar6,ar7));
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0xac),0xffffffff,ar6,ar7));
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x26c) = 0x43340000;
            fVar9 = *(float *)(unsigned)(ar4 + 0x270);
            fVar12 = 1200.0;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x26c) = 0x27043340000;
            fVar9 = 1200.0;
            fVar12 = 4.54021e-43;
          }
          if (in_FPSCR_PR == '\0' && fVar12 < fVar9) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x270) = 0x44960000;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x270) = 0x14444960000;
            }
            *(unsigned *)(unsigned)((int)puVar8 + -0x214) = (undefined1 *)(unsigned)((int)puVar8 + -0xcc);
            puVar2 = (undefined1 *)(unsigned)((int)puVar8 + -0x5c);
            ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar8 + -0x214)); *(unsigned *)(((puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)) - 8); Vec3_sub(ar4 + 0x268,puVar2,ar6,ar7); });
            *(unsigned *)(unsigned)((int)puVar8 + -0x214) = (undefined1 *)(unsigned)((int)puVar8 + -0xdc);
            (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_normalize((undefined1 *)(unsigned)((int)puVar8 + -0xcc),puVar2,ar6,ar7));
            (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_assign(ar4 + 0x54,(undefined1 *)(unsigned)((int)puVar8 + -0xdc),ar6,ar7));
            (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0xdc),0xffffffff,ar6,ar7));
            (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0xcc),0xffffffff,ar6,ar7));
          }
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), FUN_8c023bf4(ar4 + 0x54,((undefined1 *)(unsigned)0x8c1365e0),ar6,ar7));
          ar7 = (undefined1 *)(unsigned)0x0;
          ar6 = -1;
          uVar3 = 0x1a;
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
        }
        break;
      case 2:
        *(int *)(unsigned)((int)puVar8 + -0x204) = ar4;
        *(int *)(unsigned)(*(int *)(unsigned)((int)puVar8 + -0x204) + 0x2a4) =
             *(int *)(unsigned)(*(int *)(unsigned)((int)puVar8 + -0x204) + 0x2a4) + 1;
      case 3:
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)puVar8 + -0xec),ar4 + 0x54,ar6,((void *)0x8c022c88)));
        ar7 = (undefined1 *)(unsigned)((int)puVar8 + -0xec);
        ar6 = ar4 + 0x268;
        uVar3 = (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), FUN_8c04e0e0(ar4,ar5,ar6,ar7));
        *(undefined4 *)(unsigned)((int)puVar8 + -0x1d0) = uVar3;
        *(uint *)(unsigned)((int)puVar8 + -0x1b8) = (uint)(*(int *)(unsigned)((int)puVar8 + -0x1d0) == 0);
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0xec),0xffffffff,ar6,ar7));
        if (*(int *)(unsigned)((int)puVar8 + -0x1b8) != 0) {
          ar7 = (undefined1 *)(unsigned)0x0;
          ar6 = -1;
          uVar3 = 0x4a;
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x4a,0xffffffff,0));
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
          *(int *)(unsigned)((int)puVar8 + -0x208) = ar4;
          iVar1 = *(int *)(unsigned)((int)puVar8 + -0x208);
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar8 + -0x208) + 0x2a4) = *(int *)(unsigned)(iVar1 + 0x2a4) + 1;
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), FUN_8c022d04(ar4 + 0x2d4,iVar1,ar6,ar7));
          ar5_01 = ((void *)0x8c022d04);
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), FUN_8c022d04(ar4 + 0x2a8,((void *)0x8c022d04),ar6,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
          *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), FUN_8c030f2c(ar4 + 0x1fc,ar5_01,ar6,ar7));
          uVar3 = (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), FUN_8c026db0(ar4,ar5_01,ar6,ar7));
          *(undefined4 *)(unsigned)((int)puVar8 + -0x1d4) = uVar3;
          uVar4 = *(undefined4 *)(unsigned)((int)puVar8 + -0x1d4);
          uVar3 = (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), FUN_8c03c0f0(ar4 + 0xb0,uVar4,ar6,ar7));
          *(undefined4 *)(unsigned)((int)puVar8 + -0x1d8) = uVar3;
          uVar3 = (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), deref_u32(*(undefined4 *)(unsigned)((int)puVar8 + -0x1d8),uVar4,ar6,ar7));
          *(undefined4 *)(unsigned)((int)puVar8 + -0x1dc) = uVar3;
          puVar5 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((int)puVar8 + -0x1dc));
          uVar3 = puVar5[1];
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar5;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar3;
          *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar5[2];
        }
        break;
      case 4:
        *(undefined4 *)(unsigned)(ar4 + 0x334) = 1;
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), FUN_8c031748(ar4,ar5_00,ar6,ar7));
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), FUN_8c022d04(ar4 + 0x90,ar5_00,ar6,ar7));
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_assign((undefined1 *)(unsigned)((int)puVar8 + -0x6c),ar5,ar6,ar7));
        if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
          puVar6 = ((undefined4 *)(unsigned)0x8c135f64);
          puVar5 = ((undefined4 *)(unsigned)0x8c135f64);
          if (in_FPSCR_SZ == '\0') {
            dVar13 = CONCAT44D(0xc1100000,(int)in_dr14);
            dVar10 = CONCAT44D(0x43fa0000,*(undefined4 *)(unsigned)((int)puVar8 + -0x6c));
          }
          else {
            dVar13 = 2.9975972386932e+19;
            in_xd0 = *(undefined8 *)(unsigned)((int)puVar8 + -0x6c);
            dVar10 = 1.50293648086087e-311;
          }
          if (in_FPSCR_PR == '\0') {
            fVar9 = F32LO(dVar10) + F32HI(dVar10);
          }
          else {
            fVar9 = SUB84(dVar10 + dVar10,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)((int)puVar8 + -0x6c) = fVar9;
          }
          else {
            *(undefined8 *)(unsigned)((int)puVar8 + -0x6c) = in_xd0;
          }
          uVar11 = CONCAT44(0x3f800000,fVar9);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2c4) = 0x3f800000;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x2c4) = uVar11;
          }
        }
        else {
          puVar6 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c136204);
          puVar5 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c136204);
          dVar13 = (double)(in_dr14 & 0xffffffff);
          if (in_FPSCR_SZ == '\0') {
            dVar10 = CONCAT44D(0x43fa0000,*(undefined4 *)(unsigned)((int)puVar8 + -0x6c));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)((int)puVar8 + -0x6c);
            dVar10 = 1.50293648086087e-311;
          }
          if (in_FPSCR_PR == '\0') {
            fVar9 = F32LO(dVar10) + F32HI(dVar10);
          }
          else {
            fVar9 = SUB84(dVar10 + dVar10,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)((int)puVar8 + -0x6c) = fVar9;
          }
          else {
            *(undefined8 *)(unsigned)((int)puVar8 + -0x6c) = in_xd0;
          }
          uVar11 = CONCAT44(0x3f800000,fVar9);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2c4) = 0x3f800000;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x2c4) = uVar11;
          }
        }
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), FUN_8c022d04((undefined1 *)(unsigned)((int)puVar8 + -0x4c),ar5,ar6,ar7));
        *(unsigned *)(unsigned)(ar4 + 0xb4) = puVar6;
        CAnimBody_GetCurFrame
                  (ar4 + 0xb0,((void *)0x8c026da8),ar6,ar7,*(undefined4 *)(unsigned)((int)puVar8 + -0x210));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar8 + -0x1e0) = (int)((ulonglong)uVar11 >> 0x20);
        }
        else {
          *(undefined8 *)(unsigned)((int)puVar8 + -0x1e0) = uVar11;
        }
        *(unsigned *)(unsigned)((int)puVar8 + -0x214) = (undefined1 *)(unsigned)((int)puVar8 + -0xfc);
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), FUN_8c034384(ar4 + 0xb0,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4)),ar6,ar7));
        uVar4 = (undefined4)uVar11;
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_assign((undefined1 *)(unsigned)((int)puVar8 + -0x2c),(undefined1 *)(unsigned)((int)puVar8 + -0xfc),ar6,ar7))
        ;
        uVar3 = 0xffffffff;
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0xfc),0xffffffff,ar6,ar7));
        if (in_FPSCR_SZ == '\0') {
          uVar11 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar8 + -0x28),uVar4);
          *(undefined4 *)(unsigned)((int)puVar8 + -0x48) = *(undefined4 *)(unsigned)((int)puVar8 + -0x28);
        }
        else {
          uVar11 = *(undefined8 *)(unsigned)((int)puVar8 + -0x28);
          *(undefined8 *)(unsigned)((int)puVar8 + -0x48) = uVar11;
        }
        *(unsigned *)(unsigned)(ar4 + 0xb4) = puVar5;
        ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar8 + -0x210)); vin0 = (unsigned)ri0_; vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7); });
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar8 + -0x1e4) = (int)((ulonglong)uVar11 >> 0x20);
        }
        else {
          *(undefined8 *)(unsigned)((int)puVar8 + -0x1e4) = uVar11;
        }
        *(unsigned *)(unsigned)((int)puVar8 + -0x214) = (undefined1 *)(unsigned)((int)puVar8 + -0x10c);
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), FUN_8c034384(ar4 + 0xb0,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4)),ar6,ar7));
        uVar3 = (undefined4)uVar11;
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_assign((undefined1 *)(unsigned)((int)puVar8 + -0x2c),(undefined1 *)(unsigned)((int)puVar8 + -0x10c),ar6,ar7
                   ));
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0x10c),0xffffffff,ar6,ar7));
        if (in_FPSCR_SZ == '\0') {
          dVar10 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar8 + -0x24),uVar3);
        }
        else {
          dVar10 = *(double *)(unsigned)((int)puVar8 + -0x24);
        }
        if (in_FPSCR_PR == '\0') {
          dVar10 = CONCAT44D(F32HI(dVar10) -
                                    F32HI(dVar13),SUB84(dVar10,0));
        }
        else {
          dVar10 = dVar10 - dVar13;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar8 + -0x44) = (int)(D2U(dVar10) >> 0x20);
        }
        else {
          *(double *)(unsigned)((int)puVar8 + -0x44) = dVar10;
        }
        *(unsigned *)(unsigned)((int)puVar8 + -0x214) = (undefined1 *)(unsigned)((int)puVar8 + -0x11c);
        ({ unsigned long t0_ = (unsigned long)(
                 *(undefined4 *)(unsigned)((int)puVar8 + -0x214)); *(unsigned *)(((puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)) - 8); Vec3_sub((undefined1 *)(unsigned)((int)puVar8 + -0x4c),ar4 + 0x2d4,ar6,ar7); });
        uVar3 = SUB84(dVar10,0);
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_assign(ar4 + 0x2a8,(undefined1 *)(unsigned)((int)puVar8 + -0x11c),ar6,ar7));
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0x11c),0xffffffff,ar6,ar7));
        ar6 = ar4 + 0x2d4;
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_assign(ar6,(undefined1 *)(unsigned)((int)puVar8 + -0x4c),ar6,ar7));
        *(int *)(unsigned)((int)puVar8 + -0x20c) = ar4;
        if (in_FPSCR_SZ == '\0') {
          uVar3 = *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar8 + -0x20c) + 0x2b0);
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)puVar8 + -0x20c) + 0x2b0);
        }
        uVar4 = 0x2c4;
        if (in_FPSCR_SZ == '\0') {
          dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c4),uVar3);
        }
        else {
          dVar13 = *(double *)(unsigned)(ar4 + 0x2c4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = F32HI(dVar13);
          dVar13 = CONCAT44D(fVar9,F32LO(dVar13) * fVar9);
        }
        else {
          dVar13 = dVar13 * dVar13;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar8 + -0x20c) + 0x2b0) = SUB84(dVar13,0);
        }
        else {
          *(undefined8 *)(unsigned)(*(int *)(unsigned)((int)puVar8 + -0x20c) + 0x2b0) = in_xd0;
        }
        *(unsigned *)(unsigned)((int)puVar8 + -0x214) = (undefined1 *)(unsigned)((int)puVar8 + -300);
        ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar8 + -0x214)); *(unsigned *)(((puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)) - 8); FUN_8c0230f0(ar4 + 0x14,0x2c4,ar6,ar7); });
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar8 + -0x13c),uVar4,ar6,ar7));
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), FUN_8c022dac((undefined1 *)(unsigned)((int)puVar8 + -300),(undefined1 *)(unsigned)((int)puVar8 + -0x13c),ar6,ar7
                    ));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar8 + -0x1e8) = (int)(D2U(dVar13) >> 0x20);
        }
        else {
          *(double *)(unsigned)((int)puVar8 + -0x1e8) = dVar13;
        }
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0x13c),0xffffffff,ar6,ar7));
        uVar3 = 0xffffffff;
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -300),0xffffffff,ar6,ar7));
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar8 + -0x14c),uVar3,ar6,ar7));
        uVar3 = (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), FUN_8c023334(ar4 + 0x14,(undefined1 *)(unsigned)((int)puVar8 + -0x14c),ar6,ar7));
        *(undefined4 *)(unsigned)((int)puVar8 + -0x1ec) = uVar3;
        *(undefined4 *)(unsigned)((int)puVar8 + -0x1bc) = *(undefined4 *)(unsigned)((int)puVar8 + -0x1ec);
        uVar3 = 0xffffffff;
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0x14c),0xffffffff,ar6,ar7));
        if (*(int *)(unsigned)((int)puVar8 + -0x1bc) == 3) {
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_set_xyz((undefined1 *)(unsigned)((int)puVar8 + -0x158),uVar3,ar6,ar7));
          *(unsigned *)(unsigned)((int)puVar8 + -0x214) = (undefined1 *)(unsigned)((int)puVar8 + -0x168);
          ({ unsigned long t0_ = (unsigned long)(
                       *(undefined4 *)(unsigned)((int)puVar8 + -0x214)); *(unsigned *)(((puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)) - 8); FUN_8c023484(ar4 + 0x2a8,(undefined1 *)(unsigned)((int)puVar8 + -0x158),ar6,ar7); });
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_assign(ar4 + 0x2a8,(undefined1 *)(unsigned)((int)puVar8 + -0x168),ar6,ar7));
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0x168),0xffffffff,ar6,ar7));
          uVar3 = 0xffffffff;
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), object_dtor_delete((undefined1 *)(unsigned)((int)puVar8 + -0x158),0xffffffff,ar6,ar7));
        }
        else if (*(int *)(unsigned)((int)puVar8 + -0x1bc) == 4) {
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_set_xyz((undefined1 *)(unsigned)((int)puVar8 + -0x174),(undefined1 *)(unsigned)((int)puVar8 + -0x174),ar6
                       ,ar7));
          *(unsigned *)(unsigned)((int)puVar8 + -0x214) = (undefined1 *)(unsigned)((int)puVar8 + -0x184);
          ({ unsigned long t0_ = (unsigned long)(
                       *(undefined4 *)(unsigned)((int)puVar8 + -0x214)); *(unsigned *)(((puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)) - 8); FUN_8c023484(ar4 + 0x2a8,(undefined1 *)(unsigned)((int)puVar8 + -0x174),ar6,ar7); });
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_assign(ar4 + 0x2a8,(undefined1 *)(unsigned)((int)puVar8 + -0x184),ar6,ar7));
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0x184),0xffffffff,ar6,ar7));
          uVar3 = 0xffffffff;
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), object_dtor_delete((undefined1 *)(unsigned)((int)puVar8 + -0x174),0xffffffff,ar6,ar7));
        }
        *(unsigned *)(unsigned)((int)puVar8 + -0x214) = (undefined1 *)(unsigned)((int)puVar8 + -0x194);
        ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar8 + -0x214)); *(unsigned *)(((puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar3,ar6,ar7); });
        *(unsigned *)(unsigned)((int)puVar8 + -0x214) = (undefined1 *)(unsigned)((int)puVar8 + -0x1a4);
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_normalize((undefined1 *)(unsigned)((int)puVar8 + -0x194),uVar3,ar6,ar7));
        uVar3 = (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_assign(ar4 + 0x14,(undefined1 *)(unsigned)((int)puVar8 + -0x1a4),ar6,ar7));
        *(undefined4 *)(unsigned)((int)puVar8 + -0x1f0) = uVar3;
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_assign(ar4 + 0x80,*(undefined4 *)(unsigned)((int)puVar8 + -0x1f0),ar6,ar7));
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0x1a4),0xffffffff,ar6,ar7));
        (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0x194),0xffffffff,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
        uVar3 = (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0xb0,ar6,ar7));
        *(undefined4 *)(unsigned)((int)puVar8 + -500) = uVar3;
        ar7 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)((int)puVar8 + -500));
        if (ar7 == (undefined1 *)(unsigned)0x1) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          *(undefined4 *)(unsigned)((int)puVar8 + -0x210) = *(undefined4 *)(unsigned)(ar4 + 0x128);
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), FUN_8c031b68(ar4,(*(int *)(unsigned)((int)puVar8 + -0x210) * 2 + *(int *)(unsigned)((int)puVar8 + -0x210)) * 8
                           + -0x73d7fc0c,0x40,1));
          *(undefined4 *)(unsigned)(ar4 + 700) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 0;
          uVar4 = 0;
          uVar7 = 0xffffffff;
          uVar3 = 0;
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar7,uVar4));
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
          *(undefined4 *)(unsigned)(ar4 + 0x2a4) = 0;
          ar7 = (undefined1 *)(unsigned)0x40;
          ar6 = 5;
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          uVar3 = 0x2a8;
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_length_sq(ar4 + 0x2a8,0x2a8,5,0x40));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar8 + -0x1f8) = (int)(D2U(dVar13) >> 0x20);
            *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)((int)puVar8 + -0x1f8);
          }
          else {
            *(double *)(unsigned)((int)puVar8 + -0x1f8) = dVar13;
            *(undefined8 *)(unsigned)(ar4 + 0x28) = *(undefined8 *)(unsigned)((int)puVar8 + -0x1f8);
          }
          (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), FUN_8c030eb8(ar4 + 0x1fc,uVar3,ar6,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x334) = 1;
          *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
          uVar7 = 0;
        }
      }
    }
    (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7));
    *(undefined4 *)(unsigned)((int)puVar8 + -0x1b0) = uVar7;
    (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0x6c),0xffffffff,ar6,ar7));
    (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0x5c),0xffffffff,ar6,ar7));
    (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0x4c),0xffffffff,ar6,ar7));
    (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0x3c),0xffffffff,ar6,ar7));
    (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0x2c),0xffffffff,ar6,ar7));
    uVar3 = *(undefined4 *)(unsigned)((int)puVar8 + -0x1b0);
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x2a4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
    *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
    *(undefined4 *)(unsigned)((int)puVar8 + -0x1ac) = 0;
    (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0x6c),0xffffffff,ar6,ar7));
    (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0x5c),0xffffffff,ar6,ar7));
    (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0x4c),0xffffffff,ar6,ar7));
    (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0x3c),0xffffffff,ar6,ar7));
    (vsp = (puVar8 ? (unsigned long)puVar8 - 532 : (unsigned long)(fr0_ - 544)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar8 + -0x2c),0xffffffff,ar6,ar7));
    uVar3 = *(undefined4 *)(unsigned)((int)puVar8 + -0x1ac);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c0564c4\n.set _FUN_8c0564c4, _FUN_8c0564c4_def\n");
//@unit 8c0570cc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c0570cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0570cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (*(int *)(unsigned)(0x2a0 + ar4) == 0) {
    *(int *)(unsigned)(0x2a0 + ar4) = *(int *)(unsigned)(0x2a0 + ar4) + 1;
    ar7 = 0;
    ar6 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033a8c))))
              (ar4 + 0xb0,ar5,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7));
  }
  else if (*(int *)(unsigned)(0x2a0 + ar4) != 1) {
    return 1;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033b98))))
                    (ar4 + 0xb0,ar5,ar6,ar7));
  if (iVar1 == 1) {
    *(undefined4 *)(unsigned)(0x2a0 + ar4) = 0;
  }
  return (uint)(iVar1 != 1);
}

__asm__(".globl _FUN_8c0570cc\n.set _FUN_8c0570cc, _FUN_8c0570cc_def\n");
//@unit 8c057164
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c057164_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c057164";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong in_dr0 = 0;
  ulonglong uVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar3 = 1;
  *(undefined4 *)(unsigned)(ar4 + 700) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
  if ((*(int *)(unsigned)(ar4 + 0x128) == 4) && (*(int *)(unsigned)(ar4 + 0x2b8) == 3)) {
    uVar2 = ar5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7));
    if (iVar1 == 0x22) {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6,ar7); });
      if (cVar6 == '\0') {
        in_dr0 = CONCAT44(0x436b0000,(int)(in_dr0 >> 0x20));
      }
      else {
        in_dr0 = 0x8c033e68436b0000;
      }
      if (cVar5 == '\0' && (float)in_dr0 < (float)(in_dr0 >> 0x20)) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6,ar7); });
        uVar4 = in_dr0;
        if (cVar6 == '\0') {
          uVar4 = in_dr0 >> 0x20;
        }
        in_dr0 = uVar4 & 0xffffffff;
        if ((float)uVar4 != 0.0) {
          (vsp = ((unsigned long)(fr0_ - 36)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7));
        }
      }
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_1c_026dd8(ar4 + 0xb0,uVar2,ar6,ar7));
      if (iVar1 == 0x20) {
        *(undefined4 *)(unsigned)(ar4 + 0x218) = 5;
      }
    }
  }
  if (cVar6 == '\0') {
    uVar2 = (undefined4)in_dr0;
    *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3fe66666;
  }
  else {
    uVar2 = 0x3fe66666;
    *(undefined8 *)(unsigned)(ar4 + 0x278) = 0x8c04c3143fe66666;
  }
  if (*(int *)(unsigned)(ar4 + 0x2b8) == 2) {
    if (cVar6 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f800000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x278) = CONCAT44(0x3f800000,uVar2);
    }
    uVar3 = 0;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c04c314(ar4,ar5,ar5,ar7));
  }
  return uVar3;
}

__asm__(".globl _FUN_8c057164\n.set _FUN_8c057164, _FUN_8c057164_def\n");
//@unit 8c057280
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c057280_def(undefined **ar4,undefined **ar5,undefined **ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c057280";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 264; for (int i_ = 0; i_ < 264; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint in_fr1 = 0;
  char cVar8;
  
  cVar8 = '\0';
  uVar7 = 1;
  ppuVar5 = ar5;
  ppuVar4 = ar6;
  do {
    puVar2 = ar4[0x4b];
    if ((0xc < (int)puVar2) || ((int)puVar2 < 0)) goto switchD_8c0572ba_caseD_5;
    ppuVar4 = &(*(undefined1 *)(unsigned)0x8c0572c4);
                    
    switch((uint)puVar2) {
    case 0x0:
      ar4[0xb] = (undefined *)(unsigned)0x0;
      if (ar6 == (undefined **)(unsigned)0x1) {
        ar4[0x4b] = ar4[0x4b] + 1;
        ppuVar5 = ar4;
        ppuVar4 = &(*(undefined1 *)(unsigned)0x8c0572c4);
      }
      else {
        ar4[0x4b] = (undefined *)(unsigned)0xa;
      }
      break;
    case 0x1:
      ar4[0xae] = (undefined *)(unsigned)0x2;
      (vsp = ((unsigned long)(fr0_ - 264)), vec3_clear(ar4 + 0xaa,((void *)0x8c014e20),&(*(undefined1 *)(unsigned)0x8c0572c4),ar7));
      pcVar6 = ((void *)0x8c014e20);
      (vsp = ((unsigned long)(fr0_ - 264)), vec3_clear(ar4 + 0xb5,((void *)0x8c014e20),ppuVar4,ar7));
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c02a1fc(ar4 + 0xb2,pcVar6,ppuVar4,ar7));
      if (cVar8 == '\0') {
        ar4[10] = (undefined *)(unsigned)0x0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 10) = (ulonglong)in_fr1;
      }
      ar4[0x4b] = ar4[0x4b] + 1;
      goto switchD_8c0572ba_caseD_5;
    case 0x2:
      ar7 = (code *)(uint)ar4[0x91];
      uVar3 = 0x1e;
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c033474(ar4,0x1e,ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x24)),uVar3,ar5,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c023334(ar4 + 5,((undefined1 *)(fr0_ - 0x24)),ar5,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar5,ar7));
      if (iVar1 == 3) {
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x30)),uVar3,ar5,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); FUN_8c023484(ar4 + 5,((undefined1 *)(fr0_ - 0x30)),ar5,ar7); });
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_assign(ar4 + 5,((undefined1 *)(fr0_ - 0x40)),ar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), object_dtor_delete(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar5,ar7));
        ar7 = (code *)0x0;
        ar5 = (undefined **)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0x2f,0xffffffff,0));
      }
      else if (iVar1 == 4) {
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x4c)),uVar3,ar5,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); FUN_8c023484(ar4 + 5,((undefined1 *)(fr0_ - 0x4c)),ar5,ar7); });
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_assign(ar4 + 5,((undefined1 *)(fr0_ - 0x5c)),ar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), object_dtor_delete(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar5,ar7));
        ar7 = (code *)0x0;
        ar5 = (undefined **)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0x26,0xffffffff,0));
      }
      ar4[0xae] = (undefined *)(unsigned)0x3;
      ppuVar5 = ar4 + 5;
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_assign(ar4 + 0x20,ppuVar5,ar5,ar7));
      if (ar4[0x4a] == (undefined *)(unsigned)0x3) {
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ppuVar5,ar5,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ppuVar5,ar5,ar7));
      }
      ar4[0x4b] = ar4[0x4b] + 1;
      ppuVar4 = ar5;
    case 0x3:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x2c,ppuVar5,ppuVar4,ar7));
      if (iVar1 == 1) {
        ppuVar4 = (undefined **)(unsigned)0x64;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 264)), rand_range(ar4,0,100,ar7));
        if (iVar1 < 0x32) {
          ar4[0x4b] = (undefined *)(unsigned)0x0;
          ar4[0xae] = (undefined *)(unsigned)0x2;
          uVar7 = 0;
        }
        else {
          ar7 = (code *)0x0;
          ppuVar4 = (undefined **)(unsigned)0xffffffff;
          uVar3 = 3;
          (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,3,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,uVar3,ppuVar4,ar7));
          ar4[0xae] = (undefined *)(unsigned)0x3;
          ar4[0x4b] = ar4[0x4b] + 1;
        }
      }
      goto switchD_8c0572ba_caseD_5;
    case 0x4:
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0
                        (ar4 + 0x2c,ppuVar5,&(*(undefined1 *)(unsigned)0x8c0572c4),ar7);
      if (iVar1 == 1) {
        ar4[0x4b] = (undefined *)(unsigned)0x0;
        ar4[0xae] = (undefined *)(unsigned)0x2;
        uVar7 = 0;
      }
    default:
      goto switchD_8c0572ba_caseD_5;
    case 0xa:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); Vec3_scale(ar4 + 5,((undefined1 *)(unsigned)0x8c1365e4),&(*(undefined1 *)(unsigned)0x8c0572c4),ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x7c))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0x6c)),ppuVar4,ar7); });
      ppuVar5 = ar5;
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x7c)),ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ppuVar5,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ppuVar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c05ae54(ar4,uVar3,ppuVar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c031748(ar4,uVar3,ppuVar5,ar7));
      ar7 = (code *)(uint)ar4[0x91];
      uVar3 = 0x1e;
      ppuVar5 = ar5;
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c033474(ar4,0x1e,ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c032ab0(ar4,uVar3,ppuVar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x8c)),uVar3,ppuVar5,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c023334(ar4 + 5,((undefined1 *)(fr0_ - 0x8c)),ppuVar5,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ppuVar5,ar7));
      if (iVar1 == 3) {
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x98)),uVar3,ppuVar5,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa8))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); FUN_8c023484(ar4 + 5,((undefined1 *)(fr0_ - 0x98)),ppuVar5,ar7); });
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_assign(ar4 + 5,((undefined1 *)(fr0_ - 0xa8)),ppuVar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,ppuVar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), object_dtor_delete(((undefined1 *)(fr0_ - 0x98)),0xffffffff,ppuVar5,ar7));
        ppuVar5 = ar4 + 0x9e;
        if (cVar8 == '\0') {
          *ppuVar5 = (undefined *)(unsigned)0x3f333333;
        }
        else {
          ppuVar5[0] = (undefined *)(unsigned)0x3f333333;
          ppuVar5[1] = (undefined *)(unsigned)0xbf800000;
        }
        ar7 = (code *)0x0;
        ppuVar5 = (undefined **)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0xc,0xffffffff,0));
      }
      else if (iVar1 == 4) {
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xb4)),uVar3,ppuVar5,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc4))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); FUN_8c023484(ar4 + 5,((undefined1 *)(fr0_ - 0xb4)),ppuVar5,ar7); });
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_assign(ar4 + 5,((undefined1 *)(fr0_ - 0xc4)),ppuVar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc4)),0xffffffff,ppuVar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), object_dtor_delete(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ppuVar5,ar7));
        ppuVar5 = ar4 + 0x9e;
        if (cVar8 == '\0') {
          *ppuVar5 = (undefined *)(unsigned)0x3f333333;
        }
        else {
          ppuVar5[0] = (undefined *)(unsigned)0x3f333333;
          ppuVar5[1] = (undefined *)(unsigned)0xbf800000;
        }
        ar7 = (code *)0x0;
        ppuVar5 = (undefined **)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0xb,0xffffffff,0));
      }
      ppuVar4 = ar4 + 5;
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_assign(ar4 + 0x20,ppuVar4,ppuVar5,ar7));
      if ((int)ar4[0x4a] < 3) {
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ppuVar4,ppuVar5,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ppuVar4,ppuVar5,ar7));
      }
      ar4[0x4b] = ar4[0x4b] + 1;
      ppuVar4 = ar4;
    case 0xb:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd4))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); Vec3_scale(ar4 + 5,((undefined1 *)(unsigned)0x8c1365e8),ppuVar4,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe4))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0xd4)),ppuVar4,ar7); });
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0xe4)),ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,ar5,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd4)),0xffffffff,ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c05ae54(ar4,uVar3,ar5,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x2c,ar4 + 0x9e,ar5,ar7));
      ppuVar4 = ar5;
      if (iVar1 == 1) {
        ar7 = (code *)0x0;
        ppuVar4 = (undefined **)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0,0xffffffff,0));
        uVar3 = 0xb0;
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,0xb0,ppuVar4,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c03c314(ar4,uVar3,ppuVar4,ar7));
        ar4[0x4b] = ar4[0x4b] + 1;
      }
switchD_8c0572ba_caseD_5:
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_assign(ar4 + 0x20,ar4 + 5,ppuVar4,ar7));
      return uVar7;
    case 0xc:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf4))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); Vec3_scale(ar4 + 5,((undefined1 *)(unsigned)0x8c1365ec),&(*(undefined1 *)(unsigned)0x8c0572c4),ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x104))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0xf4)),ppuVar4,ar7); });
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x104)),ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0x104)),0xffffffff,ar5,ar7));
      uVar3 = 0xffffffff;
      ar7 = ((void *)0x8c022cb0);
      (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,ar5,((void *)0x8c022cb0)));
      pcVar6 = ((void *)0x8c05ae54);
      (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c05ae54(ar4,uVar3,((void *)0x8c05ae54),ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x2c,0xb0,pcVar6,ar7));
      ppuVar4 = (undefined **)(unsigned)pcVar6;
      if (iVar1 == 1) {
        uVar7 = 0;
        ar4[0x4b] = (undefined *)(unsigned)0x0;
        ppuVar4 = (undefined **)(unsigned)pcVar6;
      }
      goto switchD_8c0572ba_caseD_5;
    }
  } while( true );
}

__asm__(".globl _FUN_8c057280\n.set _FUN_8c057280, _FUN_8c057280_def\n");
//@unit 8c057b6c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c057b6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c057b6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar5;
  uint uVar6;
  undefined8 in_dr0 = 0;
  ulonglong uVar7;
  double dVar8;
  float fVar9;
  double in_dr14 = 0;
  undefined8 in_xd14 = 0;
  undefined8 uVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  (*(undefined4 *)(fr0_ - 0x10)) = 1;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); Vec3_sub(ar6,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_normalize(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x44)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar3,ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x24)),uVar3,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x64)),ar6,ar7));
  uVar10 = in_dr0;
  if (cVar13 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    uVar10 = in_xd14;
  }
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6,ar7));
  uVar6 = (uint)in_dr0;
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c02a1fc(ar4 + 0x2c8,uVar3,ar6,ar7));
  uVar7 = (ulonglong)uVar6;
  if (cVar13 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar7;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 6;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x27c) = uVar3;
  if (cVar13 == '\0') {
    dVar8 = CONCAT44D(0x420c0000,(int)uVar7);
  }
  else {
    dVar8 = 1.49443250242844e-311;
  }
  fVar9 = F32LO(in_dr14);
  if (cVar12 == '\0') {
    bVar11 = F32HI(dVar8) < fVar9;
  }
  else {
    bVar11 = dVar8 < in_dr14;
  }
  if (bVar11) {
    if (cVar13 == '\0') {
      dVar8 = CONCAT44D(0x42870000,SUB84(dVar8,0));
    }
    else {
      dVar8 = 85899362951.0;
    }
    if (cVar12 == '\0') {
      bVar11 = F32HI(dVar8) < fVar9;
    }
    else {
      bVar11 = dVar8 < in_dr14;
    }
    if (bVar11) {
      if (cVar13 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c0) = 0x3f800000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2c0) = CONCAT44(0x3f800000,SUB84(dVar8,0));
      }
      iVar5 = 1;
    }
    else {
      if (cVar13 == '\0') {
        dVar8 = CONCAT44D(0x42340000,SUB84(dVar8,0));
      }
      else {
        dVar8 = -0.007812501926764526;
      }
      if (cVar12 == '\0') {
        fVar9 = fVar9 / F32HI(dVar8);
      }
      else {
        fVar9 = SUB84(in_dr14 / dVar8,0);
      }
      if (cVar13 == '\0') {
        *(float *)(unsigned)(ar4 + 0x2c0) = fVar9;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2c0) = uVar10;
      }
      iVar5 = 1;
    }
  }
  else {
    if (cVar13 == '\0') {
      dVar8 = CONCAT44D(0x41a00000,SUB84(dVar8,0));
    }
    else {
      dVar8 = 3161096467456.0;
    }
    if (cVar12 == '\0') {
      fVar9 = fVar9 / F32HI(dVar8);
    }
    else {
      fVar9 = SUB84(in_dr14 / dVar8,0);
    }
    if (cVar13 == '\0') {
      *(float *)(unsigned)(ar4 + 0x2c0) = fVar9;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x2c0) = uVar10;
    }
    iVar5 = 0;
  }
  if (*(int *)(unsigned)(ar4 + 0x27c) == 3) {
    ar7_00 = 0;
    ar6_00 = 0xffffffff;
    iVar4 = iVar5 + 0x41;
    (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar4,0xffffffff,0));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c026db0(ar4,iVar4,ar6_00,ar7_00));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c03c0f0(ar4 + 0xb0,uVar3,ar6_00,ar7_00));
    puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 104)), deref_u32(uVar1,uVar3,ar6_00,ar7_00));
    uVar1 = puVar2[1];
    *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar2;
    *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar1;
    *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar2[2];
    if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
      *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c135ebc) + iVar5 * 0x18;
    }
    else {
      *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c13600c) + iVar5 * 0x18;
    }
  }
  else {
    ar7_00 = 0;
    ar6_00 = 0xffffffff;
    iVar4 = iVar5 + 0x44;
    (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar4,0xffffffff,0));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c026db0(ar4,iVar4,ar6_00,ar7_00));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c03c0f0(ar4 + 0xb0,uVar3,ar6_00,ar7_00));
    puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 104)), deref_u32(uVar1,uVar3,ar6_00,ar7_00));
    uVar1 = puVar2[1];
    *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar2;
    *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar1;
    *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar2[2];
    if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
      *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c135f04) + iVar5 * 0x18;
    }
    else {
      *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c136054) + iVar5 * 0x18;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7_00));
  return 1;
}

__asm__(".globl _FUN_8c057b6c\n.set _FUN_8c057b6c, _FUN_8c057b6c_def\n");
//@unit 8c057e58
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c057e58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c057e58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  double dVar4;
  undefined8 in_dr4 = 0;
  undefined8 in_xd0 = 0;
  undefined4 in_PR = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar2 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  (*(undefined4 *)(fr0_ - 0xc)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 84)), Vec3_set_zero(&(*(float *)(fr0_ - 0x18)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xb4) + 4),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), vec3_copy_8c023d8c(&(*(undefined4 *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x30)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), object_dtor_delete(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c8),(*(undefined4 *)(fr0_ - 0x24)));
  }
  else {
    in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
    dVar4 = *(double *)(unsigned)(ar4 + 0x2c8);
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) - F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 - dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c0),fVar3);
  }
  else {
    dVar4 = *(double *)(unsigned)(ar4 + 0x2c0);
  }
  if (cVar5 == '\0') {
    (*(float *)(fr0_ - 0x18)) = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    (*(float *)(fr0_ - 0x18)) = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2cc),(*(undefined4 *)(fr0_ - 0x20)));
  }
  else {
    (*(float *)(fr0_ - 0x18)) = (float)in_xd0;
    in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
    dVar4 = *(double *)(unsigned)(ar4 + 0x2cc);
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) - F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 - dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c0),fVar3);
  }
  else {
    dVar4 = *(double *)(unsigned)(ar4 + 0x2c0);
  }
  if (cVar5 == '\0') {
    (*(float *)(fr0_ - 0x14)) = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    (*(float *)(fr0_ - 0x14)) = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2d0),(*(undefined4 *)(fr0_ - 0x1c)));
  }
  else {
    (*(float *)(fr0_ - 0x14)) = (float)in_xd0;
    in_xd0 = CONCAT44((*(float *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
    dVar4 = *(double *)(unsigned)(ar4 + 0x2d0);
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) - F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 - dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c0),fVar3);
  }
  else {
    dVar4 = *(double *)(unsigned)(ar4 + 0x2c0);
  }
  if (cVar5 == '\0') {
    (*(float *)(fr0_ - 0x10)) = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    (*(float *)(fr0_ - 0x10)) = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 != '\0') {
    (*(float *)(fr0_ - 0x10)) = (float)in_xd0;
    (*(undefined4 *)(fr0_ - 0xc)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  (vsp = ((unsigned long)(fr0_ - 84)), vec3_copy_8c023d8c(ar4 + 0x2c8,&(*(undefined4 *)(fr0_ - 0x24)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x3c)),&(*(float *)(fr0_ - 0x18)),ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 84)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 84)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x3c)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 84)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x4c)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 84)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), Vec3_length(ar4 + 0x14,uVar2,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar6,ar7));
  if (iVar1 == 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 0;
    (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c023d7c(ar4 + 0x2c8,uVar2,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 84)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), object_dtor_delete(&(*(float *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  (*(uint *)(fr0_ - 0x50)) = (uint)(iVar1 != 1);
  return (*(uint *)(fr0_ - 0x50));
}

__asm__(".globl _FUN_8c057e58\n.set _FUN_8c057e58, _FUN_8c057e58_def\n");
//@unit 8c058024
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c058024_def(int ar4,code *ar5,undefined4 ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c058024";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 340; for (int i_ = 0; i_ < 340; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  double *ar5_00;
  int iVar6;
  undefined1 *puVar7;
  code *pcVar8;
  code *ar7_00;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  double in_dr0 = 0;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined4 in_fr3 = 0;
  float fVar17;
  undefined4 in_fr12 = 0;
  double in_dr14 = 0;
  double in_xd0 = 0;
  undefined8 in_xd14 = 0;
  undefined8 uVar18;
  char cVar19;
  char cVar20;
  
  cVar20 = '\0';
  cVar19 = '\0';
  uVar11 = 1;
  pcVar8 = ar5;
  ar7_00 = ar7;
  uVar13 = ar6;
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x3c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x4c)),pcVar8,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x5c)),pcVar8,ar6,ar7_00));
  puVar10 = (undefined *)(unsigned)0x0;
  puVar9 = (undefined *)(unsigned)0x0;
  if (*(int *)(unsigned)(ar4 + 0x29c) == 0) {
    (vsp = ((unsigned long)(fr0_ - 340)), vec3_clear(ar4 + 0x2d4,0x2d4,ar6,ar7_00));
    uVar12 = SUB84(in_dr0,0);
    uVar3 = 0x2a8;
    (vsp = ((unsigned long)(fr0_ - 340)), vec3_clear(ar4 + 0x2a8,0x2a8,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 340)), vec3_clear(ar4 + 0x90,uVar3,ar6,ar7_00));
    pcVar8 = ((void *)0x8c014e20);
    (vsp = ((unsigned long)(fr0_ - 340)), vec3_clear(ar4 + 0x6c,((void *)0x8c014e20),ar6,ar7_00));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 340)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 340)) - 8); FUN_8c0230f0(ar4 + 0x14,pcVar8,ar6,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_normalize(((undefined1 *)(fr0_ - 0x6c)),pcVar8,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x7c)),ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6,ar7_00));
    if (cVar20 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
      uVar16 = CONCAT44(*(undefined4 *)(unsigned)(ar5 + 4),uVar12);
      *(undefined4 *)(unsigned)(ar4 + 0x2e4) = *(undefined4 *)(unsigned)(ar5 + 4);
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0xa0) = (ulonglong)uVar12;
      uVar16 = *(undefined8 *)(unsigned)(ar5 + 4);
      *(undefined8 *)(unsigned)(ar4 + 0x2e4) = uVar16;
    }
    if ((*(int *)(fr0_ + 0x00000000)) == -1) {
      uVar3 = 3;
      iVar6 = 0;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 340)), rand_range(ar4,0,3,ar7_00));
      if (ar7 == (code *)0x1b) {
        ar7_00 = (code *)0x0;
        uVar3 = 0xffffffff;
        iVar6 = iVar2 + 0x50;
        (vsp = ((unsigned long)(fr0_ - 340)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar6,0xffffffff,0));
      }
      else if (ar7 == (code *)0x1c) {
        ar7_00 = (code *)0x0;
        uVar3 = 0xffffffff;
        iVar6 = iVar2 + 0x53;
        (vsp = ((unsigned long)(fr0_ - 340)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar6,0xffffffff,0));
      }
      else if (ar7 == (code *)0x1d) {
        ar7_00 = (code *)0x0;
        uVar3 = 0xffffffff;
        iVar6 = 0x53;
        (vsp = ((unsigned long)(fr0_ - 340)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x53,0xffffffff,0));
      }
      else if (ar7 == (code *)0x1e) {
        ar7_00 = (code *)0x0;
        uVar3 = 0xffffffff;
        iVar6 = 0x58;
        (vsp = ((unsigned long)(fr0_ - 340)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x58,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 340)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar6,uVar3,ar7_00));
    }
    else if ((*(int *)(fr0_ + 0x00000000)) == -2) {
      ar7_00 = (code *)0x0;
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 340)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x55,0xffffffff,0));
    }
    else {
      ar7_00 = (code *)0x0;
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 340)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,(*(int *)(fr0_ + 0x00000000)),0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 340)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,(*(int *)(fr0_ + 0x00000000)),uVar3,ar7_00));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x8c))); *(unsigned *)((((unsigned long)(fr0_ - 340)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 340)) - 8); FUN_8c0230f0(ar5,1,uVar3,ar7_00); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 340)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 340)) - 8); FUN_8c0230f0(uVar13,((void *)0x8c0230f0),uVar3,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c022fc0(((undefined1 *)(fr0_ - 0x8c)),((undefined1 *)(fr0_ - 0x9c)),uVar3,ar7_00));
    uVar18 = uVar16;
    if (cVar20 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)uVar16 >> 0x20))
      ;
      uVar18 = in_xd14;
    }
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,uVar3,ar7_00));
    uVar4 = (undefined4)uVar16;
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,uVar3,ar7_00));
    if (cVar20 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2c0) = 0x3f800000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x2c0) = CONCAT44(0x3f800000,uVar4);
    }
    in_dr0 = CONCAT44D(0x3f800000,uVar4);
    if (cVar20 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2c4) = 0x3f800000;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x2c4) = in_dr0;
    }
    pcVar8 = ((void *)0x8c026dd8);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 340)), get_field_1c_026dd8(ar4 + 0xb0,((void *)0x8c026dd8),uVar3,ar7_00));
    if (iVar2 == 0x50) {
      if (cVar20 == '\0') {
        in_dr0 = CONCAT44D(0x43a07481,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = 3.5683445164698805e+163;
      }
      if (cVar19 == '\0') {
        fVar17 = F32LO(in_dr14) / F32HI(in_dr0);
      }
      else {
        fVar17 = SUB84(in_dr14 / in_dr0,0);
      }
      if (cVar20 == '\0') {
        *(float *)(unsigned)(ar4 + 0x2c0) = fVar17;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2c0) = uVar18;
      }
    }
    else if (iVar2 == 0x52) {
      if (cVar20 == '\0') {
        in_dr0 = CONCAT44D(0x43a5a000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = 1.44351786672845e-311;
      }
      if (cVar19 == '\0') {
        fVar17 = F32LO(in_dr14) / F32HI(in_dr0);
      }
      else {
        fVar17 = SUB84(in_dr14 / in_dr0,0);
      }
      if (cVar20 == '\0') {
        *(float *)(unsigned)(ar4 + 0x2c0) = fVar17;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2c0) = uVar18;
      }
    }
    else if (iVar2 == 0x58) {
      (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c032ab0(ar4,pcVar8,uVar3,ar7_00));
      if (cVar20 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2c4) = (int)((ulonglong)in_dr0 >> 0x20);
        dVar14 = CONCAT44D(0x42080000,SUB84(in_dr0,0));
      }
      else {
        *(double *)(unsigned)(ar4 + 0x2c4) = in_dr0;
        dVar14 = 4.323456351280824e+17;
      }
      pcVar8 = (code *)(ar4 + 0x2c0);
      if (cVar19 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   F32LO(in_dr14) - F32HI(dVar14));
      }
      else {
        in_dr14 = in_dr14 - dVar14;
      }
      if (cVar20 == '\0') {
        in_dr0 = CONCAT44D(0x43980000,SUB84(dVar14,0));
      }
      else {
        in_dr0 = 3.5682127120005427e+163;
      }
      if (cVar19 == '\0') {
        fVar17 = F32LO(in_dr14) / F32HI(in_dr0);
      }
      else {
        fVar17 = SUB84(in_dr14 / in_dr0,0);
      }
      if (cVar20 == '\0') {
        *(float *)(unsigned)pcVar8 = fVar17;
      }
      else {
        *(undefined8 *)(unsigned)pcVar8 = uVar18;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c022d04(ar4 + 0x2a8,pcVar8,uVar3,ar7_00));
    pcVar8 = ((void *)0x8c022d04);
    (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c022d04(ar4 + 0x2d4,((void *)0x8c022d04),uVar3,ar7_00));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c026db0(ar4,pcVar8,uVar3,ar7_00));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c03c0f0(ar4 + 0xb0,uVar4,uVar3,ar7_00));
    puVar5 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 340)), deref_u32(uVar1,uVar4,uVar3,ar7_00));
    uVar3 = puVar5[1];
    *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar5;
    *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar3;
    pcVar8 = (code *)puVar5[2];
    *(unsigned *)(unsigned)(ar4 + 0xbc) = pcVar8;
    ar6 = 0x29c;
    *(int *)(unsigned)(ar4 + 0x29c) = *(int *)(unsigned)(ar4 + 0x29c) + 1;
    *(undefined4 *)(unsigned)(ar4 + 800) = 0;
  }
  else if (*(int *)(unsigned)(ar4 + 0x29c) != 1) goto LAB_8c058cde;
  fVar17 = 0.0;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 340)), get_field_1c_026dd8(ar4 + 0xb0,pcVar8,ar6,ar7_00));
  if ((iVar2 < 0x59) && (0x4f < iVar2)) {
                    
    switch(iVar2) {
    case 0x52:
      ({ unsigned long ri0_ = (unsigned long)(uVar13); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 340)); CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar8,ar6,ar7_00); });
      if (cVar20 == '\0') {
        dVar14 = CONCAT44D(0x42100000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        dVar14 = 1.69814422787745e-311;
        in_xd0 = in_dr0;
      }
      in_dr0 = dVar14;
      if (((cVar19 != '\0' || F32HI(in_dr0) <= SUB84(in_dr0,0)) &&
          (*(int *)(unsigned)(ar4 + 800) == 0)) &&
         (pcVar8 = ar5, (vsp = ((unsigned long)(fr0_ - 340)), Vec3_assign(((undefined1 *)(fr0_ - 0x3c)),ar5,ar6,ar7_00)), *(char *)(unsigned)(ar4 + 0x210) == '\x01')) {
        ar7_00 = (code *)0x5;
        ar6 = 1;
        pcVar8 = (code *)((undefined1 *)(fr0_ - 0x3c));
        (vsp = ((unsigned long)(fr0_ - 340)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)) + 0xd0))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)),pcVar8,1,5));
      }
    case 0x50:
    case 0x51:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 340)), get_field_1c_026dd8(ar4 + 0xb0,pcVar8,ar6,ar7_00));
      puVar9 = ((undefined1 *)(unsigned)0x8c13612c) + (iVar2 + -0x50) * 0x18;
      puVar10 = ((undefined1 *)(unsigned)0x8c13612c) + (iVar2 + -0x50) * 0x18;
      break;
    default:
      pcVar8 = ((void *)0x8c026dd8);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 340)), get_field_1c_026dd8(ar4 + 0xb0,((void *)0x8c026dd8),ar6,ar7_00));
      puVar9 = ((undefined1 *)(unsigned)0x8c13609c) + (iVar2 + -0x53) * 0x18;
      puVar10 = ((undefined1 *)(unsigned)0x8c13609c) + (iVar2 + -0x53) * 0x18;
      break;
    case 0x56:
    case 0x57:
      break;
    case 0x58:
      ({ unsigned long ri0_ = (unsigned long)(uVar13); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 340)); CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar8,ar6,ar7_00); });
      if (cVar20 == '\0') {
        dVar14 = CONCAT44D(0x42a20000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        dVar14 = 1.49443735929137e-311;
        in_xd0 = in_dr0;
      }
      in_dr0 = dVar14;
      if (cVar19 == '\0' && F32HI(in_dr0) < SUB84(in_dr0,0)) {
        in_dr0 = CONCAT44D(0x3f800000,SUB84(in_dr0,0));
        if (cVar20 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c0) = 0x3f800000;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x2c0) = in_dr0;
        }
      }
      puVar9 = ((undefined1 *)(unsigned)0x8c1361d4);
      puVar10 = ((undefined1 *)(unsigned)0x8c1361d4);
      fVar17 = 0.0;
    }
  }
  uVar1 = SUB84(in_dr0,0);
  uVar3 = (vsp = ((unsigned long)(fr0_ - 340)), get_field_1c_026dd8(ar4 + 0xb0,pcVar8,ar6,ar7_00));
  uVar4 = (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c03c0f0(ar4 + 0xb0,uVar3,ar6,ar7_00));
  puVar5 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 340)), deref_u32(uVar4,uVar3,ar6,ar7_00));
  uVar4 = puVar5[1];
  *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar5;
  *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar4;
  *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar5[2];
  *(unsigned *)(unsigned)(ar4 + 0xb4) = puVar10;
  ({ unsigned long ri0_ = (unsigned long)(uVar13); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 340)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c034384(ar4 + 0xb0,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4)),ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_assign(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0xac)),ar6,ar7_00));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0xac)),0xffffffff,ar6,ar7_00));
  if (cVar20 == '\0') {
    dVar14 = CONCAT44D((*(float *)(fr0_ - 0x48)),uVar1);
  }
  else {
    dVar14 = CONCAT44D((*(undefined4 *)(fr0_ - 0x44)),(*(float *)(fr0_ - 0x48)));
  }
  if (cVar19 == '\0') {
    fVar17 = F32HI(dVar14) - fVar17;
  }
  else {
    fVar17 = (float)((ulonglong)(dVar14 - CONCAT44D(in_fr12,fVar17)) >> 0x20);
  }
  (*(float *)(fr0_ - 0x38)) = fVar17;
  if (cVar20 != '\0') {
    (*(float *)(fr0_ - 0x38)) = (*(float *)(fr0_ - 0x48));
    (*(float *)(fr0_ - 0x34)) = fVar17;
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 340)), get_field_1c_026dd8(ar4 + 0xb0,uVar3,ar6,ar7_00));
  uVar4 = (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c03c0f0(ar4 + 0xb0,uVar3,ar6,ar7_00));
  puVar5 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 340)), deref_u32(uVar4,uVar3,ar6,ar7_00));
  uVar3 = puVar5[1];
  *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar5;
  *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar3;
  uVar3 = puVar5[2];
  *(undefined4 *)(unsigned)(ar4 + 0xbc) = uVar3;
  *(unsigned *)(unsigned)(ar4 + 0xb4) = puVar9;
  ({ unsigned long ri0_ = (unsigned long)(uVar13); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 340)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7_00); });
  uVar3 = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4));
  (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c034384(ar4 + 0xb0,uVar3,uVar3,ar7_00));
  pcVar8 = ((void *)0x8c023a14);
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_assign(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0xbc)),uVar3,((void *)0x8c023a14)));
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0xbc)),0xffffffff,0xffffffff,pcVar8));
  puVar7 = ((undefined1 *)(fr0_ - 0x3c));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xcc))); *(unsigned *)((((unsigned long)(fr0_ - 340)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 340)) - 8); Vec3_sub(puVar7,ar4 + 0x2d4,puVar7,ar4 + 0x2d4); });
  pcVar8 = ((void *)0x8c023a14);
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0xcc)),puVar7,((void *)0x8c023a14)));
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0xcc)),0xffffffff,0xffffffff,pcVar8));
  if (cVar20 == '\0') {
    dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c0),*(undefined4 *)(unsigned)(ar4 + 0x2b0));
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x2b0);
    dVar14 = *(double *)(unsigned)(ar4 + 0x2c0);
  }
  if (cVar19 == '\0') {
    fVar17 = F32LO(dVar14) * F32HI(dVar14);
  }
  else {
    fVar17 = SUB84(dVar14 * dVar14,0);
  }
  if (cVar20 == '\0') {
    *(float *)(unsigned)(ar4 + 0x2b0) = fVar17;
    fVar17 = *(float *)(unsigned)(ar4 + 0x2ac);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x2b0) = in_xd0;
    in_xd0 = *(double *)(unsigned)(ar4 + 0x2ac);
  }
  uVar3 = 0x2c4;
  if (cVar20 == '\0') {
    dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c4),fVar17);
  }
  else {
    dVar14 = *(double *)(unsigned)(ar4 + 0x2c4);
  }
  if (cVar19 == '\0') {
    fVar17 = F32LO(dVar14) * F32HI(dVar14);
  }
  else {
    fVar17 = SUB84(dVar14 * dVar14,0);
  }
  if (cVar20 == '\0') {
    *(float *)(unsigned)(ar4 + 0x2ac) = fVar17;
  }
  else {
    *(double *)(unsigned)(ar4 + 0x2ac) = in_xd0;
  }
  ar7_00 = ((void *)0x8c0230f0);
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xdc))); *(unsigned *)((((unsigned long)(fr0_ - 340)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 340)) - 8); FUN_8c0230f0(ar4 + 0x14,0x2c4,ar4 + 0x2ac,((void *)0x8c0230f0)); });
  puVar7 = ((undefined1 *)(fr0_ - 0xec));
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_ctor_xyz(puVar7,uVar3,puVar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xdc)),((undefined1 *)(fr0_ - 0xec)),puVar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0xec)),0xffffffff,puVar7,ar7_00));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0xdc)),0xffffffff,puVar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xfc)),uVar3,puVar7,ar7_00));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(fr0_ - 0xfc)),puVar7,ar7_00));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0xfc)),0xffffffff,puVar7,ar7_00));
  if (iVar2 == 3) {
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x108)),uVar3,puVar7,ar7_00));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x118))); *(unsigned *)((((unsigned long)(fr0_ - 340)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 340)) - 8); FUN_8c023484(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x108)),puVar7,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x118)),puVar7,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0x118)),0xffffffff,puVar7,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 340)), object_dtor_delete(((undefined1 *)(fr0_ - 0x108)),0xffffffff,puVar7,ar7_00));
  }
  else if (iVar2 == 4) {
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x124)),uVar3,puVar7,ar7_00));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 340)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 340)) - 8); FUN_8c023484(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x124)),puVar7,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x134)),puVar7,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0x134)),0xffffffff,puVar7,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 340)), object_dtor_delete(((undefined1 *)(fr0_ - 0x124)),0xffffffff,puVar7,ar7_00));
  }
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_assign(ar4 + 0x2d4,((undefined1 *)(fr0_ - 0x3c)),puVar7,ar7_00));
  ar5_00 = (double *)(unsigned)(ar4 + 0x2e4);
  uVar3 = 0x2e4;
  if (cVar20 == '\0') {
    dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2ac),*(undefined4 *)(unsigned)(ar4 + 0x2e4));
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x2e4);
    dVar14 = *(double *)(unsigned)(ar4 + 0x2ac);
  }
  if (cVar19 == '\0') {
    fVar17 = F32LO(dVar14) + F32HI(dVar14);
  }
  else {
    fVar17 = SUB84(dVar14 + dVar14,0);
  }
  if (cVar20 == '\0') {
    *(float *)(unsigned)ar5_00 = fVar17;
    dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 4),in_fr3);
    dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2ac),fVar17);
  }
  else {
    *ar5_00 = in_xd0;
    dVar14 = *(double *)(unsigned)(ar5 + 4);
    dVar15 = *(double *)(unsigned)(ar4 + 0x2ac);
  }
  fVar17 = F32HI(dVar15);
  if (cVar19 == '\0') {
    dVar14 = CONCAT44D(F32HI(dVar14) + fVar17,SUB84(dVar14,0));
  }
  else {
    dVar14 = dVar14 + dVar15;
  }
  if (cVar20 == '\0') {
    dVar15 = CONCAT44D(fVar17,*(undefined4 *)(unsigned)(ar4 + 0x2e4));
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x2e4);
  }
  if (cVar19 == '\0') {
    fVar17 = F32LO(dVar15) - F32HI(dVar14);
  }
  else {
    fVar17 = SUB84(dVar15 - dVar14,0);
  }
  if (cVar20 == '\0') {
    dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2ac),fVar17);
  }
  else {
    dVar14 = *(double *)(unsigned)(ar4 + 0x2ac);
  }
  if (cVar19 == '\0') {
    fVar17 = F32LO(dVar14) + F32HI(dVar14);
  }
  else {
    fVar17 = SUB84(dVar14 + dVar14,0);
  }
  if (cVar20 == '\0') {
    *(float *)(unsigned)(ar4 + 0x2ac) = fVar17;
  }
  else {
    *(double *)(unsigned)(ar4 + 0x2ac) = in_xd0;
  }
  uVar16 = CONCAT44(0x3f800000,fVar17);
  if (cVar20 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x278) = uVar16;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 340)), get_field_1c_026dd8(ar4 + 0xb0,ar5_00,0x2e4,ar7_00));
  if (iVar2 == 0x55) {
    ({ unsigned long ri0_ = (unsigned long)(uVar13); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 340)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,uVar3,ar7_00); });
    if (cVar20 == '\0') {
      uVar16 = CONCAT44(0x42100000,(int)((ulonglong)uVar16 >> 0x20));
    }
    else {
      uVar16 = 0x3e99999a42100000;
    }
    if (cVar19 == '\0' && F32HI(uVar16) < (float)uVar16) {
      ar7_00 = (code *)(ar4 + 0x278);
      if (cVar20 == '\0') {
        uVar16 = CONCAT44(0x3e99999a,(float)uVar16);
        *(undefined4 *)(unsigned)ar7_00 = 0x3e99999a;
      }
      else {
        uVar16 = 0x8c033b983e99999a;
        *(undefined8 *)(unsigned)ar7_00 = 0x8c033b983e99999a;
      }
    }
  }
  uVar13 = (undefined4)uVar16;
  ar6 = 0x278;
  iVar6 = ar4 + 0x278;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 340)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar6,0x278,ar7_00));
  if (iVar2 != 1) goto LAB_8c058cde;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 340)), get_field_1c_026dd8(ar4 + 0xb0,iVar6,ar6,ar7_00));
  if (iVar2 == 0x50) {
    *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
    *(undefined4 *)(unsigned)(ar4 + 0x29c) = 0;
  }
  else {
    if (iVar2 != 0x51) {
      if (iVar2 != 0x52) {
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
        *(undefined4 *)(unsigned)(ar4 + 0x29c) = 0;
        goto LAB_8c058cae;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
      (vsp = ((unsigned long)(fr0_ - 340)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x140)),iVar6,ar6,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 340)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 340)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x140)),ar6,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 340)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x150)),ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0x150)),0xffffffff,ar6,ar7_00));
      uVar11 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 340)), object_dtor_delete(((undefined1 *)(fr0_ - 0x140)),0xffffffff,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 340)), Vec3_length(ar4 + 0x14,uVar11,ar6,ar7_00));
      iVar6 = ar4 + 0x14;
      (vsp = ((unsigned long)(fr0_ - 340)), Vec3_assign(ar4 + 0x80,iVar6,ar6,ar7_00));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
    *(undefined4 *)(unsigned)(ar4 + 0x29c) = 0;
  }
LAB_8c058cae:
  uVar11 = 0;
  (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c022d04(ar4 + 0x2a8,iVar6,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 340)), FUN_8c022d04(ar4 + 0x2d4,iVar6,ar6,ar7_00));
  if (cVar20 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x278) = CONCAT44(0x3f800000,uVar13);
  }
LAB_8c058cde:
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 340)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7_00));
  return uVar11;
}

__asm__(".globl _FUN_8c058024\n.set _FUN_8c058024, _FUN_8c058024_def\n");
//@unit 8c058d60
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c058d60_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c058d60";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 292; for (int i_ = 0; i_ < 292; i_++) z_[i_] = 0; }
  int iVar1;
  code *ar5_00;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 *ar6_00;
  undefined1 *ar7_00;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0 = 0;
  double dVar6;
  float fVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  ar5_00 = ((void *)0x8c022c4c);
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 292)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x20)),((void *)0x8c022c4c),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 292)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 292)), Vec3_assign(((undefined1 *)(fr0_ - 0x30)),ar6,ar6_00,ar7_00));
  *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar1 < 7) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      ar6_00 = (undefined1 *)(unsigned)(ar4 + 0x34c);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c055c38(ar4,ar5,ar6_00,ar7));
      ar7_00 = ar7;
      if (iVar1 == 0) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      }
      break;
    case 1:
      uVar3 = ar5;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c057164(ar4,ar5,ar6_00,ar7_00));
      if (iVar1 == 0) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 292)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 292)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x30)),uVar3,ar6_00,ar7_00); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 292)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 292)) - 8); FUN_8c0230f0(ar5,uVar3,ar6_00,ar7_00); });
        puVar2 = ((undefined1 *)(fr0_ - 0x50));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 292)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 292)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x40)),puVar2,ar6_00,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_normalize(((undefined1 *)(fr0_ - 0x60)),puVar2,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x70)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6_00,ar7_00));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 292)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 292)) - 8); Vec3_scale(ar4 + 0x54,((undefined1 *)(unsigned)0x8c1365f0),ar6_00,ar7_00); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x90))); *(unsigned *)((((unsigned long)(fr0_ - 292)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 292)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x80)),ar6_00,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_assign(ar4 + 0x248,((undefined1 *)(fr0_ - 0x90)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6_00,ar7_00));
        if (cVar9 == '\0') {
          dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),*(undefined4 *)(unsigned)(ar4 + 0x250));
        }
        else {
          dVar6 = *(double *)(unsigned)(ar4 + 0x48);
        }
        if (cVar8 == '\0') {
          fVar5 = F32LO(dVar6) - F32HI(dVar6);
        }
        else {
          fVar5 = SUB84(dVar6 - dVar6,0);
        }
        if (cVar8 != '\0' || fVar5 <= 0.0) {
          (vsp = ((unsigned long)(fr0_ - 292)), Vec3_assign(ar4 + 0x248,ar5,ar6_00,ar7_00));
        }
        *(undefined4 *)(unsigned)(ar4 + 700) = 1;
      }
      break;
    case 2:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa0))); *(unsigned *)((((unsigned long)(fr0_ - 292)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 292)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x30)),ar6,ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 292)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 292)) - 8); FUN_8c0230f0(ar5,ar6,ar6_00,ar7_00); });
      puVar2 = ((undefined1 *)(fr0_ - 0xb0));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc0))); *(unsigned *)((((unsigned long)(fr0_ - 292)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 292)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0xa0)),puVar2,ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_normalize(((undefined1 *)(fr0_ - 0xc0)),puVar2,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0xd0)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0xe0)),ar4 + 0x54,ar6_00,ar7_00));
      ar7_00 = ((undefined1 *)(fr0_ - 0xe0));
      ar6_00 = (undefined1 *)(unsigned)(ar4 + 0x248);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c04e0e0(ar4,ar5,ar6_00,ar7_00));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,ar6_00,ar7_00));
      if (iVar1 == 0) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c030f2c(ar4 + 0x1fc,uVar3,ar6_00,ar7_00));
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
      }
      break;
    case 3:
      ar7_00 = (undefined1 *)(unsigned)0x1d;
      ar6_00 = ((undefined1 *)(fr0_ - 0x30));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c058024(ar4,ar5,ar6_00,0x1d));
      if (iVar1 == 0) {
        (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c022d04(ar4 + 0x2a8,ar5,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c022d04(ar4 + 0x2d4,ar5,ar6_00,ar7_00));
        *(undefined4 *)(unsigned)(ar4 + 700) = 0;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
      break;
    case 4:
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xf0)),ar6,ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x100))); *(unsigned *)((((unsigned long)(fr0_ - 292)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 292)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0xf0)),ar6_00,ar7_00); });
      ar6_00 = ((undefined1 *)(fr0_ - 0x100));
      (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c057b6c(ar4,ar5,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x100)),0xffffffff,ar6_00,ar7_00));
      ar6 = (undefined1 *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c032ab0(ar4,ar6,ar6_00,ar7_00));
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x278) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x278) = in_dr0;
      }
      *(undefined4 *)(unsigned)(ar4 + 800) = 0;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 5:
      fVar5 = F32HI(in_dr0);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c057e58(ar4,ar6,ar6_00,ar7_00));
      if (iVar1 == 0) {
        ar7_00 = (undefined1 *)(unsigned)0x0;
        ar6_00 = (undefined1 *)(unsigned)0xffffffff;
        uVar3 = 0x1a;
        (vsp = ((unsigned long)(fr0_ - 292)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 292)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6_00,ar7_00));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x110))); *(unsigned *)((((unsigned long)(fr0_ - 292)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 292)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar3,ar6_00,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x120)),uVar3,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 292)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x110)),((undefined1 *)(fr0_ - 0x120)),ar6_00,ar7_00));
        if (cVar9 == '\0') {
          fVar7 = 2.0;
        }
        else {
          fVar5 = 2.0;
          fVar7 = 8.319336e+12;
        }
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x120)),0xffffffff,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x110)),0xffffffff,ar6_00,ar7_00));
        if (cVar8 != '\0' || fVar5 <= fVar7) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
        else {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + -1;
        }
      }
      break;
    case 6:
      (vsp = ((unsigned long)(fr0_ - 292)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar6_00,ar7_00));
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
      uVar4 = 0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 292)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7_00));
  return uVar4;
}

__asm__(".globl _FUN_8c058d60\n.set _FUN_8c058d60, _FUN_8c058d60_def\n");
//@unit 8c0593cc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0593cc_def(int ar4,int *ar5,undefined4 ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c0593cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 360; for (int i_ = 0; i_ < 360; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *ar6_00;
  undefined1 *puVar7;
  uint ar7_00;
  uint ar7_01;
  undefined4 ar7_02;
  undefined4 uVar8;
  float fVar9;
  undefined8 in_dr0 = 0;
  undefined8 uVar10;
  double dVar11;
  float fVar12;
  undefined8 in_xd0 = 0;
  char cVar13;
  char cVar14;
  
  cVar14 = '\0';
  cVar13 = '\0';
  uVar8 = 1;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 360)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ + 0x00000000)),ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
  uVar5 = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar1 < 7) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c030f2c(ar4 + 0x1fc,(*(undefined4 *)(fr0_ + 0x00000000)),1,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 360)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x40)),(*(undefined4 *)(fr0_ + 0x00000000)),uVar5,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 360)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 360)) - 8); Vec3_add(ar7,((undefined1 *)(fr0_ - 0x40)),uVar5,ar7_00); });
      puVar7 = ((undefined1 *)(fr0_ - 0x50));
      (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c057b6c(ar4,ar7,puVar7,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,puVar7,ar7_00));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,puVar7,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c032ab0(ar4,uVar2,puVar7,ar7_00));
      if (cVar14 == '\0') {
        *(int *)(unsigned)(ar4 + 0x278) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x278) = in_dr0;
      }
      uVar5 = 0;
      *(undefined4 *)(unsigned)(ar4 + 800) = 0;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      if ((*(int *)(fr0_ + 0x00000004)) == 0x1c) {
        uVar5 = 0x100;
        uVar2 = 0;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 360)), rand_range(ar4,0,0x100,ar7_00));
        if (iVar1 == 0) {
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2a8,uVar2,uVar5,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2d4,uVar2,uVar5,ar7_00));
          *(undefined4 *)(unsigned)(ar4 + 300) = 5;
          uVar6 = 0;
          uVar2 = 0xffffffff;
          uVar5 = 0x20;
          (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x20,0xffffffff,0));
          *(undefined4 *)(unsigned)(ar4 + 0x218) = 5;
          (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar2,uVar6));
          break;
        }
      }
      uVar6 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 360)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 360)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,uVar5,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 360)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x70)),uVar2,uVar5,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x60)),((undefined1 *)(fr0_ - 0x70)),uVar5,ar7_00));
      if (cVar14 == '\0') {
        in_dr0 = CONCAT44(0x40000000,uVar6);
      }
      else {
        in_dr0 = 0x8c022cb040000000;
      }
      ar7_01 = (uint)(cVar13 == '\0' && (float)in_dr0 < F32HI(in_dr0));
      ar7_00 = ar7_01;
      (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,uVar5,ar7_01));
      (*(undefined4 *)(fr0_ + 0x00000000)) = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,uVar5,ar7_00));
      if (ar7_01 != 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
        *(undefined4 *)(unsigned)(ar4 + 300) = 2;
        (vsp = ((unsigned long)(fr0_ - 360)), vec3_clear(ar4 + 0x2a8,(*(undefined4 *)(fr0_ + 0x00000000)),uVar5,ar7_00));
        pcVar4 = ((void *)0x8c014e20);
        (vsp = ((unsigned long)(fr0_ - 360)), vec3_clear(ar4 + 0x2d4,((void *)0x8c014e20),uVar5,ar7_00));
        if ((*(int *)(fr0_ + 0x00000004)) == 0x1d) {
          uVar2 = (vsp = ((unsigned long)(fr0_ - 360)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x10c))))(ar5,pcVar4,uVar5,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c0d98d4(uVar2,pcVar4,uVar5,ar7_00));
        }
        break;
      }
    case 1:
      fVar9 = F32HI(in_dr0);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c057e58(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),uVar5,ar7_00));
      if (iVar1 == 0) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 360)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 360)) - 8); FUN_8c0230f0(ar4 + 0x14,(*(undefined4 *)(fr0_ + 0x00000000)),uVar5,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 360)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x90)),(*(undefined4 *)(fr0_ + 0x00000000)),uVar5,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x80)),((undefined1 *)(fr0_ - 0x90)),uVar5,ar7_00));
        if (cVar14 == '\0') {
          pcVar4 = (code *)0x40000000;
        }
        else {
          fVar9 = 2.0;
          pcVar4 = ((void *)0x8c022cb0);
        }
        (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,uVar5,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,uVar5,ar7_00));
        if (cVar13 != '\0' || fVar9 <= (float)(uint)pcVar4) {
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
          uVar5 = 300;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          iVar1 = ar4;
          (vsp = ((unsigned long)(fr0_ - 360)), vec3_clear(ar4 + 0x2a8,300,ar4,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 360)), vec3_clear(ar4 + 0x2d4,uVar5,iVar1,ar7_00));
          if ((*(int *)(fr0_ + 0x00000004)) == 0x1d) {
            uVar2 = (vsp = ((unsigned long)(fr0_ - 360)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x10c))))(ar5,uVar5,iVar1,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c0d98d4(uVar2,uVar5,iVar1,ar7_00));
          }
        }
        else {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + -1;
        }
      }
      break;
    case 2:
      if ((*(int *)(fr0_ + 0x00000004)) == 0x1c) {
        uVar5 = 0x1c;
        puVar7 = ((undefined1 *)(fr0_ - 0x30));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c058024(ar4,ar7,puVar7,0x1c));
        if (iVar1 == 0) {
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c03c314(ar4,ar7,puVar7,uVar5));
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2a8,ar7,puVar7,uVar5));
          *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 0;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          uVar6 = 0;
          uVar2 = 0xffffffff;
          uVar5 = 0x1a;
          (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar2,uVar6));
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c03f39c(ar6,uVar5,uVar2,uVar6));
        }
      }
      else if ((*(int *)(fr0_ + 0x00000004)) == 0x1d) {
        uVar5 = 0x1d;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c058024(ar4,ar7,((undefined1 *)(fr0_ - 0x30)),0x1d));
        if (iVar1 == 0) {
          if (cVar14 == '\0') {
            uVar10 = CONCAT44(*(undefined4 *)(unsigned)(ar7 + 4),(int)in_dr0);
          }
          else {
            uVar10 = *(undefined8 *)(unsigned)(ar7 + 4);
          }
          uVar2 = 0x2a8;
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2a8,((void *)0x8c022d04),0x2a8,uVar5));
          (vsp = ((unsigned long)(fr0_ - 360)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,ar7,uVar2,uVar5));
          if (cVar14 == '\0') {
            dVar11 = CONCAT44D(*(undefined4 *)(unsigned)(ar7 + 4),(int)((ulonglong)uVar10 >> 0x20));
            uVar10 = in_xd0;
          }
          else {
            dVar11 = *(double *)(unsigned)(ar7 + 4);
          }
          if (cVar13 == '\0') {
            fVar9 = F32LO(dVar11) - F32HI(dVar11);
          }
          else {
            fVar9 = SUB84(dVar11 - dVar11,0);
          }
          if (cVar14 == '\0') {
            *(float *)(unsigned)(ar4 + 0x2ac) = fVar9;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x2ac) = uVar10;
          }
          uVar6 = 0;
          uVar2 = 0xffffffff;
          uVar5 = 0x25;
          (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x25,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar2,uVar6));
          *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
          *(undefined4 *)(unsigned)(ar4 + 300) = 6;
          (vsp = ((unsigned long)(fr0_ - 360)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xa0)),uVar5,uVar2,uVar6));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 360)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 360)) - 8); Vec3_add(ar7,((undefined1 *)(fr0_ - 0xa0)),uVar2,uVar6); });
          puVar7 = ((undefined1 *)(fr0_ - 0xb0));
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c057b6c(ar4,ar7,puVar7,uVar6));
          (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,puVar7,uVar6));
          uVar5 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,puVar7,uVar6));
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c030eb8(ar4 + 0x1fc,uVar5,puVar7,uVar6));
        }
      }
      else if ((*(int *)(fr0_ + 0x00000004)) == 0x31) {
        uVar5 = 0x1c;
        puVar7 = ((undefined1 *)(fr0_ - 0x30));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c058024(ar4,ar7,puVar7,0x1c));
        if (iVar1 == 0) {
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c03c314(ar4,ar7,puVar7,uVar5));
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2a8,ar7,puVar7,uVar5));
          *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 0;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          uVar2 = 0;
          uVar5 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
          iVar1 = ar4 + 0xb0;
          (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetFrame_033e6e(iVar1,iVar1,uVar5,uVar2));
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c03f39c(ar6,iVar1,uVar5,uVar2));
        }
      }
      break;
    case 3:
      uVar5 = 0;
      (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x26,0xffffffff,0));
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
      *(undefined4 *)(unsigned)(ar4 + 700) = 0;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      pcVar4 = ((void *)0x8c022d04);
      (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2d4,0x2d4,((void *)0x8c022d04),uVar5));
      (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2a8,ar4 + 0x2a8,pcVar4,uVar5));
      uVar8 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
      break;
    case 4:
      (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c030eb8(ar4 + 0x1fc,(*(undefined4 *)(fr0_ + 0x00000000)),1,ar7_00));
      uVar5 = 0x1c;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c058024(ar4,ar7,((undefined1 *)(fr0_ - 0x30)),0x1c));
      if (iVar1 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
        *(undefined4 *)(unsigned)(ar4 + 700) = 0;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + -1;
        (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2a8,ar4,0,uVar5));
        uVar6 = 0;
        uVar2 = 0xffffffff;
        uVar5 = 0x1a;
        (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
        *(undefined4 *)(unsigned)(ar4 + 0x218) = 4;
        (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar2,uVar6));
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      }
      break;
    case 5:
      (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,(*(undefined4 *)(fr0_ + 0x00000000)),1,ar7_00));
      fVar9 = F32HI(in_dr0);
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x164))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 360)); CAnimBody_GetCurFrame(ar4 + 0xb0,((void *)0x8c026da8),uVar5,ar7_00); });
      if (cVar14 == '\0') {
        fVar12 = 113.0;
      }
      else {
        fVar9 = 113.0;
        fVar12 = 1.04257e-42;
      }
      if (cVar13 != '\0' || fVar12 <= fVar9) {
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
        ar7_02 = 0;
        uVar6 = 0xffffffff;
        uVar5 = 0x55;
        (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x55,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 360)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar6,ar7_02));
        (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2d4,uVar5,uVar6,ar7_02));
        (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2a8,uVar5,uVar6,ar7_02));
        uVar5 = (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c026db0(ar4,uVar5,uVar6,ar7_02));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c03c0f0(ar4 + 0xb0,uVar5,uVar6,ar7_02));
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 360)), deref_u32(uVar2,uVar5,uVar6,ar7_02));
        uVar5 = puVar3[1];
        *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar3;
        *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar5;
        *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar3[2];
        *(undefined4 *)(unsigned)(ar4 + 0x29c) = 1;
        *(undefined4 *)(unsigned)(ar4 + 300) = 4;
      }
      break;
    case 6:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c057e58(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),1,ar7_00));
      fVar9 = F32HI(in_dr0);
      if (iVar1 == 0) {
        pcVar4 = ((void *)0x8c0230f0);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc0))); *(unsigned *)((((unsigned long)(fr0_ - 360)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 360)) - 8); FUN_8c0230f0(ar4 + 0x14,((void *)0x8c0230f0),uVar5,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 360)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xd0)),pcVar4,uVar5,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xc0)),((undefined1 *)(fr0_ - 0xd0)),uVar5,ar7_00));
        if (cVar14 == '\0') {
          pcVar4 = (code *)0x40000000;
        }
        else {
          fVar9 = 2.0;
          pcVar4 = ((void *)0x8c022cb0);
        }
        (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,uVar5,ar7_00));
        ar6_00 = ((void *)0x8c022cb0);
        (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,((void *)0x8c022cb0),ar7_00));
        (*(uint *)(fr0_ - 0x100)) = (uint)(cVar13 == '\0' && fVar9 < (float)(uint)pcVar4);
        if ((*(uint *)(fr0_ - 0x100)) == 0) {
          puVar7 = ((undefined1 *)(fr0_ - 0xe0));
          (vsp = ((unsigned long)(fr0_ - 360)), Vec3_ctor_xyz(puVar7,0,puVar7,ar7_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf0))); *(unsigned *)((((unsigned long)(fr0_ - 360)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 360)) - 8); Vec3_add(ar7,((undefined1 *)(fr0_ - 0xe0)),puVar7,ar7_00); });
          puVar7 = ((undefined1 *)(fr0_ - 0xf0));
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c057b6c(ar4,ar7,puVar7,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,puVar7,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,puVar7,ar7_00));
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 800) = 0;
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2d4,(*(uint *)(fr0_ - 0x100)),ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 360)), FUN_8c022d04(ar4 + 0x2a8,(*(uint *)(fr0_ - 0x100)),ar6_00,ar7_00));
          *(undefined4 *)(unsigned)(ar4 + 700) = 0;
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
          uVar8 = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 360)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,((undefined1 *)(fr0_ - 0x30)),0xffffffff));
  return uVar8;
}

__asm__(".globl _FUN_8c0593cc\n.set _FUN_8c0593cc, _FUN_8c0593cc_def\n");
//@unit 8c059fbc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_059fbc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_059fbc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_059fbc\n.set _ret_const_0_059fbc, _ret_const_0_059fbc_def\n");
//@unit 8c059fc4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c059fc4_def(int ar4,undefined4 *ar5,int ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c059fc4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *ar7_00;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0 = 0;
  double dVar6;
  double dVar7;
  float fVar8;
  uint in_fr3 = 0;
  undefined8 in_dr4 = 0;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  double in_xd14 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  fVar5 = F32HI(in_dr0);
  cVar11 = '\0';
  cVar10 = '\0';
  uVar3 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  uVar4 = 1;
  puVar2 = ar5;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  if (cVar11 == '\0') {
    in_fr15 = 338.375;
  }
  else {
    in_xd14 = 1.63025361168389e-311;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x300) = 0;
  iVar1 = *(int *)(unsigned)(ar4 + 0x28c);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c057164(ar4,ar5,ar6,ar7_00));
    if (iVar1 == 0) {
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(0x43330000,ar5[1]);
      }
      else {
        dVar6 = -7.95546843074564e-251;
      }
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) - F32LO(dVar6),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar6;
      }
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2ac) = (int)(D2U(dVar6) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x2ac) = dVar6;
      }
      (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar4 + 0x54,ar5,ar6,ar7_00));
      if ((*(int *)(fr0_ + 0x00000000)) == -1) {
        ar6 = 3;
        (*(int *)(fr0_ + 0x00000000)) = (vsp = ((unsigned long)(fr0_ - 64)), rand_range(ar4,0,3,ar7_00));
      }
      (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7_00));
      puVar2 = ar5;
      (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar4 + 0x268,ar5,ar6,ar7_00));
      if ((*(int *)(fr0_ + 0x00000000)) == 1) {
        if (cVar11 == '\0') {
          dVar6 = CONCAT44D(0x43fa0000,*ar5);
        }
        else {
          dVar6 = 1.1551152330547935e+238;
        }
        if (cVar10 == '\0' && F32HI(dVar6) < SUB84(dVar6,0)) {
          (*(int *)(fr0_ + 0x00000000)) = 0;
        }
      }
      if ((*(int *)(fr0_ + 0x00000000)) == 0) {
        if (cVar11 == '\0') {
          dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar7 + 8),SUB84(dVar6,0));
        }
        else {
          dVar6 = *(double *)(unsigned)(ar7 + 8);
        }
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(F32HI(dVar6) - in_fr15,SUB84(dVar6,0));
        }
        else {
          dVar6 = dVar6 - CONCAT44D(in_fr14,in_fr15);
        }
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x5c) = (int)(D2U(dVar6) >> 0x20);
          dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),*(undefined4 *)(unsigned)(ar4 + 0x54));
        }
        else {
          *(double *)(unsigned)(ar4 + 0x5c) = dVar6;
          dVar6 = *(double *)(unsigned)(ar4 + 0x48);
        }
        if (cVar10 == '\0') {
          fVar5 = F32LO(dVar6) + F32HI(dVar6);
        }
        else {
          fVar5 = SUB84(dVar6 + dVar6,0);
        }
        if (cVar11 != '\0') {
          fVar5 = 0.0;
        }
        if (cVar10 != '\0' || 0.0 <= fVar5) {
          if (cVar11 == '\0') {
            dVar6 = (double)(ulonglong)in_fr3;
            dVar7 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
          }
          else {
            dVar6 = 0.0;
            dVar7 = 1.23977604087146e-311;
          }
          if (cVar10 == '\0') {
            fVar8 = F32HI(dVar7);
            fVar5 = F32LO(dVar7) * fVar8;
            dVar7 = CONCAT44D(fVar8,fVar5);
            dVar6 = CONCAT44D(0.0 - fVar5,SUB84(dVar6,0));
          }
          else {
            dVar7 = dVar7 * dVar7;
            dVar6 = dVar6 - dVar7;
          }
          fVar5 = F32LO(dVar7);
          if (cVar11 == '\0') {
            *(int *)(unsigned)(ar4 + 0x54) = (int)(D2U(dVar6) >> 0x20);
          }
          else {
            *(double *)(unsigned)(ar4 + 0x54) = dVar6;
          }
        }
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022d04(ar4 + 0x248,puVar2,ar6,ar7_00));
        if (cVar11 == '\0') {
          uVar3 = *(undefined4 *)(unsigned)(ar7 + 8);
          dVar6 = CONCAT44D(uVar3,fVar5);
          *(undefined4 *)(unsigned)(ar4 + 0x270) = uVar3;
        }
        else {
          dVar6 = *(double *)(unsigned)(ar7 + 8);
          *(double *)(unsigned)(ar4 + 0x270) = dVar6;
        }
      }
      else if ((*(int *)(fr0_ + 0x00000000)) == 1) {
        if (cVar11 == '\0') {
          in_xd14 = CONCAT44D(in_fr15,0x41a00000);
        }
        if (cVar10 == '\0') {
          in_xd14 = CONCAT44D(F32HI(in_xd14) + F32LO(in_xd14),
                                     SUB84(in_xd14,0));
        }
        else {
          in_xd14 = in_xd14 + in_xd14;
        }
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x5c) = (int)((ulonglong)in_xd14 >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x5c) = in_xd14;
        }
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022d04(ar4 + 0x248,puVar2,ar6,ar7_00));
        dVar6 = (double)((ulonglong)in_xd14 & 0xffffffff);
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x270) = 0;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x270) = dVar6;
        }
      }
      else if (((*(int *)(fr0_ + 0x00000000)) == 2) || ((*(int *)(fr0_ + 0x00000000)) == 3)) {
        if (cVar11 == '\0') {
          in_xd14 = CONCAT44D(in_fr15,0x42200000);
        }
        if (cVar10 == '\0') {
          in_xd14 = CONCAT44D(F32HI(in_xd14) + F32LO(in_xd14),
                                     SUB84(in_xd14,0));
        }
        else {
          in_xd14 = in_xd14 + in_xd14;
        }
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x54) = (int)((ulonglong)in_xd14 >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x54) = in_xd14;
        }
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022d04(ar4 + 0x248,puVar2,ar6,ar7_00));
        dVar6 = (double)((ulonglong)in_xd14 & 0xffffffff);
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x268) = 0;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x268) = dVar6;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022fc0(ar5,ar4 + 0x268,ar6,ar7_00));
      if (cVar10 == '\0') {
        bVar9 = in_fr15 < F32HI(dVar6);
      }
      else {
        bVar9 = CONCAT44D(in_fr14,in_fr15) < dVar6;
      }
      if (!bVar9) {
        (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar4 + 0x54,ar5,ar6,ar7_00));
      }
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 1;
    }
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 700) = 1;
      if ((*(int *)(unsigned)(ar4 + 0x290) == 1) && (*(int *)(unsigned)(ar4 + 0x124) != 0x10)) {
        *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 1;
      }
    }
    else if (iVar1 != 2) {
      if (iVar1 == 3) {
        iVar1 = *(int *)(unsigned)(ar4 + 800);
        if (iVar1 == 0) {
          ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); CAnimBody_GetCurFrame(ar4 + 0xb0,puVar2,ar6,ar7_00); });
          if (cVar11 == '\0') {
            fVar8 = 25.0;
          }
          else {
            fVar5 = 25.0;
            fVar8 = 8.12753e-43;
          }
          if (cVar10 == '\0' && fVar8 < fVar5) {
            (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c033474(ar4,0x1c,ar5,*(undefined4 *)(unsigned)(ar4 + 0x244)));
            *(int *)(unsigned)(ar4 + 800) = *(int *)(unsigned)(ar4 + 800) + 1;
          }
        }
        else if (iVar1 == 1) {
          ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); CAnimBody_GetCurFrame(ar4 + 0xb0,puVar2,ar6,ar7_00); });
          if (cVar11 == '\0') {
            fVar8 = 78.0;
          }
          else {
            fVar5 = 78.0;
            fVar8 = 8.12753e-43;
          }
          if (cVar10 == '\0' && fVar8 < fVar5) {
            (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c033474(ar4,0x1d,ar5,*(undefined4 *)(unsigned)(ar4 + 0x244)));
            *(int *)(unsigned)(ar4 + 800) = *(int *)(unsigned)(ar4 + 800) + 1;
          }
        }
        else if (iVar1 == 2) {
          ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); CAnimBody_GetCurFrame(ar4 + 0xb0,puVar2,ar6,ar7_00); });
          if (cVar11 == '\0') {
            fVar8 = 150.0;
          }
          else {
            fVar5 = 150.0;
            fVar8 = 7.39886e-43;
          }
          if (cVar10 == '\0' && fVar8 < fVar5) {
            if (*(char *)(unsigned)(ar4 + 0x210) == '\x01') {
              (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7_00));
              (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)) + 0xd0))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)),((undefined1 *)(fr0_ - 0x2c)),1,5));
            }
            *(int *)(unsigned)(ar4 + 800) = *(int *)(unsigned)(ar4 + 800) + 1;
          }
        }
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
        ar7_00 = (undefined1 *)(unsigned)0x1e;
        ar6 = ar4 + 0x268;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c058024(ar4,ar5,ar6,0x1e));
        if (iVar1 == 0) {
          (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022d04(ar4 + 0x2d4,ar5,ar6,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022d04(ar4 + 0x2a8,ar5,ar6,ar7_00));
          *(undefined4 *)(unsigned)(ar4 + 700) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
          uVar4 = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
          (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c03c314(ar4,ar5,ar6,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030eb8(ar4 + 0x1fc,ar5,ar6,ar7_00));
          *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
        }
      }
      goto LAB_8c05a4c4;
    }
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x3c)),ar4 + 0x248,ar6,ar7_00));
    ar7_00 = ((undefined1 *)(fr0_ - 0x3c));
    ar6 = ar4 + 0x54;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c04e0e0(ar4,ar5,ar6,ar7_00));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7_00));
    if (iVar1 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x218) = 9;
      *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 1;
      *(undefined4 *)(unsigned)(ar4 + 800) = 0;
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030f2c(ar4 + 0x1fc,uVar3,ar6,ar7_00));
    }
  }
LAB_8c05a4c4:
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7_00));
  return uVar4;
}

__asm__(".globl _FUN_8c059fc4\n.set _FUN_8c059fc4, _FUN_8c059fc4_def\n");
//@unit 8c05a54c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c05a54c_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c05a54c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 264; for (int i_ = 0; i_ < 264; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double in_dr0 = 0;
  double dVar7;
  undefined4 uVar9;
  double dVar8;
  float fVar10;
  undefined4 in_fr3 = 0;
  float fVar11;
  undefined8 in_dr12 = 0;
  double dVar12;
  undefined4 in_fr15 = 0;
  undefined8 in_xd0 = 0;
  double in_xd12 = 0;
  bool bVar13;
  char cVar14;
  char cVar15;
  
  uVar4 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  cVar15 = '\0';
  cVar14 = '\0';
  iVar3 = 1;
  iVar2 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar2 < 0xb) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
      if (*(int *)(unsigned)(ar4 + 0x2ec) < 5) {
        *(undefined4 *)(unsigned)(ar4 + 0x32c) = 6;
      }
      else {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 264)), libgcc_divide_helper_01031c(*(undefined4 *)(unsigned)(ar4 + 0x2ec),8,ar6,ar7));
        if (iVar3 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x32c) = 2;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x32c) = 1;
        }
      }
      *(int *)(unsigned)(ar4 + 0x2ec) = *(int *)(unsigned)(ar4 + 0x2ec) + 1;
      iVar3 = *(int *)(unsigned)(ar4 + 0x32c);
      if ((iVar3 < 7) && (-1 < iVar3)) {
                    
        switch(iVar3) {
        default:
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          break;
        case 2:
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 3;
          break;
        case 3:
          break;
        case 4:
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 5;
          break;
        case 5:
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 7;
          break;
        case 6:
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 9;
        }
      }
      break;
    case 1:
      iVar3 = (vsp = ((unsigned long)(fr0_ - 264)), rand_range(ar4,0,0x10,ar7));
      if (iVar3 == 0) {
        ar7 = *(int *)(unsigned)(ar4 + 0x244);
        (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c033474(ar4,0xe,ar5,ar7));
      }
      *(uint *)(unsigned)(ar4 + 0x2f4) = *(uint *)(unsigned)(ar4 + 0x2f4) ^ 1;
      if (*(int *)(unsigned)(ar4 + 0x2f4) == 0) {
        iVar3 = ar4;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 264)), libgcc_divide_helper_0101e4(*(undefined4 *)(unsigned)(ar4 + 0x2ec),4,ar4,ar7));
        iVar3 = (vsp = ((unsigned long)(fr0_ - 264)), libgcc_divide_helper_01031c(uVar4,9,iVar3,ar7));
        ar7 = 0;
        ar6 = -1;
        iVar3 = iVar3 + 0x2f;
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar3,0xffffffff,0));
      }
      else {
        iVar3 = ar4;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 264)), libgcc_divide_helper_0101e4(*(undefined4 *)(unsigned)(ar4 + 0x2ec),4,ar4,ar7));
        iVar3 = (vsp = ((unsigned long)(fr0_ - 264)), libgcc_divide_helper_01031c(uVar4,9,iVar3,ar7));
        ar7 = 0;
        ar6 = -1;
        iVar3 = iVar3 + 0x26;
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar3,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar3,ar6,ar7));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 2:
      iVar3 = (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar3,ar6,ar7));
      if (iVar3 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
      break;
    case 3:
      uVar5 = 0x10;
      uVar6 = 0;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 264)), rand_range(ar4,0,0x10,ar7));
      if (iVar3 == 0) {
        ar7 = *(int *)(unsigned)(ar4 + 0x244);
        uVar6 = 0xe;
        (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c033474(ar4,0xe,ar5,ar7));
        uVar5 = ar5;
      }
      *(uint *)(unsigned)(ar4 + 0x2f4) = *(uint *)(unsigned)(ar4 + 0x2f4) ^ 1;
      if (cVar15 == '\0') {
        dVar7 = CONCAT44D(0xbf800000,*(undefined4 *)(unsigned)(ar4 + 0x2e4));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2e4);
        dVar7 = 4.51450460004832e-312;
      }
      if (cVar14 == '\0') {
        fVar11 = F32LO(dVar7) * F32HI(dVar7);
      }
      else {
        fVar11 = SUB84(dVar7 * dVar7,0);
      }
      if (cVar15 == '\0') {
        *(float *)(unsigned)(ar4 + 0x2e4) = fVar11;
        fVar11 = *(float *)(unsigned)(ar4 + 0x2e4);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2e4) = in_xd0;
      }
      uVar9 = 0x3f800000;
      if (fVar11 == 1.0) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar6,uVar5,ar7); });
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x40)),uVar6,uVar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x40)),uVar5,ar7));
        if (cVar15 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x224) = uVar9;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x224) = CONCAT44(uVar9,fVar11);
        }
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,uVar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,uVar5,ar7));
      }
      else {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar6,uVar5,ar7); });
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x60)),uVar6,uVar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x50)),((undefined1 *)(fr0_ - 0x60)),uVar5,ar7));
        if (cVar15 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x224) = uVar9;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x224) = CONCAT44(uVar9,fVar11);
        }
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,uVar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,uVar5,ar7));
      }
      ar7 = 0;
      ar6 = -1;
      (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x18,0xffffffff,0));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 264)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x18,ar6,ar7));
      iVar3 = 0x31;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 264)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x31,ar6,ar7));
      if (cVar14 == '\0') {
        dVar7 = CONCAT44D((float)iVar2,in_fr3);
      }
      else {
        dVar7 = (double)iVar2;
      }
      fVar10 = F32HI(dVar7);
      if (cVar14 == '\0') {
        bVar13 = fVar10 < 0.0;
      }
      else {
        bVar13 = dVar7 < (double)(ulonglong)(uint)fVar11;
      }
      if (bVar13) {
        if (cVar15 == '\0') {
          dVar8 = CONCAT44D(0x4f800000,fVar11);
        }
        else {
          dVar8 = 8192.002426147461;
        }
        if (cVar14 == '\0') {
          dVar7 = CONCAT44D(fVar10 + F32HI(dVar8),SUB84(dVar7,0));
        }
        else {
          dVar7 = dVar7 + dVar8;
        }
      }
      fVar11 = (float)iVar1;
      dVar8 = (double)(ulonglong)(uint)fVar11;
      if (cVar14 == '\0' && fVar11 < 0.0) {
        if (cVar15 == '\0') {
          dVar8 = CONCAT44D(0x4f800000,fVar11);
        }
        else {
          dVar8 = 8192.002426147461;
        }
        if (cVar14 == '\0') {
          fVar11 = F32HI(dVar8);
          dVar8 = CONCAT44D(fVar11,F32LO(dVar8) + fVar11);
        }
        else {
          dVar8 = dVar8 + dVar8;
        }
      }
      if (cVar14 == '\0') {
        dVar7 = CONCAT44D(F32HI(dVar7) / F32LO(dVar8),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 / dVar8;
      }
      if (cVar15 == '\0') {
        in_dr0 = CONCAT44D(0x40c00000,SUB84(dVar8,0));
      }
      else {
        in_dr0 = -8.399316855946905e-251;
      }
      if (cVar14 == '\0') {
        dVar7 = CONCAT44D(F32HI(dVar7) *
                                 F32HI(in_dr0),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 * in_dr0;
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x278) = (int)(D2U(dVar7) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x278) = dVar7;
      }
      (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar3,ar6,ar7));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 4:
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x104))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 264)); CAnimBody_GetCurFrame(ar4 + 0xb0,iVar3,ar6,ar7); });
      dVar7 = in_dr0;
      if (cVar15 == '\0') {
        dVar7 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
      }
      uVar5 = 0x18;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 264)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x18,ar6,ar7));
      fVar11 = (float)iVar3;
      dVar12 = CONCAT44D(uVar4,fVar11);
      dVar8 = (double)((ulonglong)in_dr0 & 0xffffffff);
      if (cVar14 == '\0') {
        bVar13 = fVar11 < 0.0;
      }
      else {
        bVar13 = dVar12 < dVar8;
      }
      if (bVar13) {
        if (cVar15 == '\0') {
          dVar8 = CONCAT44D(0x4f800000,SUB84(in_dr0,0));
        }
        else {
          dVar8 = 8192.002426147461;
        }
        if (cVar14 == '\0') {
          dVar12 = CONCAT44D(uVar4,fVar11 + F32HI(dVar8));
        }
        else {
          dVar12 = dVar12 + dVar8;
        }
      }
      if (cVar15 == '\0') {
        dVar8 = CONCAT44D(0x3f000000,SUB84(dVar8,0));
      }
      else {
        dVar8 = 524288.123046875;
      }
      if (cVar14 == '\0') {
        dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),
                                  F32LO(dVar12) * F32HI(dVar8));
      }
      else {
        dVar12 = dVar12 * dVar8;
      }
      if (cVar15 == '\0') {
        in_xd12 = CONCAT44D(SUB84(dVar12,0),0x41200000);
      }
      fVar11 = F32HI(dVar7);
      if (cVar14 == '\0') {
        fVar10 = F32HI(in_xd12) - F32LO(in_xd12);
        in_xd12 = CONCAT44D(fVar10,SUB84(in_xd12,0));
        bVar13 = fVar11 < fVar10;
      }
      else {
        in_xd12 = in_xd12 - in_xd12;
        bVar13 = dVar7 < in_xd12;
      }
      if (!bVar13) {
        if (cVar15 == '\0') {
          in_xd12 = CONCAT44D(0x41200000,SUB84(in_xd12,0));
        }
        else {
          in_xd12 = 134217760.5625;
        }
        if (cVar14 == '\0') {
          bVar13 = fVar11 < F32LO(dVar12) + F32HI(in_xd12);
        }
        else {
          bVar13 = dVar7 < dVar12 + in_xd12;
        }
        if (bVar13) {
          if (cVar15 == '\0') {
            in_xd12 = (double)((ulonglong)in_xd12 & 0xffffffff);
          }
          else {
            in_xd12 = *(double *)(unsigned)(ar4 + 0x278);
          }
          (vsp = ((unsigned long)(fr0_ - 264)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x6c)),uVar5,ar6,ar7));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x7c))); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x6c)),ar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 264)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x7c)),ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 264)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 264)), object_dtor_delete(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 264)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7));
        }
      }
      uVar4 = SUB84(in_xd12,0);
      iVar3 = (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0x278,ar6,ar7));
      if (iVar3 == 1) {
        if (cVar15 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f800000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x278) = CONCAT44(0x3f800000,uVar4);
        }
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
      break;
    case 5:
      ar7 = 0;
      ar6 = -1;
      uVar4 = 0x1e;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1e,0xffffffff,0));
      if (iVar3 != 6) {
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6,ar7));
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      iVar3 = ar4;
    case 6:
      uVar4 = SUB84(in_dr0,0);
      iVar3 = (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar3,ar6,ar7));
      if (iVar3 == 1) {
        if (cVar15 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f800000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x278) = CONCAT44(0x3f800000,uVar4);
        }
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
      break;
    case 7:
      ar7 = 0;
      uVar4 = 0xffffffff;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1f,0xffffffff,0));
      if (iVar3 != 6) {
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,((void *)0x8c033e68),uVar4,ar7));
      }
      ar6 = *(int *)(unsigned)(ar4 + 300) + 1;
      *(int *)(unsigned)(ar4 + 300) = ar6;
    case 8:
      iVar3 = (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,ar6,ar7));
      if (iVar3 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
      break;
    case 9:
      uVar6 = 0;
      uVar5 = 0xffffffff;
      uVar4 = 0x3f;
      (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x3f,0xffffffff,0));
      if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,uVar5,uVar6));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar5,uVar6));
      }
      ar7 = *(int *)(unsigned)(ar4 + 300);
      ar6 = ar7 + 1;
      *(int *)(unsigned)(ar4 + 300) = ar6;
    case 10:
      iVar3 = (vsp = ((unsigned long)(fr0_ - 264)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0x278,ar6,ar7));
      if (iVar3 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c05a54c\n.set _FUN_8c05a54c, _FUN_8c05a54c_def\n");
//@unit 8c05ae54
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c05ae54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05ae54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 92; for (int i_ = 0; i_ < 92; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  undefined4 uVar2;
  float in_fr1 = 0;
  float fVar3;
  double dVar4;
  undefined4 in_fr4 = 0;
  undefined8 in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  (vsp = ((unsigned long)(fr0_ - 92)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28))); *(unsigned *)((((unsigned long)(fr0_ - 92)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 92)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 92)), Vec3_length(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 92)), Vec3_assign(((undefined1 *)(fr0_ - 0x18)),uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 92)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  if (cVar6 == '\0') {
    in_fr1 = *(float *)(unsigned)(ar4 + 0x2c);
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2c);
  }
  if (cVar5 == '\0') {
    (*(float *)(fr0_ - 0x58)) = in_fr1 + 1.0;
  }
  else {
    (*(float *)(fr0_ - 0x58)) = SUB84(CONCAT44D(0x3f800000,in_fr1) + CONCAT44D(0x3f800000,in_fr1),0);
  }
  (*(int *)(fr0_ - 0x54)) = ar4;
  if (cVar6 != '\0') {
    (*(float *)(fr0_ - 0x58)) = (float)in_xd0;
    (*(int *)(fr0_ - 0x54)) = (int)((ulonglong)in_xd0 >> 0x20);
  }
  if (cVar6 == '\0') {
    *(float *)(unsigned)((*(int *)(fr0_ - 0x54)) + 0x2c) = (*(float *)(fr0_ - 0x58));
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),(*(float *)(fr0_ - 0x58)));
  }
  else {
    *(ulonglong *)(unsigned)((*(int *)(fr0_ - 0x54)) + 0x2c) = CONCAT44((*(int *)(fr0_ - 0x54)),(*(float *)(fr0_ - 0x58)));
    in_xd0 = CONCAT44((*(int *)(fr0_ - 0x54)),(*(float *)(fr0_ - 0x58)));
    dVar4 = *(double *)(unsigned)(ar4 + 0x38);
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) / F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(in_fr4,fVar3);
  }
  else {
    dVar4 = CONCAT44D((*(float *)(fr0_ - 0x58)),in_fr4);
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) / F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  uVar1 = in_xd0;
  if (cVar6 == '\0') {
    (*(undefined8 *)(fr0_ - 0x4c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x4c))+4)),fVar3);
    uVar1 = (*(undefined8 *)(fr0_ - 0x4c));
  }
  (*(undefined8 *)(fr0_ - 0x4c)) = uVar1;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 92)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 92)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x18)),&(*(undefined8 *)(fr0_ - 0x4c)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c023aa0(ar4 + 0x14,((undefined1 *)(fr0_ - 0x38)),ar6,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 92)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 92)), Vec3_normalize(ar4 + 0x14,uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 92)), Vec3_assign(ar4 + 0x14,(int)&(*(undefined8 *)(fr0_ - 0x4c)) + 4,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 92)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x4c)) + 4,0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 92)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 92)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c05ae54\n.set _FUN_8c05ae54, _FUN_8c05ae54_def\n");
//@unit 8c05af78
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c05af78_def(int ar4,double *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05af78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 928; for (int i_ = 0; i_ < 928; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  code *ar5_00;
  double *pdVar3;
  ulonglong *ar5_01;
  undefined1 *puVar4;
  int ar6_00;
  float fVar5;
  float fVar6;
  double in_dr0 = 0;
  undefined4 uVar8;
  double dVar7;
  float fVar9;
  double in_dr14 = 0;
  double dVar10;
  double in_xd0 = 0;
  bool bVar11;
  bool bVar12;
  char cVar13;
  char cVar14;
  
  cVar14 = '\0';
  cVar13 = '\0';
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  ar5_00 = ((void *)0x8c022c4c);
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x38)),((void *)0x8c022c4c),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x48)),ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x58)),ar5_00,ar6_00,ar7));
  pdVar3 = ar5;
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x68)),ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 928)), vec3_clear(ar4 + 0x200,pdVar3,ar6_00,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x304) = 0;
  ar5_01 = ((ulonglong *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 0x84));
  if ((ar5_01 != (ulonglong *)(unsigned)0x0) && ((*(byte *)(unsigned)(ar4 + 0x1fc) & 0x3f) >> 5 != 0)) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x98))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c02f670(*(undefined4 *)(unsigned)(ar6 + 0x70),((undefined1 *)(fr0_ - 0x98)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(ar4 + 0x308,((undefined1 *)(fr0_ - 0x98)),ar6_00,ar7));
    ar5_01 = (ulonglong *)(unsigned)0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,ar6_00,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x318) = 1;
  }
  if ((*(int *)(unsigned)(ar6 + 0x68) != 0) && ((int)((uint)*(byte *)(unsigned)(ar4 + 0x1fc) << 0x1e) < 0)) {
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x48)),ar5,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x58)),*(int *)(unsigned)(ar6 + 0x68) + 4,ar6_00,ar7));
    if (cVar14 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar6 + 0x68) + 0x158));
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa8))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0xa8)),ar6_00,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x28)),uVar2,ar6_00,ar7));
    uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (cVar14 == '\0') {
      in_dr0 = CONCAT44D(uVar2,*(undefined4 *)(unsigned)(ar4 + 0x48));
      dVar7 = in_xd0;
      (*(undefined4 *)(fr0_ - 0x364)) = uVar2;
    }
    else {
      (*(undefined4 *)(fr0_ - 0x364)) = SUB84(in_dr0,0);
      dVar7 = *(double *)(unsigned)(ar4 + 0x48);
      (*(undefined4 *)(fr0_ - 0x360)) = uVar2;
    }
    if (cVar13 == '\0') {
      fVar5 = F32LO(in_dr0) + F32LO(in_dr14);
    }
    else {
      fVar5 = SUB84(in_dr0 + in_dr14,0);
    }
    if (cVar14 == '\0') {
      dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0x364)),fVar5);
    }
    else {
      dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0x360)),(*(undefined4 *)(fr0_ - 0x364)));
    }
    if (cVar13 == '\0') {
      fVar5 = F32LO(dVar10) - F32HI(dVar10);
    }
    else {
      fVar5 = SUB84(dVar10 - dVar10,0);
    }
    if (cVar14 == '\0') {
      dVar10 = CONCAT44D(0x3dcccccd,fVar5);
    }
    else {
      dVar10 = -7.93713999303812e-251;
    }
    if (cVar13 == '\0') {
      fVar5 = F32LO(dVar10) * F32HI(dVar10);
    }
    else {
      fVar5 = SUB84(dVar10 * dVar10,0);
    }
    dVar10 = dVar7;
    if (cVar14 == '\0') {
      (*(undefined8 *)(fr0_ - 0x34c)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x34c))+4)),fVar5);
      dVar10 = (*(undefined8 *)(fr0_ - 0x34c));
    }
    (*(undefined8 *)(fr0_ - 0x34c)) = dVar10;
    dVar10 = (*(undefined8 *)(fr0_ - 0x34c));
    if ((cVar13 == '\0' && fVar5 < 0.0) && (dVar10 = (double)(ulonglong)(uint)fVar5, cVar14 == '\0')
       ) {
      (*(undefined8 *)(fr0_ - 0x34c)) = (double)((ulonglong)(*(undefined8 *)(fr0_ - 0x34c)) & 0xffffffff00000000);
      dVar10 = (*(undefined8 *)(fr0_ - 0x34c));
    }
    (*(undefined8 *)(fr0_ - 0x34c)) = dVar10;
    dVar10 = (double)(ulonglong)(uint)fVar5;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_length(((undefined1 *)(fr0_ - 0x28)),ar4 + 0x48,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_length_sq(ar4 + 4,((void *)0x8c022e78),ar6_00,ar7));
    in_xd0 = dVar10;
    if (cVar14 == '\0') {
      dVar10 = (double)(D2U(dVar10) >> 0x20);
      in_xd0 = dVar7;
    }
    fVar5 = F32LO(dVar10);
    if (cVar13 == '\0' && 0.0 < fVar5) {
      if (*(int *)(unsigned)(ar4 + 0x2b8) == 7) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb8))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_scale(ar4 + 0x14,((undefined1 *)(unsigned)0x8c1365f4),ar6_00,ar7); });
        puVar4 = ((undefined1 *)(fr0_ - 0xb8));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc8))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x28)),puVar4,ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_normalize(((undefined1 *)(fr0_ - 0xc8)),puVar4,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0xd8)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,ar6_00,ar7));
      }
      else {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe8))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_scale(ar4 + 0x14,((undefined1 *)(unsigned)0x8c1365f8),ar6_00,ar7); });
        puVar4 = ((undefined1 *)(fr0_ - 0xe8));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf8))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x28)),puVar4,ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_normalize(((undefined1 *)(fr0_ - 0xf8)),puVar4,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x108)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x108)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf8)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe8)),0xffffffff,ar6_00,ar7));
      }
    }
    (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023bf4(((undefined1 *)(fr0_ - 0x28)),&(*(undefined8 *)(fr0_ - 0x34c)),ar6_00,ar7));
    in_dr0 = (double)(ulonglong)(uint)fVar5;
    dVar7 = in_dr0;
    if (cVar14 == '\0') {
      (*(undefined8 *)(fr0_ - 0x24)) = (double)((ulonglong)(*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x24))+4)) << 0x20);
      dVar7 = (*(undefined8 *)(fr0_ - 0x24));
    }
    (*(undefined8 *)(fr0_ - 0x24)) = dVar7;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(ar4 + 0x200,((undefined1 *)(fr0_ - 0x28)),ar6_00,ar7));
    if ((2 < *(int *)(unsigned)(ar4 + 0x128)) && (*(int *)(unsigned)(ar4 + 0x330) == 1)) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x118))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0x48)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x78)),((undefined1 *)(fr0_ - 0x118)),ar6_00,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x118)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x124)),uVar2,ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x134))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x78)),((undefined1 *)(fr0_ - 0x124)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x78)),((undefined1 *)(fr0_ - 0x134)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x134)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), object_dtor_delete(((undefined1 *)(fr0_ - 0x124)),0xffffffff,ar6_00,ar7));
      puVar4 = ((undefined1 *)(fr0_ - 0x78));
      (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c022d14(ar4 + 0x14,puVar4,ar6_00,ar7));
      dVar7 = in_dr0;
      if (cVar14 == '\0') {
        dVar7 = (double)((ulonglong)in_dr0 >> 0x20);
        in_dr0 = in_xd0;
      }
      in_xd0 = in_dr0;
      in_dr0 = (double)(D2U(dVar7) & 0xffffffff);
      if (cVar13 == '\0' && 0.0 < SUB84(dVar7,0)) {
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x15c)),puVar4,ar6_00,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x16c))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x15c)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x16c)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x16c)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), object_dtor_delete(((undefined1 *)(fr0_ - 0x15c)),0xffffffff,ar6_00,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x140)),puVar4,ar6_00,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x140)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x150)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x150)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), object_dtor_delete(((undefined1 *)(fr0_ - 0x140)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023bf4(((undefined1 *)(fr0_ - 0x78)),((undefined1 *)(unsigned)0x8c1365fc),ar6_00,ar7));
      }
      (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023bf4(ar4 + 0x200,((undefined1 *)(unsigned)0x8c136600),ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x17c))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x78)),((undefined1 *)(unsigned)0x8c136604),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023aa0(ar4 + 0x200,((undefined1 *)(fr0_ - 0x17c)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x17c)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6_00,ar7));
    }
    ar5_01 = (ulonglong *)(unsigned)0x1;
    *(undefined4 *)(unsigned)(ar4 + 0x304) = 1;
  }
  if ((*(int *)(unsigned)(ar6 + 100) != 0) && ((int)((uint)*(byte *)(unsigned)(ar4 + 0x1fc) << 0x1d) < 0)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 928)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar6 + 0x50),ar5_01,ar6_00,ar7));
    if ((iVar1 == 0xf) ||
       ((iVar1 = (vsp = ((unsigned long)(fr0_ - 928)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar6 + 0x50),ar5_01,ar6_00,ar7)), iVar1 == 10 ||
        (iVar1 = (vsp = ((unsigned long)(fr0_ - 928)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar6 + 0x50),ar5_01,ar6_00,ar7)), iVar1 == 0xd)))
       ) {
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
      return uVar2;
    }
    (vsp = ((unsigned long)(fr0_ - 928)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8) + 0x170))))
              (*(int *)(unsigned)(ar6 + 0x50),ar5_01,ar6_00,ar7));
    (*(undefined4 *)(fr0_ - 0x37c)) = SUB84(in_dr0,0);
    uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (cVar14 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),uVar2);
      dVar7 = CONCAT44D(0x3a83126f,(*(undefined4 *)(fr0_ - 0x37c)));
      (*(undefined4 *)(fr0_ - 0x37c)) = uVar2;
    }
    else {
      dVar7 = 1.85086533838489e-311;
    }
    if (cVar13 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 F32LO(in_dr14) + F32HI(dVar7));
    }
    else {
      in_dr14 = in_dr14 + dVar7;
    }
    pdVar3 = ar5;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x48)),ar5,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x18c))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c02f670(*(undefined4 *)(unsigned)(ar6 + 0x50),pdVar3,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0x18c)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18c)),0xffffffff,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x19c))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x19c)),ar6_00,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x19c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x28)),uVar2,ar6_00,ar7));
    uVar8 = (undefined4)(D2U(dVar7) >> 0x20);
    if (cVar14 == '\0') {
      dVar7 = CONCAT44D(uVar8,*(undefined4 *)(unsigned)(ar4 + 0x48));
      (*(undefined4 *)(fr0_ - 0x380)) = uVar8;
    }
    else {
      (*(undefined4 *)(fr0_ - 0x380)) = SUB84(dVar7,0);
      in_xd0 = *(double *)(unsigned)(ar4 + 0x48);
      (*(undefined4 *)(fr0_ - 0x37c)) = uVar8;
    }
    if (cVar13 == '\0') {
      fVar5 = F32LO(dVar7) + F32LO(in_dr14);
    }
    else {
      fVar5 = SUB84(dVar7 + in_dr14,0);
    }
    if (cVar14 == '\0') {
      dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x380)),fVar5);
    }
    else {
      dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x37c)),(*(undefined4 *)(fr0_ - 0x380)));
    }
    if (cVar13 == '\0') {
      fVar5 = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar7 - dVar7,0);
    }
    if (cVar14 == '\0') {
      dVar7 = CONCAT44D(0x3dcccccd,fVar5);
    }
    else {
      dVar7 = -7.93713999303812e-251;
    }
    if (cVar13 == '\0') {
      fVar5 = F32LO(dVar7) * F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    dVar7 = in_xd0;
    if (cVar14 == '\0') {
      (*(undefined8 *)(fr0_ - 0x34c)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x34c))+4)),fVar5);
      dVar7 = (*(undefined8 *)(fr0_ - 0x34c));
    }
    (*(undefined8 *)(fr0_ - 0x34c)) = dVar7;
    dVar7 = (*(undefined8 *)(fr0_ - 0x34c));
    if ((cVar13 == '\0' && fVar5 < 0.0) && (dVar7 = (double)(ulonglong)(uint)fVar5, cVar14 == '\0'))
    {
      (*(undefined8 *)(fr0_ - 0x34c)) = (double)((ulonglong)(*(undefined8 *)(fr0_ - 0x34c)) & 0xffffffff00000000);
      dVar7 = (*(undefined8 *)(fr0_ - 0x34c));
    }
    (*(undefined8 *)(fr0_ - 0x34c)) = dVar7;
    dVar7 = (double)(ulonglong)(uint)fVar5;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_length(((undefined1 *)(fr0_ - 0x28)),uVar2,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023bf4(((undefined1 *)(fr0_ - 0x28)),&(*(undefined8 *)(fr0_ - 0x34c)),ar6_00,ar7));
    dVar10 = (*(undefined8 *)(fr0_ - 0x24));
    if (((*(int *)(unsigned)(ar4 + 0x124) != 0xf) && (*(int *)(unsigned)(ar4 + 0x124) != 0xf)) &&
       (dVar7 = (double)(D2U(dVar7) & 0xffffffff), dVar10 = dVar7, cVar14 == '\0')) {
      (*(undefined8 *)(fr0_ - 0x24)) = (double)((ulonglong)(*(undefined8 *)(fr0_ - 0x24)) & 0xffffffff00000000);
      dVar10 = (*(undefined8 *)(fr0_ - 0x24));
    }
    (*(undefined8 *)(fr0_ - 0x24)) = dVar10;
    puVar4 = ((undefined1 *)(fr0_ - 0x28));
    (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023aa0(ar4 + 0x200,puVar4,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8) + 0x13c))))
              (*(int *)(unsigned)(ar6 + 0x50),puVar4,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x1ac)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1ac)),0xffffffff,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1bc))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c0230f0(ar4 + 0x200,0x200,ar6_00,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1cc))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x38)),((void *)0x8c0230f0),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x1bc)),((undefined1 *)(fr0_ - 0x1cc)),ar6_00,ar7));
    (*(float *)(fr0_ - 0x398)) = F32HI(dVar7);
    if (cVar14 == '\0') {
      fVar5 = 5.0;
      dVar7 = in_xd0;
    }
    else {
      (*(float *)(fr0_ - 0x398)) = 5.0;
      fVar5 = 6.55808e-43;
    }
    bVar12 = cVar13 == '\0';
    bVar11 = (*(float *)(fr0_ - 0x398)) < fVar5;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1cc)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1bc)),0xffffffff,ar6_00,ar7));
    if (bVar12 && bVar11) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1dc))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x1dc)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1dc)),0xffffffff,ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1ec))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c0230f0(ar4 + 0x200,ar4 + 0x200,ar6_00,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1fc))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x28)),ar6_00,ar7); });
      fVar6 = (*(float *)(fr0_ - 0x398));
      (*(float *)(fr0_ - 0x398)) = fVar5;
      (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x1ec)),((undefined1 *)(fr0_ - 0x1fc)),ar6_00,ar7));
      if (cVar14 == '\0') {
        fVar5 = 5.0;
      }
      else {
        dVar7 = CONCAT44D((*(float *)(fr0_ - 0x398)),fVar6);
        (*(float *)(fr0_ - 0x398)) = 5.0;
        fVar5 = 6.55808e-43;
      }
      bVar12 = cVar13 == '\0';
      bVar11 = (*(float *)(fr0_ - 0x398)) < fVar5;
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1fc)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1ec)),0xffffffff,ar6_00,ar7));
      if (bVar12 && bVar11) {
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x208)),((void *)0x8c023d68),ar6_00,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x218))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c023484(ar4 + 0x200,((undefined1 *)(fr0_ - 0x208)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(ar4 + 0x200,((undefined1 *)(fr0_ - 0x218)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x218)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), object_dtor_delete(((undefined1 *)(fr0_ - 0x208)),0xffffffff,ar6_00,ar7));
      }
    }
    if ((2 < *(int *)(unsigned)(ar4 + 0x128)) && (*(int *)(unsigned)(ar4 + 0x330) == 1)) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x228))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0x48)),ar6_00,ar7); });
      fVar6 = (*(float *)(fr0_ - 0x398));
      (*(float *)(fr0_ - 0x398)) = fVar5;
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x88)),((undefined1 *)(fr0_ - 0x228)),ar6_00,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x228)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x234)),uVar2,ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x244))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x88)),((undefined1 *)(fr0_ - 0x234)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x88)),((undefined1 *)(fr0_ - 0x244)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x244)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), object_dtor_delete(((undefined1 *)(fr0_ - 0x234)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c022d14(ar4 + 0x14,((undefined1 *)(fr0_ - 0x88)),ar6_00,ar7));
      if (cVar14 != '\0') {
        dVar7 = CONCAT44D((*(float *)(fr0_ - 0x398)),fVar6);
        (*(float *)(fr0_ - 0x398)) = fVar6;
      }
      fVar5 = 0.0;
      if (cVar13 == '\0' && 0.0 < (*(float *)(fr0_ - 0x398))) {
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x26c)),((undefined1 *)(fr0_ - 0x26c)),ar6_00,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x27c))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x26c)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x27c)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x27c)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), object_dtor_delete(((undefined1 *)(fr0_ - 0x26c)),0xffffffff,ar6_00,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x250)),((undefined1 *)(fr0_ - 0x250)),ar6_00,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x260))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x250)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x260)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x260)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), object_dtor_delete(((undefined1 *)(fr0_ - 0x250)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023bf4(((undefined1 *)(fr0_ - 0x88)),((undefined1 *)(unsigned)0x8c136608),ar6_00,ar7));
      }
      (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023bf4(ar4 + 0x200,((undefined1 *)(unsigned)0x8c13660c),ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28c))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x88)),((undefined1 *)(unsigned)0x8c136610),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023aa0(ar4 + 0x200,((undefined1 *)(fr0_ - 0x28c)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28c)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6_00,ar7));
    }
    uVar2 = 0x304;
    *(undefined4 *)(unsigned)(ar4 + 0x304) = 1;
    if (*(int *)(unsigned)(ar6 + 0x58) == 0) {
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
      return uVar2;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 928)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar6 + 0x58),0x304,ar6_00,ar7));
    if ((iVar1 == 0xf) ||
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 928)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar6 + 0x58),uVar2,ar6_00,ar7)), iVar1 == 10)) {
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
      return uVar2;
    }
    (vsp = ((unsigned long)(fr0_ - 928)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x58) + 8) + 0x170))))(*(int *)(unsigned)(ar6 + 0x58),iVar1,ar6_00,ar7))
    ;
    if (cVar14 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),fVar5);
      dVar10 = CONCAT44D(0x3a83126f,(*(float *)(fr0_ - 0x398)));
      (*(float *)(fr0_ - 0x398)) = fVar5;
    }
    else {
      dVar10 = 1.85086533838489e-311;
    }
    if (cVar13 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 F32LO(in_dr14) + F32HI(dVar10));
    }
    else {
      in_dr14 = in_dr14 + dVar10;
    }
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x48)),ar5,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x29c))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c02f670(*(undefined4 *)(unsigned)(ar6 + 0x58),(undefined4 *)(unsigned)(ar6 + 0x58),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0x29c)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x29c)),0xffffffff,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2ac))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x2ac)),ar6_00,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2ac)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x28)),uVar2,ar6_00,ar7));
    fVar5 = F32HI(dVar10);
    if (cVar14 == '\0') {
      dVar10 = CONCAT44D(fVar5,*(undefined4 *)(unsigned)(ar4 + 0x48));
      (*(float *)(fr0_ - 0x39c)) = fVar5;
    }
    else {
      (*(float *)(fr0_ - 0x39c)) = SUB84(dVar10,0);
      dVar7 = *(double *)(unsigned)(ar4 + 0x48);
      (*(float *)(fr0_ - 0x398)) = fVar5;
    }
    if (cVar13 == '\0') {
      fVar5 = F32LO(dVar10) + F32LO(in_dr14);
    }
    else {
      fVar5 = SUB84(dVar10 + in_dr14,0);
    }
    if (cVar14 == '\0') {
      dVar10 = CONCAT44D((*(float *)(fr0_ - 0x39c)),fVar5);
    }
    else {
      dVar10 = CONCAT44D((*(float *)(fr0_ - 0x398)),(*(float *)(fr0_ - 0x39c)));
    }
    if (cVar13 == '\0') {
      fVar5 = F32LO(dVar10) - F32HI(dVar10);
    }
    else {
      fVar5 = SUB84(dVar10 - dVar10,0);
    }
    if (cVar14 == '\0') {
      dVar10 = CONCAT44D(0x3dcccccd,fVar5);
    }
    else {
      dVar10 = -7.93713999303812e-251;
    }
    if (cVar13 == '\0') {
      fVar5 = F32LO(dVar10) * F32HI(dVar10);
    }
    else {
      fVar5 = SUB84(dVar10 * dVar10,0);
    }
    if (cVar14 == '\0') {
      (*(undefined8 *)(fr0_ - 0x34c)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x34c))+4)),fVar5);
      dVar7 = (*(undefined8 *)(fr0_ - 0x34c));
    }
    (*(undefined8 *)(fr0_ - 0x34c)) = dVar7;
    dVar7 = (*(undefined8 *)(fr0_ - 0x34c));
    if ((cVar13 == '\0' && fVar5 < 0.0) && (dVar7 = (double)(ulonglong)(uint)fVar5, cVar14 == '\0'))
    {
      (*(undefined8 *)(fr0_ - 0x34c)) = (double)((ulonglong)(*(undefined8 *)(fr0_ - 0x34c)) & 0xffffffff00000000);
      dVar7 = (*(undefined8 *)(fr0_ - 0x34c));
    }
    (*(undefined8 *)(fr0_ - 0x34c)) = dVar7;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_length(((undefined1 *)(fr0_ - 0x28)),uVar2,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023bf4(((undefined1 *)(fr0_ - 0x28)),&(*(undefined8 *)(fr0_ - 0x34c)),ar6_00,ar7));
    dVar10 = (double)(ulonglong)(uint)fVar5;
    dVar7 = dVar10;
    if (cVar14 == '\0') {
      (*(undefined8 *)(fr0_ - 0x24)) = (double)((ulonglong)(*(undefined8 *)(fr0_ - 0x24)) & 0xffffffff00000000);
      dVar7 = (*(undefined8 *)(fr0_ - 0x24));
    }
    (*(undefined8 *)(fr0_ - 0x24)) = dVar7;
    puVar4 = ((undefined1 *)(fr0_ - 0x28));
    (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023aa0(ar4 + 0x200,puVar4,ar6_00,ar7));
    fVar5 = F32HI(dVar10);
    (vsp = ((unsigned long)(fr0_ - 928)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8) + 0x13c))))
              (*(int *)(unsigned)(ar6 + 0x50),puVar4,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x2bc)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2bc)),0xffffffff,ar6_00,ar7));
    iVar1 = ar4 + 0x200;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2cc))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c0230f0(iVar1,iVar1,ar6_00,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2dc))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x38)),iVar1,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x2cc)),((undefined1 *)(fr0_ - 0x2dc)),ar6_00,ar7));
    if (cVar14 == '\0') {
      fVar6 = 5.0;
    }
    else {
      fVar5 = 5.0;
      fVar6 = 2.74654e-43;
    }
    bVar12 = cVar13 == '\0';
    bVar11 = fVar5 < fVar6;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2dc)),0xffffffff,ar6_00,ar7));
    ar5_01 = (ulonglong *)(unsigned)0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2cc)),0xffffffff,ar6_00,ar7));
    if (bVar12 && bVar11) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2ec))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x2ec)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2ec)),0xffffffff,ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2fc))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c0230f0(ar4 + 0x200,((void *)0x8c0230f0),ar6_00,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30c))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x28)),((void *)0x8c0230f0),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x2fc)),((undefined1 *)(fr0_ - 0x30c)),ar6_00,ar7));
      if (cVar14 == '\0') {
        fVar5 = 5.0;
      }
      else {
        fVar6 = 5.0;
        fVar5 = 2.74654e-43;
      }
      bVar12 = cVar13 == '\0';
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30c)),0xffffffff,ar6_00,ar7));
      ar5_01 = (ulonglong *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2fc)),0xffffffff,ar6_00,ar7));
      if (bVar12 && fVar6 < fVar5) {
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x318)),ar5_01,ar6_00,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x328))); *(unsigned *)((((unsigned long)(fr0_ - 928)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 928)) - 8); FUN_8c023484(ar4 + 0x200,((undefined1 *)(fr0_ - 0x318)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_assign(ar4 + 0x200,((undefined1 *)(fr0_ - 0x328)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x328)),0xffffffff,ar6_00,ar7));
        ar5_01 = (ulonglong *)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 928)), object_dtor_delete(((undefined1 *)(fr0_ - 0x318)),0xffffffff,ar6_00,ar7));
      }
    }
    *(undefined4 *)(unsigned)(ar4 + 0x304) = 1;
  }
  if (2 < *(int *)(unsigned)(ar4 + 0x128)) {
    if (cVar14 == '\0') {
      dVar7 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      dVar7 = 7.67384666056308e+21;
    }
    if (cVar13 == '\0') {
      fVar5 = F32HI(dVar7);
      dVar7 = CONCAT44D(fVar5,F32LO(dVar7) * fVar5);
    }
    else {
      dVar7 = dVar7 * dVar7;
    }
    if (cVar14 == '\0') {
      dVar10 = CONCAT44D(0x447a0000,SUB84(in_dr14,0));
    }
    else {
      dVar10 = -7.933010971859645e-251;
    }
    if (cVar13 == '\0') {
      dVar10 = CONCAT44D(F32HI(dVar10) - F32LO(dVar7),SUB84(dVar10,0))
      ;
    }
    else {
      dVar10 = dVar10 - dVar7;
    }
    if (cVar14 == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)ar5,SUB84(dVar7,0));
    }
    else {
      dVar7 = *ar5;
    }
    fVar5 = F32HI(dVar10);
    if (cVar13 == '\0') {
      bVar12 = fVar5 < F32HI(dVar7);
    }
    else {
      bVar12 = dVar10 < dVar7;
    }
    if (!bVar12) {
      if (cVar14 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x200),*(undefined4 *)(unsigned)ar5);
      }
      else {
        dVar7 = *(double *)(unsigned)(ar4 + 0x200);
      }
      if (cVar13 == '\0') {
        fVar6 = F32LO(dVar7) + F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar14 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),fVar6);
      }
      else {
        dVar7 = *(double *)(unsigned)(ar4 + 0x48);
      }
      if (cVar13 == '\0') {
        fVar9 = F32HI(dVar7);
        fVar6 = F32LO(dVar7) + fVar9;
        dVar7 = CONCAT44D(fVar9,fVar6);
        bVar12 = fVar6 < fVar5;
      }
      else {
        dVar7 = dVar7 + dVar7;
        bVar12 = dVar7 < dVar10;
      }
      if (!bVar12) {
        ar5_01 = (ulonglong *)(unsigned)(ar4 + 0x200);
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)ar5_01 = 0;
        }
        else {
          *ar5_01 = D2U(dVar7) & 0xffffffff;
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x338)),ar5_01,ar6_00,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023d04(ar4 + 0x200,((undefined1 *)(fr0_ - 0x338)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x338)),0xffffffff,ar6_00,ar7));
  if (iVar1 != 0) {
    (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c032ab0(ar4,iVar1,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c032ab0(ar4,iVar1,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_ctor_xyz((int)&(*(undefined8 *)(fr0_ - 0x34c)) + 4,(int)&(*(undefined8 *)(fr0_ - 0x34c)) + 4,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), FUN_8c023aa0(ar4 + 0x200,(int)&(*(undefined8 *)(fr0_ - 0x34c)) + 4,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x34c)) + 4,0xffffffff,ar6_00,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 928)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c05af78\n.set _FUN_8c05af78, _FUN_8c05af78_def\n");
//@unit 8c05c258
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c05c258_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05c258";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(s0,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c05c258\n.set _FUN_8c05c258, _FUN_8c05c258_def\n");
//@unit 8c05c27c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_3f800000_05c27c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_3f800000_05c27c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _ret_const_3f800000_05c27c\n.set _ret_const_3f800000_05c27c, _ret_const_3f800000_05c27c_def\n");
//@unit 8c05c284
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_24_05c284_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_24_05c284";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x24);
}

__asm__(".globl _get_field_24_05c284\n.set _get_field_24_05c284, _get_field_24_05c284_def\n");
//@unit 8c05c28c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c05c28c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05c28c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 112; for (int i_ = 0; i_ < 112; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined8 in_dr0 = 0;
  double dVar5;
  ulonglong uVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  double in_dr12 = 0;
  undefined4 uVar9;
  double in_dr14 = 0;
  undefined8 in_xd0 = 0;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar2 = 1;
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_ctor_xyz((int)&(*(undefined8 *)(fr0_ - 0x30)) + 4,ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x2b8) == 2) {
    uVar2 = 0;
    goto LAB_8c05c608;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x6c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 112)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7); });
  if (cVar12 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x128);
  uVar8 = (undefined4)in_dr0;
  uVar9 = SUB84(in_dr14,0);
  if (iVar1 == 1) {
    if (cVar12 == '\0') {
      in_dr14 = CONCAT44D(0x41980000,uVar9);
      in_dr12 = 33554440.21484375;
      in_dr0 = CONCAT44(0x41d80000,uVar8);
      (*(undefined8 *)(fr0_ - 0x30)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30))+4)),0x41d80000);
    }
    else {
      in_dr14 = 402653249.59375;
      in_dr12 = 1610612998.0;
      in_dr0 = 0xfe08c70541d80000;
      (*(undefined8 *)(fr0_ - 0x30)) = -1.296348781552367e+299;
    }
  }
  else if (iVar1 == 2) {
    if (cVar12 == '\0') {
      in_dr14 = CONCAT44D(0x41300000,uVar9);
      in_dr12 = 1048576.2567138672;
      in_dr0 = CONCAT44(0x41b80000,uVar8);
      (*(undefined8 *)(fr0_ - 0x30)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30))+4)),0x41b80000);
    }
    else {
      in_dr14 = 402653249.1875;
      in_dr12 = 402653249.1875;
      in_dr0 = 0xfe08c70541b80000;
      (*(undefined8 *)(fr0_ - 0x30)) = -1.2963487811625545e+299;
    }
  }
  else if (iVar1 == 3) {
    if (cVar12 == '\0') {
      in_dr14 = CONCAT44D(0x41700000,uVar9);
      in_dr12 = 4294968348.5;
      in_dr0 = CONCAT44(0x42200000,uVar8);
      (*(undefined8 *)(fr0_ - 0x30)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30))+4)),0x42200000);
    }
    else {
      in_dr14 = 805306498.875;
      in_dr12 = 34359746808.0;
      in_dr0 = 0xfe08c70f42200000;
      (*(undefined8 *)(fr0_ - 0x30)) = -1.2963567657906834e+299;
    }
  }
  else if (iVar1 == 4) {
    if (cVar12 == '\0') {
      in_dr14 = CONCAT44D(0x41600000,uVar9);
      in_dr12 = 15032387641.0;
      in_dr0 = CONCAT44(0x42280000,uVar8);
      (*(undefined8 *)(fr0_ - 0x30)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30))+4)),0x42280000);
    }
    else {
      in_dr14 = 805306498.75;
      in_dr12 = 51539616006.0;
      in_dr0 = 0x12842280000;
      (*(undefined8 *)(fr0_ - 0x30)) = 6.28659126329025e-312;
    }
  }
  uVar8 = (undefined4)in_dr0;
  if (*(int *)(unsigned)(ar4 + 0x128) < 3) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 112)), get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7));
    fVar4 = F32LO(in_dr14);
    if (iVar1 == 5) {
      if (cVar11 == '\0' && F32HI(in_dr14) < fVar4) {
        if (cVar11 == '\0') {
          bVar10 = fVar4 < SUB84(in_dr12,0);
        }
        else {
          bVar10 = in_dr14 < in_dr12;
        }
        if (bVar10) {
          if (cVar12 == '\0') {
            dVar5 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
            dVar5 = 7.498589249951456e+86;
          }
          if (cVar11 == '\0') {
            fVar4 = F32LO(dVar5) + F32HI(dVar5);
          }
          else {
            fVar4 = SUB84(dVar5 + dVar5,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)(ar4 + 0x28) = fVar4;
            uVar7 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
            uVar7 = *(undefined8 *)(unsigned)(ar4 + 0x24);
          }
          if (cVar11 == '\0' && F32HI(uVar7) < (float)uVar7) {
            if (cVar12 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x28) = *(undefined8 *)(unsigned)(ar4 + 0x24);
            }
          }
          goto LAB_8c05c5ec;
        }
      }
      if (cVar12 == '\0') {
        dVar5 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar5 = -4.794955196358332e-255;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar4;
        fVar4 = *(float *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
      if (cVar11 == '\0' && fVar4 < 0.0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar4;
        }
      }
    }
    else if (iVar1 == 6) {
      if (cVar11 == '\0') {
        bVar10 = F32HI(in_dr12) < fVar4;
      }
      else {
        bVar10 = in_dr12 < in_dr14;
      }
      if (bVar10) {
        dVar5 = (*(undefined8 *)(fr0_ - 0x30));
        if (cVar12 == '\0') {
          dVar5 = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x30)),uVar8);
        }
        if (cVar11 == '\0') {
          bVar10 = fVar4 < F32HI(dVar5);
        }
        else {
          bVar10 = in_dr14 < dVar5;
        }
        if (bVar10) {
          if (cVar12 == '\0') {
            dVar5 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
            dVar5 = 6.876925718751272e+86;
          }
          if (cVar11 == '\0') {
            fVar4 = F32LO(dVar5) + F32HI(dVar5);
          }
          else {
            fVar4 = SUB84(dVar5 + dVar5,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)(ar4 + 0x28) = fVar4;
            uVar7 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
            uVar7 = *(undefined8 *)(unsigned)(ar4 + 0x24);
          }
          if (cVar11 == '\0' && F32HI(uVar7) < (float)uVar7) {
            if (cVar12 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x28) = *(undefined8 *)(unsigned)(ar4 + 0x24);
            }
          }
          goto LAB_8c05c5ec;
        }
      }
      if (cVar12 == '\0') {
        dVar5 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar5 = 6.566093943887814e+86;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar4;
        fVar4 = *(float *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
      if (cVar11 == '\0' && fVar4 < 0.0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar4;
        }
      }
    }
    else {
      if (cVar12 == '\0') {
        dVar5 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar5 = 1.0035827136752305e+178;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar4;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 112)), get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7));
    if (iVar1 == 6) {
      fVar4 = F32LO(in_dr14);
      if (cVar11 != '\0' || fVar4 <= F32HI(in_dr14)) {
LAB_8c05c538:
        if (cVar12 == '\0') {
          dVar5 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar5 = 1.3411048210842936e-08;
        }
        if (cVar11 == '\0') {
          fVar3 = F32LO(dVar5) - F32HI(dVar5);
        }
        else {
          fVar3 = SUB84(dVar5 - dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)(ar4 + 0x28) = fVar3;
          fVar3 = *(float *)(unsigned)(ar4 + 0x28);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        }
        uVar6 = (ulonglong)(uint)fVar3;
        if (cVar11 == '\0' && fVar3 < 0.0) {
          uVar6 = (ulonglong)(uint)fVar3;
          if (cVar12 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar6;
          }
        }
      }
      else {
        if (cVar11 == '\0') {
          bVar10 = fVar4 < SUB84(in_dr12,0);
        }
        else {
          bVar10 = in_dr14 < in_dr12;
        }
        if (!bVar10) goto LAB_8c05c538;
        if (cVar12 == '\0') {
          dVar5 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar5 = 5.944430421950997e+86;
        }
        if (cVar11 == '\0') {
          fVar3 = F32LO(dVar5) + F32HI(dVar5);
        }
        else {
          fVar3 = SUB84(dVar5 + dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)(ar4 + 0x28) = fVar3;
          uVar6 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          uVar6 = *(ulonglong *)(unsigned)(ar4 + 0x24);
        }
        if (cVar11 == '\0' && (float)(uVar6 >> 0x20) < (float)uVar6) {
          if (cVar12 == '\0') {
            uVar8 = *(undefined4 *)(unsigned)(ar4 + 0x24);
            uVar6 = CONCAT44(uVar8,(float)uVar6);
            *(undefined4 *)(unsigned)(ar4 + 0x28) = uVar8;
          }
          else {
            uVar6 = *(ulonglong *)(unsigned)(ar4 + 0x24);
            *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar6;
          }
        }
      }
      if (cVar11 == '\0') {
        bVar10 = F32HI(in_dr12) < fVar4;
      }
      else {
        bVar10 = in_dr12 < in_dr14;
      }
      if (bVar10) {
        dVar5 = (*(undefined8 *)(fr0_ - 0x30));
        if (cVar12 == '\0') {
          dVar5 = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x30)),(int)uVar6);
        }
        if (cVar11 == '\0') {
          bVar10 = fVar4 < F32HI(dVar5);
        }
        else {
          bVar10 = in_dr14 < dVar5;
        }
        if (bVar10) {
          if (cVar12 == '\0') {
            dVar5 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
            dVar5 = 5.322766890750813e+86;
          }
          if (cVar11 == '\0') {
            fVar4 = F32LO(dVar5) + F32HI(dVar5);
          }
          else {
            fVar4 = SUB84(dVar5 + dVar5,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)(ar4 + 0x28) = fVar4;
            uVar7 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
            uVar7 = *(undefined8 *)(unsigned)(ar4 + 0x24);
          }
          if (cVar11 == '\0' && F32HI(uVar7) < (float)uVar7) {
            if (cVar12 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x28) = *(undefined8 *)(unsigned)(ar4 + 0x24);
            }
          }
          goto LAB_8c05c5ec;
        }
      }
      if (cVar12 == '\0') {
        dVar5 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar5 = 6.545756141680556e+163;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar4;
        fVar4 = *(float *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
      if (cVar11 == '\0' && fVar4 < 0.0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar4;
        }
      }
    }
    else {
      if (cVar12 == '\0') {
        dVar5 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar5 = 3.73996784729797e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar4;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
    }
  }
LAB_8c05c5ec:
  iVar1 = (vsp = ((unsigned long)(fr0_ - 112)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
  if (iVar1 == 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
    uVar2 = 0;
  }
LAB_8c05c608:
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x30)) + 4,0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c05c28c\n.set _FUN_8c05c28c, _FUN_8c05c28c_def\n");
//@unit 8c05c640
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c05c640_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05c640";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  double in_dr0 = 0;
  float fVar9;
  double dVar8;
  undefined8 in_xd0 = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar6 = 1;
  if (*(int *)(unsigned)(ar4 + 0x31c) < 1) {
    if (*(int *)(unsigned)(ar4 + 0x324) == 0) {
      iVar1 = *(int *)(unsigned)(ar4 + 300);
      if ((iVar1 < 5) && (-1 < iVar1)) {
                    
        switch(iVar1) {
        case 0:
          uVar2 = ar5;
          iVar1 = ar6;
          iVar3 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7));
          fVar7 = F32HI(in_dr0);
          if (iVar3 == 0x11) {
            ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x5c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,iVar1,ar7); });
            if (cVar11 == '\0') {
              fVar9 = 190.0;
            }
            else {
              fVar7 = 190.0;
              fVar9 = 9.75304e-43;
            }
            if (cVar10 != '\0' || fVar7 <= fVar9) {
              *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
              *(undefined4 *)(unsigned)(ar4 + 300) = 3;
              return 1;
            }
          }
          if (ar6 == 1) {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c057164(ar4,ar5,iVar1,ar7));
            if (iVar1 == 0) {
              *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            }
          }
          else {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c05c28c(ar4,uVar2,iVar1,ar7));
            if (iVar1 == 0) {
              *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            }
          }
          break;
        case 1:
          *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
          iVar3 = ar4 + 0x34c;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c055c38(ar4,ar5,iVar3,ar6));
          if (iVar1 == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
            (vsp = ((unsigned long)(fr0_ - 96)), Vec3_assign(ar4 + 0x248,ar5,iVar3,ar6));
            (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c032ab0(ar4,ar5,iVar3,ar6));
            if (cVar11 == '\0') {
              in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x48)
                                       );
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
            }
            if (cVar10 == '\0') {
              fVar7 = F32HI(in_dr0);
              in_dr0 = CONCAT44D(fVar7,F32LO(in_dr0) * fVar7);
            }
            else {
              in_dr0 = in_dr0 * in_dr0;
            }
            if (cVar11 == '\0') {
              *(int *)(unsigned)(ar4 + 0x248) = SUB84(in_dr0,0);
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x248) = in_xd0;
            }
            (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c032ab0(ar4,ar5,iVar3,ar6));
            if (cVar11 == '\0') {
              in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x48)
                                       );
            }
            if (cVar10 == '\0') {
              fVar7 = F32LO(in_dr0) * F32HI(in_dr0);
            }
            else {
              fVar7 = SUB84(in_dr0 * in_dr0,0);
            }
            if (cVar11 == '\0') {
              dVar8 = CONCAT44D(0x44bb8000,fVar7);
            }
            else {
              dVar8 = -1.1449929295928696e+164;
            }
            if (cVar10 == '\0') {
              dVar8 = CONCAT44D(F32HI(dVar8) - F32LO(dVar8),
                                       SUB84(dVar8,0));
            }
            else {
              dVar8 = dVar8 - dVar8;
            }
            if (cVar11 == '\0') {
              *(int *)(unsigned)(ar4 + 0x250) = (int)(D2U(dVar8) >> 0x20);
            }
            else {
              *(double *)(unsigned)(ar4 + 0x250) = dVar8;
            }
          }
          break;
        case 2:
          *(undefined4 *)(unsigned)(ar4 + 700) = 0xffffffff;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c04c314(ar4,ar5,ar4 + 0x248,ar7));
          if (iVar1 == 0) {
            *(undefined4 *)(unsigned)(ar4 + 700) = 0;
            iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), rand_range(ar4,0,10,ar7));
            if (iVar1 < 5) {
              uVar5 = 0;
              uVar4 = 0xffffffff;
              uVar2 = 0x1e;
              iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1e,0xffffffff,0));
              if (iVar1 != 6) {
                (vsp = ((unsigned long)(fr0_ - 96)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar4,uVar5));
              }
              *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 2;
            }
            else {
              uVar5 = 0;
              uVar4 = 0xffffffff;
              uVar2 = 0x11;
              iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x11,0xffffffff,0));
              if (iVar1 != 6) {
                (vsp = ((unsigned long)(fr0_ - 96)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar4,uVar5));
              }
              *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            }
            *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
          }
          break;
        case 3:
          iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5,ar6,ar7));
          if (iVar1 == 7) {
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            uVar6 = 0;
          }
          break;
        case 4:
          iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7));
          if (iVar1 == 1) {
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
            uVar6 = 0;
          }
        }
      }
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

__asm__(".globl _FUN_8c05c640\n.set _FUN_8c05c640, _FUN_8c05c640_def\n");
//@unit 8c05c9fc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c05c9fc_def(int ar4,undefined1 *ar5,undefined1 *ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c05c9fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 288; for (int i_ = 0; i_ < 288; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  code *ar5_00;
  undefined4 *puVar4;
  undefined4 a5;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  float fVar8;
  uint uVar9;
  double dVar10;
  undefined4 uVar12;
  double dVar11;
  float fVar13;
  undefined4 in_fr3 = 0;
  undefined8 in_xd0 = 0;
  char cVar14;
  char cVar15;
  
  cVar15 = '\0';
  cVar14 = '\0';
  (*(undefined4 *)(fr0_ - 0x10)) = 1;
  uVar7 = 1;
  ar5_00 = ((void *)0x8c022c4c);
  puVar6 = ar6;
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x24)),((void *)0x8c022c4c),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_zero((int)&(*(undefined8 *)(fr0_ - 0x48)) + 4,ar5_00,ar6,ar7));
  puVar4 = ((undefined4 *)(unsigned)0x8c125bf0);
  (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x50)),((undefined4 *)(unsigned)0x8c125bf0),ar6,ar7));
  if (cVar15 == '\0') {
    dVar10 = 2.597301565578305e+22;
  }
  else {
    in_xd0 = 0;
    dVar10 = 6.62631198776065e-312;
  }
  if (cVar14 == '\0') {
    dVar10 = CONCAT44D(F32HI(dVar10) - F32LO(dVar10),SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 - dVar10;
  }
  dVar11 = dVar10;
  if (cVar15 == '\0') {
    (*(undefined8 *)(fr0_ - 0x48)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x48))+4)),(int)(D2U(dVar10) >> 0x20));
    dVar11 = (*(undefined8 *)(fr0_ - 0x48));
  }
  (*(undefined8 *)(fr0_ - 0x48)) = dVar11;
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c05c28c(ar4,((void *)0x8c05c28c),ar6,ar7));
    if (iVar1 == 0) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      uVar5 = *(undefined4 *)(unsigned)(ar4 + 0x244);
      if (cVar15 == '\0') {
        uVar2 = SUB84(dVar10,0);
        uVar12 = 0x40000000;
      }
      else {
        uVar2 = 0x40000000;
        uVar12 = 0x43b40000;
      }
      ar6 = ((undefined1 *)(fr0_ - 0x50));
      (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c032518(ar4,ar5,ar6,uVar5));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x60)),ar6,uVar5));
      a5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6,uVar5));
      (vsp = ((unsigned long)(fr0_ - 288)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)) + 0x184))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)),a5,ar6,uVar5));
      if (cVar15 == '\0') {
        dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),uVar12);
      }
      else {
        in_xd0 = CONCAT44(uVar12,uVar2);
        dVar10 = *(double *)(unsigned)(ar4 + 0x48);
      }
      if (cVar14 == '\0') {
        fVar8 = F32HI(dVar10);
        dVar10 = CONCAT44D(fVar8,F32LO(dVar10) - fVar8);
      }
      else {
        dVar10 = dVar10 - dVar10;
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x58) = SUB84(dVar10,0);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x58) = in_xd0;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_sub(ar4 + 0x54,ar5,ar6,uVar5); });
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_normalize(((undefined1 *)(fr0_ - 0x70)),((void *)0x8c022ec0),ar6,uVar5));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x90))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x80)),ar4 + 0x48,ar6,uVar5); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa0))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x90)),((undefined1 *)(unsigned)0x8c136614),ar6,uVar5); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0xa0)),ar6,uVar5); });
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(ar4 + 0x248,((undefined1 *)(fr0_ - 0xb0)),ar6,uVar5));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6,uVar5));
      ar7 = ((void *)0x8c022cb0);
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar6,((void *)0x8c022cb0)));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6,ar7));
      uVar5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 288)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)) + 0x184))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)),uVar5,ar6,ar7));
      if (cVar15 == '\0') {
        dVar10 = CONCAT44D((int)(D2U(dVar10) >> 0x20),in_fr3);
        dVar11 = CONCAT44D(0x3f000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
      }
      else {
        dVar11 = -2.4967168957076204e+265;
      }
      if (cVar14 == '\0') {
        dVar10 = CONCAT44D(F32HI(dVar10) -
                                  F32LO(dVar11) * F32HI(dVar11),
                                  SUB84(dVar10,0));
      }
      else {
        dVar10 = dVar10 - dVar11 * dVar11;
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x24c) = (int)(D2U(dVar10) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x24c) = dVar10;
      }
    }
  }
  else if (iVar1 == 1) {
    ar6 = (undefined1 *)(unsigned)(ar4 + 0x248);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 288)), pure_virtual_stub(ar4,ar5,ar6,ar7));
    if (iVar1 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = D2U(dVar10) & 0xffffffff;
      }
      ar7 = (code *)0x0;
      ar6 = (undefined1 *)(unsigned)0xffffffff;
      uVar5 = 0;
      (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,ar6,ar7));
    }
  }
  else if (iVar1 == 2) {
    (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c05ae54(ar4,puVar4,ar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc0))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_scale(ar4 + 0x14,((undefined1 *)(unsigned)0x8c136618),ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd0))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0xc0)),ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0xd0)),ar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,ar5,ar7));
    uVar5 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,ar5,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 288)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar5,ar5,ar7));
    ar6 = ar5;
    if (iVar1 == 1) {
      if (cVar15 == '\0') {
        fVar8 = *(float *)(unsigned)(ar4 + 0x18);
        fVar13 = 0.03;
      }
      else {
        fVar8 = 0.03;
        fVar13 = 4.14784e-43;
      }
      if (cVar14 != '\0' || fVar8 <= fVar13) {
        if (*(int *)(unsigned)(ar4 + 0x128) == 0) {
          ar7 = (code *)0x0;
          ar6 = (undefined1 *)(unsigned)0xffffffff;
          uVar5 = 0x14;
          (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x14,0xffffffff,0));
          uVar5 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c026db0(ar4,uVar5,ar6,ar7));
          uVar2 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c03c0f0(ar4 + 0xb0,uVar5,ar6,ar7));
          puVar4 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 288)), deref_u32(uVar2,uVar5,ar6,ar7));
          uVar2 = puVar4[1];
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar4;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar2;
          *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar4[2];
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c1362f4);
        }
        else if (*(int *)(unsigned)(ar4 + 0x128) == 1) {
          ar7 = (code *)0x0;
          ar6 = (undefined1 *)(unsigned)0xffffffff;
          uVar5 = 0x14;
          (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x14,0xffffffff,0));
          uVar5 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c026db0(ar4,uVar5,ar6,ar7));
          uVar2 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c03c0f0(ar4 + 0xb0,uVar5,ar6,ar7));
          puVar4 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 288)), deref_u32(uVar2,uVar5,ar6,ar7));
          uVar2 = puVar4[1];
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar4;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar2;
          *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar4[2];
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c13633c);
        }
        else {
          ar7 = (code *)0x0;
          ar6 = (undefined1 *)(unsigned)0xffffffff;
          uVar5 = 0x15;
          (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x15,0xffffffff,0));
          uVar5 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c026db0(ar4,uVar5,ar6,ar7));
          uVar2 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c03c0f0(ar4 + 0xb0,uVar5,ar6,ar7));
          puVar4 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 288)), deref_u32(uVar2,uVar5,ar6,ar7));
          uVar2 = puVar4[1];
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar4;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar2;
          *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar4[2];
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c136384);
        }
        (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 288)), vec3_clear(ar4 + 0x2d4,uVar5,ar6,ar7));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
    }
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
    *(undefined4 *)(unsigned)(ar4 + 0x334) = 1;
    *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
    ({ unsigned long ri0_ = (unsigned long)(puVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 288)); CAnimBody_GetCurFrame(ar4 + 0xb0,puVar4,ar6,ar7); });
    uVar9 = SUB84(dVar10,0);
    (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c034384(ar4 + 0xb0,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0xe0)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,ar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf0))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x2d4,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0xf0)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,ar6,ar7));
    puVar3 = ((undefined1 *)(fr0_ - 0x34));
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(ar4 + 0x2d4,puVar3,ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)(puVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 288)); CAnimBody_GetCurFrame(ar4 + 0xb0,puVar3,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x100)),puVar3,ar6,ar7));
    ar7 = (code *)(ar4 + 0x2a8);
    puVar3 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 288)), FUN_8c023d04(ar7,((undefined1 *)(fr0_ - 0x100)),ar6,ar7));
    uVar5 = 0xffffffff;
    ar6 = puVar3;
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x100)),0xffffffff,puVar3,ar7));
    if (puVar3 != (undefined1 *)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 288)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x10c)),puVar6,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x11c))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); FUN_8c023484(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x10c)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x11c)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x11c)),0xffffffff,ar6,ar7));
      uVar5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 288)), object_dtor_delete(((undefined1 *)(fr0_ - 0x10c)),0xffffffff,ar6,ar7));
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar5,ar6,ar7));
    if (iVar1 == 1) {
      uVar7 = 0;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x334) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)uVar9;
      }
      (vsp = ((unsigned long)(fr0_ - 288)), vec3_clear(ar4 + 0x2a8,ar4 + 0x2a8,ar6,ar7));
      ar7 = (code *)0x0;
      ar6 = (undefined1 *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 288)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x48)) + 4,0xffffffff,ar6,ar7));
  puVar6 = ((undefined1 *)(fr0_ - 0x34));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(puVar6,0xffffffff,puVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,puVar6,ar7));
  return uVar7;
}

__asm__(".globl _FUN_8c05c9fc\n.set _FUN_8c05c9fc, _FUN_8c05c9fc_def\n");
//@unit 8c05d2a4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c05d2a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05d2a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (0 < *(int *)(unsigned)(0x31c + ar4)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c05d2a4\n.set _FUN_8c05d2a4, _FUN_8c05d2a4_def\n");
//@unit 8c05d2bc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c05d2bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05d2bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 192; for (int i_ = 0; i_ < 192; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  (*(undefined4 *)(fr0_ - 0x80)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125d28)),ar5,ar6,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c280330;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0x80)),((void *)(unsigned)0x8c022cb0),0x8c280330,ar7));
  (*(undefined4 *)(fr0_ - 0x84)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125d38)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c28033c;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0x84)),((void *)(unsigned)0x8c022cb0),0x8c28033c,ar7));
  (*(undefined4 *)(fr0_ - 0x88)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125d48)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c280348;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0x88)),((void *)(unsigned)0x8c022cb0),0x8c280348,ar7));
  (*(undefined4 *)(fr0_ - 0x8c)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125d58)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c280354;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0x8c)),((void *)(unsigned)0x8c022cb0),0x8c280354,ar7));
  (*(undefined4 *)(fr0_ - 0x90)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125d68)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c280360;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0x90)),((void *)(unsigned)0x8c022cb0),0x8c280360,ar7));
  (*(undefined4 *)(fr0_ - 0x94)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125d78)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c28036c;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0x94)),((void *)(unsigned)0x8c022cb0),0x8c28036c,ar7));
  (*(undefined4 *)(fr0_ - 0x98)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125d88)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c280378;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0x98)),((void *)(unsigned)0x8c022cb0),0x8c280378,ar7));
  (*(undefined4 *)(fr0_ - 0x9c)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125d98)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c280384;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0x9c)),((void *)(unsigned)0x8c022cb0),0x8c280384,ar7));
  (*(undefined4 *)(fr0_ - 0xa0)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125da8)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c280390;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0xa0)),((void *)(unsigned)0x8c022cb0),0x8c280390,ar7));
  (*(undefined4 *)(fr0_ - 0xa4)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_xyz(0x8c2803a8,puVar3,uVar2,ar7));
  uVar2 = 0x8c28039c;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0xa4)),((void *)(unsigned)0x8c022cb0),0x8c28039c,ar7));
  (*(undefined4 *)(fr0_ - 0xa8)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_copy(0x8c2803d4,(&(*(undefined1 *)(unsigned)0x8c125d78)),uVar2,ar7));
  uVar2 = 0x8c2803bc;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0xa8)),((void *)(unsigned)0x8c022cb0),0x8c2803bc,ar7));
  (*(undefined4 *)(fr0_ - 0xac)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_copy(0x8c2803d4 + 0x10,(&(*(undefined1 *)(unsigned)0x8c125d68)),uVar2,ar7))
  ;
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c2803c8;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0xac)),((void *)(unsigned)0x8c022cb0),0x8c2803c8,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c030e34((int)&(*(undefined4 *)(fr0_ - 0xc0)) + 0xa4,puVar3,uVar2,ar7));
  (*(undefined4 *)(fr0_ - 0xb0)) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c05d608(0x8c2803f4,uVar1,uVar2,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c030e34((int)&(*(undefined4 *)(fr0_ - 0xc0)) + 0x8c,uVar1,uVar2,ar7));
  (*(undefined4 *)(fr0_ - 0xb4)) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c05d608(0x8c2803f4 + 0x18,uVar1,uVar2,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c030e34(((undefined1 *)(fr0_ - 0x4c)),uVar1,uVar2,ar7));
  (*(undefined4 *)(fr0_ - 0xb8)) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c05d608(0x8c2803f4 + 0x30,uVar1,uVar2,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c030e34(((undefined1 *)(fr0_ - 0x64)),uVar1,uVar2,ar7));
  (*(undefined4 *)(fr0_ - 0xbc)) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c05d608(0x8c2803f4 + 0x48,uVar1,uVar2,ar7));
  (*(undefined4 *)(fr0_ - 0xc0)) = (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c030e34(((undefined1 *)(fr0_ - 0x7c)),uVar1,uVar2,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c05d608(0x8c2803f4 + 0x60,(*(undefined4 *)(fr0_ - 0xc0)),uVar2,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c05d2bc\n.set _FUN_8c05d2bc, _FUN_8c05d2bc_def\n");
//@unit 8c05d608
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c05d608_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05d608";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  ar4[3] = ar5[3];
  uVar1 = ar5[5];
  ar4[4] = ar5[4];
  ar4[5] = uVar1;
  return ar4;
}

__asm__(".globl _FUN_8c05d608\n.set _FUN_8c05d608, _FUN_8c05d608_def\n");
//@unit 8c05d644
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * s_FROGMANLINE_05d646_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_FROGMANLINE_05d646";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02f064(ar4,ar5,ar6,ar7));
  *ar4 = ((undefined1 *)(unsigned)0x8c12a078);
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0300a4(ar4 + 0x27,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02eac0(ar4 + 0x207,ar5,ar6,ar7));
  *(undefined1 *)(unsigned)(ar4 + 0x20) = 0;
  ar4[0xe1] = 0xffffffff;
  ar4[0x214] = 0;
  ar4[0x215] = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x21e) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x879) = 0;
  ar4[0x21b] = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x21c) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x871) = 0;
  ar4[0x216] = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x217) = 0;
  ar4[0x219] = 0;
  ar4[0x21a] = 0;
  ar4[0x21f] = 0;
  ar4[0x220] = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); strcpy(ar4 + 0xd9,((undefined1 *)(unsigned)0x8c136998),ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); strcpy(ar4 + 0x27,((undefined1 *)(unsigned)0x8c1369a4),ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); strcpy(ar4 + 0x2f,((undefined1 *)(unsigned)0x8c1369b1),ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); strcpy(ar4 + 0x37,((undefined1 *)(unsigned)0x8c1369bf),ar6,ar7); });
  ar4[0xe2] = 4;
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c05d7f8(ar4 + 0x27,1,ar6,ar7));
  *(undefined1 *)(unsigned)((int)ar4 + 0x9a) = 2;
  ar4[0x222] = 1;
  ar4[0x221] = 1;
  ar4[0x218] = 0;
  ar4[0x21d] = 0x1b;
  ar4[0x223] = 0;
  ar4[0x224] = 0;
  ar4[0x225] = 0;
  ar4[0x226] = 0;
  return ar4;
}

__asm__(".globl _s_FROGMANLINE_05d646\n.set _s_FROGMANLINE_05d646, _s_FROGMANLINE_05d646_def\n");
//@unit 8c05d7f8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c05d7f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05d7f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x778;
  *(undefined4 *)(unsigned)(0x778 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c05d7f8\n.set _FUN_8c05d7f8, _FUN_8c05d7f8_def\n");
//@unit 8c05d804
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * Class_12a078_m0_05d804_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a078_m0_05d804";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12a078);
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_02eaec(ar4 + 0x207,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129c70_m0_02f1b8(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12a078_m0_05d804\n.set _Class_12a078_m0_05d804, _Class_12a078_m0_05d804_def\n");
//@unit 8c05d860
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_STATUS_SICK_05d86e_def(int *ar4,code *ar5,code *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_STATUS_SICK_05d86e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 380; for (int i_ = 0; i_ < 380; i_++) z_[i_] = 0; }
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  code *pcVar11;
  int *ar5_00;
  undefined *ar6_00;
  int iVar12;
  code *pcVar13;
  char *pcVar14;
  int ar7_00;
  
  pcVar4 = ar5;
  pcVar11 = ar6;
  (vsp = ((unsigned long)(fr0_ - 380)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),ar5,ar6,ar7));
  puVar10 = ((undefined1 *)(fr0_ - 0x50));
  puVar7 = ((undefined1 *)(unsigned)0x8c136948);
  iVar9 = 0x10;
  do {
    puVar8 = puVar7 + 1;
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 2;
    puVar10[1] = *puVar8;
    puVar10 = puVar10 + 2;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  pcVar13 = ((void *)0x8c02602c);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),pcVar4,pcVar11,((void *)0x8c02602c)));
  if ((uVar2 & 0xffff) == 3) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02bef8(*(int *)(unsigned)(ar6 + 4),3,pcVar11,pcVar13));
    (vsp = ((unsigned long)(fr0_ - 380)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(ar4,*(int *)(unsigned)(ar6 + 0x18),(int)(short)uVar3,pcVar13));
  }
  (*(undefined1 *)(unsigned)0x8c136908) = ar4[0x210];
  pcVar14 = (char *)(unsigned)(uint)ar4[0x211];
  ar6_00 = ((undefined1 *)(unsigned)0x8c13686c);
  uVar3 = 0xa4;
  (*(undefined1 *)(unsigned)0x8c136910) = ar4[0x212];
  *(unsigned *)0x8c13690c = (unsigned)(unsigned long)(pcVar14);
  iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_13c_028d9c(*(int *)(unsigned)(ar6 + 4),0xa4,((undefined1 *)(unsigned)0x8c13686c),pcVar14));
  ar4[0x21d] = iVar9;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02bef8(*(int *)(unsigned)(ar6 + 4),uVar3,ar6_00,pcVar14));
  (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c030d04(ar4 + 0x27,(int)(short)uVar3,ar6_00,pcVar14));
  if ('\x01' < (char)ar4[0x26]) {
    (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05d7f8(ar4 + 0x27,0,ar6_00,pcVar14));
  }
  (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05ff40(ar4,ar5,ar6,pcVar14));
  (vsp = ((unsigned long)(fr0_ - 380)), s_STATUS_SUCKED_0660da(ar4,ar5,ar6,pcVar14));
  pcVar4 = ar6;
  (vsp = ((unsigned long)(fr0_ - 380)), s_STATUS_LASTONE_066468(ar4,ar5,ar6,pcVar14));
  pcVar11 = ((void *)0x8c028d9c);
  iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_13c_028d9c(*(int *)(unsigned)(ar6 + 4),((void *)0x8c028d9c),pcVar4,pcVar14));
  if ((((iVar9 == 7) &&
       (uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c025f68(*(int *)(unsigned)(ar6 + 4) + 0x78,pcVar11,pcVar4,pcVar14)), (char)uVar3 == '\x01'
       )) && (iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_40_03598c(*(int *)(unsigned)(ar6 + 0xc),pcVar11,pcVar4,pcVar14)), iVar9 == 0))
     && (ar4[0xe1] == -1)) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),pcVar11,pcVar4,pcVar14));
    uVar3 = 0x43;
    iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), libgcc_divide_helper_01031c(uVar2 & 0xffff,0x43,pcVar4,pcVar14));
    if ((iVar9 == 0x16) && (ar4[1] == 0)) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02c5ac(*(int *)(unsigned)(ar6 + 4) + 0x78,uVar3,pcVar4,pcVar14));
      (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0fa5bc(0x8c35468c,(int)(char)uVar3,pcVar4,pcVar14));
      pcVar14 = ((undefined1 *)(unsigned)0x8c1369c1);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(unsigned *)((((unsigned long)(fr0_ - 380)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 380)) - 8); FUN_8c0303b8(ar4 + 0x27,0x12,0,((undefined1 *)(unsigned)0x8c1369c1)); });
    }
  }
  pcVar4 = ar5;
  pcVar11 = ar6;
  (vsp = ((unsigned long)(fr0_ - 380)), s_IDLEACTION_SNEEZE_065e70(ar4,ar5,ar6,pcVar14));
  iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar4,pcVar11,pcVar14));
  if (((iVar9 != 2) &&
      (iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_40_03598c(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14)), iVar9 == 0)) &&
     ((ar4[1] == 0 &&
      (iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_178_035734(*(int *)(unsigned)(ar6 + 8),pcVar4,pcVar11,pcVar14)), iVar9 == 0)))) {
    pcVar4 = ar5;
    pcVar11 = ar6;
    (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0620d4(ar4,ar5,ar6,pcVar14));
  }
  iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar4,pcVar11,pcVar14));
  if (iVar9 != 2) {
    pcVar4 = ar6;
    (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02f20c(ar4,ar6,pcVar11,pcVar14));
  }
  pcVar14 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 380)), get_field_4_05eed8(ar4,pcVar4,pcVar11,pcVar14));
  pcVar4 = ar5;
  pcVar11 = ar6;
  (vsp = ((unsigned long)(fr0_ - 380)), s_STATUS_SNORE_05f668(ar4,ar5,ar6,pcVar14));
  iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar4,pcVar11,pcVar14));
  if (iVar9 != 2) {
    pcVar13 = ((void *)0x8c063838);
    pcVar4 = ar5;
    pcVar11 = ar6;
    (vsp = ((unsigned long)(fr0_ - 380)), s_REQUEST_ATTENTION_063846(ar4,ar5,ar6,((void *)0x8c063838)));
    iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_178_035734(*(int *)(unsigned)(ar6 + 8),pcVar4,pcVar11,pcVar13));
    pcVar14 = (char *)(unsigned)pcVar13;
    if ((iVar9 == 0) &&
       (iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_40_03598c(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar13)),
       pcVar14 = (char *)(unsigned)pcVar13, iVar9 == 0)) {
      pcVar4 = ar5;
      pcVar11 = ar6;
      (vsp = ((unsigned long)(fr0_ - 380)), s_REACTION_TITILLATE_064bb8(ar4,ar5,ar6,pcVar13));
      pcVar14 = (char *)(unsigned)pcVar13;
    }
    pcVar4 = (code *)(vsp = ((unsigned long)(fr0_ - 380)), get_field_40_03598c(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14));
    if ((pcVar4 == (code *)0x0) && (ar4[1] != 0xd)) {
      (vsp = ((unsigned long)(fr0_ - 380)), s_GRATIFIC_RID_HOT_06522a(ar4,ar5,ar6,pcVar14));
      pcVar4 = ar5;
      pcVar11 = ar6;
      (vsp = ((unsigned long)(fr0_ - 380)), s_REACTION_TEMP_LACK_0628aa(ar4,ar5,ar6,pcVar14));
    }
    iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_40_03598c(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14));
    if (iVar9 == 0) {
      (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02e8e0(ar4 + 0x207,1,pcVar11,pcVar14));
      pcVar4 = ar5;
      pcVar11 = ar6;
      (vsp = ((unsigned long)(fr0_ - 380)), s_REACTION_WAKED_TAP_062b14(ar4,ar5,ar6,pcVar14));
    }
  }
  iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar4,pcVar11,pcVar14));
  if (iVar9 == 0) {
    iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_40_03598c(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14));
    if (iVar9 == 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_a0_035724(*(int *)(unsigned)(ar6 + 0x18),pcVar4,pcVar11,pcVar14));
      pcVar4 = (code *)(uVar2 & 0xff);
      if ((pcVar4 == (code *)0x2) && (ar4[1] == 0)) {
        iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_24_05eed0(*(int *)(unsigned)(ar6 + 4) + 0xf8,2,pcVar11,pcVar14));
        if (iVar9 == 1) {
          uVar2 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),pcVar4,pcVar11,pcVar14));
          pcVar4 = (code *)0x7;
          iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), libgcc_divide_helper_01031c(uVar2 & 0xffff,7,pcVar11,pcVar14));
          if ((iVar9 == 1) && (ar4[0xe1] == -1)) {
            pcVar14 = ((undefined1 *)(unsigned)0x8c1369cd);
            pcVar11 = (code *)0x0;
            pcVar4 = (code *)0x0;
            (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0306d4(ar4 + 0x27,0,0,((undefined1 *)(unsigned)0x8c1369cd)));
          }
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14));
        if ((char)uVar3 == '\0') {
          uVar2 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),pcVar4,pcVar11,pcVar14));
          pcVar4 = (code *)0x7;
          iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), libgcc_divide_helper_01031c(uVar2 & 0xffff,7,pcVar11,pcVar14));
          if ((iVar9 == 1) && (ar4[0xe1] == -1)) {
            if (ar4[0x226] == 1) {
              pcVar14 = ((undefined1 *)(unsigned)0x8c1369db);
              pcVar11 = (code *)0x0;
              pcVar4 = (code *)0x21;
              (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0306d4(ar4 + 0x27,0x21,0,((undefined1 *)(unsigned)0x8c1369db)));
            }
            else {
              pcVar14 = ((undefined1 *)(unsigned)0x8c1369eb);
              pcVar11 = (code *)0x0;
              pcVar4 = (code *)0x21;
              (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0306d4(ar4 + 0x27,0x21,0,((undefined1 *)(unsigned)0x8c1369eb)));
            }
            ar4[0x226] = 0;
          }
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14));
        if ((*(char *)(unsigned)((int)ar4 + 0x9a) != (char)uVar3) &&
           (uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),pcVar4,pcVar11,pcVar14)), 3 < (ushort)uVar3)) {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14));
          if ((char)uVar3 == '\0') {
            pcVar14 = ((undefined1 *)(unsigned)0x8c1369fe);
            pcVar11 = (code *)0x0;
            pcVar4 = (code *)0xa;
            (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0306d4(ar4 + 0x27,10,0,((undefined1 *)(unsigned)0x8c1369fe)));
          }
          else {
            pcVar4 = (code *)(vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14));
            if (*(char *)(unsigned)((int)ar4 + 0x9a) < (char)pcVar4) {
              pcVar14 = ((undefined1 *)(unsigned)0x8c136a0f);
              pcVar11 = (code *)0x0;
              pcVar4 = (code *)0x0;
              (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0306d4(ar4 + 0x27,0,0,((undefined1 *)(unsigned)0x8c136a0f)));
            }
          }
        }
      }
    }
    iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar4,pcVar11,pcVar14));
    if (iVar9 != 2) {
      if ((((ar4[1] != 7) &&
           (iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_40_03598c(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14)), iVar9 == 0)) &&
          ('\x01' < (char)ar4[0x26])) &&
         (iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_770_05eeb8(ar4 + 0x27,pcVar4,pcVar11,pcVar14)), iVar9 == 1)) {
        if (ar4[0xe1] == -1) {
          pcVar11 = (code *)(ar4 + 0x27);
          pcVar4 = (code *)(uint)ar4[0xe2];
          iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0f8320(0x8c35468c,pcVar4,pcVar11,pcVar14));
          ar4[0xe1] = iVar9;
        }
        else {
          pcVar4 = (code *)0x2;
          (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c030870(ar4 + 0x27,2,pcVar11,pcVar14));
        }
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05eeb0(*(int *)(unsigned)(ar6 + 4) + 0xa8,pcVar4,pcVar11,pcVar14));
      if ((char)uVar3 == '\x01') {
        pcVar4 = ((void *)0x8c025f70);
        iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_140_025f70(*(int *)(unsigned)(ar6 + 4),((void *)0x8c025f70),pcVar11,pcVar14));
        if (iVar9 == 0) {
          *(undefined1 *)(unsigned)(ar4 + 0x26) = 4;
        }
      }
    }
  }
  if (((ar4[0x10] == 0) || (ar4[0x10] == 3)) &&
     ((ar4[1] != 7 &&
      ((pcVar4 = (code *)(vsp = ((unsigned long)(fr0_ - 380)), get_field_40_03598c(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14)),
       pcVar4 == (code *)0x0 && (pcVar14 = (char *)(unsigned)0x1, '\x01' < (char)ar4[0x26])))))) {
    pcVar14 = (char *)(unsigned)0x83;
    pcVar11 = (code *)(int)*(char *)(unsigned)((int)ar4 + 0x83);
    pcVar4 = (code *)(int)*(char *)(unsigned)((int)ar4 + 0x83);
    if ((pcVar4 == (code *)0x0) || (pcVar4 == (code *)0x1)) {
      pcVar4 = ar5;
      pcVar11 = ar6;
      (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0652f4(ar4,ar5,ar6,0x83));
    }
  }
  if (((ar4[1] != 1) && (iVar9 = (int)(char)ar4[0x26], iVar9 < 10)) && (-1 < iVar9)) {
                    
    switch(iVar9) {
    case 0:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[0x210] = 0x2e;
      ar4[0x10] = 0x2e;
      (*(undefined1 *)(unsigned)0x8c136908) = 0x2e;
      ar4[0x211] = 0x36;
      *(unsigned *)0x8c13690c = (unsigned)(unsigned long)((char *)(unsigned)0x36);
      ar4[0x212] = 0x36;
      (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
      iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)ar6 + 8) + 0x18c))))(*(int *)(unsigned)ar6,pcVar4,pcVar11,0x36));
      if (iVar9 == 0) {
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 1;
      }
      break;
    case 1:
      if (ar4[0x10] != 0x18) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05eea8(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14));
        *(char *)(unsigned)((int)ar4 + 0x99) = (char)uVar3;
        ar4[3] = 0;
        ar4[1] = 0xd;
        ar4[2] = 99;
        ar4[0x210] = 0x18;
        ar4[0x10] = 0x18;
        (*(undefined1 *)(unsigned)0x8c136908) = 0x18;
        ar4[0x211] = 0x36;
        *(unsigned *)0x8c13690c = (unsigned)(unsigned long)((char *)(unsigned)0x36);
        ar4[0x212] = 0x36;
        pcVar4 = (code *)0x36;
        (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
        (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0c4e2c(((void *)0x8c0c4e2c),0x36,pcVar11,pcVar14));
      }
      break;
    case 2:
      uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05eea8(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14));
      *(char *)(unsigned)((int)ar4 + 0x99) = (char)uVar3;
      iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_40_03598c(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar11,pcVar14));
      if (iVar9 == 7) {
        pcVar4 = (code *)(uint)ar4[0x21f];
        if (pcVar4 == (code *)0x1) {
          *(undefined1 *)(unsigned)(ar4 + 0x26) = 8;
        }
        if (ar4[0x10] != 0x17) {
          ar4[1] = 0xd;
          ar4[2] = 99;
          ar4[3] = 0;
          ar4[0x10] = 0x17;
          pcVar11 = (code *)0x17;
          ar4[0x210] = 0x17;
          (*(undefined1 *)(unsigned)0x8c136908) = 0x17;
          ar4[0x211] = 0x36;
          *(unsigned *)0x8c13690c = (unsigned)(unsigned long)((char *)(unsigned)0x36);
          ar4[0x212] = 0x36;
          pcVar4 = (code *)((undefined1 *)(unsigned)0x8c13686c);
          (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
        }
      }
      break;
    case 3:
      break;
    case 4:
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02cb7c(*(int *)(unsigned)(ar6 + 4) + 0xa8,0,pcVar11,pcVar14); });
      if (((ar4[1] == 7) || (ar4[0x10] == 8)) ||
         (pcVar13 = (code *)(uint)ar4[0x10], pcVar13 == (code *)0x9)) {
        ar4[1] = 0;
        ar4[2] = 0x4b;
        ar4[3] = 0;
        ar4[0x10] = 0;
        pcVar13 = ((void *)0x8c02cb7c);
        (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02cb7c(*(int *)(unsigned)(ar6 + 4) + 0xa8,0,0x4b,((void *)0x8c02cb7c)));
      }
      pcVar11 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 0xc));
      pcVar4 = ((void *)0x8c03598c);
      iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_40_03598c(pcVar11,((void *)0x8c03598c),pcVar11,pcVar13));
      if ((iVar9 == 7) && (ar4[0x10] != 0x17)) {
        if (ar4[0x21f] == 1) {
          *(undefined1 *)(unsigned)(ar4 + 0x26) = 8;
        }
        (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02ce10(*(int *)(unsigned)(ar6 + 4) + 0x90,1,pcVar11,pcVar13));
        ar4[1] = 0xd;
        ar4[2] = 99;
        ar4[3] = 0;
        ar4[0x10] = 0x17;
        ar4[0x210] = 0x17;
        (*(undefined1 *)(unsigned)0x8c136908) = 0x17;
        ar4[0x211] = 0x36;
        *(unsigned *)0x8c13690c = (unsigned)(unsigned long)((char *)(unsigned)0x36);
        ar4[0x212] = 0x36;
        pcVar4 = (code *)0x36;
        (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
      }
      break;
    default:
      pcVar4 = (code *)0x0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02cb7c(*(int *)(unsigned)(ar6 + 4) + 0xa8,0,pcVar11,pcVar14); });
      break;
    case 7:
      pcVar13 = ((void *)0x8c02cb7c);
      (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02cb7c(*(int *)(unsigned)(ar6 + 4) + 0xa8,0,pcVar11,((void *)0x8c02cb7c)));
      pcVar11 = (code *)(ar4 + 0x10);
      pcVar4 = ((code *)(unsigned long)*(unsigned *)(unsigned)pcVar11);
      if ((pcVar4 != (code *)0x2) || (ar4[1] != 1)) {
        ar4[3] = 0;
        ar4[1] = 1;
        ar4[2] = 99;
        ar4[0x10] = 2;
        if (ar4[0x1b] != 0) {
          (vsp = ((unsigned long)(fr0_ - 380)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x1b] + 8) + 0x78))))(ar4[0x1b],pcVar4,pcVar11,pcVar13));
          ar4[0x1b] = 0;
        }
      }
      break;
    case 8:
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02cb7c(*(int *)(unsigned)(ar6 + 4) + 0xa8,0,pcVar11,pcVar14); });
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02c330(*(int *)(unsigned)(ar6 + 4),0,pcVar11,pcVar14); });
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02c330(*(int *)(unsigned)(ar6 + 4) + 0x18,0,pcVar11,pcVar14); });
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02c330(*(int *)(unsigned)(ar6 + 4) + 0x60,0,pcVar11,pcVar14); });
      pcVar4 = (code *)0x0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02c330(*(int *)(unsigned)(ar6 + 4) + 0x48,0,pcVar11,pcVar14); });
      if (ar4[0x21f] == 1) {
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 9;
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_a0_035724(*(int *)(unsigned)(ar6 + 0x18),pcVar4,pcVar11,pcVar14));
      if ((char)uVar3 == '\x03') {
        pcVar4 = (code *)0x9;
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 9;
      }
      if (*(char *)(unsigned)((int)ar4 + 0x879) == '\x02') {
        if ((ar4[0x10] == 0x30) || (ar4[0x21f] == 1)) {
          ar4[1] = 0;
          ar4[2] = 0x4b;
          ar4[3] = 0;
          ar4[0x10] = 0;
          ar4[0x210] = 0;
          (*(undefined1 *)(unsigned)0x8c136908) = 0;
          ar4[0x211] = 0x36;
          *(unsigned *)0x8c13690c = (unsigned)(unsigned long)((char *)(unsigned)0x36);
          ar4[0x212] = 0x36;
          (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
        }
        else {
          ar4[0x10] = 0x30;
          ar4[1] = 0xd;
          ar4[2] = 99;
          ar4[3] = 0;
          ar4[0x10] = 0x30;
          ar4[0x210] = 0x30;
          pcVar11 = (code *)0x9c;
          pcVar4 = (code *)0x30;
          (*(undefined1 *)(unsigned)0x8c136908) = 0x30;
          ar4[0x211] = 0x36;
          *(unsigned *)0x8c13690c = (unsigned)(unsigned long)((char *)(unsigned)0x36);
          ar4[0x212] = 0x36;
          (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
        }
      }
      else {
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 9;
        if (*(char *)(unsigned)((int)ar4 + 0x879) != '\x02') {
          (vsp = ((unsigned long)(fr0_ - 380)), s_STATUS_FORMAT_030306(ar4 + 0x27,pcVar4,pcVar11,pcVar14));
        }
        (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02ce10(*(int *)(unsigned)(ar6 + 4) + 0x90,1,pcVar11,pcVar14));
        (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02cbbc(*(int *)(unsigned)(ar6 + 4) + 0x90,1,pcVar11,pcVar14));
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02c330(*(int *)(unsigned)(ar6 + 4) + 0x60,0,pcVar11,pcVar14); });
        ar4[0x10] = 0x2c;
        ar4[1] = 0xd;
        ar4[2] = 99;
        ar4[3] = 0;
        ar4[0x10] = 0x2c;
        ar4[0x210] = 0x2c;
        (*(undefined1 *)(unsigned)0x8c136908) = 0x2c;
        ar4[0x211] = 0x36;
        *(unsigned *)0x8c13690c = (unsigned)(unsigned long)((char *)(unsigned)0x36);
        ar4[0x212] = 0x36;
        pcVar4 = (code *)0xa4;
        (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
      }
      break;
    case 9:
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02cb7c(*(int *)(unsigned)(ar6 + 4) + 0xa8,0,pcVar11,pcVar14); });
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02c330(*(int *)(unsigned)(ar6 + 4) + 0x78,0,pcVar11,((void *)0x8c02c330)); });
      pcVar4 = (code *)0x0;
      pcVar11 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 4));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x178))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c02ce00(pcVar11 + 0x78,0,pcVar11,0); });
      if (((ar4[0x10] == 0x30) || (ar4[0x10] == 0x17)) || (ar4[0x10] == 0x2c)) {
        ar4[1] = 0;
        ar4[2] = 0x4b;
        ar4[3] = 0;
        ar4[0x10] = 0;
        ar4[0x210] = 0;
        (*(undefined1 *)(unsigned)0x8c136908) = 0;
        ar4[0x211] = 0x36;
        *(unsigned *)0x8c13690c = (unsigned)(unsigned long)((char *)(unsigned)0x36);
        pcVar11 = (code *)0x848;
        pcVar4 = (code *)0x36;
        ar4[0x212] = 0x36;
        (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0301f8(ar4 + 0x27,pcVar4,pcVar11,((void *)0x8c0301f8)));
  ar7_00 = 0x91;
  iVar12 = (int)*(char *)(unsigned)((int)ar4 + 0x91);
  iVar9 = (int)*(char *)(unsigned)((int)ar4 + 0x91);
  (vsp = ((unsigned long)(fr0_ - 380)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),iVar9,iVar12,0x91));
  (vsp = ((unsigned long)(fr0_ - 380)), get_field_40_05eea0(ar4,iVar9,iVar12,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 380)), s_EVENT_ENDING_0656da(ar4,ar5,ar6,ar7_00));
  pcVar4 = ar6;
  (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c065cb0(ar4,ar5,ar6,ar7_00));
  iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),ar5,pcVar4,ar7_00));
  if (iVar9 != 2) {
    pcVar11 = ar6;
    (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0665a0(ar4,ar6,pcVar4,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05ee90(*(int *)(unsigned)(ar6 + 8),pcVar11,pcVar4,ar7_00));
    if (ar4[1] == 2) {
      iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02c518(*(int *)(unsigned)(ar6 + 4),pcVar11,pcVar4,ar7_00));
      if (iVar9 == 0) {
        if (ar4[0xe1] == -1) {
          ar4[0x10] = 0;
        }
      }
      else if (iVar9 == 1) {
        ar7_00 = ar4[0xe1];
        if (ar7_00 == -1) {
          ar4[0x10] = 0;
        }
      }
      else if (iVar9 == 3) {
        if (ar4[0xe1] == -1) {
          ar7_00 = 0x40;
          pcVar4 = (code *)0x0;
          ar4[0x10] = 0;
        }
      }
      else if (iVar9 == 4) {
        if (ar4[0xe1] == -1) {
          ar4[0x10] = 0;
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02c5ac(*(int *)(unsigned)(ar6 + 4) + 0x60,*(int *)(unsigned)(ar6 + 4) + 0x60,pcVar4,ar7_00));
        (*(undefined4 *)(fr0_ - 0x178)) = CONCAT13((char)uVar3,(int3)(*(undefined4 *)(fr0_ - 0x178)));
        if ((char)uVar3 < '\x04') {
          ar4[0x10] = 0;
        }
      }
    }
    ar5 = (code *)(ar4 + 0x10);
    if (0x35 < *(int *)(unsigned)ar5) {
      ar4[0x10] = 0;
      ar4[1] = 0;
      ar4[0xe] = 2;
    }
    if ((*(char *)(unsigned)((int)ar4 + 0x91) == '\x01') ||
       (iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),ar5,pcVar4,ar7_00)), ar4[0x10] != iVar9)) {
      pcVar4 = (code *)0x1;
      ar5 = (code *)(uint)ar4[0x10];
      (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c031b08(*(int *)(unsigned)(ar6 + 8),ar5,1,ar7_00));
    }
  }
  *(undefined1 *)(unsigned)((int)ar4 + 0x83) = 4;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c025f68(*(int *)(unsigned)(ar6 + 4) + 0x78,ar5,pcVar4,ar7_00));
  cVar1 = (char)uVar3;
  uVar3 = CONCAT13((char)((uint)(*(undefined4 *)(fr0_ - 0x178)) >> 0x18),CONCAT12(cVar1,(short)(*(undefined4 *)(fr0_ - 0x178))))
  ;
  iVar9 = (int)cVar1;
  if (cVar1 == '\x01') {
    iVar9 = 1;
    (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05ee84(*(int *)(unsigned)(ar6 + 0xc),1,pcVar4,ar7_00));
  }
  iVar12 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02c518(*(int *)(unsigned)(ar6 + 4),iVar9,pcVar4,ar7_00));
  if (iVar12 != -1) {
    iVar9 = 0;
    (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05ee78(*(int *)(unsigned)(ar6 + 0xc),0,pcVar4,ar7_00));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),iVar9,pcVar4,ar7_00));
  uVar2 = uVar2 & 0xffff;
  if (ar4[0x219] != uVar2) {
    uVar5 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),uVar2,pcVar4,ar7_00));
    ar4[0x219] = uVar5 & 0xffff;
    uVar6 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c025f68(*(int *)(unsigned)(ar6 + 4) + 0x78,uVar2,pcVar4,ar7_00));
    uVar3 = CONCAT22((short)((uint)uVar3 >> 0x10),CONCAT11((char)uVar6,(char)uVar3));
    iVar9 = (int)(char)uVar6;
    if (iVar9 == 1) {
      iVar9 = 0;
      (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02cbbc(*(int *)(unsigned)(ar6 + 4) + 0x90,0,pcVar4,((void *)0x8c02cbbc)));
    }
    iVar12 = *(int *)(unsigned)(ar6 + 0xc);
    pcVar4 = ((void *)0x8c05ee6c);
    uVar2 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_d0_05ee6c(iVar12,iVar9,((void *)0x8c05ee6c),iVar12));
    if (uVar2 == 0) {
      uVar2 = 0;
      ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 380)); FUN_8c05ee64(*(int *)(unsigned)(ar6 + 4) + 0xf8,0,pcVar4,iVar12); });
    }
    iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c02c340(*(int *)(unsigned)(ar6 + 4) + 0x90,uVar2,pcVar4,iVar12));
    if (iVar9 < 0x31) {
      (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0e9668(*(int *)(unsigned)(ar6 + 0xc),uVar2,pcVar4,iVar12));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0e9690(*(int *)(unsigned)(ar6 + 0xc),uVar2,pcVar4,iVar12));
    }
  }
  if (((ar4[0x10] != 0x23) || (ar4[0x10] != 0x16)) || (ar4[0x10] != 0x27)) {
    ar4[0x23] = 0;
  }
  *(undefined1 *)(unsigned)((int)ar4 + 0x82) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x21) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x85) = 0;
  uVar6 = 0x87;
  *(undefined1 *)(unsigned)((int)ar4 + 0x87) = 0;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),uVar2,pcVar4,0x87));
  *(char *)(unsigned)((int)ar4 + 0x9a) = (char)uVar3;
  iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),uVar2,pcVar4,uVar6));
  if ((iVar9 == 2) && (ar4[0x25] = 0x36, ar4[0xe1] != -1)) {
    ar5_00 = ar4 + 0x37;
    iVar9 = (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c05edfc(((undefined1 *)(unsigned)0x8c136a1c),ar5_00,pcVar4,uVar6));
    if (iVar9 == 0) {
      (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c0f8214(0x8c35468c,ar5_00,pcVar4,uVar6));
      (vsp = ((unsigned long)(fr0_ - 380)), FUN_8c030870(ar4 + 0x27,3,pcVar4,uVar6));
      ar4[2] = 0;
      ar4[3] = 0;
      *(undefined1 *)(unsigned)(ar4 + 0x20) = 1;
      ar4[0xe1] = -1;
      ar4[0x3f] = 0;
    }
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 380)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,pcVar4,uVar6));
  return uVar3;
}

__asm__(".globl _s_STATUS_SICK_05d86e\n.set _s_STATUS_SICK_05d86e, _s_STATUS_SICK_05d86e_def\n");
//@unit 8c05edfc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c05edfc_def(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05edfc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  
  do {
    bVar1 = *ar4;
    if (bVar1 != *ar5) {
      return (uint)bVar1 - (uint)*ar5;
    }
    ar5 = ar5 + 1;
    ar4 = ar4 + 1;
  } while (bVar1 != 0);
  return 0;
}

__asm__(".globl _FUN_8c05edfc\n.set _FUN_8c05edfc, _FUN_8c05edfc_def\n");
//@unit 8c05ee64
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c05ee64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05ee64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x18) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c05ee64\n.set _FUN_8c05ee64, _FUN_8c05ee64_def\n");
//@unit 8c05ee6c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_d0_05ee6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_d0_05ee6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0xd0 + ar4);
}

__asm__(".globl _get_field_d0_05ee6c\n.set _get_field_d0_05ee6c, _get_field_d0_05ee6c_def\n");
//@unit 8c05ee78
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c05ee78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05ee78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0xd0;
  *(undefined4 *)(unsigned)(0xd0 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c05ee78\n.set _FUN_8c05ee78, _FUN_8c05ee78_def\n");
//@unit 8c05ee84
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c05ee84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05ee84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0xc0;
  *(undefined4 *)(unsigned)(0xc0 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c05ee84\n.set _FUN_8c05ee84, _FUN_8c05ee84_def\n");
//@unit 8c05ee90
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c05ee90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05ee90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr4 = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x130) = in_fr4;
  return 0x130;
}

__asm__(".globl _FUN_8c05ee90\n.set _FUN_8c05ee90, _FUN_8c05ee90_def\n");
//@unit 8c05eea0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_40_05eea0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_40_05eea0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x40);
}

__asm__(".globl _get_field_40_05eea0\n.set _get_field_40_05eea0, _get_field_40_05eea0_def\n");
//@unit 8c05eea8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c05eea8_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05eea8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*ar4;
}

__asm__(".globl _FUN_8c05eea8\n.set _FUN_8c05eea8, _FUN_8c05eea8_def\n");
//@unit 8c05eeb0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c05eeb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05eeb0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 4);
}

__asm__(".globl _FUN_8c05eeb0\n.set _FUN_8c05eeb0, _FUN_8c05eeb0_def\n");
//@unit 8c05eeb8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_770_05eeb8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_770_05eeb8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x770 + ar4);
}

__asm__(".globl _get_field_770_05eeb8\n.set _get_field_770_05eeb8, _get_field_770_05eeb8_def\n");
//@unit 8c05eec4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c05eec4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05eec4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(0xbc + ar4);
}

__asm__(".globl _FUN_8c05eec4\n.set _FUN_8c05eec4, _FUN_8c05eec4_def\n");
//@unit 8c05eed0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_24_05eed0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_24_05eed0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x24);
}

__asm__(".globl _get_field_24_05eed0\n.set _get_field_24_05eed0, _get_field_24_05eed0_def\n");
//@unit 8c05eed8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_4_05eed8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_4_05eed8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 4);
}

__asm__(".globl _get_field_4_05eed8\n.set _get_field_4_05eed8, _get_field_4_05eed8_def\n");
//@unit 8c05eee0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_12a078_m2_05eee0_def(int *ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a078_m2_05eee0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  uVar2 = ar5;
  piVar3 = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02602c(ar6[6],ar5,ar6,ar7));
  if ((short)uVar1 == 3) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02bef8(ar6[1],uVar2,piVar3,ar7));
    (*(undefined4 *)(fr0_ - 0x60)) = CONCAT22((short)uVar2,(short)(*(undefined4 *)(fr0_ - 0x60)));
    piVar3 = (int *)(unsigned)(int)(short)uVar2;
    (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(ar4,ar6[6],piVar3,ar7));
  }
  iVar4 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_40_03598c(ar6[3],((void *)0x8c03598c),piVar3,ar7));
  if (iVar4 == 2) {
    (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c05f498(ar6[3],0,piVar3,ar7));
  }
  (*(undefined1 *)(unsigned)0x8c136908) = ar4[0x210];
  (*(undefined1 *)(unsigned)0x8c13690c) = ar4[0x211];
  (*(undefined1 *)(unsigned)0x8c136910) = ar4[0x212];
  uVar2 = ar5;
  piVar3 = ar6;
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c05ff40(ar4,ar5,ar6,ar7));
  iVar4 = (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar6 + 8) + 0xb8))))(*ar6,uVar2,piVar3,ar7));
  if ((iVar4 == 1) && (ar4[1] != 1)) {
    iVar4 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_6c_02f46c(*ar6,uVar2,piVar3,ar7));
    if ((iVar4 == 0) && (iVar4 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_70_05f490(*ar6,uVar2,piVar3,ar7)), iVar4 == 0)) {
      piVar3 = (int *)(unsigned)0x1b;
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0b9ed4(ar6[6],0x1b,0x1b,ar7));
      ar4[0x10] = 2;
      ar4[0xe] = 2;
      ar4[1] = 1;
      ar4[3] = 0;
      ar4[2] = 99;
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02f298(ar4,199,piVar3,ar7));
    }
    else {
      ar4[0xe] = 2;
      ar4[1] = 0xb;
      ar4[2] = 99;
      ar4[0x10] = 0xe;
      uVar2 = 0x577;
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02f298(ar4,0x577,piVar3,ar7));
      if (ar4[0x1b] != 0) {
        (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x1b] + 8) + 0x78))))(ar4[0x1b],uVar2,piVar3,ar7));
        ar4[0x1b] = 0;
      }
    }
    if (((char)ar4[0x21e] == '\x01') && (ar4[1] == 0)) {
      *(undefined1 *)(unsigned)(ar4 + 0x21e) = 0;
    }
  }
  piVar6 = ar6;
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02f20c(ar4,ar6,piVar3,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_4_05eed8(ar4,piVar6,piVar3,ar7));
  piVar3 = ar6;
  (vsp = ((unsigned long)(fr0_ - 96)), s_STATUS_SNORE_05f668(ar4,ar5,ar6,uVar2));
  if (((ar4[1] != 1) && (iVar4 = (int)(char)ar4[0x26], iVar4 < 10)) && (-1 < iVar4)) {
                    
    switch(iVar4) {
    case 0:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[0x210] = 0x2e;
      ar4[0x10] = 0x2e;
      (*(undefined1 *)(unsigned)0x8c136908) = 0x2e;
      break;
    case 1:
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[2] = 99;
      ar4[0x210] = 0x18;
      ar4[0x10] = 0x18;
      (*(undefined1 *)(unsigned)0x8c136908) = 0x18;
      break;
    case 2:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c05eea8(ar6[3],ar5,piVar3,uVar2));
      *(char *)(unsigned)((int)ar4 + 0x99) = (char)uVar1;
      break;
    case 4:
      ar5 = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x60))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c02cb7c(ar6[1] + 0xa8,0,piVar3,uVar2); });
      break;
    case 7:
      ar5 = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x60))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c02cb7c(ar6[1] + 0xa8,0,piVar3,uVar2); });
      if ((ar4[0x10] != 2) || (ar4[1] != 1)) {
        ar4[3] = 0;
        ar4[1] = 1;
        ar4[2] = 99;
        ar4[0x10] = 2;
        if (ar4[0x1b] != 0) {
          (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x1b] + 8) + 0x78))))(ar4[0x1b],ar5,piVar3,uVar2));
          ar4[0x1b] = 0;
        }
      }
      break;
    case 8:
      ar5 = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x60))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c02cb7c(ar6[1] + 0xa8,0,piVar3,uVar2); });
      if (ar4[0x21f] == 1) {
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 9;
      }
      if (ar4[0x10] != 0x2c) {
        (vsp = ((unsigned long)(fr0_ - 96)), s_STATUS_FORMAT_030306(ar4 + 0x27,ar5,piVar3,uVar2));
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02ce10(ar6[1] + 0x90,1,piVar3,uVar2));
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02cbbc(ar6[1] + 0x90,1,piVar3,uVar2));
        ar5 = 0;
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x60))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c02c330(ar6[1] + 0x60,0,piVar3,uVar2); });
        ar4[0x10] = 0x2c;
      }
      break;
    case 9:
      if (ar4[0x10] == 0x2c) {
        ar4[1] = 0;
        ar4[2] = 0x4b;
        ar4[3] = 0;
        ar4[0x10] = 0;
        ar4[0x210] = 0;
        (*(undefined1 *)(unsigned)0x8c136908) = 0;
        ar4[0x211] = 0x36;
        (*(undefined1 *)(unsigned)0x8c13690c) = 0x36;
        ar4[0x212] = 0x36;
        (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
      }
    }
  }
  if (ar4[0xe1] != -1) {
    iVar4 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0fa2b8(0x8c35468c,ar5,piVar3,uVar2));
    if (iVar4 == 0) {
      ar4[0x25] = 0;
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c030870(ar4 + 0x27,3,piVar3,uVar2));
      ar4[1] = 0;
      ar4[0x10] = 0;
      ar4[2] = 0x19;
      *(undefined1 *)(unsigned)((int)ar4 + 0x91) = 1;
      ar4[3] = 0;
      *(undefined1 *)(unsigned)(ar4 + 0x20) = 1;
      ar4[0xe1] = -1;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0f8214(0x8c35468c,ar5,piVar3,uVar2));
    }
    ar4[0x25] = ar4[0x55];
  }
  if (ar4[0x22] == 1) {
    ar4[0x22] = 0;
  }
  piVar6 = ar6;
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0665a0(ar4,ar6,piVar3,uVar2));
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c05ee90(ar6[2],piVar6,piVar3,uVar2));
  iVar4 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_4_05eed8(ar4,piVar6,piVar3,uVar2));
  iVar4 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c13686c) + ar4[3] * 4 + iVar4 * 0xc);
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c05f488(ar4,iVar4,piVar3,uVar2));
  if (*(char *)(unsigned)((int)ar4 + 0x91) != '\x01') {
    iVar5 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_124_027930(ar6[2],iVar4,piVar3,uVar2));
    iVar4 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_40_05eea0(ar4,iVar4,piVar3,uVar2));
    if (iVar5 == iVar4) {
      return iVar5;
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_40_05eea0(ar4,iVar4,piVar3,uVar2));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c031b08(ar6[2],uVar1,1,uVar2));
  return uVar2;
}

__asm__(".globl _Class_12a078_m2_05eee0\n.set _Class_12a078_m2_05eee0, _Class_12a078_m2_05eee0_def\n");
//@unit 8c05f488
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c05f488_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05f488";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x40) = ar5;
  return 0x40;
}

__asm__(".globl _FUN_8c05f488\n.set _FUN_8c05f488, _FUN_8c05f488_def\n");
//@unit 8c05f490
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_70_05f490_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_70_05f490";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x70);
}

__asm__(".globl _get_field_70_05f490\n.set _get_field_70_05f490, _get_field_70_05f490_def\n");
//@unit 8c05f498
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c05f498_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05f498";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x40) = ar5;
  return 0x40;
}

__asm__(".globl _FUN_8c05f498\n.set _FUN_8c05f498, _FUN_8c05f498_def\n");
//@unit 8c05f4a0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_REACTION_CATCH_05f4a2_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_REACTION_CATCH_05f4a2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  char *ar7_00;
  
  if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
    (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))(*(int *)(unsigned)(ar4 + 0x6c),ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 28)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x18)),ar5 + 0x10,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x18)),ar6,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 28)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x15;
  if (*(int *)(unsigned)(ar4 + 900) != -1) {
    *(undefined4 *)(unsigned)(ar4 + 0x94) = *(undefined4 *)(unsigned)(ar4 + 0x154);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0fa2b8(0x8c35468c,uVar2,ar6,ar7));
    if (iVar1 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
      (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c030870(ar4 + 0x9c,3,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 4) = 2;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x10;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x19;
      *(undefined1 *)(unsigned)(ar4 + 0x91) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined1 *)(unsigned)(ar4 + 0x80) = 1;
      *(undefined4 *)(unsigned)(ar4 + 900) = 0xffffffff;
    }
  }
  iVar1 = *(int *)(unsigned)(ar4 + 900);
  if (iVar1 == -1) {
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c030870(ar4 + 0x9c,0,ar6,ar7));
    ar7_00 = ((undefined1 *)(unsigned)0x8c136a22);
    uVar2 = 0;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(unsigned *)((((unsigned long)(fr0_ - 28)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 28)) - 8); FUN_8c030568(ar4 + 0x9c,0x25,0,((undefined1 *)(unsigned)0x8c136a22)); });
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); strcpy(ar4 + 0xbc,((undefined1 *)(unsigned)0x8c136a22),uVar2,ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); strcpy(ar4 + 0xdc,((undefined1 *)(unsigned)0x8c1369bf),uVar2,ar7_00); });
    *(undefined4 *)(unsigned)(ar4 + 0xfc) = 0;
    iVar1 = ar4 + 0x9c;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0f8320(0x8c35468c,*(undefined4 *)(unsigned)(ar4 + 0x388),iVar1,ar7_00));
    *(undefined4 *)(unsigned)(ar4 + 900) = uVar2;
    *(undefined4 *)(unsigned)(ar4 + 0x14c) = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c030870(ar4 + 0x9c,2,iVar1,ar7_00));
  }
  return iVar1;
}

__asm__(".globl _s_REACTION_CATCH_05f4a2\n.set _s_REACTION_CATCH_05f4a2, _s_REACTION_CATCH_05f4a2_def\n");
//@unit 8c05f640
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Vec3_assign_wrap_05f640_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Vec3_assign_wrap_05f640";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign(ar4 + 0x70,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Vec3_assign_wrap_05f640\n.set _Vec3_assign_wrap_05f640, _Vec3_assign_wrap_05f640_def\n");
//@unit 8c05f660
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_STATUS_SNORE_05f668_def(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  ring[rp++ & 255] = "s_STATUS_SNORE_05f668";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 112; for (int i_ = 0; i_ < 112; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined *ar5_00;
  int a5;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *ar7_00;
  char cVar5;
  
  cVar5 = '\0';
  piVar3 = ar6;
  if (*(int *)(unsigned)(ar4 + 0x38) == 2) {
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    iVar4 = 0x40;
    *(undefined4 *)(unsigned)(ar4 + 0x40) =
         *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13686c) + *(int *)(unsigned)(ar4 + 0xc) * 4 + ar7 * 0xc);
    (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c060044(ar4,ar5,ar6,0x40));
    ar5_00 = (undefined *)(unsigned)0x1;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x6c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 112)); FUN_8c02f404(ar4,1,piVar3,iVar4); });
    ar7 = iVar4;
  }
  else {
    ar5_00 = ((undefined1 *)(unsigned)0x8c13686c) + ar7 * 0xc;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = *(undefined4 *)(unsigned)(ar5_00 + *(int *)(unsigned)(ar4 + 0xc) * 4);
  }
  iVar4 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar4 < 0x28) {
    if (-1 < iVar4) {
                    
      switch(iVar4) {
      case 0:
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x6c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 112)); FUN_8c02f404(ar4,3,piVar3,ar7); });
        break;
      case 1:
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x6c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 112)); FUN_8c02f404(ar4,3,piVar3,ar7); });
        iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02f414(ar4,((void *)0x8c02f414),piVar3,ar7));
        if (iVar4 == 1) {
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c066628(ar4,ar5,piVar3,ar7));
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
        }
        (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02fdd8(ar4,ar5,piVar3,ar7));
        break;
      case 2:
        a5 = *(int *)(unsigned)(*ar6 + 8);
        iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a5 + 0xb4))))(*ar6,a5,piVar3,ar7));
        if (iVar4 == 1) {
          iVar4 = *ar6;
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c027954(iVar4,a5,piVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0c4e2c(iVar4,a5,piVar3,ar7));
        }
        break;
      case 3:
        uVar1 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02602c(ar6[6],ar5_00,piVar3,ar7));
        iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), libgcc_divide_helper_01031c(uVar1 & 0xffff,0x25,((void *)0x8c01031c),ar7));
        if (iVar4 == 0xe) {
          ar7_00 = ((undefined1 *)(unsigned)0x8c136a31);
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0306d4(ar4 + 0x9c,0x11,0,((undefined1 *)(unsigned)0x8c136a31)));
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x6c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 112)); FUN_8c02f404(ar4,3,((void *)0x8c02f404),ar7_00); });
        }
        break;
      case 4:
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x6c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 112)); FUN_8c02f404(ar4,3,piVar3,ar7); });
        break;
      case 6:
        iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02f414(ar4,ar5_00,piVar3,ar7));
        if (iVar4 == 1) {
          if (*(int *)(unsigned)(ar4 + 0x88) == 1) {
            uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), get_field_6c_02f46c(*(undefined4 *)(unsigned)(ar4 + 0x6c),ar5_00,piVar3,ar7));
            uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c05feec(*(undefined4 *)(unsigned)(ar4 + 0x6c),uVar2,piVar3,ar7));
            (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c05fec4(ar6[1],uVar2,piVar3,ar7));
            if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
              (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))
                        (*(int *)(unsigned)(ar4 + 0x6c),uVar2,piVar3,ar7));
              ar7 = 0;
              *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
            }
          }
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c066628(ar4,ar5,((void *)0x8c066628),ar7));
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
        }
        break;
      case 9:
        uVar1 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02602c(ar6[6],ar5_00,piVar3,ar7));
        uVar2 = 10;
        iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), libgcc_divide_helper_01031c(uVar1 & 0xffff,10,piVar3,ar7));
        if (((iVar4 == 5) && (*(char *)(unsigned)(ar4 + 0x870) == '\0')) &&
           (iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), get_field_140_025f70(ar6[1],uVar2,piVar3,ar7)), iVar4 == 0)) {
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0fa5bc(0x8c35468c,(int)*(char *)(unsigned)(ar4 + 0x870),piVar3,ar7));
          iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02fcc4(ar4,ar6,piVar3,ar7));
          if (iVar4 == 0) {
            (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0306d4(ar4 + 0x9c,10,0,((undefined1 *)(unsigned)0x8c136a60)));
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0306d4(ar4 + 0x9c,10,0,((undefined1 *)(unsigned)0x8c136a50)));
          }
          *(undefined1 *)(unsigned)(ar4 + 0x870) = 1;
        }
        break;
      case 0xc:
      case 0x12:
        (vsp = ((unsigned long)(fr0_ - 112)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),ar6[5] + 0x10,piVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 112)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x24)),piVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,piVar3,ar7));
        if (cVar5 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x78) = 0x44af0000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x78) = 0x64e3e50344af0000;
        }
        break;
      case 0xf:
        iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02f414(ar4,ar5_00,piVar3,ar7));
        if (iVar4 == 1) {
          if (*(int *)(unsigned)(ar4 + 0x88) == 1) {
            (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c05feec(*(undefined4 *)(unsigned)(ar4 + 0x6c),1,piVar3,ar7));
            *(undefined4 *)(unsigned)(ar4 + 0x88) = 0;
          }
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c066628(ar4,ar5,piVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02fdd8(ar4,ar5,piVar3,ar7));
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c05febc(ar6[3],0,piVar3,ar7));
        }
        break;
      case 0x10:
        if (((*(int *)(unsigned)(ar4 + 4) != 0xd) &&
            (iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02c518(ar6[1],ar5_00,piVar3,ar7)), iVar4 < 6)) && (-1 < iVar4)) {
                    
          switch(iVar4) {
          case 0:
            uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02c5ac(ar6[1],ar5_00,piVar3,ar7));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(unsigned *)((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c0303b8(ar4 + 0x9c,4,(int)(char)uVar2,((undefined1 *)(unsigned)0x8c136a74)); });
            break;
          case 1:
            uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02c5ac(ar6[1] + 0x18,ar5_00,piVar3,ar7));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(unsigned *)((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c0303b8(ar4 + 0x9c,5,(int)(char)uVar2,((undefined1 *)(unsigned)0x8c136a80)); });
            break;
          case 3:
            uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02c5ac(ar6[1] + 0x48,ar5_00,piVar3,ar7));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(unsigned *)((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c0303b8(ar4 + 0x9c,0x10,(int)(char)uVar2,((undefined1 *)(unsigned)0x8c136a9c)); })
            ;
            break;
          case 4:
            uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02c5ac(ar6[1] + 0x60,ar5_00,piVar3,ar7));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(unsigned *)((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c0303b8(ar4 + 0x9c,0xd,(int)(char)uVar2,((undefined1 *)(unsigned)0x8c136a8d)); });
            break;
          case 5:
            uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02c5ac(ar6[1] + 0x78,ar5_00,piVar3,ar7));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(unsigned *)((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c0303b8(ar4 + 0x9c,0x12,(int)(char)uVar2,((undefined1 *)(unsigned)0x8c1369c1)); });
          }
        }
        break;
      case 0x16:
        if (*(int *)(unsigned)(ar4 + 0x8c) == 1) {
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0306d4(ar4 + 0x9c,0x2a,0,((undefined1 *)(unsigned)0x8c136a3e)));
          *(undefined4 *)(unsigned)(ar4 + 0x8c) = 0;
        }
        break;
      case 0x22:
        if (*(int *)(unsigned)(ar4 + 0x8c) == 1) {
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,((undefined1 *)(unsigned)0x8c136ac1)));
          *(undefined4 *)(unsigned)(ar4 + 0x8c) = 0;
        }
        break;
      case 0x23:
        if (*(int *)(unsigned)(ar4 + 0x8c) == 1) {
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,((undefined1 *)(unsigned)0x8c136aad)));
          *(undefined4 *)(unsigned)(ar4 + 0x8c) = 0;
        }
        break;
      case 0x26:
        if (*(int *)(unsigned)(ar4 + 0x8c) == 1) {
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,((undefined1 *)(unsigned)0x8c136ae8)));
          *(undefined4 *)(unsigned)(ar4 + 0x8c) = 0;
        }
        break;
      case 0x27:
        if (*(int *)(unsigned)(ar4 + 0x8c) == 1) {
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,((undefined1 *)(unsigned)0x8c136ad4)));
          *(undefined4 *)(unsigned)(ar4 + 0x8c) = 0;
        }
      }
    }
  }
  else if ((iVar4 == 0x34) && (*(int *)(unsigned)(ar4 + 0x8c) == 1)) {
    (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,((undefined1 *)(unsigned)0x8c136afb)));
    *(undefined4 *)(unsigned)(ar4 + 0x8c) = 0;
  }
  return 1;
}

__asm__(".globl _s_STATUS_SNORE_05f668\n.set _s_STATUS_SNORE_05f668, _s_STATUS_SNORE_05f668_def\n");
//@unit 8c05febc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c05febc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05febc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0x38) = (undefined1)ar5;
  return 0x38;
}

__asm__(".globl _FUN_8c05febc\n.set _FUN_8c05febc, _FUN_8c05febc_def\n");
//@unit 8c05fec4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c05fec4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05fec4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d930(ar4 + 0x90,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c05fec4\n.set _FUN_8c05fec4, _FUN_8c05fec4_def\n");
//@unit 8c05feec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c05feec_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05feec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  
  (*(int *)(fr0_ - 0x8)) = ar5;
  if (*(int *)(unsigned)(ar4 + 0x6c) <= ar5) {
    (*(int *)(fr0_ - 0x8)) = *(int *)(unsigned)(ar4 + 0x6c);
  }
  *(int *)(unsigned)(ar4 + 0x6c) = *(int *)(unsigned)(ar4 + 0x6c) - (*(int *)(fr0_ - 0x8));
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 2;
  return (*(int *)(fr0_ - 0x8));
}

__asm__(".globl _FUN_8c05feec\n.set _FUN_8c05feec, _FUN_8c05feec_def\n");
//@unit 8c05ff40
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c05ff40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05ff40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  char cVar3;
  
  cVar3 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x3c) == 0) {
    uVar2 = ar5;
    ar6_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 32)), s_GRATIFIC_EAT_0611d6(ar4,ar5,ar6,ar7));
    *(int *)(unsigned)(ar4 + 0xc) = *(int *)(unsigned)(ar4 + 0xc) + 1;
    *(undefined4 *)(unsigned)(ar4 + 0x40) =
         *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13686c) + *(int *)(unsigned)(ar4 + 0xc) * 4 + *(int *)(unsigned)(ar4 + 4) * 0xc);
    if ((*(int *)(unsigned)(ar4 + 0x40) == 0x36) || (*(int *)(unsigned)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0;
      if (*(int *)(unsigned)(ar4 + 4) == 1) {
        *(int *)(unsigned)(ar4 + 0xc) = *(int *)(unsigned)(ar4 + 0xc) + -1;
        ar5 = uVar2;
        ar6 = ar6_00;
        (*(int *)(fr0_ - 0x20)) = ar4;
      }
      else {
        if (cVar3 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x70) = 0xc7c35000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x70) = 0x8c02f404c7c35000;
        }
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        ar5 = 0;
        ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c02f404(ar4,0,ar6_00,ar7); });
        ar6 = ar6_00;
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c060044(ar4,ar5,ar6,ar7));
    }
  }
  if (*(int *)(unsigned)(ar4 + 0x3c) == 2) {
    ar5 = 2;
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c02f404(ar4,2,ar6,ar7); });
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x38);
  if ((iVar1 == 2) && (iVar1 = 0, *(int *)(unsigned)(ar4 + 0x6c) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))(*(int *)(unsigned)(ar4 + 0x6c),ar5,ar6,ar7));
    iVar1 = 0x6c;
    *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c05ff40\n.set _FUN_8c05ff40, _FUN_8c05ff40_def\n");
