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
undefined4 FUN_8c10f39a_def(int *ar4,int ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f39a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  char in_T = 0;
  
  if (in_T == '\x01') {
    *ar6 = (int)(ar4 + 0x12);
  }
  else {
    if (in_r0 != 0xff) {
      return 0;
    }
    if ((char)ar4[0xf] != '\0') {
      ar5 = ar4[0x11];
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar5,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120668(ar4,ar5,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c10f39a\n.set _FUN_8c10f39a, _FUN_8c10f39a_def\n");
