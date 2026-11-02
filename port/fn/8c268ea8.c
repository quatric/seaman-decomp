#include "../decls.h"
undefined4 FUN_8c268ea8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_1c [4];
  int *piStack_18;
  
  FUN_8c26a100(auStack_1c,ar5,ar6,ar7);
  piStack_18 = *(int **)(ar4 + 0x38);
  iVar4 = *(int *)(ar4 + 0x30);
  uVar1 = (**(code **)(*piStack_18 + 0x20))(piStack_18,0,ar6,ar7);
  iVar2 = libgcc_divide_helper_010468(0x20,*(undefined4 *)(ar4 + 8));
  iVar2 = iVar2 << 3;
  iVar3 = libgcc_divide_helper_010468(uVar1,iVar2);
  iVar5 = iVar3 * iVar2 - iVar4;
  *(int *)(ar4 + 0x30) = iVar3 * iVar2;
  if (iVar5 < 0) {
    iVar5 = iVar5 + *(int *)(ar4 + 0x28);
  }
  iVar2 = *(int *)(ar4 + 0x34) - iVar5;
  if (iVar2 < 0) {
    *(undefined1 *)(ar4 + 4) = 1;
    iVar2 = 0;
    iVar5 = *(int *)(ar4 + 0x2c) - iVar4;
  }
  if ((*(char *)(ar4 + 4) == '\x01') &&
     (iVar3 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,uVar1,ar6,ar7), iVar3 == 1)) {
    *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)(ar4 + 0x30);
    *(undefined1 *)(ar4 + 4) = 0;
  }
  *(int *)(ar4 + 0x34) = iVar2;
  *(int *)(ar4 + 0x48) = *(int *)(ar4 + 0x48) + iVar5;
  uVar1 = FUN_8c26a118(auStack_1c,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c268ea8\n.set _FUN_8c268ea8, _FUN_8c268ea8_def\n");
