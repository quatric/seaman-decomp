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
undefined4 FUN_8c0e6ef0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e6ef0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_fr1 = 0;
  char cVar2;
  
  cVar2 = '\0';
  uVar1 = 1;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x1b0))))(ar4,1,ar6,ar7));
  if (cVar2 == '\0') {
    ar4[0x1e] = 0x3f800000;
    ar4[0x1f] = 0x3e4ccccd;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x1e) = CONCAT44(0x3f800000,in_fr1);
    ar4[0x1f] = 0x3e4ccccd;
    ar4[0x20] = 0x458ca000;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a7c(ar4 + 0x2c4,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a7c(ar4 + 0x2cc,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a7c(ar4 + 0x2b4,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a7c(ar4 + 700,uVar1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102974(ar4 + 0x2dc,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e6ef0\n.set _FUN_8c0e6ef0, _FUN_8c0e6ef0_def\n");
