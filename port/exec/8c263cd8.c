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
undefined4 FUN_8c263cd8_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c263cd8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int *ar5_00;
  undefined4 *ar6_00;
  
  if ((*(char *)(unsigned)(ar4 + 1) == '\x03') || (*(char *)(unsigned)(ar4 + 1) == '\x04')) {
    (vsp = ((unsigned long)(fr0_ - 0)), s_E1205_Illigal_parameter_MWRN_2699d4(*(undefined4 *)(unsigned)(ar4 + 0xc),ar5,ar6,ar7));
  }
  else if (*(char *)(unsigned)(ar4 + 1) == '\x05') {
    ar5_00 = ar5;
    ar6_00 = ar6;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263186(*(undefined4 *)(unsigned)(ar4 + 4),ar5,ar6,ar7));
    *ar5 = iVar1;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26314a(*(undefined4 *)(unsigned)(ar4 + 4),ar5_00,ar6_00,ar7));
    *ar6 = uVar2;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263162(*(undefined4 *)(unsigned)(ar4 + 4),ar5_00,ar6_00,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(0x10,uVar2,vr6,vr7));
    *ar5 = *ar5 * iVar1;
  }
  else {
    *ar5 = 0;
    *ar6 = 1;
  }
  *ar5 = *ar5 + *(int *)(unsigned)(ar4 + 0x88);
  return 0x88;
}

__asm__(".globl _FUN_8c263cd8\n.set _FUN_8c263cd8, _FUN_8c263cd8_def\n");
