#include "../decls.h"
undefined4 s_SEAMAN_SM_0c813c_def(int ar4,code *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  code *ar5_00;
  undefined4 *a6;
  undefined4 *puVar6;
  char *a7;
  undefined4 in_fr1;
  char cVar7;
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
  
  cVar7 = '\0';
  ar5_00 = ar5;
  if (DAT_8c437224 == '\0') {
    uVar1 = Vec3_ctor_zero(0x8c437228,ar5,ar6,ar7);
    ar6 = -0x73bc8de8;
    ar5_00 = Vec3_dtor;
    global_list_push(uVar1,Vec3_dtor,0x8c437218,ar7);
    DAT_8c437224 = '\x01';
  }
  Vec3_ctor_zero(auStack_24,ar5_00,ar6,ar7);
  Vec3_ctor_zero(auStack_34,ar5_00,ar6,ar7);
  FUN_8c0c84cc(&uStack_54,ar5_00,ar6,ar7);
  if (cVar7 == '\0') {
    uStack_5c = 0;
  }
  else {
    uStack_54 = 0;
    uStack_5c = in_fr1;
  }
  uStack_58 = 0;
  if (cVar7 == '\0') {
    uStack_60 = 0;
  }
  else {
    uStack_5c = 0;
    uStack_60 = in_fr1;
  }
  iVar2 = get_field_d4_0c7424(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
  if (iVar2 == 0) {
    ar6 = ar4 + 8;
    ar5_00 = *(code **)(ar5 + 0x7cc);
    FUN_8c0cbbcc(ar4,ar5_00,ar6,ar7);
  }
  iVar2 = get_field_d0_0c51fc(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
  FUN_8c0ffdb0(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
  a7 = (char *)&uStack_60;
  a6 = &uStack_5c;
  puVar6 = &uStack_58;
  piVar5 = *(int **)(ar4 + iVar2 * 4 + 8);
  (**(code **)(*piVar5 + 0x13c))(piVar5,puVar6,a6,a7);
  if (cVar7 != '\0') {
    uStack_38 = uStack_5c;
    in_fr1 = uStack_60;
  }
  uStack_3c = uStack_60;
  uStack_40 = uStack_5c;
  uStack_44 = uStack_58;
  if (cVar7 == '\0') {
    uStack_54 = 0;
    uStack_4c = in_fr1;
  }
  else {
    uStack_4c = 0x43fa0000;
    uStack_54 = in_fr1;
  }
  uStack_50 = 0x43fa0000;
  if (cVar7 == '\0') {
    uStack_4c = 0;
  }
  else {
    uStack_48 = 0;
  }
  iVar3 = get_field_d4_0c7424(*(undefined4 *)(ar5 + 0x7cc),puVar6,a6,a7);
  if (iVar3 == 0) {
    iVar4 = ar4 + 8;
    iVar3 = FUN_8c0b9244(ar5,iVar4,a6,a7);
    if (iVar3 == 1) {
      (**(code **)(**(int **)(ar4 + 8) + 0xac))(*(int **)(ar4 + 8),iVar4,a6,a7);
    }
    puVar6 = (undefined4 *)0x8c43722c;
    FUN_8c101210(*(undefined4 *)(ar5 + 0x7cc),0x8c437228,0x8c43722c,a7);
    uVar1 = 0x8c437228;
    piVar5 = *(int **)(ar4 + iVar2 * 4 + 8);
    (**(code **)(*piVar5 + 100))(piVar5,0x8c437228,puVar6,a7);
    iVar3 = FUN_8c0637d0(*(undefined4 *)(ar5 + 0x7cc),uVar1,puVar6,a7);
    if ((iVar3 != 0) &&
       (iVar3 = FUN_8c0fff28(*(undefined4 *)(ar5 + 0x7cc),uVar1,puVar6,a7), iVar3 == 4)) {
      FUN_8c0cdf50(ar4,ar5,puVar6,a7);
    }
    if (iVar2 == 0) {
      (**(code **)(**(int **)(ar4 + 8) + 0xc))(*(int **)(ar4 + 8),ar5,&uStack_54,a7);
      puVar6 = &uStack_54;
      (**(code **)(**(int **)(ar4 + 0x14) + 0x10))(*(int **)(ar4 + 0x14),ar5,puVar6,a7);
    }
    else if (iVar2 == 3) {
      (**(code **)(**(int **)(ar4 + 0x14) + 0xc))(*(int **)(ar4 + 0x14),ar5,&uStack_54,a7);
      puVar6 = &uStack_54;
      (**(code **)(**(int **)(ar4 + 8) + 0x10))(*(int **)(ar4 + 8),ar5,puVar6,a7);
    }
    if ((_DAT_8c436928 == 1) && (DAT_8c13bcc4 == 1)) {
      (**(code **)(**(int **)(ar4 + 0x14) + 0xf8))(*(int **)(ar4 + 0x14),0x8c435c7c,puVar6,a7);
      a7 = s_Seaman_Storage_Matrix_8c13d189;
      puVar6 = (undefined4 *)0x600;
      iVar2 = FUN_8c0b6c3c(s_SM2000US_INC_8c13d14a,0x8c435c7c,0x600,s_Seaman_Storage_Matrix_8c13d189
                          );
      if (iVar2 == 0) {
        _DAT_8c436928 = 0;
      }
    }
  }
  else {
    puVar6 = *(undefined4 **)(ar5 + 0x7cc);
    a7 = (char *)ar5;
    iVar4 = FUN_8c0cbd74(ar4,iVar3,puVar6,ar5);
    if (iVar4 == 5) {
      uVar1 = FUN_8c0c8464(*(undefined4 *)(ar5 + 0x7cc),iVar3,puVar6,a7);
      piVar5 = *(int **)(ar4 + iVar2 * 4 + 8);
      (**(code **)(*piVar5 + 0x50))(piVar5,uVar1,puVar6,a7);
    }
  }
  FUN_8c0c8480(&uStack_54,0xffffffff,puVar6,a7);
  Vec3_dtor(auStack_34,0xffffffff,puVar6,a7);
  Vec3_dtor(auStack_24,0xffffffff,puVar6,a7);
  return 0;
}

__asm__(".globl _s_SEAMAN_SM_0c813c\n.set _s_SEAMAN_SM_0c813c, _s_SEAMAN_SM_0c813c_def\n");
