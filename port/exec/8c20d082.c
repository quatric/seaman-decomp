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
undefined4 FUN_8c20d082_def(undefined4 ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20d082";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  if ((*ar5 & 3) == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a892(ar5[7],ar5[5],vr6,vr7));
  }
  else if ((*ar5 & 0xffff) == 3) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d7a0(ar4,ar5[7],ar5[3],ar5[6]));
  }
  else {
    uVar1 = ar5[6];
    if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0))
    {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a9c2(ar5[7],ar5[5],vr6,vr7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d6ea(ar4,ar5[7],ar5[3],ar7));
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c20d082\n.set _FUN_8c20d082, _FUN_8c20d082_def\n");
