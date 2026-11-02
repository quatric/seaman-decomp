#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0e16a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint a7;
  code *pcVar6;
  int *piVar7;
  code *ar7_00;
  uint uVar8;
  undefined4 in_fr1;
  char cVar9;
  undefined4 in_stack_ffffff64;
  undefined4 uStack_3c;
  int aiStack_38 [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  cVar9 = '\0';
  uVar3 = ar5;
  Vec3_ctor_zero(&uStack_24,ar5,ar6,ar7);
  Vec3_set_zero(aiStack_38 + 2,uVar3,ar6,ar7);
  aiStack_38[1] = 0;
  aiStack_38[0] = 0;
  uStack_3c = 0;
  iVar1 = FUN_8c0209fc(ar5,s_suisou_nj_8c13fdbf,s_GRAPHICS_ENV_8c13f8cb,aiStack_38);
  if (iVar1 == 0) {
    report_error_message(s_suisou_nj_8c13fdbf,s_Failed_NJCM_CWaterTank__CreateSt_8c13fe45,0,2);
  }
  puVar4 = &uStack_3c;
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_suisou_nj_8c13fdbf,s_GRAPHICS_ENV_8c13f8cb,puVar4);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x2;
    pcVar2 = (char *)0x0;
    report_error_message(s_suisou_nj_8c13fdbf,s_Failed_NJTL_CWaterTank__CreateSt_8c13fe6b,0,2);
  }
  FUN_8c015ad4(ar4 + 0x30,aiStack_38[0],pcVar2,puVar4,in_stack_ffffff64);
  uVar5 = 5;
  uVar3 = 0x8c4312a8;
  FUN_8c239170(0x8c437554,0x8c43755c,0x8c4312a8,5);
  for (uVar8 = 0; uVar8 < 5; uVar8 = uVar8 + 1) {
    uVar5 = 0x8c43755c;
    *(uint *)(uVar8 * 0xc + -0x73bc8aa0) = *(uint *)(uVar8 * 0xc + -0x73bc8aa0) | 0x80000000;
  }
  ar5_00 = 0x8c437554;
  (**(code **)(*(int *)(ar4 + 0x28) + 8))((int *)(ar4 + 0x28),0x8c437554,uVar3,uVar5);
  uVar3 = get_field_4_0253e4(ar4 + 0x28,ar5_00,uVar3,uVar5);
  iVar1 = FUN_8c02100c(ar5,s_suisou_pvm_8c13fe91,s_GRAPHICS_ENV_8c13f8cb,uVar3);
  if (iVar1 == 0) {
    report_error_message
              (s_Failed_to_load_water_tank_textue_8c13fe9c,s_CWaterTank__CreateStage___8c13fec0,0,2)
    ;
  }
  iVar1 = FUN_8c0209fc(ar5,s_suisou_parts_S_GlassB_Up_nj_8c13fdc9,s_GRAPHICS_ENV_8c13f8cb,aiStack_38
                      );
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_parts_S_GlassB_Up_nj_8c13fdc9,s_Failed_NJCM_CWaterTank__CreateSt_8c13fe45,0,
               2);
  }
  puVar4 = &uStack_3c;
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_suisou_parts_S_GlassB_Up_nj_8c13fdc9,s_GRAPHICS_ENV_8c13f8cb,puVar4);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x2;
    pcVar2 = (char *)0x0;
    report_error_message
              (s_suisou_parts_S_GlassB_Up_nj_8c13fdc9,s_Failed_NJTL_CWaterTank__CreateSt_8c13fe6b,0,
               2);
  }
  FUN_8c015ad4(ar4 + 0x1074,aiStack_38[0],pcVar2,puVar4,in_stack_ffffff64);
  iVar1 = FUN_8c0209fc(ar5,s_suisou_parts_S_GlassB_Dn_nj_8c13fde5,s_GRAPHICS_ENV_8c13f8cb,aiStack_38
                      );
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_parts_S_GlassB_Dn_nj_8c13fde5,s_Failed_NJCM_CWaterTank__CreateSt_8c13fe45,0,
               2);
  }
  puVar4 = &uStack_3c;
  iVar1 = FUN_8c020af4(ar5,s_suisou_parts_S_GlassB_Dn_nj_8c13fde5,s_GRAPHICS_ENV_8c13f8cb,puVar4);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x2;
    report_error_message
              (s_suisou_parts_S_GlassB_Dn_nj_8c13fde5,s_Failed_NJTL_CWaterTank__CreateSt_8c13fe6b,0,
               2);
  }
  FUN_8c015ad4(ar4 + 0x1078,aiStack_38[0],0x1078,puVar4,in_stack_ffffff64);
  iVar1 = FUN_8c0209fc(ar5,s_suisou_parts_S_GlassS_Up_nj_8c13fe01,s_GRAPHICS_ENV_8c13f8cb,aiStack_38
                      );
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_parts_S_GlassS_Up_nj_8c13fe01,s_Failed_NJCM_CWaterTank__CreateSt_8c13fe45,0,
               2);
  }
  puVar4 = &uStack_3c;
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_suisou_parts_S_GlassS_Up_nj_8c13fe01,s_GRAPHICS_ENV_8c13f8cb,puVar4);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x2;
    pcVar2 = (char *)0x0;
    report_error_message
              (s_suisou_parts_S_GlassS_Up_nj_8c13fe01,s_Failed_NJTL_CWaterTank__CreateSt_8c13fe6b,0,
               2);
  }
  FUN_8c015ad4(ar4 + 0x107c,aiStack_38[0],pcVar2,puVar4,in_stack_ffffff64);
  a7 = 3;
  FUN_8c239170(ar4 + 0x1080,ar4 + 0x1088,0x8c4312a8,3);
  uVar8 = 0;
  while (uVar8 < 3) {
    *(uint *)(uVar8 * 0xc + ar4 + 0x108c) = *(uint *)(uVar8 * 0xc + ar4 + 0x108c) | 0x80000000;
    a7 = uVar8 + 1;
    uVar8 = a7;
  }
  iVar1 = ar4 + 0x1080;
  (**(code **)(*(int *)(ar4 + 0x106c) + 8))((int *)(ar4 + 0x106c),iVar1,3,a7);
  uVar3 = get_field_4_0253e4(ar4 + 0x106c,iVar1,get_field_4_0253e4,ar4 + 0x106c);
  iVar1 = FUN_8c02100c(ar5,s_SuisouParts_pvm_8c13feda,s_GRAPHICS_ENV_8c13f8cb,uVar3);
  if (iVar1 == 0) {
    report_error_message
              (s_Failed_to_load_water_tank_upper_t_8c13feea,s_CWaterTank__CreateStage___8c13fec0,0,2
              );
  }
  iVar1 = FUN_8c0209fc(ar5,s_suisou_TempMeter_nj_8c13fe1d,s_GRAPHICS_ENV_8c13f8cb,aiStack_38);
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_TempMeter_nj_8c13fe1d,s_Failed_NJCM_CWaterTank__CreateSt_8c13fe45,0,2);
  }
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_suisou_TempMeter_nj_8c13fe1d,s_GRAPHICS_ENV_8c13f8cb,&uStack_3c);
  if (iVar1 == 0) {
    pcVar2 = (char *)0x0;
    report_error_message
              (s_suisou_TempMeter_nj_8c13fe1d,s_Failed_NJTL_CWaterTank__CreateSt_8c13fe6b,0,2);
  }
  pcVar6 = FUN_8c015ad4;
  FUN_8c015ad4(ar4 + 0x226f8,aiStack_38[0],pcVar2,FUN_8c015ad4);
  uVar3 = uStack_3c;
  uVar5 = uStack_3c;
  (**(code **)(*(int *)(ar4 + 0x226fc) + 8))((int *)(ar4 + 0x226fc),uStack_3c,uStack_3c,pcVar6);
  uVar3 = get_field_4_0253e4(ar4 + 0x226fc,uVar3,uVar5,pcVar6);
  pcVar2 = s_THERMOMETER_8c13ff14;
  iVar1 = FUN_8c020ef0(ar5,s_THERMOMETER_8c13ff14,s_GRAPHICS_ENV_8c13f8cb,uVar3);
  if (iVar1 == 0) {
    uVar3 = 2;
    pcVar2 = s_CWaterTank__CreateStage___8c13fec0;
    report_error_message
              (s_Failed_to_load_thermometer_textu_8c13ff20,s_CWaterTank__CreateStage___8c13fec0,0,2)
    ;
  }
  uVar3 = get_field_4_0253e4(ar4 + 0x22d40,pcVar2,get_field_4_0253e4,uVar3);
  iVar1 = FUN_8c020ef0(ar5,s_WATER_ROCK_8c13ff45,s_GRAPHICS_ENV_8c13f8cb,uVar3);
  if (iVar1 == 0) {
    report_error_message
              (s_Failed_to_load_rock_textuer___8c13ff50,s_CWaterTank__CreateStage___8c13fec0,0,2);
  }
  piVar7 = aiStack_38;
  iVar1 = FUN_8c0209fc(ar5,s_suisou_Collision_nj_8c13fe31,s_GRAPHICS_ENV_8c13f8cb,piVar7);
  if (iVar1 == 0) {
    piVar7 = (int *)0x2;
    report_error_message
              (s_suisou_Collision_nj_8c13fe31,s_Failed_NJCM_CWaterTank__CreateSt_8c13fe45,0,2);
  }
  uVar3 = 0x2274c;
  FUN_8c0178b4(ar4 + 0x2274c,*(undefined4 *)(aiStack_38[0] + 4),0x2274c,piVar7);
  s_GRAPHICS_ENV_0d0006(ar4 + 0x13b24,ar5,uVar3,piVar7);
  pcVar6 = s_GRAPHICS_ENV_0d07f2;
  s_GRAPHICS_ENV_0d07f2(ar4 + 0x13b70,ar5,uVar3,s_GRAPHICS_ENV_0d07f2);
  uVar3 = 0x22704;
  s_GRAPHICS_ENV_0d93b0(ar4 + 0x22704,ar5,0x22704,pcVar6);
  s_GRAPHICS_COMMON_0dbb1a(ar4,ar5,uVar3,pcVar6);
  if (cVar9 == '\0') {
    uStack_20 = 0;
    uVar3 = in_fr1;
  }
  else {
    uStack_18 = 0x80;
    uVar3 = 0xc23c0000;
    uStack_20 = in_fr1;
  }
  uStack_1c = 0xbf800000;
  aiStack_38[2] = 0xc23c0000;
  if (cVar9 == '\0') {
    uStack_28 = 0;
    uStack_24 = uStack_20;
  }
  else {
    uStack_24 = 0;
    uStack_28 = uVar3;
  }
  aiStack_38[3] = uStack_28;
  FUN_8c0d167c(&uStack_24,ar4 + 0x227d0,aiStack_38 + 2,pcVar6);
  if (cVar9 != '\0') {
    uVar3 = 0x423c0000;
  }
  aiStack_38[2] = 0x423c0000;
  if (cVar9 == '\0') {
    uStack_28 = 0;
  }
  else {
    uStack_24 = 0;
    uStack_28 = uVar3;
  }
  puVar4 = &uStack_24;
  aiStack_38[3] = uStack_28;
  FUN_8c0d167c(puVar4,ar4 + 0x227e0,aiStack_38 + 2,puVar4);
  if (cVar9 == '\0') {
    uStack_20 = 0;
    uVar5 = uVar3;
  }
  else {
    uStack_18 = 0x80;
    uVar5 = 0xc23c0000;
    uStack_20 = uVar3;
  }
  uStack_1c = 0xbf800000;
  aiStack_38[2] = 0xc23c0000;
  if (cVar9 == '\0') {
    uStack_28 = 0;
    uStack_24 = uStack_20;
  }
  else {
    uStack_24 = 0;
    uStack_28 = uVar5;
  }
  aiStack_38[3] = uStack_28;
  FUN_8c0d167c(&uStack_24,ar4 + 0x227f0,aiStack_38 + 2,puVar4);
  uStack_28 = uVar5;
  if (cVar9 != '\0') {
    uStack_28 = 0x423c0000;
  }
  aiStack_38[2] = 0x423c0000;
  if (cVar9 == '\0') {
    uStack_28 = 0;
  }
  else {
    uStack_24 = 0;
  }
  ar7_00 = FUN_8c0d167c;
  aiStack_38[3] = uStack_28;
  FUN_8c0d167c(&uStack_24,ar4 + 0x22800,aiStack_38 + 2,FUN_8c0d167c);
  pcVar6 = (code *)0x0;
  while (pcVar6 < (code *)0x3) {
    FUN_8c0d70e4(ar4 + (int)pcVar6 * 0x16c + 0x22d48,(int)pcVar6 * 0x16c,3,ar7_00);
    ar7_00 = pcVar6 + 1;
    pcVar6 = ar7_00;
  }
  piVar7 = aiStack_38 + 2;
  object_dtor_delete(piVar7,0xffffffff,piVar7,ar7_00);
  uVar3 = Vec3_dtor(&uStack_24,0xffffffff,piVar7,ar7_00);
  return uVar3;
}

__asm__(".globl _s_GRAPHICS_ENV_0e16a0\n.set _s_GRAPHICS_ENV_0e16a0, _s_GRAPHICS_ENV_0e16a0_def\n");
