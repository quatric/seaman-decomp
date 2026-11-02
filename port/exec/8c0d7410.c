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
undefined4 FUN_8c0d7410_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7410";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar4_00;
  
  (*(undefined4 *)(fr0_ - 0x14)) = (*(undefined1 *)(unsigned)0x8c13f550);
  (*(undefined4 *)(fr0_ - 0x10)) = (*(undefined1 *)(unsigned)0x8c13f554);
  (*(undefined4 *)(fr0_ - 0xc)) = (*(undefined1 *)(unsigned)0x8c13f558);
  (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar4 + 0x15c);
  uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c13f55c);
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c233dac(&(*(undefined4 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  ar4_00 = 0;
  ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c256328(0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c019058(ar4_00,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c019160(ar4_00,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c015af8(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c256210(1,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c233dac((fr0_ + (int)0xffffffd8),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d7410\n.set _FUN_8c0d7410, _FUN_8c0d7410_def\n");
