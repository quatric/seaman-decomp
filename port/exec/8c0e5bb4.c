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
undefined4 s_GRAPHICS_ENV_0e5bba_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0e5bba";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined *ar6_00;
  int ar7_00;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x7b7,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  ar6_00 = (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b;
  ar7_00 = ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020b68(ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x7b7,ar6_00,ar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_ENV_0d60cc(ar4 + 0x15bc,ar5,ar6_00,ar7_00));
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0e5bba\n.set _s_GRAPHICS_ENV_0e5bba, _s_GRAPHICS_ENV_0e5bba_def\n");
