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
int FUN_8c02da5c_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  TRACE_ENTER("FUN_8c02da5c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d9f4(ar4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 8) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x10) = 0;
  *(le<undefined2>* )(unsigned)(ar4 + 0x14) = 0;
  *(le<undefined2>* )(unsigned)(ar4 + 0x16) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x18) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x3c) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x1c) = 1;
  *(undefined1 *)(unsigned)(ar4 + 0x40) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x44) = 1;
  *(le<short>* )(unsigned)(ar4 + 0x20) = (short)ar6;
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(le<undefined2>* )(unsigned)(ar4 + iVar1 * 2 + 0x22) = *(le<undefined2>* )(unsigned)(iVar1 * 2 + ar7);
  }
  *(le<undefined4>* )(unsigned)(ar4 + 0x34) = s0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x30) = s4;
  *(le<undefined4>* )(unsigned)(ar4 + 0x38) = ar5;
  *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 0x270f;
  *(undefined1 *)(unsigned)(ar4 + 0x4c) = 0;
  return ar4;
}

__asm__(".globl FUN_8c02da5c\n.set FUN_8c02da5c, FUN_8c02da5c_def\n");

}
