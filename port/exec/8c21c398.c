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
int FUN_8c21c398_def(int ar4,int ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c21c398";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  double in_dr0 = 0;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined4 in_fr5 = 0;
  undefined8 uVar9;
  double in_xd0 = 0;
  undefined8 in_xd2 = 0;
  undefined8 uVar10;
  undefined8 in_xd4 = 0;
  undefined4 in_PR = 0;
  char cVar11;
  char cVar12;
  
  fVar5 = F32HI(in_xd4);
  cVar12 = '\0';
  cVar11 = '\0';
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x10))+4)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c010794(8,&(*(undefined4 *)(fr0_ - 0x14)),((undefined1 *)(unsigned)0x8c26d790),vr7));
  piVar4 = (int *)(unsigned)(ar5 * 0x10 + ar4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 20)), libgcc_divide_helper_0106dc(ar5 + 1,ar6,vr6,vr7));
  piVar3 = (int *)(unsigned)(ar4 + iVar1 * 0x10);
  fVar6 = (float)(*piVar3 - *piVar4);
  dVar7 = (double)(ulonglong)(uint)fVar6;
  uVar9 = in_xd2;
  if (cVar12 == '\0') {
    uVar9 = CONCAT44(fVar6,in_fr5);
  }
  uVar2 = (uint)((ulonglong)uVar9 >> 0x20);
  uVar10 = uVar9;
  if (cVar11 != '\0' || 0.0 <= fVar6) {
    if (cVar12 == '\0') {
      dVar7 = (double)(ulonglong)uVar2;
      uVar10 = in_xd2;
    }
  }
  else {
    if (cVar12 == '\0') {
      dVar7 = (double)(ulonglong)uVar2;
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
      uVar10 = in_xd2;
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar11 == '\0') {
      dVar7 = (double)(ulonglong)(uint)(F32LO(dVar7) + F32LO(in_dr0));
    }
    else {
      dVar7 = dVar7 + in_dr0;
    }
  }
  if (cVar12 == '\0') {
    (*(undefined8 *)(fr0_ - 0x10)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x10))+4)),SUB84(dVar7,0));
  }
  else {
    (*(undefined8 *)(fr0_ - 0x10)) = uVar10;
  }
  iVar1 = *piVar4;
  fVar6 = (float)iVar1;
  dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),fVar6);
  if (iVar1 < 0) {
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x4f800000,fVar6 + 4.2949673e+09);
    }
    else {
      dVar7 = CONCAT44D(0x4f800000,fVar6) + CONCAT44D(0x4f800000,fVar6);
    }
  }
  if (cVar12 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad54));
  }
  else {
    in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad58),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad54));
  }
  if (cVar11 == '\0') {
    fVar6 = F32LO(in_dr0) - F32LO(dVar7);
  }
  else {
    fVar6 = SUB84(in_dr0 - dVar7,0);
  }
  uVar2 = (uint)(0 < *piVar3 - iVar1);
  if (cVar12 == '\0') {
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),(&(*(undefined4 *)(fr0_ - 0x14)))[uVar2]);
    in_xd0 = CONCAT44D(fVar6,(int)uVar9);
  }
  if (cVar11 == '\0') {
    fVar6 = F32HI(in_xd0) / F32LO(dVar7);
  }
  else {
    fVar6 = (float)((ulonglong)(in_xd0 / dVar7) >> 0x20);
  }
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(fVar6,1.0 - fVar6);
    dVar8 = CONCAT44D((float)(uint)piVar3[1] * fVar6,(float)(uint)piVar4[1]);
  }
  else {
    dVar7 = CONCAT44D(fVar6,0x3f800000) - CONCAT44D(fVar6,0x3f800000);
    fVar6 = F32HI(dVar7);
    dVar8 = (double)piVar3[1] * dVar7;
  }
  if (cVar12 == '\0') {
    fVar5 = F32LO(dVar7);
  }
  if (cVar11 == '\0') {
    iVar1 = (int)(fVar5 * F32LO(dVar8) + F32HI(dVar8));
  }
  else {
    iVar1 = (int)dVar8;
  }
  *ar7 = iVar1;
  if (cVar11 == '\0') {
    iVar1 = (int)(fVar5 * (float)(uint)piVar4[2] + (float)(uint)piVar3[2] * fVar6);
  }
  else {
    iVar1 = (int)((double)piVar3[2] * dVar7);
  }
  ar7[1] = iVar1;
  if (cVar11 == '\0') {
    iVar1 = (int)(fVar5 * (float)(uint)piVar4[3] + (float)(uint)piVar3[3] * fVar6);
  }
  else {
    iVar1 = (int)((double)piVar3[3] * dVar7);
  }
  ar7[2] = iVar1;
  return uVar2 * 4;
}

__asm__(".globl _FUN_8c21c398\n.set _FUN_8c21c398, _FUN_8c21c398_def\n");
