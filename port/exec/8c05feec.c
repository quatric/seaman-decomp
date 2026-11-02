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
int FUN_8c05feec_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05feec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  
  (*(int *)(fr0_ - 0x8)) = ar5;
  if (*(int *)(unsigned)(ar4 + 0x6c) <= ar5) {
    (*(int *)(fr0_ - 0x8)) = *(int *)(unsigned)(ar4 + 0x6c);
  }
  *(int *)(unsigned)(ar4 + 0x6c) = *(int *)(unsigned)(ar4 + 0x6c) - (*(int *)(fr0_ - 0x8));
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 2;
  return (*(int *)(fr0_ - 0x8));
}

__asm__(".globl _FUN_8c05feec\n.set _FUN_8c05feec, _FUN_8c05feec_def\n");
