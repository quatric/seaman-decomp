#include "../decls.h"
undefined4 FUN_8c0c412c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *ar6_00;
  int iVar2;
  int iVar3;
  int in_stack_ffffffd8;
  
  if (DAT_8c4368b4 == '\0') {
    _DAT_8c4368b0 = 0;
    DAT_8c4368b4 = '\x01';
  }
  if (DAT_8c4368cc == '\0') {
    _DAT_8c4368c8 = 0;
    DAT_8c4368cc = '\x01';
  }
  if (ar5 == 0) {
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      *(undefined4 *)(&DAT_8c4368b8 + iVar2 * 4) = 0xffffff;
    }
  }
  if (ar5 == 1) {
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      *(undefined4 *)(&DAT_8c4368b8 + iVar2 * 4) = 0x7fffffff;
    }
  }
  if (_DAT_8c4368b8 < 0x61000000) {
    if (0xffffff < _DAT_8c4368b8) {
      iVar2 = 0;
      while (iVar3 = iVar2, iVar3 < 4) {
        *(int *)(&DAT_8c4368b8 + iVar3 * 4) = *(int *)(&DAT_8c4368b8 + iVar3 * 4) + -0x1000000;
        in_stack_ffffffd8 = iVar3;
        iVar2 = iVar3 + 1;
      }
    }
  }
  else {
    _DAT_8c4368c8 = _DAT_8c4368c8 + 1;
    if (3 < _DAT_8c4368c8) {
      _DAT_8c4368c8 = 0;
      for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        *(int *)(&DAT_8c4368b8 + iVar2 * 4) = *(int *)(&DAT_8c4368b8 + iVar2 * 4) + -0x1000000;
      }
    }
  }
  uVar1 = 0xffffff;
  if (0xffffff < _DAT_8c4368b8) {
    FUN_8c01538c(ar4 + 4,ar5,ar6,ar7);
    FUN_8c014a94(ar4 + 4,7,ar6,ar7);
    uVar1 = 4;
    ar6_00 = &DAT_8c4368b8;
    iVar2 = ar4 + 0x330;
    FUN_8c016318(ar4 + 0xc,iVar2,&DAT_8c4368b8,4,in_stack_ffffffd8);
    uVar1 = FUN_8c016340(ar4 + 0xc,iVar2,ar6_00,uVar1);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0c412c\n.set _FUN_8c0c412c, _FUN_8c0c412c_def\n");
