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
undefined4 FUN_8c0e0614_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e0614";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *a4;
  int iVar4;
  
  uVar3 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_bb4_0e06e4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0db304(((undefined1 *)(fr0_ - 0x5c)),uVar3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c018f80(((undefined1 *)(fr0_ - 0x5c)),ar5,ar6,ar7));
  iVar4 = 0;
  while( true ) {
    if (iVar1 <= iVar4) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0db224(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 96)), Class_129974_m0_016c2c(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6,ar7));
      return uVar3;
    }
    a4 = (int *)(unsigned)(ar4 + iVar4 * 0x16c + 0x22e0c);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x14))))(a4,((undefined1 *)(fr0_ - 0x5c)),ar6,ar7));
    if (iVar2 == 1) break;
    iVar4 = iVar4 + 1;
  }
  (vsp = ((unsigned long)(fr0_ - 96)), Class_129974_m0_016c2c(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6,ar7));
  return 2;
}

__asm__(".globl _FUN_8c0e0614\n.set _FUN_8c0e0614, _FUN_8c0e0614_def\n");
