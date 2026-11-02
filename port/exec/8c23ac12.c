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
undefined4 FUN_8c23ac12_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23ac12";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  code *in_r3 = 0;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined8 in_dr0 = 0;
  float fVar6;
  double dVar5;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 in_fr7 = 0;
  undefined8 uVar9;
  undefined8 in_xd4 = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  fVar6 = F32HI(in_dr0) * *(float *)(unsigned)(ain0 + ar4);
  dVar5 = CONCAT44D(fVar6,(int)in_dr0);
  (*(int *)(fr0_ - 0x8)) = ar4;
  ({ unsigned long t0_ = (unsigned long)(fVar6); *(unsigned *)((((unsigned long)(fr0_ - 8)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 8)) - 8); (*(code *)xlat((unsigned long)in_r3))(*(undefined4 *)(unsigned)(ar4 + 0x88),ar5,ar6,ar7); });
  if (cVar11 == '\0') {
    dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),fVar6);
    piVar4 = &(*(int *)(fr0_ - 0x8));
  }
  else {
    piVar4 = (int *)(unsigned)((undefined1 *)(fr0_ - 0x4));
  }
  iVar3 = *piVar4;
  if (cVar10 == '\0') {
    dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 * dVar5;
  }
  puVar2 = (undefined8 *)(unsigned)(ar5 + 4);
  if (cVar11 == '\0') {
    dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),*(undefined4 *)(unsigned)(iVar3 + 0x108));
    uVar7 = CONCAT44(*(undefined4 *)(unsigned)(iVar3 + 0x10c),*(undefined4 *)(unsigned)(iVar3 + 0x110));
    uVar8 = CONCAT44(*(undefined4 *)(unsigned)puVar2,*(undefined4 *)(unsigned)(ar5 + 8));
    puVar1 = (undefined8 *)(unsigned)(ar5 + 0xc);
    uVar9 = CONCAT44(*(undefined4 *)(unsigned)puVar1,in_fr7);
  }
  else {
    uVar7 = *(undefined8 *)(unsigned)(iVar3 + 0x110);
    uVar8 = *puVar2;
    in_xd4 = *(undefined8 *)(unsigned)(ar5 + 0xc);
    puVar1 = (undefined8 *)(unsigned)(ar5 + 0x14);
    uVar9 = *puVar1;
  }
  fVar6 = F32HI(dVar5);
  if (cVar10 == '\0') {
    uVar8 = CONCAT44(fVar6 * F32LO(dVar5) + F32HI(uVar8),
                     fVar6 * F32HI(uVar7) + (float)uVar8);
    uVar9 = CONCAT44(fVar6 * (float)uVar7 + F32HI(uVar9),(int)uVar9);
  }
  if (cVar11 == '\0') {
    *(int *)(unsigned)puVar2 = (int)((ulonglong)uVar8 >> 0x20);
    *(int *)(unsigned)(ar5 + 8) = (int)uVar8;
    *(int *)(unsigned)puVar1 = (int)((ulonglong)uVar9 >> 0x20);
  }
  else {
    *puVar2 = uVar8;
    *(undefined8 *)(unsigned)(ar5 + 8) = in_xd4;
    *puVar1 = uVar9;
  }
  return 4;
}

__asm__(".globl _FUN_8c23ac12\n.set _FUN_8c23ac12, _FUN_8c23ac12_def\n");
