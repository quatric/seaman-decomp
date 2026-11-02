#include "../decls.h"
undefined4 FUN_8c210d80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 ar4_00;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *apuStack_20 [2];
  
  ar4_00 = 0x10000000;
  puVar1 = (&sh4_dmac_202f40);
  iVar3 = ar4 * 4;
  iVar5 = *(int *)(*(undefined4 *)0x8c4aa21c + iVar3) - *(int *)(0x8c4aa268 + iVar3);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 3;
  }
  iVar6 = (int)0x100;
  puVar4 = (undefined4 *)(iVar3 + 0x8c4aa268);
  do {
    iVar2 = (*(code *)puVar1)(ar4_00,*puVar4,(iVar5 >> 2) << 2,0x10,apuStack_20);
  } while (iVar2 == iVar6);
  *(int *)(*(undefined4 *)0x8c4aa21c + iVar3) =
       *(int *)(0x8c4aa288 + iVar3) * 4 + *(int *)(0x8c4aa268 + iVar3);
  *(undefined4 *)0x8c4a9fd4 = *apuStack_20[0];
  return 0;
}

__asm__(".globl _FUN_8c210d80\n.set _FUN_8c210d80, _FUN_8c210d80_def\n");
