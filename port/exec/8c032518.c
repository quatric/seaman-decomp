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
undefined4 FUN_8c032518_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c032518";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = ar6;
  uVar3 = ar7;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c03263c(ar4,ar4 + 0x14,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 76)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x38)),ar5,uVar2,uVar3); });
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x48)),uVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,uVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,uVar2,uVar3));
  uVar2 = ar6;
  uVar3 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0329ac(ar4,((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
  if (iVar1 == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c032788(ar4,((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),uVar2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),((undefined1 *)(fr0_ - 0x28)),uVar2,uVar3));
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,uVar2,uVar3));
  }
  return 0;
}

__asm__(".globl _FUN_8c032518\n.set _FUN_8c032518, _FUN_8c032518_def\n");
