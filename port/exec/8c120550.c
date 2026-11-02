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
int FUN_8c120550_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c120550";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  short *psVar2;
  
  iVar1 = *(int *)(unsigned)(*ar4 + 0x34);
  for (psVar2 = ((short *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + (uint)*(byte *)(unsigned)(ar4 + 1) * 4));
      (*psVar2 != (short)ar5 && (*psVar2 != 0)); psVar2 = psVar2 + 4) {
  }
  if (*psVar2 != 0) {
    iVar1 = 4;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c120550\n.set _FUN_8c120550, _FUN_8c120550_def\n");
