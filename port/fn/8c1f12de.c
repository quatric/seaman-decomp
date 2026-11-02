#include "../decls.h"
undefined4 FUN_8c1f12de_def(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = syscall_1f10ec(ar4,&iStack_18,ar6,ar7);
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar1 == 1) {
    *ar5 = uStack_10;
    ar5[2] = uStack_c;
    return 4;
  }
  if (iVar1 == 2) {
    *ar5 = uStack_10;
    return 1;
  }
  if (iVar1 == 3) {
    return 0x41;
  }
  if (iVar1 == 4) {
    return 0x43;
  }
  if (iVar1 != -1) {
    return iVar1;
  }
  ar5[1] = uStack_14;
  if (iStack_18 == 0) {
    *ar5 = 0xffffffe5;
    return 5;
  }
  if (iStack_18 == 1) {
    uVar2 = 0xffffffe4;
LAB_8c1f1386:
    *ar5 = uVar2;
  }
  else {
    if (iStack_18 == 2) {
      uVar2 = 0xffffffe3;
    }
    else {
      if (iStack_18 == 3) {
        uVar2 = 0xffffffe2;
        goto LAB_8c1f1386;
      }
      if (iStack_18 == 4) {
        uVar2 = 0xffffffe1;
      }
      else {
        if (iStack_18 == 5) {
          uVar2 = 0xffffffe0;
          goto LAB_8c1f1386;
        }
        if (iStack_18 == 6) {
          uVar2 = 0xffffffdf;
        }
        else {
          if (iStack_18 == 7) {
            uVar2 = 0xffffffde;
            goto LAB_8c1f1386;
          }
          if (iStack_18 == 0xb) {
            uVar2 = 0xffffffdd;
          }
          else {
            if (iStack_18 == 0x10) {
              uVar2 = 0xffffffdc;
              goto LAB_8c1f1386;
            }
            uVar2 = 0xffffffe6;
          }
        }
      }
    }
    *ar5 = uVar2;
  }
  return 5;
}

__asm__(".globl _FUN_8c1f12de\n.set _FUN_8c1f12de, _FUN_8c1f12de_def\n");
