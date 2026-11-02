#include "../decls.h"
undefined4
FUN_8c2639fa_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int iVar3;
  int iVar4;
  int *in_stack_ffffffe8;
  
  if (ar4 != (undefined1 *)0x0) {
    puVar2 = ar4;
    FUN_8c263c64(ar4,ar5,ar6,ar7);
    if (*(int *)(ar4 + 0xc) != 0) {
      puVar2 = *(undefined1 **)(ar4 + 0xc);
      FUN_8c2629b2(puVar2,ar5,ar6,ar7);
    }
    if (*(int *)(ar4 + 4) != 0) {
      puVar2 = *(undefined1 **)(ar4 + 4);
      FUN_8c262c04(puVar2,ar5,ar6,ar7,in_stack_ffffffe8);
    }
    if (*(int *)(ar4 + 8) != 0) {
      puVar2 = *(undefined1 **)(ar4 + 8);
      FUN_8c263446(puVar2,ar5,ar6,ar7,in_stack_ffffffe8);
    }
    FUN_8c260ca0(puVar2,ar5,ar6,ar7,in_stack_ffffffe8);
    if (*(int *)(ar4 + 0x10) != 0) {
      in_stack_ffffffe8 = *(int **)(ar4 + 0x10);
      (**(code **)(*in_stack_ffffffe8 + 0xc))(in_stack_ffffffe8,ar5,ar6,ar7);
    }
    for (iVar3 = 0; iVar3 < (char)ar4[3]; iVar3 = iVar3 + 1) {
      iVar4 = iVar3 * 4;
      if (*(int *)(ar4 + iVar4 + 0x18) != 0) {
        (**(code **)(**(int **)(ar4 + iVar4 + 0x18) + 0xc))
                  (*(int **)(ar4 + iVar4 + 0x18),ar5,ar6,ar7);
      }
      if (*(int *)(ar4 + iVar4 + 0x78) != 0) {
        (**(code **)(**(int **)(ar4 + iVar4 + 0x78) + 0xc))
                  (*(int **)(ar4 + iVar4 + 0x78),ar5,ar6,ar7);
      }
      if (*(int *)(ar4 + iVar4 + 0x80) != 0) {
        (**(code **)(**(int **)(ar4 + iVar4 + 0x80) + 0xc))
                  (*(int **)(ar4 + iVar4 + 0x80),ar5,ar6,ar7);
      }
    }
    if (*(int *)(ar4 + 0x74) != 0) {
      FUN_8c26145e(*(undefined4 *)(ar4 + 0x74),ar5,ar6,ar7,in_stack_ffffffe8);
    }
    ar5_00 = 0;
    ar6_00 = 0x94;
    puVar2 = ar4;
    uVar1 = memset(ar4,0,0x94,ar7);
    *ar4 = 0;
    uVar1 = FUN_8c260cc8(puVar2,ar5_00,ar6_00,ar7,uVar1);
    return uVar1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c2639fa\n.set _FUN_8c2639fa, _FUN_8c2639fa_def\n");
