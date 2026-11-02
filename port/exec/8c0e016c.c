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
undefined4 FUN_8c0e016c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e016c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d50a0((int)ar4 + 0x10ac,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_ENV_0d0bd2((int)ar4 + 0x13b8c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_wrap_0d14b0((int)ar4 + 0x13b8c,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(0x1024 + (int)ar4) = 3;
  uVar1 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d0538((int)ar4 + 0x13b24,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d0714((int)ar4 + 0x13b24,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x15c + *ar4))))(ar4,uVar1,ar6,ar7));
  *(undefined4 *)(unsigned)(0x9d4 + (int)ar4) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6980((int)ar4 + 0xa68,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e016c\n.set _FUN_8c0e016c, _FUN_8c0e016c_def\n");
