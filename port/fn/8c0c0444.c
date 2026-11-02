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
