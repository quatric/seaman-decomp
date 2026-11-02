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
undefined4 FUN_8c262810_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c262810";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ain0_00;
  undefined1 *ar4_00;
  code *ar5_00;
  
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c278478) == 0) {
    uVar1 = ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c260c98(ar4,ar5,ar6,ar7); });
    uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c260ca0(ar4,ar5,ar6,ar7); });
    uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c26b992(ar4,ar5,ar6,ar7); });
    uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c26b526(ar4,ar5,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c26b212(ar4,ar5,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25eca8(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263244(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262ac4(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2619b4(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c2689c8(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c26a130(((void *)0x8c2627f6),0,ar6,ar7));
    ar4_00 = ((undefined1 *)(unsigned)0x8c277fd0);
    uVar1 = 0x4a0;
    ar5_00 = (code *)0x0;
    (vsp = ((unsigned long)(fr0_ - 0)), memset(((undefined1 *)(unsigned)0x8c277fd0),0,0x4a0,ar7));
    ain0_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c278474);
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c278474) == 1) {
      ar4_00 = (undefined1 *)(unsigned)0x900;
      ar7 = 0;
      ar5_00 = ((void *)0x8c264010);
      uVar1 = 0x70;
      ain0_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fa244(0x900,((void *)0x8c264010),0x70,0));
      (*(undefined4 *)(unsigned)(unsigned)0x8c278470) = ain0_00;
    }
    ain0 = ({ unsigned long ri0_ = (unsigned long)(ain0_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c260cc8(ar4_00,ar5_00,uVar1,ar7); });
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c278478) = (*(undefined4 *)(unsigned)(unsigned)0x8c278478) + 1;
  return ain0;
}

__asm__(".globl _FUN_8c262810\n.set _FUN_8c262810, _FUN_8c262810_def\n");
