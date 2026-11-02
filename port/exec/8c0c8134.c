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
undefined4 s_SEAMAN_SM_0c813c_def(int ar4,code *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_SEAMAN_SM_0c813c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  code *ar5_00;
  undefined4 *a6;
  undefined4 *puVar6;
  char *a7;
  undefined4 in_fr1 = 0;
  char cVar7;
  
  cVar7 = '\0';
  ar5_00 = ar5;
  if ((*(undefined1 *)(unsigned)0x8c437224) == '\0') {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 100)), Vec3_ctor_zero(0x8c437228,ar5,ar6,ar7));
    ar6 = -0x73bc8de8;
    ar5_00 = ((void *)0x8c022cb0);
    (vsp = ((unsigned long)(fr0_ - 100)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c437218,ar7));
    (*(undefined1 *)(unsigned)0x8c437224) = '\x01';
  }
  (vsp = ((unsigned long)(fr0_ - 100)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x24)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0c84cc(&(*(undefined4 *)(fr0_ - 0x54)),ar5_00,ar6,ar7));
  if (cVar7 == '\0') {
    (*(undefined4 *)(fr0_ - 0x5c)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x54)) = 0;
    (*(undefined4 *)(fr0_ - 0x5c)) = in_fr1;
  }
  (*(undefined4 *)(fr0_ - 0x58)) = 0;
  if (cVar7 == '\0') {
    (*(undefined4 *)(fr0_ - 0x60)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x5c)) = 0;
    (*(undefined4 *)(fr0_ - 0x60)) = in_fr1;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 100)), get_field_d4_0c7424(*(undefined4 *)(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
  if (iVar2 == 0) {
    ar6 = ar4 + 8;
    ar5_00 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 0x7cc));
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0cbbcc(ar4,ar5_00,ar6,ar7));
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 100)), get_field_d0_0c51fc(*(undefined4 *)(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0ffdb0(*(undefined4 *)(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
  a7 = (char *)(unsigned)&(*(undefined4 *)(fr0_ - 0x60));
  a6 = &(*(undefined4 *)(fr0_ - 0x5c));
  puVar6 = &(*(undefined4 *)(fr0_ - 0x58));
  piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar2 * 4 + 8));
  (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar5 + 0x13c))))(piVar5,puVar6,a6,a7));
  if (cVar7 != '\0') {
    (*(undefined4 *)(fr0_ - 0x38)) = (*(undefined4 *)(fr0_ - 0x5c));
    in_fr1 = (*(undefined4 *)(fr0_ - 0x60));
  }
  (*(undefined4 *)(fr0_ - 0x3c)) = (*(undefined4 *)(fr0_ - 0x60));
  (*(undefined4 *)(fr0_ - 0x40)) = (*(undefined4 *)(fr0_ - 0x5c));
  (*(undefined4 *)(fr0_ - 0x44)) = (*(undefined4 *)(fr0_ - 0x58));
  if (cVar7 == '\0') {
    (*(undefined4 *)(fr0_ - 0x54)) = 0;
    (*(undefined4 *)(fr0_ - 0x4c)) = in_fr1;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x4c)) = 0x43fa0000;
    (*(undefined4 *)(fr0_ - 0x54)) = in_fr1;
  }
  (*(undefined4 *)(fr0_ - 0x50)) = 0x43fa0000;
  if (cVar7 == '\0') {
    (*(undefined4 *)(fr0_ - 0x4c)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x48)) = 0;
  }
  iVar3 = (vsp = ((unsigned long)(fr0_ - 100)), get_field_d4_0c7424(*(undefined4 *)(unsigned)(ar5 + 0x7cc),puVar6,a6,a7));
  if (iVar3 == 0) {
    iVar4 = ar4 + 8;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0b9244(ar5,iVar4,a6,a7));
    if (iVar3 == 1) {
      (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0xac))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),iVar4,a6,a7));
    }
    puVar6 = (undefined4 *)(unsigned)0x8c43722c;
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c101210(*(undefined4 *)(unsigned)(ar5 + 0x7cc),0x8c437228,0x8c43722c,a7));
    uVar1 = 0x8c437228;
    piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar2 * 4 + 8));
    (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar5 + 100))))(piVar5,0x8c437228,puVar6,a7));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0637d0(*(undefined4 *)(unsigned)(ar5 + 0x7cc),uVar1,puVar6,a7));
    if ((iVar3 != 0) &&
       (iVar3 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0fff28(*(undefined4 *)(unsigned)(ar5 + 0x7cc),uVar1,puVar6,a7)), iVar3 == 4)) {
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0cdf50(ar4,ar5,puVar6,a7));
    }
    if (iVar2 == 0) {
      (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0xc))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),ar5,&(*(undefined4 *)(fr0_ - 0x54)),a7));
      puVar6 = &(*(undefined4 *)(fr0_ - 0x54));
      (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)) + 0x10))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)),ar5,puVar6,a7));
    }
    else if (iVar2 == 3) {
      (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)) + 0xc))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)),ar5,&(*(undefined4 *)(fr0_ - 0x54)),a7));
      puVar6 = &(*(undefined4 *)(fr0_ - 0x54));
      (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x10))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),ar5,puVar6,a7));
    }
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c436928) == 1) && ((*(undefined4 *)(unsigned)(unsigned)0x8c13bcc4) == 1)) {
      (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)) + 0xf8))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)),0x8c435c7c,puVar6,a7));
      a7 = ((undefined1 *)(unsigned)0x8c13d189);
      puVar6 = (undefined4 *)(unsigned)0x600;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0b6c3c(((undefined1 *)(unsigned)0x8c13d14a),0x8c435c7c,0x600,((undefined1 *)(unsigned)0x8c13d189)
                          ));
      if (iVar2 == 0) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c436928) = 0;
      }
    }
  }
  else {
    puVar6 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 0x7cc));
    a7 = (char *)(unsigned)ar5;
    iVar4 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0cbd74(ar4,iVar3,puVar6,ar5));
    if (iVar4 == 5) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0c8464(*(undefined4 *)(unsigned)(ar5 + 0x7cc),iVar3,puVar6,a7));
      piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar2 * 4 + 8));
      (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar5 + 0x50))))(piVar5,uVar1,puVar6,a7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0c8480(&(*(undefined4 *)(fr0_ - 0x54)),0xffffffff,puVar6,a7));
  (vsp = ((unsigned long)(fr0_ - 100)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,puVar6,a7));
  (vsp = ((unsigned long)(fr0_ - 100)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,puVar6,a7));
  return 0;
}

__asm__(".globl _s_SEAMAN_SM_0c813c\n.set _s_SEAMAN_SM_0c813c, _s_SEAMAN_SM_0c813c_def\n");
