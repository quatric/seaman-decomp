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
int FUN_8c1211ac_def(byte *ar4,uint ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1211ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  if (ar5 != 0) {
    do {
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1293e4)) + (uint)*ar4 * 4);
      ar4 = ar4 + ar6;
    } while (uVar1 < ar5);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c1211ac\n.set _FUN_8c1211ac, _FUN_8c1211ac_def\n");
