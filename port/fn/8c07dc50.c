#include "../decls.h"
undefined4 FUN_8c07dc50_def(code *ar4,code *ar5,code *ar6,undefined4 ar7)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  undefined *ar5_00;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 ar7_00;
  undefined4 uVar7;
  float fVar8;
  ulonglong in_dr0;
  double dVar9;
  ulonglong in_xd0;
  char cVar10;
  char cVar11;
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [4];
  ulonglong uStack_20;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar7 = 1;
  iVar3 = *(int *)(ar4 + 300);
  if ((6 < iVar3) || (iVar3 < 0)) goto switchD_8c07dc84_default;
  pcVar5 = ar5;
                    
  switch(iVar3) {
  case 0:
    uVar6 = 0x13;
    iVar3 = FUN_8c034148(ar4 + 0xb0,0x13,ar6,ar7);
    if (iVar3 != 0) {
      if (iVar3 != 1) {
        if (iVar3 != 2) goto LAB_8c07dcfc;
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar6,ar6,ar7);
      }
      uVar6 = 300;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      ar6 = ar4;
    }
LAB_8c07dcfc:
    FUN_8c031748(ar4,uVar6,ar6,ar7);
    FUN_8c031700(ar4,uVar6,ar6,ar7);
    break;
  case 1:
    FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_34);
    FUN_8c022dac(auStack_34,&DAT_8c125e68,ar6,ar7);
    if (cVar11 == '\0') {
      uVar2 = CONCAT44(0x42340000,(int)(in_dr0 >> 0x20));
    }
    else {
      uVar2 = 0x8c022cb042340000;
      in_xd0 = in_dr0;
    }
    in_dr0 = uVar2;
    bVar1 = cVar10 == '\0';
    fVar8 = (float)in_dr0;
    uVar2 = in_dr0 >> 0x20;
    pcVar4 = (code *)0xffffffff;
    pcVar5 = ar5;
    Vec3_dtor(auStack_34,0xffffffff,ar6,ar7);
    if (bVar1 && (float)uVar2 < fVar8) {
      ar5_00 = &DAT_8c125e68;
      uVar6 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,ar6,ar7);
      *(undefined4 *)(ar4 + 0x260) = uVar6;
      FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6,ar7,auStack_44);
      FUN_8c022dac(auStack_44,&DAT_8c125e68,ar6,ar7);
      if (cVar11 == '\0') {
        uVar2 = CONCAT44(0x42aa0000,(int)(in_dr0 >> 0x20));
      }
      else {
        uVar2 = 0xbf80000042aa0000;
        in_xd0 = in_dr0;
      }
      in_dr0 = uVar2;
      bVar1 = cVar10 != '\0';
      fVar8 = (float)in_dr0;
      uVar2 = in_dr0 >> 0x20;
      Vec3_dtor(auStack_44,0xffffffff,ar6,ar7);
      if (bVar1 || (float)uVar2 <= fVar8) {
        if (*(int *)(ar4 + 0x260) == 3) {
          FUN_8c07f1e4(ar4,0x19,&DAT_8c137738 + (*(int *)(ar4 + 0x128) + -6) * 0x18,ar7);
        }
        else {
          FUN_8c07f1e4(ar4,0x1a,&DAT_8c137768 + (*(int *)(ar4 + 0x128) + -6) * 0x18,ar7);
        }
        ar7 = 0;
        ar6 = (code *)0xffffffff;
        ar5 = (code *)(*(int *)(ar4 + 0x260) + 0x16);
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7);
      }
      else {
        ar7 = 0;
        iVar3 = *(int *)(ar4 + 0x260) + 0x18;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar3,0xffffffff,0);
        ar6 = s_CAnimBody_SetFrame_033e6e;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar3,s_CAnimBody_SetFrame_033e6e,ar7);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        ar5 = ar4;
      }
    }
    else {
      *(undefined4 *)(ar4 + 0x260) = 0;
      ar5 = pcVar4;
    }
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  case 2:
    fVar8 = (float)(in_dr0 >> 0x20);
    iVar3 = *(int *)(ar4 + 0x260);
    if (iVar3 == 0) {
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
      if (*(int *)(ar4 + 0x40) == 0) {
        FUN_8c03c314(ar4,ar5,ar6,ar7);
        *(undefined4 *)(ar4 + 300) = 0;
        uVar7 = 0;
      }
    }
    else if ((iVar3 == 3) || (iVar3 == 4)) {
      iVar3 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
      if (iVar3 == 1) {
        FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_54);
        FUN_8c022dac(auStack_54,&DAT_8c125e68,ar6,ar7);
        if (cVar11 == '\0') {
          pcVar5 = (code *)0x42aa0000;
        }
        else {
          fVar8 = 85.0;
          pcVar5 = Vec3_dtor;
        }
        Vec3_dtor(auStack_54,0xffffffff,ar6,ar7);
        if (cVar10 == '\0' && fVar8 < (float)(uint)pcVar5) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
      }
      else {
        Vec3_set_zero(auStack_18,ar5,ar6,ar7);
        Vec3_set_zero(auStack_24,ar5,ar6,ar7);
        FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_64);
        Vec3_assign(ar4 + 0x14,auStack_64,ar6,ar7);
        uVar6 = 0xffffffff;
        Vec3_dtor(auStack_64,0xffffffff,ar6,ar7);
        CAnimBody_GetCurFrame(ar4 + 0xb0,uVar6,ar6,ar7,pcVar5);
        FUN_8c034574(ar4 + 0xb0,*(undefined4 *)(*(int *)(ar4 + 0xb4) + 4),ar6,ar7);
        vec3_copy_8c023d8c(auStack_18,auStack_70,ar6,ar7);
        object_dtor_delete(auStack_70,0xffffffff,ar6,ar7);
        if (cVar11 == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 600),uStack_14);
        }
        else {
          in_xd0 = CONCAT44(uStack_10,uStack_14);
          dVar9 = *(double *)(ar4 + 600);
        }
        if (cVar10 == '\0') {
          fVar8 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 - dVar9,0);
        }
        uVar2 = in_xd0;
        if (cVar11 == '\0') {
          uStack_20 = CONCAT44((*(uint*)((uchar*)&uStack_20+4)),fVar8);
          uVar2 = uStack_20;
        }
        uStack_20 = uVar2;
        vec3_copy_8c023d8c(ar4 + 0x254,auStack_24,ar6,ar7);
        vec3_copy_8c02b5fc(auStack_7c,auStack_24,ar6,ar7);
        FUN_8c023484(ar4 + 0x14,auStack_7c,ar6,ar7,auStack_8c);
        Vec3_assign(ar4 + 0x14,auStack_8c,ar6,ar7);
        Vec3_dtor(auStack_8c,0xffffffff,ar6,ar7);
        object_dtor_delete(auStack_7c,0xffffffff,ar6,ar7);
        object_dtor_delete(auStack_24,0xffffffff,ar6,ar7);
        object_dtor_delete(auStack_18,0xffffffff,ar6,ar7);
      }
    }
    break;
  case 3:
    FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_9c);
    fVar8 = (float)(in_dr0 >> 0x20);
    FUN_8c022dac(auStack_9c,&DAT_8c125e68,ar6,ar7);
    if (cVar11 == '\0') {
      pcVar5 = (code *)0x42340000;
    }
    else {
      fVar8 = 45.0;
      pcVar5 = Vec3_dtor;
    }
    Vec3_dtor(auStack_9c,0xffffffff,ar6,ar7);
    if (cVar10 != '\0' || fVar8 <= (float)(uint)pcVar5) {
      iVar3 = FUN_8c034148(ar4 + 0xb0,0x13,ar6,ar7);
      if (iVar3 != 0) {
        *(undefined4 *)(ar4 + 0x294) = 0;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
    }
    else {
      iVar3 = FUN_8c034148(ar4 + 0xb0,*(int *)(ar4 + 0x260) + 0x18,ar6,ar7);
      if (iVar3 != 0) {
        *(undefined4 *)(ar4 + 0x294) = 0;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
    }
    break;
  case 4:
    *(undefined4 *)(ar4 + 0x2a4) = 1;
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
    iVar3 = *(int *)(ar4 + 0x294);
    *(int *)(ar4 + 0x294) = iVar3 + 1;
    if (iVar3 + 1 < 0x12d) {
      if (*(int *)(ar4 + 0x2a8) == 0) {
        *(undefined4 *)(ar4 + 300) = 0;
        uVar7 = 0;
      }
    }
    else {
      FUN_8c03f39c(ar5,iVar3,FUN_8c03f39c,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
    break;
  case 5:
    iVar3 = FUN_8c026db0(ar4,ar5,ar6,ar7);
    if (iVar3 == 0x12) {
      iVar3 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,ar6,ar7);
      if (iVar3 == 1) {
        s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x12,ar6,ar7);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,s_CAnimBody_SetFrame_033e6e,ar6,ar7);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
    }
    else {
      FUN_8c034148(ar4 + 0xb0,0x12,ar4 + 0xb0,0xb0);
    }
    break;
  case 6:
    pcVar5 = ar4 + 0xb0;
    s_CAnimBody_AdvanceFrame_033ba0(pcVar5,pcVar5,ar6,ar7);
    CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar5,ar6,ar7,ar5);
    if (cVar11 == '\0') {
      in_dr0 = in_dr0 >> 0x20;
    }
    if (cVar10 != '\0' || (float)in_dr0 <= 0.0) {
      ar7_00 = 0;
      uVar6 = 0xffffffff;
      uVar7 = 0x13;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,uVar6,ar7_00);
      *(undefined4 *)(ar4 + 300) = 0;
      uVar7 = 0;
    }
  }
switchD_8c07dc84_default:
  *(undefined4 *)(ar4 + 0x2a8) = 0;
  return uVar7;
}

__asm__(".globl _FUN_8c07dc50\n.set _FUN_8c07dc50, _FUN_8c07dc50_def\n");
