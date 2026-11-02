#include "../decls.h"
undefined4 FUN_8c09ea78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  undefined1 *ar4_00;
  int ar5_00;
  undefined4 ar5_01;
  float fVar5;
  ulonglong in_dr0;
  double dVar6;
  code *pcVar7;
  undefined8 in_xd0;
  char cVar8;
  char cVar9;
  undefined4 in_stack_ffffff88;
  undefined1 auStack_1c [8];
  undefined8 uStack_14;
  
  cVar9 = '\0';
  cVar8 = '\0';
  ar4_00 = auStack_1c;
  Vec3_ctor_zero(ar4_00,ar5,ar6,ar7);
  if (_DAT_8c284d80 < 3) {
    uVar2 = rand(ar4_00,ar5,ar6,ar7);
    ar5 = 5;
    iVar3 = libgcc_divide_helper_01031c(uVar2,5,ar6,ar7);
    if (iVar3 == 0) {
      for (iVar3 = 0; fVar5 = (float)in_dr0, iVar3 < 3; iVar3 = iVar3 + 1) {
        if (cVar9 == '\0') {
          fVar5 = *(float *)(&DAT_8c13aae4 + iVar3 * 4);
        }
        else {
          in_xd0 = *(undefined8 *)(&DAT_8c13aae4 + iVar3 * 4);
        }
        in_dr0 = (ulonglong)(uint)fVar5;
        if ((fVar5 == 0.0) && (*(int *)(ar4 + 0xfd0) == 0)) {
          FUN_8c22195c(iVar3 + 2,ar5,ar6,ar7,in_stack_ffffff88);
          ar5_00 = ar4 + 0x30;
          Vec3_assign(auStack_1c,ar5_00,ar6,ar7);
          if (cVar9 == '\0') {
            dVar6 = (double)CONCAT44(0x41700000,(undefined4)uStack_14);
          }
          else {
            dVar6 = -3.1600868374053233e-250;
            in_xd0 = uStack_14;
          }
          if (cVar8 == '\0') {
            fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
          }
          else {
            fVar5 = SUB84(dVar6 + dVar6,0);
          }
          uVar1 = in_xd0;
          if (cVar9 == '\0') {
            uStack_14 = CONCAT44((*(uint*)((uchar*)&uStack_14+4)),fVar5);
            uVar1 = uStack_14;
          }
          uStack_14 = uVar1;
          FUN_8c2219ac(iVar3 + 2,ar5_00,ar6,ar7,in_stack_ffffff88);
          if (cVar9 == '\0') {
            *(undefined4 *)(&DAT_8c13aae4 + iVar3 * 4) = 0x3dcccccd;
          }
          else {
            *(undefined8 *)(&DAT_8c13aae4 + iVar3 * 4) = 0x8c22195c3dcccccd;
          }
          *(undefined4 *)(&DAT_8c13aaf0 + iVar3 * 4) = 1;
          _DAT_8c284d80 = _DAT_8c284d80 + 1;
          *(int *)(ar4 + 0xfd0) = iVar3 + 1;
          ar5 = 1;
          FUN_8c221916(*(int *)(ar4 + 0xfd0) + 1,1,ar6,ar7);
          break;
        }
      }
    }
  }
  if (*(int *)(ar4 + 0xfd0) != 0) {
    FUN_8c22195c(*(int *)(ar4 + 0xfd0) + 1,ar5,ar6,ar7,in_stack_ffffff88);
    FUN_8c21410c(*(int *)(ar4 + 0xfd0) + 1,ar5,ar6,ar7,in_stack_ffffff88);
    FUN_8c2219ac(*(int *)(ar4 + 0xfd0) + 1,ar5,ar6,ar7,in_stack_ffffff88);
    iVar3 = *(int *)(ar4 + 0xfd0) + 1;
    FUN_8c21415c(iVar3,ar5,ar6,ar7,in_stack_ffffff88);
    if (*(int *)(&DAT_8c13aaf0 + (*(int *)(ar4 + 0xfd0) + -1) * 4) == 1) {
      pfVar4 = (float *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4);
      if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(0x3c23d70a,*pfVar4);
      }
      else {
        in_xd0 = *(undefined8 *)pfVar4;
        dVar6 = -3.01216570193662e-250;
      }
      if (cVar8 == '\0') {
        fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar9 == '\0') {
        *pfVar4 = fVar5;
      }
      else {
        *(undefined8 *)pfVar4 = in_xd0;
      }
      if (cVar9 == '\0') {
        fVar5 = *(float *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4);
      }
      if (cVar8 != '\0' || 1.0 <= fVar5) {
        *(undefined4 *)(&DAT_8c13aaf0 + (*(int *)(ar4 + 0xfd0) + -1) * 4) = 0;
      }
    }
    else {
      pfVar4 = (float *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4);
      if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(0x3c23d70a,*pfVar4);
      }
      else {
        in_xd0 = *(undefined8 *)pfVar4;
        dVar6 = -3.01216570193662e-250;
      }
      if (cVar8 == '\0') {
        fVar5 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 - dVar6,0);
      }
      if (cVar9 == '\0') {
        *pfVar4 = fVar5;
      }
      else {
        *(undefined8 *)pfVar4 = in_xd0;
      }
      if (cVar9 == '\0') {
        fVar5 = *(float *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4);
        pcVar7 = (code *)0x3dcccccd;
      }
      else {
        fVar5 = 0.1;
        pcVar7 = FUN_8c22195c;
      }
      if (cVar8 != '\0' || fVar5 <= (float)(uint)pcVar7) {
        uVar2 = rand(iVar3,ar5,ar6,ar7);
        ar5_01 = 10;
        iVar3 = libgcc_divide_helper_01031c(uVar2,10,ar6,ar7);
        if (iVar3 == 0) {
          if (cVar9 == '\0') {
            *(undefined4 *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4) = 0;
          }
          else {
            *(ulonglong *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4) =
                 (ulonglong)(uint)fVar5;
          }
          FUN_8c22195c(*(int *)(ar4 + 0xfd0) + 1,ar5_01,ar6,ar7,in_stack_ffffff88);
          FUN_8c21410c(*(int *)(ar4 + 0xfd0) + 1,ar5_01,ar6,ar7,in_stack_ffffff88);
          _DAT_8c284d80 = _DAT_8c284d80 + -1;
          FUN_8c221916(*(int *)(ar4 + 0xfd0) + 1,0,ar6,ar7);
          FUN_8c2140c6(*(int *)(ar4 + 0xfd0) + 1,0,ar6,ar7);
          *(undefined4 *)(ar4 + 0xfd0) = 0;
        }
        else {
          *(undefined4 *)(&DAT_8c13aaf0 + (*(int *)(ar4 + 0xfd0) + -1) * 4) = 1;
        }
      }
    }
  }
  uVar2 = Vec3_dtor(auStack_1c,0xffffffff,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c09ea78\n.set _FUN_8c09ea78, _FUN_8c09ea78_def\n");
