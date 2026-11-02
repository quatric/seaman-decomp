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
undefined4 FUN_8c0e28a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e28a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  float fVar2;
  undefined8 in_dr0 = 0;
  undefined4 uVar5;
  double dVar3;
  float fVar6;
  double dVar4;
  undefined4 uVar7;
  double in_dr2 = 0;
  char cVar8;
  char cVar9;
  
  uVar5 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  cVar9 = '\0';
  cVar8 = '\0';
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100b20(ar5,ar5,ar6,ar7));
  uVar7 = SUB84(in_dr2,0);
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc27c(ar5,ar5_00,ar6,ar7));
    if (cVar9 == '\0') {
      in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0xa70),uVar7);
      dVar3 = CONCAT44D(0x40000000,uVar5);
    }
    else {
      in_dr2 = *(double *)(unsigned)(ar4 + 0xa70);
      dVar3 = -1.400628561984079e-250;
    }
    if (cVar8 == '\0') {
      fVar6 = F32HI(dVar3);
      fVar2 = F32LO(dVar3) * fVar6;
      dVar3 = CONCAT44D(fVar6,fVar2);
      in_dr2 = CONCAT44D(F32HI(in_dr2) + fVar2,SUB84(in_dr2,0));
    }
    else {
      dVar3 = dVar3 * dVar3;
      in_dr2 = in_dr2 + dVar3;
    }
    uVar5 = (undefined4)(D2U(dVar3) >> 0x20);
    if (cVar9 == '\0') {
      *(int *)(unsigned)(ar4 + 0xa70) = (int)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0xa70) = in_dr2;
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100b84(ar5,ar5_00,ar6,ar7));
    uVar7 = SUB84(in_dr2,0);
    if (iVar1 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc27c(ar5,ar5_00,ar6,ar7));
      if (cVar9 == '\0') {
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0xa70),uVar7);
        dVar3 = CONCAT44D(0x40000000,uVar5);
      }
      else {
        in_dr2 = *(double *)(unsigned)(ar4 + 0xa70);
        dVar3 = -1.400628561984079e-250;
      }
      if (cVar8 == '\0') {
        fVar6 = F32HI(dVar3);
        fVar2 = F32LO(dVar3) * fVar6;
        dVar3 = CONCAT44D(fVar6,fVar2);
        in_dr2 = CONCAT44D(F32HI(in_dr2) + fVar2,SUB84(in_dr2,0));
      }
      else {
        dVar3 = dVar3 * dVar3;
        in_dr2 = in_dr2 + dVar3;
      }
      uVar5 = (undefined4)(D2U(dVar3) >> 0x20);
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0xa70) = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0xa70) = in_dr2;
      }
    }
  }
  uVar7 = SUB84(in_dr2,0);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100be8(ar5,ar5_00,ar6,ar7));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc26c(ar5,ar5_00,ar6,ar7));
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0xa68),uVar7);
      dVar4 = CONCAT44D(0x40000000,uVar5);
    }
    else {
      dVar3 = *(double *)(unsigned)(ar4 + 0xa68);
      dVar4 = -1.400628561984079e-250;
    }
    if (cVar8 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) +
                               F32LO(dVar4) * F32HI(dVar4),SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 + dVar4 * dVar4;
    }
    if (cVar9 == '\0') {
      *(int *)(unsigned)(ar4 + 0xa68) = (int)(D2U(dVar3) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0xa68) = dVar3;
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100c34(ar5,ar5_00,ar6,ar7));
    if (iVar1 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc26c(ar5,ar5_00,ar6,ar7));
      if (cVar9 == '\0') {
        dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0xa68),uVar7);
        dVar4 = CONCAT44D(0x40000000,uVar5);
      }
      else {
        dVar3 = *(double *)(unsigned)(ar4 + 0xa68);
        dVar4 = -1.400628561984079e-250;
      }
      if (cVar8 == '\0') {
        dVar3 = CONCAT44D(F32HI(dVar3) +
                                 F32LO(dVar4) * F32HI(dVar4),SUB84(dVar3,0));
      }
      else {
        dVar3 = dVar3 + dVar4 * dVar4;
      }
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0xa68) = (int)(D2U(dVar3) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0xa68) = dVar3;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc558(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0e28a0\n.set _FUN_8c0e28a0, _FUN_8c0e28a0_def\n");
