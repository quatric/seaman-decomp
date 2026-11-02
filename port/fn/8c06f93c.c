#include "../decls.h"
code * FUN_8c06f93c_def(int ar4,undefined4 *ar5,undefined4 ar6,code *ar7)

{
  undefined4 uVar1;
  uint ar7_00;
  int iVar2;
  code *pcVar3;
  undefined4 *a5;
  undefined8 *ar5_00;
  int iVar4;
  undefined1 *puVar5;
  undefined8 *ar6_00;
  undefined4 uVar6;
  undefined8 *ar7_01;
  undefined4 ar7_02;
  code *pcVar7;
  undefined4 in_fr1;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double in_dr12;
  double in_dr14;
  double in_xd0;
  undefined8 in_xd12;
  double in_xd14;
  bool bVar12;
  char cVar13;
  char cVar14;
  undefined8 uStack_158;
  undefined1 auStack_144 [16];
  undefined1 auStack_134 [16];
  undefined1 auStack_124 [16];
  undefined1 auStack_114 [16];
  undefined1 auStack_104 [16];
  undefined1 auStack_f4 [12];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [12];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  cVar14 = '\0';
  cVar13 = '\0';
  pcVar7 = (code *)0x1;
  puVar5 = auStack_5c;
  FUN_8c03f480(*ar5,ar5,puVar5,ar7,puVar5);
  Vec3_ctor_copy(auStack_30,auStack_5c,puVar5,ar7);
  Vec3_dtor(auStack_5c,0xffffffff,puVar5,ar7);
  pcVar3 = Vec3_set_zero;
  Vec3_set_zero(auStack_3c,Vec3_set_zero,puVar5,ar7);
  dVar9 = (double)CONCAT44(0x3f800000,in_fr1);
  dVar10 = dVar9;
  if (cVar14 == '\0') {
    uStack_158 = (double)CONCAT44((*(uint*)((uchar*)&uStack_158+4)),0x3f800000);
    dVar10 = uStack_158;
  }
  uStack_158 = dVar10;
  if (((ar5[4] == 3) || (pcVar3 = *(code **)(ar4 + 0x68), pcVar3 != (code *)0x0)) &&
     (*(int *)(ar4 + 0x298) == 1)) {
    if (((*(int *)(ar4 + 0x124) == 4) && (*(int *)(ar4 + 300) == 2)) &&
       (iVar2 = get_field_6c_028cc4(*ar5,get_field_6c_028cc4,puVar5,ar7), iVar2 != 0)) {
      Vec3_scale(ar4 + 0x80,ar4 + 0x48,0x80,ar7,auStack_6c);
      pcVar7 = Vec3_scale;
      Vec3_scale(auStack_6c,*(int *)(ar5[1] + 8) + 4,Vec3_scale,ar7,auStack_7c);
      Vec3_add(auStack_7c,*(undefined4 *)(uint)ar5[1],pcVar7,ar7,auStack_8c);
      Vec3_ctor_copy(auStack_4c,auStack_8c,pcVar7,ar7);
      Vec3_dtor(auStack_8c,0xffffffff,0xffffffff,ar7);
      uVar6 = 0xffffffff;
      pcVar7 = Vec3_dtor;
      Vec3_dtor(auStack_7c,0xffffffff,Vec3_dtor,0xffffffff);
      Vec3_dtor(auStack_6c,0xffffffff,pcVar7,uVar6);
      uVar1 = get_field_6c_028cc4(*ar5,get_field_6c_028cc4,pcVar7,uVar6);
      FUN_8c036988(uVar1,FUN_8c036988,uVar1,uVar6);
      Vec3_dtor(auStack_4c,0xffffffff,uVar1,uVar6);
    }
    uVar1 = ar5[4];
    FUN_8c07a68c(ar4,*(undefined4 *)(uint)ar5[1],uVar1,ar5[3]);
    uVar6 = 0x80;
    Vec3_assign(ar4 + 0x80,ar4 + 0x14,uVar1,0x80);
    object_dtor_delete(auStack_3c,0xffffffff,uVar1,uVar6);
    Vec3_dtor(auStack_30,0xffffffff,uVar1,uVar6);
    return (code *)1;
  }
  iVar2 = *(int *)(ar4 + 0x124);
  if ((0x1f < iVar2) || (iVar2 < 0)) goto override_jmp_8c06fb96_case_5;
                    
  switch(iVar2) {
  case 0:
  case 0xe:
  case 0xf:
    FUN_8c030eb8(ar4 + 0x1fc,0x1fc,puVar5,ar7);
    ar7 = (code *)(uint)ar5[3];
    pcVar7 = (code *)FUN_8c078fd0(ar4,*(undefined4 *)(uint)ar5[1],*(undefined4 *)(ar5[1] + 4),ar7);
    break;
  case 1:
    ar7 = (code *)pure_virtual_stub(ar4,*(undefined4 *)(uint)ar5[1],auStack_30,ar7);
    pcVar7 = ar7;
    break;
  case 2:
    ar7 = (code *)(uint)ar5[6];
    pcVar7 = (code *)FUN_8c07af10(ar4,*(undefined4 *)(uint)ar5[1],ar5[4],ar7);
    FUN_8c031c74(ar4,auStack_30,*(undefined4 *)(uint)ar5[1],ar7);
    break;
  case 3:
    pcVar7 = (code *)FUN_8c07f76c(ar4,*(undefined4 *)(uint)ar5[1],ar5[6],ar7);
    break;
  case 4:
    ar7 = (code *)*ar5;
    pcVar7 = (code *)FUN_8c077a38(ar4,*(undefined4 *)(uint)ar5[1],auStack_30,ar7);
    break;
  case 6:
    pcVar7 = (code *)FUN_8c07edac(ar4,*(undefined4 *)(uint)ar5[1],ar5[6],ar7);
    break;
  case 7:
    FUN_8c031b58(ar4 + 0xb0,0xb0,puVar5,ar7);
    uVar1 = 0xb0;
    ar7 = CAnimBody_AdvanceFrame_wrapper;
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,puVar5,CAnimBody_AdvanceFrame_wrapper);
    if (iVar2 == 1) {
      FUN_8c03c314(ar4,uVar1,1,ar7);
      pcVar7 = (code *)0x0;
    }
    break;
  case 8:
  case 9:
    uVar6 = 0xfffffffb;
    *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfb;
    uVar1 = 300;
    if (*(int *)(ar4 + 300) == 0) {
      if (*(int *)(ar4 + 0x124) == 9) {
        ar7 = (code *)(uint)ar5[6];
        uVar6 = *(undefined4 *)(uint)ar5[1];
        uVar1 = 8;
        FUN_8c033474(ar4,8,uVar6,ar7);
      }
      else {
        ar7 = (code *)(uint)ar5[6];
        uVar6 = *(undefined4 *)(uint)ar5[1];
        uVar1 = 7;
        FUN_8c033474(ar4,7,uVar6,ar7);
      }
    }
    Vec3_ctor_xyz(auStack_144,uVar1,uVar6,ar7);
    pcVar7 = (code *)FUN_8c07b7d0(ar4,*(undefined4 *)(uint)ar5[1],auStack_144,ar5[3],ar5[6]);
    ar7 = (code *)0xffffffff;
    Vec3_dtor(auStack_144,0xffffffff,auStack_144,0xffffffff);
    break;
  case 10:
    if (*(int *)(ar4 + 0x128) < 3) {
      pcVar7 = (code *)FUN_8c076750(ar4,*ar5,0,ar7);
    }
    else {
      a5 = ar5;
      pcVar7 = (code *)FUN_8c076994(ar4,ar5,puVar5,ar7);
      (**(code **)(*(int *)(uint)ar5[6] + 0x184))((int *)(uint)ar5[6],a5,puVar5,ar7);
      if (cVar14 == '\0') {
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),(int)((ulonglong)dVar9 >> 0x20));
      }
      else {
        dVar10 = *(double *)(ar4 + 0x48);
        in_xd0 = dVar9;
      }
      if (cVar13 == '\0') {
        fVar8 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar10 - dVar10,0);
      }
      if (cVar14 == '\0') {
        uVar11 = CONCAT44(*(undefined4 *)(*(int *)(uint)ar5[1] + 4),fVar8);
      }
      else {
        uVar11 = *(undefined8 *)(*(int *)(uint)ar5[1] + 4);
      }
      if (cVar13 == '\0' && (float)uVar11 < (float)((ulonglong)uVar11 >> 0x20)) {
        ar7 = FUN_8c03c314;
        FUN_8c03c314(ar4,a5,puVar5,FUN_8c03c314);
      }
      else {
        FUN_8c031748(ar4,a5,puVar5,ar7);
      }
    }
    if (cVar14 == '\0') {
      dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x28);
      dVar9 = 2.651015428457012e+77;
    }
    if (cVar13 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar14 == '\0') {
      *(float *)(ar4 + 0x28) = fVar8;
    }
    else {
      *(double *)(ar4 + 0x28) = in_xd0;
    }
    break;
  case 0xb:
    if (*(int *)(ar4 + 0x128) < 2) {
      pcVar7 = (code *)FUN_8c075ef4(ar4,*(int *)(ar4 + 0x128),puVar5,ar7);
    }
    else {
      Vec3_ctor_copy(auStack_9c,&DAT_8c125e68,puVar5,ar7);
      uVar1 = 0;
      pcVar7 = (code *)FUN_8c0811b4(ar4,auStack_9c,0,ar7);
      Vec3_dtor(auStack_9c,0xffffffff,uVar1,ar7);
    }
    FUN_8c031c74(ar4,auStack_30,*(undefined4 *)(uint)ar5[1],ar7);
    break;
  case 0xc:
    iVar2 = get_field_6c_028cc4(*ar5,pcVar3,puVar5,ar7);
    if (iVar2 == 0) {
      *(undefined4 *)(ar4 + 0x178) = 0;
      object_dtor_delete(auStack_3c,0xffffffff,puVar5,ar7);
      Vec3_dtor(auStack_30,0xffffffff,puVar5,ar7);
      return (code *)2;
    }
    FUN_8c0507a4(iVar2,auStack_30,&fStack_2c,&fStack_28);
    FUN_8c03f414(iVar2,auStack_3c,auStack_38,auStack_34);
    ar7_01 = &uStack_158;
    ar6_00 = &uStack_158;
    ar5_00 = &uStack_158;
    FUN_8c03f3f8(iVar2,ar5_00,ar6_00,ar7_01);
    if (*(int *)(ar4 + 0x128) == 1) {
      Vec3_ctor_xyz(auStack_ac,Vec3_ctor_xyz,ar6_00,ar7_01);
      puVar5 = auStack_b8;
      vec3_copy_8c02b5fc(puVar5,auStack_3c,puVar5,ar7_01);
      FUN_8c023484(auStack_ac,auStack_b8,puVar5,ar7_01,auStack_c8);
      pcVar3 = Vec3_scale;
      Vec3_scale(auStack_c8,&uStack_158,Vec3_scale,ar7_01,auStack_d8);
      ar7 = FUN_8c023aa0;
      FUN_8c023aa0(auStack_30,auStack_d8,pcVar3,FUN_8c023aa0);
      puVar5 = auStack_d8;
      Vec3_dtor(puVar5,0xffffffff,puVar5,ar7);
      Vec3_dtor(auStack_c8,0xffffffff,puVar5,ar7);
      pcVar3 = object_dtor_delete;
      object_dtor_delete(auStack_b8,0xffffffff,object_dtor_delete,ar7);
      Vec3_dtor(auStack_ac,0xffffffff,pcVar3,ar7);
    }
    else {
      if (*(int *)(ar4 + 0x128) != 2) {
        uVar1 = 0;
        *(undefined4 *)(ar4 + 0x178) = 0;
        object_dtor_delete(auStack_3c,0xffffffff,0,ar7_01);
        Vec3_dtor(auStack_30,0xffffffff,uVar1,ar7_01);
        return (code *)2;
      }
      puVar5 = auStack_e8;
      pcVar3 = Vec3_ctor_xyz;
      Vec3_ctor_xyz(puVar5,ar5_00,Vec3_ctor_xyz,puVar5);
      vec3_copy_8c02b5fc(auStack_f4,auStack_3c,pcVar3,puVar5);
      puVar5 = auStack_f4;
      FUN_8c023484(auStack_e8,puVar5,pcVar3,puVar5,auStack_104);
      Vec3_scale(auStack_104,&uStack_158,pcVar3,puVar5,auStack_114);
      FUN_8c023aa0(auStack_30,auStack_114,pcVar3,puVar5);
      Vec3_dtor(auStack_114,0xffffffff,pcVar3,puVar5);
      Vec3_dtor(auStack_104,0xffffffff,pcVar3,puVar5);
      object_dtor_delete(auStack_f4,0xffffffff,pcVar3,puVar5);
      ar7 = Vec3_dtor;
      Vec3_dtor(auStack_e8,0xffffffff,pcVar3,Vec3_dtor);
    }
    iVar2 = *(int *)(ar4 + 0x134);
    if (iVar2 == 0) {
      *(undefined4 *)(ar4 + 0x178) = 1;
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
    }
    else if (iVar2 != 1) {
      if (iVar2 == 2) {
        ar7 = (code *)*ar5;
        iVar2 = FUN_8c07cce0(ar4,*(undefined4 *)(uint)ar5[1],auStack_30,ar7);
        if (iVar2 == 0) {
          *(undefined4 *)(ar4 + 0x134) = 0;
          *(undefined4 *)(ar4 + 0x178) = 0;
          pcVar7 = (code *)0x0;
        }
      }
      break;
    }
    ar7 = (code *)(*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f138);
    puVar5 = auStack_30;
    uVar1 = *(undefined4 *)(uint)ar5[1];
    iVar2 = pure_virtual_stub(ar4,uVar1,puVar5,ar7);
    if (iVar2 == 0) {
      FUN_8c03f3e8(*ar5,uVar1,puVar5,ar7);
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
    }
    Vec3_assign(ar4 + 0x80,ar4 + 0x14,puVar5,ar7);
    break;
  case 0xd:
    *(undefined4 *)(ar4 + 0x214) = 0;
    ar7_00 = *(byte *)(ar4 + 0x1fc) & 0xfffffffb;
    *(char *)(ar4 + 0x1fc) = (char)ar7_00;
    if (*(int *)(ar4 + 0x128) == 1) {
      ar7 = (code *)0x0;
      uVar1 = 0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0);
      FUN_8c03f3ac(ar4 + 0xb0,0xb0,uVar1,ar7);
    }
    else {
      if (*(int *)(ar4 + 0x128) != 2) {
        uVar1 = 0xffffffff;
        object_dtor_delete(auStack_3c,0xffffffff,0xffffffff,ar7_00);
        Vec3_dtor(auStack_30,0xffffffff,uVar1,ar7_00);
        return (code *)2;
      }
      ar7 = (code *)0x0;
      uVar1 = 0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x16,0xffffffff,0);
      FUN_8c03f3ac(ar4 + 0xb0,ar4 + 0xb0,uVar1,ar7);
    }
    if (*(int *)(ar4 + 300) == 0) {
      iVar4 = ar4 + 0x48;
      iVar2 = ar4 + 0x48;
      FUN_8c032ab0(ar4,iVar2,iVar4,ar7);
      uVar1 = SUB84(dVar9,0);
      FUN_8c032ab0(ar4,iVar2,iVar4,ar7);
      if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(0x40000000,uVar1);
      }
      else {
        dVar9 = 5.52249404598712e-312;
      }
      iVar2 = ar4 + 0x48;
      Vec3_ctor_xyz(auStack_124,auStack_124,iVar2,ar7);
      Vec3_add(*(undefined4 *)(uint)ar5[1],auStack_124,iVar2,ar7,auStack_134);
      Vec3_assign(ar4 + 0x54,auStack_134,iVar2,ar7);
      Vec3_dtor(auStack_134,0xffffffff,iVar2,ar7);
      Vec3_dtor(auStack_124,0xffffffff,iVar2,ar7);
      ar7 = (code *)(uint)ar5[6];
      iVar2 = FUN_8c0329ac(ar4,ar4 + 0x54,ar5[3],ar7);
      if (iVar2 == 0) {
        *(undefined4 *)(ar4 + 300) = 2;
      }
      else {
        ar7 = (code *)0x12c;
        *(undefined4 *)(ar4 + 300) = 1;
        *(undefined4 *)(ar4 + 0x40) = 3;
      }
    }
    if (*(int *)(ar4 + 300) == 1) {
      pcVar3 = *(code **)ar5[1];
      iVar4 = ar4 + 0x54;
      ar7 = pcVar3;
      iVar2 = FUN_8c031764(ar4,iVar4,pcVar3,pcVar3);
      if (iVar2 == 0) {
        pcVar3 = (code *)0x12c;
        *(undefined4 *)(ar4 + 300) = 0;
      }
      FUN_8c032ab0(ar4,iVar4,pcVar3,ar7);
      if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),*(undefined4 *)(ar4 + 0x24));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x24);
      }
      if (cVar13 == '\0') {
        fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar9 * dVar9,0);
      }
      if (cVar14 == '\0') {
        *(float *)(ar4 + 0x28) = fVar8;
      }
      else {
        *(double *)(ar4 + 0x28) = in_xd0;
      }
    }
    else {
      FUN_8c031c74(ar4,auStack_30,*(undefined4 *)(uint)ar5[1],ar7);
    }
    break;
  case 0x14:
    if (*(int *)(ar4 + 0x21c) == 1) {
      iVar2 = *(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c;
      FUN_8c031b68(ar4,iVar2,puVar5,0x21c);
      if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(0x3f000000,*(undefined4 *)(ar4 + 0x38));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x38);
        dVar9 = 3.73993469111571e-312;
      }
      if (cVar13 == '\0') {
        fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar9 * dVar9,0);
      }
      if (cVar14 == '\0') {
        *(float *)(ar4 + 0x38) = fVar8;
      }
      else {
        *(double *)(ar4 + 0x38) = in_xd0;
      }
      ar7 = CAnimBody_AdvanceFrame_wrapper;
      iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar2,puVar5,CAnimBody_AdvanceFrame_wrapper)
      ;
      if (iVar2 == 1) {
        ar7 = (code *)0x0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      }
      uVar1 = *(undefined4 *)(uint)ar5[1];
      FUN_8c031c74(ar4,auStack_30,uVar1,ar7);
      if (*(int *)(ar4 + 0x40) == 0) {
        ar7 = (code *)0x8c280eb4;
        FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,uVar1,0x8c280eb4);
        *(undefined4 *)(ar4 + 300) = 0;
        *(undefined4 *)(ar4 + 0x2a0) = 2;
        pcVar7 = (code *)0x0;
      }
    }
    else {
      if (cVar14 == '\0') {
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),*(undefined4 *)(ar5[3] + 8));
        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),in_fr1);
      }
      else {
        in_xd12 = *(undefined8 *)(ar5[3] + 8);
        dVar9 = *(double *)(ar4 + 0x48);
      }
      if (cVar13 == '\0') {
        fStack_28 = SUB84(in_dr12,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fStack_28 = SUB84(in_dr12 - dVar9,0);
      }
      if (cVar14 != '\0') {
        fStack_28 = (float)in_xd12;
        uStack_24 = (undefined4)((ulonglong)in_xd12 >> 0x20);
      }
      iVar2 = *(int *)(uint)ar5[6];
      pcVar7 = *(code **)(iVar2 + 0x184);
      (*pcVar7)((int *)(uint)ar5[6],pcVar3,iVar2,pcVar7);
      if (cVar14 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)dVar9 >> 0x20)
                                  );
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),SUB84(dVar9,0));
        dVar9 = in_xd14;
      }
      else {
        dVar10 = *(double *)(ar4 + 0x48);
      }
      if (cVar13 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) - (float)((ulonglong)dVar10 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 - dVar10;
      }
      if (cVar14 == '\0') {
        dVar10 = (double)CONCAT44(fStack_2c,SUB84(dVar10,0));
      }
      else {
        dVar10 = (double)CONCAT44(fStack_28,fStack_2c);
      }
      if (cVar13 == '\0') {
        bVar12 = SUB84(in_dr14,0) < (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        bVar12 = in_dr14 < dVar10;
      }
      if ((bVar12) && (fStack_2c = SUB84(in_dr14,0), cVar14 != '\0')) {
        fStack_2c = SUB84(dVar9,0);
        fStack_28 = (float)((ulonglong)dVar9 >> 0x20);
      }
      (**(code **)(*(int *)(uint)ar5[6] + 0x128))((int *)(uint)ar5[6],auStack_30,iVar2,pcVar7);
      if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),SUB84(in_dr14,0));
      }
      else {
        dVar9 = *(double *)(ar4 + 0x48);
      }
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) +
                                 (float)((ulonglong)dVar10 >> 0x20),SUB84(dVar9,0));
      }
      else {
        dVar9 = dVar9 + dVar10;
      }
      if (cVar14 == '\0') {
        dVar10 = (double)CONCAT44(fStack_2c,SUB84(dVar10,0));
      }
      else {
        dVar10 = (double)CONCAT44(fStack_28,fStack_2c);
      }
      fVar8 = (float)((ulonglong)dVar9 >> 0x20);
      if (cVar13 == '\0') {
        bVar12 = (float)((ulonglong)dVar10 >> 0x20) < fVar8;
      }
      else {
        bVar12 = dVar10 < dVar9;
      }
      if ((bVar12) && (fStack_2c = fVar8, cVar14 != '\0')) {
        fStack_2c = SUB84(dVar9,0);
        fStack_28 = fVar8;
      }
      ar7 = (code *)(uint)ar5[3];
      pcVar7 = (code *)FUN_8c07baa0(ar4,*(undefined4 *)(uint)ar5[1],auStack_30,ar7);
    }
    break;
  case 0x15:
    Vec3_ctor_xyz((int)&uStack_158 + 4,pcVar3,puVar5,ar7);
    ar7 = (code *)(uint)ar5[3];
    iVar2 = (int)&uStack_158 + 4;
    pcVar7 = (code *)FUN_8c07b7d0(ar4,*(undefined4 *)(uint)ar5[1],iVar2,ar7,ar5[6]);
    Vec3_dtor((int)&uStack_158 + 4,0xffffffff,iVar2,ar7);
    break;
  case 0x16:
    ar7 = (code *)0x0;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
    FUN_8c031c74(ar4,auStack_30,*(undefined4 *)(uint)ar5[1],ar7);
    pcVar7 = (code *)0x0;
    break;
  case 0x19:
    *(undefined4 *)(ar4 + 0x214) = 0;
    iVar2 = *(int *)(ar4 + 300);
    if (iVar2 == 0) {
      ar7_02 = ar5[6];
      uVar1 = *(undefined4 *)(uint)ar5[1];
      uVar6 = 0x1e;
      FUN_8c033474(ar4,0x1e,uVar1,ar7_02);
      FUN_8c031748(ar4,uVar6,uVar1,ar7_02);
      ar7 = (code *)0x0;
      uVar6 = 0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
      uVar1 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,uVar6,ar7);
      *(undefined4 *)(ar4 + 0x220) = uVar1;
      if (*(int *)(ar4 + 0x220) == 3) {
        ar7 = s_CAnimBody_SetFrame_033e6e;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,uVar6,s_CAnimBody_SetFrame_033e6e);
      }
      else {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar6,ar7);
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
LAB_8c070b94:
      if (*(int *)(ar4 + 0x40) == 0) {
        ar7 = (code *)0x12c;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
    }
    else {
      if (iVar2 == 1) goto LAB_8c070b94;
      if (iVar2 == 2) {
        if (*(int *)(ar4 + 0x220) == 3) {
          ar7 = (code *)(ar4 + 0xb0);
          iVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar7,pcVar3,s_CAnimBody_AdvanceFrame_033ba0,ar7);
          if (iVar2 == 1) {
            *(undefined4 *)(ar4 + 0x214) = 1;
            pcVar7 = (code *)0x0;
            *(undefined4 *)(ar4 + 300) = 0;
          }
        }
        else {
          uVar1 = 0xb0;
          s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,puVar5,ar7);
          ar7 = CAnimBody_GetCurFrame;
          CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,puVar5,CAnimBody_GetCurFrame);
          if (cVar14 == '\0') {
            dVar9 = (double)((ulonglong)dVar9 >> 0x20);
          }
          if (cVar13 != '\0' || SUB84(dVar9,0) <= 0.0) {
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,puVar5,ar7);
            *(undefined4 *)(ar4 + 0x214) = 1;
            pcVar7 = (code *)0x0;
            *(undefined4 *)(ar4 + 300) = 0;
          }
        }
      }
    }
    FUN_8c031c74(ar4,auStack_30,*(undefined4 *)(uint)ar5[1],ar7);
    break;
  case 0x1a:
    FUN_8c031748(ar4,pcVar3,puVar5,ar7);
    ar7 = (code *)0x0;
    uVar6 = 0xffffffff;
    uVar1 = 8;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
    FUN_8c032ab0(ar4,uVar1,uVar6,ar7);
    s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0xb0,uVar6,ar7);
    FUN_8c031c74(ar4,auStack_30,*(undefined4 *)(uint)ar5[1],ar7);
    break;
  case 0x1b:
    uVar1 = *(undefined4 *)(uint)ar5[1];
    FUN_8c031c74(ar4,auStack_30,uVar1,ar7);
    pcVar7 = (code *)FUN_8c07d904(ar4,*ar5,uVar1,ar7);
    break;
  case 0x1c:
    pcVar7 = (code *)FUN_8c031de8(ar4,0x10,puVar5,ar7);
    break;
  case 0x1e:
    uVar1 = *(undefined4 *)(uint)ar5[1];
    FUN_8c031c74(ar4,auStack_30,uVar1,ar7);
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar4 + 0xb0,uVar1,ar7);
    if (iVar2 == 1) {
      pcVar7 = (code *)0x0;
    }
    break;
  case 0x1f:
    ar7 = (code *)(uint)ar5[6];
    pcVar7 = (code *)FUN_8c07f56c(ar4,*(undefined4 *)(uint)ar5[1],auStack_30,ar7,ar5[3]);
  }
override_jmp_8c06fb96_case_5:
  uVar1 = 0x124;
  if (*(int *)(ar4 + 0x124) != 0xc) {
    Vec3_assign(ar4 + 0x80,ar4 + 0x14,0x124,ar7);
  }
  object_dtor_delete(auStack_3c,0xffffffff,uVar1,ar7);
  Vec3_dtor(auStack_30,0xffffffff,uVar1,ar7);
  return pcVar7;
}

__asm__(".globl _FUN_8c06f93c\n.set _FUN_8c06f93c, _FUN_8c06f93c_def\n");
