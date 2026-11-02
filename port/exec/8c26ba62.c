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
undefined4 * FUN_8c26ba62_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26ba62";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(unsigned)(ar4 + 0xc);
  *(int *)(unsigned)(ar4 + 0x14) = iVar5;
  for (iVar3 = 0; iVar3 < *(int *)(unsigned)(ar4 + 0x10) + -1; iVar3 = iVar3 + 1) {
    piVar1 = (int *)(unsigned)(iVar3 * 0x10 + iVar5);
    *piVar1 = (iVar3 + 1) * 0x10 + iVar5;
    piVar1[2] = 0;
    piVar1[3] = 0;
  }
  puVar2 = (undefined4 *)(unsigned)(iVar3 * 0x10 + iVar5);
  puVar4 = (undefined4 *)(unsigned)(ar4 + 0x18);
  *puVar2 = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  } while (puVar4 < (undefined4 *)(unsigned)(ar4 + 0x28));
  return puVar2;
}

__asm__(".globl _FUN_8c26ba62\n.set _FUN_8c26ba62, _FUN_8c26ba62_def\n");
