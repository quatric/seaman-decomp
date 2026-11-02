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
int FUN_8c115ed8_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c115ed8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(unsigned)(uint)ar5[1];
  piVar3 = (int *)(unsigned)(uint)ar5[1];
  piVar2 = ar5;
  while (piVar1 = piVar3, iVar4 < 2) {
    piVar3 = (int *)(unsigned)piVar1[1];
    piVar2 = piVar1;
    iVar4 = *(int *)(unsigned)piVar1[1];
  }
  iVar4 = (int)0x114;
  *piVar1 = *piVar1 + -1;
  piVar2[1] = *(int *)(unsigned)(iVar4 + ar4);
  *(unsigned *)(unsigned)(iVar4 + ar4) = ar5;
  return iVar4;
}

__asm__(".globl _FUN_8c115ed8\n.set _FUN_8c115ed8, _FUN_8c115ed8_def\n");
