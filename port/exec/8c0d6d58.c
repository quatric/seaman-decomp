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
undefined4 FUN_8c0d6d58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d6d58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  float fVar3;
  ulonglong in_dr0 = 0;
  code *pcVar5;
  double dVar4;
  ulonglong in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar2 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x2c)),uVar2,ar6_00,ar7));
  if ((*(undefined1 *)(unsigned)0x8c437c80) == '\0') {
    in_dr0 = in_dr0 & 0xffffffff;
    uVar1 = in_dr0;
    if (cVar7 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c7c) = (*(undefined4 *)(unsigned)(unsigned)0x8c437c7c) & 0xffffffff00000000;
      uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c7c);
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c7c) = uVar1;
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c7c) = CONCAT14(1,(*(undefined4 *)(unsigned)(unsigned)0x8c437c7c));
  }
  if ((*(undefined1 *)(unsigned)0x8c437c88) == '\0') {
    in_dr0 = in_dr0 & 0xffffffff;
    uVar1 = in_dr0;
    if (cVar7 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c84) = (*(undefined4 *)(unsigned)(unsigned)0x8c437c84) & 0xffffffff00000000;
      uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c84);
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c84) = uVar1;
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c84) = CONCAT14(1,(*(undefined4 *)(unsigned)(unsigned)0x8c437c84));
  }
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x3c))); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); Vec3_sub(ar6,ar5,ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x3c)),ar6_00,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_length_sq(&(*(undefined4 *)(fr0_ - 0x1c)),uVar2,ar6_00,ar7));
  uVar1 = in_dr0;
  if (cVar7 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c7c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437c80),(int)(in_dr0 >> 0x20));
    uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c7c);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c437c7c) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x11c) + 8))))((int *)(unsigned)(ar4 + 0x11c),uVar2,ar6_00,ar7));
  fVar3 = (float)(in_dr0 >> 0x20);
  if (cVar7 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c84) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437c88),fVar3);
    pcVar5 = (code *)0x3f000000;
    in_dr0 = in_xd0;
  }
  else {
    fVar3 = 0.5;
    pcVar5 = ((void *)0x8c022f54);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c84) = in_dr0;
  }
  if (cVar6 == '\0' && (float)(uint)pcVar5 < fVar3) {
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_length(&(*(undefined4 *)(fr0_ - 0x1c)),uVar2,ar6_00,ar7));
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(unsigned)(unsigned)0x8c437c84));
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
      in_dr0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c84);
    }
    if (cVar6 == '\0') {
      (*(float *)(fr0_ - 0x2c)) = F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      (*(float *)(fr0_ - 0x2c)) = SUB84(dVar4 * dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(unsigned)(unsigned)0x8c437c84));
    }
    else {
      (*(float *)(fr0_ - 0x2c)) = (float)in_dr0;
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
      in_dr0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c84);
    }
    if (cVar6 == '\0') {
      (*(float *)(fr0_ - 0x28)) = F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      (*(float *)(fr0_ - 0x28)) = SUB84(dVar4 * dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(unsigned)(unsigned)0x8c437c84));
    }
    else {
      (*(float *)(fr0_ - 0x28)) = (float)in_dr0;
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
      in_dr0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c84);
    }
    if (cVar6 == '\0') {
      (*(float *)(fr0_ - 0x24)) = F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      (*(float *)(fr0_ - 0x24)) = SUB84(dVar4 * dVar4,0);
    }
    if (cVar7 != '\0') {
      (*(float *)(fr0_ - 0x24)) = (float)in_dr0;
      (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)(in_dr0 >> 0x20);
    }
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c023aa0(ar5,&(*(float *)(fr0_ - 0x2c)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(&(*(float *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x1c)),0xffffffff,ar6_00,ar7));
    uVar2 = 2;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar5,ar6,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(&(*(float *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x1c)),0xffffffff,ar6_00,ar7));
    uVar2 = 4;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0d6d58\n.set _FUN_8c0d6d58, _FUN_8c0d6d58_def\n");
