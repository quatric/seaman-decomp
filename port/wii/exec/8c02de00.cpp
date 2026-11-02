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
undefined4 FUN_8c02de00_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02de00");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 1;
  if (0 < ar5) {
    *(le<int>* )(unsigned)(ar4 + 0x18) = *(le<int>* )(unsigned)(ar4 + 0x18) + 1;
    *(le<int>* )(unsigned)(ar4 + 0x10) = *(le<int>* )(unsigned)(ar4 + 0x10) + ar5;
    if (2 < *(le<int>* )(unsigned)(ar4 + 0x10) - *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + ar6 * 0x140 + 8)) {
      *(undefined1 *)(unsigned)(ar4 + 0x1c) = 0;
    }
    iVar2 = *(le<int>* )(unsigned)(ar4 + 0x10) - *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + ar6 * 0x140 + 8);
    iVar3 = ar6;
    if (*(le<int>* )(unsigned)(ar4 + 0x10) == *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + ar6 * 0x140 + 8)) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4,ar5,ar6,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,100,iVar3,ar7));
      if (iVar2 < 0x32) {
        *(undefined1 *)(unsigned)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar2 == 1) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4,ar5,ar6,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,100,iVar3,ar7));
      if (iVar2 < 0x4b) {
        *(undefined1 *)(unsigned)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(unsigned)(ar4 + 0x1c) = 0;
    }
    *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02dc8c(ar4,ar6,iVar3,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c02de00\n.set FUN_8c02de00, FUN_8c02de00_def\n");

}
