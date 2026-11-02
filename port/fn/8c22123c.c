#include "../decls.h"
int FUN_8c22123c_def(int ar4,int ar5,int ar6,undefined4 *ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_18 [12];
  
  FUN_8c010794(8,auStack_18,&DAT_8c26d7b0);
  iVar1 = libgcc_divide_helper_0106dc(ar5 + ar6 + -1,ar6);
  iVar1 = iVar1 * 8 + ar4;
  piVar5 = (int *)(ar5 * 8 + ar4);
  iVar2 = libgcc_divide_helper_0106dc(ar5 + 1,ar6);
  piVar6 = (int *)(iVar2 * 8 + ar4);
  iVar2 = libgcc_divide_helper_0106dc(ar5 + 2,ar6);
  iVar4 = *piVar5;
  iVar3 = *piVar6;
  *ar7 = *(undefined4 *)(iVar1 + 4);
  ar7[1] = piVar5[1];
  ar7[2] = piVar6[1];
  ar7[3] = *(undefined4 *)(iVar2 * 8 + ar4 + 4);
  return (uint)(0 < iVar3 - iVar4) << 2;
}

__asm__(".globl _FUN_8c22123c\n.set _FUN_8c22123c, _FUN_8c22123c_def\n");
