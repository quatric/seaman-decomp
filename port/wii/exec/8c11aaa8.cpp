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
undefined4 FUN_8c11aaa8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c11aaa8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  le<ushort>* puVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(le<int>* )(unsigned)(0x19c + ar4);
  if (iVar5 != 0) {
    puVar3 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar5 + 0xc));
    if (((undefined *)(unsigned long)*(le<unsigned>* )(unsigned)(0x134 + ar4)) == ((void *)(unsigned)0x8c119320)) {
      iVar2 = (int)puVar3 - *(le<int>* )(unsigned)(ar4 + 0x48);
      uVar4 = (int)(iVar2 + (uint)(iVar2 < 0)) >> 1;
      if ((uVar4 < *(le<uint>* )(unsigned)(ar4 + 0x38)) ||
         (*(le<int>* )(unsigned)(0x1b4 + ar4) + *(le<uint>* )(unsigned)(ar4 + 0x38) <= uVar4)) {
        *(le<undefined2>* )(unsigned)(ar4 + 0x34) = 0;
      }
      else {
        *(le<short>* )(unsigned)(ar4 + 0x34) = *(le<short>* )(unsigned)(ar4 + 0x34) + 1;
      }
    }
    else {
      uVar1 = *puVar3;
      while ((uVar1 & 1) == 0) {
        puVar3 = puVar3 + 1;
        uVar1 = *puVar3;
      }
      iVar2 = *(le<int>* )(unsigned)(puVar3 + 1);
      if (((*(le<ushort>* )(unsigned)(iVar2 * 2 + *(le<int>* )(unsigned)(0xc0 + ar4)) & 2) == 0) ||
         (iVar2 != *(le<int>* )(unsigned)(0x150 + ar4))) {
        *(le<undefined2>* )(unsigned)(ar4 + 0x34) = 0;
      }
      else {
        *(le<short>* )(unsigned)(ar4 + 0x34) = *(le<short>* )(unsigned)(ar4 + 0x34) + 1;
      }
      *(le<int>* )(unsigned)(0x150 + ar4) = iVar2;
    }
    if (*(le<uint>* )(unsigned)(0x14c + ar4) < (uint)*(le<ushort>* )(unsigned)(ar4 + 0x34)) {
      if (((undefined *)(unsigned long)*(le<unsigned>* )(unsigned)(0x134 + ar4)) == ((void *)(unsigned)0x8c119320)) {
        iVar5 = *(le<int>* )(unsigned)(iVar5 + 8);
        uVar1 = 0;
        if (iVar5 != 0) {
          iVar2 = *(le<int>* )(unsigned)(iVar5 + 0x10);
          while (iVar2 != 0) {
            iVar2 = *(le<int>* )(unsigned)(iVar5 + 0x10) - *(le<int>* )(unsigned)(ar4 + 0x48);
            iVar5 = *(le<int>* )(unsigned)(iVar5 + 4);
            if ((uint)((int)(iVar2 + (uint)(iVar2 < 0)) >> 1) <
                (uint)(*(le<int>* )(unsigned)(ar4 + 0x40) + *(le<int>* )(unsigned)(0x1b4 + ar4) * -2)) {
              uVar1 = uVar1 + 1;
            }
            if (iVar5 == 0) break;
            iVar2 = *(le<int>* )(unsigned)(iVar5 + 0x10);
          }
        }
        if (uVar1 < 0x10) {
          *(le<undefined2>* )(unsigned)(ar4 + 0x34) = 0;
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

__asm__(".globl FUN_8c11aaa8\n.set FUN_8c11aaa8, FUN_8c11aaa8_def\n");

}
