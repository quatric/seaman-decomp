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
int FUN_8c26201c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26201c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a4;
  int ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int iVar1;
  undefined4 ain0;
  
  ar5_00 = 0;
  ar4_00 = 1;
  ar6_00 = ar4;
  ain0 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c261a4c(1,0,ar4,ar5));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c260ca0(ar4_00,ar5_00,ar6_00,ar5); });
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c261f48(ar4_00,ar5_00,ar6_00,ar5));
  iVar1 = a4;
  if ((a4 != 0) &&
     (ar5_00 = ar4, ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), s_E9040901_can_t_find_s_ADXF_O_261f82(a4,ar4,ar6_00,ar5)), ar4_00 < 0))
  {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262168(a4,ar5_00,ar6_00,ar5));
    iVar1 = 0;
    ar4_00 = a4;
  }
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c260cc8(ar4_00,ar5_00,ar6_00,ar5); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c261a4c(1,1,ar4,ain0));
  return iVar1;
}

__asm__(".globl _FUN_8c26201c\n.set _FUN_8c26201c, _FUN_8c26201c_def\n");
