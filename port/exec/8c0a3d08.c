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
uint FUN_8c0a3d08_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a3d08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  undefined1 *ar7_01;
  
  uVar3 = ar6;
  ar7_00 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c023cd4(ar4 + 0x250,ar6,ar6,ar7));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x1c)),ar7,uVar3,ar7_00));
    ar7_01 = ((undefined1 *)(fr0_ - 0x1c));
    uVar3 = ar6;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0a1828(ar4,ar5,ar6,ar7_01));
    (vsp = ((unsigned long)(fr0_ - 32)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,uVar3,ar7_01));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 32)), Vec3_assign(ar4 + 0x250,ar6,uVar3,ar7_01));
    }
    uVar2 = (uint)(iVar1 != 0);
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c031de8(ar4,0,uVar3,ar7_00));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0a3d08\n.set _FUN_8c0a3d08, _FUN_8c0a3d08_def\n");
