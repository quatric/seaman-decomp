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
undefined4 global_list_push_def(undefined4 ar4,undefined4 ar5,le<undefined4>* ar6,undefined4 ar7)

{
  TRACE_ENTER("global_list_push");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  
  puVar1 = 0x8c2787a0;
  *ar6 = *(le<undefined4>* )(unsigned)0x8c2787a0;
  ar6[1] = ar5;
  ar6[2] = ar4;
  *puVar1 = ar6;
  return ar4;
}

__asm__(".globl global_list_push\n.set global_list_push, global_list_push_def\n");

}
