#include "../decls.h"
undefined4 FUN_8c203a92_def(uint ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint ar5_00;
  uint uVar5;
  uint unaff_r12;
  ushort *ar5_01;
  int in_stack_ffffffd0;
  int iStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined4 uStack_1c;
  uint uStack_18;
  
  ar5_00 = ar4;
  FUN_8c205640(&uStack_28,ar4,ar6,ar7);
  ar5_01 = (ushort *)0x0;
  if (DAT_8c275428 != (ushort *)0x0) {
    ar7 = 0xf000;
    puVar4 = DAT_8c275428;
    do {
      if (((*puVar4 & 0xf000) == uStack_28) &&
         (ar5_00 = 0, puVar3 = puVar4, ar6 = uStack_18, uStack_18 != 0)) {
        do {
          puVar4 = puVar3;
          uVar5 = ar5_00;
          if (*(int *)(puVar3 + ar5_00 * 2 + 6) == 0) {
            puVar4 = (ushort *)0x0;
            uVar5 = uStack_18;
            unaff_r12 = ar5_00;
            ar5_01 = puVar3;
          }
          ar5_00 = uVar5 + 1;
          puVar3 = puVar4;
        } while (ar5_00 < uStack_18);
      }
      if (ar5_01 == (ushort *)0x0) {
        puVar4 = *(ushort **)(puVar4 + 2);
      }
    } while (puVar4 != (ushort *)0x0);
  }
  if (ar5_01 == (ushort *)0x0) {
    ar5_01 = (ushort *)FUN_8c205768(0,ar5_00,ar6,ar7);
    if (ar5_01 != (ushort *)0x0) {
      puVar4 = ar5_01 + 6;
      do {
        puVar4[0] = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
      } while (puVar4 < ar5_01 + 0x26);
      unaff_r12 = 0;
      FUN_8c2057e6(&DAT_8c275428,ar5_01,ar6,ar7,in_stack_ffffffd0);
      *ar5_01 = *ar5_01 | (ushort)uStack_28;
      puVar4 = ar5_01;
      if ((_DAT_8c4a9bb0 & 4) == 0) {
        iVar1 = FUN_8c2049ec(1,uStack_1c,ar5_01,ar7);
      }
      else {
        FUN_8c204006(&stack0xffffffd0,&iStack_2c,ar6,ar7);
        iVar1 = FUN_8c2049ec((uint)(in_stack_ffffffd0 < iStack_2c),uStack_1c,ar5_01,ar7);
      }
      if (iVar1 == 0) goto LAB_8c203baa;
      FUN_8c2057c0(ar5_01,uStack_1c,puVar4,ar7,in_stack_ffffffd0);
    }
    uVar2 = 3;
  }
  else {
LAB_8c203baa:
    *(uint *)(ar4 + 0x1c) = unaff_r12 * (uStack_24 >> 2) * 4 + *(int *)(ar5_01 + 4);
    *(uint *)(ar5_01 + unaff_r12 * 2 + 6) = ar4;
    *ar5_01 = *ar5_01 | 2;
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c203a92\n.set _FUN_8c203a92, _FUN_8c203a92_def\n");
