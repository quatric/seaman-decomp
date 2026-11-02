#include "../decls.h"
uint FUN_8c1fb924_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar13 = 0xe0000000;
  iVar11 = 0xc000000;
  iVar3 = 0x100000;
  puVar2 = (&FUN_8c1fb81c);
  uVar1 = 0xd000000;
  uVar7 = *(undefined4 *)0xff000010 & 1;
  if (uVar7 == 1) {
    iVar12 = 0;
    iVar10 = 0;
    while (iVar5 = 0xe1000000, iVar4 = 0x10000000, uVar7 = 0x10800000,
          (uint)(iVar11 + iVar12) < uVar1) {
      puVar9 = (undefined4 *)(0x8c475f18 + iVar10 * 4);
      uVar8 = (*(code *)puVar2)(iVar11 + iVar12,iVar13 + iVar12,4,ar7);
      iVar10 = iVar10 + 1;
      iVar12 = iVar12 + iVar3;
      *puVar9 = uVar8;
    }
    iVar13 = 0;
    iVar11 = 0;
    while (puVar6 = 0x8c475f78, (uint)(iVar4 + iVar13) < uVar7) {
      puVar9 = (undefined4 *)(0x8c475f58 + iVar11 * 4);
      uVar8 = (*(code *)puVar2)(iVar4 + iVar13,iVar5 + iVar13,4,ar7);
      iVar11 = iVar11 + 1;
      iVar13 = iVar13 + iVar3;
      *puVar9 = uVar8;
    }
    uVar7 = (*(code *)puVar2)(uVar7,0xe1800000,4,ar7);
    *puVar6 = uVar7;
  }
  return uVar7;
}

__asm__(".globl _FUN_8c1fb924\n.set _FUN_8c1fb924, _FUN_8c1fb924_def\n");
