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
undefined4 FUN_8c266b0e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c266b0e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  int ar6_00;
  undefined *ar7_00;
  int *unaff_r14 = 0;
  
  if (*(int *)(unsigned)(in_r0 + *unaff_r14) != 0) {
    iVar1 = (int)0x160;
    *(undefined4 *)(unsigned)(iVar1 + *unaff_r14) = 1;
    if ((*(uint *)(unsigned)(iVar1 + -4 + *unaff_r14) & 1) != 0) {
      *(int *)(unsigned)((int)0x15c + *unaff_r14) = *(int *)(unsigned)((int)0x15c + *unaff_r14) + 1;
    }
    iVar1 = (int)0x15c;
    ar6_00 = *(int *)(unsigned)(iVar1 + *unaff_r14) << 4;
    ar7_00 = (&(*(undefined1 *)(unsigned)0x8c266b70));
    ({ unsigned long t0_ = (unsigned long)((int)0x158 + *unaff_r14); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c265ea0))))
              (*(undefined4 *)(unsigned)(iVar1 + 0x1c + *unaff_r14),*(undefined4 *)(unsigned)(iVar1 + -4 + *unaff_r14),
               ar6_00,(&(*(undefined1 *)(unsigned)0x8c266b70))); });
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c265ff4))))
              (*(undefined4 *)(unsigned)(0x1c4 + -0x4c + *unaff_r14),
               *(undefined4 *)(unsigned)((int)0x1c4 + *unaff_r14),ar6_00,ar7_00));
  }
  return 0;
}

__asm__(".globl _FUN_8c266b0e\n.set _FUN_8c266b0e, _FUN_8c266b0e_def\n");
