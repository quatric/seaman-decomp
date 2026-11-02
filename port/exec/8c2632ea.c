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
s_E8101210_can_t_open_s_ADXSTM_2632ee_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E8101210_can_t_open_s_ADXSTM_2632ee";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 ar4_00;
  int ar4_01;
  undefined4 ar5_00;
  undefined1 *ar5_01;
  
  ar5_01 = (fr0_ + (int)0xffffffec);
  ar5_00 = 0;
  ar4_00 = ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c1f397e(ar4,0,ar6,ar7));
  if (iVar1 == 0) {
    ({ unsigned long t0_ = (unsigned long)("E8101210: can\'t open \'%s\' (ADXSTM_OpenFname)"); unsigned long t1_ = (unsigned long)(ar4); *(unsigned *)((((unsigned long)(fr0_ - 40)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 40)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 40)) - 8); FUN_8c25ece6(ar4_00,ar5_00,ar6,ar7); });
  }
  else {
    ar4_01 = iVar1;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c1f30d4(iVar1,(fr0_ + (int)0xffffffec),ar6,ar7));
    if (iVar2 != 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c26325e(iVar1,0,(*(undefined4 *)(fr0_ - 0x14)),ar5));
      if (iVar1 == 0) {
        return 0;
      }
      (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c0143c0(iVar1 + 0x40,ar4,0x20,ar5));
      return iVar1;
    }
    ({ unsigned long t0_ = (unsigned long)("E8101211: can\'t GetFileSize (ADXSTM_OpenFname)"); unsigned long t1_ = (unsigned long)(
                 (*(undefined4 *)(fr0_ - 0x14))); *(unsigned *)((((unsigned long)(fr0_ - 40)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 40)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 40)) - 8); FUN_8c25ece6(ar4_01,ar5_01,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c1f309c(iVar1,ar5_01,ar6,ar7); });
  }
  return 0;
}

__asm__(".globl _s_E8101210_can_t_open_s_ADXSTM_2632ee\n.set _s_E8101210_can_t_open_s_ADXSTM_2632ee, _s_E8101210_can_t_open_s_ADXSTM_2632ee_def\n");
