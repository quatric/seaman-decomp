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
int FUN_8c1fb77a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fb77a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint a4;
  
  a4 = ar5 * ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb4b8(a4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uVar3 = 0;
    if (a4 != 0) {
      do {
        puVar2 = (undefined4 *)(unsigned)(iVar1 + uVar3);
        uVar3 = uVar3 + 4;
        *puVar2 = 0;
      } while (uVar3 < a4);
    }
    uVar3 = uVar3 - 4;
    puVar4 = (undefined1 *)(unsigned)(iVar1 + uVar3);
    for (; uVar3 < (a4 & 3); uVar3 = uVar3 + 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1fb77a\n.set _FUN_8c1fb77a, _FUN_8c1fb77a_def\n");
