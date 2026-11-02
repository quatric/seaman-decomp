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
undefined4 FUN_8c20e720_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e720");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((((*(le<int>* )(unsigned)(ar4 + 8) == 0) &&
       (((*(le<int>* )(unsigned)(ar4 + 0x20) == 2 || (*(le<int>* )(unsigned)(ar4 + 0x20) == 3)) && (*(le<int>* )(unsigned)(ar4 + 0x54) == 1)))
       ) && (((*(le<int>* )(unsigned)(ar4 + 0x2c) == 10 && (*(le<int>* )(unsigned)(ar4 + 0x30) == 0xb)) &&
             (*(le<int>* )(unsigned)(ar4 + 0x34) == 0)))) && (*(le<int>* )(unsigned)(ar4 + 0x38) == 0)) {
    uVar1 = 2;
  }
  if ((((*(le<int>* )(unsigned)(ar4 + 8) == 2) && ((*(le<int>* )(unsigned)(ar4 + 0x20) == 2 || (*(le<int>* )(unsigned)(ar4 + 0x20) == 3)))) &&
      (*(le<int>* )(unsigned)(ar4 + 0x54) == 1)) &&
     ((((*(le<int>* )(unsigned)(ar4 + 0x2c) == 10 && (*(le<int>* )(unsigned)(ar4 + 0x30) == 0xb)) && (*(le<int>* )(unsigned)(ar4 + 0x34) == 0)
       ) && (*(le<int>* )(unsigned)(ar4 + 0x38) == 1)))) {
    uVar1 = 3;
  }
  return uVar1;
}

__asm__(".globl FUN_8c20e720\n.set FUN_8c20e720, FUN_8c20e720_def\n");

}
