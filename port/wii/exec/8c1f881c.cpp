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
undefined4 FUN_8c1f881c_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f881c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f0f24(ar4,ar5,ar6,ar7));
  puVar1 = ((void *)(unsigned)0x8c1f0fa0);
  if (iVar2 == 0) {
    do {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,ar5,ar6,ar7));
      ar4 = (uint)(iVar2 == 2);
    } while (iVar2 == 2);
    return 0;
  }
  return 0xffffffff;
}

__asm__(".globl FUN_8c1f881c\n.set FUN_8c1f881c, FUN_8c1f881c_def\n");

}
