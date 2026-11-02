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
undefined4 FUN_8c1f62f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f62f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  int ar6_00;
  uint uVar2;
  undefined4 *puVar3;
  uint ar4_00;
  
  if (*(undefined4 *)(unsigned)0x8c4727bc != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1efcae(0x8c4594c0,vr5,vr6,vr7));
  }
  ar6_00 = (int)0x4e0;
  ar5_00 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), memset(0x8c4727c4,0,0x4e0,vr7));
  uVar2 = (int)0x4e0 + 0x8c4727c4;
  puVar3 = 0x8c472ca4;
  ar4_00 = 0x8c4727c4;
  do {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_no_device_1f5f4e(ar4_00,ar5_00,ar6_00,ar7));
    ar4_00 = ar4_00 + 0x34;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  } while (ar4_00 < uVar2);
  return uVar1;
}

__asm__(".globl _FUN_8c1f62f0\n.set _FUN_8c1f62f0, _FUN_8c1f62f0_def\n");
