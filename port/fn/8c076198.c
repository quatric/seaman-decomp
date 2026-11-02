#include "../decls.h"
undefined4 FUN_8c076198_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *ar5_00;
  undefined4 uVar5;
  float fVar6;
  undefined8 in_dr0;
  code *pcVar8;
  double dVar7;
  undefined8 in_xd0;
  char cVar9;
  char cVar10;
  undefined4 in_stack_ffffff14;
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [4];
  undefined8 uStack_20;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  iVar4 = *(int *)(ar4 + 300);
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_34);
      FUN_8c022dac(auStack_34,&DAT_8c125e68,ar6,ar7);
      if (cVar10 == '\0') {
        uVar3 = CONCAT44(0x42340000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        uVar3 = 0x8c022cb042340000;
        in_xd0 = in_dr0;
      }
      in_dr0 = uVar3;
      bVar1 = cVar9 == '\0';
      fVar6 = (float)in_dr0;
      uVar2 = (ulonglong)in_dr0 >> 0x20;
      ar5 = -1;
      Vec3_dtor(auStack_34,0xffffffff,ar6,ar7);
      if (bVar1 && (float)uVar2 < fVar6) {
        ar5_00 = &DAT_8c125e68;
        uVar5 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,ar6,ar7);
        *(undefined4 *)(ar4 + 0x260) = uVar5;
        FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6,ar7,auStack_44);
        FUN_8c022dac(auStack_44,&DAT_8c125e68,ar6,ar7);
        if (cVar10 == '\0') {
          uVar3 = CONCAT44(0x42aa0000,(int)((ulonglong)in_dr0 >> 0x20));
        }
        else {
          uVar3 = 0xbf80000042aa0000;
          in_xd0 = in_dr0;
        }
        in_dr0 = uVar3;
        bVar1 = cVar9 != '\0';
        fVar6 = (float)in_dr0;
        uVar2 = (ulonglong)in_dr0 >> 0x20;
        Vec3_dtor(auStack_44,0xffffffff,ar6,ar7);
        if (bVar1 || (float)uVar2 <= fVar6) {
          if (*(int *)(ar4 + 0x260) == 3) {
            FUN_8c07f1e4(ar4,0x19,&DAT_8c137738 + (*(int *)(ar4 + 0x128) + -6) * 0x18,ar7);
          }
          else {
            FUN_8c07f1e4(ar4,0x1a,&DAT_8c137768 + (*(int *)(ar4 + 0x128) + -6) * 0x18,ar7);
          }
          ar7 = 0;
          ar6 = 0xffffffff;
          ar5 = *(int *)(ar4 + 0x260) + 0x16;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7);
        }
        else {
          ar7 = 0;
          ar6 = 0xffffffff;
          ar5 = *(int *)(ar4 + 0x260) + 0x18;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7);
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x260) = 0;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
    else if (iVar4 != 2) {
      if (iVar4 != 3) {
        return 1;
      }
      FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_9c);
      fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
      FUN_8c022dac(auStack_9c,&DAT_8c125e68,ar6,ar7);
      if (cVar10 == '\0') {
        pcVar8 = (code *)0x42340000;
      }
      else {
        fVar6 = 45.0;
        pcVar8 = Vec3_dtor;
      }
      Vec3_dtor(auStack_9c,0xffffffff,ar6,ar7);
      if (cVar9 == '\0' && (float)(uint)pcVar8 < fVar6) {
        iVar4 = FUN_8c034148(ar4 + 0xb0,*(int *)(ar4 + 0x260) + 0x18,ar6,ar7);
        if (iVar4 == 0) {
          return 1;
        }
        *(undefined4 *)(ar4 + 300) = 0;
        return 0;
      }
      iVar4 = FUN_8c034148(ar4 + 0xb0,0x13,ar6,ar7);
      if (iVar4 == 0) {
        return 1;
      }
      *(undefined4 *)(ar4 + 300) = 0;
      return 0;
    }
    fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
    iVar4 = *(int *)(ar4 + 0x260);
    if (iVar4 == 0) {
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
      if (*(int *)(ar4 + 0x40) != 0) {
        return 1;
      }
      FUN_8c03c314(ar4,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 300) = 0;
      return 0;
    }
    if ((iVar4 != 3) && (iVar4 != 4)) {
      return 1;
    }
    iVar4 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
    if (iVar4 != 1) {
      Vec3_set_zero(auStack_18,ar5,ar6,ar7);
      Vec3_set_zero(auStack_24,ar5,ar6,ar7);
      FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_64);
      Vec3_assign(ar4 + 0x14,auStack_64,ar6,ar7);
      uVar5 = 0xffffffff;
      Vec3_dtor(auStack_64,0xffffffff,ar6,ar7);
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar5,ar6,ar7,in_stack_ffffff14);
      FUN_8c034574(ar4 + 0xb0,*(undefined4 *)(*(int *)(ar4 + 0xb4) + 4),ar6,ar7);
      vec3_copy_8c023d8c(auStack_18,auStack_70,ar6,ar7);
      object_dtor_delete(auStack_70,0xffffffff,ar6,ar7);
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 600),uStack_14);
      }
      else {
        in_xd0 = CONCAT44(uStack_10,uStack_14);
        dVar7 = *(double *)(ar4 + 600);
      }
      if (cVar9 == '\0') {
        fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      uVar3 = in_xd0;
      if (cVar10 == '\0') {
        uStack_20 = CONCAT44((*(uint*)((uchar*)&uStack_20+4)),fVar6);
        uVar3 = uStack_20;
      }
      uStack_20 = uVar3;
      vec3_copy_8c023d8c(ar4 + 0x254,auStack_24,ar6,ar7);
      vec3_copy_8c02b5fc(auStack_7c,auStack_24,ar6,ar7);
      FUN_8c023484(ar4 + 0x14,auStack_7c,ar6,ar7,auStack_8c);
      Vec3_assign(ar4 + 0x14,auStack_8c,ar6,ar7);
      Vec3_dtor(auStack_8c,0xffffffff,ar6,ar7);
      object_dtor_delete(auStack_7c,0xffffffff,ar6,ar7);
      object_dtor_delete(auStack_24,0xffffffff,ar6,ar7);
      object_dtor_delete(auStack_18,0xffffffff,ar6,ar7);
      return 1;
    }
    FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_54);
    FUN_8c022dac(auStack_54,&DAT_8c125e68,ar6,ar7);
    if (cVar10 == '\0') {
      pcVar8 = (code *)0x42aa0000;
    }
    else {
      fVar6 = 85.0;
      pcVar8 = Vec3_dtor;
    }
    Vec3_dtor(auStack_54,0xffffffff,ar6,ar7);
    if (cVar9 != '\0' || (float)(uint)pcVar8 <= fVar6) {
      return 1;
    }
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    return 1;
  }
  uVar5 = 0x13;
  iVar4 = FUN_8c034148(ar4 + 0xb0,0x13,ar6,ar7);
  if (iVar4 != 0) {
    if (iVar4 != 1) {
      if (iVar4 != 2) goto LAB_8c076216;
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar5,ar6,ar7);
    }
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
LAB_8c076216:
  FUN_8c031748(ar4,uVar5,ar6,ar7);
  FUN_8c031700(ar4,uVar5,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c076198\n.set _FUN_8c076198, _FUN_8c076198_def\n");
