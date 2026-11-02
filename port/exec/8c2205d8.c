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
undefined4 FUN_8c2205d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2205d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  undefined4 uVar5;
  ushort uVar6;
  
  puVar4 = 0x8c4aad86;
  puVar3 = 0x8c4aa380;
  puVar2 = 0x8c4aa378;
  puVar1 = 0x8c4aa37c;
  if (ar4 == 0x22) {
    *(undefined4 *)(unsigned)0x8c4aa374 = 3;
    uVar6 = (ushort)0xbfdf;
    *puVar2 = 2;
    *puVar1 = 0xffffffff;
    *puVar3 = 0xffffffff;
    uVar5 = 0x22;
  }
  else if (ar4 == 0x23) {
    uVar5 = 4;
    *(undefined4 *)(unsigned)0x8c4aa374 = 4;
    *puVar2 = 2;
    *puVar1 = 0xffffffff;
    *puVar3 = 5;
    uVar6 = (ushort)0xffdf;
  }
  else {
    if (ar4 != 0x29) {
      if (ar4 != 0x2a) {
        *(undefined4 *)(unsigned)0x8c4aa374 = 0;
        *puVar2 = 0xffffffff;
        *puVar1 = 0xffffffff;
        *puVar3 = 0xffffffff;
        *puVar4 = 0;
        return ar4;
      }
      *(undefined4 *)(unsigned)0x8c4aa374 = 7;
      *puVar2 = 2;
      *puVar1 = 5;
      *puVar3 = 8;
      return 7;
    }
    uVar5 = 6;
    *(undefined4 *)(unsigned)0x8c4aa374 = 6;
    *puVar2 = 2;
    *puVar1 = 5;
    uVar6 = (ushort)0xbfff;
    *puVar3 = 0xffffffff;
  }
  *puVar4 = *puVar4 & uVar6;
  return uVar5;
}

__asm__(".globl _FUN_8c2205d8\n.set _FUN_8c2205d8, _FUN_8c2205d8_def\n");
