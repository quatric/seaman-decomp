#include "../decls.h"
undefined4 FUN_8c0cf39c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_stack_ffffffa0;
  
  iVar2 = 0;
  if (DAT_8c43742c == '\0') {
    _DAT_8c437428 = 0;
    DAT_8c43742c = '\x01';
  }
  if (*(int *)(ar4 + 0x154) == 0) {
    for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
      for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
        FUN_8c0cf630(iVar2 * 0x78 + ar4 + iVar3 * 0x18 + 0x174,ar5,ar6,ar7,in_stack_ffffffa0);
        FUN_8c0c5304(iVar2 * 0x78 + ar4 + iVar3 * 0x18 + 0x174,ar5,ar6,ar7);
      }
    }
    _DAT_8c437428 = FUN_8c0cf9b4(ar4,ar5,ar6,ar7);
    FUN_8c0cf628(_DAT_8c437428,ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x154) = 1;
  }
  else if (*(int *)(ar4 + 0x154) == 1) {
    if ((2.0 <= *(float *)(_DAT_8c437428 + 0x10)) &&
       (_DAT_8c437428 = FUN_8c0cf9b4(ar4,ar5,ar6,ar7), _DAT_8c437428 != 0)) {
      FUN_8c0cf628(_DAT_8c437428,ar5,ar6,ar7);
    }
    for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
      for (iVar4 = 0; iVar4 < 5; iVar4 = iVar4 + 1) {
        iVar1 = get_field_14_0cf620(iVar3 * 0x78 + ar4 + iVar4 * 0x18 + 0x174,ar5,ar6,ar7);
        if (iVar1 == 1) {
          FUN_8c0c5294(iVar3 * 0x78 + ar4 + iVar4 * 0x18 + 0x174,ar5,ar6,ar7);
        }
      }
    }
    for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
      for (iVar4 = 0; iVar4 < 5; iVar4 = iVar4 + 1) {
        iVar1 = get_field_14_0cf620(iVar3 * 0x78 + ar4 + iVar4 * 0x18 + 0x174,ar5,ar6,ar7);
        if (iVar1 == 1) {
          iVar2 = iVar2 + 1;
        }
      }
    }
    if ((_DAT_8c437428 == 0) && (iVar2 == 0)) {
      *(undefined4 *)(ar4 + 0x154) = 0;
      return 2;
    }
  }
  return *(undefined4 *)(ar4 + 0x154);
}

__asm__(".globl _FUN_8c0cf39c\n.set _FUN_8c0cf39c, _FUN_8c0cf39c_def\n");
