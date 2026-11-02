#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c102bd0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c102bd0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 ar6_00;
  int iVar5;
  
  uVar2 = 0xf;
  uVar3 = ar5;
  uVar4 = ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102d20(0xf,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fa6b8(uVar2,uVar3,uVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb3e0(0x8c4c3ea0,0xb3b160,uVar4,ar7));
  uVar4 = ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_25825a(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fa6e2(ar4,ar5,ar6,ar7));
  ar6_00 = 0x8c44d498;
  uVar3 = 0x8c441478;
  uVar2 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f5dd0(0,0x8c441478,0x8c44d498,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f8114(uVar2,uVar3,ar6_00,ar7));
  uVar2 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102d20(0,uVar3,ar6_00,ar7));
  for (iVar5 = 8; 0 < iVar5; iVar5 = iVar5 + -1) {
    ar6_00 = 0x800;
    uVar2 = 8;
    uVar3 = 0x8c4594c0;
    ar7 = 0x8c45a860;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c1f38c0(8,0x8c4594c0,0x800,0x8c45a860));
    if ((iVar1 == -0x17) || (iVar1 == -0x21)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102d40(uVar2,uVar3,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), game_shutdown_b(uVar2,uVar3,ar6_00,ar7));
    }
    else if (iVar1 == 0) break;
  }
  if (iVar5 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102d40(uVar2,uVar3,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), game_shutdown_b(uVar2,uVar3,ar6_00,ar7));
  }
  uVar3 = ({ unsigned long ri0_ = (unsigned long)(uVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0100b0(uVar2,uVar3,ar6_00,ar7); });
  return uVar3;
}

__asm__(".globl FUN_8c102bd0\n.set FUN_8c102bd0, FUN_8c102bd0_def\n");

}
