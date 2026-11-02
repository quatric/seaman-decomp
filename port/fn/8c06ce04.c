#include "../decls.h"
undefined4 s_GRAPHICS_HERBLINE_06ce12_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 a5;
  int iVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined4 **ar7_00;
  int *a4;
  int a6;
  int in_stack_ffffff74;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 auStack_24 [2];
  
  auStack_24[0] = 0;
  puVar7 = (undefined4 *)0x0;
  puStack_28 = (undefined4 *)0x0;
  puVar6 = (undefined *)0x0;
  uStack_2c = 0;
  uVar1 = 0;
  for (a6 = 0; a6 < 2; a6 = a6 + 1) {
    iVar4 = *(int *)(ar4 + 0x224) + a6 * 0x124;
    if (*(int *)(iVar4 + 0x18) != 0) {
      puVar7 = (undefined4 *)(ar4 + a6);
      puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
      iVar2 = FUN_8c020ddc(ar5,*(undefined4 *)(iVar4 + 0x18),PTR_s_GRAPHICS_HERBLINE_8c136f4c,puVar7
                          );
      if (iVar2 == 0) {
        puVar7 = (undefined4 *)0x2;
        puVar6 = (undefined *)0x0;
        report_error_message
                  (*(undefined4 *)(iVar4 + 0x18),s_Failed_to_Load__CHerb__LoadGRWai_8c13741d,0,2);
      }
    }
    for (iVar2 = 0; iVar2 < *(short *)(iVar4 + 0xa4); iVar2 = iVar2 + 1) {
      if (**(char **)(iVar2 * 4 + *(int *)(iVar4 + 4)) == '\0') {
        puVar7 = (undefined4 *)0x2;
        puVar6 = (undefined *)0x0;
        report_error_message(s_Attach_NULL___8c137452,s_CHerb__LoadGRWait___8c137460,0,2);
        auStack_24[0] = 0;
      }
      else {
        puVar7 = auStack_24;
        puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
        iVar3 = FUN_8c020bec(ar5,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar4 + 4)),
                             PTR_s_GRAPHICS_HERBLINE_8c136f4c,puVar7);
        if (iVar3 == 0) {
          puVar7 = (undefined4 *)0x2;
          puVar6 = (undefined *)0x0;
          report_error_message
                    (*(undefined4 *)(iVar2 * 4 + *(int *)(iVar4 + 4)),s_Read_NMDM_Failed___8c13743f,
                     0,2);
        }
      }
      FUN_8c015bb0(*(int *)(iVar4 + 0xa0) + iVar2 * 4,auStack_24[0],puVar6,puVar7,in_stack_ffffff74)
      ;
    }
    for (iVar2 = 0; iVar2 < *(short *)(iVar4 + 0xac); iVar2 = iVar2 + 1) {
      if (**(char **)(iVar2 * 4 + *(int *)(iVar4 + 8)) == '\0') {
        auStack_24[0] = 0;
      }
      else {
        puVar7 = auStack_24;
        puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
        iVar3 = FUN_8c020ce4(ar5,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar4 + 8)),
                             PTR_s_GRAPHICS_HERBLINE_8c136f4c,puVar7);
        if (iVar3 == 0) {
          puVar7 = (undefined4 *)0x2;
          puVar6 = (undefined *)0x0;
          report_error_message
                    (*(undefined4 *)(iVar2 * 4 + *(int *)(iVar4 + 8)),s_Read_NSSM_Failed___8c137474,
                     0,2);
        }
        FUN_8c015be4(*(int *)(*(int *)(ar4 + 0x224) + a6 * 0x124 + 0xa8) + iVar2 * 4,auStack_24[0],
                     puVar6,puVar7,in_stack_ffffff74);
      }
      FUN_8c015be4(*(int *)(iVar4 + 0xa8) + iVar2 * 4,auStack_24[0],puVar6,puVar7,in_stack_ffffff74)
      ;
    }
    ar7_00 = &puStack_28;
    puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
    iVar2 = FUN_8c0209fc(ar5,*(undefined4 *)(iVar4 + 0xc),PTR_s_GRAPHICS_HERBLINE_8c136f4c,ar7_00);
    if (iVar2 == 0) {
      ar7_00 = (undefined4 **)0x2;
      puVar6 = (undefined *)0x0;
      report_error_message
                (*(undefined4 *)(iVar4 + 0xc),s_Read_NJCM_Failed___CHerb__LoadGR_8c137487,0,2);
    }
    FUN_8c015ad4(iVar4 + 0x70,puStack_28,puVar6,ar7_00,in_stack_ffffff74);
    in_stack_ffffff74 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,puVar6,ar7_00);
    if (in_stack_ffffff74 == 0) {
      if (*(int *)(iVar4 + 0x20) == 0) {
        puVar7 = &uStack_2c;
        puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
        iVar2 = FUN_8c020af4(ar5,*(undefined4 *)(iVar4 + 0xc),PTR_s_GRAPHICS_HERBLINE_8c136f4c,
                             puVar7);
        if (iVar2 == 0) {
          puVar7 = (undefined4 *)0x2;
          puVar6 = (undefined *)0x0;
          report_error_message
                    (*(undefined4 *)(iVar4 + 0xc),s_Read_NJTL_Failed___CHerb__LoadGR_8c1374ed,0,2);
        }
        (**(code **)(*(int *)(iVar4 + 0x78) + 8))((int *)(iVar4 + 0x78),uStack_2c,puVar6,puVar7);
        iVar4 = a6;
        (**(code **)(*(int *)(ar4 + 8) + 0xe4))(ar4,ar5,a6,puVar7);
        (**(code **)(*(int *)(ar4 + 0x208) + 8))((int *)(ar4 + 0x208),uStack_2c,iVar4,puVar7);
      }
      else {
        uVar1 = *(undefined4 *)(iVar4 + 0xc);
        s_CHerb_SetPVMTexture_s_06d61c(ar4,iVar4 + 0x20,uVar1,ar7_00);
        iVar2 = iVar4 + 0x28;
        (**(code **)(*(int *)(iVar4 + 0x78) + 8))((int *)(iVar4 + 0x78),iVar2,uVar1,ar7_00);
        uVar1 = get_field_4_0253e4(iVar4 + 0x78,iVar2,uVar1,ar7_00);
        pcVar5 = *(char **)(iVar4 + 0x20);
        puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
        iVar2 = FUN_8c02100c(ar5,pcVar5,PTR_s_GRAPHICS_HERBLINE_8c136f4c,uVar1);
        if (iVar2 == 0) {
          uVar1 = 2;
          puVar6 = (undefined *)0x0;
          pcVar5 = s_CAnimal__LoadGResourceWait___8c1374d0;
          report_error_message
                    (s_Failed_to_load_body_pvm_textuer__8c1374ae,
                     s_CAnimal__LoadGResourceWait___8c1374d0,0,2);
        }
        a5 = get_field_4_0253e4(iVar4 + 0x78,pcVar5,puVar6,uVar1);
        (**(code **)(*(int *)(ar4 + 0x208) + 8))((int *)(ar4 + 0x208),a5,puVar6,uVar1);
      }
    }
    else if (*(int *)(iVar4 + 0x34) == 0) {
      iVar2 = FUN_8c020af4(ar5,*(undefined4 *)(iVar4 + 0xc),PTR_s_GRAPHICS_HERBLINE_8c136f4c,
                           &uStack_2c);
      if (iVar2 == 0) {
        report_error_message
                  (*(undefined4 *)(iVar4 + 0xc),s_Read_NJTL_Failed___CHerb__LoadGR_8c1374ed,0,2);
      }
      a4 = (int *)(iVar4 + 0x78);
      (**(code **)(*a4 + 8))(a4,uStack_2c,*(code **)(*a4 + 8),a4);
      iVar4 = a6;
      (**(code **)(*(int *)(ar4 + 8) + 0xe4))(ar4,ar5,a6,a4);
      (**(code **)(*(int *)(ar4 + 0x208) + 8))((int *)(ar4 + 0x208),uStack_2c,iVar4,a4);
    }
    else {
      uVar1 = *(undefined4 *)(iVar4 + 0xc);
      s_CHerb_SetPVMTexture_s_06d61c(ar4,iVar4 + 0x34,uVar1,ar7_00);
      iVar2 = iVar4 + 0x3c;
      (**(code **)(*(int *)(iVar4 + 0x80) + 8))((int *)(iVar4 + 0x80),iVar2,uVar1,ar7_00);
      uVar1 = get_field_4_0253e4(iVar4 + 0x80,iVar2,uVar1,ar7_00);
      pcVar5 = *(char **)(iVar4 + 0x34);
      puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
      iVar2 = FUN_8c02100c(ar5,pcVar5,PTR_s_GRAPHICS_HERBLINE_8c136f4c,uVar1);
      if (iVar2 == 0) {
        uVar1 = 2;
        puVar6 = (undefined *)0x0;
        pcVar5 = s_CAnimal__LoadGResourceWait___8c1374d0;
        report_error_message
                  (s_Failed_to_load_body_pvm_textuer__8c1374ae,
                   s_CAnimal__LoadGResourceWait___8c1374d0,0,2);
      }
      uVar1 = get_field_4_0253e4(iVar4 + 0x80,pcVar5,puVar6,uVar1);
      (**(code **)(*(int *)(ar4 + 0x208) + 8))((int *)(ar4 + 0x208),uVar1,0x208,uVar1);
    }
    puVar6 = (undefined *)0x204;
    puVar7 = puStack_28;
    uVar1 = FUN_8c015ad4(ar4 + 0x204,puStack_28,0x204,puStack_28,in_stack_ffffff74);
  }
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_HERBLINE_06ce12\n.set _s_GRAPHICS_HERBLINE_06ce12, _s_GRAPHICS_HERBLINE_06ce12_def\n");
