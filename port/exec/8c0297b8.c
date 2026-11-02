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
undefined4 FUN_8c0297b8_def(int ar4,uint *ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c0297b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint *ar5_00;
  undefined4 unaff_r10 = 0;
  int *piVar4;
  double dVar5;
  undefined4 in_fr15 = 0;
  double in_xd14 = 0;
  char cVar6;
  char cVar7;
  undefined2 uVar8;
  undefined4 ain0;
  
  uVar8 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0x34)) >> 0x10);
  cVar7 = '\0';
  cVar6 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  ain0 = CONCAT22(uVar8,(short)uVar1);
  piVar4 = (int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + (short)uVar1 * 0x124);
  uVar1 = 0x40;
  iVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) * 0x40 + -0x73d83e14;
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013fb4(((*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) + 1) * 0x40 + -0x73d83e14,iVar3,0x40,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) = (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) + 1;
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); FUN_8c256328(0,iVar3,uVar1,ar7); });
  ar5_00 = ar5;
  iVar3 = ar6;
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c029af0(ar4,ar5,ar6,ar7));
  if (ar5[1] != 0) {
    unaff_r10 = *(undefined4 *)(unsigned)(uint)ar5[1];
  }
  if ((*ar5 & 0x80) == 0) {
    ar5_00 = (uint *)(unsigned)0x8c42d408;
    iVar3 = ar6;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c21f27c(ar5,0x8c42d408,ar6,ar7));
    if (iVar2 == 1) {
      *(undefined4 *)(unsigned)(uint)ar5[1] = 0x8c42d408;
    }
  }
  if (ar5[1] != 0) {
    if (cVar7 == '\0') {
      in_fr15 = *(undefined4 *)(unsigned)(ar5[1] + 0x14);
    }
    else {
      in_xd14 = *(double *)(unsigned)(ar5[1] + 0x14);
    }
    dVar5 = in_xd14;
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D(in_fr15,*(undefined4 *)(unsigned)(ar4 + 0x5c));
    }
    if (cVar6 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(unsigned)(ar5[1] + 0x14) = (int)(D2U(dVar5) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar5[1] + 0x14) = dVar5;
    }
    if (((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x344)) == ar5) {
      ar5_00 = ar5;
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c029dec(ar4,ar5,iVar3,ar7));
    }
    else if (((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x348)) == ar5) {
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0f52c8(ar4,ar5_00,iVar3,ar7));
      ar7 = ar4 + 900;
      iVar3 = ar4 + 0x374;
      iVar2 = ar4 + 0x364;
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c02a2b8(ar4,iVar2,iVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01538c(*piVar4 + 0x1f0,iVar2,iVar3,ar7));
      ar5_00 = (uint *)(unsigned)(ar4 + 900);
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c029ca8(ar4,ar5_00,iVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x42c),ar5_00,iVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0f5308(ar4,ar5_00,iVar3,ar7));
    }
    else if (((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x34c)) == ar5) {
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0f52c8(ar4,ar5_00,iVar3,ar7));
      ar7 = ar4 + 0x3b0;
      iVar3 = ar4 + 0x3a0;
      iVar2 = ar4 + 0x390;
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c02a2b8(ar4,iVar2,iVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01538c(*piVar4 + 0x1f0,iVar2,iVar3,ar7));
      ar5_00 = (uint *)(unsigned)(ar4 + 0x3b0);
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c029ca8(ar4,ar5_00,iVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x42c),ar5_00,iVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0f5308(ar4,ar5_00,iVar3,ar7));
    }
    else if ((((((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x358)) == ar5) || (((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x354)) == ar5)) ||
             (((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x360)) == ar5)) || (((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x35c)) == ar5)) {
      ar5_00 = ar5;
      (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x198))))(ar4,ar5,iVar3,ar7));
      *(undefined4 *)(unsigned)(uint)ar5[1] = unaff_r10;
    }
    else {
      ar5_00 = (uint *)(unsigned)(uint)ar5[1];
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c02a29c(ar4,ar5_00,iVar3,ar7));
      *(undefined4 *)(unsigned)(uint)ar5[1] = unaff_r10;
    }
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)(ar5[1] + 0x14) = in_fr15;
    }
    else {
      *(double *)(unsigned)(ar5[1] + 0x14) = in_xd14;
    }
  }
  if (((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x350)) == ar5) {
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0f52c8(ar4,ar5_00,iVar3,ar7));
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01538c(*piVar4 + 0x1f8,ar5_00,iVar3,ar7));
    ar5_00 = (uint *)(unsigned)(vsp = ((unsigned long)(fr0_ - 52)), FUN_8c015bb8(0x8c27d3e8,ar5_00,iVar3,ar7));
    iVar3 = ar6;
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c029d64(ar4,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x42c),ar5_00,iVar3,ar7));
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0f5308(ar4,ar5_00,iVar3,ar7));
  }
  if (ar5[0xb] != 0) {
    ar5_00 = (uint *)(unsigned)(uint)ar5[0xb];
    iVar3 = ar6;
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0297b8(ar4,ar5_00,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c256210(1,ar5_00,iVar3,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) = (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) + -1;
  uVar1 = 0;
  if (ar5[0xc] != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0297b8(ar4,ar5[0xc],ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0297b8\n.set _FUN_8c0297b8, _FUN_8c0297b8_def\n");
