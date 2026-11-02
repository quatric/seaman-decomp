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
uint FUN_8c2028cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2028cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint s0 = *(uint *)(vsp + 0);
  int s4 = *(int *)(vsp + 4);
  uint s8 = *(uint *)(vsp + 8);
  int s12 = *(int *)(vsp + 12);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c010794(8,(fr0_ + (int)0xffffffec),&s8,vr7));
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c010794(8,(fr0_ + (int)0xffffffe4),&s0,vr7));
  iVar1 = ({ unsigned long t0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1c))); unsigned long t1_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x18))); unsigned long t2_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); unsigned long t3_ = (unsigned long)(
                       (*(undefined4 *)(fr0_ - 0x10))); *(unsigned *)((((unsigned long)(fr0_ - 56)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 56)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 56)) - 16) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 56)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 56)) - 16); FUN_8c2029b4(ar4,ar5,ar6,ar7); });
  if (iVar1 == 1) {
    if ((s8 < s0) || (uVar2 = s4 - s12, 0x7fffffff < uVar2)) {
      uVar2 = 0x7fffffff;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c2028cc\n.set _FUN_8c2028cc, _FUN_8c2028cc_def\n");
