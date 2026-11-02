#include "../decls.h"
undefined4 s_SEAMAN_SM_0cb670_def(int ar4,code *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 ar5_00;
  int ar5_01;
  int ar6_00;
  undefined4 *a6;
  char *a7;
  undefined4 in_fr1;
  char cVar6;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar6 = '\0';
  uStack_58 = 0;
  pcVar5 = ar5;
  if (DAT_8c437300 == '\0') {
    uVar1 = Vec3_ctor_zero(0x8c437304,ar5,ar6,ar7);
    ar6 = 0x8c4372f4;
    pcVar5 = Vec3_dtor;
    global_list_push(uVar1,Vec3_dtor,0x8c4372f4,ar7);
    DAT_8c437300 = '\x01';
  }
  Vec3_ctor_zero(auStack_24,pcVar5,ar6,ar7);
  Vec3_ctor_zero(auStack_34,pcVar5,ar6,ar7);
  FUN_8c0c84cc(&uStack_54,pcVar5,ar6,ar7);
  if (cVar6 == '\0') {
    uStack_60 = 0;
  }
  else {
    uStack_58 = 0;
    uStack_60 = in_fr1;
  }
  uStack_5c = 0;
  if (cVar6 == '\0') {
    uStack_64 = 0;
  }
  else {
    uStack_60 = 0;
    uStack_64 = in_fr1;
  }
  uVar1 = 0;
  ar6_00 = ar4 + 8;
  ar5_00 = *(undefined4 *)(ar5 + 0x7cc);
  FUN_8c0cbd0c(ar4,ar5_00,ar6_00,ar7);
  iVar2 = get_field_d0_0c51fc(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6_00,ar7);
  ar5_01 = ar4 + 8;
  iVar3 = FUN_8c0b9244(ar5,ar5_01,ar6_00,ar7);
  if (iVar3 == 1) {
    (**(code **)(**(int **)(ar4 + 0x10) + 0xac))(*(int **)(ar4 + 0x10),ar5_01,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0xac))(*(int **)(ar4 + 0xc),ar5_01,ar6_00,ar7);
    _DAT_8c436a28 = 0;
  }
  FUN_8c0ffdb0(*(undefined4 *)(ar5 + 0x7cc),ar5_01,ar6_00,ar7);
  a7 = (char *)&uStack_64;
  piVar4 = *(int **)(ar4 + iVar2 * 4 + 8);
  (**(code **)(*piVar4 + 0x13c))(piVar4,&uStack_5c,&uStack_60,a7);
  if (cVar6 != '\0') {
    uStack_38 = uStack_60;
    in_fr1 = uStack_64;
  }
  uStack_3c = uStack_64;
  uStack_40 = uStack_60;
  uStack_44 = uStack_5c;
  if (cVar6 == '\0') {
    uStack_54 = 0;
    uStack_4c = in_fr1;
  }
  else {
    uStack_4c = 0x43fa0000;
    uStack_54 = in_fr1;
  }
  uStack_50 = 0x43fa0000;
  if (cVar6 == '\0') {
    uStack_4c = 0;
  }
  else {
    uStack_48 = 0;
  }
  a6 = (undefined4 *)0x8c437308;
  FUN_8c101210(*(undefined4 *)(ar5 + 0x7cc),0x8c437304,0x8c437308,a7);
  pcVar5 = (code *)0x8c437304;
  piVar4 = *(int **)(ar4 + iVar2 * 4 + 8);
  (**(code **)(*piVar4 + 100))(piVar4,0x8c437304,a6,a7);
  iVar3 = FUN_8c0637d0(*(undefined4 *)(ar5 + 0x7cc),pcVar5,a6,a7);
  if ((iVar3 != 0) && (iVar3 = FUN_8c0fff28(*(undefined4 *)(ar5 + 0x7cc),pcVar5,a6,a7), iVar3 == 4))
  {
    pcVar5 = ar5;
    FUN_8c0cdf50(ar4,ar5,a6,a7);
  }
  if (iVar2 == 2) {
    FUN_8c101004(*(undefined4 *)(ar5 + 0x7cc),pcVar5,a6,a7);
    FUN_8c101188(*(undefined4 *)(ar5 + 0x7cc),pcVar5,a6,a7);
    uVar1 = FUN_8c101154(*(undefined4 *)(ar5 + 0x7cc),pcVar5,a6,a7);
    (**(code **)(**(int **)(ar4 + 0x10) + 0xc))(*(int **)(ar4 + 0x10),ar5,&uStack_54,a7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x10))(*(int **)(ar4 + 0xc),ar5,&uStack_54,a7);
    a6 = &uStack_54;
    (**(code **)(**(int **)(ar4 + 0x14) + 0x10))(*(int **)(ar4 + 0x14),ar5,a6,a7);
  }
  else if (iVar2 == 1) {
    uVar1 = 0;
    (**(code **)(**(int **)(ar4 + 0xc) + 0xc))(*(int **)(ar4 + 0xc),ar5,&uStack_54,a7);
    (**(code **)(**(int **)(ar4 + 0x10) + 0x10))(*(int **)(ar4 + 0x10),ar5,&uStack_54,a7);
    a6 = &uStack_54;
    (**(code **)(**(int **)(ar4 + 0x14) + 0x10))(*(int **)(ar4 + 0x14),ar5,a6,a7);
  }
  else if (iVar2 == 3) {
    uVar1 = 0;
    (**(code **)(**(int **)(ar4 + 0x14) + 0xc))(*(int **)(ar4 + 0x14),ar5,&uStack_54,a7);
    (**(code **)(**(int **)(ar4 + 0x10) + 0x10))(*(int **)(ar4 + 0x10),ar5,&uStack_54,a7);
    a6 = &uStack_54;
    (**(code **)(**(int **)(ar4 + 0xc) + 0x10))(*(int **)(ar4 + 0xc),ar5,a6,a7);
  }
  FUN_8c0ceff8(&DAT_8c436a28,uVar1,a6,a7);
  if ((_DAT_8c436928 == 1) && (DAT_8c13bcc4 == 1)) {
    (**(code **)(**(int **)(ar4 + 0x14) + 0xf8))(*(int **)(ar4 + 0x14),0x8c435c7c,a6,a7);
    a7 = s_Seaman_Storage_Matrix_8c13d189;
    a6 = (undefined4 *)0x600;
    iVar2 = FUN_8c0b6c3c(s_SM2000US_INC_8c13d14a,0x8c435c7c,0x600,s_Seaman_Storage_Matrix_8c13d189);
    if (iVar2 == 0) {
      _DAT_8c436928 = 0;
    }
  }
  FUN_8c0c8480(&uStack_54,0xffffffff,a6,a7);
  Vec3_dtor(auStack_34,0xffffffff,a6,a7);
  Vec3_dtor(auStack_24,0xffffffff,a6,a7);
  return 0;
}

__asm__(".globl _s_SEAMAN_SM_0cb670\n.set _s_SEAMAN_SM_0cb670, _s_SEAMAN_SM_0cb670_def\n");
