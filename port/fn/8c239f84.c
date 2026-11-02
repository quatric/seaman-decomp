#include "../decls.h"
uint FUN_8c239f84_def(undefined4 *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int ar7_00;
  undefined4 *puVar6;
  uint in_stack_ffffffa8;
  int iStack_54;
  undefined1 auStack_48 [44];
  
  uVar1 = *(ushort *)(ar6 + 4);
  uVar2 = (uint)*(short *)(ar6 + 6);
  iStack_54 = 0;
  iVar5 = (int)*(short *)(ar6 + 6);
  puVar6 = (undefined4 *)*ar4;
  ar7_00 = iVar5;
  if (0 < iVar5) {
    do {
      FUN_8c238e98(auStack_48,ar5,ar6,ar7_00);
      puVar4 = auStack_48;
      uVar2 = FUN_8c238ede(&stack0xffffffa8,auStack_48,ar6,ar7_00,in_stack_ffffffa8);
      puVar6[1] = puVar6[1] & 0xffff0000 | in_stack_ffffffa8 & 0xffff;
      iVar3 = 2;
      if ((uVar1 & 1) != 0) {
        ar6 = log_message(auStack_48 + 2,puVar4,ar6,ar7_00);
        uVar2 = FUN_8c23c814(*puVar6,auStack_48 + 2,ar6,ar7_00);
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
        uVar2 = (uint)uVar1;
        if ((uVar1 & 8) != 0) {
          uVar2 = FUN_8c238eea(puVar6 + 2,puVar4,ar6,ar7_00,in_stack_ffffffa8);
        }
      }
      else if ((uVar1 & 8) != 0) {
        uVar2 = FUN_8c238eea(puVar6 + 2,puVar4,ar6,ar7_00,in_stack_ffffffa8);
        puVar6[1] = puVar6[1] | 0x1000000;
      }
      iStack_54 = iStack_54 + 1;
      puVar6 = puVar6 + 3;
    } while (iStack_54 < iVar5);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c239f84\n.set _FUN_8c239f84, _FUN_8c239f84_def\n");
