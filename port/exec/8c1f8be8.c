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
int FUN_8c1f8be8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f8be8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int extraout_r3 = 0;
  undefined4 d;
  int iVar2;
  
  if ((short)ar5 == 0) {
    d = 8;
  }
  else if ((short)ar5 == 1) {
    d = 0x20;
  }
  else if ((short)ar5 == 3) {
    d = 0x200;
  }
  else if ((short)ar5 == 4) {
    d = 0x800;
  }
  else {
    d = 0x80;
  }
  iVar2 = 100;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0106dc(ar4,d,vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(iVar1 * iVar2,d,vr6,vr7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(ar4,d,vr6,vr7));
  return iVar1 * iVar2 + extraout_r3;
}

__asm__(".globl _FUN_8c1f8be8\n.set _FUN_8c1f8be8, _FUN_8c1f8be8_def\n");
