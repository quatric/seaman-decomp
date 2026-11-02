#include "../decls.h"
undefined4 pvr_206480_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 a4;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  a4 = 0x10000000;
  puVar3 = (&sh4_dmac_202f40);
  uVar2 = 0xf0ffffff;
  puVar1 = 0xa05f8144;
  iVar8 = (int)0x100;
  uVar6 = 0;
  while ((*(int *)(uVar6 * 4 + 0x8c4a9ef8) != 1 || (*(undefined4 *)0x8c4a9db8 != 0))) {
    uVar6 = uVar6 + 1;
    if (3 < (int)uVar6) {
      return 1;
    }
  }
  *(undefined4 *)0x8c4a9db8 = 1;
  iVar9 = uVar6 * 4;
  *(undefined4 *)(0x8c4a9ef8 + iVar9) = 2;
  *(undefined4 *)0x8c4a9f10 = uVar6;
  puVar4 = 0xa05f8008;
  *(undefined4 *)0x8c4aa0fc = *(undefined4 *)0xffd8000c;
  *puVar4 = 1;
  *puVar4 = 0;
  iVar5 = 0x8c4aa024;
  iVar7 = (uVar6 & 1) * 0x20;
  *(undefined4 *)0xa05f8124 = *(undefined4 *)(0x8c4aa024 + iVar7);
  *(undefined4 *)0xa05f812c = *(undefined4 *)(iVar5 + 4 + iVar7);
  *(undefined4 *)0xa05f8128 = *(undefined4 *)(iVar5 + 0xc + iVar7);
  *(undefined4 *)0xa05f8130 = *(undefined4 *)(iVar5 + 0x10 + iVar7);
  *(undefined4 *)0xa05f8164 = *(undefined4 *)(iVar5 + 8 + iVar7);
  *puVar1 = 0x80000000;
  *(undefined4 *)0x8c4a9f14 = 0;
  *(undefined4 *)0x8c4a9f18 = 0;
  iVar5 = 0x8c4a9f7c;
  *(undefined4 *)0x8c4aa0b8 = 0;
  if (*(int *)(iVar5 + iVar9) != 0) {
    *(undefined4 *)0x8c4a9f14 = *(undefined4 *)0x8c4a9f14 | 1;
    iVar5 = (*(code *)puVar3)(a4,*(undefined4 *)(0x8c4a9f2c + iVar9),
                              *(int *)(iVar5 + iVar9) + 0x20,0x10);
    if (iVar5 == iVar8) {
      return 0;
    }
  }
  if (*(int *)(0x8c4a9f8c + iVar9) != 0) {
    *(undefined4 *)0x8c4a9f14 = *(undefined4 *)0x8c4a9f14 | 2;
    puVar1 = 0x8c4a9fe4;
    if (*(undefined4 *)0x8c4a9fe0 == 1) {
      *(uint *)*(undefined4 *)0x8c4a9fe4 = *(uint *)*(undefined4 *)0x8c4a9fe4 & uVar2 | 0x1000000;
      iVar5 = (*(code *)puVar3)(a4,*puVar1,*(undefined4 *)0x8c4a9fe8,0x10);
      if (iVar5 == iVar8) {
        return 0;
      }
    }
    iVar5 = (*(code *)puVar3)(a4,*(undefined4 *)(0x8c4a9f8c + -0x50 + iVar9),
                              *(int *)(0x8c4a9f8c + iVar9) + 0x20,0x10);
    if (iVar5 == iVar8) {
      return 0;
    }
  }
  iVar5 = 0x8c4a9f9c;
  if (*(int *)(0x8c4a9f9c + iVar9) != 0) {
    *(undefined4 *)0x8c4a9f14 = *(undefined4 *)0x8c4a9f14 | 4;
    iVar5 = (*(code *)puVar3)(a4,*(undefined4 *)(0x8c4a9f4c + iVar9),
                              *(int *)(iVar5 + iVar9) + 0x20,0x10);
    if (iVar5 == iVar8) {
      return 0;
    }
  }
  if (*(int *)(0x8c4a9fac + iVar9) != 0) {
    *(undefined4 *)0x8c4a9f14 = *(undefined4 *)0x8c4a9f14 | 8;
    if (*(undefined4 *)0x8c4a9fe0 == 1) {
      *(uint *)*(undefined4 *)0x8c4a9fe4 = *(uint *)*(undefined4 *)0x8c4a9fe4 & uVar2 | 0x3000000;
      iVar5 = (*(code *)puVar3)(a4,*(undefined4 *)0x8c4a9fe4,*(undefined4 *)0x8c4a9fe8,0x10);
      if (iVar5 == iVar8) {
        return 0;
      }
    }
    iVar5 = (*(code *)puVar3)(a4,*(undefined4 *)(0x8c4a9fac + -0x50 + iVar9),
                              *(int *)(0x8c4a9fac + iVar9) + 0x20,0x10);
    if (iVar5 == iVar8) {
      return 0;
    }
  }
  if (*(int *)(0x8c4a9fbc + iVar9) == 0) {
    return 1;
  }
  *(undefined4 *)0x8c4a9f14 = *(undefined4 *)0x8c4a9f14 | 0x10;
  iVar5 = (*(code *)puVar3)(a4,*(undefined4 *)(0x8c4a9fbc + -0x50 + iVar9),
                            *(int *)(0x8c4a9fbc + iVar9) + 0x20,0x10);
  if (iVar5 != iVar8) {
    return 1;
  }
  return 0;
}

__asm__(".globl _pvr_206480\n.set _pvr_206480, _pvr_206480_def\n");
