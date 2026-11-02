#include "../decls.h"
undefined1 * FUN_8c26326e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r10;
  int *unaff_r11;
  int unaff_r14;
  
  uVar2 = 0x7fffffff;
  iVar3 = unaff_r10;
  do {
    if (*(char *)(iVar3 * unaff_r14 + 0x8c4b9828) == '\0') break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < in_r0);
  if (iVar3 == 0x20) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = (undefined1 *)(iVar3 * unaff_r14 + 0x8c4b9828);
    puVar1[1] = 1;
    puVar1[2] = (char)unaff_r10;
    *(int **)(puVar1 + 4) = unaff_r11;
    *(undefined4 *)(puVar1 + 8) = ar4;
    *(int *)(puVar1 + 0xc) = unaff_r10;
    *(undefined4 *)(puVar1 + 0x10) = ar5;
    *(undefined4 *)(puVar1 + 0x14) = ar6;
    *(undefined4 *)(puVar1 + 0x2c) = uVar2;
    iVar3 = *(int *)(puVar1 + 0x14) + (int)0x7ff;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x7ff;
    }
    *(int *)(puVar1 + 0x30) = iVar3 >> 0xb;
    *puVar1 = 1;
    uVar2 = (**(code **)(*unaff_r11 + 0x24))(unaff_r11,0,ar6,1);
    *(undefined4 *)(puVar1 + 0x18) = uVar2;
    *(undefined4 *)(puVar1 + 0x1c) = uVar2;
  }
  return puVar1;
}

__asm__(".globl _FUN_8c26326e\n.set _FUN_8c26326e, _FUN_8c26326e_def\n");
