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
int FUN_8c0300a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0300a4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0fdc98(ar4,ar5,ar6,ar7));
  for (iVar1 = 0; iVar1 < 0x2d; iVar1 = iVar1 + 1) {
    *(le<undefined4>* )(unsigned)(0x674 + ar4 + iVar1 * 4) = 0;
    for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
      *(le<undefined4>* )(unsigned)(0x2f0 + iVar1 * 0x14 + ar4 + iVar2 * 4) = 0;
    }
  }
  for (iVar1 = 0; iVar1 < 0x20; iVar1 = iVar1 + 1) {
    *(undefined1 *)(unsigned)(0x750 + ar4 + iVar1) = 0;
    *(undefined1 *)(unsigned)(0x730 + ar4 + iVar1) = 0;
    *(undefined1 *)(unsigned)(0x2c8 + ar4 + iVar1) = 0;
  }
  *(le<undefined4>* )(unsigned)(0x2e8 + ar4) = 0xffffffff;
  *(undefined1 *)(unsigned)(0x774 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x72c + ar4) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x60) = 0;
  *(le<undefined4>* )(unsigned)(0x770 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x77c + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0xb8 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 100) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x70) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x68) = 3;
  *(le<undefined4>* )(unsigned)(0x2ec + ar4) = 4;
  *(le<undefined4>* )(unsigned)(0x778 + ar4) = 0;
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    *(undefined1 *)(unsigned)(0xc8 + ar4 + iVar1 * 0x20) = 0;
  }
  return ar4;
}

__asm__(".globl FUN_8c0300a4\n.set FUN_8c0300a4, FUN_8c0300a4_def\n");

}
