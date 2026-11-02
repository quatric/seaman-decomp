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
uint FUN_8c1112e2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1112e2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  uVar2 = 0;
  uVar3 = 0;
  if (*(char *)(unsigned)(ar4 + 8) != '\0') {
    do {
      if ((*(int *)(unsigned)(*piVar4 + 0x38) != 0) &&
         (*(int *)(unsigned)(*(int *)(unsigned)(*piVar4 + 0x2c) + piVar4[1] * 4) != 0)) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111208(*piVar4,piVar4[1],0,ar7));
        uVar2 = uVar2 | uVar1;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 < *(byte *)(unsigned)(ar4 + 8));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1112e2\n.set _FUN_8c1112e2, _FUN_8c1112e2_def\n");
