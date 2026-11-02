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
undefined4 s_GRAPHICS_HERBLINE_06ce12_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_HERBLINE_06ce12";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 140; for (int i_ = 0; i_ < 140; i_++) z_[i_] = 0; }
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
  
  ((undefined4 *)(fr0_ - 0x24))[0] = 0;
  puVar7 = (undefined4 *)(unsigned)0x0;
  (*(unsigned *)(fr0_ - 0x28) = (unsigned)(unsigned long)((undefined4 *)(unsigned)0x0));
  puVar6 = (undefined *)(unsigned)0x0;
  (*(undefined4 *)(fr0_ - 0x2c)) = 0;
  uVar1 = 0;
  for (a6 = 0; a6 < 2; a6 = a6 + 1) {
    iVar4 = *(int *)(unsigned)(ar4 + 0x224) + a6 * 0x124;
    if (*(int *)(unsigned)(iVar4 + 0x18) != 0) {
      puVar7 = (undefined4 *)(unsigned)(ar4 + a6);
      puVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c136f4c);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c020ddc(ar5,*(undefined4 *)(unsigned)(iVar4 + 0x18),(*(undefined4 *)(unsigned)(unsigned)0x8c136f4c),puVar7
                          ));
      if (iVar2 == 0) {
        puVar7 = (undefined4 *)(unsigned)0x2;
        puVar6 = (undefined *)(unsigned)0x0;
        report_error_message
                  (*(undefined4 *)(unsigned)(iVar4 + 0x18),((undefined1 *)(unsigned)0x8c13741d),0,2);
      }
    }
    for (iVar2 = 0; iVar2 < *(short *)(unsigned)(iVar4 + 0xa4); iVar2 = iVar2 + 1) {
      if (*((char *)(unsigned long)*(unsigned *)(unsigned)(iVar2 * 4 + *(int *)(unsigned)(iVar4 + 4))) == '\0') {
        puVar7 = (undefined4 *)(unsigned)0x2;
        puVar6 = (undefined *)(unsigned)0x0;
        (vsp = ((unsigned long)(fr0_ - 140)), report_error_message(((undefined1 *)(unsigned)0x8c137452),((undefined1 *)(unsigned)0x8c137460),0,2));
        ((undefined4 *)(fr0_ - 0x24))[0] = 0;
      }
      else {
        puVar7 = ((undefined4 *)(fr0_ - 0x24));
        puVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c136f4c);
        iVar3 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c020bec(ar5,*(undefined4 *)(unsigned)(iVar2 * 4 + *(int *)(unsigned)(iVar4 + 4)),
                             (*(undefined4 *)(unsigned)(unsigned)0x8c136f4c),puVar7));
        if (iVar3 == 0) {
          puVar7 = (undefined4 *)(unsigned)0x2;
          puVar6 = (undefined *)(unsigned)0x0;
          report_error_message
                    (*(undefined4 *)(unsigned)(iVar2 * 4 + *(int *)(unsigned)(iVar4 + 4)),((undefined1 *)(unsigned)0x8c13743f),
                     0,2);
        }
      }
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x8c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 140)); FUN_8c015bb0(*(int *)(unsigned)(iVar4 + 0xa0) + iVar2 * 4,((undefined4 *)(fr0_ - 0x24))[0],puVar6,puVar7); })
      ;
    }
    for (iVar2 = 0; iVar2 < *(short *)(unsigned)(iVar4 + 0xac); iVar2 = iVar2 + 1) {
      if (*((char *)(unsigned long)*(unsigned *)(unsigned)(iVar2 * 4 + *(int *)(unsigned)(iVar4 + 8))) == '\0') {
        ((undefined4 *)(fr0_ - 0x24))[0] = 0;
      }
      else {
        puVar7 = ((undefined4 *)(fr0_ - 0x24));
        puVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c136f4c);
        iVar3 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c020ce4(ar5,*(undefined4 *)(unsigned)(iVar2 * 4 + *(int *)(unsigned)(iVar4 + 8)),
                             (*(undefined4 *)(unsigned)(unsigned)0x8c136f4c),puVar7));
        if (iVar3 == 0) {
          puVar7 = (undefined4 *)(unsigned)0x2;
          puVar6 = (undefined *)(unsigned)0x0;
          report_error_message
                    (*(undefined4 *)(unsigned)(iVar2 * 4 + *(int *)(unsigned)(iVar4 + 8)),((undefined1 *)(unsigned)0x8c137474),
                     0,2);
        }
        ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x8c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 140)); FUN_8c015be4(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x224) + a6 * 0x124 + 0xa8) + iVar2 * 4,((undefined4 *)(fr0_ - 0x24))[0],
                     puVar6,puVar7); });
      }
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x8c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 140)); FUN_8c015be4(*(int *)(unsigned)(iVar4 + 0xa8) + iVar2 * 4,((undefined4 *)(fr0_ - 0x24))[0],puVar6,puVar7); })
      ;
    }
    ar7_00 = ((undefined4 * *)(fr0_ - 0x28));
    puVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c136f4c);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0209fc(ar5,*(undefined4 *)(unsigned)(iVar4 + 0xc),(*(undefined4 *)(unsigned)(unsigned)0x8c136f4c),ar7_00));
    if (iVar2 == 0) {
      ar7_00 = (undefined4 **)(unsigned)0x2;
      puVar6 = (undefined *)(unsigned)0x0;
      report_error_message
                (*(undefined4 *)(unsigned)(iVar4 + 0xc),((undefined1 *)(unsigned)0x8c137487),0,2);
    }
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x8c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 140)); FUN_8c015ad4(iVar4 + 0x70,((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x28)),puVar6,ar7_00); });
    (*(int *)(fr0_ - 0x8c)) = (vsp = ((unsigned long)(fr0_ - 140)), libgcc_divide_helper_01031c(*(undefined4 *)(unsigned)(ar4 + 0x210),4,puVar6,ar7_00));
    if ((*(int *)(fr0_ - 0x8c)) == 0) {
      if (*(int *)(unsigned)(iVar4 + 0x20) == 0) {
        puVar7 = &(*(undefined4 *)(fr0_ - 0x2c));
        puVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c136f4c);
        iVar2 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c020af4(ar5,*(undefined4 *)(unsigned)(iVar4 + 0xc),(*(undefined4 *)(unsigned)(unsigned)0x8c136f4c),
                             puVar7));
        if (iVar2 == 0) {
          puVar7 = (undefined4 *)(unsigned)0x2;
          puVar6 = (undefined *)(unsigned)0x0;
          report_error_message
                    (*(undefined4 *)(unsigned)(iVar4 + 0xc),((undefined1 *)(unsigned)0x8c1374ed),0,2);
        }
        (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar4 + 0x78) + 8))))((int *)(unsigned)(iVar4 + 0x78),(*(undefined4 *)(fr0_ - 0x2c)),puVar6,puVar7));
        iVar4 = a6;
        (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xe4))))(ar4,ar5,a6,puVar7));
        (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x208) + 8))))((int *)(unsigned)(ar4 + 0x208),(*(undefined4 *)(fr0_ - 0x2c)),iVar4,puVar7));
      }
      else {
        uVar1 = *(undefined4 *)(unsigned)(iVar4 + 0xc);
        (vsp = ((unsigned long)(fr0_ - 140)), s_CHerb_SetPVMTexture_s_06d61c(ar4,iVar4 + 0x20,uVar1,ar7_00));
        iVar2 = iVar4 + 0x28;
        (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar4 + 0x78) + 8))))((int *)(unsigned)(iVar4 + 0x78),iVar2,uVar1,ar7_00));
        uVar1 = (vsp = ((unsigned long)(fr0_ - 140)), get_field_4_0253e4(iVar4 + 0x78,iVar2,uVar1,ar7_00));
        pcVar5 = ((char *)(unsigned long)*(unsigned *)(unsigned)(iVar4 + 0x20));
        puVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c136f4c);
        iVar2 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c02100c(ar5,pcVar5,(*(undefined4 *)(unsigned)(unsigned)0x8c136f4c),uVar1));
        if (iVar2 == 0) {
          uVar1 = 2;
          puVar6 = (undefined *)(unsigned)0x0;
          pcVar5 = ((undefined1 *)(unsigned)0x8c1374d0);
          report_error_message
                    (((undefined1 *)(unsigned)0x8c1374ae),
                     ((undefined1 *)(unsigned)0x8c1374d0),0,2);
        }
        a5 = (vsp = ((unsigned long)(fr0_ - 140)), get_field_4_0253e4(iVar4 + 0x78,pcVar5,puVar6,uVar1));
        (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x208) + 8))))((int *)(unsigned)(ar4 + 0x208),a5,puVar6,uVar1));
      }
    }
    else if (*(int *)(unsigned)(iVar4 + 0x34) == 0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c020af4(ar5,*(undefined4 *)(unsigned)(iVar4 + 0xc),(*(undefined4 *)(unsigned)(unsigned)0x8c136f4c),
                           &(*(undefined4 *)(fr0_ - 0x2c))));
      if (iVar2 == 0) {
        report_error_message
                  (*(undefined4 *)(unsigned)(iVar4 + 0xc),((undefined1 *)(unsigned)0x8c1374ed),0,2);
      }
      a4 = (int *)(unsigned)(iVar4 + 0x78);
      (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 8))))(a4,(*(undefined4 *)(fr0_ - 0x2c)),((code *)(unsigned long)*(unsigned *)(unsigned)(*a4 + 8)),a4));
      iVar4 = a6;
      (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xe4))))(ar4,ar5,a6,a4));
      (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x208) + 8))))((int *)(unsigned)(ar4 + 0x208),(*(undefined4 *)(fr0_ - 0x2c)),iVar4,a4));
    }
    else {
      uVar1 = *(undefined4 *)(unsigned)(iVar4 + 0xc);
      (vsp = ((unsigned long)(fr0_ - 140)), s_CHerb_SetPVMTexture_s_06d61c(ar4,iVar4 + 0x34,uVar1,ar7_00));
      iVar2 = iVar4 + 0x3c;
      (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar4 + 0x80) + 8))))((int *)(unsigned)(iVar4 + 0x80),iVar2,uVar1,ar7_00));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 140)), get_field_4_0253e4(iVar4 + 0x80,iVar2,uVar1,ar7_00));
      pcVar5 = ((char *)(unsigned long)*(unsigned *)(unsigned)(iVar4 + 0x34));
      puVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c136f4c);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c02100c(ar5,pcVar5,(*(undefined4 *)(unsigned)(unsigned)0x8c136f4c),uVar1));
      if (iVar2 == 0) {
        uVar1 = 2;
        puVar6 = (undefined *)(unsigned)0x0;
        pcVar5 = ((undefined1 *)(unsigned)0x8c1374d0);
        report_error_message
                  (((undefined1 *)(unsigned)0x8c1374ae),
                   ((undefined1 *)(unsigned)0x8c1374d0),0,2);
      }
      uVar1 = (vsp = ((unsigned long)(fr0_ - 140)), get_field_4_0253e4(iVar4 + 0x80,pcVar5,puVar6,uVar1));
      (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x208) + 8))))((int *)(unsigned)(ar4 + 0x208),uVar1,0x208,uVar1));
    }
    puVar6 = (undefined *)(unsigned)0x204;
    puVar7 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x28));
    uVar1 = ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x8c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 140)); FUN_8c015ad4(ar4 + 0x204,((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x28)),0x204,((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x28))); });
  }
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_HERBLINE_06ce12\n.set _s_GRAPHICS_HERBLINE_06ce12, _s_GRAPHICS_HERBLINE_06ce12_def\n");
