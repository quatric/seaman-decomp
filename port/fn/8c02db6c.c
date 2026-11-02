#include "../decls.h"
undefined4 FUN_8c02db6c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int ar5_00;
  int iVar4;
  undefined4 in_stack_ffffffcc;
  
  iVar3 = ar4;
  ar5_00 = ar5;
  noop_02da0c(ar4,ar5,ar6,ar7,CONCAT31((uint3)((uint)in_stack_ffffffcc >> 8) & 0xffff00,1));
  *(undefined2 *)(ar4 + 0x1e) = 0;
  if (*(char *)(ar4 + 0x4c) == '\x01') {
    *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + 1;
    iVar1 = *(int *)(&DAT_8c1304b0 + ar5 * 0x140);
    iVar4 = *(int *)(ar4 + 0x10) - iVar1;
    if (2 < iVar4) {
      *(undefined1 *)(ar4 + 0x1c) = 0;
    }
    if (*(int *)(ar4 + 0x10) == iVar1) {
      uVar2 = rand(iVar3,ar5_00,ar6,ar7);
      iVar3 = libgcc_divide_helper_01031c(uVar2,100,ar6,ar7);
      if (iVar3 < 0x32) {
        *(undefined1 *)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar4 == 1) {
      uVar2 = rand(iVar3,ar5_00,ar6,ar7);
      iVar3 = libgcc_divide_helper_01031c(uVar2,100,ar6,ar7);
      if (iVar3 < 0x4b) {
        *(undefined1 *)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar4 == 2) {
      *(undefined1 *)(ar4 + 0x1c) = 0;
    }
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(int *)(ar4 + 0x18) = *(int *)(ar4 + 0x18) + 1;
    FUN_8c02dc8c(ar4,ar5,ar6,ar7);
  }
  *(undefined1 *)(ar4 + 0x4c) = 0;
  return 0x4c;
}

__asm__(".globl _FUN_8c02db6c\n.set _FUN_8c02db6c, _FUN_8c02db6c_def\n");
