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
undefined4
s_E8101202_can_t_open_d_d_ADXT_26440a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E8101202_can_t_open_d_d_ADXT_26440a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *ar7_00;
  
  iVar2 = ar4;
  (*(undefined4 *)(fr0_ - 0x10)) = ar5;
  (*(undefined4 *)(fr0_ - 0xc)) = ar6;
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c263c64(ar4,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c260ca0(iVar2,ar5,ar6,ar7); });
  ar7_00 = &(*(undefined4 *)(fr0_ - 0x14));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c26270c((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0xc)),(fr0_ + (int)0xffffffe8),ar7_00));
  uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x10);
  iVar2 = (*(int *)(fr0_ - 0x18));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), s_E8101212_can_t_open_fad_d_ns_26338a((*(int *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x14)),uVar3,ar7_00));
  *(int *)(unsigned)(ar4 + 8) = iVar1;
  if (iVar1 == 0) {
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c260cc8((*(int *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x14)),uVar3,ar7_00); });
    
    ar4 = (*(int *)(fr0_ - 0x18));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c263bc0(ar4,(*(undefined4 *)(fr0_ - 0x14)),uVar3,ar7_00));
  }
  uVar3 = ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c260cc8(ar4,(*(undefined4 *)(fr0_ - 0x14)),uVar3,ar7_00); });
  return uVar3;
}

__asm__(".globl _s_E8101202_can_t_open_d_d_ADXT_26440a\n.set _s_E8101202_can_t_open_d_d_ADXT_26440a, _s_E8101202_can_t_open_d_d_ADXT_26440a_def\n");
