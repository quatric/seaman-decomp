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
int FUN_8c1fa3fa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fa3fa");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  uint in_r3 = 0;
  int unaff_r14 = 0;
  int iVar1;
  le<undefined4>* puVar2;
  
  if ((int)in_r3 < 0) {
    iVar1 = unaff_r14 >> (~in_r3 & 0x1f) + 1;
  }
  else {
    iVar1 = unaff_r14 << (in_r3 & 0x1f);
  }
  for (puVar2 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(in_r0 + iVar1 * 4)); puVar2 != (le<undefined4>* )(unsigned)0x0;
      puVar2 = (le<undefined4>* )(unsigned)puVar2[1]) {
    in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*puVar2)))(puVar2[2],ar5,ar6,ar7));
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c1fa3fa\n.set FUN_8c1fa3fa, FUN_8c1fa3fa_def\n");

}
