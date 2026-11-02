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
undefined4 FUN_8c1129e4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1129e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  uVar3 = *(uint *)(unsigned)(ar4 + 8);
  puVar4 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  uVar1 = 0;
  puVar2 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 0xc));
  if (uVar3 != 0) {
    do {
      uVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      uVar1 = uVar1 + 1;
      *puVar4 = uVar5;
      puVar4 = puVar4 + 1;
    } while (uVar1 < uVar3);
  }
  return ain0;
}

__asm__(".globl _FUN_8c1129e4\n.set _FUN_8c1129e4, _FUN_8c1129e4_def\n");
