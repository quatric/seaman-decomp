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
int FUN_8c202a04_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c202a04");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *puVar2;
  byte *pbVar3;
  int iVar4;
  int unaff_r13 = 0;
  int unaff_r14 = 0;
  int iVar5;
  
  puVar2 = ((void *)(unsigned)0x8c1efd14);
  iVar1 = 0x8c47e928;
  do {
    pbVar3 = (byte *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(unaff_r14,ar5,ar6,ar7));
    iVar5 = unaff_r14 + 1;
    iVar4 = unaff_r14 * 4;
    *(le<uint>* )(unsigned)(iVar4 + iVar1) = (uint)*pbVar3;
    unaff_r14 = iVar5;
  } while (iVar5 <= unaff_r13);
  return iVar4;
}

__asm__(".globl FUN_8c202a04\n.set FUN_8c202a04, FUN_8c202a04_def\n");

}
