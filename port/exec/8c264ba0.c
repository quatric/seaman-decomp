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
undefined4 FUN_8c264ba0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c264ba0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  int *a4;
  int iVar2;
  
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c260ca0(ar4,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 20)), s_E1205_Illigal_parameter_MWRN_2690dc(*(undefined4 *)(unsigned)(ar4 + 0xc),0,ar6,ar7));
  uVar1 = 0;
  (vsp = ((unsigned long)(fr0_ - 20)), s_E1205_Illigal_parameter_MWRN_2691ba(*(undefined4 *)(unsigned)(ar4 + 0xc),0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c262c66(*(undefined4 *)(unsigned)(ar4 + 4),uVar1,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 8) != 0) {
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c263498(*(undefined4 *)(unsigned)(ar4 + 8),uVar1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)) + 0x14))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)),uVar1,ar6,ar7));
  }
  for (iVar2 = 0; iVar2 < *(char *)(unsigned)(ar4 + 3); iVar2 = iVar2 + 1) {
    a4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar2 * 4 + ar4 + 0x18));
    (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x14))))(a4,uVar1,ar6,ar7));
  }
  if (*(int *)(unsigned)(ar4 + 8) != 0) {
    uVar1 = 0;
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c263534(*(undefined4 *)(unsigned)(ar4 + 8),0,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c26346e(*(undefined4 *)(unsigned)(ar4 + 8),uVar1,ar6,ar7));
  }
  ar5_00 = *(undefined4 *)(unsigned)(ar4 + 0x14);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c263b34(ar4,ar5_00,ar6,ar7));
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c260cc8(ar4,ar5_00,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c264ba0\n.set _FUN_8c264ba0, _FUN_8c264ba0_def\n");
