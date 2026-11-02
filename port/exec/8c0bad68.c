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
undefined4 FUN_8c0bad68_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined *ar7)

{
  ring[rp++ & 255] = "FUN_8c0bad68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 140; for (int i_ = 0; i_ < 140; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  undefined1 *ar4_01;
  undefined4 ar4_02;
  undefined1 *ar5_00;
  int iVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  undefined8 in_xd0 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 140)), get_field_a510_01f538(0x8c3dd7dc,ar5,ar6,ar7));
  iVar3 = 0;
  ar4_01 = ((undefined1 *)(fr0_ - 0x40));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0162f8(ar4_01,ar5_00,ar6,ar7));
  iVar2 = 1;
  if ((*(undefined1 *)(unsigned)0x8c43660e) == '\0') {
    (*(undefined1 *)(unsigned)0x8c43660d) = '\0';
    (*(undefined1 *)(unsigned)0x8c43660e) = '\x01';
  }
  if (*(int *)(unsigned)(ar4 + 0x30) == 0) {
    if (cVar8 == '\0') {
      dVar5 = CONCAT44D(0x3ca3d70a,*(undefined4 *)(unsigned)(ar4 + 0x34));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x34);
      dVar5 = -3.3816247524205755e-250;
    }
    if (cVar7 == '\0') {
      fVar4 = F32LO(dVar5) - F32HI(dVar5);
    }
    else {
      fVar4 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar8 == '\0') {
      *(float *)(unsigned)(ar4 + 0x34) = fVar4;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x34) = in_xd0;
    }
    (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c235e84(ar4_01,ar5_00,ar6,ar7));
    if (cVar8 == '\0') {
      fVar4 = *(float *)(unsigned)(ar4 + 0x34);
      fVar6 = 0.2;
    }
    else {
      fVar4 = 0.2;
      fVar6 = 2.79699e-42;
    }
    if (cVar7 != '\0' || fVar4 <= fVar6) {
      *(undefined4 *)(unsigned)(ar4 + 0x30) = 2;
    }
  }
  ar4_02 = *(undefined4 *)(unsigned)(ar5 + 0x7cc);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c10003c(ar4_02,ar5_00,ar6,ar7));
  if (iVar1 == 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
  }
  if (*(int *)(unsigned)(ar4 + 0x40) == 1) {
    ar4_02 = *(undefined4 *)(unsigned)(ar5 + 0x7cc);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0ffff4(ar4_02,ar5_00,ar6,ar7));
    if (iVar1 == 1) {
      (vsp = ((unsigned long)(fr0_ - 140)), pack_release_entry_handle(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),ar6,ar7));
      ar5_00 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x148));
      (vsp = ((unsigned long)(fr0_ - 140)), pack_release_entry_handle(0x8c2b59d0,ar5_00,ar6,ar7));
      ar4_02 = 0x8c35468c;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0fa2b8(0x8c35468c,ar5_00,ar6,ar7));
      if (iVar1 == 1) {
        ar4_02 = 0x8c35468c;
        (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0f8214(0x8c35468c,ar5_00,ar6,ar7));
      }
      *(undefined4 *)(unsigned)(ar5 + 0x7dc) = 4;
    }
  }
  if (*(int *)(unsigned)(ar4 + 0x30) == 2) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0b7920(ar4_00,ar5_00,ar6,ar7));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 140)), s_SEAMANDC_USR_0b76dc(ar4_00,ar5_00,ar6,ar7));
    ar4_02 = ar4_00;
  }
  if (iVar2 == 1) {
    if ((*(undefined1 *)(unsigned)0x8c43660d) == '\0') {
      if (iVar3 == 0) {
        if (*(int *)(unsigned)(ar4 + 0x30) != 1) {
          ar5_00 = ar5;
          (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0bcedc(ar4,ar5,ar6,ar7));
        }
        if ((*(int *)(unsigned)(ar4 + 0x14c) == 0) || (*(int *)(unsigned)(ar4 + 0x14c) == 1)) {
          ar5_00 = ar5;
          (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0ba3e0(ar4 + 0x158,ar5,ar6,ar7));
        }
        if (((*(int *)(unsigned)(ar4 + 0x14c) != 0) &&
            (iVar2 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0bb1bc(*(undefined4 *)(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7)), iVar2 == 1)) &&
           (*(int *)(unsigned)(ar4 + 0x30) == 2)) {
          ar5_00 = ((undefined1 *)(fr0_ - 0x4c));
          (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0bb158(ar5,ar5_00,ar6,ar7));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0b77a0(((undefined1 *)(fr0_ - 0x4c)),ar5_00,ar6,ar7));
          if (iVar2 == 0) {
            (*(undefined1 *)(unsigned)0x8c43660d) = '\x01';
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 0x30) = 1;
            iVar2 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0fa2b8(0x8c35468c,ar5_00,ar6,ar7));
            if (iVar2 == 1) {
              (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0f8214(0x8c35468c,ar5_00,ar6,ar7));
              ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x88))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 140)); strcpy(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(unsigned)0x8c13c8e2),ar6,ar7); });
              ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x88))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 140)); strcpy(0x8c4362a0,((undefined1 *)(fr0_ - 0x2c)),ar6,ar7); });
              ar5_00 = ar5;
              ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x88))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 140)); FUN_8c0bf1c8(ar4,ar5,ar6,ar7); });
            }
          }
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0b787c(iVar3,ar5_00,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0b79f0(iVar3,ar5_00,ar6,ar7));
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0b79f0(ar4_02,ar5_00,ar6,ar7));
      ar7 = ((undefined1 *)(unsigned)0x8c13c025);
      ar6 = 0;
      ar5_00 = (undefined1 *)(unsigned)0x5;
      (vsp = ((unsigned long)(fr0_ - 140)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),5,0,((undefined1 *)(unsigned)0x8c13c025)));
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0b79f0(ar4_02,ar5_00,ar6,ar7));
    (*(undefined1 *)(unsigned)0x8c43660d) = '\0';
  }
  if (*(int *)(unsigned)(ar4 + 0x30) == 1) {
    *(int *)(unsigned)(ar4 + 0x154) = *(int *)(unsigned)(ar4 + 0x154) + 0x5000000;
    if (((*(uint *)(unsigned)(ar4 + 0x154) < 0x20000001) &&
        (iVar2 = ar4, iVar3 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0fa2b8(0x8c35468c,ar5_00,ar6,ar7)), iVar3 == 0)) &&
       ((iVar3 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0b6e04(((undefined1 *)(unsigned)0x8c13c8e2),0x8c4362a0,ar6,ar7)), iVar3 == 0 &&
        (*(int *)(unsigned)(ar4 + 0x14c) != 4)))) {
      ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 140)); strcpy(0x8c4362c0,((undefined1 *)(unsigned)0x8c13c025),ar6,ar7); });
      ar6 = 0x8c436280;
      (*(undefined4 *)(unsigned)(unsigned)0x8c43627c) = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0f8320(0x8c35468c,6,0x8c436280,ar7));
    }
    if (0xfeffffff < *(uint *)(unsigned)(ar4 + 0x154)) {
      *(undefined4 *)(unsigned)(ar4 + 8) = 2;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 140)), s_AMB_FOREST_0bb1f2(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), free_if_nonnull_wrap_0151a0(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0bad68\n.set _FUN_8c0bad68, _FUN_8c0bad68_def\n");
