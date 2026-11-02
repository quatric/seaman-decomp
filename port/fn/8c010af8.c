#include "../decls.h"
int FUN_8c010af8_def(char *ar4,int ar5,int ar6,undefined4 ar7,int ain0)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar2 = (byte *)(ar6 + -1 + ar5);
  pbVar1 = (byte *)(ar4 + ar6 + -1);
  iVar3 = 0;
  if (ar4 <= pbVar1) {
    do {
      iVar3 = (uint)*pbVar1 + (uint)*pbVar2 + iVar3;
      *pbVar1 = (byte)iVar3;
      ain0 = libgcc_divide_helper_010468(iVar3,0x100);
      pbVar1 = pbVar1 + -1;
      pbVar2 = pbVar2 + -1;
      iVar3 = ain0;
    } while (ar4 <= pbVar1);
  }
  return ain0;
}

__asm__(".globl _FUN_8c010af8\n.set _FUN_8c010af8, _FUN_8c010af8_def\n");
