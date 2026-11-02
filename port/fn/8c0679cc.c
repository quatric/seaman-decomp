#include "../decls.h"
undefined4 FUN_8c0679cc_def(undefined **ar4,undefined **ar5,undefined **ar6,undefined *ar7)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *ar5_00;
  code *pcVar8;
  undefined **ppuVar9;
  uint in_fr1;
  undefined4 uVar10;
  float fVar11;
  ulonglong uVar12;
  float fVar14;
  double dVar13;
  undefined8 in_xd0;
  char cVar15;
  char cVar16;
  undefined1 auStack_3724 [1996];
  undefined1 auStack_2f58 [16];
  undefined1 auStack_2f48 [16];
  undefined1 auStack_2f38 [12];
  undefined1 auStack_2f2c [16];
  undefined1 auStack_2f1c [16];
  undefined1 auStack_2f0c [12];
  undefined1 auStack_2f00 [1996];
  undefined1 auStack_2734 [1996];
  undefined1 auStack_1f68 [1996];
  undefined1 auStack_179c [1996];
  undefined1 auStack_fd0 [1996];
  undefined1 auStack_804 [1996];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [20];
  
  cVar16 = '\0';
  cVar15 = '\0';
  ppuVar7 = ar5;
  ppuVar9 = ar6;
  Vec3_ctor_zero(auStack_2c,ar5,ar6,ar7);
  Vec3_set_zero(auStack_38,ppuVar7,ppuVar9,ar7);
  if (0 < (int)ar4[0x8c]) {
    pcVar8 = FUN_8c06add8;
    ppuVar7 = ar6;
    FUN_8c06add8(ar4,ar6,FUN_8c06add8,ar7);
    ppuVar9 = (undefined **)pcVar8;
  }
  puVar6 = ar4[0x8c];
  if (((int)puVar6 < 8) && (-1 < (int)puVar6)) {
    ppuVar9 = &switchdata_8c067a30_8c067a50;
                    
    switch((uint)puVar6) {
    case 0x0:
      ar5_00 = &DAT_8c2809a8;
      _DAT_8c2809a8 = _DAT_8c2809a8 + 1;
      ppuVar7 = ar6;
      iVar4 = get_field_24_026024(ar6,&DAT_8c2809a8,&switchdata_8c067a30_8c067a50,ar7);
      if (iVar4 == 0) {
        ar4[0x86] = (undefined *)0x0;
        uVar5 = rand(rand,ar5_00,ppuVar9,ar7);
        puVar6 = (undefined *)libgcc_divide_helper_01031c(uVar5,7,ppuVar9,ar7);
        iVar4 = 7;
        while( true ) {
          ar7 = (undefined *)((int)puVar6 * 8);
          ppuVar9 = (undefined **)0x8c2809b8;
          if ((*(int *)(ar7 + -0x73d7f648) != 1) || (iVar4 < 1)) break;
          puVar6 = puVar6 + 1;
          iVar4 = iVar4 + -1;
          if (6 < (int)puVar6) {
            puVar6 = (undefined *)0x0;
          }
        }
        if (0 < iVar4) {
          *(undefined4 *)((int)puVar6 * 8 + -0x73d7f648) = 1;
          ar4[0x87] = puVar6;
        }
        ar5_00 = (undefined1 *)((int)puVar6 * 0x10 + -0x73d7f544);
        Vec3_assign(ar4 + 0xc,ar5_00,0x8c2809b8,ar7);
      }
      else if (iVar4 == 1) {
        ar4[0x86] = (undefined *)0x1;
        uVar5 = rand(ppuVar7,ar5_00,ppuVar9,ar7);
        puVar6 = (undefined *)libgcc_divide_helper_01031c(uVar5,6,ppuVar9,ar7);
        iVar4 = 6;
        while ((*(int *)((int)puVar6 * 8 + -0x73d7f604) == 1 && (0 < iVar4))) {
          puVar6 = puVar6 + 1;
          iVar4 = iVar4 + -1;
          if (5 < (int)puVar6) {
            puVar6 = (undefined *)0x0;
          }
        }
        if (0 < iVar4) {
          *(undefined4 *)((int)puVar6 * 8 + -0x73d7f604) = 1;
          ar4[0x87] = puVar6;
        }
        ar5_00 = (undefined1 *)((int)puVar6 * 0x10 + -0x73d7f48c);
        Vec3_assign(ar4 + 0xc,ar5_00,ppuVar9,ar7);
      }
      else if (iVar4 == 2) {
        ar4[0x86] = (undefined *)0x2;
        uVar5 = rand(ppuVar7,ar5_00,ppuVar9,ar7);
        puVar6 = (undefined *)libgcc_divide_helper_01031c(uVar5,6,ppuVar9,ar7);
        iVar4 = 6;
        while ((*(int *)((int)puVar6 * 8 + -0x73d7f5c8) == 1 && (0 < iVar4))) {
          puVar6 = puVar6 + 1;
          iVar4 = iVar4 + -1;
          if (5 < (int)puVar6) {
            puVar6 = (undefined *)0x0;
          }
        }
        if (0 < iVar4) {
          *(undefined4 *)((int)puVar6 * 8 + -0x73d7f5c8) = 1;
          ar4[0x87] = puVar6;
        }
        ar5_00 = (undefined1 *)((int)puVar6 * 0x10 + -0x73d7f3e4);
        Vec3_assign(ar4 + 0xc,ar5_00,ppuVar9,ar7);
      }
      ppuVar7 = ar4 + 0x14;
      uVar12 = (ulonglong)in_fr1;
      if (cVar16 == '\0') {
        *ppuVar7 = (undefined *)0x0;
      }
      else {
        *(ulonglong *)ppuVar7 = uVar12;
      }
      uVar5 = rand(ppuVar7,ar5_00,ppuVar9,ar7);
      uVar10 = (undefined4)uVar12;
      iVar4 = libgcc_divide_helper_01031c(uVar5,0x168,ppuVar9,ar7);
      if (cVar15 == '\0') {
        dVar13 = (double)CONCAT44((float)iVar4,uVar10);
      }
      else {
        dVar13 = (double)iVar4;
      }
      if (cVar16 == '\0') {
        ar4[0x15] = (undefined *)((ulonglong)dVar13 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x15) = dVar13;
      }
      uVar5 = SUB84(dVar13,0);
      if (cVar16 == '\0') {
        ar4[0x16] = (undefined *)0x0;
      }
      else {
        *(ulonglong *)(ar4 + 0x16) = (ulonglong)dVar13 & 0xffffffff;
      }
      if (cVar16 == '\0') {
        ar4[0x17] = (undefined *)0x3f800000;
      }
      else {
        *(ulonglong *)(ar4 + 0x17) = CONCAT44(0x3f800000,uVar5);
      }
      if (cVar16 == '\0') {
        ar4[0x18] = (undefined *)0x3f800000;
      }
      else {
        *(ulonglong *)(ar4 + 0x18) = CONCAT44(0x3f800000,uVar5);
      }
      if (cVar16 == '\0') {
        ar4[0x19] = (undefined *)0x3f800000;
      }
      else {
        *(ulonglong *)(ar4 + 0x19) = CONCAT44(0x3f800000,uVar5);
      }
      ar4[0x8c] = ar4[0x8c] + 1;
    case 0x1:
      if (((uint)ar4[0x1d] & 0x20) == 0x20) {
        ar4[0x8c] = ar4[0x8c] + 1;
        FUN_8c068890(auStack_804,ar5,ppuVar9,ar7);
        FUN_8c06af5c(ar4,auStack_804,ppuVar9,ar7);
        FUN_8c068818(auStack_804,0xffffffff,ppuVar9,ar7);
        if (_DAT_8c2804e0 == (undefined *)0x1) {
          ar7 = (undefined *)0xe;
          ppuVar9 = (undefined **)0x1;
          (**(code **)(*ar6 + 0xd0))(ar6,ar4 + 0xc,1,0xe);
        }
      }
      else if (((uint)ar4[0x1d] & 0x40) == 0x40) {
        if (cVar16 == '\0') {
          dVar13 = (double)CONCAT44(0x41000000,ar4[0xd]);
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0xd);
          dVar13 = 5.062009702363989e+233;
        }
        if (cVar15 == '\0') {
          puVar6 = (undefined *)(uint)(SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20));
        }
        else {
          puVar6 = SUB84(dVar13 - dVar13,0);
        }
        if (cVar16 == '\0') {
          ar4[0xd] = puVar6;
        }
        else {
          *(undefined8 *)(ar4 + 0xd) = in_xd0;
        }
      }
      else if (((uint)ar4[0x1d] & 0x10) == 0x10) {
        if (cVar16 == '\0') {
          dVar13 = (double)CONCAT44(0x40000000,ar4[0xd]);
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0xd);
          dVar13 = -1.8982214199917473e+78;
        }
        if (cVar15 == '\0') {
          puVar6 = (undefined *)(uint)(SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20));
        }
        else {
          puVar6 = SUB84(dVar13 - dVar13,0);
        }
        if (cVar16 == '\0') {
          ar4[0xd] = puVar6;
        }
        else {
          *(undefined8 *)(ar4 + 0xd) = in_xd0;
        }
      }
      break;
    case 0x2:
      iVar4 = get_field_24_026024(ar6,ppuVar7,&switchdata_8c067a30_8c067a50,ar7);
      if ((iVar4 == 0) || (iVar2 = get_field_24_026024(ar6,iVar4,ppuVar9,ar7), iVar2 == 2)) {
        iVar4 = get_field_24_026024(ar6,iVar4,ppuVar9,ar7);
        if (iVar4 == 0) {
          if ((_DAT_8c280998 < 4) && (-1 < (int)ar4[0x87])) {
            _DAT_8c280998 = _DAT_8c280998 + 1;
            _DAT_8c2809a8 = _DAT_8c2809a8 + -1;
            *(undefined ***)((int)ar4[0x87] * 8 + -0x73d7f644) = ar4;
            ar4[0x84] = ar4[0x84] + 4;
            ar4[0x8c] = ar4[0x8c] + 1;
            ppuVar9 = ar4;
          }
          else {
            FUN_8c068890(auStack_fd0,ar5,ppuVar9,ar7);
            uVar5 = FUN_8c06afb0(ar4,auStack_fd0,ppuVar9,ar7);
            FUN_8c068818(auStack_fd0,0xffffffff,ppuVar9,ar7);
            if (0x383f < (ushort)uVar5) {
              if (-1 < (int)ar4[0x87]) {
                *(undefined4 *)((int)ar4[0x87] * 8 + -0x73d7f648) = 0;
                *(undefined4 *)((int)ar4[0x87] * 8 + -0x73d7f644) = 0;
              }
              ar4[0x8c] = (undefined *)0x7;
            }
          }
        }
        else if ((_DAT_8c2809a4 < 3) && (-1 < (int)ar4[0x87])) {
          _DAT_8c2809a4 = _DAT_8c2809a4 + 1;
          _DAT_8c2809a8 = _DAT_8c2809a8 + -1;
          *(undefined ***)((int)ar4[0x87] * 8 + -0x73d7f5c4) = ar4;
          ar4[0x84] = ar4[0x84] + 4;
          ar4[0x8c] = ar4[0x8c] + 1;
          ppuVar9 = ar4;
        }
        else {
          FUN_8c068890(auStack_179c,ar5,ppuVar9,ar7);
          uVar5 = FUN_8c06afb0(ar4,auStack_179c,ppuVar9,ar7);
          FUN_8c068818(auStack_179c,0xffffffff,ppuVar9,ar7);
          if (0x383f < (ushort)uVar5) {
            if (-1 < (int)ar4[0x87]) {
              ar7 = ar4[0x87];
              ppuVar9 = (undefined **)((int)ar7 * 8);
              ppuVar9[-0x1cf5fd72] = (undefined *)0x0;
              *(undefined4 *)((int)ar4[0x87] * 8 + -0x73d7f5c4) = 0;
            }
            ar4[0x8c] = (undefined *)0x7;
          }
        }
      }
      else if ((_DAT_8c28099c + _DAT_8c2809a0 < 2) && (-1 < (int)ar4[0x87])) {
        uVar5 = rand(0x21c,2,ppuVar9,ar7);
        iVar4 = libgcc_divide_helper_01031c(uVar5,100,ppuVar9,ar7);
        if ((iVar4 < 0x32) && (1 < _DAT_8c2809a0)) {
          ar4[0x84] = ar4[0x84] + 4;
          _DAT_8c28099c = _DAT_8c28099c + 1;
        }
        else {
          _DAT_8c2809a0 = _DAT_8c2809a0 + 1;
        }
        _DAT_8c2809a8 = _DAT_8c2809a8 + -1;
        ar4[0x8c] = ar4[0x8c] + 1;
        *(undefined ***)((int)ar4[0x87] * 8 + -0x73d7f600) = ar4;
      }
      else {
        FUN_8c068890(auStack_1f68,ar5,ppuVar9,ar7);
        uVar5 = FUN_8c06afb0(ar4,auStack_1f68,ppuVar9,ar7);
        FUN_8c068818(auStack_1f68,0xffffffff,ppuVar9,ar7);
        if (0x383f < (ushort)uVar5) {
          if (-1 < (int)ar4[0x87]) {
            *(undefined4 *)((int)ar4[0x87] * 8 + -0x73d7f604) = 0;
            *(undefined4 *)((int)ar4[0x87] * 8 + -0x73d7f600) = 0;
          }
          ar4[0x8c] = (undefined *)0x7;
        }
      }
      break;
    case 0x3:
      FUN_8c068890(auStack_2734,ar5,&switchdata_8c067a30_8c067a50,ar7);
      uVar3 = FUN_8c06afb0(ar4,auStack_2734,ppuVar9,ar7);
      fVar11 = (float)(uVar3 & 0xffff);
      if (cVar16 == '\0') {
        fVar14 = 600.0;
      }
      else {
        fVar11 = 600.0;
        fVar14 = 3.08286e-43;
      }
      bVar1 = cVar15 != '\0';
      FUN_8c068818(auStack_2734,0xffffffff,ppuVar9,ar7);
      if (bVar1 || fVar14 <= fVar11) {
        FUN_8c068890(auStack_2f00,ar5,ppuVar9,ar7);
        FUN_8c06af5c(ar4,auStack_2f00,ppuVar9,ar7);
        ar7 = auStack_2f00;
        pcVar8 = FUN_8c068818;
        FUN_8c068818(ar7,0xffffffff,FUN_8c068818,ar7);
        ar4[0x88] = ar4[0x88] + 1;
        ar4[0x8c] = (undefined *)0x0;
        ppuVar7 = ar4;
        iVar4 = get_field_24_026024(ar6,ar4,pcVar8,ar7);
        if (iVar4 == 0) {
          uVar5 = rand(ar6,ppuVar7,pcVar8,ar7);
          puVar6 = ar4[0x87];
          iVar4 = libgcc_divide_helper_01031c(uVar5,3,pcVar8,ar7);
          if (cVar16 == '\0') {
            dVar13 = (double)CONCAT44(0x41200000,
                                      (float)(*(int *)(&DAT_8c136fec + (int)puVar6 * 4) + iVar4));
          }
          else {
            dVar13 = 227873.6567993164;
          }
          if (cVar15 == '\0') {
            puVar6 = (undefined *)(uint)(SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20));
          }
          else {
            puVar6 = SUB84(dVar13 / dVar13,0);
          }
          ppuVar9 = (undefined **)pcVar8;
          if (cVar16 == '\0') {
            ar4[0x90] = puVar6;
          }
          else {
            *(undefined8 *)(ar4 + 0x90) = in_xd0;
          }
        }
        else if (iVar4 == 1) {
          uVar5 = rand(ar6,ppuVar7,pcVar8,ar7);
          iVar4 = libgcc_divide_helper_01031c(uVar5,3,pcVar8,ar7);
          if (cVar16 == '\0') {
            dVar13 = (double)CONCAT44(0x41200000,(float)(iVar4 + 6));
          }
          else {
            dVar13 = 3.4765896880999207;
          }
          if (cVar15 == '\0') {
            puVar6 = (undefined *)(uint)(SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20));
          }
          else {
            puVar6 = SUB84(dVar13 / dVar13,0);
          }
          ppuVar9 = (undefined **)pcVar8;
          if (cVar16 == '\0') {
            ar4[0x90] = puVar6;
          }
          else {
            *(undefined8 *)(ar4 + 0x90) = in_xd0;
          }
        }
        else {
          ppuVar9 = (undefined **)pcVar8;
          if (iVar4 == 2) {
            uVar5 = rand(ar6,ppuVar7,pcVar8,ar7);
            iVar4 = libgcc_divide_helper_01031c(uVar5,3,pcVar8,ar7);
            if (cVar16 == '\0') {
              dVar13 = (double)CONCAT44(0x41200000,(float)(iVar4 + 10));
            }
            else {
              dVar13 = 7.937828837308101e+110;
            }
            if (cVar15 == '\0') {
              puVar6 = (undefined *)(uint)(SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20));
            }
            else {
              puVar6 = SUB84(dVar13 / dVar13,0);
            }
            ppuVar9 = (undefined **)pcVar8;
            if (cVar16 == '\0') {
              ar4[0x90] = puVar6;
            }
            else {
              *(undefined8 *)(ar4 + 0x90) = in_xd0;
            }
          }
        }
      }
      break;
    case 0x4:
      if (cVar16 == '\0') {
        dVar13 = (double)CONCAT44(0x3dcccccd,ar4[0x8b]);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x8b);
        dVar13 = 4.89807854859436e-311;
      }
      if (cVar15 == '\0') {
        puVar6 = (undefined *)(uint)(SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20));
      }
      else {
        puVar6 = SUB84(dVar13 + dVar13,0);
      }
      if (cVar16 == '\0') {
        ar4[0x8b] = puVar6;
      }
      else {
        *(undefined8 *)(ar4 + 0x8b) = in_xd0;
      }
      ppuVar7 = ar4;
      FUN_8c06abb8(ar4,ar4 + 0x8b,ar4,ar7);
      vec3_copy_8c023d8c(ar4 + 0x14,auStack_2f0c,ppuVar7,ar7);
      uVar5 = 0xffffffff;
      object_dtor_delete(auStack_2f0c,0xffffffff,ppuVar7,ar7);
      if (cVar16 == '\0') {
        ar4[0x15] = ar4[0x9f];
      }
      else {
        *(undefined8 *)(ar4 + 0x15) = *(undefined8 *)(ar4 + 0x9f);
      }
      FUN_8c06aa04(ar4,uVar5,ppuVar7,ar7);
      Vec3_scale(auStack_2f1c,ar4 + 0x18,ppuVar7,ar7,auStack_2f2c);
      Vec3_set_xyz(auStack_2f38,Vec3_set_xyz,ppuVar7,ar7);
      FUN_8c023484(auStack_2f2c,auStack_2f38,ppuVar7,ar7,auStack_2f48);
      Vec3_add(ar4 + 0x9a,auStack_2f48,ppuVar7,ar7,auStack_2f58);
      Vec3_assign(ar4 + 0xc,auStack_2f58,ppuVar7,ar7);
      Vec3_dtor(auStack_2f58,0xffffffff,ppuVar7,ar7);
      Vec3_dtor(auStack_2f48,0xffffffff,ppuVar7,ar7);
      object_dtor_delete(auStack_2f38,0xffffffff,ppuVar7,ar7);
      Vec3_dtor(auStack_2f2c,0xffffffff,ppuVar7,ar7);
      ppuVar9 = (undefined **)0xffffffff;
      Vec3_dtor(auStack_2f1c,0xffffffff,0xffffffff,ar7);
      if (cVar16 == '\0') {
        puVar6 = ar4[0x8b];
        fVar11 = 45.0;
      }
      else {
        puVar6 = (undefined *)0x42340000;
        fVar11 = 7.84727e-43;
      }
      if (cVar15 != '\0' || fVar11 <= (float)(uint)puVar6) {
        ar4[0x8c] = ar4[0x8c] + 1;
        ppuVar9 = (undefined **)0x230;
      }
      break;
    case 0x5:
      if (((uint)ar4[0x1d] & 0x20) == 0x20) {
        ar4[0x8c] = ar4[0x8c] + 1;
        FUN_8c068890(auStack_3724,ar5,&switchdata_8c067a30_8c067a50,ar7);
        FUN_8c06af5c(ar4,auStack_3724,ppuVar9,ar7);
        FUN_8c068818(auStack_3724,0xffffffff,ppuVar9,ar7);
        ar7 = _DAT_8c2804e0;
        if (_DAT_8c2804e0 == (undefined *)0x1) {
          ar7 = (undefined *)0xe;
          ppuVar9 = (undefined **)0x1;
          (**(code **)(*ar6 + 0xd0))(ar6,ar4 + 0xc,1,0xe);
        }
      }
      else if (((uint)ar4[0x1d] & 0x40) == 0x40) {
        if (cVar16 == '\0') {
          dVar13 = (double)CONCAT44(0x41000000,ar4[0xd]);
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0xd);
          dVar13 = 5.062009702363989e+233;
        }
        if (cVar15 == '\0') {
          puVar6 = (undefined *)(uint)(SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20));
        }
        else {
          puVar6 = SUB84(dVar13 - dVar13,0);
        }
        if (cVar16 == '\0') {
          ar4[0xd] = puVar6;
        }
        else {
          *(undefined8 *)(ar4 + 0xd) = in_xd0;
        }
      }
      else if (((uint)ar4[0x1d] & 0x10) == 0x10) {
        if (cVar16 == '\0') {
          dVar13 = (double)CONCAT44(0x40000000,ar4[0xd]);
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0xd);
          dVar13 = 5.633522802342751e+86;
        }
        if (cVar15 == '\0') {
          puVar6 = (undefined *)(uint)(SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20));
        }
        else {
          puVar6 = SUB84(dVar13 - dVar13,0);
        }
        if (cVar16 == '\0') {
          ar4[0xd] = puVar6;
        }
        else {
          *(undefined8 *)(ar4 + 0xd) = in_xd0;
        }
      }
      break;
    case 0x7:
      if (cVar16 == '\0') {
        dVar13 = (double)CONCAT44(0x3a83126f,ar4[0x91]);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x91);
        dVar13 = -4.1966905022930605e-250;
      }
      if (cVar15 == '\0') {
        puVar6 = (undefined *)(uint)(SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20));
      }
      else {
        puVar6 = SUB84(dVar13 + dVar13,0);
      }
      if (cVar16 == '\0') {
        ar4[0x91] = puVar6;
        puVar6 = ar4[0x91];
      }
      else {
        *(undefined8 *)(ar4 + 0x91) = in_xd0;
      }
      if (cVar15 == '\0' && 1.0 < (float)(uint)puVar6) {
        _DAT_8c2809a8 = _DAT_8c2809a8 + -1;
        FUN_8c0f4d84(ar4,ar4,&switchdata_8c067a30_8c067a50,ar7);
      }
    }
  }
  object_dtor_delete(auStack_38,0xffffffff,ppuVar9,ar7);
  uVar5 = Vec3_dtor(auStack_2c,0xffffffff,ppuVar9,ar7);
  return uVar5;
}

__asm__(".globl _FUN_8c0679cc\n.set _FUN_8c0679cc, _FUN_8c0679cc_def\n");
