#include "../decls.h"
int FUN_8c2653e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = (&FUN_8c268650);
  puVar1 = (&DATA_8c2784c0);
  iVar4 = *(int *)(&DATA_8c2784c0);
  iVar3 = 0xd000001;
  if (iVar4 != 0) {
    iVar3 = (int)0x1d0;
    iVar5 = *(int *)(0x1cc + iVar4);
    iVar6 = iVar5 + 0x20;
    *(int *)(0x1cc + -0x1c + iVar4) = iVar6;
    (*(code *)puVar2)(iVar6,*(int *)puVar1 + iVar3);
    (*(code *)puVar2)(iVar5 + 0x21,*(int *)puVar1 + (int)0x1d1);
    if ((*(char *)(*(int *)puVar1 + (int)0x1d0) == '\x01') &&
       (*(char *)((int)0x1d1 + *(int *)puVar1) == '\0')) {
      iVar5 = iVar5 + 0x23;
    }
    else {
      iVar5 = iVar5 + 0x22;
    }
    (*(code *)puVar2)(iVar5,(int)0x1d2 + *(int *)puVar1);
    iVar3 = (int)0xa0;
    *(undefined1 *)((int)0x1d3 + *(int *)puVar1) = 0;
    puVar2 = (&aica_ram_268618);
    aica_ram_268618(iVar3 + iVar6,*(int *)puVar1 + (int)0x1b4);
    (*(code *)puVar2)(0xa4 + iVar6,*(int *)puVar1 + (int)0x1b8);
    (*(code *)puVar2)(0xa8 + iVar6,*(int *)puVar1 + (int)0x1bc);
    (*(code *)puVar2)(0xac + iVar6,*(int *)puVar1 + (int)0x1c0);
    (*(code *)puVar2)(0xb0 + iVar6,*(int *)puVar1 + (int)0x1c4);
    (*(code *)puVar2)(0xb4 + iVar6,*(int *)puVar1 + (int)0x1c8);
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    FUN_8c2688a0((&FUN_8c2653e0),iVar3);
  }
  return iVar3;
}

__asm__(".globl _FUN_8c2653e0\n.set _FUN_8c2653e0, _FUN_8c2653e0_def\n");
