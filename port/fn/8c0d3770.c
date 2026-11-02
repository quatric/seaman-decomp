#include "../decls.h"
undefined4 s_GRAPHICS_COMMON_0d377a_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  int iVar2;
  undefined4 ar4_00;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  undefined4 uVar8;
  double in_dr2;
  undefined8 in_xd0;
  char cVar9;
  char cVar10;
  undefined4 in_stack_ffffffc0;
  undefined4 uStack_20;
  int aiStack_1c [2];
  
  cVar10 = '\0';
  cVar9 = '\0';
  aiStack_1c[0] = 0;
  uStack_20 = 0;
  *(undefined4 *)ar4 = 0x43200000;
  iVar1 = FUN_8c0209fc(ar5,s_suisou_WaterFace_small_nj_8c13fa0c,s_GRAPHICS_ENV_8c13f8cb,aiStack_1c);
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_WaterFace_small_nj_8c13fa0c,s_Failed_NJCM_WATER_ELEMENT__Creat_8c13fa26,0,2)
    ;
  }
  puVar4 = &uStack_20;
  pcVar3 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_suisou_WaterFace_small_nj_8c13fa0c,s_GRAPHICS_ENV_8c13f8cb,puVar4);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x2;
    pcVar3 = (char *)0x0;
    report_error_message
              (s_suisou_WaterFace_small_nj_8c13fa0c,s_Failed_NJTL_WATER_ELEMENT__Creat_8c13fa50,0,2)
    ;
  }
  FUN_8c015ad4(ar4 + 2,aiStack_1c[0],pcVar3,puVar4,in_stack_ffffffc0);
  iVar1 = FUN_8c0209fc(ar5,s_suisou_Effect_small_nj_8c13fa7a,s_GRAPHICS_ENV_8c13f8cb,aiStack_1c);
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_Effect_small_nj_8c13fa7a,s_Failed_NJCM_WATER_ELEMENT__Creat_8c13fa26,0,2);
  }
  puVar4 = &uStack_20;
  pcVar3 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_suisou_Effect_small_nj_8c13fa7a,s_GRAPHICS_ENV_8c13f8cb,puVar4);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x2;
    pcVar3 = (char *)0x0;
    report_error_message
              (s_suisou_Effect_small_nj_8c13fa7a,s_Failed_NJTL_WATER_ELEMENT__Creat_8c13fa50,0,2);
  }
  iVar1 = aiStack_1c[0];
  FUN_8c015ad4((undefined4 *)((int)ar4 + 0x1c),aiStack_1c[0],pcVar3,puVar4,in_stack_ffffffc0);
  iVar5 = 0;
  do {
    uVar8 = SUB84(in_dr2,0);
    if (0x31 < iVar5) {
LAB_8c0d395e:
      s_GRAPHICS_ENV_0d39ea(ar4,ar5,s_wave_small_pvm_8c13faaa,puVar4);
      return 1;
    }
    ar4_00 = 0x8c3e7d30;
    ar5_00 = FUN_8c0febf0(0x8c3e7d30,iVar1,pcVar3,puVar4);
    if (ar5_00 == 0) {
      puVar4 = (undefined4 *)0x2;
      report_error_message(s_Lack_of_mem___8c13f9d6,s_WATER_ELEMETNT__Create___8c13fa91,1,2);
      goto LAB_8c0d395e;
    }
    iVar2 = rand(ar4_00,iVar1,pcVar3,puVar4);
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44(0x47000000,(float)iVar2);
    }
    else {
      dVar7 = 1.1215622395287742e+23;
    }
    if (cVar9 == '\0') {
      fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 / dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44(0x44b7c000,fVar6);
    }
    else {
      dVar7 = 7.673846743559028e+21;
    }
    if (cVar9 == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44(0x447a0000,fVar6);
    }
    else {
      dVar7 = 2.8924499526186286e+22;
    }
    if (cVar9 == '\0') {
      fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar10 == '\0') {
      *(float *)(ar5_00 + 8) = fVar6;
    }
    else {
      *(undefined8 *)(ar5_00 + 8) = in_xd0;
    }
    iVar2 = rand(ar4_00,iVar1,pcVar3,puVar4);
    if (cVar10 == '\0') {
      in_dr2 = (double)CONCAT44(*(undefined4 *)ar4,uVar8);
    }
    else {
      in_dr2 = *ar4;
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44(0x47000000,(float)iVar2);
    }
    else {
      dVar7 = 1.1215622395287742e+23;
    }
    if (cVar9 == '\0') {
      in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) *
                                (SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20)),SUB84(in_dr2,0)
                               );
    }
    else {
      in_dr2 = in_dr2 * (dVar7 / dVar7);
    }
    if (cVar10 == '\0') {
      *(int *)(ar5_00 + 0xc) = (int)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      *(double *)(ar5_00 + 0xc) = in_dr2;
    }
    iVar1 = rand(ar4_00,iVar1,pcVar3,puVar4);
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44(0x47000000,(float)iVar1);
    }
    else {
      dVar7 = 1.1215622395287742e+23;
    }
    if (cVar9 == '\0') {
      fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 / dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44(0x44988000,fVar6);
    }
    else {
      dVar7 = 2.5220161595978547e+17;
    }
    if (cVar9 == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44(0x438c0000,fVar6);
    }
    else {
      dVar7 = -1.392258127104201e-250;
    }
    if (cVar9 == '\0') {
      fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar10 == '\0') {
      *(float *)(ar5_00 + 0x10) = fVar6;
    }
    else {
      *(undefined8 *)(ar5_00 + 0x10) = in_xd0;
    }
    FUN_8c0fe5f0((undefined4 *)((int)ar4 + 0x34),ar5_00,pcVar3,puVar4);
    iVar5 = iVar5 + 1;
    iVar1 = ar5_00;
  } while( true );
}

__asm__(".globl _s_GRAPHICS_COMMON_0d377a\n.set _s_GRAPHICS_COMMON_0d377a, _s_GRAPHICS_COMMON_0d377a_def\n");
