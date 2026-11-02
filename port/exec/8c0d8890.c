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
undefined4 FUN_8c0d8890_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d8890";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *ar5_00;
  undefined4 ar5_01;
  double dVar4;
  float fVar5;
  undefined4 in_fr14 = 0;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar5 = 0.2;
  ar5_00 = ((undefined1 *)(fr0_ - 0x18));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0b9d14(ar5,ar5_00,ar6,ar7));
  switch((*(undefined1 *)(fr0_ - 0x16))) {
  case 1:
  case 2:
  case 0xb:
  case 0xc:
    if (cVar8 == '\0') {
      fVar5 = 0.1;
    }
    break;
  default:
    if (cVar8 == '\0') {
      fVar5 = 0.2;
    }
    break;
  case 6:
  case 7:
    if (cVar8 == '\0') {
      fVar5 = 0.5;
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), rand(ar5,ar5_00,ar6,ar7));
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(0x47000000,(float)iVar1);
  }
  else {
    dVar4 = 3.05573279121701e-310;
  }
  if (cVar7 == '\0') {
    bVar6 = F32LO(dVar4) / F32HI(dVar4) < fVar5;
  }
  else {
    bVar6 = dVar4 / dVar4 < CONCAT44D(in_fr14,fVar5);
  }
  if (bVar6) {
    *(undefined4 *)(unsigned)(ar4 + 0x58) = 1;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 24)), rand(ar5,ar5_00,ar6,ar7));
    ar5_01 = 0x3840;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 24)), libgcc_divide_helper_0103d0(uVar2,0x3840,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x50) = uVar3;
    if (*(uint *)(unsigned)(ar4 + 0x50) < 0x1c20) {
      *(undefined4 *)(unsigned)(ar4 + 0x50) = 0x1c20;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), rand(uVar2,ar5_01,ar6,ar7));
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D(0x47000000,(float)iVar1);
    }
    else {
      dVar4 = 3.05573279121701e-310;
    }
    if (cVar7 == '\0') {
      fVar5 = F32LO(dVar4) / F32HI(dVar4);
    }
    else {
      fVar5 = SUB84(dVar4 / dVar4,0);
    }
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D(0x44610000,fVar5);
    }
    else {
      dVar4 = 3.5336950296991835e+72;
    }
    if (cVar7 == '\0') {
      fVar5 = F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      fVar5 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D(0x44610000,fVar5);
    }
    else {
      dVar4 = 3.5336950296991835e+72;
    }
    if (cVar7 == '\0') {
      fVar5 = F32LO(dVar4) + F32HI(dVar4);
    }
    else {
      fVar5 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D(0x4f000000,fVar5);
    }
    else {
      dVar4 = -9.046259633960061e+74;
    }
    if (cVar7 == '\0' && F32HI(dVar4) < SUB84(dVar4,0)) {
      if (cVar8 == '\0') {
        dVar4 = CONCAT44D(0xcf800000,SUB84(dVar4,0));
      }
      else {
        dVar4 = 2.9939323502132253e-78;
      }
      if (cVar7 == '\0') {
        fVar5 = F32HI(dVar4);
        dVar4 = CONCAT44D(fVar5,F32LO(dVar4) + fVar5);
      }
      else {
        dVar4 = dVar4 + dVar4;
      }
    }
    if (cVar7 == '\0') {
      iVar1 = (int)SUB84(dVar4,0);
    }
    else {
      iVar1 = (int)dVar4;
    }
    uVar2 = 0x54;
    *(int *)(unsigned)(ar4 + 0x54) = iVar1;
  }
  else {
    uVar2 = 0x58;
    *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0d8890\n.set _FUN_8c0d8890, _FUN_8c0d8890_def\n");
