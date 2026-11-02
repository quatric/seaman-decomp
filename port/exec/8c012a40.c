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
char * FUN_8c012a40_def(char *ar4,ushort *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c012a40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  
  pcVar1 = ar4 + 2;
  iVar4 = 8;
  do {
    uVar2 = -iVar4;
    if ((int)uVar2 < 0) {
      cVar3 = (char)(*ar5 >> (~uVar2 & 0x1f) + 1);
    }
    else {
      cVar3 = (char)*ar5 << (uVar2 & 0x1f);
    }
    *ar4 = cVar3;
    ar4 = ar4 + 1;
    iVar4 = iVar4 + -8;
  } while (ar4 < pcVar1);
  return pcVar1;
}

__asm__(".globl _FUN_8c012a40\n.set _FUN_8c012a40, _FUN_8c012a40_def\n");
