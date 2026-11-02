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
undefined4 s_WARNING_0c09d0_def(int ar4,int *ar5,undefined4 ar6,code *ar7)

{
  ring[rp++ & 255] = "s_WARNING_0c09d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 212; for (int i_ = 0; i_ < 212; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined4 ar6_00;
  char *ar6_01;
  undefined *ar6_02;
  char cVar9;
  
  cVar9 = '\0';
  pcVar7 = (code *)(int)(*(undefined1 *)(unsigned)0x8c4367c0);
  if ((*(undefined1 *)(unsigned)0x8c4367c0) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0;
    (*(undefined1 *)(unsigned)0x8c4367c0) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c4367c8) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4367c4) = 0;
    (*(undefined1 *)(unsigned)0x8c4367c8) = '\x01';
  }
  iVar6 = ar5[0x21];
  uVar1 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c01f520(0x8c3dd7dc,pcVar7,ar6,ar7));
  if ((*(undefined1 *)(unsigned)0x8c4367e0) == '\0') {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0162f8(0x8c4367e4,((void *)0x8c0162f8),ar6,ar7));
    ar6 = 0x8c4367d4;
    pcVar7 = ((void *)0x8c0151a0);
    (vsp = ((unsigned long)(fr0_ - 212)), global_list_push(uVar2,((void *)0x8c0151a0),0x8c4367d4,ar7));
    (*(undefined1 *)(unsigned)0x8c4367e0) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c436824) == '\0') {
    if (cVar9 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c436820) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c436824),0x42dc0000);
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c436820) = 0xa842dc0000;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c436820) = CONCAT14(1,(*(undefined4 *)(unsigned)(unsigned)0x8c436820));
  }
  if ((*(undefined1 *)(unsigned)0x8c436834) == '\0') {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c1d1c(((undefined1 *)(unsigned)0x8c436838),pcVar7,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 212)), global_list_push(uVar2,((void *)0x8c0c1cec),0x8c436828,ar7));
    (*(undefined1 *)(unsigned)0x8c436834) = '\x01';
  }
  puVar8 = ((undefined1 *)(unsigned)0x8c2b5628);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2b5628) = ar5[0x22];
  iVar3 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0ffff4(ar5[499],(*(undefined4 *)(unsigned)(unsigned)0x8c2b5628),((undefined1 *)(unsigned)0x8c2b5628),ar7));
  if (iVar3 == 1) {
    ar5[0x1f7] = 4;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x11;
  }
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) < 0x1d) && (-1 < (int)(*(undefined4 *)(unsigned)(unsigned)0x8c4367bc))) {
    iVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) * 4;
                    
    switch((*(undefined4 *)(unsigned)(unsigned)0x8c4367bc)) {
    case 0:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 212)), get_field_4_0253e4(ar4 + 0x2e64c,0x2e64c,puVar8,ar7));
      iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c02100c(0x8c3eb334,((undefined1 *)(unsigned)0x8c13c9dc),((undefined1 *)(unsigned)0x8c13c9f3),
                           uVar1));
      if (iVar6 == 0) {
        report_error_message
                  (((undefined1 *)(unsigned)0x8c13ca04),((undefined1 *)(unsigned)0x8c13ca25),1,2);
      }
      uVar2 = 4;
      uVar1 = 0x8c43654c;
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c016318(0x8c4367e4,((undefined1 *)(unsigned)0x8c13bf24),0x8c43654c,4));
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c016324(0x8c4367e4,((undefined1 *)(unsigned)0x8c43655c),uVar1,uVar2));
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c015198(0x8c4367e4,0x80000060,uVar1,uVar2));
      ar7 = (code *)0x0;
      ({ unsigned long t0_ = (unsigned long)(0x8c4367f8); *(unsigned *)((((unsigned long)(fr0_ - 212)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 212)) - 8); s_SEAMAN_0c1da0(ar4,ar5,0x8c3dd7dc,0); });
      (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 1;
      break;
    case 1:
      iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c2068(ar4,0xe,ar5,ar7));
      if (iVar6 == 4) {
        (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0ba34c(((undefined1 *)(unsigned)0x8c436838),0,0,ar7));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 2;
      }
      break;
    case 2:
      iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c2068(ar4,0xd,ar5,ar7));
      if (iVar6 == 4) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367c4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc);
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x12;
      }
      break;
    case 4:
      ar6_00 = 0;
      uVar2 = 1;
      puVar8 = ((undefined1 *)(unsigned)0x8c436838);
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0ba34c(((undefined1 *)(unsigned)0x8c436838),1,0,ar7));
      uVar4 = (vsp = ((unsigned long)(fr0_ - 212)), s_SEAMANDC_USR_0b76dc(puVar8,uVar2,ar6_00,ar7));
      if (((uVar4 & 8) == 8) || ((uVar4 & 0x10) == 0x10)) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 5;
      }
      else if ((uVar4 & 4) == 4) {
        (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c01bc2c(uVar1,((undefined1 *)(unsigned)0x8c13c040),0x8c43680c,ar7));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x1a;
      }
      else {
        if (uVar4 == 0) {
          iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0b7454(((undefined1 *)(unsigned)0x8c13c026),0x8c431a68,0x4208,ar7));
          if (iVar6 != 0) {
            (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0xd;
            break;
          }
          (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 6;
        }
        if (((uVar4 & 1) == 1) || ((uVar4 & 2) == 2)) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c4367c4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc);
          (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x13;
        }
      }
      break;
    case 5:
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0bf7c8(ar4 + 0x2e710,iVar3,puVar8,ar7));
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c1ce4(ar4 + 0x2e710,10,puVar8,ar7));
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c1cdc(ar4 + 0x2e710,0,puVar8,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x2e75c) = 1;
      (vsp = ((unsigned long)(fr0_ - 212)), strcpy(0x8c4367f8,((undefined1 *)(unsigned)0x8c13c05a),puVar8,ar7));
      uVar1 = 0;
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0ba34c(((undefined1 *)(unsigned)0x8c436838),1,0,ar7));
      iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0bf588(ar4 + 0x2e710,ar5[499],uVar1,ar7));
      if (iVar6 == 0) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367c4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc);
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x12;
      }
      else if (iVar6 == 1) {
        ar5[0x1f7] = 4;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x11;
      }
      break;
    case 6:
      iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c1cb4(ar5[499],iVar3,puVar8,ar7));
      if (iVar6 == 1) {
        (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0bf7c8(ar4 + 0x2e710,((void *)0x8c0bf7c8),puVar8,ar7));
        uVar1 = 0x2e710;
        (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c1ce4(ar4 + 0x2e710,3,0x2e710,ar7));
        (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c1cdc(ar4 + 0x2e710,0,uVar1,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x2e75c) = 1;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 7;
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0xd;
      }
      break;
    case 7:
      (vsp = ((unsigned long)(fr0_ - 212)), strcpy(ar4 + 0x2e740,((undefined1 *)(unsigned)0x8c13ca39),puVar8,ar7));
      (vsp = ((unsigned long)(fr0_ - 212)), strcpy(0x8c4367f8,((undefined1 *)(unsigned)0x8c13c040),puVar8,ar7));
      uVar1 = 1;
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0ba34c(((undefined1 *)(unsigned)0x8c436838),0,1,ar7));
      ar7 = (code *)(vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0bf588(ar4 + 0x2e710,ar5[499],uVar1,ar7));
      (*(unsigned *)(fr0_ - 0xd4) = (unsigned)(unsigned long)(ar7));
      if (ar7 == (code *)0x0) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367c4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc);
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x12;
      }
      else if (ar7 == (code *)0x1) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0xd;
      }
      break;
    case 8:
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0bf7c8(ar4 + 0x2e710,iVar3,puVar8,ar7));
      pcVar7 = ((void *)0x8c0c1ce4);
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c1ce4(ar4 + 0x2e710,2,((void *)0x8c0c1ce4),ar7));
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c1cdc(ar4 + 0x2e710,0,pcVar7,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x2e75c) = 1;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 9;
      break;
    case 9:
      ar7 = (code *)0xa5e;
      ar6_01 = ((undefined1 *)(unsigned)0x8c13ca42);
      (vsp = ((unsigned long)(fr0_ - 212)), strcpy(ar4 + 0x2e740,((undefined1 *)(unsigned)0x8c13ca42),((undefined1 *)(unsigned)0x8c13ca42),0xa5e));
      (vsp = ((unsigned long)(fr0_ - 212)), strcpy(0x8c4367f8,((undefined1 *)(unsigned)0x8c13c040),ar6_01,ar7));
      uVar1 = 1;
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0ba34c(((undefined1 *)(unsigned)0x8c436838),1,1,ar7));
      iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0bf588(ar4 + 0x2e710,ar5[499],uVar1,ar7));
      if (iVar6 == 0) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367c4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc);
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x12;
      }
      else if (iVar6 == 1) {
        ar5[0x1f7] = 4;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x11;
      }
      break;
    case 10:
      iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), s_SEAMANDC_USR_0c2326(ar4,ar5,puVar8,ar7));
      if (iVar6 == 4) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0xb;
      }
      break;
    case 0xb:
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c1ce4(ar4 + 0x2e710,4,0x2e710,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x2e75c) = 1;
      uVar1 = 1;
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0ba34c(((undefined1 *)(unsigned)0x8c436838),1,0,ar7));
      pcVar7 = ((void *)0x8c0fa2b8);
      iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0fa2b8(0x8c35468c,uVar1,((void *)0x8c0fa2b8),ar7));
      if (iVar6 == 1) {
        (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0f8214(0x8c35468c,1,pcVar7,ar7));
      }
      ar7 = (code *)0x2;
      iVar6 = ({ unsigned long t0_ = (unsigned long)(0x8c4367f8); *(unsigned *)((((unsigned long)(fr0_ - 212)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 212)) - 8); s_SEAMAN_0c1da0(ar4,ar5,0x8c3dd7dc,2); });
      if (iVar6 == 0) {
        (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c1ce4(ar4 + 0x2e710,5,0x2e710,ar7));
        (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c1cdc(ar4 + 0x2e710,1,((void *)0x8c0c1cdc),ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x2e75c) = 1;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0xc;
      }
      else if (iVar6 == 1) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367c4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc);
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x12;
      }
      break;
    case 0xc:
      iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0bf780(ar5[499],iVar3,puVar8,ar7));
      if (iVar6 == 1) {
        ar7 = ((void *)0x8c0ba34c);
        (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0ba34c(((undefined1 *)(unsigned)0x8c436838),0,0,((void *)0x8c0ba34c)));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367c4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc);
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x12;
      }
      break;
    case 0xd:
      iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0b7454(((undefined1 *)(unsigned)0x8c13c026),0x8c431a68,0x4208,ar7));
      if ((iVar6 == 0) &&
         (iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0b7454(((undefined1 *)(unsigned)0x8c13c033),0x8c435c7c,0x600,ar7)), iVar6 == 0)) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0xf;
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0xe;
      }
      break;
    case 0xe:
      uVar2 = 0;
      uVar1 = 1;
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0ba34c(((undefined1 *)(unsigned)0x8c436838),1,0,ar7));
      if ((iVar6 == 0) || (iVar6 == 4)) {
        (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0bf7c8(ar4 + 0x2e710,uVar1,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c1ce4(ar4 + 0x2e710,7,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c1cdc(ar4 + 0x2e710,0,uVar2,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x2e75c) = 1;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x18;
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367c4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc);
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x12;
      }
      break;
    case 0xf:
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0b9d14(ar5,((undefined1 *)(fr0_ - 0x28)),puVar8,ar7));
      iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c1028c0(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(unsigned)0x8c431a7c),puVar8,ar7));
      if (iVar6 == 2) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x1c;
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x11;
      }
      break;
    case 0x10:
      iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c1cac(ar4 + 0x2e710,iVar3,puVar8,ar7));
      if (iVar6 == 0) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x11;
      }
      break;
    case 0x11:
      iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0fa2b8(0x8c35468c,0x8c35468c,puVar8,ar7));
      if (iVar6 == 1) {
        (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0f8214(0x8c35468c,0x8c35468c,1,ar7));
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0;
      iVar3 = ar4 + 0x2e64c;
      (vsp = ((unsigned long)(fr0_ - 212)), s_Failed_s_015312(iVar3,iVar3,iVar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c016340(0x8c431294,iVar3,iVar6,ar7));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 4;
      *(undefined4 *)(unsigned)(ar4 + 0x2dd84) = 1;
      break;
    case 0x12:
      iVar5 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c1cac(ar4 + 0x2e710,iVar3,puVar8,ar7));
      if (iVar5 == 1) {
        if (cVar9 == '\0') {
          (*(undefined4 *)(unsigned)(unsigned)0x8c436820) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c436824),0x42200000);
        }
        else {
          (*(undefined4 *)(unsigned)(unsigned)0x8c436820) = 0xc716d11542200000;
        }
      }
      else if (cVar9 == '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c436820) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c436824),0x42dc0000);
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c436820) = 0x8c35468c42dc0000;
      }
      if (((iVar6 != 0) && (iVar6 != 2)) &&
         (iVar5 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0fa2b8(0x8c35468c,iVar3,puVar8,ar7)), iVar5 == 1)) {
        (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0f8214(0x8c35468c,iVar3,puVar8,ar7));
      }
      if (iVar6 != 2) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367d0) = iVar6;
      }
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c4367d0) == 1) {
        (vsp = ((unsigned long)(fr0_ - 212)), s_WARNING_NOPAD_0c38d6(((undefined1 *)(unsigned)0x8c2b5628),1,((void *)0x8c0c38d4),ar7));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x15;
      }
      else if (((*(undefined4 *)(unsigned)(unsigned)0x8c4367d0) == 3) || ((*(undefined4 *)(unsigned)(unsigned)0x8c4367d0) == 5)) {
        (vsp = ((unsigned long)(fr0_ - 212)), s_WARNING_NOPAD_0c38d6(((undefined1 *)(unsigned)0x8c2b5628),6,puVar8,ar7));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x16;
      }
      else if ((*(undefined4 *)(unsigned)(unsigned)0x8c4367d0) == 4) {
        (vsp = ((unsigned long)(fr0_ - 212)), s_WARNING_NOPAD_0c38d6(((undefined1 *)(unsigned)0x8c2b5628),4,puVar8,ar7));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x17;
      }
      else if (((*(undefined4 *)(unsigned)(unsigned)0x8c4367d0) == 0) && (iVar6 == 0)) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x14;
      }
      break;
    case 0x13:
      if (((*(undefined4 *)(unsigned)(unsigned)0x8c436838) == 1) &&
         (iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c01b9e4(uVar1,((undefined1 *)(unsigned)0x8c436838),puVar8,ar7)), iVar6 < 0x8000)) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x1b;
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c236c(ar4,(*(undefined4 *)(unsigned)(unsigned)0x8c4367c4),puVar8,ar7));
        ar7 = (code *)((undefined1 *)(unsigned)0x8c4367bc);
      }
      break;
    case 0x14:
      if (((*(undefined4 *)(unsigned)(unsigned)0x8c43683c) == 1) &&
         (iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c01bc2c(uVar1,((undefined1 *)(unsigned)0x8c13c040),0x8c43680c,ar7)), iVar6 == 5)) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x1a;
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x13;
      }
      break;
    case 0x15:
      ar7 = (code *)((undefined1 *)(unsigned)0x8c13c025);
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c3530(((undefined1 *)(unsigned)0x8c2b5628),1,0,((undefined1 *)(unsigned)0x8c13c025)));
      *(undefined4 *)(unsigned)(ar4 + 0x2e75c) = 1;
      if ((iVar6 != 1) && (iVar6 != 2)) {
        ar7 = (code *)0x12;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x12;
      }
      break;
    case 0x16:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 212)), get_field_a524_01f514(0x8c3dd7dc,iVar3,0x8c3dd7dc,ar7));
      ar7 = (code *)((undefined1 *)(unsigned)0x8c13c025);
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c3530(((undefined1 *)(unsigned)0x8c2b5628),6,uVar1,((undefined1 *)(unsigned)0x8c13c025)));
      *(undefined4 *)(unsigned)(ar4 + 0x2e75c) = 1;
      if (((iVar6 != 3) && (iVar6 != 5)) && (iVar6 != 2)) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x12;
      }
      break;
    case 0x17:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 212)), get_field_a524_01f514(0x8c3dd7dc,iVar3,puVar8,ar7));
      ar7 = (code *)((undefined1 *)(unsigned)0x8c13c025);
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c3530(((undefined1 *)(unsigned)0x8c2b5628),4,uVar1,((undefined1 *)(unsigned)0x8c13c025)));
      *(undefined4 *)(unsigned)(ar4 + 0x2e75c) = 1;
      if ((iVar6 != 4) && (iVar6 != 2)) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x12;
      }
      break;
    case 0x18:
      (vsp = ((unsigned long)(fr0_ - 212)), strcpy(ar4 + 0x2e740,((undefined1 *)(unsigned)0x8c13ca4a),0xa66,ar7));
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0ba34c(((undefined1 *)(unsigned)0x8c436838),1,0,ar7));
      iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0bf588(ar4 + 0x2e710,ar5[499],ar5[499],ar7));
      if (iVar6 == 0) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367c4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc);
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x12;
      }
      else if (iVar6 == 1) {
        ar5[0x1f7] = 4;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x11;
      }
      break;
    case 0x19:
      if (3 < (uint)(*ar5 - (*(undefined4 *)(unsigned)(unsigned)0x8c4367cc))) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x12;
      }
      break;
    case 0x1a:
      ar7 = (code *)0x8c43680c;
      uVar2 = 0x8c43680c;
      pcVar7 = ((void *)0x8c0101d4);
      (vsp = ((unsigned long)(fr0_ - 212)), strcpy(0x8c4367f8,0x8c43680c,((void *)0x8c0101d4),0x8c43680c));
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0bf7c8(ar4 + 0x2e710,uVar2,pcVar7,ar7));
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c1ce4(ar4 + 0x2e710,9,pcVar7,ar7));
      pcVar7 = ((void *)0x8c0c1cdc);
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0c1cdc(ar4 + 0x2e710,0,((void *)0x8c0c1cdc),ar7));
      uVar2 = 0x8c43680c;
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0bf7d0(ar4 + 0x2e710,0x8c43680c,pcVar7,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x2e75c) = 1;
      if ((iVar6 == 0) || (iVar6 == 4)) {
        iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c01b9e4(uVar1,uVar2,pcVar7,ar7));
        iVar3 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c01b920(uVar1,0x8c4367f8,pcVar7,ar7));
        if (iVar6 + iVar3 < 0x8000) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x1b;
          break;
        }
      }
      iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0bf588(ar4 + 0x2e710,ar5[499],pcVar7,ar7));
      if (iVar6 == 0) {
        (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0ba34c(((undefined1 *)(unsigned)0x8c436838),0,0,ar7));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367c4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc);
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x12;
      }
      else if (iVar6 == 1) {
        ar5[0x1f7] = 4;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = 0x11;
      }
      break;
    case 0x1b:
      ar7 = (code *)0x6;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = ({ unsigned long t0_ = (unsigned long)(1); unsigned long t1_ = (unsigned long)(((undefined1 *)(unsigned)0x8c13ca56)); *(unsigned *)((((unsigned long)(fr0_ - 212)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 212)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 212)) - 8); FUN_8c0c23fc(ar4,ar5,(*(undefined4 *)(unsigned)(unsigned)0x8c4367bc),6); });
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) == 0x11) {
        ar5[0x1f7] = 4;
      }
      break;
    case 0x1c:
      ar7 = (code *)0x8;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) = ({ unsigned long t0_ = (unsigned long)(1); unsigned long t1_ = (unsigned long)(((undefined1 *)(unsigned)0x8c13ca5e)); *(unsigned *)((((unsigned long)(fr0_ - 212)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 212)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 212)) - 8); FUN_8c0c23fc(ar4,ar5,(*(undefined4 *)(unsigned)(unsigned)0x8c4367bc),8); });
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c4367bc) == 0x11) {
        ar5[0x1f7] = 4;
      }
    }
  }
  iVar3 = ar4 + 0x2e740;
  ar6_02 = ((undefined1 *)(unsigned)0x8c13bf44);
  iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0b6e04(((undefined1 *)(unsigned)0x8c13bf44),iVar3,((undefined1 *)(unsigned)0x8c13bf44),ar7));
  if (iVar6 != 0) {
    iVar6 = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0fa2b8(0x8c35468c,iVar3,ar6_02,ar7));
    if (iVar6 == 1) {
      (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0f8214(0x8c35468c,((void *)0x8c0f8214),ar6_02,ar7));
    }
    ({ unsigned long ri0_ = (unsigned long)(((code *)(unsigned long)*(unsigned *)(fr0_ - 0xd4))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 212)); strcpy(((undefined1 *)(unsigned)0x8c13bf44),ar4 + 0x2e740,ar6_02,ar7); });
    ({ unsigned long ri0_ = (unsigned long)(((code *)(unsigned long)*(unsigned *)(fr0_ - 0xd4))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 212)); strcpy(0x8c4362a0,((undefined1 *)(unsigned)0x8c13ca66),ar6_02,ar7); });
    ({ unsigned long ri0_ = (unsigned long)(((code *)(unsigned long)*(unsigned *)(fr0_ - 0xd4))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 212)); strcpy(0x8c4362c0,ar4 + 0x2e740,ar6_02,ar7); });
    ar6_02 = (undefined *)(unsigned)0x8c436280;
    iVar3 = 6;
    (*(undefined4 *)(unsigned)(unsigned)0x8c43627c) = (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0f8320(0x8c35468c,6,0x8c436280,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0bf4a4(ar4 + 0x2e710,iVar3,ar6_02,ar7));
  (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0bf550(ar4 + 0x2e710,ar4 + 0x2e64c,ar6_02,ar7));
  if (*(int *)(unsigned)(ar4 + 0x2e75c) == 1) {
    (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c01538c(ar4 + 0x2e64c,ar4 + 0x2e64c,ar6_02,ar7));
    uVar1 = 0;
    (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c014a94(ar4 + 0x2e64c,0,ar6_02,ar7));
    (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c016340(0x8c4367e4,uVar1,ar6_02,ar7));
  }
  return 1;
}

__asm__(".globl _s_WARNING_0c09d0\n.set _s_WARNING_0c09d0, _s_WARNING_0c09d0_def\n");
