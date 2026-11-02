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
int Class_12a990_m6_09c6a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12a990_m6_09c6a4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a4;
  undefined4 ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0294c0(ar4,ar5,ar6,ar7));
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(le<int>* )(unsigned)(0x524 + ar4 + iVar1 * 4) != 0) {
      a4 = *(le<int>* )(unsigned)(0x524 + ar4 + iVar1 * 4);
      ar5_00 = ar5;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(a4 + 8) + 0x20))))(a4,ar5,ar6,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c09b544(ar4 + 0x9a4,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c09b6c4(ar4 + 0x9a4,ar5_00,ar6,ar7));
  iVar1 = 0x6e0;
  *(undefined1 *)(unsigned)(0x6e0 + ar4) = 0xff;
  return iVar1;
}

__asm__(".globl Class_12a990_m6_09c6a4\n.set Class_12a990_m6_09c6a4, Class_12a990_m6_09c6a4_def\n");

}
