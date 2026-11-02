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
undefined4 FUN_8c20d740_def(int ar4,int ar5,undefined4 ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c20d740");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  uint ar7_00;
  int ar6_00;
  
  ar7_00 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d400(ar6,ar6,ar6,ar7));
  iVar1 = iVar1 * 4;
  if ((ar7 & 1) == 0) {
    ar6_00 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d448) + iVar1);
    iVar1 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d530) + iVar1);
  }
  else {
    ar6_00 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d464) + iVar1);
    iVar1 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d55c) + iVar1) + 10;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a8e0(ar4,ar5,ar6_00,ar7_00));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a8e0(ar4 + 0x800,ar5 + ar6_00,iVar1,ar7_00));
  return uVar2;
}

__asm__(".globl FUN_8c20d740\n.set FUN_8c20d740, FUN_8c20d740_def\n");

}
