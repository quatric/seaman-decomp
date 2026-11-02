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
undefined4 FUN_8c25acc2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25acc2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  uint in_r3 = 0;
  int unaff_r14 = 0;
  
  if (((in_r3 & *(uint *)(unsigned)(unaff_r14 + 0x18)) == 0) &&
     ((*(uint *)(unsigned)(unaff_r14 + 0x18) & 0x11000000) == 0)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20cc56(unaff_r14 + 0x18,ar5,ar6,ar7));
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c277cd4) = *(int *)(unsigned)(unaff_r14 + 0x34) + -4;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20cc56(((undefined1 *)(unsigned)0x8c277cb8),ar5,ar6,ar7));
  }
  if (iVar1 == 0) {
    return 1;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b4) = 8;
  return 0xffffffff;
}

__asm__(".globl _FUN_8c25acc2\n.set _FUN_8c25acc2, _FUN_8c25acc2_def\n");
