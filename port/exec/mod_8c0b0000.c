//@unit 8c0b0784
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0b0784_def(int ar4,undefined4 ar5,int *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c0b0784";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  undefined8 in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  iVar5 = 1;
  piVar3 = ar6;
  piVar4 = ar7;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 60)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 60)) - 8); FUN_8c03f480(ar5,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_ctor_copy(((int *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x38)),piVar3,piVar4));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,piVar3,piVar4));
  iVar1 = *(int *)(unsigned)(ar4 + 0x124);
  if ((iVar1 < 9) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      if (*(int *)(unsigned)(ar4 + 0x348) == 1) {
        piVar3 = ((int *)(fr0_ - 0x28));
        iVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b3604(ar4,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),piVar3,ar6));
        piVar4 = ar6;
      }
      else if (*(int *)(unsigned)(ar4 + 0x324) == 0) {
        iVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b0ad4(ar4,uVar2,piVar3,piVar4));
        if (cVar9 == '\0') {
          dVar7 = CONCAT44D(0x3f7d70a4,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar7 = -8.36519102553774e-251;
        }
        if (cVar8 == '\0') {
          fVar6 = F32LO(dVar7) * F32HI(dVar7);
        }
        else {
          fVar6 = SUB84(dVar7 * dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(unsigned)(ar4 + 0x28) = fVar6;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
      }
      else {
        piVar3 = ((int *)(fr0_ - 0x28));
        iVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b3604(ar4,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),piVar3,ar6));
        piVar4 = ar6;
      }
      if (iVar5 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x348) = 0;
        piVar3 = (int *)(unsigned)0x64;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), rand_range(ar4,0,100,piVar4));
        if (iVar1 < 0x50) {
          *(undefined4 *)(unsigned)(ar4 + 0x324) = 0;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x324) = 1;
        }
      }
      break;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x128))))(ar7,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),piVar3,piVar4));
      piVar3 = ((int *)(fr0_ - 0x28));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b3184(ar4,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),piVar3,ar6));
      piVar4 = ar6;
      break;
    case 2:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b5098(ar4,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar5,piVar4));
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c031c74(ar4,((int *)(fr0_ - 0x28)),((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),piVar4));
      piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      break;
    case 3:
      if (0 < *(int *)(unsigned)(ar4 + 0x314)) {
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      }
      iVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b1ac0(ar4,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),ar6));
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(0x3f7d70a4,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar7 = -8.36519102553774e-251;
      }
      if (cVar8 == '\0') {
        fVar6 = F32LO(dVar7) * F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 * dVar7,0);
      }
      piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      piVar4 = ar6;
      if (cVar9 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar6;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
      break;
    case 4:
      iVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b4d14(ar4,ar5,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(0x3f7d70a4,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar7 = -8.36519102553774e-251;
      }
      if (cVar8 == '\0') {
        fVar6 = F32LO(dVar7) * F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 * dVar7,0);
      }
      piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      if (cVar9 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar6;
        piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      }
      break;
    case 5:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b4c7c(ar4,uVar2,piVar3,piVar4));
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(0x3f7d70a4,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar7 = -8.36519102553774e-251;
      }
      if (cVar8 == '\0') {
        fVar6 = F32LO(dVar7) * F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 * dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar6;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
      break;
    case 6:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b4ba0(ar4,uVar2,piVar3,piVar4));
      break;
    case 7:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      if (*(int *)(unsigned)(ar4 + 0x314) < 2) {
        iVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b0eec(ar4,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),ar7));
        piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
        piVar4 = ar7;
      }
      else {
        iVar5 = 0;
      }
      break;
    case 8:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      piVar4 = (int *)(unsigned)0x0;
      piVar3 = (int *)(unsigned)0xffffffff;
      uVar2 = 5;
      (vsp = ((unsigned long)(fr0_ - 60)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 60)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,piVar3,piVar4));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((int *)(fr0_ - 0x28)),0xffffffff,piVar3,piVar4));
  return iVar5;
}

__asm__(".globl _FUN_8c0b0784\n.set _FUN_8c0b0784, _FUN_8c0b0784_def\n");
//@unit 8c0b0ad4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b0ad4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b0ad4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 148; for (int i_ = 0; i_ < 148; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  float in_fr1 = 0;
  float fVar3;
  double dVar4;
  undefined8 in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar2 = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    ar6 = 100;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 148)), rand_range(ar4,0,100,ar7));
    if (iVar1 < 0x1e) {
      *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
    }
    else if (iVar1 < 0x3c) {
      *(undefined4 *)(unsigned)(ar4 + 0x330) = 1;
    }
    else if (iVar1 < 0x46) {
      *(undefined4 *)(unsigned)(ar4 + 0x330) = 2;
    }
    else if (iVar1 < 0x5a) {
      *(undefined4 *)(unsigned)(ar4 + 0x330) = 4;
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 0x330) = 3;
    }
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
LAB_8c0b0b7c:
    uVar2 = *(undefined4 *)(unsigned)(ar4 + 0x330);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c034148(ar4 + 0xb0,uVar2,ar6,ar7));
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 1;
      }
      (vsp = ((unsigned long)(fr0_ - 148)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7));
    }
    if (cVar6 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0x3d4ccccd;
    }
    else {
      in_fr1 = 0.05;
      *(undefined8 *)(unsigned)(ar4 + 0xa0) = 0x8c03c3143d4ccccd;
    }
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c03c314(ar4,uVar2,ar6,ar7));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    if (cVar6 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2d0) = 0x3f800000;
      *(undefined4 *)(unsigned)(ar4 + 0x2cc) = 0x45bb8000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x2d0) = CONCAT44(0x3f800000,in_fr1);
      *(undefined8 *)(unsigned)(ar4 + 0x2cc) = 0x8045bb8000;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x20))); *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 148)) - 8); FUN_8c0230f0(ar4 + 0x80,uVar2,ar6,ar7); });
    uVar2 = (vsp = ((unsigned long)(fr0_ - 148)), Vec3_length(((undefined1 *)(fr0_ - 0x20)),uVar2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_assign(ar4 + 700,uVar2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
    return 1;
  }
  if (iVar1 == 1) goto LAB_8c0b0b7c;
  if (iVar1 != 2) {
    return 1;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 148)), get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7));
  if ((iVar1 < 9) && (2 < iVar1)) {
                    
    switch(iVar1) {
    default:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 148)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5,ar6,ar7));
      if (iVar1 == 7) {
        uVar2 = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
      goto LAB_8c0b0dd2;
    case 5:
      break;
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 148)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5,ar6,ar7));
  if (iVar1 == 7) {
    uVar2 = 0;
    *(undefined4 *)(unsigned)(ar4 + 300) = 0;
  }
LAB_8c0b0dd2:
  iVar1 = (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c023d04(ar4 + 0x80,ar4 + 700,ar6,ar7));
  if (iVar1 == 0) {
    return uVar2;
  }
  if (cVar6 == '\0') {
    in_fr1 = *(float *)(unsigned)(ar4 + 0x2d0);
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2d0);
  }
  if (cVar5 == '\0') {
    in_fr1 = in_fr1 + 1.0;
  }
  else {
    in_fr1 = SUB84(CONCAT44D(0x3f800000,in_fr1) + CONCAT44D(0x3f800000,in_fr1),0);
  }
  (*(undefined8 *)(fr0_ - 0x90)) = in_xd0;
  if (cVar6 == '\0') {
    (*(undefined8 *)(fr0_ - 0x90)) = CONCAT44(ar4,in_fr1);
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x90))+4)) + 0x2d0) = (undefined4)(*(undefined8 *)(fr0_ - 0x90));
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2cc),(undefined4)(*(undefined8 *)(fr0_ - 0x90)));
  }
  else {
    *(undefined8 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x90))+4)) + 0x2d0) = (*(undefined8 *)(fr0_ - 0x90));
    dVar4 = *(double *)(unsigned)(ar4 + 0x2cc);
    in_xd0 = (*(undefined8 *)(fr0_ - 0x90));
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) / F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  (*(float *)(fr0_ - 0x54)) = fVar3;
  if (cVar6 != '\0') {
    (*(float *)(fr0_ - 0x54)) = (float)in_xd0;
    ((undefined4 *)(fr0_ - 0x50))[0] = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  if (cVar5 == '\0') {
    dVar4 = CONCAT44D(1.0 - fVar3,fVar3);
  }
  else {
    dVar4 = CONCAT44D(0x3f800000,fVar3) - CONCAT44D(0x3f800000,fVar3);
  }
  fVar3 = F32HI(dVar4);
  (*(float *)(fr0_ - 0x58)) = fVar3;
  if (cVar6 != '\0') {
    (*(float *)(fr0_ - 0x58)) = SUB84(dVar4,0);
    (*(float *)(fr0_ - 0x54)) = fVar3;
  }
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 148)) - 8); Vec3_scale(ar4 + 0x80,&(*(float *)(fr0_ - 0x58)),ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 148)) - 8); Vec3_scale(ar4 + 700,&(*(float *)(fr0_ - 0x54)),ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 148)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x40)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 148)), Vec3_assign(ar4 + 0x80,((undefined4 *)(fr0_ - 0x50)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(((undefined4 *)(fr0_ - 0x50)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0b0ad4\n.set _FUN_8c0b0ad4, _FUN_8c0b0ad4_def\n");
//@unit 8c0b0eec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b0eec_def(int ar4,float *ar5,float *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b0eec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 520; for (int i_ = 0; i_ < 520; i_++) z_[i_] = 0; }
  double dVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int *ar5_00;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  code *ar5_01;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  ulonglong in_dr0 = 0;
  float fVar13;
  double dVar12;
  undefined8 in_xd0 = 0;
  char cVar14;
  char cVar15;
  float *ain0;
  
  cVar15 = '\0';
  cVar14 = '\0';
  uVar10 = 1;
  pfVar6 = ar5;
  uVar9 = ar7;
  ain0 = ar6;
  (vsp = ((unsigned long)(fr0_ - 520)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 520)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x40)),pfVar6,ar6,uVar9));
  (vsp = ((unsigned long)(fr0_ - 520)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x50)),pfVar6,ar6,uVar9));
  iVar4 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar4 < 9) && (-1 < iVar4)) {
                    
    switch(iVar4) {
    case 0:
      uVar8 = 0xc;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c034148(ar4 + 0xb0,0xc,ar6,uVar9));
      if (iVar4 != 1) {
        if (iVar4 != 2) break;
        (vsp = ((unsigned long)(fr0_ - 520)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar8,ar6,uVar9));
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6,uVar9));
      break;
    case 1:
      if (cVar15 == '\0') {
        fVar11 = *ar5;
        fVar13 = 1500.0;
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)ar5;
        fVar11 = 1500.0;
        fVar13 = 1000.0;
      }
      if (cVar14 == '\0' && fVar13 < fVar11) {
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x70)),((void *)0x8c022ce8),ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 0x2e4,((undefined1 *)(fr0_ - 0x70)),ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6,uVar9));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x60)),pfVar6,ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 0x2e4,((undefined1 *)(fr0_ - 0x60)),ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6,uVar9));
      }
      (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c031b68(ar4,0x8c286dbc,ar6,uVar9));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      in_dr0 = (ulonglong)(uint)fVar11;
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = in_dr0;
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 2:
      if (cVar15 == '\0') {
        uVar8 = (undefined4)in_dr0;
        uVar5 = 0x3f000000;
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3f000000;
      }
      else {
        uVar8 = 0x3f000000;
        uVar5 = 0xb0;
        *(undefined8 *)(unsigned)(ar4 + 0x28) = 0xb03f000000;
      }
      (vsp = ((unsigned long)(fr0_ - 520)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,((void *)0x8c026858),ar6,uVar9));
      pfVar6 = ar5;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); Vec3_sub(ar4 + 0x2e4,ar5,ar6,uVar9); });
      uVar3 = (vsp = ((unsigned long)(fr0_ - 520)), Vec3_length(((undefined1 *)(fr0_ - 0x80)),pfVar6,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(((undefined1 *)(fr0_ - 0x50)),uVar3,ar6,uVar9));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6,uVar9));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x90))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar3,ar6,uVar9); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa0))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x50)),uVar3,ar6,uVar9); });
      (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x90)),((undefined1 *)(fr0_ - 0xa0)),ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c022fc0(ar5,ar4 + 0x2e4,ar6,uVar9));
      if (cVar15 == '\0') {
        dVar12 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),uVar5);
      }
      else {
        in_xd0 = CONCAT44(uVar5,uVar8);
        dVar12 = *(double *)(unsigned)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        fVar11 = F32LO(dVar12) / F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      if (cVar15 == '\0') {
        *(float *)(unsigned)(ar4 + 0x30) = fVar11;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd0;
      }
      iVar4 = (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c031764(ar4,ar4 + 0x2e4,ar5,uVar9));
      if (iVar4 == 0) {
        uVar9 = 300;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      }
      ar6 = (float *)(unsigned)0x1e;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 520)), rand_range(ar4,0,0x1e,uVar9));
      if (iVar4 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x240) = 1;
        (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c033474(ar4,0xb,ar5,ar7));
        ar6 = ar5;
        uVar9 = ar7;
      }
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,uVar9));
      break;
    case 3:
      if (cVar15 == '\0') {
        fVar11 = *ar5;
        fVar13 = 1500.0;
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)ar5;
        fVar11 = 1500.0;
        fVar13 = 1200.0;
      }
      if (cVar14 == '\0' && fVar13 < fVar11) {
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xc0)),pfVar6,ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 0x2e4,((undefined1 *)(fr0_ - 0xc0)),ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,ar6,uVar9));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xb0)),((void *)0x8c022ce8),ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 0x2e4,((undefined1 *)(fr0_ - 0xb0)),ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6,uVar9));
      }
      (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c031b68(ar4,0x8c286dbc,ar6,uVar9));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      pfVar6 = (float *)(unsigned)(ar4 + 0x2c);
      in_dr0 = (ulonglong)(uint)fVar11;
      if (cVar15 == '\0') {
        *pfVar6 = 0.0;
      }
      else {
        *(ulonglong *)(unsigned)pfVar6 = in_dr0;
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 4:
      if (cVar15 == '\0') {
        uVar8 = (undefined4)in_dr0;
        uVar5 = 0x3f000000;
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3f000000;
      }
      else {
        uVar8 = 0x3f000000;
        uVar5 = 0xb0;
        *(undefined8 *)(unsigned)(ar4 + 0x28) = 0xb03f000000;
      }
      (vsp = ((unsigned long)(fr0_ - 520)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pfVar6,ar6,uVar9));
      pfVar6 = ar5;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd0))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); Vec3_sub(ar4 + 0x2e4,ar5,ar6,uVar9); });
      uVar3 = (vsp = ((unsigned long)(fr0_ - 520)), Vec3_length(((undefined1 *)(fr0_ - 0xd0)),pfVar6,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(((undefined1 *)(fr0_ - 0x50)),uVar3,ar6,uVar9));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,ar6,uVar9));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe0))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar3,ar6,uVar9); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf0))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x50)),uVar3,ar6,uVar9); });
      (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xe0)),((undefined1 *)(fr0_ - 0xf0)),ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c022fc0(ar5,ar4 + 0x2e4,ar6,uVar9));
      if (cVar15 == '\0') {
        dVar12 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),uVar5);
      }
      else {
        in_xd0 = CONCAT44(uVar5,uVar8);
        dVar12 = *(double *)(unsigned)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        fVar11 = F32LO(dVar12) / F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      if (cVar15 == '\0') {
        *(float *)(unsigned)(ar4 + 0x30) = fVar11;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd0;
      }
      iVar4 = (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c031764(ar4,ar4 + 0x2e4,ar5,uVar9));
      if (iVar4 == 0) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      }
      ar6 = (float *)(unsigned)0x1e;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 520)), rand_range(ar4,0,0x1e,uVar9));
      if (iVar4 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x240) = 1;
        (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c033474(ar4,0xb,ar5,ar7));
        ar6 = ar5;
        uVar9 = ar7;
      }
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,uVar9));
      break;
    case 5:
      *(undefined4 *)(unsigned)(ar4 + 0x240) = 1;
      uVar9 = 0xb;
      (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c033474(ar4,0xb,ar5,ar7));
      uVar8 = (undefined4)in_dr0;
      (vsp = ((unsigned long)(fr0_ - 520)), vec3_clear(ar4 + 0x54,uVar9,ar5,ar7));
      ar6 = ar5;
      uVar9 = ar7;
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c286db8) == 0) {
        uVar5 = 0xd;
        uVar9 = (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c03c0f0(ar4 + 0xb0,0xd,ar5,ar7));
        ar5_00 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 520)), deref_u32(uVar9,uVar5,ar5,ar7));
        ar6 = (float *)(unsigned)0x1;
        iVar4 = (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c0342ac(ar4 + 0xb0,ar5_00,1,ar7));
        if (iVar4 != 0) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c286db8) = iVar4;
        }
        *(undefined4 *)(unsigned)(*ar5_00 + 0x18) = 0;
        uVar9 = ar7;
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2d0) = 0x3f800000;
        in_dr0 = CONCAT44(0x42f00000,uVar8);
        *(undefined4 *)(unsigned)(ar4 + 0x2cc) = 0x42f00000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2d0) = CONCAT44(0x3f800000,uVar8);
        in_dr0 = 0x11042f00000;
        *(undefined8 *)(unsigned)(ar4 + 0x2cc) = 0x11042f00000;
      }
      iVar4 = ar4 + 0x80;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x100))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); FUN_8c0230f0(iVar4,iVar4,ar6,uVar9); });
      uVar8 = (vsp = ((unsigned long)(fr0_ - 520)), Vec3_length(((undefined1 *)(fr0_ - 0x100)),iVar4,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 700,uVar8,ar6,uVar9));
      pfVar6 = (float *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x100)),0xffffffff,ar6,uVar9));
    case 6:
      fVar11 = (float)in_dr0;
      (vsp = ((unsigned long)(fr0_ - 520)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pfVar6,ar6,uVar9));
      if (cVar15 == '\0') {
        fVar11 = *(float *)(unsigned)(ar4 + 0x2d0);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2d0);
      }
      if (cVar14 == '\0') {
        fVar11 = fVar11 + 1.0;
      }
      else {
        fVar11 = SUB84(CONCAT44D(0x3f800000,fVar11) + CONCAT44D(0x3f800000,fVar11),0);
      }
      (*(undefined8 *)(fr0_ - 0x204)) = in_xd0;
      if (cVar15 == '\0') {
        (*(undefined8 *)(fr0_ - 0x204)) = CONCAT44(ar4,fVar11);
      }
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x204))+4)) + 0x2d0) = (undefined4)(*(undefined8 *)(fr0_ - 0x204));
        dVar12 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2cc),(undefined4)(*(undefined8 *)(fr0_ - 0x204)));
      }
      else {
        *(undefined8 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x204))+4)) + 0x2d0) = (*(undefined8 *)(fr0_ - 0x204));
        dVar12 = *(double *)(unsigned)(ar4 + 0x2cc);
        in_xd0 = (*(undefined8 *)(fr0_ - 0x204));
      }
      if (cVar14 == '\0') {
        fVar11 = F32LO(dVar12) / F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      uVar2 = in_xd0;
      if (cVar15 == '\0') {
        (*(undefined8 *)(fr0_ - 0x180)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x180))+4)),fVar11);
        uVar2 = (*(undefined8 *)(fr0_ - 0x180));
      }
      (*(undefined8 *)(fr0_ - 0x180)) = uVar2;
      if (cVar14 == '\0') {
        dVar12 = CONCAT44D(1.0 - fVar11,fVar11);
      }
      else {
        dVar12 = CONCAT44D(0x3f800000,fVar11) - CONCAT44D(0x3f800000,fVar11);
      }
      dVar1 = dVar12;
      if (cVar15 == '\0') {
        (*(undefined8 *)(fr0_ - 0x188)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x188))+4)),(int)(D2U(dVar12) >> 0x20));
        dVar1 = (*(undefined8 *)(fr0_ - 0x188));
      }
      (*(undefined8 *)(fr0_ - 0x188)) = dVar1;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x110))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); Vec3_scale(ar4 + 0x80,&(*(undefined8 *)(fr0_ - 0x188)),ar6,uVar9); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x120))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); Vec3_scale(ar4 + 700,&(*(undefined8 *)(fr0_ - 0x180)),ar6,uVar9); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x130))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x110)),((undefined1 *)(fr0_ - 0x120)),ar6,uVar9); });
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x130)),ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x130)),0xffffffff,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x120)),0xffffffff,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x110)),0xffffffff,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c022dac(ar4 + 0x80,ar4 + 700,ar6,uVar9));
      if (cVar15 == '\0') {
        dVar12 = (double)(D2U(dVar12) >> 0x20);
      }
      if (cVar14 != '\0' || SUB84(dVar12,0) <= 0.0) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      break;
    case 7:
      uVar8 = 0xd;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c034148(ar4 + 0xb0,0xd,ar6,uVar9));
      if (iVar4 != 1) {
        if (iVar4 != 2) break;
        (vsp = ((unsigned long)(fr0_ - 520)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar8,ar6,uVar9));
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x314) = 1;
      break;
    case 8:
      iVar4 = (vsp = ((unsigned long)(fr0_ - 520)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pfVar6,ar6,uVar9));
      if (iVar4 == 1) {
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar15 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0;
        }
        (vsp = ((unsigned long)(fr0_ - 520)), vec3_clear(ar4 + 0x54,1,ar6,uVar9));
        uVar10 = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x314) = 2;
        uVar9 = 0;
        (vsp = ((unsigned long)(fr0_ - 520)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xe,0xffffffff,0));
        ar6 = (float *)(unsigned)(ar4 + 0xb0);
        ar5_01 = ((void *)0x8c033e68);
        (vsp = ((unsigned long)(fr0_ - 520)), s_CAnimBody_SetFrame_033e6e(ar6,((void *)0x8c033e68),ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c022d04(ar4 + 0x304,ar5_01,ar6,uVar9));
      }
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 520)); CAnimBody_GetCurFrame(ar4 + 0xb0,((void *)0x8c026da8),ar6,uVar9); });
      (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c034384(ar4 + 0xb0,(*(undefined4 *)(unsigned)(unsigned)0x8c286db8),ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x140)),ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x140)),0xffffffff,ar6,uVar9));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x30)),ar4 + 0x54,ar6,uVar9); });
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(((undefined1 *)(fr0_ - 0x40)),((undefined1 *)(fr0_ - 0x150)),ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x150)),0xffffffff,ar6,uVar9));
      puVar7 = ((undefined1 *)(fr0_ - 0x30));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 0x54,puVar7,ar6,uVar9));
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x160)),puVar7,ar6,uVar9));
      iVar4 = (vsp = ((unsigned long)(fr0_ - 520)), FUN_8c023d04(((undefined1 *)(fr0_ - 0x40)),((undefined1 *)(fr0_ - 0x160)),ar6,uVar9));
      uVar8 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x160)),0xffffffff,ar6,uVar9));
      if (iVar4 != 0) {
        (vsp = ((unsigned long)(fr0_ - 520)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x16c)),ain0,ar6,uVar9));
        puVar7 = ((undefined1 *)(fr0_ - 0x16c));
        ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x180)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 520)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x40)),puVar7,ar6,uVar9); });
        uVar8 = (vsp = ((unsigned long)(fr0_ - 520)), Vec3_length((int)&(*(undefined8 *)(fr0_ - 0x180)) + 4,puVar7,ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_assign(ar4 + 0x14,uVar8,ar6,uVar9));
        (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x180)) + 4,0xffffffff,ar6,uVar9));
        uVar8 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 520)), object_dtor_delete(((undefined1 *)(fr0_ - 0x16c)),0xffffffff,ar6,uVar9));
      }
      (vsp = ((unsigned long)(fr0_ - 520)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x40)),uVar8,ar6,uVar9));
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x28) = (int)(in_dr0 >> 0x20);
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0;
      }
    }
  }
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x188))+4)) = uVar10;
  (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6,uVar9));
  (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6,uVar9));
  (vsp = ((unsigned long)(fr0_ - 520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,uVar9));
  return (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x188))+4));
}

__asm__(".globl _FUN_8c0b0eec\n.set _FUN_8c0b0eec, _FUN_8c0b0eec_def\n");
//@unit 8c0b1ac0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b1ac0_def(double *ar4,double *ar5,code *ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c0b1ac0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 964; for (int i_ = 0; i_ < 964; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 ar4_00;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  code *pcVar8;
  code *ar5_01;
  code *ar6_00;
  undefined4 uVar9;
  int iVar10;
  float fVar11;
  double in_dr0 = 0;
  double dVar12;
  int iVar14;
  float fVar15;
  double dVar13;
  undefined4 in_fr3 = 0;
  double dVar16;
  float in_fr15 = 0;
  double in_xd0 = 0;
  bool bVar17;
  char cVar18;
  char cVar19;
  double *ain0;
  
  cVar19 = '\0';
  cVar18 = '\0';
  uVar5 = 1;
  uVar9 = 1;
  pcVar8 = (code *)ar7;
  ain0 = (double *)(unsigned)ar6;
  (vsp = ((unsigned long)(fr0_ - 964)), Vec3_ctor_zero(((double *)(fr0_ - 0x34)),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 964)), Vec3_ctor_zero(((double *)(fr0_ - 0x44)),uVar5,ar6,pcVar8));
  (vsp = ((unsigned long)(fr0_ - 964)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x54)),uVar5,ar6,pcVar8));
  if (*(int *)(unsigned)((int)ar4 + 0x314) < 2) {
    puVar6 = (undefined *)(unsigned)0xc;
    iVar10 = 0xc;
  }
  else {
    if (cVar19 == '\0') {
      dVar12 = CONCAT44D(0x43020000,(float)(*(undefined4 *)(unsigned)(unsigned)0x8c286dec));
    }
    else {
      dVar12 = 52776566916096.0;
    }
    if (cVar18 == '\0') {
      fVar11 = F32LO(dVar12) / F32HI(dVar12);
    }
    else {
      fVar11 = SUB84(dVar12 / dVar12,0);
    }
    if (cVar19 == '\0') {
      in_dr0 = CONCAT44D(0x42c80000,fVar11);
    }
    else {
      in_dr0 = 3.91000778394702e-312;
    }
    if (cVar18 == '\0') {
      fVar15 = F32HI(in_dr0);
      fVar11 = F32LO(in_dr0) * fVar15;
      in_dr0 = CONCAT44D(fVar15,fVar11);
      iVar10 = (int)fVar11;
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
      iVar10 = (int)in_dr0;
    }
    (*(unsigned *)(fr0_ - 0x310) = (unsigned)(unsigned long)((double *)(unsigned)(100 - iVar10)));
    if ((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x310)) < 0) {
      (*(unsigned *)(fr0_ - 0x310) = (unsigned)(unsigned long)((double *)(unsigned)0x0));
    }
    ar6 = (code *)0x6;
    puVar6 = (undefined *)(unsigned)0x0;
    pcVar8 = (code *)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x310));
    (*(int *)(fr0_ - 0x30c)) = (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c032af8(ar4,0,6,((double *)(unsigned long)*(unsigned *)(fr0_ - 0x310))));
    if ((*(int *)(fr0_ - 0x30c)) == 0) {
      iVar10 = 0x13;
    }
    else if (((*(int *)(fr0_ - 0x30c)) == 1) || ((*(int *)(fr0_ - 0x30c)) == 2)) {
      iVar10 = 0x14;
    }
    else if ((*(int *)(fr0_ - 0x30c)) == 3) {
      iVar10 = 0xf;
    }
    else {
      puVar6 = (undefined *)(unsigned)0xe;
      iVar10 = 0xe;
    }
  }
  iVar2 = *(int *)(unsigned)((int)ar4 + 300);
  if (iVar2 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c034148(ar4 + 0x16,iVar10,ar6,pcVar8));
    if (iVar2 != 1) {
      if (iVar2 != 2) goto LAB_8c0b30ba;
      (vsp = ((unsigned long)(fr0_ - 964)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0x16,iVar10,ar6,pcVar8));
    }
    if (cVar19 == '\0') {
      *(int *)(unsigned)(ar4 + 0x14) = 0x3d4ccccd;
    }
    else {
      ar4[0x14] = -8.625516725343968e-251;
    }
    (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c03c314(ar4,iVar10,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), vec3_clear((code *)((int)ar4 + 0x54),(code *)((int)ar4 + 0x54),ar6,pcVar8));
    *(int *)(unsigned)((int)ar4 + 300) = *(int *)(unsigned)((int)ar4 + 300) + 1;
    goto LAB_8c0b30ba;
  }
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x14),ar4 + 0x10,ar6,pcVar8));
      iVar10 = (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c034148(ar4 + 0x16,9,ar6,pcVar8));
      if ((iVar10 != 1) && (iVar10 != 2)) {
        (*(undefined4 *)(fr0_ - 0x314)) = 1;
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((double *)(fr0_ - 0x44)),0xffffffff,ar6,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((double *)(fr0_ - 0x34)),0xffffffff,ar6,pcVar8));
        return (*(undefined4 *)(fr0_ - 0x314));
      }
      if (cVar19 == '\0') {
        *(int *)(unsigned)((int)ar4 + 0x24) = 0x41700000;
      }
      else {
        *(undefined8 *)(unsigned)((int)ar4 + 0x24) = 0x8c13babc41700000;
      }
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c023bf4((code *)((int)ar4 + 0x14),((undefined1 *)(unsigned)0x8c13babc),ar6,pcVar8));
      *(int *)(unsigned)(ar4 + 100) = 0;
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c032518(ar4,ar5,ar7,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x2e4),((undefined1 *)(fr0_ - 0x244)),ar7,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x244)),0xffffffff,ar7,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      if (cVar19 == '\0') {
        dVar12 = CONCAT44D(0x43fa0000,*(int *)(unsigned)(ar4 + 0x5d));
      }
      else {
        in_xd0 = ar4[0x5d];
        dVar12 = 1.1709360855895245e+17;
      }
      if (cVar18 == '\0') {
        fVar11 = F32LO(dVar12) + F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar19 == '\0') {
        *(float *)(unsigned)(ar4 + 0x5d) = fVar11;
      }
      else {
        ar4[0x5d] = in_xd0;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x254))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_sub((code *)((int)ar4 + 0x2e4),ar5,ar7,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))); });
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x2d4),((undefined1 *)(fr0_ - 0x254)),ar7,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x254)),0xffffffff,ar7,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      uVar5 = 0x8c286dd4;
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c031b68(ar4,0x8c286dd4,ar7,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c031748(ar4,uVar5,ar7,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      pcVar8 = (code *)((int)ar4 + 0x2c);
      if (cVar19 == '\0') {
        *(int *)(unsigned)pcVar8 = 0;
      }
      else {
        *(ulonglong *)(unsigned)pcVar8 = (ulonglong)(uint)fVar11;
      }
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c031c64(ar4,pcVar8,ar7,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      *(int *)(unsigned)(ar4 + 8) = 3;
      *(int *)(unsigned)((int)ar4 + 0x44) = 0;
      *(int *)(unsigned)(ar4 + 99) = 0;
      *(int *)(unsigned)((int)ar4 + 300) = *(int *)(unsigned)((int)ar4 + 300) + 1;
      ar6 = (code *)ar7;
      pcVar8 = (code *)((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
    }
    else if (iVar2 == 3) {
      if (cVar19 == '\0') {
        iVar2 = SUB84(in_dr0,0);
        iVar14 = 0x3fc00000;
      }
      else {
        iVar2 = 0x3fc00000;
        iVar14 = 0x164;
      }
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x264)),puVar6,ar6,pcVar8));
      puVar7 = ((undefined1 *)(fr0_ - 0x264));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x274))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_add((code *)((int)ar4 + 0x2d4),puVar7,ar6,pcVar8); });
      iVar4 = (vsp = ((unsigned long)(fr0_ - 964)), Vec3_length(((undefined1 *)(fr0_ - 0x274)),puVar7,ar6,pcVar8));
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_length_sq((code *)((int)ar4 + 0x2d4),(code *)((int)ar4 + 0x2d4),ar6,pcVar8));
      (*(int *)(fr0_ - 0x360)) = iVar14;
      (*(int *)(fr0_ - 0x320)) = iVar2;
      iVar1 = iVar14;
      if (cVar19 == '\0') {
        (*(int *)(fr0_ - 0x360)) = iVar4;
        (*(int *)(fr0_ - 0x320)) = iVar14;
        iVar1 = (*(int *)(fr0_ - 0x31c));
      }
      (*(int *)(fr0_ - 0x31c)) = iVar1;
      dVar12 = CONCAT44D(iVar14,iVar2);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x284))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale((*(int *)(fr0_ - 0x360)),&(*(int *)(fr0_ - 0x320)),ar6,pcVar8); });
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x2d4),((undefined1 *)(fr0_ - 0x284)),ar6,pcVar8));
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x284)),0xffffffff,ar6,pcVar8));
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x274)),0xffffffff,ar6,pcVar8));
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x264)),0xffffffff,ar6,pcVar8));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x294))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_add((code *)((int)ar4 + 0x2d4),ar5,ar6,pcVar8); });
      pcVar8 = (code *)((double *)(fr0_ - 0x34));
      ar6_00 = ((void *)0x8c023a14);
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign(pcVar8,((undefined1 *)(fr0_ - 0x294)),((void *)0x8c023a14),pcVar8));
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x294)),0xffffffff,ar6_00,pcVar8));
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x2e4),((double *)(fr0_ - 0x34)),ar6_00,pcVar8));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2a4))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale((code *)((int)ar4 + 0x14),((undefined1 *)(unsigned)0x8c13bac0),ar6_00,pcVar8); });
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign(ar4 + 0x10,((undefined1 *)(fr0_ - 0x2a4)),ar6_00,pcVar8));
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2a4)),0xffffffff,ar6_00,pcVar8));
      iVar2 = *(int *)(unsigned)(ar4 + 100);
      if (iVar2 == 0) {
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_length_sq((code *)((int)ar4 + 0x2d4),((void *)0x8c022e78),ar6_00,pcVar8));
        iVar10 = (int)(D2U(dVar12) >> 0x20);
        (*(int *)(fr0_ - 0x324)) = iVar10;
        if (cVar19 != '\0') {
          (*(int *)(fr0_ - 0x368)) = SUB84(dVar12,0);
          (*(int *)(fr0_ - 0x324)) = (*(int *)(fr0_ - 0x368));
          (*(int *)(fr0_ - 0x320)) = iVar10;
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2b4))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale((code *)((int)ar4 + 0x14),&(*(int *)(fr0_ - 0x324)),ar6_00,pcVar8); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2c4))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0x2b4)),ar6_00,pcVar8); });
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign(((double *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x2c4)),ar6_00,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c4)),0xffffffff,ar6_00,pcVar8));
        uVar5 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2b4)),0xffffffff,ar6_00,pcVar8));
        ar6_00 = (code *)(ar4 + 5);
        if (cVar19 == '\0') {
          dVar13 = CONCAT44D(0x3f7d70a4,*(int *)(unsigned)(ar4 + 5));
        }
        else {
          in_xd0 = ar4[5];
          dVar13 = 3.73997530744218e-312;
        }
        if (cVar18 == '\0') {
          fVar11 = F32HI(dVar13);
          dVar13 = CONCAT44D(fVar11,F32LO(dVar13) * fVar11);
        }
        else {
          dVar13 = dVar13 * dVar13;
        }
        if (cVar19 == '\0') {
          *(int *)(unsigned)ar6_00 = SUB84(dVar13,0);
        }
        else {
          *(double *)(unsigned)ar6_00 = in_xd0;
        }
        pcVar8 = (code *)ar4;
        (vsp = ((unsigned long)(fr0_ - 964)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0x16,uVar5,ar6_00,ar4));
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 964)); CAnimBody_GetCurFrame(ar4 + 0x16,uVar5,ar6_00,pcVar8); });
        if (cVar19 == '\0') {
          dVar12 = CONCAT44D(0x41a00000,SUB84(dVar13,0));
          in_fr15 = F32HI(dVar13);
        }
        else {
          dVar12 = 1.6981406014198e-311;
        }
        if (in_fr15 == F32HI(dVar12)) {
          *(int *)(unsigned)((int)ar4 + 0x44) = 1;
          ar6_00 = (code *)0x320;
          *(int *)(unsigned)(ar4 + 100) = *(int *)(unsigned)(ar4 + 100) + 1;
          if (cVar19 == '\0') {
            dVar12 = CONCAT44D(0x3eb33333,SUB84(dVar12,0));
            *(int *)(unsigned)(ar4 + 0x14) = 0x3eb33333;
          }
          else {
            dVar12 = -8.625516761765798e-251;
            ar4[0x14] = -8.625516761765798e-251;
          }
          *(int *)(unsigned)((int)ar4 + 0xa4) = 1;
          (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c03c314(ar4,((void *)0x8c03c314),800,pcVar8));
          if (*(int *)(unsigned)((int)ar4 + 0x314) == 0) {
            *(int *)(unsigned)(ar4 + 0x48) = 1;
            ar6_00 = (code *)ar5;
            (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c033474(ar4,0xb,ar5,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
            pcVar8 = (code *)((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
          }
        }
      }
      else if (iVar2 == 1) {
        if (cVar19 == '\0') {
          dVar12 = CONCAT44D(0x3e19999a,*(int *)(unsigned)(ar4 + 5));
        }
        else {
          in_xd0 = ar4[5];
          dVar12 = 32.000007402896884;
        }
        if (cVar18 == '\0') {
          fVar11 = F32LO(dVar12) - F32HI(dVar12);
        }
        else {
          fVar11 = SUB84(dVar12 - dVar12,0);
        }
        if (cVar19 == '\0') {
          *(float *)(unsigned)(ar4 + 5) = fVar11;
          dVar12 = CONCAT44D(0x40400000,*(int *)(unsigned)(ar4 + 5));
        }
        else {
          ar4[5] = in_xd0;
          in_xd0 = ar4[5];
          dVar12 = 3.74003830419144e-312;
        }
        if (cVar18 == '\0' && SUB84(dVar12,0) < F32HI(dVar12)) {
          if (cVar19 == '\0') {
            dVar12 = CONCAT44D(0x40400000,SUB84(dVar12,0));
            *(int *)(unsigned)(ar4 + 5) = 0x40400000;
          }
          else {
            dVar12 = 3.74003830419144e-312;
            ar4[5] = 3.74003830419144e-312;
          }
        }
        iVar2 = CAnimBody_AdvanceFrame_wrapper
                          (ar4 + 0x16,((void *)0x8c026858),ar6_00,pcVar8);
        if (iVar2 == 1) {
          *(int *)(unsigned)(ar4 + 100) = *(int *)(unsigned)(ar4 + 100) + 1;
          pcVar8 = (code *)0x0;
          ar6_00 = (code *)0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 964)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,iVar10,0xffffffff,0));
        }
      }
      else if (iVar2 == 2) {
        if (cVar19 == '\0') {
          dVar12 = CONCAT44D(0x3e19999a,*(int *)(unsigned)(ar4 + 5));
        }
        else {
          in_xd0 = ar4[5];
          dVar12 = 32.000007402896884;
        }
        if (cVar18 == '\0') {
          fVar11 = F32LO(dVar12) - F32HI(dVar12);
        }
        else {
          fVar11 = SUB84(dVar12 - dVar12,0);
        }
        if (cVar19 == '\0') {
          *(float *)(unsigned)(ar4 + 5) = fVar11;
          dVar13 = CONCAT44D(0x40400000,*(int *)(unsigned)(ar4 + 5));
        }
        else {
          ar4[5] = in_xd0;
          in_xd0 = ar4[5];
          dVar13 = 1099511890944.0;
        }
        if (cVar18 == '\0' && SUB84(dVar13,0) < F32HI(dVar13)) {
          if (cVar19 == '\0') {
            dVar13 = CONCAT44D(0x40400000,SUB84(dVar13,0));
            *(int *)(unsigned)(ar4 + 5) = 0x40400000;
          }
          else {
            dVar13 = 1099511890944.0;
            ar4[5] = 1099511890944.0;
          }
        }
        if (iVar10 == 0xc) {
          (vsp = ((unsigned long)(fr0_ - 964)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0x16,0xb0,ar6_00,pcVar8));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 964)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0x16,0xb0,ar6_00,pcVar8));
          ar6_00 = (code *)0x1e;
          iVar10 = (vsp = ((unsigned long)(fr0_ - 964)), rand_range(ar4,0,0x1e,pcVar8));
          if (iVar10 == 0) {
            *(int *)(unsigned)(ar4 + 0x48) = 1;
            ar6_00 = (code *)ar5;
            pcVar8 = (code *)((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
            (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c033474(ar4,0xb,ar5,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
          }
        }
        (vsp = ((unsigned long)(fr0_ - 964)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar5,ar6_00,pcVar8));
        if (cVar19 == '\0') {
          dVar16 = CONCAT44D(*(int *)(unsigned)((int)ar5 + 4),in_fr3);
          dVar12 = CONCAT44D(0x42100000,(int)(D2U(dVar13) >> 0x20));
        }
        else {
          dVar16 = *(double *)(unsigned)((int)ar5 + 4);
          dVar12 = 1.52838456460023e-311;
          in_xd0 = dVar13;
        }
        if (cVar18 == '\0') {
          fVar15 = F32HI(dVar12);
          fVar11 = F32LO(dVar12) + fVar15;
          dVar12 = CONCAT44D(fVar15,fVar11);
          bVar17 = fVar11 < F32HI(dVar16);
        }
        else {
          dVar12 = dVar12 + dVar12;
          fVar11 = F32LO(dVar12);
          bVar17 = dVar12 < dVar16;
        }
        if (!bVar17) {
          if (cVar19 == '\0') {
            *(int *)(unsigned)(ar4 + 0x5a) = 0x3f800000;
            dVar12 = CONCAT44D(0x42f00000,fVar11);
            *(int *)(unsigned)((int)ar4 + 0x2cc) = 0x42f00000;
          }
          else {
            ar4[0x5a] = CONCAT44D(0x3f800000,fVar11);
            dVar12 = 5.18321821016064e-312;
            *(undefined8 *)(unsigned)((int)ar4 + 0x2cc) = 0xf442f00000;
          }
          ar5_01 = ((void *)0x8c0230f0);
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2d4))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); FUN_8c0230f0(ar4 + 0x10,((void *)0x8c0230f0),ar6_00,pcVar8); });
          uVar5 = (vsp = ((unsigned long)(fr0_ - 964)), Vec3_length(((undefined1 *)(fr0_ - 0x2d4)),ar5_01,ar6_00,pcVar8));
          (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 700),uVar5,ar6_00,pcVar8));
          (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2d4)),0xffffffff,ar6_00,pcVar8));
          *(int *)(unsigned)(ar4 + 100) = *(int *)(unsigned)(ar4 + 100) + 1;
        }
      }
      else if (iVar2 == 3) {
        if (cVar19 == '\0') {
          dVar12 = CONCAT44D(0x3e19999a,*(int *)(unsigned)(ar4 + 5));
        }
        else {
          in_xd0 = ar4[5];
          dVar12 = 21990236625305.6;
        }
        if (cVar18 == '\0') {
          fVar11 = F32LO(dVar12) - F32HI(dVar12);
        }
        else {
          fVar11 = SUB84(dVar12 - dVar12,0);
        }
        if (cVar19 == '\0') {
          *(float *)(unsigned)(ar4 + 5) = fVar11;
          fVar11 = *(float *)(unsigned)(ar4 + 5);
        }
        else {
          ar4[5] = in_xd0;
          in_xd0 = ar4[5];
        }
        if (cVar18 != '\0' || fVar11 <= 0.0) {
          if (cVar19 == '\0') {
            *(int *)(unsigned)(ar4 + 5) = 0;
          }
          else {
            ar4[5] = (double)(ulonglong)(uint)fVar11;
          }
        }
        (vsp = ((unsigned long)(fr0_ - 964)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0x16,0xb0,ar6_00,pcVar8));
        if (cVar19 == '\0') {
          fVar11 = *(float *)(unsigned)(ar4 + 0x5a);
        }
        else {
          in_xd0 = ar4[0x5a];
        }
        if (cVar18 == '\0') {
          fVar11 = fVar11 + 1.0;
        }
        else {
          fVar11 = SUB84(CONCAT44D(0x3f800000,fVar11) + CONCAT44D(0x3f800000,fVar11),0
                        );
        }
        (*(undefined8 *)(fr0_ - 0x3c0)) = in_xd0;
        if (cVar19 == '\0') {
          (*(undefined8 *)(fr0_ - 0x3c0)) = CONCAT44D(ar4,fVar11);
        }
        if (cVar19 == '\0') {
          *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x3c0))+4)) + 0x2d0) = (undefined4)(*(undefined8 *)(fr0_ - 0x3c0));
          dVar12 = CONCAT44D(*(int *)(unsigned)((int)ar4 + 0x2cc),(undefined4)(*(undefined8 *)(fr0_ - 0x3c0)));
          (*(undefined8 *)(fr0_ - 0x3c0)) = in_xd0;
        }
        else {
          *(double *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x3c0))+4)) + 0x2d0) = (*(undefined8 *)(fr0_ - 0x3c0));
          dVar12 = *(double *)(unsigned)((int)ar4 + 0x2cc);
        }
        if (cVar18 == '\0') {
          fVar11 = F32LO(dVar12) / F32HI(dVar12);
        }
        else {
          fVar11 = SUB84(dVar12 / dVar12,0);
        }
        dVar12 = (*(undefined8 *)(fr0_ - 0x3c0));
        if (cVar19 == '\0') {
          (*(undefined8 *)(fr0_ - 0x308)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x308))+4)),fVar11);
          dVar12 = (*(undefined8 *)(fr0_ - 0x308));
        }
        (*(undefined8 *)(fr0_ - 0x308)) = dVar12;
        if (cVar18 == '\0') {
          dVar13 = CONCAT44D(1.0 - fVar11,fVar11);
        }
        else {
          dVar13 = CONCAT44D(0x3f800000,fVar11) - CONCAT44D(0x3f800000,fVar11);
        }
        iVar10 = (int)(D2U(dVar13) >> 0x20);
        (*(int *)(fr0_ - 0x328)) = iVar10;
        if (cVar19 != '\0') {
          (*(int *)(fr0_ - 0x328)) = SUB84(dVar13,0);
          (*(int *)(fr0_ - 0x324)) = iVar10;
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2e4))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale(ar4 + 0x10,&(*(int *)(fr0_ - 0x328)),ar6_00,pcVar8); });
        ar6_00 = (code *)((double *)(fr0_ - 0x2f4));
        ({ unsigned long t0_ = (unsigned long)(ar6_00); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale((code *)((int)ar4 + 700),&(*(undefined8 *)(fr0_ - 0x308)),ar6_00,pcVar8); });
        ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x308)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x2e4)),((double *)(fr0_ - 0x2f4)),ar6_00,pcVar8); });
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign(ar4 + 0x10,(int)&(*(undefined8 *)(fr0_ - 0x308)) + 4,ar6_00,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x308)) + 4,0xffffffff,ar6_00,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((double *)(fr0_ - 0x2f4)),0xffffffff,ar6_00,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2e4)),0xffffffff,ar6_00,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c022dac(ar4 + 0x10,(code *)((int)ar4 + 700),ar6_00,pcVar8));
        in_xd0 = dVar13;
        if (cVar19 == '\0') {
          dVar13 = (double)(D2U(dVar13) >> 0x20);
          in_xd0 = (*(undefined8 *)(fr0_ - 0x3c0));
        }
        dVar12 = (double)(D2U(dVar13) & 0xffffffff);
        if (cVar18 != '\0' || SUB84(dVar13,0) <= 0.0) {
          *(int *)(unsigned)(ar4 + 8) = 5;
          *(int *)(unsigned)((int)ar4 + 300) = 0;
          uVar9 = 0;
          (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c031748(ar4,0,ar6_00,pcVar8));
        }
      }
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c022fc0(ar5,((double *)(fr0_ - 0x34)),ar6_00,pcVar8));
      if (cVar19 == '\0') {
        dVar13 = CONCAT44D(*(int *)(unsigned)(ar4 + 5),(int)(D2U(dVar12) >> 0x20));
        dVar12 = in_xd0;
      }
      else {
        dVar13 = ar4[5];
      }
      if (cVar18 == '\0') {
        fVar11 = F32LO(dVar13) / F32HI(dVar13);
      }
      else {
        fVar11 = SUB84(dVar13 / dVar13,0);
      }
      if (cVar19 == '\0') {
        *(float *)(unsigned)(ar4 + 6) = fVar11;
      }
      else {
        ar4[6] = dVar12;
      }
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c031764(ar4,((double *)(fr0_ - 0x34)),ar5,pcVar8));
      ar6 = (code *)ar5;
    }
    goto LAB_8c0b30ba;
  }
  if (*(int *)(unsigned)((int)ar4 + 0x314) < 2) {
    iVar10 = (vsp = ((unsigned long)(fr0_ - 964)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0x16,puVar6,ar6,pcVar8));
    if (iVar10 == 7) {
      pcVar8 = (code *)0x12c;
      *(int *)(unsigned)((int)ar4 + 300) = *(int *)(unsigned)((int)ar4 + 300) + 1;
      ar6 = (code *)ar4;
    }
    goto LAB_8c0b30ba;
  }
  (vsp = ((unsigned long)(fr0_ - 964)), vec3_clear(((undefined1 *)(fr0_ - 0x54)),puVar6,ar6,pcVar8));
  iVar10 = (vsp = ((unsigned long)(fr0_ - 964)), get_field_1c_026dd8(ar4 + 0x16,puVar6,ar6,pcVar8));
  if (((iVar10 == 0x12) || (iVar10 == 0x13)) || (iVar10 == 0x14)) {
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c026db0(ar4,puVar6,ar6,pcVar8));
    uVar5 = ar5_00;
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c03c0f0(ar4 + 0x16,ar5_00,ar5_00,pcVar8));
    piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 964)), deref_u32(ar4_00,ar5_00,uVar5,pcVar8));
    iVar2 = piVar3[1];
    *(int *)(unsigned)((int)ar4 + 0xb4) = *piVar3;
    *(int *)(unsigned)(ar4 + 0x17) = iVar2;
    *(int *)(unsigned)((int)ar4 + 0xbc) = piVar3[2];
    *(unsigned *)(unsigned)((int)ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c13ba4c) + (iVar10 + -0x12) * 0x18;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 964)); CAnimBody_GetCurFrame(ar4 + 0x16,0xb0,uVar5,pcVar8); });
    pcVar8 = ((void *)0x8c034384);
    (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c034384(ar4 + 0x16,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((int)ar4 + 0xb4)),uVar5,((void *)0x8c034384)));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign(((double *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x64)),uVar5,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,uVar5,pcVar8));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_sub(((double *)(fr0_ - 0x44)),(code *)((int)ar4 + 0x54),uVar5,pcVar8); });
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x74)),uVar5,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,uVar5,pcVar8));
    ar6 = (code *)((double *)(fr0_ - 0x44));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x54),ar6,ar6,pcVar8));
    puVar6 = ((undefined1 *)(unsigned)0x8c13ba98);
    (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c023bf4(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c13ba98),ar6,pcVar8));
  }
  else {
    if (cVar19 == '\0') {
      in_dr0 = CONCAT44D(0x3f666666,*(int *)(unsigned)(ar4 + 5));
    }
    else {
      in_xd0 = ar4[5];
      in_dr0 = 3.73996784729797e-312;
    }
    if (cVar18 == '\0') {
      fVar11 = F32HI(in_dr0);
      in_dr0 = CONCAT44D(fVar11,F32LO(in_dr0) * fVar11);
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
    }
    if (cVar19 == '\0') {
      *(int *)(unsigned)(ar4 + 5) = SUB84(in_dr0,0);
    }
    else {
      ar4[5] = in_xd0;
    }
  }
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 964)); CAnimBody_GetCurFrame(ar4 + 0x16,puVar6,ar6,pcVar8); });
  if (cVar18 == '\0') {
    iVar2 = (int)F32HI(in_dr0);
  }
  else {
    iVar2 = (int)in_dr0;
  }
  if (iVar10 == 0x12) {
    if ((iVar2 == 0x1e) || (iVar2 == 0x54)) {
      *(int *)(unsigned)(ar4 + 0x48) = 1;
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c033474(ar4,0xb,ar5,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      ar6 = (code *)ar5;
      pcVar8 = (code *)((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
    }
    fVar11 = (float)iVar2;
    if (cVar19 == '\0') {
      fVar15 = 18.0;
    }
    else {
      fVar11 = 18.0;
      fVar15 = 23.0;
    }
    if (cVar18 == '\0' && fVar15 < fVar11) {
      fVar11 = (float)iVar2;
      if (cVar19 == '\0') {
        fVar15 = 23.0;
      }
      else {
        fVar11 = 23.0;
        fVar15 = 1.24996e-42;
      }
      if (cVar18 == '\0' && fVar11 < fVar15) {
        if (cVar19 == '\0') {
          dVar12 = CONCAT44D(0x40c00000,(*(uint*)((uchar*)&(*(double *)(fr0_ - 0x4c))+0)));
        }
        else {
          dVar12 = -1.4906861505776066e+237;
          in_xd0 = (*(double *)(fr0_ - 0x4c));
        }
        if (cVar18 == '\0') {
          fVar11 = F32LO(dVar12) - F32HI(dVar12);
        }
        else {
          fVar11 = SUB84(dVar12 - dVar12,0);
        }
        dVar12 = in_xd0;
        if (cVar19 == '\0') {
          (*(double *)(fr0_ - 0x4c)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x4c))+4)),fVar11);
          dVar12 = (*(double *)(fr0_ - 0x4c));
        }
        goto LAB_8c0b262a;
      }
    }
    fVar11 = (float)iVar2;
    if (cVar19 == '\0') {
      fVar15 = 39.0;
    }
    else {
      fVar11 = 39.0;
      fVar15 = 63.0;
    }
    if (cVar18 == '\0' && fVar15 < fVar11) {
      fVar11 = (float)iVar2;
      if (cVar19 == '\0') {
        fVar15 = 63.0;
      }
      else {
        fVar11 = 63.0;
        fVar15 = 1.24996e-42;
      }
      if (cVar18 == '\0' && fVar11 < fVar15) {
        if (cVar19 == '\0') {
          dVar12 = CONCAT44D(0x3f3851ec,(*(uint*)((uchar*)&(*(double *)(fr0_ - 0x4c))+0)));
        }
        else {
          dVar12 = 1.0192310304781727e-72;
          in_xd0 = (*(double *)(fr0_ - 0x4c));
        }
        if (cVar18 == '\0') {
          fVar11 = F32LO(dVar12) + F32HI(dVar12);
        }
        else {
          fVar11 = SUB84(dVar12 + dVar12,0);
        }
        dVar12 = in_xd0;
        if (cVar19 == '\0') {
          (*(double *)(fr0_ - 0x4c)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x4c))+4)),fVar11);
          dVar12 = (*(double *)(fr0_ - 0x4c));
        }
        goto LAB_8c0b262a;
      }
    }
    puVar6 = ((undefined1 *)(unsigned)0x8c13ba9c);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale((code *)((int)ar4 + 0x14),((undefined1 *)(unsigned)0x8c13ba9c),ar6,pcVar8); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); FUN_8c0230f0((code *)((int)ar4 + 0x14),puVar6,ar6,pcVar8); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x94)),((undefined1 *)(unsigned)0x8c13baa0),ar6,pcVar8); });
    puVar7 = ((undefined1 *)(fr0_ - 0xa4));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x84)),puVar7,ar6,pcVar8); });
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_normalize(((undefined1 *)(fr0_ - 0xb4)),puVar7,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0xc4)),ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc4)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6,pcVar8));
    dVar12 = (*(double *)(fr0_ - 0x4c));
  }
  else if (iVar10 == 0x13) {
    if ((iVar2 == 0x26) || (iVar2 == 0x3c)) {
      *(int *)(unsigned)(ar4 + 0x48) = 1;
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c033474(ar4,0xb,ar5,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      pcVar8 = (code *)((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
    }
    fVar11 = F32LO(in_dr0);
    ar6 = (code *)((double *)(fr0_ - 0xd4));
    ({ unsigned long t0_ = (unsigned long)(ar6); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale((code *)((int)ar4 + 0x14),((undefined1 *)(unsigned)0x8c13baa4),ar6,pcVar8); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe4))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); FUN_8c0230f0((code *)((int)ar4 + 0x14),((void *)0x8c0230f0),ar6,pcVar8); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf4))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xe4)),((undefined1 *)(unsigned)0x8c13baa8),ar6,pcVar8); });
    puVar7 = ((undefined1 *)(fr0_ - 0xf4));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x104))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_add(((double *)(fr0_ - 0xd4)),puVar7,ar6,pcVar8); });
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_normalize(((undefined1 *)(fr0_ - 0x104)),puVar7,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x114)),ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x114)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x104)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((double *)(fr0_ - 0xd4)),0xffffffff,ar6,pcVar8));
    dVar12 = (*(double *)(fr0_ - 0x4c));
  }
  else if (iVar10 == 0x14) {
    if ((iVar2 == 0x10) || (iVar2 == 0x47)) {
      *(int *)(unsigned)(ar4 + 0x48) = 1;
      puVar6 = (undefined *)(unsigned)0xb;
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c033474(ar4,0xb,ar5,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      ar6 = (code *)ar5;
      pcVar8 = (code *)((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
    }
    fVar11 = (float)iVar2;
    if (cVar19 == '\0') {
      fVar15 = 35.0;
    }
    else {
      fVar11 = 35.0;
      fVar15 = 60.0;
    }
    if (cVar18 == '\0' && fVar15 < fVar11) {
      fVar11 = (float)iVar2;
      if (cVar19 == '\0') {
        fVar15 = 60.0;
      }
      else {
        fVar11 = 60.0;
        fVar15 = 5.0;
      }
      if (cVar18 == '\0' && fVar11 < fVar15) {
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x120)),puVar6,ar6,pcVar8));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x130))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); FUN_8c023484((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x120)),ar6,pcVar8); });
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x130)),ar6,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x130)),0xffffffff,ar6,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), object_dtor_delete(((undefined1 *)(fr0_ - 0x120)),0xffffffff,ar6,pcVar8));
        dVar12 = (*(double *)(fr0_ - 0x4c));
        goto LAB_8c0b262a;
      }
    }
    fVar11 = (float)iVar2;
    if (cVar19 == '\0') {
      fVar15 = 72.0;
    }
    else {
      fVar11 = 72.0;
      fVar15 = 100.0;
    }
    if (cVar18 == '\0' && fVar15 < fVar11) {
      fVar11 = (float)iVar2;
      if (cVar19 == '\0') {
        fVar15 = 100.0;
      }
      else {
        fVar11 = 100.0;
        fVar15 = 5.0;
      }
      if (cVar18 == '\0' && fVar11 < fVar15) {
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x13c)),puVar6,ar6,pcVar8));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x14c))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); FUN_8c023484((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x13c)),ar6,pcVar8); });
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x14c)),ar6,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x14c)),0xffffffff,ar6,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), object_dtor_delete(((undefined1 *)(fr0_ - 0x13c)),0xffffffff,ar6,pcVar8));
        dVar12 = (*(double *)(fr0_ - 0x4c));
        goto LAB_8c0b262a;
      }
    }
    fVar11 = (float)iVar2;
    if (cVar18 == '\0' && 0.0 < fVar11) {
      fVar11 = (float)iVar2;
      if (cVar19 == '\0') {
        fVar15 = 18.0;
      }
      else {
        fVar11 = 18.0;
        fVar15 = -2.0;
      }
      if (cVar18 == '\0' && fVar11 < fVar15) {
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x158)),((void *)0x8c023d68),ar6,pcVar8));
        ({ unsigned long t0_ = (unsigned long)(((double *)(fr0_ - 0x168))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); FUN_8c023484((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x158)),ar6,pcVar8); });
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x14),((double *)(fr0_ - 0x168)),ar6,pcVar8));
        uVar5 = 0xffffffff;
        ar6 = (code *)((double *)(fr0_ - 0x168));
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(ar6,0xffffffff,ar6,0xffffffff));
        (vsp = ((unsigned long)(fr0_ - 964)), object_dtor_delete(((undefined1 *)(fr0_ - 0x158)),0xffffffff,ar6,uVar5));
        dVar12 = (*(double *)(fr0_ - 0x4c));
        goto LAB_8c0b262a;
      }
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x178))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale((code *)((int)ar4 + 0x14),((undefined1 *)(unsigned)0x8c13baac),ar6,pcVar8); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x188))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); FUN_8c0230f0((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x188)),ar6,pcVar8); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x198))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x188)),((undefined1 *)(unsigned)0x8c13bab0),ar6,pcVar8); });
    puVar7 = ((undefined1 *)(fr0_ - 0x198));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1a8))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x178)),puVar7,ar6,pcVar8); });
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_normalize(((undefined1 *)(fr0_ - 0x1a8)),puVar7,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x1b8)),ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1b8)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1a8)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x198)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x188)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x178)),0xffffffff,ar6,((void *)0x8c022cb0)));
    dVar12 = (*(double *)(fr0_ - 0x4c));
  }
  else {
    iVar10 = (vsp = ((unsigned long)(fr0_ - 964)), rand_range(ar4,0,0x1e,pcVar8));
    fVar11 = F32LO(in_dr0);
    if (iVar10 == 0) {
      *(int *)(unsigned)(ar4 + 0x48) = 1;
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c033474(ar4,0xb,ar5,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      pcVar8 = (code *)((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
    }
    ar6 = ((void *)0x8c023b8c);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c8))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale((code *)((int)ar4 + 0x14),((undefined1 *)(unsigned)0x8c13bab4),((void *)0x8c023b8c),pcVar8); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1d8))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); FUN_8c0230f0((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x1d8)),ar6,pcVar8); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1e8))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x1d8)),((undefined1 *)(unsigned)0x8c13bab8),ar6,pcVar8); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1f8))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x1c8)),((undefined1 *)(fr0_ - 0x1e8)),ar6,pcVar8); });
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_normalize(((undefined1 *)(fr0_ - 0x1f8)),((void *)0x8c022ec0),ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x208)),ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x208)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1f8)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1e8)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1d8)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c8)),0xffffffff,ar6,pcVar8));
    dVar12 = (*(double *)(fr0_ - 0x4c));
  }
LAB_8c0b262a:
  (*(double *)(fr0_ - 0x4c)) = dVar12;
  pcVar8 = (code *)((double *)(fr0_ - 0x218));
  (vsp = ((unsigned long)(fr0_ - 964)), Vec3_ctor_xyz(pcVar8,((void *)0x8c022ce8),ar6,pcVar8));
  (*(int *)(fr0_ - 0x31c)) = (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c023d04(((undefined1 *)(fr0_ - 0x54)),((double *)(fr0_ - 0x218)),ar6,pcVar8));
  (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((double *)(fr0_ - 0x218)),0xffffffff,ar6,pcVar8));
  if ((*(int *)(fr0_ - 0x31c)) != 0) {
    (vsp = ((unsigned long)(fr0_ - 964)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x224)),ain0,ar6,pcVar8));
    ar6 = ((void *)0x8c023484);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x234))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x224)),((void *)0x8c023484),pcVar8); });
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign(ar4 + 0x67,((undefined1 *)(fr0_ - 0x234)),ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x234)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), object_dtor_delete(((undefined1 *)(fr0_ - 0x224)),0xffffffff,ar6,pcVar8));
  }
  (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign(ar4 + 0x10,(code *)((int)ar4 + 0x14),ar6,pcVar8));
  iVar10 = (vsp = ((unsigned long)(fr0_ - 964)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0x16,ar4 + 0x16,ar6,pcVar8));
  if (iVar10 == 1) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c286dec) = (*(undefined4 *)(unsigned)(unsigned)0x8c286dec) + 1;
    uVar9 = 0;
    *(int *)(unsigned)((int)ar4 + 300) = 0;
    if (cVar19 == '\0') {
      *(int *)(unsigned)((int)ar4 + 0x334) = 0;
    }
    else {
      *(ulonglong *)(unsigned)((int)ar4 + 0x334) = (ulonglong)(uint)fVar11;
    }
  }
LAB_8c0b30ba:
  (*(undefined4 *)(fr0_ - 0x318)) = uVar9;
  (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,pcVar8));
  (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((double *)(fr0_ - 0x44)),0xffffffff,ar6,pcVar8));
  (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((double *)(fr0_ - 0x34)),0xffffffff,ar6,pcVar8));
  return (*(undefined4 *)(fr0_ - 0x318));
}

__asm__(".globl _FUN_8c0b1ac0\n.set _FUN_8c0b1ac0, _FUN_8c0b1ac0_def\n");
//@unit 8c0b3184
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b3184_def(int ar4,undefined8 *ar5,undefined8 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b3184";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 208; for (int i_ = 0; i_ < 208; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *ar6_00;
  undefined4 uVar5;
  float in_fr1 = 0;
  float fVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar5 = 1;
  puVar4 = ar5;
  ar6_00 = ar6;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 208)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 208)) - 8); Vec3_sub(ar6,ar5,ar6,ar7); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 208)), Vec3_length(((undefined1 *)(fr0_ - 0x38)),puVar4,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x28)),uVar1,ar6_00,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 208)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 208)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar1,ar6_00,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 208)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 208)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x28)),uVar1,ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 208)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7));
  iVar3 = *(int *)(unsigned)(ar4 + 0x40);
  if ((iVar3 < 6) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      uVar1 = 0;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 208)), FUN_8c034148(ar4 + 0xb0,0,ar6_00,ar7));
      if ((iVar3 != 1) && (iVar3 != 2)) {
        (vsp = ((unsigned long)(fr0_ - 208)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
        return 1;
      }
      (vsp = ((unsigned long)(fr0_ - 208)), FUN_8c031748(ar4,uVar1,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 208)), Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6_00,ar7));
      ar6_00 = (undefined8 *)(unsigned)0x3;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 208)), rand_range(ar4,0,3,ar7));
      if (cVar11 == '\0') {
        dVar9 = CONCAT44D((float)(iVar3 + 1),in_fr1);
      }
      else {
        dVar9 = (double)(iVar3 + 1);
      }
      if (cVar12 == '\0') {
        *(int *)(unsigned)(ar4 + 0x24) = (int)(D2U(dVar9) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x24) = dVar9;
      }
      uVar1 = 0x8c286dbc;
      (vsp = ((unsigned long)(fr0_ - 208)), FUN_8c031b68(ar4,0x8c286dbc,ar6_00,ar7));
      uVar7 = D2U(dVar9) & 0xffffffff;
      if (cVar12 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar7;
      }
      (vsp = ((unsigned long)(fr0_ - 208)), FUN_8c031c64(ar4,uVar1,ar6_00,ar7));
      in_fr1 = (float)uVar7;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      *(undefined4 *)(unsigned)(ar4 + 0x44) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x318) = 0;
    default:
      iVar3 = ar4 + 0x14;
      (vsp = ((unsigned long)(fr0_ - 208)), Vec3_assign(ar4 + 0x80,iVar3,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 208)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,iVar3,ar6_00,ar7));
      if (cVar12 == '\0') {
        in_fr1 = *(float *)(unsigned)(ar4 + 0x28);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
      }
      if (cVar11 == '\0' && 1.0 < in_fr1) {
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(0x3e19999a,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
          dVar9 = 3.73986008970316e-312;
        }
        if (cVar11 == '\0') {
          fVar6 = F32HI(dVar9);
          dVar9 = CONCAT44D(fVar6,F32LO(dVar9) - fVar6);
        }
        else {
          dVar9 = dVar9 - dVar9;
        }
        (*(int *)(fr0_ - 0xcc)) = ar4;
        if (cVar12 == '\0') {
          *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar9,0);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
      }
      else {
        uVar8 = CONCAT44(0x3f800000,in_fr1);
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3f800000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = uVar8;
        }
        ar6_00 = (undefined8 *)(unsigned)0x3;
        iVar3 = 0;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 208)), rand_range(ar4,0,3,ar7));
        if (cVar11 == '\0') {
          dVar9 = CONCAT44D((float)(iVar2 + 1),(int)uVar8);
        }
        else {
          dVar9 = (double)(iVar2 + 1);
        }
        if (cVar12 == '\0') {
          *(int *)(unsigned)(ar4 + 0x24) = (int)(D2U(dVar9) >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x24) = dVar9;
        }
      }
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0xcc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 208)); CAnimBody_GetCurFrame(ar4 + 0xb0,iVar3,ar6_00,ar7); });
      dVar10 = dVar9;
      if (cVar12 == '\0') {
        (*(undefined8 *)(fr0_ - 0x8c)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x8c))+4)),(int)(D2U(dVar9) >> 0x20));
        dVar10 = (*(undefined8 *)(fr0_ - 0x8c));
      }
      (*(undefined8 *)(fr0_ - 0x8c)) = dVar10;
      *(undefined4 *)(unsigned)(ar4 + 0x44) = 1;
      puVar4 = ar5;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 208)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 208)) - 8); Vec3_sub(ar6,ar5,ar6_00,ar7); });
      uVar1 = (vsp = ((unsigned long)(fr0_ - 208)), Vec3_length(((undefined1 *)(fr0_ - 0x68)),puVar4,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 208)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),uVar1,ar6_00,ar7));
      uVar1 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 208)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 208)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 208)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar1,ar6_00,ar7); });
      ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x8c)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 208)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 208)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x28)),uVar1,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 208)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x78)),(int)&(*(undefined8 *)(fr0_ - 0x8c)) + 4,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 208)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x8c)) + 4,0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 208)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 208)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7));
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),(int)(D2U(dVar9) >> 0x20));
        dVar9 = in_xd0;
      }
      else {
        dVar10 = *(double *)(unsigned)(ar4 + 0x28);
      }
      if (cVar11 == '\0') {
        fVar6 = F32LO(dVar10) / F32HI(dVar10);
      }
      else {
        fVar6 = SUB84(dVar10 / dVar10,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x30) = fVar6;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x30) = dVar9;
      }
      ar6_00 = ar5;
      uVar5 = (vsp = ((unsigned long)(fr0_ - 208)), FUN_8c031764(ar4,ar6,ar5,ar7));
      if (*(int *)(unsigned)(ar4 + 0x1b8) == 1) {
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x18c) = *(undefined4 *)(unsigned)ar5;
          *(undefined4 *)(unsigned)(ar4 + 400) = *(undefined4 *)(unsigned)((int)ar5 + 4);
          *(undefined4 *)(unsigned)(ar4 + 0x194) = *(undefined4 *)(unsigned)(ar5 + 1);
          *(undefined4 *)(unsigned)(ar4 + 0x198) = *(undefined4 *)(unsigned)ar6;
          *(undefined4 *)(unsigned)(ar4 + 0x19c) = *(undefined4 *)(unsigned)((int)ar6 + 4);
          *(undefined4 *)(unsigned)(ar4 + 0x1a0) = *(undefined4 *)(unsigned)(ar6 + 1);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x18c) = *ar5;
          *(undefined8 *)(unsigned)(ar4 + 400) = *(undefined8 *)(unsigned)((int)ar5 + 4);
          *(undefined8 *)(unsigned)(ar4 + 0x194) = ar5[1];
          *(undefined8 *)(unsigned)(ar4 + 0x198) = *ar6;
          *(undefined8 *)(unsigned)(ar4 + 0x19c) = *(undefined8 *)(unsigned)((int)ar6 + 4);
          *(undefined8 *)(unsigned)(ar4 + 0x1a0) = ar6[1];
        }
      }
      break;
    case 2:
      break;
    case 4:
      iVar3 = (vsp = ((unsigned long)(fr0_ - 208)), get_field_1c_026dd8(ar4 + 0xb0,uVar1,ar6_00,ar7));
      if (iVar3 == 0) {
        (vsp = ((unsigned long)(fr0_ - 208)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6_00,ar7));
      }
      else {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 208)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6_00,ar7));
        if (iVar3 == 1) {
          ar7 = 0;
          uVar5 = 0xffffffff;
          uVar1 = 0;
          (vsp = ((unsigned long)(fr0_ - 208)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 208)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar5,ar7));
        }
      }
      uVar5 = (vsp = ((unsigned long)(fr0_ - 208)), FUN_8c031764(ar4,ar6,ar5,ar7));
      ar6_00 = ar5;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
  return uVar5;
}

__asm__(".globl _FUN_8c0b3184\n.set _FUN_8c0b3184, _FUN_8c0b3184_def\n");
//@unit 8c0b3604
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b3604_def(int ar4,double *ar5,double *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c0b3604";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 728; for (int i_ = 0; i_ < 728; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  double *pdVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  float fVar9;
  double in_dr0 = 0;
  undefined8 uVar10;
  undefined4 uVar12;
  double dVar11;
  float fVar13;
  undefined4 uVar14;
  double in_dr2 = 0;
  double dVar15;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  double in_xd0 = 0;
  bool bVar16;
  char cVar17;
  char cVar18;
  
  cVar18 = '\0';
  cVar17 = '\0';
  pdVar5 = ar5;
  (vsp = ((unsigned long)(fr0_ - 728)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  uVar8 = 1;
  (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c10277c(&(*(double *)(fr0_ - 0x38)),pdVar5,ar6,ar7));
  uVar14 = SUB84(in_dr2,0);
  iVar4 = *(int *)(unsigned)(ar4 + 0x40);
  if ((5 < iVar4) || (iVar4 < 0)) goto override_jmp_8c0b3676_case_2;
                    
  switch(iVar4) {
  case 0:
    if (*(int *)(unsigned)(ar4 + 0x348) == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x31c) = 2;
    }
    else {
      ar6 = (double *)(unsigned)0x64;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 728)), rand_range(ar4,0,100,ar7));
      uVar8 = SUB84(in_dr2,0);
      if (iVar4 < 0x50) {
        *(undefined4 *)(unsigned)(ar4 + 0x31c) = 0;
        (vsp = ((unsigned long)(fr0_ - 728)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar5,ar6,ar7));
        if (cVar18 == '\0') {
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5 + 4),uVar8);
          dVar11 = CONCAT44D(0x42100000,(int)((ulonglong)in_dr0 >> 0x20));
        }
        else {
          in_dr2 = *(double *)(unsigned)((int)ar5 + 4);
          dVar11 = -2.066327991859925e+159;
          in_xd0 = in_dr0;
        }
        if (cVar17 == '\0') {
          fVar13 = F32HI(dVar11);
          fVar9 = F32LO(dVar11) + fVar13;
          in_dr0 = CONCAT44D(fVar13,fVar9);
          bVar16 = fVar9 < F32HI(in_dr2);
        }
        else {
          in_dr0 = dVar11 + dVar11;
          bVar16 = in_dr0 < in_dr2;
        }
        if (!bVar16) {
          *(undefined4 *)(unsigned)(ar4 + 0x31c) = 1;
        }
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x31c) = 2;
      }
    }
    uVar14 = SUB84(in_dr2,0);
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
    break;
  case 2:
    goto override_jmp_8c0b3676_case_2;
  case 3:
    goto override_jmp_8c0b3676_case_3;
  case 4:
    pcVar7 = ((void *)0x8c026dd8);
    iVar4 = (vsp = ((unsigned long)(fr0_ - 728)), get_field_1c_026dd8(ar4 + 0xb0,((void *)0x8c026dd8),ar6,ar7));
    if (iVar4 == 0) {
      (vsp = ((unsigned long)(fr0_ - 728)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pcVar7,ar6,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c034148(ar4 + 0xb0,0,ar6,ar7));
    }
    uVar8 = (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c031764(ar4,&(*(undefined4 *)(fr0_ - 0x2c)),ar5,ar7));
    ar6 = ar5;
    goto override_jmp_8c0b3676_case_2;
  }
  fVar9 = F32LO(in_dr0);
  (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6,ar7));
  iVar4 = *(int *)(unsigned)(ar4 + 0x31c);
  if (iVar4 == 0) {
    iVar4 = (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c034148(ar4 + 0xb0,0,ar6,ar7));
    if ((iVar4 != 1) && (iVar4 != 2)) {
      (*(undefined4 *)(fr0_ - 0x200)) = 1;
      (vsp = ((unsigned long)(fr0_ - 728)), free_if_nonnull_wrap_102790(&(*(double *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
      return (*(undefined4 *)(fr0_ - 0x200));
    }
    iVar4 = (vsp = ((unsigned long)(fr0_ - 728)), rand_range(ar4,0,3,ar7));
    if (cVar17 == '\0') {
      dVar11 = CONCAT44D((float)(iVar4 + 1),fVar9);
    }
    else {
      dVar11 = (double)(iVar4 + 1);
    }
    if (cVar18 == '\0') {
      *(int *)(unsigned)(ar4 + 0x24) = (int)(D2U(dVar11) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x24) = dVar11;
    }
    puVar6 = ((undefined1 *)(fr0_ - 0x58));
    uVar8 = 0x80;
    ({ unsigned long t0_ = (unsigned long)(puVar6); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); FUN_8c0230f0(ar4 + 0x80,0x80,puVar6,ar7); });
    uVar8 = (vsp = ((unsigned long)(fr0_ - 728)), Vec3_length(((undefined1 *)(fr0_ - 0x58)),uVar8,puVar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c03263c(ar4,uVar8,puVar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x68)),ar5,puVar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x2e4,((undefined1 *)(fr0_ - 0x78)),puVar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,puVar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,puVar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,puVar6,ar7));
    if (cVar18 == '\0') {
      fVar9 = *(float *)(unsigned)ar5;
      fVar13 = 1000.0;
    }
    else {
      in_xd0 = *ar5;
      fVar9 = 1000.0;
      fVar13 = -1.1275111e-31;
    }
    if (cVar17 != '\0' || fVar9 <= fVar13) {
      if (cVar18 != '\0') {
        fVar9 = 2.0;
      }
      ar6 = &(*(double *)(fr0_ - 0x38));
      ar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c032788(ar4,ar4 + 0x2e4,ar6,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
    }
    else {
      if (cVar18 != '\0') {
        fVar9 = 2.0;
      }
      ar6 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c125c0c);
      ar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c032788(ar4,ar4 + 0x2e4,((undefined1 *)(unsigned)0x8c125c0c),((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
    }
    iVar4 = -0x73d79244;
    (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c031b68(ar4,0x8c286dbc,ar6,ar7));
  }
  else if (iVar4 == 1) {
    iVar4 = (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c034148(ar4 + 0xb0,10,ar6,ar7));
    if ((iVar4 != 1) && (iVar4 != 2)) {
      (*(undefined4 *)(fr0_ - 0x204)) = 1;
      pcVar7 = ((void *)0x8c102790);
      (vsp = ((unsigned long)(fr0_ - 728)), free_if_nonnull_wrap_102790(&(*(double *)(fr0_ - 0x38)),0xffffffff,((void *)0x8c102790),ar7));
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,pcVar7,ar7));
      return (*(undefined4 *)(fr0_ - 0x204));
    }
    if (cVar18 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x24) = 0x3e800000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x24) = 0x24c3e800000;
    }
    uVar8 = 0x80;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); FUN_8c0230f0(ar4 + 0x80,0x80,ar6,ar7); });
    uVar8 = (vsp = ((unsigned long)(fr0_ - 728)), Vec3_length(((undefined1 *)(fr0_ - 0x88)),uVar8,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c03263c(ar4,uVar8,ar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa8))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x98)),ar5,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x2e4,((undefined1 *)(fr0_ - 0xa8)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6,ar7));
    if (cVar18 == '\0') {
      fVar9 = *(float *)(unsigned)ar5;
      fVar13 = 1000.0;
    }
    else {
      in_xd0 = *ar5;
      fVar9 = 1000.0;
      fVar13 = -1.1275111e-31;
    }
    if (cVar17 != '\0' || fVar9 <= fVar13) {
      if (cVar18 == '\0') {
        dVar11 = CONCAT44D(0x40000000,fVar9);
      }
      else {
        dVar11 = 1.4265116704764e-311;
      }
      ar6 = &(*(double *)(fr0_ - 0x38));
      ar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c032788(ar4,ar4 + 0x2e4,ar6,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
    }
    else {
      if (cVar18 == '\0') {
        dVar11 = CONCAT44D(0x40000000,fVar9);
      }
      else {
        dVar11 = -1.6026767271217265e-250;
      }
      ar6 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c125c0c);
      ar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c032788(ar4,ar4 + 0x2e4,((undefined1 *)(unsigned)0x8c125c0c),((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
    }
    (vsp = ((unsigned long)(fr0_ - 728)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar4 + 0x2e4,ar6,ar7));
    if (cVar18 == '\0') {
      dVar15 = CONCAT44D(0x42100000,(int)(D2U(dVar11) >> 0x20));
    }
    else {
      dVar15 = -4.264942176124392e-250;
      in_xd0 = dVar11;
    }
    if (cVar17 == '\0') {
      fVar9 = F32LO(dVar15) + F32HI(dVar15);
    }
    else {
      fVar9 = SUB84(dVar15 + dVar15,0);
    }
    if (cVar18 == '\0') {
      *(float *)(unsigned)(ar4 + 0x2e8) = fVar9;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x2e8) = in_xd0;
    }
    iVar4 = -0x73d79244;
    (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c031b68(ar4,0x8c286dbc,ar6,ar7));
  }
  else if (iVar4 == 2) {
    iVar4 = (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c034148(ar4 + 0xb0,9,ar6,ar7));
    if ((iVar4 != 1) && (iVar4 != 2)) {
      (*(undefined4 *)(fr0_ - 0x208)) = 1;
      (vsp = ((unsigned long)(fr0_ - 728)), free_if_nonnull_wrap_102790(&(*(double *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
      return (*(undefined4 *)(fr0_ - 0x208));
    }
    if (cVar18 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x24) = 0x41700000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x24) = 0x8c13bac441700000;
    }
    (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c023bf4(ar4 + 0x14,((undefined1 *)(unsigned)0x8c13bac4),ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 800) = 0;
    (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c03263c(ar4,ar4 + 0x14,ar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc8))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xb8)),ar5,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x2e4,((undefined1 *)(fr0_ - 0xc8)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,ar6,ar7));
    if (cVar18 == '\0') {
      dVar11 = CONCAT44D(0x43fa0000,*(undefined4 *)(unsigned)(ar4 + 0x2e8));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x2e8);
      dVar11 = 1.1709360855895245e+17;
    }
    if (cVar17 == '\0') {
      fVar9 = F32LO(dVar11) + F32HI(dVar11);
    }
    else {
      fVar9 = SUB84(dVar11 + dVar11,0);
    }
    if (cVar18 == '\0') {
      *(float *)(unsigned)(ar4 + 0x2e8) = fVar9;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x2e8) = in_xd0;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd8))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_sub(ar4 + 0x2e4,ar5,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x2d4,((undefined1 *)(fr0_ - 0xd8)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,ar6,ar7));
    iVar4 = -0x73d7922c;
    (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c031b68(ar4,0x8c286dd4,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c031748(ar4,iVar4,ar6,ar7));
  pdVar5 = (double *)(unsigned)(ar4 + 0x2c);
  in_dr0 = (double)(ulonglong)(uint)fVar9;
  if (cVar18 == '\0') {
    *(undefined4 *)(unsigned)pdVar5 = 0;
  }
  else {
    *pdVar5 = in_dr0;
  }
  (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c031c64(ar4,pdVar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
  *(undefined4 *)(unsigned)(ar4 + 0x44) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x318) = 0;
override_jmp_8c0b3676_case_3:
  if ((0 < *(int *)(unsigned)(ar4 + 0x1d4)) && (*(int *)(unsigned)(ar4 + 0x31c) != 2)) {
    pdVar5 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe8))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_sub(ar4 + 0x2e4,ar5,ar6,ar7); });
    uVar8 = (vsp = ((unsigned long)(fr0_ - 728)), Vec3_length(((undefined1 *)(fr0_ - 0xe8)),pdVar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x48)),uVar8,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe8)),0xffffffff,ar6,ar7));
    if (*(int *)(unsigned)(ar4 + 0x1d4) == 2) {
      iVar4 = ar4 + 0x14;
      (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x48)),iVar4,ar6,ar7));
      if (cVar18 == '\0') {
        dVar11 = CONCAT44D(0x42b40000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        dVar11 = 1.01062290177484e-311;
        in_xd0 = in_dr0;
      }
      if (cVar17 == '\0' && SUB84(dVar11,0) < F32HI(dVar11)) {
        if (cVar18 == '\0') {
          dVar15 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x14);
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x14);
          dVar15 = dVar11;
        }
        dVar11 = (double)(D2U(dVar15) & 0xffffffff);
        if (cVar17 == '\0' && SUB84(dVar15,0) < 0.0) {
          (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c0238b4(((undefined1 *)(fr0_ - 0x48)),((void *)0x8c0238b4),ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c022fc0(ar5,ar4 + 0x2e4,ar6,ar7));
          (*(undefined4 *)(fr0_ - 0x218)) = SUB84(dVar11,0);
          uVar8 = (undefined4)(D2U(dVar11) >> 0x20);
          if (cVar18 == '\0') {
            (*(undefined4 *)(fr0_ - 0x218)) = uVar8;
            uVar8 = (*(undefined4 *)(fr0_ - 0x214));
          }
          (*(undefined4 *)(fr0_ - 0x214)) = uVar8;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x108))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xf8)),&(*(undefined4 *)(fr0_ - 0x218)),ar6,ar7); });
          puVar6 = ((undefined1 *)(fr0_ - 0x108));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x118))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_add(puVar6,ar5,puVar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x2e4,((undefined1 *)(fr0_ - 0x118)),puVar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x118)),0xffffffff,puVar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x108)),0xffffffff,puVar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf8)),0xffffffff,puVar6,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c0238b4(((undefined1 *)(fr0_ - 0x48)),iVar4,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c022fc0(ar5,ar4 + 0x2e4,ar6,ar7));
          (*(undefined4 *)(fr0_ - 0x21c)) = SUB84(dVar11,0);
          uVar8 = (undefined4)(D2U(dVar11) >> 0x20);
          if (cVar18 == '\0') {
            (*(undefined4 *)(fr0_ - 0x21c)) = uVar8;
            uVar8 = (*(undefined4 *)(fr0_ - 0x218));
          }
          (*(undefined4 *)(fr0_ - 0x218)) = uVar8;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x138))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x128)),&(*(undefined4 *)(fr0_ - 0x21c)),ar6,ar7); });
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x148))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x138)),ar5,ar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x2e4,((undefined1 *)(fr0_ - 0x148)),ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x148)),0xffffffff,ar6,ar7));
          puVar6 = ((undefined1 *)(fr0_ - 0x138));
          (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(puVar6,0xffffffff,puVar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x128)),0xffffffff,puVar6,ar7));
        }
        ar6 = &(*(double *)(fr0_ - 0x38));
        ar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
        (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c032788(ar4,ar4 + 0x2e4,ar6,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
        if (*(int *)(unsigned)(ar4 + 0x31c) == 1) {
          (vsp = ((unsigned long)(fr0_ - 728)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar4 + 0x2e4,ar6,ar7));
          if (cVar18 == '\0') {
            dVar15 = CONCAT44D(0x42100000,(int)(D2U(dVar11) >> 0x20));
          }
          else {
            dVar15 = 7.909484942708294e+231;
            in_xd0 = dVar11;
          }
          if (cVar17 == '\0') {
            fVar9 = F32HI(dVar15);
            dVar11 = CONCAT44D(fVar9,F32LO(dVar15) + fVar9);
          }
          else {
            dVar11 = dVar15 + dVar15;
          }
          if (cVar18 == '\0') {
            *(int *)(unsigned)(ar4 + 0x2e8) = SUB84(dVar11,0);
          }
          else {
            *(double *)(unsigned)(ar4 + 0x2e8) = in_xd0;
          }
        }
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x48)),ar4 + 0x14,ar6,ar7));
      if (cVar18 == '\0') {
        dVar11 = CONCAT44D(0x42b40000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        dVar11 = 1.68966155488372e-311;
        in_xd0 = in_dr0;
      }
      if (cVar17 == '\0' && SUB84(dVar11,0) < F32HI(dVar11)) {
        *(undefined4 *)(unsigned)(ar4 + 0x31c) = 2;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
        (*(undefined4 *)(fr0_ - 0x20c)) = 1;
        (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 728)), free_if_nonnull_wrap_102790(&(*(double *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,((void *)0x8c022cb0),ar7));
        return (*(undefined4 *)(fr0_ - 0x20c));
      }
    }
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6,ar7));
    in_dr0 = dVar11;
  }
  pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x31c));
  if ((double *)(unsigned)pcVar7 == (double *)(unsigned)0x0) {
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x2c)),ar4 + 0x2e4,0,ar7));
    fVar9 = F32LO(in_dr0);
    iVar4 = ar4 + 0x14;
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x80,iVar4,pcVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,iVar4,pcVar7,ar7));
    if (cVar18 == '\0') {
      fVar9 = *(float *)(unsigned)(ar4 + 0x28);
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
    }
    if (cVar17 == '\0' && 1.0 < fVar9) {
      if (cVar18 == '\0') {
        in_dr0 = CONCAT44D(0x3e19999a,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        in_dr0 = 3.73986008970316e-312;
      }
      if (cVar17 == '\0') {
        fVar9 = F32HI(in_dr0);
        in_dr0 = CONCAT44D(fVar9,F32LO(in_dr0) - fVar9);
      }
      else {
        in_dr0 = in_dr0 - in_dr0;
      }
      iVar4 = ar4;
      if (cVar18 == '\0') {
        *(int *)(unsigned)(ar4 + 0x28) = SUB84(in_dr0,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
    }
    else {
      uVar10 = CONCAT44(0x3f800000,fVar9);
      if (cVar18 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3f800000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = uVar10;
      }
      pcVar7 = (code *)0x3;
      iVar4 = 0;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 728)), rand_range(ar4,0,3,ar7));
      if (cVar17 == '\0') {
        in_dr0 = CONCAT44D((float)(iVar2 + 1),(int)uVar10);
      }
      else {
        in_dr0 = (double)(iVar2 + 1);
      }
      if (cVar18 == '\0') {
        *(int *)(unsigned)(ar4 + 0x24) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x24) = in_dr0;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 728)), CAnimBody_GetCurFrame(ar4 + 0xb0,iVar4,pcVar7,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 1;
  }
  else if ((double *)(unsigned)pcVar7 == (double *)(unsigned)0x1) {
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x2c)),ar4 + 0x2e4,1,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,pcVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,((void *)0x8c033d88),pcVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), CAnimBody_GetCurFrame(ar4 + 0xb0,((void *)0x8c026da8),pcVar7,ar7));
    if (cVar18 == '\0') {
      dVar11 = CONCAT44D(0x41f00000,SUB84(in_dr0,0));
      in_fr15 = F32HI(in_dr0);
    }
    else {
      dVar11 = 3.74017818184368e-312;
    }
    if (cVar17 == '\0') {
      bVar16 = in_fr15 < F32HI(dVar11);
    }
    else {
      bVar16 = CONCAT44D(in_fr14,in_fr15) < dVar11;
    }
    if (bVar16) {
LAB_8c0b42c2:
      if (cVar18 == '\0') {
        in_dr0 = CONCAT44D(0x3f7d70a4,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        in_dr0 = -1.1562114664300326e+79;
      }
      if (cVar17 == '\0') {
        fVar9 = F32HI(in_dr0);
        in_dr0 = CONCAT44D(fVar9,F32LO(in_dr0) * fVar9);
      }
      else {
        in_dr0 = in_dr0 * in_dr0;
      }
      if (cVar18 == '\0') {
        *(int *)(unsigned)(ar4 + 0x28) = SUB84(in_dr0,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
    }
    else {
      if (cVar18 == '\0') {
        in_dr0 = CONCAT44D(0x42700000,SUB84(dVar11,0));
      }
      else {
        in_dr0 = 0.007187501562839316;
      }
      if (cVar17 == '\0') {
        bVar16 = F32HI(in_dr0) < in_fr15;
      }
      else {
        bVar16 = in_dr0 < CONCAT44D(in_fr14,in_fr15);
      }
      if (bVar16) goto LAB_8c0b42c2;
    }
    pcVar7 = (code *)0xb0;
    (vsp = ((unsigned long)(fr0_ - 728)), CAnimBody_GetCurFrame(ar4 + 0xb0,((void *)0x8c026da8),0xb0,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 1;
  }
  else if ((double *)(unsigned)pcVar7 == (double *)(unsigned)0x2) {
    pcVar7 = (code *)(ar4 + 0x94);
    if (cVar18 == '\0') {
      uVar8 = SUB84(in_dr0,0);
      uVar12 = 0x3fc00000;
    }
    else {
      uVar8 = 0x3fc00000;
      uVar12 = 0x17c;
    }
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x158)),((void *)0x8c022ce8),pcVar7,ar7));
    puVar6 = ((undefined1 *)(fr0_ - 0x158));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x168))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_add(ar4 + 0x2d4,puVar6,pcVar7,ar7); });
    uVar3 = (vsp = ((unsigned long)(fr0_ - 728)), Vec3_length(((undefined1 *)(fr0_ - 0x168)),puVar6,pcVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_length_sq(ar4 + 0x2d4,ar4 + 0x2d4,pcVar7,ar7));
    (*(undefined4 *)(fr0_ - 0x278)) = uVar12;
    (*(undefined4 *)(fr0_ - 0x220)) = uVar8;
    uVar1 = uVar12;
    if (cVar18 == '\0') {
      (*(undefined4 *)(fr0_ - 0x278)) = uVar3;
      (*(undefined4 *)(fr0_ - 0x220)) = uVar12;
      uVar1 = (*(undefined4 *)(fr0_ - 0x21c));
    }
    (*(undefined4 *)(fr0_ - 0x21c)) = uVar1;
    in_dr0 = CONCAT44D(uVar12,uVar8);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x178))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_scale((*(undefined4 *)(fr0_ - 0x278)),&(*(undefined4 *)(fr0_ - 0x220)),pcVar7,ar7); });
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x2d4,((undefined1 *)(fr0_ - 0x178)),pcVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x178)),0xffffffff,pcVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x168)),0xffffffff,pcVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x158)),0xffffffff,pcVar7,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x188))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_add(ar4 + 0x2d4,ar5,pcVar7,ar7); });
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x188)),pcVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x188)),0xffffffff,pcVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x2e4,&(*(undefined4 *)(fr0_ - 0x2c)),pcVar7,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x198))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_scale(ar4 + 0x14,((undefined1 *)(unsigned)0x8c13bac8),pcVar7,ar7); });
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x198)),pcVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x198)),0xffffffff,pcVar7,ar7));
    iVar4 = *(int *)(unsigned)(ar4 + 800);
    if (iVar4 == 0) {
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_length_sq(ar4 + 0x2d4,0,pcVar7,ar7));
      uVar8 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      (*(undefined4 *)(fr0_ - 0x224)) = uVar8;
      if (cVar18 != '\0') {
        (*(undefined4 *)(fr0_ - 0x280)) = SUB84(in_dr0,0);
        (*(undefined4 *)(fr0_ - 0x224)) = (*(undefined4 *)(fr0_ - 0x280));
        (*(undefined4 *)(fr0_ - 0x220)) = uVar8;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1a8))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_scale(ar4 + 0x14,&(*(undefined4 *)(fr0_ - 0x224)),pcVar7,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1b8))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0x1a8)),pcVar7,ar7); });
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x1b8)),pcVar7,ar7));
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1b8)),0xffffffff,pcVar7,ar7));
      uVar8 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1a8)),0xffffffff,pcVar7,ar7));
      if (cVar18 == '\0') {
        dVar11 = CONCAT44D(0x3f7d70a4,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        dVar11 = -8.034349276309792e-251;
      }
      if (cVar17 == '\0') {
        fVar9 = F32HI(dVar11);
        dVar11 = CONCAT44D(fVar9,F32LO(dVar11) * fVar9);
      }
      else {
        dVar11 = dVar11 * dVar11;
      }
      if (cVar18 == '\0') {
        *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar11,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 728)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar8,pcVar7,ar7));
      (vsp = ((unsigned long)(fr0_ - 728)), CAnimBody_GetCurFrame(ar4 + 0xb0,uVar8,pcVar7,ar7));
      if (cVar18 == '\0') {
        in_dr0 = CONCAT44D(0x41a00000,SUB84(dVar11,0));
        in_fr15 = F32HI(dVar11);
      }
      else {
        in_dr0 = 1.6981406014198e-311;
      }
      if (in_fr15 == F32HI(in_dr0)) {
        *(undefined4 *)(unsigned)(ar4 + 0x44) = 1;
        *(int *)(unsigned)(ar4 + 800) = *(int *)(unsigned)(ar4 + 800) + 1;
        if (cVar18 == '\0') {
          in_dr0 = CONCAT44D(0x3eb33333,SUB84(in_dr0,0));
          *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0x3eb33333;
        }
        else {
          in_dr0 = 3.48527032906071e-312;
          *(undefined8 *)(unsigned)(ar4 + 0xa0) = 0xa43eb33333;
        }
        *(undefined4 *)(unsigned)(ar4 + 0xa4) = 1;
        (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c03c314(ar4,ar4,pcVar7,ar7));
        if (*(int *)(unsigned)(ar4 + 0x348) == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x240) = 1;
          pcVar7 = (code *)ar5;
          (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c033474(ar4,0xb,ar5,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
          ar7 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
        }
      }
    }
    else if (iVar4 == 1) {
      if (cVar18 == '\0') {
        dVar11 = CONCAT44D(0x3e19999a,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        dVar11 = 32.000007402896884;
      }
      if (cVar17 == '\0') {
        fVar9 = F32LO(dVar11) - F32HI(dVar11);
      }
      else {
        fVar9 = SUB84(dVar11 - dVar11,0);
      }
      if (cVar18 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar9;
        in_dr0 = CONCAT44D(0x40400000,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        in_dr0 = 3.74003830419144e-312;
      }
      if (cVar17 == '\0' && SUB84(in_dr0,0) < F32HI(in_dr0)) {
        if (cVar18 == '\0') {
          in_dr0 = CONCAT44D(0x40400000,SUB84(in_dr0,0));
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x40400000;
        }
        else {
          in_dr0 = 3.74003830419144e-312;
          *(undefined8 *)(unsigned)(ar4 + 0x28) = 0xb040400000;
        }
      }
      pcVar7 = (code *)0xb0;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 728)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,1,0xb0,ar7));
      if (iVar4 == 1) {
        *(int *)(unsigned)(ar4 + 800) = *(int *)(unsigned)(ar4 + 800) + 1;
        ar7 = (int *)(unsigned)0x0;
        pcVar7 = (code *)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 728)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0));
      }
    }
    else if (iVar4 == 2) {
      if (cVar18 == '\0') {
        dVar11 = CONCAT44D(0x3e19999a,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        dVar11 = 32.000007402896884;
      }
      if (cVar17 == '\0') {
        fVar9 = F32LO(dVar11) - F32HI(dVar11);
      }
      else {
        fVar9 = SUB84(dVar11 - dVar11,0);
      }
      if (cVar18 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar9;
        dVar11 = CONCAT44D(0x40400000,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        dVar11 = 21990236766208.0;
      }
      if (cVar17 == '\0' && SUB84(dVar11,0) < F32HI(dVar11)) {
        if (cVar18 == '\0') {
          dVar11 = CONCAT44D(0x40400000,SUB84(dVar11,0));
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x40400000;
        }
        else {
          dVar11 = 21990236766208.0;
          *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x42b4000040400000;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 728)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar4 + 0x28,pcVar7,ar7));
      (vsp = ((unsigned long)(fr0_ - 728)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar5,pcVar7,ar7));
      if (cVar18 == '\0') {
        dVar15 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5 + 4),uVar14);
        in_dr0 = CONCAT44D(0x42100000,(int)(D2U(dVar11) >> 0x20));
      }
      else {
        dVar15 = *(double *)(unsigned)((int)ar5 + 4);
        in_dr0 = 1.52838456460023e-311;
        in_xd0 = dVar11;
      }
      if (cVar17 == '\0') {
        fVar13 = F32HI(in_dr0);
        fVar9 = F32LO(in_dr0) + fVar13;
        in_dr0 = CONCAT44D(fVar13,fVar9);
        bVar16 = fVar9 < F32HI(dVar15);
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
        fVar9 = F32LO(in_dr0);
        bVar16 = in_dr0 < dVar15;
      }
      if (!bVar16) {
        if (cVar18 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2d0) = 0x3f800000;
          in_dr0 = CONCAT44D(0x42f00000,fVar9);
          *(undefined4 *)(unsigned)(ar4 + 0x2cc) = 0x42f00000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2d0) = CONCAT44(0x3f800000,fVar9);
          in_dr0 = 5.69249719999231e-312;
          *(undefined8 *)(unsigned)(ar4 + 0x2cc) = 0x10c42f00000;
        }
        iVar4 = ar4 + 0x2cc;
        pcVar7 = ((void *)0x8c0230f0);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c8))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); FUN_8c0230f0(ar4 + 0x80,iVar4,((void *)0x8c0230f0),ar7); });
        uVar8 = (vsp = ((unsigned long)(fr0_ - 728)), Vec3_length(((undefined1 *)(fr0_ - 0x1c8)),iVar4,pcVar7,ar7));
        pcVar7 = ((void *)0x8c023a14);
        (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 700,uVar8,((void *)0x8c023a14),ar7));
        (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c8)),0xffffffff,pcVar7,ar7));
        *(int *)(unsigned)(ar4 + 800) = *(int *)(unsigned)(ar4 + 800) + 1;
      }
    }
    else if (iVar4 == 3) {
      if (cVar18 == '\0') {
        dVar11 = CONCAT44D(0x3e19999a,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        dVar11 = 21990236625305.6;
      }
      if (cVar17 == '\0') {
        fVar9 = F32LO(dVar11) - F32HI(dVar11);
      }
      else {
        fVar9 = SUB84(dVar11 - dVar11,0);
      }
      if (cVar18 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar9;
        fVar9 = *(float *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
      }
      if (cVar17 != '\0' || fVar9 <= 0.0) {
        if (cVar18 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar9;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 728)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar4 + 0xb0,pcVar7,ar7));
      if (cVar18 == '\0') {
        fVar9 = *(float *)(unsigned)(ar4 + 0x2d0);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x2d0);
      }
      if (cVar17 == '\0') {
        fVar9 = fVar9 + 1.0;
      }
      else {
        fVar9 = SUB84(CONCAT44D(0x3f800000,fVar9) + CONCAT44D(0x3f800000,fVar9),0);
      }
      (*(undefined8 *)(fr0_ - 0x2d4)) = in_xd0;
      if (cVar18 == '\0') {
        (*(undefined8 *)(fr0_ - 0x2d4)) = CONCAT44D(ar4,fVar9);
      }
      if (cVar18 == '\0') {
        *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2d4))+4)) + 0x2d0) = (undefined4)(*(undefined8 *)(fr0_ - 0x2d4));
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2cc),(undefined4)(*(undefined8 *)(fr0_ - 0x2d4)));
        (*(undefined8 *)(fr0_ - 0x2d4)) = in_xd0;
      }
      else {
        *(double *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2d4))+4)) + 0x2d0) = (*(undefined8 *)(fr0_ - 0x2d4));
        dVar11 = *(double *)(unsigned)(ar4 + 0x2cc);
      }
      if (cVar17 == '\0') {
        fVar9 = F32LO(dVar11) / F32HI(dVar11);
      }
      else {
        fVar9 = SUB84(dVar11 / dVar11,0);
      }
      dVar11 = (*(undefined8 *)(fr0_ - 0x2d4));
      if (cVar18 == '\0') {
        (*(undefined8 *)(fr0_ - 0x1fc)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1fc))+4)),fVar9);
        dVar11 = (*(undefined8 *)(fr0_ - 0x1fc));
      }
      (*(undefined8 *)(fr0_ - 0x1fc)) = dVar11;
      if (cVar17 == '\0') {
        dVar11 = CONCAT44D(1.0 - fVar9,fVar9);
      }
      else {
        dVar11 = CONCAT44D(0x3f800000,fVar9) - CONCAT44D(0x3f800000,fVar9);
      }
      uVar8 = (undefined4)(D2U(dVar11) >> 0x20);
      (*(undefined4 *)(fr0_ - 0x228)) = uVar8;
      if (cVar18 != '\0') {
        (*(undefined4 *)(fr0_ - 0x228)) = SUB84(dVar11,0);
        (*(undefined4 *)(fr0_ - 0x224)) = uVar8;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1d8))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_scale(ar4 + 0x80,&(*(undefined4 *)(fr0_ - 0x228)),&(*(undefined4 *)(fr0_ - 0x228)),ar7); });
      uVar8 = 700;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1e8))); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_scale(ar4 + 700,&(*(undefined8 *)(fr0_ - 0x1fc)),700,ar7); });
      ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x1fc)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 728)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 728)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x1d8)),((undefined1 *)(fr0_ - 0x1e8)),uVar8,ar7); });
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_assign(ar4 + 0x80,(int)&(*(undefined8 *)(fr0_ - 0x1fc)) + 4,uVar8,ar7));
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x1fc)) + 4,0xffffffff,uVar8,ar7));
      pcVar7 = (code *)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1e8)),0xffffffff,0xffffffff,ar7));
      (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1d8)),0xffffffff,pcVar7,ar7));
      (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c022dac(ar4 + 0x80,ar4 + 700,pcVar7,ar7));
      in_xd0 = dVar11;
      if (cVar18 == '\0') {
        dVar11 = (double)(D2U(dVar11) >> 0x20);
        in_xd0 = (*(undefined8 *)(fr0_ - 0x2d4));
      }
      in_dr0 = (double)(D2U(dVar11) & 0xffffffff);
      if (cVar17 != '\0' || SUB84(dVar11,0) <= 0.0) {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        *(undefined4 *)(unsigned)(ar4 + 0x31c) = 0;
        (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c031748(ar4,0,pcVar7,ar7));
        *(undefined4 *)(unsigned)(ar4 + 800) = 0;
        (*(undefined4 *)(fr0_ - 0x210)) = 0;
        (vsp = ((unsigned long)(fr0_ - 728)), free_if_nonnull_wrap_102790(&(*(double *)(fr0_ - 0x38)),0xffffffff,pcVar7,ar7));
        (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,pcVar7,ar7));
        return (*(undefined4 *)(fr0_ - 0x210));
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c022fc0(ar5,&(*(undefined4 *)(fr0_ - 0x2c)),pcVar7,ar7));
  if (cVar18 == '\0') {
    dVar11 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),(int)((ulonglong)in_dr0 >> 0x20));
    in_dr0 = in_xd0;
  }
  else {
    dVar11 = *(double *)(unsigned)(ar4 + 0x28);
  }
  if (cVar17 == '\0') {
    fVar9 = F32LO(dVar11) / F32HI(dVar11);
  }
  else {
    fVar9 = SUB84(dVar11 / dVar11,0);
  }
  if (cVar18 == '\0') {
    *(float *)(unsigned)(ar4 + 0x30) = fVar9;
  }
  else {
    *(double *)(unsigned)(ar4 + 0x30) = in_dr0;
  }
  uVar8 = (vsp = ((unsigned long)(fr0_ - 728)), FUN_8c031764(ar4,&(*(undefined4 *)(fr0_ - 0x2c)),ar5,ar7));
  ar6 = (double *)(unsigned)0x1b8;
  if (*(int *)(unsigned)(ar4 + 0x1b8) == 1) {
    if (cVar18 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x18c) = *(undefined4 *)(unsigned)ar5;
      *(undefined4 *)(unsigned)(ar4 + 400) = *(undefined4 *)(unsigned)((int)ar5 + 4);
      *(undefined4 *)(unsigned)(ar4 + 0x194) = *(undefined4 *)(unsigned)(ar5 + 1);
      *(undefined4 *)(unsigned)(ar4 + 0x198) = (*(undefined4 *)(fr0_ - 0x2c));
      *(undefined4 *)(unsigned)(ar4 + 0x19c) = (*(undefined4 *)(fr0_ - 0x28));
      *(undefined4 *)(unsigned)(ar4 + 0x1a0) = (*(undefined4 *)(fr0_ - 0x24));
    }
    else {
      *(double *)(unsigned)(ar4 + 0x18c) = *ar5;
      *(undefined8 *)(unsigned)(ar4 + 400) = *(undefined8 *)(unsigned)((int)ar5 + 4);
      *(double *)(unsigned)(ar4 + 0x194) = ar5[1];
      *(ulonglong *)(unsigned)(ar4 + 0x198) = CONCAT44((*(undefined4 *)(fr0_ - 0x28)),(*(undefined4 *)(fr0_ - 0x2c)));
      *(ulonglong *)(unsigned)(ar4 + 0x19c) = CONCAT44((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
      *(ulonglong *)(unsigned)(ar4 + 0x1a0) = CONCAT44((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
    }
    ar6 = (double *)(unsigned)((int)ar5 + 4);
  }
override_jmp_8c0b3676_case_2:
  (*(undefined4 *)(fr0_ - 0x214)) = uVar8;
  (vsp = ((unsigned long)(fr0_ - 728)), free_if_nonnull_wrap_102790(&(*(double *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 728)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
  return (*(undefined4 *)(fr0_ - 0x214));
}

__asm__(".globl _FUN_8c0b3604\n.set _FUN_8c0b3604, _FUN_8c0b3604_def\n");
//@unit 8c0b4ba0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b4ba0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b4ba0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 uVar3;
  undefined4 in_fr1 = 0;
  ulonglong uVar4;
  char cVar5;
  
  cVar5 = '\0';
  uVar3 = 1;
  if (*(int *)(unsigned)(ar4 + 300) == 0) {
    uVar2 = 0x17;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034148(ar4 + 0xb0,0x17,ar6,ar7));
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 1;
      }
      (vsp = ((unsigned long)(fr0_ - 4)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7));
    }
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else if (*(int *)(unsigned)(ar4 + 300) == 1) {
    uVar4 = CONCAT44(0x3f000000,in_fr1);
    *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3f000000;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
    if (iVar1 == 1) {
      if (cVar5 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar4 & 0xffffffff;
      }
      ar7_00 = 0;
      uVar2 = 0xffffffff;
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar2,ar7_00));
      uVar3 = 0;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c0b4ba0\n.set _FUN_8c0b4ba0, _FUN_8c0b4ba0_def\n");
//@unit 8c0b4c7c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b4c7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b4c7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(unsigned)(0x12c + ar4) == 0) {
    ar5_00 = 5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c034148(ar4 + 0xb0,5,ar6,ar7));
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 1;
      }
      (vsp = ((unsigned long)(fr0_ - 0)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7));
    }
    *(int *)(unsigned)(0x12c + ar4) = *(int *)(unsigned)(0x12c + ar4) + 1;
  }
  else if ((*(int *)(unsigned)(0x12c + ar4) == 1) &&
          (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c026858))))
                             (ar4 + 0xb0,ar5,ar6,ar7)), iVar1 == 1)) {
    uVar2 = 0;
    *(undefined4 *)(unsigned)(0x12c + ar4) = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0b4c7c\n.set _FUN_8c0b4c7c, _FUN_8c0b4c7c_def\n");
//@unit 8c0b4d14
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b4d14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b4d14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  double dVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 uVar6;
  float fVar7;
  undefined8 in_dr0 = 0;
  float fVar9;
  double dVar8;
  undefined4 uVar10;
  double in_dr14 = 0;
  bool bVar11;
  char cVar12;
  char cVar13;
  undefined4 ain0;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar6 = 1;
  uVar4 = ar5;
  ar6_00 = ar6;
  ain0 = ar7;
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x38)),uVar4,ar6_00,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 120)), get_field_6c_028cc4(ar5,uVar4,ar6_00,ar7));
  if (iVar2 == 0) {
    (vsp = ((unsigned long)(fr0_ - 120)), object_dtor_delete(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
    return 2;
  }
  iVar3 = *(int *)(unsigned)(ar4 + 300);
  if (iVar3 == 0) {
    ar7 = 0;
    ar6_00 = 0xffffffff;
    uVar4 = 0xb;
    (vsp = ((unsigned long)(fr0_ - 120)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xb,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 120)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else if (iVar3 != 1) {
    if (iVar3 == 2) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6_00,ar7); });
      if (cVar13 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   (int)((ulonglong)in_dr0 >> 0x20));
      }
      if (cVar12 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),F32LO(in_dr14) + 1.0);
      }
      else {
        in_dr14 = in_dr14 + CONCAT44D(0x3f800000,(int)in_dr0);
      }
      iVar3 = (vsp = ((unsigned long)(fr0_ - 120)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x16,ar6_00,ar7));
      fVar7 = (float)iVar3;
      dVar8 = (double)(ulonglong)(uint)fVar7;
      if (cVar12 == '\0' && fVar7 < 0.0) {
        if (cVar13 == '\0') {
          dVar8 = CONCAT44D(0x4f800000,fVar7);
        }
        else {
          dVar8 = -8.62186752335918e-251;
        }
        if (cVar12 == '\0') {
          fVar7 = F32HI(dVar8);
          dVar8 = CONCAT44D(fVar7,F32LO(dVar8) + fVar7);
        }
        else {
          dVar8 = dVar8 + dVar8;
        }
      }
      if (cVar12 == '\0') {
        bVar11 = SUB84(in_dr14,0) < SUB84(dVar8,0);
      }
      else {
        bVar11 = in_dr14 < dVar8;
      }
      if (!bVar11) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 120)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x16,ar6_00,ar7));
        dVar8 = (double)(D2U(dVar8) & 0xffffffff);
        if (cVar12 == '\0') {
          bVar11 = (float)iVar3 < 0.0;
        }
        else {
          bVar11 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(float)iVar3) < dVar8;
        }
        if (bVar11) {
          if (cVar13 == '\0') {
            dVar8 = 9.046256971665328e+74;
          }
          else {
            dVar8 = -8.62186752335918e-251;
          }
        }
      }
      uVar10 = (undefined4)(D2U(dVar8) >> 0x20);
      ar5_00 = 0x16;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c03c0f0(ar4 + 0xb0,0x16,ar6_00,ar7));
      puVar5 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 120)), deref_u32(uVar4,ar5_00,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c034384(ar4 + 0xb0,*(undefined4 *)(unsigned)*puVar5,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x48)),ar6_00,ar7));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7));
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6_00,ar7); });
      if (cVar13 == '\0') {
        dVar8 = CONCAT44D(0x41a00000,uVar10);
      }
      else {
        dVar8 = 3.14599345710447e-312;
      }
      dVar1 = (*(double *)(fr0_ - 0x24));
      if ((cVar12 != '\0' || F32HI(dVar8) <= SUB84(dVar8,0)) &&
         (dVar8 = (double)(D2U(dVar8) & 0xffffffff), dVar1 = dVar8, cVar13 == '\0')) {
        (*(double *)(fr0_ - 0x24)) = (double)((ulonglong)(*(double *)(fr0_ - 0x24)) & 0xffffffff00000000);
        dVar1 = (*(double *)(fr0_ - 0x24));
      }
      (*(double *)(fr0_ - 0x24)) = dVar1;
      (vsp = ((unsigned long)(fr0_ - 120)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x54)),ain0,ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x64)),ar6,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 120)), object_dtor_delete(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c036988(iVar2,uVar4,ar6_00,ar7));
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6_00,ar7); });
      if (cVar12 == '\0') {
        iVar2 = (int)F32HI(dVar8);
      }
      else {
        iVar2 = (int)dVar8;
      }
      if (iVar2 == 0x28) {
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c03f3e8(ar5,uVar4,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x348) = 1;
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 120)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar6_00,ar7));
      if (iVar2 == 1) {
        uVar6 = 0;
        *(byte *)(unsigned)(ar4 + 0x1fc) = *(byte *)(unsigned)(ar4 + 0x1fc) & 0xfb | 4;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
    }
    goto LAB_8c0b4fe2;
  }
  fVar7 = F32HI(in_dr0);
  (vsp = ((unsigned long)(fr0_ - 120)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar6_00,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6_00,ar7); });
  if (cVar13 == '\0') {
    fVar9 = 15.0;
  }
  else {
    fVar7 = 15.0;
    fVar9 = 2.57839e-43;
  }
  if (cVar12 != '\0' || fVar9 <= fVar7) {
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c033474(ar4,0xc,ar6,(*(undefined4 *)(fr0_ + 0x00000000))));
    *(byte *)(unsigned)(ar4 + 0x1fc) = *(byte *)(unsigned)(ar4 + 0x1fc) & 0xfb;
    ar6_00 = ar6;
    ar7 = (*(undefined4 *)(fr0_ + 0x00000000));
  }
LAB_8c0b4fe2:
  (vsp = ((unsigned long)(fr0_ - 120)), object_dtor_delete(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
  return uVar6;
}

__asm__(".globl _FUN_8c0b4d14\n.set _FUN_8c0b4d14, _FUN_8c0b4d14_def\n");
//@unit 8c0b5098
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b5098_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b5098";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 152; for (int i_ = 0; i_ < 152; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  float fVar6;
  double in_dr0 = 0;
  double dVar7;
  double dVar8;
  undefined4 in_fr5 = 0;
  undefined8 in_xd0 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar4 = 1;
  uVar3 = ar6;
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x328) = 0xffffffff;
  iVar2 = *(int *)(unsigned)(ar4 + 300);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 152)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
      if (iVar2 == 1) {
        ar5 = 0x15;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 152)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x15,ar6,ar7));
        if (cVar10 == '\0') {
          dVar8 = CONCAT44D((float)iVar2,in_fr5);
        }
        else {
          dVar8 = (double)iVar2;
        }
        dVar7 = (double)((ulonglong)in_dr0 & 0xffffffff);
        if (cVar10 == '\0') {
          bVar9 = F32HI(dVar8) < 0.0;
        }
        else {
          bVar9 = dVar8 < dVar7;
        }
        if (bVar9) {
          if (cVar11 == '\0') {
            dVar7 = (double)((ulonglong)in_dr0 & 0xffffffff);
          }
          else {
            dVar7 = -8.399317239676898e-251;
          }
        }
        in_dr0 = (double)(D2U(dVar7) & 0xffffffff);
        (vsp = ((unsigned long)(fr0_ - 152)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 300) = 2;
        *(undefined4 *)(unsigned)(ar4 + 0x32c) = 0;
        uVar4 = 0;
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c03f39c(uVar3,ar5,ar6,ar7));
      }
      else {
        ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7); });
        dVar8 = in_dr0;
        if (cVar11 == '\0') {
          (*(double *)(fr0_ - 0x74)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x74))+4)),(int)((ulonglong)in_dr0 >> 0x20));
          dVar8 = (*(double *)(fr0_ - 0x74));
        }
        (*(double *)(fr0_ - 0x74)) = dVar8;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 152)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x15,ar6,ar7));
        uVar3 = SUB84(in_dr0,0);
        ar5 = (vsp = ((unsigned long)(fr0_ - 152)), libgcc_divide_helper_0101e4(iVar2 + -1,8,ar6,ar7));
        in_dr0 = (*(double *)(fr0_ - 0x74));
        if (cVar11 == '\0') {
          in_dr0 = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x74))+0)),uVar3);
        }
        if (cVar10 == '\0') {
          iVar2 = (int)F32HI(in_dr0);
        }
        else {
          iVar2 = (int)in_dr0;
        }
        iVar2 = (vsp = ((unsigned long)(fr0_ - 152)), libgcc_divide_helper_01031c(iVar2,ar5,ar6,ar7));
        if (iVar2 == 0) {
          iVar2 = *(int *)(unsigned)(ar4 + 0x32c);
          *(int *)(unsigned)(ar4 + 0x32c) = iVar2 + 1;
          *(int *)(unsigned)(ar4 + 0x328) = iVar2;
        }
      }
    }
    else if (iVar2 == 2) {
      uVar4 = 0;
    }
    goto LAB_8c0b51e6;
  }
  ar5 = 0x15;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c034148(ar4 + 0xb0,0x15,ar6,ar7));
  uVar5 = SUB84(in_dr0,0);
  if (iVar2 == 1) {
LAB_8c0b50fa:
    *(undefined4 *)(unsigned)(ar4 + 0x32c) = 0;
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else if (iVar2 == 2) {
    (vsp = ((unsigned long)(fr0_ - 152)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
    goto LAB_8c0b50fa;
  }
  in_dr0 = (double)(ulonglong)uVar5;
  if (cVar11 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
  }
  else {
    *(double *)(unsigned)(ar4 + 0x2c) = in_dr0;
  }
LAB_8c0b51e6:
  fVar6 = F32LO(in_dr0);
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2c))); *(unsigned *)((((unsigned long)(fr0_ - 152)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 152)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_normalize(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_assign(((undefined1 *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x3c)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
  if (cVar11 == '\0') {
    fVar6 = *(float *)(unsigned)(ar4 + 0x2c);
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2c);
  }
  if (cVar10 == '\0') {
    fVar6 = fVar6 + 1.0;
  }
  else {
    fVar6 = SUB84(CONCAT44D(0x3f800000,fVar6) + CONCAT44D(0x3f800000,fVar6),0);
  }
  (*(undefined8 *)(fr0_ - 0x94)) = in_xd0;
  if (cVar11 == '\0') {
    (*(undefined8 *)(fr0_ - 0x94)) = CONCAT44(ar4,fVar6);
  }
  if (cVar11 == '\0') {
    *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x94))+4)) + 0x2c) = (undefined4)(*(undefined8 *)(fr0_ - 0x94));
    dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),(undefined4)(*(undefined8 *)(fr0_ - 0x94)));
  }
  else {
    *(undefined8 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x94))+4)) + 0x2c) = (*(undefined8 *)(fr0_ - 0x94));
    dVar8 = *(double *)(unsigned)(ar4 + 0x38);
    in_xd0 = (*(undefined8 *)(fr0_ - 0x94));
  }
  if (cVar10 == '\0') {
    fVar6 = F32LO(dVar8) / F32HI(dVar8);
  }
  else {
    fVar6 = SUB84(dVar8 / dVar8,0);
  }
  if (cVar11 == '\0') {
    dVar8 = CONCAT44D(0x3dcccccd,fVar6);
  }
  else {
    dVar8 = 2.72127724290066e-312;
  }
  if (cVar10 == '\0') {
    fVar6 = F32LO(dVar8) * F32HI(dVar8);
  }
  else {
    fVar6 = SUB84(dVar8 * dVar8,0);
  }
  uVar1 = in_xd0;
  if (cVar11 == '\0') {
    (*(undefined8 *)(fr0_ - 0x60)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x60))+4)),fVar6);
    uVar1 = (*(undefined8 *)(fr0_ - 0x60));
  }
  (*(undefined8 *)(fr0_ - 0x60)) = uVar1;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 152)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 152)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x1c)),&(*(undefined8 *)(fr0_ - 0x60)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c023aa0(ar4 + 0x14,((undefined1 *)(fr0_ - 0x4c)),ar6,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_normalize(ar4 + 0x14,uVar3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_assign(ar4 + 0x14,(int)&(*(undefined8 *)(fr0_ - 0x60)) + 4,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x60)) + 4,0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return uVar4;
}

__asm__(".globl _FUN_8c0b5098\n.set _FUN_8c0b5098, _FUN_8c0b5098_def\n");
//@unit 8c0b5344
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0b5344_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b5344";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  int *piVar3;
  uint uVar4;
  float fVar5;
  double in_dr0 = 0;
  double dVar6;
  ulonglong uVar7;
  ulonglong in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  iVar1 = ar4[0x1a];
  if (iVar1 == 0) {
    ar7 = 0;
    ar6 = 0xffffffff;
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0,0xffffffff,0));
    uVar4 = SUB84(in_dr0,0);
    (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ar5_00,ar6,ar7));
    uVar7 = (ulonglong)uVar4;
    if (cVar9 == '\0') {
      ar4[10] = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 10) = uVar7;
    }
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022d04(ar4 + 5,ar5_00,ar6,ar7));
    piVar3 = ar4 + 0x28;
    if (cVar9 == '\0') {
      in_dr0 = CONCAT44D(0x41100000,(int)uVar7);
      *piVar3 = 0x41100000;
    }
    else {
      in_dr0 = -8.625516823227636e-251;
      piVar3[0] = 0x41100000;
      piVar3[1] = -0x73fc3cec;
    }
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c314(ar4,ar5_00,ar6,ar7));
    ar4[0x1a] = ar4[0x1a] + 1;
  }
  else {
    ar5_00 = ar5;
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return iVar1;
      }
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
      if (cVar9 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),ar4[10]);
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)(ar4 + 10);
      }
      if (cVar8 == '\0') {
        fVar5 = F32LO(in_dr0) * F32HI(in_dr0);
      }
      else {
        fVar5 = SUB84(in_dr0 * in_dr0,0);
      }
      if (cVar9 == '\0') {
        ar4[10] = (int)fVar5;
        fVar5 = (float)ar4[10];
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 10) = in_xd0;
      }
      if (cVar9 == '\0') {
        uVar7 = CONCAT44(0x3dcccccd,fVar5);
      }
      else {
        uVar7 = 0x803dcccccd;
      }
      if (cVar8 != '\0' || (float)(uVar7 >> 0x20) <= (float)uVar7) {
        return (int)((undefined4 *)(unsigned)0x8c0b54e8);
      }
      if (cVar9 == '\0') {
        ar4[10] = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 10) = uVar7 & 0xffffffff;
      }
      piVar3 = ar4 + 0x20;
      (vsp = ((unsigned long)(fr0_ - 4)), Vec3_assign(ar4 + 5,piVar3,ar6,ar7));
      ar4[0x1a] = 0;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x2c))))(ar4,piVar3,ar6,ar7));
      return uVar2;
    }
  }
  uVar4 = SUB84(in_dr0,0);
  if (ar5 == 0) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031748(ar4,ar5_00,ar6,ar7));
    uVar7 = (ulonglong)uVar4;
    if (cVar9 == '\0') {
      ar4[0x28] = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar7;
    }
    (vsp = ((unsigned long)(fr0_ - 4)), Vec3_length_sq(ar4 + 1,ar5_00,ar6,ar7));
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D(0x3f4ccccd,(int)(uVar7 >> 0x20));
      uVar7 = in_xd0;
    }
    else {
      dVar6 = 0.0046875001760781744;
    }
    if (cVar8 == '\0') {
      fVar5 = F32LO(dVar6) * F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar9 == '\0') {
      ar4[10] = (int)fVar5;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 10) = uVar7;
    }
    ar5 = 0x68;
    ar4[0x1a] = ar4[0x1a] + 1;
  }
  else if ((ar5 == 1) || (ar5 == 2)) {
    ar4[0x1a] = 0;
    if (cVar9 == '\0') {
      ar4[10] = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 10) = (ulonglong)in_dr0 & 0xffffffff;
    }
    if (cVar9 == '\0') {
      ar4[0x28] = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
    }
    ar5 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031748(ar4,ar5_00,ar6,ar7));
  }
  return ar5;
}

__asm__(".globl _FUN_8c0b5344\n.set _FUN_8c0b5344, _FUN_8c0b5344_def\n");
//@unit 8c0b54f4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b54f4_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b54f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 228; for (int i_ = 0; i_ < 228; i_++) z_[i_] = 0; }
  double dVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  int ar6_00;
  float in_fr1 = 0;
  double dVar3;
  float fVar5;
  ulonglong uVar4;
  float fVar6;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar2 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c022d04(ar4 + 0x200,ar5,ar6,ar7));
  if (cVar8 == '\0') {
    (*(float *)(fr0_ - 0xdc)) = 0.0;
  }
  else {
    ((undefined4 *)(fr0_ - 0xd8))[0] = 0;
    (*(float *)(fr0_ - 0xdc)) = in_fr1;
  }
  fVar6 = 1.0;
  (vsp = ((unsigned long)(fr0_ - 228)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x24)),uVar2,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 228)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),uVar2,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 228)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x44)),uVar2,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 228)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x54)),uVar2,ar6_00,ar7));
  if ((*(int *)(unsigned)(ar6 + 0x68) == 0) || (-1 < (int)((uint)*(byte *)(unsigned)(ar4 + 0x1fc) << 0x1e))) {
    if ((*(int *)(unsigned)(ar6 + 0x88) != 0) && ((int)((uint)*(byte *)(unsigned)(ar4 + 0x1fc) << 0x1b) < 0)) {
      *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 2;
    }
    (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 1;
    if (cVar8 == '\0') {
      fVar6 = *(float *)(unsigned)(*(int *)(unsigned)(ar6 + 0x68) + 0x158);
    }
    (vsp = ((unsigned long)(fr0_ - 228)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),*(int *)(unsigned)(ar6 + 0x68) + 4,ar6_00,ar7));
    dVar3 = (*(double *)(fr0_ - 0x20));
    if (cVar8 == '\0') {
      dVar3 = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x20))+0)),in_fr1);
    }
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) + fVar6,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 + CONCAT44D(in_fr14,fVar6);
    }
    dVar1 = dVar3;
    if (cVar8 == '\0') {
      (*(double *)(fr0_ - 0x20)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x20))+4)),(int)(D2U(dVar3) >> 0x20));
      dVar1 = (*(double *)(fr0_ - 0x20));
    }
    (*(double *)(fr0_ - 0x20)) = dVar1;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 228)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 228)) - 8); Vec3_sub(ar5,((undefined1 *)(fr0_ - 0x24)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 228)), Vec3_assign(ar4 + 0x200,((undefined1 *)(fr0_ - 0x64)),ar6_00,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 228)), Vec3_length_sq(ar4 + 0x200,uVar2,ar6_00,ar7));
    fVar5 = F32HI(dVar3);
    if (cVar8 == '\0') {
      dVar3 = CONCAT44D(fVar5,*(undefined4 *)(unsigned)(ar4 + 0x48));
      (*(float *)(fr0_ - 0xe0)) = fVar5;
    }
    else {
      (*(float *)(fr0_ - 0xe0)) = SUB84(dVar3,0);
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
      (*(float *)(fr0_ - 0xdc)) = fVar5;
    }
    if (cVar7 == '\0') {
      fVar6 = F32LO(dVar3) + fVar6;
    }
    else {
      fVar6 = SUB84(dVar3 + CONCAT44D(in_fr14,fVar6),0);
    }
    if (cVar8 == '\0') {
      dVar3 = CONCAT44D((*(float *)(fr0_ - 0xe0)),fVar6);
    }
    else {
      dVar3 = CONCAT44D((*(float *)(fr0_ - 0xdc)),(*(float *)(fr0_ - 0xe0)));
    }
    if (cVar7 == '\0') {
      fVar6 = F32LO(dVar3) - F32HI(dVar3);
    }
    else {
      fVar6 = SUB84(dVar3 - dVar3,0);
    }
    if (cVar8 == '\0') {
      dVar3 = CONCAT44D(0x3dcccccd,fVar6);
    }
    else {
      dVar3 = -7.93713999303812e-251;
    }
    if (cVar7 == '\0') {
      fVar6 = F32LO(dVar3) * F32HI(dVar3);
    }
    else {
      fVar6 = SUB84(dVar3 * dVar3,0);
    }
    (*(float *)(fr0_ - 0xdc)) = fVar6;
    if (cVar8 != '\0') {
      (*(float *)(fr0_ - 0xdc)) = (float)in_xd0;
      ((undefined4 *)(fr0_ - 0xd8))[0] = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    if (cVar7 == '\0' && fVar6 < 0.0) {
      if (cVar8 == '\0') {
        (*(float *)(fr0_ - 0xdc)) = 0.0;
      }
      else {
        ((undefined4 *)(fr0_ - 0xd8))[0] = 0;
        (*(float *)(fr0_ - 0xdc)) = fVar6;
      }
    }
    uVar4 = (ulonglong)(uint)fVar6;
    (vsp = ((unsigned long)(fr0_ - 228)), Vec3_length(ar4 + 0x200,uVar2,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c023bf4(ar4 + 0x200,&(*(float *)(fr0_ - 0xdc)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 228)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar5,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 228)), Vec3_assign(((undefined1 *)(fr0_ - 0x44)),*(int *)(unsigned)(ar6 + 0x68) + 4,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 228)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 228)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x34)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 228)), Vec3_assign(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 228)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x80)),uVar2,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x90))); *(unsigned *)((((unsigned long)(fr0_ - 228)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 228)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x80)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 228)), Vec3_assign(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x90)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 228)), object_dtor_delete(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6_00,ar7));
    ar5_00 = ((undefined1 *)(fr0_ - 0x54));
    (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c022d14(ar4 + 0x14,ar5_00,ar6_00,ar7));
    if (cVar8 == '\0') {
      uVar4 = uVar4 >> 0x20;
    }
    if (cVar7 == '\0' && 0.0 < (float)uVar4) {
      (vsp = ((unsigned long)(fr0_ - 228)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xb8)),ar5_00,ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc8))); *(unsigned *)((((unsigned long)(fr0_ - 228)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 228)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0xb8)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 228)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xc8)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 228)), object_dtor_delete(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,ar6_00,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 228)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x9c)),ar5_00,ar6_00,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xac))); *(unsigned *)((((unsigned long)(fr0_ - 228)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 228)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x9c)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 228)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xac)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0xac)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 228)), object_dtor_delete(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c023bf4(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c13bacc),ar6_00,ar7));
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0xd8))); *(unsigned *)((((unsigned long)(fr0_ - 228)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 228)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c13bad0),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c023aa0(ar4 + 0x200,((undefined4 *)(fr0_ - 0xd8)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined4 *)(fr0_ - 0xd8)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0b54f4\n.set _FUN_8c0b54f4, _FUN_8c0b54f4_def\n");
//@unit 8c0b58d0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_314_0b58d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_314_0b58d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x314 + ar4);
}

__asm__(".globl _get_field_314_0b58d0\n.set _get_field_314_0b58d0, _get_field_314_0b58d0_def\n");
//@unit 8c0b58dc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0b58dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b58dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x314;
  *(undefined4 *)(unsigned)(0x314 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0b58dc\n.set _FUN_8c0b58dc, _FUN_8c0b58dc_def\n");
//@unit 8c0b58e8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int Class_12b2ac_m7_0b58e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b2ac_m7_0b58e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c031684(ar4,ar5,ar6,ar7));
  iVar1 = 0x348;
  *(undefined4 *)(unsigned)(0x348 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _Class_12b2ac_m7_0b58e8\n.set _Class_12b2ac_m7_0b58e8, _Class_12b2ac_m7_0b58e8_def\n");
//@unit 8c0b590c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b590c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b590c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126318)),ar5,ar6,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c286d88;
  (vsp = ((unsigned long)(fr0_ - 52)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c286d88,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126328)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c286d94;
  (vsp = ((unsigned long)(fr0_ - 52)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c286d94,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126338)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c286da0;
  (vsp = ((unsigned long)(fr0_ - 52)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c286da0,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126348)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c286dac;
  (vsp = ((unsigned long)(fr0_ - 52)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c286dac,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c030e34(((undefined1 *)(fr0_ - 0x1c)),puVar3,uVar2,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c05d608(0x8c286dbc,uVar1,uVar2,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c030e34(((undefined1 *)(fr0_ - 0x34)),uVar1,uVar2,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c05d608(0x8c286dbc + 0x18,uVar1,uVar2,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0b590c\n.set _FUN_8c0b590c, _FUN_8c0b590c_def\n");
//@unit 8c0b5a30
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0b5a30_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b5a30";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f064(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12b2e8));
  *(undefined1 *)(unsigned)(0x9c + (int)ar4) = 0;
  *(undefined1 *)(unsigned)(0xa4 + (int)ar4) = 0;
  *(undefined1 *)(unsigned)(0x9d + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0xa8 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0xa0 + (int)ar4) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0b5a30\n.set _FUN_8c0b5a30, _FUN_8c0b5a30_def\n");
//@unit 8c0b5a88
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * Class_12b2e8_m0_0b5a88_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b2e8_m0_0b5a88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12b2e8);
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 12)), Class_129c70_m0_02f1b8(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12b2e8_m0_0b5a88\n.set _Class_12b2e8_m0_0b5a88, _Class_12b2e8_m0_0b5a88_def\n");
//@unit 8c0b5ad0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_12b2e8_m1_0b5ad0_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b2e8_m1_0b5ad0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 152; for (int i_ = 0; i_ < 152; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  int *piVar9;
  int *piVar10;
  int *a6;
  undefined2 uVar11;
  
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),((void *)0x8c022c4c),ar6,ar7));
  puVar8 = ((undefined1 *)(fr0_ - 0x48));
  puVar5 = ((undefined1 *)(unsigned)0x8c13bbf4);
  iVar7 = 0x10;
  do {
    puVar6 = puVar5 + 1;
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar8[1] = *puVar6;
    puVar8 = puVar8 + 2;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 0;
  piVar9 = ar5;
  piVar10 = ar6;
  (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0b6328(ar4,ar5,ar6,ar7));
  uVar11 = (undefined2)((uint)(*(int *)(fr0_ - 0x94)) >> 0x10);
  if (*(int *)(unsigned)(ar4 + 0x40) != 2) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02602c(ar6[6],piVar9,piVar10,ar7));
    piVar9 = (int *)(unsigned)0xf;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 152)), libgcc_divide_helper_01031c(uVar1 & 0xffff,0xf,piVar10,ar7));
    if ((iVar3 == 0) && (*(int *)(unsigned)(ar4 + 0x40) == 0)) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02602c(ar6[6],piVar9,piVar10,ar7));
      (*(int *)(fr0_ - 0x94)) = uVar1 << 0x10;
      if (*(uint *)(unsigned)(ar4 + 0xa8) != (uVar1 & 0xffff)) {
        *(undefined4 *)(unsigned)(ar4 + 0xa0) = 1;
      }
    }
    if ((((*(int *)(unsigned)(ar4 + 0x6c) == 0) && (*(int *)(unsigned)(ar4 + 0x40) == 0)) &&
        (*(char *)(unsigned)(ar4 + 0x98) == '\x03')) &&
       ((piVar9 = ar6, iVar3 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02fcc4(ar4,ar6,piVar10,ar7)), iVar3 == 1 &&
        (*(int *)(unsigned)(ar4 + 0xa0) == 1)))) {
      piVar9 = ar5;
      piVar10 = ar6;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0b67cc(ar4,ar5,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x6c) = uVar2;
    }
    uVar11 = (undefined2)((uint)(*(int *)(fr0_ - 0x94)) >> 0x10);
    if (*(int *)(unsigned)(ar4 + 0xa0) == 1) {
      a6 = (int *)(unsigned)0x0;
      while( true ) {
        piVar9 = (int *)(unsigned)0x1;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,1,piVar10,ar7));
        uVar11 = (undefined2)((uint)(*(int *)(fr0_ - 0x94)) >> 0x10);
        if (iVar3 <= (int)a6) break;
        uVar2 = 1;
        piVar10 = a6;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,1,a6,ar7));
        iVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar3 + 8) + 0xb4))))(iVar3,uVar2,piVar10,ar7));
        if (iVar3 == 1) {
          iVar7 = iVar7 + 1;
        }
        a6 = (int *)(unsigned)((int)a6 + 1);
      }
      if (((iVar7 == 0) && (*(char *)(unsigned)(ar4 + 0x9c) < '\x04')) && ('\x01' < *(char *)(unsigned)(ar4 + 0x98))) {
        *(undefined1 *)(unsigned)(ar4 + 0x98) = 1;
      }
    }
    if ((*(int *)(unsigned)(ar4 + 0x6c) != 0) && (*(int *)(unsigned)(ar4 + 4) != 6)) {
      (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x74))))
                (*(int *)(unsigned)(ar4 + 0x6c),piVar9,piVar10,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 4;
      *(undefined4 *)(unsigned)(ar4 + 4) = 6;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      piVar9 = (int *)(unsigned)0x2bb;
      (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02f298(ar4,699,piVar10,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02602c(ar6[6],piVar9,piVar10,ar7));
  uVar4 = CONCAT22(uVar11,(short)uVar1);
  *(uint *)(unsigned)(ar4 + 0xa8) = uVar1 & 0xffff;
  piVar9 = ar6;
  (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02f20c(ar4,ar6,piVar10,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_4_05eed8(ar4,piVar9,piVar10,ar7));
  piVar9 = ar5;
  piVar10 = ar6;
  (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0b61bc(ar4,ar5,ar6,uVar2));
  iVar7 = (int)*(char *)(unsigned)(ar4 + 0x98);
  if ((iVar7 < 8) && (-1 < iVar7)) {
                    
    switch(iVar7) {
    default:
      piVar10 = ar6;
      iVar7 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0b67cc(ar4,ar5,ar6,uVar2));
      piVar9 = ar5;
      if ((iVar7 == 0) || (piVar9 = ar6, iVar7 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02fcc4(ar4,ar6,piVar10,uVar2)), iVar7 != 1)) {
        if (*(int *)(unsigned)(ar4 + 0x40) != 5) {
          *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
          *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
          *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 8;
          (*(undefined1 *)(unsigned)0x8c13bbe8) = 8;
        }
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        (*(undefined1 *)(unsigned)0x8c13bbe8) = 5;
        piVar10 = (int *)(unsigned)0x1b;
        piVar9 = (int *)(unsigned)0x6;
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0b9ed4(ar6[6],6,0x1b,uVar2));
        if ('\0' < *(char *)(unsigned)(ar4 + 0x9d)) {
          *(undefined1 *)(unsigned)(ar4 + 0x98) = 2;
        }
      }
      break;
    case 2:
      if (*(char *)(unsigned)(ar4 + 0x9d) < '\x01') {
        *(undefined1 *)(unsigned)(ar4 + 0x9d) = 1;
      }
      piVar10 = ar6;
      iVar7 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0b67cc(ar4,ar5,ar6,uVar2));
      if (((iVar7 == 0) || (*(int *)(unsigned)(ar4 + 0x40) == 6)) ||
         (ar5 = ar6, iVar7 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02fcc4(ar4,ar6,piVar10,uVar2)), iVar7 != 1)) {
        piVar9 = ar5;
        if (*(int *)(unsigned)(ar4 + 0x40) != 6) {
          *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
          *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
          *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 8;
          (*(undefined1 *)(unsigned)0x8c13bbe8) = 8;
        }
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 6;
        (*(undefined1 *)(unsigned)0x8c13bbe8) = 6;
        *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
        *(char *)(unsigned)(ar4 + 0x9d) = *(char *)(unsigned)(ar4 + 0x9d) + '\x01';
        piVar9 = ar5;
      }
      break;
    case 3:
      break;
    case 4:
    case 6:
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
      (*(undefined1 *)(unsigned)0x8c13bbe8) = 3;
      iVar7 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,1,piVar10,uVar2));
      if (iVar7 == 0) {
        piVar10 = (int *)(unsigned)0x1b;
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0b9ed4(ar6[6],8,0x1b,uVar2));
      }
      piVar9 = (int *)(unsigned)0x1;
      ({ unsigned long ri0_ = (unsigned long)(uVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); FUN_8c02cb84(ar6[1] + 0xa8,1,piVar10,uVar2); });
      break;
    case 5:
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 7;
      (*(undefined1 *)(unsigned)0x8c13bbe8) = 7;
      piVar9 = (int *)(unsigned)0x1;
      ({ unsigned long ri0_ = (unsigned long)(uVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); FUN_8c02cb84(ar6[1] + 0xa8,1,piVar10,uVar2); });
      break;
    case 7:
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 2;
      (*(undefined1 *)(unsigned)0x8c13bbe8) = 2;
      piVar10 = (int *)(unsigned)0x1b;
      piVar9 = (int *)(unsigned)0x9;
      (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0b9ed4(ar6[6],9,0x1b,uVar2));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0b65b0(ar4,piVar9,piVar10,uVar2));
  (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c05ee90(ar6[2],piVar9,piVar10,uVar2));
  iVar7 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_124_027930(ar6[2],piVar9,piVar10,uVar2));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_40_05eea0(ar4,piVar9,piVar10,uVar2));
  if (iVar7 != iVar3) {
    uVar4 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_40_05eea0(ar4,piVar9,piVar10,uVar2));
    piVar10 = (int *)(unsigned)0x1;
    (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c031b08(ar6[2],uVar4,1,uVar2));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,piVar10,uVar2));
  return uVar2;
}

__asm__(".globl _Class_12b2e8_m1_0b5ad0\n.set _Class_12b2e8_m1_0b5ad0, _Class_12b2e8_m1_0b5ad0_def\n");
//@unit 8c0b6028
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_12b2e8_m2_0b6028_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b2e8_m2_0b6028";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  
  uVar2 = ar5;
  iVar7 = ar6;
  (vsp = ((unsigned long)(fr0_ - 72)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  puVar6 = ((undefined1 *)(fr0_ - 0x44));
  puVar4 = ((undefined1 *)(unsigned)0x8c13bc14);
  iVar3 = 0x10;
  do {
    puVar5 = puVar4 + 1;
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 2;
    puVar6[1] = *puVar5;
    puVar6 = puVar6 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c02602c(*(undefined4 *)(unsigned)(ar6 + 0x18),uVar2,iVar7,ar7));
  *(uint *)(unsigned)(ar4 + 0xa8) = uVar1 & 0xffff;
  iVar3 = ar6;
  (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0b6328(ar4,ar5,ar6,ar7));
  iVar7 = ar6;
  (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c02f20c(ar4,ar6,iVar3,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 72)), get_field_4_05eed8(ar4,iVar7,iVar3,ar7));
  iVar7 = ar6;
  (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0b61bc(ar4,ar5,ar6,uVar2));
  iVar3 = (int)*(char *)(unsigned)(ar4 + 0x98);
  if ((iVar3 < 8) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 8;
      (*(undefined1 *)(unsigned)0x8c13bbe8) = 8;
      break;
    case 4:
    case 6:
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      (*(undefined1 *)(unsigned)0x8c13bbe8) = 3;
      break;
    case 5:
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 7;
      (*(undefined1 *)(unsigned)0x8c13bbe8) = 7;
      break;
    case 7:
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 2;
      (*(undefined1 *)(unsigned)0x8c13bbe8) = 2;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0b65b0(ar4,ar5,iVar7,uVar2));
  (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c05ee90(*(undefined4 *)(unsigned)(ar6 + 8),ar5,iVar7,uVar2));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 72)), get_field_124_027930(*(undefined4 *)(unsigned)(ar6 + 8),ar5,iVar7,uVar2));
  if (*(int *)(unsigned)(ar4 + 0x40) != iVar3) {
    iVar7 = 1;
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c031b08(*(undefined4 *)(unsigned)(ar6 + 8),*(undefined4 *)(unsigned)(ar4 + 0x40),1,uVar2));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,iVar7,uVar2));
  return uVar2;
}

__asm__(".globl _Class_12b2e8_m2_0b6028\n.set _Class_12b2e8_m2_0b6028, _Class_12b2e8_m2_0b6028_def\n");
//@unit 8c0b61bc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b61bc_def(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c0b61bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *ar6_00;
  undefined4 ar6_01;
  
  uVar3 = ar5;
  ar6_00 = ar6;
  iVar2 = ar7;
  if (*(int *)(unsigned)(ar4 + 0x38) == 2) {
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) =
         *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13bb4c) + *(int *)(unsigned)(ar4 + 0xc) * 4 + ar7 * 0xc);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b63e0(ar4,ar5,ar6,ar7));
    uVar3 = 1;
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02f404(ar4,1,ar6_00,ar7); });
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02f404(ar4,3,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02fdd8(ar4,ar5,ar6_00,ar7));
    }
    else if (iVar1 == 2) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar6 + 8) + 0xb4))))(*ar6,uVar3,ar6_00,ar7));
      if (iVar2 == 1) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027954(*ar6,uVar3,ar6_00,ar7));
      }
    }
    else if (iVar1 == 4) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f414(ar4,uVar3,ar6_00,ar7));
      if (iVar2 == 1) {
        if (*(int *)(unsigned)(ar4 + 0x88) == 1) {
          ar6_01 = 0x1b;
          uVar3 = 7;
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar6[6],7,0x1b,ar7));
          uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_6c_02f46c(*(undefined4 *)(unsigned)(ar4 + 0x6c),uVar3,ar6_01,ar7));
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c05feec(*(undefined4 *)(unsigned)(ar4 + 0x6c),uVar3,ar6_01,ar7));
          *(char *)(unsigned)(ar4 + 0x9c) = *(char *)(unsigned)(ar4 + 0x9c) + '\x01';
          if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
            (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))
                      (*(int *)(unsigned)(ar4 + 0x6c),uVar3,ar6_01,ar7));
            *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x88) = 0;
        }
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c0b61bc\n.set _FUN_8c0b61bc, _FUN_8c0b61bc_def\n");
//@unit 8c0b6328
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0b6328_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b6328";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar6_00;
  
  if (*(int *)(unsigned)(ar4 + 0x3c) == 0) {
    ar6_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0b6440(ar4,ar5,ar6,ar7));
    *(int *)(unsigned)(ar4 + 0xc) = *(int *)(unsigned)(ar4 + 0xc) + 1;
    (*(int *)(fr0_ - 0x1c)) = *(int *)(unsigned)(ar4 + 0xc);
    *(undefined4 *)(unsigned)(ar4 + 0x40) =
         *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13bb4c) + (*(int *)(fr0_ - 0x1c)) * 4 + *(int *)(unsigned)(ar4 + 4) * 0xc);
    if ((*(int *)(unsigned)(ar4 + 0x40) == 9) || (*(int *)(unsigned)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02f404(ar4,0,ar6_00,ar7); });
      ar6 = ar6_00;
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02f404(ar4,3,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0b63e0(ar4,ar5,ar6,ar7));
    }
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x3c);
  if (iVar1 == 2) {
    iVar1 = ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02f404(ar4,2,ar6,ar7); });
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0b6328\n.set _FUN_8c0b6328, _FUN_8c0b6328_def\n");
//@unit 8c0b63e0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0b63e0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b63e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b6604(ar4,ar5,ar6,ar7));
  }
  else if (((iVar1 != 2) && (iVar1 == 4)) && (iVar1 = *(int *)(unsigned)(ar4 + 0x6c), iVar1 == 0)) {
    *(int *)(unsigned)(ar4 + 0xc) = *(int *)(unsigned)(ar4 + 0xc) + -1;
    iVar1 = ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02f404(ar4,2,ar6,ar7); });
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0b63e0\n.set _FUN_8c0b63e0, _FUN_8c0b63e0_def\n");
//@unit 8c0b6440
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined * FUN_8c0b6440_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b6440";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar6_00;
  
  iVar2 = *(int *)(unsigned)(ar4 + 0x40);
  puVar1 = (undefined *)(unsigned)0x7;
  if ((iVar2 < 8) && (puVar1 = (undefined *)(unsigned)0x2, 1 < iVar2)) {
    puVar1 = (&(*(undefined1 *)(unsigned)0x8c0b6474))[iVar2 + -2];
                    
    switch(iVar2) {
    case 2:
      puVar1 = ((undefined *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x8c));
      if (puVar1 == (undefined *)(unsigned)0x1) {
        puVar1 = (undefined *)(unsigned)0x8c;
        *(undefined4 *)(unsigned)(ar4 + 0x8c) = 0;
      }
      break;
    case 4:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f414(ar4,ar5,ar6,ar7));
      if ((puVar1 == (undefined *)(unsigned)0x1) &&
         (puVar1 = ((undefined *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x88)), puVar1 == (undefined *)(unsigned)0x1)) {
        ar6_00 = 0x1b;
        uVar3 = 7;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(*(undefined4 *)(unsigned)(ar6 + 0x18),7,0x1b,ar7));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_6c_02f46c(*(undefined4 *)(unsigned)(ar4 + 0x6c),uVar3,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c05feec(*(undefined4 *)(unsigned)(ar4 + 0x6c),uVar3,ar6_00,ar7));
        *(char *)(unsigned)(ar4 + 0x9c) = *(char *)(unsigned)(ar4 + 0x9c) + '\x01';
        if (*(char *)(unsigned)(ar4 + 0x9c) == '\b') {
          uVar3 = 1;
          ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cb84(*(int *)(unsigned)(ar6 + 4) + 0xa8,1,ar6_00,ar7); });
        }
        if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))
                    (*(int *)(unsigned)(ar4 + 0x6c),uVar3,ar6_00,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
        }
        puVar1 = (undefined *)(unsigned)0x88;
        *(undefined4 *)(unsigned)(ar4 + 0x88) = 0;
      }
      break;
    case 5:
      puVar1 = (undefined *)(unsigned)0x9d;
      *(char *)(unsigned)(ar4 + 0x9d) = *(char *)(unsigned)(ar4 + 0x9d) + '\x01';
      break;
    case 6:
      puVar1 = (undefined *)(unsigned)0x2;
      if ('\x01' < *(char *)(unsigned)(ar4 + 0x9d)) {
        *(undefined1 *)(unsigned)(ar4 + 0x98) = 3;
        puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(ar4,ar5,ar6,ar7));
      }
      break;
    case 7:
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 6;
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(ar4,ar5,ar6,ar7));
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0b6440\n.set _FUN_8c0b6440, _FUN_8c0b6440_def\n");
//@unit 8c0b65b0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0b65b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b65b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  
  if (*(int *)(unsigned)(ar4 + 4) == 2) {
    (vsp = ((unsigned long)(fr0_ - 0)), get_field_8_066620(ar4,ar5,ar6,ar7));
    puVar1 = ((undefined4 *)(unsigned)0x8c0b65fc);
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), get_field_8_066620(ar4,ar5,ar6,ar7));
    puVar1 = ((undefined4 *)(unsigned)0x8c0b6600);
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0b65b0\n.set _FUN_8c0b65b0, _FUN_8c0b65b0_def\n");
//@unit 8c0b6604
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b6604_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b6604";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *a5;
  undefined4 *a6;
  undefined4 *a7;
  float fVar4;
  double in_dr0 = 0;
  double dVar5;
  float fVar6;
  undefined4 in_fr3 = 0;
  undefined4 uVar7;
  double dVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x20)) = 0;
  a7 = &(*(undefined4 *)(fr0_ - 0x2c));
  a6 = &(*(undefined4 *)(fr0_ - 0x28));
  a5 = &(*(undefined4 *)(fr0_ - 0x24));
  (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x120))))(ar5,a5,a6,a7));
  iVar9 = ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), get_field_4_05eed8(ar4,a5,a6,a7));
  if ((iVar1 != 1) && (iVar1 == 8)) {
    if (cVar11 == '\0') {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),in_fr3);
      dVar5 = CONCAT44D(0x3dcccccd,(*(undefined4 *)(fr0_ - 0x24)));
    }
    else {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
      dVar5 = 1.3411048210842936e-08;
    }
    if (cVar10 == '\0') {
      dVar8 = CONCAT44D(F32HI(dVar8) -
                               F32LO(dVar5) * F32HI(dVar5),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - dVar5 * dVar5;
    }
    (*(undefined4 *)(fr0_ - 0x24)) = SUB84(dVar8,0);
    uVar3 = (undefined4)(D2U(dVar8) >> 0x20);
    if (cVar11 == '\0') {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(undefined4 *)(fr0_ - 0x24)));
      dVar5 = CONCAT44D(0x3e4ccccd,(*(undefined4 *)(fr0_ - 0x28)));
      (*(undefined4 *)(fr0_ - 0x24)) = uVar3;
    }
    else {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
      dVar5 = -7.532505548438758e-251;
      (*(undefined4 *)(fr0_ - 0x20)) = uVar3;
    }
    if (cVar10 == '\0') {
      dVar8 = CONCAT44D(F32HI(dVar8) -
                               F32LO(dVar5) * F32HI(dVar5),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - dVar5 * dVar5;
    }
    (*(undefined4 *)(fr0_ - 0x28)) = SUB84(dVar8,0);
    uVar3 = (undefined4)(D2U(dVar8) >> 0x20);
    if (cVar11 == '\0') {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),(*(undefined4 *)(fr0_ - 0x28)));
      dVar5 = CONCAT44D(0x3dcccccd,(*(undefined4 *)(fr0_ - 0x2c)));
      (*(undefined4 *)(fr0_ - 0x28)) = uVar3;
    }
    else {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(undefined4 *)(fr0_ - 0x2c)));
      dVar5 = 1.3411048210842936e-08;
      (*(undefined4 *)(fr0_ - 0x24)) = uVar3;
    }
    if (cVar10 == '\0') {
      fVar6 = F32HI(dVar5);
      fVar4 = F32LO(dVar5) * fVar6;
      dVar5 = CONCAT44D(fVar6,fVar4);
      dVar8 = CONCAT44D(F32HI(dVar8) - fVar4,SUB84(dVar8,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
      dVar8 = dVar8 - dVar5;
    }
    uVar3 = SUB84(dVar5,0);
    uVar2 = (undefined4)(D2U(dVar8) >> 0x20);
    (*(undefined4 *)(fr0_ - 0x2c)) = uVar2;
    if (cVar11 != '\0') {
      (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(dVar8,0);
      (*(undefined4 *)(fr0_ - 0x28)) = uVar2;
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 64)), rand(iVar9,a5,a6,a7));
    uVar7 = SUB84(dVar8,0);
    if (cVar11 == '\0') {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),uVar3);
    }
    else {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
    }
    if (cVar10 == '\0') {
      iVar9 = (int)F32HI(dVar8);
    }
    else {
      iVar9 = (int)dVar8;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), libgcc_divide_helper_01031c(uVar2,iVar9,a6,a7));
    if (cVar10 == '\0') {
      dVar8 = CONCAT44D((float)iVar1,uVar7);
    }
    else {
      dVar8 = (double)iVar1;
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D(0x40000000,(*(undefined4 *)(fr0_ - 0x24)));
    }
    else {
      dVar5 = 8.15376882678406e-312;
    }
    if (cVar10 == '\0') {
      fVar6 = F32HI(dVar5);
      fVar4 = F32LO(dVar5) / fVar6;
      dVar5 = CONCAT44D(fVar6,fVar4);
      dVar8 = CONCAT44D(F32HI(dVar8) - fVar4,SUB84(dVar8,0));
    }
    else {
      dVar5 = dVar5 / dVar5;
      dVar8 = dVar8 - dVar5;
    }
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar4 + 0x28) = (int)(D2U(dVar8) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x28) = dVar8;
    }
    uVar3 = (vsp = ((unsigned long)(fr0_ - 64)), rand(uVar2,iVar9,a6,a7));
    uVar2 = SUB84(dVar8,0);
    (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x180))))(ar5,iVar9,a6,a7));
    if (cVar11 == '\0') {
      (*(undefined8 *)(fr0_ - 0x3c)) = CONCAT44D(uVar3,(int)(D2U(dVar5) >> 0x20));
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),SUB84(dVar5,0));
    }
    else {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
      (*(undefined8 *)(fr0_ - 0x3c)) = dVar5;
    }
    if (cVar10 == '\0') {
      iVar9 = (int)F32HI(dVar8);
    }
    else {
      iVar9 = (int)dVar8;
    }
    uVar3 = (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x3c))+4));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), libgcc_divide_helper_01031c((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x3c))+4)),iVar9,a6,a7));
    if (cVar10 == '\0') {
      dVar8 = CONCAT44D((float)iVar1,uVar2);
    }
    else {
      dVar8 = (double)iVar1;
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D(0x42c80000,(undefined4)(*(undefined8 *)(fr0_ - 0x3c)));
    }
    else {
      dVar5 = 6.28664306982812e-312;
    }
    if (cVar10 == '\0') {
      fVar6 = F32HI(dVar5);
      fVar4 = F32LO(dVar5) / fVar6;
      dVar5 = CONCAT44D(fVar6,fVar4);
      dVar8 = CONCAT44D(F32HI(dVar8) * fVar4,SUB84(dVar8,0));
    }
    else {
      dVar5 = dVar5 / dVar5;
      dVar8 = dVar8 * dVar5;
    }
    uVar2 = SUB84(dVar5,0);
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar4 + 0x2c) = (int)(D2U(dVar8) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x2c) = dVar8;
    }
    uVar3 = (vsp = ((unsigned long)(fr0_ - 64)), rand(uVar3,iVar9,a6,a7));
    uVar7 = SUB84(dVar8,0);
    if (cVar11 == '\0') {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),uVar2);
    }
    else {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(undefined4 *)(fr0_ - 0x2c)));
    }
    if (cVar10 == '\0') {
      iVar9 = (int)F32HI(dVar8);
    }
    else {
      iVar9 = (int)dVar8;
    }
    iVar9 = (vsp = ((unsigned long)(fr0_ - 64)), libgcc_divide_helper_01031c(uVar3,iVar9,a6,a7));
    if (cVar10 == '\0') {
      dVar8 = CONCAT44D((float)iVar9,uVar7);
    }
    else {
      dVar8 = (double)iVar9;
    }
    if (cVar11 == '\0') {
      in_dr0 = CONCAT44D(0x40000000,(*(undefined4 *)(fr0_ - 0x2c)));
    }
    else {
      in_dr0 = 8.15376882678406e-312;
    }
    if (cVar10 == '\0') {
      fVar6 = F32HI(in_dr0);
      fVar4 = F32LO(in_dr0) / fVar6;
      in_dr0 = CONCAT44D(fVar6,fVar4);
      dVar8 = CONCAT44D(F32HI(dVar8) - fVar4,SUB84(dVar8,0));
    }
    else {
      in_dr0 = in_dr0 / in_dr0;
      dVar8 = dVar8 - in_dr0;
    }
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar4 + 0x30) = (int)(D2U(dVar8) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x30) = dVar8;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,ar4 + 0x28,a6,a7));
  if (cVar11 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x2c));
  }
  if (cVar10 != '\0' || SUB84(in_dr0,0) <= F32HI(in_dr0)) {
    (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,ar4 + 0x28,a6,a7));
    if (cVar11 == '\0') {
      *(int *)(unsigned)(ar4 + 0x2c) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x2c) = in_dr0;
    }
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,a6,a7));
  return uVar3;
}

__asm__(".globl _FUN_8c0b6604\n.set _FUN_8c0b6604, _FUN_8c0b6604_def\n");
//@unit 8c0b67cc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b67cc_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b67cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 196; for (int i_ = 0; i_ < 196; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int *ar5_00;
  undefined4 uVar3;
  undefined4 *ar6_00;
  undefined1 *ar6_01;
  undefined1 *ar7_00;
  undefined1 *puVar4;
  uint in_fr1 = 0;
  double dVar5;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 196)), Vec3_ctor_zero(((uint *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  if (cVar8 == '\0') {
    in_fr15 = 50.0;
  }
  (vsp = ((unsigned long)(fr0_ - 196)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x3c)),ar5_00,ar6_00,ar7));
  if (cVar8 == '\0') {
    ((uint *)(fr0_ - 0x2c))[0] = 0;
  }
  else {
    ((uint *)(fr0_ - 0x2c))[3] = 0;
    ((uint *)(fr0_ - 0x2c))[0] = in_fr1;
  }
  dVar5 = (double)(ulonglong)in_fr1;
  ((uint *)(fr0_ - 0x2c))[2] = 0;
  ((uint *)(fr0_ - 0x2c))[1] = 0;
  ar7_00 = ((undefined1 *)(fr0_ - 0xc0));
  ar6_01 = ((undefined1 *)(fr0_ - 0xbc));
  puVar4 = ((undefined1 *)(fr0_ - 0xb8));
  (vsp = ((unsigned long)(fr0_ - 196)), FUN_8c03f414(*ar6,puVar4,ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 196)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x48)),puVar4,ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 196)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x64)),((undefined1 *)(fr0_ - 0x48)),ar6_01,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 196)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 196)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x64)),ar6_01,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 196)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0x74)),ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 196)), object_dtor_delete(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_01,ar7_00));
  if (*(int *)(unsigned)(ar4 + 0x6c) == 0) {
    for (puVar4 = (undefined1 *)(unsigned)0x0; iVar2 = (vsp = ((unsigned long)(fr0_ - 196)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,1,ar6_01,ar7_00)),
        (int)puVar4 < iVar2; puVar4 = puVar4 + 1) {
      uVar3 = 1;
      ar6_01 = puVar4;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 196)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,1,puVar4,ar7_00));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 196)), get_field_6c_02f46c(uVar1,uVar3,ar6_01,ar7_00));
      if (iVar2 != 0) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 196)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 196)) - 8); FUN_8c02f670(*ar6,uVar3,ar6_01,ar7_00); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 196)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 196)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x84)),((undefined1 *)(fr0_ - 0x58)),ar6_01,ar7_00); });
        uVar3 = 1;
        ar6_01 = puVar4;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 196)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,1,puVar4,ar7_00));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 196)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 196)) - 8); FUN_8c02f670(uVar1,uVar3,ar6_01,ar7_00); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 196)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 196)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x94)),((undefined1 *)(fr0_ - 0xa4)),ar6_01,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 196)), Vec3_assign(((uint *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0xb4)),ar6_01,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_01,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6_01,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_01,ar7_00));
        uVar1 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_01,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 196)), Vec3_length_sq(((uint *)(fr0_ - 0x2c)),uVar1,ar6_01,ar7_00));
        if (cVar7 == '\0') {
          bVar6 = F32HI(dVar5) < in_fr15;
        }
        else {
          bVar6 = dVar5 < CONCAT44D(in_fr14,in_fr15);
        }
        if (bVar6) {
          uVar1 = (vsp = ((unsigned long)(fr0_ - 196)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,1,puVar4,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,puVar4,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), object_dtor_delete(((undefined1 *)(fr0_ - 0x48)),0xffffffff,puVar4,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,puVar4,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((uint *)(fr0_ - 0x2c)),0xffffffff,puVar4,ar7_00));
          return uVar1;
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 196)), object_dtor_delete(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((uint *)(fr0_ - 0x2c)),0xffffffff,ar6_01,ar7_00));
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x6c);
    (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 196)), object_dtor_delete(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((uint *)(fr0_ - 0x2c)),0xffffffff,ar6_01,ar7_00));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0b67cc\n.set _FUN_8c0b67cc, _FUN_8c0b67cc_def\n");
//@unit 8c0b6af8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0b6af8_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b6af8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(undefined1 *)(unsigned)(0x98 + ar4) = *ar5;
  iVar1 = 0x9c;
  *(char *)(unsigned)(0x9c + ar4) = (char)*(undefined4 *)(unsigned)(ar5 + 4);
  return iVar1;
}

__asm__(".globl _FUN_8c0b6af8\n.set _FUN_8c0b6af8, _FUN_8c0b6af8_def\n");
//@unit 8c0b6b10
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0b6b10_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b6b10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  
  *ar5 = *(undefined1 *)(unsigned)(0x98 + ar4);
  cVar1 = *(char *)(unsigned)(0x9c + ar4);
  *(int *)(unsigned)(ar5 + 4) = (int)cVar1;
  return (int)cVar1;
}

__asm__(".globl _FUN_8c0b6b10\n.set _FUN_8c0b6b10, _FUN_8c0b6b10_def\n");
//@unit 8c0b6b2c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0b6b2c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b6b2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(0x9c + ar4);
}

__asm__(".globl _FUN_8c0b6b2c\n.set _FUN_8c0b6b2c, _FUN_8c0b6b2c_def\n");
//@unit 8c0b6b3c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b6b3c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b6b3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126358),ar5,ar6,ar7));
  uVar3 = 0x8c286df0;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286df0,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126368),pcVar2,uVar3,ar7));
  uVar3 = 0x8c286dfc;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286dfc,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126378),pcVar2,uVar3,ar7));
  uVar3 = 0x8c286e08;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286e08,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126388),pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286e14,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126398) = CONCAT44((*(undefined1 *)(unsigned)0x8c12639c),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126398) = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c0b6b3c\n.set _FUN_8c0b6b3c, _FUN_8c0b6b3c_def\n");
//@unit 8c0b6bf4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b6bf4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b6bf4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f594(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0b6bf4\n.set _FUN_8c0b6bf4, _FUN_8c0b6bf4_def\n");
//@unit 8c0b6c10
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b6c10_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b6c10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0x8c286ebc;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c09a4(0x8c286ebc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102d40(uVar1,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), game_shutdown_b(uVar1,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0b6c10\n.set _FUN_8c0b6c10, _FUN_8c0b6c10_def\n");
//@unit 8c0b6c3c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b6c3c_def(undefined4 ar4,undefined *ar5,undefined *ar6,undefined *ar7)

{
  ring[rp++ & 255] = "FUN_8c0b6c3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *ar6_00;
  undefined *ar5_00;
  undefined4 uVar2;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), get_field_a510_01f538(0x8c3dd7dc,ar5,ar6,ar7));
  uVar2 = 1;
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0162f8(((undefined1 *)(fr0_ - 0x30)),ar5_00,ar6_00,ar7));
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      ar7 = ((undefined1 *)(unsigned)0x8c13c025);
      ar6_00 = (undefined *)(unsigned)0x0;
      uVar2 = 0xb;
      (vsp = ((unsigned long)(fr0_ - 52)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),0xb,0,((undefined1 *)(unsigned)0x8c13c025)));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01f520(0x8c3dd7dc,uVar2,ar6_00,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c026),ar6_00,ar7));
      if (iVar1 == 0) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c431a58) = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01ae28(uVar2,ar4,ar5,ar6));
        ar6_00 = ar5;
        ar7 = ar6;
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c033),ar6_00,ar7));
        if (iVar1 == 0) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c431a58) = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01b400(uVar2,((undefined1 *)(unsigned)0x8c13c040),ar5,ar6));
          ar6_00 = ar5;
          ar7 = ar6;
        }
      }
      uVar2 = 0;
      break;
    case 1:
      ar7 = ((undefined1 *)(unsigned)0x8c13c025);
      ar6_00 = (undefined *)(unsigned)0x0;
      (vsp = ((unsigned long)(fr0_ - 52)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),1,0,((undefined1 *)(unsigned)0x8c13c025)));
      break;
    case 3:
      ar6_00 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 52)), get_field_a524_01f514(0x8c3dd7dc,ar5_00,ar6_00,ar7));
      ar7 = ((undefined1 *)(unsigned)0x8c13c025);
      (vsp = ((unsigned long)(fr0_ - 52)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),2,ar6_00,((undefined1 *)(unsigned)0x8c13c025)));
      break;
    case 4:
      ar6_00 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 52)), get_field_a524_01f514(0x8c3dd7dc,ar5_00,ar6_00,ar7));
      ar7 = ((undefined1 *)(unsigned)0x8c13c025);
      (vsp = ((unsigned long)(fr0_ - 52)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),4,ar6_00,((undefined1 *)(unsigned)0x8c13c025)));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0c412c(((undefined1 *)(unsigned)0x8c2b5628),1,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), free_if_nonnull_wrap_0151a0(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0b6c3c\n.set _FUN_8c0b6c3c, _FUN_8c0b6c3c_def\n");
//@unit 8c0b6e04
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b6e04_def(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b6e04";
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

__asm__(".globl _FUN_8c0b6e04\n.set _FUN_8c0b6e04, _FUN_8c0b6e04_def\n");
//@unit 8c0b6e6c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b6e6c_def(undefined *ar4,undefined *ar5,undefined *ar6,undefined *ar7)

{
  ring[rp++ & 255] = "FUN_8c0b6e6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 160; for (int i_ = 0; i_ < 160; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *ar6_00;
  undefined *ar5_00;
  undefined4 uVar2;
  undefined1 *ar6_01;
  undefined *ar7_00;
  undefined4 ar7_01;
  undefined4 uVar3;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), get_field_a510_01f538(0x8c3dd7dc,ar5,ar6,ar7));
  uVar3 = 1;
  (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0162f8(((undefined1 *)(fr0_ - 0x34)),ar5_00,ar6_00,ar7_00));
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      ar7_00 = ((undefined1 *)(unsigned)0x8c13c025);
      ar6_00 = (undefined *)(unsigned)0x0;
      uVar2 = 0xb;
      (vsp = ((unsigned long)(fr0_ - 160)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),0xb,0,((undefined1 *)(unsigned)0x8c13c025)));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c01f520(0x8c3dd7dc,uVar2,ar6_00,ar7_00));
      if ((*(int *)(fr0_ + 0x00000004)) == 1) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c040),ar6_00,ar7_00));
        if (iVar1 == 0) {
          ar6_00 = ((undefined *)(fr0_ - 0x48));
          iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c01bc2c(uVar2,((undefined1 *)(unsigned)0x8c13c040),ar6_00,ar7_00));
          if (iVar1 == 1) {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c01b0a8(uVar2,ar4,ar7,((undefined *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
            ar6_00 = ar7;
            ar7_00 = ((undefined *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
            if (iVar1 == 1) {
              uVar3 = 0;
            }
            break;
          }
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c026),ar6_00,ar7_00));
        if ((iVar1 == 0) &&
           (iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c01bba0(uVar2,((undefined1 *)(unsigned)0x8c13c026),ar6_00,ar7_00)), iVar1 == 1)) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c01ae98(uVar2,ar4,ar5,ar6));
          ar6_00 = ar5;
          ar7_00 = ar6;
          if (iVar1 == 1) {
            uVar3 = 0;
            ar6_00 = ar5;
            ar7_00 = ar6;
          }
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c033),ar6_00,ar7_00));
          if ((iVar1 == 0) &&
             (iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c01bc2c(uVar2,((undefined1 *)(unsigned)0x8c13c040),((undefined *)(fr0_ - 0x48)),ar7_00)), iVar1 == 1)) {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c01b47c(uVar2,((undefined1 *)(unsigned)0x8c13c040),ar5,ar6));
            ar6_00 = ar5;
            ar7_00 = ar6;
            if (iVar1 == 1) {
              uVar3 = 0;
              ar6_00 = ar5;
              ar7_00 = ar6;
            }
          }
          else {
            ar7_01 = 4;
            ar6_01 = ((undefined1 *)(unsigned)0x8c4365bc);
            ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x9c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 160)); FUN_8c016318(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c43659c),((undefined1 *)(unsigned)0x8c4365bc),4); });
            uVar2 = 0x60;
            ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x9c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 160)); FUN_8c015198(((undefined1 *)(fr0_ - 0x34)),0x60,ar6_01,ar7_01); });
            (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c016340(((undefined1 *)(fr0_ - 0x34)),uVar2,ar6_01,ar7_01));
            ar6_00 = (undefined *)(unsigned)0x0;
            (vsp = ((unsigned long)(fr0_ - 160)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),3,0,ar4));
            ar7_00 = ar4;
          }
        }
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c040),ar6_00,ar7_00));
        if (iVar1 == 0) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c01b0a8(uVar2,ar4,ar7,((undefined *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
          ar6_00 = ar7;
          ar7_00 = ((undefined *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
          if (iVar1 == 1) {
            uVar3 = 0;
          }
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c026),ar6_00,ar7_00));
          if (iVar1 == 0) {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c01ae98(uVar2,ar4,ar5,ar6));
            ar6_00 = ar5;
            ar7_00 = ar6;
            if (iVar1 == 1) {
              uVar3 = 0;
              ar6_00 = ar5;
              ar7_00 = ar6;
            }
          }
          else {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c033),ar6_00,ar7_00));
            if ((iVar1 == 0) &&
               (iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c01b47c(uVar2,((undefined1 *)(unsigned)0x8c13c040),ar5,ar6)), ar6_00 = ar5,
               ar7_00 = ar6, iVar1 == 1)) {
              uVar3 = 0;
              ar6_00 = ar5;
              ar7_00 = ar6;
            }
          }
        }
      }
      break;
    case 1:
      ar7_00 = ((undefined1 *)(unsigned)0x8c13c025);
      ar6_00 = (undefined *)(unsigned)0x0;
      (vsp = ((unsigned long)(fr0_ - 160)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),1,0,((undefined1 *)(unsigned)0x8c13c025)));
      break;
    case 3:
      ar6_00 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 160)), get_field_a524_01f514(0x8c3dd7dc,ar5_00,ar6_00,ar7_00));
      ar7_00 = ((undefined1 *)(unsigned)0x8c13c025);
      (vsp = ((unsigned long)(fr0_ - 160)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),2,ar6_00,((undefined1 *)(unsigned)0x8c13c025)));
      break;
    case 4:
      ar6_00 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 160)), get_field_a524_01f514(0x8c3dd7dc,ar5_00,ar6_00,ar7_00));
      ar7_00 = ((undefined1 *)(unsigned)0x8c13c025);
      (vsp = ((unsigned long)(fr0_ - 160)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),4,ar6_00,((undefined1 *)(unsigned)0x8c13c025)));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 160)), free_if_nonnull_wrap_0151a0(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7_00));
  return uVar3;
}

__asm__(".globl _FUN_8c0b6e6c\n.set _FUN_8c0b6e6c, _FUN_8c0b6e6c_def\n");
//@unit 8c0b726c
#include "../decls.h"
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
FUN_8c0b726c_def(undefined4 ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b726c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  int s4 = *(int *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  undefined1 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar2;
  
  uVar2 = 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7));
  if (s4 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b6e04))))
                      (ar4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5c,ar6_00,ar7_00));
    if (iVar1 == 0) {
      ar6_00 = ((undefined1 *)(fr0_ - 0x34));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01bc2c))))
                        (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5c,ar6_00,ar7_00));
      if (iVar1 == 1) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01b0a8(ar4_00,ar4,ar7,s0));
        if (iVar1 != 1) {
          return 1;
        }
        return 0;
      }
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b6e04))))
                      (ar4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x42,ar6_00,ar7_00));
    if ((iVar1 == 0) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01bba0))))
                          (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x42,ar6_00,ar7_00)),
       iVar1 == 1)) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01ae98(ar4_00,ar4,ar5,ar6));
      if (iVar1 == 1) {
        uVar2 = 0;
      }
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b6e04))))
                        (ar4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4f,ar6_00,ar7_00));
      if ((iVar1 == 0) &&
         ((iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01bc2c))))
                             (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5c,((undefined1 *)(fr0_ - 0x34)),
                              ar7_00)), iVar1 == 1 &&
          (iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01b47c))))
                             (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5c,ar5,ar6)),
          iVar1 == 1)))) {
        uVar2 = 0;
      }
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b6e04))))
                      (ar4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5c,ar6_00,ar7_00));
    if (iVar1 == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01b0a8(ar4_00,ar4,ar7,s0));
      if (iVar1 == 1) {
        uVar2 = 0;
      }
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b6e04))))
                        (ar4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x42,ar6_00,ar7_00));
      if (iVar1 == 0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01ae98(ar4_00,ar4,ar5,ar6));
        if (iVar1 == 1) {
          uVar2 = 0;
        }
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b6e04))))
                          (ar4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4f,ar6_00,ar7_00));
        if ((iVar1 == 0) &&
           (iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01b47c))))
                              (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5c,ar5,ar6)),
           iVar1 == 1)) {
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0b726c\n.set _FUN_8c0b726c, _FUN_8c0b726c_def\n");
//@unit 8c0b7454
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b7454_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b7454";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *ar6_00;
  undefined *ar7_00;
  undefined4 uVar4;
  
  uVar2 = ar5;
  uVar3 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_a510_01f538(0x8c3dd7dc,ar5,ar6,ar7));
  uVar4 = 1;
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      ar7_00 = ((undefined1 *)(unsigned)0x8c13c025);
      uVar3 = 0;
      uVar2 = 0xb;
      (vsp = ((unsigned long)(fr0_ - 48)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),0xb,0,((undefined1 *)(unsigned)0x8c13c025)));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01f520(0x8c3dd7dc,uVar2,uVar3,ar7_00));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01bba0(uVar2,ar4,uVar3,ar7_00));
      if (iVar1 == 1) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c026),uVar3,ar7_00));
        if ((iVar1 == 0) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01b5f8(uVar2,ar4,ar5,ar6)), iVar1 == 1)) {
          uVar4 = 0;
        }
      }
      else {
        ar6_00 = ((undefined1 *)(fr0_ - 0x30));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01bc2c(uVar2,((undefined1 *)(unsigned)0x8c13c040),ar6_00,ar7_00));
        if (iVar1 == 1) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c033),ar6_00,ar7_00));
          if ((iVar1 == 0) &&
             (iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01b7b0(uVar2,((undefined1 *)(unsigned)0x8c13c040),ar5,ar6)), iVar1 == 1)) {
            uVar4 = 0;
          }
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 48)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),3,0,ar4));
        }
      }
      break;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 48)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),1,0,((undefined1 *)(unsigned)0x8c13c025)));
      break;
    case 3:
      uVar2 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_a524_01f514(0x8c3dd7dc,uVar2,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 48)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),2,uVar2,((undefined1 *)(unsigned)0x8c13c025)));
      break;
    case 4:
      uVar2 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_a524_01f514(0x8c3dd7dc,uVar2,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 48)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),4,uVar2,((undefined1 *)(unsigned)0x8c13c025)));
    }
  }
  return uVar4;
}

__asm__(".globl _FUN_8c0b7454\n.set _FUN_8c0b7454, _FUN_8c0b7454_def\n");
//@unit 8c0b7628
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b7628_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b7628";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  undefined4 ar6_00;
  undefined4 uVar2;
  
  uVar2 = 1;
  ar6_00 = ar6;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b6e04))))
                    (ar4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x42,ar6_00,ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01b5f8(ar4_00,ar4,ar5,ar6));
    if (iVar1 == 1) {
      uVar2 = 0;
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b6e04))))
                      (ar4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4f,ar6_00,ar7));
    if (iVar1 == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01b7b0))))
                        (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5c,ar5,ar6));
      if (iVar1 == 1) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0b7628\n.set _FUN_8c0b7628, _FUN_8c0b7628_def\n");
//@unit 8c0b76d8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint s_SEAMANDC_USR_0b76dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_SEAMANDC_USR_0b76dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7));
  uVar3 = 0;
  puVar2 = ((undefined1 *)(fr0_ - 0x20));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01bc2c))))
                    (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5c,puVar2,ar7));
  if (iVar1 == 5) {
    uVar3 = 4;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01bba0))))
                    (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x69,puVar2,ar7));
  if (iVar1 == 1) {
    uVar3 = uVar3 | 8;
  }
  puVar2 = ((undefined1 *)(fr0_ - 0x20));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01bc2c))))
                    (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x76,puVar2,ar7));
  if (iVar1 == 1) {
    uVar3 = uVar3 | 0x10;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01bba0))))
                    (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x42,puVar2,ar7));
  if (iVar1 == 0) {
    uVar3 = uVar3 | 1;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01bc2c))))
                    (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5c,((undefined1 *)(fr0_ - 0x20)),ar7));
  if (iVar1 == 4) {
    uVar3 = uVar3 | 2;
  }
  return uVar3;
}

__asm__(".globl _s_SEAMANDC_USR_0b76dc\n.set _s_SEAMANDC_USR_0b76dc, _s_SEAMANDC_USR_0b76dc_def\n");
//@unit 8c0b77a0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c0b77a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b77a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  
  ((int *)(fr0_ - 0x8))[0] = 0;
  (*(int *)(fr0_ - 0xc)) = 0;
  ar6_00 = 0x4208;
  (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b7454))))
            ((&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x42,0x8c431a68,0x4208,ar7));
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f826c(ar4,((int *)(fr0_ - 0x8)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f826c(0x8c431a68 + 0x1e,&(*(int *)(fr0_ - 0xc)),ar6_00,ar7));
  return (uint)(((int *)(fr0_ - 0x8))[0] == (*(int *)(fr0_ - 0xc)));
}

__asm__(".globl _FUN_8c0b77a0\n.set _FUN_8c0b77a0, _FUN_8c0b77a0_def\n");
//@unit 8c0b7804
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b7804_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b7804";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  ((int *)(fr0_ - 0xc))[0] = 0;
  (*(int *)(fr0_ - 0x10)) = 0;
  uVar2 = 0x4208;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b7628))))
                    ((&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x42,0x8c431a68,0x4208,ar7))
  ;
  if (iVar1 == 1) {
    uVar2 = 0;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f826c(ar4,((int *)(fr0_ - 0xc)),uVar2,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f826c(0x8c431a68 + 0x1e,&(*(int *)(fr0_ - 0x10)),uVar2,ar7));
    if (((int *)(fr0_ - 0xc))[0] == (*(int *)(fr0_ - 0x10))) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0b7804\n.set _FUN_8c0b7804, _FUN_8c0b7804_def\n");
//@unit 8c0b787c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b787c_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b787c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((ar4 & 1) == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),3,0,((undefined1 *)(unsigned)0x8c13c026)));
  }
  else if ((ar4 & 2) == 2) {
    (vsp = ((unsigned long)(fr0_ - 0)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),3,0,((undefined1 *)(unsigned)0x8c13c033)));
  }
  else {
    if ((ar4 & 4) != 4) {
      (vsp = ((unsigned long)(fr0_ - 0)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),0xb,0,((undefined1 *)(unsigned)0x8c13c025)));
      return 1;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),3,0,((undefined1 *)(unsigned)0x8c13c033)));
  }
  return 0;
}

__asm__(".globl _FUN_8c0b787c\n.set _FUN_8c0b787c, _FUN_8c0b787c_def\n");
//@unit 8c0b7920
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b7920_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b7920";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (ar4 != 2) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4365ec) = ar4;
  }
  if (ar4 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),0xb,0,((undefined1 *)(unsigned)0x8c13c025)));
    return 1;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4365ec) == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),1,0,((undefined1 *)(unsigned)0x8c13c025)));
    return 0;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4365ec) != 3) {
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4365ec) == 4) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_a524_01f514(0x8c3dd7dc,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),4,uVar1,((undefined1 *)(unsigned)0x8c13c025)));
      return 0;
    }
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4365ec) != 5) {
      return 0;
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_a524_01f514(0x8c3dd7dc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),2,uVar1,((undefined1 *)(unsigned)0x8c13c025)));
  return 0;
}

__asm__(".globl _FUN_8c0b7920\n.set _FUN_8c0b7920, _FUN_8c0b7920_def\n");
//@unit 8c0b79f0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b79f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b79f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *ar6_00;
  undefined4 ar7_00;
  
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0162f8((fr0_ + (int)0xffffffe8),ar5,ar6,ar7));
  ar7_00 = 4;
  ar6_00 = ((undefined1 *)(unsigned)0x8c4365bc);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c016318((fr0_ + (int)0xffffffe8),((undefined1 *)(unsigned)0x8c43659c),((undefined1 *)(unsigned)0x8c4365bc),4); });
  uVar1 = 0x60;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c015198((fr0_ + (int)0xffffffe8),0x60,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c016340((fr0_ + (int)0xffffffe8),uVar1,ar6_00,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 48)), free_if_nonnull_wrap_0151a0((fr0_ + (int)0xffffffe8),0xffffffff,ar6_00,ar7_00));
  return uVar1;
}

__asm__(".globl _FUN_8c0b79f0\n.set _FUN_8c0b79f0, _FUN_8c0b79f0_def\n");
//@unit 8c0b7a54
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0b7a54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b7a54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1027c0(ar4 + 0xac,ar5,ar6,ar7));
  *(undefined1 *)(unsigned)(0xa0 + ar4) = *(undefined4 *)(unsigned)0x8c436548;
  *(undefined2 *)(unsigned)(0xa2 + ar4) = 0;
  *(undefined2 *)(unsigned)(0xac + ar4) = 0;
  *(undefined2 *)(unsigned)(0xae + ar4) = 0;
  *(undefined2 *)(unsigned)(0xb0 + ar4) = 0;
  *(undefined2 *)(unsigned)(0xb2 + ar4) = 0;
  *(undefined1 *)(unsigned)(0xb4 + ar4) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b936c(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c0b7a54\n.set _FUN_8c0b7a54, _FUN_8c0b7a54_def\n");
//@unit 8c0b7ad0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b7ad0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b7ad0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f8b34(0,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0xcc,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x83,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0xd6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x8e,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0xe0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x99,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0xea,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xa4,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0xf4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xaf,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0xfe,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xba,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x108,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xc5,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x112,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xd0,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x11c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xdb,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x126,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xe6,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x130,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xf1,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x13a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xfc,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x144,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x107,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x14e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x112,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x158,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x11d,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x162,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x128,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x16c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x133,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x176,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x13e,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x180,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x149,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x18a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x154,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x194,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x15f,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x19e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x16a,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1a8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x175,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1b2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x180,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1bc,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x18b,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1c6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x196,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1d0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1a1,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1da,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1ac,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1e4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1b7,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1ee,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1c2,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1f8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1cd,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x202,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1d8,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x20c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1e3,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x216,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1ee,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x220,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1f9,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x22a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x204,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x234,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x20f,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x23e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x21a,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x248,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x225,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x252,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x230,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x25c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x23b,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x266,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x246,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x270,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x251,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x27a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x25c,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x284,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x267,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x28e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x272,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x298,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x27d,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2a2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x288,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2ac,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x293,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2b6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x29e,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2c0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2a9,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2ca,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2b4,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2d4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2bf,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2de,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2ca,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2e8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2d5,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2f2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2e0,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2fc,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2eb,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x306,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2f6,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x310,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x301,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x31a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x30c,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x324,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x317,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x32e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x322,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x338,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x32d,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x342,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x338,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x34c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x343,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x356,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x34e,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x360,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x359,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x36a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x364,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x374,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x36f,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x37e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x37a,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x388,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x385,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x392,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x390,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x39c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x39b,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3a6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3a6,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3b0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3b1,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3ba,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3bc,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3c4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3c7,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3ce,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3d2,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3d8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3dd,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3e2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3e8,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3ec,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3f3,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3f6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3fe,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x400,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x409,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x40a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x414,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x414,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x41f,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x41e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x42a,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x428,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x435,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x432,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x440,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x43c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x44b,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x446,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x456,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x450,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x461,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x464,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x46c,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x46e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x477,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x478,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x482,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x482,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x48d,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x48c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x498,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x496,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4a3,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4a0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4ae,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4aa,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4b9,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4b4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4c4,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4be,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4cf,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4c8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4da,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4d2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4e5,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4dc,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4f0,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4e6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4fb,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4f0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x506,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4fa,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x511,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x504,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x51c,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x50e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x527,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x518,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x532,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x522,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x53d,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x52c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x548,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x536,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x553,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x540,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x55e,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x54a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x569,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x554,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x574,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x55e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x57f,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x568,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x58a,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x572,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x595,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x57c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5a0,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x586,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5ab,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x590,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5b6,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x59a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5c1,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5a4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5cc,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5ae,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5d7,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5b8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5e2,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5c2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5ed,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5cc,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5f8,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5d6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x603,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5e0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x60e,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5ea,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x619,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5f4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x624,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5fe,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x62f,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x608,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x63a,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x612,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x645,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x61c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x650,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x626,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x65b,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x630,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x666,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x63a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x671,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x644,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x67c,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x64e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x687,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x658,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x692,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x662,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x69d,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x66c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6a8,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x676,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6b3,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x680,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6be,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x68a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6c9,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x694,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6d4,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x69e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6df,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6a8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6ea,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6b2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6f5,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6bc,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x700,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6c6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x70b,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6d0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x716,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6da,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x721,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6e4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x72c,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6ee,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x737,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6f8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x742,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x702,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x74d,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x70c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x758,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x716,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x763,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x720,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x76e,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x72a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x779,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x734,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x784,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x73e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x78f,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x748,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x79a,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x752,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7a5,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x75c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7b0,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x766,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7bb,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x770,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7c6,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x77a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7d1,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x784,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7dc,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x78e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7e7,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x798,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7f2,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x7a2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7fd,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x7ac,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x808,10,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
                    (ar4 + 0x7b6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x813,10,
                     ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0b7ad0\n.set _FUN_8c0b7ad0, _FUN_8c0b7ad0_def\n");
//@unit 8c0b9230
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b9230_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b9230";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f8a64(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0b9230\n.set _FUN_8c0b9230, _FUN_8c0b9230_def\n");
//@unit 8c0b9244
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b9244_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b9244";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  undefined4 ar5_00;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f8b88(ar4,ar5,ar6,ar7));
  ar5_00 = 0;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f8b92(uVar1,0,ar6,ar7));
  if (0xf4240 <= uVar2) {
    *(int *)(unsigned)(0xa8 + ar4) = *(int *)(unsigned)(0xa8 + ar4) + 1;
    *(short *)(unsigned)(0xa4 + ar4) = *(short *)(unsigned)(0xa4 + ar4) + 1;
    (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f8b6e(0,ar5_00,ar6,ar7));
    *(uint *)(unsigned)(0xb8 + ar4) = *(int *)(unsigned)(0xb8 + ar4) + uVar2 + 0xfff0bdc0;
    if (0xf4240 <= *(uint *)(unsigned)(0xb8 + ar4)) {
      *(int *)(unsigned)(0xa8 + ar4) = *(int *)(unsigned)(0xa8 + ar4) + 1;
      *(short *)(unsigned)(0xa4 + ar4) = *(short *)(unsigned)(0xa4 + ar4) + 1;
      *(undefined4 *)(unsigned)(0xb8 + ar4) = 0;
    }
  }
  if (*(ushort *)(unsigned)(0xa4 + ar4) < 0x3840) {
    uVar1 = 0;
  }
  else {
    *(short *)(unsigned)(0xa2 + ar4) = *(short *)(unsigned)(0xa2 + ar4) + 1;
    if (0xfffa <= *(ushort *)(unsigned)(0xa2 + ar4)) {
      *(short *)(unsigned)(0xa2 + ar4) = (short)0xfffa;
    }
    *(undefined2 *)(unsigned)(0xa4 + ar4) = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(ar4,ar5_00,ar6,ar7));
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0b9244\n.set _FUN_8c0b9244, _FUN_8c0b9244_def\n");
//@unit 8c0b936c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0b936c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b936c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(undefined1 *)(unsigned)(0xa1 + (int)ar4) = *(undefined4 *)(unsigned)0x8c436548;
  *(undefined2 *)(unsigned)(0xa4 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0xa8 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0xb8 + (int)ar4) = 0;
  *ar4 = 0;
  *(undefined4 *)(unsigned)(0x88 + (int)ar4) = 0;
  iVar1 = 0x84;
  *(undefined4 *)(unsigned)(0x84 + (int)ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0b936c\n.set _FUN_8c0b936c, _FUN_8c0b936c_def\n");
//@unit 8c0b93c0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0b93c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b93c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  
  iVar3 = 0;
  iVar4 = 0;
  bVar5 = 0;
  iVar2 = 4;
  for (iVar6 = 0; iVar6 < 8; iVar6 = iVar6 + 1) {
    iVar3 = (uint)*(byte *)(unsigned)(ar4 + iVar6 + 4) + iVar3;
  }
  if (iVar3 < 5) {
    iVar2 = 3;
  }
  else {
    for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
      if (bVar5 < *(byte *)(unsigned)(ar4 + iVar3 + 4)) {
        bVar5 = *(byte *)(unsigned)(ar4 + iVar3 + 4);
        iVar4 = iVar3;
      }
    }
    iVar6 = ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(ar4 + 0x16)); unsigned long t1_ = (unsigned long)(*(undefined4 *)(unsigned)(ar4 + 0x1a)); *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 44)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b9afc))))
                      (ar4,ar5,ar6,ar7); });
    iVar1 = ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(ar4 + 0x20)); unsigned long t1_ = (unsigned long)(*(undefined4 *)(unsigned)(ar4 + 0x24)); *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 44)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b9afc))))
                      (ar4,ar5,ar6,ar7); });
    iVar3 = iVar6;
    if (((iVar6 != iVar1) &&
        (((iVar3 = iVar4, iVar6 != iVar4 || (iVar1 != iVar4)) &&
         (iVar2 = 3, *(int *)(unsigned)(0xbc + ar4) != iVar6)))) &&
       (*(int *)(unsigned)(0xbc + ar4) != iVar1)) {
      iVar2 = 0;
    }
    (*(int *)(fr0_ - 0x2c)) = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c013adc(iVar3 - *(int *)(unsigned)(0xbc + ar4),ar5,ar6,ar7));
    if (4 < (*(int *)(fr0_ - 0x2c))) {
      (*(int *)(fr0_ - 0x2c)) = 8 - (*(int *)(fr0_ - 0x2c));
    }
    if (iVar2 == 4) {
      if ((*(int *)(fr0_ - 0x2c)) == 0) {
        iVar2 = 1;
      }
      else if ((*(int *)(fr0_ - 0x2c)) == 1) {
        iVar2 = 3;
      }
      else {
        iVar2 = 2;
      }
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0b93c0\n.set _FUN_8c0b93c0, _FUN_8c0b93c0_def\n");
//@unit 8c0b951c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b951c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b951c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 10;
  (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (((undefined1 *)(fr0_ - 0x18)),(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x836,10,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0b95a0(ar4,((undefined1 *)(fr0_ - 0x18)),uVar2,ar7));
  if (iVar1 < 1) {
    uVar2 = 10;
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
              (((undefined1 *)(fr0_ - 0x18)),(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x841,10,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0b95a0(ar4,((undefined1 *)(fr0_ - 0x18)),uVar2,ar7));
    if (iVar1 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0b951c\n.set _FUN_8c0b951c, _FUN_8c0b951c_def\n");
//@unit 8c0b95a0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c0b95a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b95a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 288; for (int i_ = 0; i_ < 288; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *ar5_00;
  undefined4 uVar5;
  undefined4 ar7_00;
  undefined1 *ain0;
  
  uVar5 = ar5;
  (*(int *)(fr0_ - 0x11c)) = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c10287c(0x10000,ar5,ar6,ar7));
  if ((*(int *)(fr0_ - 0x11c)) == 0) {
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 288)), FUN_8c10287c(0x3c,uVar5,ar6,ar7));
    (*(unsigned *)(fr0_ - 0x120) = (unsigned)(unsigned long)(puVar2));
    if (puVar2 == (undefined1 *)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c10289c(&(*(int *)(fr0_ - 0x11c)),uVar5,ar6,ar7));
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      ar7_00 = 0;
      uVar5 = 0;
      iVar4 = (*(int *)(fr0_ - 0x11c));
      ain0 = puVar2;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c1f6f20((*(int *)(fr0_ - 0x11c)),puVar2,0,0));
      if (iVar3 != 0) {
        (vsp = ((unsigned long)(fr0_ - 288)), memset(((undefined1 *)(fr0_ - 0x10c)),0,0xf0,ar7_00));
        uVar5 = 10;
        (vsp = ((unsigned long)(fr0_ - 288)), memmove(((undefined1 *)(fr0_ - 0x1c)),ar5,10,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c1f7b64(((undefined1 *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x10c)),uVar5,ar7_00));
        uVar5 = 10;
        ar5_00 = ((undefined1 *)(fr0_ - 0x10a));
        puVar2 = ((undefined1 *)(fr0_ - 0x1c));
        iVar4 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c013ec0(puVar2,ar5_00,10,ar7_00));
        if (iVar4 != 0) {
          ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 288)); FUN_8c1f710c(puVar2,ar5_00,uVar5,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c10289c(&(*(int *)(fr0_ - 0x11c)),ar5_00,uVar5,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c10289c(((undefined1 * *)(fr0_ - 0x120)),ar5_00,uVar5,ar7_00));
          return 0;
        }
        puVar2 = ((undefined1 *)(fr0_ - 0x118));
        (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c1f8300((*(int *)(fr0_ - 0xa0)),puVar2,uVar5,ar7_00));
        uVar1 = (uint)(*(byte *)(fr0_ - 0x116));
        iVar4 = (*(int *)(fr0_ - 0xa0));
      }
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 288)); FUN_8c1f710c(iVar4,puVar2,uVar5,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c10289c(&(*(int *)(fr0_ - 0x11c)),puVar2,uVar5,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c10289c(((undefined1 * *)(fr0_ - 0x120)),puVar2,uVar5,ar7_00));
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0b95a0\n.set _FUN_8c0b95a0, _FUN_8c0b95a0_def\n");
//@unit 8c0b96e4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0b96e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b96e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 296; for (int i_ = 0; i_ < 296; i_++) z_[i_] = 0; }
  int iVar1;
  char *ar4_00;
  int iVar2;
  int iVar3;
  char *ar4_01;
  uint *ar5_00;
  char *ar5_01;
  undefined4 ar6_00;
  undefined4 ar7_00;
  ushort uVar4;
  uint unaff_r12 = 0;
  
  (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1f8176(((char *)(fr0_ - 0x30)) + 10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1f826c(((char *)(fr0_ - 0x30)) + 10,&(*(uint *)(fr0_ - 0x124)),ar6,ar7));
  ar5_00 = &(*(uint *)(fr0_ - 0x128));
  (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1f826c(ar5,ar5_00,ar6,ar7));
  if ((*(uint *)(fr0_ - 0x128)) < (*(uint *)(fr0_ - 0x124))) {
    *(unsigned *)0x8c4365f0 = (unsigned)(unsigned long)((char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 296)), malloc_thunk(0x10000,ar5_00,ar6,ar7)));
    if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f0) == (char *)(unsigned)0x0) {
      iVar1 = 0xb6;
    }
    else {
      *(unsigned *)0x8c4365f4 = (unsigned)(unsigned long)((char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 296)), malloc_thunk(0x3c,ar5_00,ar6,ar7)));
      if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f4) == (char *)(unsigned)0x0) {
        (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fb57c(((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f0),ar5_00,ar6,ar7));
        iVar1 = 0xb6;
      }
      else {
        ar4_00 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 296)), malloc_thunk(0x44c,ar5_00,ar6,ar7));
        if (ar4_00 == (char *)(unsigned)0x0) {
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fb57c(((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f0),ar5_00,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fb57c(((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f4),ar5_00,ar6,ar7));
          iVar1 = 0xb6;
        }
        else {
          iVar1 = 0xb6;
          ar7_00 = 0;
          ar6_00 = 0;
          ar4_01 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f0);
          ar5_01 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f4);
          iVar2 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1f6f20(((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f0),((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f4),0,0));
          if (iVar2 != 0) {
            for (iVar2 = 0; iVar2 < 10; iVar2 = iVar2 + 1) {
              ((char *)(fr0_ - 0x30))[iVar2] = ' ';
            }
            uVar4 = 0;
            ar4_01 = ar4_00;
            iVar2 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1f7c40(ar4_00,ar5_01,ar6_00,ar7_00));
            if (iVar2 != 0) {
              for (iVar2 = 0; iVar2 < 100; iVar2 = iVar2 + 1) {
                if (ar4_00[iVar2 * 0xb] != -1) {
                  ar5_01 = ((char *)(fr0_ - 0x120));
                  ar4_01 = ar4_00 + iVar2 * 0xb;
                  iVar3 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1f7b64(ar4_01,ar5_01,ar6_00,ar7_00));
                  if (iVar3 != 0) {
                    ar6_00 = 10;
                    ar5_01 = ((char *)(fr0_ - 0x11e));
                    ar4_01 = ((undefined1 *)(unsigned)0x8c13c830);
                    iVar3 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c013ec0(((undefined1 *)(unsigned)0x8c13c830),ar5_01,10,ar7_00));
                    if (iVar3 != 0) {
                      ar6_00 = 10;
                      ar5_01 = ((char *)(fr0_ - 0x11e));
                      ar4_01 = ((undefined1 *)(unsigned)0x8c13c59a);
                      iVar3 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c013ec0(((undefined1 *)(unsigned)0x8c13c59a),ar5_01,10,ar7_00));
                      if (iVar3 != 0) {
                        ar6_00 = 10;
                        ar5_01 = ((char *)(fr0_ - 0x11e));
                        ar4_01 = ((undefined1 *)(unsigned)0x8c13c5a5);
                        iVar3 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c013ec0(((undefined1 *)(unsigned)0x8c13c5a5),ar5_01,10,ar7_00));
                        if (iVar3 != 0) {
                          ar6_00 = 10;
                          ar5_01 = ((char *)(fr0_ - 0x11e));
                          ar4_01 = ((undefined1 *)(unsigned)0x8c13c5b0);
                          iVar3 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c013ec0(((undefined1 *)(unsigned)0x8c13c5b0),ar5_01,10,ar7_00));
                          if (iVar3 != 0) {
                            ar6_00 = 10;
                            ar5_01 = ((char *)(fr0_ - 0x11e));
                            ar4_01 = ((undefined1 *)(unsigned)0x8c13c5bb);
                            iVar3 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c013ec0(((undefined1 *)(unsigned)0x8c13c5bb),ar5_01,10,ar7_00));
                            if ((((iVar3 != 0) && ((*(uint *)(fr0_ - 0xa8)) < (*(uint *)(fr0_ - 0x124)))) &&
                                ((*(uint *)(fr0_ - 0x128)) < (*(uint *)(fr0_ - 0xa8)))) && (uVar4 < (*(ushort *)(fr0_ - 0xa4)))) {
                              ar6_00 = 10;
                              ar5_01 = ((char *)(fr0_ - 0x11e));
                              ar4_01 = ((char *)(fr0_ - 0x30));
                              (vsp = ((unsigned long)(fr0_ - 296)), memmove(ar4_01,ar5_01,10,ar7_00));
                              unaff_r12 = (*(uint *)(fr0_ - 0xb8));
                              uVar4 = (*(ushort *)(fr0_ - 0xa4));
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              for (iVar2 = 0; iVar2 < 0xb2; iVar2 = iVar2 + 1) {
                ar6_00 = 10;
                ar5_01 = ((char *)(fr0_ - 0x30));
                ar4_01 = (char *)(unsigned)(iVar2 * 10 + ar4 + 0xcc);
                iVar3 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c013ec0(ar4_01,ar5_01,10,ar7_00));
                if (iVar3 == 0) {
                  iVar1 = iVar2;
                }
              }
              if (iVar1 == 0xb6) {
                if ((unaff_r12 & 0x400) != 0) {
                  iVar1 = 0xb3;
                }
                if ((unaff_r12 & 0x200) != 0) {
                  iVar1 = 0xb4;
                }
                if ((unaff_r12 & 0x100) != 0) {
                  iVar1 = 0xb5;
                }
                if ((unaff_r12 & 0x80) != 0) {
                  iVar1 = 0xb6;
                }
                if ((unaff_r12 & 0x40) != 0) {
                  iVar1 = 0xb7;
                }
                if ((unaff_r12 & 0x20) != 0) {
                  iVar1 = 0xb8;
                }
                if ((unaff_r12 & 0x10) != 0) {
                  iVar1 = 0xb9;
                }
                if ((unaff_r12 & 8) != 0) {
                  iVar1 = 0xba;
                }
                if ((unaff_r12 & 4) != 0) {
                  iVar1 = 0xbb;
                }
                if ((unaff_r12 & 2) != 0) {
                  iVar1 = 0xbc;
                }
                if ((unaff_r12 & 1) != 0) {
                  iVar1 = 0xbd;
                }
              }
            }
          }
          ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 296)); FUN_8c1f710c(ar4_01,ar5_01,ar6_00,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fb57c(((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f0),ar5_01,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fb57c(((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f4),ar5_01,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fb57c(ar4_00,ar5_01,ar6_00,ar7_00));
        }
      }
    }
  }
  else {
    iVar1 = 0xb6;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0b96e4\n.set _FUN_8c0b96e4, _FUN_8c0b96e4_def\n");
//@unit 8c0b9afc
#include "../decls.h"
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
FUN_8c0b9afc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b9afc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (0x17 < (byte)s4) {
    return 8;
  }
                    
  switch((byte)s4) {
  case 0:
  case 1:
    return 6;
  default:
    return 7;
  case 5:
  case 6:
  case 7:
    return 0;
  case 8:
  case 9:
  case 10:
    return 1;
  case 0xb:
  case 0xc:
  case 0xd:
    return 2;
  case 0xe:
  case 0xf:
  case 0x10:
    return 3;
  case 0x11:
  case 0x12:
  case 0x13:
    return 4;
  case 0x14:
    return 5;
  }
}

__asm__(".globl _FUN_8c0b9afc\n.set _FUN_8c0b9afc, _FUN_8c0b9afc_def\n");
//@unit 8c0b9bb0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c0b9bb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b9bb0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0b9d14(ar4,((undefined1 *)(fr0_ - 0x1c)),ar6,ar7));
  *(undefined2 *)(unsigned)(ar4 + 0x20) = *(undefined2 *)(unsigned)(ar4 + 0x16);
  *(undefined2 *)(unsigned)(ar4 + 0x22) = *(undefined2 *)(unsigned)(ar4 + 0x18);
  *(undefined2 *)(unsigned)(ar4 + 0x24) = *(undefined2 *)(unsigned)(ar4 + 0x1a);
  *(undefined2 *)(unsigned)(ar4 + 0x26) = *(undefined2 *)(unsigned)(ar4 + 0x1c);
  *(undefined2 *)(unsigned)(ar4 + 0x28) = *(undefined2 *)(unsigned)(ar4 + 0x1e);
  *(undefined2 *)(unsigned)(ar4 + 0x16) = *(undefined2 *)(unsigned)(ar4 + 0xc);
  *(undefined2 *)(unsigned)(ar4 + 0x18) = *(undefined2 *)(unsigned)(ar4 + 0xe);
  *(undefined2 *)(unsigned)(ar4 + 0x1a) = *(undefined2 *)(unsigned)(ar4 + 0x10);
  *(undefined2 *)(unsigned)(ar4 + 0x1c) = *(undefined2 *)(unsigned)(ar4 + 0x12);
  *(undefined2 *)(unsigned)(ar4 + 0x1e) = *(undefined2 *)(unsigned)(ar4 + 0x14);
  iVar3 = ar4 + 0xc;
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0b9d14(ar4,iVar3,ar6,ar7));
  uVar1 = ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(ar4 + 0xc)); unsigned long t1_ = (unsigned long)(*(undefined4 *)(unsigned)(ar4 + 0x10)); *(unsigned *)((((unsigned long)(fr0_ - 28)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 28)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b9afc))))
                    (ar4,iVar3,ar6,ar7); });
  *(undefined4 *)(unsigned)(0xbc + ar4) = uVar1;
  iVar3 = ar4 + *(int *)(unsigned)(0xbc + ar4);
  *(char *)(unsigned)(iVar3 + 4) = *(char *)(unsigned)(iVar3 + 4) + '\x01';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0b9d30(ar4,((undefined1 *)(fr0_ - 0x1c)),0x8c431a68 + 0x14,ar7));
  *(undefined4 *)(unsigned)(0xc8 + ar4) = uVar1;
  iVar3 = 0;
  for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
    iVar3 = (uint)*(byte *)(unsigned)(ar4 + iVar4 + 4) + iVar3;
  }
  if (((*(short *)(unsigned)(ar4 + 0xc) == *(short *)(unsigned)(ar4 + 0x16)) &&
      (*(char *)(unsigned)(ar4 + 0xe) == *(char *)(unsigned)(ar4 + 0x18))) &&
     (*(char *)(unsigned)(ar4 + 0xf) == *(char *)(unsigned)(ar4 + 0x19))) {
    *(char *)(unsigned)(ar4 + 0x2c) = *(char *)(unsigned)(ar4 + 0x2c) + '\x01';
  }
  else {
    *(undefined1 *)(unsigned)(ar4 + 0x2c) = 1;
  }
  uVar2 = *(uint *)(unsigned)(0xc8 + ar4);
  if (((uVar2 == 0) && (uVar2 = (uint)*(byte *)(unsigned)(ar4 + 0x2c), uVar2 == 1)) && (uVar2 = 1, iVar3 != 1)
     ) {
    uVar2 = 0x2c;
    *(undefined1 *)(unsigned)(ar4 + 0x2c) = 2;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0b9bb0\n.set _FUN_8c0b9bb0, _FUN_8c0b9bb0_def\n");
//@unit 8c0b9d14
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b9d14_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b9d14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f8176(ar5,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0b9d14\n.set _FUN_8c0b9d14, _FUN_8c0b9d14_def\n");
//@unit 8c0b9d30
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0b9d30_def(undefined4 ar4,ushort *ar5,ushort *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b9d30";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  int iVar2;
  ushort *ar6_00;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = 0;
  iVar3 = 0;
  ar6_00 = ar6;
  for (iVar7 = 0x79e; iVar7 < (int)(uint)*ar5; iVar7 = iVar7 + 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(iVar7,4,ar6_00,ar7));
    if (iVar2 == 0) {
      iVar5 = iVar5 + 0x16e;
    }
    else {
      iVar5 = iVar5 + 0x16d;
    }
  }
  bVar1 = (byte)ar5[1];
  if ((bVar1 < 0xd) && (1 < bVar1)) {
    iVar7 = iVar5;
                    
    switch(bVar1) {
    case 0xc:
      iVar5 = iVar5 + 0x1e;
    case 0xb:
      iVar5 = iVar5 + 0x1f;
    case 10:
      iVar5 = iVar5 + 0x1e;
    case 9:
      iVar5 = iVar5 + 0x1f;
    case 8:
      iVar5 = iVar5 + 0x1f;
    case 7:
      iVar5 = iVar5 + 0x1e;
    case 6:
      iVar5 = iVar5 + 0x1f;
    case 5:
      iVar5 = iVar5 + 0x1e;
    case 4:
      iVar7 = iVar5 + 0x1f;
    case 3:
      iVar5 = iVar7 + 0x1c;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c((uint)*ar5,4,ar6_00,ar7));
      if (iVar2 == 0) {
        iVar5 = iVar7 + 0x1d;
      }
    case 2:
      iVar5 = iVar5 + 0x1f;
    }
  }
  uVar6 = iVar5 + (uint)*(byte *)(unsigned)((int)ar5 + 3);
  for (iVar5 = 0x79e; iVar5 < (int)(uint)*ar6; iVar5 = iVar5 + 1) {
    iVar7 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(iVar5,4,ar6_00,ar7));
    if (iVar7 == 0) {
      iVar3 = iVar3 + 0x16e;
    }
    else {
      iVar3 = iVar3 + 0x16d;
    }
  }
  bVar1 = (byte)ar6[1];
  if ((bVar1 < 0xd) && (1 < bVar1)) {
    iVar5 = iVar3;
                    
    switch(bVar1) {
    case 0xc:
      iVar3 = iVar3 + 0x1e;
    case 0xb:
      iVar3 = iVar3 + 0x1f;
    case 10:
      iVar3 = iVar3 + 0x1e;
    case 9:
      iVar3 = iVar3 + 0x1f;
    case 8:
      iVar3 = iVar3 + 0x1f;
    case 7:
      iVar3 = iVar3 + 0x1e;
    case 6:
      iVar3 = iVar3 + 0x1f;
    case 5:
      iVar3 = iVar3 + 0x1e;
    case 4:
      iVar5 = iVar3 + 0x1f;
    case 3:
      iVar3 = iVar5 + 0x1c;
      iVar7 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c((uint)*ar6,4,ar6_00,ar7));
      if (iVar7 == 0) {
        iVar3 = iVar5 + 0x1d;
      }
    case 2:
      iVar3 = iVar3 + 0x1f;
    }
  }
  uVar4 = iVar3 + (uint)*(byte *)(unsigned)((int)ar6 + 3);
  if (uVar6 < uVar4) {
    iVar3 = 0xffff;
  }
  else {
    iVar3 = uVar6 - uVar4;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c0b9d30\n.set _FUN_8c0b9d30, _FUN_8c0b9d30_def\n");
//@unit 8c0b9ed4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b9ed4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b9ed4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(unsigned)(ar4 + ar5 + 0x44) == '\0') {
    for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
      if (*(int *)(unsigned)(ar4 + iVar2 * 4 + 0x30) == ar5) {
        return 0;
      }
    }
    iVar2 = ar4 + *(int *)(unsigned)(ar4 + 0x40);
    *(char *)(unsigned)(iVar2 + 0x44) = *(char *)(unsigned)(iVar2 + 0x44) + '\x01';
    for (iVar2 = 4; 0 < iVar2; iVar2 = iVar2 + -1) {
      *(undefined4 *)(unsigned)(ar4 + iVar2 * 4 + 0x30) = *(undefined4 *)(unsigned)(ar4 + (iVar2 + -1) * 4 + 0x30);
    }
    *(int *)(unsigned)(ar4 + 0x30) = ar5;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0b9ed4\n.set _FUN_8c0b9ed4, _FUN_8c0b9ed4_def\n");
//@unit 8c0b9f5c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined1 * FUN_8c0b9f5c_def(undefined1 *ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b9f5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *ar4 = *ar5;
  for (iVar1 = 0; iVar1 < 5; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)(ar4 + iVar1 * 4 + 4) = *(undefined4 *)(unsigned)(ar5 + iVar1 * 4 + 4);
  }
  for (iVar1 = 0; iVar1 < 0x3e; iVar1 = iVar1 + 1) {
    ar4[iVar1 + 0x18] = ar5[iVar1 + 0x18];
  }
  return ar4;
}

__asm__(".globl _FUN_8c0b9f5c\n.set _FUN_8c0b9f5c, _FUN_8c0b9f5c_def\n");
//@unit 8c0b9fb4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0b9fb4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b9fb4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  code *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint in_fr1 = 0;
  char cVar4;
  
  cVar4 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0243b0(ar4 + 0xb0,ar5,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(3); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x1bc,((void *)0x8c022c4c),((void *)0x8c022cb0),0x10); });
  uVar3 = 0xf0;
  pcVar2 = ((void *)0x8c0ba180);
  pcVar1 = ((void *)0x8c0243b0);
  ({ unsigned long t0_ = (unsigned long)(0x14); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x1ec,((void *)0x8c0243b0),((void *)0x8c0ba180),0xf0); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e9910(ar4 + 0x14ac,pcVar1,pcVar2,uVar3));
  uVar3 = 0xf0;
  pcVar2 = ((void *)0x8c0ba180);
  pcVar1 = ((void *)0x8c0243b0);
  ({ unsigned long t0_ = (unsigned long)(0x14); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x14c4,((void *)0x8c0243b0),((void *)0x8c0ba180),0xf0); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e9910(ar4 + 0x2784,pcVar1,pcVar2,uVar3));
  uVar3 = 0xf0;
  pcVar2 = ((void *)0x8c0ba180);
  pcVar1 = ((void *)0x8c0243b0);
  ({ unsigned long t0_ = (unsigned long)(10); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x2794,((void *)0x8c0243b0),((void *)0x8c0ba180),0xf0); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fdc20(ar4 + 0x30f4,pcVar1,pcVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01e4dc(ar4 + 0x4104,pcVar1,pcVar2,uVar3));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c13c026)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c014334(ar4,pcVar1,pcVar2,uVar3); });
  *(undefined2 *)(unsigned)(ar4 + 0x28) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0xa8) = (*(undefined1 *)(unsigned)0x8c436548);
  *(undefined4 *)(unsigned)(ar4 + 0xac) = 0;
  if (cVar4 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x1b0) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x1a0) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x1b0) = (ulonglong)in_fr1;
    *(ulonglong *)(unsigned)(ar4 + 0x1a0) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x1ac) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1a8) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x1b4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1b8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x14b8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x14b4) = 0;
  if (cVar4 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x14bc) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x14bc) = (ulonglong)in_fr1;
  }
  *(undefined1 *)(unsigned)(ar4 + 0x14c0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x278c) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x2790) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0b9fb4\n.set _FUN_8c0b9fb4, _FUN_8c0b9fb4_def\n");
//@unit 8c0ba180
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0ba180_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba180";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02441c(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0ba180\n.set _FUN_8c0ba180, _FUN_8c0ba180_def\n");
//@unit 8c0ba1c0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0ba1c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba1c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long t0_ = (unsigned long)(0xc); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4,((void *)(unsigned)0x8c0ba284),((void *)(unsigned)0x8c0ba1f4),0x80); });
  return ar4;
}

__asm__(".globl _FUN_8c0ba1c0\n.set _FUN_8c0ba1c0, _FUN_8c0ba1c0_def\n");
//@unit 8c0ba1f4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0ba1f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba1f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0ba234(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0ba1f4\n.set _FUN_8c0ba1f4, _FUN_8c0ba1f4_def\n");
//@unit 8c0ba234
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0ba234_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba234";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016ac4(ar4 + 0x10,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0ba234\n.set _FUN_8c0ba234, _FUN_8c0ba234_def\n");
//@unit 8c0ba284
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0ba284_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba284";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f3e84(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d5b8(ar4 + 0x24,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ff40(ar4 + 0x48,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036058(ar4 + 0x58,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c0ba284\n.set _FUN_8c0ba284, _FUN_8c0ba284_def\n");
//@unit 8c0ba2cc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0ba2cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba2cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b7a54(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(0x7cc + ar4) = 0;
  *(undefined4 *)(unsigned)(0x7d0 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x7d8 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x7d4 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x7dc + ar4) = 0;
  *(undefined4 *)(unsigned)(0x7e0 + ar4) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0ba2cc\n.set _FUN_8c0ba2cc, _FUN_8c0ba2cc_def\n");
//@unit 8c0ba324
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0ba324_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba324";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0ba34c(ar4,ar5,ar6,ar7); });
  return ar4;
}

__asm__(".globl _FUN_8c0ba324\n.set _FUN_8c0ba324, _FUN_8c0ba324_def\n");
//@unit 8c0ba34c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0ba34c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba34c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *ar4 = ar5;
  ar4[1] = ar6;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c0ba34c\n.set _FUN_8c0ba34c, _FUN_8c0ba34c_def\n");
//@unit 8c0ba354
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0ba354_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba354";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba5bc(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c0ba354\n.set _FUN_8c0ba354, _FUN_8c0ba354_def\n");
//@unit 8c0ba37c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0ba37c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba37c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba5bc(ar4,ar5,ar6,ar7));
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0xff000000); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0ba3b8))))
                    (0x8c2b5628,0xff000000,0xff000000,0xff000000); });
  return uVar1;
}

__asm__(".globl _FUN_8c0ba37c\n.set _FUN_8c0ba37c, _FUN_8c0ba37c_def\n");
//@unit 8c0ba3b8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0ba3b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba3b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(undefined4 *)(unsigned)(0x154 + ar4) = ar5;
  *(undefined4 *)(unsigned)(0x158 + ar4) = ar6;
  *(undefined4 *)(unsigned)(0x15c + ar4) = ar7;
  iVar1 = 0x160;
  *(undefined4 *)(unsigned)(0x160 + ar4) = s0;
  return iVar1;
}

__asm__(".globl _FUN_8c0ba3b8\n.set _FUN_8c0ba3b8, _FUN_8c0ba3b8_def\n");
//@unit 8c0ba3e0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0ba3e0_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba3e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined4 ar5_00;
  float fVar2;
  
  if ((*(undefined1 *)(unsigned)0x8c4365fc) == '\0') {
    *(unsigned *)0x8c4365f8 = (unsigned)(unsigned long)((undefined4 *)(unsigned)0x1);
    (*(undefined1 *)(unsigned)0x8c4365fc) = '\x01';
  }
  if (*(int *)(unsigned)(ar4 + 0x10) == 0) {
    fVar2 = *(float *)(unsigned)(ar4 + 4) - 0.7;
    *(float *)(unsigned)(ar4 + 4) = fVar2;
    puVar1 = ((undefined4 *)(unsigned)0x8c0ba480);
    if (fVar2 < 339.0) {
      puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba870(ar4,ar5,ar6,ar7));
    }
  }
  else {
    ar5_00 = 0x104;
    puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0103d0(*ar5,0x104,ar6,ar7));
    if ((puVar1 == (undefined4 *)(unsigned)0x0) &&
       (puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f8), ((undefined4 *)(unsigned long)*(unsigned *)0x8c4365f8) == (undefined4 *)(unsigned)0x1)) {
      *(unsigned *)0x8c4365f8 = (unsigned)(unsigned long)((undefined4 *)(unsigned)0x0);
      puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba844(ar4,ar5_00,ar6,ar7));
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0ba3e0\n.set _FUN_8c0ba3e0, _FUN_8c0ba3e0_def\n");
//@unit 8c0ba494
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0ba494_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba494";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bd0c));
  (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bd0c)) + 4);
  (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bd0c)) + 8);
  (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bd0c)) + 0xc);
  (*(undefined4 *)(fr0_ - 0x2c)) = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bd1c));
  (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bd1c)) + 4);
  (*(undefined4 *)(fr0_ - 0x24)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bd1c)) + 8);
  (*(undefined4 *)(fr0_ - 0x20)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bd1c)) + 0xc);
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c2595aa(2,&(*(undefined4 *)(fr0_ - 0x1c)),ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x10) == 0) {
    if (*(int *)(unsigned)(ar4 + 0x14) == 1) {
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c0ba5e0(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c0ba6bc(ar4,ar5,ar6,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c0ba6bc(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c0ba5e0(ar4,ar5,ar6,ar7));
    }
  }
  else if (*(int *)(unsigned)(ar4 + 0x14) == 1) {
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c0ba5e0(ar4,ar5,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c0ba6bc(ar4,ar5,ar6,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c2595aa(0,&(*(undefined4 *)(fr0_ - 0x2c)),ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0ba494\n.set _FUN_8c0ba494, _FUN_8c0ba494_def\n");
//@unit 8c0ba5bc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0ba5bc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba5bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0x43200000;
  ar4[1] = 0x43a98000;
  ar4[4] = 1;
  ar4[5] = 1;
  return 1;
}

__asm__(".globl _FUN_8c0ba5bc\n.set _FUN_8c0ba5bc, _FUN_8c0ba5bc_def\n");
//@unit 8c0ba5e0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0ba5e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba5e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined8 in_dr4 = 0;
  undefined4 ain0;
  
  ain0 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x28)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13bd2c);
  (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined1 *)(unsigned)0x8c13bd30);
  (*(undefined4 *)(fr0_ - 0x20)) = (*(undefined1 *)(unsigned)0x8c13bd34);
  (*(undefined4 *)(fr0_ - 0x1c)) = (*(undefined1 *)(unsigned)0x8c13bd38);
  (*(undefined4 *)(fr0_ - 0x18)) = (*(undefined1 *)(unsigned)0x8c13bd3c);
  (*(undefined4 *)(fr0_ - 0x14)) = (*(undefined1 *)(unsigned)0x8c13bd40);
  (*(undefined4 *)(fr0_ - 0x10)) = (*(undefined1 *)(unsigned)0x8c13bd44);
  (*(undefined4 *)(fr0_ - 0xc)) = (*(undefined1 *)(unsigned)0x8c13bd48);
  uVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0162f8(((undefined1 *)(fr0_ - 0x3c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c01538c(ar5,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c014a94(ar5,0xf,ar6,ar7));
  ar7_00 = 4;
  ar6_00 = 0x8c43654c;
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); FUN_8c016318(((undefined1 *)(fr0_ - 0x3c)),&(*(undefined4 *)(fr0_ - 0x28)),0x8c43654c,4); });
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c016324(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(unsigned)0x8c43655c),ar6_00,ar7_00));
  uVar1 = 0x80000060;
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); FUN_8c015198(((undefined1 *)(fr0_ - 0x3c)),0x80000060,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c01636c(((undefined1 *)(fr0_ - 0x3c)),uVar1,ar6_00,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 64)), free_if_nonnull_wrap_0151a0(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7_00));
  return uVar1;
}

__asm__(".globl _FUN_8c0ba5e0\n.set _FUN_8c0ba5e0, _FUN_8c0ba5e0_def\n");
//@unit 8c0ba6bc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0ba6bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba6bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = '\0';
  if ((*(undefined1 *)(unsigned)0x8c43660c) == '\0') {
    *(unsigned *)0x8c436608 = (unsigned)(unsigned long)((undefined **)(unsigned)0x3f866666);
    (*(undefined4 *)(unsigned)(unsigned)0x8c43660c) = CONCAT31((*(undefined4 *)(unsigned)(unsigned)0x8c43660d),1);
  }
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1f8176(((undefined1 *)(fr0_ - 0x10)),ar5,ar6,ar7));
  if (cVar2 != '\0') {
    *(unsigned *)0x8c436608 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c13bd4c));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c436604) = 0x41980000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c436600) = 0x42480000;
  if ((*(byte *)(fr0_ - 0xc)) < 0xc) {
    if ((*(byte *)(fr0_ - 0xc)) == 0) {
      (*(byte *)(fr0_ - 0xc)) = 0xc;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c13c86b)); *(unsigned *)((((unsigned long)(fr0_ - 36)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 36)) - 8); FUN_8c014334(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7); });
  }
  else {
    if ((*(byte *)(fr0_ - 0xc)) != 0xc) {
      (*(byte *)(fr0_ - 0xc)) = (*(byte *)(fr0_ - 0xc)) - 0xc;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c13c87e)); *(unsigned *)((((unsigned long)(fr0_ - 36)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 36)) - 8); FUN_8c014334(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7); });
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0c4370(((undefined1 *)(unsigned)0x8c2b5628),((undefined1 *)(fr0_ - 0x24)),0,0xe));
  return uVar1;
}

__asm__(".globl _FUN_8c0ba6bc\n.set _FUN_8c0ba6bc, _FUN_8c0ba6bc_def\n");
//@unit 8c0ba844
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0ba844_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba844";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(int *)(unsigned)(ar4 + 0x14) == 0) {
    *(undefined4 *)(unsigned)(ar4 + 4) = 0x43ca0000;
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 4) = 0x43ca0000;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x10) = 0;
  return 0;
}

__asm__(".globl _FUN_8c0ba844\n.set _FUN_8c0ba844, _FUN_8c0ba844_def\n");
//@unit 8c0ba870
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0ba870_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba870";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(int *)(unsigned)(ar4 + 0x14) == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x14) = 1;
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  }
  *(undefined4 *)(unsigned)(ar4 + 4) = 0x43a98000;
  *(undefined4 *)(unsigned)(ar4 + 0x10) = 1;
  return 1;
}

__asm__(".globl _FUN_8c0ba870\n.set _FUN_8c0ba870, _FUN_8c0ba870_def\n");
//@unit 8c0ba898
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0ba898_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba898";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12b36c));
  ar4[1] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0ba898\n.set _FUN_8c0ba898, _FUN_8c0ba898_def\n");
//@unit 8c0ba8ac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 *
free_if_nonnull_wrap_0ba8ac_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "free_if_nonnull_wrap_0ba8ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != (undefined4 *)(unsigned)0x0) && (*ar4 = ((undefined1 *)(unsigned)0x8c12b36c), 0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0ba8ac\n.set _free_if_nonnull_wrap_0ba8ac, _free_if_nonnull_wrap_0ba8ac_def\n");
//@unit 8c0ba8e4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0ba8e4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba8e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 extraout_fr1 = 0;
  char cVar2;
  
  cVar2 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba898(ar4,ar5,ar6,ar7));
  *ar4 = ((undefined1 *)(unsigned)0x8c12b350);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4 + 0x12,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0162f8(ar4 + 0x14,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba354(ar4 + 0x56,ar5,ar6,ar7));
  ar4[2] = 0;
  ar4[0xc] = 2;
  *(undefined2 *)(unsigned)(ar4 + 0xe) = 0xff;
  ar4[0xf] = 1;
  ar4[0x10] = 0;
  ar4[0x11] = 0;
  if (cVar2 == '\0') {
    ar4[0xd] = 0x3f800000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xd) = CONCAT44(0x3f800000,extraout_fr1);
  }
  uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c13bd80);
  ar4[3] = (*(undefined4 *)(unsigned)(unsigned)0x8c13bd7c);
  ar4[4] = uVar1;
  ar4[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c13bd84);
  uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c13bd8c);
  ar4[6] = (*(undefined4 *)(unsigned)(unsigned)0x8c13bd88);
  ar4[7] = uVar1;
  ar4[8] = (*(undefined4 *)(unsigned)(unsigned)0x8c13bd90);
  uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c13bd98);
  ar4[9] = (*(undefined4 *)(unsigned)(unsigned)0x8c13bd94);
  ar4[10] = uVar1;
  ar4[0xb] = (*(undefined4 *)(unsigned)(unsigned)0x8c13bd9c);
  ar4[0x53] = 0;
  ar4[0x54] = 1;
  ar4[0x55] = 0xffffff;
  return ar4;
}

__asm__(".globl _FUN_8c0ba8e4\n.set _FUN_8c0ba8e4, _FUN_8c0ba8e4_def\n");
//@unit 8c0ba9c8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0ba9c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba9c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0ba9c8\n.set _FUN_8c0ba9c8, _FUN_8c0ba9c8_def\n");
//@unit 8c0baa08
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * Class_12b350_m0_0baa08_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b350_m0_0baa08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12b350);
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0ba9c8(ar4 + 0x56,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0151a0(ar4 + 0x14,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x12,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0ba8ac(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12b350_m0_0baa08\n.set _Class_12b350_m0_0baa08, _Class_12b350_m0_0baa08_def\n");
//@unit 8c0baa84
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_12b350_m1_0baa84_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b350_m1_0baa84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  { extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); uVar1 = (undefined4)host_pmf_call((unsigned long)(unsigned)(ar4 + 12 + 12 * *(int *)(unsigned)(unsigned)(ar4 + 8)),(unsigned long)(unsigned)ar4,(unsigned long)(unsigned)ar5,ar6,ar7); }
  return uVar1;
}

__asm__(".globl _Class_12b350_m1_0baa84\n.set _Class_12b350_m1_0baa84, _Class_12b350_m1_0baa84_def\n");
//@unit 8c0baab8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_GRAPHICS_0baac0_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_0baac0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  undefined4 uVar3;
  char *ar5_01;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_fr1 = 0;
  char cVar6;
  
  cVar6 = '\0';
  *ar5 = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x30) = 0;
  uVar2 = 0;
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c257104(0,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235eb4(uVar2,ar5_00,ar6,ar7));
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x34) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x34) = CONCAT44(0x3f800000,extraout_fr1);
  }
  for (iVar5 = 0; iVar5 < 0x12; iVar5 = iVar5 + 1) {
    *(undefined4 *)(unsigned)(iVar5 * 0xc + ar4 + 0x68) = 0;
  }
  uVar4 = 0x12;
  uVar2 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c239170(ar4 + 0x13c,ar4 + 100,0x8c4312a8,0x12));
  iVar5 = ar4 + 0x13c;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x48) + 8))))((int *)(unsigned)(ar4 + 0x48),iVar5,uVar2,uVar4));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x48,iVar5,uVar2,uVar4));
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02100c(0x8c3eb334,((undefined1 *)(unsigned)0x8c13c891),((undefined1 *)(unsigned)0x8c13c89b),uVar2));
  if (iVar5 == 0) {
    uVar2 = 2;
    (vsp = ((unsigned long)(fr0_ - 0)), report_error_message(((undefined1 *)(unsigned)0x8c13c8a4),((undefined1 *)(unsigned)0x8c13c8bf),0,2));
  }
  *(undefined2 *)(unsigned)(ar4 + 0x38) = 0xff;
  *(undefined4 *)(unsigned)(ar4 + 0x3c) = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
  uVar4 = 0x4208;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b7454(((undefined1 *)(unsigned)0x8c13c026),0x8c431a68,0x4208,uVar2));
  *(undefined2 *)(unsigned)((int)ar5 + 0x96) = (*(undefined4 *)(unsigned)(unsigned)0x8c431a86);
  *(undefined2 *)(unsigned)(ar5 + 0x26) = (*(undefined4 *)(unsigned)(unsigned)0x8c431a88);
  *(undefined2 *)(unsigned)((int)ar5 + 0x9a) = (*(undefined4 *)(unsigned)(unsigned)0x8c431a8a);
  *(undefined2 *)(unsigned)(ar5 + 0x27) = (*(undefined4 *)(unsigned)(unsigned)0x8c431a8c);
  *(undefined2 *)(unsigned)((int)ar5 + 0x9e) = (*(undefined4 *)(unsigned)(unsigned)0x8c431a8e);
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    *(undefined1 *)(unsigned)((int)ar5 + iVar5 + 4) = *(undefined1 *)(unsigned)(iVar5 + -0x73bce56e);
  }
  for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
    iVar1 = iVar5 * 10;
    *(undefined2 *)(unsigned)((int)ar5 + iVar5 * 10 + 0xc) = *(undefined2 *)(unsigned)(iVar1 + -0x73bce566);
    *(undefined2 *)(unsigned)((int)ar5 + iVar5 * 10 + 0xe) = *(undefined2 *)(unsigned)(iVar1 + -0x73bce564);
    *(undefined2 *)(unsigned)((int)ar5 + iVar5 * 10 + 0x10) = *(undefined2 *)(unsigned)(iVar1 + -0x73bce562);
    *(undefined2 *)(unsigned)((int)ar5 + iVar5 * 10 + 0x12) = *(undefined2 *)(unsigned)(iVar1 + -0x73bce560);
    *(undefined2 *)(unsigned)((int)ar5 + iVar5 * 10 + 0x14) = *(undefined2 *)(unsigned)(iVar1 + -0x73bce55e);
  }
  uVar3 = 0x8c431ab8;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9f5c(ar5 + 0xb,0x8c431ab8,uVar4,uVar2));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9bb0(ar5,uVar3,uVar4,uVar2));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b93c0(ar5,0,uVar4,uVar2));
  ar5[0x30] = uVar3;
  uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b96e4(ar5,((undefined1 *)(unsigned)0x8c431a7c),uVar4,uVar2));
  ar5[0x31] = uVar4;
  *(int *)(unsigned)(ar4 + 0x150) = *(int *)(unsigned)(ar4 + 0x150) + 1;
  uVar4 = 0x4208;
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b7454(((undefined1 *)(unsigned)0x8c13c026),0x8c431a68,0x4208,uVar2));
  if (iVar5 == 0) {
    uVar4 = 0x8c431a68;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0cd3c8(ar5[0x1f6],ar5,0x8c431a68,uVar2));
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(unsigned)0x8c13c8ce),uVar4,uVar2));
  *(undefined4 *)(unsigned)(ar4 + 0x144) = uVar3;
  ar5_01 = ((undefined1 *)(unsigned)0x8c13c8d9);
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(unsigned)0x8c13c8d9),uVar4,uVar2));
  *(undefined4 *)(unsigned)(ar4 + 0x148) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba37c(ar4 + 0x158,ar5_01,uVar4,uVar2));
  *(undefined4 *)(unsigned)(ar4 + 8) = 1;
  return 1;
}

__asm__(".globl _s_GRAPHICS_0baac0\n.set _s_GRAPHICS_0baac0, _s_GRAPHICS_0baac0_def\n");
//@unit 8c0bad68
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bad68_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined *ar7)

{
  ring[rp++ & 255] = "FUN_8c0bad68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 140; for (int i_ = 0; i_ < 140; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  undefined1 *ar4_01;
  undefined4 ar4_02;
  undefined1 *ar5_00;
  int iVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  undefined8 in_xd0 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 140)), get_field_a510_01f538(0x8c3dd7dc,ar5,ar6,ar7));
  iVar3 = 0;
  ar4_01 = ((undefined1 *)(fr0_ - 0x40));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0162f8(ar4_01,ar5_00,ar6,ar7));
  iVar2 = 1;
  if ((*(undefined1 *)(unsigned)0x8c43660e) == '\0') {
    (*(undefined1 *)(unsigned)0x8c43660d) = '\0';
    (*(undefined1 *)(unsigned)0x8c43660e) = '\x01';
  }
  if (*(int *)(unsigned)(ar4 + 0x30) == 0) {
    if (cVar8 == '\0') {
      dVar5 = CONCAT44D(0x3ca3d70a,*(undefined4 *)(unsigned)(ar4 + 0x34));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x34);
      dVar5 = -3.3816247524205755e-250;
    }
    if (cVar7 == '\0') {
      fVar4 = F32LO(dVar5) - F32HI(dVar5);
    }
    else {
      fVar4 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar8 == '\0') {
      *(float *)(unsigned)(ar4 + 0x34) = fVar4;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x34) = in_xd0;
    }
    (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c235e84(ar4_01,ar5_00,ar6,ar7));
    if (cVar8 == '\0') {
      fVar4 = *(float *)(unsigned)(ar4 + 0x34);
      fVar6 = 0.2;
    }
    else {
      fVar4 = 0.2;
      fVar6 = 2.79699e-42;
    }
    if (cVar7 != '\0' || fVar4 <= fVar6) {
      *(undefined4 *)(unsigned)(ar4 + 0x30) = 2;
    }
  }
  ar4_02 = *(undefined4 *)(unsigned)(ar5 + 0x7cc);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c10003c(ar4_02,ar5_00,ar6,ar7));
  if (iVar1 == 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
  }
  if (*(int *)(unsigned)(ar4 + 0x40) == 1) {
    ar4_02 = *(undefined4 *)(unsigned)(ar5 + 0x7cc);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0ffff4(ar4_02,ar5_00,ar6,ar7));
    if (iVar1 == 1) {
      (vsp = ((unsigned long)(fr0_ - 140)), pack_release_entry_handle(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),ar6,ar7));
      ar5_00 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x148));
      (vsp = ((unsigned long)(fr0_ - 140)), pack_release_entry_handle(0x8c2b59d0,ar5_00,ar6,ar7));
      ar4_02 = 0x8c35468c;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0fa2b8(0x8c35468c,ar5_00,ar6,ar7));
      if (iVar1 == 1) {
        ar4_02 = 0x8c35468c;
        (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0f8214(0x8c35468c,ar5_00,ar6,ar7));
      }
      *(undefined4 *)(unsigned)(ar5 + 0x7dc) = 4;
    }
  }
  if (*(int *)(unsigned)(ar4 + 0x30) == 2) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0b7920(ar4_00,ar5_00,ar6,ar7));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 140)), s_SEAMANDC_USR_0b76dc(ar4_00,ar5_00,ar6,ar7));
    ar4_02 = ar4_00;
  }
  if (iVar2 == 1) {
    if ((*(undefined1 *)(unsigned)0x8c43660d) == '\0') {
      if (iVar3 == 0) {
        if (*(int *)(unsigned)(ar4 + 0x30) != 1) {
          ar5_00 = ar5;
          (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0bcedc(ar4,ar5,ar6,ar7));
        }
        if ((*(int *)(unsigned)(ar4 + 0x14c) == 0) || (*(int *)(unsigned)(ar4 + 0x14c) == 1)) {
          ar5_00 = ar5;
          (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0ba3e0(ar4 + 0x158,ar5,ar6,ar7));
        }
        if (((*(int *)(unsigned)(ar4 + 0x14c) != 0) &&
            (iVar2 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0bb1bc(*(undefined4 *)(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7)), iVar2 == 1)) &&
           (*(int *)(unsigned)(ar4 + 0x30) == 2)) {
          ar5_00 = ((undefined1 *)(fr0_ - 0x4c));
          (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0bb158(ar5,ar5_00,ar6,ar7));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0b77a0(((undefined1 *)(fr0_ - 0x4c)),ar5_00,ar6,ar7));
          if (iVar2 == 0) {
            (*(undefined1 *)(unsigned)0x8c43660d) = '\x01';
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 0x30) = 1;
            iVar2 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0fa2b8(0x8c35468c,ar5_00,ar6,ar7));
            if (iVar2 == 1) {
              (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0f8214(0x8c35468c,ar5_00,ar6,ar7));
              ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x88))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 140)); strcpy(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(unsigned)0x8c13c8e2),ar6,ar7); });
              ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x88))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 140)); strcpy(0x8c4362a0,((undefined1 *)(fr0_ - 0x2c)),ar6,ar7); });
              ar5_00 = ar5;
              ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x88))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 140)); FUN_8c0bf1c8(ar4,ar5,ar6,ar7); });
            }
          }
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0b787c(iVar3,ar5_00,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0b79f0(iVar3,ar5_00,ar6,ar7));
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0b79f0(ar4_02,ar5_00,ar6,ar7));
      ar7 = ((undefined1 *)(unsigned)0x8c13c025);
      ar6 = 0;
      ar5_00 = (undefined1 *)(unsigned)0x5;
      (vsp = ((unsigned long)(fr0_ - 140)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),5,0,((undefined1 *)(unsigned)0x8c13c025)));
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0b79f0(ar4_02,ar5_00,ar6,ar7));
    (*(undefined1 *)(unsigned)0x8c43660d) = '\0';
  }
  if (*(int *)(unsigned)(ar4 + 0x30) == 1) {
    *(int *)(unsigned)(ar4 + 0x154) = *(int *)(unsigned)(ar4 + 0x154) + 0x5000000;
    if (((*(uint *)(unsigned)(ar4 + 0x154) < 0x20000001) &&
        (iVar2 = ar4, iVar3 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0fa2b8(0x8c35468c,ar5_00,ar6,ar7)), iVar3 == 0)) &&
       ((iVar3 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0b6e04(((undefined1 *)(unsigned)0x8c13c8e2),0x8c4362a0,ar6,ar7)), iVar3 == 0 &&
        (*(int *)(unsigned)(ar4 + 0x14c) != 4)))) {
      ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 140)); strcpy(0x8c4362c0,((undefined1 *)(unsigned)0x8c13c025),ar6,ar7); });
      ar6 = 0x8c436280;
      (*(undefined4 *)(unsigned)(unsigned)0x8c43627c) = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0f8320(0x8c35468c,6,0x8c436280,ar7));
    }
    if (0xfeffffff < *(uint *)(unsigned)(ar4 + 0x154)) {
      *(undefined4 *)(unsigned)(ar4 + 8) = 2;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 140)), s_AMB_FOREST_0bb1f2(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), free_if_nonnull_wrap_0151a0(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0bad68\n.set _FUN_8c0bad68, _FUN_8c0bad68_def\n");
//@unit 8c0bb158
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c0bb158_def(int ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bb158";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  
  *ar5 = *(undefined2 *)(unsigned)(0x96 + ar4);
  *(undefined1 *)(unsigned)(ar5 + 1) = *(undefined1 *)(unsigned)(0x98 + ar4);
  *(undefined1 *)(unsigned)((int)ar5 + 3) = *(undefined1 *)(unsigned)(0x99 + ar4);
  *(undefined1 *)(unsigned)(ar5 + 2) = *(undefined1 *)(unsigned)(0x9a + ar4);
  *(undefined1 *)(unsigned)((int)ar5 + 5) = *(undefined1 *)(unsigned)(0x9b + ar4);
  *(undefined1 *)(unsigned)(ar5 + 3) = *(undefined1 *)(unsigned)(0x9c + ar4);
  *(undefined1 *)(unsigned)((int)ar5 + 7) = *(undefined1 *)(unsigned)(0x9d + ar4);
  bVar1 = *(byte *)(unsigned)(0x9e + ar4);
  *(byte *)(unsigned)(ar5 + 4) = bVar1;
  return (uint)bVar1;
}

__asm__(".globl _FUN_8c0bb158\n.set _FUN_8c0bb158, _FUN_8c0bb158_def\n");
//@unit 8c0bb1bc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bb1bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bb1bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01eb94(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0bb1bc\n.set _FUN_8c0bb1bc, _FUN_8c0bb1bc_def\n");
//@unit 8c0bb1e4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_AMB_FOREST_0bb1f2_def(int ar4,int ar5,undefined1 *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "s_AMB_FOREST_0bb1f2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 444; for (int i_ = 0; i_ < 444; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined1 *ar4_00;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  code *pcVar9;
  char *ar6_00;
  code *ar6_01;
  undefined1 *puVar10;
  float fVar11;
  undefined1 *puVar12;
  int iVar13;
  float fVar14;
  ulonglong in_dr0 = 0;
  double dVar15;
  double dVar16;
  float fVar18;
  double dVar17;
  double in_dr2 = 0;
  double in_xd0 = 0;
  bool bVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  char cVar23;
  char cVar24;
  
  cVar24 = '\0';
  cVar23 = '\0';
  if ((*(undefined1 *)(unsigned)0x8c436610) == '\0') {
    (*(undefined1 *)(unsigned)0x8c43660f) = '\0';
    (*(undefined1 *)(unsigned)0x8c436610) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c436618) == '\0') {
    ar6 = ((undefined1 *)(unsigned)0x8c436614);
    in_dr0 = in_dr0 & 0xffffffff;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436614) = (double)CONCAT35((int3)((ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c436614) >> 0x28),0x100000000);
  }
  (*(undefined4 *)(fr0_ - 0x54)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13be00);
  (*(undefined4 *)(fr0_ - 0x50)) = (*(undefined1 *)(unsigned)0x8c13be04);
  (*(undefined4 *)(fr0_ - 0x4c)) = (*(undefined1 *)(unsigned)0x8c13be08);
  (*(undefined4 *)(fr0_ - 0x48)) = (*(undefined1 *)(unsigned)0x8c13be0c);
  (*(undefined4 *)(fr0_ - 0x44)) = (*(undefined1 *)(unsigned)0x8c13be10);
  (*(undefined4 *)(fr0_ - 0x40)) = (*(undefined1 *)(unsigned)0x8c13be14);
  (*(undefined4 *)(fr0_ - 0x3c)) = (*(undefined1 *)(unsigned)0x8c13be18);
  (*(undefined4 *)(fr0_ - 0x38)) = (*(undefined1 *)(unsigned)0x8c13be1c);
  uVar1 = (*(undefined1 *)(unsigned)0x8c13be18);
  (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c0162f8(((undefined1 *)(fr0_ - 0x78)),(*(undefined1 *)(unsigned)0x8c13be18),ar6,ar7));
  if ((*(undefined1 *)(unsigned)0x8c4366c4) == '\0') {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), rand(((undefined1 *)(unsigned)0x8c4366c4),uVar1,ar6,ar7));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366c0) = (float)(vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar1,0x2e,ar6,ar7));
    uVar1 = 1;
    (*(undefined1 *)(unsigned)0x8c4366c4) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c4366d0) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366cc) = 0;
    (*(undefined1 *)(unsigned)0x8c4366d0) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c4366d8) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366d4) = 0;
    ar7 = ((undefined1 *)(unsigned)0x8c4366d8);
    uVar1 = 1;
    (*(undefined1 *)(unsigned)0x8c4366d8) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c4366e0) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366dc) = 1;
    (*(undefined1 *)(unsigned)0x8c4366e0) = '\x01';
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), get_field_a510_01f538(0x8c3dd7dc,uVar1,ar6,ar7));
  if ((*(undefined1 *)(unsigned)0x8c4366ec) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366e8) = 0;
    (*(undefined1 *)(unsigned)0x8c4366ec) = '\x01';
  }
  puVar10 = (undefined1 *)(unsigned)0x4;
  uVar8 = 0x8c43661c;
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(((undefined1 *)(fr0_ - 0x78)),&(*(undefined4 *)(fr0_ - 0x54)),0x8c43661c,4); });
  (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(((undefined1 *)(fr0_ - 0x78)),&(*(undefined2 *)(fr0_ - 0x64)),uVar8,puVar10));
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c015198(((undefined1 *)(fr0_ - 0x78)),0x80000060,uVar8,puVar10); });
  if (*(int *)(unsigned)(ar4 + 0x150) != (*(undefined4 *)(unsigned)(unsigned)0x8c4366d4)) {
    (*(undefined1 *)(unsigned)0x8c43660f) = '\0';
    puVar10 = ((undefined1 *)(unsigned)0x8c4366d4);
    uVar8 = 0x150;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366d4) = *(int *)(unsigned)(ar4 + 0x150);
  }
  (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c0b9d14(ar5,((undefined1 *)(fr0_ - 0x84)),uVar8,puVar10));
  pcVar9 = (code *)((undefined1 *)(unsigned)0x8c43660f);
  if ((*(undefined1 *)(unsigned)0x8c43660f) == '\0') {
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c43663c) + iVar2 * 4) = 0xffffff;
      *(undefined4 *)(unsigned)(iVar2 * 4 + -0x73bc99b4) = 0xffffff;
      *(undefined4 *)(unsigned)(iVar2 * 4 + -0x73bc9984) = 0xffffff;
      *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c43668c) + iVar2 * 4) = 0xffffffff;
      *(undefined4 *)(unsigned)(iVar2 * 4 + -0x73bc9964) = 0xffffff;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c43662c) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c43662e) = 0xff;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436630) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436632) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436634) = 0xff;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436636) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436638) = 0xff;
    (*(undefined4 *)(unsigned)(unsigned)0x8c43663a) = 0xff;
    puVar10 = (undefined1 *)(unsigned)0x4;
    pcVar9 = (code *)0x8c43661c;
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,0,0x8c43661c,4); });
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c015198(ar4 + 0x50,0x80000060,pcVar9,puVar10); });
    iVar2 = 0;
    for (iVar20 = 0; iVar20 < 8; iVar20 = iVar20 + 1) {
      puVar10 = (undefined1 *)(unsigned)(ar5 + iVar20);
      iVar2 = (uint)(byte)puVar10[4] + iVar2;
    }
    puVar3 = ((undefined1 *)(fr0_ - 0x84));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c0b9d14(ar5,puVar3,pcVar9,puVar10));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366ac) = (vsp = ((unsigned long)(fr0_ - 444)), get_field_c8_0bced0(ar5,puVar3,pcVar9,puVar10));
    ar4_00 = ((undefined1 *)(unsigned)0x8c4366ac);
    for (puVar12 = (undefined1 *)(unsigned)0x0; (int)puVar12 < 0x14; puVar12 = puVar12 + 1) {
      puVar3 = puVar12;
    }
    for (iVar20 = 0; iVar20 < (int)(uint)(*(byte *)(fr0_ - 0x7e)); iVar20 = iVar20 + 1) {
      pcVar9 = ((void *)0x8c014200);
      (vsp = ((unsigned long)(fr0_ - 444)), rand(ar4_00,puVar3,((void *)0x8c014200),puVar10));
    }
    if (cVar23 == '\0') {
      dVar16 = CONCAT44D((float)(*(byte *)(fr0_ - 0x80)),SUB84(in_dr2,0));
    }
    else {
      dVar16 = (double)(*(byte *)(fr0_ - 0x80));
    }
    if (cVar24 == '\0') {
      dVar17 = CONCAT44D(0x42700000,(int)in_dr0);
    }
    else {
      dVar17 = 6.64735386069639e-312;
    }
    if (cVar23 == '\0') {
      dVar15 = CONCAT44D((float)(*(byte *)(fr0_ - 0x7f)),SUB84(dVar17,0));
      in_dr2 = CONCAT44D(F32HI(dVar16) *
                                F32HI(dVar17) + (float)(*(byte *)(fr0_ - 0x7f)),
                                SUB84(dVar16,0));
    }
    else {
      dVar15 = (double)(*(byte *)(fr0_ - 0x7f));
      in_dr2 = dVar16 * dVar17 + dVar15;
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x40200000,SUB84(dVar15,0));
    }
    else {
      dVar16 = 7.63971638255348e-311;
    }
    if (cVar23 == '\0') {
      in_dr2 = CONCAT44D(F32HI(in_dr2) *
                                F32HI(dVar16),SUB84(in_dr2,0));
    }
    else {
      in_dr2 = in_dr2 * dVar16;
    }
    fVar11 = (float)(*(byte *)(fr0_ - 0x7f));
    if (cVar24 == '\0') {
      fVar14 = 60.0;
    }
    else {
      fVar11 = 60.0;
      fVar14 = 4.38606e-43;
    }
    if (cVar23 == '\0') {
      fVar11 = fVar11 * fVar14 + (float)(*(byte *)(fr0_ - 0x7e));
      dVar16 = CONCAT44D((float)(*(byte *)(fr0_ - 0x7e)),fVar11);
      fVar11 = F32HI(in_dr2) - fVar11;
      in_dr2 = CONCAT44D(fVar11,SUB84(in_dr2,0));
      *(unsigned *)0x8c4366b0 = (unsigned)(unsigned long)((undefined1 *)(unsigned)(int)fVar11);
    }
    else {
      dVar16 = (double)(*(byte *)(fr0_ - 0x7e)) + (double)(*(byte *)(fr0_ - 0x7e));
      in_dr2 = in_dr2 - dVar16;
      *(unsigned *)0x8c4366b0 = (unsigned)(unsigned long)((undefined1 *)(unsigned)(int)in_dr2);
    }
    uVar8 = SUB84(dVar16,0);
    if ((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4366b0) < 0) {
      *(unsigned *)0x8c4366b0 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4366b0) + 0xe10);
    }
    uVar6 = (vsp = ((unsigned long)(fr0_ - 444)), rand(((undefined4 *)(unsigned long)*(unsigned *)0x8c4366b0),puVar3,pcVar9,puVar10));
    uVar4 = 0x3c;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366b4) = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar6,0x3c,pcVar9,puVar10));
    uVar6 = (vsp = ((unsigned long)(fr0_ - 444)), rand(((undefined1 *)(unsigned)0x8c4366b4),uVar4,pcVar9,puVar10));
    uVar4 = 0x41;
    iVar20 = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar6,0x41,pcVar9,puVar10));
    if (cVar23 == '\0') {
      dVar16 = CONCAT44D((float)iVar20,uVar8);
    }
    else {
      dVar16 = (double)iVar20;
    }
    fVar11 = F32HI(dVar16);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = fVar11;
    if (cVar24 != '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = SUB84(dVar16,0);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = fVar11;
    }
    uVar8 = (vsp = ((unsigned long)(fr0_ - 444)), rand(uVar6,uVar4,pcVar9,puVar10));
    uVar6 = SUB84(dVar16,0);
    iVar20 = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar8,0x46,pcVar9,puVar10));
    if (cVar23 == '\0') {
      dVar16 = CONCAT44D((float)iVar20,uVar6);
    }
    else {
      dVar16 = (double)iVar20;
    }
    fVar11 = F32HI(dVar16);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = SUB84(dVar16,0);
    if (cVar24 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = fVar11;
      fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366c0);
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366c0) = fVar11;
    if (iVar2 == 1) {
      if (cVar24 == '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = 0.0;
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366c0) = 0.0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = SUB84(dVar16,0);
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = 0.0;
      dVar16 = (double)(D2U(dVar16) & 0xffffffff);
      iVar2 = -((uint)(*(byte *)(fr0_ - 0x7f)) * 0x3c + (uint)(*(byte *)(fr0_ - 0x7e)));
      *(unsigned *)0x8c4366b0 = (unsigned)(unsigned long)((undefined1 *)(unsigned)(iVar2 + 0x708));
      if ((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4366b0) < 0) {
        *(unsigned *)0x8c4366b0 = (unsigned)(unsigned long)((undefined1 *)(unsigned)(iVar2 + 0x1518));
      }
    }
    fVar11 = F32LO(dVar16);
    if (4 < (*(undefined4 *)(unsigned)(unsigned)0x8c4366ac)) {
      pcVar9 = (code *)((undefined1 *)(unsigned)0x8c4366b8);
      if (cVar24 == '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = 60.0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = 70.0;
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = 60.0;
        fVar11 = 70.0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = 70.0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366c0) = 90.0;
      }
    }
    if (10 < (*(undefined4 *)(unsigned)(unsigned)0x8c4366ac)) {
      if (cVar24 == '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = 60.0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = 90.0;
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = 60.0;
        fVar11 = 90.0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = 90.0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366c0) = 1.1911e-42;
      }
    }
    if ((((*(int *)(unsigned)(ar5 + 0x30) == 0x25) || (*(int *)(unsigned)(ar5 + 0x34) == 0x25)) ||
        (*(int *)(unsigned)(ar5 + 0x38) == 0x25)) && (*(char *)(unsigned)(ar5 + 0x69) == '\0')) {
      if (cVar24 == '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = 0.0;
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366c0) = 0.0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = fVar11;
      }
      iVar2 = -((uint)(*(byte *)(fr0_ - 0x7f)) * 0x3c + (uint)(*(byte *)(fr0_ - 0x7e)));
      *(unsigned *)0x8c4366b0 = (unsigned)(unsigned long)((undefined1 *)(unsigned)(iVar2 + 0x352));
      if ((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4366b0) < 0) {
        puVar10 = (undefined1 *)(unsigned)(iVar2 + 0x1162);
        *(unsigned *)0x8c4366b0 = (unsigned)(unsigned long)(puVar10);
      }
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366c8) = 0;
    (*(undefined1 *)(unsigned)0x8c43660f) = '\x01';
  }
  ar6_00 = (char *)(unsigned)pcVar9;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4366e8) != 0) {
    if (cVar24 == '\0') {
      fVar14 = 72.0;
      fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
    }
    else {
      in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
      fVar11 = 72.0;
      fVar14 = 4.54021e-43;
    }
    if (cVar23 == '\0' && fVar11 < fVar14) {
      (vsp = ((unsigned long)(fr0_ - 444)), pack_release_entry_handle(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),pcVar9,puVar10));
      ar6_00 = (char *)(unsigned)pcVar9;
    }
    (vsp = ((unsigned long)(fr0_ - 444)), pack_release_entry_handle(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x148),ar6_00,puVar10));
  }
  if (cVar24 == '\0') {
    fVar14 = 30.0;
    fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
  }
  else {
    in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
    fVar11 = 30.0;
    fVar14 = -1.6662342e+14;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4366e8) = uVar1;
  if (cVar23 == '\0' && fVar11 < fVar14) {
    puVar10 = (undefined1 *)(unsigned)0x898;
    ar6_00 = (char *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),0,0x898));
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),ar6_00,puVar10));
  if (iVar2 == 2) {
    ar6_00 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 444)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(unsigned)0x8c13c8ce),ar6_00,puVar10));
    puVar10 = (undefined1 *)(unsigned)0x144;
    *(unsigned *)(unsigned)(ar4 + 0x144) = ar6_00;
  }
  else {
    if (cVar24 == '\0') {
      fVar14 = 65.0;
      fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
    }
    else {
      in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
      fVar11 = 65.0;
      fVar14 = 30.0;
    }
    if (cVar23 != '\0' || fVar14 <= fVar11) {
      if (cVar24 == '\0') {
        fVar14 = 72.0;
        fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
      }
      else {
        in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
        fVar11 = 72.0;
        fVar14 = 4.54021e-43;
      }
      if (cVar23 == '\0' && fVar11 < fVar14) {
        (vsp = ((unsigned long)(fr0_ - 444)), pack_release_entry_handle(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),ar6_00,puVar10));
      }
    }
    else {
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x41f00000,(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
      }
      else {
        in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
        dVar16 = 1.7021678581004447e+27;
      }
      if (cVar23 == '\0') {
        fVar11 = F32LO(dVar16) - F32HI(dVar16);
      }
      else {
        fVar11 = SUB84(dVar16 - dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x45960000,fVar11);
      }
      else {
        dVar16 = 15032387762.75;
      }
      if (cVar23 == '\0') {
        fVar11 = F32LO(dVar16) * F32HI(dVar16);
      }
      else {
        fVar11 = SUB84(dVar16 * dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x420c0000,fVar11);
      }
      else {
        dVar16 = 3.853451644918994e+24;
      }
      if (cVar23 == '\0') {
        fVar11 = F32LO(dVar16) / F32HI(dVar16);
      }
      else {
        fVar11 = SUB84(dVar16 / dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x45098000,fVar11);
      }
      else {
        dVar16 = 6.880988880521e-312;
      }
      if (cVar23 == '\0') {
        puVar10 = (undefined1 *)(unsigned)(int)(F32LO(dVar16) + F32HI(dVar16));
      }
      else {
        puVar10 = (undefined1 *)(unsigned)(int)(dVar16 + dVar16);
      }
      ar6_00 = (char *)(unsigned)0x0;
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),0,puVar10));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),ar6_00,puVar10));
      if (iVar2 == 2) {
        puVar10 = (undefined1 *)(unsigned)0x8ea;
        ar6_00 = ((undefined1 *)(unsigned)0x8c13c8ce);
        uVar1 = pack_acquire_entry_handle
                          (0x8c2b59d0,((undefined1 *)(unsigned)0x8c13c8ce),((undefined1 *)(unsigned)0x8c13c8ce),0x8ea);
        *(undefined4 *)(unsigned)(ar4 + 0x144) = uVar1;
      }
    }
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x148),ar6_00,puVar10));
  if (iVar2 == 2) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(unsigned)0x8c13c8d9),ar6_00,puVar10));
    *(undefined4 *)(unsigned)(ar4 + 0x148) = uVar1;
  }
  if (cVar24 == '\0') {
    fVar14 = 50.0;
    fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
  }
  else {
    in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
    fVar11 = 50.0;
    fVar14 = 9.80909e-42;
  }
  if (cVar23 != '\0' || fVar14 <= fVar11) {
    if (cVar24 == '\0') {
      fVar14 = 75.0;
      fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
    }
    else {
      in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
      fVar11 = 75.0;
      fVar14 = 5300.0;
    }
    if (cVar23 != '\0' || fVar14 <= fVar11) {
      fVar11 = 2.38221e-42;
      iVar2 = 0;
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x148),0,0x6a4));
    }
    else {
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366b8),0x42960000);
      }
      else {
        dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
        in_xd0 = 3.3463072828401675e+27;
      }
      if (cVar23 == '\0') {
        fVar11 = F32LO(dVar16) - F32HI(dVar16);
      }
      else {
        fVar11 = SUB84(dVar16 - dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x45a5a000,fVar11);
      }
      else {
        dVar16 = 805306507.2939453;
      }
      if (cVar23 == '\0') {
        fVar11 = F32LO(dVar16) * F32HI(dVar16);
      }
      else {
        fVar11 = SUB84(dVar16 * dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x41c80000,fVar11);
      }
      else {
        dVar16 = 3.8723412565841415e+23;
      }
      if (cVar23 == '\0') {
        fVar11 = F32LO(dVar16) / F32HI(dVar16);
      }
      else {
        fVar11 = SUB84(dVar16 / dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x44d48000,fVar11);
      }
      else {
        dVar16 = 6.96585155124395e-312;
      }
      if (cVar23 == '\0') {
        fVar11 = (float)(int)(F32LO(dVar16) + F32HI(dVar16));
      }
      else {
        fVar11 = (float)(int)(dVar16 + dVar16);
      }
      iVar2 = 0;
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x148),0,fVar11));
    }
  }
  else {
    fVar11 = 9.80909e-42;
    iVar2 = 0;
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x148),0,7000));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4366c8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4366c8) + 1;
  if (2 < (*(undefined4 *)(unsigned)(unsigned)0x8c4366c8)) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366c8) = 0;
  }
  if (cVar24 == '\0') {
    dVar16 = CONCAT44D(0x3dcccccd,(*(undefined4 *)(unsigned)(unsigned)0x8c436614));
  }
  else {
    dVar16 = 1.4411521461875377e+18;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c436614);
  }
  if (cVar23 == '\0') {
    fVar14 = F32LO(dVar16) + F32HI(dVar16);
  }
  else {
    fVar14 = SUB84(dVar16 + dVar16,0);
  }
  if (cVar24 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c436614) = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c436618),fVar14);
    dVar16 = CONCAT44D(0x43b40000,fVar14);
  }
  else {
    dVar16 = 6.64745876893557e-312;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436614) = in_xd0;
  }
  dVar17 = (*(undefined4 *)(unsigned)(unsigned)0x8c436614);
  if ((cVar23 != '\0' || F32HI(dVar16) <= SUB84(dVar16,0)) &&
     (dVar16 = (double)(D2U(dVar16) & 0xffffffff), dVar17 = dVar16, cVar24 == '\0')) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c436614) = (double)((ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c436614) & 0xffffffff00000000);
    dVar17 = (*(undefined4 *)(unsigned)(unsigned)0x8c436614);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c436614) = dVar17;
  puVar10 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366b0) + (uint)(*(byte *)(fr0_ - 0x7f)) * 0x3c + (uint)(*(byte *)(fr0_ - 0x7e));
  if ((undefined1 *)(unsigned)0xe10 < puVar10) {
    puVar10 = puVar10 + -0xe10;
  }
  if ((puVar10 < (undefined1 *)(unsigned)0x272) || (iVar2 = 0x47e, (undefined1 *)(unsigned)0x47d < puVar10)) {
    if ((puVar10 < (undefined1 *)(unsigned)0xaf1) || ((undefined1 *)(unsigned)0xbe9 < puVar10)) {
      if ((puVar10 < (undefined1 *)(unsigned)0x47e) || ((undefined1 *)(unsigned)0xaf0 < puVar10)) {
        iVar20 = 0;
      }
      else {
        iVar20 = 0xaf;
      }
    }
    else {
      if (cVar23 == '\0') {
        in_dr2 = CONCAT44D((float)(int)puVar10,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = (double)(int)puVar10;
      }
      dVar17 = (double)(D2U(dVar16) & 0xffffffff);
      fVar14 = F32HI(in_dr2);
      if (cVar23 == '\0') {
        bVar19 = fVar14 < 0.0;
      }
      else {
        bVar19 = in_dr2 < dVar17;
      }
      if (bVar19) {
        if (cVar24 == '\0') {
          dVar17 = CONCAT44D(0x4f800000,SUB84(dVar16,0));
        }
        else {
          dVar17 = 3.7023358954276744e+25;
        }
        if (cVar23 == '\0') {
          in_dr2 = CONCAT44D(fVar14 + F32HI(dVar17),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + dVar17;
        }
      }
      if (cVar24 == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),0x453ea000);
      }
      else {
        in_xd0 = 1.1709360889934643e+17;
      }
      if (cVar23 == '\0') {
        fVar14 = F32LO(dVar17) - F32HI(in_dr2);
      }
      else {
        fVar14 = SUB84(dVar17 - in_dr2,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x437a0000,fVar14);
      }
      else {
        dVar16 = 4.3628627050496e+15;
      }
      if (cVar23 == '\0') {
        fVar14 = F32LO(dVar16) / F32HI(dVar16);
      }
      else {
        fVar14 = SUB84(dVar16 / dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x432f0000,fVar14);
      }
      else {
        dVar16 = 1.274788992873159e-19;
      }
      if (cVar23 == '\0') {
        fVar18 = F32HI(dVar16);
        fVar14 = F32LO(dVar16) * fVar18;
        dVar16 = CONCAT44D(fVar18,fVar14);
        iVar20 = (int)fVar14;
      }
      else {
        dVar16 = dVar16 * dVar16;
        iVar20 = (int)dVar16;
      }
    }
  }
  else {
    fVar14 = (float)(int)puVar10;
    if (cVar23 == '\0' && fVar14 < 0.0) {
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x4f800000,fVar14);
      }
      else {
        dVar16 = 1.3028015187336731e+20;
      }
      if (cVar23 == '\0') {
        fVar14 = F32LO(dVar16) + F32HI(dVar16);
      }
      else {
        fVar14 = SUB84(dVar16 + dVar16,0);
      }
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x441c4000,fVar14);
    }
    else {
      dVar16 = 4.438748728837905e+19;
    }
    if (cVar23 == '\0') {
      fVar14 = F32LO(dVar16) - F32HI(dVar16);
    }
    else {
      fVar14 = SUB84(dVar16 - dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x44034000,fVar14);
    }
    else {
      dVar16 = 4362862709547008.0;
    }
    if (cVar23 == '\0') {
      fVar14 = F32LO(dVar16) / F32HI(dVar16);
    }
    else {
      fVar14 = SUB84(dVar16 / dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x432f0000,fVar14);
    }
    else {
      dVar16 = 1.5458488417764263e-19;
    }
    if (cVar23 == '\0') {
      fVar18 = F32HI(dVar16);
      fVar14 = F32LO(dVar16) * fVar18;
      dVar16 = CONCAT44D(fVar18,fVar14);
      iVar20 = (int)fVar14;
    }
    else {
      dVar16 = dVar16 * dVar16;
      iVar20 = (int)dVar16;
    }
  }
  if ((puVar10 < (undefined1 *)(unsigned)0x2ef) || ((undefined1 *)(unsigned)0x47d < puVar10)) {
    if ((puVar10 < (undefined1 *)(unsigned)0xa8d) || ((undefined1 *)(unsigned)0xbb7 < puVar10)) {
      if ((puVar10 < (undefined1 *)(unsigned)0x47e) || ((undefined1 *)(unsigned)0xa8c < puVar10)) {
        iVar21 = 0;
      }
      else {
        iVar21 = 0xaf;
      }
    }
    else {
      if (cVar23 == '\0') {
        in_dr2 = CONCAT44D((float)(int)puVar10,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = (double)(int)puVar10;
      }
      dVar17 = (double)(D2U(dVar16) & 0xffffffff);
      fVar14 = F32HI(in_dr2);
      if (cVar23 == '\0') {
        bVar19 = fVar14 < 0.0;
      }
      else {
        bVar19 = in_dr2 < dVar17;
      }
      if (bVar19) {
        if (cVar24 == '\0') {
          dVar17 = CONCAT44D(0x4f800000,SUB84(dVar16,0));
        }
        else {
          dVar17 = 3.324546576798103e+25;
        }
        if (cVar23 == '\0') {
          in_dr2 = CONCAT44D(fVar14 + F32HI(dVar17),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + dVar17;
        }
      }
      if (cVar24 == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),0x453b8000);
      }
      else {
        in_xd0 = 3.963168415463506e+17;
      }
      if (cVar23 == '\0') {
        fVar14 = F32LO(dVar17) - F32HI(in_dr2);
      }
      else {
        fVar14 = SUB84(dVar17 - in_dr2,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x43960000,fVar14);
      }
      else {
        dVar16 = 4362862705967104.0;
      }
      if (cVar23 == '\0') {
        fVar14 = F32LO(dVar16) / F32HI(dVar16);
      }
      else {
        fVar14 = SUB84(dVar16 / dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x432f0000,fVar14);
      }
      else {
        dVar16 = 2.041356454491563e-18;
      }
      if (cVar23 == '\0') {
        fVar18 = F32HI(dVar16);
        fVar14 = F32LO(dVar16) * fVar18;
        dVar16 = CONCAT44D(fVar18,fVar14);
        iVar21 = (int)fVar14;
      }
      else {
        dVar16 = dVar16 * dVar16;
        iVar21 = (int)dVar16;
      }
    }
  }
  else {
    fVar14 = (float)(int)puVar10;
    if (cVar23 == '\0' && fVar14 < 0.0) {
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x4f800000,fVar14);
      }
      else {
        dVar16 = 5.072855494381871e+20;
      }
      if (cVar23 == '\0') {
        fVar14 = F32LO(dVar16) + F32HI(dVar16);
      }
      else {
        fVar14 = SUB84(dVar16 + dVar16,0);
      }
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x443b8000,fVar14);
    }
    else {
      dVar16 = 3.458765099932582e+18;
    }
    if (cVar23 == '\0') {
      fVar14 = F32LO(dVar16) - F32HI(dVar16);
    }
    else {
      fVar14 = SUB84(dVar16 - dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x43c80000,fVar14);
    }
    else {
      dVar16 = 4362862707605504.0;
    }
    if (cVar23 == '\0') {
      fVar14 = F32LO(dVar16) / F32HI(dVar16);
    }
    else {
      fVar14 = SUB84(dVar16 / dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x432f0000,fVar14);
    }
    else {
      dVar16 = 1.5458488417764263e-19;
    }
    if (cVar23 == '\0') {
      fVar18 = F32HI(dVar16);
      fVar14 = F32LO(dVar16) * fVar18;
      dVar16 = CONCAT44D(fVar18,fVar14);
      iVar21 = (int)fVar14;
    }
    else {
      dVar16 = dVar16 * dVar16;
      iVar21 = (int)dVar16;
    }
  }
  if ((puVar10 < (undefined1 *)(unsigned)0x272) || ((undefined1 *)(unsigned)0x44b < puVar10)) {
    if ((puVar10 < (undefined1 *)(unsigned)0x9c5) || ((undefined1 *)(unsigned)0xabd < puVar10)) {
      if ((puVar10 < (undefined1 *)(unsigned)0x44c) || ((undefined1 *)(unsigned)0x9c4 < puVar10)) {
        (*(int *)(fr0_ - 0x88)) = 0;
      }
      else {
        (*(int *)(fr0_ - 0x88)) = 0x87;
      }
    }
    else {
      if (cVar23 == '\0') {
        in_dr2 = CONCAT44D((float)(int)puVar10,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = (double)(int)puVar10;
      }
      dVar17 = (double)(D2U(dVar16) & 0xffffffff);
      fVar14 = F32HI(in_dr2);
      if (cVar23 == '\0') {
        bVar19 = fVar14 < 0.0;
      }
      else {
        bVar19 = in_dr2 < dVar17;
      }
      if (bVar19) {
        if (cVar24 == '\0') {
          dVar17 = CONCAT44D(0x4f800000,SUB84(dVar16,0));
        }
        else {
          dVar17 = 1.6849406475168257e+25;
        }
        if (cVar23 == '\0') {
          in_dr2 = CONCAT44D(fVar14 + F32HI(dVar17),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + dVar17;
        }
      }
      if (cVar24 == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),0x452be000);
      }
      else {
        in_xd0 = 1.1709360887968563e+17;
      }
      if (cVar23 == '\0') {
        fVar14 = F32LO(dVar17) - F32HI(in_dr2);
      }
      else {
        fVar14 = SUB84(dVar17 - in_dr2,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x437a0000,fVar14);
      }
      else {
        dVar16 = 809240699551744.0;
      }
      if (cVar23 == '\0') {
        fVar14 = F32LO(dVar16) / F32HI(dVar16);
      }
      else {
        fVar14 = SUB84(dVar16 / dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x43070000,fVar14);
      }
      else {
        dVar16 = 6.45642313192963e-312;
      }
      if (cVar23 == '\0') {
        (*(int *)(fr0_ - 0x88)) = (int)(F32LO(dVar16) * F32HI(dVar16));
      }
      else {
        (*(int *)(fr0_ - 0x88)) = (int)(dVar16 * dVar16);
      }
    }
  }
  else {
    fVar14 = (float)(int)puVar10;
    if (cVar23 == '\0' && fVar14 < 0.0) {
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x4f800000,fVar14);
      }
      else {
        dVar16 = 1.3028015187336731e+20;
      }
      if (cVar23 == '\0') {
        fVar14 = F32LO(dVar16) + F32HI(dVar16);
      }
      else {
        fVar14 = SUB84(dVar16 + dVar16,0);
      }
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x441c4000,fVar14);
    }
    else {
      dVar16 = 1.7005594533204853e+19;
    }
    if (cVar23 == '\0') {
      fVar14 = F32LO(dVar16) - F32HI(dVar16);
    }
    else {
      fVar14 = SUB84(dVar16 - dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x43ed8000,fVar14);
    }
    else {
      dVar16 = 809240700497920.0;
    }
    if (cVar23 == '\0') {
      fVar14 = F32LO(dVar16) / F32HI(dVar16);
    }
    else {
      fVar14 = SUB84(dVar16 / dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x43070000,fVar14);
    }
    else {
      dVar16 = 6.45642313192963e-312;
    }
    if (cVar23 == '\0') {
      (*(int *)(fr0_ - 0x88)) = (int)(F32LO(dVar16) * F32HI(dVar16));
    }
    else {
      (*(int *)(fr0_ - 0x88)) = (int)(dVar16 * dVar16);
    }
  }
  if (cVar23 == '\0') {
    dVar16 = CONCAT44D((float)iVar20,SUB84(in_dr2,0));
  }
  else {
    dVar16 = (double)iVar20;
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366b8),0x42c80000);
  }
  else {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
    in_xd0 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = F32LO(dVar17) - F32HI(dVar17);
  }
  else {
    fVar14 = SUB84(dVar17 - dVar17,0);
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x42c80000,fVar14);
  }
  else {
    dVar17 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = F32LO(dVar17) / F32HI(dVar17);
    dVar16 = CONCAT44D(F32HI(dVar16) * fVar14,SUB84(dVar16,0));
  }
  else {
    fVar14 = SUB84(dVar17 / dVar17,0);
    dVar16 = dVar16 * (dVar17 / dVar17);
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x42a00000,fVar14);
  }
  else {
    dVar17 = 281475046572032.0;
  }
  if (cVar23 == '\0') {
    iVar20 = (int)(F32HI(dVar16) + F32HI(dVar17));
    dVar16 = CONCAT44D((float)iVar21,SUB84(dVar16,0));
  }
  else {
    iVar20 = (int)(dVar16 + dVar17);
    dVar16 = (double)iVar21;
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366b8),0x42c80000);
  }
  else {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
    in_xd0 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = F32LO(dVar17) - F32HI(dVar17);
  }
  else {
    fVar14 = SUB84(dVar17 - dVar17,0);
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x42c80000,fVar14);
  }
  else {
    dVar17 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = F32LO(dVar17) / F32HI(dVar17);
    dVar16 = CONCAT44D(F32HI(dVar16) * fVar14,SUB84(dVar16,0));
  }
  else {
    fVar14 = SUB84(dVar17 / dVar17,0);
    dVar16 = dVar16 * (dVar17 / dVar17);
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x42a00000,fVar14);
  }
  else {
    dVar17 = 281475046572032.0;
  }
  if (cVar23 == '\0') {
    iVar21 = (int)(F32HI(dVar16) + F32HI(dVar17));
    dVar16 = CONCAT44D((float)(*(int *)(fr0_ - 0x88)),SUB84(dVar16,0));
  }
  else {
    iVar21 = (int)(dVar16 + dVar17);
    dVar16 = (double)(*(int *)(fr0_ - 0x88));
  }
  puVar10 = ((undefined1 *)(unsigned)0x8c4366b8);
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366b8),0x42c80000);
  }
  else {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
    in_xd0 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = F32LO(dVar17) - F32HI(dVar17);
  }
  else {
    fVar14 = SUB84(dVar17 - dVar17,0);
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x42c80000,fVar14);
  }
  else {
    dVar17 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = F32LO(dVar17) / F32HI(dVar17);
    dVar16 = CONCAT44D(F32HI(dVar16) * fVar14,SUB84(dVar16,0));
  }
  else {
    fVar14 = SUB84(dVar17 / dVar17,0);
    dVar16 = dVar16 * (dVar17 / dVar17);
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x42f00000,fVar14);
  }
  else {
    dVar17 = -5.48612543682247e+303;
  }
  if (cVar23 == '\0') {
    fVar14 = F32HI(dVar16) + F32HI(dVar17);
    dVar16 = CONCAT44D(fVar14,SUB84(dVar16,0));
    iVar22 = (int)fVar14;
  }
  else {
    dVar16 = dVar16 + dVar17;
    iVar22 = (int)dVar16;
  }
  uVar1 = SUB84(dVar16,0);
  for (iVar13 = 0; iVar13 < 4; iVar13 = iVar13 + 1) {
    puVar10 = (undefined1 *)(unsigned)(iVar13 * 4);
    *(int *)(unsigned)(puVar10 + -0x73bc99e4) = iVar20 * 0x10000 + -0x1000000 + iVar21 * 0x100 + iVar22;
  }
  uVar5 = (uint)(*(byte *)(fr0_ - 0x7f));
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4366b4) == uVar5) {
    uVar8 = (vsp = ((unsigned long)(fr0_ - 444)), rand(puVar10,uVar5,iVar2,fVar11));
    uVar6 = 0x3c;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366b4) = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar8,0x3c,iVar2,fVar11));
    uVar8 = (vsp = ((unsigned long)(fr0_ - 444)), rand(((undefined1 *)(unsigned)0x8c4366b4),uVar6,iVar2,fVar11));
    uVar5 = 0xb;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar8,0xb,iVar2,fVar11));
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x41200000,(float)iVar2);
    }
    else {
      dVar16 = 5.330973659922055e-35;
    }
    if (cVar23 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = F32LO(dVar16) * F32HI(dVar16);
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = SUB84(dVar16 * dVar16,0);
    }
    if (cVar24 != '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = SUB84(in_xd0,0);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4366c0) = F32HI(in_xd0);
    }
  }
  if (cVar24 == '\0') {
    dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4366bc));
  }
  else {
    in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366c0),(*(undefined4 *)(unsigned)(unsigned)0x8c4366bc));
    dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
  }
  if (cVar23 == '\0') {
    fVar14 = F32LO(dVar16) - F32HI(dVar16);
  }
  else {
    fVar14 = SUB84(dVar16 - dVar16,0);
  }
  if (cVar24 == '\0') {
    dVar16 = CONCAT44D(0x38d1b717,fVar14);
  }
  else {
    dVar16 = 85899360465.7152;
  }
  if (cVar23 == '\0') {
    fVar14 = F32LO(dVar16) * F32HI(dVar16);
  }
  else {
    fVar14 = SUB84(dVar16 * dVar16,0);
  }
  if (cVar24 == '\0') {
    dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366b8),fVar14);
  }
  else {
    dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
  }
  if (cVar23 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = F32LO(dVar16) + F32HI(dVar16);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = SUB84(dVar16 + dVar16,0);
  }
  if (cVar24 == '\0') {
    fVar18 = 45.0;
    fVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = SUB84(in_xd0,0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = F32HI(in_xd0);
    fVar14 = 45.0;
    fVar18 = 0.8;
  }
  if (cVar23 != '\0' || fVar14 <= fVar18) {
    uVar8 = (vsp = ((unsigned long)(fr0_ - 444)), rand(((undefined1 *)(unsigned)0x8c4366bc),uVar5,iVar2,fVar11));
    iVar20 = 0x1e;
    fVar11 = (float)(vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar8,0x1e,iVar2,fVar11));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366c0) = fVar11;
  }
  else {
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x42340000,(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
    }
    else {
      dVar16 = 0.0008789064635550403;
    }
    if (cVar23 == '\0') {
      fVar14 = F32LO(dVar16) - F32HI(dVar16);
    }
    else {
      fVar14 = SUB84(dVar16 - dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x3f4ccccd,fVar14);
    }
    else {
      dVar16 = 7.2911194025414286e-304;
    }
    if (cVar23 == '\0') {
      iVar20 = (int)(F32LO(dVar16) * F32HI(dVar16));
    }
    else {
      iVar20 = (int)(dVar16 * dVar16);
    }
    for (iVar21 = 0; iVar21 < 4; iVar21 = iVar21 + 1) {
      *(int *)(unsigned)(iVar21 * 4 + -0x73bc99b4) = iVar20 * 0x1000000 + 0xffffff;
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x42340000,(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
    }
    else {
      dVar16 = 0.02500000981399353;
    }
    if (cVar23 == '\0') {
      fVar14 = F32LO(dVar16) - F32HI(dVar16);
    }
    else {
      fVar14 = SUB84(dVar16 - dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x3f99999a,fVar14);
    }
    else {
      dVar16 = 7.291119406615661e-304;
    }
    if (cVar23 == '\0') {
      iVar21 = (int)(F32LO(dVar16) * F32HI(dVar16));
    }
    else {
      iVar21 = (int)(dVar16 * dVar16);
    }
    uVar8 = 0xffffff;
    iVar20 = 0;
    for (iVar22 = 0; iVar22 < 4; iVar22 = iVar22 + 1) {
      iVar20 = iVar22 * 4;
      *(int *)(unsigned)(iVar20 + -0x73bc9984) = iVar21 * 0x1000000 + 0xffffff;
    }
  }
  uVar8 = (vsp = ((unsigned long)(fr0_ - 444)), rand(uVar8,iVar20,iVar2,fVar11));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar8,100,iVar2,uVar8));
  if (cVar23 == '\0') {
    dVar16 = CONCAT44D((float)(iVar2 + 0x69),uVar1);
  }
  else {
    dVar16 = (double)(iVar2 + 0x69);
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x40000000,(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
  }
  else {
    dVar17 = 3.533694972055102e+72;
  }
  if (cVar23 == '\0') {
    fVar11 = F32LO(dVar17) / F32HI(dVar17);
    dVar16 = CONCAT44D(F32HI(dVar16) + fVar11,SUB84(dVar16,0));
  }
  else {
    fVar11 = SUB84(dVar17 / dVar17,0);
    dVar16 = dVar16 + dVar17 / dVar17;
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x4f000000,fVar11);
  }
  else {
    dVar17 = -9.046259633960061e+74;
  }
  fVar11 = F32HI(dVar16);
  if (cVar23 == '\0') {
    bVar19 = F32HI(dVar17) < fVar11;
  }
  else {
    bVar19 = dVar17 < dVar16;
  }
  if (bVar19) {
    if (cVar24 == '\0') {
      dVar17 = CONCAT44D(0xcf800000,SUB84(dVar17,0));
    }
    else {
      dVar17 = -1.3547902344155491e-249;
    }
    if (cVar23 == '\0') {
      dVar16 = CONCAT44D(fVar11 + F32HI(dVar17),SUB84(dVar16,0));
    }
    else {
      dVar16 = dVar16 + dVar17;
    }
  }
  if (cVar23 == '\0') {
    iVar20 = (int)F32HI(dVar16);
  }
  else {
    iVar20 = (int)dVar16;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c436660) = (short)iVar2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c43665c) = (*(undefined4 *)(unsigned)(unsigned)0x8c436660) + SUB42((*(undefined4 *)(unsigned)(unsigned)0x8c4366c0),0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c43665e) = (undefined2)iVar20;
  iVar20 = iVar20 - (int)(*(undefined4 *)(unsigned)(unsigned)0x8c4366c0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c436664) = (undefined2)iVar20;
  puVar10 = ((undefined1 *)(unsigned)0x8c43665c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c436662) = (*(undefined4 *)(unsigned)(unsigned)0x8c436660);
  (*(undefined4 *)(unsigned)(unsigned)0x8c436666) = (*(undefined4 *)(unsigned)(unsigned)0x8c436660);
  (*(undefined4 *)(unsigned)(unsigned)0x8c436668) = (*(undefined4 *)(unsigned)(unsigned)0x8c43665e);
  (*(undefined4 *)(unsigned)(unsigned)0x8c43666a) = (*(undefined4 *)(unsigned)(unsigned)0x8c43665e);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), rand(((undefined1 *)(unsigned)0x8c43665c),((undefined1 *)(unsigned)0x8c43665c),((undefined1 *)(unsigned)0x8c43665c),iVar20));
  uVar8 = SUB84(dVar16,0);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar1,0x32,puVar10,iVar20));
  if (cVar23 == '\0') {
    dVar16 = CONCAT44D((float)(iVar2 + 0x9b),uVar8);
  }
  else {
    dVar16 = (double)(iVar2 + 0x9b);
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x40000000,(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
  }
  else {
    dVar17 = 3.533694972055102e+72;
  }
  if (cVar23 == '\0') {
    fVar11 = F32LO(dVar17) / F32HI(dVar17);
    dVar16 = CONCAT44D(F32HI(dVar16) + fVar11,SUB84(dVar16,0));
  }
  else {
    fVar11 = SUB84(dVar17 / dVar17,0);
    dVar16 = dVar16 + dVar17 / dVar17;
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x4f000000,fVar11);
  }
  else {
    dVar17 = -9.046259633960061e+74;
  }
  fVar11 = F32HI(dVar16);
  if (cVar23 == '\0') {
    bVar19 = F32HI(dVar17) < fVar11;
  }
  else {
    bVar19 = dVar17 < dVar16;
  }
  if (bVar19) {
    if (cVar24 == '\0') {
      dVar17 = CONCAT44D(0xcf800000,SUB84(dVar17,0));
    }
    else {
      dVar17 = -1.3547902344155491e-249;
    }
    if (cVar23 == '\0') {
      dVar16 = CONCAT44D(fVar11 + F32HI(dVar17),SUB84(dVar16,0));
    }
    else {
      dVar16 = dVar16 + dVar17;
    }
  }
  if (cVar23 == '\0') {
    iVar20 = (int)F32HI(dVar16);
    dVar16 = CONCAT44D((float)iVar2,SUB84(dVar16,0));
  }
  else {
    iVar20 = (int)dVar16;
    dVar16 = (double)iVar2;
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x3fc00000,(float)(int)(*(undefined4 *)(unsigned)(unsigned)0x8c4366c0));
  }
  else {
    dVar17 = 9.046259120036078e+74;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c436670) = (undefined2)iVar2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c43666e) = (undefined2)iVar20;
  if (cVar23 == '\0') {
    fVar14 = F32HI(dVar17);
    fVar11 = F32LO(dVar17) * fVar14;
    dVar17 = CONCAT44D(fVar14,fVar11);
    pcVar9 = (code *)(int)(F32HI(dVar16) + fVar11);
    (*(undefined4 *)(unsigned)(unsigned)0x8c43666c) = SUB42(pcVar9,0);
    dVar16 = CONCAT44D((float)iVar20,SUB84(dVar16,0));
  }
  else {
    dVar17 = dVar17 * dVar17;
    fVar11 = F32LO(dVar17);
    pcVar9 = (code *)(int)(dVar16 + dVar17);
    (*(undefined4 *)(unsigned)(unsigned)0x8c43666c) = SUB42(pcVar9,0);
    dVar16 = (double)iVar20;
  }
  fVar14 = F32HI(dVar16);
  if (cVar23 == '\0') {
    bVar19 = fVar14 < 0.0;
  }
  else {
    bVar19 = dVar16 < (double)(D2U(dVar17) & 0xffffffff);
  }
  if (bVar19) {
    if (cVar24 == '\0') {
      dVar17 = CONCAT44D(0x4f800000,fVar11);
    }
    else {
      dVar17 = -1.354755602458548e-249;
    }
    if (cVar23 == '\0') {
      dVar16 = CONCAT44D(fVar14 + F32HI(dVar17),SUB84(dVar16,0));
    }
    else {
      dVar16 = dVar16 + dVar17;
    }
  }
  ar6_01 = (code *)((undefined1 *)(unsigned)0x8c4366c0);
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x3fc00000,(float)(int)(*(undefined4 *)(unsigned)(unsigned)0x8c4366c0));
  }
  else {
    dVar17 = 9.046259120036078e+74;
  }
  if (cVar23 == '\0') {
    iVar2 = (int)(F32HI(dVar16) -
                 F32LO(dVar17) * F32HI(dVar17));
  }
  else {
    iVar2 = (int)(dVar16 - dVar17 * dVar17);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c436674) = (undefined2)iVar2;
  iVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c43663c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c436672) = (*(undefined4 *)(unsigned)(unsigned)0x8c436670);
  (*(undefined4 *)(unsigned)(unsigned)0x8c436676) = (*(undefined4 *)(unsigned)(unsigned)0x8c436670);
  (*(undefined4 *)(unsigned)(unsigned)0x8c436678) = (*(undefined4 *)(unsigned)(unsigned)0x8c43666e);
  (*(undefined4 *)(unsigned)(unsigned)0x8c43667a) = (*(undefined4 *)(unsigned)(unsigned)0x8c43666e);
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c43663c) != 0xffffff) {
    for (iVar21 = 0; iVar21 < 4; iVar21 = iVar21 + 1) {
      pcVar9 = (code *)((undefined1 *)(unsigned)0x8c43663c);
      ar6_01 = (code *)(((undefined1 *)(unsigned)0x8c43663c) + iVar21 * 4);
      iVar20 = *(int *)(unsigned)ar6_01 + -0x11000000;
      *(int *)(unsigned)ar6_01 = iVar20;
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), rand(iVar20,iVar2,ar6_01,pcVar9));
  puVar10 = (undefined1 *)(unsigned)0x190;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar1,400,ar6_01,pcVar9));
  if (iVar2 == 0) {
    if (cVar24 == '\0') {
      fVar14 = 75.0;
      fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
    }
    else {
      fVar11 = 75.0;
      fVar14 = 3.3705384e+10;
    }
    if (cVar23 == '\0' && fVar14 < fVar11) {
      for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c43663c) + iVar2 * 4) = 0xffffffff;
      }
      iVar2 = -0x73d4a630;
      pcVar9 = ((void *)0x8c021f18);
      puVar10 = (undefined1 *)(unsigned)
                (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),ar6_01,((void *)0x8c021f18)));
      if (puVar10 == (undefined1 *)(unsigned)0x2) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), rand(iVar2,2,ar6_01,pcVar9));
        uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar1,2,ar6_01,pcVar9));
        pcVar9 = (code *)((undefined1 *)(fr0_ - 0x34));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c13c8e7)); *(unsigned *)((((unsigned long)(fr0_ - 444)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 444)) - 8); FUN_8c014334(pcVar9,uVar1,ar6_01,pcVar9); });
        uVar8 = 0x8c2b59d0;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(fr0_ - 0x34)),ar6_01,pcVar9));
        *(undefined4 *)(unsigned)(ar4 + 0x144) = uVar1;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), rand(uVar8,0x144,ar6_01,pcVar9));
        iVar20 = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(iVar2,5999,ar6_01,pcVar9));
        puVar10 = ((undefined1 *)(unsigned)0x8c4366e4);
        *(unsigned *)0x8c4366e4 = (unsigned)(unsigned long)((code *)(iVar20 + -2999));
      }
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), rand(iVar2,puVar10,ar6_01,pcVar9));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar1,300,ar6_01,pcVar9));
  if (iVar2 == 0) {
    if (cVar24 == '\0') {
      fVar14 = 72.0;
      fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
    }
    else {
      fVar11 = 72.0;
      fVar14 = 2.69049e-43;
    }
    if (cVar23 == '\0' && fVar14 < fVar11) {
      uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x144);
      uVar8 = 0x8c2b59d0;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021f18(0x8c2b59d0,uVar1,ar6_01,pcVar9));
      if (iVar2 == 2) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), rand(uVar8,uVar1,ar6_01,pcVar9));
        uVar8 = 2;
        ar6_01 = ((void *)0x8c01031c);
        (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar1,2,((void *)0x8c01031c),pcVar9));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c13c8e7)); *(unsigned *)((((unsigned long)(fr0_ - 444)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 444)) - 8); FUN_8c014334(((undefined1 *)(fr0_ - 0x34)),uVar8,ar6_01,pcVar9); });
        puVar10 = ((undefined1 *)(fr0_ - 0x34));
        uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), pack_acquire_entry_handle(0x8c2b59d0,puVar10,ar6_01,pcVar9));
        *(undefined4 *)(unsigned)(ar4 + 0x144) = uVar1;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), rand(((void *)0x8c014200),puVar10,ar6_01,pcVar9));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar1,4000,ar6_01,pcVar9));
        *(unsigned *)0x8c4366e4 = (unsigned)(unsigned long)((code *)(iVar2 + -2000));
      }
    }
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),ar6_01,pcVar9));
  if (iVar2 != 2) {
    if (cVar24 == '\0') {
      fVar14 = 72.0;
      fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
    }
    else {
      fVar11 = 72.0;
      fVar14 = 2.69049e-43;
    }
    if (cVar23 == '\0' && fVar14 < fVar11) {
      pcVar9 = (code *)0x258;
      ar6_01 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366e4);
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),((undefined4 *)(unsigned long)*(unsigned *)0x8c4366e4),600));
    }
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),ar6_01,pcVar9));
  if (iVar2 == 2) {
    (vsp = ((unsigned long)(fr0_ - 444)), pack_release_entry_handle(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),ar6_01,pcVar9));
  }
  if ((((*(undefined4 *)(unsigned)(unsigned)0x8c4366dc) == 0) || (uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366dc), (*(undefined4 *)(unsigned)(unsigned)0x8c4366dc) == 1)) &&
     (uVar5 = 0x14c, *(int *)(unsigned)(ar4 + 0x14c) == 2)) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366cc) = 1;
  }
  if (*(int *)(unsigned)(ar4 + 0x14c) == 3) {
    for (iVar2 = 0; ar6_01 = (code *)0x4, iVar2 < 4; iVar2 = iVar2 + 1) {
      *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c43668c) + iVar2 * 4) = 0xffffff;
      *(undefined4 *)(unsigned)(iVar2 * 4 + -0x73bc9964) = 0xffffffff;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366cc) = 2;
    *(undefined4 *)(unsigned)(ar4 + 0x14c) = 2;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4366cc) == 1) {
    uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c43668c);
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c43668c) < 0x1000000) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4366cc) = 2;
    }
    else {
      iVar2 = 0;
      while (iVar20 = iVar2, iVar20 < 4) {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c43668c) + iVar20 * 4) = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c43668c) + iVar20 * 4) + -0x3000000;
        uVar5 = 0x3000000;
        *(int *)(unsigned)(iVar20 * 4 + -0x73bc9964) = *(int *)(unsigned)(iVar20 * 4 + -0x73bc9964) + 0x3000000;
        (*(int *)(fr0_ - 0x1b8)) = iVar20;
        iVar2 = iVar20 + 1;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,uVar5,ar6_01,pcVar9));
  (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,0,ar6_01,pcVar9));
  (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43662c),ar6_01,((void *)0x8c016324)));
  uVar8 = 4;
  uVar1 = 0x8c43661c;
  pcVar9 = (code *)((undefined1 *)(unsigned)0x8c13bda0);
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bda0),0x8c43661c,4); });
  (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,pcVar9,uVar1,uVar8));
  if (cVar24 == '\0') {
    puVar10 = (undefined1 *)(unsigned)0x42340000;
    fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
  }
  else {
    fVar11 = 45.0;
    puVar10 = ((undefined1 *)(unsigned)0x8c4366c8);
  }
  if (cVar23 == '\0' && (float)(uint)puVar10 < fVar11) {
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,pcVar9,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,(*(undefined4 *)(unsigned)(unsigned)0x8c4366c8) + 10,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43666c),uVar1,uVar8));
    uVar8 = 4;
    uVar1 = 0x8c43664c;
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bda0),0x8c43664c,4); });
    pcVar9 = ((void *)0x8c016340);
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,((void *)0x8c016340),uVar1,uVar8));
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4366ac) < 2) {
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,pcVar9,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,1,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43662c),uVar1,uVar8));
    uVar1 = 4;
    puVar7 = ((undefined1 *)(unsigned)0x8c13bda0);
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bda0),0x8c43661c,4); });
    iVar21 = ar4 + 0x50;
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(iVar21,puVar7,iVar21,uVar1));
    iVar20 = ar4 + 0x48;
    iVar2 = iVar20;
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(iVar20,iVar20,iVar21,uVar1));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014294(iVar20,iVar2,iVar21,uVar1));
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x3ff33333,puVar10);
    }
    else {
      dVar16 = 32768.00780639648;
    }
    if (cVar23 == '\0') {
      fVar11 = F32LO(dVar16) * F32HI(dVar16);
    }
    else {
      fVar11 = SUB84(dVar16 * dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x40e00000,fVar11);
    }
    else {
      dVar16 = -33554440.109375;
    }
    if (cVar23 == '\0') {
      iVar2 = (int)(F32LO(dVar16) + F32HI(dVar16));
    }
    else {
      iVar2 = (int)(dVar16 + dVar16);
    }
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,iVar2,iVar21,uVar1));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43662c),((void *)0x8c016324),uVar1));
    uVar1 = 4;
    puVar10 = (undefined1 *)(unsigned)0x8c43661c;
    puVar7 = ((undefined1 *)(unsigned)0x8c13bdc0);
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bdc0),0x8c43661c,4); });
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1));
    (*(undefined2 *)(fr0_ - 0x64)) = 0;
    (*(undefined2 *)(fr0_ - 0x62)) = 0x7f;
    (*(undefined2 *)(fr0_ - 0x60)) = 0;
    (*(undefined2 *)(fr0_ - 0x5e)) = 0;
    (*(undefined2 *)(fr0_ - 0x5c)) = 0x7f;
    (*(undefined2 *)(fr0_ - 0x5a)) = 0;
    (*(undefined2 *)(fr0_ - 0x58)) = 0x7f;
    (*(undefined2 *)(fr0_ - 0x56)) = 0x7f;
  }
  else if ((*(undefined4 *)(unsigned)(unsigned)0x8c4366ac) < 4) {
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,pcVar9,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,2,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43662c),uVar1,uVar8));
    uVar1 = 4;
    puVar10 = (undefined1 *)(unsigned)0x8c43661c;
    puVar7 = ((undefined1 *)(unsigned)0x8c13bda0);
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bda0),0x8c43661c,4); });
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1));
    (*(undefined2 *)(fr0_ - 0x64)) = 0x80;
    (*(undefined2 *)(fr0_ - 0x62)) = 0x7f;
    puVar7 = (undefined *)(unsigned)0x80;
    (*(undefined2 *)(fr0_ - 0x60)) = 0x80;
    (*(undefined2 *)(fr0_ - 0x5e)) = 0;
    (*(undefined2 *)(fr0_ - 0x5c)) = 0xff;
    (*(undefined2 *)(fr0_ - 0x5a)) = 0;
    (*(undefined2 *)(fr0_ - 0x58)) = 0xff;
    uVar1 = 0x7f;
    (*(undefined2 *)(fr0_ - 0x56)) = 0x7f;
  }
  else if ((*(undefined4 *)(unsigned)(unsigned)0x8c4366ac) < 7) {
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,pcVar9,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,3,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43662c),uVar1,uVar8));
    uVar1 = 4;
    puVar10 = (undefined1 *)(unsigned)0x8c43661c;
    puVar7 = ((undefined1 *)(unsigned)0x8c13bda0);
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bda0),0x8c43661c,4); });
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1));
    (*(undefined2 *)(fr0_ - 0x64)) = 0;
    (*(undefined2 *)(fr0_ - 0x62)) = 0xff;
    (*(undefined2 *)(fr0_ - 0x60)) = 0;
    (*(undefined2 *)(fr0_ - 0x5e)) = 0x80;
    (*(undefined2 *)(fr0_ - 0x5c)) = 0x7f;
    (*(undefined2 *)(fr0_ - 0x5a)) = 0x80;
    (*(undefined2 *)(fr0_ - 0x58)) = 0x7f;
    (*(undefined2 *)(fr0_ - 0x56)) = 0xff;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,pcVar9,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,4,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43662c),uVar1,uVar8));
    uVar1 = 4;
    puVar10 = (undefined1 *)(unsigned)0x8c43661c;
    puVar7 = ((undefined1 *)(unsigned)0x8c13bda0);
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bda0),0x8c43661c,4); });
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1));
    (*(undefined2 *)(fr0_ - 0x64)) = 0x80;
    (*(undefined2 *)(fr0_ - 0x62)) = 0xff;
    (*(undefined2 *)(fr0_ - 0x60)) = 0x80;
    (*(undefined2 *)(fr0_ - 0x5e)) = 0x80;
    (*(undefined2 *)(fr0_ - 0x5c)) = 0xff;
    (*(undefined2 *)(fr0_ - 0x5a)) = 0x80;
    (*(undefined2 *)(fr0_ - 0x58)) = 0xff;
    (*(undefined2 *)(fr0_ - 0x56)) = 0xff;
  }
  if (cVar24 == '\0') {
    puVar3 = (undefined1 *)(unsigned)0x42340000;
    fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
  }
  else {
    fVar11 = 45.0;
    puVar3 = ((undefined1 *)(unsigned)0x8c4366c8);
  }
  if (cVar23 == '\0' && (float)(uint)puVar3 < fVar11) {
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,puVar7,puVar10,uVar1));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,(*(undefined4 *)(unsigned)(unsigned)0x8c4366c8) + 10,puVar10,uVar1));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43665c),puVar10,uVar1));
    uVar8 = 4;
    uVar1 = 0x8c43664c;
    puVar7 = ((undefined1 *)(unsigned)0x8c13bda0);
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bda0),0x8c43664c,4); });
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,puVar7,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,((void *)0x8c01538c),uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,0xd,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43662c),uVar1,uVar8));
    uVar1 = 4;
    puVar10 = (undefined1 *)(unsigned)0x8c43667c;
    puVar7 = ((undefined1 *)(unsigned)0x8c13bda0);
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bda0),0x8c43667c,4); });
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1));
  }
  if (cVar24 == '\0') {
    puVar3 = (undefined1 *)(unsigned)0x42960000;
    fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
  }
  else {
    fVar11 = 75.0;
    puVar3 = ((undefined1 *)(unsigned)0x8c43663c);
  }
  if (cVar23 == '\0' && (float)(uint)puVar3 < fVar11) {
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,puVar7,puVar10,uVar1));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,9,puVar10,uVar1));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43662c),puVar10,uVar1));
    uVar1 = 4;
    puVar10 = ((undefined1 *)(unsigned)0x8c43663c);
    puVar7 = ((undefined1 *)(unsigned)0x8c13bda0);
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bda0),((undefined1 *)(unsigned)0x8c43663c),4); });
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1));
  }
  (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,puVar7,puVar10,uVar1));
  uVar8 = 0x11;
  (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,0x11,puVar10,uVar1));
  (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(((undefined1 *)(fr0_ - 0x78)),uVar8,puVar10,uVar1));
  if (*(int *)(unsigned)(ar4 + 0x30) == 1) {
    puVar10 = (undefined1 *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c0c3e78(((undefined1 *)(unsigned)0x8c2b5628),*(undefined4 *)(unsigned)(ar4 + 0x154),0,uVar1));
  }
  iVar2 = *(int *)(unsigned)(ar4 + 0x14c);
  if ((iVar2 < 5) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    default:
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c0ba494(ar4 + 0x158,ar4 + 0x48,puVar10,uVar1));
      break;
    case 2:
    case 3:
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,4,puVar10,uVar1));
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,0xe,puVar10,uVar1));
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43662c),puVar10,uVar1));
      uVar1 = 4;
      puVar10 = (undefined1 *)(unsigned)0x8c43669c;
      puVar7 = ((undefined1 *)(unsigned)0x8c13bde0);
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bde0),0x8c43669c,4); });
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1));
      break;
    case 4:
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,4,puVar10,uVar1));
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,0x10,puVar10,uVar1));
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43662c),puVar10,ar4 + 0x50));
      uVar1 = 4;
      puVar10 = (undefined1 *)(unsigned)0x8c43661c;
      puVar7 = ((undefined1 *)(unsigned)0x8c13bde0);
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bde0),0x8c43661c,4));
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 444)), free_if_nonnull_wrap_0151a0(((undefined1 *)(fr0_ - 0x78)),0xffffffff,puVar10,uVar1));
  return 1;
}

__asm__(".globl _s_AMB_FOREST_0bb1f2\n.set _s_AMB_FOREST_0bb1f2, _s_AMB_FOREST_0bb1f2_def\n");
//@unit 8c0bced0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_c8_0bced0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_c8_0bced0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0xc8 + ar4);
}

__asm__(".globl _get_field_c8_0bced0\n.set _get_field_c8_0bced0, _get_field_c8_0bced0_def\n");
//@unit 8c0bcedc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bcedc_def(int ar4,int ar5,undefined4 ar6,char *ar7)

{
  ring[rp++ & 255] = "FUN_8c0bcedc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 488; for (int i_ = 0; i_ < 488; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  uint ar4_00;
  undefined1 *puVar3;
  undefined4 a5;
  undefined1 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined4 unaff_r8 = 0;
  undefined4 unaff_r9 = 0;
  undefined4 unaff_r10 = 0;
  undefined4 unaff_r11 = 0;
  undefined4 unaff_r12 = 0;
  undefined4 unaff_r13 = 0;
  undefined4 unaff_r14 = 0;
  undefined1 *puVar7;
  double in_dr0 = 0;
  double dVar8;
  float in_fr13 = 0;
  undefined4 in_fr12 = 0;
  undefined8 in_dr14 = 0;
  double dVar9;
  float fVar10;
  undefined8 in_xd14 = 0;
  bool bVar11;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x8)) = CONCAT44((int)in_dr14,(undefined4)(*(undefined8 *)(fr0_ - 0x8)));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x8))+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar7 = ((undefined1 *)(fr0_ - 0xc));
  }
  else {
    puVar7 = ((undefined1 *)(fr0_ - 0x18));
    (*(undefined8 *)(fr0_ - 0x8)) = in_xd14;
  }
  *(undefined4 *)(unsigned)(puVar7 + -4) = unaff_r14;
  *(undefined4 *)(unsigned)(puVar7 + -8) = unaff_r13;
  *(undefined4 *)(unsigned)(puVar7 + -0xc) = unaff_r12;
  *(undefined4 *)(unsigned)(puVar7 + -0x10) = unaff_r11;
  *(undefined4 *)(unsigned)(puVar7 + -0x14) = unaff_r10;
  *(undefined4 *)(unsigned)(puVar7 + -0x18) = unaff_r9;
  *(undefined4 *)(unsigned)(puVar7 + -0x1c) = unaff_r8;
  *(undefined4 *)(unsigned)(puVar7 + -0x20) = in_PR;
  if (*(int *)(unsigned)(ar4 + 0x44) == 0x12) {
    return 1;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa2b8(0x8c35468c,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(puVar7 + -0x2c) = uVar1;
  if (*(int *)(unsigned)(puVar7 + -0x2c) == 1) {
    return 1;
  }
  iVar2 = *(int *)(unsigned)(ar4 + 0x44);
  puVar4 = (undefined1 *)(unsigned)0x14;
  if (0x14 < iVar2) {
    return 1;
  }
  if (iVar2 < 0) {
    return 1;
  }
                    
  switch(iVar2) {
  case 0:
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366f8) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c43670c) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 9;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 6;
    puVar4 = ((undefined1 *)(unsigned)0x8c43676c);
    (*(undefined1 *)(unsigned)0x8c43676c) = '\0';
    (*(undefined1 *)(unsigned)0x8c43676d) = '\0';
    (*(undefined1 *)(unsigned)0x8c43676e) = '\0';
    (*(undefined1 *)(unsigned)0x8c43676f) = '\0';
    (*(undefined1 *)(unsigned)0x8c436770) = '\0';
    (*(undefined1 *)(unsigned)0x8c436771) = '\0';
    (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0f803c(0x8c35468c,ar5,((undefined1 *)(unsigned)0x8c43676c),ar7));
    for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
      puVar4 = ((undefined1 *)(unsigned)0x8c43670c);
      (*(undefined4 *)(unsigned)(unsigned)0x8c43670c) = (uint)*(byte *)(unsigned)(ar5 + iVar2 + 4) + (*(undefined4 *)(unsigned)(unsigned)0x8c43670c);
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c436710) = (uint)*(byte *)(unsigned)(ar5 + 0x2c);
    puVar3 = ((undefined1 *)(unsigned)0x8c436714);
    (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0b9d14(ar5,((undefined1 *)(unsigned)0x8c436714),puVar4,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), get_field_c8_0bced0(ar5,puVar3,puVar4,ar7));
    *(undefined4 *)(unsigned)(puVar7 + -0x30) = uVar1;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436720) = *(undefined4 *)(unsigned)(puVar7 + -0x30);
    (*(undefined4 *)(unsigned)(unsigned)0x8c436728) = *(undefined4 *)(unsigned)(ar5 + 0xc0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c436724) = *(undefined4 *)(unsigned)(ar5 + 0xc4);
    *(ushort *)(unsigned)(puVar7 + -0x1dc) = (*(undefined4 *)(unsigned)(unsigned)0x8c436714);
    *(undefined2 *)(unsigned)(puVar7 + -0x1da) = (*(undefined4 *)(unsigned)(unsigned)0x8c436716);
    *(undefined2 *)(unsigned)(puVar7 + -0x1d8) = (*(undefined4 *)(unsigned)(unsigned)0x8c436718);
    *(undefined2 *)(unsigned)(puVar7 + -0x1d6) = (*(undefined4 *)(unsigned)(unsigned)0x8c43671a);
    *(undefined2 *)(unsigned)(puVar7 + -0x1d4) = (*(undefined4 *)(unsigned)(unsigned)0x8c43671c);
    uVar1 = ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar7 + -0x1dc)); unsigned long t1_ = (unsigned long)(
                         *(undefined4 *)(unsigned)(puVar7 + -0x1d8)); *(unsigned *)((((unsigned long)(fr0_ - 488)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 488)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 488)) - 8); FUN_8c0b9afc(ar5,((void *)0x8c0b9afc),puVar4,ar7); });
    *(undefined4 *)(unsigned)(puVar7 + -0x34) = uVar1;
    (*(undefined4 *)(unsigned)(unsigned)0x8c43672c) = *(undefined4 *)(unsigned)(puVar7 + -0x34);
    *(unsigned *)0x8c4366f0 = (unsigned)(unsigned long)((int *)(unsigned)(ar5 + 0x30));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) = ar5 + 0x44;
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 1;
  case 1:
    if (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x25) < '\x01') {
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c43670c) == 1) {
        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c8f6),((undefined1 *)(unsigned)0x8c13c025),ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x13;
        *(undefined4 *)(unsigned)(ar4 + 0x14c) = 0;
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x14c) = 1;
        *(undefined4 *)(unsigned)(ar4 + 0x44) = 2;
override_jmp_8c0bcf7a_case_2:
        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c1f826c(((undefined1 *)(unsigned)0x8c436714),puVar7 + -0x24,puVar4,ar7));
        puVar4 = (undefined1 *)(unsigned)0x8c431a68;
        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c1f826c(((undefined1 *)(unsigned)0x8c431a7c),puVar7 + -0x28,0x8c431a68,ar7));
        uVar1 = libgcc_divide_helper_010284
                          (*(int *)(unsigned)(puVar7 + -0x24) - *(int *)(unsigned)(puVar7 + -0x28),0xe10,puVar4,ar7);
        *(undefined4 *)(unsigned)(puVar7 + -0x8c) = uVar1;
        ar4_00 = *(uint *)(unsigned)(puVar7 + -0x8c) & 0xffff;
        if (((((((*(undefined4 *)(unsigned)(unsigned)0x8c436714) != (*(undefined4 *)(unsigned)(unsigned)0x8c431a7c)) || ((*(undefined1 *)(unsigned)0x8c436716) != (*(undefined1 *)(unsigned)0x8c431a7e))) ||
              ((*(undefined1 *)(unsigned)0x8c436717) != (*(undefined1 *)(unsigned)0x8c431a7f))) || (ar4_00 < 8)) &&
            ((puVar4 = (undefined1 *)(unsigned)0x18, 0x17 < ar4_00 ||
             (((puVar4 = ((undefined1 *)(unsigned)0x8c431a7f), (*(undefined1 *)(unsigned)0x8c436717) <= (*(undefined1 *)(unsigned)0x8c431a7f) &&
               (ar7 = ((undefined1 *)(unsigned)0x8c436714), (*(undefined1 *)(unsigned)0x8c436716) <= (*(undefined1 *)(unsigned)0x8c431a7e))) &&
              ((*(undefined4 *)(unsigned)(unsigned)0x8c436714) <= (*(undefined4 *)(unsigned)(unsigned)0x8c431a7c))))))) && (0x17 < ar4_00)) {
          uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), libgcc_divide_helper_010284(ar4_00,0x18,puVar4,ar7));
          *(undefined4 *)(unsigned)(puVar7 + -0x90) = uVar1;
        }
        for (iVar2 = 0; iVar2 < 0xb; iVar2 = iVar2 + 1) {
          *(int *)(unsigned)(puVar7 + -0x94) = iVar2;
          puVar4 = (undefined1 *)(unsigned)0x0;
          *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c436738) + *(int *)(unsigned)(puVar7 + -0x94) * 4) = 0;
        }
        a5 = 0;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf160(*(undefined4 *)(unsigned)(ar5 + 0x7d8),0,puVar4,ar7));
        *(undefined4 *)(unsigned)(puVar7 + -0x38) = uVar1;
        *(unsigned *)0x8c436704 = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x38)));
        puVar3 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 488)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((undefined4 *)(unsigned long)*(unsigned *)0x8c436704) + 0x118))))(((undefined4 *)(unsigned long)*(unsigned *)0x8c436704),a5,uVar1,ar7));
        *(unsigned *)(unsigned)(puVar7 + -0x3c) = puVar3;
        pcVar6 = (code *)((undefined1 *)(unsigned)0x8c4366f8);
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366f8) = *(int *)(unsigned)(puVar7 + -0x3c);
        puVar4 = (undefined1 *)(unsigned)0x0;
        while (uVar1 = (undefined4)in_dr14, (int)puVar4 < (*(undefined4 *)(unsigned)(unsigned)0x8c4366f8)) {
          pcVar6 = (code *)(vsp = ((unsigned long)(fr0_ - 488)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((undefined4 *)(unsigned long)*(unsigned *)0x8c436704) + 0xfc))))(((undefined4 *)(unsigned long)*(unsigned *)0x8c436704),puVar4,pcVar6,ar7));
          *(unsigned *)(unsigned)(puVar7 + -0x40) = pcVar6;
          (*(undefined4 *)(unsigned)(unsigned)0x8c4366fc) = *(int *)(unsigned)(puVar7 + -0x40);
          uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), get_field_28_0bf124((*(undefined4 *)(unsigned)(unsigned)0x8c4366fc),((undefined1 *)(unsigned)0x8c4366fc),pcVar6,ar7));
          *(undefined4 *)(unsigned)(puVar7 + -0x44) = uVar1;
          if (*(int *)(unsigned)(puVar7 + -0x44) == 1) {
            uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366fc) + 8) + 0x164))))
                              ((*(undefined4 *)(unsigned)(unsigned)0x8c4366fc),uVar1,pcVar6,ar7));
            *(undefined4 *)(unsigned)(puVar7 + -0x48) = uVar1;
            iVar2 = *(int *)(unsigned)(puVar7 + -0x48);
            (*(undefined4 *)(unsigned)(unsigned)0x8c436700) = iVar2;
            pcVar6 = (code *)(vsp = ((unsigned long)(fr0_ - 488)), get_field_13c_028d9c(iVar2,iVar2,pcVar6,ar7));
            *(unsigned *)(unsigned)(puVar7 + -0x4c) = pcVar6;
            switch(*(undefined4 *)(unsigned)(puVar7 + -0x4c)) {
            case 1:
              pcVar6 = ((void *)0x8c02c3a8);
              uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02c3a8((*(undefined4 *)(unsigned)(unsigned)0x8c436700),iVar2,((void *)0x8c02c3a8),ar7));
              *(undefined4 *)(unsigned)(puVar7 + -0x50) = uVar1;
              if (*(int *)(unsigned)(puVar7 + -0x50) == -1) {
                (*(undefined4 *)(unsigned)(unsigned)0x8c436738) = (*(undefined4 *)(unsigned)(unsigned)0x8c436738) + 1;
              }
              break;
            case 2:
              uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02c3a8((*(undefined4 *)(unsigned)(unsigned)0x8c436700),iVar2,pcVar6,ar7));
              *(undefined4 *)(unsigned)(puVar7 + -0x54) = uVar1;
              if (*(int *)(unsigned)(puVar7 + -0x54) == -1) {
                *(unsigned *)(unsigned)(puVar7 + -0x98) = ((undefined1 *)(unsigned)0x8c436738);
                pcVar6 = ((code *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(puVar7 + -0x98) + 4));
                *(unsigned *)(unsigned)(*(int *)(unsigned)(puVar7 + -0x98) + 4) = pcVar6 + 1;
              }
              break;
            case 3:
              uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02c3a8((*(undefined4 *)(unsigned)(unsigned)0x8c436700),iVar2,pcVar6,ar7));
              *(undefined4 *)(unsigned)(puVar7 + -0x58) = uVar1;
              if (*(int *)(unsigned)(puVar7 + -0x58) == -1) {
                *(unsigned *)(unsigned)(puVar7 + -0x9c) = ((undefined1 *)(unsigned)0x8c436738);
                *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0x9c) + 8) = *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0x9c) + 8) + 1;
                uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02d3e8((*(undefined4 *)(unsigned)(unsigned)0x8c436700),iVar2,pcVar6,ar7));
                *(undefined4 *)(unsigned)(puVar7 + -0x5c) = uVar1;
                iVar2 = *(int *)(unsigned)(puVar7 + -0x5c);
                if (iVar2 < 0x5a) {
                  if ((iVar2 < 0x46) || ('\x01' < (*(undefined1 *)(unsigned)0x8c436771))) {
                    if ((0x31 < iVar2) && ((*(undefined1 *)(unsigned)0x8c436771) < '\x01')) {
                      (*(undefined1 *)(unsigned)0x8c436771) = '\x01';
                    }
                  }
                  else {
                    (*(undefined1 *)(unsigned)0x8c436771) = '\x02';
                  }
                }
                else {
                  (*(undefined1 *)(unsigned)0x8c436771) = '\x03';
                }
                pcVar6 = (code *)((undefined1 *)(unsigned)0x8c436700);
                uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02bef8((*(undefined4 *)(unsigned)(unsigned)0x8c436700),((void *)0x8c02bef8),((undefined1 *)(unsigned)0x8c436700),ar7));
                *(short *)(unsigned)(puVar7 + -0x1ca) = (short)uVar1;
                if (*(short *)(unsigned)(puVar7 + -0x1ca) == 3) {
                  (*(undefined1 *)(unsigned)0x8c43676d) = (*(undefined1 *)(unsigned)0x8c43676d) + '\x01';
                }
              }
              break;
            case 4:
              uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02c3a8((*(undefined4 *)(unsigned)(unsigned)0x8c436700),iVar2,pcVar6,ar7));
              *(undefined4 *)(unsigned)(puVar7 + -0x60) = uVar1;
              if (*(int *)(unsigned)(puVar7 + -0x60) == -1) {
                pcVar6 = (code *)((undefined1 *)(unsigned)0x8c436738);
                *(unsigned *)(unsigned)(puVar7 + -0xa0) = ((undefined1 *)(unsigned)0x8c436738);
                *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xa0) + 0xc) =
                     *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xa0) + 0xc) + 1;
                uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02d3e8((*(undefined4 *)(unsigned)(unsigned)0x8c436700),((undefined1 *)(unsigned)0x8c436700),((undefined1 *)(unsigned)0x8c436738),ar7));
                *(undefined4 *)(unsigned)(puVar7 + -100) = uVar1;
                iVar2 = *(int *)(unsigned)(puVar7 + -100);
                if (iVar2 < 0x5a) {
                  if ((iVar2 < 0x46) || ('\x01' < (*(undefined1 *)(unsigned)0x8c436771))) {
                    if ((0x31 < iVar2) && ((*(undefined1 *)(unsigned)0x8c436771) < '\x01')) {
                      (*(undefined1 *)(unsigned)0x8c436771) = '\x01';
                    }
                  }
                  else {
                    (*(undefined1 *)(unsigned)0x8c436771) = '\x02';
                  }
                }
                else {
                  (*(undefined1 *)(unsigned)0x8c436771) = '\x03';
                }
                uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02bf8c((*(undefined4 *)(unsigned)(unsigned)0x8c436700),((undefined1 *)(unsigned)0x8c436700),pcVar6,ar7));
                *(short *)(unsigned)(puVar7 + -0x1cc) = (short)uVar1;
                if (*(short *)(unsigned)(puVar7 + -0x1cc) == 0) {
                  *(unsigned *)(unsigned)(puVar7 + -0xa4) = ((undefined1 *)(unsigned)0x8c436738);
                  *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xa4) + 0xc) =
                       *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xa4) + 0xc) + -1;
                  *(unsigned *)(unsigned)(puVar7 + -0xa8) = ((undefined1 *)(unsigned)0x8c436738);
                  *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xa8) + 8) =
                       *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xa8) + 8) + 1;
                  pcVar6 = (code *)(int)(*(undefined1 *)(unsigned)0x8c43676e);
                  (*(undefined1 *)(unsigned)0x8c43676e) = (*(undefined1 *)(unsigned)0x8c43676e) + '\x01';
                }
              }
              break;
            case 6:
              uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02c3a8((*(undefined4 *)(unsigned)(unsigned)0x8c436700),iVar2,pcVar6,ar7));
              *(undefined4 *)(unsigned)(puVar7 + -0x68) = uVar1;
              if (*(int *)(unsigned)(puVar7 + -0x68) == -1) {
                *(unsigned *)(unsigned)(puVar7 + -0xac) = ((undefined1 *)(unsigned)0x8c436738);
                *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xac) + 0x10) =
                     *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xac) + 0x10) + 1;
              }
              break;
            case 7:
              uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02c3a8((*(undefined4 *)(unsigned)(unsigned)0x8c436700),iVar2,pcVar6,ar7));
              *(undefined4 *)(unsigned)(puVar7 + -0x6c) = uVar1;
              if (*(int *)(unsigned)(puVar7 + -0x6c) == -1) {
                *(unsigned *)(unsigned)(puVar7 + -0xb0) = ((undefined1 *)(unsigned)0x8c436738);
                iVar2 = *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xb0) + 0x14);
                pcVar6 = (code *)(iVar2 + 1);
                *(unsigned *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xb0) + 0x14) = pcVar6;
                uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02d3e8((*(undefined4 *)(unsigned)(unsigned)0x8c436700),iVar2,pcVar6,ar7));
                *(undefined4 *)(unsigned)(puVar7 + -0x70) = uVar1;
                iVar5 = *(int *)(unsigned)(puVar7 + -0x70);
                if (iVar5 < 0x5a) {
                  if ((iVar5 < 0x46) || ('\x01' < (*(undefined1 *)(unsigned)0x8c436771))) {
                    if ((0x31 < iVar5) && (iVar2 = (int)(*(undefined1 *)(unsigned)0x8c436771), iVar2 < 1)) {
                      (*(undefined1 *)(unsigned)0x8c436771) = '\x01';
                    }
                  }
                  else {
                    (*(undefined1 *)(unsigned)0x8c436771) = '\x02';
                  }
                }
                else {
                  (*(undefined1 *)(unsigned)0x8c436771) = '\x03';
                }
                uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c02bf8c((*(undefined4 *)(unsigned)(unsigned)0x8c436700),iVar2,pcVar6,ar7));
                *(short *)(unsigned)(puVar7 + -0x1ce) = (short)uVar1;
                if (*(short *)(unsigned)(puVar7 + -0x1ce) == 1) {
                  uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c035000((*(undefined4 *)(unsigned)(unsigned)0x8c436700),iVar2,pcVar6,ar7));
                  *(undefined4 *)(unsigned)(puVar7 + -0x74) = uVar1;
                  pcVar6 = ((code *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x74));
                  if (pcVar6 == (code *)0x3) {
                    pcVar6 = (code *)((undefined1 *)(unsigned)0x8c43676f);
                    iVar2 = (*(undefined1 *)(unsigned)0x8c43676f) + 1;
                    (*(undefined1 *)(unsigned)0x8c43676f) = (char)iVar2;
                  }
                }
                uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c025f68((*(undefined4 *)(unsigned)(unsigned)0x8c436700) + 0x78,iVar2,pcVar6,ar7));
                puVar7[-0x1d0] = (char)uVar1;
                if (puVar7[-0x1d0] == '\x01') {
                  ar7 = ((undefined1 *)(unsigned)0x8c436770);
                  (*(undefined1 *)(unsigned)0x8c436770) = (*(undefined1 *)(unsigned)0x8c436770) + '\x01';
                }
              }
              break;
            case 0xc:
            case 0xd:
              uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366fc) + 8) + 0x168))))
                                ((*(undefined4 *)(unsigned)(unsigned)0x8c4366fc),*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366fc) + 8),pcVar6,ar7));
              *(undefined4 *)(unsigned)(puVar7 + -0x78) = uVar1;
              *(unsigned *)0x8c436708 = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x78)));
              uVar1 = (vsp = ((unsigned long)(fr0_ - 488)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((undefined4 *)(unsigned long)*(unsigned *)0x8c436708) + 0x44))))(((undefined4 *)(unsigned long)*(unsigned *)0x8c436708),((undefined4 *)(unsigned long)*(unsigned *)0x8c436708),pcVar6,ar7));
              *(undefined4 *)(unsigned)(puVar7 + -0x7c) = uVar1;
              (*(undefined1 *)(unsigned)0x8c43676c) = (char)*(undefined4 *)(unsigned)(puVar7 + -0x7c);
            case 0:
            case 5:
              *(unsigned *)(unsigned)(puVar7 + -0xb4) = ((undefined1 *)(unsigned)0x8c436738);
              pcVar6 = ((code *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0xb4));
              *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xb4) + 0x18) = *(int *)(unsigned)(pcVar6 + 0x18) + 1;
            }
          }
          puVar3 = puVar4 + 1;
          puVar4 = puVar3;
        }
        (*(undefined4 *)(unsigned)(unsigned)0x8c436754) = 0;
        for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
          *(unsigned *)(unsigned)(puVar7 + -0xb8) = ((undefined1 *)(unsigned)0x8c436738);
          *(int *)(unsigned)(puVar7 + -0xbc) = iVar2;
          puVar3 = (undefined1 *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xbc) * 4);
          *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xb8) + 0x1c) =
               *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xb8) + 0x1c) + *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c436738) + (int)puVar3);
        }
        (*(undefined4 *)(unsigned)(unsigned)0x8c43675c) = 0;
        for (iVar2 = 0; iVar2 < 0x14; iVar2 = iVar2 + 1) {
          *(int *)(unsigned)(puVar7 + -0xc0) = iVar2;
          puVar3 = (undefined1 *)(unsigned)0x8c431a68;
          if (*(int *)(unsigned)((*(int *)(unsigned)(puVar7 + -0xc0) * 0x10 - *(int *)(unsigned)(puVar7 + -0xc0)) * 0x10 +
                      -0x73bcd0bc) != -1) {
            *(unsigned *)(unsigned)(puVar7 + -0xc4) = ((undefined1 *)(unsigned)0x8c436738);
            puVar3 = (undefined1 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xc4) + 0x24) + 1);
            *(unsigned *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xc4) + 0x24) = puVar3;
          }
        }
        (*(undefined4 *)(unsigned)(unsigned)0x8c436758) = 0;
        for (iVar2 = 0; iVar2 < 10; iVar2 = iVar2 + 1) {
          *(int *)(unsigned)(puVar7 + -200) = iVar2;
          puVar3 = (undefined1 *)(unsigned)0x27ac;
          if (*(int *)(unsigned)((*(int *)(unsigned)(puVar7 + -200) * 0x10 - *(int *)(unsigned)(puVar7 + -200)) * 0x10 +
                      -0x73bcbdec) != -1) {
            puVar3 = ((undefined1 *)(unsigned)0x8c436738);
            *(unsigned *)(unsigned)(puVar7 + -0xcc) = ((undefined1 *)(unsigned)0x8c436738);
            *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xcc) + 0x20) =
                 *(int *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xcc) + 0x20) + 1;
          }
        }
        iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c436754) + (*(undefined4 *)(unsigned)(unsigned)0x8c436750);
        (*(undefined4 *)(unsigned)(unsigned)0x8c436760) = iVar2 + (*(undefined4 *)(unsigned)(unsigned)0x8c436758);
        (vsp = ((unsigned long)(fr0_ - 488)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((undefined4 *)(unsigned long)*(unsigned *)0x8c436704) + 0x17c))))(((undefined4 *)(unsigned long)*(unsigned *)0x8c436704),puVar3,iVar2,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)(puVar7 + -0x80) = (int)((ulonglong)in_dr0 >> 0x20);
          in_fr13 = *(float *)(unsigned)(puVar7 + -0x80);
        }
        else {
          *(double *)(unsigned)(puVar7 + -0x80) = in_dr0;
        }
        (vsp = ((unsigned long)(fr0_ - 488)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((undefined4 *)(unsigned long)*(unsigned *)0x8c436704) + 0x178))))(((undefined4 *)(unsigned long)*(unsigned *)0x8c436704),puVar3,iVar2,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)(puVar7 + -0x84) = (int)((ulonglong)in_dr0 >> 0x20);
          dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(puVar7 + -0x84),uVar1);
        }
        else {
          *(double *)(unsigned)(puVar7 + -0x84) = in_dr0;
          dVar9 = *(double *)(unsigned)(puVar7 + -0x84);
        }
        (vsp = ((unsigned long)(fr0_ - 488)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((undefined4 *)(unsigned long)*(unsigned *)0x8c436704) + 0x188))))(((undefined4 *)(unsigned long)*(unsigned *)0x8c436704),puVar3,iVar2,ar7));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)(puVar7 + -0x88) = (int)((ulonglong)in_dr0 >> 0x20);
          dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),*(undefined4 *)(unsigned)(puVar7 + -0x88));
        }
        else {
          *(double *)(unsigned)(puVar7 + -0x88) = in_dr0;
        }
        uVar1 = (undefined4)(D2U(dVar9) >> 0x20);
        if ((*(undefined1 *)(unsigned)0x8c431b10) == '\0') {
          if (in_FPSCR_SZ == '\0') {
            dVar9 = CONCAT44D(uVar1,0x42c80000);
          }
        }
        else if ((*(undefined1 *)(unsigned)0x8c431b10) == '\x01') {
          if (in_FPSCR_SZ == '\0') {
            dVar9 = CONCAT44D(uVar1,0x42c80000);
          }
        }
        else if (((*(undefined1 *)(unsigned)0x8c431b10) == '\x02') && (in_FPSCR_SZ == '\0')) {
          in_fr13 = 100.0;
        }
        if ((((*(undefined4 *)(unsigned)(unsigned)0x8c436754) - (*(undefined4 *)(unsigned)(unsigned)0x8c436738)) - (*(undefined4 *)(unsigned)(unsigned)0x8c43673c) != (*(undefined4 *)(unsigned)(unsigned)0x8c436748)) &&
           ((*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) < 0x18 || (0x1e < *((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0))))) {
          if ((*(undefined1 *)(unsigned)0x8c436771) == '\x01') {
            (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 4;
            (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 3;
          }
          else if ((*(undefined1 *)(unsigned)0x8c436771) == '\x02') {
            (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 4;
            (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 2;
          }
          else if ((*(undefined1 *)(unsigned)0x8c436771) == '\x03') {
            (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 4;
            (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 1;
          }
        }
        for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
          *(int *)(unsigned)(puVar7 + -0xd0) = iVar2;
          if ((0x1f < ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0xd0)]) &&
             (*(int *)(unsigned)(puVar7 + -0xd4) = iVar2, ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0xd4)] < 0x25)) {
            if (in_FPSCR_SZ == '\0') {
              in_dr0 = CONCAT44D(0x42200000,SUB84(in_dr0,0));
            }
            else {
              in_dr0 = -1.3550198152570648e-249;
            }
            if (in_FPSCR_PR == '\0') {
              bVar11 = SUB84(dVar9,0) < F32HI(in_dr0);
            }
            else {
              bVar11 = dVar9 < in_dr0;
            }
            if ((bVar11) && (3 < (*(undefined4 *)(unsigned)(unsigned)0x8c436734))) {
              (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 3;
              (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 3;
            }
          }
        }
        if (in_FPSCR_SZ == '\0') {
          dVar8 = CONCAT44D(0x42840000,SUB84(in_dr0,0));
        }
        else {
          dVar8 = 4294968360.25;
        }
        if (in_FPSCR_PR == '\0') {
          bVar11 = in_fr13 < F32HI(dVar8);
        }
        else {
          bVar11 = CONCAT44D(in_fr12,in_fr13) < dVar8;
        }
        if ((bVar11) && (2 < (*(undefined4 *)(unsigned)(unsigned)0x8c436734))) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 2;
          if (in_FPSCR_SZ == '\0') {
            dVar8 = CONCAT44D(0x41f00000,SUB84(dVar8,0));
          }
          else {
            dVar8 = -3.3212364735250305e+154;
          }
          if (in_FPSCR_PR == '\0') {
            bVar11 = in_fr13 < F32HI(dVar8);
          }
          else {
            bVar11 = CONCAT44D(in_fr12,in_fr13) < dVar8;
          }
          if (bVar11) {
            (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 2;
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 3;
          }
        }
        fVar10 = F32HI(dVar9);
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c436748) < 1) && ((*(undefined4 *)(unsigned)(unsigned)0x8c43674c) < 1)) {
          if (in_FPSCR_SZ == '\0') {
            dVar8 = CONCAT44D(0x41700000,SUB84(dVar8,0));
          }
          else {
            dVar8 = -1.3550198123953496e-249;
          }
          if (in_FPSCR_PR == '\0') {
            bVar11 = fVar10 < F32HI(dVar8);
          }
          else {
            bVar11 = dVar9 < dVar8;
          }
          if ((bVar11) && (2 < (*(undefined4 *)(unsigned)(unsigned)0x8c436734))) {
            (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 2;
            (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 1;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar8 = CONCAT44D(0x41a00000,SUB84(dVar8,0));
          }
          else {
            dVar8 = -1.3550837490964348e-249;
          }
          if (in_FPSCR_PR == '\0') {
            bVar11 = fVar10 < F32HI(dVar8);
          }
          else {
            bVar11 = dVar9 < dVar8;
          }
          if ((!bVar11) && (2 < (*(undefined4 *)(unsigned)(unsigned)0x8c436734))) {
            (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 2;
            (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 0;
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            dVar8 = CONCAT44D(0x41a00000,SUB84(dVar8,0));
          }
          else {
            dVar8 = -1.3550155507811096e-249;
          }
          if (in_FPSCR_PR == '\0') {
            bVar11 = fVar10 < F32HI(dVar8);
          }
          else {
            bVar11 = dVar9 < dVar8;
          }
          if ((bVar11) && (2 < (*(undefined4 *)(unsigned)(unsigned)0x8c436734))) {
            (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 2;
            (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 1;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar8 = CONCAT44D(0x41c80000,SUB84(dVar8,0));
          }
          else {
            dVar8 = -4.808587738876579e+231;
          }
          if (in_FPSCR_PR == '\0') {
            bVar11 = fVar10 < F32HI(dVar8);
          }
          else {
            bVar11 = dVar9 < dVar8;
          }
          if ((!bVar11) && (2 < (*(undefined4 *)(unsigned)(unsigned)0x8c436734))) {
            (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 2;
            (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 0;
          }
        }
        if (in_FPSCR_PR == '\0') {
          bVar11 = fVar10 < 1.0;
        }
        else {
          bVar11 = dVar9 < CONCAT44D(0x3f800000,SUB84(dVar8,0));
        }
        if ((bVar11) && (1 < (*(undefined4 *)(unsigned)(unsigned)0x8c436734))) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 1;
          (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 1;
        }
        if ('\0' < (*(undefined1 *)(unsigned)0x8c436770)) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c436730) = 5;
          (*(undefined4 *)(unsigned)(unsigned)0x8c436734) = 2;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x44) = 3;
override_jmp_8c0bcf7a_case_3:
        if ((((*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) == 5) || (*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) == 6)) || (*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) == 7)) &&
           (((*(undefined1 *)(unsigned)0x8c43676c) < '\x04' && ((*(undefined4 *)(unsigned)(unsigned)0x8c436738) == 0)))) {
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c902),((undefined1 *)(unsigned)0x8c13c907),ar7));
          *(int *)(unsigned)(puVar7 + -0xd8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
          *(char *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xd8) + 0x25) =
               *(char *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xd8) + 0x25) + '\x01';
          *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x13;
        }
        else if (((*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) == 0x25) ||
                 ((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[1] == 0x25 || (((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[2] == 0x25)))) &&
                (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x25) == '\0')) {
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c90c),((undefined1 *)(unsigned)0x8c13c025),ar7));
          *(int *)(unsigned)(puVar7 + -0xdc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
          *(char *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xdc) + 0x25) =
               *(char *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xdc) + 0x25) + '\x01';
          *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x13;
        }
        else if ((*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) < 4) && ((*(undefined4 *)(unsigned)(unsigned)0x8c43670c) == 2)) {
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c913),((undefined1 *)(unsigned)0x8c13c025),ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x10;
        }
        else if ((*(undefined4 *)(unsigned)(unsigned)0x8c436760) == 0) {
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c902),((undefined1 *)(unsigned)0x8c13c91c),ar7));
          *(int *)(unsigned)(puVar7 + -0xe0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
          *(char *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xe0) + 0x25) =
               *(char *)(unsigned)(*(int *)(unsigned)(puVar7 + -0xe0) + 0x25) + '\x01';
          *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x13;
        }
        else {
          puVar4 = (undefined1 *)(unsigned)0x44;
          *(undefined4 *)(unsigned)(ar4 + 0x44) = 4;
override_jmp_8c0bcf7a_case_4:
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,(*(undefined4 *)(unsigned)(unsigned)0x8c436720),puVar4,ar7));
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5f0(0x8c35468c,(*(undefined4 *)(unsigned)(unsigned)0x8c436710),puVar4,ar7));
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa624(0x8c35468c,(*(undefined4 *)(unsigned)(unsigned)0x8c43672c),0x8c35468c,ar7));
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c920),((undefined1 *)(unsigned)0x8c13c025),ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x44) = 5;
        }
      }
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x13;
      *(undefined4 *)(unsigned)(ar4 + 0x14c) = 3;
    }
    break;
  case 2:
    goto override_jmp_8c0bcf7a_case_2;
  case 3:
    goto override_jmp_8c0bcf7a_case_3;
  case 4:
    goto override_jmp_8c0bcf7a_case_4;
  case 5:
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 6;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436764) = 4;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436768) = 0;
    for (iVar2 = 4; -1 < iVar2; iVar2 = iVar2 + -1) {
      *(int *)(unsigned)(puVar7 + -0xe4) = iVar2;
      if (0x29 < ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0xe4)]) {
        *(int *)(unsigned)(puVar7 + -0xe8) = iVar2;
        if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0xe8)] < 0x30) {
          *(int *)(unsigned)(puVar7 + -0xec) = iVar2;
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0xec)],*(int *)(unsigned)(puVar7 + -0xe8),
                       ar7));
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c92d),((undefined1 *)(unsigned)0x8c13c902),ar7));
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            *(int *)(unsigned)(puVar7 + -0xf0) = iVar2;
            if ((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0xf0)] < 0x2a) ||
               (*(int *)(unsigned)(puVar7 + -0xf4) = iVar2, 0x2f < ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0xf4)])) {
              *(int *)(unsigned)(puVar7 + -0x100) = iVar2;
              *(int *)(unsigned)(puVar7 + -0xfc) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x100)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
              *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0xfc)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0xfc)) + '\x01';
            }
            else {
              *(int *)(unsigned)(puVar7 + -0xf8) = iVar2;
              ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0xf8)] = 0;
            }
          }
          *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x10;
          return 1;
        }
      }
    }
    break;
  case 6:
    for (; iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c436764), -1 < (int)(*(undefined4 *)(unsigned)(unsigned)0x8c436764); (*(undefined4 *)(unsigned)(unsigned)0x8c436764) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764) + -1) {
      *(int *)(unsigned)(puVar7 + -0x104) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
      if ((4 < ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x104)]) &&
         (*(int *)(unsigned)(puVar7 + -0x108) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764),
         *(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x108)]) == '\0')) {
        *(int *)(unsigned)(puVar7 + -0x10c) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
        if (((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x10c)] == 6) ||
            ((*(int *)(unsigned)(puVar7 + -0x110) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764),
             ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x110)] == 7 ||
             (*(int *)(unsigned)(puVar7 + -0x114) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764),
             ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x114)] == 8)))) ||
           (*(int *)(unsigned)(puVar7 + -0x118) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764),
           ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x118)] == 10)) {
          iVar5 = 1;
          if ((*(undefined4 *)(unsigned)(unsigned)0x8c436764) != 1) {
            if ((*(undefined4 *)(unsigned)(unsigned)0x8c436764) != 2) {
              if ((*(undefined4 *)(unsigned)(unsigned)0x8c436764) != 3) {
                if ((*(undefined4 *)(unsigned)(unsigned)0x8c436764) != 4) goto LAB_8c0be428;
                *(undefined4 *)(unsigned)(puVar7 + -0x11c) = 4;
                *(undefined4 *)(unsigned)(puVar7 + -0x120) = 3;
                if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x11c)] + 1 ==
                    ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x120)]) {
                  *(undefined4 *)(unsigned)(puVar7 + -0x128) = 4;
                  *(int *)(unsigned)(puVar7 + -0x124) =
                       ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x128)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
                  *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x124)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x124)) + '\x01';
                  goto LAB_8c0be818;
                }
                iVar5 = 2;
              }
              *(int *)(unsigned)(puVar7 + -300) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
              *(int *)(unsigned)(puVar7 + -0x130) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764) - iVar5;
              if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -300)] + 1 ==
                  ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x130)]) {
                *(int *)(unsigned)(puVar7 + -0x138) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
                *(int *)(unsigned)(puVar7 + -0x134) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x138)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4)
                ;
                ar7 = ((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x134));
                *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x134)) = *ar7 + '\x01';
                goto LAB_8c0be818;
              }
              iVar5 = iVar5 + 1;
            }
            *(int *)(unsigned)(puVar7 + -0x13c) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
            *(int *)(unsigned)(puVar7 + -0x140) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764) - iVar5;
            if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x13c)] + 1 ==
                ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x140)]) {
              *(int *)(unsigned)(puVar7 + -0x148) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
              *(int *)(unsigned)(puVar7 + -0x144) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x148)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
              *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x144)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x144)) + '\x01';
              goto LAB_8c0be818;
            }
            iVar5 = iVar5 + 1;
          }
          *(int *)(unsigned)(puVar7 + -0x14c) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
          *(int *)(unsigned)(puVar7 + -0x150) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764) - iVar5;
          if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x14c)] + 1 ==
              ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x150)]) {
            *(int *)(unsigned)(puVar7 + -0x158) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
            *(int *)(unsigned)(puVar7 + -0x154) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x158)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
            *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x154)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x154)) + '\x01';
            goto LAB_8c0be818;
          }
        }
LAB_8c0be428:
        *(int *)(unsigned)(puVar7 + -0x15c) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
        if (((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x15c)] == 5) && (2 < (*(undefined4 *)(unsigned)(unsigned)0x8c436764))) &&
           ((*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) == 8 ||
            (((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[1] == 8 || (*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) == 9)) || (((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[1] == 9)))))) {
          *(int *)(unsigned)(puVar7 + -0x164) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
          *(int *)(unsigned)(puVar7 + -0x160) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x164)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
          *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x160)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x160)) + '\x01';
        }
        else {
          *(int *)(unsigned)(puVar7 + -0x168) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
          if (((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x168)] == 7) && (0 < (*(undefined4 *)(unsigned)(unsigned)0x8c436764))) &&
             (*(int *)(unsigned)(puVar7 + -0x16c) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764) + -1,
             ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x16c)] == 9)) {
            *(int *)(unsigned)(puVar7 + -0x174) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
            *(int *)(unsigned)(puVar7 + -0x170) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x174)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
            *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x170)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x170)) + '\x01';
          }
          else {
            *(int *)(unsigned)(puVar7 + -0x178) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
            if ((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x178)] == 0xe) &&
               ('\0' < *(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0xf))) {
              *(int *)(unsigned)(puVar7 + -0x180) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
              *(int *)(unsigned)(puVar7 + -0x17c) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x180)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
              *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x17c)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x17c)) + '\x01';
            }
            else {
              *(int *)(unsigned)(puVar7 + -0x184) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
              if ((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x184)] == 0xd) && ((*(undefined4 *)(unsigned)(unsigned)0x8c436740) == 0)) {
                *(int *)(unsigned)(puVar7 + -0x18c) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
                *(int *)(unsigned)(puVar7 + -0x188) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x18c)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4)
                ;
                *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x188)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x188)) + '\x01';
              }
              else {
                *(int *)(unsigned)(puVar7 + -400) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
                if ((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -400)] == 0xf) && (2 < (*(undefined4 *)(unsigned)(unsigned)0x8c43673c))) {
                  *(int *)(unsigned)(puVar7 + -0x198) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
                  *(int *)(unsigned)(puVar7 + -0x194) =
                       ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x198)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
                  *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x194)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x194)) + '\x01';
                }
                else {
                  *(int *)(unsigned)(puVar7 + -0x19c) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
                  if ((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x19c)] == 0x10) &&
                     (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0xc) == '\0')) {
                    *(int *)(unsigned)(puVar7 + -0x1a4) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
                    *(int *)(unsigned)(puVar7 + -0x1a0) =
                         ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x1a4)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
                    *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x1a0)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x1a0)) + '\x01';
                  }
                  else {
                    *(int *)(unsigned)(puVar7 + -0x1a8) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
                    if ((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x1a8)] != 0x12) ||
                       ((*(undefined1 *)(unsigned)0x8c43676e) < '\x01')) {
                      *(int *)(unsigned)(puVar7 + -0x1ac) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764);
                      iVar5 = *(int *)(unsigned)(puVar7 + -0x1ac);
                      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[iVar5],iVar5,ar7));
                      *(int *)(unsigned)(puVar7 + -0x1b0) = iVar2;
                      if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x1b0)] == 0x23) {
                        *(int *)(unsigned)(puVar7 + -0x1b4) = iVar2 + -1;
                        if ((((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x1b4)] == 0x22) ||
                           (*(int *)(unsigned)(puVar7 + -0x1b8) = iVar2 + -2,
                           ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x1b8)] == 0x22)) {
                          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,0x23,iVar5,ar7));
                          *(int *)(unsigned)(puVar7 + -0x1bc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
                          *(char *)(unsigned)(*(int *)(unsigned)(puVar7 + -0x1bc) + 0x23) =
                               *(char *)(unsigned)(*(int *)(unsigned)(puVar7 + -0x1bc) + 0x23) + '\x01';
                        }
                        else {
                          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,0x16,0x8c35468c,ar7));
                        }
                      }
                      if ((*(undefined4 *)(unsigned)(unsigned)0x8c436768) == 0) {
                        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c92d),((undefined1 *)(unsigned)0x8c13c934),((void *)0x8c0bf170)));
                      }
                      else {
                        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c92d),((undefined1 *)(unsigned)0x8c13c93a),ar7));
                      }
                      *(int *)(unsigned)(puVar7 + -0x1c4) = iVar2;
                      *(int *)(unsigned)(puVar7 + -0x1c0) =
                           ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)[*(int *)(unsigned)(puVar7 + -0x1c4)] + (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
                      *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x1c0)) = *((char *)(unsigned long)*(unsigned *)(unsigned)(puVar7 + -0x1c0)) + '\x01';
                      (*(undefined4 *)(unsigned)(unsigned)0x8c436764) = (*(undefined4 *)(unsigned)(unsigned)0x8c436764) + -1;
                      (*(undefined4 *)(unsigned)(unsigned)0x8c436768) = 1;
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_8c0be818:
    }
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 7;
    break;
  case 7:
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c436754) == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x44) = 0xf;
    }
    else if (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 5) == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x44) = 0xf;
    }
    else {
      if ((((0 < (*(undefined4 *)(unsigned)(unsigned)0x8c43674c)) && (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x1e) == '\0')) &&
          (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x1f) == '\0')) && (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x20) == '\0')) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c436748) = (*(undefined4 *)(unsigned)(unsigned)0x8c43674c);
        (*(undefined4 *)(unsigned)(unsigned)0x8c43674c) = 0;
      }
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c940),((undefined1 *)(unsigned)0x8c13c025),ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x44) = 8;
    }
    break;
  case 8:
    if (0 < (*(undefined4 *)(unsigned)(unsigned)0x8c436738)) {
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,0,0x14,ar7));
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5f0(0x8c35468c,(*(undefined4 *)(unsigned)(unsigned)0x8c436738),((void *)0x8c0fa5f0),ar7));
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c94c),((undefined1 *)(unsigned)0x8c13c025),ar7));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 9;
    break;
  case 9:
    if (0 < (*(undefined4 *)(unsigned)(unsigned)0x8c436740) + (*(undefined4 *)(unsigned)(unsigned)0x8c43673c)) {
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,1,0x14,ar7));
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5f0(0x8c35468c,(*(undefined4 *)(unsigned)(unsigned)0x8c436740) + (*(undefined4 *)(unsigned)(unsigned)0x8c43673c),puVar4,ar7));
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c94c),((undefined1 *)(unsigned)0x8c13c025),ar7));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 10;
    break;
  case 10:
    if (0 < (*(undefined4 *)(unsigned)(unsigned)0x8c436744)) {
      pcVar6 = ((void *)0x8c0fa5bc);
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,2,((void *)0x8c0fa5bc),ar7));
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5f0(0x8c35468c,(*(undefined4 *)(unsigned)(unsigned)0x8c436744),pcVar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c94c),((undefined1 *)(unsigned)0x8c13c025),ar7));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 0xb;
    break;
  case 0xb:
    if (0 < (*(undefined4 *)(unsigned)(unsigned)0x8c436748)) {
      puVar4 = ((undefined1 *)(unsigned)0x8c4366f4);
      if (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x1e) == '\0') {
        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,3,((undefined1 *)(unsigned)0x8c4366f4),ar7));
        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5f0(0x8c35468c,(*(undefined4 *)(unsigned)(unsigned)0x8c436748),puVar4,ar7));
        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c94c),((undefined1 *)(unsigned)0x8c13c025),ar7));
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c43674c) = (*(undefined4 *)(unsigned)(unsigned)0x8c436748);
        (*(undefined4 *)(unsigned)(unsigned)0x8c436748) = 0;
      }
    }
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 0xc;
    break;
  case 0xc:
    if (0 < (*(undefined4 *)(unsigned)(unsigned)0x8c43674c)) {
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,4,0x14,ar7));
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5f0(0x8c35468c,(*(undefined4 *)(unsigned)(unsigned)0x8c43674c),puVar4,ar7));
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c94c),((undefined1 *)(unsigned)0x8c13c025),ar7));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 0xd;
    break;
  case 0xd:
    if (0 < (*(undefined4 *)(unsigned)(unsigned)0x8c436754)) {
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c958),((undefined1 *)(unsigned)0x8c13c025),ar7));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 0xe;
    break;
  case 0xe:
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c436734) < 1) || (7 < (*(undefined4 *)(unsigned)(unsigned)0x8c436734))) {
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,0,0x14,ar7));
      if (in_FPSCR_SZ == '\0') {
        puVar3 = (undefined1 *)(unsigned)0x42840000;
        fVar10 = (*(undefined4 *)(unsigned)(unsigned)0x8c431c18);
      }
      else {
        fVar10 = 66.0;
        puVar3 = ((undefined1 *)(unsigned)0x8c4366f0);
      }
      if (((in_FPSCR_PR != '\0' || (float)(uint)puVar3 <= fVar10) || (*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) < 5)) ||
         (0x17 < *((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0))) {
        if ((((*(undefined4 *)(unsigned)(unsigned)0x8c43675c) < 3) && (0xf < *((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0))) &&
           ((*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) < 0x25 &&
            (puVar4 = (undefined1 *)(unsigned)(int)*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0xc),
            '\0' < *(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0xc))))) {
          (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,2,puVar4,ar7));
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            puVar3 = (undefined1 *)(unsigned)0x42200000;
            fVar10 = (*(undefined4 *)(unsigned)(unsigned)0x8c432f24);
          }
          else {
            fVar10 = 40.0;
            puVar3 = ((undefined1 *)(unsigned)0x8c4366f0);
          }
          if (((in_FPSCR_PR == '\0' && fVar10 < (float)(uint)puVar3) &&
              (ar7 = (char *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0), 0xf < (int)ar7)) &&
             ((*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0) < 0x25 && ('\0' < *(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0xc))))) {
            (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,3,puVar4,ar7));
          }
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,1,puVar4,ar7));
      }
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c96f),((undefined1 *)(unsigned)0x8c13c025),ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,(*(undefined4 *)(unsigned)(unsigned)0x8c436730),0x14,ar7));
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5f0(0x8c35468c,(*(undefined4 *)(unsigned)(unsigned)0x8c436734),puVar4,ar7));
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c962),((undefined1 *)(unsigned)0x8c13c025),ar7));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 0xf;
    break;
  case 0xf:
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x10;
    pcVar6 = ((void *)0x8c0fa5bc);
    (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0),((void *)0x8c0fa5bc),ar7));
    switch(*((undefined4 *)(unsigned long)*(unsigned *)0x8c4366f0)) {
    case 4:
    case 5:
    case 6:
    case 7:
      if ('\x03' < (*(undefined1 *)(unsigned)0x8c43676c)) {
        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,8,((undefined1 *)(unsigned)0x8c43676c),ar7));
      }
      break;
    case 8:
    case 9:
    case 0xc:
    case 0x14:
    case 0x18:
    case 0x19:
    case 0x21:
      break;
    default:
      if (((*(undefined1 *)(unsigned)0x8c43676e) < '\x01') || (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x12) != '\0')) {
        if ((*(undefined1 *)(unsigned)0x8c43676f) < '\x01') {
          return 1;
        }
        if ((*(undefined1 *)(unsigned)0x8c436770) != '\0') {
          return 1;
        }
        if (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x21) != '\0') {
          return 1;
        }
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c43674c) == 1) {
          return 1;
        }
        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,0x33,(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x21),ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0fa5bc(0x8c35468c,0x32,pcVar6,ar7));
      }
      break;
    case 0xf:
      if ((*(undefined1 *)(unsigned)0x8c43676d) < '\x01') {
        return 1;
      }
      if (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0xc) != '\0') {
        return 1;
      }
      break;
    case 0x10:
    case 0x11:
      if ('\x01' < *(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x43)) {
        return 1;
      }
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c436740) != 2) {
        return 1;
      }
      if (*(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0xd) != '\0') {
        return 1;
      }
      *(int *)(unsigned)(puVar7 + -0x1c8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4366f4);
      *(char *)(unsigned)(*(int *)(unsigned)(puVar7 + -0x1c8) + 0x43) =
           *(char *)(unsigned)(*(int *)(unsigned)(puVar7 + -0x1c8) + 0x43) + '\x01';
      break;
    case 0x13:
      if ('\0' < *(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x14)) {
        return 1;
      }
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c436744) == 1) {
        return 1;
      }
      break;
    case 0x1f:
      if ('\0' < *(char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4366f4) + 0x20)) {
        return 1;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c97a),((undefined1 *)(unsigned)0x8c13c025),ar7));
    break;
  case 0x10:
    (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c984),((undefined1 *)(unsigned)0x8c13c025),ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x13;
    *(undefined4 *)(unsigned)(ar4 + 0x14c) = 2;
    break;
  case 0x13:
    if ((*(int *)(unsigned)(ar4 + 0x14c) == 0) && ((*(undefined4 *)(unsigned)(unsigned)0x8c4362f0) != 0xe)) {
      *(undefined4 *)(unsigned)(ar4 + 0x44) = 1;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 488)), FUN_8c0bf170(ar4,((undefined1 *)(unsigned)0x8c13c98b),((undefined1 *)(unsigned)0x8c13c025),ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x14;
      *(undefined4 *)(unsigned)(ar4 + 0x14c) = 2;
    }
    break;
  case 0x14:
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x12;
    *(undefined4 *)(unsigned)(ar4 + 0x14c) = 2;
  }
  return 1;
}

__asm__(".globl _FUN_8c0bcedc\n.set _FUN_8c0bcedc, _FUN_8c0bcedc_def\n");
//@unit 8c0bf064
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined8 * FUN_8c0bf064_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf064";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  
  if (*(int *)(unsigned)(0x226f4 + ar4) == 0) {
    puVar1 = ((undefined1 *)(unsigned)0x8c0bf0a0);
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf0ac(ar4 + 0x13b8c,ar5,ar6,ar7));
    puVar1 = (undefined8 *)(unsigned)0x0;
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0bf064\n.set _FUN_8c0bf064, _FUN_8c0bf064_def\n");
//@unit 8c0bf0ac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bf0ac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf0ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0xeb40;
}

__asm__(".globl _FUN_8c0bf0ac\n.set _FUN_8c0bf0ac, _FUN_8c0bf0ac_def\n");
//@unit 8c0bf0bc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bf0bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf0bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0bf0e8(ar4 + 0x13b24,ar5,ar6,ar7); });
  return 4;
}

__asm__(".globl _FUN_8c0bf0bc\n.set _FUN_8c0bf0bc, _FUN_8c0bf0bc_def\n");
//@unit 8c0bf0e8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bf0e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf0e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c0bf0e8\n.set _FUN_8c0bf0e8, _FUN_8c0bf0e8_def\n");
//@unit 8c0bf0f0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bf0f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf0f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0bf11c(ar4 + 0x13b70,ar5,ar6,ar7); });
  return 4;
}

__asm__(".globl _FUN_8c0bf0f0\n.set _FUN_8c0bf0f0, _FUN_8c0bf0f0_def\n");
//@unit 8c0bf11c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bf11c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf11c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c0bf11c\n.set _FUN_8c0bf11c, _FUN_8c0bf11c_def\n");
//@unit 8c0bf124
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_28_0bf124_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_28_0bf124";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x28);
}

__asm__(".globl _get_field_28_0bf124\n.set _get_field_28_0bf124, _get_field_28_0bf124_def\n");
//@unit 8c0bf12c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bf12c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf12c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0bf12c\n.set _FUN_8c0bf12c, _FUN_8c0bf12c_def\n");
//@unit 8c0bf154
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_300_0bf154_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_300_0bf154";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x300 + ar4);
}

__asm__(".globl _get_field_300_0bf154\n.set _get_field_300_0bf154, _get_field_300_0bf154_def\n");
//@unit 8c0bf160
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bf160_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf160";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + ar5 * 4 + 8);
}

__asm__(".globl _FUN_8c0bf160\n.set _FUN_8c0bf160, _FUN_8c0bf160_def\n");
//@unit 8c0bf170
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bf170_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf170";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  
  (*(undefined4 *)(unsigned)(unsigned)0x8c4362f0) = 0;
  ar6_00 = ar6;
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(0x8c4362a0,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(0x8c4362c0,ar6,ar6_00,ar7); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c43627c) = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f8320(0x8c35468c,6,0x8c436280,ar7));
  return (*(undefined4 *)(unsigned)(unsigned)0x8c43627c);
}

__asm__(".globl _FUN_8c0bf170\n.set _FUN_8c0bf170, _FUN_8c0bf170_def\n");
//@unit 8c0bf1c8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0bf1c8_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf1c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = ar5 + 0x30;
  for (iVar3 = 4; -1 < iVar3; iVar3 = iVar3 + -1) {
    if ((0x29 < *(int *)(unsigned)(iVar3 * 4 + iVar2)) && (*(int *)(unsigned)(iVar3 * 4 + iVar2) < 0x30)) {
      *(undefined4 *)(unsigned)(iVar3 * 4 + iVar2) = 0;
    }
    pcVar1 = (char *)(unsigned)(*(int *)(unsigned)(iVar3 * 4 + iVar2) + ar5 + 0x44);
    in_r0 = *pcVar1 + 1;
    *pcVar1 = (char)in_r0;
  }
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c0bf1c8\n.set _FUN_8c0bf1c8, _FUN_8c0bf1c8_def\n");
//@unit 8c0bf22c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bf22c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf22c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int *a4;
  undefined4 uVar1;
  undefined4 ar6_00;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    a4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0bf160(*(undefined4 *)(unsigned)(0x7d8 + ar5),iVar2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x1b0 + *a4))))(a4,0,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021ce8))))
            (0x8c2b59d0,*(undefined4 *)(unsigned)(0x144 + ar4),ar6,ar7));
  uVar1 = *(undefined4 *)(unsigned)(0x148 + ar4);
  (vsp = ((unsigned long)(fr0_ - 4)), pack_release_entry_handle(0x8c2b59d0,uVar1,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0fa2b8(0x8c35468c,uVar1,ar6,ar7));
  if (iVar2 == 1) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0f8214(0x8c35468c,uVar1,ar6,ar7));
  }
  *(undefined4 *)(unsigned)(0x154 + ar4) = 0xffffff;
  ar6_00 = 0;
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0c3e78(0x8c2b5628,0xffffffff,0,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), s_Failed_s_015312(ar4 + 0x48,uVar1,ar6_00,ar7));
  *(undefined4 *)(unsigned)(0x14c + ar4) = 4;
  *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x12;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0ba5bc(ar4 + 0x158,uVar1,ar6_00,ar7));
  *(undefined4 *)(unsigned)(ar4 + 8) = 0;
  *(undefined4 *)(unsigned)(0x7dc + ar5) = 1;
  return 1;
}

__asm__(".globl _FUN_8c0bf22c\n.set _FUN_8c0bf22c, _FUN_8c0bf22c_def\n");
//@unit 8c0bf338
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0bf338_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf338";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba898(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12b334));
  ar4[2] = 0;
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13be20));
  uVar2 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13be20)) + 4);
  ar4[3] = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13be20));
  ar4[4] = uVar2;
  ar4[5] = *(undefined4 *)(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13be2c));
  uVar2 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13be2c)) + 4);
  ar4[6] = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13be2c));
  ar4[7] = uVar2;
  ar4[8] = *(undefined4 *)(unsigned)(puVar1 + 8);
  return ar4;
}

__asm__(".globl _FUN_8c0bf338\n.set _FUN_8c0bf338, _FUN_8c0bf338_def\n");
//@unit 8c0bf38c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * Class_12b334_m0_0bf38c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b334_m0_0bf38c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12b334);
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 12)), free_if_nonnull_wrap_0ba8ac(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12b334_m0_0bf38c\n.set _Class_12b334_m0_0bf38c, _Class_12b334_m0_0bf38c_def\n");
//@unit 8c0bf3d4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int Class_12b334_m1_0bf3d4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b334_m1_0bf3d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), pure_virtual_stub(ar4,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bb1bc(*(undefined4 *)(unsigned)(0x7cc + ar5),iVar1,ar6,ar7));
  if (iVar1 == 1) {
    *(undefined4 *)(unsigned)(ar4 + 8) = 0;
    iVar1 = 0x7dc;
    *(undefined4 *)(unsigned)(0x7dc + ar5) = 0;
  }
  return iVar1;
}

__asm__(".globl _Class_12b334_m1_0bf3d4\n.set _Class_12b334_m1_0bf3d4, _Class_12b334_m1_0bf3d4_def\n");
//@unit 8c0bf440
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_EPILOG_0bf440_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_EPILOG_0bf440";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  ({ unsigned long ri0_ = (unsigned long)(0xffffffff); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); noop_102824(((undefined1 *)(unsigned)0x8c13c990),300,0x1d6,0xd); });
  return 1;
}

__asm__(".globl _s_EPILOG_0bf440\n.set _s_EPILOG_0bf440, _s_EPILOG_0bf440_def\n");
//@unit 8c0bf478
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0bf478_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf478";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1026ec(ar4 + 0x28,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf7a8(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c0bf478\n.set _FUN_8c0bf478, _FUN_8c0bf478_def\n");
//@unit 8c0bf4a4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined * FUN_8c0bf4a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf4a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  float fVar2;
  
  puVar1 = ((undefined *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  if (puVar1 == (undefined *)(unsigned)0x1) {
    fVar2 = *(float *)(unsigned)(ar4 + 0x2c) - 15.0;
    *(float *)(unsigned)(ar4 + 0x2c) = fVar2;
    puVar1 = (undefined *)(unsigned)0x8;
    if (fVar2 <= 0.0) {
      *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      puVar1 = (undefined *)(unsigned)0x0;
      *(undefined4 *)(unsigned)(ar4 + 4) = 0;
    }
  }
  else if (puVar1 == (undefined *)(unsigned)0x2) {
    fVar2 = *(float *)(unsigned)(ar4 + 0x2c) + 15.0;
    *(float *)(unsigned)(ar4 + 0x2c) = fVar2;
    puVar1 = ((undefined1 *)(unsigned)0x8c0bf540);
    if (660.0 <= fVar2) {
      *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x44250000;
      *(undefined4 *)(unsigned)(ar4 + 4) = 0;
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf548(ar4,ar5,ar6,ar7));
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0bf4a4\n.set _FUN_8c0bf4a4, _FUN_8c0bf4a4_def\n");
//@unit 8c0bf548
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bf548_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf548";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  return 0;
}

__asm__(".globl _FUN_8c0bf548\n.set _FUN_8c0bf548, _FUN_8c0bf548_def\n");
//@unit 8c0bf550
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bf550_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf550";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf804(ar4,ar5,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bfa78(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0bf550\n.set _FUN_8c0bf550, _FUN_8c0bf550_def\n");
//@unit 8c0bf588
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bf588_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf588";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  
  uVar2 = 2;
  if (*(int *)(unsigned)(ar4 + 4) == 0) {
    ar5_00 = ar5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf708(ar5,ar5,ar6,ar7));
    if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x24) == 1)) {
      *(undefined4 *)(unsigned)(ar4 + 0x24) = 0;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf690(ar5,ar5_00,ar6,ar7));
      if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x24) == 0)) {
        *(undefined4 *)(unsigned)(ar4 + 0x24) = 1;
      }
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf618(ar5,ar5_00,ar6,ar7));
    if (iVar1 == 1) {
      if (*(int *)(unsigned)(ar4 + 0x24) == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0bf588\n.set _FUN_8c0bf588, _FUN_8c0bf588_def\n");
//@unit 8c0bf618
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bf618_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf618";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01f538))))
                    (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((iVar1 == 1) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01f538))))
                        (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 2)) {
    return 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01edcc(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((iVar1 == 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01eb94(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
     iVar1 == 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c0bf618\n.set _FUN_8c0bf618, _FUN_8c0bf618_def\n");
//@unit 8c0bf690
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bf690_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf690";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01f538))))
                    (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((iVar1 == 1) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01f538))))
                        (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 2)) {
    return 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f1e8(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((iVar1 == 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ec20(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
     iVar1 == 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c0bf690\n.set _FUN_8c0bf690, _FUN_8c0bf690_def\n");
//@unit 8c0bf708
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bf708_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf708";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01f538))))
                    (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((iVar1 == 1) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01f538))))
                        (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 2)) {
    return 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f118(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((iVar1 == 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ecf8(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
     iVar1 == 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c0bf708\n.set _FUN_8c0bf708, _FUN_8c0bf708_def\n");
//@unit 8c0bf780
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bf780_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf780";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01eb94(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0bf780\n.set _FUN_8c0bf780, _FUN_8c0bf780_def\n");
//@unit 8c0bf7a8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bf7a8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf7a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 2;
  ar4[3] = 1;
  ar4[9] = 0;
  ar4[0xb] = 0;
  return 0;
}

__asm__(".globl _FUN_8c0bf7a8\n.set _FUN_8c0bf7a8, _FUN_8c0bf7a8_def\n");
//@unit 8c0bf7c8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bf7c8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf7c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 1;
  return 1;
}

__asm__(".globl _FUN_8c0bf7c8\n.set _FUN_8c0bf7c8, _FUN_8c0bf7c8_def\n");
//@unit 8c0bf7d0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bf7d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf7d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x9b7
                    ); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
                    (ar4 + 0x10,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c0bf7d0\n.set _FUN_8c0bf7d0, _FUN_8c0bf7d0_def\n");
//@unit 8c0bf804
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bf804_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf804";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 216; for (int i_ = 0; i_ < 216; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  (*(undefined4 *)(fr0_ - 0x2c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13be38);
  (*(undefined4 *)(fr0_ - 0x28)) = (*(undefined1 *)(unsigned)0x8c13be3c);
  (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined1 *)(unsigned)0x8c13be40);
  (*(undefined4 *)(fr0_ - 0x20)) = (*(undefined1 *)(unsigned)0x8c13be44);
  (*(undefined4 *)(fr0_ - 0x1c)) = (*(undefined1 *)(unsigned)0x8c13be48);
  (*(undefined4 *)(fr0_ - 0x18)) = (*(undefined1 *)(unsigned)0x8c13be4c);
  (*(undefined4 *)(fr0_ - 0x14)) = (*(undefined1 *)(unsigned)0x8c13be50);
  (*(undefined4 *)(fr0_ - 0x10)) = (*(undefined1 *)(unsigned)0x8c13be54);
  (*(undefined4 *)(fr0_ - 0x4c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13be58);
  (*(undefined4 *)(fr0_ - 0x48)) = (*(undefined1 *)(unsigned)0x8c13be5c);
  (*(undefined4 *)(fr0_ - 0x44)) = (*(undefined1 *)(unsigned)0x8c13be60);
  (*(undefined4 *)(fr0_ - 0x40)) = (*(undefined1 *)(unsigned)0x8c13be64);
  (*(undefined4 *)(fr0_ - 0x3c)) = (*(undefined1 *)(unsigned)0x8c13be68);
  (*(undefined4 *)(fr0_ - 0x38)) = (*(undefined1 *)(unsigned)0x8c13be6c);
  (*(undefined4 *)(fr0_ - 0x34)) = (*(undefined1 *)(unsigned)0x8c13be70);
  (*(undefined4 *)(fr0_ - 0x30)) = (*(undefined1 *)(unsigned)0x8c13be74);
  (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c0162f8(((undefined1 *)(fr0_ - 0x60)),ar5,ar6,ar7));
  uVar4 = 4;
  uVar3 = 0x8c43654c;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x6c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 216)); FUN_8c016318(((undefined1 *)(fr0_ - 0x60)),&(*(undefined4 *)(fr0_ - 0x2c)),0x8c43654c,4); });
  (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c016324(((undefined1 *)(fr0_ - 0x60)),((undefined1 *)(unsigned)0x8c43655c),uVar3,uVar4));
  uVar2 = 0x80000060;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x6c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 216)); FUN_8c015198(((undefined1 *)(fr0_ - 0x60)),0x80000060,uVar3,uVar4); });
  (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c0c453c(((undefined1 *)(unsigned)0x8c2b5628),uVar2,uVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c01538c(ar5,uVar2,uVar3,uVar4));
  uVar2 = *(undefined4 *)(unsigned)(ar4 + 8);
  (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c014a94(ar5,uVar2,uVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c01636c(((undefined1 *)(fr0_ - 0x60)),uVar2,uVar3,uVar4));
  uVar4 = 4;
  uVar3 = 0x8c43654c;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x6c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 216)); FUN_8c016318(((undefined1 *)(fr0_ - 0x60)),&(*(undefined4 *)(fr0_ - 0x4c)),0x8c43654c,4); });
  uVar2 = 1;
  (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c014a94(ar5,1,uVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c01636c(((undefined1 *)(fr0_ - 0x60)),uVar2,uVar3,uVar4));
  iVar1 = *(int *)(unsigned)(ar4 + 8);
  if (iVar1 == 3) {
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D(0x42e20000,*(undefined4 *)(unsigned)(ar4 + 0x2c));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2c);
      dVar5 = -1.3340701484224984e-249;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c436774) = 0x43360000;
    if (cVar6 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c436778) = F32LO(dVar5) + F32HI(dVar5);
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c436778) = SUB84(dVar5 + dVar5,0);
    }
    if (cVar7 != '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c436778) = (float)in_xd0;
      (*(uint *)(unsigned)0x8c43677c) = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c0c3b74(((undefined1 *)(unsigned)0x8c2b5628),uVar2,uVar3,uVar4));
  }
  else if (iVar1 == 5) {
    (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c1f8176((fr0_ + (int)0xffffff94),uVar2,uVar3,uVar4));
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D(0x42c60000,*(undefined4 *)(unsigned)(ar4 + 0x2c));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2c);
      dVar5 = 9.367488658879283e+17;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c436774) = 0x43360000;
    if (cVar6 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c436778) = F32LO(dVar5) + F32HI(dVar5);
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c436778) = SUB84(dVar5 + dVar5,0);
    }
    if (cVar7 != '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c436778) = (float)in_xd0;
      (*(uint *)(unsigned)0x8c43677c) = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c0c3b74(((undefined1 *)(unsigned)0x8c2b5628),uVar2,uVar3,uVar4));
  }
  else if (iVar1 == 9) {
    if (cVar7 != '\0') {
      (*(uint *)(unsigned)0x8c43677c) = 0x3f19999a;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c436778) = 145.0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436774) = 0x43aa0000;
    uVar4 = 0x10;
    uVar3 = 0;
    (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c0c4370(((undefined1 *)(unsigned)0x8c2b5628),ar4 + 0x10,0,0x10));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 216)), free_if_nonnull_wrap_0151a0(((undefined1 *)(fr0_ - 0x60)),0xffffffff,uVar3,uVar4));
  return uVar2;
}

__asm__(".globl _FUN_8c0bf804\n.set _FUN_8c0bf804, _FUN_8c0bf804_def\n");
//@unit 8c0bfa78
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0bfa78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bfa78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 320; for (int i_ = 0; i_ < 320; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  double dVar5;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  (*(undefined4 *)(fr0_ - 0x2c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13be78);
  (*(undefined4 *)(fr0_ - 0x28)) = (*(undefined1 *)(unsigned)0x8c13be7c);
  (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined1 *)(unsigned)0x8c13be80);
  (*(undefined4 *)(fr0_ - 0x20)) = (*(undefined1 *)(unsigned)0x8c13be84);
  (*(undefined4 *)(fr0_ - 0x1c)) = (*(undefined1 *)(unsigned)0x8c13be88);
  (*(undefined4 *)(fr0_ - 0x18)) = (*(undefined1 *)(unsigned)0x8c13be8c);
  (*(undefined4 *)(fr0_ - 0x14)) = (*(undefined1 *)(unsigned)0x8c13be90);
  (*(undefined4 *)(fr0_ - 0x10)) = (*(undefined1 *)(unsigned)0x8c13be94);
  (*(float *)(fr0_ - 0x4c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13be98);
  (*(float *)(fr0_ - 0x48)) = (*(undefined1 *)(unsigned)0x8c13be9c);
  (*(float *)(fr0_ - 0x44)) = (*(undefined1 *)(unsigned)0x8c13bea0);
  (*(float *)(fr0_ - 0x40)) = (*(undefined1 *)(unsigned)0x8c13bea4);
  (*(float *)(fr0_ - 0x3c)) = (*(undefined1 *)(unsigned)0x8c13bea8);
  (*(float *)(fr0_ - 0x38)) = (*(undefined1 *)(unsigned)0x8c13beac);
  (*(float *)(fr0_ - 0x34)) = (*(undefined1 *)(unsigned)0x8c13beb0);
  (*(float *)(fr0_ - 0x30)) = (*(undefined1 *)(unsigned)0x8c13beb4);
  (*(float *)(fr0_ - 0x6c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13beb8);
  (*(float *)(fr0_ - 0x68)) = (*(undefined1 *)(unsigned)0x8c13bebc);
  (*(float *)(fr0_ - 0x64)) = (*(undefined1 *)(unsigned)0x8c13bec0);
  (*(float *)(fr0_ - 0x60)) = (*(undefined1 *)(unsigned)0x8c13bec4);
  (*(float *)(fr0_ - 0x5c)) = (*(undefined1 *)(unsigned)0x8c13bec8);
  (*(float *)(fr0_ - 0x58)) = (*(undefined1 *)(unsigned)0x8c13becc);
  (*(float *)(fr0_ - 0x54)) = (*(undefined1 *)(unsigned)0x8c13bed0);
  (*(float *)(fr0_ - 0x50)) = (*(undefined1 *)(unsigned)0x8c13bed4);
  (*(undefined4 *)(fr0_ - 0x8c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13bed8);
  (*(undefined4 *)(fr0_ - 0x88)) = (*(undefined1 *)(unsigned)0x8c13bedc);
  (*(undefined4 *)(fr0_ - 0x84)) = (*(undefined1 *)(unsigned)0x8c13bee0);
  (*(undefined4 *)(fr0_ - 0x80)) = (*(undefined1 *)(unsigned)0x8c13bee4);
  (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c0162f8((fr0_ + (int)0xffffff60),ar5,ar6,ar7));
  (*(undefined2 *)(fr0_ - 0x7c)) = 0;
  (*(undefined2 *)(fr0_ - 0x7a)) = 0xff;
  (*(undefined2 *)(fr0_ - 0x78)) = 0;
  (*(undefined2 *)(fr0_ - 0x76)) = 0x80;
  (*(undefined2 *)(fr0_ - 0x74)) = 0xff;
  (*(undefined2 *)(fr0_ - 0x72)) = 0x80;
  (*(undefined2 *)(fr0_ - 0x70)) = 0xff;
  (*(undefined2 *)(fr0_ - 0x6e)) = 0xff;
  uVar4 = 4;
  puVar3 = (undefined4 *)(unsigned)0x8c43654c;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xa0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 320)); FUN_8c016318((fr0_ + (int)0xffffff60),&(*(undefined4 *)(fr0_ - 0x2c)),0x8c43654c,4); });
  (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c016324((fr0_ + (int)0xffffff60),&(*(undefined2 *)(fr0_ - 0x7c)),puVar3,uVar4));
  uVar1 = 0x80000060;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xa0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 320)); FUN_8c015198((fr0_ + (int)0xffffff60),0x80000060,puVar3,uVar4); });
  (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c01538c(ar5,uVar1,puVar3,uVar4));
  uVar1 = 0xc;
  (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c014a94(ar5,0xc,puVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c01636c((fr0_ + (int)0xffffff60),uVar1,puVar3,uVar4));
  if (*(int *)(unsigned)(ar4 + 0xc) == 0) {
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c014a94(ar5,0xc,puVar3,uVar4));
    if (*(int *)(unsigned)(ar4 + 0x24) == 1) {
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x4c)));
      }
      else {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x48)),(*(float *)(fr0_ - 0x4c)));
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x4c)) = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x4c)) = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x48)));
      }
      else {
        (*(float *)(fr0_ - 0x4c)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x48)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x44)),(*(float *)(fr0_ - 0x48)));
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x48)) = F32LO(dVar5) + F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x48)) = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x44)));
      }
      else {
        (*(float *)(fr0_ - 0x48)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x44)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x40)),(*(float *)(fr0_ - 0x44)));
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x44)) = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x44)) = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x40)));
      }
      else {
        (*(float *)(fr0_ - 0x44)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x40)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x3c)),(*(float *)(fr0_ - 0x40)));
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x40)) = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x40)) = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x3c)));
      }
      else {
        (*(float *)(fr0_ - 0x40)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x3c)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x38)),(*(float *)(fr0_ - 0x3c)));
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x3c)) = F32LO(dVar5) + F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x3c)) = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x38)));
      }
      else {
        (*(float *)(fr0_ - 0x3c)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x38)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x34)),(*(float *)(fr0_ - 0x38)));
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x38)) = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x38)) = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x34)));
      }
      else {
        (*(float *)(fr0_ - 0x38)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x34)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x30)),(*(float *)(fr0_ - 0x34)));
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x34)) = F32LO(dVar5) + F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x34)) = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x30)));
      }
      else {
        (*(float *)(fr0_ - 0x34)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x30)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x30)) = F32LO(dVar5) + F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x30)) = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 != '\0') {
        (*(float *)(fr0_ - 0x30)) = (float)in_xd0;
        (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      (*(undefined2 *)(fr0_ - 0x7c)) = 0;
      (*(undefined2 *)(fr0_ - 0x7a)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x78)) = 0;
      (*(undefined2 *)(fr0_ - 0x76)) = 0;
      (*(undefined2 *)(fr0_ - 0x74)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x72)) = 0;
      (*(undefined2 *)(fr0_ - 0x70)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x6e)) = 0x7f;
      uVar1 = 4;
      puVar3 = &(*(undefined4 *)(fr0_ - 0x8c));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xa0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 320)); FUN_8c016318((fr0_ + (int)0xffffff60),&(*(float *)(fr0_ - 0x4c)),puVar3,4); });
      puVar2 = &(*(undefined2 *)(fr0_ - 0x7c));
      (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c016324((fr0_ + (int)0xffffff60),puVar2,puVar3,uVar1));
      (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c01636c((fr0_ + (int)0xffffff60),puVar2,puVar3,uVar1));
      (*(undefined2 *)(fr0_ - 0x7c)) = 0x80;
      (*(undefined2 *)(fr0_ - 0x7a)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x78)) = 0x80;
      (*(undefined2 *)(fr0_ - 0x76)) = 0;
      (*(undefined2 *)(fr0_ - 0x74)) = 0xff;
      (*(undefined2 *)(fr0_ - 0x72)) = 0;
      (*(undefined2 *)(fr0_ - 0x70)) = 0xff;
      (*(undefined2 *)(fr0_ - 0x6e)) = 0x7f;
      uVar4 = 4;
      puVar3 = (undefined4 *)(unsigned)0x8c43654c;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xa0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 320)); FUN_8c016318((fr0_ + (int)0xffffff60),&(*(float *)(fr0_ - 0x6c)),0x8c43654c,4); });
      puVar2 = &(*(undefined2 *)(fr0_ - 0x7c));
      (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c016324((fr0_ + (int)0xffffff60),puVar2,puVar3,uVar4));
      (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c01636c((fr0_ + (int)0xffffff60),puVar2,puVar3,uVar4));
    }
    else {
      (*(undefined2 *)(fr0_ - 0x7c)) = 0;
      (*(undefined2 *)(fr0_ - 0x7a)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x78)) = 0;
      (*(undefined2 *)(fr0_ - 0x76)) = 0;
      (*(undefined2 *)(fr0_ - 0x74)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x72)) = 0;
      (*(undefined2 *)(fr0_ - 0x70)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x6e)) = 0x7f;
      uVar4 = 4;
      uVar1 = 0x8c43654c;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xa0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 320)); FUN_8c016318((fr0_ + (int)0xffffff60),&(*(float *)(fr0_ - 0x4c)),0x8c43654c,4); });
      puVar2 = &(*(undefined2 *)(fr0_ - 0x7c));
      (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c016324((fr0_ + (int)0xffffff60),puVar2,uVar1,uVar4));
      (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c01636c((fr0_ + (int)0xffffff60),puVar2,uVar1,uVar4));
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x6c)));
      }
      else {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x68)),(*(float *)(fr0_ - 0x6c)));
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x6c)) = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x6c)) = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x68)));
      }
      else {
        (*(float *)(fr0_ - 0x6c)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x68)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x64)),(*(float *)(fr0_ - 0x68)));
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x68)) = F32LO(dVar5) + F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x68)) = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x64)));
      }
      else {
        (*(float *)(fr0_ - 0x68)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x64)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x60)),(*(float *)(fr0_ - 0x64)));
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x64)) = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x64)) = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x60)));
      }
      else {
        (*(float *)(fr0_ - 0x64)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x60)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x5c)),(*(float *)(fr0_ - 0x60)));
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x60)) = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x60)) = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x5c)));
      }
      else {
        (*(float *)(fr0_ - 0x60)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x5c)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x58)),(*(float *)(fr0_ - 0x5c)));
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x5c)) = F32LO(dVar5) + F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x5c)) = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x58)));
      }
      else {
        (*(float *)(fr0_ - 0x5c)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x58)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x54)),(*(float *)(fr0_ - 0x58)));
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x58)) = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x58)) = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x54)));
      }
      else {
        (*(float *)(fr0_ - 0x58)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x54)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x50)),(*(float *)(fr0_ - 0x54)));
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x54)) = F32LO(dVar5) + F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x54)) = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x50)));
      }
      else {
        (*(float *)(fr0_ - 0x54)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x50)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x4c)),(*(float *)(fr0_ - 0x50)));
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x50)) = F32LO(dVar5) + F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x50)) = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 != '\0') {
        (*(float *)(fr0_ - 0x50)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x4c)) = F32HI(in_xd0);
      }
      (*(undefined2 *)(fr0_ - 0x7c)) = 0x80;
      (*(undefined2 *)(fr0_ - 0x7a)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x78)) = 0x80;
      (*(undefined2 *)(fr0_ - 0x76)) = 0;
      (*(undefined2 *)(fr0_ - 0x74)) = 0xff;
      (*(undefined2 *)(fr0_ - 0x72)) = 0;
      (*(undefined2 *)(fr0_ - 0x70)) = 0xff;
      (*(undefined2 *)(fr0_ - 0x6e)) = 0x7f;
      uVar4 = 4;
      puVar3 = &(*(undefined4 *)(fr0_ - 0x8c));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xa0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 320)); FUN_8c016318((fr0_ + (int)0xffffff60),&(*(float *)(fr0_ - 0x6c)),puVar3,4); });
      puVar2 = &(*(undefined2 *)(fr0_ - 0x7c));
      (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c016324((fr0_ + (int)0xffffff60),puVar2,puVar3,uVar4));
      (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c01636c((fr0_ + (int)0xffffff60),puVar2,puVar3,uVar4));
    }
  }
  else if (*(int *)(unsigned)(ar4 + 0xc) == 1) {
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c014a94(ar5,0xb,puVar3,uVar4));
    (*(undefined2 *)(fr0_ - 0x7c)) = 0;
    (*(undefined2 *)(fr0_ - 0x7a)) = 0xff;
    (*(undefined2 *)(fr0_ - 0x78)) = 0;
    (*(undefined2 *)(fr0_ - 0x76)) = 0;
    (*(undefined2 *)(fr0_ - 0x74)) = 0xff;
    (*(undefined2 *)(fr0_ - 0x72)) = 0;
    (*(undefined2 *)(fr0_ - 0x70)) = 0xff;
    (*(undefined2 *)(fr0_ - 0x6e)) = 0xff;
    puVar2 = &(*(undefined2 *)(fr0_ - 0x7c));
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c016324((fr0_ + (int)0xffffff60),puVar2,puVar3,uVar4));
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c01636c((fr0_ + (int)0xffffff60),puVar2,puVar3,uVar4));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 320)), free_if_nonnull_wrap_0151a0((fr0_ + (int)0xffffff60),0xffffffff,puVar3,uVar4));
  return uVar1;
}

__asm__(".globl _FUN_8c0bfa78\n.set _FUN_8c0bfa78, _FUN_8c0bfa78_def\n");
//@unit 8c0bff8c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int * FUN_8c0bff8c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bff8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba8e4(ar4 + 3,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c5340((int)ar4 + 0x17c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf338((int)ar4 + 0x2d578,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba2cc((int)ar4 + 0x2d59c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016410((int)ar4 + 0x2ddc4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ffb98((int)ar4 + 0x2de08,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fed18((int)ar4 + 0x2e3a8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224((int)ar4 + 0x2e64c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf478((int)ar4 + 0x2e710,ar5,ar6,ar7));
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13bee8));
  puVar3 = (undefined4 *)(unsigned)((int)ar4 + 0x2dd88);
  uVar2 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bee8)) + 4);
  *puVar3 = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bee8));
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13bef4));
  puVar3 = (undefined4 *)(unsigned)((int)ar4 + 0x2dd94);
  uVar2 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bef4)) + 4);
  *puVar3 = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bef4));
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13bf00));
  puVar3 = (undefined4 *)(unsigned)((int)ar4 + 0x2dda0);
  uVar2 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bf00)) + 4);
  *puVar3 = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bf00));
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13bf0c));
  puVar3 = (undefined4 *)(unsigned)((int)ar4 + 0x2ddac);
  uVar2 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bf0c)) + 4);
  *puVar3 = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bf0c));
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13bf18));
  puVar3 = (undefined4 *)(unsigned)((int)ar4 + 0x2ddb8);
  uVar2 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bf18)) + 4);
  *puVar3 = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bf18));
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(unsigned)(puVar1 + 8);
  *ar4 = (int)(ar4 + 3);
  ar4[1] = (int)ar4 + 0x17c;
  ar4[2] = (int)ar4 + 0x2d578;
  *(int *)(unsigned)(0x2dd68 + (int)ar4) = (int)ar4 + 0x2de08;
  *(int *)(unsigned)(0x2dd6c + (int)ar4) = (int)ar4 + 0x2e3a8;
  *(int *)(unsigned)(0x2dd74 + (int)ar4) = (int)ar4 + 0x17c;
  *(undefined4 *)(unsigned)(0x2dd7c + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0x2e75c + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0x2dd84 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0x2dd78 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0x2dd80 + (int)ar4) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0bff8c\n.set _FUN_8c0bff8c, _FUN_8c0bff8c_def\n");
