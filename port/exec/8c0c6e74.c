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
undefined4 s_SEAMAN_0c6e7e_def(int ar4,int ar5,undefined4 ar6,char *ar7)

{
  ring[rp++ & 255] = "s_SEAMAN_0c6e7e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint ar5_00;
  undefined4 uVar5;
  uint extraout_fr1 = 0;
  char cVar6;
  
  cVar6 = '\0';
  iVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x38)),iVar2,ar6,ar7));
  uVar5 = 1;
  if ((*(undefined1 *)(unsigned)0x8c437124) == '\0') {
    if (cVar6 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437120) = (*(undefined4 *)(unsigned)(unsigned)0x8c437120) & 0xffffffff00000000;
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437120) = (ulonglong)extraout_fr1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c437120) = CONCAT14(1,(*(undefined4 *)(unsigned)(unsigned)0x8c437120));
  }
  if ((*(undefined1 *)(unsigned)0x8c43712c) == '\0') {
    if (cVar6 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437128) = (*(undefined4 *)(unsigned)(unsigned)0x8c437128) & 0xffffffff00000000;
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437128) = (ulonglong)extraout_fr1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c437128) = CONCAT14(1,(*(undefined4 *)(unsigned)(unsigned)0x8c437128));
  }
  ar5_00 = 0x7d4;
  *(undefined4 *)(unsigned)(ar5 + 0x7d4) = *(undefined4 *)(unsigned)(ar4 + 0x2d160);
  piVar3 = (int *)(unsigned)(uint)*(byte *)(unsigned)(ar5 + 0xa0);
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0d1c14(piVar3,0x7d4,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x2d160) != 0) {
    if (*(int *)(unsigned)(ar4 + 0x2d160) == 1) {
      (vsp = ((unsigned long)(fr0_ - 60)), pure_virtual_stub(ar4,ar5,ar6,ar7));
    }
    goto LAB_8c0c7340;
  }
  if (*(int *)(unsigned)(ar5 + 0x84) == 0) {
    if ((*(int *)(unsigned)(ar5 + 0x88) != 0) && (*(int *)(unsigned)(ar5 + 0x88) != 1)) {
      piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 0x84));
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b7920(piVar3,ar5_00,ar6,ar7));
      uVar4 = (vsp = ((unsigned long)(fr0_ - 60)), s_SEAMANDC_USR_0b76dc(piVar3,ar5_00,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x2d16c) = uVar4;
      if (*(int *)(unsigned)(ar4 + 0x2d16c) == 0) {
        piVar3 = (int *)(unsigned)(ar5 + 0x96);
        uVar4 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b77a0(piVar3,ar5_00,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x2d168) = uVar4;
      }
    }
    if (*(int *)(unsigned)(ar5 + 0x88) != 0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 60)), get_field_d0_0c51fc(*(undefined4 *)(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
      ar5_00 = (uint)*(byte *)(unsigned)(ar5 + 0xa0);
      piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar2 * 4 + 8));
      (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar3 + 0xa8))))(piVar3,ar5_00,ar6,ar7));
    }
    if (*(int *)(unsigned)(ar4 + 0x2d168) == 0) {
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b79f0(piVar3,ar5_00,ar6,ar7));
      ar7 = ((undefined1 *)(unsigned)0x8c13d092);
      ar6 = 0;
      (vsp = ((unsigned long)(fr0_ - 60)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),5,0,((undefined1 *)(unsigned)0x8c13d092)));
      goto LAB_8c0c7340;
    }
    if (*(int *)(unsigned)(ar4 + 0x2d16c) != 0) {
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b79f0(piVar3,ar5_00,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b787c(*(undefined4 *)(unsigned)(ar4 + 0x2d16c),ar5_00,ar6,ar7));
      goto LAB_8c0c7340;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c1000c8(*(undefined4 *)(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
    if ((((iVar2 == 1) && (*(int *)(unsigned)(ar4 + 0x2d164) == 0)) && ((*(undefined4 *)(unsigned)(unsigned)0x8c13bcc4) == 1)) &&
       (*(int *)(unsigned)(ar4 + 0x2d39c) == 0)) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 60)), get_field_d0_0c51fc(*(undefined4 *)(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
      piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar2 * 4 + 8));
      (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar3 + 0xa4))))(piVar3,(uint)*(byte *)(unsigned)(ar5 + 0xa0),ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x2d164) = 1;
    }
    if (*(int *)(unsigned)(ar4 + 0x2d164) == 1) {
      iVar2 = ar5;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), s_WARNING_EXIT_0c76d0(ar4,ar5,ar6,ar7));
      if (iVar1 == 1) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 60)), get_field_d0_0c51fc(*(undefined4 *)(unsigned)(ar5 + 0x7cc),iVar2,ar6,ar7));
        piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar2 * 4 + 8));
        (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar3 + 0xa8))))(piVar3,(uint)*(byte *)(unsigned)(ar5 + 0xa0),ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x2d164) = 0;
      }
      else if (iVar1 == 0) {
        uVar5 = 0;
      }
    }
    else {
      iVar2 = ar5;
      (vsp = ((unsigned long)(fr0_ - 60)), pure_virtual_stub(ar4,ar5,ar6,ar7));
      if (((*(undefined4 *)(unsigned)(unsigned)0x8c436924) == 1) && ((*(undefined4 *)(unsigned)(unsigned)0x8c13bcc4) == 1)) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0637d0(*(undefined4 *)(unsigned)(ar5 + 0x7cc),iVar2,ar6,ar7));
        if (iVar1 == 0) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), get_field_d4_0c7424(*(undefined4 *)(unsigned)(ar5 + 0x7cc),iVar2,ar6,ar7));
        }
        (vsp = ((unsigned long)(fr0_ - 60)), s_wtNumberOfItems_is_over_CGam_0c5df6(ar4,ar5,iVar1,0x8c431a68));
        ar7 = ((undefined1 *)(unsigned)0x8c13d157);
        ar6 = 0x4208;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b6c3c(((undefined1 *)(unsigned)0x8c13d13d),0x8c431a68,0x4208,((undefined1 *)(unsigned)0x8c13d157)));
        if (iVar2 == 0) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c436924) = 0;
        }
      }
    }
  }
  else {
    if (*(int *)(unsigned)(ar5 + 0x88) == 0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 60)), get_field_d0_0c51fc(*(undefined4 *)(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
      ar5_00 = (uint)*(byte *)(unsigned)(ar5 + 0xa0);
      piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar2 * 4 + 8));
      (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar3 + 0xa4))))(piVar3,ar5_00,ar6,ar7));
    }
    uVar4 = 0x8c35468c;
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0f8214(0x8c35468c,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b79f0(uVar4,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b7920(*(undefined4 *)(unsigned)(ar5 + 0x84),ar5_00,ar6,ar7));
  }
  uVar4 = 2;
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0c412c(((undefined1 *)(unsigned)0x8c2b5628),2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0c42b0(((undefined1 *)(unsigned)0x8c2b5628),uVar4,ar6,ar7));
LAB_8c0c7340:
  iVar2 = ar4;
  iVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 60)), pure_virtual_stub(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0d1c84(iVar2,iVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0fedf4(*(undefined4 *)(unsigned)(ar5 + 2000),0x8c3eb334,ar6,ar7));
  if (*(byte *)(unsigned)(ar5 + 0xa0) < *(byte *)(unsigned)(ar5 + 0xa1)) {
    *(undefined4 *)(unsigned)(ar4 + 0x2d160) = 1;
    *(undefined4 *)(unsigned)(ar4 + 0x2d15c) = 1;
    *(undefined1 *)(unsigned)(ar5 + 0xa1) = (*(undefined1 *)(unsigned)0x8c436548);
  }
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  return uVar5;
}

__asm__(".globl _s_SEAMAN_0c6e7e\n.set _s_SEAMAN_0c6e7e, _s_SEAMAN_0c6e7e_def\n");
