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
undefined4 FUN_8c26304a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26304a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int unaff_r13 = 0;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(unsigned)(unaff_r13 + 4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_25ff38(uVar2,ar5,ar6,ar7));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262e10(unaff_r13,ar5,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2602f4(uVar2,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_25ff38(uVar2,ar5,ar6,ar7));
  if (iVar1 == 3) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262f02(unaff_r13,ar5,ar6,ar7));
    return uVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c26304a\n.set _FUN_8c26304a, _FUN_8c26304a_def\n");
