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
undefined4 FUN_8c20828c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20828c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined4 *)(unsigned)0x8c4a9c50 = 0x80800000;
  puVar1 = 0x8c4a9c54;
  *(undefined4 *)(unsigned)0x8c4a9c54 = 0x20800000;
  *(undefined4 *)(unsigned)0x8c4a9c58 = 0;
  puVar3 = 0x8c4a9c5c;
  uVar2 = 0x40000000;
  *(undefined4 *)(unsigned)0x8c4a9c5c = 0x40000000;
  puVar5 = 0x8c4a9c60;
  uVar4 = 0x43820000;
  *(undefined4 *)(unsigned)0x8c4a9c60 = 0x43820000;
  uVar6 = 0x3727c5ac;
  puVar1[4] = 0x3727c5ac;
  uVar7 = 0xff000000;
  puVar3[3] = 0xff000000;
  puVar5[3] = 0x43160000;
  *(undefined4 *)(unsigned)0x8c4a9c70 = uVar2;
  puVar3[6] = uVar6;
  puVar5[6] = uVar7;
  puVar1 = 0x8c4a9c7c;
  *(undefined4 *)(unsigned)0x8c4a9c7c = 0x440c0000;
  *(undefined4 *)(unsigned)0x8c4a9c80 = uVar4;
  puVar5[9] = uVar6;
  *(undefined4 *)(unsigned)0x8c4a9c88 = uVar7;
  *(undefined4 *)(unsigned)0x8c4a9d5c = puVar1[-6];
  *(undefined4 *)(unsigned)0x8c4a9d58 = 0x1000000;
  return 0;
}

__asm__(".globl _FUN_8c20828c\n.set _FUN_8c20828c, _FUN_8c20828c_def\n");
