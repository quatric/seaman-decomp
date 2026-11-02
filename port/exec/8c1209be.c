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
int FUN_8c1209be_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1209be";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  undefined1 *puVar1;
  
  if (ar5 < *ar4 + -1) {
    do {
      puVar1 = (undefined1 *)(unsigned)((int)ar4 + ar5 * 2 + 8);
      ar5 = ar5 + 1;
      *puVar1 = puVar1[2];
      in_r0 = (int)(char)puVar1[3];
      puVar1[1] = puVar1[3];
    } while (ar5 < *ar4 + -1);
  }
  *ar4 = *ar4 + -1;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c1209be\n.set _FUN_8c1209be, _FUN_8c1209be_def\n");
