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
undefined4 FUN_8c261ae2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c261ae2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a4;
  int iVar1;
  undefined4 uVar2;
  undefined4 a5;
  int iVar3;
  
  iVar3 = 0;
  do {
    a5 = ar5;
    uVar2 = ar6;
    ar5 = a5;
    a4 = (vsp = ((unsigned long)(fr0_ - 0)), s_E9040816_adxf_is_NULL_ADXF_R_26231a(ar4,a5,ar6,ar7));
    if (0 < a4) break;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f39f0(a4,a5,uVar2,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26371e(a4,a5,uVar2,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262524(a4,a5,uVar2,ar7));
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c261aa8(a4,a5,uVar2,ar7); });
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10000);
  if (iVar3 == 10000) {
    return 0;
  }
  iVar3 = 0;
  do {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f39f0(a4,a5,uVar2,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26371e(a4,a5,uVar2,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262524(a4,a5,uVar2,ar7));
    a4 = ar4;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_E9040832_adxf_is_NULL_ADXF_G_2626b4(ar4,a5,uVar2,ar7));
    if (iVar1 == 3) break;
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c261aa8(a4,a5,uVar2,ar7); });
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10000);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_E9040831_adxf_is_NULL_ADXF_G_262696(ar4,a5,uVar2,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c261ae2\n.set _FUN_8c261ae2, _FUN_8c261ae2_def\n");
