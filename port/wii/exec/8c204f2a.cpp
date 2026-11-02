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
undefined4 FUN_8c204f2a_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c204f2a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 2084; for (int i_ = 0; i_ < 2084; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint a6;
  int iVar4;
  int a4;
  int iVar5;
  uint uVar6;
  
  puVar1 = ((void *)(unsigned)0x8c20732e);
  iVar2 = (int)(int)0xfffff7fc;
  uVar6 = (uint)0x800;
  if (uVar6 < ar6) {
    *(le<unsigned>* )(unsigned)((int)&(*(le<int>* )(fr0_ - 0x20)) + iVar2) = (fr0_ + (int)0xffffffe4) + iVar2;
    do {
      iVar5 = ar5;
      a6 = uVar6;
      (vsp = ((unsigned long)(fr0_ - 2084)), FUN_8c20a9c2(*(le<undefined4>* )(unsigned)((int)&(*(le<int>* )(fr0_ - 0x20)) + iVar2),ar5,uVar6,ar7));
      a4 = *(le<int>* )(unsigned)((int)&(*(le<int>* )(fr0_ - 0x20)) + iVar2);
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        (vsp = ((unsigned long)(fr0_ - 2084)), (*(code *)xlat((unsigned long)(puVar1)))(a4,iVar5,a6,ar7));
        a4 = a4 + 0x20;
      }
      (vsp = ((unsigned long)(fr0_ - 2084)), FUN_8c20a8e0(ar4,*(le<undefined4>* )(unsigned)((int)&(*(le<int>* )(fr0_ - 0x20)) + iVar2),uVar6,ar7));
      ar6 = ar6 - uVar6;
      ar5 = ar5 + uVar6;
      ar4 = ar4 + uVar6;
    } while (uVar6 < ar6);
  }
  *(le<unsigned>* )(unsigned)((int)&(*(le<int>* )(fr0_ - 0x20)) + iVar2) = (fr0_ + (int)0xffffffe4) + iVar2;
  uVar6 = ar6;
  (vsp = ((unsigned long)(fr0_ - 2084)), FUN_8c20a9c2((fr0_ + (int)0xffffffe4) + iVar2,ar5,ar6,ar7));
  iVar4 = *(le<int>* )(unsigned)((int)&(*(le<int>* )(fr0_ - 0x20)) + iVar2);
  for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
    (vsp = ((unsigned long)(fr0_ - 2084)), (*(code *)xlat((unsigned long)(puVar1)))(iVar4,ar5,uVar6,ar7));
    iVar4 = iVar4 + 0x20;
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 2084)), FUN_8c20a8e0(ar4,*(le<undefined4>* )(unsigned)((int)&(*(le<int>* )(fr0_ - 0x20)) + iVar2),ar6,ar7));
  return uVar3;
}

__asm__(".globl FUN_8c204f2a\n.set FUN_8c204f2a, FUN_8c204f2a_def\n");

}
