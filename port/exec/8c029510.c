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
undefined4 FUN_8c029510_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c029510";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  double *pdVar2;
  int iVar3;
  int ar6_00;
  int *piVar4;
  double dVar5;
  undefined4 in_fr15 = 0;
  double in_xd14 = 0;
  char cVar6;
  char cVar7;
  undefined2 uVar8;
  undefined4 ain0;
  
  uVar8 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0x2c)) >> 0x10);
  cVar7 = '\0';
  cVar6 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  ain0 = CONCAT22(uVar8,(short)uVar1);
  piVar4 = (int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + (short)uVar1 * 0x124);
  uVar1 = 0x40;
  iVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) * 0x40 + -0x73d83e14;
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c013fb4(((*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) + 1) * 0x40 + -0x73d83e14,iVar3,0x40,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) = (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) + 1;
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); FUN_8c256328(0,iVar3,uVar1,ar7); });
  iVar3 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c029af0(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar5 + 4) != 0) {
    pdVar2 = (double *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
    if (cVar7 == '\0') {
      in_fr15 = *(undefined4 *)(unsigned)pdVar2;
    }
    else {
      in_xd14 = *pdVar2;
    }
    pdVar2 = (double *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
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
      *(int *)(unsigned)pdVar2 = (int)(D2U(dVar5) >> 0x20);
    }
    else {
      *pdVar2 = dVar5;
    }
    if (*(int *)(unsigned)(ar4 + 0x344) == ar5) {
      iVar3 = ar5;
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c029dec(ar4,ar5,ar6_00,ar7));
    }
    else if (*(int *)(unsigned)(ar4 + 0x348) == ar5) {
      ar7 = ar4 + 900;
      ar6_00 = ar4 + 0x374;
      iVar3 = ar4 + 0x364;
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c02a2b8(ar4,iVar3,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c01538c(*piVar4 + 0x1f0,iVar3,ar6_00,ar7));
      iVar3 = ar4 + 900;
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c029ca8(ar4,iVar3,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x42c),iVar3,ar6_00,ar7));
    }
    else if (*(int *)(unsigned)(ar4 + 0x34c) == ar5) {
      ar7 = ar4 + 0x3b0;
      ar6_00 = ar4 + 0x3a0;
      iVar3 = ar4 + 0x390;
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c02a2b8(ar4,iVar3,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c01538c(*piVar4 + 0x1f0,iVar3,ar6_00,ar7));
      iVar3 = ar4 + 0x3b0;
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c029ca8(ar4,iVar3,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x42c),iVar3,ar6_00,ar7));
    }
    else if ((((*(int *)(unsigned)(ar4 + 0x358) == ar5) || (*(int *)(unsigned)(ar4 + 0x354) == ar5)) ||
             (*(int *)(unsigned)(ar4 + 0x360) == ar5)) || (*(int *)(unsigned)(ar4 + 0x35c) == ar5)) {
      iVar3 = ar5;
      (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x198))))(ar4,ar5,ar6_00,ar7));
    }
    else {
      iVar3 = *(int *)(unsigned)(ar5 + 4);
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c02a29c(ar4,iVar3,ar6_00,ar7));
    }
    pdVar2 = (double *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)pdVar2 = in_fr15;
    }
    else {
      *pdVar2 = in_xd14;
    }
  }
  if (*(int *)(unsigned)(ar4 + 0x350) == ar5) {
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c01538c(*piVar4 + 0x1f8,iVar3,ar6_00,ar7));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c015bb8(0x8c27d3e8,iVar3,ar6_00,ar7));
    ar6_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c029d64(ar4,iVar3,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x42c),iVar3,ar6_00,ar7));
  }
  if (*(int *)(unsigned)(ar5 + 0x2c) != 0) {
    iVar3 = *(int *)(unsigned)(ar5 + 0x2c);
    ar6_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c029510(ar4,iVar3,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c256210(1,iVar3,ar6_00,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) = (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) + -1;
  uVar1 = 0;
  if (*(int *)(unsigned)(ar5 + 0x30) != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c029510(ar4,*(undefined4 *)(unsigned)(ar5 + 0x30),ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c029510\n.set _FUN_8c029510, _FUN_8c029510_def\n");
