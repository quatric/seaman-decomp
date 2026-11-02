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
uint FUN_8c1fda58_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fda58");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  int unaff_r11 = 0;
  uint unaff_r12 = 0;
  uint unaff_r13 = 0;
  int unaff_r14 = 0;
  
  puVar1 = ((void *)(unsigned)0x8c1fd510);
  do {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14,ar5,ar6,ar7));
    unaff_r14 = unaff_r14 + 1;
    if (iVar2 != 0) {
      unaff_r12 = unaff_r12 | unaff_r13;
    }
    unaff_r13 = unaff_r13 << 1;
  } while (unaff_r14 < unaff_r11);
  return unaff_r12 = 0;
}

__asm__(".globl FUN_8c1fda58\n.set FUN_8c1fda58, FUN_8c1fda58_def\n");

}
