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
undefined4 s_E8101205_can_t_open_s_ADXT_S_26446e_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E8101205_can_t_open_s_ADXT_S_26446e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ain0;
  int iVar2;
  int ain0_00;
  undefined4 uVar3;
  
  iVar2 = ar4;
  ain0_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263c64(ar4,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c260ca0(iVar2,ar5,ar6,ar7); });
  uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x10);
  iVar2 = ain0_00;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_E8101210_can_t_open_s_ADXSTM_2632ee(ain0_00,uVar3,ar6,ar7));
  *(int *)(unsigned)(ar4 + 8) = iVar1;
  if (iVar1 == 0) {
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c260cc8(ain0_00,uVar3,ar6,ar7); });
    ain0 = ({ unsigned long t0_ = (unsigned long)("E8101205: can\'t open \'%s\' (ADXT_StartFname)"); unsigned long t1_ = (unsigned long)(iVar2
                       ); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c25ece6(ain0_00,uVar3,ar6,ar7); });
    ar4 = ain0_00;
  }
  else {
    ain0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263bc0(ar4,uVar3,ar6,ar7));
  }
  uVar3 = ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c260cc8(ar4,uVar3,ar6,ar7); });
  return uVar3;
}

__asm__(".globl _s_E8101205_can_t_open_s_ADXT_S_26446e\n.set _s_E8101205_can_t_open_s_ADXT_S_26446e, _s_E8101205_can_t_open_s_ADXT_S_26446e_def\n");
