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
int FUN_8c1fbd2c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c1fbd2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 a4;
  code *a5;
  code *ain0;
  
  (*(undefined4 *)(unsigned)(unsigned)0x8c475f88) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c475f8c) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c475f90) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c475f94) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c475f98) = ar6;
  (*(undefined4 *)(unsigned)(unsigned)0x8c475f9c) = ar5;
  ain0 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fc9b0(ar5,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fd626(ar4,ar5,ar6,ar7));
  a5 = ((void *)0x8c1fbe84);
  a4 = 0x14;
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1f03a6(0x14,((void *)0x8c1fbe84),ar6,ar7); });
  if ((iVar1 == 0) && (ain0 != (code *)0x0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)ain0))(a4,a5,ar6,ar7));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c273a44) = 1;
  return iVar1;
}

__asm__(".globl _FUN_8c1fbd2c\n.set _FUN_8c1fbd2c, _FUN_8c1fbd2c_def\n");
