#include "../decls.h"
undefined4 FUN_8c0c9ee0_def(int ar4,undefined1 *ar5,undefined1 *ar6,undefined1 *ar7)

{
  int iVar1;
  undefined4 ar4_00;
  undefined4 a5;
  undefined1 *ar5_00;
  undefined8 in_dr0;
  char cVar2;
  undefined4 in_stack_ffffffa0;
  undefined8 uStack_60;
  int iStack_5c;
  undefined1 auStack_54 [8];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  
  cVar2 = '\0';
  ar5_00 = ar5;
  FUN_8c102748(auStack_1c,ar5,ar6,ar7);
  FUN_8c1026ec(auStack_54,ar5_00,ar6,ar7);
  uStack_3c = DAT_8c13ce70;
  uStack_38 = DAT_8c13ce74;
  uStack_34 = DAT_8c13ce78;
  uStack_30 = DAT_8c13ce7c;
  uStack_4c = DAT_8c13ce80;
  uStack_48 = DAT_8c13ce84;
  uStack_44 = DAT_8c13ce88;
  uStack_40 = DAT_8c13ce8c;
  iVar1 = FUN_8c0637d0(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
  if (iVar1 != 0) {
    FUN_8c0c86d4(*(undefined4 *)(ar4 + 8),auStack_1c,ar6,ar7);
    FUN_8c0c86c0(*(undefined4 *)(ar4 + 8),auStack_54,ar6,ar7);
    FUN_8c0c8698(*(undefined4 *)(ar4 + 8),auStack_2c,ar6,ar7);
    ar7 = auStack_2c;
    ar6 = auStack_54;
    ar5_00 = auStack_1c;
    FUN_8c0fff54(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
  }
  (**(code **)(**(int **)(ar4 + 8) + 0xb0))(*(int **)(ar4 + 8),ar5_00,ar6,ar7);
  if (((*(int *)(ar4 + 0x2d1b0) == 4) && (_DAT_8c437044 != 0)) && (_DAT_8c437044 != 3)) {
    a5 = 0x900;
    FUN_8c233da2(0xffffffff,0x900,ar6,ar7,in_stack_ffffffa0);
    (**(code **)(**(int **)(ar4 + 8) + 0x184))(*(int **)(ar4 + 8),a5,ar6,ar7);
    uStack_60 = in_dr0;
    if (cVar2 == '\0') {
      uStack_60 = CONCAT44(iVar1,(int)((ulonglong)in_dr0 >> 0x20));
    }
    FUN_8c01538c(0x8c437028,a5,ar6,ar7);
    ar4_00 = 0;
    FUN_8c256328(0,a5,ar6,ar7,in_stack_ffffffa0);
    FUN_8c019058(ar4_00,a5,ar6,ar7);
    FUN_8c019128(ar4_00,a5,ar6,ar7);
    FUN_8c019198(ar4_00,a5,ar6,ar7);
    FUN_8c015adc(0x8c437030,a5,ar6,ar7);
    FUN_8c256210(1,a5,ar6,ar7);
    ar5_00 = (undefined1 *)0x800;
    FUN_8c233da2(0xffffffff,0x800,ar6,ar7,in_stack_ffffffa0);
  }
  (**(code **)(**(int **)(ar4 + 8) + 0x40))(*(int **)(ar4 + 8),ar5_00,ar6,ar7);
  free_if_nonnull_wrap_10270c(auStack_54,0xffffffff,ar6,ar7);
  free_if_nonnull_wrap_102790(auStack_1c,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0c9ee0\n.set _FUN_8c0c9ee0, _FUN_8c0c9ee0_def\n");
