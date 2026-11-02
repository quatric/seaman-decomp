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
undefined4 FUN_8c019384_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c019384";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined8 in_dr4 = 0;
  undefined4 in_fr7 = 0;
  undefined4 in_fr6 = 0;
  undefined4 in_fr9 = 0;
  undefined4 in_fr8 = 0;
  undefined4 in_fr11 = 0;
  float in_fr10 = 0;
  int iVar2;
  
  uVar1 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  *(undefined4 *)(unsigned)(ar4 + 0x60) = uVar1;
  *(undefined4 *)(unsigned)(ar4 + 0x44) = uVar1;
  *(int *)(unsigned)(ar4 + 100) = (int)in_dr4;
  *(int *)(unsigned)(ar4 + 0x48) = (int)in_dr4;
  *(undefined4 *)(unsigned)(ar4 + 0x68) = in_fr6;
  *(undefined4 *)(unsigned)(ar4 + 0x4c) = in_fr6;
  *(undefined4 *)(unsigned)(ar4 + 0x6c) = in_fr7;
  *(undefined4 *)(unsigned)(ar4 + 0x50) = in_fr7;
  *(undefined4 *)(unsigned)(ar4 + 0x70) = in_fr8;
  *(undefined4 *)(unsigned)(ar4 + 0x54) = in_fr8;
  *(undefined4 *)(unsigned)(ar4 + 0x74) = in_fr9;
  *(undefined4 *)(unsigned)(ar4 + 0x58) = in_fr9;
  iVar2 = (int)((in_fr10 * 65536.0) / 360.0);
  *(int *)(unsigned)(ar4 + 0x78) = iVar2;
  *(int *)(unsigned)(ar4 + 0x5c) = iVar2;
  *(undefined4 *)(unsigned)(ar4 + 0x7c) = in_fr11;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0194c0(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c019384\n.set _FUN_8c019384, _FUN_8c019384_def\n");
