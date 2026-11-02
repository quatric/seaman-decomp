#include "../decls.h"
undefined4 FUN_8c0d0d1c_def(int ar4,code *ar5,undefined4 ar6,undefined4 ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  ulonglong in_xd0;
  char cVar11;
  char cVar12;
  undefined8 uStack_54;
  ulonglong uStack_38;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uStack_c = 0;
  if (DAT_8c4374c4 == '\0') {
    _DAT_8c4374c0 = 10;
    DAT_8c4374c4 = '\x01';
  }
  if (DAT_8c4374d4 == '\0') {
    uVar2 = Vec3_ctor_xyz(0x8c4374d8,ar5,ar6,ar7);
    ar6 = 0x8c4374c8;
    ar5 = Vec3_dtor;
    global_list_push(uVar2,Vec3_dtor,0x8c4374c8,ar7);
    DAT_8c4374d4 = '\x01';
  }
  Vec3_ctor_zero(auStack_20,ar5,ar6,ar7);
  uStack_38 = (ulonglong)(uint)uStack_38;
  iVar3 = *(int *)(ar4 + 0xeb60);
  if (iVar3 == 0) {
    if (*(int *)(ar4 + 0xeb44) == 1) {
      *(undefined2 *)(ar4 + 0xeb64) = 0;
      *(undefined4 *)(ar4 + 0xeb60) = 2;
    }
  }
  else if (iVar3 == 2) {
    if (*(int *)(ar4 + 0xeb4c) == -1) {
      uVar2 = FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0xeb4c) = uVar2;
      ar6 = 5;
      ar5 = *(code **)(ar4 + 0xeb4c);
      FUN_8c021994(0x8c2b59d0,ar5,5,ar7);
    }
    if ((*(int *)(ar4 + 0xeb44) == 0) && (*(int *)(ar4 + 0xeb4c) != -1)) {
      FUN_8c021a60(0x8c2b59d0,*(undefined4 *)(ar4 + 0xeb4c),ar6,ar7);
      ar5 = (code *)(ar4 + 0xeb4c);
      FUN_8c021a8c(0x8c2b59d0,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0xeb4c) = 0xffffffff;
      *(undefined4 *)(ar4 + 0xeb60) = 3;
    }
  }
  else if (iVar3 == 3) {
    *(undefined4 *)(ar4 + 0xeb60) = 0;
  }
  if (*(int *)(ar4 + 0xeb44) == 1) {
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x41800000,*(undefined4 *)(ar4 + 0xeb38));
    }
    else {
      in_xd0 = *(ulonglong *)(ar4 + 0xeb38);
      dVar9 = 1.4411521620789166e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 + dVar9,0);
    }
    uStack_54 = in_xd0;
    if (cVar12 == '\0') {
      uStack_54 = CONCAT44(ar4,fVar8);
    }
    if (cVar12 == '\0') {
      *(float *)((*(uint*)((uchar*)&uStack_54+4)) + 0xeb38) = (float)uStack_54;
      fVar10 = 360.0;
      fVar8 = (float)uStack_54;
    }
    else {
      *(ulonglong *)((*(uint*)((uchar*)&uStack_54+4)) + 0xeb38) = uStack_54;
      fVar8 = 360.0;
      fVar10 = 2.41023e-43;
      in_xd0 = uStack_54;
    }
    if (cVar11 == '\0' && fVar10 < fVar8) {
      if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44(0x43b40000,*(undefined4 *)(ar4 + 0xeb38));
      }
      else {
        in_xd0 = *(ulonglong *)(ar4 + 0xeb38);
        dVar9 = 3.65544470367453e-312;
      }
      if (cVar11 == '\0') {
        fVar8 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0xeb38) = fVar8;
      }
      else {
        *(ulonglong *)(ar4 + 0xeb38) = in_xd0;
      }
    }
  }
  if (*(int *)(ar4 + 0xeb44) == 1) {
    iVar3 = 0;
    for (iVar7 = 0; iVar7 < 0x15e; iVar7 = iVar7 + 1) {
      iVar4 = get_field_100_0d1058(ar4 + iVar7 * 0xac + 0xc,ar5,ar6,ar7);
      iVar5 = iVar3;
      if (iVar4 != 1) {
        FUN_8c014be4(ar4 + iVar7 * 0xac + 0xc,0x2f999999,ar6,ar7);
        uVar2 = 0x8c4374d8;
        puVar6 = auStack_20;
        Vec3_assign(puVar6,0x8c4374d8,ar6,ar7);
        rand(puVar6,uVar2,ar6,ar7);
        FUN_8c023668(auStack_20,uVar2,ar6,ar7,auStack_30);
        uVar2 = 0xffffffff;
        puVar6 = auStack_30;
        Vec3_dtor(puVar6,0xffffffff,ar6,ar7);
        iVar5 = rand(puVar6,uVar2,ar6,ar7);
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(0x47000000,(float)iVar5);
        }
        else {
          dVar9 = 134217763.5;
        }
        if (cVar11 == '\0') {
          fVar8 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 / dVar9,0);
        }
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(0x41300000,fVar8);
        }
        else {
          dVar9 = 67108880.296875;
        }
        if (cVar11 == '\0') {
          fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 * dVar9,0);
        }
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(0x41900000,fVar8);
        }
        else {
          dVar9 = -7.9586651841963e-251;
        }
        if (cVar11 == '\0') {
          fVar8 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 + dVar9,0);
        }
        uVar1 = in_xd0;
        if (cVar12 == '\0') {
          uStack_38 = CONCAT44((*(uint*)((uchar*)&uStack_38+4)),fVar8);
          uVar1 = uStack_38;
        }
        uStack_38 = uVar1;
        ar5 = (code *)&uStack_38;
        FUN_8c023bf4(auStack_20,ar5,ar6,ar7);
        FUN_8c014e38(ar4 + iVar7 * 0xac + 0xc,ar5,ar6,ar7);
        iVar5 = iVar3 + 1;
        if (7 < iVar3 + 1) break;
      }
      iVar3 = iVar5;
    }
  }
  FUN_8c0d1060(ar4,ar5,ar6,ar7);
  uVar2 = Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0d0d1c\n.set _FUN_8c0d0d1c, _FUN_8c0d0d1c_def\n");
