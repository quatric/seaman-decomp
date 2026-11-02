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
undefined4 FUN_8c258f1c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c258f1c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  le<undefined4>* puVar2;
  le<undefined4>* puVar3;
  undefined4 uVar4;
  
  puVar1 = ((void *)(unsigned)0x8c20b7a0);
  *(le<undefined4>* )(unsigned)0x8c4aa6d4 = 1;
  uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,ar5,ar6,ar7));
  puVar3 = 0x8c4aa520;
  puVar2 = 0x8c4aa51c;
  *(le<undefined4>* )(unsigned)0x8c4aa518 = 0;
  *puVar2 = 0;
  *puVar3 = 0;
  return uVar4;
}

__asm__(".globl FUN_8c258f1c\n.set FUN_8c258f1c, FUN_8c258f1c_def\n");

}
