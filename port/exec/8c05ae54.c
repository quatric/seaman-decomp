#include "../decls.h"
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
