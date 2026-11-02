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
undefined4 FUN_8c1f7d30_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f7d30");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined *puVar1;
  
  if (ar5 == (le<undefined4>* )(unsigned)0x0) {
    return 0;
  }
  (*(le<int>* )(fr0_ - 0xc)) = ar4 + 0x40;
  (*(le<int>* )(fr0_ - 0x10)) = ar4 + 0x2b;
  (*(le<int>* )(fr0_ - 0x10)) = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c1f7d80((*(le<int>* )(fr0_ - 0x10)),&(*(le<undefined4>* )(fr0_ - 0x18)),&(*(le<undefined4>* )(fr0_ - 0x14)),ar7));
  ar5[1] = (*(le<undefined4>* )(fr0_ - 0x18));
  puVar1 = ((void *)(unsigned)0x8c013ef4);
  *ar5 = (*(le<undefined4>* )(fr0_ - 0x14));
  (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(puVar1)))(ar5 + 2,(*(le<int>* )(fr0_ - 0xc)),10,ar7));
  *(undefined1 *)(unsigned)((int)ar5 + 0x12) = 0;
  return (*(le<int>* )(fr0_ - 0x10));
}

__asm__(".globl FUN_8c1f7d30\n.set FUN_8c1f7d30, FUN_8c1f7d30_def\n");

}
