#include "../decls.h"
undefined4 FUN_8c1f7d80_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iStack_24;
  
  iVar2 = 0;
  iVar4 = 0;
  uVar3 = 1;
  iVar5 = 0;
  do {
    if (*(char *)(iVar2 + ar4) == '/') break;
    if (((&DATA_8c125470)[*(byte *)(iVar2 + ar4)] & 4) == 0) {
      uVar3 = 0;
    }
    pcVar1 = (char *)(iVar2 + ar4);
    iVar2 = iVar2 + 1;
    iVar5 = (int)*pcVar1 + iVar5 * 10 + -0x30;
  } while (iVar2 < 2);
  iStack_24 = 0;
  do {
    iVar2 = iVar2 + 1;
    if (*(char *)(iVar2 + ar4) == ' ') break;
    if (((&DATA_8c125470)[*(byte *)(iVar2 + ar4)] & 4) == 0) {
      uVar3 = 0;
    }
    iVar4 = (int)(char)*(byte *)(iVar2 + ar4) + iVar4 * 10 + -0x30;
    iStack_24 = iStack_24 + 1;
  } while (iStack_24 < 2);
  *ar5 = iVar4;
  *ar6 = iVar5;
  return uVar3;
}

__asm__(".globl _FUN_8c1f7d80\n.set _FUN_8c1f7d80, _FUN_8c1f7d80_def\n");
