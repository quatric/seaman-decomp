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
undefined4 FUN_8c11c210_def(undefined4 ar4,undefined4 ar5,int ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c11c210";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int unaff_r14 = 0;
  char in_T = 0;
  
  if (in_T == '\x01') {
    if (ar6 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11bcb8(unaff_r14,*ar7 + ar6,ar6,ar7));
    }
    *ar7 = *ar7 + ((*(ushort *)(unsigned)(unaff_r14 + 0x4c) + 4) * *(int *)(unsigned)(unaff_r14 + 0x54) + 4) * 4;
  }
  else if (in_r0 == 2) {
    if (ar6 == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11bb94(unaff_r14,ar5,0,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11bbd4(unaff_r14,*ar7 + ar6,ar6,ar7));
      *ar7 = *ar7 + ((*(ushort *)(unsigned)(unaff_r14 + 0x4c) + 4) * *(int *)(unsigned)(unaff_r14 + 0x54) + 4) * 4;
    }
  }
  else {
    if (in_r0 != 0xff) {
      return 0;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11c1d8(unaff_r14,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120668(unaff_r14,ar5,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c11c210\n.set _FUN_8c11c210, _FUN_8c11c210_def\n");
