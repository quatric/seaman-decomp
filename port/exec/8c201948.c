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
uint FUN_8c201948_def(char *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c201948";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = 0;
  for (uVar5 = 0; uVar5 < ar5; uVar5 = uVar5 + 1) {
    cVar1 = *ar4;
    ar4 = ar4 + 1;
    iVar4 = 8;
    uVar3 = uVar2 ^ (int)cVar1 << 8;
    do {
      uVar2 = uVar3 << 1;
      if ((uVar3 & 0x8000) != 0) {
        uVar2 = uVar2 ^ (int)0x1021;
      }
      iVar4 = iVar4 + -1;
      uVar3 = uVar2;
    } while (iVar4 != 0);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c201948\n.set _FUN_8c201948, _FUN_8c201948_def\n");
