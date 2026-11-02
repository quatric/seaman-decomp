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
undefined4 FUN_8c01f794_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01f794";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(unsigned)(ar4 + 4) == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02009c(ar4,ar5,ar6,ar7));
  }
  else {
    iVar1 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
    if (iVar1 == 0xb) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01fab4(ar4,ar5,ar6,ar7));
    }
    else if (((iVar1 == 0xc) || (iVar1 == 0xd)) || (iVar1 == 0xe)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f9c4(ar4,ar5,ar6,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f8a4(ar4,ar5,ar6,ar7));
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f83c(ar4,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c01f794\n.set _FUN_8c01f794, _FUN_8c01f794_def\n");
