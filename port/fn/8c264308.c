#include "../decls.h"
int FUN_8c264308_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *a7;
  undefined1 *a7_00;
  int d;
  int *a4;
  int iVar3;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  a7 = auStack_28;
  a7_00 = auStack_28;
  a4 = *(int **)(ar4 + 0x14);
  if (ar6 < 0) {
    ar6 = ar6 + 0x1f;
  }
  d = ar5 * 0x12;
  iVar3 = (ar6 >> 5) * d;
  puVar2 = &uStack_20;
  (**(code **)(*a4 + 0x18))(a4,0,iVar3,puVar2);
  iVar1 = libgcc_divide_helper_010468(uStack_1c,d);
  iVar1 = iVar1 * d;
  memset(uStack_20,0,iVar1,puVar2);
  FUN_8c26be30(&uStack_20,iVar1,&uStack_20,auStack_28);
  (**(code **)(*a4 + 0x20))(a4,1,&uStack_20,a7);
  (**(code **)(*a4 + 0x1c))(a4,0,auStack_28,a7);
  puVar2 = &uStack_20;
  (**(code **)(*a4 + 0x18))(a4,0,iVar3 - iVar1,puVar2);
  iVar3 = libgcc_divide_helper_010468(uStack_1c,d);
  iVar3 = iVar3 * d;
  memset(uStack_20,0,iVar3,puVar2);
  FUN_8c26be30(&uStack_20,iVar3,&uStack_20,auStack_28);
  (**(code **)(*a4 + 0x20))(a4,1,&uStack_20,a7_00);
  (**(code **)(*a4 + 0x1c))(a4,0,auStack_28,a7_00);
  iVar1 = libgcc_divide_helper_010468(iVar1 + iVar3,d);
  return iVar1 << 5;
}

__asm__(".globl _FUN_8c264308\n.set _FUN_8c264308, _FUN_8c264308_def\n");
