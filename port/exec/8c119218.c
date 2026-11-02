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
uint FUN_8c119218_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c119218";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  uint *ar6_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *a6;
  undefined4 a7;
  int a4;
  int iVar4;
  int *unaff_r14 = 0;
  bool bVar5;
  
  iVar4 = *(int *)(unsigned)(in_r0 + (int)unaff_r14);
  a4 = *unaff_r14;
  uVar2 = ar5;
  if (ar5 < (unaff_r14[0x10] - *(int *)(unsigned)((int)0x1b4 + (int)unaff_r14)) - 1U) {
    do {
      uVar2 = uVar2 + 1;
      iVar4 = *(int *)(unsigned)(iVar4 + 0x18);
    } while (uVar2 < (unaff_r14[0x10] - *(int *)(unsigned)((int)0x1b4 + (int)unaff_r14)) - 1U);
  }
  uVar2 = unaff_r14[0x10] + *(int *)(unsigned)((int)0x1b4 + (int)unaff_r14) * -2;
  for (iVar3 = *(int *)(unsigned)(iVar4 + 8); iVar3 != 0; iVar3 = *(int *)(unsigned)(iVar3 + 4)) {
    if ((*(int *)(unsigned)(iVar3 + 0x10) != 0) &&
       (iVar1 = *(int *)(unsigned)(iVar3 + 0x10) - unaff_r14[0x12],
       (uint)((int)(iVar1 + (uint)(iVar1 < 0)) >> 1) < uVar2)) {
      ar5 = ar5 + 1;
    }
  }
  ar6_00 = (uint *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,(ar5 - 1) * 2 + 8,ar6,ar7));
  *ar6_00 = ar5;
  iVar3 = ar5 - 1;
  for (iVar4 = *(int *)(unsigned)(iVar4 + 8); iVar4 != 0; iVar4 = *(int *)(unsigned)(iVar4 + 4)) {
    if ((*(int *)(unsigned)(iVar4 + 0x10) != 0) &&
       (iVar1 = *(int *)(unsigned)(iVar4 + 0x10) - unaff_r14[0x12],
       (uint)((int)(iVar1 + (uint)(iVar1 < 0)) >> 1) < uVar2)) {
      iVar1 = iVar3 * 2;
      iVar3 = iVar3 + -1;
      *(undefined2 *)(unsigned)((int)ar6_00 + iVar1 + 4) = *((undefined2 *)(unsigned long)*(unsigned *)(unsigned)(iVar4 + 0x10));
    }
  }
  a7 = 1;
  a6 = ar6_00;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(unaff_r14,0xc,ar6_00,1));
  bVar5 = (uVar2 & 0xff) == 0;
  if (bVar5) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,ar6_00,a6,a7));
  }
  return (uint)!bVar5;
}

__asm__(".globl _FUN_8c119218\n.set _FUN_8c119218, _FUN_8c119218_def\n");
