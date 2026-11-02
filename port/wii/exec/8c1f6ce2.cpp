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
undefined4 s_SEGA_FH01_OK_1f6ce4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_SEGA_FH01_OK_1f6ce4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  char *ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 in_PR = 0;
  
  ar5_00 = 0xff;
  ar6_00 = 0x3c;
  (vsp = ((unsigned long)(fr0_ - 4)), memset(ar5,0xff,0x3c,ar7));
  if (ar4 == 0) {
    ar4_00 = "SEGA_FH01_OK";
  }
  else if (ar4 == 1) {
    ar4_00 = "SEGA_FH01_EXIST";
  }
  else if (ar4 == 2) {
    ar4_00 = "SEGA_FH01_PROCESS1";
  }
  else {
    if (ar4 != 3) {
      return 0xffffffff;
    }
    ar4_00 = "SEGA_FH01_PROCESS2";
  }
  ({ unsigned long ri0_ = (unsigned long)(ar4); unsigned long ri1_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c010998(ar4_00,ar5_00,ar6_00,ar7); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f884c(0x3fc,ar5,ar6_00,ar7));
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  return iVar1;
}

__asm__(".globl s_SEGA_FH01_OK_1f6ce4\n.set s_SEGA_FH01_OK_1f6ce4, s_SEGA_FH01_OK_1f6ce4_def\n");

}
