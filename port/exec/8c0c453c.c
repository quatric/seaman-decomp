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
undefined4 FUN_8c0c453c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0c453c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined8 in_dr4 = 0;
  undefined4 ain0;
  
  ain0 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x28)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13bfc4);
  (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined1 *)(unsigned)0x8c13bfc8);
  (*(undefined4 *)(fr0_ - 0x20)) = (*(undefined1 *)(unsigned)0x8c13bfcc);
  (*(undefined4 *)(fr0_ - 0x1c)) = (*(undefined1 *)(unsigned)0x8c13bfd0);
  (*(undefined4 *)(fr0_ - 0x18)) = (*(undefined1 *)(unsigned)0x8c13bfd4);
  (*(undefined4 *)(fr0_ - 0x14)) = (*(undefined1 *)(unsigned)0x8c13bfd8);
  (*(undefined4 *)(fr0_ - 0x10)) = (*(undefined1 *)(unsigned)0x8c13bfdc);
  (*(undefined4 *)(fr0_ - 0xc)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13bfe0);
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0162f8(((undefined1 *)(fr0_ - 0x3c)),ar5,ar6,ar7));
  ar7_00 = 4;
  ar6_00 = 0x8c43654c;
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); FUN_8c016318(((undefined1 *)(fr0_ - 0x3c)),&(*(undefined4 *)(fr0_ - 0x28)),0x8c43654c,4); });
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c016324(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(unsigned)0x8c43655c),ar6_00,ar7_00));
  uVar1 = 0x80000060;
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); FUN_8c015198(((undefined1 *)(fr0_ - 0x3c)),0x80000060,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c01538c(ar4 + 4,uVar1,ar6_00,ar7_00));
  uVar1 = 9;
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c014a94(ar4 + 4,9,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c01636c(((undefined1 *)(fr0_ - 0x3c)),uVar1,ar6_00,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 64)), free_if_nonnull_wrap_0151a0(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7_00));
  return uVar1;
}

__asm__(".globl _FUN_8c0c453c\n.set _FUN_8c0c453c, _FUN_8c0c453c_def\n");
