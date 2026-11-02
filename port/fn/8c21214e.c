#include "../decls.h"
int * FUN_8c21214e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  puVar1 = 0x8c4a9ef8;
  *(undefined4 *)0x8c4a9ef8 = 0;
  puVar2 = 0x8c4a9efc;
  *(undefined4 *)0x8c4a9efc = 0xffffffff;
  puVar3 = 0x8c4a9f00;
  *(undefined4 *)0x8c4a9f00 = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar2[3] = 0;
  puVar3[3] = 0;
  puVar1[6] = 0;
  *(undefined4 *)0x8c4a9f1c = 0;
  iVar5 = *(undefined4 *)0x8c4a9db4;
  while ((iVar5 != 0 && ((*(code *)*(undefined4 *)0x8c4a9e14)(((undefined1 *)1)[0x8c4a9e14]), *(undefined4 *)0x8c4a9f1c < 0xb))) {
    iVar5 = *(undefined4 *)0x8c4a9db4;
  }
  piVar4 = 0x8c4a9ef0;
  if (*(undefined4 *)0x8c4a9ef0 == 0) {
    *(undefined4 *)0x8c4a9f1c = 0;
    iVar5 = *(undefined4 *)0x8c4a9db8;
    while ((iVar5 != 0 &&
           (piVar4 = (int *)(*(code *)*(undefined4 *)0x8c4a9e14)(((undefined1 *)1)[0x8c4a9e14]), *(undefined4 *)0x8c4a9f1c < 0xb))) {
      iVar5 = *(undefined4 *)0x8c4a9db8;
      piVar4 = 0x8c4a9db8;
    }
  }
  *(undefined4 *)0x8c4a9db8 = 0;
  *(undefined4 *)0x8c4a9db4 = 0;
  return piVar4;
}

__asm__(".globl _FUN_8c21214e\n.set _FUN_8c21214e, _FUN_8c21214e_def\n");
