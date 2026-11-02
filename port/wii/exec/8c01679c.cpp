#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01679c_def(int ar4,undefined4 ar5,le<short>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01679c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  le<short>* ar6_00;
  int iVar2;
  
  iVar2 = (char)ar5 + -0x20;
  ar6_00 = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(iVar2,0x10,ar6,ar7));
  *ar6 = (short)uVar1 * (short)*(le<undefined4>* )(unsigned)(ar4 + 0x14);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(iVar2,0x10,ar6_00,ar7));
  ar6[1] = (short)uVar1 * (short)*(le<undefined4>* )(unsigned)(ar4 + 0x18) + (short)*(le<undefined4>* )(unsigned)(ar4 + 0x18);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(iVar2,0x10,ar6_00,ar7));
  ar6[2] = (short)uVar1 * (short)*(le<undefined4>* )(unsigned)(ar4 + 0x14);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(iVar2,0x10,ar6_00,ar7));
  ar6[3] = (short)uVar1 * (short)*(le<undefined4>* )(unsigned)(ar4 + 0x18);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(iVar2,0x10,ar6_00,ar7));
  ar6[4] = (short)uVar1 * (short)*(le<undefined4>* )(unsigned)(ar4 + 0x14) + (short)*(le<undefined4>* )(unsigned)(ar4 + 0x14);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(iVar2,0x10,ar6_00,ar7));
  ar6[5] = (short)uVar1 * (short)*(le<undefined4>* )(unsigned)(ar4 + 0x18);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(iVar2,0x10,ar6_00,ar7));
  ar6[6] = (short)uVar1 * (short)*(le<undefined4>* )(unsigned)(ar4 + 0x14) + (short)*(le<undefined4>* )(unsigned)(ar4 + 0x14);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(iVar2,0x10,ar6_00,ar7));
  iVar2 = iVar2 * *(le<int>* )(unsigned)(ar4 + 0x18) + *(le<int>* )(unsigned)(ar4 + 0x18);
  ar6[7] = (short)iVar2;
  return iVar2;
}

__asm__(".globl FUN_8c01679c\n.set FUN_8c01679c, FUN_8c01679c_def\n");

}
