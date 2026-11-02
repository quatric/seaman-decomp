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
undefined8 * FUN_8c221414_def(uint *ar4,uint *ar5,uint *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c221414";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 in_dr4 = 0;
  float fVar8;
  
  uVar3 = *ar4;
  puVar1 = ((undefined1 *)(unsigned)0x8c2214d0);
  uVar2 = *ar5;
  fVar8 = F32HI(in_dr4);
  fVar7 = 1.0 - fVar8;
  fVar4 = fVar7 * (float)(uVar3 >> 0x18) + (float)(uVar2 >> 0x18) * fVar8;
  if (2.1474836e+09 < fVar4) {
    puVar1 = (undefined8 *)(unsigned)0x8c2214d4;
    fVar4 = fVar4 + -4.2949673e+09;
  }
  fVar5 = fVar7 * (float)(uVar3 >> 0x10 & 0xff) + (float)(uVar2 >> 0x10 & 0xff) * fVar8;
  if (2.1474836e+09 < fVar5) {
    puVar1 = (undefined8 *)(unsigned)0x8c2214d4;
    fVar5 = fVar5 + -4.2949673e+09;
  }
  fVar6 = fVar7 * (float)(uVar3 >> 8 & 0xff) + (float)(uVar2 >> 8 & 0xff) * fVar8;
  if (2.1474836e+09 < fVar6) {
    puVar1 = (undefined8 *)(unsigned)((undefined4 *)(unsigned)0x8c221758);
    fVar6 = fVar6 + -4.2949673e+09;
  }
  fVar7 = fVar7 * (float)(uVar3 & 0xff) + (float)(uVar2 & 0xff) * fVar8;
  if (2.1474836e+09 < fVar7) {
    puVar1 = (undefined8 *)(unsigned)((undefined4 *)(unsigned)0x8c221758);
    fVar7 = fVar7 + -4.2949673e+09;
  }
  *ar6 = (int)fVar4 << 0x18 | ((int)fVar5 & 0xffU) << 0x10 | ((int)fVar6 & 0xffU) << 8 |
         (int)fVar7 & 0xffU;
  return puVar1;
}

__asm__(".globl _FUN_8c221414\n.set _FUN_8c221414, _FUN_8c221414_def\n");
