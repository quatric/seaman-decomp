#include "../decls.h"
undefined4 FUN_8c0d294c_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  undefined1 *puVar3;
  float fVar4;
  double in_dr0;
  code *pcVar6;
  double dVar5;
  undefined8 in_dr4;
  float fVar7;
  undefined4 in_fr14;
  undefined8 in_xd14;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  fVar7 = (float)((ulonglong)in_dr4 >> 0x20);
  Vec3_ctor_zero(&uStack_1c,ar5,ar6,ar7);
  ar5_00 = ar4 + 0x18;
  puVar3 = ar4;
  FUN_8c023aa0(ar4,ar5_00,ar6,ar7);
  fVar4 = SUB84(in_dr0,0);
  iVar1 = *(int *)(ar4 + 0x74);
  if (iVar1 == 0) {
    puVar3 = ar4 + 0x28;
    FUN_8c023aa0(ar4 + 0x18,puVar3,ar6,ar7);
    if (cVar10 == '\0') {
      fVar4 = *(float *)(ar4 + 0x28);
    }
    if (cVar9 != '\0' || 0.0 <= fVar4) {
      if (cVar10 == '\0') {
        fVar4 = *(float *)(ar4 + 0x28);
      }
      if (cVar9 == '\0' && 0.0 < fVar4) {
        if (cVar10 == '\0') {
          fVar4 = *(float *)(ar4 + 0x18);
        }
        if (cVar9 == '\0' && 0.0 < fVar4) {
          if (cVar10 == '\0') {
            *(undefined4 *)(ar4 + 0x18) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x18) = (ulonglong)(uint)fVar4;
          }
        }
      }
    }
    else {
      if (cVar10 == '\0') {
        fVar4 = *(float *)(ar4 + 0x18);
      }
      if (cVar9 == '\0' && fVar4 < 0.0) {
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x18) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x18) = (ulonglong)(uint)fVar4;
        }
      }
    }
    if (cVar10 == '\0') {
      fVar4 = *(float *)(ar4 + 0x30);
    }
    if (cVar9 != '\0' || 0.0 <= fVar4) {
      if (cVar10 == '\0') {
        fVar4 = *(float *)(ar4 + 0x30);
      }
      if (cVar9 == '\0' && 0.0 < fVar4) {
        if (cVar10 == '\0') {
          fVar4 = *(float *)(ar4 + 0x20);
        }
        if (cVar9 == '\0' && 0.0 < fVar4) {
          if (cVar10 == '\0') {
            *(undefined4 *)(ar4 + 0x20) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x20) = (ulonglong)(uint)fVar4;
          }
        }
      }
    }
    else {
      if (cVar10 == '\0') {
        fVar4 = *(float *)(ar4 + 0x20);
      }
      if (cVar9 == '\0' && fVar4 < 0.0) {
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x20) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x20) = (ulonglong)(uint)fVar4;
        }
      }
    }
    if (cVar10 == '\0') {
      fVar4 = *(float *)(ar4 + 0x18);
    }
    in_dr0 = (double)(ulonglong)(uint)fVar4;
    if (fVar4 == 0.0) {
      if (cVar10 == '\0') {
        fVar4 = *(float *)(ar4 + 0x20);
      }
      in_dr0 = (double)(ulonglong)(uint)fVar4;
      if (fVar4 == 0.0) {
        if (cVar10 == '\0') {
          in_dr0 = (double)CONCAT44(0x41126666,*(undefined4 *)(ar4 + 0x10));
        }
        else {
          in_dr0 = -7.947556305225132e-251;
        }
        if (cVar9 == '\0' && SUB84(in_dr0,0) < (float)((ulonglong)in_dr0 >> 0x20)) {
          if (cVar10 == '\0') {
            *(undefined4 *)(ar4 + 0x18) = *(undefined4 *)(ar4 + 0x38);
            in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
          }
          else {
            *(undefined8 *)(ar4 + 0x18) = *(undefined8 *)(ar4 + 0x38);
            in_dr0 = *(double *)(ar4 + 0x40);
          }
          FUN_8c023570(ar4 + 0x18,puVar3,ar6,ar7,auStack_2c);
          Vec3_assign(ar4 + 0x18,auStack_2c,ar6,ar7);
          Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7);
        }
        *(undefined4 *)(ar4 + 0x74) = 1;
      }
    }
  }
  else if (iVar1 == 1) {
    if (cVar10 == '\0') {
      fVar4 = *(float *)(ar4 + 0x10);
      pcVar6 = (code *)0x41126666;
    }
    else {
      fVar4 = 9.15;
      pcVar6 = FUN_8c023570;
    }
    if (cVar9 == '\0' && fVar4 < (float)(uint)pcVar6) {
      FUN_8c023570(ar4 + 0x18,ar5_00,ar6,ar7,auStack_3c);
      Vec3_assign(ar4 + 0x18,auStack_3c,ar6,ar7);
      ar5_00 = (undefined1 *)0xffffffff;
      puVar3 = auStack_3c;
      Vec3_dtor(puVar3,0xffffffff,ar6,ar7);
    }
    if (cVar10 == '\0') {
      in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 4),fVar4);
    }
    else {
      in_dr0 = *(double *)(ar4 + 4);
    }
    if (cVar9 == '\0') {
      bVar8 = (float)((ulonglong)in_dr0 >> 0x20) < fVar7;
    }
    else {
      bVar8 = in_dr0 < (double)CONCAT44(in_fr14,fVar7);
    }
    if (!bVar8) {
      *(undefined4 *)(ar4 + 0x7c) = 0;
      iVar1 = rand(puVar3,ar5_00,ar6,ar7);
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(0x47000000,(float)iVar1);
      }
      else {
        dVar5 = 1099511918592.0;
      }
      if (cVar9 == '\0') {
        fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 / dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(0x42700000,fVar4);
      }
      else {
        dVar5 = 3.966050706335591e+20;
      }
      if (cVar9 == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
        iVar1 = (int)fVar4;
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
        iVar1 = (int)(dVar5 * dVar5);
      }
      *(int *)(ar4 + 0x78) = iVar1 + 0xf;
      if (cVar10 != '\0') {
        fVar4 = 1072.5;
      }
      FUN_8c022d04(&uStack_1c,ar5_00,ar6,ar7);
      uVar2 = Vec3_length(&uStack_1c,ar5_00,ar6,ar7);
      Vec3_scale(uVar2,&DAT_8c13f478,ar6,ar7,auStack_4c);
      Vec3_assign(&uStack_1c,auStack_4c,ar6,ar7);
      Vec3_dtor(auStack_4c,0xffffffff,ar6,ar7);
      if (cVar10 == '\0') {
        *(undefined4 *)(ar4 + 0x18) = uStack_1c;
        in_dr0 = (double)CONCAT44(uStack_14,fVar4);
        *(undefined4 *)(ar4 + 0x20) = uStack_14;
      }
      else {
        *(ulonglong *)(ar4 + 0x18) = CONCAT44(uStack_18,uStack_1c);
        in_dr0 = (double)CONCAT44(uStack_10,uStack_14);
        *(double *)(ar4 + 0x20) = in_dr0;
      }
      *(undefined4 *)(ar4 + 0x74) = 2;
    }
  }
  else if ((iVar1 == 2) && (*(int *)(ar4 + 0x78) < *(int *)(ar4 + 0x7c))) {
    FUN_8c0d2f14(ar4,ar5_00,ar6,ar7);
  }
  uVar2 = SUB84(in_dr0,0);
  *(int *)(ar4 + 0x7c) = *(int *)(ar4 + 0x7c) + 1;
  iVar1 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x7c),3,ar6,ar7);
  if ((iVar1 == 0) &&
     (iVar1 = *(int *)(ar4 + 0x80), *(int *)(ar4 + 0x80) = iVar1 + 1, 3 < iVar1 + 1)) {
    *(undefined4 *)(ar4 + 0x80) = 0;
  }
  if (cVar10 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 4),uVar2);
  }
  else {
    dVar5 = *(double *)(ar4 + 4);
  }
  if (cVar9 == '\0') {
    bVar8 = (float)((ulonglong)dVar5 >> 0x20) < fVar7;
  }
  else {
    bVar8 = dVar5 < (double)CONCAT44(in_fr14,fVar7);
  }
  if (!bVar8) {
    if (cVar10 == '\0') {
      *(float *)(ar4 + 4) = fVar7;
    }
    else {
      *(undefined8 *)(ar4 + 4) = in_xd14;
    }
  }
  uVar2 = Vec3_dtor(&uStack_1c,0xffffffff,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0d294c\n.set _FUN_8c0d294c, _FUN_8c0d294c_def\n");
