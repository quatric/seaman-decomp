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
undefined4 FUN_8c263ce4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c263ce4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_r12 = 0;
  int *unaff_r13 = 0;
  int unaff_r14 = 0;
  
  if ((*(char *)(unsigned)(unaff_r14 + 1) == '\x03') || (*(char *)(unsigned)(unaff_r14 + 1) == '\x04')) {
    (vsp = ((unsigned long)(fr0_ - 0)), s_E1205_Illigal_parameter_MWRN_2699d4(*(undefined4 *)(unsigned)(unaff_r14 + 0xc),unaff_r13,unaff_r12,ar7));
  }
  else if (*(char *)(unsigned)(unaff_r14 + 1) == '\x05') {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263186(*(undefined4 *)(unsigned)(unaff_r14 + 4),ar5,ar6,ar7));
    *unaff_r13 = iVar1;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26314a(*(undefined4 *)(unsigned)(unaff_r14 + 4),ar5,ar6,ar7));
    *unaff_r12 = uVar2;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263162(*(undefined4 *)(unsigned)(unaff_r14 + 4),ar5,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(0x10,uVar2,vr6,vr7));
    *unaff_r13 = *unaff_r13 * iVar1;
  }
  else {
    *unaff_r13 = 0;
    *unaff_r12 = 1;
  }
  *unaff_r13 = *unaff_r13 + *(int *)(unsigned)(unaff_r14 + 0x88);
  return 0x88;
}

__asm__(".globl _FUN_8c263ce4\n.set _FUN_8c263ce4, _FUN_8c263ce4_def\n");
