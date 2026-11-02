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
undefined4 FUN_8c1f2cce_def(undefined4 ar4,int *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f2cce";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  int a6;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = ar5 + 4;
  iVar3 = *ar5;
  a6 = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f2b42(ar4,ar5,ar6,ar7));
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      if ((uint)*(byte *)(unsigned)((int)piVar5 + 9) == (uVar1 & 0xff)) {
        if (ar6 == 1) {
          iVar2 = func_0x8c1f2ac0(ar4,(int)piVar5 + 10,a6,ar7);
        }
        else {
          iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f2ae2(ar4,(int)piVar5 + 10,a6,ar7));
        }
        if (iVar2 == 1) {
          return iVar4 + 1;
        }
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 0xb;
    } while (iVar4 < iVar3);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f2cce\n.set _FUN_8c1f2cce, _FUN_8c1f2cce_def\n");
