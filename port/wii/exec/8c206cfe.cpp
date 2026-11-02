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
undefined4 pvr_206cfe_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("pvr_206cfe");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<uint>* puVar2;
  undefined4 uVar3;
  int iVar4;
  le<undefined4>* puVar5;
  int iVar6;
  le<undefined4>* puVar7;
  
  iVar1 = 0x8c4aa0b4;
  if (*(le<int>* )(unsigned)(*(le<undefined4>* )(unsigned)0x8c4a9f10 * 4 + 0x8c4a9ef8) != -1) {
    if (*(le<undefined4>* )(unsigned)0x8c4a9f24 == 0) {
      *(le<undefined4>* )(unsigned)0x8c4a9e5c = *(le<undefined4>* )(unsigned)0x8c4a9e5c | 0x20;
      ((le<undefined4>* )(unsigned)0x8c4a9f10)[*(le<undefined4>* )(unsigned)0x8c4a9f10 + -6] = 3;
    }
    puVar2 = 0x8c4a9f10;
    if ((*(le<undefined4>* )(unsigned)0x8c4a9bb0 & 1) == 0) {
      iVar4 = *(le<int>* )(unsigned)(0x8c4aa034 + (*(le<undefined4>* )(unsigned)0x8c4a9f10 & 1) * 0x20);
    }
    else {
      iVar4 = *(volatile le<undefined4>* )(unsigned)0xa05f8138;
    }
    *(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)0x8c4a9f10 & 1) * 4 + iVar1 + 0x24) = *(volatile le<undefined4>* )(unsigned)0xa05f8138;
    *(le<undefined4>* )(unsigned)0x8c4a9d60 =
         *(le<undefined4>* )(unsigned)0x8c4a9d58 & 0xff000000 |
         (iVar4 - *(le<int>* )(unsigned)(0x8c4aa030 + (*puVar2 & 1) * 0x20)) * 2 & 0xfffff8;
    iVar6 = 0x30;
    puVar5 = (le<undefined4>* )(unsigned)(iVar4 + 0xa5000000);
    puVar7 = 0x8c4a9c50;
    do {
      uVar3 = *puVar7;
      puVar7 = puVar7 + 1;
      iVar6 = iVar6 + -1;
      *puVar5 = uVar3;
      puVar5 = puVar5 + 1;
    } while (iVar6 != 0);
  }
  *(le<undefined4>* )(unsigned)0x8c4a9db8 = 0;
  *(le<int>* )(unsigned)(iVar1 + 0x4c) = *(le<int>* )(unsigned)(iVar1 + 0x48) - *(volatile le<undefined4>* )(unsigned)0xffd8000c;
  return 0x4c;
}

__asm__(".globl pvr_206cfe\n.set pvr_206cfe, pvr_206cfe_def\n");

}
