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
int FUN_8c0c42b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0c42b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  int ar6_00;
  undefined4 ar7_00;
  
  iVar1 = 0;
  if (*(short *)(unsigned)(ar4 + 0x380) != 0) {
    ar7_00 = 4;
    ar6_00 = ar4 + 0x370;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); FUN_8c016318(ar4 + 0xc,ar4 + 0x350,ar6_00,4); });
    iVar1 = ar4 + 0x174;
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c016324(ar4 + 0xc,iVar1,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c01538c(ar4 + 4,iVar1,ar6_00,ar7_00));
    ar5_00 = 8;
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c014a94(ar4 + 4,8,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c01636c(ar4 + 0xc,ar5_00,ar6_00,ar7_00));
    *(short *)(unsigned)(ar4 + 0x380) = *(short *)(unsigned)(ar4 + 0x380) + -1;
    iVar1 = (int)*(short *)(unsigned)(ar4 + 0x380);
    if (iVar1 < 0) {
      iVar1 = 0x380;
      *(undefined2 *)(unsigned)(ar4 + 0x380) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0c42b0\n.set _FUN_8c0c42b0, _FUN_8c0c42b0_def\n");
