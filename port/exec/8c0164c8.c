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
int FUN_8c0164c8_def(int ar4,undefined2 *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0164c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  
  if (ar6 == 1) {
    puVar2 = ((undefined2 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8));
    *puVar2 = *ar5;
    sVar1 = ar5[1];
    puVar2[1] = sVar1;
    return (int)sVar1;
  }
  if (ar6 == 2) {
    puVar2 = ((undefined2 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8));
    *puVar2 = *ar5;
    puVar2[1] = ar5[1];
    iVar3 = *(int *)(unsigned)(ar4 + 8);
    *(undefined2 *)(unsigned)(iVar3 + 4) = ar5[2];
    sVar1 = ar5[3];
    *(short *)(unsigned)(iVar3 + 6) = sVar1;
    return (int)sVar1;
  }
  *(unsigned *)(unsigned)(ar4 + 8) = ar5;
  return ar6;
}

__asm__(".globl _FUN_8c0164c8\n.set _FUN_8c0164c8, _FUN_8c0164c8_def\n");
