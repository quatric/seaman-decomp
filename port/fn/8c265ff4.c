#include "../decls.h"
int FUN_8c265ff4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  int ar5_00;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  undefined4 in_stack_ffffffd4;
  undefined4 uVar1;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  
  ar5_00 = 0;
  uStack_1c = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  uVar1 = in_stack_ffffffd4;
  uStack_20 = ar5;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c265a2c(ar4,&iStack_24,ar6,ar7);
    uVar1 = in_stack_ffffffd4;
    if (iStack_24 == 2) {
      ar5_00 = 0x6000001;
    }
    else {
      _DAT_8c4bd404 = 0;
      *(undefined4 *)(ar4 + 0x18) = 0;
      if (*(int *)(DAT_8c2784c0 + 0x1a8) == 0) {
        ar5_00 = FUN_8c265620(ar4,uStack_20,ar6,ar7);
        uVar1 = in_stack_ffffffd4;
        if (ar5_00 == 0) {
          return 0;
        }
      }
      else if (((*(int *)(DAT_8c2784c0 + 0x1a8) == 1) &&
               (ar5_00 = FUN_8c265d38(ar4,uStack_20,ar6,ar7), uVar1 = in_stack_ffffffd4, ar5_00 == 0
               )) && (*(int *)(DAT_8c2784c0 + 400) == 0)) {
        FUN_8c265c50(&stack0xffffffd4,&uStack_28,ar6,ar7);
        uVar1 = in_stack_ffffffd4;
        ar5_00 = aica_ram_2657ec(in_stack_ffffffd4,uStack_28,ar6,ar7);
        if ((ar5_00 == 0) && (a5 = uStack_28, *(int *)(ar4 + 0x10) == -1)) {
          while (*(int *)(ar4 + 0x18) != 1) {
            FUN_8c2688e0(in_stack_ffffffd4,a5,ar6,ar7);
            noop_2658de(in_stack_ffffffd4,a5,ar6,ar7);
          }
        }
      }
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265ff4,ar5_00,ar6,ar7,uVar1);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265ff4\n.set _FUN_8c265ff4, _FUN_8c265ff4_def\n");
