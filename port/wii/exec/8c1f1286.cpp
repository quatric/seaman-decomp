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
int FUN_8c1f1286_def(undefined4 ar4,uint ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f1286");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  int ar6_00;
  uint ain0;
  
  ar6_00 = ar6;
  ain0 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), syscall_1f1150(ar4,(fr0_ + (int)0xffffffe8),ar6,ar7));
  if (((iVar1 == 0) && (ar6 != 0)) && (((int)ar5 >> 0x1c & 0xfU) != 10)) {
    if ((ar5 & 0x1f) == 0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c1f9980(ar5,ar6,ar6_00,ar7); });
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c1f9bde(ar5,ar6,ar6_00,ar7); });
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c1f1286\n.set FUN_8c1f1286, FUN_8c1f1286_def\n");

}
