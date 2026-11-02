#include "../decls.h"
undefined4 s_WARNING_EXIT_0c76d0_def(int ar4,int ar5,undefined1 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  code *ar5_00;
  undefined *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  char *ar7_00;
  undefined4 uVar6;
  undefined4 ar7_01;
  undefined4 uVar7;
  undefined4 in_fr1;
  char cVar8;
  undefined4 in_stack_ffffff68;
  undefined1 auStack_2c [24];
  
  cVar8 = '\0';
  uVar7 = 2;
  if (DAT_8c437134 == '\0') {
    ar6 = &DAT_8c437130;
    _DAT_8c437130 = 0;
    DAT_8c437134 = '\x01';
  }
  if (DAT_8c43713c == '\0') {
    _DAT_8c437138 = 0;
    DAT_8c43713c = '\x01';
  }
  pcVar5 = (code *)(int)DAT_8c437180;
  if (pcVar5 == (code *)0x0) {
    uVar1 = FUN_8c0162f8(0x8c437184,FUN_8c0162f8,ar6,0);
    ar6 = (undefined1 *)0x8c437174;
    global_list_push(uVar1,free_if_nonnull_wrap_0151a0,0x8c437174,pcVar5);
    DAT_8c437180 = '\x01';
  }
  ar5_00 = (code *)&DAT_8c4371a4;
  if (DAT_8c4371a4 == '\0') {
    pcVar5 = FUN_8c0162f8;
    uVar1 = FUN_8c0162f8(0x8c4371a8,&DAT_8c4371a4,ar6,FUN_8c0162f8);
    ar6 = (undefined1 *)0x8c437198;
    ar5_00 = free_if_nonnull_wrap_0151a0;
    global_list_push(uVar1,free_if_nonnull_wrap_0151a0,0x8c437198,pcVar5);
    DAT_8c4371a4 = '\x01';
  }
  if (DAT_8c4371c8 == '\0') {
    uVar1 = FUN_8c0162f8(0x8c4371cc,ar5_00,ar6,pcVar5);
    ar6 = (undefined1 *)0x8c4371bc;
    global_list_push(uVar1,free_if_nonnull_wrap_0151a0,0x8c4371bc,pcVar5);
    ar5_00 = (code *)0x1;
    DAT_8c4371c8 = '\x01';
  }
  if (DAT_8c4371e4 == '\0') {
    _DAT_8c4371e0 = (code *)0x0;
    DAT_8c4371e4 = '\x01';
  }
  FUN_8c0162f8(auStack_2c,ar5_00,ar6,pcVar5);
  if (cVar8 == '\0') {
    _DAT_8c4371e8 = 0;
    uVar1 = in_fr1;
  }
  else {
    uVar1 = 0x43f00000;
    _DAT_8c4371e8 = in_fr1;
  }
  _DAT_8c4371ec = 0x43f00000;
  if (cVar8 == '\0') {
    _DAT_8c4371f4 = 0;
    _DAT_8c4371fc = uVar1;
  }
  else {
    _DAT_8c4371fc = 0x44200000;
    _DAT_8c4371f4 = uVar1;
  }
  _DAT_8c4371f8 = 0x44200000;
  if (cVar8 == '\0') {
    _DAT_8c4371fc = 0;
  }
  _DAT_8c437204 = 0x43f00000;
  _DAT_8c437200 = 0x44200000;
  _DAT_8c437214 = 0x90000000;
  _DAT_8c437210 = 0x90000000;
  _DAT_8c43720c = 0x90000000;
  _DAT_8c437208 = 0x90000000;
  uVar1 = 4;
  puVar4 = &DAT_8c437208;
  _DAT_8c4371f0 = _DAT_8c4371f4;
  FUN_8c016318(auStack_2c,&DAT_8c4371e8,&DAT_8c437208,4,in_stack_ffffff68);
  FUN_8c015198(auStack_2c,0x60,puVar4,uVar1,in_stack_ffffff68);
  pcVar5 = FUN_8c016340;
  FUN_8c016340(auStack_2c,FUN_8c016340,puVar4,uVar1);
  ar7_00 = (char *)((int)_DAT_8c4371e0 + 1);
  puVar4 = &DAT_8c437138;
  _DAT_8c4371e0 = (code *)ar7_00;
  if ((4 < _DAT_8c437138) || (_DAT_8c437138 < 0)) goto LAB_8c0c7fc4;
                    
  switch(_DAT_8c437138) {
  case 0:
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      *(undefined4 *)(iVar2 * 4 + -0x73bc8ebc) = 0xffffffff;
      *(undefined4 *)(iVar2 * 4 + -0x73bc8eac) = 0xff00ff00;
    }
    _DAT_8c437164 = 0;
    _DAT_8c437166 = 0xff;
    _DAT_8c437168 = 0;
    _DAT_8c43716a = 0;
    _DAT_8c43716c = 0xff;
    _DAT_8c43716e = 0;
    _DAT_8c437170 = 0xff;
    _DAT_8c437172 = 0xff;
    FUN_8c016324(0x8c437184,&DAT_8c437164,&DAT_8c437138,ar7_00);
    FUN_8c015198(0x8c437184,0x80000060,puVar4,ar7_00,in_stack_ffffff68);
    FUN_8c016324(0x8c4371a8,&DAT_8c437164,puVar4,ar7_00);
    FUN_8c015198(0x8c4371a8,0x80000060,puVar4,ar7_00,in_stack_ffffff68);
    pcVar5 = FUN_8c016324;
    FUN_8c016324(0x8c4371cc,&DAT_8c437164,puVar4,FUN_8c016324);
    FUN_8c015198(0x8c4371cc,0x80000060,puVar4,pcVar5,in_stack_ffffff68);
    _DAT_8c4371e0 = (code *)0x0;
    _DAT_8c437138 = 1;
    ar7_00 = (char *)pcVar5;
  case 1:
    iVar2 = FUN_8c021f18(0x8c2b59d0,_DAT_8c437140,puVar4,ar7_00);
    if (iVar2 != 2) {
      pack_release_entry_handle(0x8c2b59d0,_DAT_8c437140,puVar4,ar7_00);
    }
    if (5 < (int)_DAT_8c4371e0) {
      _DAT_8c437140 =
           (code *)pack_acquire_entry_handle
                             (0x8c2b59d0,s_WARNING_EXIT_8c13d17c,puVar4,pack_acquire_entry_handle);
      FUN_8c021d90(0x8c2b59d0,_DAT_8c437140,0,0);
      _DAT_8c437138 = 2;
    }
  case 2:
    uVar6 = 0;
    uVar1 = 0;
    FUN_8c021d90(0x8c2b59d0,_DAT_8c437140,0,0);
    FUN_8c01538c(ar4 + 0x2d3f4,FUN_8c01538c,uVar1,uVar6);
    FUN_8c014a94(ar4 + 0x2d3f4,0,uVar1,uVar6);
    uVar6 = 4;
    uVar1 = 0x8c437144;
    puVar3 = &DAT_8c13ce50;
    FUN_8c016318(0x8c4371cc,&DAT_8c13ce50,0x8c437144,4,in_stack_ffffff68);
    FUN_8c016340(0x8c4371cc,puVar3,uVar1,uVar6);
    iVar2 = FUN_8c0bf708(*(undefined4 *)(ar5 + 0x7cc),puVar3,uVar1,uVar6);
    if ((iVar2 == 1) && (_DAT_8c437130 == 1)) {
      _DAT_8c437130 = 0;
    }
    else {
      iVar2 = FUN_8c0bf690(*(undefined4 *)(ar5 + 0x7cc),puVar3,uVar1,uVar6);
      if ((iVar2 == 1) && (_DAT_8c437130 == 0)) {
        _DAT_8c437130 = 1;
      }
    }
    if (_DAT_8c437130 == 0) {
      FUN_8c01538c(ar4 + 0x2d3f4,puVar3,uVar1,uVar6);
      FUN_8c014a94(ar4 + 0x2d3f4,2,uVar1,uVar6);
      uVar6 = 4;
      uVar1 = 0x8c437154;
      puVar3 = &DAT_8c13ce30;
      FUN_8c016318(0x8c4371a8,&DAT_8c13ce30,0x8c437154,4,in_stack_ffffff68);
      FUN_8c016340(0x8c4371a8,puVar3,uVar1,uVar6);
      FUN_8c01538c(ar4 + 0x2d3f4,puVar3,uVar1,uVar6);
      FUN_8c014a94(ar4 + 0x2d3f4,1,uVar1,uVar6);
      ar7_00 = (char *)0x4;
      puVar4 = (undefined1 *)0x8c437144;
      pcVar5 = (code *)&DAT_8c13cdd0;
      FUN_8c016318(0x8c437184,&DAT_8c13cdd0,0x8c437144,4,in_stack_ffffff68);
      FUN_8c016340(0x8c437184,pcVar5,puVar4,ar7_00);
    }
    else {
      FUN_8c01538c(ar4 + 0x2d3f4,puVar3,uVar1,uVar6);
      FUN_8c014a94(ar4 + 0x2d3f4,1,uVar1,uVar6);
      ar7_01 = 4;
      uVar6 = 0x8c437154;
      FUN_8c016318(0x8c437184,&DAT_8c13ce10,0x8c437154,4,in_stack_ffffff68);
      uVar1 = 0x8c437184;
      FUN_8c016340(0x8c437184,0x8c437184,uVar6,ar7_01);
      FUN_8c01538c(ar4 + 0x2d3f4,uVar1,uVar6,ar7_01);
      FUN_8c014a94(ar4 + 0x2d3f4,2,uVar6,ar7_01);
      ar7_00 = (char *)0x4;
      puVar4 = (undefined1 *)0x8c437144;
      pcVar5 = (code *)&DAT_8c13cdf0;
      FUN_8c016318(0x8c4371a8,&DAT_8c13cdf0,0x8c437144,4,in_stack_ffffff68);
      FUN_8c016340(0x8c4371a8,pcVar5,puVar4,ar7_00);
    }
    iVar2 = FUN_8c0c8058(*(undefined4 *)(ar5 + 0x7cc),pcVar5,puVar4,ar7_00);
    if (iVar2 == 1) {
      puVar4 = (undefined1 *)0x8c2b59d0;
      pcVar5 = _DAT_8c437140;
      iVar2 = FUN_8c021f18(0x8c2b59d0,_DAT_8c437140,0x8c2b59d0,ar7_00);
      if (iVar2 != 2) {
        pcVar5 = _DAT_8c437140;
        pack_release_entry_handle(0x8c2b59d0,_DAT_8c437140,puVar4,ar7_00);
      }
      if (_DAT_8c437130 == 0) {
        _DAT_8c437138 = 1;
        uVar7 = 1;
      }
      else {
        _DAT_8c437138 = 3;
      }
      _DAT_8c4371e0 = (code *)0x0;
    }
    iVar2 = FUN_8c0c8024(*(undefined4 *)(ar5 + 0x7cc),pcVar5,puVar4,ar7_00);
    if ((iVar2 == 1) ||
       ((iVar2 = FUN_8c1000c8(*(undefined4 *)(ar5 + 0x7cc),pcVar5,puVar4,ar7_00), iVar2 == 1 &&
        (0xf < (int)_DAT_8c4371e0)))) {
      iVar2 = FUN_8c021f18(0x8c2b59d0,_DAT_8c437140,puVar4,ar7_00);
      if (iVar2 != 2) {
        pack_release_entry_handle(0x8c2b59d0,_DAT_8c437140,puVar4,ar7_00);
      }
      uVar7 = 1;
      ar7_00 = &DAT_8c437130;
      puVar4 = (undefined1 *)0x0;
      _DAT_8c437130 = 0;
      _DAT_8c437138 = 1;
      pcVar5 = (code *)0x0;
      _DAT_8c4371e0 = (code *)0x0;
    }
    break;
  case 3:
    FUN_8c01538c(ar4 + 0x2d3f4,pcVar5,&DAT_8c437138,ar7_00);
    FUN_8c014a94(ar4 + 0x2d3f4,3,puVar4,FUN_8c014a94);
    ar7_00 = (char *)0x4;
    puVar4 = (undefined1 *)0x8c437144;
    pcVar5 = (code *)&DAT_8c13ce50;
    FUN_8c016318(0x8c4371cc,&DAT_8c13ce50,0x8c437144,4,FUN_8c016318);
    FUN_8c016340(0x8c4371cc,pcVar5,puVar4,ar7_00);
    _DAT_8c4371e0 = _DAT_8c4371e0 + 1;
    if (_DAT_8c4371e0 == (code *)0x1) {
      uVar1 = FUN_8c01f520(0x8c3dd7dc,pcVar5,puVar4,ar7_00);
      iVar2 = FUN_8c01ad88(uVar1,pcVar5,puVar4,ar7_00);
      if (iVar2 == 1) {
        uVar7 = FUN_8c01f520(0x8c3dd7dc,pcVar5,puVar4,ar7_00);
        FUN_8c01ab2c(uVar7,pcVar5,puVar4,ar7_00);
        free_if_nonnull_wrap_0151a0(auStack_2c,0xffffffff,puVar4,ar7_00);
        return 2;
      }
    }
    if (10 < (int)_DAT_8c4371e0) {
      _DAT_8c437138 = 4;
      pcVar5 = (code *)&DAT_8c4371e0;
      _DAT_8c4371e0 = (code *)0x0;
    }
    break;
  case 4:
    iVar2 = FUN_8c0637d0(*(undefined4 *)(ar5 + 0x7cc),*(undefined4 *)(ar5 + 0x7cc),&DAT_8c437138,
                         ar7_00);
    if (iVar2 == 0) {
      iVar2 = get_field_d4_0c7424(*(undefined4 *)(ar5 + 0x7cc),0x7cc,puVar4,ar7_00);
    }
    s_wtNumberOfItems_is_over_CGam_0c5df6(ar4,ar5,iVar2,0x8c431a68);
    (**(code **)(**(int **)(ar4 + 0x14) + 0xf8))(0x8c435c7c);
    ar7_00 = s_Seaman_User_Data_8c13d157;
    puVar4 = (undefined1 *)0x4208;
    iVar2 = (*(code *)0x8c0b6e6c)(s_SM2000US_USR_8c13d13d,0x8c431a68,s_SEAMAN_8c13d168,1);
    if (iVar2 == 0) {
      ar7_00 = s_Seaman_Storage_Matrix_8c13d189;
      puVar4 = (undefined1 *)0x600;
      pcVar5 = (code *)0x8c435c7c;
      iVar2 = (*(code *)0x8c0b6e6c)(s_SM2000US_INC_8c13d14a,s_SEAMAN_SM_8c13d19f,1);
      if (iVar2 != 0) goto LAB_8c0c7fb8;
      uVar7 = 0;
      ar7_00 = &DAT_8c437138;
      puVar4 = (undefined1 *)0x0;
      _DAT_8c437138 = 0;
    }
    else {
LAB_8c0c7fb8:
      pcVar5 = (code *)0x1;
      _DAT_8c437138 = 1;
    }
    _DAT_8c437130 = 0;
  }
LAB_8c0c7fc4:
  FUN_8c0c453c(&DAT_8c2b5628,pcVar5,puVar4,ar7_00);
  free_if_nonnull_wrap_0151a0(auStack_2c,0xffffffff,puVar4,ar7_00);
  return uVar7;
}

__asm__(".globl _s_WARNING_EXIT_0c76d0\n.set _s_WARNING_EXIT_0c76d0, _s_WARNING_EXIT_0c76d0_def\n");
