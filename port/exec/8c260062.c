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
undefined4 FUN_8c260062_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c260062";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar5_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int n;
  
  iVar4 = ar4 + 0x50;
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(*(undefined4 *)(unsigned)(ar4 + 0x54),*(undefined4 *)(unsigned)(ar4 + 0x58),vr6,vr7));
  iVar8 = *(int *)(unsigned)(iVar4 + 0x28);
  iVar5 = *(int *)(unsigned)(iVar4 + 0x10);
  iVar9 = *(int *)(unsigned)(iVar4 + 0x20);
  iVar3 = iVar8 + iVar5 + -1;
  n = *(int *)(unsigned)(iVar4 + 0x24);
  iVar6 = *(int *)(unsigned)(iVar4 + 0x18);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(iVar3,iVar5,vr6,vr7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010614(iVar3,iVar5,vr6,vr7));
  iVar7 = (iVar5 - iVar3) + -1;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468((iVar6 - iVar9) + iVar5 + -1,iVar5,vr6,vr7));
  if ((iVar1 < iVar3) && ((iVar3 * iVar5 - iVar7) + iVar9 < *(int *)(unsigned)(iVar4 + 0x18))) {
    iVar3 = iVar3 + 1;
  }
  if (iVar8 < n) {
    n = n + iVar7;
  }
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(n,iVar5,vr6,vr7));
  if (iVar5 < ar5_00) {
    ar5_00 = iVar5;
  }
  if (iVar1 < ar5_00) {
    ar5_00 = iVar1;
  }
  if (iVar3 < ar5_00) {
    ar5_00 = iVar3;
  }
  if (*(int *)(unsigned)(iVar4 + 8) == 2) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26002c(ar4,ar5_00,iVar5,iVar3));
    return uVar2;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c260000(ar4,ar5_00,iVar5,iVar3));
  return uVar2;
}

__asm__(".globl _FUN_8c260062\n.set _FUN_8c260062, _FUN_8c260062_def\n");
