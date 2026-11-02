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
undefined4 s_SEAMAN_SM_0cb670_def(int ar4,code *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_SEAMAN_SM_0cb670";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 ar5_00;
  int ar5_01;
  int ar6_00;
  undefined4 *a6;
  char *a7;
  undefined4 in_fr1 = 0;
  char cVar6;
  
  cVar6 = '\0';
  (*(undefined4 *)(fr0_ - 0x58)) = 0;
  pcVar5 = ar5;
  if ((*(undefined1 *)(unsigned)0x8c437300) == '\0') {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_zero(0x8c437304,ar5,ar6,ar7));
    ar6 = 0x8c4372f4;
    pcVar5 = ((void *)0x8c022cb0);
    (vsp = ((unsigned long)(fr0_ - 104)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c4372f4,ar7));
    (*(undefined1 *)(unsigned)0x8c437300) = '\x01';
  }
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x24)),pcVar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),pcVar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0c84cc(&(*(undefined4 *)(fr0_ - 0x54)),pcVar5,ar6,ar7));
  if (cVar6 == '\0') {
    (*(undefined4 *)(fr0_ - 0x60)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x58)) = 0;
    (*(undefined4 *)(fr0_ - 0x60)) = in_fr1;
  }
  (*(undefined4 *)(fr0_ - 0x5c)) = 0;
  if (cVar6 == '\0') {
    (*(undefined4 *)(fr0_ - 0x64)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x60)) = 0;
    (*(undefined4 *)(fr0_ - 0x64)) = in_fr1;
  }
  uVar1 = 0;
  ar6_00 = ar4 + 8;
  ar5_00 = *(undefined4 *)(unsigned)(ar5 + 0x7cc);
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0cbd0c(ar4,ar5_00,ar6_00,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 104)), get_field_d0_0c51fc(*(undefined4 *)(unsigned)(ar5 + 0x7cc),ar5_00,ar6_00,ar7));
  ar5_01 = ar4 + 8;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0b9244(ar5,ar5_01,ar6_00,ar7));
  if (iVar3 == 1) {
    (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0xac))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5_01,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0xac))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),ar5_01,ar6_00,ar7));
    (*(undefined4 *)(unsigned)(unsigned)0x8c436a28) = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0ffdb0(*(undefined4 *)(unsigned)(ar5 + 0x7cc),ar5_01,ar6_00,ar7));
  a7 = (char *)(unsigned)&(*(undefined4 *)(fr0_ - 0x64));
  piVar4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar2 * 4 + 8));
  (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar4 + 0x13c))))(piVar4,&(*(undefined4 *)(fr0_ - 0x5c)),&(*(undefined4 *)(fr0_ - 0x60)),a7));
  if (cVar6 != '\0') {
    (*(undefined4 *)(fr0_ - 0x38)) = (*(undefined4 *)(fr0_ - 0x60));
    in_fr1 = (*(undefined4 *)(fr0_ - 0x64));
  }
  (*(undefined4 *)(fr0_ - 0x3c)) = (*(undefined4 *)(fr0_ - 0x64));
  (*(undefined4 *)(fr0_ - 0x40)) = (*(undefined4 *)(fr0_ - 0x60));
  (*(undefined4 *)(fr0_ - 0x44)) = (*(undefined4 *)(fr0_ - 0x5c));
  if (cVar6 == '\0') {
    (*(undefined4 *)(fr0_ - 0x54)) = 0;
    (*(undefined4 *)(fr0_ - 0x4c)) = in_fr1;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x4c)) = 0x43fa0000;
    (*(undefined4 *)(fr0_ - 0x54)) = in_fr1;
  }
  (*(undefined4 *)(fr0_ - 0x50)) = 0x43fa0000;
  if (cVar6 == '\0') {
    (*(undefined4 *)(fr0_ - 0x4c)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x48)) = 0;
  }
  a6 = (undefined4 *)(unsigned)0x8c437308;
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c101210(*(undefined4 *)(unsigned)(ar5 + 0x7cc),0x8c437304,0x8c437308,a7));
  pcVar5 = (code *)0x8c437304;
  piVar4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar2 * 4 + 8));
  (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar4 + 100))))(piVar4,0x8c437304,a6,a7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0637d0(*(undefined4 *)(unsigned)(ar5 + 0x7cc),pcVar5,a6,a7));
  if ((iVar3 != 0) && (iVar3 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0fff28(*(undefined4 *)(unsigned)(ar5 + 0x7cc),pcVar5,a6,a7)), iVar3 == 4))
  {
    pcVar5 = ar5;
    (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0cdf50(ar4,ar5,a6,a7));
  }
  if (iVar2 == 2) {
    (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c101004(*(undefined4 *)(unsigned)(ar5 + 0x7cc),pcVar5,a6,a7));
    (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c101188(*(undefined4 *)(unsigned)(ar5 + 0x7cc),pcVar5,a6,a7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c101154(*(undefined4 *)(unsigned)(ar5 + 0x7cc),pcVar5,a6,a7));
    (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0xc))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5,&(*(undefined4 *)(fr0_ - 0x54)),a7));
    (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x10))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),ar5,&(*(undefined4 *)(fr0_ - 0x54)),a7));
    a6 = &(*(undefined4 *)(fr0_ - 0x54));
    (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)) + 0x10))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)),ar5,a6,a7));
  }
  else if (iVar2 == 1) {
    uVar1 = 0;
    (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0xc))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),ar5,&(*(undefined4 *)(fr0_ - 0x54)),a7));
    (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x10))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5,&(*(undefined4 *)(fr0_ - 0x54)),a7));
    a6 = &(*(undefined4 *)(fr0_ - 0x54));
    (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)) + 0x10))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)),ar5,a6,a7));
  }
  else if (iVar2 == 3) {
    uVar1 = 0;
    (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)) + 0xc))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)),ar5,&(*(undefined4 *)(fr0_ - 0x54)),a7));
    (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x10))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5,&(*(undefined4 *)(fr0_ - 0x54)),a7));
    a6 = &(*(undefined4 *)(fr0_ - 0x54));
    (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x10))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),ar5,a6,a7));
  }
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0ceff8(((undefined1 *)(unsigned)0x8c436a28),uVar1,a6,a7));
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c436928) == 1) && ((*(undefined4 *)(unsigned)(unsigned)0x8c13bcc4) == 1)) {
    (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)) + 0xf8))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)),0x8c435c7c,a6,a7));
    a7 = ((undefined1 *)(unsigned)0x8c13d189);
    a6 = (undefined4 *)(unsigned)0x600;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0b6c3c(((undefined1 *)(unsigned)0x8c13d14a),0x8c435c7c,0x600,((undefined1 *)(unsigned)0x8c13d189)));
    if (iVar2 == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c436928) = 0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0c8480(&(*(undefined4 *)(fr0_ - 0x54)),0xffffffff,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,a6,a7));
  return 0;
}

__asm__(".globl _s_SEAMAN_SM_0cb670\n.set _s_SEAMAN_SM_0cb670, _s_SEAMAN_SM_0cb670_def\n");
