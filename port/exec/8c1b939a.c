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
undefined4 halt_baddata_wrap_1b939a_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "halt_baddata_wrap_1b939a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r2 = 0;
  
  if (in_r2 <= *(int *)(unsigned)(ar5 + 0x2c)) {
                    
    halt_baddata();
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b90e4(ar4,ar5,ar6,(int)(*(short *)(unsigned)0x8c1b9432)));
                    
  halt_baddata();
}

__asm__(".globl _halt_baddata_wrap_1b939a\n.set _halt_baddata_wrap_1b939a, _halt_baddata_wrap_1b939a_def\n");
