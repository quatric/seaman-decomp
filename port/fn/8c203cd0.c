#include "../decls.h"
undefined4 FUN_8c203cd0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint unaff_r11;
  ushort *ar5_00;
  uint in_stack_ffffffd4;
  uint uStack_28;
  uint uStack_1c;
  
  FUN_8c205640(&stack0xffffffd4,ar4,ar6,ar7);
  uVar7 = 0;
  ar5_00 = (ushort *)0x0;
  puVar4 = DAT_8c275428;
  while (puVar4 != (ushort *)0x0) {
    if (((*puVar4 & 0xf000) == in_stack_ffffffd4) && (uVar5 = 0, puVar3 = puVar4, uStack_1c != 0)) {
      do {
        puVar4 = puVar3;
        uVar6 = uVar5;
        if ((*(int *)(puVar3 + uVar5 * 2 + 6) != 0) &&
           (uVar5 * (uStack_28 >> 2) * 4 + *(int *)(puVar3 + 4) == *(int *)(ar4 + 0x1c))) {
          puVar4 = (ushort *)0x0;
          uVar6 = uStack_1c;
          unaff_r11 = uVar5;
          ar5_00 = puVar3;
        }
        uVar5 = uVar6 + 1;
        puVar3 = puVar4;
      } while (uVar5 < uStack_1c);
    }
    if (ar5_00 == (ushort *)0x0) {
      puVar4 = *(ushort **)(puVar4 + 2);
    }
  }
  if (ar5_00 == (ushort *)0x0) {
    uVar7 = 7;
  }
  else {
    bVar1 = false;
    uVar5 = 0;
    (ar5_00 + unaff_r11 * 2 + 6)[0] = 0;
    (ar5_00 + unaff_r11 * 2 + 6)[1] = 0;
    if (uStack_1c != 0) {
      do {
        iVar2 = uVar5 * 2;
        uVar5 = uVar5 + 1;
        if (*(int *)(ar5_00 + iVar2 + 6) != 0) {
          bVar1 = true;
        }
      } while (uVar5 < uStack_1c);
    }
    if (!bVar1) {
      iVar2 = FUN_8c203bda(*(undefined4 *)(ar5_00 + 4),1,0,uStack_1c);
      if (iVar2 != 0) {
        return iVar2;
      }
      puVar4 = ar5_00;
      FUN_8c2057f8(&DAT_8c275428,ar5_00,uVar7,uStack_1c);
      FUN_8c2057c0(ar5_00,puVar4,uVar7,uStack_1c,in_stack_ffffffd4);
    }
    uVar7 = 0;
  }
  return uVar7;
}

__asm__(".globl _FUN_8c203cd0\n.set _FUN_8c203cd0, _FUN_8c203cd0_def\n");
