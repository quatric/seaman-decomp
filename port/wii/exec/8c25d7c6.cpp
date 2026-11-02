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
undefined4 FUN_8c25d7c6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25d7c6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint s0 = *(le<uint>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  le<uint>* puVar1;
  le<uint>* puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  *(le<undefined4>* )(unsigned)0x8c4a9c14 = s0;
  puVar1 = 0x8c4aa058;
  *(le<undefined4>* )(unsigned)0x8c4aa058 = (0x10000 & s0) >> 0x10;
  puVar2 = 0x8c4aa05c;
  *(le<undefined4>* )(unsigned)0x8c4aa05c = (0x60000 & s0) >> 0x11;
  puVar1[2] = (0x180000 & s0) >> 0x13;
  puVar2[2] = (0x600000 & s0) >> 0x15;
  puVar1[4] = (0x1800000 & s0) >> 0x17;
  puVar2[4] = (s0 & 0x6000000) >> 0x19;
  puVar1[-0x18] = (puVar1[-0x15] >> 2) * 3;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25ce80(puVar2[-0x15] * *(le<undefined4>* )(unsigned)0x8c4aa00c,1,ar6,ar7));
  iVar10 = (int)(int)0xffffff00;
  iVar7 = 0;
  iVar11 = 0;
  iVar8 = 0;
  iVar9 = 0;
  do {
    iVar12 = iVar11 * 0x20;
    *(le<int>* )(unsigned)(0x8c4aa018 + 4 + iVar12) = *(le<int>* )(unsigned)(0x8c4aa018 + iVar12) + *(le<undefined4>* )(unsigned)0x8c4aa004;
    iVar4 = 0x8c4aa01c;
    if ((*(le<undefined4>* )(unsigned)0x8c4a9bb0 & 0x20) == 0) {
      *(le<int>* )(unsigned)(0x8c4aa01c + iVar12) =
           *(le<int>* )(unsigned)(0x8c4aa01c + iVar12) + *(le<undefined4>* )(unsigned)0x8c4aa008 * *(le<int>* )(unsigned)(0x8c4aa01c + -0x10) * -0x18;
    }
    else {
      if (*(le<undefined4>* )(unsigned)0x8c4aa010 == 0) {
        iVar6 = *(le<int>* )(unsigned)(0x8c4aa01c + iVar12) +
                *(le<undefined4>* )(unsigned)0x8c4aa008 * *(le<int>* )(unsigned)(0x8c4aa01c + -0x10) * -0x30;
        iVar4 = 0x8c4aa01c;
      }
      else {
        *(le<int>* )(unsigned)(0x8c4aa01c + iVar12) = *(le<int>* )(unsigned)(0x8c4aa01c + iVar12) + -0x44;
        iVar6 = *(le<int>* )(unsigned)(iVar4 + iVar12) + *(le<undefined4>* )(unsigned)0x8c4aa008 * *(le<undefined4>* )(unsigned)0x8c4aa00c * -0x60;
      }
      *(le<int>* )(unsigned)(iVar4 + iVar12) = iVar6;
    }
    if ((*(le<undefined4>* )(unsigned)0x8c4a9bb0 & 0x80) != 0) {
      *(le<int>* )(unsigned)(0x8c4aa01c + iVar12) = *(le<int>* )(unsigned)(0x8c4aa01c + iVar12) + -0x18;
    }
    iVar4 = 0x8c4aa01c;
    if (*(le<undefined4>* )(unsigned)0x8c4aa058 == 0) {
      *(le<uint>* )(unsigned)(0x8c4aa024 + iVar7) = *(le<int>* )(unsigned)(0x8c4aa018 + iVar7) + *(le<undefined4>* )(unsigned)0x8c4a9ff8 & 0xffffffe0;
      iVar4 = 0x8c4aa01c;
      *(le<uint>* )(unsigned)(0x8c4aa01c + 0xc + iVar7) = *(le<int>* )(unsigned)(0x8c4aa01c + iVar7) - iVar3 & 0xffffff80;
      *(le<int>* )(unsigned)(iVar4 + 0x10 + iVar7) = *(le<int>* )(unsigned)(iVar4 + 8 + iVar7) + iVar3;
    }
    else {
      *(le<uint>* )(unsigned)(0x8c4aa01c + 8 + iVar8) = *(le<int>* )(unsigned)(0x8c4aa01c + iVar8) - iVar3 & 0xffffff80;
      *(le<uint>* )(unsigned)(iVar4 + 0xc + iVar8) = *(le<int>* )(unsigned)(iVar4 + -4 + iVar8) + *(le<undefined4>* )(unsigned)0x8c4a9ff8 & 0xffffffe0;
      *(le<undefined4>* )(unsigned)(iVar4 + 0x10 + iVar8) = *(le<undefined4>* )(unsigned)(iVar4 + 8 + iVar8);
    }
    iVar4 = 0x8c4aa018;
    *(le<undefined4>* )(unsigned)(0x8c4aa018 + 0x18 + iVar9) = *(le<undefined4>* )(unsigned)(0x8c4aa018 + iVar9);
    *(le<int>* )(unsigned)(iVar4 + 0x1c + iVar9) = *(le<int>* )(unsigned)(iVar4 + iVar9) + *(le<undefined4>* )(unsigned)0x8c4a9ff8 + iVar10;
    iVar11 = iVar11 + 1;
    iVar9 = iVar9 + 0x20;
    iVar8 = iVar8 + 0x20;
    iVar7 = iVar7 + 0x20;
  } while (iVar11 < 2);
  (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25d0a0(*(le<undefined4>* )(unsigned)0x8c4aa008,*(le<undefined4>* )(unsigned)0x8c4aa00c,0,1));
  uVar5 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25d0a0(*(le<undefined4>* )(unsigned)0x8c4aa008,*(le<undefined4>* )(unsigned)0x8c4aa00c,0,1));
  return uVar5;
}

__asm__(".globl FUN_8c25d7c6\n.set FUN_8c25d7c6, FUN_8c25d7c6_def\n");

}
