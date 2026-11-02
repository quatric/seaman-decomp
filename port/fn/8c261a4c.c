#include "../decls.h"
int FUN_8c261a4c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  puVar1 = 0x8c4b5244;
  uVar4 = *(undefined4 *)0x8c4b5244;
  if ((int)uVar4 < 0) {
    uVar4 = ~(~uVar4 + 1 & (int)0xff) + 1;
  }
  else {
    uVar4 = uVar4 & (int)0xff;
  }
  *(undefined4 *)0x8c4b5244 = uVar4;
  iVar3 = ar4 * 2;
  puVar5 = (undefined1 *)(uVar4 * 0x10 + 0x8c4b4224);
  if (ar5 == 0) {
    *(short *)(0x8c4b5224 + iVar3) = *(short *)(0x8c4b5224 + iVar3) + 1;
  }
  *puVar5 = (char)ar4;
  puVar5[1] = (char)ar5;
  iVar2 = 0x8c4b5224;
  *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(0x8c4b5224 + iVar3);
  *(undefined4 *)(puVar5 + 4) = ar6;
  *(undefined4 *)(puVar5 + 8) = ar7;
  *(undefined4 *)(puVar5 + 0xc) = s0;
  *puVar1 = *puVar1 + 1;
  return iVar2;
}

__asm__(".globl _FUN_8c261a4c\n.set _FUN_8c261a4c, _FUN_8c261a4c_def\n");
