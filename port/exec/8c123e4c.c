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
undefined4 FUN_8c123e4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c123e4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *puVar2;
  uint ar5_00;
  float extraout_fr0 = 0;
  
  *(undefined1 *)(unsigned)(ar4 + 0x28) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,6,ar6,ar7));
  ar5_00 = 0;
  puVar2 = (undefined4 *)(unsigned)(ar4 + 0x54);
  *(short *)(unsigned)(ar4 + 0x48) = (short)(int)extraout_fr0;
  do {
    *puVar2 = 0x4effffff;
    ar5_00 = ar5_00 + 2;
    puVar2[1] = 0x4effffff;
    puVar2 = puVar2 + 2;
  } while (ar5_00 < 0x14);
  *(int *)(unsigned)(ar4 + 0xa8) = ar4 + 0x54;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12356c(ar4,ar5_00,0x14,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c123e4c\n.set _FUN_8c123e4c, _FUN_8c123e4c_def\n");
