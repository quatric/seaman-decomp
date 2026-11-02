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
undefined4 * FUN_8c260cf8_def(int ar4,int ar5,undefined2 *ar6,undefined2 *ar7)

{
  ring[rp++ & 255] = "FUN_8c260cf8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  float fVar4;
  double dVar3;
  double dVar5;
  undefined4 in_fr13 = 0;
  double dVar6;
  undefined4 uVar7;
  double in_xd2 = 0;
  undefined2 uVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  dVar3 = CONCAT44D((float)ar5,0x40c90fdb);
  fVar4 = (float)ar4 * 6.2831855;
  dVar6 = CONCAT44D(0x3fb504f3,in_fr13);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013c38(ar4,ar5,ar6,ar7));
  if (cVar9 == '\0') {
    fVar4 = 2.0;
  }
  else {
    fVar4 = SUB84(CONCAT44D(fVar4,0x3f800000) + CONCAT44D(fVar4,0x3f800000),0);
  }
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D(F32HI(dVar6) - F32HI(dVar3),
                             SUB84(dVar6,0));
    dVar3 = CONCAT44D(0xbf800000,SQRT(fVar4));
  }
  else {
    dVar6 = dVar6 - dVar3;
    dVar3 = SQRT(-CONCAT44D(0x3f800000,fVar4));
  }
  uVar7 = (undefined4)(D2U(dVar6) >> 0x20);
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(uVar7,uVar7);
    in_xd2 = CONCAT44D(SUB84(dVar3,0),uVar7);
  }
  fVar4 = F32HI(dVar3);
  if (cVar9 == '\0') {
    in_xd2 = CONCAT44D(F32HI(in_xd2) + fVar4,SUB84(in_xd2,0));
  }
  else {
    in_xd2 = in_xd2 + dVar3;
  }
  if (cVar10 == '\0') {
    dVar3 = CONCAT44D(fVar4,uVar7);
  }
  fVar4 = F32HI(in_xd2);
  if (cVar9 == '\0') {
    fVar1 = F32LO(dVar6) - fVar4;
    fVar2 = SQRT((F32LO(dVar3) + fVar4) * fVar1);
    dVar3 = CONCAT44D((int)(D2U(dVar3) >> 0x20),fVar2);
    dVar6 = CONCAT44D(F32HI(dVar6) - fVar2,fVar1);
  }
  else {
    dVar3 = SQRT((dVar3 + in_xd2) * (dVar6 - in_xd2));
    dVar6 = (dVar6 - in_xd2) - dVar3;
  }
  uVar7 = (undefined4)(D2U(dVar6) >> 0x20);
  dVar5 = dVar6;
  if (cVar10 == '\0') {
    dVar3 = CONCAT44D((int)(D2U(dVar3) >> 0x20),fVar4);
    dVar5 = CONCAT44D(uVar7,SUB84(in_xd2,0));
  }
  if (cVar9 == '\0') {
    dVar5 = CONCAT44D(F32HI(dVar5) / F32LO(dVar3),SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 / dVar3;
  }
  if (cVar10 == '\0') {
    dVar3 = CONCAT44D((int)(D2U(dVar3) >> 0x20),0x46000000);
  }
  fVar4 = F32HI(dVar5);
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(uVar7,fVar4);
  }
  if (cVar9 == '\0') {
    fVar1 = F32LO(dVar6) * F32LO(dVar3);
    dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),fVar1);
    uVar8 = (undefined2)(int)fVar1;
  }
  else {
    dVar6 = dVar6 * dVar3;
    uVar8 = (undefined2)(int)dVar6;
  }
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),fVar4);
  }
  if (cVar9 == '\0') {
    fVar4 = F32LO(dVar6) * fVar4;
  }
  else {
    fVar4 = SUB84(dVar6 * dVar5,0);
  }
  *ar6 = uVar8;
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(0x45800000,fVar4);
  }
  else {
    dVar6 = 1.38524461322914e-309;
  }
  if (cVar9 == '\0') {
    fVar4 = F32HI(dVar6);
    dVar6 = CONCAT44D(fVar4,F32LO(dVar6) * fVar4);
  }
  else {
    dVar6 = dVar6 * dVar6;
  }
  if (cVar9 == '\0') {
    uVar8 = (undefined2)(int)-SUB84(dVar6,0);
  }
  else {
    uVar8 = (undefined2)(int)CONCAT44D((int)(D2U(dVar6) >> 0x20),-SUB84(dVar6,0));
  }
  *ar7 = uVar8;
  return ((undefined4 *)(unsigned)0x8c260e88);
}

__asm__(".globl _FUN_8c260cf8\n.set _FUN_8c260cf8, _FUN_8c260cf8_def\n");
