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
undefined4 FUN_8c1b970a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1b970a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r3 = 0;
  int in_GBR = (void *)0x8cf80000;
  
  *(char *)(unsigned)(in_GBR + 0xd1) = (char)(undefined2)ain0;
  *(undefined2 *)(unsigned)(in_GBR + 0x192) = (undefined2)ain0;
  ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)((fr0_ + (int)0x00000000) + in_r3)); vin1 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1b9444(ar4,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)((fr0_ + (int)0x00000000) + in_r3)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1b9556(ar4,ar5,ar6,ar7); });
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b970a\n.set _FUN_8c1b970a, _FUN_8c1b970a_def\n");
