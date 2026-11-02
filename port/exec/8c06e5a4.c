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
undefined4 FUN_8c06e5a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c06e5a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x220) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x240) = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022d04(ar4 + 0x270,ar5,ar6,ar7));
  *(undefined ***)(unsigned)(ar4 + 0x1c8) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13758c);
  *(undefined4 *)(unsigned)(ar4 + 0x1cc) = 0x22;
  *(undefined4 *)(unsigned)(ar4 + 100) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x290) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x298) = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x29c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2a4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2a8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2ac) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2d4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2d8) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c314(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c06e5a4\n.set _FUN_8c06e5a4, _FUN_8c06e5a4_def\n");
