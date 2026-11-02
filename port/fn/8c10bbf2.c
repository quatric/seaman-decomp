#include "../decls.h"
int FUN_8c10bbf2_def(undefined4 *ar4,int *ar5,uint *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piStack_28;
  uint *puStack_24;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar4 = 0;
  iVar3 = ar4[1];
  uStack_1c = *(undefined4 *)(iVar3 + 4);
  uStack_18 = ar4[2];
  puStack_24 = ar6;
  puStack_20 = ar4;
  iVar1 = FUN_8c11e48a(*ar4,&piStack_28,ar6,ar7);
  if (iVar1 != 0) {
    iVar4 = FUN_8c11cd44(*(undefined4 *)puStack_20[1],*ar4,ar6,ar7);
  }
  if (iVar4 == 0) {
    puVar2 = (undefined4 *)(**(code **)(iVar3 + 8))(8,&uStack_1c,ar6,ar7);
    if (puVar2 == (undefined4 *)0x0) {
      iVar4 = 1;
    }
    else {
      *ar5 = (int)puVar2;
      *puVar2 = ar4[9];
      puVar2[1] = ar4[10];
    }
    if (iVar4 == 0) {
      if (*piStack_28 != **(int **)*ar5) {
        iVar4 = 0xb;
      }
      if ((1 < *puStack_24) && (piStack_28[1] != **(int **)ar5[1])) {
        iVar4 = 0xb;
      }
    }
    (**(code **)(iVar3 + 0xc))(piStack_28,&uStack_1c,ar6,ar7);
  }
  return iVar4;
}

__asm__(".globl _FUN_8c10bbf2\n.set _FUN_8c10bbf2, _FUN_8c10bbf2_def\n");
