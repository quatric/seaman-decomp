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
undefined4 FUN_8c201994_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c201994";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  int ar4_00;
  undefined *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (int)0x130 + 0x8c47e6f0;
  uVar4 = 0x8c47e6f0;
  do {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2020f8(uVar4,ar5,ar6,ar7));
    uVar4 = uVar4 + 0x4c;
  } while (uVar4 < uVar3);
  uVar3 = (int)0x100 + 0x8c47e820;
  uVar4 = 0x8c47e820;
  do {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c202116(uVar4,ar5,ar6,ar7));
    uVar4 = uVar4 + 0x10;
  } while (uVar4 < uVar3);
  ar4_00 = (int)0xa00;
  ar7_00 = 0;
  ar6_00 = 0x20;
  ar5_00 = ((void *)(unsigned)0x8c201b10);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fa244(ar4_00,((void *)(unsigned)0x8c201b10),0x20,0));
  puVar1 = ((void *)(unsigned)0x8c2029fc);
  *(undefined4 *)(unsigned)0x8c47e920 = uVar2;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4_00,ar5_00,ar6_00,ar7_00));
  return 0;
}

__asm__(".globl _FUN_8c201994\n.set _FUN_8c201994, _FUN_8c201994_def\n");
