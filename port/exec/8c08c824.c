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
undefined4 FUN_8c08c824_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08c824";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 in_fr1 = 0;
  double dVar3;
  float fVar4;
  undefined8 in_dr14 = 0;
  double dVar5;
  char cVar6;
  char cVar7;
  
  uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar7 = '\0';
  cVar6 = '\0';
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_026024(*(undefined4 *)(unsigned)(ar4 + 0x928),ar5,ar6,ar7));
  if (iVar1 == 1) {
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D(0x42c80000,in_fr1);
    }
    else {
      dVar3 = 3.829877612487459e+27;
    }
    if (cVar6 == '\0') {
      dVar5 = CONCAT44D(uVar2,(float)*(int *)(unsigned)(ar4 + 0x458) /
                                     F32HI(dVar3));
    }
    else {
      dVar5 = CONCAT44D(uVar2,(float)*(int *)(unsigned)(ar4 + 0x458)) / dVar3;
    }
  }
  else {
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D(0x45a8c000,in_fr1);
    }
    else {
      dVar3 = 2.29233286239132e-311;
    }
    if (cVar6 == '\0') {
      dVar5 = CONCAT44D(uVar2,(float)*(int *)(unsigned)(ar4 + 0x458) /
                                     F32HI(dVar3));
    }
    else {
      dVar5 = CONCAT44D(uVar2,(float)*(int *)(unsigned)(ar4 + 0x458)) / dVar3;
    }
  }
  fVar4 = F32LO(dVar5);
  if (*(int *)(unsigned)(ar4 + 0x458) < 0x65) {
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c139e6c),SUB84(dVar3,0));
    }
    else {
      dVar3 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c139e70),(*(undefined4 *)(unsigned)(unsigned)0x8c139e6c));
    }
    if (cVar6 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(unsigned)(ar4 + 0x438) = (int)(D2U(dVar3) >> 0x20);
      dVar3 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c139e70),SUB84(dVar3,0));
    }
    else {
      *(double *)(unsigned)(ar4 + 0x438) = dVar3;
      dVar3 = CONCAT44D((*(undefined1 *)(unsigned)0x8c139e74),(*(undefined4 *)(unsigned)(unsigned)0x8c139e70));
    }
    if (cVar6 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(unsigned)(ar4 + 0x43c) = (int)(D2U(dVar3) >> 0x20);
      dVar3 = CONCAT44D((*(undefined1 *)(unsigned)0x8c139e74),SUB84(dVar3,0));
    }
    else {
      *(double *)(unsigned)(ar4 + 0x43c) = dVar3;
      dVar3 = CONCAT44D((*(undefined1 *)(unsigned)0x8c139e78),(*(undefined1 *)(unsigned)0x8c139e74));
    }
    if (cVar6 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(unsigned)(ar4 + 0x440) = (int)(D2U(dVar3) >> 0x20);
      dVar3 = CONCAT44D((*(undefined1 *)(unsigned)0x8c139e78),SUB84(dVar3,0));
    }
    else {
      *(double *)(unsigned)(ar4 + 0x440) = dVar3;
      dVar3 = CONCAT44D((*(uint *)(unsigned)0x8c139e7c),(*(undefined1 *)(unsigned)0x8c139e78));
    }
    if (cVar6 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(unsigned)(ar4 + 0x444) = (int)(D2U(dVar3) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x444) = dVar3;
    }
  }
  if (899 < *(int *)(unsigned)(ar4 + 0x458)) {
    if (cVar6 == '\0') {
      dVar5 = CONCAT44D((float)*(int *)(unsigned)(ar4 + 0x458),fVar4);
    }
    else {
      dVar5 = (double)*(int *)(unsigned)(ar4 + 0x458);
    }
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D(0x44610000,SUB84(dVar3,0));
    }
    else {
      dVar3 = 1099511907856.0;
    }
    if (cVar6 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) - F32HI(dVar3)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 - dVar3;
    }
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D(0x42700000,SUB84(dVar3,0));
    }
    else {
      dVar3 = 2.12254649446278e-311;
    }
    if (cVar6 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) / F32HI(dVar3)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar3;
    }
    if (cVar6 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) + 1.0,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 + CONCAT44D(0x3f800000,SUB84(dVar3,0));
    }
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c139e6c),SUB84(dVar3,0));
    }
    else {
      dVar3 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c139e70),(*(undefined4 *)(unsigned)(unsigned)0x8c139e6c));
    }
    fVar4 = F32HI(dVar5);
    if (cVar6 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(unsigned)(ar4 + 0x438) = (int)(D2U(dVar3) >> 0x20);
      dVar3 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c139e70),SUB84(dVar3,0));
    }
    else {
      *(double *)(unsigned)(ar4 + 0x438) = dVar3;
      dVar3 = CONCAT44D((*(undefined1 *)(unsigned)0x8c139e74),(*(undefined4 *)(unsigned)(unsigned)0x8c139e70));
    }
    if (cVar6 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(unsigned)(ar4 + 0x43c) = (int)(D2U(dVar3) >> 0x20);
      dVar3 = CONCAT44D((*(undefined1 *)(unsigned)0x8c139e74),SUB84(dVar3,0));
    }
    else {
      *(double *)(unsigned)(ar4 + 0x43c) = dVar3;
      dVar3 = CONCAT44D((*(undefined1 *)(unsigned)0x8c139e78),(*(undefined1 *)(unsigned)0x8c139e74));
    }
    if (cVar6 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(unsigned)(ar4 + 0x440) = (int)(D2U(dVar3) >> 0x20);
      dVar3 = CONCAT44D((*(undefined1 *)(unsigned)0x8c139e78),SUB84(dVar3,0));
    }
    else {
      *(double *)(unsigned)(ar4 + 0x440) = dVar3;
      dVar3 = CONCAT44D((*(uint *)(unsigned)0x8c139e7c),(*(undefined1 *)(unsigned)0x8c139e78));
    }
    if (cVar6 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(unsigned)(ar4 + 0x444) = (int)(D2U(dVar3) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x444) = dVar3;
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_026024(*(undefined4 *)(unsigned)(ar4 + 0x928),ar5,ar6,ar7));
  if (iVar1 == 1) {
    iVar1 = *(int *)(unsigned)(ar4 + 0x458);
    *(int *)(unsigned)(ar4 + 0x458) = iVar1 + 1;
    uVar2 = 1000;
    if (1000 < iVar1 + 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x458) = 0;
      uVar2 = 0x74;
      *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0x7fffffff;
    }
  }
  else {
    iVar1 = *(int *)(unsigned)(ar4 + 0x458);
    *(int *)(unsigned)(ar4 + 0x458) = iVar1 + 1;
    uVar2 = 0x1518;
    if (0x1518 < iVar1 + 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x458) = 0;
      uVar2 = 0x74;
      *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0x7fffffff;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c08c824\n.set _FUN_8c08c824, _FUN_8c08c824_def\n");
