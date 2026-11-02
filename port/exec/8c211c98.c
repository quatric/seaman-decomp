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
undefined4 FUN_8c211c98_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c211c98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(int *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);
  uint s8 = *(uint *)(vsp + 8);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  *(undefined4 *)(unsigned)0x8c4aa070 = ar4 << 2;
  piVar1 = 0x8c4aa074;
  *(undefined4 *)(unsigned)0x8c4aa074 = ar5 << 2;
  *(undefined4 *)(unsigned)0x8c4aa078 = ar6 << 2;
  *(undefined4 *)(unsigned)0x8c4aa07c = ar7 << 2;
  piVar1[3] = s0 << 2;
  uVar3 = 0x10000000;
  iVar2 = 0x8c4aa22c;
  uVar6 = 0;
  ((uint *)(fr0_ - 0x24))[0] = *(undefined4 *)(unsigned)0x8c4a9fec;
  (*(int *)(fr0_ - 0x38)) = 0x8c4aa22c;
  (*(int *)(fr0_ - 0x30)) = 0x8c4aa22c;
  (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(((uint *)(fr0_ - 0x24))));
  if (s8 != 0) {
    do {
      uVar7 = 0;
      if ((((uint *)(fr0_ - 0x24))[uVar6] & 0x1f) != 0) {
        puVar4 = ((uint *)(fr0_ - 0x24)) + uVar6;
        *puVar4 = *puVar4 + 0x1f & 0xffffffe0;
      }
      puVar4 = (uint *)(unsigned)(uVar6 * 0x14 + iVar2);
      if ((*(undefined4 *)(unsigned)0x8c4a9ef0 == 1) && (*(undefined4 *)(unsigned)0x8c4a9fcc == 0x20)) {
        *puVar4 = uVar3;
      }
      else if (ar4 == 0) {
        *puVar4 = 0;
      }
      else {
        *puVar4 = ((uint *)(fr0_ - 0x24))[uVar6];
        uVar7 = ar4 + 0x17U & 0xfffffff8;
      }
      iVar5 = uVar6 * 0x14 + iVar2;
      if ((*(undefined4 *)(unsigned)0x8c4a9ef0 == 1) && (*(undefined4 *)(unsigned)0x8c4a9fcc == 0x21)) {
        *(uint *)(unsigned)(iVar5 + 4) = uVar3;
      }
      else if (ar5 == 0) {
        *(undefined4 *)(unsigned)(iVar5 + 4) = 0;
      }
      else {
        *(uint *)(unsigned)(iVar5 + 4) = ((uint *)(fr0_ - 0x24))[uVar6] + uVar7 * 4;
        uVar7 = uVar7 + ar5 + 0x17 & 0xfffffff8;
      }
      iVar5 = uVar6 * 0x14 + iVar2;
      if ((*(undefined4 *)(unsigned)0x8c4a9ef0 == 1) && (*(undefined4 *)(unsigned)0x8c4a9fcc == 0x22)) {
        *(uint *)(unsigned)(iVar5 + 8) = uVar3;
      }
      else if (ar6 == 0) {
        *(undefined4 *)(unsigned)(iVar5 + 8) = 0;
      }
      else {
        *(uint *)(unsigned)(iVar5 + 8) = ((uint *)(fr0_ - 0x24))[uVar6] + uVar7 * 4;
        uVar7 = uVar7 + ar6 + 0x17 & 0xfffffff8;
      }
      iVar5 = uVar6 * 0x14 + iVar2;
      if ((*(undefined4 *)(unsigned)0x8c4a9ef0 == 1) && (*(undefined4 *)(unsigned)0x8c4a9fcc == 0x23)) {
        *(uint *)(unsigned)(iVar5 + 0xc) = uVar3;
      }
      else if (ar7 == 0) {
        *(undefined4 *)(unsigned)(iVar5 + 0xc) = 0;
      }
      else {
        *(uint *)(unsigned)(iVar5 + 0xc) = ((uint *)(fr0_ - 0x24))[uVar6] + uVar7 * 4;
        uVar7 = uVar7 + ar7 + 0x17 & 0xfffffff8;
      }
      if ((*(undefined4 *)(unsigned)0x8c4a9ef0 == 1) && (*(undefined4 *)(unsigned)0x8c4a9fcc == 0x24)) {
        *(uint *)(unsigned)(uVar6 * 0x14 + iVar2 + 0x10) = uVar3;
      }
      else if (s0 == 0) {
        *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x30)) + 0x10) = 0;
      }
      else {
        *(uint *)(unsigned)((*(int *)(fr0_ - 0x38)) + 0x10) = uVar7 * 4 + *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x2c));
        uVar7 = uVar7 + s0 + 0x17 & 0xfffffff8;
      }
      uVar6 = uVar6 + 1;
      ((uint *)(fr0_ - 0x24))[1] = uVar7 * 4 + ((uint *)(fr0_ - 0x24))[0];
      (*(int *)(fr0_ - 0x30)) = (*(int *)(fr0_ - 0x30)) + 0x14;
      (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)) + 1));
      (*(int *)(fr0_ - 0x38)) = (*(int *)(fr0_ - 0x38)) + 0x14;
    } while (uVar6 < s8);
  }
  return 0;
}

__asm__(".globl _FUN_8c211c98\n.set _FUN_8c211c98, _FUN_8c211c98_def\n");
