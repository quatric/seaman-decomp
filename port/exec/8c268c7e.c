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
s_E1205_Illigal_parameter_MWRN_268c80_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1205_Illigal_parameter_MWRN_268c80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar6_00;
  
  if (ar4 == (undefined1 *)(unsigned)0x0) {
    uVar1 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c2732a0)); unsigned long t1_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))
                        ); *(unsigned *)((((unsigned long)(fr0_ - 32)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 32)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 32)) - 8); debug_printf(0,ar5,ar6,ar7); });
    return uVar1;
  }
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c26a100((fr0_ + (int)0xfffffff0),ar5,ar6,ar7));
  if (ar4[1] != '\0') {
    (vsp = ((unsigned long)(fr0_ - 32)), s_E1205_Illigal_parameter_MWRN_268d66(ar4,ar5,ar6,ar7));
  }
  *ar4 = 0;
  for (iVar2 = 0; iVar2 < (int)(uint)(byte)ar4[2]; iVar2 = iVar2 + 1) {
    *(undefined4 *)(unsigned)(ar4 + iVar2 * 4 + 0x10) = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)) + 0xc))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)),0,ar6,ar7));
  uVar1 = 0;
  ar6_00 = 0x90;
  (vsp = ((unsigned long)(fr0_ - 32)), memset(ar4,0,0x90,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c26a118((fr0_ + (int)0xfffffff0),uVar1,ar6_00,ar7));
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_268c80\n.set _s_E1205_Illigal_parameter_MWRN_268c80, _s_E1205_Illigal_parameter_MWRN_268c80_def\n");
