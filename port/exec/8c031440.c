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
undefined4 Class_129cbc_m5_031440_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_129cbc_m5_031440";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_10_031590(ar4 + 0xb0,ar5,ar6,ar7));
  ar7_00 = 0;
  uVar3 = 0xffffffff;
  iVar1 = iVar1 + -1;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033a8c))))
                    (ar4 + 0xb0,iVar1,0xffffffff,0));
  if (iVar2 != 6) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_1c_026dd8(ar4 + 0xb0,iVar1,uVar3,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 4)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,iVar1,uVar3,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar1,uVar3,ar7_00));
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033b98))))
                    (ar4 + 0xb0,iVar1,uVar3,ar7_00));
  return uVar3;
}

__asm__(".globl _Class_129cbc_m5_031440\n.set _Class_129cbc_m5_031440, _Class_129cbc_m5_031440_def\n");
