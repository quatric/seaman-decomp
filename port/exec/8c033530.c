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
undefined4 FUN_8c033530_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c033530";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 ar4_00;
  undefined4 ar4_01;
  int iVar4;
  undefined1 *puVar5;
  float fVar6;
  code *pcVar8;
  double dVar7;
  undefined8 in_dr4 = 0;
  undefined8 in_dr14 = 0;
  double dVar9;
  undefined8 in_xd0 = 0;
  double in_xd14 = 0;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  (*(undefined4 *)(fr0_ - 0x4)) = (undefined4)in_dr14;
  dVar9 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr4 >> 0x20));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  puVar5 = ((undefined1 *)(fr0_ - 0x28));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_ctor_xyz(puVar5,ar5,ar6,ar7));
  if (cVar12 == '\0') {
    (*(undefined8 *)(fr0_ - 0x5c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x5c))+4)),0x43c6c000);
  }
  else {
    (*(undefined8 *)(fr0_ - 0x5c)) = 0x8c01420043c6c000;
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 96)), rand(puVar5,ar5,ar6,ar7));
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 96)), rand(puVar5,ar5,ar6,ar7));
  ar4_01 = (vsp = ((unsigned long)(fr0_ - 96)), rand(puVar5,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), libgcc_divide_helper_01031c(uVar3,100,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), libgcc_divide_helper_01031c(ar4_00,100,ar6,ar7));
  uVar3 = 100;
  (vsp = ((unsigned long)(fr0_ - 96)), libgcc_divide_helper_01031c(ar4_01,100,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c022d04(((undefined1 *)(fr0_ - 0x18)),uVar3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_normalize(((undefined1 *)(fr0_ - 0x18)),uVar3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_assign(((undefined1 *)(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x38)),ar6,ar7));
  uVar3 = 0xffffffff;
  puVar5 = ((undefined1 *)(fr0_ - 0x38));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(puVar5,0xffffffff,ar6,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 96)), rand(puVar5,uVar3,ar6,ar7));
  iVar4 = (vsp = ((unsigned long)(fr0_ - 96)), libgcc_divide_helper_01031c(uVar3,100,ar6,ar7));
  if (cVar12 == '\0') {
    pcVar8 = (code *)0x42c80000;
    fVar6 = (float)(*(undefined8 *)(fr0_ - 0x5c));
  }
  else {
    fVar6 = 100.0;
    pcVar8 = ((void *)0x8c023b8c);
    in_xd0 = (*(undefined8 *)(fr0_ - 0x5c));
  }
  if (cVar11 == '\0') {
    fVar6 = (fVar6 / (float)(uint)pcVar8) * (float)iVar4;
  }
  else {
    fVar6 = SUB84((double)iVar4 * (double)iVar4,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined8 *)(fr0_ - 0x5c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x5c))+4)),fVar6);
    uVar1 = (*(undefined8 *)(fr0_ - 0x5c));
  }
  (*(undefined8 *)(fr0_ - 0x5c)) = uVar1;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 96)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 96)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x18)),&(*(undefined8 *)(fr0_ - 0x5c)),ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x5c)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 96)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 96)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x28)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_assign(((undefined1 *)(fr0_ - 0x18)),(int)&(*(undefined8 *)(fr0_ - 0x5c)) + 4,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x5c)) + 4,0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6,ar7));
  dVar7 = (*(double *)(fr0_ - 0x14));
  if (cVar12 == '\0') {
    dVar7 = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x14))+0)),fVar6);
  }
  if (cVar11 == '\0') {
    bVar10 = SUB84(dVar9,0) < F32HI(dVar7);
  }
  else {
    bVar10 = dVar9 < dVar7;
  }
  dVar2 = (*(double *)(fr0_ - 0x14));
  if (bVar10) {
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),SUB84(dVar7,0));
    }
    else {
      dVar7 = *(double *)(unsigned)(ar4 + 0x48);
    }
    if (cVar11 == '\0') {
      fVar6 = F32LO(dVar9) - F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar9 - dVar7,0);
    }
    dVar2 = in_xd14;
    if (cVar12 == '\0') {
      (*(double *)(fr0_ - 0x14)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x14))+4)),fVar6);
      dVar2 = (*(double *)(fr0_ - 0x14));
    }
  }
  (*(double *)(fr0_ - 0x14)) = dVar2;
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),((undefined1 *)(fr0_ - 0x18)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c033530\n.set _FUN_8c033530, _FUN_8c033530_def\n");
