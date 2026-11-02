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
int FUN_8c267924_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c267924";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar6_00;
  int in_r0 = (int)(unsigned long)vin0;
  int ar7_00;
  int ar5_00;
  
  ar6_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c2784c0);
  ar7_00 = 0xd000001;
  ar5_00 = 0;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if ((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    ar7_00 = (int)*(char *)(unsigned)(ar4 + 1);
    if ((char)ar5 == '\x7f') {
      in_r0 = 0;
    }
    else {
      in_r0 = ar5 * -2 + -1;
    }
    *(char *)(unsigned)((short)*(char *)(unsigned)(ar4 + 1) * 0x2c + (*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0xae) = (char)in_r0;
  }
  if (ar5_00 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)0x8c267924),ar5_00,ar6_00,ar7_00); });
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267924\n.set _FUN_8c267924, _FUN_8c267924_def\n");
