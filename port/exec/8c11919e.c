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
undefined4 FUN_8c11919e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11919e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  uint uVar1;
  
  (*(undefined4 *)(fr0_ - 0x14)) = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c11a634(ar4,&(*(undefined4 *)(fr0_ - 0x1c)),ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x18)) = (*(undefined4 *)(fr0_ - 0x1c));
  (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(0x1ac + ar4);
  (*(int *)(fr0_ - 0xc)) = *(int *)(unsigned)(0x12c + ar4) + 1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c120348(ar4,0xc,&(*(undefined4 *)(fr0_ - 0x18)),3));
  if ((uVar1 & 0xff) != 0) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c11919e\n.set _FUN_8c11919e, _FUN_8c11919e_def\n");
