#include "../decls.h"
undefined4 FUN_8c23a078_def(undefined4 ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *ar4_00;
  ushort auStack_c [2];
  
  iVar1 = (int)(int)0xffffefec;
  do {
    FUN_8c238e98(&stack0xfffffff8 + iVar1,4,ar6,ar7);
    iVar2 = *(int *)(&stack0xfffffff8 + iVar1);
    if ((((iVar2 == 0x4e4c444d) || (iVar2 == 0x564e4f43)) || (iVar2 == 0x494d5650)) ||
       ((iVar2 == 0x43474d49 || (iVar2 == 0x4d4d4f43)))) {
      FUN_8c238e98((int)auStack_c + iVar1,4,ar6,ar7);
LAB_8c23a190:
      uVar3 = FUN_8c238eba(*(undefined4 *)((int)auStack_c + iVar1),1,ar6,ar7);
      ar4_00 = ar6;
    }
    else if (iVar2 == 0x4c505650) {
      uVar3 = 0xc;
      FUN_8c238e98((int)auStack_c + 0x1008 + iVar1,0xc,ar6,ar7);
      (*(code *)(&FUN_8c255f88))
                ((uint)*(ushort *)((int)auStack_c + 0x100c + iVar1),uVar3,ar6,ar7);
      if (*(short *)((int)auStack_c + 0x100e + iVar1) == 6) {
        iVar2 = 4;
      }
      else {
        iVar2 = 2;
      }
      ar4_00 = &stack0xfffffffc + iVar1;
      (*(code *)(&FUN_8c238e98))
                (ar4_00,*(short *)((int)auStack_c + 0x1012 + iVar1) * iVar2,ar6,ar7);
      uVar3 = 1;
      iVar2 = (*(int *)((int)auStack_c + 0x1008 + iVar1) -
              *(short *)((int)auStack_c + 0x1012 + iVar1) * iVar2) + -8;
      *(int *)((int)auStack_c + iVar1) = iVar2;
      FUN_8c238eba(iVar2,1,ar6,ar7);
      (*(code *)(&FUN_8c25603a))
                ((uint)*(ushort *)((int)auStack_c + 0x100c + iVar1),uVar3,ar6,ar7);
      uVar3 = (*(code *)(&FUN_8c2560b4))
                        ((int)*(short *)((int)auStack_c + 0x1010 + iVar1) +
                         *(short *)((int)auStack_c + 0x100e + iVar1) * 0x10,
                         (int)*(short *)((int)auStack_c + 0x1012 + iVar1),ar4_00,ar7);
    }
    else {
      if (iVar2 != 0x54525650) {
        FUN_8c238e98((int)auStack_c + iVar1,4,ar6,ar7);
        goto LAB_8c23a190;
      }
      uVar3 = FUN_8c238eba(0xfffffffc,1,ar6,ar7);
      ar4_00 = ar6;
    }
    ar6 = ar4_00;
    if (*(int *)(&stack0xfffffff8 + iVar1) == 0x54525650) {
      return uVar3;
    }
  } while( true );
}

__asm__(".globl _FUN_8c23a078\n.set _FUN_8c23a078, _FUN_8c23a078_def\n");
