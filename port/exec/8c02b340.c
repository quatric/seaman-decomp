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
int FUN_8c02b340_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b340";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 ar5_00;
  
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4,ar5,ar6,ar7));
  ar5_00 = 2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar2,2,ar6,ar7));
  bVar1 = (byte)uVar2 & 1;
  *(byte *)(unsigned)(ar4 + 0x14) = *(byte *)(unsigned)(ar4 + 0x14) & 0xfe | bVar1;
  *(byte *)(unsigned)(ar4 + 0x14) = *(byte *)(unsigned)(ar4 + 0x14) & 0xfd | bVar1 << 1;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4,ar5_00,ar6,ar7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar2,0x96,ar6,ar7));
  return iVar3 + 0x1e;
}

__asm__(".globl _FUN_8c02b340\n.set _FUN_8c02b340, _FUN_8c02b340_def\n");
