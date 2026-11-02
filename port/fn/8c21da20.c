#include "../decls.h"
int FUN_8c21da20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  
  puVar4 = 0x8c4aa380;
  puVar3 = 0x8c4aad86;
  puVar2 = 0x8c4aa378;
  puVar1 = 0x8c4aa37c;
  uVar5 = ar4 - 0x22;
  if (0xd < uVar5) {
    *(undefined4 *)0x8c4aa374 = 0;
    *puVar2 = 0xffffffff;
    *puVar1 = 0xffffffff;
    *puVar4 = 0xffffffff;
    *puVar3 = 0;
    return uVar5;
  }
  iVar6 = (int)(short)(&switchdata_8c21da4c_8c21da64)[uVar5];
  switch(uVar5) {
  case 0:
    *(undefined4 *)0x8c4aa374 = 3;
    *puVar2 = 2;
    *puVar1 = 0xffffffff;
    *puVar4 = 0xffffffff;
    break;
  case 1:
    uVar7 = (ushort)0xffdf;
    *(undefined4 *)0x8c4aa374 = 4;
    *puVar2 = 2;
    *puVar1 = 0xffffffff;
    *puVar4 = 5;
    goto LAB_8c21dad2;
  default:
    iVar6 = 4;
    *(undefined4 *)0x8c4aa374 = 4;
    *puVar2 = 2;
    *puVar1 = 0xffffffff;
    *puVar4 = 5;
    break;
  case 7:
    iVar6 = 6;
    *(undefined4 *)0x8c4aa374 = 6;
    *puVar2 = 2;
    *puVar1 = 5;
    *puVar4 = 0xffffffff;
    goto LAB_8c21dad0;
  case 8:
    *(undefined4 *)0x8c4aa374 = 7;
    *puVar2 = 2;
    *puVar1 = 5;
    *puVar4 = 8;
    return iVar6;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    *(undefined4 *)0x8c4aa374 = 7;
    *puVar2 = 2;
    *puVar1 = 5;
    *puVar4 = 8;
LAB_8c21dad0:
    uVar7 = (ushort)0xbfff;
    goto LAB_8c21dad2;
  }
  uVar7 = (ushort)0xbfdf;
LAB_8c21dad2:
  *puVar3 = *puVar3 & uVar7;
  return iVar6;
}

__asm__(".globl _FUN_8c21da20\n.set _FUN_8c21da20, _FUN_8c21da20_def\n");
