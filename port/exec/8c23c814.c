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
int FUN_8c23c814_def(char *ar4,char *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23c814";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  
  do {
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    ar6 = ar6 + -1;
    *ar4 = cVar1;
    ar4 = ar4 + 1;
  } while (ar6 != 0);
  return (int)cVar1;
}

__asm__(".globl _FUN_8c23c814\n.set _FUN_8c23c814, _FUN_8c23c814_def\n");
