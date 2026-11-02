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
undefined4 * FUN_8c02d50c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d50c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  *ar4 = 0xffffffff;
  ar4[1] = 0x13;
  ar4[2] = 0x1b;
  ar4[3] = 2;
  ar4[4] = 0;
  ar4[5] = 0;
  *(undefined1 *)(unsigned)(ar4 + 6) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x19) = 0;
  ar4[7] = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  *(undefined2 *)(unsigned)(ar4 + 10) = 0;
  *(undefined2 *)(unsigned)((int)ar4 + 0x2a) = 0;
  ar4[0xb] = 0;
  ar4[0xc] = 0;
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(char *)(unsigned)(ar4 + iVar1 * 3 + 0xd) = (char)iVar1;
    *(undefined1 *)(unsigned)((int)ar4 + iVar1 * 0xc + 0x35) = 0;
    ar4[iVar1 * 3 + 0xe] = 0;
    *(undefined1 *)(unsigned)(ar4 + iVar1 * 3 + 0xf) = 0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c02d50c\n.set _FUN_8c02d50c, _FUN_8c02d50c_def\n");
