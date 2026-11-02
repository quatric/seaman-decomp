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
uint FUN_8c211876_def(uint ar4,int ar5,uint ar6,int ar7)

{
  TRACE_ENTER("FUN_8c211876");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(le<int>* )(vsp + 0);
  int s4 = *(le<int>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = *(le<undefined4>* )(unsigned)0x8c4a9c14;
  iVar5 = 0;
  iVar7 = 0;
  iVar6 = 0;
  uVar4 = (uint)(ar5 != 0);
  uVar3 = (uint)(ar7 != 0);
  if (s0 != 0) {
    iVar5 = 2;
  }
  if (s4 == 1) {
    if (ar4 != 0) {
      iVar6 = 2;
    }
    if (ar6 != 0) {
      iVar7 = 2;
    }
  }
  else {
    if (ar4 != 0) {
      iVar6 = 3;
    }
    if (ar6 != 0) {
      iVar7 = 3;
    }
    if ((ar4 != 0) && (ar6 != 0)) {
      if (ar4 < ar6) {
        iVar6 = 2;
      }
      else {
        iVar7 = 2;
      }
    }
  }
  if (*(le<undefined4>* )(unsigned)0x8c4a9ef0 == 1) {
    if (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x20) {
      iVar6 = 3;
    }
    if (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x21) {
      uVar4 = 2;
    }
    if (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x22) {
      iVar7 = 3;
    }
    if (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x23) {
      uVar3 = 2;
    }
    if (*(le<undefined4>* )(unsigned)0x8c4a9fcc == 0x24) {
      iVar5 = 3;
    }
  }
  uVar3 = iVar6 << 0x11 & 0x60000 | uVar4 << 0x13 & 0x180000 | iVar7 << 0x15 & 0x600000
          | uVar3 << 0x17 & 0x600000 << 2 | iVar5 << 0x19 & 0x6000000 | 0x10000;
  if ((*(le<undefined4>* )(unsigned)0x8c4a9bb0 & 0x20) != 0) {
    if (((uVar4 == 0) || (iVar7 == 0)) || (iVar5 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(le<undefined4>* )(unsigned)0x8c4aa010 = uVar1;
  }
  return uVar2 & 0xff | uVar3;
}

__asm__(".globl FUN_8c211876\n.set FUN_8c211876, FUN_8c211876_def\n");

}
