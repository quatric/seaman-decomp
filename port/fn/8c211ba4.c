#include "../decls.h"
int FUN_8c211ba4_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  int aiStack_10 [4];
  
  aiStack_10[0] = *(int *)(&DATA_8c26d718);
  aiStack_10[1] = *(undefined4 *)((&DATA_8c26d718) + 4);
  aiStack_10[2] = *(undefined4 *)((&DATA_8c26d718) + 8);
  aiStack_10[3] = *(undefined4 *)((&DATA_8c26d718) + 0xc);
  uVar1 = ar4 >> 0x19 & 3;
  iVar2 = *(undefined4 *)0x8c4aa008 * *(undefined4 *)0x8c4aa00c;
  if ((*(undefined4 *)0x8c4a9bb0 & 0x20) != 0) {
    if (*(undefined4 *)0x8c4aa010 == 0) {
      iVar2 = iVar2 * 2;
    }
    else {
      iVar2 = iVar2 * 4;
    }
  }
  *(undefined4 *)0x8c4aa204 =
       ((aiStack_10[ar4 >> 0x11 & 3] + aiStack_10[ar4 >> 0x13 & 3] + aiStack_10[ar4 >> 0x15 & 3] +
         aiStack_10[ar4 >> 0x17 & 3] + aiStack_10[uVar1]) * 4 + 0x18) * iVar2;
  return uVar1 * 4;
}

__asm__(".globl _FUN_8c211ba4\n.set _FUN_8c211ba4, _FUN_8c211ba4_def\n");
