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
undefined4 FUN_8c20cb5e_def(uint *ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c20cb5e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  uint uVar1;
  
  if ((in_r0 != 1) && (ar7 != 1)) {
    if ((*ar4 & 0xffff) == 3) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d740(ar4[7],ar5,ar4[3],ar4[6]));
    }
    else {
      uVar1 = ar4[6];
      if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) ||
         ((uVar1 & 0x20) != 0)) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a8e0(ar4[7],ar5,ar4[5],ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d6c0(ar4[7],ar5,ar4[3],ar7));
      }
    }
    return 0;
  }
  return 4;
}

__asm__(".globl _FUN_8c20cb5e\n.set _FUN_8c20cb5e, _FUN_8c20cb5e_def\n");
