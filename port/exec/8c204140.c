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
uint FUN_8c204140_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c204140";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 2048; for (int i_ = 0; i_ < 2048; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(int *)(unsigned)(ar4 + 0xc) + *(int *)(unsigned)(ar4 + 0x10);
  uVar1 = (int)0x800 + *(int *)(unsigned)(ar4 + 0xc) & (int)(int)0xfffff800;
  if ((uint)(int)0x2b0 < ar5) {
    iVar3 = (int)(int)0xfffffd50;
    if (uVar1 - *(int *)(unsigned)(ar4 + 0xc) < (uint)(int)0x2b0) {
      uVar1 = uVar1 + (int)0x800;
      if (uVar2 < (uVar1 - *(int *)(unsigned)(ar4 + 0xc)) + ar5 + iVar3) {
        return 0xffffffff;
      }
    }
    else if (uVar2 < (uVar1 - *(int *)(unsigned)(ar4 + 0xc)) + ar5 + iVar3) {
      return 0xffffffff;
    }
    uVar1 = uVar1 + iVar3;
  }
  else if ((uVar1 < uVar2) && (uVar1 - *(int *)(unsigned)(ar4 + 0xc) < ar5)) {
    if (uVar2 - uVar1 < ar5) {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = *(uint *)(unsigned)(ar4 + 0xc);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c204140\n.set _FUN_8c204140, _FUN_8c204140_def\n");
