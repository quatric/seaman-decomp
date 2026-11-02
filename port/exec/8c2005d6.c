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
undefined4 FUN_8c2005d6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2005d6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int ar6_00;
  byte *ar4_00;
  int iVar1;
  
  ar6_00 = ar4 * 0x148 + 0x8c4783e0;
  ar4_00 = ((byte *)(unsigned long)*(unsigned *)(unsigned)(ar6_00 + 0x28));
  iVar1 = 0;
  while( true ) {
    if (*(int *)(unsigned)(*(int *)(unsigned)(ar6_00 + 0x1c) + 0x30) <= iVar1) {
      return 0xffffffff;
    }
    if ((uint)*ar4_00 == (int)0xcc) break;
    ar4_00 = ar4_00 + 0x20;
    iVar1 = iVar1 + 1;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2004ea(ar4_00,ar5,ar6_00,(uint)*ar4_00));
  return iVar1;
}

__asm__(".globl _FUN_8c2005d6\n.set _FUN_8c2005d6, _FUN_8c2005d6_def\n");
