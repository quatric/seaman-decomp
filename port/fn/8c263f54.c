#include "../decls.h"
int FUN_8c263f54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *a4;
  undefined4 a5;
  undefined1 *puVar3;
  undefined4 in_PR;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar3 = auStack_8;
  }
  else {
    puVar3 = auStack_c;
  }
  *(undefined4 *)(puVar3 + -4) = in_PR;
  iVar1 = FUN_8c263cd4(ar4,ar5,ar6,ar7);
  if ((1 < iVar1) && (*(int *)(ar4 + 0x14) != 0)) {
    a4 = *(int **)(ar4 + 0x14);
    a5 = 1;
    *(int **)(puVar3 + -0xc) = a4;
    uVar2 = (**(code **)(*a4 + 0x24))(a4,1,ar6,ar7);
    *(undefined4 *)(puVar3 + -0xc) = uVar2;
    uVar2 = FUN_8c263df6(ar4,a5,ar6,ar7);
    *(undefined4 *)(puVar3 + -8) = uVar2;
    FUN_8c263dd8(ar4,a5,ar6,ar7);
    iVar1 = libgcc_divide_helper_010468(*(undefined4 *)(puVar3 + -0xc),*(int *)(puVar3 + -8) * 0x12)
    ;
    iVar1 = iVar1 << 5;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c263f54\n.set _FUN_8c263f54, _FUN_8c263f54_def\n");
