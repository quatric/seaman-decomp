#include "../decls.h"
undefined4 s_Failed_to_load_Pack_CAnimal__027a86_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int a5;
  undefined4 uVar3;
  undefined *ar7_00;
  undefined4 *puVar4;
  undefined4 uVar5;
  int s0;
  int iVar6;
  undefined4 in_stack_ffffff50;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_24 [2];
  
  auStack_24[0] = 0;
  uStack_28 = 0;
  uVar5 = 0;
  iVar6 = ar6 * 0x124;
  iVar1 = *(int *)(ar4 + 0x328) + iVar6;
  s0 = ar4 + ar6;
  uStack_2c = 0;
  iVar2 = *(int *)(ar4 + 0x418);
  if ((iVar2 < 0xc) && (-1 < iVar2)) {
    ar7_00 = (&switchdata_8c027ae0_8c027afc)[iVar2];
    a5 = ar5;
                    
    switch(iVar2) {
    case 0:
      *(undefined2 *)(ar4 + 0x414) = 0;
      *(undefined4 *)(ar4 + 0x418) = 1;
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
                    (*(undefined4 *)(iVar1 + 0x18),"Failed to load Pack:CAnimal::LoadGRReq()",0,2);
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
          FUN_8c015bb0(iVar1 + 0xb0,uStack_2c,uVar3,puVar4,in_stack_ffffff50);
          *(undefined4 *)(ar4 + 0x418) = 4;
        }
        else if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(iVar1 + 0x18),"Failed to load Pack:CAnimal::LoadGRReq()",0,2);
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
        FUN_8c015ad4(iVar1 + 0x70,auStack_24[0],uVar3,puVar4,in_stack_ffffff50);
        *(undefined4 *)(ar4 + 0x418) = 6;
      }
      else if (iVar2 == 0) {
        report_error_message(*(undefined4 *)(iVar1 + 0xc),"Read NJCM Failed..",0,2);
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
          report_error_message(*(undefined4 *)(iVar1 + 0xc),"Read NJTL Failed..",0,2);
        }
      }
      else {
        uVar3 = *(undefined4 *)(iVar1 + 0xc);
        s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x20,uVar3,ar7_00);
        (**(code **)(*(int *)(iVar1 + 0x78) + 8))((int *)(iVar1 + 0x78),iVar1 + 0x28,uVar3,ar7_00);
        *(undefined4 *)(ar4 + 0x418) = 7;
      }
      break;
    case 7:
      if (*(int *)(iVar1 + 0x20) == 0) {
        uVar3 = get_field_4_0253e4(iVar1 + 0x78,ar5,iVar6,ar7_00);
        iVar2 = FUN_8c020e80(ar5,*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(ar4 + 0x410),uVar3);
        if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(iVar1 + 0x14),"Failed to load tex:CAnimal::LoadTRReq()",0,2);
        }
      }
      else {
        uVar3 = get_field_4_0253e4(iVar1 + 0x78,ar5,iVar6,ar7_00);
        iVar2 = s_CDCGD_ReadPVMFileReq_021082
                          (ar5,*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(ar4 + 0x410),uVar3,s0);
        if (iVar2 == 0) {
          report_error_message
                    ("Failed to load body pvm textuer..","CAnimal::LoadTextureResourceReq()",0,2);
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
          uVar3 = get_field_4_0253e4(iVar1 + 0x88,get_field_4_0253e4,iVar6,ar7_00);
          iVar2 = FUN_8c020e80(ar5,*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(ar4 + 0x410),uVar3)
          ;
          if (iVar2 == 0) {
            report_error_message
                      (*(undefined4 *)(iVar1 + 0x10),"Failed to load tex:CAnimal::LoadTRReq()",0,2);
          }
        }
        else {
          s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x48,*(undefined4 *)(iVar1 + 0xc),ar7_00);
          iVar6 = iVar1 + 0x50;
          uVar3 = 0x88;
          iVar2 = iVar6;
          (**(code **)(*(int *)(iVar1 + 0x88) + 8))((int *)(iVar1 + 0x88),iVar6,0x88,iVar6);
          uVar3 = get_field_4_0253e4(iVar1 + 0x88,iVar6,uVar3,iVar2);
          iVar2 = s_CDCGD_ReadPVMFileReq_021082
                            (ar5,*(undefined4 *)(iVar1 + 0x48),*(undefined4 *)(ar4 + 0x410),uVar3,s0
                            );
          if (iVar2 == 0) {
            report_error_message
                      ("Failed to load face pvm textuer..","CAnimal::LoadGResourceReq()",0,2);
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
      iVar6 = *(int *)(iVar1 + 0xc);
      s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x34,iVar6,ar7_00);
      a5 = iVar1 + 0x3c;
      (**(code **)(*(int *)(iVar1 + 0x80) + 8))((int *)(iVar1 + 0x80),a5,iVar6,ar7_00);
      *(undefined4 *)(ar4 + 0x418) = 10;
    case 10:
      uVar3 = get_field_4_0253e4(iVar1 + 0x80,a5,iVar6,ar7_00);
      iVar1 = s_CDCGD_ReadPVMFileReq_021082
                        (ar5,*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(ar4 + 0x410),uVar3,s0);
      if (iVar1 == 0) {
        report_error_message
                  ("Failed to load SPECIAL body pvm textuer..","CAnimal::LoadGResourceReq()",0,2);
      }
      if (iVar1 == 1) {
        *(undefined4 *)(ar4 + 0x418) = 8;
      }
      break;
    case 0xb:
      uVar3 = *(undefined4 *)(iVar1 + 0xc);
      iVar6 = iVar1 + 0x5c;
      s_CAnimal_SetPVMTexture_s_029404(ar4,iVar6,uVar3,iVar6);
      iVar2 = iVar1 + 100;
      (**(code **)(*(int *)(iVar1 + 0x90) + 8))((int *)(iVar1 + 0x90),iVar2,uVar3,iVar6);
      uVar3 = get_field_4_0253e4(iVar1 + 0x90,iVar2,uVar3,iVar6);
      iVar1 = s_CDCGD_ReadPVMFileReq_021082
                        (ar5,*(undefined4 *)(iVar1 + 0x5c),*(undefined4 *)(ar4 + 0x410),uVar3,s0);
      if (iVar1 == 0) {
        report_error_message
                  ("Failed to load SPECIAL face pvm textuer..","CAnimal::LoadGResourceReq()",0,2);
      }
      if (iVar1 == 1) {
        *(undefined4 *)(ar4 + 0x418) = 0;
        uVar5 = 1;
      }
    }
  }
  else {
    report_error_message("Invalid Load Sequence..","CAnimal::LoadGResourceReq()",0,2);
  }
  return uVar5;
}

__asm__(".globl _s_Failed_to_load_Pack_CAnimal__027a86\n.set _s_Failed_to_load_Pack_CAnimal__027a86, _s_Failed_to_load_Pack_CAnimal__027a86_def\n");
