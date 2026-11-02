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
undefined4 FUN_8c1117e4_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1117e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(le<uint>* )(unsigned)(ar4 + 0x24) < *(le<uint>* )(unsigned)(ar4 + 0x28)) {
    uVar3 = libgcc_divide_helper_010468
                      (*(le<int>* )(unsigned)(ar4 + 0x28) - *(le<uint>* )(unsigned)(ar4 + 0x24),(uint)*(le<ushort>* )(unsigned)(ar4 + 0xc));
  }
  else {
    iVar1 = libgcc_divide_helper_01051c
                      (*(le<int>* )(unsigned)(ar4 + 0x24) - *(le<int>* )(unsigned)(ar4 + 0x28),(uint)*(le<ushort>* )(unsigned)(ar4 + 0xc));
    uVar3 = *(le<int>* )(unsigned)(ar4 + 8) - iVar1;
  }
  if (uVar3 < ar5) {
    return 0;
  }
  iVar1 = ar5 * *(le<ushort>* )(unsigned)(ar4 + 0xc);
  uVar3 = *(le<int>* )(unsigned)(ar4 + 0x28) - iVar1;
  *(le<uint>* )(unsigned)(ar4 + 0x28) = uVar3;
  if (uVar3 < *(le<uint>* )(unsigned)(ar4 + 0x1c)) {
    *(le<int>* )(unsigned)(ar4 + 0x28) = *(le<int>* )(unsigned)(ar4 + 0x28) + *(le<int>* )(unsigned)(ar4 + 0x10);
  }
  uVar3 = 0;
  if (*(le<int>* )(unsigned)(ar4 + 0x28) == *(le<int>* )(unsigned)(ar4 + 0x24)) {
    *(undefined1 *)(unsigned)(ar4 + 0x30) = 1;
  }
  if (*(le<int>* )(unsigned)(ar4 + 0x14) != 0) {
    do {
      if (*(le<int>* )(unsigned)(uVar3 * 4 + *(le<int>* )(unsigned)(ar4 + 0x2c)) != 0) {
        iVar2 = uVar3 * 4;
        *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x2c) + iVar2) = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x2c) + iVar2) - iVar1;
        *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x40) + iVar2) = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x40) + iVar2) - iVar1;
        if (*(le<uint>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x2c) + iVar2) < *(le<uint>* )(unsigned)(ar4 + 0x1c)) {
          *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x2c) + iVar2) =
               *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x2c) + iVar2) + *(le<int>* )(unsigned)(ar4 + 0x10);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(le<uint>* )(unsigned)(ar4 + 0x14));
  }
  return 1;
}

__asm__(".globl FUN_8c1117e4\n.set FUN_8c1117e4, FUN_8c1117e4_def\n");

}
