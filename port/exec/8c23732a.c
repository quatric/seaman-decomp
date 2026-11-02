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
uint FUN_8c23732a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23732a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = ar4 * 0x44;
  puVar1 = (undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar2);
  (*(undefined4 *)(unsigned)(unsigned)0x8c277b10) = *puVar1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c277b14) = puVar1[1];
  (*(undefined4 *)(unsigned)(unsigned)0x8c4ab240) = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab240) & 0xffffffc0 | puVar1[2] & 0x3f;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4ab244) = *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar2 + 0xc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c277b1c) = *(uint *)(unsigned)(iVar2 + (*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + 0x18) >> 0x10;
  return (*(undefined4 *)(unsigned)(unsigned)0x8c277b1c);
}

__asm__(".globl _FUN_8c23732a\n.set _FUN_8c23732a, _FUN_8c23732a_def\n");
