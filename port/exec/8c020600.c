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
int FUN_8c020600_def(undefined4 ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020600";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar6_00;
  int iVar1;
  int iVar2;
  int iVar3;
  
  ar6_00 = *ar6;
  if (ar6_00 == 0) {
    ar6_00 = 0;
  }
  else {
    iVar1 = ({ unsigned long t0_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c020588(ar4,ar5,ar6_00,ar7); });
    if (iVar1 == 1) {
      *ar6 = *(int *)(unsigned)(ar6_00 + 4);
    }
    else if (*(int *)(unsigned)(ar6_00 + 4) == 0) {
      ar6_00 = 0;
    }
    else {
      iVar3 = *(int *)(unsigned)(*(int *)(unsigned)(ar6_00 + 4) + 4);
      iVar1 = ar6_00;
      ar6_00 = *(int *)(unsigned)(ar6_00 + 4);
      while (iVar2 = ({ unsigned long t0_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c020588(ar4,ar5,ar6_00,ar7); }), iVar2 != 1)
      {
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = *(int *)(unsigned)(*(int *)(unsigned)(ar6_00 + 4) + 4);
        iVar1 = ar6_00;
        ar6_00 = *(int *)(unsigned)(ar6_00 + 4);
      }
      *(int *)(unsigned)(iVar1 + 4) = iVar3;
    }
  }
  return ar6_00;
}

__asm__(".globl _FUN_8c020600\n.set _FUN_8c020600, _FUN_8c020600_def\n");
