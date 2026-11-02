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
undefined4 FUN_8c027270_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c027270");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar6_00;
  undefined4 uVar2;
  
  uVar2 = 1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027388(ar4 + 0x174,1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_138_02737c(ar4 + 0x174,uVar2,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,uVar2,ar6,ar7));
  ar6_00 = (int)(short)uVar2;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02775c(ar4,uVar1,ar6_00,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa388(0x8c35468c,uVar1,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027374(ar4 + 0x21c,uVar1,ar6_00,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027364(*(le<undefined4>* )(unsigned)(0x308 + ar4),uVar1,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02735c(ar4 + 0x21c,uVar1,ar6_00,ar7));
  uVar1 = 1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027354(ar4 + 0x2dc,1,ar6_00,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027344(*(le<undefined4>* )(unsigned)(0x308 + ar4),uVar1,ar6_00,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c027270\n.set FUN_8c027270, FUN_8c027270_def\n");

}
