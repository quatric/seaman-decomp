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
int * FUN_8c239170_def(int *ar4,int *ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c239170";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = ar5;
  if (0 < ar7) {
    do {
      iVar2 = iVar2 + 1;
      *piVar1 = ar6;
      ar6 = ar6 + 0x1c;
      piVar1 = piVar1 + 3;
    } while (iVar2 < ar7);
  }
  *ar4 = (int)ar5;
  return piVar1;
}

__asm__(".globl _FUN_8c239170\n.set _FUN_8c239170, _FUN_8c239170_def\n");
