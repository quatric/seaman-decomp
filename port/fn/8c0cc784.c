#include "../decls.h"
undefined4 FUN_8c0cc784_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  uint a6;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  code *a6_00;
  int *a4;
  uint ar6_00;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *a5;
  int iVar8;
  ulonglong in_dr0;
  double dVar9;
  double in_dr2;
  undefined4 uVar10;
  double dVar11;
  float fVar12;
  bool bVar13;
  char cVar14;
  char cVar15;
  int iStack_4c;
  int iStack_48;
  undefined1 auStack_44 [16];
  ushort uStack_34;
  byte bStack_32;
  byte bStack_31;
  
  cVar15 = '\0';
  cVar14 = '\0';
  uVar10 = 0;
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_44,ar5,ar6,ar7);
  FUN_8c0b9d14(ar5,&uStack_34,ar6_00,ar7);
  *(undefined2 *)(ar5 + 0x8c) = *(undefined2 *)(ar6 + 0x14);
  *(undefined2 *)(ar5 + 0x8e) = *(undefined2 *)(ar6 + 0x16);
  *(undefined2 *)(ar5 + 0x90) = *(undefined2 *)(ar6 + 0x18);
  *(undefined2 *)(ar5 + 0x92) = *(undefined2 *)(ar6 + 0x1a);
  *(undefined2 *)(ar5 + 0x94) = *(undefined2 *)(ar6 + 0x1c);
  *(undefined2 *)(ar5 + 0x96) = *(undefined2 *)(ar6 + 0x1e);
  *(undefined2 *)(ar5 + 0x98) = *(undefined2 *)(ar6 + 0x20);
  *(undefined2 *)(ar5 + 0x9a) = *(undefined2 *)(ar6 + 0x22);
  *(undefined2 *)(ar5 + 0x9c) = *(undefined2 *)(ar6 + 0x24);
  *(undefined2 *)(ar5 + 0x9e) = *(undefined2 *)(ar6 + 0x26);
  *(undefined1 *)(ar5 + 0xa0) = *(undefined1 *)(ar6 + 0xa8);
  a6 = *(uint *)(ar6 + 0xac);
  *(undefined2 *)(ar5 + 0xa2) = *(undefined2 *)(ar6 + 0x28);
  FUN_8c1f826c(&uStack_34,&iStack_48,ar6_00,ar7);
  FUN_8c1f826c(ar5 + 0x8c,&iStack_4c,ar6_00,ar7);
  uVar1 = libgcc_divide_helper_010284(iStack_48 - iStack_4c,0xe10,ar6_00,ar7);
  *(short *)(ar5 + 0xae) = (short)uVar1;
  uVar1 = libgcc_divide_helper_0103d0(iStack_48 - iStack_4c,0xe10,ar6_00,ar7);
  uVar2 = libgcc_divide_helper_010284(uVar1,0x3c,ar6_00,ar7);
  *(short *)(ar5 + 0xb0) = (short)uVar2;
  uVar1 = libgcc_divide_helper_0103d0(uVar1,0x3c,ar6_00,ar7);
  *(short *)(ar5 + 0xb2) = (short)uVar1;
  if ((((uStack_34 == *(ushort *)(ar5 + 0x8c)) && (bStack_32 == *(byte *)(ar5 + 0x8e))) &&
      (bStack_31 == *(byte *)(ar5 + 0x8f))) && (7 < *(ushort *)(ar5 + 0xae))) {
    *(short *)(ar5 + 0xa2) = *(short *)(ar5 + 0xa2) + 1;
  }
  else if ((*(ushort *)(ar5 + 0xae) < 0x18) &&
          (((ar6_00 = (uint)bStack_31, *(byte *)(ar5 + 0x8f) < ar6_00 ||
            (*(byte *)(ar5 + 0x8e) < bStack_32)) || (*(ushort *)(ar5 + 0x8c) < uStack_34)))) {
    *(short *)(ar5 + 0xa2) = *(short *)(ar5 + 0xa2) + 1;
  }
  else if (0x17 < *(ushort *)(ar5 + 0xae)) {
    uVar1 = libgcc_divide_helper_0101e4((uint)*(ushort *)(ar5 + 0xae),0x18,ar6_00,ar7);
    ar6_00 = 0xa2;
    *(short *)(ar5 + 0xa2) = *(short *)(ar5 + 0xa2) + (short)uVar1;
  }
  iVar6 = ar6 + 0x30f4;
  FUN_8c0fa334(0x8c35468c,iVar6,ar6_00,ar7);
  uVar1 = FUN_8c01f528(0x8c3dd7dc,iVar6,ar6_00,ar7);
  iVar6 = ar6 + 0x4104;
  FUN_8c01e0a4(uVar1,iVar6,ar6_00,ar7);
  if (*(byte *)(ar5 + 0xa0) < 3) {
    (**(code **)(**(int **)(ar4 + 8) + 0x160))(*(int **)(ar4 + 8),iVar6,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x164))(*(int **)(ar4 + 8),iVar6,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x168))(*(int **)(ar4 + 8),0x1a4,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x16c))
              (*(int **)(ar4 + 8),*(undefined4 *)(ar6 + 0x1b8),ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x170))
              (*(int **)(ar4 + 8),*(undefined4 *)(ar6 + 0x1a8),ar6_00,ar7);
    uVar1 = *(undefined4 *)(ar6 + 0x1ac);
    (**(code **)(**(int **)(ar4 + 8) + 0x174))(*(int **)(ar4 + 8),uVar1,ar6_00,ar7);
    uVar1 = (**(code **)(**(int **)(ar4 + 8) + 0x148))(*(int **)(ar4 + 8),uVar1,ar6_00,ar7);
    FUN_8c0e983c(uVar1,ar6 + 0x14ac,ar6_00,ar7);
    for (iVar6 = 0; iVar6 < 3; iVar6 = iVar6 + 1) {
      iVar8 = (**(code **)(**(int **)(ar4 + 8) + 0x104))(*(int **)(ar4 + 8),iVar6,ar6_00,ar7);
      puVar7 = (undefined8 *)(ar6 + iVar6 * 0x10 + 0x1bc);
      if (cVar15 == '\0') {
        *(undefined4 *)(iVar8 + 4) = *(undefined4 *)puVar7;
      }
      else {
        *(undefined8 *)(iVar8 + 4) = *puVar7;
      }
      puVar7 = (undefined8 *)(ar6 + iVar6 * 0x10 + 0x1c0);
      if (cVar15 == '\0') {
        *(undefined4 *)(iVar8 + 8) = *(undefined4 *)puVar7;
      }
      else {
        *(undefined8 *)(iVar8 + 8) = *puVar7;
      }
      puVar7 = (undefined8 *)(ar6 + iVar6 * 0x10 + 0x1c4);
      if (cVar15 == '\0') {
        *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)puVar7;
      }
      else {
        *(undefined8 *)(iVar8 + 0xc) = *puVar7;
      }
      if (iVar6 == 0) {
        if (cVar15 == '\0') {
          in_dr2 = (double)CONCAT44(*(undefined4 *)(iVar8 + 4),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = *(double *)(iVar8 + 4);
        }
        if (cVar15 == '\0') {
          dVar11 = (double)CONCAT44(0xc28983d7,(float)(int)*(char *)(ar6 + 0x14ac));
        }
        else {
          dVar11 = 4.6046138430016596e-232;
        }
        if (cVar14 == '\0') {
          in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) +
                                    SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20),
                                    SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + dVar11 * dVar11;
        }
        if (cVar15 == '\0') {
          *(int *)(iVar8 + 4) = (int)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          *(double *)(iVar8 + 4) = in_dr2;
        }
      }
    }
    for (iVar6 = 0; uVar5 = (uint)*(byte *)(ar6 + 0x1b4), iVar6 < (int)uVar5; iVar6 = iVar6 + 1) {
      if (*(int *)(iVar6 * 0xf0 + ar6 + 0x204) != -1) {
        ar6_00 = ar5 + 0xac;
        iVar8 = FUN_8c0ce994(ar4,iVar6 * 0xf0 + ar6 + 0x1ec,ar6_00,ar7);
        (**(code **)(*(int *)(iVar8 + 8) + 0xa0))(iVar8,iVar6 * 0xf0 + ar6 + 0x218,ar6_00,ar7);
        iVar3 = FUN_8c0cea98(ar4,iVar8,ar6_00,ar7);
        if (iVar3 == 1) {
          FUN_8c0ceb04(ar4,iVar8,ar6_00,ar7);
        }
        (**(code **)(**(int **)(ar4 + 8) + 0x4c))(*(int **)(ar4 + 8),iVar8,ar6_00,ar7);
      }
    }
    (**(code **)(**(int **)(ar4 + 8) + 0x178))(*(int **)(ar4 + 8),uVar5,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x160))(*(int **)(ar4 + 8),uVar5,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x17c))(*(int **)(ar4 + 8),uVar5,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x164))(*(int **)(ar4 + 8),uVar5,ar6_00,ar7);
    uVar5 = 0x1b8;
    if (*(int *)(ar6 + 0x1b8) == 1) {
      uVar5 = **(uint **)(ar4 + 8);
      (**(code **)(uVar5 + 0x188))(*(uint **)(ar4 + 8),uVar5,ar6_00,ar7);
      (**(code **)(**(int **)(ar4 + 8) + 0x168))(*(int **)(ar4 + 8),uVar5,ar6_00,ar7);
    }
  }
  else {
    uVar5 = *(uint *)(ar6 + 0x278c);
    uVar4 = (**(code **)(**(int **)(ar4 + 0x10) + 0x144))(*(int **)(ar4 + 0x10),0x278c,ar6_00,ar7);
    iVar6 = libgcc_divide_helper_0103d0(uVar5,7,ar6_00,ar7);
    if (iVar6 == 3) {
      uVar5 = uVar4 - uVar5;
      if (uVar4 < uVar5) {
        uVar5 = uVar4 - 1;
      }
    }
    else if (iVar6 == 4) {
      if ((bStack_32 < 6) || (9 < bStack_32)) {
        if ((bStack_32 != 0) && (bStack_32 < 6)) {
          uVar5 = (uVar4 >> 1) + (uVar4 >> 2);
        }
      }
      else {
        uVar5 = uVar4 >> 2;
      }
    }
    else if (iVar6 == 5) {
      if (cVar14 == '\0') {
        dVar11 = (double)CONCAT44((float)(int)uVar5,uVar10);
      }
      else {
        dVar11 = (double)(int)uVar5;
      }
      dVar9 = (double)(in_dr0 & 0xffffffff);
      fVar12 = (float)((ulonglong)dVar11 >> 0x20);
      if (cVar14 == '\0') {
        bVar13 = fVar12 < 0.0;
      }
      else {
        bVar13 = dVar11 < dVar9;
      }
      if (bVar13) {
        if (cVar15 == '\0') {
          dVar9 = (double)CONCAT44(0x4f800000,(int)in_dr0);
        }
        else {
          dVar9 = 0.000878906487741915;
        }
        if (cVar14 == '\0') {
          dVar11 = (double)CONCAT44(fVar12 + (float)((ulonglong)dVar9 >> 0x20),SUB84(dVar11,0));
        }
        else {
          dVar11 = dVar11 + dVar9;
        }
      }
      if (cVar15 == '\0') {
        dVar9 = (double)CONCAT44(0x3f4ccccd,SUB84(dVar9,0));
      }
      else {
        dVar9 = 3.533694962840277e+72;
      }
      if (cVar14 == '\0') {
        dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) *
                                  (float)((ulonglong)dVar9 >> 0x20),SUB84(dVar11,0));
      }
      else {
        dVar11 = dVar11 * dVar9;
      }
      if (cVar15 == '\0') {
        dVar9 = (double)CONCAT44(0x4f000000,SUB84(dVar9,0));
      }
      else {
        dVar9 = -9.046259633960061e+74;
      }
      fVar12 = (float)((ulonglong)dVar11 >> 0x20);
      if (cVar14 == '\0') {
        bVar13 = (float)((ulonglong)dVar9 >> 0x20) < fVar12;
      }
      else {
        bVar13 = dVar9 < dVar11;
      }
      if (bVar13) {
        if (cVar15 == '\0') {
          dVar9 = (double)CONCAT44(0xcf800000,SUB84(dVar9,0));
        }
        else {
          dVar9 = 1.1334820462917686e+193;
        }
        if (cVar14 == '\0') {
          dVar11 = (double)CONCAT44(fVar12 + (float)((ulonglong)dVar9 >> 0x20),SUB84(dVar11,0));
        }
        else {
          dVar11 = dVar11 + dVar9;
        }
      }
      if (cVar14 == '\0') {
        uVar5 = (uint)(float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        uVar5 = (uint)dVar11;
      }
    }
    else {
      uVar5 = 0;
    }
    (**(code **)(**(int **)(ar4 + 0x10) + 0xc4))(*(int **)(ar4 + 0x10),uVar5,ar6_00,ar7);
    for (uVar4 = 0; (int)uVar4 < (int)(uint)*(byte *)(ar6 + 0x2790); uVar4 = uVar4 + 1) {
      uVar5 = uVar4;
      if (*(int *)(uVar4 * 0xf0 + ar6 + 0x27ac) != -1) {
        uVar1 = *(undefined4 *)(uVar4 * 0xf0 + ar6 + 0x27e8);
        uVar5 = s_Shell_0fef9c(0x8c3eb324,*(undefined4 *)(uVar4 * 0xf0 + ar6 + 0x27ac),uVar1,ar7);
        (**(code **)(*(int *)(uVar5 + 8) + 0x104))(uVar5,uVar4 * 0xf0 + ar6 + 0x2794,uVar1,ar7);
        iVar6 = ar5 + 0xac;
        (**(code **)(*(int *)(uVar5 + 8) + 0x98))(uVar5,iVar6,uVar1,ar7);
        a6_00 = *(code **)(*(int *)(uVar5 + 8) + 0x148);
        uVar1 = (*a6_00)(uVar5,iVar6,a6_00,ar7);
        ar6_00 = (uint)(short)uVar1;
        (**(code **)(*(int *)(uVar5 + 8) + 0xe0))(uVar5,0x8c3eb334,ar6_00,ar7);
        (**(code **)(*(int *)(uVar5 + 8) + 0x5c))(uVar5,*(int *)(uVar5 + 8),ar6_00,ar7);
        (**(code **)(*(int *)(uVar5 + 8) + 0xa0))(uVar5,uVar4 * 0xf0 + ar6 + 0x27c0,ar6_00,ar7);
        (**(code **)(**(int **)(ar4 + 0x10) + 0x4c))(*(int **)(ar4 + 0x10),uVar5,ar6_00,ar7);
      }
    }
  }
  (**(code **)(**(int **)(ar4 + 0xc) + 0x168))(*(int **)(ar4 + 0xc),uVar5,ar6_00,ar7);
  uVar1 = (**(code **)(**(int **)(ar4 + 0xc) + 0x148))(*(int **)(ar4 + 0xc),uVar5,ar6_00,ar7);
  iVar6 = ar6 + 0x2784;
  FUN_8c0e983c(uVar1,iVar6,ar6_00,ar7);
  for (iVar8 = 0; iVar8 < (int)(uint)*(byte *)(ar6 + 0x14c0); iVar8 = iVar8 + 1) {
    iVar6 = *(int *)(iVar8 * 0xf0 + ar6 + 0x14dc);
    if (iVar6 != -1) {
      if ((*(int *)(iVar8 * 0xf0 + ar6 + 0x14dc) == 0xd) ||
         (*(int *)(iVar8 * 0xf0 + ar6 + 0x14dc) == 0xc)) {
        _DAT_8c431a54 = 1;
      }
      ar6_00 = ar5 + 0xac;
      iVar6 = FUN_8c0ce994(ar4,iVar8 * 0xf0 + ar6 + 0x14c4,ar6_00,ar7);
      (**(code **)(*(int *)(iVar6 + 8) + 0xa0))(iVar6,iVar8 * 0xf0 + ar6 + 0x14f0,ar6_00,ar7);
      (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),iVar6,ar6_00,ar7);
    }
  }
  (**(code **)(**(int **)(ar4 + 0xc) + 0x188))(*(int **)(ar4 + 0xc),iVar6,ar6_00,ar7);
  (**(code **)(**(int **)(ar4 + 0xc) + 0x168))(*(int **)(ar4 + 0xc),iVar6,ar6_00,ar7);
  if (*(int *)(ar6 + 200) != -1) {
    iVar6 = FUN_8c0ce994(ar4,ar6 + 0xb0,ar5 + 0xac,ar7);
    a5 = auStack_44;
    ar6_00 = a6;
    (**(code **)(*(int *)(iVar6 + 8) + 0x150))(iVar6,a5,a6,ar7);
    FUN_8c036988(iVar6,a5,ar6_00,ar7);
    a4 = *(int **)(ar4 + a6 * 4 + 8);
    (**(code **)(*a4 + 0x50))(a4,iVar6,ar6_00,ar7);
  }
  uVar1 = Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0cc784\n.set _FUN_8c0cc784, _FUN_8c0cc784_def\n");
