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
s_E8101201_not_enough_data_adx_26461e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E8101201_not_enough_data_adx_26461e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int ar5_00;
  undefined4 uVar1;
  int s4;
  int *ar4_00;
  undefined4 ar5_01;
  undefined4 a6;
  undefined1 *a6_00;
  undefined1 *puVar2;
  undefined4 ar4_01;
  int *a4;
  
  a4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14));
  ar4_01 = *(undefined4 *)(unsigned)(ar4 + 4);
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c2631b6(ar4_01,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c2631c2(ar4_01,ar5,ar6,ar7));
  s4 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c2631ce(ar4_01,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c2631da(ar4_01,ar5,ar6,ar7));
  if ((*(int *)(unsigned)(ar4 + 8) == 0) && (*(char *)(unsigned)(ar4 + 0x6c) == '\0')) {
    uVar1 = ({ unsigned long ri0_ = (unsigned long)(s4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c26311e(*(undefined4 *)(unsigned)(ar4 + 4),0xffffffff,ar6,ar7); });
  }
  else {
    a6 = *(undefined4 *)(unsigned)(ar4 + 0x50);
    ar5_01 = 1;
    puVar2 = ((undefined1 *)(fr0_ - 0x20));
    ar4_00 = a4;
    (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x18))))(a4,1,a6,puVar2));
    if ((*(int *)(fr0_ - 0x1c)) < *(int *)(unsigned)(ar4 + 0x50)) {
      ({ unsigned long t0_ = (unsigned long)("E8101201: not enough data (adxt_trap_entry)\n"); unsigned long t1_ = (unsigned long)(s4); *(unsigned *)((((unsigned long)(fr0_ - 36)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 36)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 36)) - 8); FUN_8c25ece6(ar4_00,ar5_01,a6,puVar2); });
    }
    a6_00 = ((undefined1 *)(fr0_ - 0x20));
    (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x20))))(a4,0,a6_00,puVar2));
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c263126(ar4_01,0,a6_00,puVar2));
    *(int *)(unsigned)(ar4 + 0x90) = s4 - ar5_00;
    ({ unsigned long ri0_ = (unsigned long)(s4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c26311e(ar4_01,s4 - ar5_00,a6_00,puVar2); });
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c263132(ar4_01,uVar1,a6_00,puVar2));
    ({ unsigned long ri0_ = (unsigned long)(s4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c263102(ar4_01,ar5_00,a6_00,puVar2); });
    if (*(char *)(unsigned)(ar4 + 2) == '\x02') {
      (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x14))))(a4,ar5_00,a6_00,puVar2));
      puVar2 = ((undefined1 *)(fr0_ - 0x20));
      (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x18))))(a4,1,uVar1,puVar2));
      (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x20))))(a4,0,((undefined1 *)(fr0_ - 0x20)),puVar2));
    }
    uVar1 = 0x4c;
    *(int *)(unsigned)(ar4 + 0x4c) = *(int *)(unsigned)(ar4 + 0x4c) + 1;
  }
  return uVar1;
}

__asm__(".globl _s_E8101201_not_enough_data_adx_26461e\n.set _s_E8101201_not_enough_data_adx_26461e, _s_E8101201_not_enough_data_adx_26461e_def\n");
