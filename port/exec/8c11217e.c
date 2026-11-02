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
uint FUN_8c11217e_def(int *ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11217e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  uint uVar2;
  int unaff_r13 = 0;
  int *piVar3;
  bool bVar4;
  
  piVar3 = (int *)(unsigned)(unaff_r13 + (int)ar6);
  bVar4 = true;
  for (; ar6 < piVar3; ar6 = ar6 + 2) {
    if (*(int *)(unsigned)(*(int *)(unsigned)(*ar6 + 0x2c) + ar6[1] * 4) != 0) {
      bVar4 = *(int *)(unsigned)(*(int *)(unsigned)(*ar6 + 0x40) + ar6[1] * 4) == *(int *)(unsigned)(*ar6 + 0x3c);
      break;
    }
  }
  do {
    piVar1 = ar6;
    ar6 = piVar1 + 2;
    if (piVar3 <= ar6) break;
  } while ((*(int *)(unsigned)(*(int *)(unsigned)(*ar6 + 0x2c) + piVar1[3] * 4) == 0) ||
          (bVar4 == (*(int *)(unsigned)(*(int *)(unsigned)(*ar6 + 0x40) + piVar1[3] * 4) == *(int *)(unsigned)(*ar6 + 0x3c))));
  if (ar6 == piVar3) {
    if (bVar4 != false) {
      for (; ar4 < piVar3; ar4 = ar4 + 2) {
        if ((*(int *)(unsigned)(*ar4 + 0x38) != 0) && (*(int *)(unsigned)(*(int *)(unsigned)(*ar4 + 0x2c) + ar4[1] * 4) != 0)) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111208(*ar4,ar4[1],0,ar7));
        }
      }
    }
    uVar2 = (uint)(bVar4 == false);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c11217e\n.set _FUN_8c11217e, _FUN_8c11217e_def\n");
