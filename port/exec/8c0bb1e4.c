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
undefined4 s_AMB_FOREST_0bb1f2_def(int ar4,int ar5,undefined1 *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "s_AMB_FOREST_0bb1f2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 444; for (int i_ = 0; i_ < 444; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined1 *ar4_00;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  code *pcVar9;
  char *ar6_00;
  code *ar6_01;
  undefined1 *puVar10;
  float fVar11;
  undefined1 *puVar12;
  int iVar13;
  float fVar14;
  ulonglong in_dr0 = 0;
  double dVar15;
  double dVar16;
  float fVar18;
  double dVar17;
  double in_dr2 = 0;
  double in_xd0 = 0;
  bool bVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  char cVar23;
  char cVar24;
  
  cVar24 = '\0';
  cVar23 = '\0';
  if ((*(undefined1 *)(unsigned)0x8c436610) == '\0') {
    (*(undefined1 *)(unsigned)0x8c43660f) = '\0';
    (*(undefined1 *)(unsigned)0x8c436610) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c436618) == '\0') {
    ar6 = ((undefined1 *)(unsigned)0x8c436614);
    in_dr0 = in_dr0 & 0xffffffff;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436614) = (double)CONCAT35((int3)((ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c436614) >> 0x28),0x100000000);
  }
  (*(undefined4 *)(fr0_ - 0x54)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13be00);
  (*(undefined4 *)(fr0_ - 0x50)) = (*(undefined1 *)(unsigned)0x8c13be04);
  (*(undefined4 *)(fr0_ - 0x4c)) = (*(undefined1 *)(unsigned)0x8c13be08);
  (*(undefined4 *)(fr0_ - 0x48)) = (*(undefined1 *)(unsigned)0x8c13be0c);
  (*(undefined4 *)(fr0_ - 0x44)) = (*(undefined1 *)(unsigned)0x8c13be10);
  (*(undefined4 *)(fr0_ - 0x40)) = (*(undefined1 *)(unsigned)0x8c13be14);
  (*(undefined4 *)(fr0_ - 0x3c)) = (*(undefined1 *)(unsigned)0x8c13be18);
  (*(undefined4 *)(fr0_ - 0x38)) = (*(undefined1 *)(unsigned)0x8c13be1c);
  uVar1 = (*(undefined1 *)(unsigned)0x8c13be18);
  (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c0162f8(((undefined1 *)(fr0_ - 0x78)),(*(undefined1 *)(unsigned)0x8c13be18),ar6,ar7));
  if ((*(undefined1 *)(unsigned)0x8c4366c4) == '\0') {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), rand(((undefined1 *)(unsigned)0x8c4366c4),uVar1,ar6,ar7));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366c0) = (float)(vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar1,0x2e,ar6,ar7));
    uVar1 = 1;
    (*(undefined1 *)(unsigned)0x8c4366c4) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c4366d0) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366cc) = 0;
    (*(undefined1 *)(unsigned)0x8c4366d0) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c4366d8) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366d4) = 0;
    ar7 = ((undefined1 *)(unsigned)0x8c4366d8);
    uVar1 = 1;
    (*(undefined1 *)(unsigned)0x8c4366d8) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c4366e0) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366dc) = 1;
    (*(undefined1 *)(unsigned)0x8c4366e0) = '\x01';
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), get_field_a510_01f538(0x8c3dd7dc,uVar1,ar6,ar7));
  if ((*(undefined1 *)(unsigned)0x8c4366ec) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366e8) = 0;
    (*(undefined1 *)(unsigned)0x8c4366ec) = '\x01';
  }
  puVar10 = (undefined1 *)(unsigned)0x4;
  uVar8 = 0x8c43661c;
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(((undefined1 *)(fr0_ - 0x78)),&(*(undefined4 *)(fr0_ - 0x54)),0x8c43661c,4); });
  (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(((undefined1 *)(fr0_ - 0x78)),&(*(undefined2 *)(fr0_ - 0x64)),uVar8,puVar10));
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c015198(((undefined1 *)(fr0_ - 0x78)),0x80000060,uVar8,puVar10); });
  if (*(int *)(unsigned)(ar4 + 0x150) != (*(undefined4 *)(unsigned)(unsigned)0x8c4366d4)) {
    (*(undefined1 *)(unsigned)0x8c43660f) = '\0';
    puVar10 = ((undefined1 *)(unsigned)0x8c4366d4);
    uVar8 = 0x150;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366d4) = *(int *)(unsigned)(ar4 + 0x150);
  }
  (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c0b9d14(ar5,((undefined1 *)(fr0_ - 0x84)),uVar8,puVar10));
  pcVar9 = (code *)((undefined1 *)(unsigned)0x8c43660f);
  if ((*(undefined1 *)(unsigned)0x8c43660f) == '\0') {
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c43663c) + iVar2 * 4) = 0xffffff;
      *(undefined4 *)(unsigned)(iVar2 * 4 + -0x73bc99b4) = 0xffffff;
      *(undefined4 *)(unsigned)(iVar2 * 4 + -0x73bc9984) = 0xffffff;
      *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c43668c) + iVar2 * 4) = 0xffffffff;
      *(undefined4 *)(unsigned)(iVar2 * 4 + -0x73bc9964) = 0xffffff;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c43662c) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c43662e) = 0xff;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436630) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436632) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436634) = 0xff;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436636) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436638) = 0xff;
    (*(undefined4 *)(unsigned)(unsigned)0x8c43663a) = 0xff;
    puVar10 = (undefined1 *)(unsigned)0x4;
    pcVar9 = (code *)0x8c43661c;
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,0,0x8c43661c,4); });
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c015198(ar4 + 0x50,0x80000060,pcVar9,puVar10); });
    iVar2 = 0;
    for (iVar20 = 0; iVar20 < 8; iVar20 = iVar20 + 1) {
      puVar10 = (undefined1 *)(unsigned)(ar5 + iVar20);
      iVar2 = (uint)(byte)puVar10[4] + iVar2;
    }
    puVar3 = ((undefined1 *)(fr0_ - 0x84));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c0b9d14(ar5,puVar3,pcVar9,puVar10));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366ac) = (vsp = ((unsigned long)(fr0_ - 444)), get_field_c8_0bced0(ar5,puVar3,pcVar9,puVar10));
    ar4_00 = ((undefined1 *)(unsigned)0x8c4366ac);
    for (puVar12 = (undefined1 *)(unsigned)0x0; (int)puVar12 < 0x14; puVar12 = puVar12 + 1) {
      puVar3 = puVar12;
    }
    for (iVar20 = 0; iVar20 < (int)(uint)(*(byte *)(fr0_ - 0x7e)); iVar20 = iVar20 + 1) {
      pcVar9 = ((void *)0x8c014200);
      (vsp = ((unsigned long)(fr0_ - 444)), rand(ar4_00,puVar3,((void *)0x8c014200),puVar10));
    }
    if (cVar23 == '\0') {
      dVar16 = CONCAT44D((float)(*(byte *)(fr0_ - 0x80)),SUB84(in_dr2,0));
    }
    else {
      dVar16 = (double)(*(byte *)(fr0_ - 0x80));
    }
    if (cVar24 == '\0') {
      dVar17 = CONCAT44D(0x42700000,(int)in_dr0);
    }
    else {
      dVar17 = 6.64735386069639e-312;
    }
    if (cVar23 == '\0') {
      dVar15 = CONCAT44D((float)(*(byte *)(fr0_ - 0x7f)),SUB84(dVar17,0));
      in_dr2 = CONCAT44D(F32HI(dVar16) *
                                F32HI(dVar17) + (float)(*(byte *)(fr0_ - 0x7f)),
                                SUB84(dVar16,0));
    }
    else {
      dVar15 = (double)(*(byte *)(fr0_ - 0x7f));
      in_dr2 = dVar16 * dVar17 + dVar15;
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x40200000,SUB84(dVar15,0));
    }
    else {
      dVar16 = 7.63971638255348e-311;
    }
    if (cVar23 == '\0') {
      in_dr2 = CONCAT44D(F32HI(in_dr2) *
                                F32HI(dVar16),SUB84(in_dr2,0));
    }
    else {
      in_dr2 = in_dr2 * dVar16;
    }
    fVar11 = (float)(*(byte *)(fr0_ - 0x7f));
    if (cVar24 == '\0') {
      fVar14 = 60.0;
    }
    else {
      fVar11 = 60.0;
      fVar14 = 4.38606e-43;
    }
    if (cVar23 == '\0') {
      fVar11 = fVar11 * fVar14 + (float)(*(byte *)(fr0_ - 0x7e));
      dVar16 = CONCAT44D((float)(*(byte *)(fr0_ - 0x7e)),fVar11);
      fVar11 = F32HI(in_dr2) - fVar11;
      in_dr2 = CONCAT44D(fVar11,SUB84(in_dr2,0));
      *(unsigned *)0x8c4366b0 = (unsigned)(unsigned long)((undefined1 *)(unsigned)(int)fVar11);
    }
    else {
      dVar16 = (double)(*(byte *)(fr0_ - 0x7e)) + (double)(*(byte *)(fr0_ - 0x7e));
      in_dr2 = in_dr2 - dVar16;
      *(unsigned *)0x8c4366b0 = (unsigned)(unsigned long)((undefined1 *)(unsigned)(int)in_dr2);
    }
    uVar8 = SUB84(dVar16,0);
    if ((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4366b0) < 0) {
      *(unsigned *)0x8c4366b0 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4366b0) + 0xe10);
    }
    uVar6 = (vsp = ((unsigned long)(fr0_ - 444)), rand(((undefined4 *)(unsigned long)*(unsigned *)0x8c4366b0),puVar3,pcVar9,puVar10));
    uVar4 = 0x3c;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366b4) = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar6,0x3c,pcVar9,puVar10));
    uVar6 = (vsp = ((unsigned long)(fr0_ - 444)), rand(((undefined1 *)(unsigned)0x8c4366b4),uVar4,pcVar9,puVar10));
    uVar4 = 0x41;
    iVar20 = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar6,0x41,pcVar9,puVar10));
    if (cVar23 == '\0') {
      dVar16 = CONCAT44D((float)iVar20,uVar8);
    }
    else {
      dVar16 = (double)iVar20;
    }
    fVar11 = F32HI(dVar16);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = fVar11;
    if (cVar24 != '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = SUB84(dVar16,0);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = fVar11;
    }
    uVar8 = (vsp = ((unsigned long)(fr0_ - 444)), rand(uVar6,uVar4,pcVar9,puVar10));
    uVar6 = SUB84(dVar16,0);
    iVar20 = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar8,0x46,pcVar9,puVar10));
    if (cVar23 == '\0') {
      dVar16 = CONCAT44D((float)iVar20,uVar6);
    }
    else {
      dVar16 = (double)iVar20;
    }
    fVar11 = F32HI(dVar16);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = SUB84(dVar16,0);
    if (cVar24 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = fVar11;
      fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366c0);
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366c0) = fVar11;
    if (iVar2 == 1) {
      if (cVar24 == '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = 0.0;
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366c0) = 0.0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = SUB84(dVar16,0);
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = 0.0;
      dVar16 = (double)(D2U(dVar16) & 0xffffffff);
      iVar2 = -((uint)(*(byte *)(fr0_ - 0x7f)) * 0x3c + (uint)(*(byte *)(fr0_ - 0x7e)));
      *(unsigned *)0x8c4366b0 = (unsigned)(unsigned long)((undefined1 *)(unsigned)(iVar2 + 0x708));
      if ((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4366b0) < 0) {
        *(unsigned *)0x8c4366b0 = (unsigned)(unsigned long)((undefined1 *)(unsigned)(iVar2 + 0x1518));
      }
    }
    fVar11 = F32LO(dVar16);
    if (4 < (*(undefined4 *)(unsigned)(unsigned)0x8c4366ac)) {
      pcVar9 = (code *)((undefined1 *)(unsigned)0x8c4366b8);
      if (cVar24 == '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = 60.0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = 70.0;
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = 60.0;
        fVar11 = 70.0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = 70.0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366c0) = 90.0;
      }
    }
    if (10 < (*(undefined4 *)(unsigned)(unsigned)0x8c4366ac)) {
      if (cVar24 == '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = 60.0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = 90.0;
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = 60.0;
        fVar11 = 90.0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = 90.0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366c0) = 1.1911e-42;
      }
    }
    if ((((*(int *)(unsigned)(ar5 + 0x30) == 0x25) || (*(int *)(unsigned)(ar5 + 0x34) == 0x25)) ||
        (*(int *)(unsigned)(ar5 + 0x38) == 0x25)) && (*(char *)(unsigned)(ar5 + 0x69) == '\0')) {
      if (cVar24 == '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = 0.0;
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366c0) = 0.0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = fVar11;
      }
      iVar2 = -((uint)(*(byte *)(fr0_ - 0x7f)) * 0x3c + (uint)(*(byte *)(fr0_ - 0x7e)));
      *(unsigned *)0x8c4366b0 = (unsigned)(unsigned long)((undefined1 *)(unsigned)(iVar2 + 0x352));
      if ((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4366b0) < 0) {
        puVar10 = (undefined1 *)(unsigned)(iVar2 + 0x1162);
        *(unsigned *)0x8c4366b0 = (unsigned)(unsigned long)(puVar10);
      }
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366c8) = 0;
    (*(undefined1 *)(unsigned)0x8c43660f) = '\x01';
  }
  ar6_00 = (char *)(unsigned)pcVar9;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4366e8) != 0) {
    if (cVar24 == '\0') {
      fVar14 = 72.0;
      fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
    }
    else {
      in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
      fVar11 = 72.0;
      fVar14 = 4.54021e-43;
    }
    if (cVar23 == '\0' && fVar11 < fVar14) {
      (vsp = ((unsigned long)(fr0_ - 444)), pack_release_entry_handle(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),pcVar9,puVar10));
      ar6_00 = (char *)(unsigned)pcVar9;
    }
    (vsp = ((unsigned long)(fr0_ - 444)), pack_release_entry_handle(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x148),ar6_00,puVar10));
  }
  if (cVar24 == '\0') {
    fVar14 = 30.0;
    fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
  }
  else {
    in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
    fVar11 = 30.0;
    fVar14 = -1.6662342e+14;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4366e8) = uVar1;
  if (cVar23 == '\0' && fVar11 < fVar14) {
    puVar10 = (undefined1 *)(unsigned)0x898;
    ar6_00 = (char *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),0,0x898));
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),ar6_00,puVar10));
  if (iVar2 == 2) {
    ar6_00 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 444)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(unsigned)0x8c13c8ce),ar6_00,puVar10));
    puVar10 = (undefined1 *)(unsigned)0x144;
    *(unsigned *)(unsigned)(ar4 + 0x144) = ar6_00;
  }
  else {
    if (cVar24 == '\0') {
      fVar14 = 65.0;
      fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
    }
    else {
      in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
      fVar11 = 65.0;
      fVar14 = 30.0;
    }
    if (cVar23 != '\0' || fVar14 <= fVar11) {
      if (cVar24 == '\0') {
        fVar14 = 72.0;
        fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
      }
      else {
        in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
        fVar11 = 72.0;
        fVar14 = 4.54021e-43;
      }
      if (cVar23 == '\0' && fVar11 < fVar14) {
        (vsp = ((unsigned long)(fr0_ - 444)), pack_release_entry_handle(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),ar6_00,puVar10));
      }
    }
    else {
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x41f00000,(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
      }
      else {
        in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
        dVar16 = 1.7021678581004447e+27;
      }
      if (cVar23 == '\0') {
        fVar11 = F32LO(dVar16) - F32HI(dVar16);
      }
      else {
        fVar11 = SUB84(dVar16 - dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x45960000,fVar11);
      }
      else {
        dVar16 = 15032387762.75;
      }
      if (cVar23 == '\0') {
        fVar11 = F32LO(dVar16) * F32HI(dVar16);
      }
      else {
        fVar11 = SUB84(dVar16 * dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x420c0000,fVar11);
      }
      else {
        dVar16 = 3.853451644918994e+24;
      }
      if (cVar23 == '\0') {
        fVar11 = F32LO(dVar16) / F32HI(dVar16);
      }
      else {
        fVar11 = SUB84(dVar16 / dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x45098000,fVar11);
      }
      else {
        dVar16 = 6.880988880521e-312;
      }
      if (cVar23 == '\0') {
        puVar10 = (undefined1 *)(unsigned)(int)(F32LO(dVar16) + F32HI(dVar16));
      }
      else {
        puVar10 = (undefined1 *)(unsigned)(int)(dVar16 + dVar16);
      }
      ar6_00 = (char *)(unsigned)0x0;
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),0,puVar10));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),ar6_00,puVar10));
      if (iVar2 == 2) {
        puVar10 = (undefined1 *)(unsigned)0x8ea;
        ar6_00 = ((undefined1 *)(unsigned)0x8c13c8ce);
        uVar1 = pack_acquire_entry_handle
                          (0x8c2b59d0,((undefined1 *)(unsigned)0x8c13c8ce),((undefined1 *)(unsigned)0x8c13c8ce),0x8ea);
        *(undefined4 *)(unsigned)(ar4 + 0x144) = uVar1;
      }
    }
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x148),ar6_00,puVar10));
  if (iVar2 == 2) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(unsigned)0x8c13c8d9),ar6_00,puVar10));
    *(undefined4 *)(unsigned)(ar4 + 0x148) = uVar1;
  }
  if (cVar24 == '\0') {
    fVar14 = 50.0;
    fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
  }
  else {
    in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
    fVar11 = 50.0;
    fVar14 = 9.80909e-42;
  }
  if (cVar23 != '\0' || fVar14 <= fVar11) {
    if (cVar24 == '\0') {
      fVar14 = 75.0;
      fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
    }
    else {
      in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
      fVar11 = 75.0;
      fVar14 = 5300.0;
    }
    if (cVar23 != '\0' || fVar14 <= fVar11) {
      fVar11 = 2.38221e-42;
      iVar2 = 0;
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x148),0,0x6a4));
    }
    else {
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366b8),0x42960000);
      }
      else {
        dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
        in_xd0 = 3.3463072828401675e+27;
      }
      if (cVar23 == '\0') {
        fVar11 = F32LO(dVar16) - F32HI(dVar16);
      }
      else {
        fVar11 = SUB84(dVar16 - dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x45a5a000,fVar11);
      }
      else {
        dVar16 = 805306507.2939453;
      }
      if (cVar23 == '\0') {
        fVar11 = F32LO(dVar16) * F32HI(dVar16);
      }
      else {
        fVar11 = SUB84(dVar16 * dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x41c80000,fVar11);
      }
      else {
        dVar16 = 3.8723412565841415e+23;
      }
      if (cVar23 == '\0') {
        fVar11 = F32LO(dVar16) / F32HI(dVar16);
      }
      else {
        fVar11 = SUB84(dVar16 / dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x44d48000,fVar11);
      }
      else {
        dVar16 = 6.96585155124395e-312;
      }
      if (cVar23 == '\0') {
        fVar11 = (float)(int)(F32LO(dVar16) + F32HI(dVar16));
      }
      else {
        fVar11 = (float)(int)(dVar16 + dVar16);
      }
      iVar2 = 0;
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x148),0,fVar11));
    }
  }
  else {
    fVar11 = 9.80909e-42;
    iVar2 = 0;
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x148),0,7000));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4366c8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4366c8) + 1;
  if (2 < (*(undefined4 *)(unsigned)(unsigned)0x8c4366c8)) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366c8) = 0;
  }
  if (cVar24 == '\0') {
    dVar16 = CONCAT44D(0x3dcccccd,(*(undefined4 *)(unsigned)(unsigned)0x8c436614));
  }
  else {
    dVar16 = 1.4411521461875377e+18;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c436614);
  }
  if (cVar23 == '\0') {
    fVar14 = F32LO(dVar16) + F32HI(dVar16);
  }
  else {
    fVar14 = SUB84(dVar16 + dVar16,0);
  }
  if (cVar24 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c436614) = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c436618),fVar14);
    dVar16 = CONCAT44D(0x43b40000,fVar14);
  }
  else {
    dVar16 = 6.64745876893557e-312;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436614) = in_xd0;
  }
  dVar17 = (*(undefined4 *)(unsigned)(unsigned)0x8c436614);
  if ((cVar23 != '\0' || F32HI(dVar16) <= SUB84(dVar16,0)) &&
     (dVar16 = (double)(D2U(dVar16) & 0xffffffff), dVar17 = dVar16, cVar24 == '\0')) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c436614) = (double)((ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c436614) & 0xffffffff00000000);
    dVar17 = (*(undefined4 *)(unsigned)(unsigned)0x8c436614);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c436614) = dVar17;
  puVar10 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366b0) + (uint)(*(byte *)(fr0_ - 0x7f)) * 0x3c + (uint)(*(byte *)(fr0_ - 0x7e));
  if ((undefined1 *)(unsigned)0xe10 < puVar10) {
    puVar10 = puVar10 + -0xe10;
  }
  if ((puVar10 < (undefined1 *)(unsigned)0x272) || (iVar2 = 0x47e, (undefined1 *)(unsigned)0x47d < puVar10)) {
    if ((puVar10 < (undefined1 *)(unsigned)0xaf1) || ((undefined1 *)(unsigned)0xbe9 < puVar10)) {
      if ((puVar10 < (undefined1 *)(unsigned)0x47e) || ((undefined1 *)(unsigned)0xaf0 < puVar10)) {
        iVar20 = 0;
      }
      else {
        iVar20 = 0xaf;
      }
    }
    else {
      if (cVar23 == '\0') {
        in_dr2 = CONCAT44D((float)(int)puVar10,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = (double)(int)puVar10;
      }
      dVar17 = (double)(D2U(dVar16) & 0xffffffff);
      fVar14 = F32HI(in_dr2);
      if (cVar23 == '\0') {
        bVar19 = fVar14 < 0.0;
      }
      else {
        bVar19 = in_dr2 < dVar17;
      }
      if (bVar19) {
        if (cVar24 == '\0') {
          dVar17 = CONCAT44D(0x4f800000,SUB84(dVar16,0));
        }
        else {
          dVar17 = 3.7023358954276744e+25;
        }
        if (cVar23 == '\0') {
          in_dr2 = CONCAT44D(fVar14 + F32HI(dVar17),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + dVar17;
        }
      }
      if (cVar24 == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),0x453ea000);
      }
      else {
        in_xd0 = 1.1709360889934643e+17;
      }
      if (cVar23 == '\0') {
        fVar14 = F32LO(dVar17) - F32HI(in_dr2);
      }
      else {
        fVar14 = SUB84(dVar17 - in_dr2,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x437a0000,fVar14);
      }
      else {
        dVar16 = 4.3628627050496e+15;
      }
      if (cVar23 == '\0') {
        fVar14 = F32LO(dVar16) / F32HI(dVar16);
      }
      else {
        fVar14 = SUB84(dVar16 / dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x432f0000,fVar14);
      }
      else {
        dVar16 = 1.274788992873159e-19;
      }
      if (cVar23 == '\0') {
        fVar18 = F32HI(dVar16);
        fVar14 = F32LO(dVar16) * fVar18;
        dVar16 = CONCAT44D(fVar18,fVar14);
        iVar20 = (int)fVar14;
      }
      else {
        dVar16 = dVar16 * dVar16;
        iVar20 = (int)dVar16;
      }
    }
  }
  else {
    fVar14 = (float)(int)puVar10;
    if (cVar23 == '\0' && fVar14 < 0.0) {
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x4f800000,fVar14);
      }
      else {
        dVar16 = 1.3028015187336731e+20;
      }
      if (cVar23 == '\0') {
        fVar14 = F32LO(dVar16) + F32HI(dVar16);
      }
      else {
        fVar14 = SUB84(dVar16 + dVar16,0);
      }
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x441c4000,fVar14);
    }
    else {
      dVar16 = 4.438748728837905e+19;
    }
    if (cVar23 == '\0') {
      fVar14 = F32LO(dVar16) - F32HI(dVar16);
    }
    else {
      fVar14 = SUB84(dVar16 - dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x44034000,fVar14);
    }
    else {
      dVar16 = 4362862709547008.0;
    }
    if (cVar23 == '\0') {
      fVar14 = F32LO(dVar16) / F32HI(dVar16);
    }
    else {
      fVar14 = SUB84(dVar16 / dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x432f0000,fVar14);
    }
    else {
      dVar16 = 1.5458488417764263e-19;
    }
    if (cVar23 == '\0') {
      fVar18 = F32HI(dVar16);
      fVar14 = F32LO(dVar16) * fVar18;
      dVar16 = CONCAT44D(fVar18,fVar14);
      iVar20 = (int)fVar14;
    }
    else {
      dVar16 = dVar16 * dVar16;
      iVar20 = (int)dVar16;
    }
  }
  if ((puVar10 < (undefined1 *)(unsigned)0x2ef) || ((undefined1 *)(unsigned)0x47d < puVar10)) {
    if ((puVar10 < (undefined1 *)(unsigned)0xa8d) || ((undefined1 *)(unsigned)0xbb7 < puVar10)) {
      if ((puVar10 < (undefined1 *)(unsigned)0x47e) || ((undefined1 *)(unsigned)0xa8c < puVar10)) {
        iVar21 = 0;
      }
      else {
        iVar21 = 0xaf;
      }
    }
    else {
      if (cVar23 == '\0') {
        in_dr2 = CONCAT44D((float)(int)puVar10,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = (double)(int)puVar10;
      }
      dVar17 = (double)(D2U(dVar16) & 0xffffffff);
      fVar14 = F32HI(in_dr2);
      if (cVar23 == '\0') {
        bVar19 = fVar14 < 0.0;
      }
      else {
        bVar19 = in_dr2 < dVar17;
      }
      if (bVar19) {
        if (cVar24 == '\0') {
          dVar17 = CONCAT44D(0x4f800000,SUB84(dVar16,0));
        }
        else {
          dVar17 = 3.324546576798103e+25;
        }
        if (cVar23 == '\0') {
          in_dr2 = CONCAT44D(fVar14 + F32HI(dVar17),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + dVar17;
        }
      }
      if (cVar24 == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),0x453b8000);
      }
      else {
        in_xd0 = 3.963168415463506e+17;
      }
      if (cVar23 == '\0') {
        fVar14 = F32LO(dVar17) - F32HI(in_dr2);
      }
      else {
        fVar14 = SUB84(dVar17 - in_dr2,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x43960000,fVar14);
      }
      else {
        dVar16 = 4362862705967104.0;
      }
      if (cVar23 == '\0') {
        fVar14 = F32LO(dVar16) / F32HI(dVar16);
      }
      else {
        fVar14 = SUB84(dVar16 / dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x432f0000,fVar14);
      }
      else {
        dVar16 = 2.041356454491563e-18;
      }
      if (cVar23 == '\0') {
        fVar18 = F32HI(dVar16);
        fVar14 = F32LO(dVar16) * fVar18;
        dVar16 = CONCAT44D(fVar18,fVar14);
        iVar21 = (int)fVar14;
      }
      else {
        dVar16 = dVar16 * dVar16;
        iVar21 = (int)dVar16;
      }
    }
  }
  else {
    fVar14 = (float)(int)puVar10;
    if (cVar23 == '\0' && fVar14 < 0.0) {
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x4f800000,fVar14);
      }
      else {
        dVar16 = 5.072855494381871e+20;
      }
      if (cVar23 == '\0') {
        fVar14 = F32LO(dVar16) + F32HI(dVar16);
      }
      else {
        fVar14 = SUB84(dVar16 + dVar16,0);
      }
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x443b8000,fVar14);
    }
    else {
      dVar16 = 3.458765099932582e+18;
    }
    if (cVar23 == '\0') {
      fVar14 = F32LO(dVar16) - F32HI(dVar16);
    }
    else {
      fVar14 = SUB84(dVar16 - dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x43c80000,fVar14);
    }
    else {
      dVar16 = 4362862707605504.0;
    }
    if (cVar23 == '\0') {
      fVar14 = F32LO(dVar16) / F32HI(dVar16);
    }
    else {
      fVar14 = SUB84(dVar16 / dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x432f0000,fVar14);
    }
    else {
      dVar16 = 1.5458488417764263e-19;
    }
    if (cVar23 == '\0') {
      fVar18 = F32HI(dVar16);
      fVar14 = F32LO(dVar16) * fVar18;
      dVar16 = CONCAT44D(fVar18,fVar14);
      iVar21 = (int)fVar14;
    }
    else {
      dVar16 = dVar16 * dVar16;
      iVar21 = (int)dVar16;
    }
  }
  if ((puVar10 < (undefined1 *)(unsigned)0x272) || ((undefined1 *)(unsigned)0x44b < puVar10)) {
    if ((puVar10 < (undefined1 *)(unsigned)0x9c5) || ((undefined1 *)(unsigned)0xabd < puVar10)) {
      if ((puVar10 < (undefined1 *)(unsigned)0x44c) || ((undefined1 *)(unsigned)0x9c4 < puVar10)) {
        (*(int *)(fr0_ - 0x88)) = 0;
      }
      else {
        (*(int *)(fr0_ - 0x88)) = 0x87;
      }
    }
    else {
      if (cVar23 == '\0') {
        in_dr2 = CONCAT44D((float)(int)puVar10,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = (double)(int)puVar10;
      }
      dVar17 = (double)(D2U(dVar16) & 0xffffffff);
      fVar14 = F32HI(in_dr2);
      if (cVar23 == '\0') {
        bVar19 = fVar14 < 0.0;
      }
      else {
        bVar19 = in_dr2 < dVar17;
      }
      if (bVar19) {
        if (cVar24 == '\0') {
          dVar17 = CONCAT44D(0x4f800000,SUB84(dVar16,0));
        }
        else {
          dVar17 = 1.6849406475168257e+25;
        }
        if (cVar23 == '\0') {
          in_dr2 = CONCAT44D(fVar14 + F32HI(dVar17),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + dVar17;
        }
      }
      if (cVar24 == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),0x452be000);
      }
      else {
        in_xd0 = 1.1709360887968563e+17;
      }
      if (cVar23 == '\0') {
        fVar14 = F32LO(dVar17) - F32HI(in_dr2);
      }
      else {
        fVar14 = SUB84(dVar17 - in_dr2,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x437a0000,fVar14);
      }
      else {
        dVar16 = 809240699551744.0;
      }
      if (cVar23 == '\0') {
        fVar14 = F32LO(dVar16) / F32HI(dVar16);
      }
      else {
        fVar14 = SUB84(dVar16 / dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x43070000,fVar14);
      }
      else {
        dVar16 = 6.45642313192963e-312;
      }
      if (cVar23 == '\0') {
        (*(int *)(fr0_ - 0x88)) = (int)(F32LO(dVar16) * F32HI(dVar16));
      }
      else {
        (*(int *)(fr0_ - 0x88)) = (int)(dVar16 * dVar16);
      }
    }
  }
  else {
    fVar14 = (float)(int)puVar10;
    if (cVar23 == '\0' && fVar14 < 0.0) {
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(0x4f800000,fVar14);
      }
      else {
        dVar16 = 1.3028015187336731e+20;
      }
      if (cVar23 == '\0') {
        fVar14 = F32LO(dVar16) + F32HI(dVar16);
      }
      else {
        fVar14 = SUB84(dVar16 + dVar16,0);
      }
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x441c4000,fVar14);
    }
    else {
      dVar16 = 1.7005594533204853e+19;
    }
    if (cVar23 == '\0') {
      fVar14 = F32LO(dVar16) - F32HI(dVar16);
    }
    else {
      fVar14 = SUB84(dVar16 - dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x43ed8000,fVar14);
    }
    else {
      dVar16 = 809240700497920.0;
    }
    if (cVar23 == '\0') {
      fVar14 = F32LO(dVar16) / F32HI(dVar16);
    }
    else {
      fVar14 = SUB84(dVar16 / dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x43070000,fVar14);
    }
    else {
      dVar16 = 6.45642313192963e-312;
    }
    if (cVar23 == '\0') {
      (*(int *)(fr0_ - 0x88)) = (int)(F32LO(dVar16) * F32HI(dVar16));
    }
    else {
      (*(int *)(fr0_ - 0x88)) = (int)(dVar16 * dVar16);
    }
  }
  if (cVar23 == '\0') {
    dVar16 = CONCAT44D((float)iVar20,SUB84(in_dr2,0));
  }
  else {
    dVar16 = (double)iVar20;
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366b8),0x42c80000);
  }
  else {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
    in_xd0 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = F32LO(dVar17) - F32HI(dVar17);
  }
  else {
    fVar14 = SUB84(dVar17 - dVar17,0);
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x42c80000,fVar14);
  }
  else {
    dVar17 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = F32LO(dVar17) / F32HI(dVar17);
    dVar16 = CONCAT44D(F32HI(dVar16) * fVar14,SUB84(dVar16,0));
  }
  else {
    fVar14 = SUB84(dVar17 / dVar17,0);
    dVar16 = dVar16 * (dVar17 / dVar17);
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x42a00000,fVar14);
  }
  else {
    dVar17 = 281475046572032.0;
  }
  if (cVar23 == '\0') {
    iVar20 = (int)(F32HI(dVar16) + F32HI(dVar17));
    dVar16 = CONCAT44D((float)iVar21,SUB84(dVar16,0));
  }
  else {
    iVar20 = (int)(dVar16 + dVar17);
    dVar16 = (double)iVar21;
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366b8),0x42c80000);
  }
  else {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
    in_xd0 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = F32LO(dVar17) - F32HI(dVar17);
  }
  else {
    fVar14 = SUB84(dVar17 - dVar17,0);
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x42c80000,fVar14);
  }
  else {
    dVar17 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = F32LO(dVar17) / F32HI(dVar17);
    dVar16 = CONCAT44D(F32HI(dVar16) * fVar14,SUB84(dVar16,0));
  }
  else {
    fVar14 = SUB84(dVar17 / dVar17,0);
    dVar16 = dVar16 * (dVar17 / dVar17);
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x42a00000,fVar14);
  }
  else {
    dVar17 = 281475046572032.0;
  }
  if (cVar23 == '\0') {
    iVar21 = (int)(F32HI(dVar16) + F32HI(dVar17));
    dVar16 = CONCAT44D((float)(*(int *)(fr0_ - 0x88)),SUB84(dVar16,0));
  }
  else {
    iVar21 = (int)(dVar16 + dVar17);
    dVar16 = (double)(*(int *)(fr0_ - 0x88));
  }
  puVar10 = ((undefined1 *)(unsigned)0x8c4366b8);
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366b8),0x42c80000);
  }
  else {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
    in_xd0 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = F32LO(dVar17) - F32HI(dVar17);
  }
  else {
    fVar14 = SUB84(dVar17 - dVar17,0);
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x42c80000,fVar14);
  }
  else {
    dVar17 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = F32LO(dVar17) / F32HI(dVar17);
    dVar16 = CONCAT44D(F32HI(dVar16) * fVar14,SUB84(dVar16,0));
  }
  else {
    fVar14 = SUB84(dVar17 / dVar17,0);
    dVar16 = dVar16 * (dVar17 / dVar17);
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x42f00000,fVar14);
  }
  else {
    dVar17 = -5.48612543682247e+303;
  }
  if (cVar23 == '\0') {
    fVar14 = F32HI(dVar16) + F32HI(dVar17);
    dVar16 = CONCAT44D(fVar14,SUB84(dVar16,0));
    iVar22 = (int)fVar14;
  }
  else {
    dVar16 = dVar16 + dVar17;
    iVar22 = (int)dVar16;
  }
  uVar1 = SUB84(dVar16,0);
  for (iVar13 = 0; iVar13 < 4; iVar13 = iVar13 + 1) {
    puVar10 = (undefined1 *)(unsigned)(iVar13 * 4);
    *(int *)(unsigned)(puVar10 + -0x73bc99e4) = iVar20 * 0x10000 + -0x1000000 + iVar21 * 0x100 + iVar22;
  }
  uVar5 = (uint)(*(byte *)(fr0_ - 0x7f));
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4366b4) == uVar5) {
    uVar8 = (vsp = ((unsigned long)(fr0_ - 444)), rand(puVar10,uVar5,iVar2,fVar11));
    uVar6 = 0x3c;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366b4) = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar8,0x3c,iVar2,fVar11));
    uVar8 = (vsp = ((unsigned long)(fr0_ - 444)), rand(((undefined1 *)(unsigned)0x8c4366b4),uVar6,iVar2,fVar11));
    uVar5 = 0xb;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar8,0xb,iVar2,fVar11));
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x41200000,(float)iVar2);
    }
    else {
      dVar16 = 5.330973659922055e-35;
    }
    if (cVar23 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = F32LO(dVar16) * F32HI(dVar16);
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = SUB84(dVar16 * dVar16,0);
    }
    if (cVar24 != '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = SUB84(in_xd0,0);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4366c0) = F32HI(in_xd0);
    }
  }
  if (cVar24 == '\0') {
    dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4366bc));
  }
  else {
    in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366c0),(*(undefined4 *)(unsigned)(unsigned)0x8c4366bc));
    dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
  }
  if (cVar23 == '\0') {
    fVar14 = F32LO(dVar16) - F32HI(dVar16);
  }
  else {
    fVar14 = SUB84(dVar16 - dVar16,0);
  }
  if (cVar24 == '\0') {
    dVar16 = CONCAT44D(0x38d1b717,fVar14);
  }
  else {
    dVar16 = 85899360465.7152;
  }
  if (cVar23 == '\0') {
    fVar14 = F32LO(dVar16) * F32HI(dVar16);
  }
  else {
    fVar14 = SUB84(dVar16 * dVar16,0);
  }
  if (cVar24 == '\0') {
    dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366b8),fVar14);
  }
  else {
    dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4366bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
  }
  if (cVar23 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = F32LO(dVar16) + F32HI(dVar16);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = SUB84(dVar16 + dVar16,0);
  }
  if (cVar24 == '\0') {
    fVar18 = 45.0;
    fVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8) = SUB84(in_xd0,0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366bc) = F32HI(in_xd0);
    fVar14 = 45.0;
    fVar18 = 0.8;
  }
  if (cVar23 != '\0' || fVar14 <= fVar18) {
    uVar8 = (vsp = ((unsigned long)(fr0_ - 444)), rand(((undefined1 *)(unsigned)0x8c4366bc),uVar5,iVar2,fVar11));
    iVar20 = 0x1e;
    fVar11 = (float)(vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar8,0x1e,iVar2,fVar11));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366c0) = fVar11;
  }
  else {
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x42340000,(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
    }
    else {
      dVar16 = 0.0008789064635550403;
    }
    if (cVar23 == '\0') {
      fVar14 = F32LO(dVar16) - F32HI(dVar16);
    }
    else {
      fVar14 = SUB84(dVar16 - dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x3f4ccccd,fVar14);
    }
    else {
      dVar16 = 7.2911194025414286e-304;
    }
    if (cVar23 == '\0') {
      iVar20 = (int)(F32LO(dVar16) * F32HI(dVar16));
    }
    else {
      iVar20 = (int)(dVar16 * dVar16);
    }
    for (iVar21 = 0; iVar21 < 4; iVar21 = iVar21 + 1) {
      *(int *)(unsigned)(iVar21 * 4 + -0x73bc99b4) = iVar20 * 0x1000000 + 0xffffff;
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x42340000,(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
    }
    else {
      dVar16 = 0.02500000981399353;
    }
    if (cVar23 == '\0') {
      fVar14 = F32LO(dVar16) - F32HI(dVar16);
    }
    else {
      fVar14 = SUB84(dVar16 - dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x3f99999a,fVar14);
    }
    else {
      dVar16 = 7.291119406615661e-304;
    }
    if (cVar23 == '\0') {
      iVar21 = (int)(F32LO(dVar16) * F32HI(dVar16));
    }
    else {
      iVar21 = (int)(dVar16 * dVar16);
    }
    uVar8 = 0xffffff;
    iVar20 = 0;
    for (iVar22 = 0; iVar22 < 4; iVar22 = iVar22 + 1) {
      iVar20 = iVar22 * 4;
      *(int *)(unsigned)(iVar20 + -0x73bc9984) = iVar21 * 0x1000000 + 0xffffff;
    }
  }
  uVar8 = (vsp = ((unsigned long)(fr0_ - 444)), rand(uVar8,iVar20,iVar2,fVar11));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar8,100,iVar2,uVar8));
  if (cVar23 == '\0') {
    dVar16 = CONCAT44D((float)(iVar2 + 0x69),uVar1);
  }
  else {
    dVar16 = (double)(iVar2 + 0x69);
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x40000000,(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
  }
  else {
    dVar17 = 3.533694972055102e+72;
  }
  if (cVar23 == '\0') {
    fVar11 = F32LO(dVar17) / F32HI(dVar17);
    dVar16 = CONCAT44D(F32HI(dVar16) + fVar11,SUB84(dVar16,0));
  }
  else {
    fVar11 = SUB84(dVar17 / dVar17,0);
    dVar16 = dVar16 + dVar17 / dVar17;
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x4f000000,fVar11);
  }
  else {
    dVar17 = -9.046259633960061e+74;
  }
  fVar11 = F32HI(dVar16);
  if (cVar23 == '\0') {
    bVar19 = F32HI(dVar17) < fVar11;
  }
  else {
    bVar19 = dVar17 < dVar16;
  }
  if (bVar19) {
    if (cVar24 == '\0') {
      dVar17 = CONCAT44D(0xcf800000,SUB84(dVar17,0));
    }
    else {
      dVar17 = -1.3547902344155491e-249;
    }
    if (cVar23 == '\0') {
      dVar16 = CONCAT44D(fVar11 + F32HI(dVar17),SUB84(dVar16,0));
    }
    else {
      dVar16 = dVar16 + dVar17;
    }
  }
  if (cVar23 == '\0') {
    iVar20 = (int)F32HI(dVar16);
  }
  else {
    iVar20 = (int)dVar16;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c436660) = (short)iVar2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c43665c) = (*(undefined4 *)(unsigned)(unsigned)0x8c436660) + SUB42((*(undefined4 *)(unsigned)(unsigned)0x8c4366c0),0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c43665e) = (undefined2)iVar20;
  iVar20 = iVar20 - (int)(*(undefined4 *)(unsigned)(unsigned)0x8c4366c0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c436664) = (undefined2)iVar20;
  puVar10 = ((undefined1 *)(unsigned)0x8c43665c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c436662) = (*(undefined4 *)(unsigned)(unsigned)0x8c436660);
  (*(undefined4 *)(unsigned)(unsigned)0x8c436666) = (*(undefined4 *)(unsigned)(unsigned)0x8c436660);
  (*(undefined4 *)(unsigned)(unsigned)0x8c436668) = (*(undefined4 *)(unsigned)(unsigned)0x8c43665e);
  (*(undefined4 *)(unsigned)(unsigned)0x8c43666a) = (*(undefined4 *)(unsigned)(unsigned)0x8c43665e);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), rand(((undefined1 *)(unsigned)0x8c43665c),((undefined1 *)(unsigned)0x8c43665c),((undefined1 *)(unsigned)0x8c43665c),iVar20));
  uVar8 = SUB84(dVar16,0);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar1,0x32,puVar10,iVar20));
  if (cVar23 == '\0') {
    dVar16 = CONCAT44D((float)(iVar2 + 0x9b),uVar8);
  }
  else {
    dVar16 = (double)(iVar2 + 0x9b);
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x40000000,(*(undefined4 *)(unsigned)(unsigned)0x8c4366b8));
  }
  else {
    dVar17 = 3.533694972055102e+72;
  }
  if (cVar23 == '\0') {
    fVar11 = F32LO(dVar17) / F32HI(dVar17);
    dVar16 = CONCAT44D(F32HI(dVar16) + fVar11,SUB84(dVar16,0));
  }
  else {
    fVar11 = SUB84(dVar17 / dVar17,0);
    dVar16 = dVar16 + dVar17 / dVar17;
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x4f000000,fVar11);
  }
  else {
    dVar17 = -9.046259633960061e+74;
  }
  fVar11 = F32HI(dVar16);
  if (cVar23 == '\0') {
    bVar19 = F32HI(dVar17) < fVar11;
  }
  else {
    bVar19 = dVar17 < dVar16;
  }
  if (bVar19) {
    if (cVar24 == '\0') {
      dVar17 = CONCAT44D(0xcf800000,SUB84(dVar17,0));
    }
    else {
      dVar17 = -1.3547902344155491e-249;
    }
    if (cVar23 == '\0') {
      dVar16 = CONCAT44D(fVar11 + F32HI(dVar17),SUB84(dVar16,0));
    }
    else {
      dVar16 = dVar16 + dVar17;
    }
  }
  if (cVar23 == '\0') {
    iVar20 = (int)F32HI(dVar16);
    dVar16 = CONCAT44D((float)iVar2,SUB84(dVar16,0));
  }
  else {
    iVar20 = (int)dVar16;
    dVar16 = (double)iVar2;
  }
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x3fc00000,(float)(int)(*(undefined4 *)(unsigned)(unsigned)0x8c4366c0));
  }
  else {
    dVar17 = 9.046259120036078e+74;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c436670) = (undefined2)iVar2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c43666e) = (undefined2)iVar20;
  if (cVar23 == '\0') {
    fVar14 = F32HI(dVar17);
    fVar11 = F32LO(dVar17) * fVar14;
    dVar17 = CONCAT44D(fVar14,fVar11);
    pcVar9 = (code *)(int)(F32HI(dVar16) + fVar11);
    (*(undefined4 *)(unsigned)(unsigned)0x8c43666c) = SUB42(pcVar9,0);
    dVar16 = CONCAT44D((float)iVar20,SUB84(dVar16,0));
  }
  else {
    dVar17 = dVar17 * dVar17;
    fVar11 = F32LO(dVar17);
    pcVar9 = (code *)(int)(dVar16 + dVar17);
    (*(undefined4 *)(unsigned)(unsigned)0x8c43666c) = SUB42(pcVar9,0);
    dVar16 = (double)iVar20;
  }
  fVar14 = F32HI(dVar16);
  if (cVar23 == '\0') {
    bVar19 = fVar14 < 0.0;
  }
  else {
    bVar19 = dVar16 < (double)(D2U(dVar17) & 0xffffffff);
  }
  if (bVar19) {
    if (cVar24 == '\0') {
      dVar17 = CONCAT44D(0x4f800000,fVar11);
    }
    else {
      dVar17 = -1.354755602458548e-249;
    }
    if (cVar23 == '\0') {
      dVar16 = CONCAT44D(fVar14 + F32HI(dVar17),SUB84(dVar16,0));
    }
    else {
      dVar16 = dVar16 + dVar17;
    }
  }
  ar6_01 = (code *)((undefined1 *)(unsigned)0x8c4366c0);
  if (cVar24 == '\0') {
    dVar17 = CONCAT44D(0x3fc00000,(float)(int)(*(undefined4 *)(unsigned)(unsigned)0x8c4366c0));
  }
  else {
    dVar17 = 9.046259120036078e+74;
  }
  if (cVar23 == '\0') {
    iVar2 = (int)(F32HI(dVar16) -
                 F32LO(dVar17) * F32HI(dVar17));
  }
  else {
    iVar2 = (int)(dVar16 - dVar17 * dVar17);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c436674) = (undefined2)iVar2;
  iVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c43663c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c436672) = (*(undefined4 *)(unsigned)(unsigned)0x8c436670);
  (*(undefined4 *)(unsigned)(unsigned)0x8c436676) = (*(undefined4 *)(unsigned)(unsigned)0x8c436670);
  (*(undefined4 *)(unsigned)(unsigned)0x8c436678) = (*(undefined4 *)(unsigned)(unsigned)0x8c43666e);
  (*(undefined4 *)(unsigned)(unsigned)0x8c43667a) = (*(undefined4 *)(unsigned)(unsigned)0x8c43666e);
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c43663c) != 0xffffff) {
    for (iVar21 = 0; iVar21 < 4; iVar21 = iVar21 + 1) {
      pcVar9 = (code *)((undefined1 *)(unsigned)0x8c43663c);
      ar6_01 = (code *)(((undefined1 *)(unsigned)0x8c43663c) + iVar21 * 4);
      iVar20 = *(int *)(unsigned)ar6_01 + -0x11000000;
      *(int *)(unsigned)ar6_01 = iVar20;
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), rand(iVar20,iVar2,ar6_01,pcVar9));
  puVar10 = (undefined1 *)(unsigned)0x190;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar1,400,ar6_01,pcVar9));
  if (iVar2 == 0) {
    if (cVar24 == '\0') {
      fVar14 = 75.0;
      fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
    }
    else {
      fVar11 = 75.0;
      fVar14 = 3.3705384e+10;
    }
    if (cVar23 == '\0' && fVar14 < fVar11) {
      for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c43663c) + iVar2 * 4) = 0xffffffff;
      }
      iVar2 = -0x73d4a630;
      pcVar9 = ((void *)0x8c021f18);
      puVar10 = (undefined1 *)(unsigned)
                (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),ar6_01,((void *)0x8c021f18)));
      if (puVar10 == (undefined1 *)(unsigned)0x2) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), rand(iVar2,2,ar6_01,pcVar9));
        uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar1,2,ar6_01,pcVar9));
        pcVar9 = (code *)((undefined1 *)(fr0_ - 0x34));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c13c8e7)); *(unsigned *)((((unsigned long)(fr0_ - 444)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 444)) - 8); FUN_8c014334(pcVar9,uVar1,ar6_01,pcVar9); });
        uVar8 = 0x8c2b59d0;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(fr0_ - 0x34)),ar6_01,pcVar9));
        *(undefined4 *)(unsigned)(ar4 + 0x144) = uVar1;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), rand(uVar8,0x144,ar6_01,pcVar9));
        iVar20 = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(iVar2,5999,ar6_01,pcVar9));
        puVar10 = ((undefined1 *)(unsigned)0x8c4366e4);
        *(unsigned *)0x8c4366e4 = (unsigned)(unsigned long)((code *)(iVar20 + -2999));
      }
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), rand(iVar2,puVar10,ar6_01,pcVar9));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar1,300,ar6_01,pcVar9));
  if (iVar2 == 0) {
    if (cVar24 == '\0') {
      fVar14 = 72.0;
      fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
    }
    else {
      fVar11 = 72.0;
      fVar14 = 2.69049e-43;
    }
    if (cVar23 == '\0' && fVar14 < fVar11) {
      uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x144);
      uVar8 = 0x8c2b59d0;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021f18(0x8c2b59d0,uVar1,ar6_01,pcVar9));
      if (iVar2 == 2) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), rand(uVar8,uVar1,ar6_01,pcVar9));
        uVar8 = 2;
        ar6_01 = ((void *)0x8c01031c);
        (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar1,2,((void *)0x8c01031c),pcVar9));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c13c8e7)); *(unsigned *)((((unsigned long)(fr0_ - 444)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 444)) - 8); FUN_8c014334(((undefined1 *)(fr0_ - 0x34)),uVar8,ar6_01,pcVar9); });
        puVar10 = ((undefined1 *)(fr0_ - 0x34));
        uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), pack_acquire_entry_handle(0x8c2b59d0,puVar10,ar6_01,pcVar9));
        *(undefined4 *)(unsigned)(ar4 + 0x144) = uVar1;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 444)), rand(((void *)0x8c014200),puVar10,ar6_01,pcVar9));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), libgcc_divide_helper_01031c(uVar1,4000,ar6_01,pcVar9));
        *(unsigned *)0x8c4366e4 = (unsigned)(unsigned long)((code *)(iVar2 + -2000));
      }
    }
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),ar6_01,pcVar9));
  if (iVar2 != 2) {
    if (cVar24 == '\0') {
      fVar14 = 72.0;
      fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
    }
    else {
      fVar11 = 72.0;
      fVar14 = 2.69049e-43;
    }
    if (cVar23 == '\0' && fVar14 < fVar11) {
      pcVar9 = (code *)0x258;
      ar6_01 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4366e4);
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),((undefined4 *)(unsigned long)*(unsigned *)0x8c4366e4),600));
    }
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),ar6_01,pcVar9));
  if (iVar2 == 2) {
    (vsp = ((unsigned long)(fr0_ - 444)), pack_release_entry_handle(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x144),ar6_01,pcVar9));
  }
  if ((((*(undefined4 *)(unsigned)(unsigned)0x8c4366dc) == 0) || (uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366dc), (*(undefined4 *)(unsigned)(unsigned)0x8c4366dc) == 1)) &&
     (uVar5 = 0x14c, *(int *)(unsigned)(ar4 + 0x14c) == 2)) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366cc) = 1;
  }
  if (*(int *)(unsigned)(ar4 + 0x14c) == 3) {
    for (iVar2 = 0; ar6_01 = (code *)0x4, iVar2 < 4; iVar2 = iVar2 + 1) {
      *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c43668c) + iVar2 * 4) = 0xffffff;
      *(undefined4 *)(unsigned)(iVar2 * 4 + -0x73bc9964) = 0xffffffff;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4366cc) = 2;
    *(undefined4 *)(unsigned)(ar4 + 0x14c) = 2;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4366cc) == 1) {
    uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c43668c);
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c43668c) < 0x1000000) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4366cc) = 2;
    }
    else {
      iVar2 = 0;
      while (iVar20 = iVar2, iVar20 < 4) {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c43668c) + iVar20 * 4) = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c43668c) + iVar20 * 4) + -0x3000000;
        uVar5 = 0x3000000;
        *(int *)(unsigned)(iVar20 * 4 + -0x73bc9964) = *(int *)(unsigned)(iVar20 * 4 + -0x73bc9964) + 0x3000000;
        (*(int *)(fr0_ - 0x1b8)) = iVar20;
        iVar2 = iVar20 + 1;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,uVar5,ar6_01,pcVar9));
  (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,0,ar6_01,pcVar9));
  (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43662c),ar6_01,((void *)0x8c016324)));
  uVar8 = 4;
  uVar1 = 0x8c43661c;
  pcVar9 = (code *)((undefined1 *)(unsigned)0x8c13bda0);
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bda0),0x8c43661c,4); });
  (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,pcVar9,uVar1,uVar8));
  if (cVar24 == '\0') {
    puVar10 = (undefined1 *)(unsigned)0x42340000;
    fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
  }
  else {
    fVar11 = 45.0;
    puVar10 = ((undefined1 *)(unsigned)0x8c4366c8);
  }
  if (cVar23 == '\0' && (float)(uint)puVar10 < fVar11) {
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,pcVar9,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,(*(undefined4 *)(unsigned)(unsigned)0x8c4366c8) + 10,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43666c),uVar1,uVar8));
    uVar8 = 4;
    uVar1 = 0x8c43664c;
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bda0),0x8c43664c,4); });
    pcVar9 = ((void *)0x8c016340);
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,((void *)0x8c016340),uVar1,uVar8));
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4366ac) < 2) {
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,pcVar9,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,1,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43662c),uVar1,uVar8));
    uVar1 = 4;
    puVar7 = ((undefined1 *)(unsigned)0x8c13bda0);
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bda0),0x8c43661c,4); });
    iVar21 = ar4 + 0x50;
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(iVar21,puVar7,iVar21,uVar1));
    iVar20 = ar4 + 0x48;
    iVar2 = iVar20;
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(iVar20,iVar20,iVar21,uVar1));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014294(iVar20,iVar2,iVar21,uVar1));
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x3ff33333,puVar10);
    }
    else {
      dVar16 = 32768.00780639648;
    }
    if (cVar23 == '\0') {
      fVar11 = F32LO(dVar16) * F32HI(dVar16);
    }
    else {
      fVar11 = SUB84(dVar16 * dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = CONCAT44D(0x40e00000,fVar11);
    }
    else {
      dVar16 = -33554440.109375;
    }
    if (cVar23 == '\0') {
      iVar2 = (int)(F32LO(dVar16) + F32HI(dVar16));
    }
    else {
      iVar2 = (int)(dVar16 + dVar16);
    }
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,iVar2,iVar21,uVar1));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43662c),((void *)0x8c016324),uVar1));
    uVar1 = 4;
    puVar10 = (undefined1 *)(unsigned)0x8c43661c;
    puVar7 = ((undefined1 *)(unsigned)0x8c13bdc0);
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bdc0),0x8c43661c,4); });
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1));
    (*(undefined2 *)(fr0_ - 0x64)) = 0;
    (*(undefined2 *)(fr0_ - 0x62)) = 0x7f;
    (*(undefined2 *)(fr0_ - 0x60)) = 0;
    (*(undefined2 *)(fr0_ - 0x5e)) = 0;
    (*(undefined2 *)(fr0_ - 0x5c)) = 0x7f;
    (*(undefined2 *)(fr0_ - 0x5a)) = 0;
    (*(undefined2 *)(fr0_ - 0x58)) = 0x7f;
    (*(undefined2 *)(fr0_ - 0x56)) = 0x7f;
  }
  else if ((*(undefined4 *)(unsigned)(unsigned)0x8c4366ac) < 4) {
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,pcVar9,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,2,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43662c),uVar1,uVar8));
    uVar1 = 4;
    puVar10 = (undefined1 *)(unsigned)0x8c43661c;
    puVar7 = ((undefined1 *)(unsigned)0x8c13bda0);
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bda0),0x8c43661c,4); });
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1));
    (*(undefined2 *)(fr0_ - 0x64)) = 0x80;
    (*(undefined2 *)(fr0_ - 0x62)) = 0x7f;
    puVar7 = (undefined *)(unsigned)0x80;
    (*(undefined2 *)(fr0_ - 0x60)) = 0x80;
    (*(undefined2 *)(fr0_ - 0x5e)) = 0;
    (*(undefined2 *)(fr0_ - 0x5c)) = 0xff;
    (*(undefined2 *)(fr0_ - 0x5a)) = 0;
    (*(undefined2 *)(fr0_ - 0x58)) = 0xff;
    uVar1 = 0x7f;
    (*(undefined2 *)(fr0_ - 0x56)) = 0x7f;
  }
  else if ((*(undefined4 *)(unsigned)(unsigned)0x8c4366ac) < 7) {
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,pcVar9,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,3,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43662c),uVar1,uVar8));
    uVar1 = 4;
    puVar10 = (undefined1 *)(unsigned)0x8c43661c;
    puVar7 = ((undefined1 *)(unsigned)0x8c13bda0);
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bda0),0x8c43661c,4); });
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1));
    (*(undefined2 *)(fr0_ - 0x64)) = 0;
    (*(undefined2 *)(fr0_ - 0x62)) = 0xff;
    (*(undefined2 *)(fr0_ - 0x60)) = 0;
    (*(undefined2 *)(fr0_ - 0x5e)) = 0x80;
    (*(undefined2 *)(fr0_ - 0x5c)) = 0x7f;
    (*(undefined2 *)(fr0_ - 0x5a)) = 0x80;
    (*(undefined2 *)(fr0_ - 0x58)) = 0x7f;
    (*(undefined2 *)(fr0_ - 0x56)) = 0xff;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,pcVar9,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,4,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43662c),uVar1,uVar8));
    uVar1 = 4;
    puVar10 = (undefined1 *)(unsigned)0x8c43661c;
    puVar7 = ((undefined1 *)(unsigned)0x8c13bda0);
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bda0),0x8c43661c,4); });
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1));
    (*(undefined2 *)(fr0_ - 0x64)) = 0x80;
    (*(undefined2 *)(fr0_ - 0x62)) = 0xff;
    (*(undefined2 *)(fr0_ - 0x60)) = 0x80;
    (*(undefined2 *)(fr0_ - 0x5e)) = 0x80;
    (*(undefined2 *)(fr0_ - 0x5c)) = 0xff;
    (*(undefined2 *)(fr0_ - 0x5a)) = 0x80;
    (*(undefined2 *)(fr0_ - 0x58)) = 0xff;
    (*(undefined2 *)(fr0_ - 0x56)) = 0xff;
  }
  if (cVar24 == '\0') {
    puVar3 = (undefined1 *)(unsigned)0x42340000;
    fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
  }
  else {
    fVar11 = 45.0;
    puVar3 = ((undefined1 *)(unsigned)0x8c4366c8);
  }
  if (cVar23 == '\0' && (float)(uint)puVar3 < fVar11) {
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,puVar7,puVar10,uVar1));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,(*(undefined4 *)(unsigned)(unsigned)0x8c4366c8) + 10,puVar10,uVar1));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43665c),puVar10,uVar1));
    uVar8 = 4;
    uVar1 = 0x8c43664c;
    puVar7 = ((undefined1 *)(unsigned)0x8c13bda0);
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bda0),0x8c43664c,4); });
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,puVar7,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,((void *)0x8c01538c),uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,0xd,uVar1,uVar8));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43662c),uVar1,uVar8));
    uVar1 = 4;
    puVar10 = (undefined1 *)(unsigned)0x8c43667c;
    puVar7 = ((undefined1 *)(unsigned)0x8c13bda0);
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bda0),0x8c43667c,4); });
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1));
  }
  if (cVar24 == '\0') {
    puVar3 = (undefined1 *)(unsigned)0x42960000;
    fVar11 = (*(undefined4 *)(unsigned)(unsigned)0x8c4366b8);
  }
  else {
    fVar11 = 75.0;
    puVar3 = ((undefined1 *)(unsigned)0x8c43663c);
  }
  if (cVar23 == '\0' && (float)(uint)puVar3 < fVar11) {
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,puVar7,puVar10,uVar1));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,9,puVar10,uVar1));
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43662c),puVar10,uVar1));
    uVar1 = 4;
    puVar10 = ((undefined1 *)(unsigned)0x8c43663c);
    puVar7 = ((undefined1 *)(unsigned)0x8c13bda0);
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bda0),((undefined1 *)(unsigned)0x8c43663c),4); });
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1));
  }
  (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,puVar7,puVar10,uVar1));
  uVar8 = 0x11;
  (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,0x11,puVar10,uVar1));
  (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(((undefined1 *)(fr0_ - 0x78)),uVar8,puVar10,uVar1));
  if (*(int *)(unsigned)(ar4 + 0x30) == 1) {
    puVar10 = (undefined1 *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c0c3e78(((undefined1 *)(unsigned)0x8c2b5628),*(undefined4 *)(unsigned)(ar4 + 0x154),0,uVar1));
  }
  iVar2 = *(int *)(unsigned)(ar4 + 0x14c);
  if ((iVar2 < 5) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    default:
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c0ba494(ar4 + 0x158,ar4 + 0x48,puVar10,uVar1));
      break;
    case 2:
    case 3:
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,4,puVar10,uVar1));
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,0xe,puVar10,uVar1));
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43662c),puVar10,uVar1));
      uVar1 = 4;
      puVar10 = (undefined1 *)(unsigned)0x8c43669c;
      puVar7 = ((undefined1 *)(unsigned)0x8c13bde0);
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1b8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 444)); FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bde0),0x8c43669c,4); });
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1));
      break;
    case 4:
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c01538c(ar4 + 0x48,4,puVar10,uVar1));
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c014a94(ar4 + 0x48,0x10,puVar10,uVar1));
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016324(ar4 + 0x50,((undefined1 *)(unsigned)0x8c43662c),puVar10,ar4 + 0x50));
      uVar1 = 4;
      puVar10 = (undefined1 *)(unsigned)0x8c43661c;
      puVar7 = ((undefined1 *)(unsigned)0x8c13bde0);
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016318(ar4 + 0x50,((undefined1 *)(unsigned)0x8c13bde0),0x8c43661c,4));
      (vsp = ((unsigned long)(fr0_ - 444)), FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 444)), free_if_nonnull_wrap_0151a0(((undefined1 *)(fr0_ - 0x78)),0xffffffff,puVar10,uVar1));
  return 1;
}

__asm__(".globl _s_AMB_FOREST_0bb1f2\n.set _s_AMB_FOREST_0bb1f2, _s_AMB_FOREST_0bb1f2_def\n");
