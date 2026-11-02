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
int FUN_8c1157c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1157c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(unsigned)(0x1ac + ar4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
  *(undefined2 *)(unsigned)(ar4 + 100) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x74) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x78) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x70) = 0;
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 4;
    uVar2 = uVar2 + 1;
    *(undefined4 *)(unsigned)(iVar1 + *(int *)(unsigned)(0xa8 + ar4)) = 0;
  } while (uVar2 <= *(uint *)(unsigned)(ar4 + 0x38));
  uVar2 = 0;
  if (*(int *)(unsigned)(0x144 + ar4) + *(int *)(unsigned)(0xb4 + ar4) != 0) {
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(0xac + ar4) + iVar1) = 0;
    } while (uVar2 < (uint)(*(int *)(unsigned)(0x144 + ar4) + *(int *)(unsigned)(0xb4 + ar4)));
  }
  iVar1 = 0xa0 + 0x18;
  puVar3 = (undefined4 *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0xa0 + ar4));
  uVar2 = 0;
  if (*(int *)(unsigned)(iVar1 + ar4) != 0) {
    do {
      iVar1 = (int)0xb8;
      uVar2 = uVar2 + 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (uVar2 < *(uint *)(unsigned)(iVar1 + ar4));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1157c0\n.set _FUN_8c1157c0, _FUN_8c1157c0_def\n");
