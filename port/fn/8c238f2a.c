#include "../decls.h"
undefined4 FUN_8c238f2a_def(undefined4 *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint in_stack_ffffffa4;
  undefined1 auStack_48 [44];
  
  uVar1 = *(ushort *)(ar6 + 4);
  sVar2 = *(short *)(ar6 + 6);
  iVar5 = 0;
  puVar6 = (undefined4 *)*ar4;
  if (0 < sVar2) {
    do {
      iVar3 = FUN_8c259c48(auStack_48,ar5,ar6,ar7);
      if (iVar3 < 0) {
        return 0xffffffff;
      }
      puVar4 = auStack_48;
      FUN_8c238ede(&stack0xffffffa4,auStack_48,ar6,ar7,in_stack_ffffffa4);
      puVar6[1] = puVar6[1] & 0xffff0000 | in_stack_ffffffa4 & 0xffff;
      iVar3 = 2;
      if ((uVar1 & 1) != 0) {
        ar6 = log_message(auStack_48 + 2,puVar4,ar6,ar7);
        FUN_8c23c814(*puVar6,auStack_48 + 2,ar6,ar7);
        iVar3 = 0x1e;
      }
      if ((uVar1 & 2) != 0) {
        iVar3 = iVar3 + 2;
      }
      if ((uVar1 & 4) != 0) {
        iVar3 = iVar3 + 2;
      }
      puVar4 = auStack_48 + iVar3;
      if ((uVar1 & 0x400) == 0) {
        if ((uVar1 & 8) != 0) {
          FUN_8c238eea(puVar6 + 2,puVar4,ar6,ar7,in_stack_ffffffa4);
        }
      }
      else if ((uVar1 & 8) != 0) {
        FUN_8c238eea(puVar6 + 2,puVar4,ar6,ar7,in_stack_ffffffa4);
        puVar6[1] = puVar6[1] | 0x1000000;
      }
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 3;
    } while (iVar5 < sVar2);
  }
  return 1;
}

__asm__(".globl _FUN_8c238f2a\n.set _FUN_8c238f2a, _FUN_8c238f2a_def\n");
