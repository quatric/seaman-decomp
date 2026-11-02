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
int * FUN_8c11b5a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11b5a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *ar5_00;
  
  iVar6 = *(int *)(unsigned)(ar4 + 0x54);
  uVar4 = 1;
  if (1 < *(ushort *)(unsigned)(ar4 + 0x50)) {
    do {
      uVar4 = uVar4 + 1;
      iVar6 = *(int *)(unsigned)(iVar6 + 0x18);
    } while (uVar4 < *(ushort *)(unsigned)(ar4 + 0x50));
  }
  piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar6 + 8));
  ar5_00 = piVar5;
  if (*(int *)(unsigned)(0x1b4 + ar4) == 0) {
    sVar1 = *(short *)(unsigned)(0x1b0 + ar4);
    ar5_00 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x114 + ar4));
    if (ar5_00[1] == 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112fd8(ar4,ar5_00,ar6,ar7));
      *(undefined4 *)(unsigned)(0x114 + ar4) = uVar2;
    }
    else {
      *(int *)(unsigned)(0x114 + ar4) = ar5_00[1];
    }
    iVar3 = (int)0x12c;
    ar5_00[1] = (int)piVar5;
    *piVar5 = *piVar5 + 1;
    ar5_00[4] = *(int *)(unsigned)(iVar6 + 0xc);
    *ar5_00 = 0;
    iVar6 = (int)0x1ac;
    ar5_00[5] = *(int *)(unsigned)(iVar3 + ar4);
    ar5_00[3] = (int)sVar1 + *(int *)(unsigned)(iVar6 + ar4);
    ar5_00[5] = ar5_00[5] + 1;
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c11b5a0\n.set _FUN_8c11b5a0, _FUN_8c11b5a0_def\n");
