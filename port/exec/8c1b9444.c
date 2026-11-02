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
undefined4 FUN_8c1b9444_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1b9444";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain1 = (int)(unsigned long)vin1;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int in_r2 = 0;
  undefined4 in_R7_BANK = 0;
  int in_GBR = (void *)0x8cf80000;
  char in_M = 0;
  char in_Q = 0;
  undefined4 *puVar2;
  
  *(undefined2 *)(unsigned)(in_GBR + 0x1a2) = *(undefined2 *)(unsigned)(in_GBR + 0x194);
  *(undefined4 *)(unsigned)(ain1 + -0xc) = in_R7_BANK;
  uVar1 = (int)(char)(ain1 + -8) << 1 | (uint)(0 < ain1 + -8);
  if (in_Q == '\0' && in_M == '\0') {
    puVar2 = (undefined4 *)(unsigned)(uVar1 - in_r2);
  }
  else if (in_Q == '\0' && in_M == '\x01') {
    puVar2 = (undefined4 *)(unsigned)(uVar1 + in_r2);
  }
  else if (in_Q == '\x01' && in_M == '\0') {
    puVar2 = (undefined4 *)(unsigned)(uVar1 + in_r2);
  }
  else {
    puVar2 = (undefined4 *)(unsigned)(uVar1 - in_r2);
  }
  ({ unsigned long ri0_ = (unsigned long)(*puVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1b9b9e(ar4,ar5,ar6,ar7); });
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9444\n.set _FUN_8c1b9444, _FUN_8c1b9444_def\n");
