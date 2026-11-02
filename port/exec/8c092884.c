#include "../decls.h"
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
