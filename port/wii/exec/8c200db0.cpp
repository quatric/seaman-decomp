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
undefined4 FUN_8c200db0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200db0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int in_r0 = (int)(unsigned long)vin0;
  int iVar2;
  undefined4 in_r2 = 0;
  int in_r3 = 0;
  undefined4 unaff_r10 = 0;
  int iVar3;
  int unaff_r12 = 0;
  int unaff_r13 = 0;
  int iVar4;
  int a5;
  
  puVar1 = ((void *)(unsigned)0x8c1fbb6c);
  iVar4 = unaff_r13 + in_r3;
  iVar3 = (int)0x200;
  *(le<undefined4>* )(unsigned)(iVar4 + 0x30) = in_r2;
  *(le<undefined4>* )(unsigned)(iVar4 + 0x34) = *(le<undefined4>* )(unsigned)(in_r0 + *(le<int>* )(unsigned)(iVar4 + 4) * 0x50);
  a5 = 0;
  while( true ) {
    if (*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar4 + 0x1c)) + 1 <= a5) {
      return 0;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r10,a5,unaff_r12,ar7));
    if (iVar2 < 0) break;
    a5 = a5 + 1;
    unaff_r12 = unaff_r12 + iVar3;
  }
  return iVar2;
}

__asm__(".globl FUN_8c200db0\n.set FUN_8c200db0, FUN_8c200db0_def\n");

}
