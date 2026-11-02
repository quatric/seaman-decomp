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
uint FUN_8c012d5c_def(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c012d5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar2 = 0;
  iVar3 = 0;
  pbVar1 = ar4;
  if (0 < ar5) {
    do {
      bVar4 = uVar2 != 0;
      uVar2 = *ar4 & 1;
      *ar4 = *ar4 >> 1;
      if (bVar4) {
        *pbVar1 = *pbVar1 | 0x80;
      }
      iVar3 = iVar3 + 1;
      pbVar1 = pbVar1 + 1;
      ar4 = ar4 + 1;
    } while (iVar3 < ar5);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c012d5c\n.set _FUN_8c012d5c, _FUN_8c012d5c_def\n");
