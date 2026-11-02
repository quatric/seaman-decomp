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
undefined4 FUN_8c0c6d70_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0c6d70";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int ar4_00;
  int ar5_00;
  
  ar4_00 = ar4;
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), pure_virtual_stub(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_SEAMANDC_USR_0b76dc(ar4_00,ar5_00,ar6,ar7));
    *(undefined4 *)(unsigned)(0x2d16c + ar4) = uVar2;
    if (*(int *)(unsigned)(0x2d16c + ar4) == 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b77a0(ar5 + 0x96,ar5_00,ar6,ar7));
      *(undefined4 *)(unsigned)(0x2d168 + ar4) = uVar2;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d1c14((uint)*(byte *)(unsigned)(0xa0 + ar5),ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), pure_virtual_stub(ar4,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(0x2d15c + ar4) = 2;
  }
  return 1;
}

__asm__(".globl _FUN_8c0c6d70\n.set _FUN_8c0c6d70, _FUN_8c0c6d70_def\n");
