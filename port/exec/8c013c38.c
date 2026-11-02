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
undefined4 FUN_8c013c38_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c013c38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined8 in_dr0 = 0;
  char cVar2;
  
  cVar2 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c011e10(ar4,ar5,ar6,ar7));
  if (cVar2 == '\0') {
    (*(uint *)(fr0_ - 0x8)) = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    (*(uint *)(fr0_ - 0x8)) = (uint)in_dr0;
  }
  if (((*(uint *)(fr0_ - 0x8)) & 0x7f800000) == 0x7f800000) {
    if (((*(uint *)(fr0_ - 0x8)) & 0x7fffff) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c2787a8) = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2787a8) = 0x44d;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c013c38\n.set _FUN_8c013c38, _FUN_8c013c38_def\n");
