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
undefined4 FUN_8c1fb0ce_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fb0ce";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  undefined4 uVar1;
  undefined8 in_dr4 = 0;
  undefined8 in_dr6 = 0;
  undefined8 in_dr8 = 0;
  undefined8 in_dr10 = 0;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((UNRECOVERED_JUMPTABLE + (*(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1fb3d4)) + -0x200 >> 3) + 0x200) !=
      (code *)0x0))) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((UNRECOVERED_JUMPTABLE + (*(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1fb3d4)) + -0x200 >> 3) + 0x200))))
              (*(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1fb3d4)),ar5,ar6,ar7));
  }
  if (*(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1fb3d4)) < 0x2 << 8) {
    return in_r0;
  }
                    
                    
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar4); unsigned long t1_ = (unsigned long)(ar5); unsigned long t2_ = (unsigned long)(ar6); unsigned long t3_ = (unsigned long)(ar7); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)UNRECOVERED_JUMPTABLE))(in_dr4,in_dr6,in_dr8,in_dr10); });
  return uVar1;
}

__asm__(".globl _FUN_8c1fb0ce\n.set _FUN_8c1fb0ce, _FUN_8c1fb0ce_def\n");
