#include "../decls.h"
uint FUN_8c210cc0_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  piVar1 = 0x8c4aa218;
  if (*(undefined4 *)0x8c4a9ef0 == 1) {
    *(undefined4 *)0x8c4aa218 = 0x8c4aa22c;
  }
  else {
    *(undefined4 *)0x8c4aa218 = ar4 * 0x14 + 0x8c4aa22c;
  }
  piVar2 = 0x8c4aa21c;
  *(undefined4 *)*(undefined4 *)0x8c4aa21c = *(undefined4 *)*piVar1;
  *(undefined4 *)(*piVar2 + 4) = *(undefined4 *)(*piVar1 + 4);
  *(undefined4 *)(*piVar2 + 8) = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar2 + 0xc) = *(undefined4 *)(*piVar1 + 0xc);
  *(undefined4 *)(*piVar2 + 0x10) = *(undefined4 *)(*piVar1 + 0x10);
  iVar3 = 0x8c4aa268;
  uVar6 = 0;
  do {
    uVar7 = uVar6 + 4;
    *(undefined4 *)(uVar6 + iVar3) = *(undefined4 *)(uVar6 + *piVar2);
    iVar4 = 0x8c4aa288;
    uVar6 = uVar7;
  } while (uVar7 < 0x14);
  *(undefined4 *)0x8c4aa214 = ar4 & 1;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    piVar1 = (int *)(uVar6 + iVar4);
    piVar5 = (int *)(*piVar2 + uVar6);
    uVar6 = uVar6 + 4;
    *piVar5 = *piVar5 + *piVar1 * 4;
  } while (uVar6 < 0x14);
  return uVar7;
}

__asm__(".globl _FUN_8c210cc0\n.set _FUN_8c210cc0, _FUN_8c210cc0_def\n");
