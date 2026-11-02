#include "../decls.h"
undefined4 s_cp_ESA_FRONT_HOME_njd_08c9ea_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *ar5_00;
  code *a6;
  int *a7;
  undefined4 *puVar4;
  undefined4 ar6_00;
  undefined4 uVar5;
  int s0;
  undefined4 in_stack_ffffff48;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_24 [2];
  
  auStack_24[0] = 0;
  uStack_28 = 0;
  uVar5 = 0;
  a7 = (int *)0x2;
  iVar1 = *(int *)(ar4 + 0x328) + ar6 * 0x124;
  s0 = ar4 + ar6;
  uStack_2c = 0;
  iVar2 = *(int *)(ar4 + 0x418);
  a6 = (code *)0xb;
  if ((iVar2 < 0xc) && (-1 < iVar2)) {
    ar5_00 = (&switchdata_8c08ca4a_8c08ca68)[iVar2];
                    
    switch(iVar2) {
    case 0:
      *(undefined2 *)(ar4 + 0x414) = 0;
      iVar2 = FUN_8c0209b0(ar5,PTR_s_cp_ESA_FRONT_HOME_njd_8c139e9c,*(undefined4 *)(ar4 + 0x410),
                           auStack_24);
      if (iVar2 == 1) {
        *(undefined4 *)(ar4 + 0x848) = auStack_24[0];
        *(undefined4 *)(ar4 + 0x418) = 1;
      }
      else if (iVar2 == 0) {
        report_error_message(*(undefined4 *)(iVar1 + 0xc),s_Read_NJCM_Failed___8c13a5ed,0,2);
      }
      break;
    case 1:
      if (*(int *)(iVar1 + 0x18) == 0) {
        *(undefined4 *)(ar4 + 0x418) = 2;
      }
      else {
        iVar2 = FUN_8c020d90(ar5,*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(ar4 + 0x410),s0);
        if (iVar2 == 1) {
          *(undefined4 *)(ar4 + 0x418) = 2;
        }
        else if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(iVar1 + 0x18),s_Failed_to_load_Pack_CAnimal__Loa_8c13a600,0,2);
        }
      }
      break;
    case 2:
      if (*(int *)(iVar1 + 4) == 0) {
        *(undefined4 *)(ar4 + 0x418) = 3;
      }
      else {
        iVar1 = s_Failed_to_Read_CAnimal_LoadM_02839e
                          (ar4,*(undefined4 *)(*(short *)(ar4 + 0x414) * 4 + *(int *)(iVar1 + 4)),
                           *(undefined4 *)(ar4 + 0x410),
                           *(int *)(iVar1 + 0xa0) + *(short *)(ar4 + 0x414) * 4,ar4 + 0x414,
                           (int)*(short *)(iVar1 + 0xa4),ar5,s0,0);
        if (iVar1 == 1) {
          *(undefined2 *)(ar4 + 0x414) = 0;
          *(undefined4 *)(ar4 + 0x418) = 3;
        }
      }
      break;
    case 3:
      if (*(int *)(iVar1 + 0x1c) == 0) {
        *(undefined4 *)(ar4 + 0x418) = 4;
      }
      else {
        puVar4 = &uStack_2c;
        uVar3 = *(undefined4 *)(ar4 + 0x410);
        iVar2 = FUN_8c020ba0(ar5,*(undefined4 *)(iVar1 + 0x1c),uVar3,puVar4);
        if (iVar2 == 1) {
          FUN_8c015bb0(iVar1 + 0xb0,uStack_2c,uVar3,puVar4,in_stack_ffffff48);
          *(undefined4 *)(ar4 + 0x418) = 4;
        }
        else if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(iVar1 + 0x18),s_Failed_to_load_Pack_CAnimal__Loa_8c13a600,0,2);
        }
      }
      break;
    case 4:
      if (*(int *)(iVar1 + 8) == 0) {
        *(undefined4 *)(ar4 + 0x418) = 5;
      }
      else {
        iVar1 = s_Failed_to_Read_CAnimal_LoadM_02839e
                          (ar4,*(undefined4 *)(*(short *)(ar4 + 0x414) * 4 + *(int *)(iVar1 + 8)),
                           *(undefined4 *)(ar4 + 0x410),
                           *(int *)(iVar1 + 0xa8) + *(short *)(ar4 + 0x414) * 4,ar4 + 0x414,
                           (int)*(short *)(iVar1 + 0xac),ar5,s0,1);
        if (iVar1 == 1) {
          *(undefined2 *)(ar4 + 0x414) = 0;
          *(undefined4 *)(ar4 + 0x418) = 5;
        }
      }
      break;
    case 5:
      puVar4 = auStack_24;
      uVar3 = *(undefined4 *)(ar4 + 0x410);
      iVar2 = FUN_8c0209b0(ar5,*(undefined4 *)(iVar1 + 0xc),uVar3,puVar4);
      if (iVar2 == 1) {
        FUN_8c015ad4(iVar1 + 0x70,auStack_24[0],uVar3,puVar4,in_stack_ffffff48);
        *(undefined4 *)(ar4 + 0x418) = 6;
      }
      else if (iVar2 == 0) {
        report_error_message(*(undefined4 *)(iVar1 + 0xc),s_Read_NJCM_Failed___8c13a5ed,0,2);
      }
      break;
    case 6:
      if (*(int *)(iVar1 + 0x20) == 0) {
        puVar4 = &uStack_28;
        uVar3 = *(undefined4 *)(ar4 + 0x410);
        iVar2 = FUN_8c020aa8(ar5,*(undefined4 *)(iVar1 + 0xc),uVar3,puVar4);
        if (iVar2 == 1) {
          (**(code **)(*(int *)(iVar1 + 0x78) + 8))((int *)(iVar1 + 0x78),uStack_28,uVar3,puVar4);
          *(undefined4 *)(ar4 + 0x418) = 7;
        }
        else if (iVar2 == 0) {
          report_error_message(*(undefined4 *)(iVar1 + 0xc),s_Read_NJTL_Failed___8c13a629,0,2);
        }
      }
      else {
        uVar3 = *(undefined4 *)(iVar1 + 0xc);
        s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x20,uVar3,2);
        (**(code **)(*(int *)(iVar1 + 0x78) + 8))((int *)(iVar1 + 0x78),iVar1 + 0x28,uVar3,a7);
        *(undefined4 *)(ar4 + 0x418) = 7;
      }
      break;
    case 7:
      if (*(int *)(iVar1 + 0x20) == 0) {
        uVar3 = get_field_4_0253e4(iVar1 + 0x78,ar5_00,0xb,2);
        iVar2 = FUN_8c020e80(ar5,*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(ar4 + 0x410),uVar3);
        if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(iVar1 + 0x14),s_Failed_to_load_tex_CAnimal__Load_8c13a65e,0,2);
        }
      }
      else {
        uVar3 = get_field_4_0253e4(iVar1 + 0x78,ar5_00,0xb,2);
        iVar2 = s_CDCGD_ReadPVMFileReq_021082
                          (ar5,*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(ar4 + 0x410),uVar3,s0);
        if (iVar2 == 0) {
          report_error_message
                    (s_Failed_to_load_body_pvm_textuer__8c13a495,
                     s_CAnimal__LoadTextureResourceReq__8c13a63c,0,2);
        }
      }
      if (iVar2 == 1) {
        if (*(int *)(iVar1 + 0x34) == 0) {
          *(undefined4 *)(ar4 + 0x418) = 8;
        }
        else {
          *(undefined4 *)(ar4 + 0x418) = 9;
        }
      }
      break;
    case 8:
      if (*(int *)(iVar1 + 0x10) == 0) {
        *(undefined4 *)(ar4 + 0x418) = 0;
        uVar5 = 1;
      }
      else {
        if (*(int *)(iVar1 + 0x48) == 0) {
          uVar3 = get_field_4_0253e4(iVar1 + 0x88,ar5_00,0xb,2);
          iVar2 = FUN_8c020e80(ar5,*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(ar4 + 0x410),uVar3)
          ;
          if (iVar2 == 0) {
            report_error_message
                      (*(undefined4 *)(iVar1 + 0x10),s_Failed_to_load_tex_CAnimal__Load_8c13a65e,0,2
                      );
          }
        }
        else {
          ar6_00 = *(undefined4 *)(iVar1 + 0xc);
          uVar3 = ar6_00;
          s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x48,ar6_00,ar6_00);
          iVar2 = iVar1 + 0x50;
          (**(code **)(*(int *)(iVar1 + 0x88) + 8))((int *)(iVar1 + 0x88),iVar2,ar6_00,uVar3);
          uVar3 = get_field_4_0253e4(iVar1 + 0x88,iVar2,ar6_00,uVar3);
          iVar2 = s_CDCGD_ReadPVMFileReq_021082
                            (ar5,*(undefined4 *)(iVar1 + 0x48),*(undefined4 *)(ar4 + 0x410),uVar3,s0
                            );
          if (iVar2 == 0) {
            report_error_message
                      (s_Failed_to_load_face_pvm_textuer__8c13a6cc,
                       s_CAnimal__LoadGResourceReq___8c13a6b0,0,2);
          }
        }
        if (iVar2 == 1) {
          if (*(int *)(iVar1 + 0x5c) == 0) {
            *(undefined4 *)(ar4 + 0x418) = 0;
            uVar5 = 1;
          }
          else {
            *(undefined4 *)(ar4 + 0x418) = 0xb;
          }
        }
      }
      break;
    case 9:
      s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x34,*(undefined4 *)(iVar1 + 0xc),2);
      a7 = (int *)(iVar1 + 0x80);
      a6 = *(code **)(*a7 + 8);
      (*a6)(a7,iVar1 + 0x3c,a6,a7);
      ar5_00 = (undefined *)0xa;
      *(undefined4 *)(ar4 + 0x418) = 10;
    case 10:
      uVar3 = get_field_4_0253e4(iVar1 + 0x80,ar5_00,a6,a7);
      iVar1 = s_CDCGD_ReadPVMFileReq_021082
                        (ar5,*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(ar4 + 0x410),uVar3,s0);
      if (iVar1 == 0) {
        report_error_message
                  (s_Failed_to_load_SPECIAL_body_pvm_t_8c13a686,
                   s_CAnimal__LoadGResourceReq___8c13a6b0,0,2);
      }
      if (iVar1 == 1) {
        *(undefined4 *)(ar4 + 0x418) = 8;
      }
      break;
    case 0xb:
      uVar3 = *(undefined4 *)(iVar1 + 0xc);
      s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x5c,uVar3,2);
      iVar2 = iVar1 + 100;
      (**(code **)(*(int *)(iVar1 + 0x90) + 8))((int *)(iVar1 + 0x90),iVar2,uVar3,a7);
      uVar3 = get_field_4_0253e4(iVar1 + 0x90,iVar2,uVar3,a7);
      iVar1 = s_CDCGD_ReadPVMFileReq_021082
                        (ar5,*(undefined4 *)(iVar1 + 0x5c),*(undefined4 *)(ar4 + 0x410),uVar3,s0);
      if (iVar1 == 0) {
        report_error_message
                  (s_Failed_to_load_SPECIAL_face_pvm_t_8c13a6ee,
                   s_CAnimal__LoadGResourceReq___8c13a6b0,0,2);
      }
      if (iVar1 == 1) {
        *(undefined4 *)(ar4 + 0x418) = 0;
        uVar5 = 1;
      }
    }
  }
  else {
    report_error_message
              (s_Invalid_Load_Sequence___8c13a718,s_CAnimal__LoadGResourceReq___8c13a6b0,0,2);
  }
  return uVar5;
}

__asm__(".globl _s_cp_ESA_FRONT_HOME_njd_08c9ea\n.set _s_cp_ESA_FRONT_HOME_njd_08c9ea, _s_cp_ESA_FRONT_HOME_njd_08c9ea_def\n");
