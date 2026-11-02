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
int FUN_8c263b0c_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c263b0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int unaff_r12 = 0;
  char *pcVar2;
  undefined4 in_PR = 0;
  
  pcVar2 = ar4 + unaff_r12;
  do {
    iVar1 = (int)*ar4;
    if (iVar1 == 1) {
      iVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2639fa(ar4,ar5,ar6,ar7); });
    }
    ar4 = ar4 + 0x94;
  } while (ar4 < pcVar2);
  return iVar1;
}

__asm__(".globl _FUN_8c263b0c\n.set _FUN_8c263b0c, _FUN_8c263b0c_def\n");
