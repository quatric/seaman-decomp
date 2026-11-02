#include "../decls.h"
undefined4 s_GRAPHICS_COMMON_0d33f4_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  char *ar5_00;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *ar6_00;
  undefined4 *puVar6;
  undefined4 uVar7;
  float fVar8;
  double dVar9;
  double in_dr2;
  undefined8 in_xd0;
  char cVar10;
  char cVar11;
  undefined4 in_stack_ffffffa8;
  undefined4 uStack_24;
  undefined4 auStack_20 [2];
  
  cVar11 = '\0';
  cVar10 = '\0';
  auStack_20[0] = 0;
  uStack_24 = 0;
  *(undefined4 *)ar4 = 0x44610000;
  iVar1 = FUN_8c0209fc(ar5,s_suisou_WaterFace_nj_8c13f91e,s_GRAPHICS_ENV_8c13f8cb,auStack_20);
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_WaterFace_nj_8c13f91e,s_Failed_NJCM_WATER_ELEMENT__Creat_8c13f932,0,2);
  }
  puVar6 = &uStack_24;
  pcVar4 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_suisou_WaterFace_nj_8c13f91e,s_GRAPHICS_ENV_8c13f8cb,puVar6);
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)0x2;
    pcVar4 = (char *)0x0;
    report_error_message
              (s_suisou_WaterFace_nj_8c13f91e,s_Failed_NJTL_WATER_ELEMENT__Creat_8c13f95c,0,2);
  }
  FUN_8c015ad4(ar4 + 2,auStack_20[0],pcVar4,puVar6,in_stack_ffffffa8);
  iVar1 = FUN_8c0209fc(ar5,s_suisou_Effect_nj_8c13f986,s_GRAPHICS_ENV_8c13f8cb,auStack_20);
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_Effect_nj_8c13f986,s_Failed_NJCM_WATER_ELEMENT__Creat_8c13f932,0,2);
  }
  puVar6 = &uStack_24;
  pcVar4 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_suisou_Effect_nj_8c13f986,s_GRAPHICS_ENV_8c13f8cb,puVar6);
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)0x2;
    pcVar4 = (char *)0x0;
    report_error_message
              (s_suisou_Effect_nj_8c13f986,s_Failed_NJTL_WATER_ELEMENT__Creat_8c13f95c,0,2);
  }
  uVar2 = auStack_20[0];
  FUN_8c015ad4((undefined4 *)((int)ar4 + 0x1c),auStack_20[0],pcVar4,puVar6,in_stack_ffffffa8);
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined4 *)((int)ar4 + iVar1 * 0xc + 0x12a70) = 0;
  }
  uVar2 = get_field_4_0253e4((undefined4 *)((int)ar4 + 0x12a5c),uVar2,pcVar4,puVar6);
  uVar7 = 1;
  uVar5 = 0x8c4312a8;
  puVar6 = (undefined4 *)((int)ar4 + 0x12a6c);
  FUN_8c239170(uVar2,puVar6,0x8c4312a8,1);
  uVar2 = get_field_4_0253e4((undefined4 *)((int)ar4 + 0x12a5c),puVar6,uVar5,uVar7);
  ar6_00 = s_GRAPHICS_ENV_8c13f8cb;
  pcVar4 = s_WBubble_pvm_8c13f997;
  iVar1 = FUN_8c02100c(ar5,s_WBubble_pvm_8c13f997,s_GRAPHICS_ENV_8c13f8cb,uVar2);
  if (iVar1 == 0) {
    uVar2 = 2;
    ar6_00 = (char *)0x0;
    pcVar4 = s_WE__CreateStage0___8c13f9c3;
    report_error_message
              (s_Failed_to_load_new_bubble_tex___8c13f9a3,s_WE__CreateStage0___8c13f9c3,0,2);
  }
  iVar1 = 0;
  do {
    uVar5 = SUB84(in_dr2,0);
    if (0x59 < iVar1) {
LAB_8c0d3658:
      for (iVar1 = 0; iVar1 < 0x226; iVar1 = iVar1 + 1) {
        FUN_8c0d2690((int)ar4 + iVar1 * 0x88 + 0x62c,pcVar4,ar6_00,uVar2);
      }
      for (iVar1 = 0; iVar1 < 0x3c; iVar1 = iVar1 + 1) {
        uVar7 = 1;
        uVar5 = ar6;
        FUN_8c0d59a4(ar4,1,ar6,uVar2);
        FUN_8c0d5ca8(ar4,uVar7,uVar5,uVar2);
      }
      s_GRAPHICS_ENV_0d39ea(ar4,ar5,s_wave_pvm_8c13fa03,uVar2);
      return 1;
    }
    uVar7 = 0x8c3e7d30;
    ar5_00 = (char *)FUN_8c0febf0(0x8c3e7d30,pcVar4,ar6_00,uVar2);
    if (ar5_00 == (char *)0x0) {
      uVar2 = 2;
      ar6_00 = (char *)0x1;
      pcVar4 = s_WATER_ELEMETNT__CreateStage0___8c13f9e4;
      report_error_message(s_Lack_of_mem___8c13f9d6,s_WATER_ELEMETNT__CreateStage0___8c13f9e4,1,2);
      goto LAB_8c0d3658;
    }
    iVar3 = rand(uVar7,pcVar4,ar6_00,uVar2);
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 7.971355902106255e+24;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x451a6000,fVar8);
    }
    else {
      dVar9 = 1.2986509772968826e+23;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *(float *)(ar5_00 + 8) = fVar8;
    }
    else {
      *(undefined8 *)(ar5_00 + 8) = in_xd0;
    }
    iVar3 = rand(uVar7,pcVar4,ar6_00,uVar2);
    if (cVar11 == '\0') {
      in_dr2 = (double)CONCAT44(*(undefined4 *)ar4,uVar5);
    }
    else {
      in_dr2 = *ar4;
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 7.971355902106255e+24;
    }
    if (cVar10 == '\0') {
      in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) *
                                (SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20)),SUB84(in_dr2,0)
                               );
    }
    else {
      in_dr2 = in_dr2 * (dVar9 / dVar9);
    }
    if (cVar11 == '\0') {
      *(int *)(ar5_00 + 0xc) = (int)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      *(double *)(ar5_00 + 0xc) = in_dr2;
    }
    iVar3 = rand(uVar7,pcVar4,ar6_00,uVar2);
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 7.971355902106255e+24;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x44bb8000,fVar8);
    }
    else {
      dVar9 = -1.3922581301884715e-250;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *(float *)(ar5_00 + 0x10) = fVar8;
    }
    else {
      *(undefined8 *)(ar5_00 + 0x10) = in_xd0;
    }
    FUN_8c0fe5f0((undefined4 *)((int)ar4 + 0x34),ar5_00,ar6_00,uVar2);
    iVar1 = iVar1 + 1;
    pcVar4 = ar5_00;
  } while( true );
}

__asm__(".globl _s_GRAPHICS_COMMON_0d33f4\n.set _s_GRAPHICS_COMMON_0d33f4, _s_GRAPHICS_COMMON_0d33f4_def\n");
