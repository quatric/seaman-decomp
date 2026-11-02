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
int FUN_8c0d7294_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7294";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(unsigned)(0x160 + ar4);
  if (iVar1 == 0) {
LAB_8c0d72c0:
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d75a0(ar4,ar5,ar6,ar7));
    iVar1 = 0x160;
    if (iVar2 == 1) {
      *(undefined4 *)(unsigned)(0x160 + ar4) = 1;
      iVar2 = iVar1;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) goto LAB_8c0d72c0;
      if (iVar1 != 3) {
        return iVar1;
      }
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d75a0(ar4,ar5,ar6,ar7));
    iVar1 = 0x160;
    if (iVar2 == 0) {
      *(undefined4 *)(unsigned)(0x160 + ar4) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0d7294\n.set _FUN_8c0d7294, _FUN_8c0d7294_def\n");
