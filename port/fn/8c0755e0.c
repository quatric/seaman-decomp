#include "../decls.h"
undefined4 FUN_8c0755e0_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int ar5_00;
  undefined4 *puVar5;
  undefined4 *ar6_00;
  undefined4 ain0;
  undefined4 uVar6;
  float fVar7;
  ulonglong in_dr0;
  double dVar8;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [12];
  undefined1 auStack_bc [12];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [4];
  undefined8 uStack_4c;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [5];
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar6 = 1;
  puVar5 = ar5;
  ar6_00 = ar6;
  ain0 = ar7;
  Vec3_sub(ar6,ar5,ar6,ar7,auStack_60);
  uVar2 = Vec3_length(auStack_60,puVar5,ar6_00,ar7);
  Vec3_ctor_copy(auStack_28,uVar2,ar6_00,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_60,0xffffffff,ar6_00,ar7);
  FUN_8c0230f0(ar4 + 0x14,uVar2,ar6_00,ar7,auStack_70);
  FUN_8c0230f0(auStack_28,uVar2,ar6_00,ar7,auStack_80);
  FUN_8c022dac(auStack_70,auStack_80,ar6_00,ar7);
  if (cVar11 == '\0') {
    in_fr15 = (float)(in_dr0 >> 0x20);
  }
  Vec3_dtor(auStack_80,0xffffffff,ar6_00,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_70,0xffffffff,ar6_00,ar7);
  Vec3_ctor_zero(auStack_38,uVar2,ar6_00,ar7);
  Vec3_set_zero(auStack_44,uVar2,ar6_00,ar7);
  Vec3_set_zero(auStack_50,uVar2,ar6_00,ar7);
  uVar2 = (undefined4)in_dr0;
  iVar4 = *(int *)(ar4 + 0x40);
  if ((5 < iVar4) || (iVar4 < 0)) goto switchD_8c0756cc_caseD_2;
  ar5_00 = iVar4 * 4;
                    
  switch(iVar4) {
  case 0:
    FUN_8c031748(ar4,ar5_00,ar6_00,ar7);
    FUN_8c031700(ar4,ar5_00,ar6_00,ar7);
    puVar5 = ar5;
    ar6_00 = ar6;
    FUN_8c031bb4(ar4,ar5,ar6,ar7);
    if (cVar11 == '\0') {
      dVar8 = (double)CONCAT44(0x42340000,uVar2);
    }
    else {
      dVar8 = 6.37147498041921e-312;
    }
    if (cVar10 == '\0') {
      bVar9 = in_fr15 < (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      bVar9 = (double)CONCAT44(in_fr14,in_fr15) < dVar8;
    }
    if (bVar9) {
      *(undefined4 *)(ar4 + 0x220) = 0;
    }
    else {
      puVar5 = auStack_28;
      uVar2 = FUN_8c023334(ar4 + 0x14,puVar5,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0x220) = uVar2;
    }
    iVar4 = *(int *)(ar4 + 0x220);
    if (iVar4 == 0) {
      *(undefined4 *)(ar4 + 0x29c) = 0x14;
      puVar5 = *(undefined4 **)(ar4 + 0x29c);
      ar6_00 = (undefined4 *)0xb0;
      uVar2 = FUN_8c03c0f0(ar4 + 0xb0,puVar5,0xb0,ar7);
      puVar3 = (undefined4 *)deref_u32(uVar2,puVar5,ar6_00,ar7);
      uVar2 = puVar3[1];
      *(undefined4 *)(ar4 + 0xb4) = *puVar3;
      *(undefined4 *)(ar4 + 0xb8) = uVar2;
      *(undefined4 *)(ar4 + 0xbc) = puVar3[2];
      *(undefined **)(ar4 + 0xb4) = &DAT_8c137828 + (*(int *)(ar4 + 0x128) + -6) * 0x18;
    }
    else if (iVar4 == 3) {
      *(undefined4 *)(ar4 + 0x29c) = 0x19;
      uVar2 = FUN_8c03c0f0(ar4 + 0xb0,*(undefined4 *)(ar4 + 0x29c),ar6_00,ar7);
      puVar3 = (undefined4 *)deref_u32(uVar2,deref_u32,ar6_00,ar7);
      puVar5 = (undefined4 *)(ar4 + 0xb4);
      uVar2 = puVar3[1];
      *puVar5 = *puVar3;
      *(undefined4 *)(ar4 + 0xb8) = uVar2;
      *(undefined4 *)(ar4 + 0xbc) = puVar3[2];
      *(undefined **)(ar4 + 0xb4) = &DAT_8c137738 + (*(int *)(ar4 + 0x128) + -6) * 0x18;
    }
    else if (iVar4 == 4) {
      *(undefined4 *)(ar4 + 0x29c) = 0x1a;
      puVar5 = *(undefined4 **)(ar4 + 0x29c);
      uVar2 = FUN_8c03c0f0(ar4 + 0xb0,puVar5,ar6_00,ar7);
      puVar3 = (undefined4 *)deref_u32(uVar2,puVar5,ar6_00,ar7);
      uVar2 = puVar3[1];
      *(undefined4 *)(ar4 + 0xb4) = *puVar3;
      *(undefined4 *)(ar4 + 0xb8) = uVar2;
      *(undefined4 *)(ar4 + 0xbc) = puVar3[2];
      *(undefined **)(ar4 + 0xb4) = &DAT_8c137768 + (*(int *)(ar4 + 0x128) + -6) * 0x18;
    }
    vec3_clear(ar4 + 0x244,puVar5,ar6_00,ar7);
    FUN_8c02a1fc(ar4 + 0x254,puVar5,ar6_00,ar7);
  case 1:
    ar5_00 = *(int *)(ar4 + 0x29c);
    iVar4 = FUN_8c034148(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    if (iVar4 == 0) {
      if (cVar11 == '\0') {
        dVar8 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar8 = 1.0035749846001845e+178;
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar11 == '\0') {
        *(float *)(ar4 + 0x28) = fVar7;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
    }
    else if (iVar4 == 1) {
      *(undefined4 *)(ar4 + 0x40) = 3;
    }
    else if (iVar4 == 2) {
      *(undefined4 *)(ar4 + 0x40) = 3;
switchD_8c0756cc_caseD_3:
      iVar4 = get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6_00,ar7);
      if (iVar4 == 0x14) {
        iVar4 = FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6_00,ar7);
        if (iVar4 == 7) {
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0x24c) = 0x41e00000;
          }
          else {
            *(undefined8 *)(ar4 + 0x24c) = 0xc441e00000;
          }
        }
        FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6_00,ar7,auStack_90);
        Vec3_assign(ar4 + 0x14,auStack_90,ar6_00,ar7);
        Vec3_dtor(auStack_90,0xffffffff,ar6_00,ar7);
        FUN_8c031764(ar4,ar6,ar5,ar7);
        CAnimBody_GetCurFrame(ar4 + 0xb0,ar6,ar5,ar7,ain0);
        FUN_8c034384(ar4 + 0xb0,**(undefined4 **)(ar4 + 0xb4),ar5,ar7);
        Vec3_assign(auStack_38,auStack_a0,ar5,ar7);
        Vec3_dtor(auStack_a0,0xffffffff,ar5,ar7);
        if (cVar11 == '\0') {
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24c),uStack_30);
        }
        else {
          in_xd0 = CONCAT44(uStack_2c,uStack_30);
          dVar8 = *(double *)(ar4 + 0x24c);
        }
        if (cVar10 == '\0') {
          fVar7 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar8 - dVar8,0);
        }
        if (cVar11 == '\0') {
          *(float *)(ar4 + 0x28) = fVar7;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
        }
        Vec3_assign(ar4 + 0x244,auStack_38,ar5,ar7);
        ar6_00 = ar5;
      }
      else if ((iVar4 == 0x19) || (iVar4 == 0x1a)) {
        FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6_00,ar7,auStack_b0);
        Vec3_assign(ar4 + 0x14,auStack_b0,ar6_00,ar7);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_b0,0xffffffff,ar6_00,ar7);
        CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6_00,ar7,ain0);
        FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(*(int *)(ar4 + 0xb4) + 4),ar6_00,ar7);
        vec3_copy_8c023d8c(auStack_44,auStack_bc,ar6_00,ar7);
        object_dtor_delete(auStack_bc,0xffffffff,ar6_00,ar7);
        if (cVar11 == '\0') {
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 600),uStack_40);
        }
        else {
          in_xd0 = CONCAT44(uStack_3c,uStack_40);
          dVar8 = *(double *)(ar4 + 600);
        }
        if (cVar10 == '\0') {
          fVar7 = (float)((ulonglong)dVar8 >> 0x20);
          dVar8 = (double)CONCAT44(fVar7,SUB84(dVar8,0) - fVar7);
        }
        else {
          dVar8 = dVar8 - dVar8;
        }
        uVar1 = in_xd0;
        if (cVar11 == '\0') {
          uStack_4c = CONCAT44((*(uint*)((uchar*)&uStack_4c+4)),SUB84(dVar8,0));
          uVar1 = uStack_4c;
        }
        uStack_4c = uVar1;
        vec3_copy_8c023d8c(ar4 + 0x254,auStack_50,ar6_00,ar7);
        vec3_copy_8c02b5fc(auStack_c8,auStack_50,ar6_00,ar7);
        FUN_8c023484(ar4 + 0x14,auStack_c8,ar6_00,ar7,auStack_d8);
        Vec3_assign(ar4 + 0x14,auStack_d8,ar6_00,ar7);
        Vec3_dtor(auStack_d8,0xffffffff,ar6_00,ar7);
        object_dtor_delete(auStack_c8,0xffffffff,ar6_00,ar7);
        iVar4 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,ar6_00,ar7);
        if (iVar4 == 1) {
          FUN_8c022fc0(ar5,ar6,ar6_00,ar7);
          if (cVar11 == '\0') {
            dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),(int)((ulonglong)dVar8 >> 0x20));
          }
          else {
            dVar8 = *(double *)(ar4 + 0x48);
          }
          if (cVar10 == '\0' && (float)((ulonglong)dVar8 >> 0x20) < SUB84(dVar8,0)) {
            *(undefined4 *)(ar4 + 0x40) = 5;
          }
          else {
            *(undefined4 *)(ar4 + 0x40) = 0;
            uVar6 = 0;
          }
        }
        CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,ar6_00,ar7,ain0);
        if (cVar10 == '\0') {
          iVar4 = (int)(float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          iVar4 = (int)dVar8;
        }
        if (iVar4 == 0x10) {
          FUN_8c033474(ar4,0x1c,ar5,ain0);
          ar6_00 = ar5;
          ar7 = ain0;
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
    }
    break;
  case 3:
    goto switchD_8c0756cc_caseD_3;
  case 4:
    iVar4 = get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    if (((iVar4 != 0x14) && (iVar4 != 0x19)) && (iVar4 != 0x1a)) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      object_dtor_delete(auStack_50,0xffffffff,ar6_00,ar7);
      object_dtor_delete(auStack_44,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
      return 1;
    }
    FUN_8c031764(ar4,ar6,ar5,ar7);
    iVar4 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7);
    if (iVar4 == 1) {
      if (cVar11 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
      }
      ar7 = 0;
      ar6_00 = (undefined4 *)0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0);
      *(undefined4 *)(ar4 + 0x40) = 0;
      uVar6 = 0;
    }
    else {
      CAnimBody_GetCurFrame(ar4 + 0xb0,ar6,ar5,ar7,ain0);
      FUN_8c034384(ar4 + 0xb0,**(undefined4 **)(ar4 + 0xb4),ar5,ar7);
      Vec3_assign(auStack_38,auStack_e8,ar5,ar7);
      Vec3_dtor(auStack_e8,0xffffffff,ar5,ar7);
      if (cVar11 == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24c),uStack_30);
      }
      else {
        in_xd0 = CONCAT44(uStack_2c,uStack_30);
        dVar8 = *(double *)(ar4 + 0x24c);
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar8 - dVar8,0);
      }
      if (cVar11 == '\0') {
        *(float *)(ar4 + 0x28) = fVar7;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      Vec3_assign(ar4 + 0x244,auStack_38,ar5,ar7);
      *(undefined4 *)(ar4 + 0x40) = 4;
      ar6_00 = ar5;
    }
  }
switchD_8c0756cc_caseD_2:
  object_dtor_delete(auStack_50,0xffffffff,ar6_00,ar7);
  object_dtor_delete(auStack_44,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
  return uVar6;
}

__asm__(".globl _FUN_8c0755e0\n.set _FUN_8c0755e0, _FUN_8c0755e0_def\n");
