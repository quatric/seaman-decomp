#include "../decls.h"
undefined4 s_AMB_FOREST_0bb1f2_def(int ar4,int ar5,undefined1 *ar6,undefined1 *ar7)

{
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
  ulonglong in_dr0;
  double dVar15;
  double dVar16;
  float fVar18;
  double dVar17;
  double in_dr2;
  double in_xd0;
  bool bVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  char cVar23;
  char cVar24;
  int in_stack_fffffe48;
  int iStack_88;
  undefined1 auStack_84 [4];
  byte bStack_80;
  byte bStack_7f;
  byte bStack_7e;
  undefined1 auStack_78 [20];
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [24];
  
  cVar24 = '\0';
  cVar23 = '\0';
  if (DAT_8c436610 == '\0') {
    DAT_8c43660f = '\0';
    DAT_8c436610 = '\x01';
  }
  if (DAT_8c436618 == '\0') {
    ar6 = &DAT_8c436614;
    in_dr0 = in_dr0 & 0xffffffff;
    _DAT_8c436614 = (double)CONCAT35((int3)((ulonglong)_DAT_8c436614 >> 0x28),0x100000000);
  }
  uStack_54 = DAT_8c13be00;
  uStack_50 = DAT_8c13be04;
  uStack_4c = DAT_8c13be08;
  uStack_48 = DAT_8c13be0c;
  uStack_44 = DAT_8c13be10;
  uStack_40 = DAT_8c13be14;
  uStack_3c = DAT_8c13be18;
  uStack_38 = DAT_8c13be1c;
  uVar1 = DAT_8c13be18;
  FUN_8c0162f8(auStack_78,DAT_8c13be18,ar6,ar7);
  if (DAT_8c4366c4 == '\0') {
    uVar1 = rand(&DAT_8c4366c4,uVar1,ar6,ar7);
    _DAT_8c4366c0 = (float)libgcc_divide_helper_01031c(uVar1,0x2e,ar6,ar7);
    uVar1 = 1;
    DAT_8c4366c4 = '\x01';
  }
  if (DAT_8c4366d0 == '\0') {
    _DAT_8c4366cc = 0;
    DAT_8c4366d0 = '\x01';
  }
  if (DAT_8c4366d8 == '\0') {
    _DAT_8c4366d4 = 0;
    ar7 = &DAT_8c4366d8;
    uVar1 = 1;
    DAT_8c4366d8 = '\x01';
  }
  if (DAT_8c4366e0 == '\0') {
    _DAT_8c4366dc = 1;
    DAT_8c4366e0 = '\x01';
  }
  uVar1 = get_field_a510_01f538(0x8c3dd7dc,uVar1,ar6,ar7);
  if (DAT_8c4366ec == '\0') {
    _DAT_8c4366e8 = 0;
    DAT_8c4366ec = '\x01';
  }
  puVar10 = (undefined1 *)0x4;
  uVar8 = 0x8c43661c;
  FUN_8c016318(auStack_78,&uStack_54,0x8c43661c,4,in_stack_fffffe48);
  FUN_8c016324(auStack_78,&uStack_64,uVar8,puVar10);
  FUN_8c015198(auStack_78,0x80000060,uVar8,puVar10,in_stack_fffffe48);
  if (*(int *)(ar4 + 0x150) != _DAT_8c4366d4) {
    DAT_8c43660f = '\0';
    puVar10 = &DAT_8c4366d4;
    uVar8 = 0x150;
    _DAT_8c4366d4 = *(int *)(ar4 + 0x150);
  }
  FUN_8c0b9d14(ar5,auStack_84,uVar8,puVar10);
  pcVar9 = (code *)&DAT_8c43660f;
  if (DAT_8c43660f == '\0') {
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      *(undefined4 *)(&DAT_8c43663c + iVar2 * 4) = 0xffffff;
      *(undefined4 *)(iVar2 * 4 + -0x73bc99b4) = 0xffffff;
      *(undefined4 *)(iVar2 * 4 + -0x73bc9984) = 0xffffff;
      *(undefined4 *)(&DAT_8c43668c + iVar2 * 4) = 0xffffffff;
      *(undefined4 *)(iVar2 * 4 + -0x73bc9964) = 0xffffff;
    }
    _DAT_8c43662c = 0;
    _DAT_8c43662e = 0xff;
    _DAT_8c436630 = 0;
    _DAT_8c436632 = 0;
    _DAT_8c436634 = 0xff;
    _DAT_8c436636 = 0;
    _DAT_8c436638 = 0xff;
    _DAT_8c43663a = 0xff;
    puVar10 = (undefined1 *)0x4;
    pcVar9 = (code *)0x8c43661c;
    FUN_8c016318(ar4 + 0x50,0,0x8c43661c,4,in_stack_fffffe48);
    FUN_8c015198(ar4 + 0x50,0x80000060,pcVar9,puVar10,in_stack_fffffe48);
    iVar2 = 0;
    for (iVar20 = 0; iVar20 < 8; iVar20 = iVar20 + 1) {
      puVar10 = (undefined1 *)(ar5 + iVar20);
      iVar2 = (uint)(byte)puVar10[4] + iVar2;
    }
    puVar3 = auStack_84;
    FUN_8c0b9d14(ar5,puVar3,pcVar9,puVar10);
    _DAT_8c4366ac = get_field_c8_0bced0(ar5,puVar3,pcVar9,puVar10);
    ar4_00 = &DAT_8c4366ac;
    for (puVar12 = (undefined1 *)0x0; (int)puVar12 < 0x14; puVar12 = puVar12 + 1) {
      puVar3 = puVar12;
    }
    for (iVar20 = 0; iVar20 < (int)(uint)bStack_7e; iVar20 = iVar20 + 1) {
      pcVar9 = rand;
      rand(ar4_00,puVar3,rand,puVar10);
    }
    if (cVar23 == '\0') {
      dVar16 = (double)CONCAT44((float)bStack_80,SUB84(in_dr2,0));
    }
    else {
      dVar16 = (double)bStack_80;
    }
    if (cVar24 == '\0') {
      dVar17 = (double)CONCAT44(0x42700000,(int)in_dr0);
    }
    else {
      dVar17 = 6.64735386069639e-312;
    }
    if (cVar23 == '\0') {
      dVar15 = (double)CONCAT44((float)bStack_7f,SUB84(dVar17,0));
      in_dr2 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) *
                                (float)((ulonglong)dVar17 >> 0x20) + (float)bStack_7f,
                                SUB84(dVar16,0));
    }
    else {
      dVar15 = (double)bStack_7f;
      in_dr2 = dVar16 * dVar17 + dVar15;
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x40200000,SUB84(dVar15,0));
    }
    else {
      dVar16 = 7.63971638255348e-311;
    }
    if (cVar23 == '\0') {
      in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) *
                                (float)((ulonglong)dVar16 >> 0x20),SUB84(in_dr2,0));
    }
    else {
      in_dr2 = in_dr2 * dVar16;
    }
    fVar11 = (float)bStack_7f;
    if (cVar24 == '\0') {
      fVar14 = 60.0;
    }
    else {
      fVar11 = 60.0;
      fVar14 = 4.38606e-43;
    }
    if (cVar23 == '\0') {
      fVar11 = fVar11 * fVar14 + (float)bStack_7e;
      dVar16 = (double)CONCAT44((float)bStack_7e,fVar11);
      fVar11 = (float)((ulonglong)in_dr2 >> 0x20) - fVar11;
      in_dr2 = (double)CONCAT44(fVar11,SUB84(in_dr2,0));
      _DAT_8c4366b0 = (undefined1 *)(int)fVar11;
    }
    else {
      dVar16 = (double)bStack_7e + (double)bStack_7e;
      in_dr2 = in_dr2 - dVar16;
      _DAT_8c4366b0 = (undefined1 *)(int)in_dr2;
    }
    uVar8 = SUB84(dVar16,0);
    if ((int)_DAT_8c4366b0 < 0) {
      _DAT_8c4366b0 = _DAT_8c4366b0 + 0xe10;
    }
    uVar6 = rand(_DAT_8c4366b0,puVar3,pcVar9,puVar10);
    uVar4 = 0x3c;
    _DAT_8c4366b4 = libgcc_divide_helper_01031c(uVar6,0x3c,pcVar9,puVar10);
    uVar6 = rand(&DAT_8c4366b4,uVar4,pcVar9,puVar10);
    uVar4 = 0x41;
    iVar20 = libgcc_divide_helper_01031c(uVar6,0x41,pcVar9,puVar10);
    if (cVar23 == '\0') {
      dVar16 = (double)CONCAT44((float)iVar20,uVar8);
    }
    else {
      dVar16 = (double)iVar20;
    }
    fVar11 = (float)((ulonglong)dVar16 >> 0x20);
    _DAT_8c4366b8 = fVar11;
    if (cVar24 != '\0') {
      _DAT_8c4366b8 = SUB84(dVar16,0);
      _DAT_8c4366bc = fVar11;
    }
    uVar8 = rand(uVar6,uVar4,pcVar9,puVar10);
    uVar6 = SUB84(dVar16,0);
    iVar20 = libgcc_divide_helper_01031c(uVar8,0x46,pcVar9,puVar10);
    if (cVar23 == '\0') {
      dVar16 = (double)CONCAT44((float)iVar20,uVar6);
    }
    else {
      dVar16 = (double)iVar20;
    }
    fVar11 = (float)((ulonglong)dVar16 >> 0x20);
    _DAT_8c4366bc = SUB84(dVar16,0);
    if (cVar24 == '\0') {
      _DAT_8c4366bc = fVar11;
      fVar11 = _DAT_8c4366c0;
    }
    _DAT_8c4366c0 = fVar11;
    if (iVar2 == 1) {
      if (cVar24 == '\0') {
        _DAT_8c4366b8 = 0.0;
      }
      else {
        _DAT_8c4366c0 = 0.0;
        _DAT_8c4366b8 = SUB84(dVar16,0);
      }
      _DAT_8c4366bc = 0.0;
      dVar16 = (double)((ulonglong)dVar16 & 0xffffffff);
      iVar2 = -((uint)bStack_7f * 0x3c + (uint)bStack_7e);
      _DAT_8c4366b0 = (undefined1 *)(iVar2 + 0x708);
      if ((int)_DAT_8c4366b0 < 0) {
        _DAT_8c4366b0 = (undefined1 *)(iVar2 + 0x1518);
      }
    }
    fVar11 = SUB84(dVar16,0);
    if (4 < _DAT_8c4366ac) {
      pcVar9 = (code *)&DAT_8c4366b8;
      if (cVar24 == '\0') {
        _DAT_8c4366b8 = 60.0;
        _DAT_8c4366bc = 70.0;
      }
      else {
        _DAT_8c4366b8 = 60.0;
        fVar11 = 70.0;
        _DAT_8c4366bc = 70.0;
        _DAT_8c4366c0 = 90.0;
      }
    }
    if (10 < _DAT_8c4366ac) {
      if (cVar24 == '\0') {
        _DAT_8c4366b8 = 60.0;
        _DAT_8c4366bc = 90.0;
      }
      else {
        _DAT_8c4366b8 = 60.0;
        fVar11 = 90.0;
        _DAT_8c4366bc = 90.0;
        _DAT_8c4366c0 = 1.1911e-42;
      }
    }
    if ((((*(int *)(ar5 + 0x30) == 0x25) || (*(int *)(ar5 + 0x34) == 0x25)) ||
        (*(int *)(ar5 + 0x38) == 0x25)) && (*(char *)(ar5 + 0x69) == '\0')) {
      if (cVar24 == '\0') {
        _DAT_8c4366bc = 0.0;
      }
      else {
        _DAT_8c4366c0 = 0.0;
        _DAT_8c4366bc = fVar11;
      }
      iVar2 = -((uint)bStack_7f * 0x3c + (uint)bStack_7e);
      _DAT_8c4366b0 = (undefined1 *)(iVar2 + 0x352);
      if ((int)_DAT_8c4366b0 < 0) {
        puVar10 = (undefined1 *)(iVar2 + 0x1162);
        _DAT_8c4366b0 = puVar10;
      }
    }
    _DAT_8c4366c8 = 0;
    DAT_8c43660f = '\x01';
  }
  ar6_00 = (char *)pcVar9;
  if (_DAT_8c4366e8 != 0) {
    if (cVar24 == '\0') {
      fVar14 = 72.0;
      fVar11 = _DAT_8c4366b8;
    }
    else {
      in_xd0 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
      fVar11 = 72.0;
      fVar14 = 4.54021e-43;
    }
    if (cVar23 == '\0' && fVar11 < fVar14) {
      pack_release_entry_handle(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),pcVar9,puVar10);
      ar6_00 = (char *)pcVar9;
    }
    pack_release_entry_handle(0x8c2b59d0,*(undefined4 *)(ar4 + 0x148),ar6_00,puVar10);
  }
  if (cVar24 == '\0') {
    fVar14 = 30.0;
    fVar11 = _DAT_8c4366b8;
  }
  else {
    in_xd0 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
    fVar11 = 30.0;
    fVar14 = -1.6662342e+14;
  }
  _DAT_8c4366e8 = uVar1;
  if (cVar23 == '\0' && fVar11 < fVar14) {
    puVar10 = (undefined1 *)0x898;
    ar6_00 = (char *)0x0;
    FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),0,0x898);
  }
  iVar2 = FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),ar6_00,puVar10);
  if (iVar2 == 2) {
    ar6_00 = (char *)pack_acquire_entry_handle(0x8c2b59d0,s_AMB_FOREST_8c13c8ce,ar6_00,puVar10);
    puVar10 = (undefined1 *)0x144;
    *(char **)(ar4 + 0x144) = ar6_00;
  }
  else {
    if (cVar24 == '\0') {
      fVar14 = 65.0;
      fVar11 = _DAT_8c4366b8;
    }
    else {
      in_xd0 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
      fVar11 = 65.0;
      fVar14 = 30.0;
    }
    if (cVar23 != '\0' || fVar14 <= fVar11) {
      if (cVar24 == '\0') {
        fVar14 = 72.0;
        fVar11 = _DAT_8c4366b8;
      }
      else {
        in_xd0 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
        fVar11 = 72.0;
        fVar14 = 4.54021e-43;
      }
      if (cVar23 == '\0' && fVar11 < fVar14) {
        pack_release_entry_handle(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),ar6_00,puVar10);
      }
    }
    else {
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x41f00000,_DAT_8c4366b8);
      }
      else {
        in_xd0 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
        dVar16 = 1.7021678581004447e+27;
      }
      if (cVar23 == '\0') {
        fVar11 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar16 - dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x45960000,fVar11);
      }
      else {
        dVar16 = 15032387762.75;
      }
      if (cVar23 == '\0') {
        fVar11 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar16 * dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x420c0000,fVar11);
      }
      else {
        dVar16 = 3.853451644918994e+24;
      }
      if (cVar23 == '\0') {
        fVar11 = SUB84(dVar16,0) / (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar16 / dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x45098000,fVar11);
      }
      else {
        dVar16 = 6.880988880521e-312;
      }
      if (cVar23 == '\0') {
        puVar10 = (undefined1 *)(int)(SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20));
      }
      else {
        puVar10 = (undefined1 *)(int)(dVar16 + dVar16);
      }
      ar6_00 = (char *)0x0;
      FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),0,puVar10);
      iVar2 = FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),ar6_00,puVar10);
      if (iVar2 == 2) {
        puVar10 = (undefined1 *)0x8ea;
        ar6_00 = s_AMB_FOREST_8c13c8ce;
        uVar1 = pack_acquire_entry_handle
                          (0x8c2b59d0,s_AMB_FOREST_8c13c8ce,s_AMB_FOREST_8c13c8ce,0x8ea);
        *(undefined4 *)(ar4 + 0x144) = uVar1;
      }
    }
  }
  iVar2 = FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(ar4 + 0x148),ar6_00,puVar10);
  if (iVar2 == 2) {
    uVar1 = pack_acquire_entry_handle(0x8c2b59d0,s_AMB_RAIN_8c13c8d9,ar6_00,puVar10);
    *(undefined4 *)(ar4 + 0x148) = uVar1;
  }
  if (cVar24 == '\0') {
    fVar14 = 50.0;
    fVar11 = _DAT_8c4366b8;
  }
  else {
    in_xd0 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
    fVar11 = 50.0;
    fVar14 = 9.80909e-42;
  }
  if (cVar23 != '\0' || fVar14 <= fVar11) {
    if (cVar24 == '\0') {
      fVar14 = 75.0;
      fVar11 = _DAT_8c4366b8;
    }
    else {
      in_xd0 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
      fVar11 = 75.0;
      fVar14 = 5300.0;
    }
    if (cVar23 != '\0' || fVar14 <= fVar11) {
      fVar11 = 2.38221e-42;
      iVar2 = 0;
      FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(ar4 + 0x148),0,0x6a4);
    }
    else {
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(_DAT_8c4366b8,0x42960000);
      }
      else {
        dVar16 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
        in_xd0 = 3.3463072828401675e+27;
      }
      if (cVar23 == '\0') {
        fVar11 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar16 - dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x45a5a000,fVar11);
      }
      else {
        dVar16 = 805306507.2939453;
      }
      if (cVar23 == '\0') {
        fVar11 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar16 * dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x41c80000,fVar11);
      }
      else {
        dVar16 = 3.8723412565841415e+23;
      }
      if (cVar23 == '\0') {
        fVar11 = SUB84(dVar16,0) / (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar16 / dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x44d48000,fVar11);
      }
      else {
        dVar16 = 6.96585155124395e-312;
      }
      if (cVar23 == '\0') {
        fVar11 = (float)(int)(SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20));
      }
      else {
        fVar11 = (float)(int)(dVar16 + dVar16);
      }
      iVar2 = 0;
      FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(ar4 + 0x148),0,fVar11);
    }
  }
  else {
    fVar11 = 9.80909e-42;
    iVar2 = 0;
    FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(ar4 + 0x148),0,7000);
  }
  _DAT_8c4366c8 = _DAT_8c4366c8 + 1;
  if (2 < _DAT_8c4366c8) {
    _DAT_8c4366c8 = 0;
  }
  if (cVar24 == '\0') {
    dVar16 = (double)CONCAT44(0x3dcccccd,_DAT_8c436614);
  }
  else {
    dVar16 = 1.4411521461875377e+18;
    in_xd0 = _DAT_8c436614;
  }
  if (cVar23 == '\0') {
    fVar14 = SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20);
  }
  else {
    fVar14 = SUB84(dVar16 + dVar16,0);
  }
  if (cVar24 == '\0') {
    _DAT_8c436614 = (double)CONCAT44(_DAT_8c436618,fVar14);
    dVar16 = (double)CONCAT44(0x43b40000,fVar14);
  }
  else {
    dVar16 = 6.64745876893557e-312;
    _DAT_8c436614 = in_xd0;
  }
  dVar17 = _DAT_8c436614;
  if ((cVar23 != '\0' || (float)((ulonglong)dVar16 >> 0x20) <= SUB84(dVar16,0)) &&
     (dVar16 = (double)((ulonglong)dVar16 & 0xffffffff), dVar17 = dVar16, cVar24 == '\0')) {
    _DAT_8c436614 = (double)((ulonglong)_DAT_8c436614 & 0xffffffff00000000);
    dVar17 = _DAT_8c436614;
  }
  _DAT_8c436614 = dVar17;
  puVar10 = _DAT_8c4366b0 + (uint)bStack_7f * 0x3c + (uint)bStack_7e;
  if ((undefined1 *)0xe10 < puVar10) {
    puVar10 = puVar10 + -0xe10;
  }
  if ((puVar10 < (undefined1 *)0x272) || (iVar2 = 0x47e, (undefined1 *)0x47d < puVar10)) {
    if ((puVar10 < (undefined1 *)0xaf1) || ((undefined1 *)0xbe9 < puVar10)) {
      if ((puVar10 < (undefined1 *)0x47e) || ((undefined1 *)0xaf0 < puVar10)) {
        iVar20 = 0;
      }
      else {
        iVar20 = 0xaf;
      }
    }
    else {
      if (cVar23 == '\0') {
        in_dr2 = (double)CONCAT44((float)(int)puVar10,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = (double)(int)puVar10;
      }
      dVar17 = (double)((ulonglong)dVar16 & 0xffffffff);
      fVar14 = (float)((ulonglong)in_dr2 >> 0x20);
      if (cVar23 == '\0') {
        bVar19 = fVar14 < 0.0;
      }
      else {
        bVar19 = in_dr2 < dVar17;
      }
      if (bVar19) {
        if (cVar24 == '\0') {
          dVar17 = (double)CONCAT44(0x4f800000,SUB84(dVar16,0));
        }
        else {
          dVar17 = 3.7023358954276744e+25;
        }
        if (cVar23 == '\0') {
          in_dr2 = (double)CONCAT44(fVar14 + (float)((ulonglong)dVar17 >> 0x20),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + dVar17;
        }
      }
      if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),0x453ea000);
      }
      else {
        in_xd0 = 1.1709360889934643e+17;
      }
      if (cVar23 == '\0') {
        fVar14 = SUB84(dVar17,0) - (float)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar17 - in_dr2,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x437a0000,fVar14);
      }
      else {
        dVar16 = 4.3628627050496e+15;
      }
      if (cVar23 == '\0') {
        fVar14 = SUB84(dVar16,0) / (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar16 / dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x432f0000,fVar14);
      }
      else {
        dVar16 = 1.274788992873159e-19;
      }
      if (cVar23 == '\0') {
        fVar18 = (float)((ulonglong)dVar16 >> 0x20);
        fVar14 = SUB84(dVar16,0) * fVar18;
        dVar16 = (double)CONCAT44(fVar18,fVar14);
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
        dVar16 = (double)CONCAT44(0x4f800000,fVar14);
      }
      else {
        dVar16 = 1.3028015187336731e+20;
      }
      if (cVar23 == '\0') {
        fVar14 = SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar16 + dVar16,0);
      }
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x441c4000,fVar14);
    }
    else {
      dVar16 = 4.438748728837905e+19;
    }
    if (cVar23 == '\0') {
      fVar14 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar16 - dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x44034000,fVar14);
    }
    else {
      dVar16 = 4362862709547008.0;
    }
    if (cVar23 == '\0') {
      fVar14 = SUB84(dVar16,0) / (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar16 / dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x432f0000,fVar14);
    }
    else {
      dVar16 = 1.5458488417764263e-19;
    }
    if (cVar23 == '\0') {
      fVar18 = (float)((ulonglong)dVar16 >> 0x20);
      fVar14 = SUB84(dVar16,0) * fVar18;
      dVar16 = (double)CONCAT44(fVar18,fVar14);
      iVar20 = (int)fVar14;
    }
    else {
      dVar16 = dVar16 * dVar16;
      iVar20 = (int)dVar16;
    }
  }
  if ((puVar10 < (undefined1 *)0x2ef) || ((undefined1 *)0x47d < puVar10)) {
    if ((puVar10 < (undefined1 *)0xa8d) || ((undefined1 *)0xbb7 < puVar10)) {
      if ((puVar10 < (undefined1 *)0x47e) || ((undefined1 *)0xa8c < puVar10)) {
        iVar21 = 0;
      }
      else {
        iVar21 = 0xaf;
      }
    }
    else {
      if (cVar23 == '\0') {
        in_dr2 = (double)CONCAT44((float)(int)puVar10,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = (double)(int)puVar10;
      }
      dVar17 = (double)((ulonglong)dVar16 & 0xffffffff);
      fVar14 = (float)((ulonglong)in_dr2 >> 0x20);
      if (cVar23 == '\0') {
        bVar19 = fVar14 < 0.0;
      }
      else {
        bVar19 = in_dr2 < dVar17;
      }
      if (bVar19) {
        if (cVar24 == '\0') {
          dVar17 = (double)CONCAT44(0x4f800000,SUB84(dVar16,0));
        }
        else {
          dVar17 = 3.324546576798103e+25;
        }
        if (cVar23 == '\0') {
          in_dr2 = (double)CONCAT44(fVar14 + (float)((ulonglong)dVar17 >> 0x20),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + dVar17;
        }
      }
      if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),0x453b8000);
      }
      else {
        in_xd0 = 3.963168415463506e+17;
      }
      if (cVar23 == '\0') {
        fVar14 = SUB84(dVar17,0) - (float)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar17 - in_dr2,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x43960000,fVar14);
      }
      else {
        dVar16 = 4362862705967104.0;
      }
      if (cVar23 == '\0') {
        fVar14 = SUB84(dVar16,0) / (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar16 / dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x432f0000,fVar14);
      }
      else {
        dVar16 = 2.041356454491563e-18;
      }
      if (cVar23 == '\0') {
        fVar18 = (float)((ulonglong)dVar16 >> 0x20);
        fVar14 = SUB84(dVar16,0) * fVar18;
        dVar16 = (double)CONCAT44(fVar18,fVar14);
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
        dVar16 = (double)CONCAT44(0x4f800000,fVar14);
      }
      else {
        dVar16 = 5.072855494381871e+20;
      }
      if (cVar23 == '\0') {
        fVar14 = SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar16 + dVar16,0);
      }
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x443b8000,fVar14);
    }
    else {
      dVar16 = 3.458765099932582e+18;
    }
    if (cVar23 == '\0') {
      fVar14 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar16 - dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x43c80000,fVar14);
    }
    else {
      dVar16 = 4362862707605504.0;
    }
    if (cVar23 == '\0') {
      fVar14 = SUB84(dVar16,0) / (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar16 / dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x432f0000,fVar14);
    }
    else {
      dVar16 = 1.5458488417764263e-19;
    }
    if (cVar23 == '\0') {
      fVar18 = (float)((ulonglong)dVar16 >> 0x20);
      fVar14 = SUB84(dVar16,0) * fVar18;
      dVar16 = (double)CONCAT44(fVar18,fVar14);
      iVar21 = (int)fVar14;
    }
    else {
      dVar16 = dVar16 * dVar16;
      iVar21 = (int)dVar16;
    }
  }
  if ((puVar10 < (undefined1 *)0x272) || ((undefined1 *)0x44b < puVar10)) {
    if ((puVar10 < (undefined1 *)0x9c5) || ((undefined1 *)0xabd < puVar10)) {
      if ((puVar10 < (undefined1 *)0x44c) || ((undefined1 *)0x9c4 < puVar10)) {
        iStack_88 = 0;
      }
      else {
        iStack_88 = 0x87;
      }
    }
    else {
      if (cVar23 == '\0') {
        in_dr2 = (double)CONCAT44((float)(int)puVar10,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = (double)(int)puVar10;
      }
      dVar17 = (double)((ulonglong)dVar16 & 0xffffffff);
      fVar14 = (float)((ulonglong)in_dr2 >> 0x20);
      if (cVar23 == '\0') {
        bVar19 = fVar14 < 0.0;
      }
      else {
        bVar19 = in_dr2 < dVar17;
      }
      if (bVar19) {
        if (cVar24 == '\0') {
          dVar17 = (double)CONCAT44(0x4f800000,SUB84(dVar16,0));
        }
        else {
          dVar17 = 1.6849406475168257e+25;
        }
        if (cVar23 == '\0') {
          in_dr2 = (double)CONCAT44(fVar14 + (float)((ulonglong)dVar17 >> 0x20),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + dVar17;
        }
      }
      if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),0x452be000);
      }
      else {
        in_xd0 = 1.1709360887968563e+17;
      }
      if (cVar23 == '\0') {
        fVar14 = SUB84(dVar17,0) - (float)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar17 - in_dr2,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x437a0000,fVar14);
      }
      else {
        dVar16 = 809240699551744.0;
      }
      if (cVar23 == '\0') {
        fVar14 = SUB84(dVar16,0) / (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar16 / dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x43070000,fVar14);
      }
      else {
        dVar16 = 6.45642313192963e-312;
      }
      if (cVar23 == '\0') {
        iStack_88 = (int)(SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20));
      }
      else {
        iStack_88 = (int)(dVar16 * dVar16);
      }
    }
  }
  else {
    fVar14 = (float)(int)puVar10;
    if (cVar23 == '\0' && fVar14 < 0.0) {
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x4f800000,fVar14);
      }
      else {
        dVar16 = 1.3028015187336731e+20;
      }
      if (cVar23 == '\0') {
        fVar14 = SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar16 + dVar16,0);
      }
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x441c4000,fVar14);
    }
    else {
      dVar16 = 1.7005594533204853e+19;
    }
    if (cVar23 == '\0') {
      fVar14 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar16 - dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x43ed8000,fVar14);
    }
    else {
      dVar16 = 809240700497920.0;
    }
    if (cVar23 == '\0') {
      fVar14 = SUB84(dVar16,0) / (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar16 / dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x43070000,fVar14);
    }
    else {
      dVar16 = 6.45642313192963e-312;
    }
    if (cVar23 == '\0') {
      iStack_88 = (int)(SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20));
    }
    else {
      iStack_88 = (int)(dVar16 * dVar16);
    }
  }
  if (cVar23 == '\0') {
    dVar16 = (double)CONCAT44((float)iVar20,SUB84(in_dr2,0));
  }
  else {
    dVar16 = (double)iVar20;
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(_DAT_8c4366b8,0x42c80000);
  }
  else {
    dVar17 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
    in_xd0 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = SUB84(dVar17,0) - (float)((ulonglong)dVar17 >> 0x20);
  }
  else {
    fVar14 = SUB84(dVar17 - dVar17,0);
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x42c80000,fVar14);
  }
  else {
    dVar17 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = SUB84(dVar17,0) / (float)((ulonglong)dVar17 >> 0x20);
    dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * fVar14,SUB84(dVar16,0));
  }
  else {
    fVar14 = SUB84(dVar17 / dVar17,0);
    dVar16 = dVar16 * (dVar17 / dVar17);
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x42a00000,fVar14);
  }
  else {
    dVar17 = 281475046572032.0;
  }
  if (cVar23 == '\0') {
    iVar20 = (int)((float)((ulonglong)dVar16 >> 0x20) + (float)((ulonglong)dVar17 >> 0x20));
    dVar16 = (double)CONCAT44((float)iVar21,SUB84(dVar16,0));
  }
  else {
    iVar20 = (int)(dVar16 + dVar17);
    dVar16 = (double)iVar21;
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(_DAT_8c4366b8,0x42c80000);
  }
  else {
    dVar17 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
    in_xd0 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = SUB84(dVar17,0) - (float)((ulonglong)dVar17 >> 0x20);
  }
  else {
    fVar14 = SUB84(dVar17 - dVar17,0);
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x42c80000,fVar14);
  }
  else {
    dVar17 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = SUB84(dVar17,0) / (float)((ulonglong)dVar17 >> 0x20);
    dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * fVar14,SUB84(dVar16,0));
  }
  else {
    fVar14 = SUB84(dVar17 / dVar17,0);
    dVar16 = dVar16 * (dVar17 / dVar17);
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x42a00000,fVar14);
  }
  else {
    dVar17 = 281475046572032.0;
  }
  if (cVar23 == '\0') {
    iVar21 = (int)((float)((ulonglong)dVar16 >> 0x20) + (float)((ulonglong)dVar17 >> 0x20));
    dVar16 = (double)CONCAT44((float)iStack_88,SUB84(dVar16,0));
  }
  else {
    iVar21 = (int)(dVar16 + dVar17);
    dVar16 = (double)iStack_88;
  }
  puVar10 = &DAT_8c4366b8;
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(_DAT_8c4366b8,0x42c80000);
  }
  else {
    dVar17 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
    in_xd0 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = SUB84(dVar17,0) - (float)((ulonglong)dVar17 >> 0x20);
  }
  else {
    fVar14 = SUB84(dVar17 - dVar17,0);
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x42c80000,fVar14);
  }
  else {
    dVar17 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = SUB84(dVar17,0) / (float)((ulonglong)dVar17 >> 0x20);
    dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * fVar14,SUB84(dVar16,0));
  }
  else {
    fVar14 = SUB84(dVar17 / dVar17,0);
    dVar16 = dVar16 * (dVar17 / dVar17);
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x42f00000,fVar14);
  }
  else {
    dVar17 = -5.48612543682247e+303;
  }
  if (cVar23 == '\0') {
    fVar14 = (float)((ulonglong)dVar16 >> 0x20) + (float)((ulonglong)dVar17 >> 0x20);
    dVar16 = (double)CONCAT44(fVar14,SUB84(dVar16,0));
    iVar22 = (int)fVar14;
  }
  else {
    dVar16 = dVar16 + dVar17;
    iVar22 = (int)dVar16;
  }
  uVar1 = SUB84(dVar16,0);
  for (iVar13 = 0; iVar13 < 4; iVar13 = iVar13 + 1) {
    puVar10 = (undefined1 *)(iVar13 * 4);
    *(int *)(puVar10 + -0x73bc99e4) = iVar20 * 0x10000 + -0x1000000 + iVar21 * 0x100 + iVar22;
  }
  uVar5 = (uint)bStack_7f;
  if (_DAT_8c4366b4 == uVar5) {
    uVar8 = rand(puVar10,uVar5,iVar2,fVar11);
    uVar6 = 0x3c;
    _DAT_8c4366b4 = libgcc_divide_helper_01031c(uVar8,0x3c,iVar2,fVar11);
    uVar8 = rand(&DAT_8c4366b4,uVar6,iVar2,fVar11);
    uVar5 = 0xb;
    iVar2 = libgcc_divide_helper_01031c(uVar8,0xb,iVar2,fVar11);
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x41200000,(float)iVar2);
    }
    else {
      dVar16 = 5.330973659922055e-35;
    }
    if (cVar23 == '\0') {
      _DAT_8c4366bc = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      _DAT_8c4366bc = SUB84(dVar16 * dVar16,0);
    }
    if (cVar24 != '\0') {
      _DAT_8c4366bc = SUB84(in_xd0,0);
      _DAT_8c4366c0 = (float)((ulonglong)in_xd0 >> 0x20);
    }
  }
  if (cVar24 == '\0') {
    dVar16 = (double)CONCAT44(_DAT_8c4366b8,_DAT_8c4366bc);
  }
  else {
    in_xd0 = (double)CONCAT44(_DAT_8c4366c0,_DAT_8c4366bc);
    dVar16 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
  }
  if (cVar23 == '\0') {
    fVar14 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
  }
  else {
    fVar14 = SUB84(dVar16 - dVar16,0);
  }
  if (cVar24 == '\0') {
    dVar16 = (double)CONCAT44(0x38d1b717,fVar14);
  }
  else {
    dVar16 = 85899360465.7152;
  }
  if (cVar23 == '\0') {
    fVar14 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
  }
  else {
    fVar14 = SUB84(dVar16 * dVar16,0);
  }
  if (cVar24 == '\0') {
    dVar16 = (double)CONCAT44(_DAT_8c4366b8,fVar14);
  }
  else {
    dVar16 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
  }
  if (cVar23 == '\0') {
    _DAT_8c4366b8 = SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20);
  }
  else {
    _DAT_8c4366b8 = SUB84(dVar16 + dVar16,0);
  }
  if (cVar24 == '\0') {
    fVar18 = 45.0;
    fVar14 = _DAT_8c4366b8;
  }
  else {
    _DAT_8c4366b8 = SUB84(in_xd0,0);
    _DAT_8c4366bc = (float)((ulonglong)in_xd0 >> 0x20);
    fVar14 = 45.0;
    fVar18 = 0.8;
  }
  if (cVar23 != '\0' || fVar14 <= fVar18) {
    uVar8 = rand(&DAT_8c4366bc,uVar5,iVar2,fVar11);
    iVar20 = 0x1e;
    fVar11 = (float)libgcc_divide_helper_01031c(uVar8,0x1e,iVar2,fVar11);
    _DAT_8c4366c0 = fVar11;
  }
  else {
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x42340000,_DAT_8c4366b8);
    }
    else {
      dVar16 = 0.0008789064635550403;
    }
    if (cVar23 == '\0') {
      fVar14 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar16 - dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x3f4ccccd,fVar14);
    }
    else {
      dVar16 = 7.2911194025414286e-304;
    }
    if (cVar23 == '\0') {
      iVar20 = (int)(SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20));
    }
    else {
      iVar20 = (int)(dVar16 * dVar16);
    }
    for (iVar21 = 0; iVar21 < 4; iVar21 = iVar21 + 1) {
      *(int *)(iVar21 * 4 + -0x73bc99b4) = iVar20 * 0x1000000 + 0xffffff;
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x42340000,_DAT_8c4366b8);
    }
    else {
      dVar16 = 0.02500000981399353;
    }
    if (cVar23 == '\0') {
      fVar14 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar16 - dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x3f99999a,fVar14);
    }
    else {
      dVar16 = 7.291119406615661e-304;
    }
    if (cVar23 == '\0') {
      iVar21 = (int)(SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20));
    }
    else {
      iVar21 = (int)(dVar16 * dVar16);
    }
    uVar8 = 0xffffff;
    iVar20 = 0;
    for (iVar22 = 0; iVar22 < 4; iVar22 = iVar22 + 1) {
      iVar20 = iVar22 * 4;
      *(int *)(iVar20 + -0x73bc9984) = iVar21 * 0x1000000 + 0xffffff;
    }
  }
  uVar8 = rand(uVar8,iVar20,iVar2,fVar11);
  iVar2 = libgcc_divide_helper_01031c(uVar8,100,iVar2,uVar8);
  if (cVar23 == '\0') {
    dVar16 = (double)CONCAT44((float)(iVar2 + 0x69),uVar1);
  }
  else {
    dVar16 = (double)(iVar2 + 0x69);
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x40000000,_DAT_8c4366b8);
  }
  else {
    dVar17 = 3.533694972055102e+72;
  }
  if (cVar23 == '\0') {
    fVar11 = SUB84(dVar17,0) / (float)((ulonglong)dVar17 >> 0x20);
    dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + fVar11,SUB84(dVar16,0));
  }
  else {
    fVar11 = SUB84(dVar17 / dVar17,0);
    dVar16 = dVar16 + dVar17 / dVar17;
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x4f000000,fVar11);
  }
  else {
    dVar17 = -9.046259633960061e+74;
  }
  fVar11 = (float)((ulonglong)dVar16 >> 0x20);
  if (cVar23 == '\0') {
    bVar19 = (float)((ulonglong)dVar17 >> 0x20) < fVar11;
  }
  else {
    bVar19 = dVar17 < dVar16;
  }
  if (bVar19) {
    if (cVar24 == '\0') {
      dVar17 = (double)CONCAT44(0xcf800000,SUB84(dVar17,0));
    }
    else {
      dVar17 = -1.3547902344155491e-249;
    }
    if (cVar23 == '\0') {
      dVar16 = (double)CONCAT44(fVar11 + (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar16,0));
    }
    else {
      dVar16 = dVar16 + dVar17;
    }
  }
  if (cVar23 == '\0') {
    iVar20 = (int)(float)((ulonglong)dVar16 >> 0x20);
  }
  else {
    iVar20 = (int)dVar16;
  }
  _DAT_8c436660 = (short)iVar2;
  _DAT_8c43665c = _DAT_8c436660 + SUB42(_DAT_8c4366c0,0);
  _DAT_8c43665e = (undefined2)iVar20;
  iVar20 = iVar20 - (int)_DAT_8c4366c0;
  _DAT_8c436664 = (undefined2)iVar20;
  puVar10 = &DAT_8c43665c;
  _DAT_8c436662 = _DAT_8c436660;
  _DAT_8c436666 = _DAT_8c436660;
  _DAT_8c436668 = _DAT_8c43665e;
  _DAT_8c43666a = _DAT_8c43665e;
  uVar1 = rand(&DAT_8c43665c,&DAT_8c43665c,&DAT_8c43665c,iVar20);
  uVar8 = SUB84(dVar16,0);
  iVar2 = libgcc_divide_helper_01031c(uVar1,0x32,puVar10,iVar20);
  if (cVar23 == '\0') {
    dVar16 = (double)CONCAT44((float)(iVar2 + 0x9b),uVar8);
  }
  else {
    dVar16 = (double)(iVar2 + 0x9b);
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x40000000,_DAT_8c4366b8);
  }
  else {
    dVar17 = 3.533694972055102e+72;
  }
  if (cVar23 == '\0') {
    fVar11 = SUB84(dVar17,0) / (float)((ulonglong)dVar17 >> 0x20);
    dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + fVar11,SUB84(dVar16,0));
  }
  else {
    fVar11 = SUB84(dVar17 / dVar17,0);
    dVar16 = dVar16 + dVar17 / dVar17;
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x4f000000,fVar11);
  }
  else {
    dVar17 = -9.046259633960061e+74;
  }
  fVar11 = (float)((ulonglong)dVar16 >> 0x20);
  if (cVar23 == '\0') {
    bVar19 = (float)((ulonglong)dVar17 >> 0x20) < fVar11;
  }
  else {
    bVar19 = dVar17 < dVar16;
  }
  if (bVar19) {
    if (cVar24 == '\0') {
      dVar17 = (double)CONCAT44(0xcf800000,SUB84(dVar17,0));
    }
    else {
      dVar17 = -1.3547902344155491e-249;
    }
    if (cVar23 == '\0') {
      dVar16 = (double)CONCAT44(fVar11 + (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar16,0));
    }
    else {
      dVar16 = dVar16 + dVar17;
    }
  }
  if (cVar23 == '\0') {
    iVar20 = (int)(float)((ulonglong)dVar16 >> 0x20);
    dVar16 = (double)CONCAT44((float)iVar2,SUB84(dVar16,0));
  }
  else {
    iVar20 = (int)dVar16;
    dVar16 = (double)iVar2;
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x3fc00000,(float)(int)_DAT_8c4366c0);
  }
  else {
    dVar17 = 9.046259120036078e+74;
  }
  _DAT_8c436670 = (undefined2)iVar2;
  _DAT_8c43666e = (undefined2)iVar20;
  if (cVar23 == '\0') {
    fVar14 = (float)((ulonglong)dVar17 >> 0x20);
    fVar11 = SUB84(dVar17,0) * fVar14;
    dVar17 = (double)CONCAT44(fVar14,fVar11);
    pcVar9 = (code *)(int)((float)((ulonglong)dVar16 >> 0x20) + fVar11);
    _DAT_8c43666c = SUB42(pcVar9,0);
    dVar16 = (double)CONCAT44((float)iVar20,SUB84(dVar16,0));
  }
  else {
    dVar17 = dVar17 * dVar17;
    fVar11 = SUB84(dVar17,0);
    pcVar9 = (code *)(int)(dVar16 + dVar17);
    _DAT_8c43666c = SUB42(pcVar9,0);
    dVar16 = (double)iVar20;
  }
  fVar14 = (float)((ulonglong)dVar16 >> 0x20);
  if (cVar23 == '\0') {
    bVar19 = fVar14 < 0.0;
  }
  else {
    bVar19 = dVar16 < (double)((ulonglong)dVar17 & 0xffffffff);
  }
  if (bVar19) {
    if (cVar24 == '\0') {
      dVar17 = (double)CONCAT44(0x4f800000,fVar11);
    }
    else {
      dVar17 = -1.354755602458548e-249;
    }
    if (cVar23 == '\0') {
      dVar16 = (double)CONCAT44(fVar14 + (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar16,0));
    }
    else {
      dVar16 = dVar16 + dVar17;
    }
  }
  ar6_01 = (code *)&DAT_8c4366c0;
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x3fc00000,(float)(int)_DAT_8c4366c0);
  }
  else {
    dVar17 = 9.046259120036078e+74;
  }
  if (cVar23 == '\0') {
    iVar2 = (int)((float)((ulonglong)dVar16 >> 0x20) -
                 SUB84(dVar17,0) * (float)((ulonglong)dVar17 >> 0x20));
  }
  else {
    iVar2 = (int)(dVar16 - dVar17 * dVar17);
  }
  _DAT_8c436674 = (undefined2)iVar2;
  iVar20 = _DAT_8c43663c;
  _DAT_8c436672 = _DAT_8c436670;
  _DAT_8c436676 = _DAT_8c436670;
  _DAT_8c436678 = _DAT_8c43666e;
  _DAT_8c43667a = _DAT_8c43666e;
  if (_DAT_8c43663c != 0xffffff) {
    for (iVar21 = 0; iVar21 < 4; iVar21 = iVar21 + 1) {
      pcVar9 = (code *)&DAT_8c43663c;
      ar6_01 = (code *)(&DAT_8c43663c + iVar21 * 4);
      iVar20 = *(int *)ar6_01 + -0x11000000;
      *(int *)ar6_01 = iVar20;
    }
  }
  uVar1 = rand(iVar20,iVar2,ar6_01,pcVar9);
  puVar10 = (undefined1 *)0x190;
  iVar2 = libgcc_divide_helper_01031c(uVar1,400,ar6_01,pcVar9);
  if (iVar2 == 0) {
    if (cVar24 == '\0') {
      fVar14 = 75.0;
      fVar11 = _DAT_8c4366b8;
    }
    else {
      fVar11 = 75.0;
      fVar14 = 3.3705384e+10;
    }
    if (cVar23 == '\0' && fVar14 < fVar11) {
      for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        *(undefined4 *)(&DAT_8c43663c + iVar2 * 4) = 0xffffffff;
      }
      iVar2 = -0x73d4a630;
      pcVar9 = FUN_8c021f18;
      puVar10 = (undefined1 *)
                FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),ar6_01,FUN_8c021f18);
      if (puVar10 == (undefined1 *)0x2) {
        uVar1 = rand(iVar2,2,ar6_01,pcVar9);
        uVar1 = libgcc_divide_helper_01031c(uVar1,2,ar6_01,pcVar9);
        pcVar9 = (code *)auStack_34;
        FUN_8c014334(pcVar9,uVar1,ar6_01,pcVar9,s_AMB_THUNDER__d_8c13c8e7);
        uVar8 = 0x8c2b59d0;
        uVar1 = pack_acquire_entry_handle(0x8c2b59d0,auStack_34,ar6_01,pcVar9);
        *(undefined4 *)(ar4 + 0x144) = uVar1;
        iVar2 = rand(uVar8,0x144,ar6_01,pcVar9);
        iVar20 = libgcc_divide_helper_01031c(iVar2,5999,ar6_01,pcVar9);
        puVar10 = &DAT_8c4366e4;
        _DAT_8c4366e4 = (code *)(iVar20 + -2999);
      }
    }
  }
  uVar1 = rand(iVar2,puVar10,ar6_01,pcVar9);
  iVar2 = libgcc_divide_helper_01031c(uVar1,300,ar6_01,pcVar9);
  if (iVar2 == 0) {
    if (cVar24 == '\0') {
      fVar14 = 72.0;
      fVar11 = _DAT_8c4366b8;
    }
    else {
      fVar11 = 72.0;
      fVar14 = 2.69049e-43;
    }
    if (cVar23 == '\0' && fVar14 < fVar11) {
      uVar1 = *(undefined4 *)(ar4 + 0x144);
      uVar8 = 0x8c2b59d0;
      iVar2 = FUN_8c021f18(0x8c2b59d0,uVar1,ar6_01,pcVar9);
      if (iVar2 == 2) {
        uVar1 = rand(uVar8,uVar1,ar6_01,pcVar9);
        uVar8 = 2;
        ar6_01 = libgcc_divide_helper_01031c;
        libgcc_divide_helper_01031c(uVar1,2,libgcc_divide_helper_01031c,pcVar9);
        FUN_8c014334(auStack_34,uVar8,ar6_01,pcVar9,s_AMB_THUNDER__d_8c13c8e7);
        puVar10 = auStack_34;
        uVar1 = pack_acquire_entry_handle(0x8c2b59d0,puVar10,ar6_01,pcVar9);
        *(undefined4 *)(ar4 + 0x144) = uVar1;
        uVar1 = rand(rand,puVar10,ar6_01,pcVar9);
        iVar2 = libgcc_divide_helper_01031c(uVar1,4000,ar6_01,pcVar9);
        _DAT_8c4366e4 = (code *)(iVar2 + -2000);
      }
    }
  }
  iVar2 = FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),ar6_01,pcVar9);
  if (iVar2 != 2) {
    if (cVar24 == '\0') {
      fVar14 = 72.0;
      fVar11 = _DAT_8c4366b8;
    }
    else {
      fVar11 = 72.0;
      fVar14 = 2.69049e-43;
    }
    if (cVar23 == '\0' && fVar14 < fVar11) {
      pcVar9 = (code *)0x258;
      ar6_01 = _DAT_8c4366e4;
      FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),_DAT_8c4366e4,600);
    }
  }
  iVar2 = FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),ar6_01,pcVar9);
  if (iVar2 == 2) {
    pack_release_entry_handle(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),ar6_01,pcVar9);
  }
  if (((_DAT_8c4366dc == 0) || (uVar5 = _DAT_8c4366dc, _DAT_8c4366dc == 1)) &&
     (uVar5 = 0x14c, *(int *)(ar4 + 0x14c) == 2)) {
    _DAT_8c4366cc = 1;
  }
  if (*(int *)(ar4 + 0x14c) == 3) {
    for (iVar2 = 0; ar6_01 = (code *)0x4, iVar2 < 4; iVar2 = iVar2 + 1) {
      *(undefined4 *)(&DAT_8c43668c + iVar2 * 4) = 0xffffff;
      *(undefined4 *)(iVar2 * 4 + -0x73bc9964) = 0xffffffff;
    }
    _DAT_8c4366cc = 2;
    *(undefined4 *)(ar4 + 0x14c) = 2;
  }
  if (_DAT_8c4366cc == 1) {
    uVar5 = _DAT_8c43668c;
    if (_DAT_8c43668c < 0x1000000) {
      _DAT_8c4366cc = 2;
    }
    else {
      iVar2 = 0;
      while (iVar20 = iVar2, iVar20 < 4) {
        *(int *)(&DAT_8c43668c + iVar20 * 4) = *(int *)(&DAT_8c43668c + iVar20 * 4) + -0x3000000;
        uVar5 = 0x3000000;
        *(int *)(iVar20 * 4 + -0x73bc9964) = *(int *)(iVar20 * 4 + -0x73bc9964) + 0x3000000;
        in_stack_fffffe48 = iVar20;
        iVar2 = iVar20 + 1;
      }
    }
  }
  FUN_8c01538c(ar4 + 0x48,uVar5,ar6_01,pcVar9);
  FUN_8c014a94(ar4 + 0x48,0,ar6_01,pcVar9);
  FUN_8c016324(ar4 + 0x50,&DAT_8c43662c,ar6_01,FUN_8c016324);
  uVar8 = 4;
  uVar1 = 0x8c43661c;
  pcVar9 = (code *)&DAT_8c13bda0;
  FUN_8c016318(ar4 + 0x50,&DAT_8c13bda0,0x8c43661c,4,in_stack_fffffe48);
  FUN_8c016340(ar4 + 0x50,pcVar9,uVar1,uVar8);
  if (cVar24 == '\0') {
    puVar10 = (undefined1 *)0x42340000;
    fVar11 = _DAT_8c4366b8;
  }
  else {
    fVar11 = 45.0;
    puVar10 = &DAT_8c4366c8;
  }
  if (cVar23 == '\0' && (float)(uint)puVar10 < fVar11) {
    FUN_8c01538c(ar4 + 0x48,pcVar9,uVar1,uVar8);
    FUN_8c014a94(ar4 + 0x48,_DAT_8c4366c8 + 10,uVar1,uVar8);
    FUN_8c016324(ar4 + 0x50,&DAT_8c43666c,uVar1,uVar8);
    uVar8 = 4;
    uVar1 = 0x8c43664c;
    FUN_8c016318(ar4 + 0x50,&DAT_8c13bda0,0x8c43664c,4,in_stack_fffffe48);
    pcVar9 = FUN_8c016340;
    FUN_8c016340(ar4 + 0x50,FUN_8c016340,uVar1,uVar8);
  }
  if (_DAT_8c4366ac < 2) {
    FUN_8c01538c(ar4 + 0x48,pcVar9,uVar1,uVar8);
    FUN_8c014a94(ar4 + 0x48,1,uVar1,uVar8);
    FUN_8c016324(ar4 + 0x50,&DAT_8c43662c,uVar1,uVar8);
    uVar1 = 4;
    puVar7 = &DAT_8c13bda0;
    FUN_8c016318(ar4 + 0x50,&DAT_8c13bda0,0x8c43661c,4,in_stack_fffffe48);
    iVar21 = ar4 + 0x50;
    FUN_8c016340(iVar21,puVar7,iVar21,uVar1);
    iVar20 = ar4 + 0x48;
    iVar2 = iVar20;
    FUN_8c01538c(iVar20,iVar20,iVar21,uVar1);
    FUN_8c014294(iVar20,iVar2,iVar21,uVar1);
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x3ff33333,puVar10);
    }
    else {
      dVar16 = 32768.00780639648;
    }
    if (cVar23 == '\0') {
      fVar11 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      fVar11 = SUB84(dVar16 * dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x40e00000,fVar11);
    }
    else {
      dVar16 = -33554440.109375;
    }
    if (cVar23 == '\0') {
      iVar2 = (int)(SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20));
    }
    else {
      iVar2 = (int)(dVar16 + dVar16);
    }
    FUN_8c014a94(ar4 + 0x48,iVar2,iVar21,uVar1);
    FUN_8c016324(ar4 + 0x50,&DAT_8c43662c,FUN_8c016324,uVar1);
    uVar1 = 4;
    puVar10 = (undefined1 *)0x8c43661c;
    puVar7 = &DAT_8c13bdc0;
    FUN_8c016318(ar4 + 0x50,&DAT_8c13bdc0,0x8c43661c,4,in_stack_fffffe48);
    FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1);
    uStack_64 = 0;
    uStack_62 = 0x7f;
    uStack_60 = 0;
    uStack_5e = 0;
    uStack_5c = 0x7f;
    uStack_5a = 0;
    uStack_58 = 0x7f;
    uStack_56 = 0x7f;
  }
  else if (_DAT_8c4366ac < 4) {
    FUN_8c01538c(ar4 + 0x48,pcVar9,uVar1,uVar8);
    FUN_8c014a94(ar4 + 0x48,2,uVar1,uVar8);
    FUN_8c016324(ar4 + 0x50,&DAT_8c43662c,uVar1,uVar8);
    uVar1 = 4;
    puVar10 = (undefined1 *)0x8c43661c;
    puVar7 = &DAT_8c13bda0;
    FUN_8c016318(ar4 + 0x50,&DAT_8c13bda0,0x8c43661c,4,in_stack_fffffe48);
    FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1);
    uStack_64 = 0x80;
    uStack_62 = 0x7f;
    puVar7 = (undefined *)0x80;
    uStack_60 = 0x80;
    uStack_5e = 0;
    uStack_5c = 0xff;
    uStack_5a = 0;
    uStack_58 = 0xff;
    uVar1 = 0x7f;
    uStack_56 = 0x7f;
  }
  else if (_DAT_8c4366ac < 7) {
    FUN_8c01538c(ar4 + 0x48,pcVar9,uVar1,uVar8);
    FUN_8c014a94(ar4 + 0x48,3,uVar1,uVar8);
    FUN_8c016324(ar4 + 0x50,&DAT_8c43662c,uVar1,uVar8);
    uVar1 = 4;
    puVar10 = (undefined1 *)0x8c43661c;
    puVar7 = &DAT_8c13bda0;
    FUN_8c016318(ar4 + 0x50,&DAT_8c13bda0,0x8c43661c,4,in_stack_fffffe48);
    FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1);
    uStack_64 = 0;
    uStack_62 = 0xff;
    uStack_60 = 0;
    uStack_5e = 0x80;
    uStack_5c = 0x7f;
    uStack_5a = 0x80;
    uStack_58 = 0x7f;
    uStack_56 = 0xff;
  }
  else {
    FUN_8c01538c(ar4 + 0x48,pcVar9,uVar1,uVar8);
    FUN_8c014a94(ar4 + 0x48,4,uVar1,uVar8);
    FUN_8c016324(ar4 + 0x50,&DAT_8c43662c,uVar1,uVar8);
    uVar1 = 4;
    puVar10 = (undefined1 *)0x8c43661c;
    puVar7 = &DAT_8c13bda0;
    FUN_8c016318(ar4 + 0x50,&DAT_8c13bda0,0x8c43661c,4,in_stack_fffffe48);
    FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1);
    uStack_64 = 0x80;
    uStack_62 = 0xff;
    uStack_60 = 0x80;
    uStack_5e = 0x80;
    uStack_5c = 0xff;
    uStack_5a = 0x80;
    uStack_58 = 0xff;
    uStack_56 = 0xff;
  }
  if (cVar24 == '\0') {
    puVar3 = (undefined1 *)0x42340000;
    fVar11 = _DAT_8c4366b8;
  }
  else {
    fVar11 = 45.0;
    puVar3 = &DAT_8c4366c8;
  }
  if (cVar23 == '\0' && (float)(uint)puVar3 < fVar11) {
    FUN_8c01538c(ar4 + 0x48,puVar7,puVar10,uVar1);
    FUN_8c014a94(ar4 + 0x48,_DAT_8c4366c8 + 10,puVar10,uVar1);
    FUN_8c016324(ar4 + 0x50,&DAT_8c43665c,puVar10,uVar1);
    uVar8 = 4;
    uVar1 = 0x8c43664c;
    puVar7 = &DAT_8c13bda0;
    FUN_8c016318(ar4 + 0x50,&DAT_8c13bda0,0x8c43664c,4,in_stack_fffffe48);
    FUN_8c016340(ar4 + 0x50,puVar7,uVar1,uVar8);
    FUN_8c01538c(ar4 + 0x48,FUN_8c01538c,uVar1,uVar8);
    FUN_8c014a94(ar4 + 0x48,0xd,uVar1,uVar8);
    FUN_8c016324(ar4 + 0x50,&DAT_8c43662c,uVar1,uVar8);
    uVar1 = 4;
    puVar10 = (undefined1 *)0x8c43667c;
    puVar7 = &DAT_8c13bda0;
    FUN_8c016318(ar4 + 0x50,&DAT_8c13bda0,0x8c43667c,4,in_stack_fffffe48);
    FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1);
  }
  if (cVar24 == '\0') {
    puVar3 = (undefined1 *)0x42960000;
    fVar11 = _DAT_8c4366b8;
  }
  else {
    fVar11 = 75.0;
    puVar3 = &DAT_8c43663c;
  }
  if (cVar23 == '\0' && (float)(uint)puVar3 < fVar11) {
    FUN_8c01538c(ar4 + 0x48,puVar7,puVar10,uVar1);
    FUN_8c014a94(ar4 + 0x48,9,puVar10,uVar1);
    FUN_8c016324(ar4 + 0x50,&DAT_8c43662c,puVar10,uVar1);
    uVar1 = 4;
    puVar10 = &DAT_8c43663c;
    puVar7 = &DAT_8c13bda0;
    FUN_8c016318(ar4 + 0x50,&DAT_8c13bda0,&DAT_8c43663c,4,in_stack_fffffe48);
    FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1);
  }
  FUN_8c01538c(ar4 + 0x48,puVar7,puVar10,uVar1);
  uVar8 = 0x11;
  FUN_8c014a94(ar4 + 0x48,0x11,puVar10,uVar1);
  FUN_8c016340(auStack_78,uVar8,puVar10,uVar1);
  if (*(int *)(ar4 + 0x30) == 1) {
    puVar10 = (undefined1 *)0x0;
    FUN_8c0c3e78(&DAT_8c2b5628,*(undefined4 *)(ar4 + 0x154),0,uVar1);
  }
  iVar2 = *(int *)(ar4 + 0x14c);
  if ((iVar2 < 5) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    default:
      FUN_8c0ba494(ar4 + 0x158,ar4 + 0x48,puVar10,uVar1);
      break;
    case 2:
    case 3:
      FUN_8c01538c(ar4 + 0x48,4,puVar10,uVar1);
      FUN_8c014a94(ar4 + 0x48,0xe,puVar10,uVar1);
      FUN_8c016324(ar4 + 0x50,&DAT_8c43662c,puVar10,uVar1);
      uVar1 = 4;
      puVar10 = (undefined1 *)0x8c43669c;
      puVar7 = &DAT_8c13bde0;
      FUN_8c016318(ar4 + 0x50,&DAT_8c13bde0,0x8c43669c,4,in_stack_fffffe48);
      FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1);
      break;
    case 4:
      FUN_8c01538c(ar4 + 0x48,4,puVar10,uVar1);
      FUN_8c014a94(ar4 + 0x48,0x10,puVar10,uVar1);
      FUN_8c016324(ar4 + 0x50,&DAT_8c43662c,puVar10,ar4 + 0x50);
      uVar1 = 4;
      puVar10 = (undefined1 *)0x8c43661c;
      puVar7 = &DAT_8c13bde0;
      FUN_8c016318(ar4 + 0x50,&DAT_8c13bde0,0x8c43661c,4);
      FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1);
    }
  }
  free_if_nonnull_wrap_0151a0(auStack_78,0xffffffff,puVar10,uVar1);
  return 1;
}

__asm__(".globl _s_AMB_FOREST_0bb1f2\n.set _s_AMB_FOREST_0bb1f2, _s_AMB_FOREST_0bb1f2_def\n");
