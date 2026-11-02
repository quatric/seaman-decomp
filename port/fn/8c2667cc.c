#include "../decls.h"
undefined4 FUN_8c2667cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = (&DATA_8c2784c0);
  uVar4 = (uint)0xa8;
  uVar3 = 0;
  do {
    *(undefined1 *)(*(int *)puVar1 + uVar3 + 1) = 0;
    iVar2 = *(int *)puVar1 + uVar3;
    uVar3 = uVar3 + 8;
    *(undefined4 *)(iVar2 + 4) = 0;
  } while (uVar3 < uVar4);
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1;
    *(char *)(*(int *)puVar1 + uVar3 * 8 + 9) = (char)uVar3;
    *(undefined1 *)(uVar3 * 8 + *(int *)puVar1 + 8) = 1;
    uVar3 = uVar4;
  } while (uVar4 < 8);
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1;
    *(char *)(*(int *)puVar1 + uVar3 * 8 + 0x49) = (char)uVar3;
    *(undefined1 *)(uVar3 * 8 + *(int *)puVar1 + 0x48) = 2;
    uVar3 = uVar4;
  } while (uVar4 < 8);
  uVar3 = 0;
  do {
    iVar5 = uVar3 * 8;
    iVar2 = (int)0x88;
    *(char *)((int)0x88 + *(int *)puVar1 + iVar5 + 1) = (char)uVar3;
    uVar3 = uVar3 + 1;
    *(undefined1 *)(iVar5 + iVar2 + *(int *)puVar1) = 3;
  } while (uVar3 < 4);
  *(undefined1 *)(*(int *)puVar1 + 1) = 0;
  **(undefined1 **)puVar1 = 9;
  return 0;
}

__asm__(".globl _FUN_8c2667cc\n.set _FUN_8c2667cc, _FUN_8c2667cc_def\n");
