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
uint FUN_8c112074_def(int *ar4,int ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112074";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int *a6;
  int *piVar4;
  bool bVar5;
  
  piVar4 = ar4 + ar5 * 2;
  bVar5 = true;
  for (a6 = ar4; a6 < piVar4; a6 = a6 + 2) {
    if (*(int *)(unsigned)(*(int *)(unsigned)(*a6 + 0x2c) + a6[1] * 4) != 0) {
      bVar5 = *(int *)(unsigned)(*(int *)(unsigned)(*a6 + 0x40) + a6[1] * 4) == *(int *)(unsigned)(*a6 + 0x3c);
      break;
    }
  }
  do {
    piVar1 = a6;
    a6 = piVar1 + 2;
    if (piVar4 <= a6) break;
  } while ((*(int *)(unsigned)(*(int *)(unsigned)(*a6 + 0x2c) + piVar1[3] * 4) == 0) ||
          (bVar5 == (*(int *)(unsigned)(*(int *)(unsigned)(*a6 + 0x40) + piVar1[3] * 4) == *(int *)(unsigned)(*a6 + 0x3c))));
  if (a6 == piVar4) {
    if (bVar5 == false) {
      for (; ar4 < piVar4; ar4 = ar4 + 2) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111fbe(*ar4,ar4[1],a6,ar7));
        *ar6 = uVar3;
        ar6 = ar6 + 1;
      }
    }
    else {
      for (; ar4 < piVar4; ar4 = ar4 + 2) {
        if ((*(int *)(unsigned)(*ar4 + 0x38) != 0) && (*(int *)(unsigned)(*(int *)(unsigned)(*ar4 + 0x2c) + ar4[1] * 4) != 0)) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111208(*ar4,ar4[1],0,ar7));
        }
      }
    }
    uVar2 = (uint)(bVar5 == false);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c112074\n.set _FUN_8c112074, _FUN_8c112074_def\n");
