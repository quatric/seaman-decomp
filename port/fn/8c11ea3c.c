#include "../decls.h"
undefined4 FUN_8c11ea3c_def(int ar4,int *ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 ar5_00;
  int *ar5_01;
  int aiStack_5c [20];
  undefined4 uStack_c;
  
  uStack_c = 0;
  ar5_01 = ar5;
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    if ((*(short *)(ar4 + 0x3e) != 2) && (*(short *)(ar4 + 0x3e) != 1)) {
      ar5_00 = 7;
      uVar4 = *(undefined4 *)(0xfc + ar4);
LAB_8c11eaae:
      uVar4 = FUN_8c11cd02(uVar4,ar5_00,ar6,ar7);
      return uVar4;
    }
    *(undefined4 *)(ar4 + 0x40) = 0;
    if (ar5 != (int *)0x0) {
      ar6 = (int)0x80;
      ar5_01 = (int *)(**(int **)(0x100 + ar4) + 8);
      iVar2 = FUN_8c013ec0(*ar5 + 8,ar5_01,ar6,ar7);
      if (iVar2 != 0) {
        ar5_00 = 0xc;
        uVar4 = *(undefined4 *)(0xfc + ar4);
        goto LAB_8c11eaae;
      }
    }
    iVar2 = (int)0x104;
    if (*(int *)(iVar2 + ar4) != 0) {
      *(int *)(*(int *)(iVar2 + ar4) + 4) = *(int *)(*(int *)(iVar2 + ar4) + 4) + -1;
    }
    puVar1 = (&FUN_8c11c99a);
    if (ar5 == (int *)0x0) {
      *(undefined4 *)(iVar2 + ar4) = 0;
      uVar3 = (*(code *)puVar1)(ar4,1,ar6,ar7);
      return uVar3 & 0xff;
    }
    iVar2 = FUN_8c11cb54(ar5,ar5_01,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c10ca2e(aiStack_5c,ar5_01,ar6,ar7);
      aiStack_5c[0] = *ar5;
      uVar3 = FUN_8c120348(ar4 + 0x48,0x24,aiStack_5c,0);
      if ((uVar3 & 0xff) == 0) {
        iVar2 = (int)0x104;
        ar5[1] = ar5[1] + 1;
        *(int **)(iVar2 + ar4) = ar5;
        return *(undefined4 *)(ar4 + 0x40);
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11ea3c\n.set _FUN_8c11ea3c, _FUN_8c11ea3c_def\n");
