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
undefined4 FUN_8c06ca34_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c06ca34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *ar5 = *(undefined4 *)(unsigned)(ar4 + 0x24);
  (vsp = ((unsigned long)(fr0_ - 0)), vec3_copy_8c023d8c(ar5 + 1,ar4 + 0x50,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023e04(ar5 + 4,ar4 + 0x5c,ar6,ar7));
  uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x74);
  ar5[8] = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c06ca34\n.set _FUN_8c06ca34, _FUN_8c06ca34_def\n");
