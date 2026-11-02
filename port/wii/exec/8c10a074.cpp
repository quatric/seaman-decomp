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
undefined4 Class_12c3c4_m10_10a074_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12c3c4_m10_10a074");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (ar6 == 2) {
    *(le<int>* )(unsigned)(ar5 + 4) = (int)*(char *)(unsigned)(0x865 + ar4);
  }
  else {
    *(le<int>* )(unsigned)(ar5 + 4) = (int)*(char *)(unsigned)(0x854 + ar4);
  }
  *ar5 = *(undefined1 *)(unsigned)(0x98 + ar4);
  ar5[1] = *(undefined1 *)(unsigned)(0x99 + ar4);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030d2c(ar4 + 0x9c,ar5 + 8,ar6,ar7));
  return uVar1;
}

__asm__(".globl Class_12c3c4_m10_10a074\n.set Class_12c3c4_m10_10a074, Class_12c3c4_m10_10a074_def\n");

}
