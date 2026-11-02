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
undefined4 FUN_8c202280_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c202280";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a4;
  char *unaff_r14 = 0;
  
  if (((*unaff_r14 != '\0') && (*unaff_r14 != '\x03')) &&
     (a4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1efd14(*(undefined4 *)(unsigned)(unaff_r14 + 0x24),ar5,ar6,ar7)),
     *(char *)(unsigned)(a4 + 4) == '\b')) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20213e(a4,unaff_r14,ar6,ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c202280\n.set _FUN_8c202280, _FUN_8c202280_def\n");
