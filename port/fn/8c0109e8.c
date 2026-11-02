#include "../decls.h"
int FUN_8c0109e8_def(uint *ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  if ((((uint)ar4 | (uint)ar5) & 3) != 0) {
    while( true ) {
      iVar1 = (int)(char)*ar4;
      iVar3 = (int)(char)*ar5;
      if ((iVar1 == 0) || (iVar3 != iVar1)) break;
      iVar1 = (int)*(char *)((int)ar4 + 1);
      iVar3 = (int)*(char *)((int)ar5 + 1);
      if ((iVar1 == 0) || (iVar3 != iVar1)) break;
      iVar1 = (int)*(char *)((int)ar4 + 2);
      iVar3 = (int)*(char *)((int)ar5 + 2);
      if ((iVar1 == 0) || (iVar3 != iVar1)) break;
      iVar1 = (int)*(char *)((int)ar4 + 3);
      ar4 = ar4 + 1;
      iVar3 = (int)*(char *)((int)ar5 + 3);
      ar5 = ar5 + 1;
      if ((iVar1 == 0) || (iVar3 != iVar1)) break;
    }
    return iVar1 - iVar3;
  }
  uVar4 = *ar5;
  puVar7 = ar5 + 1;
  do {
    puVar6 = ar4 + 1;
    puVar8 = puVar7;
    if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) ||
        (uVar4 & 0xff) == 0) goto LAB_8c010a26;
    uVar2 = *puVar7;
    puVar8 = puVar7 + 1;
    if (uVar4 != *ar4) break;
    uVar4 = *puVar6;
    puVar6 = ar4 + 2;
    if (((uVar2 >> 0x18 == 0 || (uVar2 & 0xff0000) == 0) || (uVar2 & 0xff00) == 0) ||
        (uVar2 & 0xff) == 0) goto LAB_8c010a26;
    uVar5 = *puVar8;
    puVar8 = puVar7 + 2;
    if (uVar2 != uVar4) break;
    uVar4 = *puVar6;
    puVar6 = ar4 + 3;
    if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) ||
        (uVar5 & 0xff) == 0) goto LAB_8c010a26;
    uVar2 = *puVar8;
    puVar8 = puVar7 + 3;
    if (uVar5 != uVar4) break;
    uVar5 = *puVar6;
    puVar6 = ar4 + 4;
    if (((uVar2 >> 0x18 == 0 || (uVar2 & 0xff0000) == 0) || (uVar2 & 0xff00) == 0) ||
        (uVar2 & 0xff) == 0) goto LAB_8c010a26;
    uVar4 = *puVar8;
    puVar7 = puVar7 + 4;
    ar4 = puVar6;
    puVar8 = puVar7;
  } while (uVar2 == uVar5);
  puVar8 = puVar8 + -1;
LAB_8c010a26:
  iVar3 = (int)(char)puVar8[-1];
  iVar1 = (int)(char)puVar6[-1];
  if ((iVar3 != 0) && (iVar3 == iVar1)) {
    iVar3 = (int)*(char *)((int)puVar8 + -3);
    iVar1 = (int)*(char *)((int)puVar6 + -3);
    if ((iVar3 != 0) && (iVar3 == iVar1)) {
      iVar3 = (int)*(char *)((int)puVar8 + -2);
      iVar1 = (int)*(char *)((int)puVar6 + -2);
      if ((iVar3 != 0) && (iVar3 == iVar1)) {
        iVar1 = (int)*(char *)((int)puVar6 + -1);
        iVar3 = (int)*(char *)((int)puVar8 + -1);
      }
    }
  }
  return iVar1 - iVar3;
}

__asm__(".globl _FUN_8c0109e8\n.set _FUN_8c0109e8, _FUN_8c0109e8_def\n");
