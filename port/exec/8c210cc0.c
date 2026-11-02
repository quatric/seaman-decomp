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
uint FUN_8c210cc0_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c210cc0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  piVar1 = 0x8c4aa218;
  if (*(undefined4 *)(unsigned)0x8c4a9ef0 == 1) {
    *(undefined4 *)(unsigned)0x8c4aa218 = 0x8c4aa22c;
  }
  else {
    *(undefined4 *)(unsigned)0x8c4aa218 = ar4 * 0x14 + 0x8c4aa22c;
  }
  piVar2 = 0x8c4aa21c;
  *(undefined4 *)(unsigned)*(undefined4 *)(unsigned)0x8c4aa21c = *(undefined4 *)(unsigned)*piVar1;
  *(undefined4 *)(unsigned)(*piVar2 + 4) = *(undefined4 *)(unsigned)(*piVar1 + 4);
  *(undefined4 *)(unsigned)(*piVar2 + 8) = *(undefined4 *)(unsigned)(*piVar1 + 8);
  *(undefined4 *)(unsigned)(*piVar2 + 0xc) = *(undefined4 *)(unsigned)(*piVar1 + 0xc);
  *(undefined4 *)(unsigned)(*piVar2 + 0x10) = *(undefined4 *)(unsigned)(*piVar1 + 0x10);
  iVar3 = 0x8c4aa268;
  uVar6 = 0;
  do {
    uVar7 = uVar6 + 4;
    *(undefined4 *)(unsigned)(uVar6 + iVar3) = *(undefined4 *)(unsigned)(uVar6 + *piVar2);
    iVar4 = 0x8c4aa288;
    uVar6 = uVar7;
  } while (uVar7 < 0x14);
  *(undefined4 *)(unsigned)0x8c4aa214 = ar4 & 1;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    piVar1 = (int *)(unsigned)(uVar6 + iVar4);
    piVar5 = (int *)(unsigned)(*piVar2 + uVar6);
    uVar6 = uVar6 + 4;
    *piVar5 = *piVar5 + *piVar1 * 4;
  } while (uVar6 < 0x14);
  return uVar7;
}

__asm__(".globl _FUN_8c210cc0\n.set _FUN_8c210cc0, _FUN_8c210cc0_def\n");
