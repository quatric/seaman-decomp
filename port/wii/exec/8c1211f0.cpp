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
undefined * FUN_8c1211f0_def(le<int>* ar4,byte *ar5,int ar6,le<ushort>* ar7)

{
  TRACE_ENTER("FUN_8c1211f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint s0 = *(le<uint>* )(vsp + 0);
  uint s4 = *(le<uint>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  ushort uVar2;
  undefined *in_r0 = (undefined *)(unsigned long)vin0;
  uint uVar3;
  le<int>* piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar5 = *(le<int>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c1293e0));
  uVar3 = 0;
  if (s4 != 0) {
    do {
      bVar1 = *ar5;
      ar5 = ar5 + ar6;
      uVar7 = (uint)bVar1;
      iVar5 = iVar5 + uVar7 * -2;
      uVar6 = 0;
      piVar4 = ar4;
      if (s0 != 0) {
        do {
          in_r0 = (&(*(undefined1 *)(unsigned)0x8c1293e4));
          uVar2 = *ar7;
          ar7 = ar7 + 1;
          uVar6 = uVar6 + 1;
          *piVar4 = *piVar4 + *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1293e4)) +
                                      ((int)*(le<short>* )(unsigned)((uint)uVar2 * 2 + iVar5) + uVar7) * 4);
          piVar4 = piVar4 + 1;
        } while (uVar6 < s0);
      }
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + uVar7 * 2;
    } while (uVar3 < s4);
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c1211f0\n.set FUN_8c1211f0, FUN_8c1211f0_def\n");

}
