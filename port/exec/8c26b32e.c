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
undefined4 FUN_8c26b32e_def(int ar4,int ar5,int ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c26b32e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int a6;
  int *a7;
  
  a6 = ar6;
  a7 = ar7;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c26b1e0(ar4,ar5,ar6,ar7));
  if (ar5 == 0) {
    ar7[1] = 0;
    *ar7 = 0;
  }
  else if (ar5 == 1) {
    if (*(int *)(unsigned)(ar4 + 0xc) < ar6) {
      ar6 = *(int *)(unsigned)(ar4 + 0xc);
    }
    ar7[1] = ar6;
    *ar7 = *(int *)(unsigned)(ar4 + 0x14) + *(int *)(unsigned)(ar4 + 0x10);
    *(int *)(unsigned)(ar4 + 0x10) = *(int *)(unsigned)(ar4 + 0x10) + ar7[1];
    *(int *)(unsigned)(ar4 + 0xc) = *(int *)(unsigned)(ar4 + 0xc) - ar7[1];
  }
  else {
    ar7[1] = 0;
    *ar7 = 0;
    if (*(int *)(unsigned)(ar4 + 0x1c) != 0) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x1c))))(*(undefined4 *)(unsigned)(ar4 + 0x20),0xfffffffd,a6,a7));
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c26b1f8(ar4,uVar1,a6,a7));
  return uVar1;
}

__asm__(".globl _FUN_8c26b32e\n.set _FUN_8c26b32e, _FUN_8c26b32e_def\n");
