#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0d5220_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 ar4_00;
  undefined4 ***ar5_00;
  char *pcVar4;
  double *pdVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined4 **ppuVar8;
  double dVar9;
  double in_dr2;
  undefined8 in_xd0;
  char cVar10;
  char cVar11;
  undefined4 in_stack_ffffffac;
  undefined4 uStack_20;
  undefined4 **ppuStack_1c;
  undefined4 **appuStack_18 [2];
  
  cVar11 = '\0';
  cVar10 = '\0';
  appuStack_18[0] = (undefined4 ***)0x0;
  ppuStack_1c = (undefined4 ***)0x0;
  uStack_20 = 0;
  FUN_8c235ee4(ar4,ar5,ar6,ar7);
  FUN_8c020a70(ar5,s_suisou_WaterFace_nj_8c13f91e,s_GRAPHICS_ENV_8c13f8cb,ar4);
  pcVar4 = s_GRAPHICS_ENV_8c13f8cb;
  pdVar5 = ar4;
  FUN_8c020b68(ar5,s_suisou_WaterFace_nj_8c13f91e,s_GRAPHICS_ENV_8c13f8cb,ar4);
  FUN_8c015ad4(ar4 + 2,0,pcVar4,pdVar5,in_stack_ffffffac);
  FUN_8c020a70(ar5,s_suisou_Effect_nj_8c13f986,s_GRAPHICS_ENV_8c13f8cb,ar4);
  pcVar4 = s_GRAPHICS_ENV_8c13f8cb;
  pdVar5 = ar4;
  FUN_8c020b68(ar5,s_suisou_Effect_nj_8c13f986,s_GRAPHICS_ENV_8c13f8cb,ar4);
  FUN_8c015ad4((int)ar4 + 0x1c,0,pcVar4,pdVar5,in_stack_ffffffac);
  iVar1 = FUN_8c0209fc(ar5,s_suisou_WaterFace_small_nj_8c13fa0c,s_GRAPHICS_ENV_8c13f8cb,&ppuStack_1c
                      );
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_WaterFace_small_nj_8c13fa0c,s_Failed_NJCM_WATER_ELEMENT__Prepa_8c13fb30,0,2)
    ;
  }
  puVar6 = &uStack_20;
  pcVar4 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_suisou_WaterFace_small_nj_8c13fa0c,s_GRAPHICS_ENV_8c13f8cb,puVar6);
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)0x2;
    pcVar4 = (char *)0x0;
    report_error_message
              (s_suisou_WaterFace_small_nj_8c13fa0c,s_Failed_NJTL_WATER_ELEMENT__Prepa_8c13fb67,0,2)
    ;
  }
  FUN_8c015ad4(ar4 + 2,ppuStack_1c,pcVar4,puVar6,in_stack_ffffffac);
  iVar1 = FUN_8c0209fc(ar5,s_suisou_Effect_small_nj_8c13fa7a,s_GRAPHICS_ENV_8c13f8cb,&ppuStack_1c);
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_Effect_small_nj_8c13fa7a,s_Failed_NJCM_WATER_ELEMENT__Prepa_8c13fb30,0,2);
  }
  puVar6 = &uStack_20;
  pcVar4 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_suisou_Effect_small_nj_8c13fa7a,s_GRAPHICS_ENV_8c13f8cb,puVar6);
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)0x2;
    pcVar4 = (char *)0x0;
    report_error_message
              (s_suisou_Effect_small_nj_8c13fa7a,s_Failed_NJTL_WATER_ELEMENT__Prepa_8c13fb67,0,2);
  }
  ar5_00 = (undefined4 ***)ppuStack_1c;
  FUN_8c015ad4((int)ar4 + 0x1c,ppuStack_1c,pcVar4,puVar6,in_stack_ffffffac);
  iVar1 = FUN_8c015bb8((int)ar4 + 0x1c,ar5_00,pcVar4,puVar6);
  uVar2 = FUN_8c0151fc(*(undefined4 *)(*(int *)(iVar1 + 4) + 4),ar5_00,pcVar4,puVar6);
  *(undefined4 *)((int)ar4 + 0x2c) = uVar2;
  FUN_8c0d5de0(ar4,ar5_00,pcVar4,puVar6);
  while (iVar1 = get_field_d0_0d3f70((int)ar4 + 0x34,ar5_00,pcVar4,puVar6), iVar1 != 0) {
    iVar1 = get_field_d0_0d3f70((int)ar4 + 0x34,ar5_00,pcVar4,puVar6);
    appuStack_18[0] =
         (undefined4 **)
         s_CWaterSnowList_GetWaterSnowO_0fe76c((int)ar4 + 0x34,iVar1 + -1,pcVar4,puVar6);
    s_CWaterSnowList_TakeOut_0fe694((int)ar4 + 0x34,appuStack_18[0],pcVar4,puVar6);
    ar5_00 = appuStack_18;
    FUN_8c0fec4c(0x8c3e7d30,ar5_00,pcVar4,puVar6);
  }
  FUN_8c0fe7f4((int)ar4 + 0x34,ar5_00,pcVar4,puVar6);
  for (iVar1 = 0; uVar2 = SUB84(in_dr2,0), iVar1 < 0x32; iVar1 = iVar1 + 1) {
    ar4_00 = 0x8c3e7d30;
    appuStack_18[0] = (undefined4 **)FUN_8c0febf0(0x8c3e7d30,ar5_00,pcVar4,puVar6);
    if ((undefined4 ***)appuStack_18[0] == (undefined4 ***)0x0) break;
    iVar3 = rand(ar4_00,ar5_00,pcVar4,puVar6);
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 1.1215622395287742e+23;
    }
    if (cVar10 == '\0') {
      fVar7 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x44b7c000,fVar7);
    }
    else {
      dVar9 = 7.673846743559028e+21;
    }
    if (cVar10 == '\0') {
      fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x447a0000,fVar7);
    }
    else {
      dVar9 = 2.8924499526186286e+22;
    }
    if (cVar10 == '\0') {
      ppuVar8 = (undefined4 **)(uint)(SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      ppuVar8 = SUB84(dVar9 + dVar9,0);
    }
    if (cVar11 == '\0') {
      appuStack_18[0][2] = ppuVar8;
    }
    else {
      *(undefined8 *)(appuStack_18[0] + 2) = in_xd0;
    }
    iVar3 = rand(ar4_00,ar5_00,pcVar4,puVar6);
    if (cVar11 == '\0') {
      in_dr2 = (double)CONCAT44(*(undefined4 *)ar4,uVar2);
    }
    else {
      in_dr2 = *ar4;
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 1.1215622395287742e+23;
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
      appuStack_18[0][3] = (undefined4 **)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      *(double *)(appuStack_18[0] + 3) = in_dr2;
    }
    iVar3 = rand(ar4_00,ar5_00,pcVar4,puVar6);
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 1.1215622395287742e+23;
    }
    if (cVar10 == '\0') {
      fVar7 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x44988000,fVar7);
    }
    else {
      dVar9 = 2.5220161595978547e+17;
    }
    if (cVar10 == '\0') {
      fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x438c0000,fVar7);
    }
    else {
      dVar9 = -1.392258127104201e-250;
    }
    if (cVar10 == '\0') {
      ppuVar8 = (undefined4 **)(uint)(SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      ppuVar8 = SUB84(dVar9 + dVar9,0);
    }
    if (cVar11 == '\0') {
      appuStack_18[0][4] = ppuVar8;
    }
    else {
      *(undefined8 *)(appuStack_18[0] + 4) = in_xd0;
    }
    ar5_00 = (undefined4 ***)appuStack_18[0];
    FUN_8c0fe5f0((int)ar4 + 0x34,appuStack_18[0],pcVar4,puVar6);
  }
  uVar2 = FUN_8c0d5040(ar4,ar5_00,pcVar4,puVar6);
  return uVar2;
}

__asm__(".globl _s_GRAPHICS_ENV_0d5220\n.set _s_GRAPHICS_ENV_0d5220, _s_GRAPHICS_ENV_0d5220_def\n");
