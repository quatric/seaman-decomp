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
uint FUN_8c20d5b2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20d5b2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(unsigned)(ar4 + 0xc) * *(uint *)(unsigned)(ar4 + 0x10);
  if ((*(uint *)(unsigned)(ar4 + 0x18) & 1) != 0) {
    uVar2 = *(uint *)(unsigned)(ar4 + 0xc) >> 1;
    uVar3 = *(uint *)(unsigned)(ar4 + 0x10) >> 1;
    uVar1 = uVar3;
    if (uVar2 < uVar3) {
      uVar1 = uVar2;
    }
    for (; 1 < uVar1; uVar1 = uVar1 >> 1) {
      iVar5 = uVar2 * uVar3;
      uVar2 = uVar2 >> 1;
      uVar3 = uVar3 >> 1;
      uVar4 = uVar4 + iVar5;
    }
    if (uVar2 == uVar3) {
      iVar5 = uVar4 + 1;
    }
    else {
      iVar5 = uVar4 + uVar2 * uVar3;
    }
    if (*(int *)(unsigned)(ar4 + 8) == 0x28000000) {
      uVar4 = iVar5 + 0x2b;
    }
    else {
      uVar4 = iVar5 + 0xb;
    }
  }
  if (*(int *)(unsigned)(ar4 + 8) == 0x28000000) {
    if (uVar4 == 1) {
      uVar4 = 1;
    }
    else {
      uVar4 = uVar4 >> 1;
    }
  }
  return uVar4;
}

__asm__(".globl _FUN_8c20d5b2\n.set _FUN_8c20d5b2, _FUN_8c20d5b2_def\n");
