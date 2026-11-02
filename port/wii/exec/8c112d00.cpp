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
undefined4 FUN_8c112d00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c112d00");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = 0;
  uVar5 = (uint)(*(le<ushort>* )(unsigned)(0x1e4 + ar4) >> 5);
  uVar6 = 0;
  if (*(le<int>* )(unsigned)(ar4 + 0x5c) != 0) {
    do {
      iVar4 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x58) + uVar6 * 4);
      if (iVar1 != 0) {
        *(le<int>* )(unsigned)(iVar1 + 0x18) = iVar4;
      }
      uVar2 = 0;
      uVar3 = uVar2;
      if (uVar5 != 1) {
        do {
          uVar2 = uVar3 + 1;
          *(le<uint>* )(unsigned)(uVar3 * 0x20 + iVar4 + 0x18) = (uVar3 + 1) * 0x20 + iVar4;
          uVar3 = uVar2;
        } while (uVar2 < uVar5 - 1);
      }
      uVar6 = uVar6 + 1;
      iVar1 = uVar2 * 0x20 + iVar4;
    } while (uVar6 < *(le<uint>* )(unsigned)(ar4 + 0x5c));
  }
  if (iVar1 != 0) {
    *(le<undefined4>* )(unsigned)(iVar1 + 0x18) = 0;
  }
  *(le<undefined4>* )(unsigned)(ar4 + 0x54) = *((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x58));
  return 0;
}

__asm__(".globl FUN_8c112d00\n.set FUN_8c112d00, FUN_8c112d00_def\n");

}
