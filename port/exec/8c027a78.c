#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_Failed_to_load_Pack_CAnimal__027a86_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Failed_to_load_Pack_CAnimal__027a86";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 176; for (int i_ = 0; i_ < 176; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int a5;
  undefined4 uVar3;
  undefined *ar7_00;
  undefined4 *puVar4;
  undefined4 uVar5;
  int s0;
  int iVar6;
  
  ((undefined4 *)(fr0_ - 0x24))[0] = 0;
  (*(undefined4 *)(fr0_ - 0x28)) = 0;
  uVar5 = 0;
  iVar6 = ar6 * 0x124;
  iVar1 = *(int *)(unsigned)(ar4 + 0x328) + iVar6;
  s0 = ar4 + ar6;
  (*(undefined4 *)(fr0_ - 0x2c)) = 0;
  iVar2 = *(int *)(unsigned)(ar4 + 0x418);
  if ((iVar2 < 0xc) && (-1 < iVar2)) {
    ar7_00 = (&(*(undefined1 *)(unsigned)0x8c027afc))[iVar2];
    a5 = ar5;
                    
    switch(iVar2) {
    case 0:
      *(undefined2 *)(unsigned)(ar4 + 0x414) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x418) = 1;
      break;
    case 1:
      if (*(int *)(unsigned)(iVar1 + 0x18) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 2;
      }
      else {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c020d90(ar5,*(undefined4 *)(unsigned)(iVar1 + 0x18),*(undefined4 *)(unsigned)(ar4 + 0x410),s0));
        if (iVar2 == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x418) = 2;
        }
        else if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(unsigned)(iVar1 + 0x18),"Failed to load Pack:CAnimal::LoadGRReq()",0,2);
        }
      }
      break;
    case 2:
      if (*(int *)(unsigned)(iVar1 + 4) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 3;
      }
      else {
        iVar1 = s_Failed_to_Read_CAnimal_LoadM_02839e
                          (ar4,*(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x414) * 4 + *(int *)(unsigned)(iVar1 + 4)),
                           *(undefined4 *)(unsigned)(ar4 + 0x410),
                           *(int *)(unsigned)(iVar1 + 0xa0) + *(short *)(unsigned)(ar4 + 0x414) * 4,ar4 + 0x414,
                           (int)*(short *)(unsigned)(iVar1 + 0xa4),ar5,s0,0);
        if (iVar1 == 1) {
          *(undefined2 *)(unsigned)(ar4 + 0x414) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x418) = 3;
        }
      }
      break;
    case 3:
      if (*(int *)(unsigned)(iVar1 + 0x1c) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 4;
      }
      else {
        puVar4 = &(*(undefined4 *)(fr0_ - 0x2c));
        uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x410);
        iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c020ba0(ar5,*(undefined4 *)(unsigned)(iVar1 + 0x1c),uVar3,puVar4));
        if (iVar2 == 1) {
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c015bb0(iVar1 + 0xb0,(*(undefined4 *)(fr0_ - 0x2c)),uVar3,puVar4); });
          *(undefined4 *)(unsigned)(ar4 + 0x418) = 4;
        }
        else if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(unsigned)(iVar1 + 0x18),"Failed to load Pack:CAnimal::LoadGRReq()",0,2);
        }
      }
      break;
    case 4:
      if (*(int *)(unsigned)(iVar1 + 8) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 5;
      }
      else {
        iVar1 = s_Failed_to_Read_CAnimal_LoadM_02839e
                          (ar4,*(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x414) * 4 + *(int *)(unsigned)(iVar1 + 8)),
                           *(undefined4 *)(unsigned)(ar4 + 0x410),
                           *(int *)(unsigned)(iVar1 + 0xa8) + *(short *)(unsigned)(ar4 + 0x414) * 4,ar4 + 0x414,
                           (int)*(short *)(unsigned)(iVar1 + 0xac),ar5,s0,1);
        if (iVar1 == 1) {
          *(undefined2 *)(unsigned)(ar4 + 0x414) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x418) = 5;
        }
      }
      break;
    case 5:
      puVar4 = ((undefined4 *)(fr0_ - 0x24));
      uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x410);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c0209b0(ar5,*(undefined4 *)(unsigned)(iVar1 + 0xc),uVar3,puVar4));
      if (iVar2 == 1) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c015ad4(iVar1 + 0x70,((undefined4 *)(fr0_ - 0x24))[0],uVar3,puVar4); });
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 6;
      }
      else if (iVar2 == 0) {
        (vsp = ((unsigned long)(fr0_ - 176)), report_error_message(*(undefined4 *)(unsigned)(iVar1 + 0xc),"Read NJCM Failed..",0,2));
      }
      break;
    case 6:
      if (*(int *)(unsigned)(iVar1 + 0x20) == 0) {
        puVar4 = &(*(undefined4 *)(fr0_ - 0x28));
        uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x410);
        iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c020aa8(ar5,*(undefined4 *)(unsigned)(iVar1 + 0xc),uVar3,puVar4));
        if (iVar2 == 1) {
          (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 0x78) + 8))))((int *)(unsigned)(iVar1 + 0x78),(*(undefined4 *)(fr0_ - 0x28)),uVar3,puVar4));
          *(undefined4 *)(unsigned)(ar4 + 0x418) = 7;
        }
        else if (iVar2 == 0) {
          (vsp = ((unsigned long)(fr0_ - 176)), report_error_message(*(undefined4 *)(unsigned)(iVar1 + 0xc),"Read NJTL Failed..",0,2));
        }
      }
      else {
        uVar3 = *(undefined4 *)(unsigned)(iVar1 + 0xc);
        (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x20,uVar3,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 0x78) + 8))))((int *)(unsigned)(iVar1 + 0x78),iVar1 + 0x28,uVar3,ar7_00));
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 7;
      }
      break;
    case 7:
      if (*(int *)(unsigned)(iVar1 + 0x20) == 0) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_4_0253e4(iVar1 + 0x78,ar5,iVar6,ar7_00));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c020e80(ar5,*(undefined4 *)(unsigned)(iVar1 + 0x14),*(undefined4 *)(unsigned)(ar4 + 0x410),uVar3));
        if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(unsigned)(iVar1 + 0x14),"Failed to load tex:CAnimal::LoadTRReq()",0,2);
        }
      }
      else {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_4_0253e4(iVar1 + 0x78,ar5,iVar6,ar7_00));
        iVar2 = s_CDCGD_ReadPVMFileReq_021082
                          (ar5,*(undefined4 *)(unsigned)(iVar1 + 0x20),*(undefined4 *)(unsigned)(ar4 + 0x410),uVar3,s0);
        if (iVar2 == 0) {
          report_error_message
                    ("Failed to load body pvm textuer..","CAnimal::LoadTextureResourceReq()",0,2);
        }
      }
      if (iVar2 == 1) {
        if (*(int *)(unsigned)(iVar1 + 0x34) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x418) = 8;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x418) = 9;
        }
      }
      break;
    case 8:
      if (*(int *)(unsigned)(iVar1 + 0x10) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 0;
        uVar5 = 1;
      }
      else {
        if (*(int *)(unsigned)(iVar1 + 0x48) == 0) {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_4_0253e4(iVar1 + 0x88,((void *)0x8c0253e4),iVar6,ar7_00));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c020e80(ar5,*(undefined4 *)(unsigned)(iVar1 + 0x10),*(undefined4 *)(unsigned)(ar4 + 0x410),uVar3))
          ;
          if (iVar2 == 0) {
            report_error_message
                      (*(undefined4 *)(unsigned)(iVar1 + 0x10),"Failed to load tex:CAnimal::LoadTRReq()",0,2);
          }
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x48,*(undefined4 *)(unsigned)(iVar1 + 0xc),ar7_00));
          iVar6 = iVar1 + 0x50;
          uVar3 = 0x88;
          iVar2 = iVar6;
          (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 0x88) + 8))))((int *)(unsigned)(iVar1 + 0x88),iVar6,0x88,iVar6));
          uVar3 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_4_0253e4(iVar1 + 0x88,iVar6,uVar3,iVar2));
          iVar2 = s_CDCGD_ReadPVMFileReq_021082
                            (ar5,*(undefined4 *)(unsigned)(iVar1 + 0x48),*(undefined4 *)(unsigned)(ar4 + 0x410),uVar3,s0
                            );
          if (iVar2 == 0) {
            report_error_message
                      ("Failed to load face pvm textuer..","CAnimal::LoadGResourceReq()",0,2);
          }
        }
        if (iVar2 == 1) {
          if (*(int *)(unsigned)(iVar1 + 0x5c) == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x418) = 0;
            uVar5 = 1;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 0x418) = 0xb;
          }
        }
      }
      break;
    case 9:
      iVar6 = *(int *)(unsigned)(iVar1 + 0xc);
      (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x34,iVar6,ar7_00));
      a5 = iVar1 + 0x3c;
      (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 0x80) + 8))))((int *)(unsigned)(iVar1 + 0x80),a5,iVar6,ar7_00));
      *(undefined4 *)(unsigned)(ar4 + 0x418) = 10;
    case 10:
      uVar3 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_4_0253e4(iVar1 + 0x80,a5,iVar6,ar7_00));
      iVar1 = s_CDCGD_ReadPVMFileReq_021082
                        (ar5,*(undefined4 *)(unsigned)(iVar1 + 0x34),*(undefined4 *)(unsigned)(ar4 + 0x410),uVar3,s0);
      if (iVar1 == 0) {
        report_error_message
                  ("Failed to load SPECIAL body pvm textuer..","CAnimal::LoadGResourceReq()",0,2);
      }
      if (iVar1 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 8;
      }
      break;
    case 0xb:
      uVar3 = *(undefined4 *)(unsigned)(iVar1 + 0xc);
      iVar6 = iVar1 + 0x5c;
      (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimal_SetPVMTexture_s_029404(ar4,iVar6,uVar3,iVar6));
      iVar2 = iVar1 + 100;
      (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 0x90) + 8))))((int *)(unsigned)(iVar1 + 0x90),iVar2,uVar3,iVar6));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_4_0253e4(iVar1 + 0x90,iVar2,uVar3,iVar6));
      iVar1 = s_CDCGD_ReadPVMFileReq_021082
                        (ar5,*(undefined4 *)(unsigned)(iVar1 + 0x5c),*(undefined4 *)(unsigned)(ar4 + 0x410),uVar3,s0);
      if (iVar1 == 0) {
        report_error_message
                  ("Failed to load SPECIAL face pvm textuer..","CAnimal::LoadGResourceReq()",0,2);
      }
      if (iVar1 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 0;
        uVar5 = 1;
      }
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 176)), report_error_message("Invalid Load Sequence..","CAnimal::LoadGResourceReq()",0,2));
  }
  return uVar5;
}

__asm__(".globl _s_Failed_to_load_Pack_CAnimal__027a86\n.set _s_Failed_to_load_Pack_CAnimal__027a86, _s_Failed_to_load_Pack_CAnimal__027a86_def\n");
