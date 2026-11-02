#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c25d7c6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint s0 = *(uint *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  uint *puVar1;
  uint *puVar2;
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
  
  *(undefined4 *)(unsigned)0x8c4a9c14 = s0;
  puVar1 = 0x8c4aa058;
  *(undefined4 *)(unsigned)0x8c4aa058 = (0x10000 & s0) >> 0x10;
  puVar2 = 0x8c4aa05c;
  *(undefined4 *)(unsigned)0x8c4aa05c = (0x60000 & s0) >> 0x11;
  puVar1[2] = (0x180000 & s0) >> 0x13;
  puVar2[2] = (0x600000 & s0) >> 0x15;
  puVar1[4] = (0x1800000 & s0) >> 0x17;
  puVar2[4] = (s0 & 0x6000000) >> 0x19;
  puVar1[-0x18] = (puVar1[-0x15] >> 2) * 3;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25ce80(puVar2[-0x15] * *(undefined4 *)(unsigned)0x8c4aa00c,1,ar6,ar7));
  iVar10 = (int)(int)0xffffff00;
  iVar7 = 0;
  iVar11 = 0;
  iVar8 = 0;
  iVar9 = 0;
  do {
    iVar12 = iVar11 * 0x20;
    *(int *)(unsigned)(0x8c4aa018 + 4 + iVar12) = *(int *)(unsigned)(0x8c4aa018 + iVar12) + *(undefined4 *)(unsigned)0x8c4aa004;
    iVar4 = 0x8c4aa01c;
    if ((*(undefined4 *)(unsigned)0x8c4a9bb0 & 0x20) == 0) {
      *(int *)(unsigned)(0x8c4aa01c + iVar12) =
           *(int *)(unsigned)(0x8c4aa01c + iVar12) + *(undefined4 *)(unsigned)0x8c4aa008 * *(int *)(unsigned)(0x8c4aa01c + -0x10) * -0x18;
    }
    else {
      if (*(undefined4 *)(unsigned)0x8c4aa010 == 0) {
        iVar6 = *(int *)(unsigned)(0x8c4aa01c + iVar12) +
                *(undefined4 *)(unsigned)0x8c4aa008 * *(int *)(unsigned)(0x8c4aa01c + -0x10) * -0x30;
        iVar4 = 0x8c4aa01c;
      }
      else {
        *(int *)(unsigned)(0x8c4aa01c + iVar12) = *(int *)(unsigned)(0x8c4aa01c + iVar12) + -0x44;
        iVar6 = *(int *)(unsigned)(iVar4 + iVar12) + *(undefined4 *)(unsigned)0x8c4aa008 * *(undefined4 *)(unsigned)0x8c4aa00c * -0x60;
      }
      *(int *)(unsigned)(iVar4 + iVar12) = iVar6;
    }
    if ((*(undefined4 *)(unsigned)0x8c4a9bb0 & 0x80) != 0) {
      *(int *)(unsigned)(0x8c4aa01c + iVar12) = *(int *)(unsigned)(0x8c4aa01c + iVar12) + -0x18;
    }
    iVar4 = 0x8c4aa01c;
    if (*(undefined4 *)(unsigned)0x8c4aa058 == 0) {
      *(uint *)(unsigned)(0x8c4aa024 + iVar7) = *(int *)(unsigned)(0x8c4aa018 + iVar7) + *(undefined4 *)(unsigned)0x8c4a9ff8 & 0xffffffe0;
      iVar4 = 0x8c4aa01c;
      *(uint *)(unsigned)(0x8c4aa01c + 0xc + iVar7) = *(int *)(unsigned)(0x8c4aa01c + iVar7) - iVar3 & 0xffffff80;
      *(int *)(unsigned)(iVar4 + 0x10 + iVar7) = *(int *)(unsigned)(iVar4 + 8 + iVar7) + iVar3;
    }
    else {
      *(uint *)(unsigned)(0x8c4aa01c + 8 + iVar8) = *(int *)(unsigned)(0x8c4aa01c + iVar8) - iVar3 & 0xffffff80;
      *(uint *)(unsigned)(iVar4 + 0xc + iVar8) = *(int *)(unsigned)(iVar4 + -4 + iVar8) + *(undefined4 *)(unsigned)0x8c4a9ff8 & 0xffffffe0;
      *(undefined4 *)(unsigned)(iVar4 + 0x10 + iVar8) = *(undefined4 *)(unsigned)(iVar4 + 8 + iVar8);
    }
    iVar4 = 0x8c4aa018;
    *(undefined4 *)(unsigned)(0x8c4aa018 + 0x18 + iVar9) = *(undefined4 *)(unsigned)(0x8c4aa018 + iVar9);
    *(int *)(unsigned)(iVar4 + 0x1c + iVar9) = *(int *)(unsigned)(iVar4 + iVar9) + *(undefined4 *)(unsigned)0x8c4a9ff8 + iVar10;
    iVar11 = iVar11 + 1;
    iVar9 = iVar9 + 0x20;
    iVar8 = iVar8 + 0x20;
    iVar7 = iVar7 + 0x20;
  } while (iVar11 < 2);
  (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25d0a0(*(undefined4 *)(unsigned)0x8c4aa008,*(undefined4 *)(unsigned)0x8c4aa00c,0,1));
  uVar5 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25d0a0(*(undefined4 *)(unsigned)0x8c4aa008,*(undefined4 *)(unsigned)0x8c4aa00c,0,1));
  return uVar5;
}

__asm__(".globl _FUN_8c25d7c6\n.set _FUN_8c25d7c6, _FUN_8c25d7c6_def\n");
