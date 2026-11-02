#include "../decls.h"
undefined4 FUN_8c1fb3e0_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  
  puVar2 = 0x8c475f0c;
  puVar1 = 0x8c475f10;
  uVar6 = 0xffffffe0;
  uVar5 = ar4 + 0x1fU & 0xffffffe0;
  *(undefined4 *)0x8c475f08 = uVar5;
  *puVar1 = uVar5;
  piVar4 = 0x8c475f04;
  iVar3 = 0x8c475ee4;
  *puVar2 = ar5 & 0xffffffe0;
  *piVar4 = iVar3;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(iVar3 + 4) = 0;
  FUN_8c1fb426(0,0xffffffe0,ar6,ar7);
  uVar5 = *(undefined4 *)0x8c475f08;
  *(uint *)(uVar5 + 4) = ar5 >> 5;
  uVar6 = FUN_8c1fb586(uVar5 + 0x20,uVar6,ar6,ar7);
  return uVar6;
}

__asm__(".globl _FUN_8c1fb3e0\n.set _FUN_8c1fb3e0, _FUN_8c1fb3e0_def\n");
