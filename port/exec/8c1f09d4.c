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
undefined4 FUN_8c1f09d4_def(int ar4,undefined1 *ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f09d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  for (iVar2 = ar6 << 6; 0 < iVar2; iVar2 = iVar2 + -1) {
    if (ar4 < 8) {
      if (ar4 < 1) {
        *ar5 = 0xff;
      }
      else {
        iVar1 = 8;
        do {
          ar6 = ar6 << 1;
          if (ar4 < 1) {
            ar6 = ar6 | 1;
          }
          else {
            ar4 = ar4 + -1;
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        *ar5 = (char)ar6;
      }
    }
    else {
      *ar5 = 0;
      ar4 = ar4 + -8;
    }
    ar5 = ar5 + 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f09d4\n.set _FUN_8c1f09d4, _FUN_8c1f09d4_def\n");
