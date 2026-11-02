#include "../decls.h"
uint FUN_8c1fa244_def(undefined4 ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint ar6_00;
  uint uVar9;
  uint uVar10;
  int in_VBR;
  
  iVar2 = 0x8c475bc8;
  iVar1 = 0x8c474bc8;
  iVar3 = (int)(short)ar4;
  iVar4 = iVar3 >> 4;
  uVar9 = ar6 | 0x80000000;
  iVar5 = *(int *)(iVar4 * 4 + 0x8c475bc8);
  iVar8 = iVar5;
  while ((iVar6 = iVar5, iVar6 != 0 && (*(uint *)(iVar6 + 0xc) < uVar9))) {
    iVar8 = iVar6;
    iVar5 = *(int *)(iVar6 + 4);
  }
  ar6_00 = (uint)0x100;
  uVar10 = 1;
  do {
    if ((*(uint *)(uVar10 * 0x10 + 0x8c474bc8 + 0xc) & 0x80000000) == 0) break;
    uVar10 = uVar10 + 1;
  } while (uVar10 < ar6_00);
  if (uVar10 < ar6_00) {
    if ((iVar6 == 0) && (iVar8 == 0)) {
      if (iVar3 < 0x900) {
        *(undefined **)((int)0x200 + in_VBR + ((int)0xfffffe00 + iVar3 >> 3)) = (&FUN_8c1fa3f2)
        ;
      }
      else if (iVar3 == 0x900) {
        FUN_8c20759a((&DATA_8c1fa416),0,ar6_00,0x80000000);
      }
      else if (iVar3 == 0x920) {
        FUN_8c2075bc((&DATA_8c1fa460),0,ar6_00,0x80000000);
      }
      else {
        *(undefined **)(0x22c + in_VBR) = (&DATA_8c1fa486);
      }
      puVar7 = (undefined4 *)(uVar10 * 0x10 + iVar1);
      *(undefined4 **)(iVar4 * 4 + iVar2) = puVar7;
      puVar7[1] = 0;
      *puVar7 = ar5;
      puVar7[2] = ar7;
      puVar7[3] = uVar9;
      uVar9 = (uint)(byte)((byte)(short)ar4 >> 5);
      if (iVar3 >> 8 == 10) {
        *(undefined4 *)0xa05f6920 = *(undefined4 *)0xa05f6920 | 1 << uVar9 + 0xc;
      }
      else if (iVar3 >> 8 == 0xb) {
        *(undefined4 *)0xa05f6924 = *(undefined4 *)0xa05f6924 | 1 << uVar9;
      }
    }
    else {
      puVar7 = (undefined4 *)(uVar10 * 0x10 + 0x8c474bc8);
      if (iVar6 == *(int *)(iVar4 * 4 + 0x8c475bc8)) {
        puVar7[1] = iVar6;
        *(undefined4 **)(iVar4 * 4 + iVar2) = puVar7;
      }
      else {
        *(undefined4 **)(iVar8 + 4) = puVar7;
        puVar7[1] = iVar6;
      }
      *puVar7 = ar5;
      puVar7[2] = ar7;
      puVar7[3] = uVar9;
    }
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}

__asm__(".globl _FUN_8c1fa244\n.set _FUN_8c1fa244, _FUN_8c1fa244_def\n");
