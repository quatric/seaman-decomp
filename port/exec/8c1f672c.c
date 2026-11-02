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
int * FUN_8c1f672c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f672c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint ain0;
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int *piVar2;
  byte in_IMASK = 0;
  byte in_S = 0;
  byte in_T = 0;
  undefined4 in_PR = 0;
  
  ain0 = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  piVar2 = (int *)(unsigned)((undefined1 *)(unsigned)0x8c472da0);
  iVar1 = 0;
  do {
    if (*piVar2 == 0) break;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x35f;
  } while (iVar1 < 2);
  if (iVar1 == 2) {
    piVar2 = (int *)(unsigned)0x0;
  }
  else {
    piVar2[0x82] = ar4;
    piVar2[0x83] = 0;
    piVar2[0x81] = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), memset(piVar2 + 0x84,0,0xb68,ar7));
    ar6_00 = 0x100;
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), memset(piVar2 + 0x41,0,0x100,ar7));
    ({ unsigned long ri0_ = (unsigned long)(ain0); unsigned long ri1_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c01422c(piVar2 + 0x41,ar5_00,ar6_00,ar7); });
    *piVar2 = 1;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4748a0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4748a0) + 1;
  }
  return piVar2;
}

__asm__(".globl _FUN_8c1f672c\n.set _FUN_8c1f672c, _FUN_8c1f672c_def\n");
