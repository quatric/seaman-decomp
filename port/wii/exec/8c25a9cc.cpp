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
undefined4 FUN_8c25a9cc_def(int ar4,int ar5,uint ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c25a9cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint ar7_00;
  uint uVar4;
  uint ar6_00;
  
  ar7_00 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213a04(*(le<undefined4>* )(unsigned)(ar4 + 0xc),*(le<undefined4>* )(unsigned)(ar4 + 0x10),ar6,ar7));
  iVar1 = iVar1 * 4;
  if ((*(le<uint>* )(unsigned)(ar4 + 0x18) & 1) == 0) {
    uVar2 = *(le<uint>* )(unsigned)(((undefined1 *)(unsigned)0x8c277ce0) + iVar1);
    uVar3 = *(le<uint>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d18) + iVar1);
  }
  else {
    uVar2 = *(le<uint>* )(unsigned)(((undefined1 *)(unsigned)0x8c277cfc) + iVar1);
    uVar3 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d34) + iVar1) + 10;
  }
  ar6_00 = 0;
  uVar4 = 0;
  if (ar6 <= uVar2) {
    uVar4 = uVar2 - ar6;
    if (ar7 <= uVar4) goto LAB_8c25aa36;
    ar7 = ar7 - uVar4;
  }
  ar6_00 = ar7;
  ar7 = uVar4;
  if (uVar3 < ar6_00) {
    ar6_00 = uVar3;
  }
LAB_8c25aa36:
  if (ar7 == 0) {
    if (ar6_00 == 0) {
      return 0;
    }
    iVar1 = (*(le<int>* )(unsigned)(ar4 + 0x1c) + ar6) - uVar2;
  }
  else {
    iVar1 = *(le<int>* )(unsigned)(ar4 + 0x1c) + ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a8e0(iVar1,ar5,ar7,ar7_00));
    if (ar6_00 == 0) {
      return 0;
    }
    ar5 = ar5 + ar7;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a8e0(iVar1 + 0x800,ar5,ar6_00,ar7_00));
  return 0;
}

__asm__(".globl FUN_8c25a9cc\n.set FUN_8c25a9cc, FUN_8c25a9cc_def\n");

}
