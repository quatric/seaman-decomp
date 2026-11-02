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
undefined4 pvr_206480_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("pvr_206480");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 a4;
  le<undefined4>* puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  a4 = 0x10000000;
  puVar3 = ((void *)(unsigned)0x8c202f40);
  uVar2 = 0xf0ffffff;
  puVar1 = 0xa05f8144;
  iVar8 = (int)0x100;
  uVar6 = 0;
  while ((*(le<int>* )(unsigned)(uVar6 * 4 + 0x8c4a9ef8) != 1 || (*(le<undefined4>* )(unsigned)0x8c4a9db8 != 0))) {
    uVar6 = uVar6 + 1;
    if (3 < (int)uVar6) {
      return 1;
    }
  }
  *(le<undefined4>* )(unsigned)0x8c4a9db8 = 1;
  iVar9 = uVar6 * 4;
  *(le<undefined4>* )(unsigned)(0x8c4a9ef8 + iVar9) = 2;
  *(le<undefined4>* )(unsigned)0x8c4a9f10 = uVar6;
  puVar4 = 0xa05f8008;
  *(le<undefined4>* )(unsigned)0x8c4aa0fc = *(volatile le<undefined4>* )(unsigned)0xffd8000c;
  *puVar4 = 1;
  *puVar4 = 0;
  iVar5 = 0x8c4aa024;
  iVar7 = (uVar6 & 1) * 0x20;
  *(volatile le<undefined4>* )(unsigned)0xa05f8124 = *(le<undefined4>* )(unsigned)(0x8c4aa024 + iVar7);
  *(volatile le<undefined4>* )(unsigned)0xa05f812c = *(le<undefined4>* )(unsigned)(iVar5 + 4 + iVar7);
  *(volatile le<undefined4>* )(unsigned)0xa05f8128 = *(le<undefined4>* )(unsigned)(iVar5 + 0xc + iVar7);
  *(volatile le<undefined4>* )(unsigned)0xa05f8130 = *(le<undefined4>* )(unsigned)(iVar5 + 0x10 + iVar7);
  *(volatile le<undefined4>* )(unsigned)0xa05f8164 = *(le<undefined4>* )(unsigned)(iVar5 + 8 + iVar7);
  *puVar1 = 0x80000000;
  *(le<undefined4>* )(unsigned)0x8c4a9f14 = 0;
  *(le<undefined4>* )(unsigned)0x8c4a9f18 = 0;
  iVar5 = 0x8c4a9f7c;
  *(le<undefined4>* )(unsigned)0x8c4aa0b8 = 0;
  if (*(le<int>* )(unsigned)(iVar5 + iVar9) != 0) {
    *(le<undefined4>* )(unsigned)0x8c4a9f14 = *(le<undefined4>* )(unsigned)0x8c4a9f14 | 1;
    iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(a4,*(le<undefined4>* )(unsigned)(0x8c4a9f2c + iVar9),
                              *(le<int>* )(unsigned)(iVar5 + iVar9) + 0x20,0x10));
    if (iVar5 == iVar8) {
      return 0;
    }
  }
  if (*(le<int>* )(unsigned)(0x8c4a9f8c + iVar9) != 0) {
    *(le<undefined4>* )(unsigned)0x8c4a9f14 = *(le<undefined4>* )(unsigned)0x8c4a9f14 | 2;
    puVar1 = 0x8c4a9fe4;
    if (*(le<undefined4>* )(unsigned)0x8c4a9fe0 == 1) {
      *(le<uint>* )(unsigned)*(le<undefined4>* )(unsigned)0x8c4a9fe4 = *(le<uint>* )(unsigned)*(le<undefined4>* )(unsigned)0x8c4a9fe4 & uVar2 | 0x1000000;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(a4,*puVar1,*(le<undefined4>* )(unsigned)0x8c4a9fe8,0x10));
      if (iVar5 == iVar8) {
        return 0;
      }
    }
    iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(a4,*(le<undefined4>* )(unsigned)(0x8c4a9f8c + -0x50 + iVar9),
                              *(le<int>* )(unsigned)(0x8c4a9f8c + iVar9) + 0x20,0x10));
    if (iVar5 == iVar8) {
      return 0;
    }
  }
  iVar5 = 0x8c4a9f9c;
  if (*(le<int>* )(unsigned)(0x8c4a9f9c + iVar9) != 0) {
    *(le<undefined4>* )(unsigned)0x8c4a9f14 = *(le<undefined4>* )(unsigned)0x8c4a9f14 | 4;
    iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(a4,*(le<undefined4>* )(unsigned)(0x8c4a9f4c + iVar9),
                              *(le<int>* )(unsigned)(iVar5 + iVar9) + 0x20,0x10));
    if (iVar5 == iVar8) {
      return 0;
    }
  }
  if (*(le<int>* )(unsigned)(0x8c4a9fac + iVar9) != 0) {
    *(le<undefined4>* )(unsigned)0x8c4a9f14 = *(le<undefined4>* )(unsigned)0x8c4a9f14 | 8;
    if (*(le<undefined4>* )(unsigned)0x8c4a9fe0 == 1) {
      *(le<uint>* )(unsigned)*(le<undefined4>* )(unsigned)0x8c4a9fe4 = *(le<uint>* )(unsigned)*(le<undefined4>* )(unsigned)0x8c4a9fe4 & uVar2 | 0x3000000;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(a4,*(le<undefined4>* )(unsigned)0x8c4a9fe4,*(le<undefined4>* )(unsigned)0x8c4a9fe8,0x10));
      if (iVar5 == iVar8) {
        return 0;
      }
    }
    iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(a4,*(le<undefined4>* )(unsigned)(0x8c4a9fac + -0x50 + iVar9),
                              *(le<int>* )(unsigned)(0x8c4a9fac + iVar9) + 0x20,0x10));
    if (iVar5 == iVar8) {
      return 0;
    }
  }
  if (*(le<int>* )(unsigned)(0x8c4a9fbc + iVar9) == 0) {
    return 1;
  }
  *(le<undefined4>* )(unsigned)0x8c4a9f14 = *(le<undefined4>* )(unsigned)0x8c4a9f14 | 0x10;
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(a4,*(le<undefined4>* )(unsigned)(0x8c4a9fbc + -0x50 + iVar9),
                            *(le<int>* )(unsigned)(0x8c4a9fbc + iVar9) + 0x20,0x10));
  if (iVar5 != iVar8) {
    return 1;
  }
  return 0;
}

__asm__(".globl pvr_206480\n.set pvr_206480, pvr_206480_def\n");

}
