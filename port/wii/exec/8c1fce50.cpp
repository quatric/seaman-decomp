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
undefined4 FUN_8c1fce50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fce50");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (int)0x80;
  uVar3 = 0x8c475fc0 + (int)0x400;
  uVar1 = 0x8c475fc0;
  do {
    *(le<undefined4>* )(unsigned)(uVar1 + 0x78) = ar4;
    uVar1 = uVar1 + iVar2;
  } while (uVar1 < uVar3);
  return 0x78;
}

__asm__(".globl FUN_8c1fce50\n.set FUN_8c1fce50, FUN_8c1fce50_def\n");

}
