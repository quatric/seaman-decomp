#include "../decls.h"
undefined4 FUN_8c0e7a78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_stack_ffffff50;
  int ain0;
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [20];
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  
  Vec3_set_zero(auStack_30,ar5,ar6,ar7);
  uStack_50 = DAT_8c13f764;
  uStack_4c = DAT_8c13f768;
  uStack_48 = DAT_8c13f76c;
  uStack_44 = DAT_8c13f770;
  uStack_40 = DAT_8c13f774;
  uStack_3c = DAT_8c13f778;
  uStack_38 = DAT_8c13f77c;
  uStack_34 = DAT_8c13f780;
  FUN_8c0162f8(auStack_74,ar5,ar6,ar7);
  iVar1 = ar4 + 0x228;
  FUN_8c0194c0(iVar1,ar5,ar6,ar7);
  FUN_8c219038(iVar1,ar5,ar6,ar7);
  FUN_8c21907e(iVar1,ar5,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 0x414) + 0x14))((int *)(ar4 + 0x414),ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x410) == 0) {
    free_if_nonnull_wrap_0151a0(auStack_74,0xffffffff,ar6,ar7);
    object_dtor_delete(auStack_30,0xffffffff,ar6,ar7);
  }
  else {
    if ((*(short *)(ar4 + 0x224) != -1) && (*(short *)(ar4 + 0x226) != -1)) {
      piVar4 = (int *)(ar4 + *(short *)(ar4 + 0x226) * 0x80 + *(short *)(ar4 + 0x224) * 0x20 + 0xa4)
      ;
      uVar2 = 0;
      FUN_8c256328(0,ar5,ar6,ar7,in_stack_ffffff50);
      FUN_8c019058(uVar2,ar5,ar6,ar7);
      FUN_8c016524(ar4 + 0x444,ar5,ar6,ar7);
      FUN_8c256210(1,ar5,ar6,ar7);
      if (*piVar4 != 0) {
        ar7 = 4;
        ar6 = 0x8c437c48;
        FUN_8c016318(auStack_74,&uStack_50,0x8c437c48,4,in_stack_ffffff50);
        FUN_8c016324(auStack_74,&uStack_60,ar6,ar7);
        uVar2 = 0x80000060;
        FUN_8c015198(auStack_74,0x80000060,ar6,ar7,in_stack_ffffff50);
        FUN_8c01538c(ar4 + 0x488,uVar2,ar6,ar7);
        ar5 = 1;
        FUN_8c014a94(ar4 + 0x488,1,ar6,ar7);
        iVar1 = get_field_24_05c284(*piVar4,ar5,ar6,ar7);
        if (iVar1 == 0) {
          uStack_60 = 0;
          uStack_5e = 0x1f;
          uStack_5c = 0;
          uStack_5a = 0;
          uStack_58 = 0xff;
          uStack_56 = 0;
          uStack_54 = 0xff;
          uStack_52 = 0x1f;
        }
        else if (iVar1 == 10) {
          iVar1 = (**(code **)(*(int *)(*piVar4 + 8) + 0x114))(*piVar4,ar5,ar6,ar7);
          if (iVar1 == 0x11) {
            uStack_60 = 0;
            uStack_5e = 0x3f;
            uStack_5c = 0;
            uStack_5a = 0x20;
            uStack_58 = 0xff;
            uStack_56 = 0x20;
            uStack_54 = 0xff;
            uStack_52 = 0x3f;
          }
          else {
            uStack_60 = 0;
            uStack_5e = 0x9f;
            uStack_5c = 0;
            uStack_5a = 0x80;
            uStack_58 = 0xff;
            uStack_56 = 0x80;
            uStack_54 = 0xff;
            uStack_52 = 0x9f;
          }
        }
        else if (iVar1 == 0xe) {
          uStack_60 = 0;
          uStack_5e = 0x7f;
          uStack_5c = 0;
          uStack_5a = 0x60;
          uStack_58 = 0xff;
          uStack_56 = 0x60;
          uStack_54 = 0xff;
          uStack_52 = 0x7f;
        }
        else if (iVar1 == 0xf) {
          uStack_60 = 0;
          uStack_5e = 0x5f;
          uStack_5c = 0;
          uStack_5a = 0x40;
          uStack_58 = 0xff;
          uStack_56 = 0x40;
          uStack_54 = 0xff;
          uStack_52 = 0x5f;
        }
        FUN_8c01636c(auStack_74,ar5,ar6,ar7);
      }
    }
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
      for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
        if (*(int *)(ar4 + iVar1 * 0x80 + iVar3 * 0x20 + 0xa4) != 0) {
          piVar4 = (int *)(ar4 + iVar1 * 0x80 + iVar3 * 0x20 + 0xa4);
          ain0 = iVar3;
          (**(code **)(*(int *)(*piVar4 + 8) + 0x124))(*piVar4,ar5,ar6,ar7);
          (**(code **)(*(int *)(*piVar4 + 8) + 0x128))(*piVar4,ar5,ar6,ar7);
          (**(code **)(*(int *)(*piVar4 + 8) + 300))(*piVar4,ar5,ar6,ar7);
          vec3_copy_8c023d8c(auStack_30,auStack_80,ar6,ar7);
          ar5 = 0xffffffff;
          object_dtor_delete(auStack_80,0xffffffff,ar6,ar7);
          ar4_00 = *piVar4;
          FUN_8c0f4b44(ar4_00,ar5,ar6,ar7);
          FUN_8c219070(ar4_00,ar5,ar6,ar7);
          uVar2 = 0;
          FUN_8c256328(0,ar5,ar6,ar7,ain0);
          FUN_8c019058(uVar2,ar5,ar6,ar7);
          FUN_8c019128(uVar2,ar5,ar6,ar7);
          FUN_8c0190f0(uVar2,ar5,ar6,ar7);
          FUN_8c019160(uVar2,ar5,ar6,ar7);
          FUN_8c019198(uVar2,ar5,ar6,ar7);
          (**(code **)(*(int *)(*piVar4 + 8) + 0x3c))(*piVar4,ar5,ar6,ar7);
          FUN_8c256210(1,ar5,ar6,ar7);
        }
      }
    }
    free_if_nonnull_wrap_0151a0(auStack_74,0xffffffff,ar6,ar7);
    object_dtor_delete(auStack_30,0xffffffff,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c0e7a78\n.set _FUN_8c0e7a78, _FUN_8c0e7a78_def\n");
