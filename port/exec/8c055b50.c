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
undefined4 FUN_8c055b50_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c055b50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint extraout_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c032160(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x2a4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x298) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022d04(ar4 + 0x2a8,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x29c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x288) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
  *(undefined4 *)(unsigned)(ar4 + 700) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)extraout_fr1;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030eb8(ar4 + 0x1fc,ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x324) == 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x334) = 0;
  return 0x334;
}

__asm__(".globl _FUN_8c055b50\n.set _FUN_8c055b50, _FUN_8c055b50_def\n");
