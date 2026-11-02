#include "../decls.h"
undefined4 FUN_8c05af78_def(int ar4,double *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  code *ar5_00;
  double *pdVar3;
  ulonglong *ar5_01;
  undefined1 *puVar4;
  int ar6_00;
  float fVar5;
  float fVar6;
  double in_dr0;
  undefined4 uVar8;
  double dVar7;
  float fVar9;
  double in_dr14;
  double dVar10;
  double in_xd0;
  bool bVar11;
  bool bVar12;
  char cVar13;
  char cVar14;
  float fStack_39c;
  float fStack_398;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined8 uStack_34c;
  undefined1 auStack_338 [16];
  undefined1 auStack_328 [16];
  undefined1 auStack_318 [12];
  undefined1 auStack_30c [16];
  undefined1 auStack_2fc [16];
  undefined1 auStack_2ec [16];
  undefined1 auStack_2dc [16];
  undefined1 auStack_2cc [16];
  undefined1 auStack_2bc [16];
  undefined1 auStack_2ac [16];
  undefined1 auStack_29c [16];
  undefined1 auStack_28c [16];
  undefined1 auStack_27c [16];
  undefined1 auStack_26c [12];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [12];
  undefined1 auStack_244 [16];
  undefined1 auStack_234 [12];
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [12];
  undefined1 auStack_1fc [16];
  undefined1 auStack_1ec [16];
  undefined1 auStack_1dc [16];
  undefined1 auStack_1cc [16];
  undefined1 auStack_1bc [16];
  undefined1 auStack_1ac [16];
  undefined1 auStack_19c [16];
  undefined1 auStack_18c [16];
  undefined1 auStack_17c [16];
  undefined1 auStack_16c [16];
  undefined1 auStack_15c [12];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [12];
  undefined1 auStack_134 [16];
  undefined1 auStack_124 [12];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [4];
  undefined8 uStack_24;
  
  cVar14 = '\0';
  cVar13 = '\0';
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  ar5_00 = Vec3_ctor_zero;
  Vec3_ctor_zero(auStack_38,Vec3_ctor_zero,ar6_00,ar7);
  Vec3_ctor_zero(auStack_48,ar5_00,ar6_00,ar7);
  Vec3_ctor_zero(auStack_58,ar5_00,ar6_00,ar7);
  pdVar3 = ar5;
  Vec3_ctor_copy(auStack_68,ar5,ar6_00,ar7);
  vec3_clear(ar4 + 0x200,pdVar3,ar6_00,ar7);
  *(undefined4 *)(ar4 + 0x304) = 0;
  ar5_01 = *(ulonglong **)(ar6 + 0x84);
  if ((ar5_01 != (ulonglong *)0x0) && ((*(byte *)(ar4 + 0x1fc) & 0x3f) >> 5 != 0)) {
    FUN_8c02f670(*(undefined4 *)(ar6 + 0x70),auStack_98,ar6_00,ar7,auStack_98);
    Vec3_assign(ar4 + 0x308,auStack_98,ar6_00,ar7);
    ar5_01 = (ulonglong *)0xffffffff;
    Vec3_dtor(auStack_98,0xffffffff,ar6_00,ar7);
    *(undefined4 *)(ar4 + 0x318) = 1;
  }
  if ((*(int *)(ar6 + 0x68) != 0) && ((int)((uint)*(byte *)(ar4 + 0x1fc) << 0x1e) < 0)) {
    Vec3_assign(auStack_48,ar5,ar6_00,ar7);
    Vec3_assign(auStack_58,*(int *)(ar6 + 0x68) + 4,ar6_00,ar7);
    if (cVar14 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(*(int *)(ar6 + 0x68) + 0x158));
    }
    Vec3_sub(auStack_48,auStack_58,ar6_00,ar7,auStack_a8);
    Vec3_assign(auStack_28,auStack_a8,ar6_00,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_a8,0xffffffff,ar6_00,ar7);
    Vec3_length_sq(auStack_28,uVar2,ar6_00,ar7);
    uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (cVar14 == '\0') {
      in_dr0 = (double)CONCAT44(uVar2,*(undefined4 *)(ar4 + 0x48));
      dVar7 = in_xd0;
      uStack_364 = uVar2;
    }
    else {
      uStack_364 = SUB84(in_dr0,0);
      dVar7 = *(double *)(ar4 + 0x48);
      uStack_360 = uVar2;
    }
    if (cVar13 == '\0') {
      fVar5 = SUB84(in_dr0,0) + SUB84(in_dr14,0);
    }
    else {
      fVar5 = SUB84(in_dr0 + in_dr14,0);
    }
    if (cVar14 == '\0') {
      dVar10 = (double)CONCAT44(uStack_364,fVar5);
    }
    else {
      dVar10 = (double)CONCAT44(uStack_360,uStack_364);
    }
    if (cVar13 == '\0') {
      fVar5 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar10 - dVar10,0);
    }
    if (cVar14 == '\0') {
      dVar10 = (double)CONCAT44(0x3dcccccd,fVar5);
    }
    else {
      dVar10 = -7.93713999303812e-251;
    }
    if (cVar13 == '\0') {
      fVar5 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar10 * dVar10,0);
    }
    dVar10 = dVar7;
    if (cVar14 == '\0') {
      uStack_34c = (double)CONCAT44((*(uint*)((uchar*)&uStack_34c+4)),fVar5);
      dVar10 = uStack_34c;
    }
    uStack_34c = dVar10;
    dVar10 = uStack_34c;
    if ((cVar13 == '\0' && fVar5 < 0.0) && (dVar10 = (double)(ulonglong)(uint)fVar5, cVar14 == '\0')
       ) {
      uStack_34c = (double)((ulonglong)uStack_34c & 0xffffffff00000000);
      dVar10 = uStack_34c;
    }
    uStack_34c = dVar10;
    dVar10 = (double)(ulonglong)(uint)fVar5;
    Vec3_length(auStack_28,ar4 + 0x48,ar6_00,ar7);
    Vec3_length_sq(ar4 + 4,Vec3_length_sq,ar6_00,ar7);
    in_xd0 = dVar10;
    if (cVar14 == '\0') {
      dVar10 = (double)((ulonglong)dVar10 >> 0x20);
      in_xd0 = dVar7;
    }
    fVar5 = SUB84(dVar10,0);
    if (cVar13 == '\0' && 0.0 < fVar5) {
      if (*(int *)(ar4 + 0x2b8) == 7) {
        Vec3_scale(ar4 + 0x14,&DAT_8c1365f4,ar6_00,ar7,auStack_b8);
        puVar4 = auStack_b8;
        Vec3_add(auStack_28,puVar4,ar6_00,ar7,auStack_c8);
        Vec3_normalize(auStack_c8,puVar4,ar6_00,ar7);
        Vec3_assign(auStack_28,auStack_d8,ar6_00,ar7);
        Vec3_dtor(auStack_d8,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_c8,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_b8,0xffffffff,ar6_00,ar7);
      }
      else {
        Vec3_scale(ar4 + 0x14,&DAT_8c1365f8,ar6_00,ar7,auStack_e8);
        puVar4 = auStack_e8;
        Vec3_add(auStack_28,puVar4,ar6_00,ar7,auStack_f8);
        Vec3_normalize(auStack_f8,puVar4,ar6_00,ar7);
        Vec3_assign(auStack_28,auStack_108,ar6_00,ar7);
        Vec3_dtor(auStack_108,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_f8,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_e8,0xffffffff,ar6_00,ar7);
      }
    }
    FUN_8c023bf4(auStack_28,&uStack_34c,ar6_00,ar7);
    in_dr0 = (double)(ulonglong)(uint)fVar5;
    dVar7 = in_dr0;
    if (cVar14 == '\0') {
      uStack_24 = (double)((ulonglong)(*(uint*)((uchar*)&uStack_24+4)) << 0x20);
      dVar7 = uStack_24;
    }
    uStack_24 = dVar7;
    Vec3_assign(ar4 + 0x200,auStack_28,ar6_00,ar7);
    if ((2 < *(int *)(ar4 + 0x128)) && (*(int *)(ar4 + 0x330) == 1)) {
      Vec3_sub(auStack_58,auStack_48,ar6_00,ar7,auStack_118);
      Vec3_ctor_copy(auStack_78,auStack_118,ar6_00,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_118,0xffffffff,ar6_00,ar7);
      Vec3_set_xyz(auStack_124,uVar2,ar6_00,ar7);
      FUN_8c023484(auStack_78,auStack_124,ar6_00,ar7,auStack_134);
      Vec3_assign(auStack_78,auStack_134,ar6_00,ar7);
      Vec3_dtor(auStack_134,0xffffffff,ar6_00,ar7);
      object_dtor_delete(auStack_124,0xffffffff,ar6_00,ar7);
      puVar4 = auStack_78;
      FUN_8c022d14(ar4 + 0x14,puVar4,ar6_00,ar7);
      dVar7 = in_dr0;
      if (cVar14 == '\0') {
        dVar7 = (double)((ulonglong)in_dr0 >> 0x20);
        in_dr0 = in_xd0;
      }
      in_xd0 = in_dr0;
      in_dr0 = (double)((ulonglong)dVar7 & 0xffffffff);
      if (cVar13 == '\0' && 0.0 < SUB84(dVar7,0)) {
        Vec3_set_xyz(auStack_15c,puVar4,ar6_00,ar7);
        FUN_8c023484(ar4 + 0x14,auStack_15c,ar6_00,ar7,auStack_16c);
        Vec3_assign(ar4 + 0x14,auStack_16c,ar6_00,ar7);
        Vec3_dtor(auStack_16c,0xffffffff,ar6_00,ar7);
        object_dtor_delete(auStack_15c,0xffffffff,ar6_00,ar7);
      }
      else {
        Vec3_set_xyz(auStack_140,puVar4,ar6_00,ar7);
        FUN_8c023484(ar4 + 0x14,auStack_140,ar6_00,ar7,auStack_150);
        Vec3_assign(ar4 + 0x14,auStack_150,ar6_00,ar7);
        Vec3_dtor(auStack_150,0xffffffff,ar6_00,ar7);
        object_dtor_delete(auStack_140,0xffffffff,ar6_00,ar7);
        FUN_8c023bf4(auStack_78,&DAT_8c1365fc,ar6_00,ar7);
      }
      FUN_8c023bf4(ar4 + 0x200,&DAT_8c136600,ar6_00,ar7);
      Vec3_scale(auStack_78,&DAT_8c136604,ar6_00,ar7,auStack_17c);
      FUN_8c023aa0(ar4 + 0x200,auStack_17c,ar6_00,ar7);
      Vec3_dtor(auStack_17c,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_78,0xffffffff,ar6_00,ar7);
    }
    ar5_01 = (ulonglong *)0x1;
    *(undefined4 *)(ar4 + 0x304) = 1;
  }
  if ((*(int *)(ar6 + 100) != 0) && ((int)((uint)*(byte *)(ar4 + 0x1fc) << 0x1d) < 0)) {
    iVar1 = get_field_24_05c284(*(undefined4 *)(ar6 + 0x50),ar5_01,ar6_00,ar7);
    if ((iVar1 == 0xf) ||
       ((iVar1 = get_field_24_05c284(*(undefined4 *)(ar6 + 0x50),ar5_01,ar6_00,ar7), iVar1 == 10 ||
        (iVar1 = get_field_24_05c284(*(undefined4 *)(ar6 + 0x50),ar5_01,ar6_00,ar7), iVar1 == 0xd)))
       ) {
      Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
      uVar2 = Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
      return uVar2;
    }
    (**(code **)(*(int *)(*(int *)(ar6 + 0x50) + 8) + 0x170))
              (*(int *)(ar6 + 0x50),ar5_01,ar6_00,ar7);
    uStack_37c = SUB84(in_dr0,0);
    uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (cVar14 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),uVar2);
      dVar7 = (double)CONCAT44(0x3a83126f,uStack_37c);
      uStack_37c = uVar2;
    }
    else {
      dVar7 = 1.85086533838489e-311;
    }
    if (cVar13 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 SUB84(in_dr14,0) + (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 + dVar7;
    }
    pdVar3 = ar5;
    Vec3_assign(auStack_48,ar5,ar6_00,ar7);
    FUN_8c02f670(*(undefined4 *)(ar6 + 0x50),pdVar3,ar6_00,ar7,auStack_18c);
    Vec3_assign(auStack_58,auStack_18c,ar6_00,ar7);
    Vec3_dtor(auStack_18c,0xffffffff,ar6_00,ar7);
    Vec3_sub(auStack_48,auStack_58,ar6_00,ar7,auStack_19c);
    Vec3_assign(auStack_28,auStack_19c,ar6_00,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_19c,0xffffffff,ar6_00,ar7);
    Vec3_length_sq(auStack_28,uVar2,ar6_00,ar7);
    uVar8 = (undefined4)((ulonglong)dVar7 >> 0x20);
    if (cVar14 == '\0') {
      dVar7 = (double)CONCAT44(uVar8,*(undefined4 *)(ar4 + 0x48));
      uStack_380 = uVar8;
    }
    else {
      uStack_380 = SUB84(dVar7,0);
      in_xd0 = *(double *)(ar4 + 0x48);
      uStack_37c = uVar8;
    }
    if (cVar13 == '\0') {
      fVar5 = SUB84(dVar7,0) + SUB84(in_dr14,0);
    }
    else {
      fVar5 = SUB84(dVar7 + in_dr14,0);
    }
    if (cVar14 == '\0') {
      dVar7 = (double)CONCAT44(uStack_380,fVar5);
    }
    else {
      dVar7 = (double)CONCAT44(uStack_37c,uStack_380);
    }
    if (cVar13 == '\0') {
      fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 - dVar7,0);
    }
    if (cVar14 == '\0') {
      dVar7 = (double)CONCAT44(0x3dcccccd,fVar5);
    }
    else {
      dVar7 = -7.93713999303812e-251;
    }
    if (cVar13 == '\0') {
      fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    dVar7 = in_xd0;
    if (cVar14 == '\0') {
      uStack_34c = (double)CONCAT44((*(uint*)((uchar*)&uStack_34c+4)),fVar5);
      dVar7 = uStack_34c;
    }
    uStack_34c = dVar7;
    dVar7 = uStack_34c;
    if ((cVar13 == '\0' && fVar5 < 0.0) && (dVar7 = (double)(ulonglong)(uint)fVar5, cVar14 == '\0'))
    {
      uStack_34c = (double)((ulonglong)uStack_34c & 0xffffffff00000000);
      dVar7 = uStack_34c;
    }
    uStack_34c = dVar7;
    dVar7 = (double)(ulonglong)(uint)fVar5;
    Vec3_length(auStack_28,uVar2,ar6_00,ar7);
    FUN_8c023bf4(auStack_28,&uStack_34c,ar6_00,ar7);
    dVar10 = uStack_24;
    if (((*(int *)(ar4 + 0x124) != 0xf) && (*(int *)(ar4 + 0x124) != 0xf)) &&
       (dVar7 = (double)((ulonglong)dVar7 & 0xffffffff), dVar10 = dVar7, cVar14 == '\0')) {
      uStack_24 = (double)((ulonglong)uStack_24 & 0xffffffff00000000);
      dVar10 = uStack_24;
    }
    uStack_24 = dVar10;
    puVar4 = auStack_28;
    FUN_8c023aa0(ar4 + 0x200,puVar4,ar6_00,ar7);
    (**(code **)(*(int *)(*(int *)(ar6 + 0x50) + 8) + 0x13c))
              (*(int *)(ar6 + 0x50),puVar4,ar6_00,ar7);
    Vec3_assign(auStack_38,auStack_1ac,ar6_00,ar7);
    Vec3_dtor(auStack_1ac,0xffffffff,ar6_00,ar7);
    FUN_8c0230f0(ar4 + 0x200,0x200,ar6_00,ar7,auStack_1bc);
    FUN_8c0230f0(auStack_38,FUN_8c0230f0,ar6_00,ar7,auStack_1cc);
    FUN_8c022dac(auStack_1bc,auStack_1cc,ar6_00,ar7);
    fStack_398 = (float)((ulonglong)dVar7 >> 0x20);
    if (cVar14 == '\0') {
      fVar5 = 5.0;
      dVar7 = in_xd0;
    }
    else {
      fStack_398 = 5.0;
      fVar5 = 6.55808e-43;
    }
    bVar12 = cVar13 == '\0';
    bVar11 = fStack_398 < fVar5;
    Vec3_dtor(auStack_1cc,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_1bc,0xffffffff,ar6_00,ar7);
    if (bVar12 && bVar11) {
      Vec3_sub(auStack_48,auStack_58,ar6_00,ar7,auStack_1dc);
      Vec3_assign(auStack_28,auStack_1dc,ar6_00,ar7);
      Vec3_dtor(auStack_1dc,0xffffffff,ar6_00,ar7);
      FUN_8c0230f0(ar4 + 0x200,ar4 + 0x200,ar6_00,ar7,auStack_1ec);
      FUN_8c0230f0(auStack_28,auStack_28,ar6_00,ar7,auStack_1fc);
      fVar6 = fStack_398;
      fStack_398 = fVar5;
      FUN_8c022dac(auStack_1ec,auStack_1fc,ar6_00,ar7);
      if (cVar14 == '\0') {
        fVar5 = 5.0;
      }
      else {
        dVar7 = (double)CONCAT44(fStack_398,fVar6);
        fStack_398 = 5.0;
        fVar5 = 6.55808e-43;
      }
      bVar12 = cVar13 == '\0';
      bVar11 = fStack_398 < fVar5;
      Vec3_dtor(auStack_1fc,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_1ec,0xffffffff,ar6_00,ar7);
      if (bVar12 && bVar11) {
        Vec3_set_xyz(auStack_208,Vec3_set_xyz,ar6_00,ar7);
        FUN_8c023484(ar4 + 0x200,auStack_208,ar6_00,ar7,auStack_218);
        Vec3_assign(ar4 + 0x200,auStack_218,ar6_00,ar7);
        Vec3_dtor(auStack_218,0xffffffff,ar6_00,ar7);
        object_dtor_delete(auStack_208,0xffffffff,ar6_00,ar7);
      }
    }
    if ((2 < *(int *)(ar4 + 0x128)) && (*(int *)(ar4 + 0x330) == 1)) {
      Vec3_sub(auStack_58,auStack_48,ar6_00,ar7,auStack_228);
      fVar6 = fStack_398;
      fStack_398 = fVar5;
      Vec3_ctor_copy(auStack_88,auStack_228,ar6_00,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_228,0xffffffff,ar6_00,ar7);
      Vec3_set_xyz(auStack_234,uVar2,ar6_00,ar7);
      FUN_8c023484(auStack_88,auStack_234,ar6_00,ar7,auStack_244);
      Vec3_assign(auStack_88,auStack_244,ar6_00,ar7);
      Vec3_dtor(auStack_244,0xffffffff,ar6_00,ar7);
      object_dtor_delete(auStack_234,0xffffffff,ar6_00,ar7);
      FUN_8c022d14(ar4 + 0x14,auStack_88,ar6_00,ar7);
      if (cVar14 != '\0') {
        dVar7 = (double)CONCAT44(fStack_398,fVar6);
        fStack_398 = fVar6;
      }
      fVar5 = 0.0;
      if (cVar13 == '\0' && 0.0 < fStack_398) {
        Vec3_set_xyz(auStack_26c,auStack_26c,ar6_00,ar7);
        FUN_8c023484(ar4 + 0x14,auStack_26c,ar6_00,ar7,auStack_27c);
        Vec3_assign(ar4 + 0x14,auStack_27c,ar6_00,ar7);
        Vec3_dtor(auStack_27c,0xffffffff,ar6_00,ar7);
        object_dtor_delete(auStack_26c,0xffffffff,ar6_00,ar7);
      }
      else {
        Vec3_set_xyz(auStack_250,auStack_250,ar6_00,ar7);
        FUN_8c023484(ar4 + 0x14,auStack_250,ar6_00,ar7,auStack_260);
        Vec3_assign(ar4 + 0x14,auStack_260,ar6_00,ar7);
        Vec3_dtor(auStack_260,0xffffffff,ar6_00,ar7);
        object_dtor_delete(auStack_250,0xffffffff,ar6_00,ar7);
        FUN_8c023bf4(auStack_88,&DAT_8c136608,ar6_00,ar7);
      }
      FUN_8c023bf4(ar4 + 0x200,&DAT_8c13660c,ar6_00,ar7);
      Vec3_scale(auStack_88,&DAT_8c136610,ar6_00,ar7,auStack_28c);
      FUN_8c023aa0(ar4 + 0x200,auStack_28c,ar6_00,ar7);
      Vec3_dtor(auStack_28c,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_88,0xffffffff,ar6_00,ar7);
    }
    uVar2 = 0x304;
    *(undefined4 *)(ar4 + 0x304) = 1;
    if (*(int *)(ar6 + 0x58) == 0) {
      Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
      uVar2 = Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
      return uVar2;
    }
    iVar1 = get_field_24_05c284(*(undefined4 *)(ar6 + 0x58),0x304,ar6_00,ar7);
    if ((iVar1 == 0xf) ||
       (iVar1 = get_field_24_05c284(*(undefined4 *)(ar6 + 0x58),uVar2,ar6_00,ar7), iVar1 == 10)) {
      Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
      uVar2 = Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
      return uVar2;
    }
    (**(code **)(*(int *)(*(int *)(ar6 + 0x58) + 8) + 0x170))(*(int *)(ar6 + 0x58),iVar1,ar6_00,ar7)
    ;
    if (cVar14 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),fVar5);
      dVar10 = (double)CONCAT44(0x3a83126f,fStack_398);
      fStack_398 = fVar5;
    }
    else {
      dVar10 = 1.85086533838489e-311;
    }
    if (cVar13 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 SUB84(in_dr14,0) + (float)((ulonglong)dVar10 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 + dVar10;
    }
    Vec3_assign(auStack_48,ar5,ar6_00,ar7);
    FUN_8c02f670(*(undefined4 *)(ar6 + 0x58),(undefined4 *)(ar6 + 0x58),ar6_00,ar7,auStack_29c);
    Vec3_assign(auStack_58,auStack_29c,ar6_00,ar7);
    Vec3_dtor(auStack_29c,0xffffffff,ar6_00,ar7);
    Vec3_sub(auStack_48,auStack_58,ar6_00,ar7,auStack_2ac);
    Vec3_assign(auStack_28,auStack_2ac,ar6_00,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_2ac,0xffffffff,ar6_00,ar7);
    Vec3_length_sq(auStack_28,uVar2,ar6_00,ar7);
    fVar5 = (float)((ulonglong)dVar10 >> 0x20);
    if (cVar14 == '\0') {
      dVar10 = (double)CONCAT44(fVar5,*(undefined4 *)(ar4 + 0x48));
      fStack_39c = fVar5;
    }
    else {
      fStack_39c = SUB84(dVar10,0);
      dVar7 = *(double *)(ar4 + 0x48);
      fStack_398 = fVar5;
    }
    if (cVar13 == '\0') {
      fVar5 = SUB84(dVar10,0) + SUB84(in_dr14,0);
    }
    else {
      fVar5 = SUB84(dVar10 + in_dr14,0);
    }
    if (cVar14 == '\0') {
      dVar10 = (double)CONCAT44(fStack_39c,fVar5);
    }
    else {
      dVar10 = (double)CONCAT44(fStack_398,fStack_39c);
    }
    if (cVar13 == '\0') {
      fVar5 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar10 - dVar10,0);
    }
    if (cVar14 == '\0') {
      dVar10 = (double)CONCAT44(0x3dcccccd,fVar5);
    }
    else {
      dVar10 = -7.93713999303812e-251;
    }
    if (cVar13 == '\0') {
      fVar5 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar10 * dVar10,0);
    }
    if (cVar14 == '\0') {
      uStack_34c = (double)CONCAT44((*(uint*)((uchar*)&uStack_34c+4)),fVar5);
      dVar7 = uStack_34c;
    }
    uStack_34c = dVar7;
    dVar7 = uStack_34c;
    if ((cVar13 == '\0' && fVar5 < 0.0) && (dVar7 = (double)(ulonglong)(uint)fVar5, cVar14 == '\0'))
    {
      uStack_34c = (double)((ulonglong)uStack_34c & 0xffffffff00000000);
      dVar7 = uStack_34c;
    }
    uStack_34c = dVar7;
    Vec3_length(auStack_28,uVar2,ar6_00,ar7);
    FUN_8c023bf4(auStack_28,&uStack_34c,ar6_00,ar7);
    dVar10 = (double)(ulonglong)(uint)fVar5;
    dVar7 = dVar10;
    if (cVar14 == '\0') {
      uStack_24 = (double)((ulonglong)uStack_24 & 0xffffffff00000000);
      dVar7 = uStack_24;
    }
    uStack_24 = dVar7;
    puVar4 = auStack_28;
    FUN_8c023aa0(ar4 + 0x200,puVar4,ar6_00,ar7);
    fVar5 = (float)((ulonglong)dVar10 >> 0x20);
    (**(code **)(*(int *)(*(int *)(ar6 + 0x50) + 8) + 0x13c))
              (*(int *)(ar6 + 0x50),puVar4,ar6_00,ar7);
    Vec3_assign(auStack_38,auStack_2bc,ar6_00,ar7);
    Vec3_dtor(auStack_2bc,0xffffffff,ar6_00,ar7);
    iVar1 = ar4 + 0x200;
    FUN_8c0230f0(iVar1,iVar1,ar6_00,ar7,auStack_2cc);
    FUN_8c0230f0(auStack_38,iVar1,ar6_00,ar7,auStack_2dc);
    FUN_8c022dac(auStack_2cc,auStack_2dc,ar6_00,ar7);
    if (cVar14 == '\0') {
      fVar6 = 5.0;
    }
    else {
      fVar5 = 5.0;
      fVar6 = 2.74654e-43;
    }
    bVar12 = cVar13 == '\0';
    bVar11 = fVar5 < fVar6;
    Vec3_dtor(auStack_2dc,0xffffffff,ar6_00,ar7);
    ar5_01 = (ulonglong *)0xffffffff;
    Vec3_dtor(auStack_2cc,0xffffffff,ar6_00,ar7);
    if (bVar12 && bVar11) {
      Vec3_sub(auStack_48,auStack_58,ar6_00,ar7,auStack_2ec);
      Vec3_assign(auStack_28,auStack_2ec,ar6_00,ar7);
      Vec3_dtor(auStack_2ec,0xffffffff,ar6_00,ar7);
      FUN_8c0230f0(ar4 + 0x200,FUN_8c0230f0,ar6_00,ar7,auStack_2fc);
      FUN_8c0230f0(auStack_28,FUN_8c0230f0,ar6_00,ar7,auStack_30c);
      FUN_8c022dac(auStack_2fc,auStack_30c,ar6_00,ar7);
      if (cVar14 == '\0') {
        fVar5 = 5.0;
      }
      else {
        fVar6 = 5.0;
        fVar5 = 2.74654e-43;
      }
      bVar12 = cVar13 == '\0';
      Vec3_dtor(auStack_30c,0xffffffff,ar6_00,ar7);
      ar5_01 = (ulonglong *)0xffffffff;
      Vec3_dtor(auStack_2fc,0xffffffff,ar6_00,ar7);
      if (bVar12 && fVar6 < fVar5) {
        Vec3_set_xyz(auStack_318,ar5_01,ar6_00,ar7);
        FUN_8c023484(ar4 + 0x200,auStack_318,ar6_00,ar7,auStack_328);
        Vec3_assign(ar4 + 0x200,auStack_328,ar6_00,ar7);
        Vec3_dtor(auStack_328,0xffffffff,ar6_00,ar7);
        ar5_01 = (ulonglong *)0xffffffff;
        object_dtor_delete(auStack_318,0xffffffff,ar6_00,ar7);
      }
    }
    *(undefined4 *)(ar4 + 0x304) = 1;
  }
  if (2 < *(int *)(ar4 + 0x128)) {
    if (cVar14 == '\0') {
      dVar7 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar7 = 7.67384666056308e+21;
    }
    if (cVar13 == '\0') {
      fVar5 = (float)((ulonglong)dVar7 >> 0x20);
      dVar7 = (double)CONCAT44(fVar5,SUB84(dVar7,0) * fVar5);
    }
    else {
      dVar7 = dVar7 * dVar7;
    }
    if (cVar14 == '\0') {
      dVar10 = (double)CONCAT44(0x447a0000,SUB84(in_dr14,0));
    }
    else {
      dVar10 = -7.933010971859645e-251;
    }
    if (cVar13 == '\0') {
      dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) - SUB84(dVar7,0),SUB84(dVar10,0))
      ;
    }
    else {
      dVar10 = dVar10 - dVar7;
    }
    if (cVar14 == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)ar5,SUB84(dVar7,0));
    }
    else {
      dVar7 = *ar5;
    }
    fVar5 = (float)((ulonglong)dVar10 >> 0x20);
    if (cVar13 == '\0') {
      bVar12 = fVar5 < (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      bVar12 = dVar10 < dVar7;
    }
    if (!bVar12) {
      if (cVar14 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x200),*(undefined4 *)ar5);
      }
      else {
        dVar7 = *(double *)(ar4 + 0x200);
      }
      if (cVar13 == '\0') {
        fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar14 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),fVar6);
      }
      else {
        dVar7 = *(double *)(ar4 + 0x48);
      }
      if (cVar13 == '\0') {
        fVar9 = (float)((ulonglong)dVar7 >> 0x20);
        fVar6 = SUB84(dVar7,0) + fVar9;
        dVar7 = (double)CONCAT44(fVar9,fVar6);
        bVar12 = fVar6 < fVar5;
      }
      else {
        dVar7 = dVar7 + dVar7;
        bVar12 = dVar7 < dVar10;
      }
      if (!bVar12) {
        ar5_01 = (ulonglong *)(ar4 + 0x200);
        if (cVar14 == '\0') {
          *(undefined4 *)ar5_01 = 0;
        }
        else {
          *ar5_01 = (ulonglong)dVar7 & 0xffffffff;
        }
      }
    }
  }
  Vec3_ctor_xyz(auStack_338,ar5_01,ar6_00,ar7);
  iVar1 = FUN_8c023d04(ar4 + 0x200,auStack_338,ar6_00,ar7);
  Vec3_dtor(auStack_338,0xffffffff,ar6_00,ar7);
  if (iVar1 != 0) {
    FUN_8c032ab0(ar4,iVar1,ar6_00,ar7);
    FUN_8c032ab0(ar4,iVar1,ar6_00,ar7);
    Vec3_ctor_xyz((int)&uStack_34c + 4,(int)&uStack_34c + 4,ar6_00,ar7);
    FUN_8c023aa0(ar4 + 0x200,(int)&uStack_34c + 4,ar6_00,ar7);
    Vec3_dtor((int)&uStack_34c + 4,0xffffffff,ar6_00,ar7);
  }
  Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
  uVar2 = Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c05af78\n.set _FUN_8c05af78, _FUN_8c05af78_def\n");
