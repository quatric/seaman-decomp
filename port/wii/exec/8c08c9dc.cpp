#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_cp_ESA_FRONT_HOME_njd_08c9ea_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("s_cp_ESA_FRONT_HOME_njd_08c9ea");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 184; for (int i_ = 0; i_ < 184; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *ar5_00;
  code *a6;
  le<int>* a7;
  le<undefined4>* puVar4;
  undefined4 ar6_00;
  undefined4 uVar5;
  int s0;
  
  ((le<undefined4>* )(fr0_ - 0x24))[0] = 0;
  (*(le<undefined4>* )(fr0_ - 0x28)) = 0;
  uVar5 = 0;
  a7 = (le<int>* )(unsigned)0x2;
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x328) + ar6 * 0x124;
  s0 = ar4 + ar6;
  (*(le<undefined4>* )(fr0_ - 0x2c)) = 0;
  iVar2 = *(le<int>* )(unsigned)(ar4 + 0x418);
  a6 = (code *)0xb;
  if ((iVar2 < 0xc) && (-1 < iVar2)) {
    ar5_00 = (&(*(undefined1 *)(unsigned)0x8c08ca68))[iVar2];
                    
    switch(iVar2) {
    case 0:
      *(le<undefined2>* )(unsigned)(ar4 + 0x414) = 0;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c0209b0(ar5,(*(le<undefined4>* )(unsigned)(unsigned)0x8c139e9c),*(le<undefined4>* )(unsigned)(ar4 + 0x410),
                           ((le<undefined4>* )(fr0_ - 0x24))));
      if (iVar2 == 1) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x848) = ((le<undefined4>* )(fr0_ - 0x24))[0];
        *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 1;
      }
      else if (iVar2 == 0) {
        (vsp = ((unsigned long)(fr0_ - 184)), report_error_message(*(le<undefined4>* )(unsigned)(iVar1 + 0xc),((undefined1 *)(unsigned)0x8c13a5ed),0,2));
      }
      break;
    case 1:
      if (*(le<int>* )(unsigned)(iVar1 + 0x18) == 0) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 2;
      }
      else {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c020d90(ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0x18),*(le<undefined4>* )(unsigned)(ar4 + 0x410),s0));
        if (iVar2 == 1) {
          *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 2;
        }
        else if (iVar2 == 0) {
          report_error_message
                    (*(le<undefined4>* )(unsigned)(iVar1 + 0x18),((undefined1 *)(unsigned)0x8c13a600),0,2);
        }
      }
      break;
    case 2:
      if (*(le<int>* )(unsigned)(iVar1 + 4) == 0) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 3;
      }
      else {
        iVar1 = s_Failed_to_Read_CAnimal_LoadM_02839e
                          (ar4,*(le<undefined4>* )(unsigned)(*(le<short>* )(unsigned)(ar4 + 0x414) * 4 + *(le<int>* )(unsigned)(iVar1 + 4)),
                           *(le<undefined4>* )(unsigned)(ar4 + 0x410),
                           *(le<int>* )(unsigned)(iVar1 + 0xa0) + *(le<short>* )(unsigned)(ar4 + 0x414) * 4,ar4 + 0x414,
                           (int)*(le<short>* )(unsigned)(iVar1 + 0xa4),ar5,s0,0);
        if (iVar1 == 1) {
          *(le<undefined2>* )(unsigned)(ar4 + 0x414) = 0;
          *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 3;
        }
      }
      break;
    case 3:
      if (*(le<int>* )(unsigned)(iVar1 + 0x1c) == 0) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 4;
      }
      else {
        puVar4 = &(*(le<undefined4>* )(fr0_ - 0x2c));
        uVar3 = *(le<undefined4>* )(unsigned)(ar4 + 0x410);
        iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c020ba0(ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0x1c),uVar3,puVar4));
        if (iVar2 == 1) {
          ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0xb8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 184)); FUN_8c015bb0(iVar1 + 0xb0,(*(le<undefined4>* )(fr0_ - 0x2c)),uVar3,puVar4); });
          *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 4;
        }
        else if (iVar2 == 0) {
          report_error_message
                    (*(le<undefined4>* )(unsigned)(iVar1 + 0x18),((undefined1 *)(unsigned)0x8c13a600),0,2);
        }
      }
      break;
    case 4:
      if (*(le<int>* )(unsigned)(iVar1 + 8) == 0) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 5;
      }
      else {
        iVar1 = s_Failed_to_Read_CAnimal_LoadM_02839e
                          (ar4,*(le<undefined4>* )(unsigned)(*(le<short>* )(unsigned)(ar4 + 0x414) * 4 + *(le<int>* )(unsigned)(iVar1 + 8)),
                           *(le<undefined4>* )(unsigned)(ar4 + 0x410),
                           *(le<int>* )(unsigned)(iVar1 + 0xa8) + *(le<short>* )(unsigned)(ar4 + 0x414) * 4,ar4 + 0x414,
                           (int)*(le<short>* )(unsigned)(iVar1 + 0xac),ar5,s0,1);
        if (iVar1 == 1) {
          *(le<undefined2>* )(unsigned)(ar4 + 0x414) = 0;
          *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 5;
        }
      }
      break;
    case 5:
      puVar4 = ((le<undefined4>* )(fr0_ - 0x24));
      uVar3 = *(le<undefined4>* )(unsigned)(ar4 + 0x410);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c0209b0(ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0xc),uVar3,puVar4));
      if (iVar2 == 1) {
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0xb8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 184)); FUN_8c015ad4(iVar1 + 0x70,((le<undefined4>* )(fr0_ - 0x24))[0],uVar3,puVar4); });
        *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 6;
      }
      else if (iVar2 == 0) {
        (vsp = ((unsigned long)(fr0_ - 184)), report_error_message(*(le<undefined4>* )(unsigned)(iVar1 + 0xc),((undefined1 *)(unsigned)0x8c13a5ed),0,2));
      }
      break;
    case 6:
      if (*(le<int>* )(unsigned)(iVar1 + 0x20) == 0) {
        puVar4 = &(*(le<undefined4>* )(fr0_ - 0x28));
        uVar3 = *(le<undefined4>* )(unsigned)(ar4 + 0x410);
        iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c020aa8(ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0xc),uVar3,puVar4));
        if (iVar2 == 1) {
          (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar1 + 0x78) + 8))))((le<int>* )(unsigned)(iVar1 + 0x78),(*(le<undefined4>* )(fr0_ - 0x28)),uVar3,puVar4));
          *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 7;
        }
        else if (iVar2 == 0) {
          (vsp = ((unsigned long)(fr0_ - 184)), report_error_message(*(le<undefined4>* )(unsigned)(iVar1 + 0xc),((undefined1 *)(unsigned)0x8c13a629),0,2));
        }
      }
      else {
        uVar3 = *(le<undefined4>* )(unsigned)(iVar1 + 0xc);
        (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x20,uVar3,2));
        (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar1 + 0x78) + 8))))((le<int>* )(unsigned)(iVar1 + 0x78),iVar1 + 0x28,uVar3,a7));
        *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 7;
      }
      break;
    case 7:
      if (*(le<int>* )(unsigned)(iVar1 + 0x20) == 0) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 184)), get_field_4_0253e4(iVar1 + 0x78,ar5_00,0xb,2));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c020e80(ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0x14),*(le<undefined4>* )(unsigned)(ar4 + 0x410),uVar3));
        if (iVar2 == 0) {
          report_error_message
                    (*(le<undefined4>* )(unsigned)(iVar1 + 0x14),((undefined1 *)(unsigned)0x8c13a65e),0,2);
        }
      }
      else {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 184)), get_field_4_0253e4(iVar1 + 0x78,ar5_00,0xb,2));
        iVar2 = s_CDCGD_ReadPVMFileReq_021082
                          (ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0x20),*(le<undefined4>* )(unsigned)(ar4 + 0x410),uVar3,s0);
        if (iVar2 == 0) {
          report_error_message
                    (((undefined1 *)(unsigned)0x8c13a495),
                     ((undefined1 *)(unsigned)0x8c13a63c),0,2);
        }
      }
      if (iVar2 == 1) {
        if (*(le<int>* )(unsigned)(iVar1 + 0x34) == 0) {
          *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 8;
        }
        else {
          *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 9;
        }
      }
      break;
    case 8:
      if (*(le<int>* )(unsigned)(iVar1 + 0x10) == 0) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 0;
        uVar5 = 1;
      }
      else {
        if (*(le<int>* )(unsigned)(iVar1 + 0x48) == 0) {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 184)), get_field_4_0253e4(iVar1 + 0x88,ar5_00,0xb,2));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c020e80(ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0x10),*(le<undefined4>* )(unsigned)(ar4 + 0x410),uVar3))
          ;
          if (iVar2 == 0) {
            report_error_message
                      (*(le<undefined4>* )(unsigned)(iVar1 + 0x10),((undefined1 *)(unsigned)0x8c13a65e),0,2
                      );
          }
        }
        else {
          ar6_00 = *(le<undefined4>* )(unsigned)(iVar1 + 0xc);
          uVar3 = ar6_00;
          (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x48,ar6_00,ar6_00));
          iVar2 = iVar1 + 0x50;
          (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar1 + 0x88) + 8))))((le<int>* )(unsigned)(iVar1 + 0x88),iVar2,ar6_00,uVar3));
          uVar3 = (vsp = ((unsigned long)(fr0_ - 184)), get_field_4_0253e4(iVar1 + 0x88,iVar2,ar6_00,uVar3));
          iVar2 = s_CDCGD_ReadPVMFileReq_021082
                            (ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0x48),*(le<undefined4>* )(unsigned)(ar4 + 0x410),uVar3,s0
                            );
          if (iVar2 == 0) {
            report_error_message
                      (((undefined1 *)(unsigned)0x8c13a6cc),
                       ((undefined1 *)(unsigned)0x8c13a6b0),0,2);
          }
        }
        if (iVar2 == 1) {
          if (*(le<int>* )(unsigned)(iVar1 + 0x5c) == 0) {
            *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 0;
            uVar5 = 1;
          }
          else {
            *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 0xb;
          }
        }
      }
      break;
    case 9:
      (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x34,*(le<undefined4>* )(unsigned)(iVar1 + 0xc),2));
      a7 = (le<int>* )(unsigned)(iVar1 + 0x80);
      a6 = ((code *)(unsigned long)*(le<unsigned>* )(unsigned)(*a7 + 8));
      (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)a6))(a7,iVar1 + 0x3c,a6,a7));
      ar5_00 = (undefined *)(unsigned)0xa;
      *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 10;
    case 10:
      uVar3 = (vsp = ((unsigned long)(fr0_ - 184)), get_field_4_0253e4(iVar1 + 0x80,ar5_00,a6,a7));
      iVar1 = s_CDCGD_ReadPVMFileReq_021082
                        (ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0x34),*(le<undefined4>* )(unsigned)(ar4 + 0x410),uVar3,s0);
      if (iVar1 == 0) {
        report_error_message
                  (((undefined1 *)(unsigned)0x8c13a686),
                   ((undefined1 *)(unsigned)0x8c13a6b0),0,2);
      }
      if (iVar1 == 1) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 8;
      }
      break;
    case 0xb:
      uVar3 = *(le<undefined4>* )(unsigned)(iVar1 + 0xc);
      (vsp = ((unsigned long)(fr0_ - 184)), s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x5c,uVar3,2));
      iVar2 = iVar1 + 100;
      (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar1 + 0x90) + 8))))((le<int>* )(unsigned)(iVar1 + 0x90),iVar2,uVar3,a7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 184)), get_field_4_0253e4(iVar1 + 0x90,iVar2,uVar3,a7));
      iVar1 = s_CDCGD_ReadPVMFileReq_021082
                        (ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0x5c),*(le<undefined4>* )(unsigned)(ar4 + 0x410),uVar3,s0);
      if (iVar1 == 0) {
        report_error_message
                  (((undefined1 *)(unsigned)0x8c13a6ee),
                   ((undefined1 *)(unsigned)0x8c13a6b0),0,2);
      }
      if (iVar1 == 1) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 0;
        uVar5 = 1;
      }
    }
  }
  else {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13a718),((undefined1 *)(unsigned)0x8c13a6b0),0,2);
  }
  return uVar5;
}

__asm__(".globl s_cp_ESA_FRONT_HOME_njd_08c9ea\n.set s_cp_ESA_FRONT_HOME_njd_08c9ea, s_cp_ESA_FRONT_HOME_njd_08c9ea_def\n");

}
