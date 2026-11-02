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
undefined4 FUN_8c11bccc_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11bccc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int in_r0 = (int)(unsigned long)vin0;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int ar6_00;
  int unaff_r13 = 0;
  int a4;
  int *piVar5;
  int unaff_r14 = 0;
  
  puVar1 = ((void *)(unsigned)0x8c013ef4);
  iVar4 = *(int *)(unsigned)(in_r0 + unaff_r14);
  ar6_00 = iVar4 * 4;
  *ar4 = (uint)*(ushort *)(unsigned)(unaff_r14 + 0x28);
  ar4[1] = (uint)*(ushort *)(unsigned)(unaff_r14 + 0x2a);
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r13,*(undefined4 *)(unsigned)(unaff_r14 + 0x2c),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r13 + ar6_00,*(undefined4 *)(unsigned)(unaff_r14 + 0x34),ar6_00,ar7));
  a4 = unaff_r13 + ar6_00 + ar6_00;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(a4,*(undefined4 *)(unsigned)(unaff_r14 + 0x38),ar6_00,ar7));
  iVar3 = *(int *)(unsigned)(unaff_r14 + 0x44) - *(int *)(unsigned)(unaff_r14 + 0x3c);
  piVar5 = (int *)(unsigned)(a4 + ar6_00);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  *piVar5 = iVar3 >> 2;
  iVar3 = *(int *)(unsigned)(unaff_r14 + 0x48) - *(int *)(unsigned)(unaff_r14 + 0x3c);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  piVar5[1] = iVar3 >> 2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(piVar5 + 2,*(undefined4 *)(unsigned)(unaff_r14 + 0x3c),
                            iVar4 * (*(ushort *)(unsigned)(unaff_r14 + 0x4c) + 1) * 4,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c11bccc\n.set _FUN_8c11bccc, _FUN_8c11bccc_def\n");
