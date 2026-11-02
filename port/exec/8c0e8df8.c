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
undefined4 FUN_8c0e8df8_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8df8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*ar5 / 224.54546);
  iVar2 = (int)(ar5[2] / 150.0);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (10 < iVar1) {
    iVar1 = 10;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (9 < iVar2) {
    iVar2 = 9;
  }
  return *(undefined4 *)(unsigned)(iVar1 * 0x78 + ar4 + iVar2 * 0xc + 0x2281c);
}

__asm__(".globl _FUN_8c0e8df8\n.set _FUN_8c0e8df8, _FUN_8c0e8df8_def\n");
