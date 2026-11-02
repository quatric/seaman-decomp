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
undefined4 FUN_8c0dff1c_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dff1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0daf80(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d063c((int)ar4 + 0x13b24,uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d98e4((int)ar4 + 0x22704,uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6954((int)ar4 + 0xa68,uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbdf4(ar4,uVar2,ar6,ar7));
  *(undefined4 *)(unsigned)(0x1020 + (int)ar4) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e3f24(ar4,uVar2,ar6,ar7));
  uVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d4fa8((int)ar4 + 0x10ac,ar5,ar6,ar7));
  if ((ar5 & 0xff) < 2) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x1c0 + *ar4))))(ar4,uVar2,ar6,ar7));
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x74))))(ar4,uVar2,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0dff1c\n.set _FUN_8c0dff1c, _FUN_8c0dff1c_def\n");
