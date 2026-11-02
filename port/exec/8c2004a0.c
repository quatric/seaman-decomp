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
undefined4 FUN_8c2004a0_def(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2004a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  char *a5;
  
  a5 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200472(ar4,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200472(ar5,a5,ar6,ar7));
  if (iVar1 != iVar2) {
    return 0;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*ar4 != *ar5) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      ar5 = ar5 + 1;
      ar4 = ar4 + 1;
    } while (iVar2 < iVar1);
  }
  return 1;
}

__asm__(".globl _FUN_8c2004a0\n.set _FUN_8c2004a0, _FUN_8c2004a0_def\n");
