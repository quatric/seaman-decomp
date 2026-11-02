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
uint FUN_8c200bfc_def(undefined1 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200bfc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  int ar5_00;
  
  ar5_00 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468((uint)*(le<ushort>* )(unsigned)ar5,100,vr6,vr7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200ba0(uVar1,ar5_00,ar6,ar7));
  *ar4 = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010614((uint)*(le<ushort>* )(unsigned)ar5,100,vr6,vr7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200ba0(uVar1,ar5_00,ar6,ar7));
  ar4[1] = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200ba0((uint)*(byte *)(unsigned)(ar5 + 2),ar5_00,ar6,ar7));
  ar4[2] = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200ba0((uint)*(byte *)(unsigned)(ar5 + 3),ar5_00,ar6,ar7));
  ar4[3] = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200ba0((uint)*(byte *)(unsigned)(ar5 + 4),ar5_00,ar6,ar7));
  ar4[4] = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200ba0((uint)*(byte *)(unsigned)(ar5 + 5),ar5_00,ar6,ar7));
  ar4[5] = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200ba0((uint)*(byte *)(unsigned)(ar5 + 6),ar5_00,ar6,ar7));
  ar4[6] = (char)uVar1;
  uVar2 = *(byte *)(unsigned)(ar5 + 7) & 7;
  ar4[7] = (((undefined1 *)(unsigned)0x8c26d210))[uVar2];
  return uVar2;
}

__asm__(".globl FUN_8c200bfc\n.set FUN_8c200bfc, FUN_8c200bfc_def\n");

}
