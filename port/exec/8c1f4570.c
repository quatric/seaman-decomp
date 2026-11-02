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
undefined4
FUN_8c1f4570_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f4570";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0x10c8;
  if ((*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10c8) != 0) &&
     (uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), vsprintf_like(0x8c4715b8,s0,&s4,ar7)), ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739f8) != (code *)0x0)) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c2739f8)))(0x8c4715b8,vr5,vr6,vr7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f4570\n.set _FUN_8c1f4570, _FUN_8c1f4570_def\n");
