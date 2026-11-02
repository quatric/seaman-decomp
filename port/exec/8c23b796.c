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
undefined4 FUN_8c23b796_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23b796";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  code *in_r3 = 0;
  undefined8 *puVar2;
  undefined8 in_dr0 = 0;
  float fVar4;
  double dVar3;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined4 in_fr9 = 0;
  undefined8 uVar9;
  undefined8 in_xd4 = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  fVar4 = F32HI(in_dr0);
  dVar3 = CONCAT44D(fVar4,*(float *)(unsigned)(ain0 + ar4) * fVar4);
  ({ unsigned long t0_ = (unsigned long)(ar4); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)in_r3))(*(undefined4 *)(unsigned)(ar4 + 0x88),ar5,ar6,ar7); });
  if (cVar10 == '\0') {
    dVar3 = CONCAT44D(F32HI(dVar3) * F32LO(dVar3),SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar3;
  }
  puVar2 = (undefined8 *)(unsigned)((int)ar5 + 0x14);
  if (cVar11 == '\0') {
    uVar9 = CONCAT44(*(undefined4 *)(unsigned)ar5,in_fr9);
    dVar3 = CONCAT44D((int)(D2U(dVar3) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x118));
    uVar5 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x11c),*(undefined4 *)(unsigned)(ar4 + 0x120));
    uVar6 = CONCAT44(*(undefined4 *)(unsigned)puVar2,*(undefined4 *)(unsigned)(ar5 + 3));
    puVar1 = (undefined8 *)(unsigned)((int)ar5 + 0x1c);
    uVar8 = CONCAT44(*(undefined4 *)(unsigned)puVar1,*(undefined4 *)(unsigned)(ar4 + 0x114));
  }
  else {
    uVar9 = *ar5;
    uVar5 = *(undefined8 *)(unsigned)(ar4 + 0x124);
    uVar6 = *puVar2;
    in_xd4 = *(undefined8 *)(unsigned)((int)ar5 + 0x1c);
    puVar1 = (undefined8 *)(unsigned)((int)ar5 + 0x24);
    uVar8 = *puVar1;
  }
  fVar4 = F32HI(dVar3);
  if (cVar10 == '\0') {
    uVar6 = CONCAT44(fVar4 * F32LO(dVar3) + F32HI(uVar6),
                     fVar4 * F32HI(uVar5) + (float)uVar6);
    fVar7 = (float)uVar8;
    uVar8 = CONCAT44(fVar4 * (float)uVar5 + F32HI(uVar8),fVar7);
    uVar9 = CONCAT44(fVar4 * fVar7 + F32HI(uVar9),(int)uVar9);
  }
  if (cVar11 == '\0') {
    *(int *)(unsigned)puVar2 = (int)((ulonglong)uVar6 >> 0x20);
    *(int *)(unsigned)(ar5 + 3) = (int)uVar6;
    *(int *)(unsigned)puVar1 = (int)((ulonglong)uVar8 >> 0x20);
    *(int *)(unsigned)ar5 = (int)((ulonglong)uVar9 >> 0x20);
  }
  else {
    *puVar2 = uVar6;
    ar5[3] = in_xd4;
    *puVar1 = uVar8;
    *ar5 = uVar9;
  }
  return 4;
}

__asm__(".globl _FUN_8c23b796\n.set _FUN_8c23b796, _FUN_8c23b796_def\n");
