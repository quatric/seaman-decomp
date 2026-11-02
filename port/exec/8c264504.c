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
undefined4 s_E8101207_can_t_create_sj_ADX_26450a_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E8101207_can_t_create_sj_ADX_26450a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar5_00;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int ar6_00;
  int ain0;
  
  iVar3 = ar5;
  ar6_00 = ar6;
  ain0 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263c64(ar4,ar5,ar6,ar7));
  uVar2 = *(uint *)(unsigned)(ar5 + 4);
  if ((ar6 < (int)(uVar2 >> 0x18 | (int)uVar2 >> 8 & 0xff00U | (uVar2 & 0xff00) << 8 | uVar2 << 0x18
                  )) && (-1 < ar6)) {
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c260ca0(uVar2,iVar3,ar6_00,ar7); });
    uVar2 = *(uint *)(unsigned)((ar6 + 1) * 8 + ar5);
    iVar3 = (uVar2 >> 0x18 | (int)uVar2 >> 8 & 0xff00U | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) +
            ain0;
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26b250(iVar3,0x40000000,ar6_00,ar7));
    if (ar5_00 == 0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c260cc8(iVar3,0,ar6_00,ar7); });
      uVar1 = ({ unsigned long t0_ = (unsigned long)("E8101207: can\'t create sj (ADXT_StartMemIdx)"); unsigned long t1_ = (unsigned long)(
                           ain0); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c25ece6(iVar3,ar5_00,ar6_00,ar7); });
    }
    else {
      iVar3 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263b34(ar4,ar5_00,ar6_00,ar7));
      uVar1 = 2;
      *(undefined1 *)(unsigned)(ar4 + 2) = 2;
    }
    uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c260cc8(iVar3,ar5_00,ar6_00,ar7); });
    return uVar1;
  }
  return 0xff00;
}

__asm__(".globl _s_E8101207_can_t_create_sj_ADX_26450a\n.set _s_E8101207_can_t_create_sj_ADX_26450a, _s_E8101207_can_t_create_sj_ADX_26450a_def\n");
