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
int FUN_8c1ff478_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1ff478");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 324; for (int i_ = 0; i_ < 324; i_++) z_[i_] = 0; }
  undefined1 *ar6_00;
  int iVar1;
  undefined4 ar4_00;
  int iVar2;
  uint uVar3;
  undefined1 *ar6_01;
  undefined4 ar6_02;
  uint ar5_00;
  
  ar6_01 = ((undefined1 *)(fr0_ - 0x48));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 324)), FUN_8c200566(ar4,ar5,ar6_01,ar7));
  if (iVar1 < 0) {
    iVar1 = (int)(int)0xffffff05;
  }
  else {
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 324)), FUN_8c200a84(ar4,iVar1,ar6_01,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 324)), FUN_8c200b10(ar4,ar5,ar6_01,ar7));
    ar6_00 = 0xfffc;
    if (iVar2 == 0) {
      ar5_00 = (*(le<uint>* )(fr0_ - 0x3c));
      for (iVar2 = 0; iVar2 < (*(le<int>* )(fr0_ - 0x20)); iVar2 = iVar2 + 1) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 324)), FUN_8c2009d0(ar4,ar5_00,ar6_01,ar7));
        ar6_01 = ar6_00;
        (vsp = ((unsigned long)(fr0_ - 324)), FUN_8c20099e(ar4,ar5_00,ar6_00,ar7));
        ar5_00 = uVar3 & 0xffff;
      }
    }
    ar6_02 = 0x20;
    (vsp = ((unsigned long)(fr0_ - 324)), memset(ar4_00,0,0x20,ar7));
    (vsp = ((unsigned long)(fr0_ - 324)), FUN_8c200a9c(ar4,iVar1,ar6_02,ar7));
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl FUN_8c1ff478\n.set FUN_8c1ff478, FUN_8c1ff478_def\n");

}
