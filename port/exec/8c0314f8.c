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
undefined4 s_Check_This_Motion_Data_0314fc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Check_This_Motion_Data_0314fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(int *)(fr0_ - 0x18)) = ar5;
  (*(int *)(fr0_ - 0x10)) = (vsp = ((unsigned long)(fr0_ - 36)), deref_u32(*(int *)(unsigned)(ar4 + 0x14) + ar5 * 4,vr5,vr6,vr7));
  if ((*(int *)(fr0_ - 0x10)) == 0) {
    (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
              (((undefined1 *)(fr0_ - 0x24)),(&(*(undefined1 *)(unsigned)0x8c132c08)) + 0x82,ar5,vr7));
    ({ unsigned long t0_ = (unsigned long)(5); *(unsigned *)((((unsigned long)(fr0_ - 36)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 36)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c132c08)) + 0x85,((undefined1 *)(fr0_ - 0x24)),1,2); });
  }
  (*(int *)(fr0_ - 0x1c)) = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c031588(*(int *)(unsigned)(ar4 + 0x14) + ar5 * 4,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl _s_Check_This_Motion_Data_0314fc\n.set _s_Check_This_Motion_Data_0314fc, _s_Check_This_Motion_Data_0314fc_def\n");
