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
undefined4 FUN_8c1f44cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f44cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 a4;
  int iVar6;
  
  puVar1 = ((void *)(unsigned)0x8c1f88e6);
  uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(ar4,ar5,ar6,ar7));
  piVar3 = 0x8c4727b4;
  puVar2 = ((void *)(unsigned)0x8c1f88f0);
  iVar5 = 0x186a0;
  do {
    if ((*(uint *)(unsigned)(*(int *)(unsigned)((int)0x10f4 + *piVar3) + 0x18) & 1) == 0) break;
    ar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,ar5,ar6,ar7));
    ar4 = uVar4;
    iVar6 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(uVar4,ar5,ar6,ar7));
  } while (iVar6 <= iVar5);
  iVar5 = (int)0x10f4;
  uVar4 = 0;
  *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar5 + *piVar3) + 0x18) = 0;
  *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar5 + *piVar3) + 0x14) = 0;
  *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar5 + *piVar3) + 0x10) = 0;
  *(undefined4 *)(unsigned)((int)0x8c + *(int *)(unsigned)(iVar5 + *piVar3)) = 0x6155404f;
  *(undefined4 *)(unsigned)((int)0x80 + *(int *)(unsigned)((int)0x10f4 + *piVar3)) = 0xc3500000;
  *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)0x10f4 + *piVar3) + 4) = 0xcff0000;
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(0,ar5,ar6,ar7));
  iVar5 = (int)0x4268;
  do {
    if ((*(uint *)(unsigned)(*(int *)(unsigned)((int)0x10f4 + *piVar3) + 0x18) & 1) == 0) {
      return 0;
    }
    ar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(uVar4,ar5,ar6,ar7));
    uVar4 = a4;
    iVar6 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(a4,ar5,ar6,ar7));
  } while (iVar6 <= iVar5);
  return 0;
}

__asm__(".globl _FUN_8c1f44cc\n.set _FUN_8c1f44cc, _FUN_8c1f44cc_def\n");
