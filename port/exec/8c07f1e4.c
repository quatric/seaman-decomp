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
undefined4 FUN_8c07f1e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07f1e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar3 = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03c0f0(ar4 + 0xb0,ar5,ar6,ar7));
  puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), deref_u32(uVar1,ar5,uVar3,ar7));
  puVar4 = (undefined4 *)(unsigned)(ar4 + 0xb4);
  uVar1 = puVar2[1];
  *puVar4 = *puVar2;
  puVar4[1] = uVar1;
  puVar4[2] = puVar2[2];
  *(undefined4 *)(unsigned)(0xb4 + ar4) = ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), vec3_clear(ar4 + 0x244,ar5,uVar3,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02a1fc(ar4 + 0x254,ar5,uVar3,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c07f1e4\n.set _FUN_8c07f1e4, _FUN_8c07f1e4_def\n");
