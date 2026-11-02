#include "../decls.h"
undefined4 FUN_8c0e8280_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined1 *ar6_00;
  undefined1 auStack_60 [4];
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [16];
  
  uStack_24 = 0;
  uVar2 = ar5;
  Vec3_ctor_zero(auStack_20,ar5,ar6,ar7);
  ar4_00 = FUN_8c01f520(0x8c3dd7dc,uVar2,ar6,ar7);
  uStack_30 = ar4_00;
  iStack_34 = FUN_8c0637d0(ar5,uVar2,ar6,ar7);
  if (iStack_34 == 0) {
    iStack_38 = FUN_8c100898(ar5,uVar2,ar6,ar7);
    if (iStack_38 == 1) {
      FUN_8c1004b4(ar5,uVar2,ar6,ar7);
    }
    iStack_3c = FUN_8c1008e4(ar5,uVar2,ar6,ar7);
    if (iStack_3c == 1) {
      FUN_8c10052c(ar5,uVar2,ar6,ar7);
    }
    iStack_40 = FUN_8c100930(ar5,uVar2,ar6,ar7);
    if (iStack_40 == 1) {
      FUN_8c1005a4(ar5,uVar2,ar6,ar7);
    }
    iStack_44 = FUN_8c10097c(ar5,uVar2,ar6,ar7);
    if (iStack_44 == 1) {
      FUN_8c10061c(ar5,uVar2,ar6,ar7);
    }
    FUN_8c1002a8(ar5,uVar2,ar6,ar7);
    ar6_00 = auStack_1c;
    FUN_8c101210(ar5,auStack_20,ar6_00,ar7);
    FUN_8c0e89c4(ar4,auStack_20,ar6_00,ar7,&uStack_5c);
    puVar1 = (undefined2 *)(ar4 + 0x224);
    *puVar1 = uStack_5c;
    puVar1[1] = uStack_5a;
    free_if_nonnull_wrap_016660(&uStack_5c,0xffffffff,ar6_00,ar7);
    if ((*(short *)(0x224 + ar4) != -1) && (*(short *)(0x226 + ar4) != -1)) {
      uVar2 = *(undefined4 *)0x8c431a58;
      iStack_48 = FUN_8c01ad9c(ar4_00,uVar2,ar6_00,ar7);
      if (iStack_48 == 4) {
        iStack_54 = (int)*(short *)(0x226 + ar4);
        iStack_58 = (int)*(short *)(0x224 + ar4);
        if ((*(int *)(0xa4 + ar4 + iStack_54 * 0x80 + iStack_58 * 0x20) != 0) &&
           (iStack_4c = FUN_8c10031c(ar5,uVar2,ar6_00,ar7), iStack_4c == 1)) {
          FUN_8c0c51c4(ar5,uVar2,ar6_00,ar7);
          FUN_8c0e84c8(auStack_60,ar4 + 0x224,ar6_00,ar7);
          uStack_50 = FUN_8c0e81f0(ar4,auStack_60,ar6_00,ar7);
          FUN_8c0e59c0(ar5,uStack_50,ar6_00,ar7);
          free_if_nonnull_wrap_016660(auStack_60,0xffffffff,ar6_00,ar7);
          uVar2 = 3;
          FUN_8c0e4330(ar5,3,ar6_00,ar7);
          FUN_8c0c90d0(ar5,uVar2,ar6_00,ar7);
        }
      }
    }
    uStack_2c = 1;
    Vec3_dtor(auStack_20,0xffffffff,ar6_00,ar7);
    uStack_28 = uStack_2c;
  }
  else {
    uStack_28 = 1;
    Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
  }
  return uStack_28;
}

__asm__(".globl _FUN_8c0e8280\n.set _FUN_8c0e8280, _FUN_8c0e8280_def\n");
