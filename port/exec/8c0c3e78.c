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
int FUN_8c0c3e78_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0c3e78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  short sVar1;
  double *pdVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  double in_dr0 = 0;
  double dVar7;
  double dVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
    ((undefined4 *)(fr0_ - 0x2c))[iVar6] = ar5;
  }
  uVar5 = 4;
  puVar4 = ((undefined4 *)(fr0_ - 0x2c));
  ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c016318(ar4 + 0xc,ar4 + 0x2c4,puVar4,4); });
  iVar6 = ar4 + 0x174;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c016324(ar4 + 0xc,iVar6,puVar4,uVar5));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c01538c(ar4 + 700,iVar6,puVar4,uVar5));
  uVar3 = 0;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c014a94(ar4 + 700,0,puVar4,uVar5));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c016340(ar4 + 0xc,uVar3,puVar4,uVar5));
  if (ar6 == 0) {
    uVar5 = 4;
    puVar4 = ((undefined4 *)(fr0_ - 0x2c));
    ({ unsigned long ri0_ = (unsigned long)(0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c016318(ar4 + 0xc,ar4 + 0x2e4,puVar4,4); });
    iVar6 = ar4 + 0x174;
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c016324(ar4 + 0xc,iVar6,puVar4,uVar5));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c01538c(ar4 + 700,iVar6,puVar4,uVar5));
    uVar3 = 1;
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c014a94(ar4 + 700,1,puVar4,uVar5));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c016340(ar4 + 0xc,uVar3,puVar4,uVar5));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 76)), get_field_a524_01f514(0x8c3dd7dc,uVar3,puVar4,uVar5));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 76)), libgcc_divide_helper_010284(uVar3,6,puVar4,uVar5));
    sVar1 = (short)uVar3 + 1;
    *(short *)(unsigned)(ar4 + 0x184) = sVar1 * 0x10;
    *(short *)(unsigned)(ar4 + 0x188) = sVar1 * 0x10;
    *(short *)(unsigned)(ar4 + 0x18c) = sVar1 * 0x10 + 0xf;
    *(short *)(unsigned)(ar4 + 400) = sVar1 * 0x10 + 0xf;
    *(undefined2 *)(unsigned)(ar4 + 0x186) = 0x5f;
    *(undefined2 *)(unsigned)(ar4 + 0x18a) = 0x40;
    *(undefined2 *)(unsigned)(ar4 + 0x18e) = 0x40;
    *(undefined2 *)(unsigned)(ar4 + 0x192) = 0x5f;
    if (cVar10 == '\0') {
      dVar8 = 2.161728111744385e+18;
    }
    else {
      dVar8 = -524288.13230896;
    }
    for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
      pdVar2 = (double *)(unsigned)(ar4 + iVar6 * 8 + 0x54);
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,SUB84(in_dr0,0));
      }
      else {
        dVar7 = *pdVar2;
      }
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(F32HI(dVar7) + F32LO(dVar8),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 + dVar8;
      }
      if (cVar10 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(fr0_ - 0x4c)) + iVar6 * 8) = (int)(D2U(dVar7) >> 0x20);
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(fr0_ - 0x4c)) + iVar6 * 8) = dVar7;
      }
      pdVar2 = (double *)(unsigned)(ar4 + iVar6 * 8 + 0x58);
      if (cVar10 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,SUB84(dVar7,0));
      }
      else {
        in_dr0 = *pdVar2;
      }
      if (cVar9 == '\0') {
        in_dr0 = CONCAT44D(F32HI(in_dr0) +
                                  F32HI(dVar8),SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 + dVar8;
      }
      if (cVar10 == '\0') {
        *(int *)(unsigned)(((undefined1 *)(fr0_ - 0x4c)) + iVar6 * 8 + 4) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(unsigned)(((undefined1 *)(fr0_ - 0x4c)) + iVar6 * 8 + 4) = in_dr0;
      }
    }
    uVar5 = 4;
    puVar4 = ((undefined4 *)(fr0_ - 0x2c));
    ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c016318(ar4 + 0xc,((undefined1 *)(fr0_ - 0x4c)),puVar4,4); });
    iVar6 = ar4 + 0x184;
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c016324(ar4 + 0xc,iVar6,puVar4,uVar5));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c01538c(ar4 + 4,iVar6,puVar4,uVar5));
    uVar3 = 0;
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c014a94(ar4 + 4,0,puVar4,uVar5));
    ar6 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c016340(ar4 + 0xc,uVar3,puVar4,uVar5));
  }
  else if (ar6 == 1) {
    uVar5 = 4;
    puVar4 = ((undefined4 *)(fr0_ - 0x2c));
    ({ unsigned long ri0_ = (unsigned long)(1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c016318(ar4 + 0xc,ar4 + 0x2e4,puVar4,4); });
    iVar6 = ar4 + 0x174;
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c016324(ar4 + 0xc,iVar6,puVar4,uVar5));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c01538c(ar4 + 700,iVar6,puVar4,uVar5));
    uVar3 = 2;
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c014a94(ar4 + 700,2,puVar4,uVar5));
    ar6 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c016340(ar4 + 0xc,uVar3,puVar4,uVar5));
  }
  return ar6;
}

__asm__(".globl _FUN_8c0c3e78\n.set _FUN_8c0c3e78, _FUN_8c0c3e78_def\n");
