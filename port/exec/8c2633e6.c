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
int s_E8101213_can_t_open_s_ADXSTM_2633ea_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E8101213_can_t_open_s_ADXSTM_2633ea";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a4;
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  
  ar5_00 = 0;
  iVar1 = ar6;
  uVar2 = ar7;
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f397e(ar4,0,ar6,ar7));
  if (a4 == 0) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c272fd4)); unsigned long t1_ = (unsigned long)(ar4); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c25ece6(0,ar5_00,iVar1,uVar2); });
    iVar1 = 0;
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26325e(a4,ar5,ar6 << 0xb,ar7));
    if (iVar1 != 0) {
      uVar2 = 0x20;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0143c0(iVar1 + 0x40,ar4,0x20,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263534(iVar1,0,uVar2,ar7));
    }
  }
  return iVar1;
}

__asm__(".globl _s_E8101213_can_t_open_s_ADXSTM_2633ea\n.set _s_E8101213_can_t_open_s_ADXSTM_2633ea, _s_E8101213_can_t_open_s_ADXSTM_2633ea_def\n");
