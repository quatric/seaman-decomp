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
int FUN_8c1f69fa_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f69fa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int *unaff_r14 = 0;
  char in_T = 0;
  undefined4 in_PR = 0;
  
  if (in_T == '\0') {
    iVar1 = 0x7fffffff;
  }
  else {
    iVar1 = *(int *)(unsigned)(*unaff_r14 + 0x204) + ar4;
  }
  *(int *)(unsigned)(*(int *)(unsigned)(ain0 + *unaff_r14) + 0x14) = iVar1;
  iVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); unsigned long ri1_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c01422c(*(int *)(unsigned)(*unaff_r14 + 0xd78) + 0x18,ar5,ar6,ar7); });
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013e4c(*unaff_r14 + 4,1,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f69fa\n.set _FUN_8c1f69fa, _FUN_8c1f69fa_def\n");
