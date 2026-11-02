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
int FUN_8c268254_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c268254";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar6_00;
  int ar5_00;
  char in_T = 0;
  undefined4 in_PR = 0;
  
  if (in_T == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4bd530) = 0x15;
    (*(undefined1 *)(unsigned)0x8c4bd534) = *(undefined1 *)(unsigned)(ar4 + 1);
    (*(undefined1 *)(unsigned)0x8c4bd535) = (undefined1)((char)ar5 + 0x80);
    (*(undefined1 *)(unsigned)0x8c4bd536) = (undefined1)ar6;
    ar6_00 = ar6 >> 8;
    (*(undefined1 *)(unsigned)0x8c4bd537) = (undefined1)((uint)ar6 >> 8);
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c267fe8(((undefined1 *)(unsigned)0x8c4bd530),(char)ar5 + 0x80,ar6_00,ar7));
  }
  else {
    ar5_00 = 0x7000103;
    ar6_00 = ar6;
  }
  if (ar5_00 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)0x8c268250),ar5_00,ar6_00,ar7); });
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c268254\n.set _FUN_8c268254, _FUN_8c268254_def\n");
