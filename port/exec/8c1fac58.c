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
uint FUN_8c1fac58_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fac58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  int *piVar2;
  uint uVar3;
  byte *pbVar4;
  
  piVar2 = 0x8c475ed0;
  piVar1 = 0x8c475ed4;
  uVar3 = *(undefined4 *)(unsigned)0x8c475ed8;
  if (uVar3 == 0) {
    do {
    } while ((*(ushort *)(unsigned)(*(undefined4 *)(unsigned)0x8c475ed4 + 0x10) & 0x20) != 0x20);
    *(undefined1 *)(unsigned)(*(undefined4 *)(unsigned)0x8c475ed4 + 0xc) = (undefined1)ar4;
    *(ushort *)(unsigned)(*piVar1 + 0x10) = *(ushort *)(unsigned)(*piVar1 + 0x10) & (ushort)0xffdf;
    *(ushort *)(unsigned)(*piVar1 + 0x10) = *(ushort *)(unsigned)(*piVar1 + 0x10) & (ushort)0xffbf;
    do {
    } while ((*(ushort *)(unsigned)(*piVar1 + 0x10) & 0x40) != 0x40);
    uVar3 = 0x40;
  }
  else if (uVar3 == 1) {
    do {
    } while ((*(byte *)(unsigned)(*(undefined4 *)(unsigned)0x8c475ed0 + 0x10) & 0x80) != 0x80);
    *(undefined1 *)(unsigned)(*(undefined4 *)(unsigned)0x8c475ed0 + 0xc) = (undefined1)ar4;
    pbVar4 = (byte *)(unsigned)(*piVar2 + 0x10);
    *pbVar4 = *pbVar4 & 0x7f;
    do {
      uVar3 = *(byte *)(unsigned)(*piVar2 + 0x10) & 4;
    } while (uVar3 != 4);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c1fac58\n.set _FUN_8c1fac58, _FUN_8c1fac58_def\n");
