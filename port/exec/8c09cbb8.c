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
undefined4 FUN_8c09cbb8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09cbb8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a6;
  int a5;
  
  for (a5 = 0; a5 < 8; a5 = a5 + 1) {
    a6 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(ar5,1,1,ar7));
    if (a6 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *(int *)(unsigned)(ar4 + 8)))))(ar4,a5,a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c09cca8(ar4,a5,a6,ar7));
    }
  }
  return 8;
}

__asm__(".globl _FUN_8c09cbb8\n.set _FUN_8c09cbb8, _FUN_8c09cbb8_def\n");
