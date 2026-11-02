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
uint s_Failed_s_015312_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Failed_s_015312";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 264; for (int i_ = 0; i_ < 264; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 264)), FUN_8c256670(*(undefined4 *)(unsigned)(ar4 + 4),ar5,ar6,ar7));
  if (iVar1 == -1) {
    ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c12c550)) + 0x7e); *(unsigned *)((((unsigned long)(fr0_ - 264)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 264)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
              (((undefined1 *)(fr0_ - 0x108)),ar5,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 264)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              (((undefined1 *)(fr0_ - 0x108)),(&(*(undefined1 *)(unsigned)0x8c12c550)) + 0x8a,1,2));
  }
  return (uint)(iVar1 == -1);
}

__asm__(".globl _s_Failed_s_015312\n.set _s_Failed_s_015312, _s_Failed_s_015312_def\n");
