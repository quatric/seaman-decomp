#include "../decls.h"
int FUN_8c221300_def(int ar4,int ar5,undefined4 ar6,int *ar7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_14 [12];
  
  FUN_8c010794(8,auStack_14,&DAT_8c26d7b8);
  piVar4 = (int *)(ar5 * 8 + ar4);
  iVar1 = libgcc_divide_helper_0106dc(ar5 + 1,ar6);
  piVar2 = (int *)(ar4 + iVar1 * 8);
  iVar3 = *piVar4;
  iVar1 = *piVar2;
  *ar7 = piVar4[1];
  ar7[1] = piVar2[1];
  return (uint)(0 < iVar1 - iVar3) << 2;
}

__asm__(".globl _FUN_8c221300\n.set _FUN_8c221300, _FUN_8c221300_def\n");
