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
undefined4 FUN_8c0e057c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e057c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a4;
  undefined4 uVar1;
  
  uVar1 = 0x1b;
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(0x8c3eb324,0x10,0x1b,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x30))))(a4,ar5,uVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x2c))))(a4,ar6,uVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036988(a4,ar6,uVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c078fb8(a4,ar6,uVar1,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0df998(ar4,a4,uVar1,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e057c\n.set _FUN_8c0e057c, _FUN_8c0e057c_def\n");
