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
undefined4 FUN_8c23c4ba_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23c4ba";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_fr1 = 0;
  float extraout_fr0 = 0;
  float fVar4;
  double dVar5;
  undefined4 uVar6;
  undefined8 in_xd2 = 0;
  undefined8 uVar7;
  undefined8 in_xd14 = 0;
  int iVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar1 = 0x80;
  uVar6 = 0x3f800000;
  iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c1300);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    iVar3 = *(int *)(unsigned)(*(int *)(unsigned)(iVar2 * 4 + -0x73b3ed80) * 4 + -0x73b3ee20);
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11a4),*(undefined4 *)(unsigned)(iVar3 + 200));
    }
    else {
      in_xd2 = *(undefined8 *)(unsigned)(iVar3 + 200);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11a8),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11a4));
    }
    if (cVar9 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(unsigned)(iVar3 + 0xf8) = (int)(D2U(dVar5) >> 0x20);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11a8),*(undefined4 *)(unsigned)(iVar3 + 0xcc));
    }
    else {
      *(double *)(unsigned)(iVar3 + 0xf8) = dVar5;
      in_xd2 = *(undefined8 *)(unsigned)(iVar3 + 0xcc);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11a8));
    }
    if (cVar9 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(unsigned)(iVar3 + 0xfc) = (int)(D2U(dVar5) >> 0x20);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11ac),*(undefined4 *)(unsigned)(iVar3 + 0xd0));
    }
    else {
      *(double *)(unsigned)(iVar3 + 0xfc) = dVar5;
      in_xd2 = *(undefined8 *)(unsigned)(iVar3 + 0xd0);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11ac));
    }
    if (cVar9 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(unsigned)(iVar3 + 0x100) = (int)(D2U(dVar5) >> 0x20);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),*(undefined4 *)(unsigned)(iVar3 + 0xd8));
    }
    else {
      *(double *)(unsigned)(iVar3 + 0x100) = dVar5;
      in_xd2 = *(undefined8 *)(unsigned)(iVar3 + 0xd8);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4));
    }
    if (cVar9 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(unsigned)(iVar3 + 0x108) = (int)(D2U(dVar5) >> 0x20);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8),*(undefined4 *)(unsigned)(iVar3 + 0xdc));
    }
    else {
      *(double *)(unsigned)(iVar3 + 0x108) = dVar5;
      in_xd2 = *(undefined8 *)(unsigned)(iVar3 + 0xdc);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
    }
    if (cVar9 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(unsigned)(iVar3 + 0x10c) = (int)(D2U(dVar5) >> 0x20);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),*(undefined4 *)(unsigned)(iVar3 + 0xe0));
    }
    else {
      *(double *)(unsigned)(iVar3 + 0x10c) = dVar5;
      in_xd2 = *(undefined8 *)(unsigned)(iVar3 + 0xe0);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc));
    }
    if (cVar9 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(unsigned)(iVar3 + 0x110) = (int)(D2U(dVar5) >> 0x20);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11c4),*(undefined4 *)(unsigned)(iVar3 + 0xe8));
    }
    else {
      *(double *)(unsigned)(iVar3 + 0x110) = dVar5;
      in_xd2 = *(undefined8 *)(unsigned)(iVar3 + 0xe8);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11c4));
    }
    if (cVar9 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(unsigned)(iVar3 + 0x118) = (int)(D2U(dVar5) >> 0x20);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8),*(undefined4 *)(unsigned)(iVar3 + 0xec));
    }
    else {
      *(double *)(unsigned)(iVar3 + 0x118) = dVar5;
      in_xd2 = *(undefined8 *)(unsigned)(iVar3 + 0xec);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11cc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8));
    }
    if (cVar9 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(unsigned)(iVar3 + 0x11c) = (int)(D2U(dVar5) >> 0x20);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11cc),*(undefined4 *)(unsigned)(iVar3 + 0xf0));
      uVar7 = in_xd2;
    }
    else {
      *(double *)(unsigned)(iVar3 + 0x11c) = dVar5;
      uVar7 = *(undefined8 *)(unsigned)(iVar3 + 0xf0);
      dVar5 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11d0),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11cc));
    }
    if (cVar9 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    uVar1 = (undefined4)(D2U(dVar5) >> 0x20);
    if (cVar10 == '\0') {
      *(undefined4 *)(unsigned)(iVar3 + 0x120) = uVar1;
      *(undefined4 *)(unsigned)(iVar3 + 0x114) = *(undefined4 *)(unsigned)(iVar3 + 0xe4);
      dVar5 = CONCAT44D(uVar1,(*(undefined4 *)(unsigned)(unsigned)0x8c4c11d0));
    }
    else {
      *(double *)(unsigned)(iVar3 + 0x120) = dVar5;
      *(undefined8 *)(unsigned)(iVar3 + 0x114) = *(undefined8 *)(unsigned)(iVar3 + 0xe4);
      uVar7 = CONCAT44((*(uint *)(unsigned)0x8c4c11d4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11d0));
    }
    if (cVar9 == '\0') {
      iVar8 = (int)SUB84(dVar5,0);
    }
    else {
      iVar8 = (int)dVar5;
    }
    *(int *)(unsigned)(iVar3 + 0x88) = iVar8;
    uVar1 = 0x124;
    in_xd2 = uVar7;
    if ((*(uint *)(unsigned)(iVar3 + 0x124) & 0x38) != 0) {
      ({ unsigned long ri0_ = (unsigned long)(0x70); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c23a8d8(*(undefined4 *)(unsigned)(iVar3 + 0x88),ar5,ar6,ar7); });
      in_xd2 = in_xd14;
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),uVar6);
        in_xd2 = uVar7;
      }
      if (cVar9 == '\0') {
        fVar4 = F32LO(dVar5) / extraout_fr0;
      }
      else {
        fVar4 = SUB84(dVar5 / CONCAT44D(extraout_fr0,extraout_fr1),0);
      }
      uVar1 = 0x80;
      if (cVar10 == '\0') {
        *(float *)(unsigned)(iVar3 + 0x80) = fVar4;
      }
      else {
        *(undefined8 *)(unsigned)(iVar3 + 0x80) = in_xd2;
      }
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c23c4ba\n.set _FUN_8c23c4ba, _FUN_8c23c4ba_def\n");
