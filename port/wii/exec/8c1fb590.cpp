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
uint FUN_8c1fb590_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fb590");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 244; for (int i_ = 0; i_ < 244; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  le<int>* piVar6;
  le<int>* piVar7;
  byte in_MD = 0;
  byte in_RB = 0;
  byte in_BL = 0;
  byte in_FD = 0;
  byte in_M = 0;
  byte in_Q = 0;
  byte in_IMASK = 0;
  byte in_S = 0;
  byte in_T = 0;
  bool bVar8;
  
  uVar1 = (uint)in_T | (uint)in_S << 1;
  uVar2 = uVar1 | (uint)in_IMASK << 4;
  uVar3 = uVar2 | (uint)in_Q << 8;
  uVar4 = uVar3 | (uint)in_M << 9;
  uVar5 = (uint)in_BL << 0x1c | (uint)in_RB << 0x1d;
  bVar8 = ar4 == 0;
  if (!bVar8) {
    piVar7 = (le<int>* )(unsigned)(ar4 + -0x20);
    for (piVar6 = (le<int>* )(unsigned)*(le<undefined4>* )(unsigned)0x8c475f04;
        ((piVar7 <= piVar6 || ((le<int>* )(unsigned)*piVar6 <= piVar7)) &&
        ((piVar6 < (le<int>* )(unsigned)*piVar6 || ((piVar7 <= piVar6 && ((le<int>* )(unsigned)*piVar6 <= piVar7))))));
        piVar6 = (le<int>* )(unsigned)*piVar6) {
    }
    if (piVar7 + *(le<int>* )(unsigned)(ar4 + -0x1c) * 8 == (le<int>* )(unsigned)*piVar6) {
      *(le<int>* )(unsigned)(ar4 + -0x1c) = *(le<int>* )(unsigned)(ar4 + -0x1c) + *(le<int>* )(unsigned)(*piVar6 + 4);
      *piVar7 = *(le<int>* )(unsigned)*piVar6;
    }
    else {
      *piVar7 = *piVar6;
    }
    bVar8 = piVar6 + piVar6[1] * 8 == piVar7;
    if (bVar8) {
      piVar6[1] = piVar6[1] + *(le<int>* )(unsigned)(ar4 + -0x1c);
      *piVar6 = *piVar7;
    }
    else {
      *piVar6 = (int)piVar7;
    }
    *(le<undefined4>* )(unsigned)0x8c475f04 = piVar6;
  }
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)bVar8 | uVar1 & 2 | uVar2 & 0xf0 | uVar3 & 0x100 | uVar4 & 0x200 |
          (uVar4 | (uint)in_FD << 0xf) & 0x8000 | (uint)in_BL << 0x1c & 0x10000000 |
          uVar5 & 0x20000000 |
         (uint)((((byte)(uVar5 >> 0x18) | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6) <<
         0x1e) & (int)(int)0xffffff0f;
}

__asm__(".globl FUN_8c1fb590\n.set FUN_8c1fb590, FUN_8c1fb590_def\n");

}
