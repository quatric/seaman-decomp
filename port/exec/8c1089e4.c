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
undefined4 FUN_8c1089e4_def(int ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1089e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *ar6_00;
  undefined4 in_fr1 = 0;
  double dVar5;
  char cVar6;
  char cVar7;
  undefined3 uVar8;
  undefined4 ain0;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 900) != -1) {
    if ((*(int *)(unsigned)(ar4 + 4) == 0) && (*(int *)(unsigned)(ar4 + 0x14c) != 0)) {
      *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x14;
      (*(undefined1 *)(unsigned)0x8c1eee30) = 0x14;
      *(undefined4 *)(unsigned)(ar4 + 0x844) = 0xb;
      (*(undefined1 *)(unsigned)0x8c1eee34) = 0xb;
      *(undefined4 *)(unsigned)(ar4 + 0x848) = 10;
      (*(undefined1 *)(unsigned)0x8c1eee38) = 10;
      (vsp = ((unsigned long)(fr0_ - 96)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x2c)),ar6[5] + 0x10,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 96)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0x2c)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
      if (cVar7 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x44960000;
      }
      else {
        in_fr1 = 0x44960000;
        *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x8044960000;
      }
      *(undefined1 *)(unsigned)(ar4 + 0x80) = 0;
    }
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x3c)),ar6[5] + 0x10,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x3c)),ar6_00,ar7));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 96)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 96)) - 8); FUN_8c02f670(*ar6,uVar4,ar6_00,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 96)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 96)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x4c)),ar6[5] + 0x10,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x5c)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6_00,ar7));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6_00,ar7));
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),in_fr1);
    }
    else {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
    }
    if (cVar6 == '\0') {
      iVar3 = (int)F32HI(dVar5);
    }
    else {
      iVar3 = (int)dVar5;
    }
    *(int *)(unsigned)(ar4 + 0x158) = iVar3;
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),SUB84(dVar5,0));
    }
    else {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
    }
    if (cVar6 == '\0') {
      iVar3 = (int)F32HI(dVar5);
    }
    else {
      iVar3 = (int)dVar5;
    }
    *(int *)(unsigned)(ar4 + 0x15c) = iVar3;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_89130_0fa740(0x8c35468c,uVar4,ar6_00,ar7));
    if ((iVar3 == 3) || (iVar3 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_89130_0fa740(0x8c35468c,uVar4,ar6_00,ar7)), iVar3 == 5)) {
      ar5 = 1;
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c065ca4(ar6[3],1,ar6_00,ar7));
    }
    else {
      ar5 = 0;
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c065ca4(ar6[3],0,ar6_00,ar7));
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_770_05eeb8(ar4 + 0x9c,ar5,ar6_00,ar7));
    if (iVar3 == 2) {
      *(undefined4 *)(unsigned)(ar4 + 0x14c) = 0;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0fa2b8(0x8c35468c,ar5,ar6_00,ar7));
    if (iVar3 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
      uVar4 = 3;
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c030870(ar4 + 0x9c,3,ar6_00,ar7));
      if (*(int *)(unsigned)(ar4 + 0x40) == 10) {
        *(undefined4 *)(unsigned)(ar4 + 4) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
        *(undefined4 *)(unsigned)(ar4 + 8) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      }
      uVar2 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02bef8(ar6[1],uVar4,ar6_00,ar7));
      if ((short)uVar2 == 0) {
        uVar4 = 0;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0fa388(0x8c35468c,0,ar6_00,ar7));
        if (iVar3 == 1) {
          ar6_00 = (undefined4 *)(unsigned)0x1b;
          uVar4 = 0xb;
          (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0b9ed4(ar6[6],0xb,0x1b,ar7));
        }
      }
      uVar2 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02bef8(ar6[1],uVar4,ar6_00,ar7));
      sVar1 = (short)uVar2;
      if (sVar1 == 3) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_a0_035724(ar6[6],uVar4,ar6_00,ar7));
        uVar8 = CONCAT21(sVar1,(char)uVar2);
        if ((char)uVar2 == '\0') {
          uVar2 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0637c8(ar6[3],uVar4,ar6_00,ar7));
          ain0 = CONCAT31(uVar8,(char)uVar2);
          if (((char)uVar2 == '\x01') && (*(int *)(unsigned)(ar4 + 0x10c) == 1)) {
            ar6_00 = (undefined4 *)(unsigned)0x1b;
            (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0b9ed4(ar6[6],0xc,0x1b,ar7));
            (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0637c0(ar6[3],0,ar6_00,ar7));
            (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0e9888(ar6[3],1,ar6_00,ar7));
            (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c064ba0(ar6[6],1,ar6_00,ar7));
            *(undefined4 *)(unsigned)(ar4 + 0x10c) = 0;
            uVar4 = 2;
            ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c061180(ar6[3],2,ar6_00,ar7); });
            *(undefined4 *)(unsigned)(ar4 + 0x850) = 0;
          }
        }
      }
      if ((*(int *)(unsigned)(ar4 + 0x100) < 1) ||
         (iVar3 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_b0_065c8c(ar6[3],uVar4,ar6_00,ar7)), *(int *)(unsigned)(ar4 + 0x100) < iVar3)) {
        ar5 = 0;
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02af68(*ar6,0,ar6_00,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c065c80(ar6[3],*(undefined4 *)(unsigned)(ar4 + 0x100),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02af68(*ar6,1,ar6_00,ar7));
        ar6_00 = (undefined4 *)(unsigned)0x1b;
        ar5 = 0xd;
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0b9ed4(ar6[6],0xd,0x1b,ar7));
      }
      if (*(int *)(unsigned)(ar4 + 0x10c) == 0xf) {
        *(undefined4 *)(unsigned)(ar4 + 4) = 5;
        *(undefined4 *)(unsigned)(ar4 + 8) = 0x55;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0xe;
        *(undefined4 *)(unsigned)(ar4 + 0x840) = 0xe;
        (*(undefined1 *)(unsigned)0x8c1eee30) = 0xe;
        *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x22;
        (*(undefined1 *)(unsigned)0x8c1eee34) = 0x22;
        *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x22;
        (*(undefined1 *)(unsigned)0x8c1eee38) = 0x22;
        *(undefined4 *)(unsigned)(ar4 + 0x10c) = 0;
      }
      if (*(int *)(unsigned)(ar4 + 0x10c) == 0x10) {
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02ce10(ar6[1] + 0x90,0,ar6_00,ar7));
        ar5 = 1;
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0637c0(ar6[3],1,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
        *(undefined4 *)(unsigned)(ar4 + 8) = 99;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x20;
        *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x20;
        (*(undefined1 *)(unsigned)0x8c1eee30) = 0x20;
        *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x22;
        (*(undefined1 *)(unsigned)0x8c1eee34) = 0x22;
        *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x22;
        (*(undefined1 *)(unsigned)0x8c1eee38) = 0x22;
        *(undefined4 *)(unsigned)(ar4 + 0x10c) = 0;
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0fa6c8(0x8c35468c,ar5,ar6_00,ar7));
      }
      (vsp = ((unsigned long)(fr0_ - 96)), s_STATUS_FORMAT_030306(ar4 + 0x9c,ar5,ar6_00,ar7));
      *(undefined1 *)(unsigned)(ar4 + 0x80) = 1;
      *(undefined4 *)(unsigned)(ar4 + 900) = 0xffffffff;
      *(undefined4 *)(unsigned)(ar4 + 0xfc) = 0;
    }
  }
  iVar3 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0fa2b8(0x8c35468c,ar5,ar6_00,ar7));
  if ((iVar3 == 0) && ((*(int *)(unsigned)(ar4 + 0x40) == 10 || (*(int *)(unsigned)(ar4 + 0x40) == 0xb)))) {
    (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c030870(ar4 + 0x9c,3,ar6_00,ar7));
    *(undefined4 *)(unsigned)(ar4 + 4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0xfc) = 0;
    *(undefined4 *)(unsigned)(ar4 + 8) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(undefined1 *)(unsigned)(ar4 + 0x80) = 1;
  }
  uVar4 = (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x1c)),0xffffffff,ar6_00,ar7));
  return uVar4;
}

__asm__(".globl _FUN_8c1089e4\n.set _FUN_8c1089e4, _FUN_8c1089e4_def\n");
