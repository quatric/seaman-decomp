//@unit 8c0c0148
#include "../decls.h"
int FUN_8c0c0148_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_10270c(ar4 + 0x28,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0c0148\n.set _FUN_8c0c0148, _FUN_8c0c0148_def\n");
//@unit 8c0c0188
#include "../decls.h"
int FUN_8c0c0188_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    FUN_8c0c02a0(ar4 + 0x4c,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    FUN_8c0c01d8(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0c0188\n.set _FUN_8c0c0188, _FUN_8c0c0188_def\n");
//@unit 8c0c01d8
#include "../decls.h"
int FUN_8c0c01d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    FUN_8c0c0224(ar4 + 0x14,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    FUN_8c0c0224(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0c01d8\n.set _FUN_8c0c01d8, _FUN_8c0c01d8_def\n");
//@unit 8c0c0224
#include "../decls.h"
int FUN_8c0c0224_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0;
    free_if_nonnull_wrap_0c0264(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0c0224\n.set _FUN_8c0c0224, _FUN_8c0c0224_def\n");
//@unit 8c0c0264
#include "../decls.h"
undefined4 *
free_if_nonnull_wrap_0c0264_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff0;
  
  if (ar4 != (undefined4 *)0x0) {
    ar4[1] = 0;
    *ar4 = 0;
    if (0 < (short)ar5) {
      free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff0 >> 0x10),(short)ar5))
      ;
    }
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0c0264\n.set _free_if_nonnull_wrap_0c0264, _free_if_nonnull_wrap_0c0264_def\n");
//@unit 8c0c02a0
#include "../decls.h"
int FUN_8c0c02a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar7_00 = 0x19;
    ar6_00 = 0x18;
    ar5_00 = FUN_8c0c02e8;
    vec_delete_array(ar4,FUN_8c0c02e8,0x18,0x19,ain0);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0c02a0\n.set _FUN_8c0c02a0, _FUN_8c0c02a0_def\n");
//@unit 8c0c02e8
#include "../decls.h"
int FUN_8c0c02e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    FUN_8c0c0224(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0c02e8\n.set _FUN_8c0c02e8, _FUN_8c0c02e8_def\n");
//@unit 8c0c0328
#include "../decls.h"
int FUN_8c0c0328_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    FUN_8c068818(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0c0328\n.set _FUN_8c0c0328, _FUN_8c0c0328_def\n");
//@unit 8c0c0368
#include "../decls.h"
int FUN_8c0c0368_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    FUN_8c0c0148(ar4 + 0x2e710,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x2e64c,0xffffffff,ar6,ar7);
    FUN_8c0c0188(ar4 + 0x2e3a8,0xffffffff,ar6,ar7);
    FUN_8c0ffc1c(ar4 + 0x2de08,0xffffffff,ar6,ar7);
    FUN_8c0c0328(ar4 + 0x2d59c,0xffffffff,ar6,ar7);
    Class_12b334_m0_0bf38c(ar4 + 0x2d578,0xffffffff,ar6,ar7);
    Class_12b388_m0_0c5928(ar4 + 0x17c,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Class_12b350_m0_0baa08(ar4 + 0xc,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0c0368\n.set _FUN_8c0c0368, _FUN_8c0c0368_def\n");
//@unit 8c0c0444
#include "../decls.h"
undefined4 s_Tmcpack_idx_0c0448_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  char *ar5_00;
  undefined4 uVar2;
  char *ar6_00;
  undefined1 *ar6_01;
  char *ar7_00;
  undefined4 ar7_01;
  int iVar3;
  undefined4 in_fr1;
  undefined4 uVar4;
  char cVar5;
  undefined4 in_stack_ffffffd8;
  
  cVar5 = '\0';
  FUN_8c258fd8(FUN_8c0b6bf4,ar5,ar6,ar7,in_stack_ffffffd8);
  *(undefined4 *)(ar4 + 0x2d59c) = 0;
  FUN_8c0b7ad0(ar4 + 0x2d59c,ar5,ar6,ar7);
  s_SPEECH_01f60c(0x8c3eb334,ar5,ar6,ar7);
  ar7_00 = s_Tmcpack_dat_8c13c9ba;
  ar6_00 = s_adxpack_afs_8c13c9ae;
  ar5_00 = s_SeamanSound_mlt_8c13c99e;
  pack_open(0x8c2b59d0,s_SeamanSound_mlt_8c13c99e,s_adxpack_afs_8c13c9ae,s_Tmcpack_dat_8c13c9ba,
            s_Tmcpack_idx_8c13c9c6,FUN_8c0b6c10);
  FUN_8c0f7ff0(0x8c35468c,ar5_00,ar6_00,ar7_00);
  FUN_8c01e5b4(0x8c3dd7dc,0,ar6_00,ar7_00);
  s_GRAPHICS_MESSAGE_0c2c72(&DAT_8c2b5628,0x8c3eb334,ar6_00,ar7_00);
  FUN_8c0ffd7c(*(undefined4 *)(ar4 + 0x2dd68),0x8c3dd7dc,ar6_00,ar7_00);
  uVar2 = 0x8c3eb334;
  s_GRAPHICS_0ffcb6(*(undefined4 *)(ar4 + 0x2dd68),0x8c3eb334,ar6_00,ar7_00);
  uVar1 = 0x8c3eb334;
  s_GRAPHICS_COMMON_02496e(0x8c3eb334,uVar2,ar6_00,ar7_00);
  s_Sq_Bone_Home_njd_0ae2fc(uVar1,uVar2,ar6_00,ar7_00);
  s_MrEgg_Home_nj_09d47c(uVar1,uVar2,ar6_00,ar7_00);
  s_Mr3_Home_njd_09e5c2(uVar1,uVar2,ar6_00,ar7_00);
  s_gme_Home_nj_08869c(uVar1,uVar2,ar6_00,ar7_00);
  s_gm1_Home_njd_085f50(uVar1,uVar2,ar6_00,ar7_00);
  s_FROG_EGG_038ecc(uVar1,uVar2,ar6_00,ar7_00);
  s_Tm1_Home_njd_0372a2(uVar1,uVar2,ar6_00,ar7_00);
  s_Cpe_Home_nj_09b008(uVar1,uVar2,ar6_00,ar7_00);
  s_Cp_Home_njd_08bf2c(uVar1,uVar2,ar6_00,ar7_00);
  s_Sp_Home_njd_0a4af0(uVar1,uVar2,ar6_00,ar7_00);
  s_herb_seed_nj_06cb08(uVar1,uVar2,ar6_00,ar7_00);
  s_Cpe_Home_nj_0a58f4(uVar1,uVar2,ar6_00,ar7_00);
  if (cVar5 == '\0') {
    _DAT_8c43656c = 0;
    uVar1 = in_fr1;
  }
  else {
    uVar1 = 0x43f00000;
    _DAT_8c43656c = in_fr1;
  }
  _DAT_8c436570 = 0x43f00000;
  if (cVar5 == '\0') {
    _DAT_8c436578 = 0;
    uVar2 = uVar1;
  }
  else {
    uVar2 = 0x44200000;
    _DAT_8c436578 = uVar1;
  }
  _DAT_8c43657c = 0x44200000;
  if (cVar5 == '\0') {
    _DAT_8c436580 = 0;
    uVar1 = uVar2;
  }
  else {
    uVar1 = 0x43f00000;
    _DAT_8c436580 = uVar2;
  }
  _DAT_8c436588 = 0x43f00000;
  _DAT_8c436584 = 0x44200000;
  _DAT_8c436590 = 0xff000000;
  _DAT_8c43658c = 0xff000000;
  _DAT_8c436598 = 0xff000000;
  _DAT_8c436594 = 0xff000000;
  ar7_01 = 4;
  ar6_01 = &DAT_8c43658c;
  _DAT_8c436574 = _DAT_8c436578;
  FUN_8c016318(0x8c431294,&DAT_8c43656c,&DAT_8c43658c,4,in_stack_ffffffd8);
  uVar2 = 0x20;
  FUN_8c015198(0x8c431294,0x20,ar6_01,ar7_01,in_stack_ffffffd8);
  if (cVar5 == '\0') {
    _DAT_8c43659c = 0;
    uVar4 = uVar1;
  }
  else {
    uVar4 = 0x43f00000;
    _DAT_8c43659c = uVar1;
  }
  _DAT_8c4365a0 = 0x43f00000;
  if (cVar5 == '\0') {
    _DAT_8c4365a8 = 0;
    _DAT_8c4365b0 = uVar4;
  }
  else {
    _DAT_8c4365b0 = 0x44200000;
    _DAT_8c4365a8 = uVar4;
  }
  _DAT_8c4365ac = 0x44200000;
  if (cVar5 == '\0') {
    _DAT_8c4365b0 = 0;
  }
  _DAT_8c4365b8 = 0x43f00000;
  _DAT_8c4365b4 = 0x44200000;
  _DAT_8c4365c8 = 0x90000000;
  _DAT_8c4365c4 = 0x90000000;
  _DAT_8c4365c0 = 0x90000000;
  _DAT_8c4365bc = 0x90000000;
  _DAT_8c4365a4 = _DAT_8c4365a8;
  for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
    *(undefined4 *)(iVar3 * 4 + -0x73bc9ab4) = 0xffffffff;
  }
  _DAT_8c43655c = 0;
  _DAT_8c43655e = 0xff;
  _DAT_8c436560 = 0;
  _DAT_8c436562 = 0;
  _DAT_8c436564 = 0xff;
  _DAT_8c436566 = 0;
  _DAT_8c436568 = 0xff;
  _DAT_8c43656a = 0xff;
  s_GRAPHICS_ENV_0d1fa0(0x8c3eb334,uVar2,ar6_01,ar7_01);
  _DAT_8c4365cc = 0xffffffff;
  _DAT_8c4365d0 = 0xffffffff;
  _DAT_8c4365d4 = 0xffffffff;
  _DAT_8c4365d8 = 0xffffffff;
  _DAT_8c4365dc = 0;
  _DAT_8c4365de = 0;
  _DAT_8c4365e0 = 0xff;
  _DAT_8c4365e2 = 0;
  _DAT_8c4365e4 = 0xff;
  _DAT_8c4365e6 = 0xff;
  _DAT_8c4365e8 = 0;
  _DAT_8c4365ea = 0xff;
  FUN_8c2218f4(4,uVar2,ar6_01,ar7_01);
  FUN_8c221916(1,1,ar6_01,ar7_01);
  FUN_8c221916(2,0,ar6_01,ar7_01);
  FUN_8c221916(3,0,ar6_01,ar7_01);
  uVar1 = 0;
  FUN_8c221916(4,0,ar6_01,ar7_01);
  FUN_8c2140a4(4,uVar1,ar6_01,ar7_01);
  FUN_8c2140c6(1,1,ar6_01,ar7_01);
  FUN_8c2140c6(2,0,ar6_01,ar7_01);
  FUN_8c2140c6(3,0,ar6_01,ar7_01);
  FUN_8c2140c6(4,0,ar6_01,ar7_01);
  strcpy(0x8c436280,s_NARRATION_8c13c9d2,ar6_01,ar7_01,in_stack_ffffffd8);
  _DAT_8c4362e0 = 0;
  _DAT_8c4362e8 = 1;
  _DAT_8c436330 = 0;
  _DAT_8c43633c = 0;
  for (iVar3 = 0; iVar3 < 0xf; iVar3 = iVar3 + 1) {
    *(undefined4 *)(iVar3 * 0xc + ar4 + 0x2e658) = 0;
  }
  uVar2 = 0xf;
  uVar1 = 0x8c4312a8;
  FUN_8c239170(ar4 + 0x2e708,ar4 + 0x2e654,0x8c4312a8,0xf);
  (**(code **)(*(int *)(ar4 + 0x2e64c) + 8))((int *)(ar4 + 0x2e64c),ar4 + 0x2e708,uVar1,uVar2);
  uVar1 = s_GRAPHICS_MESSAGE_0c5a08(ar4 + 0x17c,0x8c3eb334,uVar1,uVar2);
  return uVar1;
}

__asm__(".globl _s_Tmcpack_idx_0c0448\n.set _s_Tmcpack_idx_0c0448, _s_Tmcpack_idx_0c0448_def\n");
//@unit 8c0c08ac
#include "../decls.h"
undefined4 game_poll_exit_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = input_poll_device_state(0x8c3dd7dc,ar5,ar6,ar7);
  *(undefined4 *)(0x2d620 + ar4) = uVar1;
  iVar2 = FUN_8c01f794(0x8c3eb334,ar5,ar6,ar7);
  pack_close_and_flush(0x8c2b59d0,ar5,ar6,ar7);
  FUN_8c0f816c(0x8c35468c,ar5,ar6,ar7);
  FUN_8c0c2c0c(0x8c2b5628,ar5,ar6,ar7);
  pure_virtual_stub(ar4,ar4 + 0x2d59c,ar6,ar7);
  *(int *)(0x2d59c + ar4) = *(int *)(0x2d59c + ar4) + 1;
  *(undefined4 *)(0x2d624 + ar4) = *(undefined4 *)(0x2d620 + ar4);
  *(undefined4 *)0x8c431a50 = 0;
  if ((iVar2 == 1) || (*(int *)(0x2dd78 + ar4) == 4)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _game_poll_exit\n.set _game_poll_exit, _game_poll_exit_def\n");
//@unit 8c0c09a4
#include "../decls.h"
undefined4 FUN_8c0c09a4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  
  ar4_00 = FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7);
  FUN_8c01ab2c(ar4_00,ar5,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0c09a4\n.set _FUN_8c0c09a4, _FUN_8c0c09a4_def\n");
//@unit 8c0c09d0
#include "../decls.h"
undefined4 s_WARNING_0c09d0_def(int ar4,int *ar5,undefined4 ar6,code *ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined4 ar6_00;
  char *ar6_01;
  undefined *ar6_02;
  char cVar9;
  code *in_stack_ffffff2c;
  undefined1 auStack_28 [16];
  
  cVar9 = '\0';
  pcVar7 = (code *)(int)DAT_8c4367c0;
  if (DAT_8c4367c0 == '\0') {
    _DAT_8c4367bc = 0;
    DAT_8c4367c0 = '\x01';
  }
  if (DAT_8c4367c8 == '\0') {
    _DAT_8c4367c4 = 0;
    DAT_8c4367c8 = '\x01';
  }
  iVar6 = ar5[0x21];
  uVar1 = FUN_8c01f520(0x8c3dd7dc,pcVar7,ar6,ar7);
  if (DAT_8c4367e0 == '\0') {
    uVar2 = FUN_8c0162f8(0x8c4367e4,FUN_8c0162f8,ar6,ar7);
    ar6 = 0x8c4367d4;
    pcVar7 = free_if_nonnull_wrap_0151a0;
    global_list_push(uVar2,free_if_nonnull_wrap_0151a0,0x8c4367d4,ar7);
    DAT_8c4367e0 = '\x01';
  }
  if (DAT_8c436824 == '\0') {
    if (cVar9 == '\0') {
      _DAT_8c436820 = CONCAT44(_DAT_8c436824,0x42dc0000);
    }
    else {
      _DAT_8c436820 = 0xa842dc0000;
    }
    _DAT_8c436820 = CONCAT14(1,_DAT_8c436820);
  }
  if (DAT_8c436834 == '\0') {
    uVar2 = FUN_8c0c1d1c(&DAT_8c436838,pcVar7,ar6,ar7);
    global_list_push(uVar2,free_if_nonnull_wrap_0c1cec,0x8c436828,ar7);
    DAT_8c436834 = '\x01';
  }
  puVar8 = &DAT_8c2b5628;
  _DAT_8c2b5628 = ar5[0x22];
  iVar3 = FUN_8c0ffff4(ar5[499],_DAT_8c2b5628,&DAT_8c2b5628,ar7);
  if (iVar3 == 1) {
    ar5[0x1f7] = 4;
    _DAT_8c4367bc = 0x11;
  }
  if ((_DAT_8c4367bc < 0x1d) && (-1 < _DAT_8c4367bc)) {
    iVar3 = _DAT_8c4367bc * 4;
                    
    switch(_DAT_8c4367bc) {
    case 0:
      uVar1 = get_field_4_0253e4(ar4 + 0x2e64c,0x2e64c,puVar8,ar7);
      iVar6 = FUN_8c02100c(0x8c3eb334,s_BeforeStartMessage_pvm_8c13c9dc,s_GRAPHICS_MESSAGE_8c13c9f3,
                           uVar1);
      if (iVar6 == 0) {
        report_error_message
                  (s_Failed_to_load_sys_message_pvm___8c13ca04,s_CSeamanDomain__Init_8c13ca25,1,2);
      }
      uVar2 = 4;
      uVar1 = 0x8c43654c;
      FUN_8c016318(0x8c4367e4,&DAT_8c13bf24,0x8c43654c,4);
      FUN_8c016324(0x8c4367e4,&DAT_8c43655c,uVar1,uVar2);
      FUN_8c015198(0x8c4367e4,0x80000060,uVar1,uVar2);
      ar7 = (code *)0x0;
      s_SEAMAN_0c1da0(ar4,ar5,0x8c3dd7dc,0,0x8c4367f8);
      _DAT_8c4367bc = 1;
      break;
    case 1:
      iVar6 = FUN_8c0c2068(ar4,0xe,ar5,ar7);
      if (iVar6 == 4) {
        FUN_8c0ba34c(&DAT_8c436838,0,0,ar7);
        _DAT_8c4367bc = 2;
      }
      break;
    case 2:
      iVar6 = FUN_8c0c2068(ar4,0xd,ar5,ar7);
      if (iVar6 == 4) {
        _DAT_8c4367c4 = _DAT_8c4367bc;
        _DAT_8c4367bc = 0x12;
      }
      break;
    case 4:
      ar6_00 = 0;
      uVar2 = 1;
      puVar8 = &DAT_8c436838;
      FUN_8c0ba34c(&DAT_8c436838,1,0,ar7);
      uVar4 = s_SEAMANDC_USR_0b76dc(puVar8,uVar2,ar6_00,ar7);
      if (((uVar4 & 8) == 8) || ((uVar4 & 0x10) == 0x10)) {
        _DAT_8c4367bc = 5;
      }
      else if ((uVar4 & 4) == 4) {
        FUN_8c01bc2c(uVar1,s_SM2000US__VM_8c13c040,0x8c43680c,ar7);
        _DAT_8c4367bc = 0x1a;
      }
      else {
        if (uVar4 == 0) {
          iVar6 = FUN_8c0b7454(s_SM2000US_USR_8c13c026,0x8c431a68,0x4208,ar7);
          if (iVar6 != 0) {
            _DAT_8c4367bc = 0xd;
            break;
          }
          _DAT_8c4367bc = 6;
        }
        if (((uVar4 & 1) == 1) || ((uVar4 & 2) == 2)) {
          _DAT_8c4367c4 = _DAT_8c4367bc;
          _DAT_8c4367bc = 0x13;
        }
      }
      break;
    case 5:
      FUN_8c0bf7c8(ar4 + 0x2e710,iVar3,puVar8,ar7);
      FUN_8c0c1ce4(ar4 + 0x2e710,10,puVar8,ar7);
      FUN_8c0c1cdc(ar4 + 0x2e710,0,puVar8,ar7);
      *(undefined4 *)(ar4 + 0x2e75c) = 1;
      strcpy(0x8c4367f8,s_SEAMANDC__VM_8c13c05a,puVar8,ar7);
      uVar1 = 0;
      FUN_8c0ba34c(&DAT_8c436838,1,0,ar7);
      iVar6 = FUN_8c0bf588(ar4 + 0x2e710,ar5[499],uVar1,ar7);
      if (iVar6 == 0) {
        _DAT_8c4367c4 = _DAT_8c4367bc;
        _DAT_8c4367bc = 0x12;
      }
      else if (iVar6 == 1) {
        ar5[0x1f7] = 4;
        _DAT_8c4367bc = 0x11;
      }
      break;
    case 6:
      iVar6 = FUN_8c0c1cb4(ar5[499],iVar3,puVar8,ar7);
      if (iVar6 == 1) {
        FUN_8c0bf7c8(ar4 + 0x2e710,FUN_8c0bf7c8,puVar8,ar7);
        uVar1 = 0x2e710;
        FUN_8c0c1ce4(ar4 + 0x2e710,3,0x2e710,ar7);
        FUN_8c0c1cdc(ar4 + 0x2e710,0,uVar1,ar7);
        *(undefined4 *)(ar4 + 0x2e75c) = 1;
        _DAT_8c4367bc = 7;
      }
      else {
        _DAT_8c4367bc = 0xd;
      }
      break;
    case 7:
      strcpy(ar4 + 0x2e740,s_MAKEDATA_8c13ca39,puVar8,ar7);
      strcpy(0x8c4367f8,s_SM2000US__VM_8c13c040,puVar8,ar7);
      uVar1 = 1;
      FUN_8c0ba34c(&DAT_8c436838,0,1,ar7);
      ar7 = (code *)FUN_8c0bf588(ar4 + 0x2e710,ar5[499],uVar1,ar7);
      in_stack_ffffff2c = ar7;
      if (ar7 == (code *)0x0) {
        _DAT_8c4367c4 = _DAT_8c4367bc;
        _DAT_8c4367bc = 0x12;
      }
      else if (ar7 == (code *)0x1) {
        _DAT_8c4367bc = 0xd;
      }
      break;
    case 8:
      FUN_8c0bf7c8(ar4 + 0x2e710,iVar3,puVar8,ar7);
      pcVar7 = FUN_8c0c1ce4;
      FUN_8c0c1ce4(ar4 + 0x2e710,2,FUN_8c0c1ce4,ar7);
      FUN_8c0c1cdc(ar4 + 0x2e710,0,pcVar7,ar7);
      *(undefined4 *)(ar4 + 0x2e75c) = 1;
      _DAT_8c4367bc = 9;
      break;
    case 9:
      ar7 = (code *)0xa5e;
      ar6_01 = s_NEWDATA_8c13ca42;
      strcpy(ar4 + 0x2e740,s_NEWDATA_8c13ca42,s_NEWDATA_8c13ca42,0xa5e);
      strcpy(0x8c4367f8,s_SM2000US__VM_8c13c040,ar6_01,ar7);
      uVar1 = 1;
      FUN_8c0ba34c(&DAT_8c436838,1,1,ar7);
      iVar6 = FUN_8c0bf588(ar4 + 0x2e710,ar5[499],uVar1,ar7);
      if (iVar6 == 0) {
        _DAT_8c4367c4 = _DAT_8c4367bc;
        _DAT_8c4367bc = 0x12;
      }
      else if (iVar6 == 1) {
        ar5[0x1f7] = 4;
        _DAT_8c4367bc = 0x11;
      }
      break;
    case 10:
      iVar6 = s_SEAMANDC_USR_0c2326(ar4,ar5,puVar8,ar7);
      if (iVar6 == 4) {
        _DAT_8c4367bc = 0xb;
      }
      break;
    case 0xb:
      FUN_8c0c1ce4(ar4 + 0x2e710,4,0x2e710,ar7);
      *(undefined4 *)(ar4 + 0x2e75c) = 1;
      uVar1 = 1;
      FUN_8c0ba34c(&DAT_8c436838,1,0,ar7);
      pcVar7 = FUN_8c0fa2b8;
      iVar6 = FUN_8c0fa2b8(0x8c35468c,uVar1,FUN_8c0fa2b8,ar7);
      if (iVar6 == 1) {
        FUN_8c0f8214(0x8c35468c,1,pcVar7,ar7);
      }
      ar7 = (code *)0x2;
      iVar6 = s_SEAMAN_0c1da0(ar4,ar5,0x8c3dd7dc,2,0x8c4367f8);
      if (iVar6 == 0) {
        FUN_8c0c1ce4(ar4 + 0x2e710,5,0x2e710,ar7);
        FUN_8c0c1cdc(ar4 + 0x2e710,1,FUN_8c0c1cdc,ar7);
        *(undefined4 *)(ar4 + 0x2e75c) = 1;
        _DAT_8c4367bc = 0xc;
      }
      else if (iVar6 == 1) {
        _DAT_8c4367c4 = _DAT_8c4367bc;
        _DAT_8c4367bc = 0x12;
      }
      break;
    case 0xc:
      iVar6 = FUN_8c0bf780(ar5[499],iVar3,puVar8,ar7);
      if (iVar6 == 1) {
        ar7 = FUN_8c0ba34c;
        FUN_8c0ba34c(&DAT_8c436838,0,0,FUN_8c0ba34c);
        _DAT_8c4367c4 = _DAT_8c4367bc;
        _DAT_8c4367bc = 0x12;
      }
      break;
    case 0xd:
      iVar6 = FUN_8c0b7454(s_SM2000US_USR_8c13c026,0x8c431a68,0x4208,ar7);
      if ((iVar6 == 0) &&
         (iVar6 = FUN_8c0b7454(s_SM2000US_INC_8c13c033,0x8c435c7c,0x600,ar7), iVar6 == 0)) {
        _DAT_8c4367bc = 0xf;
      }
      else {
        _DAT_8c4367bc = 0xe;
      }
      break;
    case 0xe:
      uVar2 = 0;
      uVar1 = 1;
      FUN_8c0ba34c(&DAT_8c436838,1,0,ar7);
      if ((iVar6 == 0) || (iVar6 == 4)) {
        FUN_8c0bf7c8(ar4 + 0x2e710,uVar1,uVar2,ar7);
        FUN_8c0c1ce4(ar4 + 0x2e710,7,uVar2,ar7);
        FUN_8c0c1cdc(ar4 + 0x2e710,0,uVar2,ar7);
        *(undefined4 *)(ar4 + 0x2e75c) = 1;
        _DAT_8c4367bc = 0x18;
      }
      else {
        _DAT_8c4367c4 = _DAT_8c4367bc;
        _DAT_8c4367bc = 0x12;
      }
      break;
    case 0xf:
      FUN_8c0b9d14(ar5,auStack_28,puVar8,ar7);
      iVar6 = FUN_8c1028c0(auStack_28,&DAT_8c431a7c,puVar8,ar7);
      if (iVar6 == 2) {
        _DAT_8c4367bc = 0x1c;
      }
      else {
        _DAT_8c4367bc = 0x11;
      }
      break;
    case 0x10:
      iVar6 = FUN_8c0c1cac(ar4 + 0x2e710,iVar3,puVar8,ar7);
      if (iVar6 == 0) {
        _DAT_8c4367bc = 0x11;
      }
      break;
    case 0x11:
      iVar6 = FUN_8c0fa2b8(0x8c35468c,0x8c35468c,puVar8,ar7);
      if (iVar6 == 1) {
        FUN_8c0f8214(0x8c35468c,0x8c35468c,1,ar7);
      }
      _DAT_8c4367bc = 0;
      iVar3 = ar4 + 0x2e64c;
      s_Failed_s_015312(iVar3,iVar3,iVar6,ar7);
      FUN_8c016340(0x8c431294,iVar3,iVar6,ar7);
      _DAT_8c4367bc = 4;
      *(undefined4 *)(ar4 + 0x2dd84) = 1;
      break;
    case 0x12:
      iVar5 = FUN_8c0c1cac(ar4 + 0x2e710,iVar3,puVar8,ar7);
      if (iVar5 == 1) {
        if (cVar9 == '\0') {
          _DAT_8c436820 = CONCAT44(_DAT_8c436824,0x42200000);
        }
        else {
          _DAT_8c436820 = 0xc716d11542200000;
        }
      }
      else if (cVar9 == '\0') {
        _DAT_8c436820 = CONCAT44(_DAT_8c436824,0x42dc0000);
      }
      else {
        _DAT_8c436820 = 0x8c35468c42dc0000;
      }
      if (((iVar6 != 0) && (iVar6 != 2)) &&
         (iVar5 = FUN_8c0fa2b8(0x8c35468c,iVar3,puVar8,ar7), iVar5 == 1)) {
        FUN_8c0f8214(0x8c35468c,iVar3,puVar8,ar7);
      }
      if (iVar6 != 2) {
        _DAT_8c4367d0 = iVar6;
      }
      if (_DAT_8c4367d0 == 1) {
        s_WARNING_NOPAD_0c38d6(&DAT_8c2b5628,1,s_WARNING_NOPAD_0c38d6,ar7);
        _DAT_8c4367bc = 0x15;
      }
      else if ((_DAT_8c4367d0 == 3) || (_DAT_8c4367d0 == 5)) {
        s_WARNING_NOPAD_0c38d6(&DAT_8c2b5628,6,puVar8,ar7);
        _DAT_8c4367bc = 0x16;
      }
      else if (_DAT_8c4367d0 == 4) {
        s_WARNING_NOPAD_0c38d6(&DAT_8c2b5628,4,puVar8,ar7);
        _DAT_8c4367bc = 0x17;
      }
      else if ((_DAT_8c4367d0 == 0) && (iVar6 == 0)) {
        _DAT_8c4367bc = 0x14;
      }
      break;
    case 0x13:
      if ((_DAT_8c436838 == 1) &&
         (iVar6 = FUN_8c01b9e4(uVar1,&DAT_8c436838,puVar8,ar7), iVar6 < 0x8000)) {
        _DAT_8c4367bc = 0x1b;
      }
      else {
        _DAT_8c4367bc = FUN_8c0c236c(ar4,_DAT_8c4367c4,puVar8,ar7);
        ar7 = (code *)&DAT_8c4367bc;
      }
      break;
    case 0x14:
      if ((_DAT_8c43683c == 1) &&
         (iVar6 = FUN_8c01bc2c(uVar1,s_SM2000US__VM_8c13c040,0x8c43680c,ar7), iVar6 == 5)) {
        _DAT_8c4367bc = 0x1a;
      }
      else {
        _DAT_8c4367bc = 0x13;
      }
      break;
    case 0x15:
      ar7 = (code *)&DAT_8c13c025;
      FUN_8c0c3530(&DAT_8c2b5628,1,0,&DAT_8c13c025);
      *(undefined4 *)(ar4 + 0x2e75c) = 1;
      if ((iVar6 != 1) && (iVar6 != 2)) {
        ar7 = (code *)0x12;
        _DAT_8c4367bc = 0x12;
      }
      break;
    case 0x16:
      uVar1 = get_field_a524_01f514(0x8c3dd7dc,iVar3,0x8c3dd7dc,ar7);
      ar7 = (code *)&DAT_8c13c025;
      FUN_8c0c3530(&DAT_8c2b5628,6,uVar1,&DAT_8c13c025);
      *(undefined4 *)(ar4 + 0x2e75c) = 1;
      if (((iVar6 != 3) && (iVar6 != 5)) && (iVar6 != 2)) {
        _DAT_8c4367bc = 0x12;
      }
      break;
    case 0x17:
      uVar1 = get_field_a524_01f514(0x8c3dd7dc,iVar3,puVar8,ar7);
      ar7 = (code *)&DAT_8c13c025;
      FUN_8c0c3530(&DAT_8c2b5628,4,uVar1,&DAT_8c13c025);
      *(undefined4 *)(ar4 + 0x2e75c) = 1;
      if ((iVar6 != 4) && (iVar6 != 2)) {
        _DAT_8c4367bc = 0x12;
      }
      break;
    case 0x18:
      strcpy(ar4 + 0x2e740,s_DESTRUCTION_8c13ca4a,0xa66,ar7);
      FUN_8c0ba34c(&DAT_8c436838,1,0,ar7);
      iVar6 = FUN_8c0bf588(ar4 + 0x2e710,ar5[499],ar5[499],ar7);
      if (iVar6 == 0) {
        _DAT_8c4367c4 = _DAT_8c4367bc;
        _DAT_8c4367bc = 0x12;
      }
      else if (iVar6 == 1) {
        ar5[0x1f7] = 4;
        _DAT_8c4367bc = 0x11;
      }
      break;
    case 0x19:
      if (3 < (uint)(*ar5 - _DAT_8c4367cc)) {
        _DAT_8c4367bc = 0x12;
      }
      break;
    case 0x1a:
      ar7 = (code *)0x8c43680c;
      uVar2 = 0x8c43680c;
      pcVar7 = strcpy;
      strcpy(0x8c4367f8,0x8c43680c,strcpy,0x8c43680c);
      FUN_8c0bf7c8(ar4 + 0x2e710,uVar2,pcVar7,ar7);
      FUN_8c0c1ce4(ar4 + 0x2e710,9,pcVar7,ar7);
      pcVar7 = FUN_8c0c1cdc;
      FUN_8c0c1cdc(ar4 + 0x2e710,0,FUN_8c0c1cdc,ar7);
      uVar2 = 0x8c43680c;
      FUN_8c0bf7d0(ar4 + 0x2e710,0x8c43680c,pcVar7,ar7);
      *(undefined4 *)(ar4 + 0x2e75c) = 1;
      if ((iVar6 == 0) || (iVar6 == 4)) {
        iVar6 = FUN_8c01b9e4(uVar1,uVar2,pcVar7,ar7);
        iVar3 = FUN_8c01b920(uVar1,0x8c4367f8,pcVar7,ar7);
        if (iVar6 + iVar3 < 0x8000) {
          _DAT_8c4367bc = 0x1b;
          break;
        }
      }
      iVar6 = FUN_8c0bf588(ar4 + 0x2e710,ar5[499],pcVar7,ar7);
      if (iVar6 == 0) {
        FUN_8c0ba34c(&DAT_8c436838,0,0,ar7);
        _DAT_8c4367c4 = _DAT_8c4367bc;
        _DAT_8c4367bc = 0x12;
      }
      else if (iVar6 == 1) {
        ar5[0x1f7] = 4;
        _DAT_8c4367bc = 0x11;
      }
      break;
    case 0x1b:
      ar7 = (code *)0x6;
      _DAT_8c4367bc = FUN_8c0c23fc(ar4,ar5,_DAT_8c4367bc,6,1,s_NOSPACE_8c13ca56);
      if (_DAT_8c4367bc == 0x11) {
        ar5[0x1f7] = 4;
      }
      break;
    case 0x1c:
      ar7 = (code *)0x8;
      _DAT_8c4367bc = FUN_8c0c23fc(ar4,ar5,_DAT_8c4367bc,8,1,s_MADTIME_8c13ca5e);
      if (_DAT_8c4367bc == 0x11) {
        ar5[0x1f7] = 4;
      }
    }
  }
  iVar3 = ar4 + 0x2e740;
  ar6_02 = &DAT_8c13bf44;
  iVar6 = FUN_8c0b6e04(&DAT_8c13bf44,iVar3,&DAT_8c13bf44,ar7);
  if (iVar6 != 0) {
    iVar6 = FUN_8c0fa2b8(0x8c35468c,iVar3,ar6_02,ar7);
    if (iVar6 == 1) {
      FUN_8c0f8214(0x8c35468c,FUN_8c0f8214,ar6_02,ar7);
    }
    strcpy(&DAT_8c13bf44,ar4 + 0x2e740,ar6_02,ar7,in_stack_ffffff2c);
    strcpy(0x8c4362a0,s_WARNING_8c13ca66,ar6_02,ar7,in_stack_ffffff2c);
    strcpy(0x8c4362c0,ar4 + 0x2e740,ar6_02,ar7,in_stack_ffffff2c);
    ar6_02 = (undefined *)0x8c436280;
    iVar3 = 6;
    _DAT_8c43627c = FUN_8c0f8320(0x8c35468c,6,0x8c436280,ar7);
  }
  FUN_8c0bf4a4(ar4 + 0x2e710,iVar3,ar6_02,ar7);
  FUN_8c0bf550(ar4 + 0x2e710,ar4 + 0x2e64c,ar6_02,ar7);
  if (*(int *)(ar4 + 0x2e75c) == 1) {
    FUN_8c01538c(ar4 + 0x2e64c,ar4 + 0x2e64c,ar6_02,ar7);
    uVar1 = 0;
    FUN_8c014a94(ar4 + 0x2e64c,0,ar6_02,ar7);
    FUN_8c016340(0x8c4367e4,uVar1,ar6_02,ar7);
  }
  return 1;
}

__asm__(".globl _s_WARNING_0c09d0\n.set _s_WARNING_0c09d0, _s_WARNING_0c09d0_def\n");
//@unit 8c0c1cac
#include "../decls.h"
undefined4 FUN_8c0c1cac_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *ar4;
}

__asm__(".globl _FUN_8c0c1cac\n.set _FUN_8c0c1cac, _FUN_8c0c1cac_def\n");
//@unit 8c0c1cb4
#include "../decls.h"
undefined4 FUN_8c0c1cb4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c01ee54(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0c1cb4\n.set _FUN_8c0c1cb4, _FUN_8c0c1cb4_def\n");
//@unit 8c0c1cdc
#include "../decls.h"
undefined4 FUN_8c0c1cdc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0xc) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c0c1cdc\n.set _FUN_8c0c1cdc, _FUN_8c0c1cdc_def\n");
//@unit 8c0c1ce4
#include "../decls.h"
undefined4 FUN_8c0c1ce4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 8) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c0c1ce4\n.set _FUN_8c0c1ce4, _FUN_8c0c1ce4_def\n");
//@unit 8c0c1cec
#include "../decls.h"
int free_if_nonnull_wrap_0c1cec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0c1cec\n.set _free_if_nonnull_wrap_0c1cec, _free_if_nonnull_wrap_0c1cec_def\n");
//@unit 8c0c1d1c
#include "../decls.h"
undefined4 FUN_8c0c1d1c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0ba324(ar4,0,0,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0c1d1c\n.set _FUN_8c0c1d1c, _FUN_8c0c1d1c_def\n");
//@unit 8c0c1d40
#include "../decls.h"
undefined4 FUN_8c0c1d40_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  pure_virtual_stub(ar4,ar5,ar6,ar7);
  *(undefined4 *)0x8c2b5628 = *(undefined4 *)(0x88 + ar5);
  return 1;
}

__asm__(".globl _FUN_8c0c1d40\n.set _FUN_8c0c1d40, _FUN_8c0c1d40_def\n");
//@unit 8c0c1d98
#include "../decls.h"
undefined4 s_SEAMAN_0c1da0_def(int ar4,int ar5,undefined4 ar6,int ar7,undefined4 s0)

{
  int iVar1;
  undefined4 ar4_00;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 2;
  if (*(undefined4 *)0x8c436844 == '\0') {
    *(undefined4 *)0x8c436840 = 0;
    *(undefined4 *)0x8c436844 = '\x01';
  }
  if (ar7 == 0) {
    *(undefined4 *)0x8c436840 = 0;
    *(undefined4 *)0x8c436846 = 0;
    uVar3 = 0;
  }
  else if (ar7 == 1) {
    iVar2 = ar5;
    iVar1 = FUN_8c0bf708(*(undefined4 *)(0x7cc + ar5),ar5,ar6,1);
    if ((iVar1 == 1) && (*(undefined4 *)0x8c436840 == 1)) {
      *(undefined4 *)0x8c436840 = 0;
    }
    else {
      iVar1 = FUN_8c0bf690(*(undefined4 *)(0x7cc + ar5),iVar2,ar6,ar7);
      if ((iVar1 == 1) && (*(undefined4 *)0x8c436840 == 0)) {
        *(undefined4 *)0x8c436840 = 1;
      }
    }
    iVar1 = FUN_8c0bf618(*(undefined4 *)(0x7cc + ar5),iVar2,ar6,ar7);
    if (iVar1 == 1) {
      if (*(undefined4 *)0x8c436840 == 0) {
        uVar3 = 1;
        FUN_8c016340(0x8c431294,iVar2,ar6,ar7);
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else if (ar7 == 2) {
    *(undefined4 *)0x8c436846 = *(undefined4 *)0x8c436846 + 1;
    if (*(undefined4 *)0x8c436846 == 10) {
      ar4_00 = FUN_8c01f520(0x8c3dd7dc,ar5,ar6,2);
      FUN_8c01bb00(ar4_00,(&DATA_8c13bfe4) + 0x42,ar6,ar7);
      FUN_8c01bb00(ar4_00,s0,ar6,ar7);
    }
    else if (0x14 < *(undefined4 *)0x8c436846) {
      uVar3 = 0x8c431a68;
      FUN_8c0c67f4(ar4 + 0x17c,ar5,0x8c431a68,2);
      FUN_8c0c6a4c(ar4 + 0x17c,0x8c435c7c,uVar3,ar7);
      iVar2 = (*(code *)(&FUN_8c0b726c))
                        ((&DATA_8c13bfe4) + 0x42,0x8c431a68,0x4208,
                         (&DATA_8c13bfe4) + 0xa8a,
                         (&DATA_8c13bfe4) + 0xa9b,0);
      if (((iVar2 == 0) &&
          (iVar2 = (*(code *)(&FUN_8c0b726c))
                             ((&DATA_8c13bfe4) + 0x5c,0,0,
                              (&DATA_8c13bfe4) + 0xaa2,
                              (&DATA_8c13bfe4) + 0xab8,0),
          iVar2 == 0)) &&
         (iVar2 = (*(code *)(&FUN_8c0b726c))
                            ((&DATA_8c13bfe4) + 0x4f,0x8c435c7c,
                             0x600,(&DATA_8c13bfe4) + 0xaa2,
                             (&DATA_8c13bfe4) + 0xab8,0), iVar2 == 0
         )) {
        uVar3 = 0;
        *(undefined4 *)0x8c436846 = 0;
      }
      else {
        uVar3 = 1;
        *(undefined4 *)0x8c436846 = 0;
      }
    }
  }
  else if (ar7 == 3) {
    iVar2 = FUN_8c0bf780(*(undefined4 *)(0x7cc + ar5),ar5,ar6,3);
    if (iVar2 == 1) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}

__asm__(".globl _s_SEAMAN_0c1da0\n.set _s_SEAMAN_0c1da0, _s_SEAMAN_0c1da0_def\n");
//@unit 8c0c2000
#include "../decls.h"
undefined4 FUN_8c0c2000_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 0xc) + 0xc))((int *)(ar4 + 0xc),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0c2000\n.set _FUN_8c0c2000, _FUN_8c0c2000_def\n");
//@unit 8c0c2020
#include "../decls.h"
undefined4 FUN_8c0c2020_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 0x17c) + 0xc))((int *)(ar4 + 0x17c),ar5,ar6,ar7)
  ;
  return uVar1;
}

__asm__(".globl _FUN_8c0c2020\n.set _FUN_8c0c2020, _FUN_8c0c2020_def\n");
//@unit 8c0c2044
#include "../decls.h"
undefined4 FUN_8c0c2044_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 0x2d578) + 0xc))((int *)(ar4 + 0x2d578),ar5,ar6,ar7)
  ;
  return uVar1;
}

__asm__(".globl _FUN_8c0c2044\n.set _FUN_8c0c2044, _FUN_8c0c2044_def\n");
//@unit 8c0c2068
#include "../decls.h"
undefined4 FUN_8c0c2068_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 ar5_01;
  int *ar6_00;
  undefined4 *ar6_01;
  undefined4 ar7_00;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int in_stack_ffffff7c;
  undefined1 auStack_6c [20];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (DAT_8c436854 == '\0') {
    _DAT_8c436850 = 0;
    DAT_8c436854 = '\x01';
  }
  if (DAT_8c43685c == '\0') {
    _DAT_8c436858 = 0;
    DAT_8c43685c = '\x01';
  }
  uVar1 = 2;
  uStack_38 = DAT_8c13bf70;
  uStack_34 = DAT_8c13bf74;
  uStack_30 = DAT_8c13bf78;
  uStack_2c = DAT_8c13bf7c;
  uStack_28 = DAT_8c13bf80;
  uStack_24 = DAT_8c13bf84;
  uStack_20 = DAT_8c13bf88;
  uStack_1c = DAT_8c13bf8c;
  uStack_58 = DAT_8c13bf90;
  uStack_54 = DAT_8c13bf94;
  uStack_50 = DAT_8c13bf98;
  uStack_4c = DAT_8c13bf9c;
  uStack_48 = DAT_8c13bfa0;
  uStack_44 = DAT_8c13bfa4;
  uStack_40 = DAT_8c13bfa8;
  uStack_3c = DAT_8c13bfac;
  ar5_00 = ar5;
  ar6_00 = ar6;
  FUN_8c0162f8(auStack_6c,ar5,ar6,ar7);
  if ((_DAT_8c436850 < 5) && (-1 < _DAT_8c436850)) {
                    
    switch(_DAT_8c436850) {
    case 0:
      _DAT_8c436860 = 0;
      _DAT_8c436862 = 0xff;
      _DAT_8c436864 = 0;
      _DAT_8c436866 = 0;
      _DAT_8c436868 = 0xff;
      _DAT_8c43686a = 0;
      _DAT_8c43686c = 0xff;
      _DAT_8c43686e = 0xff;
      for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        (&DAT_8c13bf60)[iVar2] = 0xff000000;
      }
      _DAT_8c436850 = 1;
      break;
    case 1:
      for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        (&DAT_8c13bf60)[iVar2] = (&DAT_8c13bf60)[iVar2] + 0x111111;
      }
      if (DAT_8c13bf60 == -1) {
        _DAT_8c436858 = *ar6;
        _DAT_8c436850 = 2;
      }
      break;
    case 2:
      if (0x3c < (uint)(*ar6 - _DAT_8c436858)) {
        _DAT_8c436850 = 3;
      }
      break;
    case 3:
      iVar2 = 0;
      while (iVar3 = iVar2, iVar3 < 4) {
        (&DAT_8c13bf60)[iVar3] = (&DAT_8c13bf60)[iVar3] + -0x111111;
        in_stack_ffffff7c = iVar3;
        iVar2 = iVar3 + 1;
      }
      if (DAT_8c13bf60 == -0x1000000) {
        _DAT_8c436858 = *ar6;
        _DAT_8c436850 = 4;
      }
      break;
    case 4:
      if (10 < (uint)(*ar6 - _DAT_8c436858)) {
        _DAT_8c436858 = 0;
        _DAT_8c436850 = 0;
        uVar1 = 4;
      }
    }
  }
  FUN_8c01538c(ar4 + 0x2e64c,ar5_00,ar6_00,ar7);
  FUN_8c014a94(ar4 + 0x2e64c,ar5,ar6_00,ar7);
  if (ar5 == 0xe) {
    ar7_00 = 4;
    ar6_01 = &DAT_8c13bf60;
    FUN_8c016318(auStack_6c,&uStack_38,&DAT_8c13bf60,4,in_stack_ffffff7c);
  }
  else {
    ar7_00 = 4;
    ar6_01 = &DAT_8c13bf60;
    FUN_8c016318(auStack_6c,&uStack_58,&DAT_8c13bf60,4,in_stack_ffffff7c);
  }
  FUN_8c016324(auStack_6c,&DAT_8c436860,ar6_01,ar7_00);
  ar5_01 = 0x80000020;
  FUN_8c015198(auStack_6c,0x80000020,ar6_01,ar7_00,in_stack_ffffff7c);
  FUN_8c016340(auStack_6c,ar5_01,ar6_01,ar7_00);
  free_if_nonnull_wrap_0151a0(auStack_6c,0xffffffff,ar6_01,ar7_00);
  return uVar1;
}

__asm__(".globl _FUN_8c0c2068\n.set _FUN_8c0c2068, _FUN_8c0c2068_def\n");
//@unit 8c0c2324
#include "../decls.h"
undefined4 s_SEAMANDC_USR_0c2326_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  
  ar4_00 = FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7);
  FUN_8c01bb00(ar4_00,(&DATA_8c13bfe4) + 0x69,ar6,ar7);
  FUN_8c01bb00(ar4_00,(&DATA_8c13bfe4) + 0x76,ar6,ar7);
  return 4;
}

__asm__(".globl _s_SEAMANDC_USR_0c2326\n.set _s_SEAMANDC_USR_0c2326, _s_SEAMANDC_USR_0c2326_def\n");
//@unit 8c0c236c
#include "../decls.h"
undefined4 FUN_8c0c236c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar5 < 0x19) {
    if (ar5 < 0x18) {
      if (0xe < ar5) {
        return ar5;
      }
      if (1 < ar5) {
                    
        switch((uint)ar5) {
        case 2:
          return 4;
        default:
          return ar5;
        case 4:
          return 8;
        case 5:
          return 10;
        case 7:
        case 9:
        case 0xb:
          goto switchD_8c0c2396_caseD_3;
        case 0xc:
          return 0xd;
        }
      }
      return ar5;
    }
  }
  else if (ar5 != 0x1a) {
    return ar5;
  }
switchD_8c0c2396_caseD_3:
  return 0xb;
}

__asm__(".globl _FUN_8c0c236c\n.set _FUN_8c0c236c, _FUN_8c0c236c_def\n");
//@unit 8c0c23fc
#include "../decls.h"
undefined4 FUN_8c0c23fc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  int iVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar6_00 = ar6;
  ar7_00 = ar7;
  FUN_8c0bf7c8(ar4 + 0x2e710,ar5,ar6,ar7);
  FUN_8c0c1ce4(ar4 + 0x2e710,ar7,ar6_00,ar7_00,ar5);
  FUN_8c0c1cdc(ar4 + 0x2e710,1,ar6_00,ar7_00,ar5);
  *(undefined4 *)(ar4 + 0x2e75c) = 1;
  strcpy(ar4 + 0x2e740,s4,ar6_00,ar7_00,ar5);
  iVar1 = FUN_8c0bf780(*(undefined4 *)(ar5 + 0x7cc),s4,ar6_00,ar7_00);
  if (iVar1 == 1) {
    ar6 = 0x11;
  }
  return ar6;
}

__asm__(".globl _FUN_8c0c23fc\n.set _FUN_8c0c23fc, _FUN_8c0c23fc_def\n");
//@unit 8c0c2490
#include "../decls.h"
int s_Mess_ICON00_pvr_0c2496_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 a7;
  int iVar7;
  uint in_fr1;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  double dVar11;
  ulonglong uVar12;
  char cVar13;
  char cVar14;
  undefined4 in_stack_ffffffb0;
  
  cVar14 = '\0';
  cVar13 = '\0';
  FUN_8c015224(ar4 + 4,ar5,ar6,ar7);
  FUN_8c0162f8(ar4 + 0xc,ar5,ar6,ar7);
  FUN_8c0162f8(ar4 + 0x20,ar5,ar6,ar7);
  uVar5 = 0x194;
  FUN_8c015224(ar4 + 0x194,0x194,ar6,ar7);
  FUN_8c015224(ar4 + 0x19c,uVar5,ar6,ar7);
  FUN_8c015224(ar4 + 0x1a4,uVar5,ar6,ar7);
  FUN_8c0162f8(ar4 + 0x1ac,uVar5,ar6,ar7);
  FUN_8c015224(ar4 + 700,uVar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x164) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x168) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x16c) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x170) = 0xffffffff;
  *(undefined2 *)(ar4 + 0x174) = 0;
  *(undefined2 *)(ar4 + 0x176) = 0xff;
  *(undefined2 *)(ar4 + 0x178) = 0;
  *(undefined2 *)(ar4 + 0x17a) = 0;
  *(undefined2 *)(ar4 + 0x17c) = 0xff;
  *(undefined2 *)(ar4 + 0x17e) = 0;
  *(undefined2 *)(ar4 + 0x180) = 0xff;
  *(undefined2 *)(ar4 + 0x182) = 0xff;
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x34) = 0;
    *(undefined4 *)(ar4 + 0x38) = 0x438b8000;
  }
  else {
    *(ulonglong *)(ar4 + 0x34) = (ulonglong)in_fr1;
    in_fr1 = 0x438b8000;
    *(undefined8 *)(ar4 + 0x38) = 0x43a98000438b8000;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x3c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x3c) = (ulonglong)in_fr1;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 0x44) = 0x43a98000;
  }
  else {
    *(ulonglong *)(ar4 + 0x40) = (ulonglong)in_fr1;
    in_fr1 = 0x43a98000;
    *(undefined8 *)(ar4 + 0x44) = 0x8c01631843a98000;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x48) = 0;
    *(undefined4 *)(ar4 + 0x4c) = 0x43a98000;
    *(undefined4 *)(ar4 + 0x50) = 0x438b8000;
  }
  else {
    *(ulonglong *)(ar4 + 0x48) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0x4c) = 0x8c01631843a98000;
    in_fr1 = 0x438b8000;
    *(undefined8 *)(ar4 + 0x50) = 0x43a98000438b8000;
  }
  uVar5 = 4;
  iVar6 = ar4 + 0x164;
  FUN_8c016318(ar4 + 0xc,0,iVar6,4,in_stack_ffffffb0);
  FUN_8c016324(ar4 + 0xc,ar4 + 0x174,iVar6,uVar5);
  FUN_8c015198(ar4 + 0xc,0x80000060,iVar6,uVar5,in_stack_ffffffb0);
  for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
    *(undefined4 *)(ar4 + iVar6 * 4 + 0x370) = 0xffffffff;
    *(undefined4 *)(ar4 + iVar6 * 4 + 0x29c) = 0xffffffff;
  }
  *(undefined2 *)(ar4 + 0x2ac) = 0;
  *(undefined2 *)(ar4 + 0x2ae) = 0xff;
  *(undefined2 *)(ar4 + 0x2b0) = 0;
  *(undefined2 *)(ar4 + 0x2b2) = 0;
  *(undefined2 *)(ar4 + 0x2b4) = 0xff;
  *(undefined2 *)(ar4 + 0x2b6) = 0;
  *(undefined2 *)(ar4 + 0x2b8) = 0xff;
  *(undefined2 *)(ar4 + 0x2ba) = 0xff;
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x27c) = 0;
    *(undefined4 *)(ar4 + 0x280) = 0x42800000;
  }
  else {
    *(ulonglong *)(ar4 + 0x27c) = (ulonglong)in_fr1;
    in_fr1 = 0x42800000;
    *(undefined8 *)(ar4 + 0x280) = 0x28442800000;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x284) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x284) = (ulonglong)in_fr1;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x288) = 0;
    *(undefined4 *)(ar4 + 0x28c) = 0x42800000;
  }
  else {
    *(ulonglong *)(ar4 + 0x288) = (ulonglong)in_fr1;
    in_fr1 = 0x42800000;
    *(undefined8 *)(ar4 + 0x28c) = 0x28442800000;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x290) = 0;
    *(undefined4 *)(ar4 + 0x294) = 0x42800000;
    uVar10 = CONCAT44(0x42800000,in_fr1);
    *(undefined4 *)(ar4 + 0x298) = 0x42800000;
  }
  else {
    *(ulonglong *)(ar4 + 0x290) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0x294) = 0x28442800000;
    uVar10 = 0x28442800000;
    *(undefined8 *)(ar4 + 0x298) = 0x28442800000;
  }
  uVar5 = 4;
  iVar6 = ar4 + 0x29c;
  FUN_8c016318(ar4 + 0x1ac,ar4 + 0x27c,iVar6,4,in_stack_ffffffb0);
  FUN_8c016324(ar4 + 0x1ac,ar4 + 0x2ac,iVar6,uVar5);
  FUN_8c015198(ar4 + 0x1ac,0x80000060,iVar6,uVar5,in_stack_ffffffb0);
  FUN_8c257196(ar4 + 0x240,s_Mess_ICON00_pvr_8c13caa6,0,0,in_stack_ffffffb0);
  *(int *)(ar4 + 0x24c) = ar4 + 0x240;
  *(undefined4 *)(ar4 + 0x250) = 1;
  FUN_8c257196(ar4 + 0x254,s_Mess_ICON01_pvr_8c13cab6,0,0,in_stack_ffffffb0);
  *(int *)(ar4 + 0x260) = ar4 + 0x254;
  *(undefined4 *)(ar4 + 0x264) = 1;
  a7 = 0;
  uVar5 = 0;
  FUN_8c257196(ar4 + 0x268,s_Mess_ICON02_pvr_8c13cac6,0,0,in_stack_ffffffb0);
  *(int *)(ar4 + 0x274) = ar4 + 0x268;
  *(undefined4 *)(ar4 + 0x278) = 1;
  (**(code **)(*(int *)(ar4 + 0x194) + 8))((int *)(ar4 + 0x194),ar4 + 0x24c,uVar5,a7);
  (**(code **)(*(int *)(ar4 + 0x19c) + 8))((int *)(ar4 + 0x19c),ar4 + 0x260,uVar5,a7);
  (**(code **)(*(int *)(ar4 + 0x1a4) + 8))((int *)(ar4 + 0x1a4),ar4 + 0x274,uVar5,a7);
  for (iVar6 = 0; uVar9 = (uint)uVar10, iVar6 < 8; iVar6 = iVar6 + 1) {
    if (iVar6 < 4) {
      if (iVar6 < 2) {
        iVar7 = 0;
      }
      else {
        iVar7 = 0x39;
      }
    }
    else {
      iVar7 = 100;
    }
    pdVar4 = (double *)(ar4 + iVar6 * 0x20 + 0x54);
    iVar2 = iVar6 * 0x11 + iVar7;
    if (cVar13 == '\0') {
      dVar11 = (double)CONCAT44((float)iVar2,uVar9);
    }
    else {
      dVar11 = (double)iVar2;
    }
    if (cVar14 == '\0') {
      *(int *)pdVar4 = (int)((ulonglong)dVar11 >> 0x20);
    }
    else {
      *pdVar4 = dVar11;
    }
    puVar3 = (undefined8 *)(ar4 + iVar6 * 0x20 + 0x58);
    if (cVar14 == '\0') {
      uVar8 = SUB84(dVar11,0);
      *(undefined4 *)puVar3 = 0x41a00000;
    }
    else {
      uVar8 = 0x41a00000;
      *puVar3 = 0x8000006041a00000;
    }
    pdVar4 = (double *)(ar4 + iVar6 * 0x20 + 0x5c);
    iVar2 = iVar6 * 0x11 + iVar7;
    if (cVar13 == '\0') {
      dVar11 = (double)CONCAT44((float)iVar2,uVar8);
    }
    else {
      dVar11 = (double)iVar2;
    }
    if (cVar14 == '\0') {
      *(int *)pdVar4 = (int)((ulonglong)dVar11 >> 0x20);
    }
    else {
      *pdVar4 = dVar11;
    }
    puVar1 = (ulonglong *)(ar4 + iVar6 * 0x20 + 0x60);
    if (cVar14 == '\0') {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      *puVar1 = (ulonglong)dVar11 & 0xffffffff;
    }
    pdVar4 = (double *)(ar4 + iVar6 * 0x20 + 100);
    iVar2 = iVar6 * 0x11 + 0x10 + iVar7;
    if (cVar13 == '\0') {
      dVar11 = (double)CONCAT44((float)iVar2,SUB84(dVar11,0));
    }
    else {
      dVar11 = (double)iVar2;
    }
    if (cVar14 == '\0') {
      *(int *)pdVar4 = (int)((ulonglong)dVar11 >> 0x20);
    }
    else {
      *pdVar4 = dVar11;
    }
    puVar1 = (ulonglong *)(ar4 + iVar6 * 0x20 + 0x68);
    if (cVar14 == '\0') {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      *puVar1 = (ulonglong)dVar11 & 0xffffffff;
    }
    pdVar4 = (double *)(ar4 + iVar6 * 0x20 + 0x6c);
    iVar7 = iVar6 * 0x11 + 0x10 + iVar7;
    if (cVar13 == '\0') {
      dVar11 = (double)CONCAT44((float)iVar7,SUB84(dVar11,0));
    }
    else {
      dVar11 = (double)iVar7;
    }
    if (cVar14 == '\0') {
      *(int *)pdVar4 = (int)((ulonglong)dVar11 >> 0x20);
    }
    else {
      *pdVar4 = dVar11;
    }
    puVar3 = (undefined8 *)(ar4 + iVar6 * 0x20 + 0x70);
    if (cVar14 == '\0') {
      uVar10 = CONCAT44(0x41a00000,SUB84(dVar11,0));
      *(undefined4 *)puVar3 = 0x41a00000;
    }
    else {
      uVar10 = 0x8000006041a00000;
      *puVar3 = 0x8000006041a00000;
    }
  }
  FUN_8c015198(ar4 + 0x20,0x80000060,uVar5,a7,in_stack_ffffffb0);
  for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
    *(undefined4 *)(ar4 + iVar6 * 4 + 0x154) = 0xffffffff;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x2c4) = 0;
    *(undefined4 *)(ar4 + 0x2c8) = 0x43f00000;
  }
  else {
    *(ulonglong *)(ar4 + 0x2c4) = (ulonglong)uVar9;
    uVar9 = 0x43f00000;
    *(undefined8 *)(ar4 + 0x2c8) = 0x2cc43f00000;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x2cc) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x2cc) = (ulonglong)uVar9;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x2d0) = 0;
    *(undefined4 *)(ar4 + 0x2d4) = 0x44200000;
  }
  else {
    *(ulonglong *)(ar4 + 0x2d0) = (ulonglong)uVar9;
    uVar9 = 0x44200000;
    *(undefined8 *)(ar4 + 0x2d4) = 0x2d844200000;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x2d8) = 0;
    *(undefined4 *)(ar4 + 0x2dc) = 0x44200000;
    *(undefined4 *)(ar4 + 0x2e0) = 0x43f00000;
    *(undefined4 *)(ar4 + 0x2e4) = 0x43200000;
    *(undefined4 *)(ar4 + 0x2e8) = 0x43d90000;
    *(undefined4 *)(ar4 + 0x2ec) = 0x43200000;
    *(undefined4 *)(ar4 + 0x2f0) = 0x439d8000;
    *(undefined4 *)(ar4 + 0x2f4) = 0x43f00000;
    *(undefined4 *)(ar4 + 0x2f8) = 0x439d8000;
    *(undefined4 *)(ar4 + 0x2fc) = 0x43f00000;
    *(undefined4 *)(ar4 + 0x300) = 0x43d90000;
    *(undefined4 *)(ar4 + 0x330) = 0x43c80000;
    *(undefined4 *)(ar4 + 0x334) = 0x43de8000;
    *(undefined4 *)(ar4 + 0x338) = 0x43c80000;
    *(undefined4 *)(ar4 + 0x33c) = 0x43c58000;
    *(undefined4 *)(ar4 + 0x340) = 0x441a0000;
    *(undefined4 *)(ar4 + 0x344) = 0x43c58000;
    *(undefined4 *)(ar4 + 0x348) = 0x441a0000;
    *(undefined4 *)(ar4 + 0x34c) = 0x43de8000;
  }
  else {
    *(ulonglong *)(ar4 + 0x2d8) = (ulonglong)uVar9;
    *(undefined8 *)(ar4 + 0x2dc) = 0x2d844200000;
    *(undefined8 *)(ar4 + 0x2e0) = 0x2cc43f00000;
    *(undefined8 *)(ar4 + 0x2e4) = 0x2e843200000;
    *(undefined8 *)(ar4 + 0x2e8) = 0x2ec43d90000;
    *(undefined8 *)(ar4 + 0x2ec) = 0x2e843200000;
    *(undefined8 *)(ar4 + 0x2f0) = 0x2f4439d8000;
    *(undefined8 *)(ar4 + 0x2f4) = 0x2cc43f00000;
    *(undefined8 *)(ar4 + 0x2f8) = 0x2f4439d8000;
    *(undefined8 *)(ar4 + 0x2fc) = 0x2cc43f00000;
    *(undefined8 *)(ar4 + 0x300) = 0x2ec43d90000;
    *(undefined8 *)(ar4 + 0x330) = 0x33443c80000;
    *(undefined8 *)(ar4 + 0x334) = 0x33843de8000;
    *(undefined8 *)(ar4 + 0x338) = 0x33443c80000;
    *(undefined8 *)(ar4 + 0x33c) = 0x34043c58000;
    *(undefined8 *)(ar4 + 0x340) = 0x344441a0000;
    *(undefined8 *)(ar4 + 0x344) = 0x34043c58000;
    *(undefined8 *)(ar4 + 0x348) = 0x344441a0000;
    uVar9 = 0x43de8000;
    *(undefined8 *)(ar4 + 0x34c) = 0x33843de8000;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x350) = 0;
    *(undefined4 *)(ar4 + 0x354) = 0x43000000;
  }
  else {
    *(ulonglong *)(ar4 + 0x350) = (ulonglong)uVar9;
    uVar9 = 0x43000000;
    *(undefined8 *)(ar4 + 0x354) = 0x35843000000;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x358) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x358) = (ulonglong)uVar9;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x35c) = 0;
    uVar12 = CONCAT44(0x437f0000,uVar9);
    *(undefined4 *)(ar4 + 0x360) = 0x437f0000;
  }
  else {
    *(ulonglong *)(ar4 + 0x35c) = (ulonglong)uVar9;
    uVar12 = 0x364437f0000;
    *(undefined8 *)(ar4 + 0x360) = 0x364437f0000;
  }
  if (cVar14 == '\0') {
    *(undefined4 *)(ar4 + 0x364) = 0;
    *(undefined4 *)(ar4 + 0x368) = 0x437f0000;
    *(undefined4 *)(ar4 + 0x36c) = 0x43000000;
  }
  else {
    *(ulonglong *)(ar4 + 0x364) = uVar12 & 0xffffffff;
    *(undefined8 *)(ar4 + 0x368) = 0x364437f0000;
    *(undefined8 *)(ar4 + 0x36c) = 0x35843000000;
  }
  *(undefined2 *)(ar4 + 0x380) = 0;
  FUN_8c0c2c54(ar4,0x34c,0x33c,0x338);
  return ar4;
}

__asm__(".globl _s_Mess_ICON00_pvr_0c2496\n.set _s_Mess_ICON00_pvr_0c2496, _s_Mess_ICON00_pvr_0c2496_def\n");
//@unit 8c0c2c0c
#include "../decls.h"
int FUN_8c0c2c0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  
  iVar1 = *(int *)(0x384 + ar4);
  if (iVar1 != -1) {
    ar5_00 = *(undefined4 *)(0x384 + ar4);
    iVar1 = FUN_8c021f18(0x8c2b59d0,ar5_00,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = FUN_8c0c3a14(ar4,ar5_00,ar6,ar7);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0c2c0c\n.set _FUN_8c0c2c0c, _FUN_8c0c2c0c_def\n");
//@unit 8c0c2c54
#include "../decls.h"
int FUN_8c0c2c54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(0x384 + ar4) = 0xffffffff;
  iVar1 = 0x388;
  *(undefined1 *)(0x388 + ar4) = 0x30;
  return iVar1;
}

__asm__(".globl _FUN_8c0c2c54\n.set _FUN_8c0c2c54, _FUN_8c0c2c54_def\n");
//@unit 8c0c2c6c
#include "../decls.h"
undefined4 s_GRAPHICS_MESSAGE_0c2c72_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  for (iVar5 = 0; iVar5 < 10; iVar5 = iVar5 + 1) {
    *(undefined4 *)(0x1cc + iVar5 * 0xc + ar4) = 0;
  }
  uVar4 = 10;
  uVar1 = 0x8c4312a8;
  FUN_8c239170(ar4 + 0x1c0,ar4 + 0x1c8,0x8c4312a8,10);
  iVar5 = ar4 + 0x1c0;
  (**(code **)(*(int *)(ar4 + 4) + 8))((int *)(ar4 + 4),iVar5,uVar1,uVar4);
  uVar1 = get_field_4_0253e4(ar4 + 4,iVar5,uVar1,uVar4);
  puVar3 = (&DATA_8c13bfe4) + 0xa0f;
  puVar2 = (&DATA_8c13bfe4) + 0xaf2;
  iVar5 = FUN_8c02100c(ar5,puVar2,puVar3,uVar1);
  if (iVar5 == -1) {
    uVar1 = 2;
    puVar3 = (undefined *)0x1;
    puVar2 = (&DATA_8c13bfe4) + 0xb01;
    (*(code *)(&report_error_message))
              ((&DATA_8c13bfe4) + 0xa20,puVar2,1,2);
  }
  uVar1 = get_field_4_0253e4(ar4 + 0x194,puVar2,puVar3,uVar1);
  puVar3 = (&DATA_8c13bfe4) + 0xa0f;
  puVar2 = (&DATA_8c13bfe4) + 0xb1c;
  iVar5 = FUN_8c020ef0(ar5,puVar2,puVar3,uVar1);
  if (iVar5 == 0) {
    uVar1 = 2;
    puVar3 = (undefined *)0x1;
    puVar2 = (&DATA_8c13bfe4) + 0xb01;
    (*(code *)(&report_error_message))
              ((&DATA_8c13bfe4) + 0xb25,puVar2,1,2);
  }
  uVar1 = get_field_4_0253e4(ar4 + 0x19c,puVar2,puVar3,uVar1);
  puVar3 = (&DATA_8c13bfe4) + 0xa0f;
  puVar2 = (&DATA_8c13bfe4) + 0xb47;
  iVar5 = FUN_8c020ef0(ar5,puVar2,puVar3,uVar1);
  if (iVar5 == 0) {
    uVar1 = 2;
    puVar3 = (undefined *)0x1;
    puVar2 = (&DATA_8c13bfe4) + 0xb01;
    (*(code *)(&report_error_message))
              ((&DATA_8c13bfe4) + 0xb50,puVar2,1,2);
  }
  uVar1 = get_field_4_0253e4(ar4 + 0x1a4,puVar2,puVar3,uVar1);
  iVar5 = (*(code *)(&FUN_8c020ef0))
                    (ar5,(&DATA_8c13bfe4) + 0xb72,
                     (&DATA_8c13bfe4) + 0xa0f,uVar1);
  if (iVar5 == 0) {
    (*(code *)(&report_error_message))
              ((&DATA_8c13bfe4) + 0xb7b,
               (&DATA_8c13bfe4) + 0xb01,1,2);
  }
  for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
    *(undefined4 *)(0x308 + iVar5 * 0xc + ar4) = 0;
  }
  uVar4 = 3;
  uVar1 = 0x8c4312a8;
  FUN_8c239170(ar4 + 0x328,ar4 + 0x304,0x8c4312a8,3);
  iVar5 = ar4 + 0x328;
  (**(code **)(*(int *)(ar4 + 0x2bc) + 8))((int *)(ar4 + 0x2bc),iVar5,uVar1,uVar4);
  uVar1 = get_field_4_0253e4(ar4 + 0x2bc,iVar5,uVar1,uVar4);
  iVar5 = (*(code *)(&FUN_8c02100c))
                    (ar5,(&DATA_8c13bfe4) + 0xb9d,
                     (&DATA_8c13bfe4) + 0xa0f,uVar1);
  if (iVar5 == -1) {
    (*(code *)(&report_error_message))
              ((&DATA_8c13bfe4) + 0xba9,
               (&DATA_8c13bfe4) + 0xb01,1,2);
  }
  return 0;
}

__asm__(".globl _s_GRAPHICS_MESSAGE_0c2c72\n.set _s_GRAPHICS_MESSAGE_0c2c72, _s_GRAPHICS_MESSAGE_0c2c72_def\n");
//@unit 8c0c2efc
#include "../decls.h"
undefined4 s_WARNING_NOPAD_0c2f08_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  char *ar5_00;
  undefined4 uVar8;
  int ar6_00;
  float fVar9;
  double in_dr0;
  undefined8 in_dr4;
  undefined8 in_xd0;
  char cVar10;
  char cVar11;
  float fStack_50;
  undefined8 auStack_4c [3];
  undefined1 auStack_30 [24];
  
  cVar11 = '\0';
  cVar10 = '\0';
  puVar7 = auStack_30;
  puVar5 = &DAT_8c13bfb0;
  iVar4 = 10;
  do {
    puVar6 = puVar5 + 1;
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar7[1] = *puVar6;
    puVar7 = puVar7 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (DAT_8c436874 == '\0') {
    _DAT_8c436870 = 0;
    DAT_8c436874 = '\x01';
  }
  if (DAT_8c43687c == '\0') {
    _DAT_8c436878 = 0;
    DAT_8c43687c = '\x01';
  }
  if (DAT_8c436884 == '\0') {
    _DAT_8c436880 = (char *)0xb;
    DAT_8c436884 = '\x01';
  }
  if (DAT_8c43688c == '\0') {
    _DAT_8c436888 = 0x1f;
    DAT_8c43688c = '\x01';
  }
  if (DAT_8c436894 == '\0') {
    _DAT_8c436890 = 0xffffffff;
    DAT_8c436894 = '\x01';
  }
  if (ar5 == (char *)0xb) {
    iVar4 = FUN_8c021f18(0x8c2b59d0,_DAT_8c436890,ar6,ar7);
    if (iVar4 != 2) {
      pack_release_entry_handle(0x8c2b59d0,_DAT_8c436890,ar6,ar7);
      _DAT_8c436890 = 0xffffffff;
    }
    uVar2 = 0;
    _DAT_8c4365ec = 0;
    _DAT_8c436880 = ar5;
  }
  else {
    uVar2 = 4;
    ar6_00 = ar4 + 0x164;
    FUN_8c016318(ar4 + 0xc,ar4 + 0x34,ar6_00,4,ar6);
    iVar4 = ar4 + 0x174;
    FUN_8c016324(ar4 + 0xc,iVar4,ar6_00,uVar2);
    FUN_8c01538c(ar4 + 4,iVar4,ar6_00,uVar2);
    ar5_00 = ar5;
    FUN_8c014a94(ar4 + 4,ar5,ar6_00,uVar2);
    FUN_8c01636c(ar4 + 0xc,ar5_00,ar6_00,uVar2);
    uVar8 = SUB84(in_dr0,0);
    switch((uint)ar5) {
    case 0x1:
      _DAT_8c436870 = 0x113;
      _DAT_8c436878 = 0x91;
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar8);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3aac(ar4,ar5_00,ar6_00,uVar2);
      ar5_00 = s_WARNING_NOPAD_8c13cbb4;
      strcpy(auStack_30,s_WARNING_NOPAD_8c13cbb4,ar6_00,uVar2,ar6);
      break;
    case 0x2:
      _DAT_8c436870 = 0x114;
      _DAT_8c436878 = 0xeb;
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar8);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3a48(ar4,ar5_00,ar6_00,uVar2);
      ar5_00 = s_WARNING_NOVMS_8c13cbd0;
      strcpy(auStack_30,s_WARNING_NOVMS_8c13cbd0,ar6_00,uVar2,ar6);
      break;
    case 0x3:
      _DAT_8c436870 = 0xd5;
      _DAT_8c436878 = 0xe2;
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar8);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3a48(ar4,ar5_00,ar6_00,uVar2);
      ar5_00 = s_WARNING_NOTFOUND_8c13cbde;
      strcpy(auStack_30,s_WARNING_NOTFOUND_8c13cbde,ar6_00,uVar2,ar6);
      break;
    case 0x4:
      _DAT_8c436870 = 0xda;
      _DAT_8c436878 = 0xec;
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar8);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3b10(ar4,ar5_00,ar6_00,uVar2);
      ar5_00 = s_WARNING_NOMIC_8c13cbc2;
      strcpy(auStack_30,s_WARNING_NOMIC_8c13cbc2,ar6_00,uVar2,ar6);
      break;
    case 0x5:
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar8);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3a48(ar4,ar5_00,ar6_00,uVar2);
      ar5_00 = s_WARNING_NOTFOUND_8c13cbde;
      strcpy(auStack_30,s_WARNING_NOTFOUND_8c13cbde,ar6_00,uVar2,ar6);
      break;
    case 0x6:
      _DAT_8c436870 = 0xa7;
      _DAT_8c436878 = 0xc6;
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar8);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3a48(ar4,ar5_00,ar6_00,uVar2);
      ar5_00 = s_WARNING_NOVMS_8c13cbd0;
      strcpy(auStack_30,s_WARNING_NOVMS_8c13cbd0,ar6_00,uVar2,ar6);
    }
    if ((((ar5 == (char *)0x1) || (ar5 == (char *)0x4)) || (ar5 == (char *)0x2)) ||
       ((ar5 == (char *)0x6 || (ar5 == (char *)0x3)))) {
      uVar2 = libgcc_divide_helper_010284(ar6,6,ar6_00,uVar2);
      sVar1 = (short)uVar2 + 1;
      *(short *)(ar4 + 0x184) = sVar1 * 0x10;
      *(short *)(ar4 + 0x188) = sVar1 * 0x10;
      *(short *)(ar4 + 0x18c) = sVar1 * 0x10 + 0xf;
      *(short *)(ar4 + 400) = sVar1 * 0x10 + 0xf;
      *(undefined2 *)(ar4 + 0x186) = 0x5f;
      *(undefined2 *)(ar4 + 0x18a) = 0x40;
      *(undefined2 *)(ar4 + 0x18e) = 0x40;
      *(undefined2 *)(ar4 + 0x192) = 0x5f;
      for (iVar4 = 0; fVar9 = SUB84(in_dr0,0), iVar4 < 4; iVar4 = iVar4 + 1) {
        pfVar3 = (float *)(ar4 + iVar4 * 8 + 0x54);
        if (cVar11 == '\0') {
          fVar9 = *pfVar3;
        }
        else {
          in_xd0 = *(undefined8 *)pfVar3;
        }
        if (cVar10 == '\0') {
          fVar9 = fVar9 + (float)((ulonglong)in_dr4 >> 0x20) + (float)_DAT_8c436870;
        }
        else {
          fVar9 = SUB84((double)_DAT_8c436870 + (double)_DAT_8c436870,0);
        }
        if (cVar11 == '\0') {
          (&fStack_50)[iVar4 * 2] = fVar9;
        }
        else {
          *(undefined8 *)(&fStack_50 + iVar4 * 2) = in_xd0;
        }
        pfVar3 = (float *)(ar4 + iVar4 * 8 + 0x58);
        if (cVar11 == '\0') {
          fVar9 = *pfVar3;
        }
        else {
          in_xd0 = *(undefined8 *)pfVar3;
        }
        if (cVar10 == '\0') {
          in_dr0 = (double)CONCAT44((float)_DAT_8c436878,
                                    fVar9 + (float)in_dr4 + (float)_DAT_8c436878);
        }
        else {
          in_dr0 = (double)_DAT_8c436878 + (double)_DAT_8c436878;
        }
        if (cVar11 == '\0') {
          *(int *)(auStack_4c + iVar4) = SUB84(in_dr0,0);
        }
        else {
          auStack_4c[iVar4] = in_xd0;
        }
      }
      uVar2 = 4;
      ar6_00 = ar4 + 0x164;
      FUN_8c016318(ar4 + 0x20,&fStack_50,ar6_00,4,ar6);
      iVar4 = ar4 + 0x184;
      FUN_8c016324(ar4 + 0x20,iVar4,ar6_00,uVar2);
      FUN_8c01538c(ar4 + 4,iVar4,ar6_00,uVar2);
      ar5_00 = (char *)0x0;
      FUN_8c014a94(ar4 + 4,0,ar6_00,uVar2);
      FUN_8c016340(ar4 + 0x20,ar5_00,ar6_00,uVar2);
    }
    FUN_8c0c453c(ar4,ar5_00,ar6_00,uVar2);
    if (_DAT_8c436880 == ar5) {
      uVar2 = FUN_8c021d90(0x8c2b59d0,_DAT_8c436890,0,0);
    }
    else {
      iVar4 = FUN_8c0fa2b8(0x8c35468c,ar5_00,ar6_00,uVar2);
      if (iVar4 == 1) {
        FUN_8c0f8214(0x8c35468c,ar5_00,ar6_00,uVar2);
      }
      uVar8 = _DAT_8c436890;
      iVar4 = FUN_8c021f18(0x8c2b59d0,_DAT_8c436890,ar6_00,uVar2);
      if (iVar4 != 2) {
        uVar8 = _DAT_8c436890;
        pack_release_entry_handle(0x8c2b59d0,_DAT_8c436890,ar6_00,uVar2);
        _DAT_8c436890 = 0xffffffff;
      }
      FUN_8c021d4c(0x8c2b59d0,uVar8,ar6_00,uVar2);
      _DAT_8c436880 = ar5;
      _DAT_8c436890 = pack_acquire_entry_handle(0x8c2b59d0,auStack_30,ar6_00,uVar2);
      uVar2 = FUN_8c021d90(0x8c2b59d0,_DAT_8c436890,0,0);
    }
  }
  return uVar2;
}

__asm__(".globl _s_WARNING_NOPAD_0c2f08\n.set _s_WARNING_NOPAD_0c2f08, _s_WARNING_NOPAD_0c2f08_def\n");
//@unit 8c0c3530
#include "../decls.h"
undefined4 FUN_8c0c3530_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  float *pfVar2;
  int iVar3;
  int ar6_00;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  double in_dr0;
  undefined8 in_dr4;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  float fStack_3c;
  undefined8 auStack_38 [4];
  
  cVar8 = '\0';
  cVar7 = '\0';
  if (DAT_8c43689c == '\0') {
    _DAT_8c436898 = 99;
    DAT_8c43689c = '\x01';
  }
  if (DAT_8c4368a4 == '\0') {
    _DAT_8c4368a0 = 0;
    DAT_8c4368a4 = '\x01';
  }
  if (DAT_8c4368ac == '\0') {
    _DAT_8c4368a8 = 0;
    DAT_8c4368ac = '\x01';
  }
  uVar4 = 4;
  ar6_00 = ar4 + 0x164;
  FUN_8c016318(ar4 + 0xc,ar4 + 0x34,ar6_00,4,ar6);
  iVar3 = ar4 + 0x174;
  FUN_8c016324(ar4 + 0xc,iVar3,ar6_00,uVar4);
  FUN_8c01538c(ar4 + 4,iVar3,ar6_00,uVar4);
  iVar3 = ar5;
  FUN_8c014a94(ar4 + 4,ar5,ar6_00,uVar4);
  FUN_8c01636c(ar4 + 0xc,iVar3,ar6_00,uVar4);
  if (ar5 < 7) {
    uVar5 = SUB84(in_dr0,0);
    switch((uint)ar5) {
    case 1:
      _DAT_8c4368a0 = 0x113;
      _DAT_8c4368a8 = 0x91;
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar5);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3aac(ar4,iVar3,ar6_00,uVar4);
      break;
    case 2:
      _DAT_8c4368a0 = 0x114;
      _DAT_8c4368a8 = 0xeb;
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar5);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3a48(ar4,iVar3,ar6_00,uVar4);
      break;
    case 3:
      _DAT_8c4368a0 = 0xd5;
      _DAT_8c4368a8 = 0xe2;
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar5);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3a48(ar4,iVar3,ar6_00,uVar4);
      break;
    case 4:
      _DAT_8c4368a0 = 0xda;
      _DAT_8c4368a8 = 0xec;
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar5);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3b10(ar4,iVar3,ar6_00,uVar4);
      break;
    case 5:
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar5);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3a48(ar4,iVar3,ar6_00,uVar4);
      break;
    case 6:
      _DAT_8c4368a0 = 0xa7;
      _DAT_8c4368a8 = 0xc6;
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar5);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3a48(ar4,iVar3,ar6_00,uVar4);
    }
  }
  if ((((ar5 == 1) || (ar5 == 4)) || (ar5 == 2)) || ((ar5 == 6 || (ar5 == 3)))) {
    uVar4 = libgcc_divide_helper_010284(ar6,6,ar6_00,uVar4);
    sVar1 = (short)uVar4 + 1;
    *(short *)(ar4 + 0x184) = sVar1 * 0x10;
    *(short *)(ar4 + 0x188) = sVar1 * 0x10;
    *(short *)(ar4 + 0x18c) = sVar1 * 0x10 + 0xf;
    *(short *)(ar4 + 400) = sVar1 * 0x10 + 0xf;
    *(undefined2 *)(ar4 + 0x186) = 0x5f;
    *(undefined2 *)(ar4 + 0x18a) = 0x40;
    *(undefined2 *)(ar4 + 0x18e) = 0x40;
    *(undefined2 *)(ar4 + 0x192) = 0x5f;
    for (iVar3 = 0; fVar6 = SUB84(in_dr0,0), iVar3 < 4; iVar3 = iVar3 + 1) {
      pfVar2 = (float *)(ar4 + iVar3 * 8 + 0x54);
      if (cVar8 == '\0') {
        fVar6 = *pfVar2;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar2;
      }
      if (cVar7 == '\0') {
        fVar6 = fVar6 + (float)((ulonglong)in_dr4 >> 0x20) + (float)_DAT_8c4368a0;
      }
      else {
        fVar6 = SUB84((double)_DAT_8c4368a0 + (double)_DAT_8c4368a0,0);
      }
      if (cVar8 == '\0') {
        (&fStack_3c)[iVar3 * 2] = fVar6;
      }
      else {
        *(undefined8 *)(&fStack_3c + iVar3 * 2) = in_xd0;
      }
      pfVar2 = (float *)(ar4 + iVar3 * 8 + 0x58);
      if (cVar8 == '\0') {
        fVar6 = *pfVar2;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar2;
      }
      if (cVar7 == '\0') {
        in_dr0 = (double)CONCAT44((float)_DAT_8c4368a8,fVar6 + (float)in_dr4 + (float)_DAT_8c4368a8)
        ;
      }
      else {
        in_dr0 = (double)_DAT_8c4368a8 + (double)_DAT_8c4368a8;
      }
      if (cVar8 == '\0') {
        *(int *)(auStack_38 + iVar3) = SUB84(in_dr0,0);
      }
      else {
        auStack_38[iVar3] = in_xd0;
      }
    }
    uVar4 = 4;
    ar6_00 = ar4 + 0x164;
    FUN_8c016318(ar4 + 0x20,&fStack_3c,ar6_00,4,ar6);
    iVar3 = ar4 + 0x184;
    FUN_8c016324(ar4 + 0x20,iVar3,ar6_00,uVar4);
    FUN_8c01538c(ar4 + 4,iVar3,ar6_00,uVar4);
    iVar3 = 0;
    FUN_8c014a94(ar4 + 4,0,ar6_00,uVar4);
    FUN_8c016340(ar4 + 0x20,iVar3,ar6_00,uVar4);
  }
  uVar4 = FUN_8c0c453c(ar4,iVar3,ar6_00,uVar4);
  return uVar4;
}

__asm__(".globl _FUN_8c0c3530\n.set _FUN_8c0c3530, _FUN_8c0c3530_def\n");
//@unit 8c0c38d4
#include "../decls.h"
int s_WARNING_NOPAD_0c38d6_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  char *ar5_00;
  
  ar5_00 = ar5;
  if (((int)ar5 < 7) && (0 < (int)ar5)) {
                    
    switch((uint)ar5) {
    case 0x1:
      ar5_00 = s_WARNING_NOPAD_8c13cbb4;
      strcpy(ar4 + 0x388,s_WARNING_NOPAD_8c13cbb4,ar6,ar7,ar5);
      break;
    case 0x2:
      ar5_00 = s_WARNING_NOVMS_8c13cbd0;
      strcpy(ar4 + 0x388,s_WARNING_NOVMS_8c13cbd0,ar6,ar7,ar5);
      break;
    case 0x3:
      ar5_00 = s_WARNING_NOTFOUND_8c13cbde;
      strcpy(ar4 + 0x388,s_WARNING_NOTFOUND_8c13cbde,ar6,ar7,ar5);
      break;
    case 0x4:
      ar5_00 = s_WARNING_NOMIC_8c13cbc2;
      strcpy(ar4 + 0x388,s_WARNING_NOMIC_8c13cbc2,ar6,ar7,ar5);
      break;
    case 0x5:
      ar5_00 = s_WARNING_NOTFOUND_8c13cbde;
      strcpy(ar4 + 0x388,s_WARNING_NOTFOUND_8c13cbde,ar6,ar7,ar5);
      break;
    case 0x6:
      ar5_00 = s_WARNING_NOVMS_8c13cbd0;
      strcpy(ar4 + 0x388,s_WARNING_NOVMS_8c13cbd0,ar6,ar7,ar5);
    }
  }
  if (*(int *)(ar4 + 900) != -1) {
    FUN_8c0c3a14(ar4,ar5_00,ar6,ar7);
  }
  iVar1 = *(int *)(ar4 + 900);
  if ((iVar1 == -1) && (iVar1 = (int)*(char *)(ar4 + 0x388), iVar1 != 0x30)) {
    uVar2 = pack_acquire_entry_handle(0x8c2b59d0,ar4 + 0x388,ar6,ar7);
    *(undefined4 *)(ar4 + 900) = uVar2;
    iVar1 = FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(ar4 + 900),0,0);
  }
  return iVar1;
}

__asm__(".globl _s_WARNING_NOPAD_0c38d6\n.set _s_WARNING_NOPAD_0c38d6, _s_WARNING_NOPAD_0c38d6_def\n");
//@unit 8c0c3a14
#include "../decls.h"
int FUN_8c0c3a14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(0x384 + ar4);
  if (iVar1 != -1) {
    (*(code *)(&pack_release_entry_handle))
              (0x8c2b59d0,*(undefined4 *)(0x384 + ar4),ar6,ar7);
    iVar1 = 0x384;
    *(undefined4 *)(0x384 + ar4) = 0xffffffff;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0c3a14\n.set _FUN_8c0c3a14, _FUN_8c0c3a14_def\n");
//@unit 8c0c3a48
#include "../decls.h"
undefined4 FUN_8c0c3a48_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c01538c(ar4 + 0x194,ar5,ar6,ar7);
  uVar1 = 0;
  FUN_8c014a94(ar4 + 0x194,0,ar6,ar7);
  uVar1 = FUN_8c01636c(ar4 + 0x1ac,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0c3a48\n.set _FUN_8c0c3a48, _FUN_8c0c3a48_def\n");
//@unit 8c0c3aac
#include "../decls.h"
undefined4 FUN_8c0c3aac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c01538c(ar4 + 0x19c,ar5,ar6,ar7);
  uVar1 = 0;
  FUN_8c014a94(ar4 + 0x19c,0,ar6,ar7);
  uVar1 = FUN_8c01636c(ar4 + 0x1ac,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0c3aac\n.set _FUN_8c0c3aac, _FUN_8c0c3aac_def\n");
//@unit 8c0c3b10
#include "../decls.h"
undefined4 FUN_8c0c3b10_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c01538c(ar4 + 0x1a4,ar5,ar6,ar7);
  uVar1 = 0;
  FUN_8c014a94(ar4 + 0x1a4,0,ar6,ar7);
  uVar1 = FUN_8c01636c(ar4 + 0x1ac,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0c3b10\n.set _FUN_8c0c3b10, _FUN_8c0c3b10_def\n");
//@unit 8c0c3b74
#include "../decls.h"
undefined4 FUN_8c0c3b74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar6_00;
  undefined4 ar7_00;
  int iVar3;
  undefined8 in_dr4;
  ushort in_stack_00000000;
  byte in_stack_00000002;
  byte in_stack_00000003;
  undefined1 uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 ain0;
  float afStack_118 [65];
  
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      afStack_118[iVar3 * 8 + iVar2 * 2] =
           *(float *)(ar4 + iVar3 * 0x20 + iVar2 * 8 + 0x54) + (float)((ulonglong)in_dr4 >> 0x20);
      afStack_118[iVar3 * 8 + iVar2 * 2 + 1] =
           *(float *)(ar4 + iVar3 * 0x20 + iVar2 * 8 + 0x58) + (float)in_dr4;
    }
  }
  uVar1 = libgcc_divide_helper_0101e4((uint)in_stack_00000002,10,ar6,ar7);
  uVar4 = (undefined1)uVar1;
  uVar1 = libgcc_divide_helper_01031c((uint)in_stack_00000002,10,ar6,ar7);
  uVar5 = CONCAT11((char)uVar1,uVar4);
  uVar1 = libgcc_divide_helper_0101e4((uint)in_stack_00000003,10,ar6,ar7);
  uVar6 = (uint)CONCAT12((char)uVar1,uVar5);
  uVar1 = libgcc_divide_helper_01031c((uint)in_stack_00000003,10,ar6,ar7);
  ain0 = CONCAT13((char)uVar1,(int3)uVar6);
  libgcc_divide_helper_0101e4((uint)in_stack_00000000,1000,ar6,ar7);
  uVar1 = libgcc_divide_helper_01031c((uint)in_stack_00000000,1000,ar6,ar7);
  libgcc_divide_helper_0101e4(uVar1,100,ar6,ar7);
  uVar1 = libgcc_divide_helper_01031c((uint)in_stack_00000000,100,ar6,ar7);
  libgcc_divide_helper_0101e4(uVar1,10,ar6,ar7);
  libgcc_divide_helper_01031c((uint)in_stack_00000000,10,ar6,ar7);
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    if (((iVar3 != 0) || ((char)ain0 != '\0')) &&
       ((iVar3 != 2 || ((char)((uint)ain0 >> 0x10) != '\0')))) {
      *(ushort *)(ar4 + 0x184) = (ushort)(byte)(&stack0xfffffe84)[iVar3] << 4;
      *(undefined2 *)(ar4 + 0x186) = 0x3f;
      *(ushort *)(ar4 + 0x188) = (ushort)(byte)(&stack0xfffffe84)[iVar3] << 4;
      *(undefined2 *)(ar4 + 0x18a) = 0x20;
      *(ushort *)(ar4 + 0x18c) = (ushort)(byte)(&stack0xfffffe84)[iVar3] * 0x10 + 0xf;
      *(undefined2 *)(ar4 + 0x18e) = 0x20;
      *(ushort *)(ar4 + 400) = (ushort)(byte)(&stack0xfffffe84)[iVar3] * 0x10 + 0xf;
      *(undefined2 *)(ar4 + 0x192) = 0x3f;
      ar7_00 = 4;
      ar6_00 = ar4 + 0x164;
      FUN_8c016318(ar4 + 0x20,afStack_118 + iVar3 * 8,ar6_00,4,ain0);
      iVar2 = ar4 + 0x184;
      FUN_8c016324(ar4 + 0x20,iVar2,ar6_00,ar7_00);
      FUN_8c01538c(ar4 + 4,iVar2,ar6_00,ar7_00);
      uVar1 = 0;
      FUN_8c014a94(ar4 + 4,0,ar6_00,ar7_00);
      FUN_8c016340(ar4 + 0x20,uVar1,ar6_00,ar7_00);
    }
  }
  return 8;
}

__asm__(".globl _FUN_8c0c3b74\n.set _FUN_8c0c3b74, _FUN_8c0c3b74_def\n");
//@unit 8c0c3e78
#include "../decls.h"
int FUN_8c0c3e78_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  short sVar1;
  double *pdVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  double in_dr0;
  double dVar7;
  double dVar8;
  char cVar9;
  char cVar10;
  undefined1 auStack_4c [32];
  undefined4 auStack_2c [5];
  
  cVar10 = '\0';
  cVar9 = '\0';
  for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
    auStack_2c[iVar6] = ar5;
  }
  uVar5 = 4;
  puVar4 = auStack_2c;
  FUN_8c016318(ar4 + 0xc,ar4 + 0x2c4,puVar4,4,ar6);
  iVar6 = ar4 + 0x174;
  FUN_8c016324(ar4 + 0xc,iVar6,puVar4,uVar5);
  FUN_8c01538c(ar4 + 700,iVar6,puVar4,uVar5);
  uVar3 = 0;
  FUN_8c014a94(ar4 + 700,0,puVar4,uVar5);
  FUN_8c016340(ar4 + 0xc,uVar3,puVar4,uVar5);
  if (ar6 == 0) {
    uVar5 = 4;
    puVar4 = auStack_2c;
    FUN_8c016318(ar4 + 0xc,ar4 + 0x2e4,puVar4,4,0);
    iVar6 = ar4 + 0x174;
    FUN_8c016324(ar4 + 0xc,iVar6,puVar4,uVar5);
    FUN_8c01538c(ar4 + 700,iVar6,puVar4,uVar5);
    uVar3 = 1;
    FUN_8c014a94(ar4 + 700,1,puVar4,uVar5);
    FUN_8c016340(ar4 + 0xc,uVar3,puVar4,uVar5);
    uVar3 = get_field_a524_01f514(0x8c3dd7dc,uVar3,puVar4,uVar5);
    uVar3 = libgcc_divide_helper_010284(uVar3,6,puVar4,uVar5);
    sVar1 = (short)uVar3 + 1;
    *(short *)(ar4 + 0x184) = sVar1 * 0x10;
    *(short *)(ar4 + 0x188) = sVar1 * 0x10;
    *(short *)(ar4 + 0x18c) = sVar1 * 0x10 + 0xf;
    *(short *)(ar4 + 400) = sVar1 * 0x10 + 0xf;
    *(undefined2 *)(ar4 + 0x186) = 0x5f;
    *(undefined2 *)(ar4 + 0x18a) = 0x40;
    *(undefined2 *)(ar4 + 0x18e) = 0x40;
    *(undefined2 *)(ar4 + 0x192) = 0x5f;
    if (cVar10 == '\0') {
      dVar8 = 2.161728111744385e+18;
    }
    else {
      dVar8 = -524288.13230896;
    }
    for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
      pdVar2 = (double *)(ar4 + iVar6 * 8 + 0x54);
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(in_dr0,0));
      }
      else {
        dVar7 = *pdVar2;
      }
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + SUB84(dVar8,0),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 + dVar8;
      }
      if (cVar10 == '\0') {
        *(int *)(auStack_4c + iVar6 * 8) = (int)((ulonglong)dVar7 >> 0x20);
      }
      else {
        *(double *)(auStack_4c + iVar6 * 8) = dVar7;
      }
      pdVar2 = (double *)(ar4 + iVar6 * 8 + 0x58);
      if (cVar10 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(dVar7,0));
      }
      else {
        in_dr0 = *pdVar2;
      }
      if (cVar9 == '\0') {
        in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) +
                                  (float)((ulonglong)dVar8 >> 0x20),SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 + dVar8;
      }
      if (cVar10 == '\0') {
        *(int *)(auStack_4c + iVar6 * 8 + 4) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(auStack_4c + iVar6 * 8 + 4) = in_dr0;
      }
    }
    uVar5 = 4;
    puVar4 = auStack_2c;
    FUN_8c016318(ar4 + 0xc,auStack_4c,puVar4,4,ar6);
    iVar6 = ar4 + 0x184;
    FUN_8c016324(ar4 + 0xc,iVar6,puVar4,uVar5);
    FUN_8c01538c(ar4 + 4,iVar6,puVar4,uVar5);
    uVar3 = 0;
    FUN_8c014a94(ar4 + 4,0,puVar4,uVar5);
    ar6 = FUN_8c016340(ar4 + 0xc,uVar3,puVar4,uVar5);
  }
  else if (ar6 == 1) {
    uVar5 = 4;
    puVar4 = auStack_2c;
    FUN_8c016318(ar4 + 0xc,ar4 + 0x2e4,puVar4,4,1);
    iVar6 = ar4 + 0x174;
    FUN_8c016324(ar4 + 0xc,iVar6,puVar4,uVar5);
    FUN_8c01538c(ar4 + 700,iVar6,puVar4,uVar5);
    uVar3 = 2;
    FUN_8c014a94(ar4 + 700,2,puVar4,uVar5);
    ar6 = FUN_8c016340(ar4 + 0xc,uVar3,puVar4,uVar5);
  }
  return ar6;
}

__asm__(".globl _FUN_8c0c3e78\n.set _FUN_8c0c3e78, _FUN_8c0c3e78_def\n");
//@unit 8c0c412c
#include "../decls.h"
undefined4 FUN_8c0c412c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *ar6_00;
  int iVar2;
  int iVar3;
  int in_stack_ffffffd8;
  
  if (DAT_8c4368b4 == '\0') {
    _DAT_8c4368b0 = 0;
    DAT_8c4368b4 = '\x01';
  }
  if (DAT_8c4368cc == '\0') {
    _DAT_8c4368c8 = 0;
    DAT_8c4368cc = '\x01';
  }
  if (ar5 == 0) {
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      *(undefined4 *)(&DAT_8c4368b8 + iVar2 * 4) = 0xffffff;
    }
  }
  if (ar5 == 1) {
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      *(undefined4 *)(&DAT_8c4368b8 + iVar2 * 4) = 0x7fffffff;
    }
  }
  if (_DAT_8c4368b8 < 0x61000000) {
    if (0xffffff < _DAT_8c4368b8) {
      iVar2 = 0;
      while (iVar3 = iVar2, iVar3 < 4) {
        *(int *)(&DAT_8c4368b8 + iVar3 * 4) = *(int *)(&DAT_8c4368b8 + iVar3 * 4) + -0x1000000;
        in_stack_ffffffd8 = iVar3;
        iVar2 = iVar3 + 1;
      }
    }
  }
  else {
    _DAT_8c4368c8 = _DAT_8c4368c8 + 1;
    if (3 < _DAT_8c4368c8) {
      _DAT_8c4368c8 = 0;
      for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        *(int *)(&DAT_8c4368b8 + iVar2 * 4) = *(int *)(&DAT_8c4368b8 + iVar2 * 4) + -0x1000000;
      }
    }
  }
  uVar1 = 0xffffff;
  if (0xffffff < _DAT_8c4368b8) {
    FUN_8c01538c(ar4 + 4,ar5,ar6,ar7);
    FUN_8c014a94(ar4 + 4,7,ar6,ar7);
    uVar1 = 4;
    ar6_00 = &DAT_8c4368b8;
    iVar2 = ar4 + 0x330;
    FUN_8c016318(ar4 + 0xc,iVar2,&DAT_8c4368b8,4,in_stack_ffffffd8);
    uVar1 = FUN_8c016340(ar4 + 0xc,iVar2,ar6_00,uVar1);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0c412c\n.set _FUN_8c0c412c, _FUN_8c0c412c_def\n");
//@unit 8c0c42b0
#include "../decls.h"
int FUN_8c0c42b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  int ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  
  iVar1 = 0;
  if (*(short *)(ar4 + 0x380) != 0) {
    ar7_00 = 4;
    ar6_00 = ar4 + 0x370;
    FUN_8c016318(ar4 + 0xc,ar4 + 0x350,ar6_00,4,in_stack_fffffff4);
    iVar1 = ar4 + 0x174;
    FUN_8c016324(ar4 + 0xc,iVar1,ar6_00,ar7_00);
    FUN_8c01538c(ar4 + 4,iVar1,ar6_00,ar7_00);
    ar5_00 = 8;
    FUN_8c014a94(ar4 + 4,8,ar6_00,ar7_00);
    FUN_8c01636c(ar4 + 0xc,ar5_00,ar6_00,ar7_00);
    *(short *)(ar4 + 0x380) = *(short *)(ar4 + 0x380) + -1;
    iVar1 = (int)*(short *)(ar4 + 0x380);
    if (iVar1 < 0) {
      iVar1 = 0x380;
      *(undefined2 *)(ar4 + 0x380) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0c42b0\n.set _FUN_8c0c42b0, _FUN_8c0c42b0_def\n");
//@unit 8c0c4370
#include "../decls.h"
undefined4 FUN_8c0c4370_def(int ar4,int ar5,int ar6,int ar7)

{
  char cVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int ar5_00;
  int ar7_00;
  short sVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  double in_dr2;
  double dVar10;
  undefined8 in_dr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  float fVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  undefined8 in_xd0;
  undefined4 in_PR;
  char cVar15;
  char cVar16;
  int in_stack_00000000;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  cVar16 = '\0';
  cVar15 = '\0';
  dVar12 = (double)CONCAT44(in_fr6,(int)((ulonglong)in_dr4 >> 0x20));
  dVar14 = (double)CONCAT44((int)in_dr4,in_fr7);
  ar7_00 = ar7;
  uStack_30 = in_PR;
  FUN_8c01538c(ar4 + 4,ar5,ar6,ar7);
  FUN_8c014a94(ar4 + 4,0,ar6,ar7_00);
  for (iVar7 = 0; *(char *)(iVar7 + ar5) != '\0'; iVar7 = iVar7 + 1) {
    cVar1 = *(char *)(iVar7 + ar5);
    fVar13 = SUB84(dVar14,0);
    fVar11 = SUB84(dVar12,0);
    if (cVar15 == '\0') {
      fVar8 = (float)ar7 * fVar13 * (float)iVar7 + fVar11;
    }
    else {
      fVar8 = SUB84((double)iVar7 * (double)iVar7 + dVar12,0);
    }
    fStack_50 = (float)in_xd0;
    fStack_48 = fStack_50;
    if (cVar16 == '\0') {
      fStack_50 = fVar8;
    }
    if (cVar15 == '\0') {
      fVar8 = (float)ar7 * fVar13 * (float)iVar7 + fVar11;
    }
    else {
      fVar8 = SUB84((double)iVar7 * (double)iVar7 + dVar12,0);
    }
    if (cVar16 == '\0') {
      fStack_48 = fVar8;
    }
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44((float)ar7 * fVar13,SUB84(in_dr2,0));
    }
    else {
      dVar10 = (double)ar7 * dVar14;
    }
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) +
                                (float)ar7 * fVar13 * (float)iVar7 + fVar11,SUB84(dVar10,0));
    }
    else {
      dVar10 = dVar10 + (double)iVar7 * (double)iVar7 + dVar12;
    }
    fStack_40 = SUB84(dVar10,0);
    if (cVar16 == '\0') {
      fStack_40 = (float)((ulonglong)dVar10 >> 0x20);
    }
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44((float)ar7 * fVar13,SUB84(dVar10,0));
    }
    else {
      dVar10 = (double)ar7 * dVar14;
    }
    if (cVar15 == '\0') {
      fVar8 = (float)ar7 * fVar13 * (float)iVar7;
      in_dr2 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) + fVar8 + fVar11,SUB84(dVar10,0))
      ;
    }
    else {
      dVar9 = (double)iVar7 * (double)iVar7;
      fVar8 = SUB84(dVar9,0);
      in_dr2 = dVar10 + dVar9 + dVar12;
    }
    if (cVar16 == '\0') {
      fStack_38 = (float)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      fStack_38 = SUB84(in_dr2,0);
    }
    fVar11 = (float)((ulonglong)dVar14 >> 0x20);
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44((float)in_stack_00000000 * fVar13 + fVar11,fVar8);
    }
    else {
      dVar10 = (double)in_stack_00000000 * dVar14 + dVar14;
    }
    fVar8 = (float)((ulonglong)dVar10 >> 0x20);
    fStack_4c = SUB84(dVar10,0);
    fVar3 = fVar11;
    fStack_3c = fVar13;
    fVar4 = fVar11;
    if (cVar16 == '\0') {
      fStack_4c = fVar8;
      fVar8 = fStack_48;
      fVar3 = fStack_40;
      fStack_3c = fVar11;
      fVar4 = fStack_38;
    }
    fStack_38 = fVar4;
    fStack_40 = fVar3;
    fStack_48 = fVar8;
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44((float)in_stack_00000000 * fVar13 + fVar11,SUB84(dVar10,0));
    }
    else {
      dVar10 = (double)in_stack_00000000 * dVar14 + dVar14;
    }
    uVar5 = (undefined4)((ulonglong)dVar10 >> 0x20);
    uStack_34 = uVar5;
    if (cVar16 != '\0') {
      uStack_34 = SUB84(dVar10,0);
      uStack_30 = uVar5;
    }
    fStack_44 = fStack_3c;
    uVar5 = libgcc_divide_helper_01031c((int)cVar1,0x10,ar6,ar7_00);
    sVar6 = (short)uVar5 * 0x10;
    uVar5 = libgcc_divide_helper_0101e4((int)cVar1,0x10,ar6,ar7_00);
    sVar2 = ((short)uVar5 + -2) * 0x20;
    *(short *)(ar4 + 0x184) = sVar6;
    *(short *)(ar4 + 0x186) = sVar2 + 0x1f;
    *(short *)(ar4 + 0x188) = sVar6;
    *(short *)(ar4 + 0x18a) = sVar2;
    *(short *)(ar4 + 0x18c) = sVar6 + 0xf;
    *(short *)(ar4 + 0x18e) = sVar2;
    *(short *)(ar4 + 400) = sVar6 + 0xf;
    *(short *)(ar4 + 0x192) = sVar2 + 0x1f;
    ar7_00 = 4;
    ar6 = ar4 + 0x154;
    FUN_8c016318(ar4 + 0x20,&fStack_50,ar6,4,ar5);
    ar5_00 = ar4 + 0x184;
    FUN_8c016324(ar4 + 0x20,ar5_00,ar6,ar7_00);
    FUN_8c016340(ar4 + 0x20,ar5_00,ar6,ar7_00);
  }
  return 0;
}

__asm__(".globl _FUN_8c0c4370\n.set _FUN_8c0c4370, _FUN_8c0c4370_def\n");
//@unit 8c0c453c
#include "../decls.h"
undefined4 FUN_8c0c453c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined8 in_dr4;
  undefined4 ain0;
  undefined1 auStack_3c [20];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  ain0 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  uStack_28 = DAT_8c13bfc4;
  uStack_24 = DAT_8c13bfc8;
  uStack_20 = DAT_8c13bfcc;
  uStack_1c = DAT_8c13bfd0;
  uStack_18 = DAT_8c13bfd4;
  uStack_14 = DAT_8c13bfd8;
  uStack_10 = DAT_8c13bfdc;
  uStack_c = _DAT_8c13bfe0;
  FUN_8c0162f8(auStack_3c,ar5,ar6,ar7);
  ar7_00 = 4;
  ar6_00 = 0x8c43654c;
  FUN_8c016318(auStack_3c,&uStack_28,0x8c43654c,4,ain0);
  FUN_8c016324(auStack_3c,&DAT_8c43655c,ar6_00,ar7_00);
  uVar1 = 0x80000060;
  FUN_8c015198(auStack_3c,0x80000060,ar6_00,ar7_00,ain0);
  FUN_8c01538c(ar4 + 4,uVar1,ar6_00,ar7_00);
  uVar1 = 9;
  FUN_8c014a94(ar4 + 4,9,ar6_00,ar7_00);
  FUN_8c01636c(auStack_3c,uVar1,ar6_00,ar7_00);
  uVar1 = free_if_nonnull_wrap_0151a0(auStack_3c,0xffffffff,ar6_00,ar7_00);
  return uVar1;
}

__asm__(".globl _FUN_8c0c453c\n.set _FUN_8c0c453c, _FUN_8c0c453c_def\n");
//@unit 8c0c461c
#include "../decls.h"
undefined4 get_field_8_0c461c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 8);
}

__asm__(".globl _get_field_8_0c461c\n.set _get_field_8_0c461c, _get_field_8_0c461c_def\n");
//@unit 8c0c4624
#include "../decls.h"
undefined4 ret_const_0_0c4624_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_0c4624\n.set _ret_const_0_0c4624, _ret_const_0_0c4624_def\n");
//@unit 8c0c462c
#include "../decls.h"
undefined4 ret_const_0_0c462c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_0c462c\n.set _ret_const_0_0c462c, _ret_const_0_0c462c_def\n");
//@unit 8c0c4634
#include "../decls.h"
undefined4 get_field_8_0c4634_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 8);
}

__asm__(".globl _get_field_8_0c4634\n.set _get_field_8_0c4634, _get_field_8_0c4634_def\n");
//@unit 8c0c463c
#include "../decls.h"
undefined4 ret_const_0_0c463c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_0c463c\n.set _ret_const_0_0c463c, _ret_const_0_0c463c_def\n");
//@unit 8c0c4644
#include "../decls.h"
undefined4 FUN_8c0c4644_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c1263a0,ar5,ar6,ar7);
  uVar3 = 0x8c286e20;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286e20,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1263b0,pcVar2,uVar3,ar7);
  uVar3 = 0x8c286e2c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286e2c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1263c0,pcVar2,uVar3,ar7);
  uVar3 = 0x8c286e38;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286e38,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1263d0,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c286e44,ar7);
  if (cVar4 == '\0') {
    _DAT_8c1263e0 = CONCAT44(_UNK_8c1263e4,0x800000);
                    
  }
  else {
    _DAT_8c1263e0 = 0xffffffff00800000;
  }
  uVar1 = 4;
  FUN_8c010120(0x8c286e5c,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,9);
  global_list_push(0,FUN_8c0c4c60,0x8c286e50,uVar1);
  ar7_00 = 4;
  FUN_8c010120(0x8c286e8c,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,9);
  uVar1 = 0x8c286e80;
  pcVar2 = FUN_8c0c4c3c;
  global_list_push(0,FUN_8c0c4c3c,0x8c286e80,ar7_00);
  uVar1 = FUN_8c0bff8c(0x8c286ebc,pcVar2,uVar1,ar7_00);
  uVar3 = 0x8c286eb0;
  pcVar2 = FUN_8c0c0368;
  global_list_push(uVar1,FUN_8c0c0368,0x8c286eb0,ar7_00);
  uVar1 = s_Mess_ICON00_pvr_0c2496(&DAT_8c2b5628,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c2b561c;
  pcVar2 = FUN_8c0c4b84;
  global_list_push(uVar1,FUN_8c0c4b84,0x8c2b561c,ar7_00);
  uVar1 = pack_ctor(0x8c2b59d0,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c2b59c4;
  pcVar2 = FUN_8c0214e0;
  global_list_push(uVar1,FUN_8c0214e0,0x8c2b59c4,ar7_00);
  uVar1 = FUN_8c0f7f78(0x8c35468c,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c354680;
  pcVar2 = FUN_8c0f7fa8;
  global_list_push(uVar1,FUN_8c0f7fa8,0x8c354680,ar7_00);
  uVar1 = FUN_8c01e504(0x8c3dd7dc,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c3dd7d0;
  pcVar2 = FUN_8c01e560;
  global_list_push(uVar1,FUN_8c01e560,0x8c3dd7d0,ar7_00);
  uVar1 = FUN_8c0febbc(0x8c3e7d30,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c3e7d24;
  pcVar2 = FUN_8c0c4a44;
  global_list_push(uVar1,FUN_8c0c4a44,0x8c3e7d24,ar7_00);
  uVar1 = FUN_8c0fef8c(0x8c3eb324,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c3eb318;
  pcVar2 = free_if_nonnull_wrap_0c4a14;
  global_list_push(uVar1,free_if_nonnull_wrap_0c4a14,0x8c3eb318,ar7_00);
  uVar1 = FUN_8c01f5d0(0x8c3eb334,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c3eb328;
  pcVar2 = free_if_nonnull_wrap_01f5d8;
  global_list_push(uVar1,free_if_nonnull_wrap_01f5d8,0x8c3eb328,ar7_00);
  uVar1 = FUN_8c0162f8(0x8c431294,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c431288;
  pcVar2 = free_if_nonnull_wrap_0151a0;
  global_list_push(uVar1,free_if_nonnull_wrap_0151a0,0x8c431288,ar7_00);
  uVar1 = FUN_8c0b9fb4(0x8c431a68,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c431a5c;
  pcVar2 = FUN_8c0c4968;
  global_list_push(uVar1,FUN_8c0c4968,0x8c431a5c,ar7_00);
  uVar1 = FUN_8c0ba1c0(0x8c435c7c,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c435c70;
  pcVar2 = FUN_8c0c491c;
  global_list_push(uVar1,FUN_8c0c491c,0x8c435c70,ar7_00);
  uVar1 = FUN_8c0fdc98(0x8c436280,pcVar2,uVar3,ar7_00);
  return uVar1;
}

__asm__(".globl _FUN_8c0c4644\n.set _FUN_8c0c4644, _FUN_8c0c4644_def\n");
//@unit 8c0c491c
#include "../decls.h"
int FUN_8c0c491c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar7_00 = 0xc;
    ar6_00 = 0x80;
    ar5_00 = FUN_8c0ba1f4;
    vec_delete_array(ar4,FUN_8c0ba1f4,0x80,0xc,ain0);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0c491c\n.set _FUN_8c0c491c, _FUN_8c0c491c_def\n");
//@unit 8c0c4968
#include "../decls.h"
int FUN_8c0c4968_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    vec_delete_array(ar4 + 0x2794,FUN_8c0ba180,0xf0,10,ain0);
    vec_delete_array(ar4 + 0x14c4,FUN_8c0ba180,0xf0,0x14,ain0);
    vec_delete_array(ar4 + 0x1ec,FUN_8c0ba180,0xf0,0x14,ain0);
    ar7_00 = 3;
    ar6_00 = 0x10;
    vec_delete_array(ar4 + 0x1bc,Vec3_dtor,0x10,3,ain0);
    ar5_00 = 0xffffffff;
    FUN_8c0ba180(ar4 + 0xb0,0xffffffff,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0c4968\n.set _FUN_8c0c4968, _FUN_8c0c4968_def\n");
//@unit 8c0c4a14
#include "../decls.h"
int free_if_nonnull_wrap_0c4a14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0c4a14\n.set _free_if_nonnull_wrap_0c4a14, _free_if_nonnull_wrap_0c4a14_def\n");
//@unit 8c0c4a44
#include "../decls.h"
int FUN_8c0c4a44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar7_00 = 0x96;
    ar6_00 = 0x5c;
    ar5_00 = FUN_8c0c4a90;
    vec_delete_array(ar4,FUN_8c0c4a90,0x5c,0x96,ain0);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0c4a44\n.set _FUN_8c0c4a44, _FUN_8c0c4a44_def\n");
//@unit 8c0c4a90
#include "../decls.h"
int FUN_8c0c4a90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    FUN_8c0c4ad0(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0c4a90\n.set _FUN_8c0c4a90, _FUN_8c0c4a90_def\n");
//@unit 8c0c4ad0
#include "../decls.h"
int FUN_8c0c4ad0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    FUN_8c0c4b3c(ar4 + 0x2c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x18,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 8,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    free_if_nonnull_wrap_0c0264(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0c4ad0\n.set _FUN_8c0c4ad0, _FUN_8c0c4ad0_def\n");
//@unit 8c0c4b3c
#include "../decls.h"
undefined4 * FUN_8c0c4b3c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12984c;
    ar5_00 = 0;
    free_if_nonnull_wrap_015c94(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0c4b3c\n.set _FUN_8c0c4b3c, _FUN_8c0c4b3c_def\n");
//@unit 8c0c4b84
#include "../decls.h"
int FUN_8c0c4b84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_0153e4(ar4 + 700,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0151a0(ar4 + 0x1ac,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x1a4,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x19c,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x194,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0151a0(ar4 + 0x20,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0151a0(ar4 + 0xc,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_0153e4(ar4 + 4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0c4b84\n.set _FUN_8c0c4b84, _FUN_8c0c4b84_def\n");
//@unit 8c0c4c3c
#include "../decls.h"
undefined4 FUN_8c0c4c3c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c286e8c,free_if_nonnull_wrap_03a3dc,4,9,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c0c4c3c\n.set _FUN_8c0c4c3c, _FUN_8c0c4c3c_def\n");
//@unit 8c0c4c60
#include "../decls.h"
undefined4 FUN_8c0c4c60_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c286e5c,free_if_nonnull_wrap_0247b0,4,9,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c0c4c60\n.set _FUN_8c0c4c60, _FUN_8c0c4c60_def\n");
//@unit 8c0c4c84
#include "../decls.h"
undefined4 FUN_8c0c4c84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = get_field_24_05c284(ar4,ar5,ar6,ar7);
  if (((iVar1 != 0xf) && (iVar1 != 0x10)) &&
     (iVar1 = (**(code **)(0xb4 + *(int *)(ar4 + 8)))(ar4,ar5,ar6,ar7), iVar1 != 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c0c4c84\n.set _FUN_8c0c4c84, _FUN_8c0c4c84_def\n");
//@unit 8c0c4cd8
#include "../decls.h"
undefined4 FUN_8c0c4cd8_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *a4;
  undefined1 *a5;
  int ar6_00;
  undefined1 auStack_1c [20];
  
  Vec3_ctor_zero(auStack_1c,ar5,ar6,ar7);
  a5 = auStack_1c;
  ar6_00 = ar6;
  (**(code **)(0x150 + *(int *)(ar4 + 8)))(ar4,a5,ar6,ar7);
  FUN_8c036988(ar4,a5,ar6_00,ar7);
  a4 = *(int **)(ar6 * 4 + ar5);
  (**(code **)(*a4 + 0x50))(a4,ar4,ar6_00,ar7);
  FUN_8c0c4d70(0x8c2b5628,0x96,ar6_00,ar7);
  uVar1 = Vec3_dtor(auStack_1c,0xffffffff,ar6_00,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0c4cd8\n.set _FUN_8c0c4cd8, _FUN_8c0c4cd8_def\n");
//@unit 8c0c4d70
#include "../decls.h"
int FUN_8c0c4d70_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x380;
  *(undefined2 *)(0x380 + ar4) = (undefined2)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0c4d70\n.set _FUN_8c0c4d70, _FUN_8c0c4d70_def\n");
//@unit 8c0c4d7c
#include "../decls.h"
undefined4 FUN_8c0c4d7c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0c4da0(ar4,ar5,ar6,ar7);
  return ar5;
}

__asm__(".globl _FUN_8c0c4d7c\n.set _FUN_8c0c4d7c, _FUN_8c0c4d7c_def\n");
//@unit 8c0c4da0
#include "../decls.h"
undefined4 FUN_8c0c4da0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0c4dc8(ar5,*(undefined4 *)(ar4 + 0x24),ar6,ar7,ar4);
  return ar5;
}

__asm__(".globl _FUN_8c0c4da0\n.set _FUN_8c0c4da0, _FUN_8c0c4da0_def\n");
//@unit 8c0c4dc8
#include "../decls.h"
undefined4 FUN_8c0c4dc8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x2c) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c0c4dc8\n.set _FUN_8c0c4dc8, _FUN_8c0c4dc8_def\n");
//@unit 8c0c4dd0
#include "../decls.h"
int FUN_8c0c4dd0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  int iVar2;
  
  ar5_00 = ar5;
  uVar1 = (**(code **)(0x148 + *(int *)(ar4 + 8)))(ar4,ar5,ar6,ar7);
  iVar2 = (int)(short)uVar1;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    iVar2 = FUN_8c035bc8(ar5,ar5_00,ar6,ar7);
  }
  else if (iVar2 == 3) {
    iVar2 = FUN_8c0996c4(ar5,ar5_00,ar6,ar7);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0c4dd0\n.set _FUN_8c0c4dd0, _FUN_8c0c4dd0_def\n");
//@unit 8c0c4e2c
#include "../decls.h"
undefined4 FUN_8c0c4e2c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)0x8c436924 = 1;
  uVar1 = FUN_8c0c4e48(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0c4e2c\n.set _FUN_8c0c4e2c, _FUN_8c0c4e2c_def\n");
//@unit 8c0c4e48
#include "../decls.h"
undefined4 FUN_8c0c4e48_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)0x8c436928 = 1;
  return 1;
}

__asm__(".globl _FUN_8c0c4e48\n.set _FUN_8c0c4e48, _FUN_8c0c4e48_def\n");
//@unit 8c0c4e58
#include "../decls.h"
undefined4 FUN_8c0c4e58_def(undefined4 ar4,int ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int a4;
  int iVar3;
  uint ar6_00;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined1 *a5;
  undefined1 auStack_2c [20];
  
  iVar2 = ar5;
  ar6_00 = ar6;
  iVar1 = get_field_d0_0c51fc(ar4,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_2c,iVar2,ar6_00,ar7);
  piVar5 = *(int **)(iVar1 * 4 + ar5);
  uVar6 = ar6;
  (**(code **)(*piVar5 + 0x78))(piVar5,ar6,ar6_00,ar7);
  FUN_8c0c51c4(ar4,uVar6,ar6_00,ar7);
  FUN_8c1006bc(ar4,uVar6,ar6_00,ar7);
  if (iVar1 == 0) {
    FUN_8c100694(ar4,uVar6,ar6_00,ar7);
    iVar2 = FUN_8c0637d0(ar4,uVar6,ar6_00,ar7);
    if (iVar2 == 0) {
      uVar6 = 3;
      FUN_8c0c51b8(ar4,3,ar6_00,ar7);
      iVar2 = FUN_8c0637d0(ar4,uVar6,ar6_00,ar7);
      if (iVar2 == 0) {
        uVar6 = 0;
        FUN_8c0c51a0(ar4,0,ar6_00,ar7);
      }
    }
    else {
      iVar2 = get_field_24_05c284(iVar2,uVar6,ar6_00,ar7);
      if (iVar2 == 0xd) {
        uVar6 = 1;
        FUN_8c0c51b8(ar4,1,ar6_00,ar7);
      }
      else {
        uVar6 = 3;
        FUN_8c0c51b8(ar4,3,ar6_00,ar7);
        iVar2 = FUN_8c0637d0(ar4,uVar6,ar6_00,ar7);
        if (iVar2 == 0) {
          uVar6 = 0;
          FUN_8c0c51a0(ar4,0,ar6_00,ar7);
        }
      }
    }
  }
  else if (iVar1 == 3) {
    if ((ar6 & 0xff) == 0) {
      uVar6 = 0;
      FUN_8c0c51b8(ar4,0,ar6_00,ar7);
    }
    else {
      uVar6 = 1;
      FUN_8c0c51b8(ar4,1,ar6_00,ar7);
    }
  }
  else if (iVar1 == 1) {
    if (((ar6 & 0xff) == 1) || ((ar6 & 0xff) == 2)) {
      uVar6 = 0;
      FUN_8c0c51b8(ar4,0,ar6_00,ar7);
    }
    else if ((ar6 & 0xff) == 3) {
      uVar6 = 2;
      FUN_8c0c51b8(ar4,2,ar6_00,ar7);
    }
  }
  else if (iVar1 == 2) {
    FUN_8c100694(ar4,uVar6,ar6_00,ar7);
    iVar2 = FUN_8c0637d0(ar4,uVar6,ar6_00,ar7);
    if (iVar2 == 0) {
      uVar6 = 3;
      FUN_8c0c51b8(ar4,3,ar6_00,ar7);
      iVar2 = FUN_8c0637d0(ar4,uVar6,ar6_00,ar7);
      if (iVar2 == 0) {
        uVar6 = 0;
        FUN_8c0c51a0(ar4,0,ar6_00,ar7);
      }
    }
    else {
      iVar2 = get_field_24_05c284(iVar2,uVar6,ar6_00,ar7);
      if (iVar2 == 0xd) {
        uVar6 = 1;
        FUN_8c0c51b8(ar4,1,ar6_00,ar7);
      }
      else {
        uVar6 = 3;
        FUN_8c0c51b8(ar4,3,ar6_00,ar7);
        iVar2 = FUN_8c0637d0(ar4,uVar6,ar6_00,ar7);
        if (iVar2 == 0) {
          uVar6 = 0;
          FUN_8c0c51a0(ar4,0,ar6_00,ar7);
        }
      }
    }
  }
  iVar2 = get_field_d0_0c51fc(ar4,uVar6,ar6_00,ar7);
  piVar5 = *(int **)(iVar2 * 4 + ar5);
  uVar6 = ar6;
  (**(code **)(*piVar5 + 0x70))(piVar5,ar6,ar6_00,ar7);
  a4 = FUN_8c0637d0(ar4,uVar6,ar6_00,ar7);
  if ((a4 != 0) &&
     (iVar3 = get_field_d0_0c51fc(ar4,uVar6,ar6_00,ar7), iVar3 != 3)) {
    ar6_00 = get_field_d0_0c51fc(ar4,uVar6,ar6_00,ar7);
    a5 = auStack_2c;
    (**(code **)(0x150 + *(int *)(a4 + 8)))(a4,a5,ar6_00,ar7);
    piVar5 = *(int **)(iVar2 * 4 + ar5);
    (**(code **)(0xa0 + *piVar5))(piVar5,a5,ar6_00,ar7);
  }
  FUN_8c021720(0x8c2b59d0,1,ar6_00,ar7);
  (*(code *)(&FUN_8c0d1c20))
            (*(undefined4 *)(iVar1 * 4 + ar5),*(undefined4 *)(iVar2 * 4 + ar5),ar6,ar7);
  uVar4 = Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7);
  return uVar4;
}

__asm__(".globl _FUN_8c0c4e58\n.set _FUN_8c0c4e58, _FUN_8c0c4e58_def\n");
//@unit 8c0c5198
#include "../decls.h"
undefined4 noop_0c5198_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0c5198\n.set _noop_0c5198, _noop_0c5198_def\n");
//@unit 8c0c519c
#include "../decls.h"
undefined4 noop_0c519c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0c519c\n.set _noop_0c519c, _noop_0c519c_def\n");
//@unit 8c0c51a0
#include "../decls.h"
int FUN_8c0c51a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined2 *)(0x18c + ar4) = 0x78;
  iVar1 = 0x188;
  *(undefined4 *)(0x188 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0c51a0\n.set _FUN_8c0c51a0, _FUN_8c0c51a0_def\n");
//@unit 8c0c51b8
#include "../decls.h"
int FUN_8c0c51b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0xd0;
  *(undefined4 *)(0xd0 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0c51b8\n.set _FUN_8c0c51b8, _FUN_8c0c51b8_def\n");
//@unit 8c0c51c4
#include "../decls.h"
int FUN_8c0c51c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c10168c(ar4,ar5,ar6,ar7);
  *(undefined2 *)(0x18c + ar4) = 0x78;
  iVar1 = 0x188;
  *(undefined4 *)(0x188 + ar4) = 6;
  return iVar1;
}

__asm__(".globl _FUN_8c0c51c4\n.set _FUN_8c0c51c4, _FUN_8c0c51c4_def\n");
//@unit 8c0c51f4
#include "../decls.h"
undefined4 ret_const_0_0c51f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_0c51f4\n.set _ret_const_0_0c51f4, _ret_const_0_0c51f4_def\n");
//@unit 8c0c51fc
#include "../decls.h"
undefined4 get_field_d0_0c51fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xd0 + ar4);
}

__asm__(".globl _get_field_d0_0c51fc\n.set _get_field_d0_0c51fc, _get_field_d0_0c51fc_def\n");
//@unit 8c0c5208
#include "../decls.h"
int FUN_8c0c5208_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c015224(ar4,ar5,ar6,ar7);
  FUN_8c015ab8(ar4 + 8,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0xc,ar5,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x18) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x18) = CONCAT44(0x3f800000,extraout_fr1);
  }
  *(undefined4 *)(ar4 + 0x1c) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0c5208\n.set _FUN_8c0c5208, _FUN_8c0c5208_def\n");
//@unit 8c0c524c
#include "../decls.h"
int FUN_8c0c524c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Vec3_ctor_zero(ar4,ar5,ar6,ar7);
  *(undefined2 *)(ar4 + 0x10) = 0x78;
  return ar4;
}

__asm__(".globl _FUN_8c0c524c\n.set _FUN_8c0c524c, _FUN_8c0c524c_def\n");
//@unit 8c0c526c
#include "../decls.h"
undefined4 FUN_8c0c526c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Vec3_ctor_zero(ar4,ar5,ar6,ar7);
  FUN_8c0c5304(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0c526c\n.set _FUN_8c0c526c, _FUN_8c0c526c_def\n");
//@unit 8c0c5294
#include "../decls.h"
undefined * FUN_8c0c5294_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  
  *(float *)(ar4 + 0x10) = *(float *)(ar4 + 0x10) + 0.3;
  *(float *)(ar4 + 4) = *(float *)(ar4 + 4) + *(float *)(ar4 + 0x10);
  puVar1 = &DAT_8c0c52f4;
  if (670.0 < *(float *)(ar4 + 4)) {
    *(undefined4 *)(ar4 + 4) = 0x44278000;
    puVar1 = (undefined *)FUN_8c0c52fc(ar4,ar5,ar6,ar7);
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0c5294\n.set _FUN_8c0c5294, _FUN_8c0c5294_def\n");
//@unit 8c0c52fc
#include "../decls.h"
undefined4 FUN_8c0c52fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x14) = 0;
  return 0;
}

__asm__(".globl _FUN_8c0c52fc\n.set _FUN_8c0c52fc, _FUN_8c0c52fc_def\n");
//@unit 8c0c5304
#include "../decls.h"
undefined4 FUN_8c0c5304_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  return 0;
}

__asm__(".globl _FUN_8c0c5304\n.set _FUN_8c0c5304, _FUN_8c0c5304_def\n");
//@unit 8c0c5314
#include "../decls.h"
undefined4 FUN_8c0c5314_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0c5330(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0c5314\n.set _FUN_8c0c5314, _FUN_8c0c5314_def\n");
//@unit 8c0c5330
#include "../decls.h"
undefined4 FUN_8c0c5330_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 3;
  ar4[2] = 0xffffffff;
  return 0xffffffff;
}

__asm__(".globl _FUN_8c0c5330\n.set _FUN_8c0c5330, _FUN_8c0c5330_def\n");
//@unit 8c0c5340
#include "../decls.h"
undefined4 * FUN_8c0c5340_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  FUN_8c0ba898(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c12b388);
  s_WaterTank_0dcaa2(ar4 + 6,ar5,ar6,ar7);
  s_SoilTank_0e437e((int)ar4 + 0x232a0,ar5,ar6,ar7);
  s_Outside_0e5e56((int)ar4 + 0x24898,ar5,ar6,ar7);
  s_INCUBATOR_0e74ae((int)ar4 + 0x2ccac,ar5,ar6,ar7);
  FUN_8c0c5314((int)ar4 + 0x2d1b0,ar5,ar6,ar7);
  Vec3_set_zero((int)ar4 + 0x2d3b0,ar5,ar6,ar7);
  FUN_8c015224((int)ar4 + 0x2d3f4,ar5,ar6,ar7);
  FUN_8c0ce920(ar4,ar5,ar6,ar7);
  puVar1 = (&DATA_8c13cbfc);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d170);
  uVar2 = *(undefined4 *)((&DATA_8c13cbfc) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cbfc);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cc08);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d17c);
  uVar2 = *(undefined4 *)((&DATA_8c13cc08) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cc08);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cc14);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d188);
  uVar2 = *(undefined4 *)((&DATA_8c13cc14) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cc14);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cc20);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d194);
  uVar2 = *(undefined4 *)((&DATA_8c13cc20) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cc20);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cc2c);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d1a0);
  uVar2 = *(undefined4 *)((&DATA_8c13cc2c) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cc2c);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cc38);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d1bc);
  uVar2 = *(undefined4 *)((&DATA_8c13cc38) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cc38);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cc44);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d1ec);
  uVar2 = *(undefined4 *)((&DATA_8c13cc44) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cc44);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cc50);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d21c);
  uVar2 = *(undefined4 *)((&DATA_8c13cc50) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cc50);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cc5c);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d24c);
  uVar2 = *(undefined4 *)((&DATA_8c13cc5c) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cc5c);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cc68);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d27c);
  uVar2 = *(undefined4 *)((&DATA_8c13cc68) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cc68);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cc74);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d2ac);
  uVar2 = *(undefined4 *)((&DATA_8c13cc74) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cc74);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cc80);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d2dc);
  uVar2 = *(undefined4 *)((&DATA_8c13cc80) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cc80);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cc8c);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d30c);
  uVar2 = *(undefined4 *)((&DATA_8c13cc8c) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cc8c);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cc98);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d33c);
  uVar2 = *(undefined4 *)((&DATA_8c13cc98) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cc98);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cca4);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d36c);
  uVar2 = *(undefined4 *)((&DATA_8c13cca4) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cca4);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13ccb0);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d1c8);
  uVar2 = *(undefined4 *)((&DATA_8c13ccb0) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13ccb0);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13ccbc);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d1f8);
  uVar2 = *(undefined4 *)((&DATA_8c13ccbc) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13ccbc);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13ccc8);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d228);
  uVar2 = *(undefined4 *)((&DATA_8c13ccc8) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13ccc8);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13ccd4);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d258);
  uVar2 = *(undefined4 *)((&DATA_8c13ccd4) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13ccd4);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cce0);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d288);
  uVar2 = *(undefined4 *)((&DATA_8c13cce0) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cce0);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13ccec);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d2b8);
  uVar2 = *(undefined4 *)((&DATA_8c13ccec) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13ccec);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13ccf8);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d2e8);
  uVar2 = *(undefined4 *)((&DATA_8c13ccf8) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13ccf8);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cd04);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d318);
  uVar2 = *(undefined4 *)((&DATA_8c13cd04) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cd04);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cd10);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d348);
  uVar2 = *(undefined4 *)((&DATA_8c13cd10) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cd10);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cd1c);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d378);
  uVar2 = *(undefined4 *)((&DATA_8c13cd1c) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cd1c);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cd28);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d1d4);
  uVar2 = *(undefined4 *)((&DATA_8c13cd28) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cd28);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cd34);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d204);
  uVar2 = *(undefined4 *)((&DATA_8c13cd34) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cd34);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cd40);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d234);
  uVar2 = *(undefined4 *)((&DATA_8c13cd40) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cd40);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cd4c);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d264);
  uVar2 = *(undefined4 *)((&DATA_8c13cd4c) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cd4c);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cd58);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d294);
  uVar2 = *(undefined4 *)((&DATA_8c13cd58) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cd58);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cd64);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d2c4);
  uVar2 = *(undefined4 *)((&DATA_8c13cd64) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cd64);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cd70);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d2f4);
  uVar2 = *(undefined4 *)((&DATA_8c13cd70) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cd70);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cd7c);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d324);
  uVar2 = *(undefined4 *)((&DATA_8c13cd7c) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cd7c);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cd88);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d354);
  uVar2 = *(undefined4 *)((&DATA_8c13cd88) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cd88);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cd94);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d384);
  uVar2 = *(undefined4 *)((&DATA_8c13cd94) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cd94);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cda0);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d1e0);
  uVar2 = *(undefined4 *)((&DATA_8c13cda0) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cda0);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c125408);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d210);
  uVar2 = *(undefined4 *)((&DATA_8c125408) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c125408);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cdac);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d240);
  uVar2 = *(undefined4 *)((&DATA_8c13cdac) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cdac);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c125408);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d270);
  uVar2 = *(undefined4 *)((&DATA_8c125408) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c125408);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cdb8);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d2a0);
  uVar2 = *(undefined4 *)((&DATA_8c13cdb8) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cdb8);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c125408);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d2d0);
  uVar2 = *(undefined4 *)((&DATA_8c125408) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c125408);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c125408);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d300);
  uVar2 = *(undefined4 *)((&DATA_8c125408) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c125408);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c125408);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d330);
  uVar2 = *(undefined4 *)((&DATA_8c125408) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c125408);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13cdc4);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d360);
  uVar2 = *(undefined4 *)((&DATA_8c13cdc4) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c13cdc4);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c125408);
  puVar3 = (undefined4 *)((int)ar4 + 0x2d390);
  uVar2 = *(undefined4 *)((&DATA_8c125408) + 4);
  *puVar3 = *(undefined4 *)(&DATA_8c125408);
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  ar4[2] = ar4 + 6;
  ar4[3] = (int)ar4 + 0x232a0;
  ar4[4] = (int)ar4 + 0x24898;
  ar4[5] = (int)ar4 + 0x2ccac;
  return ar4;
}

__asm__(".globl _FUN_8c0c5340\n.set _FUN_8c0c5340, _FUN_8c0c5340_def\n");
//@unit 8c0c58f8
#include "../decls.h"
int free_if_nonnull_wrap_0c58f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0c58f8\n.set _free_if_nonnull_wrap_0c58f8, _free_if_nonnull_wrap_0c58f8_def\n");
//@unit 8c0c5928
#include "../decls.h"
undefined4 * Class_12b388_m0_0c5928_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b388;
    free_if_nonnull_wrap_0153e4(ar4 + 0xb4fd,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0xb4ec,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0c58f8(ar4 + 0xb46c,0xffffffff,ar6,ar7);
    Class_12b3b8_m0_0e77ec(ar4 + 0xb32b,0xffffffff,ar6,ar7);
    Class_12b580_m0_0e61f4(ar4 + 0x9226,0xffffffff,ar6,ar7);
    Class_12b758_m0_0e46cc(ar4 + 0x8ca8,0xffffffff,ar6,ar7);
    Class_12b930_m0_0dde84(ar4 + 6,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    free_if_nonnull_wrap_0ba8ac(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12b388_m0_0c5928\n.set _Class_12b388_m0_0c5928, _Class_12b388_m0_0c5928_def\n");
//@unit 8c0c5a04
#include "../decls.h"
int s_GRAPHICS_MESSAGE_0c5a08_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *ar6_00;
  undefined4 uVar1;
  undefined4 a7;
  int iVar2;
  undefined4 in_fr1;
  char cVar3;
  
  cVar3 = '\0';
  _DAT_8c4369d8 = 0xff000000;
  _DAT_8c4369d4 = 0xff000000;
  _DAT_8c4369d0 = 0xff000000;
  _DAT_8c4369cc = 0xff000000;
  _DAT_8c4369e8 = 0xff000000;
  _DAT_8c4369e4 = 0xff000000;
  _DAT_8c4369e0 = 0xff000000;
  _DAT_8c4369dc = 0xff000000;
  FUN_8c016318(0x8c436938,0x8c43698c,&DAT_8c4369cc,4,ar5);
  FUN_8c016318(0x8c436958,0x8c4369ac,&DAT_8c4369dc,4,ar5);
  if (cVar3 == '\0') {
    _DAT_8c4369ec = 0;
    uVar1 = in_fr1;
  }
  else {
    uVar1 = 0x43f00000;
    _DAT_8c4369ec = in_fr1;
  }
  _DAT_8c4369f0 = 0x43f00000;
  if (cVar3 == '\0') {
    _DAT_8c4369f8 = 0;
    _DAT_8c436a00 = uVar1;
  }
  else {
    _DAT_8c436a00 = 0x44200000;
    _DAT_8c4369f8 = uVar1;
  }
  _DAT_8c4369fc = 0x44200000;
  if (cVar3 == '\0') {
    _DAT_8c436a00 = 0;
  }
  _DAT_8c436a08 = 0x43f00000;
  _DAT_8c436a04 = 0x44200000;
  _DAT_8c436a18 = 0xffffff;
  _DAT_8c436a14 = 0xffffff;
  _DAT_8c436a10 = 0xffffff;
  _DAT_8c436a0c = 0xffffff;
  uVar1 = 4;
  ar6_00 = &DAT_8c436a0c;
  _DAT_8c4369f4 = _DAT_8c4369f8;
  FUN_8c016318(0x8c436978,&DAT_8c4369ec,&DAT_8c436a0c,4,ar5);
  FUN_8c015198(0x8c436938,0x20,ar6_00,uVar1,ar5);
  FUN_8c015198(0x8c436958,0x20,ar6_00,uVar1,ar5);
  FUN_8c015198(0x8c436978,0x60,ar6_00,uVar1,ar5);
  for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
    *(undefined4 *)(iVar2 * 0xc + ar4 + 0x2d3c0) = 0;
  }
  a7 = 4;
  uVar1 = 0x8c4312a8;
  FUN_8c239170(ar4 + 0x2d3ec,ar4 + 0x2d3bc,0x8c4312a8,4);
  iVar2 = ar4 + 0x2d3ec;
  (**(code **)(*(int *)(ar4 + 0x2d3f4) + 8))((int *)(ar4 + 0x2d3f4),iVar2,uVar1,a7);
  uVar1 = get_field_4_0253e4(ar4 + 0x2d3f4,iVar2,uVar1,a7);
  iVar2 = FUN_8c02100c(ar5,s_exit_pvm_8c13d014,s_GRAPHICS_MESSAGE_8c13d01d,uVar1);
  if (iVar2 == -1) {
    iVar2 = report_error_message
                      (s_Failed_to_load_ExitMenu_message_p_8c13d02e,s_CGame__Init___8c13d054,0,2);
  }
  return iVar2;
}

__asm__(".globl _s_GRAPHICS_MESSAGE_0c5a08\n.set _s_GRAPHICS_MESSAGE_0c5a08, _s_GRAPHICS_MESSAGE_0c5a08_def\n");
//@unit 8c0c5c08
#include "../decls.h"
undefined4 Class_12b388_m1_0c5c08_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int ar5_00;
  
  ar5_00 = ar5;
  iVar1 = pure_virtual_stub(ar4,ar5,ar6,ar7);
  uVar2 = FUN_8c01f520(0x8c3dd7dc,ar5_00,ar6,ar7);
  iVar3 = FUN_8c01ad88(uVar2,ar5_00,ar6,ar7);
  iVar4 = 1;
  if ((((iVar3 == 1) ||
       (iVar4 = FUN_8c0ffff4(*(undefined4 *)(0x7cc + ar5),ar5_00,ar6,ar7),
       iVar4 != 1)) || (iVar4 = *(int *)(0x2d164 + ar4), iVar4 != 0)) && (iVar1 != 0)) {
    return iVar4;
  }
  uVar2 = FUN_8c0c5cb4(ar4,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _Class_12b388_m1_0c5c08\n.set _Class_12b388_m1_0c5c08, _Class_12b388_m1_0c5c08_def\n");
//@unit 8c0c5cb4
#include "../decls.h"
undefined4 FUN_8c0c5cb4_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  int ar5_01;
  undefined4 in_stack_ffffffe8;
  int aiStack_10 [2];
  
  aiStack_10[0] = 0;
  ar5_00 = 0;
  FUN_8c0c412c(&DAT_8c2b5628,0,ar6,ar7);
  FUN_8c016340(0x8c431294,ar5_00,ar6,ar7);
  uVar1 = 0x8c35468c;
  FUN_8c0f8134(0x8c35468c,ar5_00,ar6,ar7);
  FUN_8c2565c4(uVar1,ar5_00,ar6,ar7,in_stack_ffffffe8);
  FUN_8c258e0a(0,ar5_00,ar6,ar7,in_stack_ffffffe8);
  FUN_8c0fef10(*(undefined4 *)(ar5 + 2000),ar5_00,ar6,ar7);
  aiStack_10[0] = FUN_8c0c5db0(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
  if (aiStack_10[0] != 0) {
    ar5_00 = 1;
    FUN_8c0d1b90(aiStack_10,1,ar6,ar7);
  }
  FUN_8c0b936c(ar5,ar5_00,ar6,ar7);
  uVar1 = ar4;
  ar5_01 = ar5;
  FUN_8c0c75f4(ar4,ar5,ar6,ar7);
  FUN_8c0f7ea0(uVar1,ar5_01,ar6,ar7);
  FUN_8c0ce920(ar4,ar5_01,ar6,ar7);
  *(int *)(ar5 + 0x7e0) = *(int *)(ar5 + 0x7e0) + 1;
  *(undefined4 *)(ar5 + 0x7dc) = 0;
  return 0x7dc;
}

__asm__(".globl _FUN_8c0c5cb4\n.set _FUN_8c0c5cb4, _FUN_8c0c5cb4_def\n");
//@unit 8c0c5db0
#include "../decls.h"
undefined4 FUN_8c0c5db0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0c5dd8(ar4 + 0xd8,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0c5db0\n.set _FUN_8c0c5db0, _FUN_8c0c5db0_def\n");
//@unit 8c0c5dd8
#include "../decls.h"
undefined4 FUN_8c0c5dd8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar4 + 4);
  *(undefined4 *)(ar4 + 4) = 0;
  return uVar1;
}

__asm__(".globl _FUN_8c0c5dd8\n.set _FUN_8c0c5dd8, _FUN_8c0c5dd8_def\n");
//@unit 8c0c5de8
#include "../decls.h"
undefined4 s_wtNumberOfItems_is_over_CGam_0c5df6_def(int ar4,int ar5,int ar6,undefined *ar7)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *ar7_00;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined8 in_dr0;
  undefined8 uVar11;
  char cVar12;
  undefined4 uStack_44;
  undefined4 uStack_40;
  byte bStack_28;
  
  cVar12 = '\0';
  puVar6 = ar7 + 0x14;
  iVar9 = ar6;
  puVar7 = ar7;
  FUN_8c0b9d14(ar5,puVar6,ar6,ar7);
  *(undefined2 *)(ar7 + 0x1e) = *(undefined2 *)(ar5 + 0x96);
  *(undefined2 *)(ar7 + 0x20) = *(undefined2 *)(ar5 + 0x98);
  *(undefined2 *)(ar7 + 0x22) = *(undefined2 *)(ar5 + 0x9a);
  *(undefined2 *)(ar7 + 0x24) = *(undefined2 *)(ar5 + 0x9c);
  *(undefined2 *)(ar7 + 0x26) = *(undefined2 *)(ar5 + 0x9e);
  uVar2 = FUN_8c028ee4(ar5,puVar6,iVar9,puVar7);
  *(short *)(ar7 + 0x28) = (short)uVar2;
  for (iVar8 = 0; iVar8 < 8; iVar8 = iVar8 + 1) {
    ar7[iVar8 + 0x2a] = *(undefined1 *)(ar5 + iVar8 + 4);
  }
  for (iVar8 = 0; iVar8 < 3; iVar8 = iVar8 + 1) {
    iVar9 = iVar8 * 10 + ar5;
    *(undefined2 *)(ar7 + iVar8 * 10 + 0x32) = *(undefined2 *)(iVar9 + 0xc);
    *(undefined2 *)(ar7 + iVar8 * 10 + 0x34) = *(undefined2 *)(iVar9 + 0xe);
    *(undefined2 *)(ar7 + iVar8 * 10 + 0x36) = *(undefined2 *)(iVar9 + 0x10);
    *(undefined2 *)(ar7 + iVar8 * 10 + 0x38) = *(undefined2 *)(iVar9 + 0x12);
    *(undefined2 *)(ar7 + iVar8 * 10 + 0x3a) = *(undefined2 *)(iVar9 + 0x14);
    iVar9 = ar5;
  }
  ar7_00 = FUN_8c0b9f5c;
  FUN_8c0b9f5c(ar7 + 0x50,ar5 + 0x2c,iVar9,FUN_8c0b9f5c);
  puVar6 = (undefined *)0xa8;
  puVar7 = (undefined *)(uint)*(byte *)(ar5 + 0xa0);
  ar7[0xa8] = *(byte *)(ar5 + 0xa0);
  uVar2 = get_field_d0_0c51fc(*(undefined4 *)(ar5 + 0x7cc),puVar7,0xa8,ar7_00);
  *(undefined4 *)(ar7 + 0xac) = uVar2;
  if (ar6 == 0) {
    *(undefined4 *)(ar7 + 200) = 0xffffffff;
  }
  else {
    puVar7 = ar7 + 0xb0;
    (**(code **)(*(int *)(ar6 + 8) + 0x158))(ar6,puVar7,puVar6,ar7_00);
  }
  for (iVar9 = 0; iVar9 < 0x14; iVar9 = iVar9 + 1) {
    *(undefined4 *)(ar7 + iVar9 * 0xf0 + 0x204) = 0xffffffff;
  }
  for (iVar9 = 0; iVar9 < 0x14; iVar9 = iVar9 + 1) {
    puVar6 = (undefined *)0xffffffff;
    *(undefined4 *)(ar7 + iVar9 * 0xf0 + 0x14dc) = 0xffffffff;
  }
  for (iVar9 = 0; iVar9 < 10; iVar9 = iVar9 + 1) {
    *(undefined4 *)(ar7 + iVar9 * 0xf0 + 0x27ac) = 0xffffffff;
  }
  if ((byte)ar7[0xa8] < 3) {
    uVar2 = (**(code **)(**(int **)(ar4 + 8) + 0x118))(*(int **)(ar4 + 8),puVar7,puVar6,ar7_00);
    ar7[0x1b4] = (char)uVar2;
    (**(code **)(**(int **)(ar4 + 8) + 0x178))(*(int **)(ar4 + 8),puVar7,puVar6,ar7_00);
    if (cVar12 == '\0') {
      *(int *)(ar7 + 0x1a0) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(undefined8 *)(ar7 + 0x1a0) = in_dr0;
    }
    (**(code **)(**(int **)(ar4 + 8) + 0x17c))(*(int **)(ar4 + 8),puVar7,puVar6,ar7_00);
    uStack_40 = (undefined4)in_dr0;
    uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (cVar12 == '\0') {
      *(undefined4 *)(ar7 + 0x1b0) = uVar2;
      uStack_40 = uVar2;
    }
    else {
      *(undefined8 *)(ar7 + 0x1b0) = in_dr0;
    }
    (**(code **)(**(int **)(ar4 + 8) + 0x188))(*(int **)(ar4 + 8),puVar7,puVar6,ar7_00);
    uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    uStack_44 = (int)in_dr0;
    if (cVar12 == '\0') {
      uStack_44 = uVar2;
      uVar2 = uStack_40;
    }
    uStack_40 = uVar2;
    puVar7 = (undefined *)0x1a4;
    if (cVar12 == '\0') {
      in_dr0 = CONCAT44(uStack_44,(int)in_dr0);
      *(undefined4 *)(ar7 + 0x1a4) = uStack_44;
    }
    else {
      in_dr0 = CONCAT44(uStack_40,uStack_44);
      *(undefined8 *)(ar7 + 0x1a4) = in_dr0;
    }
    uVar2 = (**(code **)(**(int **)(ar4 + 8) + 0x18c))(*(int **)(ar4 + 8),0x1a4,puVar6,ar7_00);
    *(undefined4 *)(ar7 + 0x1b8) = uVar2;
    ar7_00 = (code *)0x0;
    for (puVar10 = (undefined *)0x0; (int)puVar10 < 3; puVar10 = puVar10 + 1) {
      puVar7 = puVar10;
      iVar9 = (**(code **)(**(int **)(ar4 + 8) + 0x104))(*(int **)(ar4 + 8),puVar10,puVar6,ar7_00);
      if (puVar10 == (undefined *)0x0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar7 + 0x1bc) = 0x446a56b8;
          *(undefined4 *)(ar7 + 0x1c0) = 0x43340000;
          in_dr0 = CONCAT44(0x43557405,(int)in_dr0);
          *(undefined4 *)(ar7 + 0x1c4) = 0x43557405;
        }
        else {
          *(undefined8 *)(ar7 + 0x1bc) = 0x1c0446a56b8;
          *(undefined8 *)(ar7 + 0x1c0) = 0x1c443340000;
          in_dr0 = 0x54fb1feb43557405;
          *(undefined8 *)(ar7 + 0x1c4) = 0x54fb1feb43557405;
        }
      }
      else {
        if (cVar12 == '\0') {
          uVar2 = *(undefined4 *)(iVar9 + 4);
          uVar11 = CONCAT44(uVar2,(int)in_dr0);
          *(undefined4 *)(ar7 + (int)puVar10 * 0x10 + 0x1bc) = uVar2;
        }
        else {
          uVar11 = *(undefined8 *)(iVar9 + 4);
          *(undefined8 *)(ar7 + (int)puVar10 * 0x10 + 0x1bc) = uVar11;
        }
        if (cVar12 == '\0') {
          uVar2 = *(undefined4 *)(iVar9 + 8);
          uVar11 = CONCAT44(uVar2,(int)uVar11);
          *(undefined4 *)(ar7 + (int)puVar10 * 0x10 + 0x1c0) = uVar2;
        }
        else {
          uVar11 = *(undefined8 *)(iVar9 + 8);
          *(undefined8 *)(ar7 + (int)puVar10 * 0x10 + 0x1c0) = uVar11;
        }
        if (cVar12 == '\0') {
          uVar2 = *(undefined4 *)(iVar9 + 0xc);
          in_dr0 = CONCAT44(uVar2,(int)uVar11);
          *(undefined4 *)(ar7 + (int)puVar10 * 0x10 + 0x1c4) = uVar2;
        }
        else {
          in_dr0 = *(undefined8 *)(iVar9 + 0xc);
          *(undefined8 *)(ar7 + (int)puVar10 * 0x10 + 0x1c4) = in_dr0;
        }
      }
    }
    if (0x19 < (byte)ar7[0x1b4]) {
      ar7_00 = (code *)0x2;
      puVar6 = (undefined *)0x1;
      puVar7 = &DAT_8c13d092;
      report_error_message(s_wtNumberOfItems_is_over__CGame___8c13d062,&DAT_8c13d092,1,2);
    }
    (**(code **)(**(int **)(ar4 + 8) + 0x198))(*(int **)(ar4 + 8),puVar7,puVar6,ar7_00);
    if ((int)((uint)bStack_28 << 0x1f) < 0) {
      *(undefined4 *)(ar7 + 0x1a8) = 1;
    }
    else {
      *(undefined4 *)(ar7 + 0x1a8) = 0;
    }
    if ((int)((uint)bStack_28 << 0x1e) < 0) {
      *(undefined4 *)(ar7 + 0x1ac) = 1;
    }
    else {
      *(undefined4 *)(ar7 + 0x1ac) = 0;
    }
    bVar1 = ar7[0x1b4];
    iVar9 = 0;
    for (puVar10 = (undefined *)0x0; (int)puVar10 < (int)(uint)bVar1; puVar10 = puVar10 + 1) {
      puVar7 = puVar10;
      iVar8 = (**(code **)(**(int **)(ar4 + 8) + 0xfc))(*(int **)(ar4 + 8),puVar10,puVar6,ar7_00);
      iVar5 = get_field_24_05c284(iVar8,puVar7,puVar6,ar7_00);
      iVar4 = FUN_8c0c4c84(iVar8,puVar7,puVar6,ar7_00);
      if (((iVar4 == 1) || (iVar5 == 10)) || (iVar5 == 0xd)) {
        ar7[0x1b4] = ar7[0x1b4] + -1;
      }
      else {
        puVar7 = ar7 + iVar9 * 0xf0 + 0x1ec;
        (**(code **)(*(int *)(iVar8 + 8) + 0x158))(iVar8,puVar7,puVar6,ar7_00);
        iVar9 = iVar9 + 1;
      }
    }
    uVar2 = (**(code **)(**(int **)(ar4 + 8) + 0x148))(*(int **)(ar4 + 8),puVar7,puVar6,ar7_00);
    puVar7 = ar7 + 0x14ac;
    FUN_8c0e9898(uVar2,puVar7,puVar6,ar7_00);
  }
  else {
    uVar2 = (**(code **)(**(int **)(ar4 + 0x10) + 0x118))
                      (*(int **)(ar4 + 0x10),puVar7,puVar6,ar7_00);
    ar7[0x2790] = (char)uVar2;
    uVar2 = (**(code **)(**(int **)(ar4 + 0x10) + 0x140))
                      (*(int **)(ar4 + 0x10),puVar7,puVar6,ar7_00);
    *(undefined4 *)(ar7 + 0x278c) = uVar2;
    bVar1 = ar7[0x2790];
    iVar9 = 0;
    for (iVar8 = 0; iVar8 < (int)(uint)bVar1; iVar8 = iVar8 + 1) {
      iVar5 = iVar8;
      iVar4 = (**(code **)(**(int **)(ar4 + 0x10) + 0xfc))
                        (*(int **)(ar4 + 0x10),iVar8,puVar6,ar7_00);
      iVar3 = get_field_24_05c284(iVar4,iVar5,puVar6,ar7_00);
      iVar5 = FUN_8c0c4c84(iVar4,iVar5,puVar6,ar7_00);
      if (((iVar5 == 1) || (iVar3 == 10)) || (iVar3 == 0xd)) {
        ar7[0x2790] = ar7[0x2790] + -1;
        puVar7 = (undefined *)0x0;
        puVar6 = ar7;
      }
      else {
        puVar7 = ar7 + iVar9 * 0xf0 + 0x2794;
        (**(code **)(*(int *)(iVar4 + 8) + 0x158))(iVar4,puVar7,puVar6,ar7_00);
        iVar9 = iVar9 + 1;
      }
    }
  }
  uVar2 = (**(code **)(**(int **)(ar4 + 0xc) + 0x118))(*(int **)(ar4 + 0xc),puVar7,puVar6,ar7_00);
  ar7[0x14c0] = (char)uVar2;
  (**(code **)(**(int **)(ar4 + 0xc) + 0x188))(*(int **)(ar4 + 0xc),puVar7,puVar6,ar7_00);
  if (cVar12 == '\0') {
    *(int *)(ar7 + 0x14bc) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *(undefined8 *)(ar7 + 0x14bc) = in_dr0;
  }
  if (0x19 < (byte)ar7[0x14c0]) {
    ar7_00 = (code *)0x2;
    puVar6 = (undefined *)0x1;
    puVar7 = &DAT_8c13d092;
    report_error_message(s_stNumberOfItems_is_over__CGame___8c13d0ca,&DAT_8c13d092,1,2);
  }
  (**(code **)(**(int **)(ar4 + 0xc) + 0x198))(*(int **)(ar4 + 0xc),puVar7,puVar6,ar7_00);
  if ((int)((uint)bStack_28 << 0x1e) < 0) {
    *(undefined4 *)(ar7 + 0x14b4) = 1;
  }
  if ((int)((uint)bStack_28 << 0x1f) < 0) {
    *(undefined4 *)(ar7 + 0x14b8) = 1;
  }
  bVar1 = ar7[0x14c0];
  iVar8 = 0;
  for (iVar9 = 0; iVar9 < (int)(uint)bVar1; iVar9 = iVar9 + 1) {
    iVar5 = iVar9;
    iVar4 = (**(code **)(**(int **)(ar4 + 0xc) + 0xfc))(*(int **)(ar4 + 0xc),iVar9,puVar6,ar7_00);
    iVar5 = FUN_8c0c4c84(iVar4,iVar5,puVar6,ar7_00);
    if (iVar5 == 1) {
      ar7[0x14c0] = ar7[0x14c0] + -1;
      puVar7 = ar7;
    }
    else {
      puVar7 = ar7 + iVar8 * 0xf0 + 0x14c4;
      (**(code **)(*(int *)(iVar4 + 8) + 0x158))(iVar4,puVar7,puVar6,ar7_00);
      iVar8 = iVar8 + 1;
    }
  }
  uVar2 = (**(code **)(**(int **)(ar4 + 0xc) + 0x148))(*(int **)(ar4 + 0xc),puVar7,puVar6,ar7_00);
  FUN_8c0e9898(uVar2,ar7 + 0x2784,puVar6,ar7_00);
  puVar7 = ar7 + 0x30f4;
  FUN_8c0fa310(0x8c35468c,puVar7,puVar6,ar7_00);
  uVar2 = FUN_8c01f528(0x8c3dd7dc,puVar7,puVar6,ar7_00);
  uVar2 = FUN_8c01e04c(uVar2,ar7 + 0x4104,puVar6,ar7_00);
  return uVar2;
}

__asm__(".globl _s_wtNumberOfItems_is_over_CGam_0c5df6\n.set _s_wtNumberOfItems_is_over_CGam_0c5df6, _s_wtNumberOfItems_is_over_CGam_0c5df6_def\n");
//@unit 8c0c67dc
#include "../decls.h"
undefined4 ret_const_0_0c67dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_0c67dc\n.set _ret_const_0_0c67dc, _ret_const_0_0c67dc_def\n");
//@unit 8c0c67e4
#include "../decls.h"
undefined4 ret_const_0_0c67e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_0c67e4\n.set _ret_const_0_0c67e4, _ret_const_0_0c67e4_def\n");
//@unit 8c0c67ec
#include "../decls.h"
undefined4 ret_const_0_0c67ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_0c67ec\n.set _ret_const_0_0c67ec, _ret_const_0_0c67ec_def\n");
//@unit 8c0c67f4
#include "../decls.h"
undefined4 FUN_8c0c67f4_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar6_00;
  int iVar3;
  
  ar6_00 = ar6;
  FUN_8c0b9d14(ar5,ar6 + 0x14,ar6,ar7);
  iVar2 = ar6 + 0x1e;
  FUN_8c0b9d14(ar5,iVar2,ar6_00,ar7);
  *(undefined2 *)(ar6 + 0x28) = 0;
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    *(undefined1 *)(ar6 + iVar3 + 0x2a) = 0;
  }
  for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
    *(undefined2 *)(iVar3 * 10 + ar6 + 0x32) = 0;
    *(undefined1 *)(iVar3 * 10 + ar6 + 0x34) = 0;
    *(undefined1 *)(iVar3 * 10 + ar6 + 0x35) = 0;
    *(undefined1 *)(iVar3 * 10 + ar6 + 0x36) = 0;
    *(undefined1 *)(iVar3 * 10 + ar6 + 0x37) = 0;
    *(undefined1 *)(iVar3 * 10 + ar6 + 0x38) = 0;
  }
  *(undefined1 *)(ar6 + 0x50) = 0;
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    *(undefined4 *)(ar6 + iVar3 * 4 + 0x54) = 0;
  }
  for (iVar3 = 0; iVar3 < 0x3e; iVar3 = iVar3 + 1) {
    *(undefined1 *)(ar6 + iVar3 + 0x68) = 0;
  }
  *(undefined1 *)(0xa8 + ar6) = *(undefined4 *)0x8c436548;
  *(undefined4 *)(0xac + ar6) = 0;
  *(undefined4 *)(0xc8 + ar6) = 0xffffffff;
  for (iVar3 = 0; iVar3 < 0x14; iVar3 = iVar3 + 1) {
    *(undefined4 *)(0x204 + iVar3 * 0xf0 + ar6) = 0xffffffff;
  }
  for (iVar3 = 0; iVar3 < 0x14; iVar3 = iVar3 + 1) {
    *(undefined4 *)(0x14dc + iVar3 * 0xf0 + ar6) = 0xffffffff;
  }
  for (iVar3 = 0; iVar3 < 10; iVar3 = iVar3 + 1) {
    *(undefined4 *)(0x27ac + iVar3 * 0xf0 + ar6) = 0xffffffff;
  }
  FUN_8c0d1d54(ar6,iVar2,ar6_00,ar7);
  FUN_8c0e98f8(ar6 + 0x14ac,iVar2,ar6_00,ar7);
  FUN_8c0d1eb8(ar6,iVar2,ar6_00,ar7);
  FUN_8c0e98f8(ar6 + 0x2784,iVar2,ar6_00,ar7);
  FUN_8c0d1f38(ar6,iVar2,ar6_00,ar7);
  iVar2 = ar6 + 0x30f4;
  FUN_8c0fa2f0(0x8c35468c,iVar2,ar6_00,ar7);
  uVar1 = FUN_8c01f528(0x8c3dd7dc,iVar2,ar6_00,ar7);
  uVar1 = FUN_8c01e028(uVar1,ar6 + 0x4104,ar6_00,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0c67f4\n.set _FUN_8c0c67f4, _FUN_8c0c67f4_def\n");
//@unit 8c0c6a44
#include "../decls.h"
undefined4 ret_const_1_0c6a44_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}

__asm__(".globl _ret_const_1_0c6a44\n.set _ret_const_1_0c6a44, _ret_const_1_0c6a44_def\n");
//@unit 8c0c6a4c
#include "../decls.h"
undefined4 FUN_8c0c6a4c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  int ar5_00;
  int iVar2;
  float fVar3;
  double dVar4;
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar4_00 = ar5;
  ar5_00 = ar5;
  FUN_8c09d644(ar5,ar5,ar6,ar7);
  for (iVar2 = 1; iVar2 < 0xc; iVar2 = iVar2 + 1) {
    *(undefined4 *)(iVar2 * 0x80 + ar5) = 0xf;
    iVar1 = rand(ar4_00,ar5_00,ar6,ar7);
    ar4_00 = ar5 + iVar2 * 0x80;
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(0x47000000,(float)iVar1);
    }
    else {
      dVar4 = 512.0001354217529;
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 / dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(0x40800000,fVar3);
    }
    else {
      dVar4 = 2.9939312000558264e-78;
    }
    if (cVar6 == '\0') {
      uVar5 = (undefined1)(int)(SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20));
    }
    else {
      uVar5 = (undefined1)(int)(dVar4 * dVar4);
    }
    *(undefined1 *)(ar4_00 + 0x6c) = uVar5;
  }
  return 0xc;
}

__asm__(".globl _FUN_8c0c6a4c\n.set _FUN_8c0c6a4c, _FUN_8c0c6a4c_def\n");
//@unit 8c0c6ac8
#include "../decls.h"
undefined4 s_GRAPHICS_COMMON_0c6ad0_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *ar4_00;
  undefined4 uVar4;
  undefined **ar5_00;
  undefined4 uVar5;
  char *ar6_00;
  undefined4 in_stack_ffffffcc;
  
  uVar5 = 1;
  uVar4 = 0xffffffff;
  FUN_8c0c3e78(&DAT_8c2b5628,0xffffffff,1,ar7);
  iVar3 = *(int *)(ar4 + 0x2d3a0);
  if ((iVar3 < 5) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      iVar3 = ar5[499];
      FUN_8c1011e0(iVar3,uVar4,uVar5,ar7);
      FUN_8c0242e8(iVar3,uVar4,uVar5,ar7);
      _DAT_8c431a54 = 0;
      DAT_8c13bcc4 = 1;
      _DAT_8c436924 = 0;
      _DAT_8c436928 = 0;
      FUN_8c015ad4(0x8c43690c,&DAT_8c1622a4,uVar5,ar7,in_stack_ffffffcc);
      ar5_00 = &PTR_PTR_8c146440;
      Class_129920_m0_015248(0x8c43691c,&PTR_PTR_8c146440,uVar5,ar7,in_stack_ffffffcc);
      uVar4 = get_field_4_0253e4(0x8c43691c,ar5_00,uVar5,ar7);
      ar6_00 = s_GRAPHICS_COMMON_8c13d004;
      iVar3 = FUN_8c020ef0(0x8c3eb334,s_MUNZU_HAND_8c13d107,s_GRAPHICS_COMMON_8c13d004,uVar4);
      if (iVar3 == 0) {
        uVar4 = 2;
        ar6_00 = (char *)0x0;
        report_error_message(s_Failed_to_load_munzu_hand_8c13d112,s_CGame__Initial___8c13d12c,0,2);
      }
      uVar5 = 0;
      ar4_00 = &DAT_8c2b5628;
      FUN_8c0c4d70(&DAT_8c2b5628,0,ar6_00,uVar4);
      FUN_8c06a524(ar4_00,uVar5,ar6_00,uVar4);
      *(undefined4 *)(ar4 + 0x2d3a0) = 1;
      break;
    case 1:
      uVar1 = get_field_a510_01f538(0x8c3dd7dc,uVar4,uVar5,ar7);
      iVar3 = FUN_8c0b7920(uVar1,uVar4,uVar5,ar7);
      if (iVar3 == 1) {
        uVar1 = s_SEAMANDC_USR_0b76dc(uVar1,uVar4,uVar5,ar7);
        iVar3 = FUN_8c0b787c(uVar1,uVar4,uVar5,ar7);
        if (iVar3 == 1) {
          _DAT_8c43711c = *ar5;
          *(undefined4 *)(ar4 + 0x2d3a0) = 2;
        }
      }
      break;
    case 2:
      if (3 < (uint)(*ar5 - _DAT_8c43711c)) {
        *(undefined4 *)(ar4 + 0x2d3a0) = 3;
      }
      break;
    case 3:
      iVar3 = FUN_8c0b7454(s_SM2000US_USR_8c13d13d,0x8c431a68,0x4208,ar7);
      iVar2 = FUN_8c0b7454(s_SM2000US_INC_8c13d14a,0x8c435c7c,0x600,ar7);
      if ((iVar3 == 0) && (iVar2 == 0)) {
        uVar4 = 0x8c431a68;
        FUN_8c0cc784(ar4,ar5,0x8c431a68,ar7);
        (**(code **)(**(int **)(ar4 + 0x14) + 0xc0))(*(int **)(ar4 + 0x14),0x8c435c7c,uVar4,ar7);
        *(undefined4 *)(ar4 + 0x2d3a0) = 4;
      }
      else {
        *(undefined4 *)(ar4 + 0x2d3a0) = 1;
      }
      break;
    case 4:
      FUN_8c258e0a(FUN_8c0d1c3c,uVar4,uVar5,ar7,in_stack_ffffffcc);
      FUN_8c0b9230(ar5,uVar4,uVar5,ar7);
      *(undefined4 *)(ar4 + 0x2d15c) = 1;
      *(undefined4 *)(ar4 + 0x2d3a0) = 0;
    }
  }
  return 1;
}

__asm__(".globl _s_GRAPHICS_COMMON_0c6ad0\n.set _s_GRAPHICS_COMMON_0c6ad0, _s_GRAPHICS_COMMON_0c6ad0_def\n");
//@unit 8c0c6d68
#include "../decls.h"
undefined4 ret_const_1_0c6d68_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}

__asm__(".globl _ret_const_1_0c6d68\n.set _ret_const_1_0c6d68, _ret_const_1_0c6d68_def\n");
//@unit 8c0c6d70
#include "../decls.h"
undefined4 FUN_8c0c6d70_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar4_00;
  int ar5_00;
  
  ar4_00 = ar4;
  ar5_00 = ar5;
  iVar1 = pure_virtual_stub(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = s_SEAMANDC_USR_0b76dc(ar4_00,ar5_00,ar6,ar7);
    *(undefined4 *)(0x2d16c + ar4) = uVar2;
    if (*(int *)(0x2d16c + ar4) == 0) {
      uVar2 = FUN_8c0b77a0(ar5 + 0x96,ar5_00,ar6,ar7);
      *(undefined4 *)(0x2d168 + ar4) = uVar2;
    }
    FUN_8c0d1c14((uint)*(byte *)(0xa0 + ar5),ar5_00,ar6,ar7);
    pure_virtual_stub(ar4,ar5,ar6,ar7);
    *(undefined4 *)(0x2d15c + ar4) = 2;
  }
  return 1;
}

__asm__(".globl _FUN_8c0c6d70\n.set _FUN_8c0c6d70, _FUN_8c0c6d70_def\n");
//@unit 8c0c6e74
#include "../decls.h"
undefined4 s_SEAMAN_0c6e7e_def(int ar4,int ar5,undefined4 ar6,char *ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint ar5_00;
  undefined4 uVar5;
  uint extraout_fr1;
  char cVar6;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar6 = '\0';
  iVar2 = ar5;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_38,iVar2,ar6,ar7);
  uVar5 = 1;
  if (DAT_8c437124 == '\0') {
    if (cVar6 == '\0') {
      _DAT_8c437120 = _DAT_8c437120 & 0xffffffff00000000;
    }
    else {
      _DAT_8c437120 = (ulonglong)extraout_fr1;
    }
    _DAT_8c437120 = CONCAT14(1,_DAT_8c437120);
  }
  if (DAT_8c43712c == '\0') {
    if (cVar6 == '\0') {
      _DAT_8c437128 = _DAT_8c437128 & 0xffffffff00000000;
    }
    else {
      _DAT_8c437128 = (ulonglong)extraout_fr1;
    }
    _DAT_8c437128 = CONCAT14(1,_DAT_8c437128);
  }
  ar5_00 = 0x7d4;
  *(undefined4 *)(ar5 + 0x7d4) = *(undefined4 *)(ar4 + 0x2d160);
  piVar3 = (int *)(uint)*(byte *)(ar5 + 0xa0);
  FUN_8c0d1c14(piVar3,0x7d4,ar6,ar7);
  if (*(int *)(ar4 + 0x2d160) != 0) {
    if (*(int *)(ar4 + 0x2d160) == 1) {
      pure_virtual_stub(ar4,ar5,ar6,ar7);
    }
    goto LAB_8c0c7340;
  }
  if (*(int *)(ar5 + 0x84) == 0) {
    if ((*(int *)(ar5 + 0x88) != 0) && (*(int *)(ar5 + 0x88) != 1)) {
      piVar3 = *(int **)(ar5 + 0x84);
      FUN_8c0b7920(piVar3,ar5_00,ar6,ar7);
      uVar4 = s_SEAMANDC_USR_0b76dc(piVar3,ar5_00,ar6,ar7);
      *(undefined4 *)(ar4 + 0x2d16c) = uVar4;
      if (*(int *)(ar4 + 0x2d16c) == 0) {
        piVar3 = (int *)(ar5 + 0x96);
        uVar4 = FUN_8c0b77a0(piVar3,ar5_00,ar6,ar7);
        *(undefined4 *)(ar4 + 0x2d168) = uVar4;
      }
    }
    if (*(int *)(ar5 + 0x88) != 0) {
      iVar2 = get_field_d0_0c51fc(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
      ar5_00 = (uint)*(byte *)(ar5 + 0xa0);
      piVar3 = *(int **)(ar4 + iVar2 * 4 + 8);
      (**(code **)(*piVar3 + 0xa8))(piVar3,ar5_00,ar6,ar7);
    }
    if (*(int *)(ar4 + 0x2d168) == 0) {
      FUN_8c0b79f0(piVar3,ar5_00,ar6,ar7);
      ar7 = &DAT_8c13d092;
      ar6 = 0;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,5,0,&DAT_8c13d092);
      goto LAB_8c0c7340;
    }
    if (*(int *)(ar4 + 0x2d16c) != 0) {
      FUN_8c0b79f0(piVar3,ar5_00,ar6,ar7);
      FUN_8c0b787c(*(undefined4 *)(ar4 + 0x2d16c),ar5_00,ar6,ar7);
      goto LAB_8c0c7340;
    }
    iVar2 = FUN_8c1000c8(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
    if ((((iVar2 == 1) && (*(int *)(ar4 + 0x2d164) == 0)) && (DAT_8c13bcc4 == 1)) &&
       (*(int *)(ar4 + 0x2d39c) == 0)) {
      iVar2 = get_field_d0_0c51fc(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
      piVar3 = *(int **)(ar4 + iVar2 * 4 + 8);
      (**(code **)(*piVar3 + 0xa4))(piVar3,(uint)*(byte *)(ar5 + 0xa0),ar6,ar7);
      *(undefined4 *)(ar4 + 0x2d164) = 1;
    }
    if (*(int *)(ar4 + 0x2d164) == 1) {
      iVar2 = ar5;
      iVar1 = s_WARNING_EXIT_0c76d0(ar4,ar5,ar6,ar7);
      if (iVar1 == 1) {
        iVar2 = get_field_d0_0c51fc(*(undefined4 *)(ar5 + 0x7cc),iVar2,ar6,ar7);
        piVar3 = *(int **)(ar4 + iVar2 * 4 + 8);
        (**(code **)(*piVar3 + 0xa8))(piVar3,(uint)*(byte *)(ar5 + 0xa0),ar6,ar7);
        *(undefined4 *)(ar4 + 0x2d164) = 0;
      }
      else if (iVar1 == 0) {
        uVar5 = 0;
      }
    }
    else {
      iVar2 = ar5;
      pure_virtual_stub(ar4,ar5,ar6,ar7);
      if ((_DAT_8c436924 == 1) && (DAT_8c13bcc4 == 1)) {
        iVar1 = FUN_8c0637d0(*(undefined4 *)(ar5 + 0x7cc),iVar2,ar6,ar7);
        if (iVar1 == 0) {
          iVar1 = get_field_d4_0c7424(*(undefined4 *)(ar5 + 0x7cc),iVar2,ar6,ar7);
        }
        s_wtNumberOfItems_is_over_CGam_0c5df6(ar4,ar5,iVar1,0x8c431a68);
        ar7 = s_Seaman_User_Data_8c13d157;
        ar6 = 0x4208;
        iVar2 = FUN_8c0b6c3c(s_SM2000US_USR_8c13d13d,0x8c431a68,0x4208,s_Seaman_User_Data_8c13d157);
        if (iVar2 == 0) {
          _DAT_8c436924 = 0;
        }
      }
    }
  }
  else {
    if (*(int *)(ar5 + 0x88) == 0) {
      iVar2 = get_field_d0_0c51fc(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
      ar5_00 = (uint)*(byte *)(ar5 + 0xa0);
      piVar3 = *(int **)(ar4 + iVar2 * 4 + 8);
      (**(code **)(*piVar3 + 0xa4))(piVar3,ar5_00,ar6,ar7);
    }
    uVar4 = 0x8c35468c;
    FUN_8c0f8214(0x8c35468c,ar5_00,ar6,ar7);
    FUN_8c0b79f0(uVar4,ar5_00,ar6,ar7);
    FUN_8c0b7920(*(undefined4 *)(ar5 + 0x84),ar5_00,ar6,ar7);
  }
  uVar4 = 2;
  FUN_8c0c412c(&DAT_8c2b5628,2,ar6,ar7);
  FUN_8c0c42b0(&DAT_8c2b5628,uVar4,ar6,ar7);
LAB_8c0c7340:
  iVar2 = ar4;
  iVar1 = ar5;
  pure_virtual_stub(ar4,ar5,ar6,ar7);
  FUN_8c0d1c84(iVar2,iVar1,ar6,ar7);
  FUN_8c0fedf4(*(undefined4 *)(ar5 + 2000),0x8c3eb334,ar6,ar7);
  if (*(byte *)(ar5 + 0xa0) < *(byte *)(ar5 + 0xa1)) {
    *(undefined4 *)(ar4 + 0x2d160) = 1;
    *(undefined4 *)(ar4 + 0x2d15c) = 1;
    *(undefined1 *)(ar5 + 0xa1) = DAT_8c436548;
  }
  Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  return uVar5;
}

__asm__(".globl _s_SEAMAN_0c6e7e\n.set _s_SEAMAN_0c6e7e, _s_SEAMAN_0c6e7e_def\n");
//@unit 8c0c7424
#include "../decls.h"
undefined4 get_field_d4_0c7424_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xd4 + ar4);
}

__asm__(".globl _get_field_d4_0c7424\n.set _get_field_d4_0c7424, _get_field_d4_0c7424_def\n");
//@unit 8c0c7430
#include "../decls.h"
undefined4 noop_0c7430_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0c7430\n.set _noop_0c7430, _noop_0c7430_def\n");
//@unit 8c0c7434
#include "../decls.h"
undefined4 noop_0c7434_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0c7434\n.set _noop_0c7434, _noop_0c7434_def\n");
//@unit 8c0c7438
#include "../decls.h"
undefined4 FUN_8c0c7438_def(int ar4,int ar5,undefined1 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar4_00;
  int ar4_01;
  undefined *puVar3;
  undefined1 auStack_24 [24];
  
  uVar1 = FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7);
  if (*(int *)(0x2d160 + ar4) == 1) {
    puVar3 = (&DATA_8c13d004) + 0x139;
    ar4_00 = uVar1;
    iVar2 = FUN_8c01bba0(uVar1,puVar3,ar6,ar7);
    if (iVar2 != 0) {
      ar6 = auStack_24;
      puVar3 = (&DATA_8c13d004) + 0x16b;
      iVar2 = FUN_8c01bc2c(uVar1,puVar3,ar6,ar7);
      ar4_00 = uVar1;
      if (iVar2 != 4) {
        ar4_01 = ar5 + 0x96;
        iVar2 = FUN_8c0b7804(ar4_01,puVar3,ar6,ar7);
        if (iVar2 == 0) {
          FUN_8c0b79f0(ar4_01,puVar3,ar6,ar7);
          puVar3 = (&DATA_8c13d004) + 0x8e;
          uVar1 = 0;
          s_WARNING_NOPAD_0c2f08(0x8c2b5628,5,0,puVar3);
          pure_virtual_stub(ar4,ar5,uVar1,puVar3);
          return 1;
        }
        goto LAB_8c0c755a;
      }
    }
    FUN_8c0b79f0(ar4_00,puVar3,ar6,ar7);
    puVar3 = (&DATA_8c13d004) + 0x8e;
    uVar1 = 0;
    s_WARNING_NOPAD_0c2f08(0x8c2b5628,5,0,puVar3);
    pure_virtual_stub(ar4,ar5,uVar1,puVar3);
  }
  else {
LAB_8c0c755a:
    pure_virtual_stub(ar4,ar5,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c0c7438\n.set _FUN_8c0c7438, _FUN_8c0c7438_def\n");
//@unit 8c0c75f4
#include "../decls.h"
undefined4 FUN_8c0c75f4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  uint a5;
  
  iVar1 = (*(code *)(&get_field_d0_0c51fc))
                    (*(undefined4 *)(0x7cc + ar5),ar5,ar6,ar7);
  a5 = (uint)*(byte *)(0xa0 + ar5);
  piVar2 = *(int **)(ar4 + iVar1 * 4 + 8);
  (**(code **)(*piVar2 + 0x78))(piVar2,a5,ar6,ar7);
  if ((*(int *)(0x2d15c + ar4) != 0) && (*(int *)(0x2d15c + ar4) != 1)) {
    iVar1 = (*(code *)(&get_field_d0_0c51fc))
                      (*(undefined4 *)(0x7cc + ar5),a5,ar6,ar7);
    piVar2 = *(int **)(ar4 + iVar1 * 4 + 8);
    (**(code **)(0x9c + *piVar2))(piVar2,(uint)*(byte *)(0xa0 + ar5),ar6,ar7);
  }
  pure_virtual_stub(ar4,ar5,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0c75f4\n.set _FUN_8c0c75f4, _FUN_8c0c75f4_def\n");
//@unit 8c0c76d0
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
//@unit 8c0c8024
#include "../decls.h"
uint FUN_8c0c8024_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c01eedc(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  return (uint)(iVar1 != 0);
}

__asm__(".globl _FUN_8c0c8024\n.set _FUN_8c0c8024, _FUN_8c0c8024_def\n");
//@unit 8c0c8058
#include "../decls.h"
undefined4 FUN_8c0c8058_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)(&get_field_a510_01f538))
                    (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  if ((iVar1 != 1) &&
     (iVar1 = (*(code *)(&get_field_a510_01f538))
                        (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7), iVar1 != 2)) {
    iVar1 = FUN_8c01edcc(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
    if (iVar1 != 0) {
      return 1;
    }
    return 0;
  }
  return 0;
}

__asm__(".globl _FUN_8c0c8058\n.set _FUN_8c0c8058, _FUN_8c0c8058_def\n");
//@unit 8c0c80bc
#include "../decls.h"
undefined4 FUN_8c0c80bc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined2 *)(0x2d1ac + ar4) = 0;
  (**(code **)(**(int **)(ar4 + 8) + 0x1c))(*(int **)(ar4 + 8),0x8c3eb334,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 0x14) + 0x18))(*(int **)(ar4 + 0x14),0x8c3eb334,ar6,ar7);
  (**(code **)(0x98 + **(int **)(ar4 + 8)))
            (*(int **)(ar4 + 8),(uint)*(byte *)(0xa0 + ar5),ar6,ar7);
  (**(code **)(**(int **)(ar4 + 8) + 0x70))(*(int **)(ar4 + 8),0,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0c80bc\n.set _FUN_8c0c80bc, _FUN_8c0c80bc_def\n");
//@unit 8c0c812c
#include "../decls.h"
undefined4 noop_0c812c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0c812c\n.set _noop_0c812c, _noop_0c812c_def\n");
//@unit 8c0c8130
#include "../decls.h"
undefined4 noop_0c8130_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0c8130\n.set _noop_0c8130, _noop_0c8130_def\n");
//@unit 8c0c8134
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
//@unit 8c0c8460
#include "../decls.h"
undefined4 noop_0c8460_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0c8460\n.set _noop_0c8460, _noop_0c8460_def\n");
//@unit 8c0c8464
#include "../decls.h"
undefined4 FUN_8c0c8464_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(0xd4 + ar4);
  *(undefined4 *)(0xd4 + ar4) = 0;
  return uVar1;
}

__asm__(".globl _FUN_8c0c8464\n.set _FUN_8c0c8464, _FUN_8c0c8464_def\n");
//@unit 8c0c847c
#include "../decls.h"
undefined4 noop_0c847c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0c847c\n.set _noop_0c847c, _noop_0c847c_def\n");
//@unit 8c0c8480
#include "../decls.h"
int FUN_8c0c8480_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    Vec3_dtor(ar4 + 0x10,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0c8480\n.set _FUN_8c0c8480, _FUN_8c0c8480_def\n");
//@unit 8c0c84cc
#include "../decls.h"
int FUN_8c0c84cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Vec3_ctor_zero(ar4,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x10,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0c84cc\n.set _FUN_8c0c84cc, _FUN_8c0c84cc_def\n");
//@unit 8c0c84f4
#include "../decls.h"
undefined4 FUN_8c0c84f4_def(int ar4,undefined1 *ar5,undefined1 *ar6,undefined1 *ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 *ar5_00;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  ar5_00 = ar5;
  iVar1 = (*(code *)(&get_field_d0_0c51fc))
                    (*(undefined4 *)(ar5 + 0x7cc),ar5,ar6,ar7);
  FUN_8c102748(auStack_20,ar5_00,ar6,ar7);
  FUN_8c1026ec(auStack_38,ar5_00,ar6,ar7);
  iVar2 = (*(code *)(&get_field_d4_0c7424))
                    (*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
  if (iVar2 == 0) {
    iVar2 = FUN_8c0637d0(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
    if (iVar2 != 0) {
      FUN_8c0c86d4(*(undefined4 *)(ar4 + iVar1 * 4 + 8),auStack_20,ar6,ar7);
      FUN_8c0c86c0(*(undefined4 *)(ar4 + iVar1 * 4 + 8),auStack_38,ar6,ar7);
      FUN_8c0c8698(*(undefined4 *)(ar4 + iVar1 * 4 + 8),auStack_30,ar6,ar7);
      ar7 = auStack_30;
      ar6 = auStack_38;
      ar5_00 = auStack_20;
      FUN_8c0fff54(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
    }
    piVar3 = *(int **)(ar4 + iVar1 * 4 + 8);
    (**(code **)(0xb0 + *piVar3))(piVar3,ar5_00,ar6,ar7);
    if (iVar1 == 0) {
      (**(code **)(**(int **)(ar4 + 8) + 0x30))(*(int **)(ar4 + 8),ar5_00,ar6,ar7);
    }
    else {
      (**(code **)(**(int **)(ar4 + 0x14) + 0x28))(*(int **)(ar4 + 0x14),ar5_00,ar6,ar7);
    }
    FUN_8c0fff84(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
    iVar1 = (*(code *)(&get_field_d0_0c51fc))
                      (*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
    piVar3 = *(int **)(ar4 + iVar1 * 4 + 8);
    (**(code **)(*piVar3 + 0x48))(piVar3,ar5_00,ar6,ar7);
  }
  else {
    FUN_8c0cc524(ar4,iVar2,ar6,ar7);
  }
  free_if_nonnull_wrap_10270c(auStack_38,0xffffffff,ar6,ar7);
  free_if_nonnull_wrap_102790(auStack_20,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0c84f4\n.set _FUN_8c0c84f4, _FUN_8c0c84f4_def\n");
//@unit 8c0c868c
#include "../decls.h"
undefined4 noop_0c868c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0c868c\n.set _noop_0c868c, _noop_0c868c_def\n");
//@unit 8c0c8690
#include "../decls.h"
undefined4 ret_const_1_0c8690_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}

__asm__(".globl _ret_const_1_0c8690\n.set _ret_const_1_0c8690, _ret_const_1_0c8690_def\n");
//@unit 8c0c8698
#include "../decls.h"
undefined4 FUN_8c0c8698_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = ((undefined4 *)(ar4 + 0x94))[1];
  *ar5 = *(undefined4 *)(ar4 + 0x94);
  ar5[1] = uVar1;
  uVar1 = ((undefined4 *)(ar4 + 0x9c))[1];
  ar5[2] = *(undefined4 *)(ar4 + 0x9c);
  ar5[3] = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c0c8698\n.set _FUN_8c0c8698, _FUN_8c0c8698_def\n");
//@unit 8c0c86c0
#include "../decls.h"
undefined4 FUN_8c0c86c0_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = ((undefined4 *)(ar4 + 0x8c))[1];
  *ar5 = *(undefined4 *)(ar4 + 0x8c);
  ar5[1] = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c0c86c0\n.set _FUN_8c0c86c0, _FUN_8c0c86c0_def\n");
//@unit 8c0c86d4
#include "../decls.h"
undefined4 FUN_8c0c86d4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(ar4 + 0x80);
  uVar1 = puVar2[1];
  *ar5 = *puVar2;
  ar5[1] = uVar1;
  uVar1 = puVar2[2];
  ar5[2] = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c0c86d4\n.set _FUN_8c0c86d4, _FUN_8c0c86d4_def\n");
//@unit 8c0c86f4
#include "../decls.h"
undefined4 FUN_8c0c86f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (**(code **)(0x1b0 + **(int **)(ar4 + 8)))(*(int **)(ar4 + 8),1,ar6,ar7);
  (**(code **)(0x1b0 + **(int **)(ar4 + 0x14)))(*(int **)(ar4 + 0x14),1,ar6,ar7);
  (**(code **)(0x1b4 + **(int **)(ar4 + 8)))(*(int **)(ar4 + 8),0x8c3eb334,0,ar7);
  (**(code **)(0x1b4 + **(int **)(ar4 + 0x14)))(*(int **)(ar4 + 0x14),0x8c3eb334,0,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0c86f4\n.set _FUN_8c0c86f4, _FUN_8c0c86f4_def\n");
//@unit 8c0c8754
#include "../decls.h"
undefined4 noop_0c8754_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0c8754\n.set _noop_0c8754, _noop_0c8754_def\n");
//@unit 8c0c8758
#include "../decls.h"
undefined4 s_BUGBOX_3_0c8762_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 in_stack_ffffff84;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [36];
  
  iVar2 = ar5;
  FUN_8c0c84cc(auStack_38,ar5,ar6,ar7);
  uVar6 = 1;
  Vec3_ctor_zero(auStack_48,iVar2,ar6,ar7);
  puVar5 = auStack_38;
  iVar2 = ar5;
  (**(code **)(**(int **)(ar4 + 8) + 0xc))(*(int **)(ar4 + 8),ar5,puVar5,ar7);
  (**(code **)(**(int **)(ar4 + 8) + 0xb0))(*(int **)(ar4 + 8),iVar2,puVar5,ar7);
  (**(code **)(**(int **)(ar4 + 8) + 0x30))(*(int **)(ar4 + 8),iVar2,puVar5,ar7);
  sVar1 = *(short *)(ar4 + 0x2d1ac);
  if (sVar1 == 0) {
    _DAT_8c436a18 = 0;
    _DAT_8c436a14 = 0;
    _DAT_8c436a10 = 0;
    _DAT_8c436a0c = 0;
    ar7 = 4;
    puVar5 = &DAT_8c436a0c;
    FUN_8c016318(0x8c436978,&DAT_8c4369ec,&DAT_8c436a0c,4,in_stack_ffffff84);
    iVar2 = 0x60;
    FUN_8c015198(0x8c436978,0x60,puVar5,ar7,in_stack_ffffff84);
    FUN_8c0c51c4(*(undefined4 *)(ar5 + 0x7cc),iVar2,puVar5,ar7);
    *(undefined2 *)(ar4 + 0x2d1ac) = 1;
  }
  else if (sVar1 == 1) {
    if (_DAT_8c436a0c < 0xfc000000) {
      for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
        *(int *)(&DAT_8c436a0c + iVar3 * 4) = *(int *)(&DAT_8c436a0c + iVar3 * 4) + 0x3000000;
      }
    }
    else {
      iVar2 = pack_acquire_entry_handle(0x8c2b59d0,s_BUGBOX_3_8c13d1a9,puVar5,ar7);
      ar7 = 0;
      puVar5 = (undefined1 *)0x0;
      DAT_8c13cbf4 = iVar2;
      FUN_8c021d90(0x8c2b59d0,iVar2,0,0);
      *(undefined2 *)(ar4 + 0x2d1ac) = 2;
    }
  }
  else if (sVar1 == 2) {
    (**(code **)(**(int **)(ar4 + 8) + 0x78))(*(int **)(ar4 + 8),0,puVar5,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x9c))(*(int **)(ar4 + 8),0,puVar5,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x18))(*(int **)(ar4 + 0xc),0x8c3eb334,puVar5,ar7);
    iVar2 = s_Shell_0fef9c(0x8c3eb324,0xe,0x1b,ar7);
    (**(code **)(*(int *)(iVar2 + 8) + 0xe0))(iVar2,0x8c3eb334,0,ar7);
    uVar6 = 1;
    puVar5 = auStack_48;
    (**(code **)(*(int *)(iVar2 + 8) + 0x150))(iVar2,puVar5,1,ar7);
    FUN_8c036988(iVar2,puVar5,uVar6,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),iVar2,uVar6,ar7);
    iVar2 = s_Shell_0fef9c(0x8c3eb324,0xe,0x1b,ar7);
    (**(code **)(*(int *)(iVar2 + 8) + 0xe0))(iVar2,0x8c3eb334,0,ar7);
    uVar6 = 1;
    puVar5 = auStack_48;
    (**(code **)(*(int *)(iVar2 + 8) + 0x150))(iVar2,puVar5,1,ar7);
    FUN_8c036988(iVar2,puVar5,uVar6,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),iVar2,uVar6,ar7);
    iVar3 = s_Shell_0fef9c(0x8c3eb324,0xb,0x1b,ar7);
    uVar4 = 0;
    uVar6 = 0x8c3eb334;
    (**(code **)(*(int *)(iVar3 + 8) + 0xe0))(iVar3,0x8c3eb334,0,ar7);
    (**(code **)(*(int *)(iVar3 + 8) + 0x5c))(iVar3,uVar6,uVar4,ar7);
    iVar2 = ar5;
    (**(code **)(*(int *)(iVar3 + 8) + 0x10c))(iVar3,ar5,uVar4,ar7);
    FUN_8c036988(iVar3,iVar2,uVar4,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),iVar3,uVar4,ar7);
    iVar3 = s_Shell_0fef9c(0x8c3eb324,0xb,0x1b,ar7);
    uVar4 = 0;
    uVar6 = 0x8c3eb334;
    (**(code **)(*(int *)(iVar3 + 8) + 0xe0))(iVar3,0x8c3eb334,0,ar7);
    (**(code **)(*(int *)(iVar3 + 8) + 0x5c))(iVar3,uVar6,uVar4,ar7);
    iVar2 = ar5;
    (**(code **)(*(int *)(iVar3 + 8) + 0x10c))(iVar3,ar5,uVar4,ar7);
    FUN_8c036988(iVar3,iVar2,uVar4,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),iVar3,uVar4,ar7);
    iVar3 = s_Shell_0fef9c(0x8c3eb324,0xb,0x1b,ar7);
    uVar4 = 0;
    uVar6 = 0x8c3eb334;
    (**(code **)(*(int *)(iVar3 + 8) + 0xe0))(iVar3,0x8c3eb334,0,ar7);
    (**(code **)(*(int *)(iVar3 + 8) + 0x5c))(iVar3,uVar6,uVar4,ar7);
    iVar2 = ar5;
    (**(code **)(*(int *)(iVar3 + 8) + 0x10c))(iVar3,ar5,uVar4,ar7);
    FUN_8c036988(iVar3,iVar2,uVar4,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),iVar3,uVar4,ar7);
    iVar3 = s_Shell_0fef9c(0x8c3eb324,0xb,0x1b,ar7);
    puVar5 = (undefined1 *)0x0;
    uVar6 = 0x8c3eb334;
    (**(code **)(*(int *)(iVar3 + 8) + 0xe0))(iVar3,0x8c3eb334,0,ar7);
    (**(code **)(*(int *)(iVar3 + 8) + 0x5c))(iVar3,uVar6,puVar5,ar7);
    iVar2 = ar5;
    (**(code **)(*(int *)(iVar3 + 8) + 0x10c))(iVar3,ar5,puVar5,ar7);
    FUN_8c036988(iVar3,iVar2,puVar5,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),iVar3,puVar5,ar7);
    FUN_8c0c51b8(*(undefined4 *)(ar5 + 0x7cc),1,puVar5,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x98))(*(int **)(ar4 + 0xc),0,puVar5,ar7);
    iVar2 = 0;
    (**(code **)(**(int **)(ar4 + 0xc) + 0x70))(*(int **)(ar4 + 0xc),0,puVar5,ar7);
    *(undefined2 *)(ar4 + 0x2d1ac) = 3;
    uVar6 = 0;
  }
  if (_DAT_8c436a0c != 0) {
    FUN_8c016340(0x8c436978,iVar2,puVar5,ar7);
  }
  Vec3_dtor(auStack_48,0xffffffff,puVar5,ar7);
  FUN_8c0c8480(auStack_38,0xffffffff,puVar5,ar7);
  return uVar6;
}

__asm__(".globl _s_BUGBOX_3_0c8762\n.set _s_BUGBOX_3_0c8762, _s_BUGBOX_3_0c8762_def\n");
//@unit 8c0c8c28
#include "../decls.h"
undefined4 s_BUGBOX_4_0c8c30_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 *a6;
  undefined4 uVar5;
  char cVar6;
  undefined1 auStack_34 [36];
  
  cVar6 = '\0';
  if (DAT_8c437244 == '\0') {
    _DAT_8c437240 = 0;
    DAT_8c437244 = '\x01';
  }
  uVar5 = 1;
  iVar4 = ar5;
  FUN_8c0c84cc(auStack_34,ar5,ar6,ar7);
  sVar1 = *(short *)(ar4 + 0x2d1ac);
  if (sVar1 == 3) {
    _DAT_8c437240 = 0;
    _DAT_8c437248 = 0;
    (**(code **)(**(int **)(ar4 + 0xc) + 200))(*(int **)(ar4 + 0xc),iVar4,ar6,ar7);
    iVar4 = DAT_8c13cbf4;
    iVar2 = FUN_8c021f18(0x8c2b59d0,DAT_8c13cbf4,ar6,ar7);
    if (iVar2 == 1) {
      pack_release_entry_handle(0x8c2b59d0,DAT_8c13cbf4,ar6,ar7);
      DAT_8c13cbf4 = 0xffffffff;
      iVar4 = pack_acquire_entry_handle(0x8c2b59d0,s_BUGBOX_4_8c13d1b2,ar6,ar7);
      ar7 = 0;
      ar6 = 0;
      DAT_8c13cbf4 = iVar4;
      FUN_8c021d90(0x8c2b59d0,iVar4,0,0);
      *(undefined2 *)(ar4 + 0x2d1ac) = 4;
    }
  }
  else if (sVar1 == 4) {
    if (_DAT_8c437240 - _DAT_8c437248 < 0x28) {
      iVar4 = 2;
      iVar2 = libgcc_divide_helper_01031c(_DAT_8c437240 - _DAT_8c437248,2,ar6,ar7);
      if (iVar2 == 0) {
        if (cVar6 != '\0') {
          _DAT_8c437240 = 0x3dcccccd;
        }
        _DAT_8c43723c = 0x3ecccccd;
      }
      else if (iVar2 == 1) {
        if (cVar6 != '\0') {
          _DAT_8c437240 = 0x3f000000;
        }
        _DAT_8c43723c = 0x3dcccccd;
      }
    }
    else if ((_DAT_8c437240 - _DAT_8c437248 < 0x28) || (0x45 < _DAT_8c437240 - _DAT_8c437248)) {
      if (0x45 < _DAT_8c437240 - _DAT_8c437248) {
        if (cVar6 == '\0') {
          _DAT_8c43723c = 0x3f800000;
        }
        else {
          _DAT_8c437240 = 0x3f800000;
          _DAT_8c43723c = 0x7cc;
        }
        _DAT_8c437238 = 0x3f19999a;
        *(undefined2 *)(ar4 + 0x2d1ac) = 5;
        _DAT_8c437248 = _DAT_8c437240;
      }
    }
    else {
      if (cVar6 != '\0') {
        _DAT_8c437240 = 0x3f19999a;
      }
      _DAT_8c43723c = 0x3f000000;
    }
    (**(code **)(**(int **)(ar4 + 0xc) + 200))(*(int **)(ar4 + 0xc),iVar4,ar6,ar7);
  }
  else if (sVar1 == 5) {
    iVar4 = DAT_8c13cbf4;
    iVar2 = FUN_8c021f18(0x8c2b59d0,DAT_8c13cbf4,ar6,ar7);
    if (iVar2 == 1) {
      pack_release_entry_handle(0x8c2b59d0,DAT_8c13cbf4,ar6,ar7);
      DAT_8c13cbf4 = -1;
      FUN_8c0c51b8(*(undefined4 *)(ar5 + 0x7cc),0,ar6,ar7);
      ar6 = 0;
      FUN_8c0d1c20(*(undefined4 *)(ar4 + 0xc),*(undefined4 *)(ar4 + 8),0,ar7);
      (**(code **)(**(int **)(ar4 + 0xc) + 0x78))(*(int **)(ar4 + 0xc),0,ar6,ar7);
      iVar4 = 0;
      (**(code **)(**(int **)(ar4 + 8) + 0x70))(*(int **)(ar4 + 8),0,ar6,ar7);
      (**(code **)(**(int **)(ar4 + 8) + 0xb4))(*(int **)(ar4 + 8),iVar4,ar6,ar7);
      _DAT_8c437248 = _DAT_8c437240;
      *(undefined2 *)(ar4 + 0x2d1ac) = 6;
    }
  }
  else if ((sVar1 == 6) && (0x1e < _DAT_8c437240 - _DAT_8c437248)) {
    *(undefined4 *)(ar4 + 0x2d15c) = 3;
    uVar5 = 0;
  }
  iVar4 = get_field_d0_0c51fc(*(undefined4 *)(ar5 + 0x7cc),iVar4,ar6,ar7);
  a6 = auStack_34;
  piVar3 = *(int **)(ar4 + iVar4 * 4 + 8);
  iVar4 = ar5;
  (**(code **)(*piVar3 + 0xc))(piVar3,ar5,a6,ar7);
  iVar2 = get_field_d0_0c51fc(*(undefined4 *)(ar5 + 0x7cc),iVar4,a6,ar7);
  piVar3 = *(int **)(ar4 + iVar2 * 4 + 8);
  (**(code **)(*piVar3 + 0xb0))(piVar3,iVar4,a6,ar7);
  _DAT_8c437240 = _DAT_8c437240 + 1;
  FUN_8c0c8480(auStack_34,0xffffffff,a6,ar7);
  return uVar5;
}

__asm__(".globl _s_BUGBOX_4_0c8c30\n.set _s_BUGBOX_4_0c8c30, _s_BUGBOX_4_0c8c30_def\n");
//@unit 8c0c8f50
#include "../decls.h"
undefined4 noop_0c8f50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0c8f50\n.set _noop_0c8f50, _noop_0c8f50_def\n");
//@unit 8c0c8f54
#include "../decls.h"
undefined4 * FUN_8c0c8f54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x78) = in_fr4;
  *(undefined4 *)(ar4 + 0x7c) = in_fr5;
  return (undefined4 *)(ar4 + 0x78);
}

__asm__(".globl _FUN_8c0c8f54\n.set _FUN_8c0c8f54, _FUN_8c0c8f54_def\n");
//@unit 8c0c8f64
#include "../decls.h"
undefined4 FUN_8c0c8f64_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  
  ar5_00 = ar5;
  iVar1 = (*(code *)(&get_field_d0_0c51fc))
                    (*(undefined4 *)(0x7cc + ar5),ar5,ar6,ar7);
  if (iVar1 == 1) {
    (**(code **)(**(int **)(ar4 + 0xc) + 0x28))(*(int **)(ar4 + 0xc),ar5_00,ar6,ar7);
  }
  else {
    iVar1 = (*(code *)(&get_field_d0_0c51fc))
                      (*(undefined4 *)(0x7cc + ar5),ar5_00,ar6,ar7);
    if (iVar1 == 0) {
      (**(code **)(**(int **)(ar4 + 8) + 0x30))(*(int **)(ar4 + 8),ar5_00,ar6,ar7);
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c0c8f64\n.set _FUN_8c0c8f64, _FUN_8c0c8f64_def\n");
//@unit 8c0c8fc4
#include "../decls.h"
undefined4 FUN_8c0c8fc4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 ar4_00;
  undefined4 ar5_00;
  undefined1 *a6;
  undefined1 auStack_2c [36];
  
  iVar1 = ar5;
  FUN_8c0c84cc(auStack_2c,ar5,ar6,ar7);
  iVar1 = (*(code *)(&get_field_d0_0c51fc))
                    (*(undefined4 *)(0x7cc + ar5),iVar1,ar6,ar7);
  a6 = auStack_2c;
  piVar3 = *(int **)(ar4 + iVar1 * 4 + 8);
  iVar1 = ar5;
  (**(code **)(*piVar3 + 0xc))(piVar3,ar5,a6,ar7);
  iVar2 = (*(code *)(&get_field_d0_0c51fc))
                    (*(undefined4 *)(0x7cc + ar5),iVar1,a6,ar7);
  piVar3 = *(int **)(ar4 + iVar2 * 4 + 8);
  (**(code **)(0xb0 + *piVar3))(piVar3,iVar1,a6,ar7);
  (**(code **)(**(int **)(ar4 + 8) + 0x30))(*(int **)(ar4 + 8),iVar1,a6,ar7);
  ar5_00 = 0;
  FUN_8c0c51a0(*(undefined4 *)(0x7cc + ar5),0,a6,ar7);
  ar4_00 = *(undefined4 *)(0x7cc + ar5);
  FUN_8c0c90d0(ar4_00,ar5_00,a6,ar7);
  *(undefined2 *)(0x2d1ac + ar4) = 0;
  *(undefined1 *)(0xa0 + ar5) = 1;
  *(undefined4 *)(0x2d160 + ar4) = 0;
  *(undefined4 *)(0x2d15c + ar4) = 2;
  FUN_8c0c4e2c(ar4_00,ar5_00,a6,ar7);
  FUN_8c0c4e48(ar4_00,ar5_00,a6,ar7);
  FUN_8c0c8480(auStack_2c,0xffffffff,a6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0c8fc4\n.set _FUN_8c0c8fc4, _FUN_8c0c8fc4_def\n");
//@unit 8c0c90d0
#include "../decls.h"
undefined4 FUN_8c0c90d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 300) = in_fr4;
  *(undefined4 *)(ar4 + 0x130) = in_fr5;
  return 0x130;
}

__asm__(".globl _FUN_8c0c90d0\n.set _FUN_8c0c90d0, _FUN_8c0c90d0_def\n");
//@unit 8c0c90ec
#include "../decls.h"
undefined4 FUN_8c0c90ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0c86f4(ar4,ar5,ar6,ar7);
  if (*(int *)(&DATA_8c13cbf4) != -1) {
    (*(code *)(&pack_release_entry_handle))
              (0x8c2b59d0,*(undefined4 *)(&DATA_8c13cbf4),ar6,ar7);
    *(undefined4 *)(&DATA_8c13cbf4) = 0xffffffff;
  }
  if (2 < *(short *)(0x2d1ac + ar4)) {
    (**(code **)(0x1b0 + **(int **)(ar4 + 0xc)))(*(int **)(ar4 + 0xc),1,ar6,ar7);
    (**(code **)(0x1b4 + **(int **)(ar4 + 0xc)))(*(int **)(ar4 + 0xc),0x8c3eb334,1,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c0c90ec\n.set _FUN_8c0c90ec, _FUN_8c0c90ec_def\n");
//@unit 8c0c9174
#include "../decls.h"
undefined4 FUN_8c0c9174_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined2 *)(0x2d1ac + ar4) = 0;
  (**(code **)(**(int **)(ar4 + 8) + 0x20))(*(int **)(ar4 + 8),0x8c3eb334,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 0xc) + 0x18))(*(int **)(ar4 + 0xc),0x8c3eb334,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 0x14) + 0x18))(*(int **)(ar4 + 0x14),0x8c3eb334,ar6,ar7);
  (**(code **)(0x98 + **(int **)(ar4 + 8)))
            (*(int **)(ar4 + 8),(uint)*(byte *)(0xa0 + ar5),ar6,ar7);
  (**(code **)(**(int **)(ar4 + 8) + 0x70))(*(int **)(ar4 + 8),1,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0c9174\n.set _FUN_8c0c9174, _FUN_8c0c9174_def\n");
//@unit 8c0c91f0
#include "../decls.h"
undefined4 noop_0c91f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0c91f0\n.set _noop_0c91f0, _noop_0c91f0_def\n");
//@unit 8c0c91f4
#include "../decls.h"
undefined4 s_SEAMAN_SM_0c91fc_def(int ar4,code *ar5,int ar6,undefined4 ar7)

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
  if (DAT_8c437258 == '\0') {
    uVar1 = Vec3_ctor_zero(0x8c43725c,ar5,ar6,ar7);
    ar6 = -0x73bc8db4;
    ar5_00 = Vec3_dtor;
    global_list_push(uVar1,Vec3_dtor,0x8c43724c,ar7);
    DAT_8c437258 = '\x01';
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
    FUN_8c0cbc3c(ar4,ar5_00,ar6,ar7);
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
      (**(code **)(**(int **)(ar4 + 0xc) + 0xac))(*(int **)(ar4 + 0xc),iVar4,a6,a7);
    }
    puVar6 = (undefined4 *)0x8c437260;
    FUN_8c101210(*(undefined4 *)(ar5 + 0x7cc),0x8c43725c,0x8c437260,a7);
    uVar1 = 0x8c43725c;
    piVar5 = *(int **)(ar4 + iVar2 * 4 + 8);
    (**(code **)(*piVar5 + 100))(piVar5,0x8c43725c,puVar6,a7);
    iVar3 = FUN_8c0637d0(*(undefined4 *)(ar5 + 0x7cc),uVar1,puVar6,a7);
    if ((iVar3 != 0) &&
       (iVar3 = FUN_8c0fff28(*(undefined4 *)(ar5 + 0x7cc),uVar1,puVar6,a7), iVar3 == 4)) {
      FUN_8c0cdf50(ar4,ar5,puVar6,a7);
    }
    if (iVar2 == 0) {
      (**(code **)(**(int **)(ar4 + 8) + 0xc))(*(int **)(ar4 + 8),ar5,&uStack_54,a7);
      (**(code **)(**(int **)(ar4 + 0xc) + 0x10))(*(int **)(ar4 + 0xc),ar5,&uStack_54,a7);
      puVar6 = &uStack_54;
      (**(code **)(**(int **)(ar4 + 0x14) + 0x10))(*(int **)(ar4 + 0x14),ar5,puVar6,a7);
    }
    else if (iVar2 == 1) {
      (**(code **)(**(int **)(ar4 + 0xc) + 0xc))(*(int **)(ar4 + 0xc),ar5,&uStack_54,a7);
      (**(code **)(**(int **)(ar4 + 8) + 0x10))(*(int **)(ar4 + 8),ar5,&uStack_54,a7);
      puVar6 = &uStack_54;
      (**(code **)(**(int **)(ar4 + 0x14) + 0x10))(*(int **)(ar4 + 0x14),ar5,puVar6,a7);
    }
    else if (iVar2 == 3) {
      (**(code **)(**(int **)(ar4 + 0x14) + 0xc))(*(int **)(ar4 + 0x14),ar5,&uStack_54,a7);
      (**(code **)(**(int **)(ar4 + 8) + 0x10))(*(int **)(ar4 + 8),ar5,&uStack_54,a7);
      puVar6 = &uStack_54;
      (**(code **)(**(int **)(ar4 + 0xc) + 0x10))(*(int **)(ar4 + 0xc),ar5,puVar6,a7);
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

__asm__(".globl _s_SEAMAN_SM_0c91fc\n.set _s_SEAMAN_SM_0c91fc, _s_SEAMAN_SM_0c91fc_def\n");
//@unit 8c0c9588
#include "../decls.h"
undefined4 FUN_8c0c9588_def(int ar4,undefined1 *ar5,undefined1 *ar6,undefined1 *ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 *ar5_00;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  ar5_00 = ar5;
  iVar1 = (*(code *)(&get_field_d0_0c51fc))
                    (*(undefined4 *)(ar5 + 0x7cc),ar5,ar6,ar7);
  FUN_8c102748(auStack_20,ar5_00,ar6,ar7);
  FUN_8c1026ec(auStack_38,ar5_00,ar6,ar7);
  iVar2 = (*(code *)(&get_field_d4_0c7424))
                    (*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
  if (iVar2 == 0) {
    iVar2 = FUN_8c0637d0(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
    if (iVar2 != 0) {
      FUN_8c0c86d4(*(undefined4 *)(ar4 + iVar1 * 4 + 8),auStack_20,ar6,ar7);
      FUN_8c0c86c0(*(undefined4 *)(ar4 + iVar1 * 4 + 8),auStack_38,ar6,ar7);
      FUN_8c0c8698(*(undefined4 *)(ar4 + iVar1 * 4 + 8),auStack_30,ar6,ar7);
      ar7 = auStack_30;
      ar6 = auStack_38;
      ar5_00 = auStack_20;
      FUN_8c0fff54(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
    }
    piVar3 = *(int **)(ar4 + iVar1 * 4 + 8);
    (**(code **)(0xb0 + *piVar3))(piVar3,ar5_00,ar6,ar7);
    if (iVar1 == 0) {
      (**(code **)(**(int **)(ar4 + 8) + 0x34))(*(int **)(ar4 + 8),ar5_00,ar6,ar7);
    }
    else if (iVar1 == 1) {
      (**(code **)(**(int **)(ar4 + 0xc) + 0x28))(*(int **)(ar4 + 0xc),ar5_00,ar6,ar7);
    }
    else if (iVar1 == 3) {
      (**(code **)(**(int **)(ar4 + 0x14) + 0x28))(*(int **)(ar4 + 0x14),ar5_00,ar6,ar7);
    }
    FUN_8c0fff84(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
    piVar3 = *(int **)(ar4 + iVar1 * 4 + 8);
    (**(code **)(*piVar3 + 0x48))(piVar3,ar5_00,ar6,ar7);
  }
  else {
    FUN_8c0cc524(ar4,iVar2,ar6,ar7);
  }
  free_if_nonnull_wrap_10270c(auStack_38,0xffffffff,ar6,ar7);
  free_if_nonnull_wrap_102790(auStack_20,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0c9588\n.set _FUN_8c0c9588, _FUN_8c0c9588_def\n");
//@unit 8c0c972c
#include "../decls.h"
undefined4 noop_0c972c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0c972c\n.set _noop_0c972c, _noop_0c972c_def\n");
//@unit 8c0c9738
#include "../decls.h"
undefined4 FUN_8c0c9738_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (**(code **)(0x1b0 + **(int **)(ar4 + 8)))(*(int **)(ar4 + 8),1,ar6,ar7);
  (**(code **)(0x1b0 + **(int **)(ar4 + 0xc)))(*(int **)(ar4 + 0xc),1,ar6,ar7);
  (**(code **)(0x1b0 + **(int **)(ar4 + 0x14)))(*(int **)(ar4 + 0x14),1,ar6,ar7);
  (**(code **)(0x1b4 + **(int **)(ar4 + 8)))(*(int **)(ar4 + 8),0x8c3eb334,1,ar7);
  (**(code **)(0x1b4 + **(int **)(ar4 + 0xc)))(*(int **)(ar4 + 0xc),0x8c3eb334,1,ar7);
  (**(code **)(0x1b4 + **(int **)(ar4 + 0x14)))(*(int **)(ar4 + 0x14),0x8c3eb334,1,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0c9738\n.set _FUN_8c0c9738, _FUN_8c0c9738_def\n");
//@unit 8c0c97bc
#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0c97c4_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int ar5_00;
  undefined4 auStack_18 [2];
  
  ar5_00 = ar5;
  iVar1 = (*(code *)(&get_field_d0_0c51fc))
                    (*(undefined4 *)(0x7cc + ar5),ar5,ar6,ar7);
  auStack_18[0] = 0;
  FUN_8c0c51c4(*(undefined4 *)(0x7cc + ar5),ar5_00,ar6,ar7);
  piVar3 = *(int **)(ar4 + iVar1 * 4 + 8);
  iVar2 = (**(code **)(0x138 + *piVar3))(piVar3,ar5_00,ar6,ar7);
  if (iVar2 == 2) {
    FUN_8c1006bc(*(undefined4 *)(0x7cc + ar5),ar5_00,ar6,ar7);
  }
  if (iVar1 != 0) {
    piVar3 = *(int **)(ar4 + iVar1 * 4 + 8);
    (**(code **)(*piVar3 + 0x78))(piVar3,(uint)*(byte *)(0xa0 + ar5),ar6,ar7);
    FUN_8c0c51b8(*(undefined4 *)(0x7cc + ar5),0,ar6,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x70))
              (*(int **)(ar4 + 8),(uint)*(byte *)(0xa0 + ar5),ar6,ar7);
    FUN_8c021720(0x8c2b59d0,1,ar6,ar7);
    ar6 = (uint)*(byte *)(0xa0 + ar5);
    (*(code *)(&FUN_8c0d1c20))
              (*(undefined4 *)(ar4 + iVar1 * 4 + 8),*(undefined4 *)(ar4 + 8),ar6,ar7);
  }
  (**(code **)(0x84 + **(int **)(ar4 + 8)))(*(int **)(ar4 + 8),0x8c3eb334,ar6,ar7);
  *(undefined4 *)(0x2d1b0 + ar4) = 2;
  *(undefined4 *)(0x2d1b4 + ar4) = 0;
  (*(code *)(&FUN_8c0209b0))
            (0x8c3eb334,(&DATA_8c13d004) + 0x1b7,
             (&DATA_8c13d004) + 0x1be,auStack_18);
  return 0;
}

__asm__(".globl _s_GRAPHICS_ENV_0c97c4\n.set _s_GRAPHICS_ENV_0c97c4, _s_GRAPHICS_ENV_0c97c4_def\n");
//@unit 8c0c990c
#include "../decls.h"
undefined4 noop_0c990c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0c990c\n.set _noop_0c990c, _noop_0c990c_def\n");
//@unit 8c0c9910
#include "../decls.h"
undefined4 ret_const_ff_0c9910_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0xff;
}

__asm__(".globl _ret_const_ff_0c9910\n.set _ret_const_ff_0c9910, _ret_const_ff_0c9910_def\n");
//@unit 8c0c991c
#include "../decls.h"
undefined4 s_44_OUTWATERCAT_0c9920_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int *ar5_00;
  float *a6;
  float *a7;
  float in_fr1;
  float fVar3;
  double dVar4;
  float fVar7;
  double dVar5;
  undefined1 *puVar8;
  double dVar6;
  undefined4 in_fr3;
  double in_xd0;
  bool bVar9;
  char cVar10;
  char cVar11;
  float fStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  if (DAT_8c43726e == '\0') {
    _DAT_8c43726c = 0;
    DAT_8c43726e = '\x01';
  }
  if (DAT_8c437274 == '\0') {
    _DAT_8c437270 = (double)CONCAT35((*(uint*)((uchar*)&DAT_8c437270_4+1)),0x144610000);
  }
  if (DAT_8c43727c == '\0') {
    _DAT_8c437278 = 0;
    DAT_8c43727c = '\x01';
  }
  if (DAT_8c437284 == '\0') {
    _DAT_8c437280 = 0x3c75c28f;
    _DAT_8c437284 = CONCAT31(DAT_8c437284_1,1);
  }
  if (DAT_8c43728c == '\0') {
    _DAT_8c437288 = 0x3b03126f;
    _DAT_8c43728c = CONCAT31(DAT_8c43728c_1,1);
  }
  if (DAT_8c437294 == '\0') {
    _DAT_8c437290 = (double)CONCAT35((*(uint*)((uchar*)&DAT_8c437290_4+1)),0x1c0000000);
  }
  if (DAT_8c43729c == '\0') {
    _DAT_8c437298 = 0;
    DAT_8c43729c = '\x01';
  }
  if (DAT_8c4372a4 == '\0') {
    _DAT_8c4372a0 = 0xffffffff;
    DAT_8c4372a4 = '\x01';
  }
  ar5_00 = ar5;
  Vec3_ctor_zero(auStack_1c,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_2c,ar5_00,ar6,ar7);
  FUN_8c0c84cc(afStack_54 + 2,ar5_00,ar6,ar7);
  afStack_54[0] = in_fr1;
  if (cVar11 == '\0') {
    afStack_54[0] = 0.0;
  }
  afStack_54[1] = 0.0;
  if (cVar11 == '\0') {
    fStack_5c = 0.0;
  }
  else {
    afStack_54[0] = 0.0;
    fStack_5c = in_fr1;
  }
  uStack_58 = 0;
  iVar2 = (int)*(short *)(ar4 + 0x2d1ac);
  if ((iVar2 < 6) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      if (cVar11 == '\0') {
        _DAT_8c437270 = (double)CONCAT44(_DAT_8c437274,0x44610000);
        _DAT_8c437018 = 0.0;
        _DAT_8c437040 = 5.08118523482294e-315;
        _DAT_8c437290 = (double)CONCAT44(_DAT_8c437294,0xc0000000);
        _DAT_8c43700c = _DAT_8c437018;
      }
      else {
        _DAT_8c437270 = -1.3574323400435666e-249;
        _DAT_8c43700c = 900.0;
        (*(uint *)0x8c43701c) = 0;
        _DAT_8c437040 = -1.3581185561256157e-249;
        in_fr1 = -2.0;
        _DAT_8c437290 = 8.75853762720916e-312;
      }
      _DAT_8c437010 = _DAT_8c43700c;
      _DAT_8c437014 = _DAT_8c43700c;
      _DAT_8c437018 = _DAT_8c43700c;
      _DAT_8c437278 = (**(code **)(**(int **)(ar4 + 8) + 0x19c))(*(int **)(ar4 + 8),ar5_00,ar6,ar7);
      (**(code **)(**(int **)(ar4 + 8) + 0xb4))(*(int **)(ar4 + 8),ar5_00,ar6,ar7);
      _DAT_8c437298 = (**(code **)(**(int **)(ar4 + 8) + 0x104))(*(int **)(ar4 + 8),0,ar6,ar7);
      *(undefined2 *)(ar4 + 0x2d1ac) = 1;
      break;
    case 1:
      if (cVar11 == '\0') {
        in_fr1 = *(float *)(_DAT_8c437298 + 4);
        fVar3 = 665.32495;
      }
      else {
        in_fr1 = 665.32495;
        fVar3 = 2.58887e-40;
      }
      if (cVar10 != '\0' || in_fr1 <= fVar3) {
        *(undefined2 *)(ar4 + 0x2d1ac) = 3;
      }
      break;
    case 3:
      iVar2 = pack_acquire_entry_handle(0x8c2b59d0,s_44_OUTWATERCAT_8c13d1cf,ar6,ar7);
      *(int *)(ar4 + 0x2d1b8) = iVar2;
      if (iVar2 == -1) {
        report_error_message(s_44_OUTWATERCAT_8c13d1cf,s_Faild_to_get_port_8c13d1de,1,2);
      }
      *(undefined2 *)(ar4 + 0x2d1ac) = 4;
      break;
    case 4:
      if (cVar11 == '\0') {
        dVar4 = (double)CONCAT44(0x3fc00000,_DAT_8c437270);
      }
      else {
        dVar4 = 4.33415568043142e-312;
        in_xd0 = _DAT_8c437270;
      }
      if (cVar10 == '\0') {
        fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 - dVar4,0);
      }
      dVar4 = in_xd0;
      if (cVar11 == '\0') {
        _DAT_8c437270 = (double)CONCAT44(_DAT_8c437274,fVar3);
        dVar4 = _DAT_8c437270;
      }
      _DAT_8c437270 = dVar4;
      (**(code **)(**(int **)(ar4 + 8) + 0xcc))(*(int **)(ar4 + 8),ar5_00,ar6,ar7);
      if (cVar11 == '\0') {
        dVar4 = (double)CONCAT44(0xbe19999a,_DAT_8c437290);
      }
      else {
        dVar4 = -1.357462683469945e-249;
        in_xd0 = _DAT_8c437290;
      }
      if (cVar10 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      dVar6 = in_xd0;
      dVar4 = _DAT_8c437038;
      dVar5 = in_xd0;
      if (cVar11 == '\0') {
        _DAT_8c437290 = (double)CONCAT44(_DAT_8c437294,fVar3);
        dVar6 = (double)CONCAT44(fVar3,_DAT_8c437038);
        dVar4 = in_xd0;
        dVar5 = _DAT_8c437290;
      }
      _DAT_8c437290 = dVar5;
      if (cVar10 == '\0') {
        fVar3 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar6 + dVar6,0);
      }
      dVar6 = dVar4;
      if (cVar11 == '\0') {
        _DAT_8c437038 = (double)CONCAT44(DAT_8c437038_4,fVar3);
        dVar6 = _DAT_8c437038;
      }
      _DAT_8c437038 = dVar6;
      if (_DAT_8c437044 == 0) {
        if (cVar11 == '\0') {
          fVar7 = 630.0;
          fVar3 = _DAT_8c437270;
        }
        else {
          fVar3 = 630.0;
          fVar7 = 9.114239e+09;
          dVar4 = _DAT_8c437270;
        }
        if (cVar10 != '\0' || fVar3 <= fVar7) {
          _DAT_8c437040 = (double)CONCAT44(1,_DAT_8c437040);
        }
      }
      else if (_DAT_8c437044 == 1) {
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(_DAT_8c437280,_DAT_8c437040);
        }
        else {
          dVar6 = (double)CONCAT44(_DAT_8c437284,_DAT_8c437280);
          dVar4 = _DAT_8c437040;
        }
        if (cVar10 == '\0') {
          fVar3 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar6 + dVar6,0);
        }
                    
        if (cVar11 == '\0') {
          _DAT_8c437040 = fVar3;
          _DAT_8c437040 = SUB84(_DAT_8c437040,0);
          dVar5 = (double)CONCAT44(0x44348000,_DAT_8c437040);
          dVar6 = (double)CONCAT44(_DAT_8c437270,in_fr3);
          _DAT_8c437040 = _DAT_8c437040;
        }
        else {
          dVar5 = 5629500678504448.0;
          dVar6 = _DAT_8c437270;
          _DAT_8c437040 = dVar4;
        }
        if (cVar10 == '\0') {
          fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar11 == '\0') {
          dVar5 = (double)CONCAT44(0x43340000,fVar3);
        }
        else {
          dVar5 = 3.446719454007875e+77;
        }
        if (cVar10 == '\0') {
          bVar9 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20) <
                  (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          bVar9 = dVar5 + dVar5 < dVar6;
        }
        if (!bVar9) {
          _DAT_8c437040 = (double)CONCAT44(2,_DAT_8c437040);
        }
      }
      else if (_DAT_8c437044 == 2) {
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(_DAT_8c437288,_DAT_8c437040);
        }
        else {
          dVar6 = (double)CONCAT44(_DAT_8c43728c,_DAT_8c437288);
          dVar4 = _DAT_8c437040;
        }
        if (cVar10 == '\0') {
          fVar3 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar6 - dVar6,0);
        }
                    
        if (cVar11 == '\0') {
          _DAT_8c437040 = fVar3;
          _DAT_8c437040 = SUB84(_DAT_8c437040,0);
          puVar8 = (undefined1 *)0x3dcccccd;
          dVar6 = _DAT_8c437040;
          fVar3 = _DAT_8c437040;
        }
        else {
          fVar3 = 0.1;
          puVar8 = &DAT_8c437270;
          dVar6 = dVar4;
        }
        _DAT_8c437040 = dVar6;
        if (cVar10 != '\0' || fVar3 <= (float)(uint)puVar8) {
          _DAT_8c437040 = 6.87825041940734e-314;
        }
      }
      if (cVar11 == '\0') {
        puVar8 = (undefined1 *)0x44340000;
        fVar3 = _DAT_8c437270;
      }
      else {
        fVar3 = 720.0;
        puVar8 = &DAT_8c43700c;
        dVar4 = _DAT_8c437270;
      }
      if (cVar10 == '\0' && fVar3 < (float)(uint)puVar8) {
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(0x3a902de0,_DAT_8c43700c);
        }
        else {
          dVar4 = (double)CONCAT44(_DAT_8c437010,_DAT_8c43700c);
          dVar6 = -0.007812501704413444;
        }
        if (cVar10 == '\0') {
          _DAT_8c43700c = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          _DAT_8c43700c = SUB84(dVar6 - dVar6,0);
        }
        if (cVar11 == '\0') {
          fVar7 = -1.0;
          fVar3 = _DAT_8c43700c;
        }
        else {
          _DAT_8c43700c = SUB84(dVar4,0);
          _DAT_8c437010 = (float)((ulonglong)dVar4 >> 0x20);
          fVar3 = -1.0;
          fVar7 = 160.0;
        }
        if (cVar10 == '\0' && fVar3 < fVar7) {
          if (cVar11 == '\0') {
            _DAT_8c43700c = -1.0;
          }
          else {
            _DAT_8c43700c = -1.0;
            _DAT_8c437010 = 160.0;
          }
        }
      }
      if (cVar11 == '\0') {
        puVar8 = (undefined1 *)0x43200000;
        in_fr1 = _DAT_8c437270;
      }
      else {
        in_fr1 = 160.0;
        puVar8 = &DAT_8c437278;
      }
      if (cVar10 != '\0' || in_fr1 <= (float)(uint)puVar8) {
        FUN_8c022104(0x8c2b59d0,*(undefined4 *)(_DAT_8c437278 + 0x5e4),ar6,ar7);
        FUN_8c0220bc(0x8c2b59d0,*(undefined4 *)(_DAT_8c437278 + 0x5e4),ar6,ar7);
        if (cVar11 == '\0') {
          _DAT_8c437270 = (double)CONCAT44(_DAT_8c437274,0x43200000);
        }
        else {
          in_fr1 = 160.0;
          _DAT_8c437270 = -1.358093006003901e-249;
        }
        _DAT_8c43726c = (ushort)*ar5;
        *(undefined2 *)(ar4 + 0x2d1ac) = 5;
      }
      break;
    case 5:
      if (0x2d < *ar5 - (uint)_DAT_8c43726c) {
        *(undefined4 *)(ar4 + 0x2d15c) = 3;
      }
    }
  }
  a7 = &fStack_5c;
  (**(code **)(**(int **)(ar4 + 8) + 0x13c))(*(int **)(ar4 + 8),afStack_54,&uStack_58,a7);
  if (cVar11 != '\0') {
    uStack_30 = uStack_58;
    in_fr1 = fStack_5c;
  }
  fStack_34 = fStack_5c;
  uStack_38 = uStack_58;
  afStack_54[6] = afStack_54[0];
  if (cVar11 == '\0') {
    afStack_54[2] = 0.0;
    afStack_54[4] = in_fr1;
  }
  else {
    afStack_54[4] = 500.0;
    afStack_54[2] = in_fr1;
  }
  afStack_54[3] = 500.0;
  if (cVar11 == '\0') {
    afStack_54[4] = 0.0;
  }
  else {
    afStack_54[5] = 0.0;
  }
  a6 = afStack_54 + 2;
  (**(code **)(**(int **)(ar4 + 8) + 0xc))(*(int **)(ar4 + 8),ar5,a6,a7);
  (**(code **)(**(int **)(ar4 + 8) + 0xd4))(*(int **)(ar4 + 8),&DAT_8c43700c,a6,a7);
  if (*(int *)(ar4 + 0x2d1b0) != 4) {
    uVar1 = s_GRAPHICS_ENV_0ca2d4(ar4,ar4 + 0x2d1b0,a6,a7);
    *(undefined4 *)(ar4 + 0x2d1b0) = uVar1;
  }
  FUN_8c0c8480(afStack_54 + 2,0xffffffff,a6,a7);
  Vec3_dtor(auStack_2c,0xffffffff,a6,a7);
  Vec3_dtor(auStack_1c,0xffffffff,a6,a7);
  return 0;
}

__asm__(".globl _s_44_OUTWATERCAT_0c9920\n.set _s_44_OUTWATERCAT_0c9920, _s_44_OUTWATERCAT_0c9920_def\n");
//@unit 8c0c9ed0
#include "../decls.h"
undefined4 noop_0c9ed0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0c9ed0\n.set _noop_0c9ed0, _noop_0c9ed0_def\n");
//@unit 8c0c9ed4
#include "../decls.h"
undefined4 noop_0c9ed4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0c9ed4\n.set _noop_0c9ed4, _noop_0c9ed4_def\n");
//@unit 8c0c9ed8
#include "../decls.h"
undefined4 ret_const_0_0c9ed8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_0c9ed8\n.set _ret_const_0_0c9ed8, _ret_const_0_0c9ed8_def\n");
//@unit 8c0c9ee0
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
//@unit 8c0ca0dc
#include "../decls.h"
undefined4 noop_0ca0dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0ca0dc\n.set _noop_0ca0dc, _noop_0ca0dc_def\n");
//@unit 8c0ca0e0
#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0ca0e6_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  undefined *ar5_00;
  undefined4 ar5_01;
  undefined *ar6_00;
  
  iVar1 = ar5;
  if (*(int *)(0x2d1b8 + ar4) != -1) {
    iVar1 = *(int *)(0x2d1b8 + ar4);
    pack_release_entry_handle(0x8c2b59d0,iVar1,ar6,ar7);
  }
  FUN_8c0c5330(ar4 + 0x2d1b0,iVar1,ar6,ar7);
  s_Failed_s_015312(0x8c437028,iVar1,ar6,ar7);
  (*(code *)(&FUN_8c020a70))
            (0x8c3eb334,(&DATA_8c13d004) + 0x1b7,
             (&DATA_8c13d004) + 0x1be,ar4);
  ar6_00 = (&DATA_8c13d004) + 0x1be;
  ar5_00 = (&DATA_8c13d004) + 0x1b7;
  iVar1 = ar4;
  FUN_8c020b68(0x8c3eb334,ar5_00,ar6_00,ar4);
  (**(code **)(0xb0 + **(int **)(ar4 + 8)))(*(int **)(ar4 + 8),ar5_00,ar6_00,iVar1);
  (**(code **)(**(int **)(ar4 + 8) + 0x40))(*(int **)(ar4 + 8),ar5_00,ar6_00,iVar1);
  (**(code **)(0x90 + **(int **)(ar4 + 8)))(*(int **)(ar4 + 8),0x8c3eb334,ar6_00,iVar1);
  ar5_01 = 0;
  FUN_8c0c51a0(*(undefined4 *)(0x7cc + ar5),0,ar6_00,iVar1);
  ar4_00 = *(undefined4 *)(0x7cc + ar5);
  FUN_8c0c90d0(ar4_00,ar5_01,ar6_00,iVar1);
  *(undefined2 *)(0x2d1ac + ar4) = 0;
  *(undefined1 *)(0xa0 + ar5) = 2;
  *(undefined4 *)(0x2d160 + ar4) = 0;
  *(undefined4 *)(0x2d15c + ar4) = 2;
  FUN_8c0c4e2c(ar4_00,ar5_01,ar6_00,iVar1);
  FUN_8c0c4e48(ar4_00,ar5_01,ar6_00,iVar1);
  return 0;
}

__asm__(".globl _s_GRAPHICS_ENV_0ca0e6\n.set _s_GRAPHICS_ENV_0ca0e6, _s_GRAPHICS_ENV_0ca0e6_def\n");
//@unit 8c0ca228
#include "../decls.h"
undefined4 noop_0ca228_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0ca228\n.set _noop_0ca228, _noop_0ca228_def\n");
//@unit 8c0ca22c
#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0ca230_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined *ar6_00;
  int ar7_00;
  
  ar5_00 = ar5;
  if (*(int *)(0x2d1b8 + ar4) != -1) {
    ar5_00 = *(undefined4 *)(0x2d1b8 + ar4);
    pack_release_entry_handle(0x8c2b59d0,ar5_00,ar6,ar7);
  }
  s_Failed_s_015312(0x8c437028,ar5_00,ar6,ar7);
  (*(code *)(&FUN_8c020a70))
            (0x8c3eb334,(&DATA_8c13d004) + 0x1b7,
             (&DATA_8c13d004) + 0x1be,ar4);
  ar6_00 = (&DATA_8c13d004) + 0x1be;
  ar7_00 = ar4;
  FUN_8c020b68(0x8c3eb334,(&DATA_8c13d004) + 0x1b7,ar6_00,ar4)
  ;
  FUN_8c0c9738(ar4,ar5,ar6_00,ar7_00);
  return 0;
}

__asm__(".globl _s_GRAPHICS_ENV_0ca230\n.set _s_GRAPHICS_ENV_0ca230, _s_GRAPHICS_ENV_0ca230_def\n");
//@unit 8c0ca2cc
#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0ca2d4_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar7_00;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uStack_1c;
  undefined4 auStack_18 [2];
  
  uVar4 = 2;
  auStack_18[0] = 0;
  uStack_1c = 0;
  iVar1 = *(int *)(ar5 + 4);
  if (iVar1 == 0) {
    puVar3 = auStack_18;
    pcVar2 = s_GRAPHICS_ENV_8c13d1c2;
    iVar1 = FUN_8c0209b0(0x8c3eb334,s_uzu_nj_8c13d1bb,s_GRAPHICS_ENV_8c13d1c2,puVar3);
    if (iVar1 == 1) {
      FUN_8c015ad4(0x8c437030,auStack_18[0],pcVar2,puVar3,ar4);
      *(undefined4 *)(ar5 + 4) = 1;
    }
    else if (iVar1 == 0) {
      report_error_message(s_uzu_nj_8c13d1bb,s_Failed_NJCM_CGame__LoadForEvent1_8c13d1f0,0,2);
    }
  }
  else if (iVar1 == 1) {
    puVar3 = &uStack_1c;
    pcVar2 = s_GRAPHICS_ENV_8c13d1c2;
    iVar1 = FUN_8c020aa8(0x8c3eb334,s_uzu_nj_8c13d1bb,s_GRAPHICS_ENV_8c13d1c2,puVar3);
    if (iVar1 == 1) {
      Class_129920_m0_015248(0x8c437028,uStack_1c,pcVar2,puVar3,ar4);
      *(undefined4 *)(ar5 + 4) = 2;
    }
    else if (iVar1 == 0) {
      report_error_message(s_uzu_nj_8c13d1bb,s_Failed_NJTL_CGame__LoadForEvent1_8c13d219,0,2);
    }
  }
  else if (iVar1 == 2) {
    ar7_00 = get_field_4_0253e4(0x8c437028,ar5,ar6,ar7);
    iVar1 = FUN_8c020e80(0x8c3eb334,s_SCREW_8c13d242,s_GRAPHICS_ENV_8c13d1c2,ar7_00);
    if (iVar1 == 1) {
      *(undefined4 *)(ar5 + 4) = 3;
      uVar4 = 4;
    }
    else if (iVar1 == 0) {
      report_error_message(s_SCREW_8c13d242,s_Failed_NJTL_CGame__LoadForEvent1_8c13d219,0,2);
    }
  }
  return uVar4;
}

__asm__(".globl _s_GRAPHICS_ENV_0ca2d4\n.set _s_GRAPHICS_ENV_0ca2d4, _s_GRAPHICS_ENV_0ca2d4_def\n");
//@unit 8c0ca458
#include "../decls.h"
undefined4 FUN_8c0ca458_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *a4;
  uint a5;
  
  *(undefined2 *)(0x2d1ac + ar4) = 0;
  (**(code **)(**(int **)(ar4 + 8) + 0x24))(*(int **)(ar4 + 8),0x8c3eb334,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 0xc) + 0x18))(*(int **)(ar4 + 0xc),0x8c3eb334,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 0x14) + 0x18))(*(int **)(ar4 + 0x14),0x8c3eb334,ar6,ar7);
  a5 = (uint)*(byte *)(0xa0 + ar5);
  a4 = *(int **)(ar4 + 8);
  (**(code **)(0x98 + *a4))(a4,a5,ar6,ar7);
  FUN_8c235ee4(a4,a5,ar6,ar7);
  FUN_8c235ee4(a4,a5,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 8) + 0x70))(*(int **)(ar4 + 8),2,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0ca458\n.set _FUN_8c0ca458, _FUN_8c0ca458_def\n");
//@unit 8c0ca4e4
#include "../decls.h"
undefined4 noop_0ca4e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0ca4e4\n.set _noop_0ca4e4, _noop_0ca4e4_def\n");
//@unit 8c0ca4e8
#include "../decls.h"
undefined4 s_SEAMAN_SM_0ca4f0_def(int ar4,code *ar5,int ar6,undefined4 ar7)

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
  if (DAT_8c4372b4 == '\0') {
    uVar1 = Vec3_ctor_zero(0x8c4372b8,ar5,ar6,ar7);
    ar6 = -0x73bc8d58;
    ar5_00 = Vec3_dtor;
    global_list_push(uVar1,Vec3_dtor,0x8c4372a8,ar7);
    DAT_8c4372b4 = '\x01';
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
    FUN_8c0cbca4(ar4,ar5_00,ar6,ar7);
  }
  iVar2 = get_field_d0_0c51fc(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
  FUN_8c0ffdb0(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
  FUN_8c101004(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
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
      (**(code **)(**(int **)(ar4 + 0xc) + 0xac))(*(int **)(ar4 + 0xc),iVar4,a6,a7);
    }
    puVar6 = (undefined4 *)0x8c4372bc;
    FUN_8c101210(*(undefined4 *)(ar5 + 0x7cc),0x8c4372b8,0x8c4372bc,a7);
    uVar1 = 0x8c4372b8;
    piVar5 = *(int **)(ar4 + iVar2 * 4 + 8);
    (**(code **)(*piVar5 + 100))(piVar5,0x8c4372b8,puVar6,a7);
    iVar3 = FUN_8c0637d0(*(undefined4 *)(ar5 + 0x7cc),uVar1,puVar6,a7);
    if ((iVar3 != 0) &&
       (iVar3 = FUN_8c0fff28(*(undefined4 *)(ar5 + 0x7cc),uVar1,puVar6,a7), iVar3 == 4)) {
      FUN_8c0cdf50(ar4,ar5,puVar6,a7);
    }
    if (iVar2 == 0) {
      (**(code **)(**(int **)(ar4 + 8) + 0xc))(*(int **)(ar4 + 8),ar5,&uStack_54,a7);
      (**(code **)(**(int **)(ar4 + 0xc) + 0x10))(*(int **)(ar4 + 0xc),ar5,&uStack_54,a7);
      puVar6 = &uStack_54;
      (**(code **)(**(int **)(ar4 + 0x14) + 0x10))(*(int **)(ar4 + 0x14),ar5,puVar6,a7);
    }
    else if (iVar2 == 1) {
      (**(code **)(**(int **)(ar4 + 0xc) + 0xc))(*(int **)(ar4 + 0xc),ar5,&uStack_54,a7);
      (**(code **)(**(int **)(ar4 + 8) + 0x10))(*(int **)(ar4 + 8),ar5,&uStack_54,a7);
      puVar6 = &uStack_54;
      (**(code **)(**(int **)(ar4 + 0x14) + 0x10))(*(int **)(ar4 + 0x14),ar5,puVar6,a7);
    }
    else if (iVar2 == 3) {
      (**(code **)(**(int **)(ar4 + 0x14) + 0xc))(*(int **)(ar4 + 0x14),ar5,&uStack_54,a7);
      (**(code **)(**(int **)(ar4 + 8) + 0x10))(*(int **)(ar4 + 8),ar5,&uStack_54,a7);
      puVar6 = &uStack_54;
      (**(code **)(**(int **)(ar4 + 0xc) + 0x10))(*(int **)(ar4 + 0xc),ar5,puVar6,a7);
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

__asm__(".globl _s_SEAMAN_SM_0ca4f0\n.set _s_SEAMAN_SM_0ca4f0, _s_SEAMAN_SM_0ca4f0_def\n");
//@unit 8c0ca88c
#include "../decls.h"
undefined4 FUN_8c0ca88c_def(int ar4,undefined1 *ar5,undefined1 *ar6,undefined1 *ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 *ar5_00;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  ar5_00 = ar5;
  iVar1 = (*(code *)(&get_field_d0_0c51fc))
                    (*(undefined4 *)(ar5 + 0x7cc),ar5,ar6,ar7);
  FUN_8c102748(auStack_20,ar5_00,ar6,ar7);
  FUN_8c1026ec(auStack_38,ar5_00,ar6,ar7);
  iVar2 = (*(code *)(&get_field_d4_0c7424))
                    (*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
  if (iVar2 == 0) {
    iVar2 = FUN_8c0637d0(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
    if (iVar2 != 0) {
      FUN_8c0c86d4(*(undefined4 *)(ar4 + iVar1 * 4 + 8),auStack_20,ar6,ar7);
      FUN_8c0c86c0(*(undefined4 *)(ar4 + iVar1 * 4 + 8),auStack_38,ar6,ar7);
      FUN_8c0c8698(*(undefined4 *)(ar4 + iVar1 * 4 + 8),auStack_30,ar6,ar7);
      ar7 = auStack_30;
      ar6 = auStack_38;
      ar5_00 = auStack_20;
      FUN_8c0fff54(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
    }
    piVar3 = *(int **)(ar4 + iVar1 * 4 + 8);
    (**(code **)(0xb0 + *piVar3))(piVar3,ar5_00,ar6,ar7);
    if (iVar1 == 0) {
      (**(code **)(**(int **)(ar4 + 8) + 0x38))(*(int **)(ar4 + 8),ar5_00,ar6,ar7);
    }
    else if (iVar1 == 1) {
      (**(code **)(**(int **)(ar4 + 0xc) + 0x28))(*(int **)(ar4 + 0xc),ar5_00,ar6,ar7);
    }
    else if (iVar1 == 3) {
      (**(code **)(**(int **)(ar4 + 0x14) + 0x28))(*(int **)(ar4 + 0x14),ar5_00,ar6,ar7);
    }
    FUN_8c0fff84(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
    piVar3 = *(int **)(ar4 + iVar1 * 4 + 8);
    (**(code **)(*piVar3 + 0x48))(piVar3,ar5_00,ar6,ar7);
  }
  else {
    FUN_8c0cc524(ar4,iVar2,ar6,ar7);
  }
  free_if_nonnull_wrap_10270c(auStack_38,0xffffffff,ar6,ar7);
  free_if_nonnull_wrap_102790(auStack_20,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0ca88c\n.set _FUN_8c0ca88c, _FUN_8c0ca88c_def\n");
//@unit 8c0caa30
#include "../decls.h"
undefined4 noop_0caa30_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0caa30\n.set _noop_0caa30, _noop_0caa30_def\n");
//@unit 8c0caa3c
#include "../decls.h"
undefined4 FUN_8c0caa3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (**(code **)(0x1b0 + **(int **)(ar4 + 8)))(*(int **)(ar4 + 8),1,ar6,ar7);
  (**(code **)(0x1b0 + **(int **)(ar4 + 0xc)))(*(int **)(ar4 + 0xc),1,ar6,ar7);
  (**(code **)(0x1b0 + **(int **)(ar4 + 0x14)))(*(int **)(ar4 + 0x14),1,ar6,ar7);
  (**(code **)(0x1b4 + **(int **)(ar4 + 8)))(*(int **)(ar4 + 8),0x8c3eb334,2,ar7);
  (**(code **)(0x1b4 + **(int **)(ar4 + 0xc)))(*(int **)(ar4 + 0xc),0x8c3eb334,2,ar7);
  (**(code **)(0x1b4 + **(int **)(ar4 + 0x14)))(*(int **)(ar4 + 0x14),0x8c3eb334,2,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0caa3c\n.set _FUN_8c0caa3c, _FUN_8c0caa3c_def\n");
//@unit 8c0caac0
#include "../decls.h"
undefined4 FUN_8c0caac0_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int ar5_00;
  uint a5;
  
  ar5_00 = ar5;
  iVar1 = (*(code *)(&get_field_d0_0c51fc))
                    (*(undefined4 *)(0x7cc + ar5),ar5,ar6,ar7);
  FUN_8c0c51c4(*(undefined4 *)(0x7cc + ar5),ar5_00,ar6,ar7);
  piVar3 = *(int **)(ar4 + iVar1 * 4 + 8);
  iVar2 = (**(code **)(0x138 + *piVar3))(piVar3,ar5_00,ar6,ar7);
  if (iVar2 == 2) {
    FUN_8c1006bc(*(undefined4 *)(0x7cc + ar5),ar5_00,ar6,ar7);
  }
  if (iVar1 != 0) {
    piVar3 = *(int **)(ar4 + iVar1 * 4 + 8);
    (**(code **)(*piVar3 + 0x78))(piVar3,(uint)*(byte *)(0xa0 + ar5),ar6,ar7);
    FUN_8c0c51b8(*(undefined4 *)(0x7cc + ar5),0,ar6,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x70))
              (*(int **)(ar4 + 8),(uint)*(byte *)(0xa0 + ar5),ar6,ar7);
    FUN_8c021720(0x8c2b59d0,1,ar6,ar7);
    ar6 = (uint)*(byte *)(0xa0 + ar5);
    (*(code *)(&FUN_8c0d1c20))
              (*(undefined4 *)(ar4 + iVar1 * 4 + 8),*(undefined4 *)(ar4 + 8),ar6,ar7);
  }
  (**(code **)(0x88 + **(int **)(ar4 + 8)))(*(int **)(ar4 + 8),0x8c3eb334,ar6,ar7);
  *(undefined4 *)(0x2d1b0 + ar4) = 2;
  (**(code **)(0x88 + **(int **)(ar4 + 0x10)))(*(int **)(ar4 + 0x10),0x8c3eb334,ar6,ar7);
  a5 = (uint)*(byte *)(0xa0 + ar5);
  piVar3 = *(int **)(ar4 + 0x10);
  (**(code **)(0x98 + *piVar3))(piVar3,a5,ar6,ar7);
  FUN_8c235ee4(piVar3,a5,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0caac0\n.set _FUN_8c0caac0, _FUN_8c0caac0_def\n");
//@unit 8c0cac04
#include "../decls.h"
undefined4 noop_0cac04_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0cac04\n.set _noop_0cac04, _noop_0cac04_def\n");
//@unit 8c0cac08
#include "../decls.h"
undefined4 FUN_8c0cac08_def(int ar4,undefined4 ar5,undefined4 ar6,float *ar7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 in_fr1;
  double dVar4;
  float fVar5;
  code *pcVar6;
  char cVar7;
  char cVar8;
  undefined4 in_stack_ffffff7c;
  undefined1 auStack_5c [32];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  float afStack_24 [2];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  float afStack_14 [3];
  
  cVar8 = '\0';
  cVar7 = '\0';
  puVar3 = &DAT_8c4372ca;
  if (DAT_8c4372ca == '\0') {
    _DAT_8c4372c8 = 0;
    DAT_8c4372ca = '\x01';
  }
  if (DAT_8c4372ce == '\0') {
    _DAT_8c4372cc = 0;
    DAT_8c4372ce = '\x01';
  }
  puVar2 = &DAT_8c4372d2;
  if (DAT_8c4372d2 == '\0') {
    _DAT_8c4372d0 = 0;
    puVar2 = (undefined1 *)0x1;
    DAT_8c4372d2 = '\x01';
  }
  if (DAT_8c4372d8 == '\0') {
    _DAT_8c4372d4 = 0;
    DAT_8c4372d8 = '\x01';
  }
  if (DAT_8c4372e0 == '\0') {
    _DAT_8c4372dc = 0;
    DAT_8c4372e0 = '\x01';
  }
  Vec3_ctor_zero(auStack_1c,puVar2,&DAT_8c4372ca,ar7);
  Vec3_ctor_zero(auStack_2c,puVar2,puVar3,ar7);
  Vec3_ctor_zero(auStack_3c,puVar2,puVar3,ar7);
  FUN_8c0c84cc(auStack_5c,puVar2,puVar3,ar7);
  if (DAT_8c4372e8 == '\0') {
    _DAT_8c4372e4 =
         (**(code **)(**(int **)(ar4 + 0x10) + 0x144))(*(int **)(ar4 + 0x10),puVar2,puVar3,ar7);
    DAT_8c4372e8 = '\x01';
  }
  if (DAT_8c4372f0 == '\0') {
    _DAT_8c4372ec = 0xaa;
    DAT_8c4372f0 = '\x01';
  }
  iVar1 = (int)*(short *)(ar4 + 0x2d1ac);
  if ((iVar1 < 8) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      FUN_8c019384(0x8c436f4c,puVar2,puVar3,ar7);
      _DAT_8c4372c8 = 0;
      _DAT_8c4372cc = 0;
      _DAT_8c4372d0 = 0;
      _DAT_8c436a18 = 0xffffff;
      _DAT_8c436a14 = 0xffffff;
      _DAT_8c436a10 = 0xffffff;
      _DAT_8c436a0c = 0xffffff;
      ar7 = (float *)0x4;
      puVar3 = &DAT_8c436a0c;
      puVar2 = &DAT_8c4369ec;
      FUN_8c016318(0x8c436978,&DAT_8c4369ec,&DAT_8c436a0c,4,in_stack_ffffff7c);
      _DAT_8c4372dc =
           (**(code **)(**(int **)(ar4 + 8) + 0x10c))(*(int **)(ar4 + 8),puVar2,puVar3,ar7);
      *(undefined2 *)(ar4 + 0x2d1ac) = 1;
      break;
    case 1:
      if (cVar8 == '\0') {
        in_fr1 = *(undefined4 *)(_DAT_8c4372dc + 0x14);
      }
      if (cVar7 == '\0') {
        dVar4 = (double)CONCAT44((float)_DAT_8c4372ec,in_fr1);
      }
      else {
        dVar4 = (double)_DAT_8c4372ec;
      }
      if (cVar7 == '\0' && (float)((ulonglong)dVar4 >> 0x20) < SUB84(dVar4,0)) {
        _DAT_8c4372d4 =
             (**(code **)(**(int **)(ar4 + 8) + 0xe4))(*(int **)(ar4 + 8),puVar2,puVar3,ar7);
        *(undefined2 *)(ar4 + 0x2d1ac) = 2;
      }
      break;
    case 2:
      (**(code **)(**(int **)(ar4 + 8) + 0xe0))(*(int **)(ar4 + 8),puVar2,puVar3,ar7);
      (**(code **)(**(int **)(ar4 + 0x10) + 0xc4))
                (*(int **)(ar4 + 0x10),_DAT_8c4372e4 >> 2,puVar3,ar7);
      _DAT_8c4372cc = _DAT_8c4372c8;
      *(undefined2 *)(ar4 + 0x2d1ac) = 3;
      break;
    case 3:
      (**(code **)(**(int **)(ar4 + 8) + 0xec))(*(int **)(ar4 + 8),puVar2,puVar3,ar7);
      if ((4 < (int)_DAT_8c4372c8 - (int)_DAT_8c4372cc) &&
         ((int)_DAT_8c4372c8 - (int)_DAT_8c4372cc < 0x88)) {
        puVar2 = (undefined1 *)0x2;
        iVar1 = libgcc_divide_helper_01031c((int)_DAT_8c4372c8 - (int)_DAT_8c4372cc,2,puVar3,ar7);
        if (iVar1 == 0) {
          FUN_8c019b38(0x8c436f4c,puVar2,puVar3,ar7);
        }
        else {
          FUN_8c019b48(0x8c436f4c,puVar2,puVar3,ar7);
        }
      }
      iVar1 = (**(code **)(**(int **)(ar4 + 8) + 0xf0))(*(int **)(ar4 + 8),puVar2,puVar3,ar7);
      if (iVar1 == 1) {
        _DAT_8c4372c8 = 0;
        FUN_8c0cb1e0(0x8c436f4c,auStack_1c,auStack_18,afStack_14);
        (**(code **)(*(int *)(_DAT_8c4372d4 + 8) + 0x134))
                  (_DAT_8c4372d4,auStack_3c,auStack_38,auStack_34);
        ar7 = afStack_24;
        puVar3 = auStack_28;
        puVar2 = auStack_2c;
        FUN_8c0507a4(_DAT_8c4372d4,puVar2,puVar3,ar7);
        FUN_8c019560(0x8c436f4c,puVar2,puVar3,ar7);
        *(undefined2 *)(ar4 + 0x2d1ac) = 4;
      }
      break;
    case 4:
      ar7 = afStack_24;
      puVar3 = auStack_28;
      FUN_8c0507a4(_DAT_8c4372d4,auStack_2c,puVar3,ar7);
      if (cVar8 == '\0') {
        fVar5 = 10.0;
      }
      else {
        afStack_24[0] = 10.0;
        fVar5 = 2.58887e-40;
      }
      if (cVar7 == '\0' && afStack_24[0] < fVar5) {
        *(undefined2 *)(ar4 + 0x2d1ac) = 5;
      }
      break;
    case 5:
      FUN_8c019b58(0x8c436f4c,puVar2,puVar3,ar7);
      ar7 = afStack_14;
      puVar3 = auStack_18;
      puVar2 = auStack_1c;
      FUN_8c0cb1e0(0x8c436f4c,puVar2,puVar3,ar7);
      if (cVar8 == '\0') {
        pcVar6 = (code *)0x426b3340;
      }
      else {
        afStack_14[0] = 58.80005;
        pcVar6 = FUN_8c019560;
      }
      if (cVar7 == '\0' && afStack_14[0] < (float)(uint)pcVar6) {
        FUN_8c019560(0x8c436f4c,puVar2,puVar3,ar7);
        *(undefined2 *)(ar4 + 0x2d1ac) = 6;
      }
      break;
    case 6:
      iVar1 = (**(code **)(*(int *)(_DAT_8c4372d4 + 8) + 0xfc))(_DAT_8c4372d4,puVar2,puVar3,ar7);
      if (iVar1 == 1) {
        _DAT_8c4372cc = _DAT_8c4372c8;
        *(undefined2 *)(ar4 + 0x2d1ac) = 7;
      }
      break;
    case 7:
      if (0x59 < (int)_DAT_8c4372c8 - (int)_DAT_8c4372cc) {
        *(undefined2 *)(ar4 + 0x2d1ac) = 0;
        _DAT_8c4372d4 = 0;
        *(undefined4 *)(ar4 + 0x2d15c) = 3;
      }
    }
  }
  (**(code **)(**(int **)(ar4 + 0x10) + 0xc4))(*(int **)(ar4 + 0x10),_DAT_8c4372e4 >> 2,puVar3,ar7);
  (**(code **)(**(int **)(ar4 + 0x10) + 0xc))(*(int **)(ar4 + 0x10),ar5,auStack_5c,ar7);
  puVar3 = auStack_5c;
  (**(code **)(**(int **)(ar4 + 8) + 0x14))(*(int **)(ar4 + 8),ar5,puVar3,ar7);
  Class_129a24_m1_019b68(0x8c436f4c,ar5,puVar3,ar7);
  _DAT_8c4372c8 = _DAT_8c4372c8 + 1;
  FUN_8c0c8480(auStack_5c,0xffffffff,puVar3,ar7);
  Vec3_dtor(auStack_3c,0xffffffff,puVar3,ar7);
  Vec3_dtor(auStack_2c,0xffffffff,puVar3,ar7);
  Vec3_dtor(auStack_1c,0xffffffff,puVar3,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0cac08\n.set _FUN_8c0cac08, _FUN_8c0cac08_def\n");
//@unit 8c0cb1dc
#include "../decls.h"
undefined4 noop_0cb1dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0cb1dc\n.set _noop_0cb1dc, _noop_0cb1dc_def\n");
//@unit 8c0cb1e0
#include "../decls.h"
undefined4 * FUN_8c0cb1e0_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0x44);
  *ar6 = *(undefined4 *)(ar4 + 0x48);
  *ar7 = *(undefined4 *)(ar4 + 0x4c);
  return (undefined4 *)(ar4 + 0x48);
}

__asm__(".globl _FUN_8c0cb1e0\n.set _FUN_8c0cb1e0, _FUN_8c0cb1e0_def\n");
//@unit 8c0cb1fc
#include "../decls.h"
undefined4 noop_0cb1fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0cb1fc\n.set _noop_0cb1fc, _noop_0cb1fc_def\n");
//@unit 8c0cb200
#include "../decls.h"
undefined4 noop_0cb200_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0cb200\n.set _noop_0cb200, _noop_0cb200_def\n");
//@unit 8c0cb204
#include "../decls.h"
undefined4 noop_0cb204_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0cb204\n.set _noop_0cb204, _noop_0cb204_def\n");
//@unit 8c0cb208
#include "../decls.h"
undefined4 ret_const_0_0cb208_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_0cb208\n.set _ret_const_0_0cb208, _ret_const_0_0cb208_def\n");
//@unit 8c0cb210
#include "../decls.h"
undefined4 ret_const_0_0cb210_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_0cb210\n.set _ret_const_0_0cb210, _ret_const_0_0cb210_def\n");
//@unit 8c0cb218
#include "../decls.h"
undefined4 ret_const_0_0cb218_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_0cb218\n.set _ret_const_0_0cb218, _ret_const_0_0cb218_def\n");
//@unit 8c0cb220
#include "../decls.h"
undefined4 FUN_8c0cb220_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *a4;
  undefined4 ar4_00;
  undefined4 in_PR;
  
  a4 = *(int **)(ar4 + 8);
  (**(code **)(*a4 + 0x44))(a4,ar5,ar6,ar7);
  FUN_8c219070(a4,ar5,ar6,ar7);
  ar4_00 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c019058(ar4_00,ar5,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 0x10) + 0x28))(*(int **)(ar4 + 0x10),ar5,ar6,ar7);
  FUN_8c256210(1,ar5,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0cb220\n.set _FUN_8c0cb220, _FUN_8c0cb220_def\n");
//@unit 8c0cb298
#include "../decls.h"
undefined4 noop_0cb298_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0cb298\n.set _noop_0cb298, _noop_0cb298_def\n");
//@unit 8c0cb29c
#include "../decls.h"
undefined4 FUN_8c0cb29c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 ar6_00;
  undefined1 *ar6_01;
  undefined1 *ar7_00;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [12];
  
  iVar1 = ar5;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_38,iVar1,ar6,ar7);
  while (iVar1 = (**(code **)(**(int **)(ar4 + 8) + 0x11c))(*(int **)(ar4 + 8),5,ar6,ar7),
        iVar1 != 0) {
    ar6 = iVar1 + -1;
    uVar4 = (**(code **)(**(int **)(ar4 + 8) + 0x100))(*(int **)(ar4 + 8),5,ar6,ar7);
    uVar3 = uVar4;
    (**(code **)(**(int **)(ar4 + 8) + 0x5c))(*(int **)(ar4 + 8),uVar4,ar6,ar7);
    FUN_8c02f670(uVar4,uVar3,ar6,ar7,auStack_48);
    Vec3_assign(auStack_38,auStack_48,ar6,ar7);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_48,0xffffffff,ar6,ar7);
    FUN_8c036988(uVar4,uVar3,ar6,ar7);
    (**(code **)(**(int **)(ar4 + 0x10) + 0x4c))(*(int **)(ar4 + 0x10),uVar4,ar6,ar7);
  }
  (**(code **)(**(int **)(ar4 + 8) + 0x78))(*(int **)(ar4 + 8),2,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 8) + 0x9c))(*(int **)(ar4 + 8),2,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 8) + 0x1b0))(*(int **)(ar4 + 8),1,ar6,ar7);
  ar6_00 = 2;
  (**(code **)(**(int **)(ar4 + 8) + 0x1b4))(*(int **)(ar4 + 8),0x8c3eb334,2,ar7);
  uVar3 = 2;
  FUN_8c0c51b8(*(undefined4 *)(ar5 + 0x7cc),2,ar6_00,ar7);
  FUN_8c0c51c4(*(undefined4 *)(ar5 + 0x7cc),uVar3,ar6_00,ar7);
  uVar3 = 0x8c3eb334;
  (**(code **)(**(int **)(ar4 + 0x10) + 0x94))(*(int **)(ar4 + 0x10),0x8c3eb334,ar6_00,ar7);
  uVar3 = (**(code **)(**(int **)(ar4 + 0x10) + 0x14c))(*(int **)(ar4 + 0x10),uVar3,ar6_00,ar7);
  uVar4 = 0x8c3eb334;
  s_GRAPHICS_ENV_0d819c(uVar3,0x8c3eb334,ar6_00,ar7);
  noop_0d8458(uVar3,uVar4,ar6_00,ar7,iVar1);
  (**(code **)(**(int **)(ar4 + 0x10) + 0x70))(*(int **)(ar4 + 0x10),3,ar6_00,ar7);
  ar7_00 = auStack_20;
  ar6_01 = auStack_24;
  puVar2 = auStack_28;
  FUN_8c0cb1e0(0x8c436f4c,puVar2,ar6_01,ar7_00);
  FUN_8c019560(0x8c436f4c,puVar2,ar6_01,ar7_00);
  Class_129a24_m1_019b68(0x8c436f4c,puVar2,ar6_01,ar7_00);
  (**(code **)(**(int **)(ar4 + 0x10) + 0x28))(*(int **)(ar4 + 0x10),puVar2,ar6_01,ar7_00);
  (**(code **)(**(int **)(ar4 + 0x10) + 0xb4))(*(int **)(ar4 + 0x10),puVar2,ar6_01,ar7_00);
  uVar3 = 0x8c3eb334;
  puVar2 = &DAT_8c436a28;
  s_GRAPHICS_MESSAGE_0cef1c(&DAT_8c436a28,0x8c3eb334,ar6_01,ar7_00);
  *(undefined1 *)(ar5 + 0xa0) = 3;
  *(undefined4 *)(ar4 + 0x2d160) = 0;
  *(undefined4 *)(ar4 + 0x2d15c) = 2;
  FUN_8c0c4e2c(puVar2,uVar3,ar6_01,ar7_00);
  FUN_8c0c4e48(puVar2,uVar3,ar6_01,ar7_00);
  Vec3_dtor(auStack_38,0xffffffff,ar6_01,ar7_00);
  Vec3_dtor(auStack_28,0xffffffff,ar6_01,ar7_00);
  return 0;
}

__asm__(".globl _FUN_8c0cb29c\n.set _FUN_8c0cb29c, _FUN_8c0cb29c_def\n");
//@unit 8c0cb54c
#include "../decls.h"
undefined4 ret_const_0_0cb54c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_0cb54c\n.set _ret_const_0_0cb54c, _ret_const_0_0cb54c_def\n");
//@unit 8c0cb554
#include "../decls.h"
undefined4 noop_0cb554_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0cb554\n.set _noop_0cb554, _noop_0cb554_def\n");
//@unit 8c0cb558
#include "../decls.h"
undefined4 ret_const_0_0cb558_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_0cb558\n.set _ret_const_0_0cb558, _ret_const_0_0cb558_def\n");
//@unit 8c0cb560
#include "../decls.h"
undefined4 FUN_8c0cb560_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0caa3c(ar4,ar5,ar6,ar7);
  (**(code **)(0x9c + **(int **)(ar4 + 0x10)))(*(int **)(ar4 + 0x10),3,ar6,ar7);
  (**(code **)(0x1b0 + **(int **)(ar4 + 0x10)))(*(int **)(ar4 + 0x10),1,ar6,ar7);
  (**(code **)(0x1b4 + **(int **)(ar4 + 0x10)))(*(int **)(ar4 + 0x10),0x8c3eb334,3,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0cb560\n.set _FUN_8c0cb560, _FUN_8c0cb560_def\n");
//@unit 8c0cb5c8
#include "../decls.h"
undefined4 FUN_8c0cb5c8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  
  ar5_00 = 2;
  FUN_8c0c51b8(*(undefined4 *)(0x7cc + ar5),2,ar6,ar7);
  FUN_8c0c51c4(*(undefined4 *)(0x7cc + ar5),ar5_00,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 0x10) + 0x18))(*(int **)(ar4 + 0x10),0x8c3eb334,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 0xc) + 0x18))(*(int **)(ar4 + 0xc),0x8c3eb334,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 0x14) + 0x18))(*(int **)(ar4 + 0x14),0x8c3eb334,ar6,ar7);
  (**(code **)(0x98 + **(int **)(ar4 + 0x10)))
            (*(int **)(ar4 + 0x10),(uint)*(byte *)(0xa0 + ar5),ar6,ar7);
  (**(code **)(**(int **)(ar4 + 0x10) + 0x70))(*(int **)(ar4 + 0x10),3,ar6,ar7);
  s_GRAPHICS_MESSAGE_0cef1c(0x8c436a28,0x8c3eb334,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0cb5c8\n.set _FUN_8c0cb5c8, _FUN_8c0cb5c8_def\n");
//@unit 8c0cb668
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
//@unit 8c0cb9c8
#include "../decls.h"
undefined4 FUN_8c0cb9c8_def(int ar4,undefined1 *ar5,undefined1 *ar6,undefined1 *ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 *ar5_00;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  ar5_00 = ar5;
  iVar1 = (*(code *)(&get_field_d0_0c51fc))
                    (*(undefined4 *)(ar5 + 0x7cc),ar5,ar6,ar7);
  FUN_8c102748(auStack_20,ar5_00,ar6,ar7);
  FUN_8c1026ec(auStack_38,ar5_00,ar6,ar7);
  iVar2 = FUN_8c0637d0(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
  if (iVar2 != 0) {
    FUN_8c0c86d4(*(undefined4 *)(ar4 + iVar1 * 4 + 8),auStack_20,ar6,ar7);
    FUN_8c0c86c0(*(undefined4 *)(ar4 + iVar1 * 4 + 8),auStack_38,ar6,ar7);
    FUN_8c0c8698(*(undefined4 *)(ar4 + iVar1 * 4 + 8),auStack_30,ar6,ar7);
    ar7 = auStack_30;
    ar6 = auStack_38;
    ar5_00 = auStack_20;
    FUN_8c0fff54(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
  }
  piVar3 = *(int **)(ar4 + iVar1 * 4 + 8);
  (**(code **)(0xb0 + *piVar3))(piVar3,ar5_00,ar6,ar7);
  piVar3 = *(int **)(ar4 + iVar1 * 4 + 8);
  (**(code **)(*piVar3 + 0x28))(piVar3,ar5_00,ar6,ar7);
  FUN_8c0fff84(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
  piVar3 = *(int **)(ar4 + iVar1 * 4 + 8);
  (**(code **)(*piVar3 + 0x48))(piVar3,ar5_00,ar6,ar7);
  FUN_8c0cf63c(0x8c436a28,ar5_00,ar6,ar7);
  free_if_nonnull_wrap_10270c(auStack_38,0xffffffff,ar6,ar7);
  free_if_nonnull_wrap_102790(auStack_20,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0cb9c8\n.set _FUN_8c0cb9c8, _FUN_8c0cb9c8_def\n");
//@unit 8c0cbb2c
#include "../decls.h"
undefined4 FUN_8c0cbb2c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  (**(code **)(0x1b0 + **(int **)(ar4 + 0x10)))(*(int **)(ar4 + 0x10),1,ar6,ar7);
  (**(code **)(0x1b0 + **(int **)(ar4 + 0xc)))(*(int **)(ar4 + 0xc),1,ar6,ar7);
  (**(code **)(0x1b0 + **(int **)(ar4 + 0x14)))(*(int **)(ar4 + 0x14),1,ar6,ar7);
  (**(code **)(0x1b4 + **(int **)(ar4 + 0x10)))(*(int **)(ar4 + 0x10),0x8c3eb334,3,ar7);
  (**(code **)(0x1b4 + **(int **)(ar4 + 0xc)))(*(int **)(ar4 + 0xc),0x8c3eb334,3,ar7);
  ar6_00 = 3;
  ar5_00 = 0x8c3eb334;
  (**(code **)(0x1b4 + **(int **)(ar4 + 0x14)))(*(int **)(ar4 + 0x14),0x8c3eb334,3,ar7);
  FUN_8c0cf144(0x8c436a28,ar5_00,ar6_00,ar7);
  FUN_8c0cf1bc(0x8c436a28,0x8c3eb334,ar6_00,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0cbb2c\n.set _FUN_8c0cbb2c, _FUN_8c0cbb2c_def\n");
//@unit 8c0cbbcc
#include "../decls.h"
undefined4 FUN_8c0cbbcc_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *a4;
  int ar6_00;
  
  iVar2 = ar5;
  ar6_00 = ar6;
  iVar1 = FUN_8c100154(ar5,ar5,ar6,ar7);
  if (iVar1 == 1) {
    ar6_00 = 0;
    iVar2 = ar6;
    FUN_8c0c4e58(ar5,ar6,0,ar7);
  }
  iVar2 = get_field_d0_0c51fc(ar5,iVar2,ar6_00,ar7);
  a4 = *(int **)(iVar2 * 4 + ar6);
  (**(code **)(*a4 + 0x6c))(a4,ar5,0,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0cbbcc\n.set _FUN_8c0cbbcc, _FUN_8c0cbbcc_def\n");
//@unit 8c0cbc34
#include "../decls.h"
undefined4 ret_const_1_0cbc34_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}

__asm__(".globl _ret_const_1_0cbc34\n.set _ret_const_1_0cbc34, _ret_const_1_0cbc34_def\n");
//@unit 8c0cbc3c
#include "../decls.h"
undefined4 FUN_8c0cbc3c_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *a4;
  int ar6_00;
  
  iVar2 = ar5;
  ar6_00 = ar6;
  iVar1 = FUN_8c100154(ar5,ar5,ar6,ar7);
  if (iVar1 == 1) {
    ar6_00 = 1;
    iVar2 = ar6;
    FUN_8c0c4e58(ar5,ar6,1,ar7);
  }
  iVar2 = get_field_d0_0c51fc(ar5,iVar2,ar6_00,ar7);
  a4 = *(int **)(iVar2 * 4 + ar6);
  (**(code **)(*a4 + 0x6c))(a4,ar5,1,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0cbc3c\n.set _FUN_8c0cbc3c, _FUN_8c0cbc3c_def\n");
//@unit 8c0cbca4
#include "../decls.h"
undefined4 FUN_8c0cbca4_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *a4;
  int ar6_00;
  
  iVar2 = ar5;
  ar6_00 = ar6;
  iVar1 = FUN_8c100154(ar5,ar5,ar6,ar7);
  if (iVar1 == 1) {
    ar6_00 = 2;
    iVar2 = ar6;
    FUN_8c0c4e58(ar5,ar6,2,ar7);
  }
  iVar2 = get_field_d0_0c51fc(ar5,iVar2,ar6_00,ar7);
  a4 = *(int **)(iVar2 * 4 + ar6);
  (**(code **)(*a4 + 0x6c))(a4,ar5,2,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0cbca4\n.set _FUN_8c0cbca4, _FUN_8c0cbca4_def\n");
//@unit 8c0cbd0c
#include "../decls.h"
undefined4 FUN_8c0cbd0c_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *a4;
  int ar6_00;
  
  iVar2 = ar5;
  ar6_00 = ar6;
  iVar1 = FUN_8c100154(ar5,ar5,ar6,ar7);
  if (iVar1 == 1) {
    ar6_00 = 3;
    iVar2 = ar6;
    FUN_8c0c4e58(ar5,ar6,3,ar7);
  }
  iVar2 = get_field_d0_0c51fc(ar5,iVar2,ar6_00,ar7);
  a4 = *(int **)(iVar2 * 4 + ar6);
  (**(code **)(*a4 + 0x6c))(a4,ar5,3,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0cbd0c\n.set _FUN_8c0cbd0c, _FUN_8c0cbd0c_def\n");
//@unit 8c0cbd74
#include "../decls.h"
undefined4 FUN_8c0cbd74_def(int ar4,undefined *ar5,int ar6,int ar7)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 *a6;
  undefined1 *a5;
  int ar7_00;
  int ar4_00;
  float fVar5;
  undefined4 uVar6;
  double in_dr0;
  ulonglong uVar7;
  undefined8 uVar8;
  float fVar10;
  double dVar9;
  undefined *puVar11;
  undefined4 in_fr3;
  double in_xd0;
  bool bVar12;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined8 uStack_b4;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  double *pdStack_9c;
  double *pdStack_98;
  undefined8 uStack_94;
  int iStack_8c;
  undefined8 uStack_88;
  int iStack_80;
  undefined8 uStack_7c;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [36];
  
  puVar3 = ar5;
  iVar4 = ar6;
  ar7_00 = ar7;
  if (*(undefined4 *)0x8c437320 == '\0') {
    uStack_44 = Vec3_set_zero(0x8c437324,ar5,ar6,ar7);
    puVar3 = (&object_dtor_delete);
    iVar4 = 0x8c437314;
    (*(code *)(&global_list_push))
              (uStack_44,(&object_dtor_delete),0x8c437314,ar7_00);
    *(undefined4 *)0x8c437320 = '\x01';
  }
  if (*(undefined4 *)0x8c43733c == '\0') {
    uStack_48 = Vec3_ctor_zero(0x8c437340,puVar3,iVar4,ar7_00);
    puVar3 = (&Vec3_dtor);
    iVar4 = 0x8c437330;
    global_list_push(uStack_48,(&Vec3_dtor),0x8c437330,ar7_00);
    *(undefined4 *)0x8c43733c = '\x01';
  }
  if (*(undefined4 *)0x8c437354 == '\0') {
    *(undefined4 *)0x8c437350 = 0;
    *(undefined4 *)0x8c437354 = '\x01';
  }
  FUN_8c0c84cc(auStack_3c,puVar3,iVar4,ar7_00);
  iStack_4c = (**(code **)(0x144 + *(int *)(ar5 + 8)))(ar5,puVar3,iVar4,ar7_00);
  uVar6 = SUB84(in_dr0,0);
  ar4_00 = iStack_4c + 0xb0;
  iVar1 = *(int *)(0x2d39c + ar4);
  if (iVar1 == 0) {
    iStack_50 = (**(code **)(0x144 + *(int *)(ar5 + 8)))(ar5,puVar3,iVar4,ar7_00);
    *(undefined4 *)0x8c437350 = iStack_50 + 0xf8;
    if (in_FPSCR_SZ == '\0') {
      uVar7 = CONCAT44((undefined4)DAT_8c0cbf2c,uVar6);
      uStack_88 = CONCAT44((*(uint*)((uchar*)&uStack_88+4)),(undefined4)DAT_8c0cbf2c);
    }
    else {
      uVar7 = CONCAT44(0x2d3a4,(undefined4)DAT_8c0cbf2c);
      uStack_88 = uVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2d3a4) = (undefined4)uStack_88;
      uVar7 = CONCAT44((undefined4)uStack_88,(int)uVar7);
    }
    else {
      *(ulonglong *)(ar4 + 0x2d3a4) = uStack_88;
      uVar7 = uStack_88;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2d3a8) = (undefined4)uStack_88;
      uVar7 = CONCAT44((undefined4)uStack_88,(int)uVar7);
    }
    else {
      *(ulonglong *)(ar4 + 0x2d3a8) = uStack_88;
      uVar7 = uStack_88;
    }
    iVar1 = *(undefined4 *)0x8c437350;
    vec3_copy_8c023d8c(ar4 + 0x2d3b0,iVar1,iVar4,ar7_00);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)0x8c437324 = 0;
    }
    else {
      *(undefined4 *)0x8c437324 = uVar7 & 0xffffffff;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)0x8c437324 + 4) = 0;
    }
    else {
      *(ulonglong *)((int)0x8c437324 + 4) = uVar7 & 0xffffffff;
    }
    uVar7 = uVar7 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(0x8c437324 + 1) = 0;
    }
    else {
      ((undefined1 *)1)[0x8c437324] = uVar7;
    }
    iStack_54 = get_field_24_05c284(ar5,iVar1,iVar4,ar7_00);
    if (iStack_54 == 1) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44((undefined4)DAT_8c0cbfd8,(int)uVar7);
        *(undefined4 *)(ar4 + 0x2d3ac) = (undefined4)DAT_8c0cbfd8;
      }
      else {
        in_dr0 = (double)CONCAT44(0x8c437340,(undefined4)DAT_8c0cbfd8);
        *(double *)(ar4 + 0x2d3ac) = in_dr0;
      }
    }
    else {
      in_dr0 = (double)(uVar7 & 0xffffffff);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2d3ac) = 0;
      }
      else {
        *(double *)(ar4 + 0x2d3ac) = in_dr0;
      }
    }
    ar7_00 = 0x8c437340 + 8;
    iVar4 = 0x8c437340 + 4;
    iVar1 = 0x8c437340;
    FUN_8c0507a4(ar5,0x8c437340,iVar4,ar7_00);
    FUN_8c036988(ar5,iVar1,iVar4,ar7_00);
    FUN_8c078fb8(ar5,iVar1,iVar4,ar7_00);
    (**(code **)(*(int *)(ar5 + 8) + 0x6c))(ar5,iVar1,iVar4,ar7_00);
    *(undefined4 *)(0x2d39c + ar4) = 1;
    iStack_8c = get_field_d0_0c51fc(ar6,iVar1,iVar4,ar7_00);
    puVar3 = (undefined *)(uint)*(byte *)(0xa0 + ar7);
    piVar2 = *(int **)(ar4 + iStack_8c * 4 + 8);
    iStack_58 = iStack_8c;
    (**(code **)(*piVar2 + 0x78))(piVar2,puVar3,iVar4,ar7_00);
    FUN_8c235ee4(piVar2,puVar3,iVar4,ar7_00);
  }
  else if (iVar1 == 1) {
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(DAT_8c0cc070,*(undefined4 *)(ar4 + 0x2d3a4));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x2d3a4);
      dVar9 = (double)CONCAT44(0x2d3a8,DAT_8c0cc070);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar9 + dVar9,0);
    }
    uStack_94 = in_xd0;
    if (in_FPSCR_SZ == '\0') {
      uStack_94 = (double)CONCAT44(ar4,fVar5);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((*(uint*)((uchar*)&uStack_94+4)) + 0x2d3a4) = (undefined4)uStack_94;
      dVar9 = (double)CONCAT44((undefined4)uStack_94,fVar5);
    }
    else {
      *(double *)((*(uint*)((uchar*)&uStack_94+4)) + 0x2d3a4) = uStack_94;
      dVar9 = uStack_94;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2d3a8) = (undefined4)uStack_94;
      in_dr0 = (double)CONCAT44((undefined4)uStack_94,SUB84(dVar9,0));
    }
    else {
      *(double *)(ar4 + 0x2d3a8) = uStack_94;
      in_dr0 = uStack_94;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)(ulonglong)*(uint *)(ar4 + 0x2d3a4);
    }
    if (in_FPSCR_PR != '\0' || 0.0 <= SUB84(in_dr0,0)) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2d3a4) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2d3a4) = (ulonglong)in_dr0 & 0xffffffff;
      }
      *(undefined4 *)(0x2d39c + ar4) = 2;
    }
    in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
    iStack_5c = FUN_8c1001e0(ar6,puVar3,iVar4,ar7_00);
    if (iStack_5c == 1) {
      *(undefined4 *)(0x2d39c + ar4) = 3;
    }
  }
  else if (iVar1 == 2) {
    iStack_60 = FUN_8c1009c8(ar6,puVar3,iVar4,ar7_00);
    uVar6 = SUB84(in_dr0,0);
    if (iStack_60 == 1) {
      if (in_FPSCR_SZ == '\0') {
        uVar6 = *(undefined4 *)(ar4 + 0x2d3b0);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x2d3b0);
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)(*(undefined4 *)0x8c437350 + 0x18),uVar6);
      }
      else {
        in_dr0 = *(double *)(*(undefined4 *)0x8c437350 + 0x18);
      }
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)in_dr0 >> 0x20) < SUB84(in_dr0,0)) {
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = (double)CONCAT44(DAT_8c0cc0c8,SUB84(in_dr0,0));
          *(undefined4 *)0x8c437324 = DAT_8c0cc0c8;
        }
        else {
          in_dr0 = (double)CONCAT44((*(uint *)0x8c0cc0cc),DAT_8c0cc0c8);
          *(undefined4 *)0x8c437324 = in_dr0;
        }
      }
    }
    else {
      iStack_64 = FUN_8c1009ec(ar6,puVar3,iVar4,ar7_00);
      uVar6 = SUB84(in_dr0,0);
      if (iStack_64 == 1) {
        if (in_FPSCR_SZ == '\0') {
          uVar6 = *(undefined4 *)(ar4 + 0x2d3b0);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x2d3b0);
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)(*(undefined4 *)0x8c437350 + 0xc),uVar6);
        }
        else {
          in_dr0 = *(double *)(*(undefined4 *)0x8c437350 + 0xc);
        }
        if (in_FPSCR_PR == '\0' && SUB84(in_dr0,0) < (float)((ulonglong)in_dr0 >> 0x20)) {
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = (double)CONCAT44(DAT_8c0cc148,SUB84(in_dr0,0));
            *(undefined4 *)0x8c437324 = DAT_8c0cc148;
          }
          else {
            in_dr0 = (double)CONCAT44((&FUN_8c100a10),DAT_8c0cc148);
            *(undefined4 *)0x8c437324 = in_dr0;
          }
        }
      }
    }
    uVar6 = SUB84(in_dr0,0);
    iStack_68 = FUN_8c100a10(ar6,puVar3,iVar4,ar7_00);
    if (iStack_68 == 1) {
      if (in_FPSCR_SZ == '\0') {
        uVar6 = *(undefined4 *)(ar4 + 0x2d3b4);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x2d3b4);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar8 = CONCAT44(*(undefined4 *)(*(undefined4 *)0x8c437350 + 0x10),uVar6);
      }
      else {
        uVar8 = *(undefined8 *)(*(undefined4 *)0x8c437350 + 0x10);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar8 < (float)((ulonglong)uVar8 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)0x8c437324 + 4) = DAT_8c0cc154;
        }
        else {
          *(undefined8 *)((int)0x8c437324 + 4) = CONCAT44((*(uint *)0x8c0cc158),DAT_8c0cc154);
        }
      }
    }
    else {
      iStack_6c = FUN_8c100a34(ar6,puVar3,iVar4,ar7_00);
      if (iStack_6c == 1) {
        if (in_FPSCR_SZ == '\0') {
          uVar6 = *(undefined4 *)(ar4 + 0x2d3b4);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x2d3b4);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar8 = CONCAT44(*(undefined4 *)(*(undefined4 *)0x8c437350 + 0x1c),uVar6);
        }
        else {
          uVar8 = *(undefined8 *)(*(undefined4 *)0x8c437350 + 0x1c);
        }
        if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar8 >> 0x20) < (float)uVar8) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)0x8c437324 + 4) = DAT_8c0cc328;
          }
          else {
            *(ulonglong *)((int)0x8c437324 + 4) = CONCAT44(DAT_8c0cc32c,DAT_8c0cc328);
          }
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)0x8c437324;
      fVar10 = DAT_8c0cc32c;
    }
    else {
      in_xd0 = *(undefined4 *)0x8c437324;
      fVar5 = DAT_8c0cc32c;
      fVar10 = DAT_8c0cc330;
    }
    if (in_FPSCR_PR != '\0' || fVar5 <= fVar10) {
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)0x8c437324;
      }
      else {
        in_xd0 = *(undefined4 *)0x8c437324;
      }
      if (in_FPSCR_PR == '\0' && 0.0 < fVar5) {
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c0cc330,*(float *)0x8c437324);
        }
        else {
          in_xd0 = *(undefined4 *)0x8c437324;
          dVar9 = (double)CONCAT44(DAT_8c0cc334,DAT_8c0cc330);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar9 - dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)0x8c437324 = fVar5;
          fVar5 = *(float *)0x8c437324;
        }
        else {
          *(undefined4 *)0x8c437324 = in_xd0;
          in_xd0 = *(undefined4 *)0x8c437324;
        }
        if (in_FPSCR_PR != '\0' || fVar5 <= 0.0) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)0x8c437324 = 0.0;
          }
          else {
            *(undefined4 *)0x8c437324 = (double)(ulonglong)(uint)fVar5;
          }
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)0x8c437324;
      fVar10 = DAT_8c0cc334;
    }
    else {
      in_xd0 = *(undefined4 *)0x8c437324;
      fVar5 = DAT_8c0cc334;
      fVar10 = 0x2d3b0;
    }
    if (in_FPSCR_PR != '\0' || fVar10 <= fVar5) {
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)0x8c437324;
      }
      else {
        in_xd0 = *(undefined4 *)0x8c437324;
      }
      if (in_FPSCR_PR == '\0' && fVar5 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c0cc330,*(float *)0x8c437324);
        }
        else {
          in_xd0 = *(undefined4 *)0x8c437324;
          dVar9 = (double)CONCAT44(DAT_8c0cc334,DAT_8c0cc330);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar9 + dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)0x8c437324 = fVar5;
          fVar5 = *(float *)0x8c437324;
        }
        else {
          *(undefined4 *)0x8c437324 = in_xd0;
          in_xd0 = *(undefined4 *)0x8c437324;
        }
        if (in_FPSCR_PR != '\0' || 0.0 <= fVar5) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)0x8c437324 = 0.0;
          }
          else {
            *(undefined4 *)0x8c437324 = (double)(ulonglong)(uint)fVar5;
          }
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)((int)0x8c437324 + 4);
      fVar10 = DAT_8c0cc32c;
    }
    else {
      in_xd0 = *(double *)((int)0x8c437324 + 4);
      fVar5 = DAT_8c0cc32c;
      fVar10 = DAT_8c0cc330;
    }
    if (in_FPSCR_PR != '\0' || fVar5 <= fVar10) {
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)((int)0x8c437324 + 4);
      }
      else {
        in_xd0 = *(double *)((int)0x8c437324 + 4);
      }
      if (in_FPSCR_PR == '\0' && 0.0 < fVar5) {
        pdStack_98 = 0x8c437324;
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c0cc330,*(float *)((int)0x8c437324 + 4));
        }
        else {
          in_xd0 = *(double *)((int)0x8c437324 + 4);
          dVar9 = (double)CONCAT44(DAT_8c0cc334,DAT_8c0cc330);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar9 - dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)0x8c437324 + 4) = fVar5;
        }
        else {
          *(double *)((int)0x8c437324 + 4) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar5 = *(float *)((int)0x8c437324 + 4);
        }
        else {
          in_xd0 = *(double *)((int)0x8c437324 + 4);
        }
        if (in_FPSCR_PR != '\0' || fVar5 <= 0.0) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)0x8c437324 + 4) = 0.0;
          }
          else {
            *(ulonglong *)((int)0x8c437324 + 4) = (ulonglong)(uint)fVar5;
          }
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)((int)0x8c437324 + 4);
      fVar10 = DAT_8c0cc334;
    }
    else {
      in_xd0 = *(double *)((int)0x8c437324 + 4);
      fVar5 = DAT_8c0cc334;
      fVar10 = 0x2d3b0;
    }
    if (in_FPSCR_PR != '\0' || fVar10 <= fVar5) {
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)((int)0x8c437324 + 4);
      }
      else {
        in_xd0 = *(double *)((int)0x8c437324 + 4);
      }
      if (in_FPSCR_PR == '\0' && fVar5 < 0.0) {
        pdStack_9c = 0x8c437324;
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c0cc330,*(float *)((int)0x8c437324 + 4));
        }
        else {
          in_xd0 = *(double *)((int)0x8c437324 + 4);
          dVar9 = (double)CONCAT44(DAT_8c0cc334,DAT_8c0cc330);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar9 + dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)0x8c437324 + 4) = fVar5;
        }
        else {
          *(double *)((int)0x8c437324 + 4) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar5 = *(float *)((int)0x8c437324 + 4);
        }
        else {
          in_xd0 = *(double *)((int)0x8c437324 + 4);
        }
        if (in_FPSCR_PR != '\0' || 0.0 <= fVar5) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)0x8c437324 + 4) = 0.0;
          }
          else {
            *(ulonglong *)((int)0x8c437324 + 4) = (ulonglong)(uint)fVar5;
          }
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(*(float *)0x8c437324,*(undefined4 *)(ar4 + (int)0x2d3b0));
    }
    else {
      in_xd0 = *(double *)(ar4 + (int)0x2d3b0);
      dVar9 = *(undefined4 *)0x8c437324;
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar9 + dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + (int)0x2d3b0) = fVar5;
    }
    else {
      *(double *)(ar4 + (int)0x2d3b0) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(*(float *)((int)0x8c437324 + 4),*(undefined4 *)(ar4 + 0x2d3b4)
                              );
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x2d3b4);
      dVar9 = *(double *)((int)0x8c437324 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar9 + dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x2d3b4) = fVar5;
    }
    else {
      *(double *)(ar4 + 0x2d3b4) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)(ar4 + 0x2d3ac);
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x2d3ac);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = fVar5 + 1.0;
    }
    else {
      fVar5 = SUB84((double)CONCAT44(0x3f800000,fVar5) + (double)CONCAT44(0x3f800000,fVar5),0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x2d3ac) = fVar5;
    }
    else {
      *(double *)(ar4 + 0x2d3ac) = in_xd0;
    }
    iStack_a8 = ar4;
    iStack_a4 = ar4;
    iStack_a0 = ar4;
    iStack_70 = FUN_8c031588(ar4_00,puVar3,iVar4,ar7_00);
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2d3ac),in_fr3);
    }
    else {
      dVar9 = *(double *)(ar4 + 0x2d3ac);
    }
    fVar5 = (float)iStack_70;
    in_dr0 = (double)(ulonglong)(uint)fVar5;
    if (in_FPSCR_PR == '\0' && fVar5 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(DAT_8c0cc344,fVar5);
      }
      else {
        in_dr0 = (double)CONCAT44((&get_field_24_05c284),DAT_8c0cc344);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
        in_dr0 = (double)CONCAT44(fVar5,SUB84(in_dr0,0) + fVar5);
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
      }
    }
    if (in_FPSCR_PR == '\0') {
      bVar12 = (float)((ulonglong)dVar9 >> 0x20) < SUB84(in_dr0,0);
    }
    else {
      bVar12 = dVar9 < in_dr0;
    }
    if (!bVar12) {
      iStack_74 = get_field_24_05c284(ar5,puVar3,iVar4,ar7_00);
      if (iStack_74 == 1) {
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = (double)CONCAT44(_DAT_8c0cc378,SUB84(in_dr0,0));
          *(undefined4 *)(ar4 + 0x2d3ac) = _DAT_8c0cc378;
        }
        else {
          in_dr0 = (double)CONCAT44((&FUN_8c1001e0),_DAT_8c0cc378);
          *(double *)(ar4 + 0x2d3ac) = in_dr0;
        }
      }
      else {
        in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2d3ac) = 0;
        }
        else {
          *(double *)(ar4 + 0x2d3ac) = in_dr0;
        }
      }
    }
    iVar1 = FUN_8c1001e0(ar6,puVar3,iVar4,ar7_00);
    uStack_7c = CONCAT44(iVar1,(undefined4)uStack_7c);
    if (iVar1 == 1) {
      *(undefined4 *)(0x2d39c + ar4) = 3;
    }
  }
  else if (iVar1 == 3) {
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(DAT_8c0cc4ac,*(undefined4 *)(ar4 + 0x2d3a4));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x2d3a4);
      dVar9 = (double)CONCAT44(DAT_8c0cc4b0,DAT_8c0cc4ac);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar9 - dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x2d3a4) = fVar5;
    }
    else {
      *(double *)(ar4 + 0x2d3a4) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(DAT_8c0cc4b0,*(undefined4 *)(ar4 + 0x2d3a4));
    }
    else {
      in_dr0 = (double)CONCAT44(0x2d39c,DAT_8c0cc4b0);
    }
    iStack_ac = ar4;
    if (in_FPSCR_PR != '\0' || SUB84(in_dr0,0) <= (float)((ulonglong)in_dr0 >> 0x20)) {
      *(undefined4 *)(0x2d39c + ar4) = 5;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)&uStack_b4 + 0x88) = 0;
  }
  else {
    *(ulonglong *)((int)&uStack_b4 + 0x88) = (ulonglong)in_dr0 & 0xffffffff;
  }
  uVar7 = (ulonglong)in_dr0 & 0xffffffff;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)&uStack_b4 + 0x8c) = 0;
  }
  else {
    *(ulonglong *)((int)&uStack_b4 + 0x8c) = uVar7;
  }
  (**(code **)(0x120 + *(int *)(ar5 + 8)))(ar5,puVar3,iVar4,ar7_00);
  uVar6 = (undefined4)(uVar7 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_7c = CONCAT44((*(uint*)((uchar*)&uStack_7c+4)),uVar6);
    *(undefined4 *)((int)&uStack_b4 + 0x90) = uVar6;
  }
  else {
    uStack_7c = uVar7;
    *(ulonglong *)((int)&uStack_b4 + 0x90) = uVar7;
  }
  a6 = auStack_3c;
  (**(code **)(*(int *)(ar5 + 8) + 0x18))(ar5,ar7,a6,ar7_00);
  if (*(int *)(0x2d39c + ar4) == 5) {
    puVar3 = DAT_8c0cc4cc;
    puVar11 = (&FUN_8c036988);
    if (in_FPSCR_SZ == '\0') {
      puVar3 = *(undefined **)(0x8c437340 + 8);
      puVar11 = DAT_8c0cc4cc;
    }
    if (in_FPSCR_PR == '\0' && (float)(uint)puVar11 < (float)(uint)puVar3) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined **)(0x8c437340 + 8) = DAT_8c0cc4cc;
      }
      else {
        *(undefined8 *)(0x8c437340 + 8) = CONCAT44((&FUN_8c036988),DAT_8c0cc4cc);
      }
    }
    iVar1 = 0x8c437340 + 8;
    iVar4 = 0x8c437340;
    FUN_8c036988(ar5,iVar1,0x8c437340,ar7_00);
    (**(code **)(*(int *)(ar5 + 8) + 0x6c))(ar5,iVar1,iVar4,ar7_00);
    (*(uint*)((uchar*)&uStack_b4+4)) = get_field_d0_0c51fc(ar6,iVar1,iVar4,ar7_00);
    a5 = (undefined1 *)(uint)*(byte *)(0xa0 + ar7);
    piVar2 = *(int **)(ar4 + (*(uint*)((uchar*)&uStack_b4+4)) * 4 + 8);
    a6 = a5;
    iStack_80 = (*(uint*)((uchar*)&uStack_b4+4));
    (**(code **)(*piVar2 + 0x70))(piVar2,a5,a5,ar7_00);
    (*(uint*)((uchar*)&uStack_b4+0)) = get_field_d0_0c51fc(ar6,a5,a6,ar7_00);
    uStack_88 = CONCAT44((int)uStack_b4,(undefined4)uStack_88);
    piVar2 = *(int **)(ar4 + (int)uStack_b4 * 4 + 8);
    (**(code **)(0xa0 + *piVar2))(piVar2,a5,a6,ar7_00);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2d3a4) = DAT_8c0cc4b0;
    }
    else {
      *(undefined8 *)(ar4 + 0x2d3a4) = CONCAT44(0x2d39c,DAT_8c0cc4b0);
    }
    uStack_40 = 5;
    *(undefined4 *)(0x2d39c + ar4) = 0;
  }
  else {
    uStack_40 = *(undefined4 *)(0x2d39c + ar4);
  }
  FUN_8c0c8480(auStack_3c,0xffffffff,a6,ar7_00);
  return uStack_40;
}

__asm__(".globl _FUN_8c0cbd74\n.set _FUN_8c0cbd74, _FUN_8c0cbd74_def\n");
//@unit 8c0cc518
#include "../decls.h"
undefined4 * FUN_8c0cc518_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c0cc520;
}

__asm__(".globl _FUN_8c0cc518\n.set _FUN_8c0cc518, _FUN_8c0cc518_def\n");
//@unit 8c0cc524
#include "../decls.h"
undefined4 FUN_8c0cc524_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar4_00;
  undefined4 *ar5_00;
  undefined4 *ar6_00;
  int ar5_01;
  undefined4 in_fr1;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  undefined4 in_stack_ffffff50;
  undefined8 uStack_b0;
  int iStack_ac;
  undefined4 auStack_a0 [3];
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [72];
  undefined8 uStack_40;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uStack_94 = DAT_8c13ce90;
  uStack_90 = DAT_8c13ce94;
  uStack_8c = DAT_8c13ce98;
  iVar6 = ar5;
  iVar1 = (**(code **)(*(int *)(ar5 + 8) + 0x144))(ar5,ar5,ar6,ar7);
  ar5_01 = iVar1 + 0xb0;
  if (cVar8 == '\0') {
    uVar4 = CONCAT44(*(undefined4 *)(ar4 + 0x2d3b4),in_fr1);
  }
  else {
    auStack_a0[0] = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x2d3b0) >> 0x20);
    uVar4 = *(undefined8 *)(ar4 + 0x2d3b4);
  }
  if (DAT_8c43735c == '\0') {
    if (cVar8 == '\0') {
      uVar4 = CONCAT44(0x3e99999a,(int)uVar4);
      _DAT_8c437358 = CONCAT44(_DAT_8c43735c,0x3e99999a);
    }
    else {
      uVar4 = 0x8c4373643e99999a;
      _DAT_8c437358 = 0x8c4373643e99999a;
    }
    _DAT_8c437358 = CONCAT14(1,_DAT_8c437358);
  }
  if (DAT_8c437364 == '\0') {
    if (cVar8 == '\0') {
      uVar4 = CONCAT44(0x3d4ccccd,(int)uVar4);
      _DAT_8c437360 = CONCAT44(_DAT_8c437364,0x3d4ccccd);
    }
    else {
      uVar4 = 0x8c2363e83d4ccccd;
      _DAT_8c437360 = 0x8c2363e83d4ccccd;
    }
    _DAT_8c437360 = CONCAT14(1,_DAT_8c437360);
  }
  FUN_8c2363e8(auStack_88,iVar6,ar6,ar7,in_stack_ffffff50);
  (**(code **)(*(int *)(ar5 + 8) + 0x120))(ar5,iVar6,ar6,ar7);
  uStack_b0 = uVar4;
  if (cVar8 == '\0') {
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_b0 = CONCAT44(iVar1,uVar2);
    uStack_40 = CONCAT44((*(uint*)((uchar*)&uStack_40+4)),uVar2);
    uVar4 = uStack_40;
  }
  uStack_40 = uVar4;
  FUN_8c2572ec(auStack_88,iVar6,ar6,ar7);
  ar6_00 = auStack_a0;
  ar5_00 = &uStack_94;
  uVar2 = 0;
  FUN_8c21279c(0,ar5_00,ar6_00,ar7,in_stack_ffffff50);
  FUN_8c219038(uVar2,ar5_00,ar6_00,ar7);
  FUN_8c21907e(uVar2,ar5_00,ar6_00,ar7);
  FUN_8c219070(uVar2,ar5_00,ar6_00,ar7);
  FUN_8c01538c(0x8c43691c,ar5_00,ar6_00,ar7);
  FUN_8c256328(0,ar5_00,ar6_00,ar7,in_stack_ffffff50);
  FUN_8c25b5d0(0,ar5_00,ar6_00,ar7,in_stack_ffffff50);
  uVar2 = 0;
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x2d3b4));
  }
  else {
    dVar5 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar5 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    iVar6 = (int)(dVar5 / dVar5);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x2d3b0));
  }
  else {
    dVar5 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar5 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    iVar1 = (int)(SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    iVar1 = (int)(dVar5 / dVar5);
  }
  FUN_8c256b0c(0,iVar1,iVar6,0,in_stack_ffffff50);
  FUN_8c015b54(0x8c43690c,ar5_01,iVar6,uVar2);
  ar4_00 = 1;
  FUN_8c256210(1,ar5_01,iVar6,uVar2);
  FUN_8c219070(ar4_00,ar5_01,iVar6,uVar2);
  FUN_8c0f4b44(ar5,ar5_01,iVar6,uVar2);
  FUN_8c256328(0,ar5_01,iVar6,uVar2,in_stack_ffffff50);
  FUN_8c25b5d0(0,ar5_01,iVar6,uVar2,in_stack_ffffff50);
  FUN_8c078fb8(ar5,ar5_01,iVar6,uVar2);
  (**(code **)(*(int *)(ar5 + 8) + 0x38))(ar5,ar5_01,iVar6,uVar2);
  uVar2 = FUN_8c256210(1,ar5_01,iVar6,uVar2);
  return uVar2;
}

__asm__(".globl _FUN_8c0cc524\n.set _FUN_8c0cc524, _FUN_8c0cc524_def\n");
//@unit 8c0cc784
#include "../decls.h"
undefined4 FUN_8c0cc784_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  uint a6;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  code *a6_00;
  int *a4;
  uint ar6_00;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *a5;
  int iVar8;
  ulonglong in_dr0;
  double dVar9;
  double in_dr2;
  undefined4 uVar10;
  double dVar11;
  float fVar12;
  bool bVar13;
  char cVar14;
  char cVar15;
  int iStack_4c;
  int iStack_48;
  undefined1 auStack_44 [16];
  ushort uStack_34;
  byte bStack_32;
  byte bStack_31;
  
  cVar15 = '\0';
  cVar14 = '\0';
  uVar10 = 0;
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_44,ar5,ar6,ar7);
  FUN_8c0b9d14(ar5,&uStack_34,ar6_00,ar7);
  *(undefined2 *)(ar5 + 0x8c) = *(undefined2 *)(ar6 + 0x14);
  *(undefined2 *)(ar5 + 0x8e) = *(undefined2 *)(ar6 + 0x16);
  *(undefined2 *)(ar5 + 0x90) = *(undefined2 *)(ar6 + 0x18);
  *(undefined2 *)(ar5 + 0x92) = *(undefined2 *)(ar6 + 0x1a);
  *(undefined2 *)(ar5 + 0x94) = *(undefined2 *)(ar6 + 0x1c);
  *(undefined2 *)(ar5 + 0x96) = *(undefined2 *)(ar6 + 0x1e);
  *(undefined2 *)(ar5 + 0x98) = *(undefined2 *)(ar6 + 0x20);
  *(undefined2 *)(ar5 + 0x9a) = *(undefined2 *)(ar6 + 0x22);
  *(undefined2 *)(ar5 + 0x9c) = *(undefined2 *)(ar6 + 0x24);
  *(undefined2 *)(ar5 + 0x9e) = *(undefined2 *)(ar6 + 0x26);
  *(undefined1 *)(ar5 + 0xa0) = *(undefined1 *)(ar6 + 0xa8);
  a6 = *(uint *)(ar6 + 0xac);
  *(undefined2 *)(ar5 + 0xa2) = *(undefined2 *)(ar6 + 0x28);
  FUN_8c1f826c(&uStack_34,&iStack_48,ar6_00,ar7);
  FUN_8c1f826c(ar5 + 0x8c,&iStack_4c,ar6_00,ar7);
  uVar1 = libgcc_divide_helper_010284(iStack_48 - iStack_4c,0xe10,ar6_00,ar7);
  *(short *)(ar5 + 0xae) = (short)uVar1;
  uVar1 = libgcc_divide_helper_0103d0(iStack_48 - iStack_4c,0xe10,ar6_00,ar7);
  uVar2 = libgcc_divide_helper_010284(uVar1,0x3c,ar6_00,ar7);
  *(short *)(ar5 + 0xb0) = (short)uVar2;
  uVar1 = libgcc_divide_helper_0103d0(uVar1,0x3c,ar6_00,ar7);
  *(short *)(ar5 + 0xb2) = (short)uVar1;
  if ((((uStack_34 == *(ushort *)(ar5 + 0x8c)) && (bStack_32 == *(byte *)(ar5 + 0x8e))) &&
      (bStack_31 == *(byte *)(ar5 + 0x8f))) && (7 < *(ushort *)(ar5 + 0xae))) {
    *(short *)(ar5 + 0xa2) = *(short *)(ar5 + 0xa2) + 1;
  }
  else if ((*(ushort *)(ar5 + 0xae) < 0x18) &&
          (((ar6_00 = (uint)bStack_31, *(byte *)(ar5 + 0x8f) < ar6_00 ||
            (*(byte *)(ar5 + 0x8e) < bStack_32)) || (*(ushort *)(ar5 + 0x8c) < uStack_34)))) {
    *(short *)(ar5 + 0xa2) = *(short *)(ar5 + 0xa2) + 1;
  }
  else if (0x17 < *(ushort *)(ar5 + 0xae)) {
    uVar1 = libgcc_divide_helper_0101e4((uint)*(ushort *)(ar5 + 0xae),0x18,ar6_00,ar7);
    ar6_00 = 0xa2;
    *(short *)(ar5 + 0xa2) = *(short *)(ar5 + 0xa2) + (short)uVar1;
  }
  iVar6 = ar6 + 0x30f4;
  FUN_8c0fa334(0x8c35468c,iVar6,ar6_00,ar7);
  uVar1 = FUN_8c01f528(0x8c3dd7dc,iVar6,ar6_00,ar7);
  iVar6 = ar6 + 0x4104;
  FUN_8c01e0a4(uVar1,iVar6,ar6_00,ar7);
  if (*(byte *)(ar5 + 0xa0) < 3) {
    (**(code **)(**(int **)(ar4 + 8) + 0x160))(*(int **)(ar4 + 8),iVar6,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x164))(*(int **)(ar4 + 8),iVar6,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x168))(*(int **)(ar4 + 8),0x1a4,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x16c))
              (*(int **)(ar4 + 8),*(undefined4 *)(ar6 + 0x1b8),ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x170))
              (*(int **)(ar4 + 8),*(undefined4 *)(ar6 + 0x1a8),ar6_00,ar7);
    uVar1 = *(undefined4 *)(ar6 + 0x1ac);
    (**(code **)(**(int **)(ar4 + 8) + 0x174))(*(int **)(ar4 + 8),uVar1,ar6_00,ar7);
    uVar1 = (**(code **)(**(int **)(ar4 + 8) + 0x148))(*(int **)(ar4 + 8),uVar1,ar6_00,ar7);
    FUN_8c0e983c(uVar1,ar6 + 0x14ac,ar6_00,ar7);
    for (iVar6 = 0; iVar6 < 3; iVar6 = iVar6 + 1) {
      iVar8 = (**(code **)(**(int **)(ar4 + 8) + 0x104))(*(int **)(ar4 + 8),iVar6,ar6_00,ar7);
      puVar7 = (undefined8 *)(ar6 + iVar6 * 0x10 + 0x1bc);
      if (cVar15 == '\0') {
        *(undefined4 *)(iVar8 + 4) = *(undefined4 *)puVar7;
      }
      else {
        *(undefined8 *)(iVar8 + 4) = *puVar7;
      }
      puVar7 = (undefined8 *)(ar6 + iVar6 * 0x10 + 0x1c0);
      if (cVar15 == '\0') {
        *(undefined4 *)(iVar8 + 8) = *(undefined4 *)puVar7;
      }
      else {
        *(undefined8 *)(iVar8 + 8) = *puVar7;
      }
      puVar7 = (undefined8 *)(ar6 + iVar6 * 0x10 + 0x1c4);
      if (cVar15 == '\0') {
        *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)puVar7;
      }
      else {
        *(undefined8 *)(iVar8 + 0xc) = *puVar7;
      }
      if (iVar6 == 0) {
        if (cVar15 == '\0') {
          in_dr2 = (double)CONCAT44(*(undefined4 *)(iVar8 + 4),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = *(double *)(iVar8 + 4);
        }
        if (cVar15 == '\0') {
          dVar11 = (double)CONCAT44(0xc28983d7,(float)(int)*(char *)(ar6 + 0x14ac));
        }
        else {
          dVar11 = 4.6046138430016596e-232;
        }
        if (cVar14 == '\0') {
          in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) +
                                    SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20),
                                    SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + dVar11 * dVar11;
        }
        if (cVar15 == '\0') {
          *(int *)(iVar8 + 4) = (int)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          *(double *)(iVar8 + 4) = in_dr2;
        }
      }
    }
    for (iVar6 = 0; uVar5 = (uint)*(byte *)(ar6 + 0x1b4), iVar6 < (int)uVar5; iVar6 = iVar6 + 1) {
      if (*(int *)(iVar6 * 0xf0 + ar6 + 0x204) != -1) {
        ar6_00 = ar5 + 0xac;
        iVar8 = FUN_8c0ce994(ar4,iVar6 * 0xf0 + ar6 + 0x1ec,ar6_00,ar7);
        (**(code **)(*(int *)(iVar8 + 8) + 0xa0))(iVar8,iVar6 * 0xf0 + ar6 + 0x218,ar6_00,ar7);
        iVar3 = FUN_8c0cea98(ar4,iVar8,ar6_00,ar7);
        if (iVar3 == 1) {
          FUN_8c0ceb04(ar4,iVar8,ar6_00,ar7);
        }
        (**(code **)(**(int **)(ar4 + 8) + 0x4c))(*(int **)(ar4 + 8),iVar8,ar6_00,ar7);
      }
    }
    (**(code **)(**(int **)(ar4 + 8) + 0x178))(*(int **)(ar4 + 8),uVar5,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x160))(*(int **)(ar4 + 8),uVar5,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x17c))(*(int **)(ar4 + 8),uVar5,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x164))(*(int **)(ar4 + 8),uVar5,ar6_00,ar7);
    uVar5 = 0x1b8;
    if (*(int *)(ar6 + 0x1b8) == 1) {
      uVar5 = **(uint **)(ar4 + 8);
      (**(code **)(uVar5 + 0x188))(*(uint **)(ar4 + 8),uVar5,ar6_00,ar7);
      (**(code **)(**(int **)(ar4 + 8) + 0x168))(*(int **)(ar4 + 8),uVar5,ar6_00,ar7);
    }
  }
  else {
    uVar5 = *(uint *)(ar6 + 0x278c);
    uVar4 = (**(code **)(**(int **)(ar4 + 0x10) + 0x144))(*(int **)(ar4 + 0x10),0x278c,ar6_00,ar7);
    iVar6 = libgcc_divide_helper_0103d0(uVar5,7,ar6_00,ar7);
    if (iVar6 == 3) {
      uVar5 = uVar4 - uVar5;
      if (uVar4 < uVar5) {
        uVar5 = uVar4 - 1;
      }
    }
    else if (iVar6 == 4) {
      if ((bStack_32 < 6) || (9 < bStack_32)) {
        if ((bStack_32 != 0) && (bStack_32 < 6)) {
          uVar5 = (uVar4 >> 1) + (uVar4 >> 2);
        }
      }
      else {
        uVar5 = uVar4 >> 2;
      }
    }
    else if (iVar6 == 5) {
      if (cVar14 == '\0') {
        dVar11 = (double)CONCAT44((float)(int)uVar5,uVar10);
      }
      else {
        dVar11 = (double)(int)uVar5;
      }
      dVar9 = (double)(in_dr0 & 0xffffffff);
      fVar12 = (float)((ulonglong)dVar11 >> 0x20);
      if (cVar14 == '\0') {
        bVar13 = fVar12 < 0.0;
      }
      else {
        bVar13 = dVar11 < dVar9;
      }
      if (bVar13) {
        if (cVar15 == '\0') {
          dVar9 = (double)CONCAT44(0x4f800000,(int)in_dr0);
        }
        else {
          dVar9 = 0.000878906487741915;
        }
        if (cVar14 == '\0') {
          dVar11 = (double)CONCAT44(fVar12 + (float)((ulonglong)dVar9 >> 0x20),SUB84(dVar11,0));
        }
        else {
          dVar11 = dVar11 + dVar9;
        }
      }
      if (cVar15 == '\0') {
        dVar9 = (double)CONCAT44(0x3f4ccccd,SUB84(dVar9,0));
      }
      else {
        dVar9 = 3.533694962840277e+72;
      }
      if (cVar14 == '\0') {
        dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) *
                                  (float)((ulonglong)dVar9 >> 0x20),SUB84(dVar11,0));
      }
      else {
        dVar11 = dVar11 * dVar9;
      }
      if (cVar15 == '\0') {
        dVar9 = (double)CONCAT44(0x4f000000,SUB84(dVar9,0));
      }
      else {
        dVar9 = -9.046259633960061e+74;
      }
      fVar12 = (float)((ulonglong)dVar11 >> 0x20);
      if (cVar14 == '\0') {
        bVar13 = (float)((ulonglong)dVar9 >> 0x20) < fVar12;
      }
      else {
        bVar13 = dVar9 < dVar11;
      }
      if (bVar13) {
        if (cVar15 == '\0') {
          dVar9 = (double)CONCAT44(0xcf800000,SUB84(dVar9,0));
        }
        else {
          dVar9 = 1.1334820462917686e+193;
        }
        if (cVar14 == '\0') {
          dVar11 = (double)CONCAT44(fVar12 + (float)((ulonglong)dVar9 >> 0x20),SUB84(dVar11,0));
        }
        else {
          dVar11 = dVar11 + dVar9;
        }
      }
      if (cVar14 == '\0') {
        uVar5 = (uint)(float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        uVar5 = (uint)dVar11;
      }
    }
    else {
      uVar5 = 0;
    }
    (**(code **)(**(int **)(ar4 + 0x10) + 0xc4))(*(int **)(ar4 + 0x10),uVar5,ar6_00,ar7);
    for (uVar4 = 0; (int)uVar4 < (int)(uint)*(byte *)(ar6 + 0x2790); uVar4 = uVar4 + 1) {
      uVar5 = uVar4;
      if (*(int *)(uVar4 * 0xf0 + ar6 + 0x27ac) != -1) {
        uVar1 = *(undefined4 *)(uVar4 * 0xf0 + ar6 + 0x27e8);
        uVar5 = s_Shell_0fef9c(0x8c3eb324,*(undefined4 *)(uVar4 * 0xf0 + ar6 + 0x27ac),uVar1,ar7);
        (**(code **)(*(int *)(uVar5 + 8) + 0x104))(uVar5,uVar4 * 0xf0 + ar6 + 0x2794,uVar1,ar7);
        iVar6 = ar5 + 0xac;
        (**(code **)(*(int *)(uVar5 + 8) + 0x98))(uVar5,iVar6,uVar1,ar7);
        a6_00 = *(code **)(*(int *)(uVar5 + 8) + 0x148);
        uVar1 = (*a6_00)(uVar5,iVar6,a6_00,ar7);
        ar6_00 = (uint)(short)uVar1;
        (**(code **)(*(int *)(uVar5 + 8) + 0xe0))(uVar5,0x8c3eb334,ar6_00,ar7);
        (**(code **)(*(int *)(uVar5 + 8) + 0x5c))(uVar5,*(int *)(uVar5 + 8),ar6_00,ar7);
        (**(code **)(*(int *)(uVar5 + 8) + 0xa0))(uVar5,uVar4 * 0xf0 + ar6 + 0x27c0,ar6_00,ar7);
        (**(code **)(**(int **)(ar4 + 0x10) + 0x4c))(*(int **)(ar4 + 0x10),uVar5,ar6_00,ar7);
      }
    }
  }
  (**(code **)(**(int **)(ar4 + 0xc) + 0x168))(*(int **)(ar4 + 0xc),uVar5,ar6_00,ar7);
  uVar1 = (**(code **)(**(int **)(ar4 + 0xc) + 0x148))(*(int **)(ar4 + 0xc),uVar5,ar6_00,ar7);
  iVar6 = ar6 + 0x2784;
  FUN_8c0e983c(uVar1,iVar6,ar6_00,ar7);
  for (iVar8 = 0; iVar8 < (int)(uint)*(byte *)(ar6 + 0x14c0); iVar8 = iVar8 + 1) {
    iVar6 = *(int *)(iVar8 * 0xf0 + ar6 + 0x14dc);
    if (iVar6 != -1) {
      if ((*(int *)(iVar8 * 0xf0 + ar6 + 0x14dc) == 0xd) ||
         (*(int *)(iVar8 * 0xf0 + ar6 + 0x14dc) == 0xc)) {
        _DAT_8c431a54 = 1;
      }
      ar6_00 = ar5 + 0xac;
      iVar6 = FUN_8c0ce994(ar4,iVar8 * 0xf0 + ar6 + 0x14c4,ar6_00,ar7);
      (**(code **)(*(int *)(iVar6 + 8) + 0xa0))(iVar6,iVar8 * 0xf0 + ar6 + 0x14f0,ar6_00,ar7);
      (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),iVar6,ar6_00,ar7);
    }
  }
  (**(code **)(**(int **)(ar4 + 0xc) + 0x188))(*(int **)(ar4 + 0xc),iVar6,ar6_00,ar7);
  (**(code **)(**(int **)(ar4 + 0xc) + 0x168))(*(int **)(ar4 + 0xc),iVar6,ar6_00,ar7);
  if (*(int *)(ar6 + 200) != -1) {
    iVar6 = FUN_8c0ce994(ar4,ar6 + 0xb0,ar5 + 0xac,ar7);
    a5 = auStack_44;
    ar6_00 = a6;
    (**(code **)(*(int *)(iVar6 + 8) + 0x150))(iVar6,a5,a6,ar7);
    FUN_8c036988(iVar6,a5,ar6_00,ar7);
    a4 = *(int **)(ar4 + a6 * 4 + 8);
    (**(code **)(*a4 + 0x50))(a4,iVar6,ar6_00,ar7);
  }
  uVar1 = Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0cc784\n.set _FUN_8c0cc784, _FUN_8c0cc784_def\n");
//@unit 8c0cd3b4
#include "../decls.h"
undefined4 noop_0cd3b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0cd3b4\n.set _noop_0cd3b4, _noop_0cd3b4_def\n");
//@unit 8c0cd3b8
#include "../decls.h"
undefined4 noop_0cd3b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0cd3b8\n.set _noop_0cd3b8, _noop_0cd3b8_def\n");
//@unit 8c0cd3bc
#include "../decls.h"
undefined4 noop_0cd3bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0cd3bc\n.set _noop_0cd3bc, _noop_0cd3bc_def\n");
//@unit 8c0cd3c0
#include "../decls.h"
undefined4 noop_0cd3c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0cd3c0\n.set _noop_0cd3c0, _noop_0cd3c0_def\n");
//@unit 8c0cd3c4
#include "../decls.h"
undefined4 noop_0cd3c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0cd3c4\n.set _noop_0cd3c4, _noop_0cd3c4_def\n");
//@unit 8c0cd3c8
#include "../decls.h"
undefined4 FUN_8c0cd3c8_def(int ar4,int ar5,double *ar6,undefined4 ar7)

{
  int a6;
  undefined4 uVar1;
  undefined4 uVar2;
  uint ar4_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *a4;
  code *pcVar6;
  undefined1 *a5;
  double *ar6_00;
  ulonglong in_dr0;
  double dVar7;
  double in_dr2;
  undefined4 uVar8;
  double dVar9;
  float fVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  int iStack_4c;
  int iStack_48;
  undefined1 auStack_44 [16];
  ushort uStack_34;
  byte bStack_32;
  byte bStack_31;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar8 = 0;
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_44,ar5,ar6,ar7);
  FUN_8c0b9d14(ar5,&uStack_34,ar6_00,ar7);
  *(undefined2 *)(ar5 + 0x8c) = *(undefined2 *)((int)ar6 + 0x14);
  *(undefined2 *)(ar5 + 0x8e) = *(undefined2 *)((int)ar6 + 0x16);
  *(undefined2 *)(ar5 + 0x90) = *(undefined2 *)(ar6 + 3);
  *(undefined2 *)(ar5 + 0x92) = *(undefined2 *)((int)ar6 + 0x1a);
  *(undefined2 *)(ar5 + 0x94) = *(undefined2 *)((int)ar6 + 0x1c);
  *(undefined2 *)(ar5 + 0x96) = *(undefined2 *)((int)ar6 + 0x1e);
  *(undefined2 *)(ar5 + 0x98) = *(undefined2 *)(ar6 + 4);
  *(undefined2 *)(ar5 + 0x9a) = *(undefined2 *)((int)ar6 + 0x22);
  *(undefined2 *)(ar5 + 0x9c) = *(undefined2 *)((int)ar6 + 0x24);
  *(undefined2 *)(ar5 + 0x9e) = *(undefined2 *)((int)ar6 + 0x26);
  *(undefined4 *)(ar5 + 0xa0) = *(undefined4 *)(ar6 + 0x15);
  a6 = *(int *)((int)ar6 + 0xac);
  *(undefined2 *)(ar5 + 0xa2) = *(undefined2 *)(ar6 + 5);
  FUN_8c1f826c(&uStack_34,&iStack_48,ar6_00,ar7);
  FUN_8c1f826c(ar5 + 0x8c,&iStack_4c,ar6_00,ar7);
  uVar1 = libgcc_divide_helper_010284(iStack_48 - iStack_4c,0xe10,ar6_00,ar7);
  *(short *)(ar5 + 0xae) = (short)uVar1;
  uVar1 = libgcc_divide_helper_0103d0(iStack_48 - iStack_4c,0xe10,ar6_00,ar7);
  uVar2 = libgcc_divide_helper_010284(uVar1,0x3c,ar6_00,ar7);
  *(short *)(ar5 + 0xb0) = (short)uVar2;
  uVar1 = libgcc_divide_helper_0103d0(uVar1,0x3c,ar6_00,ar7);
  *(short *)(ar5 + 0xb2) = (short)uVar1;
  if ((((uStack_34 == *(ushort *)(ar5 + 0x8c)) && (bStack_32 == *(byte *)(ar5 + 0x8e))) &&
      (bStack_31 == *(byte *)(ar5 + 0x8f))) && (7 < *(ushort *)(ar5 + 0xae))) {
    *(short *)(ar5 + 0xa2) = *(short *)(ar5 + 0xa2) + 1;
  }
  else if ((*(ushort *)(ar5 + 0xae) < 0x18) &&
          (((*(byte *)(ar5 + 0x8f) < bStack_31 || (*(byte *)(ar5 + 0x8e) < bStack_32)) ||
           (*(ushort *)(ar5 + 0x8c) < uStack_34)))) {
    *(short *)(ar5 + 0xa2) = *(short *)(ar5 + 0xa2) + 1;
  }
  else if (0x17 < *(ushort *)(ar5 + 0xae)) {
    uVar1 = libgcc_divide_helper_0101e4((uint)*(ushort *)(ar5 + 0xae),0x18,ar6_00,ar7);
    ar6_00 = (double *)0xa2;
    *(short *)(ar5 + 0xa2) = *(short *)(ar5 + 0xa2) + (short)uVar1;
  }
  pcVar6 = (code *)((int)ar6 + 0x30f4);
  FUN_8c0fa334(0x8c35468c,pcVar6,ar6_00,ar7);
  uVar1 = FUN_8c01f528(0x8c3dd7dc,pcVar6,ar6_00,ar7);
  pcVar6 = (code *)((int)ar6 + 0x4104);
  FUN_8c01e0a4(uVar1,pcVar6,ar6_00,ar7);
  if (*(byte *)(ar5 + 0xa0) < 3) {
    (**(code **)(**(int **)(ar4 + 8) + 0x160))(*(int **)(ar4 + 8),pcVar6,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x164))(*(int **)(ar4 + 8),pcVar6,ar6_00,ar7);
    iVar4 = **(int **)(ar4 + 8);
    (**(code **)(iVar4 + 0x168))(*(int **)(ar4 + 8),iVar4,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x16c))
              (*(int **)(ar4 + 8),*(undefined4 *)(ar6 + 0x37),ar6_00,ar7);
    ar6_00 = (double *)**(undefined4 **)(ar4 + 8);
    (**(code **)(ar6_00 + 0x2e))(*(undefined4 **)(ar4 + 8),*(undefined4 *)(ar6 + 0x35),ar6_00,ar7);
    uVar1 = *(undefined4 *)((int)ar6 + 0x1ac);
    (**(code **)(**(int **)(ar4 + 8) + 0x174))(*(int **)(ar4 + 8),uVar1,ar6_00,ar7);
    uVar1 = (**(code **)(**(int **)(ar4 + 8) + 0x148))(*(int **)(ar4 + 8),uVar1,ar6_00,ar7);
    FUN_8c0e983c(uVar1,(code *)((int)ar6 + 0x14ac),ar6_00,ar7);
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
      iVar5 = (**(code **)(**(int **)(ar4 + 8) + 0x104))(*(int **)(ar4 + 8),iVar4,ar6_00,ar7);
      pcVar6 = (code *)((int)ar6 + iVar4 * 0x10 + 0x1bc);
      if (cVar13 == '\0') {
        *(undefined4 *)(iVar5 + 4) = *(undefined4 *)pcVar6;
      }
      else {
        *(undefined8 *)(iVar5 + 4) = *(undefined8 *)pcVar6;
      }
      if (cVar13 == '\0') {
        *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(ar6 + iVar4 * 2 + 0x38);
      }
      else {
        *(double *)(iVar5 + 8) = ar6[iVar4 * 2 + 0x38];
      }
      pcVar6 = (code *)((int)ar6 + iVar4 * 0x10 + 0x1c4);
      if (cVar13 == '\0') {
        *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)pcVar6;
      }
      else {
        *(undefined8 *)(iVar5 + 0xc) = *(undefined8 *)pcVar6;
      }
      if (iVar4 == 0) {
        ar6_00 = (double *)(iVar5 + 4);
        if (cVar13 == '\0') {
          in_dr2 = (double)CONCAT44(*(undefined4 *)(iVar5 + 4),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = *(double *)(iVar5 + 4);
        }
        if (cVar13 == '\0') {
          dVar9 = (double)CONCAT44(0xc28983d7,(float)(int)(char)*(undefined4 *)((int)ar6 + 0x14ac));
        }
        else {
          dVar9 = 4.6046138430016596e-232;
        }
        if (cVar12 == '\0') {
          in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) +
                                    SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20),
                                    SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + dVar9 * dVar9;
        }
        if (cVar13 == '\0') {
          *(int *)ar6_00 = (int)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          *ar6_00 = in_dr2;
        }
      }
    }
    for (iVar4 = 0; iVar4 < (int)(uint)(byte)*(undefined4 *)((int)ar6 + 0x1b4); iVar4 = iVar4 + 1) {
      if (*(int *)((int)ar6 + iVar4 * 0xf0 + 0x204) != -1) {
        ar6_00 = (double *)(ar5 + 0xac);
        iVar5 = FUN_8c0cea38(ar4,(code *)((int)ar6 + iVar4 * 0xf0 + 0x1ec),ar6_00,ar7);
        (**(code **)(*(int *)(iVar5 + 8) + 0xa0))(iVar5,ar6 + iVar4 * 0x1e + 0x43,ar6_00,ar7);
        (**(code **)(**(int **)(ar4 + 8) + 0x4c))(*(int **)(ar4 + 8),iVar5,ar6_00,ar7);
      }
    }
    pcVar6 = *(code **)(**(int **)(ar4 + 8) + 0x178);
    (*pcVar6)(*(int **)(ar4 + 8),pcVar6,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x160))(*(int **)(ar4 + 8),pcVar6,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x17c))(*(int **)(ar4 + 8),pcVar6,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x164))(*(int **)(ar4 + 8),pcVar6,ar6_00,ar7);
    if (*(int *)(ar6 + 0x37) == 1) {
      pcVar6 = *(code **)(**(int **)(ar4 + 8) + 0x188);
      (*pcVar6)(*(int **)(ar4 + 8),pcVar6,ar6_00,ar7);
      pcVar6 = *(code **)(ar4 + 8);
      (**(code **)(*(int *)pcVar6 + 0x168))(pcVar6,pcVar6,ar6_00,ar7);
    }
  }
  else {
    ar4_00 = *(uint *)((int)ar6 + 0x278c);
    pcVar6 = *(code **)(**(int **)(ar4 + 0x10) + 0x144);
    uVar3 = (*pcVar6)(*(int **)(ar4 + 0x10),pcVar6,ar6_00,ar7);
    iVar4 = libgcc_divide_helper_0103d0(ar4_00,7,ar6_00,ar7);
    if (iVar4 == 3) {
      ar4_00 = uVar3 - ar4_00;
      if (uVar3 < ar4_00) {
        ar4_00 = uVar3 - 1;
      }
    }
    else if (iVar4 == 4) {
      if ((bStack_32 < 6) || (9 < bStack_32)) {
        if ((bStack_32 != 0) && (bStack_32 < 6)) {
          ar4_00 = (uVar3 >> 1) + (uVar3 >> 2);
        }
      }
      else {
        ar4_00 = uVar3 >> 2;
      }
    }
    else if (iVar4 == 5) {
      if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44((float)(int)ar4_00,uVar8);
      }
      else {
        dVar9 = (double)(int)ar4_00;
      }
      dVar7 = (double)(in_dr0 & 0xffffffff);
      fVar10 = (float)((ulonglong)dVar9 >> 0x20);
      if (cVar12 == '\0') {
        bVar11 = fVar10 < 0.0;
      }
      else {
        bVar11 = dVar9 < dVar7;
      }
      if (bVar11) {
        if (cVar13 == '\0') {
          dVar7 = (double)CONCAT44(0x4f800000,(int)in_dr0);
        }
        else {
          dVar7 = 0.000878906487741915;
        }
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(fVar10 + (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar9,0));
        }
        else {
          dVar9 = dVar9 + dVar7;
        }
      }
      if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x3f4ccccd,SUB84(dVar7,0));
      }
      else {
        dVar7 = 3.533694962840277e+72;
      }
      if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) *
                                 (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar9,0));
      }
      else {
        dVar9 = dVar9 * dVar7;
      }
      if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x4f000000,SUB84(dVar7,0));
      }
      else {
        dVar7 = -9.046259633960061e+74;
      }
      fVar10 = (float)((ulonglong)dVar9 >> 0x20);
      if (cVar12 == '\0') {
        bVar11 = (float)((ulonglong)dVar7 >> 0x20) < fVar10;
      }
      else {
        bVar11 = dVar7 < dVar9;
      }
      if (bVar11) {
        if (cVar13 == '\0') {
          dVar7 = (double)CONCAT44(0xcf800000,SUB84(dVar7,0));
        }
        else {
          dVar7 = 1.0325168201761946e+181;
        }
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(fVar10 + (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar9,0));
        }
        else {
          dVar9 = dVar9 + dVar7;
        }
      }
      if (cVar12 == '\0') {
        ar4_00 = (uint)(float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        ar4_00 = (uint)dVar9;
      }
    }
    else {
      ar4_00 = 0;
    }
    (**(code **)(**(int **)(ar4 + 0x10) + 0xc4))(*(int **)(ar4 + 0x10),ar4_00,ar6_00,ar7);
    for (iVar4 = 0; pcVar6 = (code *)(uint)(byte)*(undefined4 *)(ar6 + 0x4f2), iVar4 < (int)pcVar6;
        iVar4 = iVar4 + 1) {
      if (*(int *)((int)ar6 + iVar4 * 0xf0 + 0x27ac) != -1) {
        uVar1 = *(undefined4 *)(ar6 + iVar4 * 0x1e + 0x4fd);
        iVar5 = s_Shell_0fef9c(0x8c3eb324,*(undefined4 *)((int)ar6 + iVar4 * 0xf0 + 0x27ac),uVar1,
                               ar7);
        (**(code **)(*(int *)(iVar5 + 8) + 0x104))
                  (iVar5,(code *)((int)ar6 + iVar4 * 0xf0 + 0x2794),uVar1,ar7);
        ar6_00 = *(double **)(*(int *)(iVar5 + 8) + 0xa0);
        (*(code *)ar6_00)(iVar5,ar6 + iVar4 * 0x1e + 0x4f8,ar6_00,ar7);
        (**(code **)(**(int **)(ar4 + 0x10) + 0x4c))(*(int **)(ar4 + 0x10),iVar5,ar6_00,ar7);
      }
    }
  }
  (**(code **)(**(int **)(ar4 + 0xc) + 0x168))(*(int **)(ar4 + 0xc),pcVar6,ar6_00,ar7);
  pcVar6 = *(code **)(**(int **)(ar4 + 0xc) + 0x148);
  uVar1 = (*pcVar6)(*(int **)(ar4 + 0xc),pcVar6,ar6_00,ar7);
  pcVar6 = (code *)((int)ar6 + 0x2784);
  FUN_8c0e983c(uVar1,pcVar6,ar6_00,ar7);
  for (iVar4 = 0; iVar4 < (int)(uint)(byte)*(undefined4 *)(ar6 + 0x298); iVar4 = iVar4 + 1) {
    if (*(int *)((int)ar6 + iVar4 * 0xf0 + 0x14dc) != -1) {
      if ((*(int *)((int)ar6 + iVar4 * 0xf0 + 0x14dc) == 0xd) ||
         (*(int *)((int)ar6 + iVar4 * 0xf0 + 0x14dc) == 0xc)) {
        _DAT_8c431a54 = 1;
      }
      ar6_00 = (double *)(ar5 + 0xac);
      pcVar6 = (code *)FUN_8c0cea38(ar4,(code *)((int)ar6 + iVar4 * 0xf0 + 0x14c4),ar6_00,ar7);
      (**(code **)(*(int *)(pcVar6 + 8) + 0xa0))(pcVar6,ar6 + iVar4 * 0x1e + 0x29e,ar6_00,ar7);
      (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),pcVar6,ar6_00,ar7);
    }
  }
  (**(code **)(**(int **)(ar4 + 0xc) + 0x188))(*(int **)(ar4 + 0xc),pcVar6,ar6_00,ar7);
  (**(code **)(**(int **)(ar4 + 0xc) + 0x168))(*(int **)(ar4 + 0xc),pcVar6,ar6_00,ar7);
  if (*(int *)(ar6 + 0x19) != -1) {
    iVar5 = FUN_8c0cea38(ar4,ar6 + 0x16,ar5 + 0xac,ar7);
    a5 = auStack_44;
    iVar4 = a6;
    (**(code **)(*(int *)(iVar5 + 8) + 0x150))(iVar5,a5,a6,ar7);
    FUN_8c036988(iVar5,a5,iVar4,ar7);
    a4 = *(int **)(ar4 + a6 * 4 + 8);
    (**(code **)(*a4 + 0x50))(a4,iVar5,iVar4,ar7);
  }
  uVar1 = Vec3_dtor(auStack_44,0xffffffff,0xffffffff,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0cd3c8\n.set _FUN_8c0cd3c8, _FUN_8c0cd3c8_def\n");
//@unit 8c0cdf50
#include "../decls.h"
undefined4 FUN_8c0cdf50_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  short sVar2;
  int *ar4_00;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *a5;
  int *piVar9;
  code *pcVar10;
  code *a7;
  undefined4 extraout_fr1;
  char cVar11;
  short sStack_116;
  short sStack_114;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  code *pcStack_44;
  int aiStack_40 [4];
  undefined1 auStack_30 [20];
  
  cVar11 = '\0';
  pcVar10 = FUN_8c0c5db0;
  ar4_00 = (int *)FUN_8c0c5db0(*(undefined4 *)(ar5 + 0x7cc),FUN_8c0c5db0,ar6,ar7);
  pcVar3 = (code *)get_field_d0_0c51fc(*(undefined4 *)(ar5 + 0x7cc),pcVar10,ar6,ar7);
  pcStack_44 = (code *)get_field_128_0ce914(*(undefined4 *)(ar5 + 0x7cc),pcVar10,ar6,ar7);
  iVar4 = get_field_24_05c284(ar4_00,pcVar10,ar6,ar7);
  if (cVar11 == '\0') {
    uStack_50 = 0;
  }
  else {
    pcStack_44 = (code *)0x0;
    uStack_50 = extraout_fr1;
  }
  uStack_48 = 0;
  uStack_4c = 0;
  Vec3_ctor_zero(auStack_30,pcVar10,ar6,ar7);
  Vec3_ctor_zero(aiStack_40,pcVar10,ar6,ar7);
  sStack_114 = 0;
  sStack_116 = 0;
  (**(code **)(**(int **)(ar4 + 8) + 0x148))(*(int **)(ar4 + 8),pcVar10,ar6,ar7);
  uVar5 = (**(code **)(**(int **)(ar4 + 0xc) + 0x148))(*(int **)(ar4 + 0xc),pcVar10,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 0x10) + 0x148))(*(int **)(ar4 + 0x10),pcVar10,ar6,ar7);
  a7 = (code *)&uStack_50;
  piVar9 = *(int **)(ar4 + (int)pcVar3 * 4 + 8);
  (**(code **)(*piVar9 + 0x13c))(piVar9,&uStack_48,&uStack_4c,a7);
  a5 = aiStack_40;
  piVar9 = ar4_00;
  pcVar10 = pcVar3;
  (**(code **)(ar4_00[2] + 0x150))(ar4_00,a5,pcVar3,a7);
  if (iVar4 != 0xe) {
    piVar9 = ar4_00;
    FUN_8c036988(ar4_00,a5,pcVar10,a7);
  }
  if (pcVar3 == (code *)0x0) {
    if ((iVar4 == 0xf) || (iVar4 == 0xd)) {
      iVar4 = (**(code **)(**(int **)(ar4 + 8) + 0x11c))(*(int **)(ar4 + 8),iVar4,pcVar10,a7);
      pcVar10 = (code *)0x1;
      if (iVar4 < 1) {
        piVar9 = *(int **)(ar4 + 8);
        (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,1,a7);
        a5 = ar4_00;
      }
      else {
        a5 = (int *)(ar4 + 8);
        pcVar10 = pcStack_44;
        FUN_8c0c4cd8(ar4_00,a5,pcStack_44,a7);
        piVar9 = ar4_00;
      }
    }
    else if (iVar4 == 10) {
      iVar4 = (**(code **)(**(int **)(ar4 + 8) + 0x11c))(*(int **)(ar4 + 8),10,pcVar10,a7);
      if (iVar4 < 1) {
        if (pcStack_44 == (code *)0x1) {
          pcVar10 = FUN_8c0c4dd0;
          FUN_8c0c4dd0(ar4_00,uVar5,FUN_8c0c4dd0,a7);
        }
        piVar9 = *(int **)(ar4 + 8);
        (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
        a5 = ar4_00;
      }
      else {
        a5 = (int *)(ar4 + 8);
        pcVar10 = pcStack_44;
        FUN_8c0c4cd8(ar4_00,a5,pcStack_44,a7);
        piVar9 = ar4_00;
      }
    }
    else if (iVar4 == 0xe) {
      iVar4 = (**(code **)(**(int **)(ar4 + 8) + 0x11c))(*(int **)(ar4 + 8),0xe,pcVar10,a7);
      if (iVar4 < 4) {
        piVar9 = *(int **)(ar4 + 8);
        (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
        a5 = ar4_00;
      }
      else {
        a5 = (int *)(ar4 + 8);
        pcVar10 = pcStack_44;
        FUN_8c0c4cd8(ar4_00,a5,pcStack_44,a7);
        piVar9 = ar4_00;
      }
    }
    else {
      piVar9 = *(int **)(ar4 + 8);
      (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
      a5 = ar4_00;
    }
  }
  else if (pcVar3 == (code *)0x1) {
    if ((iVar4 == 0xf) || (iVar4 == 0xd)) {
      iVar4 = (**(code **)(**(int **)(ar4 + 0xc) + 0x11c))(*(int **)(ar4 + 0xc),iVar4,pcVar10,a7);
      if (iVar4 < 1) {
        piVar9 = *(int **)(ar4 + 0xc);
        (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
        a5 = ar4_00;
      }
      else {
        a5 = (int *)(ar4 + 8);
        pcVar10 = pcStack_44;
        FUN_8c0c4cd8(ar4_00,a5,pcStack_44,a7);
        piVar9 = ar4_00;
      }
    }
    else if (iVar4 == 10) {
      a5 = (int *)0xa;
      uVar6 = (**(code **)(**(int **)(ar4 + 0xc) + 0x11c))(*(int **)(ar4 + 0xc),10,pcVar10,a7);
      for (sVar2 = 0; sVar2 < (short)uVar6; sVar2 = sVar2 + 1) {
        pcVar10 = (code *)(int)sVar2;
        a5 = (int *)0xa;
        iVar4 = (**(code **)(**(int **)(ar4 + 0xc) + 0x100))(*(int **)(ar4 + 0xc),10,pcVar10,a7);
        uVar7 = (**(code **)(*(int *)(iVar4 + 8) + 0x148))(iVar4,a5,pcVar10,a7);
        sVar1 = (short)uVar7;
        if ((sVar1 == 0) || (sVar1 == 1)) {
          sStack_114 = sStack_114 + 1;
        }
        else if (sVar1 == 3) {
          sStack_116 = sStack_116 + 1;
        }
      }
      piVar9 = ar4_00;
      uVar6 = (**(code **)(ar4_00[2] + 0x148))(ar4_00,a5,pcVar10,a7);
      sVar2 = (short)uVar6;
      if ((sVar2 == 0) || (sVar2 == 1)) {
        if (pcStack_44 == (code *)0x1) {
          piVar9 = *(int **)(ar4 + 0xc);
          (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
          a5 = ar4_00;
        }
        else if ((sStack_114 < 4) &&
                (uVar6 = FUN_8c035b50(uVar5,a5,pcVar10,a7), (char)uVar6 < '\x04')) {
          if (pcStack_44 == (code *)0x3) {
            FUN_8c09a540(uVar5,a5,pcVar10,a7);
          }
          piVar9 = *(int **)(ar4 + 0xc);
          (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
          a5 = ar4_00;
        }
        else {
          a5 = (int *)(ar4 + 8);
          pcVar10 = pcStack_44;
          FUN_8c0c4cd8(ar4_00,a5,pcStack_44,a7);
          piVar9 = ar4_00;
        }
      }
      else if (sVar2 == 3) {
        if (pcStack_44 == (code *)0x1) {
          piVar9 = *(int **)(ar4 + 0xc);
          (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
          a5 = ar4_00;
        }
        else if ((sStack_116 < 4) &&
                (uVar6 = FUN_8c035ca0(uVar5,a5,pcVar10,a7), (char)uVar6 < '\x04')) {
          if (pcStack_44 == (code *)0x3) {
            FUN_8c035c88(uVar5,a5,pcVar10,a7);
          }
          piVar9 = *(int **)(ar4 + 0xc);
          (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
          a5 = ar4_00;
        }
        else {
          a5 = (int *)(ar4 + 8);
          pcVar10 = pcStack_44;
          FUN_8c0c4cd8(ar4_00,a5,pcStack_44,a7);
          piVar9 = ar4_00;
        }
      }
    }
    else if (iVar4 == 0xe) {
      if (pcStack_44 == (code *)0x1) {
        piVar9 = *(int **)(ar4 + 0xc);
        (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
        a5 = ar4_00;
      }
      else {
        iVar4 = (**(code **)(**(int **)(ar4 + 0xc) + 0x11c))(*(int **)(ar4 + 0xc),0xe,pcVar10,a7);
        if (iVar4 < 2) {
          piVar9 = *(int **)(ar4 + 0xc);
          (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
          a5 = ar4_00;
        }
        else {
          a5 = (int *)(ar4 + 8);
          pcVar10 = pcStack_44;
          FUN_8c0c4cd8(ar4_00,a5,pcStack_44,a7);
          piVar9 = ar4_00;
        }
      }
    }
    else {
      piVar9 = *(int **)(ar4 + 0xc);
      (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
      a5 = ar4_00;
    }
  }
  else if (pcVar3 == (code *)0x2) {
    if ((iVar4 == 0xf) || (iVar4 == 0xd)) {
      iVar4 = (**(code **)(**(int **)(ar4 + 0x10) + 0x11c))(*(int **)(ar4 + 0x10),iVar4,pcVar10,a7);
      if (iVar4 < 1) {
        piVar9 = *(int **)(ar4 + 0x10);
        (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
        a5 = ar4_00;
      }
      else {
        a5 = (int *)(ar4 + 8);
        pcVar10 = pcStack_44;
        FUN_8c0c4cd8(ar4_00,a5,pcStack_44,a7);
        piVar9 = ar4_00;
      }
    }
    else if (iVar4 == 10) {
      iVar4 = (**(code **)(**(int **)(ar4 + 0x10) + 0x11c))(*(int **)(ar4 + 0x10),10,pcVar10,a7);
      if (iVar4 < 1) {
        if (pcStack_44 == (code *)0x1) {
          FUN_8c0c4dd0(ar4_00,uVar5,pcVar10,a7);
        }
        piVar9 = *(int **)(ar4 + 0x10);
        (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
        a5 = ar4_00;
      }
      else {
        a5 = (int *)(ar4 + 8);
        pcVar10 = pcStack_44;
        a7 = pcStack_44;
        FUN_8c0c4cd8(ar4_00,a5,pcStack_44,pcStack_44);
        piVar9 = ar4_00;
      }
    }
    else if (iVar4 == 0xe) {
      iVar4 = (**(code **)(**(int **)(ar4 + 0x10) + 0x11c))(*(int **)(ar4 + 0x10),0xe,pcVar10,a7);
      if (iVar4 < 3) {
        piVar9 = *(int **)(ar4 + 0x10);
        (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
        a5 = ar4_00;
      }
      else {
        a5 = (int *)(ar4 + 8);
        pcVar10 = pcStack_44;
        FUN_8c0c4cd8(ar4_00,a5,pcStack_44,a7);
        piVar9 = ar4_00;
      }
    }
    else {
      piVar9 = *(int **)(ar4 + 0x10);
      (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
      a5 = ar4_00;
    }
  }
  else if (pcVar3 == (code *)0x3) {
    pcVar10 = (code *)**(undefined4 **)(ar4 + 0x14);
    iVar8 = (**(code **)(pcVar10 + 0x118))
                      (*(undefined4 **)(ar4 + 0x14),*(code **)(pcVar10 + 0x118),pcVar10,a7);
    if (iVar8 < 0xc) {
      if ((iVar4 == 10) && (pcStack_44 == (code *)0x1)) {
        FUN_8c0c4dd0(ar4_00,uVar5,pcVar10,a7);
      }
      piVar9 = *(int **)(ar4 + 0x14);
      (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
      a5 = ar4_00;
    }
    else {
      a5 = (int *)(ar4 + 8);
      pcVar10 = pcStack_44;
      FUN_8c0c4cd8(ar4_00,a5,pcStack_44,a7);
      piVar9 = ar4_00;
    }
  }
  FUN_8c0c4e2c(piVar9,a5,pcVar10,a7);
  FUN_8c0c4e48(piVar9,a5,pcVar10,a7);
  pcVar3 = Vec3_dtor;
  Vec3_dtor(aiStack_40,0xffffffff,Vec3_dtor,a7);
  uVar5 = Vec3_dtor(auStack_30,0xffffffff,pcVar3,a7);
  return uVar5;
}

__asm__(".globl _FUN_8c0cdf50\n.set _FUN_8c0cdf50, _FUN_8c0cdf50_def\n");
//@unit 8c0ce914
#include "../decls.h"
undefined4 get_field_128_0ce914_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x128 + ar4);
}

__asm__(".globl _get_field_128_0ce914\n.set _get_field_128_0ce914, _get_field_128_0ce914_def\n");
//@unit 8c0ce920
#include "../decls.h"
undefined4 FUN_8c0ce920_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(0x2d160 + ar4) = 0;
  *(undefined4 *)(0x2d15c + ar4) = 0;
  *(undefined4 *)(0x2d39c + ar4) = 0;
  *(undefined4 *)(0x2d3a0 + ar4) = 0;
  *(undefined2 *)(0x2d1ac + ar4) = 0;
  *(undefined4 *)(0x2d16c + ar4) = 0;
  *(undefined4 *)(0x2d168 + ar4) = 1;
  *(undefined4 *)(0x2d164 + ar4) = 0;
  uVar1 = FUN_8c0c5330(ar4 + 0x2d1b0,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0ce920\n.set _FUN_8c0ce920, _FUN_8c0ce920_def\n");
//@unit 8c0ce994
#include "../decls.h"
int FUN_8c0ce994_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  undefined4 uVar1;
  int a6;
  
  uVar1 = *(undefined4 *)(ar5 + 0x54);
  a4 = s_Shell_0fef9c(0x8c3eb324,*(undefined4 *)(ar5 + 0x18),uVar1,ar7);
  (**(code **)(0x104 + *(int *)(a4 + 8)))(a4,ar5,uVar1,ar7);
  (**(code **)(0x94 + *(int *)(a4 + 8)))(a4,ar6,uVar1,ar7);
  uVar1 = (**(code **)(0x148 + *(int *)(a4 + 8)))(a4,ar6,uVar1,ar7);
  a6 = (int)(short)uVar1;
  uVar1 = 0x8c3eb334;
  (**(code **)(0xe0 + *(int *)(a4 + 8)))(a4,0x8c3eb334,a6,ar7);
  (**(code **)(*(int *)(a4 + 8) + 0x5c))(a4,uVar1,a6,ar7);
  return a4;
}

__asm__(".globl _FUN_8c0ce994\n.set _FUN_8c0ce994, _FUN_8c0ce994_def\n");
//@unit 8c0cea34
#include "../decls.h"
undefined4 noop_0cea34_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0cea34\n.set _noop_0cea34, _noop_0cea34_def\n");
//@unit 8c0cea38
#include "../decls.h"
int FUN_8c0cea38_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  undefined4 ar6_00;
  
  ar6_00 = *(undefined4 *)(ar5 + 0x54);
  a4 = s_Shell_0fef9c(0x8c3eb324,*(undefined4 *)(ar5 + 0x18),ar6_00,ar7);
  (**(code **)(0x104 + *(int *)(a4 + 8)))(a4,ar5,ar6_00,ar7);
  (**(code **)(0x94 + *(int *)(a4 + 8)))(a4,ar6,ar6_00,ar7);
  return a4;
}

__asm__(".globl _FUN_8c0cea38\n.set _FUN_8c0cea38, _FUN_8c0cea38_def\n");
//@unit 8c0cea98
#include "../decls.h"
undefined4 FUN_8c0cea98_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int a5;
  
  a5 = ar5;
  iVar1 = get_field_24_05c284(ar5,ar5,ar6,ar7);
  uVar2 = (**(code **)(0x148 + *(int *)(ar5 + 8)))(ar5,a5,ar6,ar7);
  if ((iVar1 == 3) && ((short)uVar2 == 7)) {
    uVar2 = 1;
  }
  else if ((iVar1 == 5) && (2 < (short)uVar2)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0cea98\n.set _FUN_8c0cea98, _FUN_8c0cea98_def\n");
//@unit 8c0ceb04
#include "../decls.h"
undefined4 FUN_8c0ceb04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float *a5;
  undefined4 in_fr1;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  undefined8 in_dr14;
  uint uVar8;
  double dVar7;
  undefined8 in_xd0;
  char cVar9;
  char cVar10;
  undefined1 auStack_2c [16];
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  uVar8 = (uint)((ulonglong)in_dr14 >> 0x20);
  cVar10 = '\0';
  cVar9 = '\0';
  FUN_8c02f670(ar5,ar5,ar6,ar7,auStack_2c);
  Vec3_ctor_copy(&fStack_1c,auStack_2c,ar6,ar7);
  Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7);
  dVar7 = (double)((ulonglong)uVar8 << 0x20);
  a5 = &fStack_1c;
  iVar1 = (**(code **)(**(int **)(ar4 + 8) + 0x130))(*(int **)(ar4 + 8),a5,ar6,ar7);
  if (iVar1 == 2) {
    if (cVar10 == '\0') {
      dVar4 = (double)CONCAT44(fStack_1c,in_fr1);
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),0x451a6000);
    }
    else {
      dVar4 = (double)CONCAT44(fStack_18,fStack_1c);
    }
    if (cVar9 == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),
                               SUB84(dVar7,0) - (float)((ulonglong)dVar4 >> 0x20));
    }
    else {
      dVar7 = dVar7 - dVar4;
    }
    if (cVar10 == '\0') {
      dVar4 = (double)CONCAT44(0x3f000000,SUB84(dVar4,0));
    }
    else {
      dVar4 = 2251800342167552.0;
    }
    if (cVar9 == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),
                               SUB84(dVar7,0) * (float)((ulonglong)dVar4 >> 0x20));
    }
    else {
      dVar7 = dVar7 * dVar4;
    }
    if (cVar10 == '\0') {
      dVar4 = (double)CONCAT44(fStack_1c,SUB84(dVar4,0));
    }
    else {
      dVar4 = (double)CONCAT44(fStack_18,fStack_1c);
    }
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + SUB84(dVar7,0),SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar7;
    }
    fVar5 = (float)((ulonglong)dVar4 >> 0x20);
    if (cVar10 == '\0') {
      fVar6 = 160.0;
      fVar3 = fStack_18;
      fStack_1c = fVar5;
    }
    else {
      fStack_1c = SUB84(dVar4,0);
      in_xd0 = CONCAT44(uStack_14,fVar5);
      fVar3 = 160.0;
      fVar6 = 0.8;
      fStack_18 = fVar5;
    }
    if (cVar9 != '\0' || fVar6 <= fVar3) {
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(0x3f4ccccd,fStack_18);
      }
      else {
        in_xd0 = CONCAT44(uStack_14,fStack_18);
        dVar7 = -8.472843126934268e-251;
      }
      if (cVar9 == '\0') {
        fStack_18 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fStack_18 = SUB84(dVar7 * dVar7,0);
      }
      if (cVar10 != '\0') {
        fStack_18 = (float)in_xd0;
        uStack_14 = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
    }
    FUN_8c036988(ar5,a5,ar6,ar7);
    uVar2 = Vec3_dtor(&fStack_1c,0xffffffff,ar6,ar7);
  }
  else {
    uVar2 = Vec3_dtor(&fStack_1c,0xffffffff,ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0ceb04\n.set _FUN_8c0ceb04, _FUN_8c0ceb04_def\n");
//@unit 8c0cebec
#include "../decls.h"
undefined4 noop_0cebec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0cebec\n.set _noop_0cebec, _noop_0cebec_def\n");
//@unit 8c0cebf0
#include "../decls.h"
undefined4 ret_const_0_0cebf0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_0cebf0\n.set _ret_const_0_0cebf0, _ret_const_0_0cebf0_def\n");
//@unit 8c0cebf8
#include "../decls.h"
undefined4 * FUN_8c0cebf8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint in_fr1;
  ulonglong uVar7;
  char cVar8;
  int in_stack_fffffff0;
  
  cVar8 = '\0';
  uVar5 = 0x14;
  pcVar3 = FUN_8c0ceed8;
  pcVar2 = FUN_8c0c524c;
  FUN_8c010120(ar4 + 1,FUN_8c0c524c,FUN_8c0ceed8,0x14,0x10);
  FUN_8c015224(ar4 + 0x56,pcVar2,pcVar3,uVar5);
  FUN_8c0162f8(ar4 + 0x58,pcVar2,pcVar3,uVar5);
  uVar5 = 0x18;
  pcVar3 = FUN_8c0cee98;
  pcVar2 = FUN_8c0c526c;
  FUN_8c010120(ar4 + 0x5d,FUN_8c0c526c,FUN_8c0cee98,0x18,0x19);
  FUN_8c0162f8(ar4 + 0xf3,pcVar2,pcVar3,uVar5);
  FUN_8c0cf144(ar4,pcVar2,pcVar3,uVar5);
  if (cVar8 == '\0') {
    ar4[0x12a] = 0;
    ar4[299] = 0x437f0000;
  }
  else {
    *(ulonglong *)(ar4 + 0x12a) = (ulonglong)in_fr1;
    in_fr1 = 0x437f0000;
    *(undefined8 *)(ar4 + 299) = 0x4b0437f0000;
  }
  if (cVar8 == '\0') {
    ar4[300] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 300) = (ulonglong)in_fr1;
  }
  if (cVar8 == '\0') {
    ar4[0x12d] = 0;
    ar4[0x12e] = 0x437f0000;
  }
  else {
    *(ulonglong *)(ar4 + 0x12d) = (ulonglong)in_fr1;
    in_fr1 = 0x437f0000;
    *(undefined8 *)(ar4 + 0x12e) = 0x4b0437f0000;
  }
  if (cVar8 == '\0') {
    ar4[0x12f] = 0;
    ar4[0x130] = 0x437f0000;
    ar4[0x131] = 0x437f0000;
  }
  else {
    *(ulonglong *)(ar4 + 0x12f) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0x130) = 0x4b0437f0000;
    in_fr1 = 0x437f0000;
    *(undefined8 *)(ar4 + 0x131) = 0x4b0437f0000;
  }
  iVar1 = 0;
  while (iVar6 = iVar1, iVar6 < 4) {
    ar4[iVar6 + 0x132] = 0xffffff;
    in_stack_fffffff0 = iVar6;
    iVar1 = iVar6 + 1;
  }
  *(undefined2 *)(ar4 + 0x136) = 0;
  *(undefined2 *)((int)ar4 + 0x4da) = 0xff;
  *(undefined2 *)(ar4 + 0x137) = 0;
  *(undefined2 *)((int)ar4 + 0x4de) = 0;
  *(undefined2 *)(ar4 + 0x138) = 0xff;
  *(undefined2 *)((int)ar4 + 0x4e2) = 0;
  *(undefined2 *)(ar4 + 0x139) = 0xff;
  *(undefined2 *)((int)ar4 + 0x4e6) = 0xff;
  uVar5 = 4;
  puVar4 = ar4 + 0x132;
  FUN_8c016318(ar4 + 0x58,ar4 + 0x12a,puVar4,4,in_stack_fffffff0);
  FUN_8c016324(ar4 + 0x58,ar4 + 0x136,puVar4,uVar5);
  FUN_8c015198(ar4 + 0x58,0x80000060,puVar4,uVar5,in_stack_fffffff0);
  if (cVar8 == '\0') {
    ar4[0x13a] = 0;
    ar4[0x13b] = 0x42480000;
  }
  else {
    *(ulonglong *)(ar4 + 0x13a) = (ulonglong)in_fr1;
    in_fr1 = 0x42480000;
    *(undefined8 *)(ar4 + 0x13b) = 0x4f042480000;
  }
  if (cVar8 == '\0') {
    ar4[0x13c] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x13c) = (ulonglong)in_fr1;
  }
  if (cVar8 == '\0') {
    ar4[0x13d] = 0;
    uVar7 = CONCAT44(0x42480000,in_fr1);
    ar4[0x13e] = 0x42480000;
  }
  else {
    *(ulonglong *)(ar4 + 0x13d) = (ulonglong)in_fr1;
    uVar7 = 0x4f042480000;
    *(undefined8 *)(ar4 + 0x13e) = 0x4f042480000;
  }
  if (cVar8 == '\0') {
    ar4[0x13f] = 0;
    ar4[0x140] = 0x42480000;
    ar4[0x141] = 0x42480000;
  }
  else {
    *(ulonglong *)(ar4 + 0x13f) = uVar7 & 0xffffffff;
    *(undefined8 *)(ar4 + 0x140) = 0x4f042480000;
    *(undefined8 *)(ar4 + 0x141) = 0x4f042480000;
  }
  uVar5 = 4;
  puVar4 = ar4 + 0x132;
  FUN_8c016318(ar4 + 0xf3,ar4 + 0x13a,puVar4,4,in_stack_fffffff0);
  FUN_8c016324(ar4 + 0xf3,ar4 + 0x142,puVar4,uVar5);
  FUN_8c015198(ar4 + 0xf3,0x80000060,puVar4,uVar5,in_stack_fffffff0);
  *ar4 = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0cebf8\n.set _FUN_8c0cebf8, _FUN_8c0cebf8_def\n");
//@unit 8c0cee98
#include "../decls.h"
int FUN_8c0cee98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0cee98\n.set _FUN_8c0cee98, _FUN_8c0cee98_def\n");
//@unit 8c0ceed8
#include "../decls.h"
int FUN_8c0ceed8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0ceed8\n.set _FUN_8c0ceed8, _FUN_8c0ceed8_def\n");
//@unit 8c0cef18
#include "../decls.h"
int s_GRAPHICS_MESSAGE_0cef1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a7;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 0x10; iVar2 = iVar2 + 1) {
    *(undefined4 *)(0x3ec + iVar2 * 0xc + ar4) = 0;
  }
  a7 = 0x10;
  uVar1 = 0x8c4312a8;
  FUN_8c239170(ar4 + 0x3e0,ar4 + 0x3e8,0x8c4312a8,0x10);
  iVar2 = ar4 + 0x3e0;
  (**(code **)(*(int *)(ar4 + 0x158) + 8))((int *)(ar4 + 0x158),iVar2,uVar1,a7);
  uVar1 = get_field_4_0253e4(ar4 + 0x158,iVar2,uVar1,a7);
  iVar2 = (*(code *)(&FUN_8c02100c))
                    (ar5,(&DATA_8c13d004) + 0x261,
                     (&DATA_8c13d004) + 0x19,uVar1);
  if (iVar2 == -1) {
    iVar2 = (*(code *)(&report_error_message))
                      ((&DATA_8c13d004) + 0x26c,
                       (&DATA_8c13d004) + 0x287,0,2);
  }
  return iVar2;
}

__asm__(".globl _s_GRAPHICS_MESSAGE_0cef1c\n.set _s_GRAPHICS_MESSAGE_0cef1c, _s_GRAPHICS_MESSAGE_0cef1c_def\n");
//@unit 8c0ceff8
#include "../decls.h"
int FUN_8c0ceff8_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar5_00;
  int iVar2;
  
  if (*ar4 == 1) {
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(0x14c + (int)ar4);
    if (iVar1 == 0) {
      if (ar5 == 1) {
        *(short *)(0x144 + (int)ar4) = *(short *)(0x144 + (int)ar4) + 1;
      }
      if (ar5 == 0) {
        iVar1 = FUN_8c0cf144(ar4,0,ar6,ar7);
      }
      else {
        iVar1 = 0x96;
        if (0x96 < *(short *)(0x144 + (int)ar4)) {
          *(undefined2 *)(0x146 + (int)ar4) = 0;
          *(undefined2 *)(0x144 + (int)ar4) = 0;
          *(undefined2 *)(0x148 + (int)ar4) = 0;
          *(undefined4 *)(0x150 + (int)ar4) = 0;
          iVar1 = 0x14c;
          *(undefined4 *)(0x14c + (int)ar4) = 1;
        }
      }
    }
    else {
      if (iVar1 == 1) {
        iVar1 = (*(code *)(&FUN_8c0cf1e4))
                          (ar4,ar4 + *(short *)(0x148 + (int)ar4) * 5 + 1,
                           (int)*(short *)(0x148 + (int)ar4),ar7);
        if (iVar1 == 5) {
          *(short *)(0x148 + (int)ar4) = *(short *)(0x148 + (int)ar4) + 1;
          iVar2 = 0x14c;
          iVar1 = (int)*(short *)(0x148 + (int)ar4);
          if (*(short *)(0x148 + (int)ar4) == 0x10) {
            *(undefined4 *)(0x14c + (int)ar4) = 2;
            iVar1 = iVar2;
          }
        }
        if (ar5 != 0) {
          return iVar1;
        }
        *(undefined4 *)(0x14c + (int)ar4) = 3;
      }
      else {
        if (iVar1 == 2) {
          FUN_8c0cf144(ar4,ar5,ar6,ar7);
          *ar4 = 1;
          return 1;
        }
        if (iVar1 != 3) {
          return iVar1;
        }
      }
      iVar2 = (int)*(short *)(0x148 + (int)ar4);
      ar5_00 = ar4 + *(short *)(0x148 + (int)ar4) * 5 + 1;
      iVar1 = FUN_8c0cf39c(ar4,ar5_00,iVar2,ar7);
      if (iVar1 == 2) {
        iVar1 = FUN_8c0cf144(ar4,ar5_00,iVar2,ar7);
      }
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0ceff8\n.set _FUN_8c0ceff8, _FUN_8c0ceff8_def\n");
//@unit 8c0cf144
#include "../decls.h"
undefined4 FUN_8c0cf144_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined2 *)(0x144 + ar4) = 0;
  *(undefined2 *)(0x146 + ar4) = 0;
  *(undefined2 *)(0x148 + ar4) = 0;
  *(undefined4 *)(0x14c + ar4) = 0;
  *(undefined4 *)(0x150 + ar4) = 0;
  *(undefined4 *)(0x154 + ar4) = 0;
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    *(undefined4 *)(0x4c8 + ar4 + iVar1 * 4) = 0xffffff;
  }
  return 4;
}

__asm__(".globl _FUN_8c0cf144\n.set _FUN_8c0cf144, _FUN_8c0cf144_def\n");
//@unit 8c0cf1bc
#include "../decls.h"
undefined4 FUN_8c0cf1bc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  s_Failed_s_015312((int)ar4 + 0x158,ar5,ar6,ar7);
  *ar4 = 0;
  return 0;
}

__asm__(".globl _FUN_8c0cf1bc\n.set _FUN_8c0cf1bc, _FUN_8c0cf1bc_def\n");
//@unit 8c0cf1e4
#include "../decls.h"
undefined4 FUN_8c0cf1e4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(ar4 + 0x150);
  if ((iVar2 < 5) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        *(undefined4 *)(ar4 + iVar2 * 4 + 0x4c8) = 0xffffff;
      }
      *(undefined2 *)(ar4 + 0x146) = 0;
      *(undefined4 *)(ar4 + 0x150) = 1;
      break;
    case 1:
      if (*(uint *)(ar4 + 0x4c8) < 0xfaffffff) {
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
          iVar1 = ar4 + iVar2 * 4;
          *(int *)(iVar1 + 0x4c8) = *(int *)(iVar1 + 0x4c8) + 0x5000000;
        }
      }
      else {
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
          *(undefined4 *)(ar4 + iVar2 * 4 + 0x4c8) = 0xffffffff;
        }
        *(undefined4 *)(ar4 + 0x150) = 2;
      }
      break;
    case 2:
      *(short *)(ar4 + 0x146) = *(short *)(ar4 + 0x146) + 1;
      if (*(short *)(ar5 + 0x10) <= *(short *)(ar4 + 0x146)) {
        *(undefined2 *)(ar4 + 0x146) = 0;
        *(undefined4 *)(ar4 + 0x150) = 3;
      }
      break;
    case 3:
      if (*(uint *)(ar4 + 0x4c8) < 0x6000000) {
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
          *(undefined4 *)(ar4 + iVar2 * 4 + 0x4c8) = 0xffffff;
        }
        *(undefined2 *)(ar4 + 0x146) = 0;
        *(undefined4 *)(ar4 + 0x150) = 4;
      }
      else {
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
          iVar1 = ar4 + iVar2 * 4;
          *(int *)(iVar1 + 0x4c8) = *(int *)(iVar1 + 0x4c8) + -0x5000000;
        }
      }
      break;
    case 4:
      *(short *)(ar4 + 0x146) = *(short *)(ar4 + 0x146) + 1;
      if (0x59 < *(short *)(ar4 + 0x146)) {
        *(undefined2 *)(ar4 + 0x146) = 0;
        *(undefined4 *)(ar4 + 0x150) = 0;
        return 5;
      }
    }
  }
  return *(undefined4 *)(ar4 + 0x150);
}

__asm__(".globl _FUN_8c0cf1e4\n.set _FUN_8c0cf1e4, _FUN_8c0cf1e4_def\n");
//@unit 8c0cf39c
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
//@unit 8c0cf620
#include "../decls.h"
undefined4 get_field_14_0cf620_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x14);
}

__asm__(".globl _get_field_14_0cf620\n.set _get_field_14_0cf620, _get_field_14_0cf620_def\n");
//@unit 8c0cf628
#include "../decls.h"
undefined4 FUN_8c0cf628_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x14) = 1;
  return 1;
}

__asm__(".globl _FUN_8c0cf628\n.set _FUN_8c0cf628, _FUN_8c0cf628_def\n");
//@unit 8c0cf630
#include "../decls.h"
undefined4
FUN_8c0cf630_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  return ain0;
}

__asm__(".globl _FUN_8c0cf630\n.set _FUN_8c0cf630, _FUN_8c0cf630_def\n");
//@unit 8c0cf63c
#include "../decls.h"
int FUN_8c0cf63c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 1;
  if (*ar4 != 1) {
    if (*(int *)(0x14c + (int)ar4) == 1) {
      iVar1 = (*(code *)(&FUN_8c0cf6bc))
                        (ar4,ar4 + *(short *)(0x148 + (int)ar4) * 5 + 1,
                         (int)*(short *)(0x148 + (int)ar4),ar7);
    }
    else {
      iVar1 = *(int *)(0x14c + (int)ar4);
      if (iVar1 == 3) {
        iVar1 = (*(code *)(&FUN_8c0cf7a4))
                          (ar4,ar4 + *(short *)(0x148 + (int)ar4) * 5 + 1,
                           (int)*(short *)(0x148 + (int)ar4),ar7);
      }
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0cf63c\n.set _FUN_8c0cf63c, _FUN_8c0cf63c_def\n");
//@unit 8c0cf6bc
#include "../decls.h"
undefined4 FUN_8c0cf6bc_def(int ar4,ulonglong *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  ulonglong in_dr0;
  char cVar4;
  
  cVar4 = '\0';
  if (DAT_8c437434 == '\0') {
    in_dr0 = CONCAT44(0x43c00000,(int)in_dr0);
    _DAT_8c437430 = 0x43c00000;
    DAT_8c437434 = '\x01';
  }
  if (DAT_8c43743c == '\0') {
    in_dr0 = CONCAT44(0x438c0000,(int)in_dr0);
    _DAT_8c437438 = 0x438c0000;
    DAT_8c43743c = '\x01';
  }
  uVar2 = 2;
  sVar3 = (short)ar6;
  iVar1 = libgcc_divide_helper_01031c((int)sVar3,2,ar6,ar7);
  if (iVar1 == 0) {
    if (cVar4 == '\0') {
      *(undefined4 *)ar5 = 0x43c00000;
      *(undefined4 *)((int)ar5 + 4) = 0x438c0000;
    }
    else {
      *ar5 = 0x8c43743c43c00000;
      *(undefined8 *)((int)ar5 + 4) = 0x8c01031c438c0000;
    }
  }
  else if (cVar4 == '\0') {
    *(undefined4 *)ar5 = 0;
    *(undefined4 *)((int)ar5 + 4) = 0x438c0000;
  }
  else {
    *ar5 = in_dr0 & 0xffffffff;
    *(undefined8 *)((int)ar5 + 4) = 0x8c01031c438c0000;
  }
  FUN_8c01538c(ar4 + 0x158,uVar2,ar6,ar7);
  iVar1 = (int)sVar3;
  FUN_8c014a94(ar4 + 0x158,iVar1,ar6,ar7);
  uVar2 = FUN_8c01636c(ar4 + 0x160,iVar1,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0cf6bc\n.set _FUN_8c0cf6bc, _FUN_8c0cf6bc_def\n");
//@unit 8c0cf7a4
#include "../decls.h"
undefined4 FUN_8c0cf7a4_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  short sVar1;
  short sVar2;
  undefined8 *puVar3;
  double *pdVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  double in_dr0;
  double dVar11;
  undefined8 in_xd0;
  char cVar12;
  char cVar13;
  int in_stack_ffffff88;
  float fStack_38;
  undefined8 auStack_34 [4];
  
  cVar13 = '\0';
  cVar12 = '\0';
  iVar8 = ar6;
  for (iVar6 = 0; iVar6 < 5; iVar6 = iVar6 + 1) {
    for (iVar7 = 0; iVar7 < 5; iVar7 = iVar7 + 1) {
      FUN_8c01538c(ar4 + 0x158,ar5,iVar8,ar7);
      FUN_8c014a94(ar4 + 0x158,(int)(short)ar6,iVar8,ar7);
      sVar1 = (short)iVar7;
      *(short *)(ar4 + 0x508) = sVar1 * 0x32;
      sVar2 = (short)iVar6;
      *(short *)(ar4 + 0x50a) = sVar2 * 0x32 + 0x32;
      *(short *)(ar4 + 0x50c) = sVar1 * 0x32;
      *(short *)(ar4 + 0x50e) = sVar2 * 0x32;
      *(short *)(ar4 + 0x510) = sVar1 * 0x32 + 0x32;
      *(short *)(ar4 + 0x512) = sVar2 * 0x32;
      *(short *)(ar4 + 0x514) = sVar1 * 0x32 + 0x32;
      *(short *)(ar4 + 0x516) = sVar2 * 0x32 + 0x32;
      for (iVar8 = 0; uVar9 = SUB84(in_dr0,0), iVar8 < 4; iVar8 = iVar8 + 1) {
        puVar3 = (undefined8 *)(iVar6 * 0x78 + ar4 + iVar7 * 0x18 + 0x174);
        if (cVar13 == '\0') {
          uVar9 = *(undefined4 *)puVar3;
        }
        else {
          in_xd0 = *puVar3;
        }
        pdVar4 = (double *)(ar4 + iVar8 * 8 + 0x4e8);
        if (cVar13 == '\0') {
          dVar11 = (double)CONCAT44(*(undefined4 *)pdVar4,uVar9);
        }
        else {
          dVar11 = *pdVar4;
        }
        if (cVar12 == '\0') {
          fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
        }
        else {
          fVar10 = SUB84(dVar11 + dVar11,0);
        }
        if (cVar13 == '\0') {
          (&fStack_38)[iVar8 * 2] = fVar10;
        }
        else {
          *(undefined8 *)(&fStack_38 + iVar8 * 2) = in_xd0;
        }
        pfVar5 = (float *)(iVar6 * 0x78 + ar4 + iVar7 * 0x18 + 0x178);
        if (cVar13 == '\0') {
          fVar10 = *pfVar5;
        }
        else {
          in_xd0 = *(undefined8 *)pfVar5;
        }
        pdVar4 = (double *)(ar4 + iVar8 * 8 + 0x4ec);
        if (cVar13 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar10);
        }
        else {
          in_dr0 = *pdVar4;
        }
        if (cVar12 == '\0') {
          in_dr0 = (double)(ulonglong)(uint)(SUB84(in_dr0,0) + (float)((ulonglong)in_dr0 >> 0x20));
        }
        else {
          in_dr0 = in_dr0 + in_dr0;
        }
        if (cVar13 == '\0') {
          *(int *)(auStack_34 + iVar8) = SUB84(in_dr0,0);
        }
        else {
          auStack_34[iVar8] = in_xd0;
        }
        in_stack_ffffff88 = iVar7;
      }
      ar7 = 4;
      iVar8 = ar4 + 0x4c8;
      FUN_8c016318(ar4 + 0x3cc,&fStack_38,iVar8,4,in_stack_ffffff88);
      ar5 = ar4 + 0x508;
      FUN_8c016324(ar4 + 0x3cc,ar5,iVar8,ar7);
      FUN_8c016340(ar4 + 0x3cc,ar5,iVar8,ar7);
    }
  }
  return 5;
}

__asm__(".globl _FUN_8c0cf7a4\n.set _FUN_8c0cf7a4, _FUN_8c0cf7a4_def\n");
//@unit 8c0cf9b4
#include "../decls.h"
int FUN_8c0cf9b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  short *ar4_00;
  code *ar5_00;
  code *ar6_00;
  undefined4 ar7_00;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  code *pcVar7;
  double dVar6;
  undefined4 uVar8;
  undefined8 in_dr2;
  double dVar9;
  char cVar10;
  char cVar11;
  undefined4 in_stack_ffffff3c;
  short asStack_7c [52];
  
  cVar11 = '\0';
  cVar10 = '\0';
  ar7_00 = 4;
  ar6_00 = free_if_nonnull_wrap_016660;
  ar5_00 = FUN_8c016690;
  ar4_00 = asStack_7c;
  FUN_8c010120(ar4_00,FUN_8c016690,free_if_nonnull_wrap_016660,4,0x19);
  iVar2 = 0;
  for (iVar3 = 0; uVar8 = (undefined4)in_dr2, iVar3 < 5; iVar3 = iVar3 + 1) {
    for (iVar4 = 0; iVar4 < 5; iVar4 = iVar4 + 1) {
      ar4_00 = (short *)(iVar3 * 0x78 + ar4 + iVar4 * 0x18 + 0x174);
      iVar1 = get_field_14_0cf620(ar4_00,ar5_00,ar6_00,ar7_00);
      if (iVar1 != 1) {
        if (cVar11 == '\0') {
          fVar5 = *(float *)(iVar3 * 0x78 + ar4 + iVar4 * 0x18 + 0x178);
          pcVar7 = (code *)0x44278000;
        }
        else {
          fVar5 = 670.0;
          pcVar7 = vec_delete_array;
        }
        if (fVar5 != (float)(uint)pcVar7) {
          asStack_7c[iVar2 * 2] = (short)iVar4;
          asStack_7c[iVar2 * 2 + 1] = (short)iVar3;
          iVar2 = iVar2 + 1;
        }
      }
    }
  }
  if (iVar2 == 0) {
    vec_delete_array(asStack_7c,free_if_nonnull_wrap_016660,4,0x19,in_stack_ffffff3c);
    iVar2 = 0;
  }
  else if (iVar2 == 1) {
    iVar2 = asStack_7c[1] * 0x78 + ar4 + asStack_7c[0] * 0x18 + 0x174;
    vec_delete_array(asStack_7c,free_if_nonnull_wrap_016660,4,0x19,in_stack_ffffff3c);
  }
  else {
    iVar3 = rand(ar4_00,ar5_00,ar6_00,ar7_00);
    if (cVar10 == '\0') {
      dVar9 = (double)CONCAT44((float)iVar2,uVar8);
    }
    else {
      dVar9 = (double)iVar2;
    }
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(0x47000000,(float)iVar3);
    }
    else {
      dVar6 = 3.428006581677106e-307;
    }
    if (cVar10 == '\0') {
      iVar3 = (int)((float)((ulonglong)dVar9 >> 0x20) *
                   (SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20)));
    }
    else {
      iVar3 = (int)(dVar9 * (dVar6 / dVar6));
    }
    if (iVar2 == iVar3) {
      iVar3 = iVar2 + -1;
    }
    iVar2 = asStack_7c[iVar3 * 2 + 1] * 0x78 + ar4 + asStack_7c[iVar3 * 2] * 0x18 + 0x174;
    vec_delete_array(asStack_7c,free_if_nonnull_wrap_016660,4,0x19,iVar3);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0cf9b4\n.set _FUN_8c0cf9b4, _FUN_8c0cf9b4_def\n");
//@unit 8c0cfbc0
#include "../decls.h"
undefined4 get_field_2d15c_0cfbc0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x2d15c + ar4);
}

__asm__(".globl _get_field_2d15c_0cfbc0\n.set _get_field_2d15c_0cfbc0, _get_field_2d15c_0cfbc0_def\n");
//@unit 8c0cfbcc
#include "../decls.h"
undefined4 FUN_8c0cfbcc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c1263e8,ar5,ar6,ar7);
  uVar3 = 0x8c4368d0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c4368d0,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1263f8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c4368dc;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c4368dc,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126408,pcVar2,uVar3,ar7);
  uVar3 = 0x8c4368e8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c4368e8,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126418,pcVar2,uVar3,ar7);
  uVar3 = 0x8c4368f4;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c4368f4,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126428 = CONCAT44(_UNK_8c12642c,0x800000);
                    
  }
  else {
    _DAT_8c126428 = 0xffffffff00800000;
  }
  uVar1 = FUN_8c015ab8(0x8c43690c,pcVar2,uVar3,ar7);
  uVar3 = 0x8c436900;
  pcVar2 = free_if_nonnull_wrap_016bfc;
  global_list_push(uVar1,free_if_nonnull_wrap_016bfc,0x8c436900,ar7);
  uVar1 = FUN_8c015224(0x8c43691c,pcVar2,uVar3,ar7);
  uVar3 = 0x8c436910;
  pcVar2 = free_if_nonnull_wrap_0153e4;
  global_list_push(uVar1,free_if_nonnull_wrap_0153e4,0x8c436910,ar7);
  uVar1 = FUN_8c0162f8(0x8c436938,pcVar2,uVar3,ar7);
  uVar3 = 0x8c43692c;
  pcVar2 = free_if_nonnull_wrap_0151a0;
  global_list_push(uVar1,free_if_nonnull_wrap_0151a0,0x8c43692c,ar7);
  uVar1 = FUN_8c0162f8(0x8c436958,pcVar2,uVar3,ar7);
  uVar3 = 0x8c43694c;
  pcVar2 = free_if_nonnull_wrap_0151a0;
  global_list_push(uVar1,free_if_nonnull_wrap_0151a0,0x8c43694c,ar7);
  uVar1 = FUN_8c0162f8(0x8c436978,pcVar2,uVar3,ar7);
  uVar3 = 0x8c43696c;
  pcVar2 = free_if_nonnull_wrap_0151a0;
  global_list_push(uVar1,free_if_nonnull_wrap_0151a0,0x8c43696c,ar7);
  uVar1 = FUN_8c0cebf8(&DAT_8c436a28,pcVar2,uVar3,ar7);
  uVar3 = 0x8c436a1c;
  pcVar2 = FUN_8c0cfed8;
  global_list_push(uVar1,FUN_8c0cfed8,0x8c436a1c,ar7);
  uVar1 = FUN_8c0199d4(0x8c436f4c,pcVar2,uVar3,ar7);
  uVar3 = 0x8c436f40;
  pcVar2 = Class_129a24_m0_019aa0;
  global_list_push(uVar1,Class_129a24_m0_019aa0,0x8c436f40,ar7);
  uVar1 = FUN_8c0c5208(0x8c437028,pcVar2,uVar3,ar7);
  uVar3 = 0x8c43701c;
  pcVar2 = FUN_8c0cfe78;
  global_list_push(uVar1,FUN_8c0cfe78,0x8c43701c,ar7);
  uVar1 = FUN_8c017830(0x8c43706c,pcVar2,uVar3,ar7);
  uVar3 = 0x8c437060;
  pcVar2 = free_if_nonnull_wrap_0cfe48;
  global_list_push(uVar1,free_if_nonnull_wrap_0cfe48,0x8c437060,ar7);
  uVar1 = FUN_8c015ab8(0x8c4370fc,pcVar2,uVar3,ar7);
  uVar3 = 0x8c4370f0;
  pcVar2 = free_if_nonnull_wrap_016bfc;
  global_list_push(uVar1,free_if_nonnull_wrap_016bfc,0x8c4370f0,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c43710c,pcVar2,uVar3,ar7);
  uVar1 = global_list_push(uVar1,Vec3_dtor,0x8c437100,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0cfbcc\n.set _FUN_8c0cfbcc, _FUN_8c0cfbcc_def\n");
//@unit 8c0cfe48
#include "../decls.h"
int free_if_nonnull_wrap_0cfe48_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0cfe48\n.set _free_if_nonnull_wrap_0cfe48, _free_if_nonnull_wrap_0cfe48_def\n");
//@unit 8c0cfe78
#include "../decls.h"
int FUN_8c0cfe78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    object_dtor_delete(ar4 + 0xc,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016bfc(ar4 + 8,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_0153e4(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0cfe78\n.set _FUN_8c0cfe78, _FUN_8c0cfe78_def\n");
//@unit 8c0cfed8
#include "../decls.h"
int FUN_8c0cfed8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *ar5_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_0151a0(ar4 + 0x3cc,0xffffffff,ar6,ar7);
    uVar2 = 0x19;
    uVar1 = 0x18;
    vec_delete_array(ar4 + 0x174,FUN_8c0cee98,0x18,0x19,ain0);
    free_if_nonnull_wrap_0151a0(ar4 + 0x160,0xffffffff,uVar1,uVar2);
    free_if_nonnull_wrap_0153e4(ar4 + 0x158,0xffffffff,uVar1,uVar2);
    uVar2 = 0x10;
    uVar1 = 0x14;
    ar5_00 = FUN_8c0ceed8;
    vec_delete_array(ar4 + 4,FUN_8c0ceed8,0x14,0x10,ain0);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,uVar1,uVar2,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0cfed8\n.set _FUN_8c0cfed8, _FUN_8c0cfed8_def\n");
//@unit 8c0cff78
#include "../decls.h"
int FUN_8c0cff78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c015224(ar4,ar5,ar6,ar7);
  FUN_8c015ab8(ar4 + 8,ar5,ar6,ar7);
  FUN_8c02145c(ar4 + 0x30,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x20) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x24) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x24) = (ulonglong)extraout_fr1;
  }
  FUN_8c0d0720(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0cff78\n.set _FUN_8c0cff78, _FUN_8c0cff78_def\n");
//@unit 8c0cffc8
#include "../decls.h"
int free_if_nonnull_wrap_0cffc8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0cffc8\n.set _free_if_nonnull_wrap_0cffc8, _free_if_nonnull_wrap_0cffc8_def\n");
//@unit 8c0cfff8
#include "../decls.h"
int s_GRAPHICS_ENV_0d0006_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar7_00;
  undefined4 ar5_00;
  char *ar6_00;
  undefined4 *ar7_01;
  uint uVar2;
  undefined4 in_stack_ffffffb8;
  undefined4 uStack_28;
  undefined4 auStack_24 [2];
  
  auStack_24[0] = 0;
  uStack_28 = 0;
  iVar1 = FUN_8c0209fc(ar5,s_suisou_Heater_nj_8c13d46c,s_GRAPHICS_ENV_8c13d47d,auStack_24);
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_Heater_nj_8c13d46c,s_Failed_NJCM_CHeater__CreateModel_8c13d48a,1,2);
  }
  ar7_01 = &uStack_28;
  ar6_00 = s_GRAPHICS_ENV_8c13d47d;
  iVar1 = FUN_8c020af4(ar5,s_suisou_Heater_nj_8c13d46c,s_GRAPHICS_ENV_8c13d47d,ar7_01);
  if (iVar1 == 0) {
    ar7_01 = (undefined4 *)0x2;
    ar6_00 = (char *)0x1;
    report_error_message
              (s_suisou_Heater_nj_8c13d46c,s_Failed_NJTL_CHeater__CreateModel_8c13d4ad,1,2);
  }
  FUN_8c015ad4(ar4 + 2,auStack_24[0],ar6_00,ar7_01,in_stack_ffffffb8);
  ar5_00 = uStack_28;
  (**(code **)(*ar4 + 8))(ar4,uStack_28,ar6_00,ar7_01);
  ar7_00 = (int *)get_field_4_0253e4(ar4,ar5_00,ar6_00,ar7_01);
  iVar1 = FUN_8c015bb8(ar4 + 2,ar5_00,ar6_00,ar7_01);
  iVar1 = thunk_FUN_8c0151e8(*(undefined4 *)(*(int *)(iVar1 + 4) + 4),0x17,ar6_00,ar7_01);
  ar4[8] = iVar1 + 4;
  for (uVar2 = 0; uVar2 < (uint)ar7_00[1]; uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0xc + *ar7_00;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x80000000;
  }
  iVar1 = FUN_8c020ef0(ar5,s_HEATER_8c13d4d0,s_GRAPHICS_ENV_8c13d47d,ar7_00);
  if (iVar1 == -1) {
    iVar1 = report_error_message(s_Failed_to_load_water_tank_textue_8c13d4d7,&DAT_8c13d4fb,1,2);
  }
  return iVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0d0006\n.set _s_GRAPHICS_ENV_0d0006, _s_GRAPHICS_ENV_0d0006_def\n");
