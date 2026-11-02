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
int FUN_8c115778_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c115778";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)(unsigned)(0x1ac + ar4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
  iVar1 = 100;
  *(undefined2 *)(unsigned)(ar4 + 100) = 0;
  uVar2 = 0;
  if ((*(uint *)(unsigned)(ar4 + 0x38) & 0x7fffffff) != 0) {
    do {
      uVar3 = uVar2 + 1;
      iVar1 = *(int *)(unsigned)(0xb0 + ar4);
      *(undefined4 *)(unsigned)(iVar1 + uVar2 * 4) = 0;
      uVar2 = uVar3;
    } while (uVar3 < (uint)(*(int *)(unsigned)(ar4 + 0x38) << 1));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c115778\n.set _FUN_8c115778, _FUN_8c115778_def\n");
