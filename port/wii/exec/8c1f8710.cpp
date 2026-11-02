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
uint FUN_8c1f8710_def(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f8710");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  
  uVar2 = 0;
  pbVar4 = ar4 + 8;
  do {
    bVar1 = *ar4;
    ar4 = ar4 + 1;
    uVar3 = uVar2;
    if ((((undefined1 *)(unsigned)0x8c26c9f0))[bVar1 & 0xf] == (((undefined1 *)(unsigned)0x8c26c9f0))[(int)(uint)bVar1 >> 4]) {
      uVar3 = uVar2 | 1;
    }
    uVar2 = uVar3 << 1;
  } while (ar4 < pbVar4);
  return uVar3 & 0x7fffffff;
}

__asm__(".globl FUN_8c1f8710\n.set FUN_8c1f8710, FUN_8c1f8710_def\n");

}
