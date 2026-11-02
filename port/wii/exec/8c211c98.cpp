#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c211c98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(le<int>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);
  uint s8 = *(le<uint>* )(vsp + 8);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  int iVar2;
  uint uVar3;
  le<uint>* puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  *(le<undefined4>* )(unsigned)0x8c4aa070 = ar4 << 2;
  piVar1 = 0x8c4aa074;
  *(le<undefined4>* )(unsigned)0x8c4aa074 = ar5 << 2;
  *(le<undefined4>* )(unsigned)0x8c4aa078 = ar6 << 2;
  *(le<undefined4>* )(unsigned)0x8c4aa07c = ar7 << 2;
  piVar1[3] = s0 << 2;
  uVar3 = 0x10000000;
  iVar2 = 0x8c4aa22c;
  uVar6 = 0;
  ((le<uint>* )(fr0_ - 0x24))[0] = *(le<undefined4>* )(unsigned)0x8c4a9fec;
  (*(le<int>* )(fr0_ - 0x38)) = 0x8c4aa22c;
  (*(le<int>* )(fr0_ - 0x30)) = 0x8c4aa22c;
  (*(le<unsigned>* )(fr0_ - 0x2c) = (unsigned)(unsigned long)(((le<uint>* )(fr0_ - 0x24))));
  if (s8 != 0) {
    do {
      uVar7 = 0;
      if ((((le<uint>* )(fr0_ - 0x24))[uVar6] & 0x1f) != 0) {
        puVar4 = ((le<uint>* )(fr0_ - 0x24)) + uVar6;
        *puVar4 = *puVar4 + 0x1f & 0xffffffe0;
      }
      puVar4 = (le<uint>* )(unsigned)(uVar6 * 0x14 + iVar2);
      if ((*(le<undefined4>* )(unsigned)0x8c4a9ef0 == 1) && (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x20)) {
        *puVar4 = uVar3;
      }
      else if (ar4 == 0) {
        *puVar4 = 0;
      }
      else {
        *puVar4 = ((le<uint>* )(fr0_ - 0x24))[uVar6];
        uVar7 = ar4 + 0x17U & 0xfffffff8;
      }
      iVar5 = uVar6 * 0x14 + iVar2;
      if ((*(le<undefined4>* )(unsigned)0x8c4a9ef0 == 1) && (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x21)) {
        *(le<uint>* )(unsigned)(iVar5 + 4) = uVar3;
      }
      else if (ar5 == 0) {
        *(le<undefined4>* )(unsigned)(iVar5 + 4) = 0;
      }
      else {
        *(le<uint>* )(unsigned)(iVar5 + 4) = ((le<uint>* )(fr0_ - 0x24))[uVar6] + uVar7 * 4;
        uVar7 = uVar7 + ar5 + 0x17 & 0xfffffff8;
      }
      iVar5 = uVar6 * 0x14 + iVar2;
      if ((*(le<undefined4>* )(unsigned)0x8c4a9ef0 == 1) && (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x22)) {
        *(le<uint>* )(unsigned)(iVar5 + 8) = uVar3;
      }
      else if (ar6 == 0) {
        *(le<undefined4>* )(unsigned)(iVar5 + 8) = 0;
      }
      else {
        *(le<uint>* )(unsigned)(iVar5 + 8) = ((le<uint>* )(fr0_ - 0x24))[uVar6] + uVar7 * 4;
        uVar7 = uVar7 + ar6 + 0x17 & 0xfffffff8;
      }
      iVar5 = uVar6 * 0x14 + iVar2;
      if ((*(le<undefined4>* )(unsigned)0x8c4a9ef0 == 1) && (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x23)) {
        *(le<uint>* )(unsigned)(iVar5 + 0xc) = uVar3;
      }
      else if (ar7 == 0) {
        *(le<undefined4>* )(unsigned)(iVar5 + 0xc) = 0;
      }
      else {
        *(le<uint>* )(unsigned)(iVar5 + 0xc) = ((le<uint>* )(fr0_ - 0x24))[uVar6] + uVar7 * 4;
        uVar7 = uVar7 + ar7 + 0x17 & 0xfffffff8;
      }
      if ((*(le<undefined4>* )(unsigned)0x8c4a9ef0 == 1) && (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x24)) {
        *(le<uint>* )(unsigned)(uVar6 * 0x14 + iVar2 + 0x10) = uVar3;
      }
      else if (s0 == 0) {
        *(le<undefined4>* )(unsigned)((*(le<int>* )(fr0_ - 0x30)) + 0x10) = 0;
      }
      else {
        *(le<uint>* )(unsigned)((*(le<int>* )(fr0_ - 0x38)) + 0x10) = uVar7 * 4 + *((le<uint>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x2c));
        uVar7 = uVar7 + s0 + 0x17 & 0xfffffff8;
      }
      uVar6 = uVar6 + 1;
      ((le<uint>* )(fr0_ - 0x24))[1] = uVar7 * 4 + ((le<uint>* )(fr0_ - 0x24))[0];
      (*(le<int>* )(fr0_ - 0x30)) = (*(le<int>* )(fr0_ - 0x30)) + 0x14;
      (*(le<unsigned>* )(fr0_ - 0x2c) = (unsigned)(unsigned long)(((le<uint>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x2c)) + 1));
      (*(le<int>* )(fr0_ - 0x38)) = (*(le<int>* )(fr0_ - 0x38)) + 0x14;
    } while (uVar6 < s8);
  }
  return 0;
}

__asm__(".globl FUN_8c211c98\n.set FUN_8c211c98, FUN_8c211c98_def\n");

}
