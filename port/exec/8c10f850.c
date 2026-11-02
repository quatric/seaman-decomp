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
undefined4 FUN_8c10f850_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f850";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a7;
  uint uVar1;
  int a5;
  short sVar2;
  bool bVar4;
  uint uVar3;
  
  a7 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0x90 + ar4) + 0x6c))))(*(int *)(unsigned)(0x90 + ar4),ar5,ar6,ar7));
  a5 = 0;
  uVar3 = 0;
  sVar2 = 0;
  uVar1 = 0;
  if (*(int *)(unsigned)(ar4 + 0x78) != 0) {
    do {
      if ((*(uint *)(unsigned)(uVar1 * 8 + a7) & ar5) != 0) {
        a5 = a5 + 1;
        uVar3 = uVar1;
      }
      sVar2 = (short)uVar3;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(unsigned)(ar4 + 0x78));
  }
  bVar4 = a5 == 1;
  if (bVar4 != (bool)*(char *)(unsigned)(ar4 + 0x32)) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10fa6c(ar4,a5,0,a7));
  }
  if ((bVar4) && (*(short *)(unsigned)(ar4 + 0x30) = sVar2 + 1, *(int *)(unsigned)(ar4 + 0x28) == 0)) {
    *(undefined4 *)(unsigned)(ar4 + 0x28) = 1;
  }
  *(bool *)(unsigned)(ar4 + 0x32) = bVar4;
  *(uint *)(unsigned)(ar4 + 0x2c) = ar5;
  return 0x32;
}

__asm__(".globl _FUN_8c10f850\n.set _FUN_8c10f850, _FUN_8c10f850_def\n");
