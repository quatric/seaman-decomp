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
undefined4 Class_129938_m5_01745c_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_129938_m5_01745c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x38))))(ar5,((undefined1 *)(fr0_ - 0x64)),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c23340c(ar4 + 0x30,((undefined1 *)(fr0_ - 0x64)),ar6,ar7));
  return uVar1;
}

__asm__(".globl _Class_129938_m5_01745c\n.set _Class_129938_m5_01745c, _Class_129938_m5_01745c_def\n");
