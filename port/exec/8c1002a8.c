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
undefined4 FUN_8c1002a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1002a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_400_01ef20(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7));
  if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_10000_01ec68(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7));
    if (iVar1 == 0) {
      ({ unsigned long ri0_ = (unsigned long)(0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015cd4(ar4 + 0x15c,((undefined1 *)(unsigned)0x8c1421cc),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar4,2,ar6,ar7));
      uVar2 = 1;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1002a8\n.set _FUN_8c1002a8, _FUN_8c1002a8_def\n");
