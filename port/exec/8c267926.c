#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c267926_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c267926";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  int *in_r3 = 0;
  int ar6_00;
  int ar7_00;
  int ar5_00;
  undefined4 in_PR = 0;
  
  ar6_00 = *in_r3;
  ar7_00 = 0xd000001;
  ar5_00 = 0;
  if (ar6_00 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6_00 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    ar7_00 = (int)*(char *)(unsigned)(ar4 + 1);
    if ((char)ar5 == '\x7f') {
      cVar1 = '\0';
    }
    else {
      cVar1 = (char)ar5 * -2 + -1;
    }
    *(char *)(unsigned)((short)*(char *)(unsigned)(ar4 + 1) * 0x2c + ar6_00 + 0xae) = cVar1;
  }
  if (ar5_00 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)0x8c267924),ar5_00,ar6_00,ar7_00); });
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267926\n.set _FUN_8c267926, _FUN_8c267926_def\n");
