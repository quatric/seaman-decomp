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
undefined4 FUN_8c115980_def(undefined4 ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c115980";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int in_r0 = (int)(unsigned long)vin0;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *unaff_r14 = 0;
  
  puVar1 = ((void *)(unsigned)0x8c1133f6);
  uVar6 = *ar5;
  uVar9 = ar5[1];
  iVar8 = *unaff_r14;
  uVar5 = ar5[2];
  uVar7 = ar5[3];
  *(uint *)(unsigned)(in_r0 + (int)unaff_r14) = uVar9;
  unaff_r14[0xe] = uVar6 + 2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14,ar5,ar6,ar7));
  if ((uVar2 & 0xff) == 0) {
    iVar4 = (uVar9 - 1) * 2 + uVar6 + 2;
    unaff_r14[0x10] = iVar4;
    iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar8 + 0x10))))(iVar8,iVar4 * 2,ar6,ar7));
    unaff_r14[0x12] = iVar4;
    if (unaff_r14[0x12] == 0) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(2,vr5,vr6,vr7));
      return uVar3;
    }
    if (unaff_r14[0x13] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar8 + 0x18))))(iVar8,unaff_r14[0x13],ar6,ar7));
      unaff_r14[0x13] = 0;
    }
    iVar8 = 0;
    uVar2 = 0;
    if (uVar6 != 0) {
      do {
        iVar4 = uVar2 * 2;
        uVar2 = uVar2 + 1;
        *(undefined2 *)(unsigned)(iVar8 * 2 + unaff_r14[0x12]) = *(undefined2 *)(unsigned)(iVar4 + uVar5);
        iVar8 = iVar8 + 1;
      } while (uVar2 < uVar6);
    }
    uVar2 = 0;
    if (uVar9 != 0) {
      do {
        iVar4 = uVar2 * 2;
        uVar2 = uVar2 + 1;
        *(undefined2 *)(unsigned)(iVar8 * 2 + unaff_r14[0x12]) = *(undefined2 *)(unsigned)(iVar4 + uVar7);
        iVar8 = iVar8 + 1;
      } while (uVar2 < uVar9);
      uVar2 = 0;
      if (uVar9 != 0) {
        do {
          iVar4 = uVar2 * 2;
          uVar2 = uVar2 + 1;
          *(undefined2 *)(unsigned)(iVar8 * 2 + unaff_r14[0x12]) = *(undefined2 *)(unsigned)(iVar4 + uVar7);
          iVar8 = iVar8 + 1;
        } while (uVar2 < uVar9);
      }
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11372e(unaff_r14,uVar2,ar6,ar7));
    if ((uVar2 & 0xff) == 0) {
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c115980\n.set _FUN_8c115980, _FUN_8c115980_def\n");
