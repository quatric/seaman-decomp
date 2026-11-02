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
undefined4 FUN_8c201da0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c201da0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(undefined4 *)(fr0_ - 0x14)) = 0;
  if (ar5 < 1) {
    ar5 = 0;
  }
  (*(int *)(fr0_ - 0x10)) = ar5;
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x1c)),&(*(undefined4 *)(fr0_ - 0x14)),vr7));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c201cf6(ar4,1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c010794(8,(*(undefined4 *)(fr0_ + 0x00000000)),ar4 + 8,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c201da0\n.set _FUN_8c201da0, _FUN_8c201da0_def\n");
