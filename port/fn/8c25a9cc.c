#include "../decls.h"
undefined4 FUN_8c25a9cc_def(int ar4,int ar5,uint ar6,uint ar7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint ar7_00;
  uint uVar4;
  uint ar6_00;
  
  ar7_00 = ar7;
  iVar1 = FUN_8c213a04(*(undefined4 *)(ar4 + 0xc),*(undefined4 *)(ar4 + 0x10),ar6,ar7);
  iVar1 = iVar1 * 4;
  if ((*(uint *)(ar4 + 0x18) & 1) == 0) {
    uVar2 = *(uint *)(&DAT_8c277ce0 + iVar1);
    uVar3 = *(uint *)(&DAT_8c277d18 + iVar1);
  }
  else {
    uVar2 = *(uint *)(&DAT_8c277cfc + iVar1);
    uVar3 = *(int *)(&DAT_8c277d34 + iVar1) + 10;
  }
  ar6_00 = 0;
  uVar4 = 0;
  if (ar6 <= uVar2) {
    uVar4 = uVar2 - ar6;
    if (ar7 <= uVar4) goto LAB_8c25aa36;
    ar7 = ar7 - uVar4;
  }
  ar6_00 = ar7;
  ar7 = uVar4;
  if (uVar3 < ar6_00) {
    ar6_00 = uVar3;
  }
LAB_8c25aa36:
  if (ar7 == 0) {
    if (ar6_00 == 0) {
      return 0;
    }
    iVar1 = (*(int *)(ar4 + 0x1c) + ar6) - uVar2;
  }
  else {
    iVar1 = *(int *)(ar4 + 0x1c) + ar6;
    FUN_8c20a8e0(iVar1,ar5,ar7,ar7_00);
    if (ar6_00 == 0) {
      return 0;
    }
    ar5 = ar5 + ar7;
  }
  FUN_8c20a8e0(iVar1 + 0x800,ar5,ar6_00,ar7_00);
  return 0;
}

__asm__(".globl _FUN_8c25a9cc\n.set _FUN_8c25a9cc, _FUN_8c25a9cc_def\n");
