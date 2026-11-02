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
undefined4 FUN_8c11e214_def(int ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11e214";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  
  if (ar4 == 0) {
    return 6;
  }
  if (*(int *)(unsigned)(0xf0 + ar4) != 0x218df4f5) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(*(undefined4 *)(unsigned)(0xfc + ar4),0xb,vr6,vr7));
    return uVar1;
  }
  if (ar5 == (undefined2 *)(unsigned)0x0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,0x13,vr6,vr7));
    return uVar2 & 0xff;
  }
  *ar5 = *((undefined2 *)(unsigned long)*(unsigned *)(unsigned)(0x22c + ar4));
  return 0;
}

__asm__(".globl _FUN_8c11e214\n.set _FUN_8c11e214, _FUN_8c11e214_def\n");
