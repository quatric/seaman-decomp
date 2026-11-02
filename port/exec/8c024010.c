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
void FUN_8c024010_def(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ring[rp++ & 255] = "FUN_8c024010";

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)param_3;
    (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)((int)param_3 + 4);
    (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(param_3 + 1);
    (*(undefined4 *)(fr0_ - 0xc)) = in_PR;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)*param_3;
    (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)*(undefined8 *)(unsigned)((int)param_3 + 4);
    (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)param_3[1];
    (*(undefined4 *)(fr0_ - 0xc)) = (undefined4)((ulonglong)param_3[1] >> 0x20);
  }
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c21279c(param_1,&(*(undefined4 *)(fr0_ - 0x18)),&(*(undefined4 *)(fr0_ - 0x24)),vr7));
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)param_2 = (*(undefined4 *)(fr0_ - 0x24));
    *(undefined4 *)(unsigned)((int)param_2 + 4) = (*(undefined4 *)(fr0_ - 0x20));
    *(undefined4 *)(unsigned)(param_2 + 1) = (*(undefined4 *)(fr0_ - 0x1c));
  }
  else {
    *param_2 = CONCAT44((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
    *(ulonglong *)(unsigned)((int)param_2 + 4) = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
    param_2[1] = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
  }
  return;
}

__asm__(".globl _FUN_8c024010\n.set _FUN_8c024010, _FUN_8c024010_def\n");
