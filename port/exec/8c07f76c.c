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
uint FUN_8c07f76c_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07f76c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *ar6_00;
  float fVar5;
  ulonglong uVar6;
  code *pcVar9;
  double dVar7;
  undefined8 uVar8;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = 1;
  uVar6 = (ulonglong)(uint)*(float *)(unsigned)(ar4 + 0x130);
  if (*(float *)(unsigned)(ar4 + 0x130) < 0.0) {
    uVar4 = 0;
    ar6_00 = ar6;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c031de8(ar4,0,ar6,ar7));
    if (iVar3 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 2;
    }
    uVar2 = (uint)(iVar3 != 0);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x20))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c022dac(ar4 + 0x14,((undefined1 *)(fr0_ - 0x20)),ar6_00,ar7));
    (*(unsigned *)(fr0_ - 0x50) = (unsigned)(unsigned long)((code *)(uVar6 >> 0x20)));
    if (cVar12 == '\0') {
      pcVar9 = (code *)0x40000000;
      (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)(((code *)(unsigned long)*(unsigned *)(fr0_ - 0x50))));
    }
    else {
      (*(unsigned *)(fr0_ - 0x50) = (unsigned)(unsigned long)((code *)uVar6));
      (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)((code *)0x40000000));
      pcVar9 = ((void *)0x8c022cb0);
    }
    bVar1 = cVar11 == '\0';
    bVar10 = (float)(uint)pcVar9 < (float)(uint)((code *)(unsigned long)*(unsigned *)(fr0_ - 0x54));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7));
    if (bVar1 && bVar10) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,ar6_00,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(unsigned)0x8c1379c4),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c023aa0(ar4 + 0x14,((undefined1 *)(fr0_ - 0x40)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6_00,ar7));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 88)), Vec3_length(ar4 + 0x14,uVar4,ar6_00,ar7));
    }
    iVar3 = ar5;
    (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x128))))(ar6,ar5,ar6_00,ar7));
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
      (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)(pcVar9));
    }
    else {
      dVar7 = -7.932637895862283e-251;
      (*(unsigned *)(fr0_ - 0x50) = (unsigned)(unsigned long)(pcVar9));
    }
    if (cVar11 == '\0') {
      fVar5 = F32LO(dVar7) * F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(((code *)(unsigned long)*(unsigned *)(fr0_ - 0x54)),fVar5);
    }
    else {
      dVar7 = CONCAT44D(((code *)(unsigned long)*(unsigned *)(fr0_ - 0x50)),((code *)(unsigned long)*(unsigned *)(fr0_ - 0x54)));
    }
    if (cVar11 == '\0') {
      fVar5 = F32LO(dVar7) + F32HI(dVar7);
    }
    else {
      fVar5 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar12 == '\0') {
      uVar8 = CONCAT44(*(undefined4 *)(unsigned)(ar5 + 4),fVar5);
    }
    else {
      uVar8 = *(undefined8 *)(unsigned)(ar5 + 4);
    }
    if (cVar11 != '\0' || F32HI(uVar8) <= (float)uVar8) {
      (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c031748(ar4,iVar3,ar6_00,ar7));
    }
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c031de8(ar4,8,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c031c74(ar4,ar5,ar5,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c07f76c\n.set _FUN_8c07f76c, _FUN_8c07f76c_def\n");
