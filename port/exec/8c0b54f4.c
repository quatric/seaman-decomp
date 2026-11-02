#include "../decls.h"
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
