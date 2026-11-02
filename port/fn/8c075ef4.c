#include "../decls.h"
undefined4 FUN_8c075ef4_def(int ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  int ar5_00;
  undefined4 uVar5;
  float fVar6;
  double in_dr0;
  code *pcVar8;
  double dVar7;
  double in_xd0;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar5 = 1;
  iVar3 = *(int *)(ar4 + 300);
  if (iVar3 == 0) {
    uVar4 = 0;
    iVar3 = FUN_8c034148(ar4 + 0xb0,0,ar6,ar7);
    if (iVar3 != 0) {
      if (iVar3 != 1) {
        if (iVar3 != 2) {
          return 1;
        }
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar6,ar7);
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
  }
  else {
    if (iVar3 == 1) {
      FUN_8c031748(ar4,ar5,ar6,ar7);
      FUN_8c02a1fc(ar4 + 0x264,ar5,ar6,ar7);
      FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_1c);
      FUN_8c022dac(auStack_1c,&DAT_8c125e68,ar6,ar7);
      if (cVar11 == '\0') {
        fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
        pcVar8 = (code *)0x42340000;
        in_dr0 = in_xd0;
      }
      else {
        fVar6 = 45.0;
        pcVar8 = Vec3_dtor;
      }
      bVar1 = cVar10 != '\0';
      bVar9 = fVar6 <= (float)(uint)pcVar8;
      ar5 = (undefined *)0xffffffff;
      Vec3_dtor(auStack_1c,0xffffffff,ar6,ar7);
      if (bVar1 || bVar9) {
        *(undefined4 *)(ar4 + 0x260) = 0;
      }
      else {
        ar5 = &DAT_8c125e68;
        uVar4 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,ar6,ar7);
        *(undefined4 *)(ar4 + 0x260) = uVar4;
      }
      FUN_8c02327c(ar4 + 0x14,ar5,ar6,ar7);
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),pcVar8);
        dVar2 = in_dr0;
      }
      else {
        dVar2 = (double)CONCAT44(pcVar8,fVar6);
        dVar7 = *(double *)(ar4 + 0x38);
      }
      if (cVar10 == '\0') {
        fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0xbf800000,fVar6);
      }
      else {
        dVar7 = -8.625520112574138e-251;
      }
      if (cVar10 == '\0') {
        fVar6 = (float)((ulonglong)dVar7 >> 0x20);
        in_dr0 = (double)CONCAT44(fVar6,SUB84(dVar7,0) * fVar6);
      }
      else {
        in_dr0 = dVar7 * dVar7;
      }
      if (cVar11 == '\0') {
        *(int *)(ar4 + 0x268) = SUB84(in_dr0,0);
      }
      else {
        *(double *)(ar4 + 0x268) = dVar2;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
    else if (iVar3 != 2) {
      return 1;
    }
    fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
    iVar3 = *(int *)(ar4 + 0x260);
    if (iVar3 == 0) {
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
      if (*(int *)(ar4 + 0x40) == 0) {
        FUN_8c03c314(ar4,ar5,ar6,ar7);
        *(undefined4 *)(ar4 + 300) = 0;
        uVar5 = 0;
      }
    }
    else if ((iVar3 == 3) || (iVar3 == 4)) {
      FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_2c);
      FUN_8c022dac(auStack_2c,&DAT_8c125e68,ar6,ar7);
      if (cVar11 == '\0') {
        pcVar8 = (code *)0x42aa0000;
      }
      else {
        fVar6 = 85.0;
        pcVar8 = vec3_copy_8c02b5fc;
      }
      uVar4 = 0xffffffff;
      Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7);
      if (cVar10 != '\0' || fVar6 <= (float)(uint)pcVar8) {
        if (*(int *)(ar4 + 0x40) == 0) {
          ar5_00 = *(int *)(ar4 + 0x260) + 2;
          iVar3 = FUN_8c034148(ar4 + 0xb0,ar5_00,ar6,ar7);
          if (iVar3 != 0) {
            FUN_8c03c314(ar4,ar5_00,ar6,ar7);
            *(undefined4 *)(ar4 + 300) = 0;
            uVar5 = 0;
          }
        }
        else {
          CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar6,ar7);
        }
      }
      else {
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar6,ar7);
        vec3_copy_8c02b5fc(auStack_38,ar4 + 0x264,ar6,ar7);
        FUN_8c023484(ar4 + 0x14,auStack_38,ar6,ar7,auStack_48);
        Vec3_assign(ar4 + 0x14,auStack_48,ar6,ar7);
        Vec3_dtor(auStack_48,0xffffffff,ar6,ar7);
        object_dtor_delete(auStack_38,0xffffffff,ar6,ar7);
      }
    }
  }
  return uVar5;
}

__asm__(".globl _FUN_8c075ef4\n.set _FUN_8c075ef4, _FUN_8c075ef4_def\n");
