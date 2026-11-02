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
undefined4 FUN_8c123594_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c123594";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (*(char *)(unsigned)(0x4bc + ar4) == '\0') {
    if (((short)ar5 == 0) || (*(short *)(unsigned)(0x4b8 + ar4) == (short)ar5)) {
      return (int)*(short *)(unsigned)(0x4b8 + ar4);
    }
    iVar1 = (int)0x4bc;
    *(undefined1 *)(unsigned)(iVar1 + ar4) = 1;
    *(undefined2 *)(unsigned)(iVar1 + 2 + ar4) = 0x32;
    *(undefined2 *)(unsigned)(iVar1 + -4 + ar4) = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4,0xb,(short)ar5,0));
  }
  return 0;
}

__asm__(".globl _FUN_8c123594\n.set _FUN_8c123594, _FUN_8c123594_def\n");
