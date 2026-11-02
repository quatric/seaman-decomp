#include "../decls.h"
int FUN_8c01bfd0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined2 uStack_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined2 uStack_18;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  FUN_8c1f8176(&uStack_18,ar5,ar6,ar7);
  uStack_38 = uStack_18;
  uStack_36 = uStack_16;
  uStack_35 = uStack_15;
  uStack_34 = uStack_14;
  uStack_33 = uStack_13;
  uStack_32 = uStack_12;
  uStack_31 = uStack_11;
  iStack_20 = *ar4;
  iStack_24 = *ar4;
  iStack_28 = *ar4;
  iVar2 = (*(code *)(&FUN_8c1fc79e))
                    (*(undefined4 *)0x8c2791b4,(int)ar4 + 0x245c + iStack_20 * 0x28,
                     *(undefined4 *)((int)ar4 + 0x2470 + iStack_24 * 0x28),
                     *(undefined4 *)((int)ar4 + 0x246c + iStack_28 * 0x28),&uStack_38);
  iVar1 = 0x2450;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 3;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c01bfd0\n.set _FUN_8c01bfd0, _FUN_8c01bfd0_def\n");
