#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_1299f8_m3_019f00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_1299f8_m3_019f00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 112; for (int i_ = 0; i_ < 112; i_++) z_[i_] = 0; }
  double dVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  double dVar3;
  float fVar5;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  bool bVar6;
  char cVar7;
  char cVar8;
  float fVar4;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_ctor_xyz(((undefined4 *)(fr0_ - 0x3c)),ar5,ar6,ar7));
  fVar5 = 0.0;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); Vec3_sub(uVar2,((undefined4 *)(fr0_ - 0x3c)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x58)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x6c)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c023c30(&(*(undefined4 *)(fr0_ - 0x1c)),ar4 + 0x80,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x2c)),(int)&(*(undefined8 *)(fr0_ - 0x6c)) + 4,ar6,ar7));
  ar5_00 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x6c)) + 4,0xffffffff,ar6,ar7));
  if (cVar8 == '\0') {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),(*(undefined4 *)(fr0_ - 0x1c)));
  }
  else {
    in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(undefined4 *)(fr0_ - 0x2c)));
  }
  if (cVar7 == '\0') {
    (*(float *)(fr0_ - 0x48)) = F32LO(dVar3) - F32HI(dVar3);
  }
  else {
    (*(float *)(fr0_ - 0x48)) = SUB84(dVar3 - dVar3,0);
  }
  if (cVar8 == '\0') {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(undefined4 *)(fr0_ - 0x18)));
  }
  else {
    (*(float *)(fr0_ - 0x48)) = (float)in_xd0;
    in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
  }
  if (cVar7 == '\0') {
    (*(float *)(fr0_ - 0x44)) = F32LO(dVar3) - F32HI(dVar3);
  }
  else {
    (*(float *)(fr0_ - 0x44)) = SUB84(dVar3 - dVar3,0);
  }
  if (cVar8 == '\0') {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x14)));
  }
  else {
    (*(float *)(fr0_ - 0x44)) = (float)in_xd0;
    in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
  }
  if (cVar7 == '\0') {
    fVar4 = F32HI(dVar3);
    dVar3 = CONCAT44D(fVar4,F32LO(dVar3) - fVar4);
  }
  else {
    dVar3 = dVar3 - dVar3;
  }
  if (cVar8 == '\0') {
    (*(undefined4 *)(fr0_ - 0x40)) = SUB84(dVar3,0);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x40)) = (undefined4)in_xd0;
    ((undefined4 *)(fr0_ - 0x3c))[0] = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 112)); FUN_8c2570d8(&(*(float *)(fr0_ - 0x48)),ar5_00,ar6,ar7); });
  dVar1 = dVar3;
  if (cVar8 == '\0') {
    fVar5 = F32HI(dVar3);
    (*(undefined8 *)(fr0_ - 0x6c)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x6c))+4)),fVar5);
    dVar1 = (*(undefined8 *)(fr0_ - 0x6c));
  }
  (*(undefined8 *)(fr0_ - 0x6c)) = dVar1;
  ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 112)); FUN_8c25ce48(&(*(float *)(fr0_ - 0x48)),ar5_00,ar6,ar7); });
  if (cVar8 == '\0') {
    *(float *)(unsigned)(ar4 + 0x50) = (*(float *)(fr0_ - 0x48));
    *(float *)(unsigned)(ar4 + 0x54) = (*(float *)(fr0_ - 0x44));
    *(undefined4 *)(unsigned)(ar4 + 0x58) = (*(undefined4 *)(fr0_ - 0x40));
    dVar3 = CONCAT44D(0x43fa0000,SUB84(dVar3,0));
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x50) = CONCAT44((*(float *)(fr0_ - 0x44)),(*(float *)(fr0_ - 0x48)));
    *(ulonglong *)(unsigned)(ar4 + 0x54) = CONCAT44((*(undefined4 *)(fr0_ - 0x40)),(*(float *)(fr0_ - 0x44)));
    *(ulonglong *)(unsigned)(ar4 + 0x58) = CONCAT44(((undefined4 *)(fr0_ - 0x3c))[0],(*(undefined4 *)(fr0_ - 0x40)));
    dVar3 = 1.6066918595405548e+73;
  }
  if (cVar7 == '\0') {
    bVar6 = fVar5 < F32HI(dVar3);
  }
  else {
    bVar6 = CONCAT44D(in_fr14,fVar5) < dVar3;
  }
  if (bVar6) {
    (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined4 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  }
  else {
    if (cVar8 == '\0') {
      dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),*(undefined4 *)(unsigned)(ar4 + 0x44));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x44);
      dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(undefined4 *)(fr0_ - 0x2c)));
    }
    if (cVar7 == '\0') {
      fVar5 = F32LO(dVar3) + F32HI(dVar3);
    }
    else {
      fVar5 = SUB84(dVar3 + dVar3,0);
    }
    if (cVar8 == '\0') {
      *(float *)(unsigned)(ar4 + 0x44) = fVar5;
      dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x44) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
      dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
    }
    if (cVar7 == '\0') {
      fVar5 = F32LO(dVar3) + F32HI(dVar3);
    }
    else {
      fVar5 = SUB84(dVar3 + dVar3,0);
    }
    if (cVar8 == '\0') {
      *(float *)(unsigned)(ar4 + 0x48) = fVar5;
      dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),*(undefined4 *)(unsigned)(ar4 + 0x4c));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x48) = in_xd0;
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x4c);
      dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
    }
    if (cVar7 == '\0') {
      fVar5 = F32LO(dVar3) + F32HI(dVar3);
    }
    else {
      fVar5 = SUB84(dVar3 + dVar3,0);
    }
    if (cVar8 == '\0') {
      *(float *)(unsigned)(ar4 + 0x4c) = fVar5;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x4c) = in_xd0;
    }
    (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined4 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl _Class_1299f8_m3_019f00\n.set _Class_1299f8_m3_019f00, _Class_1299f8_m3_019f00_def\n");
