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
undefined4 FUN_8c25dac0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25dac0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<uint>* puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)0x7ff;
  *(le<undefined4>* )(unsigned)0x8c4a9e60 = (*(le<uint>* )(fr0_ + 0x00000058)) & uVar2 | ((*(le<uint>* )(fr0_ + 0x00000054)) & uVar2) << 0x10;
  *(le<undefined4>* )(unsigned)0x8c4a9e64 = (*(le<uint>* )(fr0_ + 0x00000060)) & uVar2 | ((*(le<uint>* )(fr0_ + 0x0000005c)) & uVar2) << 0x10;
  *(le<undefined4>* )(unsigned)0x8c4a9e68 =
       (*(le<uint>* )(fr0_ + 0x00000048)) & 0xf | ((*(le<uint>* )(fr0_ + 0x0000004c)) & 0x1f) << 4 | ((*(le<uint>* )(fr0_ + 0x00000050)) & 0xf) << 9;
  *(le<undefined4>* )(unsigned)0x8c4a9bec = (*(le<uint>* )(fr0_ + 0x00000000));
  *(le<undefined4>* )(unsigned)0x8c4a9bf0 = (*(le<uint>* )(fr0_ + 0x00000004));
  uVar2 = (uint)0x3ff;
  uVar3 = ((*(le<uint>* )(fr0_ + 0x00000008)) & uVar2) << 0x14;
  if (*(le<undefined4>* )(unsigned)0x8c4a9c00 < 1) {
    *(le<undefined4>* )(unsigned)0x8c4a9e6c = (*(le<uint>* )(fr0_ + 0x00000000)) & uVar2 | ((*(le<uint>* )(fr0_ + 0x00000004)) & uVar2) << 10 | uVar3;
  }
  else {
    *(le<undefined4>* )(unsigned)0x8c4a9e6c =
         (*(le<uint>* )(fr0_ + 0x00000000)) & uVar2 | ((*(le<uint>* )(fr0_ + 0x00000004)) - *(le<undefined4>* )(unsigned)0x8c4a9c00 & uVar2) << 10 | uVar3;
  }
  *(le<undefined4>* )(unsigned)0x8c4a9ea8 = (*(le<uint>* )(fr0_ + 0x00000014)) & 0xff | ((*(le<uint>* )(fr0_ + 0x00000018)) & 0xff) << 8;
  puVar1 = 0x8c4a9eac;
  *(le<undefined4>* )(unsigned)0x8c4a9eac =
       (*(le<uint>* )(fr0_ + 0x00000010)) & 0xffff | ((*(le<uint>* )(fr0_ + 0x0000000c)) & 1) << 0x10 |
       ((*(le<uint>* )(fr0_ + 0x0000001c)) & 1) << 0x12;
  puVar1[-0xf] = (*(le<uint>* )(fr0_ + 0x00000044)) & (int)0x1ff;
  *(le<undefined4>* )(unsigned)0x8c4a9e78 =
       (*(le<uint>* )(fr0_ + 0x00000030)) & 7 | ((*(le<uint>* )(fr0_ + 0x0000002c)) & 1) << 3 | ((*(le<uint>* )(fr0_ + 0x00000034)) & 0xff) << 8 |
       ((*(le<uint>* )(fr0_ + 0x00000038)) & 0xff) << 0x10;
  *(le<undefined4>* )(unsigned)0x8c4a9e74 =
       (*(le<uint>* )(fr0_ + 0x00000020)) & 1 | ((*(le<uint>* )(fr0_ + 0x00000028)) & 1) << 1 | ((*(le<uint>* )(fr0_ + 0x0000003c)) & 3) << 2 |
       ((*(le<uint>* )(fr0_ + 0x00000040)) & 7) << 4 | (uint)(*(byte *)(fr0_ + 0x00000070)) << 8 |
       ((*(le<uint>* )(fr0_ + 0x00000068)) & 0x1f) << 0x10 | ((*(le<uint>* )(fr0_ + 0x00000064)) & 1) << 0x16 |
       ((*(le<uint>* )(fr0_ + 0x0000006c)) & 1) << 0x17;
  return 0x6c;
}

__asm__(".globl FUN_8c25dac0\n.set FUN_8c25dac0, FUN_8c25dac0_def\n");

}
