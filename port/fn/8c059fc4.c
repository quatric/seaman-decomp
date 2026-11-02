#include "../decls.h"
undefined4 FUN_8c059fc4_def(int ar4,undefined4 *ar5,int ar6,undefined1 *ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *ar7_00;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0;
  double dVar6;
  double dVar7;
  float fVar8;
  uint in_fr3;
  undefined8 in_dr4;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd14;
  bool bVar9;
  char cVar10;
  char cVar11;
  int in_stack_00000000;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [20];
  
  fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar11 = '\0';
  cVar10 = '\0';
  uVar3 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  uVar4 = 1;
  puVar2 = ar5;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_2c,ar5,ar6,ar7);
  if (cVar11 == '\0') {
    in_fr15 = 338.375;
  }
  else {
    in_xd14 = 1.63025361168389e-311;
  }
  *(undefined4 *)(ar4 + 0x300) = 0;
  iVar1 = *(int *)(ar4 + 0x28c);
  if (iVar1 == 0) {
    iVar1 = FUN_8c057164(ar4,ar5,ar6,ar7_00);
    if (iVar1 == 0) {
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(0x43330000,ar5[1]);
      }
      else {
        dVar6 = -7.95546843074564e-251;
      }
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - SUB84(dVar6,0),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar6;
      }
      if (cVar11 == '\0') {
        *(int *)(ar4 + 0x2ac) = (int)((ulonglong)dVar6 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x2ac) = dVar6;
      }
      Vec3_assign(ar4 + 0x54,ar5,ar6,ar7_00);
      if (in_stack_00000000 == -1) {
        ar6 = 3;
        in_stack_00000000 = rand_range(ar4,0,3,ar7_00);
      }
      Vec3_assign(auStack_2c,ar5,ar6,ar7_00);
      puVar2 = ar5;
      Vec3_assign(ar4 + 0x268,ar5,ar6,ar7_00);
      if (in_stack_00000000 == 1) {
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(0x43fa0000,*ar5);
        }
        else {
          dVar6 = 1.1551152330547935e+238;
        }
        if (cVar10 == '\0' && (float)((ulonglong)dVar6 >> 0x20) < SUB84(dVar6,0)) {
          in_stack_00000000 = 0;
        }
      }
      if (in_stack_00000000 == 0) {
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(*(undefined4 *)(ar7 + 8),SUB84(dVar6,0));
        }
        else {
          dVar6 = *(double *)(ar7 + 8);
        }
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - in_fr15,SUB84(dVar6,0));
        }
        else {
          dVar6 = dVar6 - (double)CONCAT44(in_fr14,in_fr15);
        }
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x5c) = (int)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),*(undefined4 *)(ar4 + 0x54));
        }
        else {
          *(double *)(ar4 + 0x5c) = dVar6;
          dVar6 = *(double *)(ar4 + 0x48);
        }
        if (cVar10 == '\0') {
          fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar6 + dVar6,0);
        }
        if (cVar11 != '\0') {
          fVar5 = 0.0;
        }
        if (cVar10 != '\0' || 0.0 <= fVar5) {
          if (cVar11 == '\0') {
            dVar6 = (double)(ulonglong)in_fr3;
            dVar7 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
          }
          else {
            dVar6 = 0.0;
            dVar7 = 1.23977604087146e-311;
          }
          if (cVar10 == '\0') {
            fVar8 = (float)((ulonglong)dVar7 >> 0x20);
            fVar5 = SUB84(dVar7,0) * fVar8;
            dVar7 = (double)CONCAT44(fVar8,fVar5);
            dVar6 = (double)CONCAT44(0.0 - fVar5,SUB84(dVar6,0));
          }
          else {
            dVar7 = dVar7 * dVar7;
            dVar6 = dVar6 - dVar7;
          }
          fVar5 = SUB84(dVar7,0);
          if (cVar11 == '\0') {
            *(int *)(ar4 + 0x54) = (int)((ulonglong)dVar6 >> 0x20);
          }
          else {
            *(double *)(ar4 + 0x54) = dVar6;
          }
        }
        FUN_8c022d04(ar4 + 0x248,puVar2,ar6,ar7_00);
        if (cVar11 == '\0') {
          uVar3 = *(undefined4 *)(ar7 + 8);
          dVar6 = (double)CONCAT44(uVar3,fVar5);
          *(undefined4 *)(ar4 + 0x270) = uVar3;
        }
        else {
          dVar6 = *(double *)(ar7 + 8);
          *(double *)(ar4 + 0x270) = dVar6;
        }
      }
      else if (in_stack_00000000 == 1) {
        if (cVar11 == '\0') {
          in_xd14 = (double)CONCAT44(in_fr15,0x41a00000);
        }
        if (cVar10 == '\0') {
          in_xd14 = (double)CONCAT44((float)((ulonglong)in_xd14 >> 0x20) + SUB84(in_xd14,0),
                                     SUB84(in_xd14,0));
        }
        else {
          in_xd14 = in_xd14 + in_xd14;
        }
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x5c) = (int)((ulonglong)in_xd14 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x5c) = in_xd14;
        }
        FUN_8c022d04(ar4 + 0x248,puVar2,ar6,ar7_00);
        dVar6 = (double)((ulonglong)in_xd14 & 0xffffffff);
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x270) = 0;
        }
        else {
          *(double *)(ar4 + 0x270) = dVar6;
        }
      }
      else if ((in_stack_00000000 == 2) || (in_stack_00000000 == 3)) {
        if (cVar11 == '\0') {
          in_xd14 = (double)CONCAT44(in_fr15,0x42200000);
        }
        if (cVar10 == '\0') {
          in_xd14 = (double)CONCAT44((float)((ulonglong)in_xd14 >> 0x20) + SUB84(in_xd14,0),
                                     SUB84(in_xd14,0));
        }
        else {
          in_xd14 = in_xd14 + in_xd14;
        }
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x54) = (int)((ulonglong)in_xd14 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x54) = in_xd14;
        }
        FUN_8c022d04(ar4 + 0x248,puVar2,ar6,ar7_00);
        dVar6 = (double)((ulonglong)in_xd14 & 0xffffffff);
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x268) = 0;
        }
        else {
          *(double *)(ar4 + 0x268) = dVar6;
        }
      }
      FUN_8c022fc0(ar5,ar4 + 0x268,ar6,ar7_00);
      if (cVar10 == '\0') {
        bVar9 = in_fr15 < (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        bVar9 = (double)CONCAT44(in_fr14,in_fr15) < dVar6;
      }
      if (!bVar9) {
        Vec3_assign(ar4 + 0x54,ar5,ar6,ar7_00);
      }
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + 1;
    }
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(ar4 + 700) = 1;
      if ((*(int *)(ar4 + 0x290) == 1) && (*(int *)(ar4 + 0x124) != 0x10)) {
        *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + 1;
      }
    }
    else if (iVar1 != 2) {
      if (iVar1 == 3) {
        iVar1 = *(int *)(ar4 + 800);
        if (iVar1 == 0) {
          CAnimBody_GetCurFrame(ar4 + 0xb0,puVar2,ar6,ar7_00,uVar3);
          if (cVar11 == '\0') {
            fVar8 = 25.0;
          }
          else {
            fVar5 = 25.0;
            fVar8 = 8.12753e-43;
          }
          if (cVar10 == '\0' && fVar8 < fVar5) {
            FUN_8c033474(ar4,0x1c,ar5,*(undefined4 *)(ar4 + 0x244));
            *(int *)(ar4 + 800) = *(int *)(ar4 + 800) + 1;
          }
        }
        else if (iVar1 == 1) {
          CAnimBody_GetCurFrame(ar4 + 0xb0,puVar2,ar6,ar7_00,uVar3);
          if (cVar11 == '\0') {
            fVar8 = 78.0;
          }
          else {
            fVar5 = 78.0;
            fVar8 = 8.12753e-43;
          }
          if (cVar10 == '\0' && fVar8 < fVar5) {
            FUN_8c033474(ar4,0x1d,ar5,*(undefined4 *)(ar4 + 0x244));
            *(int *)(ar4 + 800) = *(int *)(ar4 + 800) + 1;
          }
        }
        else if (iVar1 == 2) {
          CAnimBody_GetCurFrame(ar4 + 0xb0,puVar2,ar6,ar7_00,uVar3);
          if (cVar11 == '\0') {
            fVar8 = 150.0;
          }
          else {
            fVar5 = 150.0;
            fVar8 = 7.39886e-43;
          }
          if (cVar10 == '\0' && fVar8 < fVar5) {
            if (*(char *)(ar4 + 0x210) == '\x01') {
              Vec3_assign(auStack_2c,ar5,ar6,ar7_00);
              (**(code **)(**(int **)(ar4 + 0x244) + 0xd0))(*(int **)(ar4 + 0x244),auStack_2c,1,5);
            }
            *(int *)(ar4 + 800) = *(int *)(ar4 + 800) + 1;
          }
        }
        *(undefined4 *)(ar4 + 0x178) = 1;
        ar7_00 = (undefined1 *)0x1e;
        ar6 = ar4 + 0x268;
        iVar1 = FUN_8c058024(ar4,ar5,ar6,0x1e);
        if (iVar1 == 0) {
          FUN_8c022d04(ar4 + 0x2d4,ar5,ar6,ar7_00);
          FUN_8c022d04(ar4 + 0x2a8,ar5,ar6,ar7_00);
          *(undefined4 *)(ar4 + 700) = 0;
          *(undefined4 *)(ar4 + 0x178) = 0;
          uVar4 = 0;
          *(undefined4 *)(ar4 + 0x28c) = 0;
          *(undefined4 *)(ar4 + 0x68) = 0;
          FUN_8c03c314(ar4,ar5,ar6,ar7_00);
          FUN_8c030eb8(ar4 + 0x1fc,ar5,ar6,ar7_00);
          *(undefined4 *)(ar4 + 0x2e8) = 2;
        }
      }
      goto LAB_8c05a4c4;
    }
    Vec3_ctor_copy(auStack_3c,ar4 + 0x248,ar6,ar7_00);
    ar7_00 = auStack_3c;
    ar6 = ar4 + 0x54;
    iVar1 = FUN_8c04e0e0(ar4,ar5,ar6,ar7_00);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_3c,0xffffffff,ar6,ar7_00);
    if (iVar1 == 0) {
      *(undefined4 *)(ar4 + 0x218) = 9;
      *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + 1;
      *(undefined4 *)(ar4 + 800) = 0;
      FUN_8c030f2c(ar4 + 0x1fc,uVar3,ar6,ar7_00);
    }
  }
LAB_8c05a4c4:
  Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7_00);
  return uVar4;
}

__asm__(".globl _FUN_8c059fc4\n.set _FUN_8c059fc4, _FUN_8c059fc4_def\n");
