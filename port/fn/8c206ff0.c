#include "../decls.h"
undefined4 pvr_206ff0_def(undefined4 ar4,undefined4 ar5,uint *ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  
  puVar3 = 0xa05f6900;
  puVar1 = (&FUN_8c2062c8);
  uVar11 = *(undefined4 *)0xa05f6900;
  if (((uVar11 & 8) != 0) && (iVar7 = pvr_2069a0(ar4,ar5,ar6,ar7), iVar7 != 0)) {
    (*(code *)puVar1)(iVar7,ar5,ar6,ar7);
  }
  if ((uVar11 & 0x20) != 0) {
    *puVar3 = 0x20;
    *(undefined4 *)0x8c4a9e5c = *(undefined4 *)0x8c4a9e5c | 4;
  }
  if ((uVar11 & 4) != 0) {
    *puVar3 = 7;
    *(undefined4 *)0x8c4a9db4 = 0;
    piVar4 = 0xffd8000c;
    puVar2 = 0x8c4aa0b4;
    *(undefined4 *)0x8c4aa0b4 = 0;
    puVar2[0x11] = puVar2[0x10] - *piVar4;
    if (*(undefined4 *)0x8c4a9f24 == 0) {
      *(undefined4 *)(0x8c4a9ef8 + *(int *)(0x8c4a9ef8 + 0x14) * 4) = 5;
    }
    else {
      *(undefined4 *)0x8c4a9f24 = 0;
      puVar5 = 0x8c4a9e78;
      puVar2[6] = 0;
      puVar2 = 0xa05f8048;
      *(undefined4 *)0xa05f8048 = *puVar5;
      puVar2[1] = *(undefined4 *)0x8c4a9e70;
      *(undefined4 *)0xa05f8068 = *(undefined4 *)0x8c4a9e60;
      *(undefined4 *)0xa05f806c = *(undefined4 *)0x8c4a9e64;
    }
    *(undefined4 *)0x8c4a9e5c = *(undefined4 *)0x8c4a9e5c | 1;
    *(undefined4 *)0x8c4aa104 = 0;
  }
  puVar10 = 0xffa0002c;
  uVar9 = 0x80000;
  if ((uVar11 & 0x80000) != 0) {
    uVar8 = *(undefined4 *)0xffa0002c;
    *(undefined4 *)0xffa0002c = uVar8 & 0xfffffffc;
    puVar6 = (&sh4_dmac_203160);
    *puVar3 = uVar9;
    (*(code *)puVar6)(uVar8 & 0xfffffffc,uVar9,puVar10,ar7);
    ar6 = puVar10;
  }
  if ((uVar11 & 0x40) != 0) {
    *puVar3 = 0x40;
    *(undefined4 *)0x8c4a9e5c = *(undefined4 *)0x8c4a9e5c | 0x40;
  }
  uVar8 = (uint)0x80;
  if ((uVar11 & uVar8) != 0) {
    *puVar3 = uVar8;
    puVar10 = 0x8c4a9f18;
    *(undefined4 *)0x8c4a9f18 = *(undefined4 *)0x8c4a9f18 | 1;
    if (*(undefined4 *)0x8c4a9f14 == *puVar10) {
      pvr_206cfe(uVar8,uVar9,ar6,ar7);
    }
  }
  uVar8 = (uint)0x100;
  if ((uVar11 & uVar8) != 0) {
    *puVar3 = uVar8;
    puVar10 = 0x8c4a9f18;
    *(undefined4 *)0x8c4a9f18 = *(undefined4 *)0x8c4a9f18 | 2;
    if (*(undefined4 *)0x8c4a9f14 == *puVar10) {
      pvr_206cfe(uVar8,uVar9,ar6,ar7);
    }
  }
  uVar8 = (uint)0x200;
  if ((uVar11 & uVar8) != 0) {
    *puVar3 = uVar8;
    puVar10 = 0x8c4a9f18;
    *(undefined4 *)0x8c4a9f18 = *(undefined4 *)0x8c4a9f18 | 4;
    if (*(undefined4 *)0x8c4a9f14 == *puVar10) {
      pvr_206cfe(uVar8,uVar9,ar6,ar7);
    }
  }
  uVar8 = (uint)0x400;
  if ((uVar11 & uVar8) != 0) {
    *puVar3 = uVar8;
    puVar10 = 0x8c4a9f18;
    *(undefined4 *)0x8c4a9f18 = *(undefined4 *)0x8c4a9f18 | 8;
    if (*(undefined4 *)0x8c4a9f14 == *puVar10) {
      pvr_206cfe(uVar8,uVar9,ar6,ar7);
    }
  }
  uVar8 = 0x200000;
  if ((uVar11 & 0x200000) != 0) {
    *puVar3 = 0x200000;
    puVar3 = 0x8c4a9f18;
    *(undefined4 *)0x8c4a9f18 = *(undefined4 *)0x8c4a9f18 | 0x10;
    if (*(undefined4 *)0x8c4a9f14 == *puVar3) {
      pvr_206cfe(uVar8,uVar9,ar6,ar7);
    }
  }
  uVar11 = *(undefined4 *)0xa05f6908;
  if (((uVar11 & 4) != 0) && (uVar8 = FUN_8c206f76(uVar8,uVar9,ar6,ar7), uVar8 != 0)) {
    (*(code *)puVar1)(uVar8,uVar9,ar6,ar7);
  }
  if (((uVar11 & 8) != 0) && (uVar8 = FUN_8c206faa(uVar8,uVar9,ar6,ar7), uVar8 != 0)) {
    (*(code *)puVar1)(uVar8,uVar9,ar6,ar7);
  }
  if (((uVar11 & 2) != 0) && (iVar7 = FUN_8c206fd2(uVar8,uVar9,ar6,ar7), iVar7 != 0)) {
    (*(code *)puVar1)(iVar7,uVar9,ar6,ar7);
  }
  puVar1 = (&FUN_8c207334);
  for (uVar11 = 0; (int)uVar11 < 10; uVar11 = uVar11 + 1) {
    if ((int)uVar11 < 0) {
      uVar9 = 1 >> (~uVar11 & 0x1f) + 1;
    }
    else {
      uVar9 = 1 << (uVar11 & 0x1f);
    }
    if ((*(undefined4 *)0x8c4a9e5c & uVar9) != 0) {
      *(undefined4 *)0x8c4a9e5c = *(undefined4 *)0x8c4a9e5c & ~uVar9;
      (*(code *)puVar1)(*(undefined4 *)(0x8c4a9de0 + -4 + uVar11 * 8),
                        *(undefined4 *)(0x8c4a9de0 + uVar11 * 8),ar6,ar7);
    }
  }
  return 0;
}

__asm__(".globl _pvr_206ff0\n.set _pvr_206ff0, _pvr_206ff0_def\n");
