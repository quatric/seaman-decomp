#include "../decls.h"
undefined4 FUN_8c074d1c_def(int ar4,undefined4 ar5,undefined4 ar6,float *ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *ar5_00;
  undefined4 ar6_00;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  double in_dr0;
  double dVar8;
  code *pcVar9;
  undefined8 in_dr4;
  undefined4 ain0;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  double in_xd14;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 auStack_2c [5];
  
  cVar12 = '\0';
  cVar11 = '\0';
  ain0 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  ar6_00 = 1;
  uVar4 = 1;
  iVar5 = -1;
  uVar1 = ar5;
  Vec3_sub(ar6,ar5,1,ar7,auStack_54);
  uVar1 = Vec3_length(auStack_54,uVar1,ar6_00,ar7);
  Vec3_ctor_copy(auStack_2c,uVar1,ar6_00,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
  FUN_8c0230f0(ar4 + 0x14,uVar1,ar6_00,ar7,auStack_64);
  FUN_8c0230f0(auStack_2c,uVar1,ar6_00,ar7,auStack_74);
  FUN_8c022dac(auStack_64,auStack_74,ar6_00,ar7);
  dVar8 = in_dr0;
  if (cVar12 == '\0') {
    in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
    dVar8 = in_xd14;
  }
  Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
  ar5_00 = (undefined4 *)0xffffffff;
  Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
  Vec3_set_zero(&uStack_38,ar5_00,ar6_00,ar7);
  Vec3_set_zero(&fStack_44,ar5_00,ar6_00,ar7);
  iVar3 = *(int *)(ar4 + 0x40);
  if ((5 < iVar3) || (iVar3 < 0)) goto switchD_8c074e10_caseD_2;
                    
  switch(iVar3) {
  case 0:
    FUN_8c073c9c(ar4,ar5_00,ar6_00,ar7);
    uVar6 = SUB84(in_dr0,0);
    uVar1 = ar5;
    ar6_00 = ar6;
    FUN_8c031bb4(ar4,ar5,ar6,ar7);
    FUN_8c02a1fc(ar4 + 0x254,uVar1,ar6_00,ar7);
    if (cVar12 == '\0') {
      in_dr0 = (double)CONCAT44(0x42340000,uVar6);
    }
    else {
      in_dr0 = 4.41923885273116e-312;
    }
    if (cVar11 == '\0') {
      bVar10 = in_fr15 < (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      bVar10 = (double)CONCAT44(in_fr14,in_fr15) < in_dr0;
    }
    if (bVar10) {
      ar5_00 = (undefined4 *)0x0;
      *(undefined4 *)(ar4 + 0x220) = 0;
    }
    else {
      ar5_00 = auStack_2c;
      uVar1 = FUN_8c023334(ar4 + 0x14,ar5_00,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0x220) = uVar1;
    }
    iVar3 = *(int *)(ar4 + 0x220);
    if (iVar3 == 0) {
      if (cVar12 == '\0') {
        in_dr0 = (double)CONCAT44(0x40be6666,*(undefined4 *)(ar4 + 0x24));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x24);
        in_dr0 = 5.3666392554967e-315;
      }
      if (cVar11 == '\0' && SUB84(in_dr0,0) < (float)((ulonglong)in_dr0 >> 0x20)) {
        iVar5 = rand_range(ar4,0,100,ar7);
        if (iVar5 < 0x1f) {
          ar7 = (float *)0x0;
          ar6_00 = 0xffffffff;
          ar5_00 = (undefined4 *)0x1;
          iVar5 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0);
        }
        else {
          ar7 = (float *)0x0;
          ar6_00 = 0xffffffff;
          ar5_00 = (undefined4 *)0xd;
          iVar5 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xd,0xffffffff,0);
        }
      }
      else {
        ar7 = (float *)0x0;
        ar6_00 = 0xffffffff;
        ar5_00 = (undefined4 *)0x4;
        iVar5 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0xffffffff,0);
      }
    }
    else if (iVar3 == 3) {
      ar7 = (float *)0x0;
      ar6_00 = 0xffffffff;
      uVar1 = 9;
      iVar5 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0);
      ar5_00 = (undefined4 *)FUN_8c026db0(ar4,uVar1,ar6_00,ar7);
      uVar1 = FUN_8c03c0f0(ar4 + 0xb0,ar5_00,ar6_00,ar7);
      puVar2 = (undefined4 *)deref_u32(uVar1,ar5_00,ar6_00,ar7);
      uVar1 = puVar2[1];
      *(undefined4 *)(ar4 + 0xb4) = *puVar2;
      *(undefined4 *)(ar4 + 0xb8) = uVar1;
      *(undefined4 *)(ar4 + 0xbc) = puVar2[2];
      *(undefined **)(ar4 + 0xb4) = &DAT_8c1376d8 + (*(int *)(ar4 + 0x128) + -6) * 0x18;
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(in_fr15,0x42700000);
      }
      else {
        in_xd0 = 0x8c033e6842700000;
      }
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) / SUB84(dVar8,0),SUB84(dVar8,0))
        ;
      }
      else {
        in_dr0 = dVar8 / dVar8;
      }
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x240) = in_dr0;
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    }
    else if (iVar3 == 4) {
      ar7 = (float *)0x0;
      ar6_00 = 0xffffffff;
      uVar1 = 10;
      iVar5 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0);
      ar5_00 = (undefined4 *)FUN_8c026db0(ar4,uVar1,ar6_00,ar7);
      uVar1 = FUN_8c03c0f0(ar4 + 0xb0,ar5_00,ar6_00,ar7);
      puVar2 = (undefined4 *)deref_u32(uVar1,ar5_00,ar6_00,ar7);
      uVar1 = puVar2[1];
      *(undefined4 *)(ar4 + 0xb4) = *puVar2;
      *(undefined4 *)(ar4 + 0xb8) = uVar1;
      *(undefined4 *)(ar4 + 0xbc) = puVar2[2];
      *(undefined **)(ar4 + 0xb4) = &DAT_8c137708 + (*(int *)(ar4 + 0x128) + -6) * 0x18;
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(in_fr15,0x42700000);
      }
      else {
        in_xd0 = 0x8c033e6842700000;
      }
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) / SUB84(dVar8,0),SUB84(dVar8,0))
        ;
      }
      else {
        in_dr0 = dVar8 / dVar8;
      }
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x240) = in_dr0;
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    }
    if (iVar5 != 6) {
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    }
  case 1:
    uVar1 = FUN_8c026db0(ar4,ar5_00,ar6_00,ar7);
    switch(uVar1) {
    case 1:
    case 4:
    case 0xd:
      *(undefined4 *)(ar4 + 0x40) = 3;
switchD_8c074e10_caseD_3:
      fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
      uVar4 = FUN_8c031764(ar4,ar6,ar5,ar7);
      iVar5 = FUN_8c026db0(ar4,ar6,ar5,ar7);
      ar6_00 = ar5;
      if ((iVar5 < 0xe) && (-1 < iVar5)) {
                    
        switch(iVar5) {
        case 0:
          CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7);
          FUN_8c031e84(ar4,ar6,ar5,ar7);
          ar6_00 = 100;
          iVar5 = rand_range(ar4,0,100,ar7);
          if (iVar5 < 5) {
            *(undefined4 *)(ar4 + 0x40) = 5;
          }
          break;
        case 1:
          CAnimBody_GetCurFrame(ar4 + 0xb0,ar6,ar5,ar7,ain0);
          if (cVar12 == '\0') {
            pcVar9 = (code *)0x41880000;
          }
          else {
            fVar7 = 17.0;
            pcVar9 = CAnimBody_AdvanceFrame_wrapper;
          }
          if (cVar11 != '\0' || (float)(uint)pcVar9 <= fVar7) {
            FUN_8c034148(ar4 + 0xb0,0,ar5,ar7);
            FUN_8c031e84(ar4,&DAT_8c125ef8,ar5,ar7);
            ar6_00 = ar5;
          }
          else {
            CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar4 + 0xb0,ar5,ar7);
            ar6_00 = ar5;
          }
          break;
        case 2:
        case 3:
        case 9:
        case 10:
          FUN_8c034148(ar4 + 0xb0,0,ar5,ar7);
          ar6_00 = ar5;
          break;
        case 4:
          FUN_8c03f3ac(ar4 + 0xb0,ar6,ar5,ar7);
          ar6_00 = ar5;
          break;
        case 0xd:
          FUN_8c032ab0(ar4,ar6,ar5,ar7);
          s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar6,ar5,ar7);
          ar6_00 = ar5;
        }
      }
      break;
    case 2:
    case 3:
    case 9:
    case 10:
      CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6_00,ar7,ain0);
      FUN_8c034574(ar4 + 0xb0,*(undefined4 *)(*(int *)(ar4 + 0xb4) + 4),ar6_00,ar7);
      vec3_copy_8c023d8c(&uStack_38,auStack_80,ar6_00,ar7);
      object_dtor_delete(auStack_80,0xffffffff,ar6_00,ar7);
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x254),uStack_38);
      }
      else {
        in_xd0 = CONCAT44(uStack_34,uStack_38);
        dVar8 = *(double *)(ar4 + 0x254);
      }
      if (cVar11 == '\0') {
        fVar7 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar8 - dVar8,0);
      }
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x240),fVar7);
      }
      else {
        dVar8 = *(double *)(ar4 + 0x240);
      }
      if (cVar11 == '\0') {
        fStack_44 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fStack_44 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 600),uStack_34);
      }
      else {
        fStack_44 = (float)in_xd0;
        in_xd0 = CONCAT44(uStack_30,uStack_34);
        dVar8 = *(double *)(ar4 + 600);
      }
      if (cVar11 == '\0') {
        fVar7 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar8 - dVar8,0);
      }
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x240),fVar7);
      }
      else {
        dVar8 = *(double *)(ar4 + 0x240);
      }
      if (cVar11 == '\0') {
        fStack_40 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fStack_40 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x25c),uStack_30);
      }
      else {
        fStack_40 = (float)in_xd0;
        in_xd0 = CONCAT44(auStack_2c[0],uStack_30);
        dVar8 = *(double *)(ar4 + 0x25c);
      }
      if (cVar11 == '\0') {
        fVar7 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar8 - dVar8,0);
      }
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x240),fVar7);
      }
      else {
        dVar8 = *(double *)(ar4 + 0x240);
      }
      if (cVar11 == '\0') {
        fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar8 * dVar8,0);
      }
      fStack_3c = fVar7;
      if (cVar12 != '\0') {
        fStack_3c = (float)in_xd0;
        uStack_38 = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      vec3_copy_8c023d8c(ar4 + 0x254,&uStack_38,ar6_00,ar7);
      ar7 = &fStack_44;
      uVar4 = FUN_8c07c318(ar4,ar6,ar5,ar7);
      iVar5 = FUN_8c034148(ar4 + 0xb0,0,ar5,ar7);
      ar6_00 = ar5;
      if (0 < iVar5) {
        if (cVar12 == '\0') {
          dVar8 = (double)CONCAT44(0x42340000,fVar7);
        }
        else {
          dVar8 = -2.1831133518023486e+159;
        }
        if (cVar11 == '\0') {
          bVar10 = in_fr15 < (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          bVar10 = (double)CONCAT44(in_fr14,in_fr15) < dVar8;
        }
        if (bVar10) {
          *(undefined4 *)(ar4 + 0x40) = 3;
        }
        else {
          *(undefined4 *)(ar4 + 0x40) = 5;
        }
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(dVar8,0));
        }
      }
    }
    break;
  case 3:
    goto switchD_8c074e10_caseD_3;
  case 4:
    iVar5 = get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    if (iVar5 == 0) {
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,CAnimBody_AdvanceFrame_wrapper,ar6_00,ar7);
    }
    else {
      FUN_8c034148(ar4 + 0xb0,0,ar6_00,ar7);
    }
    uVar4 = FUN_8c031764(ar4,ar6,ar5,ar7);
    ar6_00 = ar5;
  }
switchD_8c074e10_caseD_2:
  object_dtor_delete(&fStack_44,0xffffffff,ar6_00,ar7);
  object_dtor_delete(&uStack_38,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_2c,0xffffffff,auStack_2c,0xffffffff);
  return uVar4;
}

__asm__(".globl _FUN_8c074d1c\n.set _FUN_8c074d1c, _FUN_8c074d1c_def\n");
