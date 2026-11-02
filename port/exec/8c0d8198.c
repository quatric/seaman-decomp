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
undefined4 s_GRAPHICS_ENV_0d819c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0d819c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  undefined4 uVar1;
  undefined *ar5_00;
  undefined *ar6_00;
  undefined4 ar7_00;
  int iVar2;
  
  uVar1 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d82f0(ar4,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c20a1d0(0x8c43786c,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c257120(0xfffafafa,uVar1,ar6,ar7));
  for (iVar2 = 0; iVar2 < 1; iVar2 = iVar2 + 1) {
    *(undefined4 *)(unsigned)(0x6e64 + iVar2 * 0xc + ar4) = 0;
  }
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x6e50,uVar1,ar6,ar7));
  ar7_00 = 1;
  iVar2 = ar4 + 0x6e60;
  uVar1 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c239170(ar4_00,iVar2,0x8c4312a8,1));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x6e50,iVar2,uVar1,ar7_00));
  ar6_00 = (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b;
  ar5_00 = (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x470;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02100c(ar5,ar5_00,ar6_00,uVar1));
  if (iVar2 == 0) {
    uVar1 = 2;
    ar6_00 = (undefined *)(unsigned)0x0;
    ar5_00 = (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x495;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x480,ar5_00,0,2));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7b44(ar4 + 0x78,ar5_00,ar6_00,uVar1));
  uVar1 = 0x5a;
  ({ unsigned long t0_ = (unsigned long)(1); unsigned long t1_ = (unsigned long)(0xb4); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0d7e80(ar4 + 0x78,1,0xf,0x5a); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7e24(ar4 + 0x78,0xf666666,0x6333333,uVar1));
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0d819c\n.set _s_GRAPHICS_ENV_0d819c, _s_GRAPHICS_ENV_0d819c_def\n");
