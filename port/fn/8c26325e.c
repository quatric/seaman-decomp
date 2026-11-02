#include "../decls.h"
undefined1 * FUN_8c26325e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0x7fffffff;
  iVar3 = 0;
  do {
    if (*(char *)(iVar3 * 100 + 0x8c4b9828) == '\0') break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  if (iVar3 == 0x20) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = (undefined1 *)(iVar3 * 100 + 0x8c4b9828);
    puVar1[1] = 1;
    puVar1[2] = 0;
    *(int **)(puVar1 + 4) = ar7;
    *(undefined4 *)(puVar1 + 8) = ar4;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 0x10) = ar5;
    *(undefined4 *)(puVar1 + 0x14) = ar6;
    *(undefined4 *)(puVar1 + 0x2c) = uVar2;
    iVar3 = *(int *)(puVar1 + 0x14) + (int)0x7ff;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x7ff;
    }
    *(int *)(puVar1 + 0x30) = iVar3 >> 0xb;
    *puVar1 = 1;
    uVar2 = (**(code **)(*ar7 + 0x24))(ar7,0);
    *(undefined4 *)(puVar1 + 0x18) = uVar2;
    *(undefined4 *)(puVar1 + 0x1c) = uVar2;
  }
  return puVar1;
}

__asm__(".globl _FUN_8c26325e\n.set _FUN_8c26325e, _FUN_8c26325e_def\n");
