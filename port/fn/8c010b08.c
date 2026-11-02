#include "../decls.h"
int FUN_8c010b08_def(char *ar4,int ar5,char *ar6,undefined4 ar7,int ain0)

{
  byte *pbVar1;
  undefined4 unaff_r13;
  int iVar2;
  
  pbVar1 = (byte *)(ar4 + ar5);
  iVar2 = 0;
  if (ar4 <= pbVar1) {
    do {
      iVar2 = (uint)*pbVar1 + (uint)(byte)*ar6 + iVar2;
      *pbVar1 = (byte)iVar2;
      ain0 = libgcc_divide_helper_010468(iVar2,unaff_r13);
      pbVar1 = pbVar1 + -1;
      ar6 = ar6 + -1;
      iVar2 = ain0;
    } while (ar4 <= pbVar1);
  }
  return ain0;
}

__asm__(".globl _FUN_8c010b08\n.set _FUN_8c010b08, _FUN_8c010b08_def\n");
