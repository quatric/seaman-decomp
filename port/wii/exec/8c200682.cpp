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
undefined4 FUN_8c200682_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200682");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  int in_r3 = 0;
  undefined4 unaff_r11 = 0;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_MACL = 0;
  
  puVar1 = ((void *)(unsigned)0x8c1fbb6c);
  iVar4 = in_MACL + in_r3;
  iVar3 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar4 + 0x1c) + 0x10);
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r11,*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar4 + 0x1c) + 0xc) + iVar5,
                                iVar5 * 0x200 + *(le<int>* )(unsigned)(iVar4 + 0x24),ar7));
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 0;
}

__asm__(".globl FUN_8c200682\n.set FUN_8c200682, FUN_8c200682_def\n");

}
