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
undefined4 FUN_8c01acd0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01acd0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  int iVar1;
  uint *ar5_00;
  
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c1f8176(((undefined1 *)(fr0_ - 0x16)),ar5,ar6,ar7));
  ar5_00 = &(*(uint *)(fr0_ - 0x24));
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c1f826c(((undefined1 *)(fr0_ - 0x16)),ar5_00,ar6,ar7));
  (*(uint *)(fr0_ - 0x24)) = (*(uint *)(fr0_ - 0x24)) + 10;
  while( true ) {
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c01c984(ar4,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c1f8176(((undefined1 *)(fr0_ - 0x20)),ar5_00,ar6,ar7));
    ar5_00 = &(*(uint *)(fr0_ - 0x28));
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c1f826c(((undefined1 *)(fr0_ - 0x20)),ar5_00,ar6,ar7));
    if ((*(uint *)(fr0_ - 0x24)) < (*(uint *)(fr0_ - 0x28))) {
      return 0;
    }
    iVar1 = *(int *)(unsigned)(0x2450 + ar5 * 0x28 + ar4);
    if ((iVar1 != 2) && (iVar1 != 3)) break;
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c01a630(ar4,ar5_00,ar6,ar7));
  }
  return *(undefined4 *)(unsigned)(0x2450 + ar5 * 0x28 + ar4);
}

__asm__(".globl _FUN_8c01acd0\n.set _FUN_8c01acd0, _FUN_8c01acd0_def\n");
