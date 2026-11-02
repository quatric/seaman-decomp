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
undefined4 FUN_8c25dac0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25dac0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)0x7ff;
  *(undefined4 *)(unsigned)0x8c4a9e60 = (*(uint *)(fr0_ + 0x00000058)) & uVar2 | ((*(uint *)(fr0_ + 0x00000054)) & uVar2) << 0x10;
  *(undefined4 *)(unsigned)0x8c4a9e64 = (*(uint *)(fr0_ + 0x00000060)) & uVar2 | ((*(uint *)(fr0_ + 0x0000005c)) & uVar2) << 0x10;
  *(undefined4 *)(unsigned)0x8c4a9e68 =
       (*(uint *)(fr0_ + 0x00000048)) & 0xf | ((*(uint *)(fr0_ + 0x0000004c)) & 0x1f) << 4 | ((*(uint *)(fr0_ + 0x00000050)) & 0xf) << 9;
  *(undefined4 *)(unsigned)0x8c4a9bec = (*(uint *)(fr0_ + 0x00000000));
  *(undefined4 *)(unsigned)0x8c4a9bf0 = (*(uint *)(fr0_ + 0x00000004));
  uVar2 = (uint)0x3ff;
  uVar3 = ((*(uint *)(fr0_ + 0x00000008)) & uVar2) << 0x14;
  if (*(undefined4 *)(unsigned)0x8c4a9c00 < 1) {
    *(undefined4 *)(unsigned)0x8c4a9e6c = (*(uint *)(fr0_ + 0x00000000)) & uVar2 | ((*(uint *)(fr0_ + 0x00000004)) & uVar2) << 10 | uVar3;
  }
  else {
    *(undefined4 *)(unsigned)0x8c4a9e6c =
         (*(uint *)(fr0_ + 0x00000000)) & uVar2 | ((*(uint *)(fr0_ + 0x00000004)) - *(undefined4 *)(unsigned)0x8c4a9c00 & uVar2) << 10 | uVar3;
  }
  *(undefined4 *)(unsigned)0x8c4a9ea8 = (*(uint *)(fr0_ + 0x00000014)) & 0xff | ((*(uint *)(fr0_ + 0x00000018)) & 0xff) << 8;
  puVar1 = 0x8c4a9eac;
  *(undefined4 *)(unsigned)0x8c4a9eac =
       (*(uint *)(fr0_ + 0x00000010)) & 0xffff | ((*(uint *)(fr0_ + 0x0000000c)) & 1) << 0x10 |
       ((*(uint *)(fr0_ + 0x0000001c)) & 1) << 0x12;
  puVar1[-0xf] = (*(uint *)(fr0_ + 0x00000044)) & (int)0x1ff;
  *(undefined4 *)(unsigned)0x8c4a9e78 =
       (*(uint *)(fr0_ + 0x00000030)) & 7 | ((*(uint *)(fr0_ + 0x0000002c)) & 1) << 3 | ((*(uint *)(fr0_ + 0x00000034)) & 0xff) << 8 |
       ((*(uint *)(fr0_ + 0x00000038)) & 0xff) << 0x10;
  *(undefined4 *)(unsigned)0x8c4a9e74 =
       (*(uint *)(fr0_ + 0x00000020)) & 1 | ((*(uint *)(fr0_ + 0x00000028)) & 1) << 1 | ((*(uint *)(fr0_ + 0x0000003c)) & 3) << 2 |
       ((*(uint *)(fr0_ + 0x00000040)) & 7) << 4 | (uint)(*(byte *)(fr0_ + 0x00000070)) << 8 |
       ((*(uint *)(fr0_ + 0x00000068)) & 0x1f) << 0x10 | ((*(uint *)(fr0_ + 0x00000064)) & 1) << 0x16 |
       ((*(uint *)(fr0_ + 0x0000006c)) & 1) << 0x17;
  return 0x6c;
}

__asm__(".globl _FUN_8c25dac0\n.set _FUN_8c25dac0, _FUN_8c25dac0_def\n");
