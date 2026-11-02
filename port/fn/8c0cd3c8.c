#include "../decls.h"
undefined4 FUN_8c0cd3c8_def(int ar4,int ar5,double *ar6,undefined4 ar7)

{
  int a6;
  undefined4 uVar1;
  undefined4 uVar2;
  uint ar4_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *a4;
  code *pcVar6;
  undefined1 *a5;
  double *ar6_00;
  ulonglong in_dr0;
  double dVar7;
  double in_dr2;
  undefined4 uVar8;
  double dVar9;
  float fVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  int iStack_4c;
  int iStack_48;
  undefined1 auStack_44 [16];
  ushort uStack_34;
  byte bStack_32;
  byte bStack_31;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar8 = 0;
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_44,ar5,ar6,ar7);
  FUN_8c0b9d14(ar5,&uStack_34,ar6_00,ar7);
  *(undefined2 *)(ar5 + 0x8c) = *(undefined2 *)((int)ar6 + 0x14);
  *(undefined2 *)(ar5 + 0x8e) = *(undefined2 *)((int)ar6 + 0x16);
  *(undefined2 *)(ar5 + 0x90) = *(undefined2 *)(ar6 + 3);
  *(undefined2 *)(ar5 + 0x92) = *(undefined2 *)((int)ar6 + 0x1a);
  *(undefined2 *)(ar5 + 0x94) = *(undefined2 *)((int)ar6 + 0x1c);
  *(undefined2 *)(ar5 + 0x96) = *(undefined2 *)((int)ar6 + 0x1e);
  *(undefined2 *)(ar5 + 0x98) = *(undefined2 *)(ar6 + 4);
  *(undefined2 *)(ar5 + 0x9a) = *(undefined2 *)((int)ar6 + 0x22);
  *(undefined2 *)(ar5 + 0x9c) = *(undefined2 *)((int)ar6 + 0x24);
  *(undefined2 *)(ar5 + 0x9e) = *(undefined2 *)((int)ar6 + 0x26);
  *(undefined4 *)(ar5 + 0xa0) = *(undefined4 *)(ar6 + 0x15);
  a6 = *(int *)((int)ar6 + 0xac);
  *(undefined2 *)(ar5 + 0xa2) = *(undefined2 *)(ar6 + 5);
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
          (((*(byte *)(ar5 + 0x8f) < bStack_31 || (*(byte *)(ar5 + 0x8e) < bStack_32)) ||
           (*(ushort *)(ar5 + 0x8c) < uStack_34)))) {
    *(short *)(ar5 + 0xa2) = *(short *)(ar5 + 0xa2) + 1;
  }
  else if (0x17 < *(ushort *)(ar5 + 0xae)) {
    uVar1 = libgcc_divide_helper_0101e4((uint)*(ushort *)(ar5 + 0xae),0x18,ar6_00,ar7);
    ar6_00 = (double *)0xa2;
    *(short *)(ar5 + 0xa2) = *(short *)(ar5 + 0xa2) + (short)uVar1;
  }
  pcVar6 = (code *)((int)ar6 + 0x30f4);
  FUN_8c0fa334(0x8c35468c,pcVar6,ar6_00,ar7);
  uVar1 = FUN_8c01f528(0x8c3dd7dc,pcVar6,ar6_00,ar7);
  pcVar6 = (code *)((int)ar6 + 0x4104);
  FUN_8c01e0a4(uVar1,pcVar6,ar6_00,ar7);
  if (*(byte *)(ar5 + 0xa0) < 3) {
    (**(code **)(**(int **)(ar4 + 8) + 0x160))(*(int **)(ar4 + 8),pcVar6,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x164))(*(int **)(ar4 + 8),pcVar6,ar6_00,ar7);
    iVar4 = **(int **)(ar4 + 8);
    (**(code **)(iVar4 + 0x168))(*(int **)(ar4 + 8),iVar4,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x16c))
              (*(int **)(ar4 + 8),*(undefined4 *)(ar6 + 0x37),ar6_00,ar7);
    ar6_00 = (double *)**(undefined4 **)(ar4 + 8);
    (**(code **)(ar6_00 + 0x2e))(*(undefined4 **)(ar4 + 8),*(undefined4 *)(ar6 + 0x35),ar6_00,ar7);
    uVar1 = *(undefined4 *)((int)ar6 + 0x1ac);
    (**(code **)(**(int **)(ar4 + 8) + 0x174))(*(int **)(ar4 + 8),uVar1,ar6_00,ar7);
    uVar1 = (**(code **)(**(int **)(ar4 + 8) + 0x148))(*(int **)(ar4 + 8),uVar1,ar6_00,ar7);
    FUN_8c0e983c(uVar1,(code *)((int)ar6 + 0x14ac),ar6_00,ar7);
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
      iVar5 = (**(code **)(**(int **)(ar4 + 8) + 0x104))(*(int **)(ar4 + 8),iVar4,ar6_00,ar7);
      pcVar6 = (code *)((int)ar6 + iVar4 * 0x10 + 0x1bc);
      if (cVar13 == '\0') {
        *(undefined4 *)(iVar5 + 4) = *(undefined4 *)pcVar6;
      }
      else {
        *(undefined8 *)(iVar5 + 4) = *(undefined8 *)pcVar6;
      }
      if (cVar13 == '\0') {
        *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(ar6 + iVar4 * 2 + 0x38);
      }
      else {
        *(double *)(iVar5 + 8) = ar6[iVar4 * 2 + 0x38];
      }
      pcVar6 = (code *)((int)ar6 + iVar4 * 0x10 + 0x1c4);
      if (cVar13 == '\0') {
        *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)pcVar6;
      }
      else {
        *(undefined8 *)(iVar5 + 0xc) = *(undefined8 *)pcVar6;
      }
      if (iVar4 == 0) {
        ar6_00 = (double *)(iVar5 + 4);
        if (cVar13 == '\0') {
          in_dr2 = (double)CONCAT44(*(undefined4 *)(iVar5 + 4),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = *(double *)(iVar5 + 4);
        }
        if (cVar13 == '\0') {
          dVar9 = (double)CONCAT44(0xc28983d7,(float)(int)(char)*(undefined4 *)((int)ar6 + 0x14ac));
        }
        else {
          dVar9 = 4.6046138430016596e-232;
        }
        if (cVar12 == '\0') {
          in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) +
                                    SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20),
                                    SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + dVar9 * dVar9;
        }
        if (cVar13 == '\0') {
          *(int *)ar6_00 = (int)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          *ar6_00 = in_dr2;
        }
      }
    }
    for (iVar4 = 0; iVar4 < (int)(uint)(byte)*(undefined4 *)((int)ar6 + 0x1b4); iVar4 = iVar4 + 1) {
      if (*(int *)((int)ar6 + iVar4 * 0xf0 + 0x204) != -1) {
        ar6_00 = (double *)(ar5 + 0xac);
        iVar5 = FUN_8c0cea38(ar4,(code *)((int)ar6 + iVar4 * 0xf0 + 0x1ec),ar6_00,ar7);
        (**(code **)(*(int *)(iVar5 + 8) + 0xa0))(iVar5,ar6 + iVar4 * 0x1e + 0x43,ar6_00,ar7);
        (**(code **)(**(int **)(ar4 + 8) + 0x4c))(*(int **)(ar4 + 8),iVar5,ar6_00,ar7);
      }
    }
    pcVar6 = *(code **)(**(int **)(ar4 + 8) + 0x178);
    (*pcVar6)(*(int **)(ar4 + 8),pcVar6,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x160))(*(int **)(ar4 + 8),pcVar6,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x17c))(*(int **)(ar4 + 8),pcVar6,ar6_00,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x164))(*(int **)(ar4 + 8),pcVar6,ar6_00,ar7);
    if (*(int *)(ar6 + 0x37) == 1) {
      pcVar6 = *(code **)(**(int **)(ar4 + 8) + 0x188);
      (*pcVar6)(*(int **)(ar4 + 8),pcVar6,ar6_00,ar7);
      pcVar6 = *(code **)(ar4 + 8);
      (**(code **)(*(int *)pcVar6 + 0x168))(pcVar6,pcVar6,ar6_00,ar7);
    }
  }
  else {
    ar4_00 = *(uint *)((int)ar6 + 0x278c);
    pcVar6 = *(code **)(**(int **)(ar4 + 0x10) + 0x144);
    uVar3 = (*pcVar6)(*(int **)(ar4 + 0x10),pcVar6,ar6_00,ar7);
    iVar4 = libgcc_divide_helper_0103d0(ar4_00,7,ar6_00,ar7);
    if (iVar4 == 3) {
      ar4_00 = uVar3 - ar4_00;
      if (uVar3 < ar4_00) {
        ar4_00 = uVar3 - 1;
      }
    }
    else if (iVar4 == 4) {
      if ((bStack_32 < 6) || (9 < bStack_32)) {
        if ((bStack_32 != 0) && (bStack_32 < 6)) {
          ar4_00 = (uVar3 >> 1) + (uVar3 >> 2);
        }
      }
      else {
        ar4_00 = uVar3 >> 2;
      }
    }
    else if (iVar4 == 5) {
      if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44((float)(int)ar4_00,uVar8);
      }
      else {
        dVar9 = (double)(int)ar4_00;
      }
      dVar7 = (double)(in_dr0 & 0xffffffff);
      fVar10 = (float)((ulonglong)dVar9 >> 0x20);
      if (cVar12 == '\0') {
        bVar11 = fVar10 < 0.0;
      }
      else {
        bVar11 = dVar9 < dVar7;
      }
      if (bVar11) {
        if (cVar13 == '\0') {
          dVar7 = (double)CONCAT44(0x4f800000,(int)in_dr0);
        }
        else {
          dVar7 = 0.000878906487741915;
        }
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(fVar10 + (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar9,0));
        }
        else {
          dVar9 = dVar9 + dVar7;
        }
      }
      if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x3f4ccccd,SUB84(dVar7,0));
      }
      else {
        dVar7 = 3.533694962840277e+72;
      }
      if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) *
                                 (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar9,0));
      }
      else {
        dVar9 = dVar9 * dVar7;
      }
      if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x4f000000,SUB84(dVar7,0));
      }
      else {
        dVar7 = -9.046259633960061e+74;
      }
      fVar10 = (float)((ulonglong)dVar9 >> 0x20);
      if (cVar12 == '\0') {
        bVar11 = (float)((ulonglong)dVar7 >> 0x20) < fVar10;
      }
      else {
        bVar11 = dVar7 < dVar9;
      }
      if (bVar11) {
        if (cVar13 == '\0') {
          dVar7 = (double)CONCAT44(0xcf800000,SUB84(dVar7,0));
        }
        else {
          dVar7 = 1.0325168201761946e+181;
        }
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(fVar10 + (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar9,0));
        }
        else {
          dVar9 = dVar9 + dVar7;
        }
      }
      if (cVar12 == '\0') {
        ar4_00 = (uint)(float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        ar4_00 = (uint)dVar9;
      }
    }
    else {
      ar4_00 = 0;
    }
    (**(code **)(**(int **)(ar4 + 0x10) + 0xc4))(*(int **)(ar4 + 0x10),ar4_00,ar6_00,ar7);
    for (iVar4 = 0; pcVar6 = (code *)(uint)(byte)*(undefined4 *)(ar6 + 0x4f2), iVar4 < (int)pcVar6;
        iVar4 = iVar4 + 1) {
      if (*(int *)((int)ar6 + iVar4 * 0xf0 + 0x27ac) != -1) {
        uVar1 = *(undefined4 *)(ar6 + iVar4 * 0x1e + 0x4fd);
        iVar5 = s_Shell_0fef9c(0x8c3eb324,*(undefined4 *)((int)ar6 + iVar4 * 0xf0 + 0x27ac),uVar1,
                               ar7);
        (**(code **)(*(int *)(iVar5 + 8) + 0x104))
                  (iVar5,(code *)((int)ar6 + iVar4 * 0xf0 + 0x2794),uVar1,ar7);
        ar6_00 = *(double **)(*(int *)(iVar5 + 8) + 0xa0);
        (*(code *)ar6_00)(iVar5,ar6 + iVar4 * 0x1e + 0x4f8,ar6_00,ar7);
        (**(code **)(**(int **)(ar4 + 0x10) + 0x4c))(*(int **)(ar4 + 0x10),iVar5,ar6_00,ar7);
      }
    }
  }
  (**(code **)(**(int **)(ar4 + 0xc) + 0x168))(*(int **)(ar4 + 0xc),pcVar6,ar6_00,ar7);
  pcVar6 = *(code **)(**(int **)(ar4 + 0xc) + 0x148);
  uVar1 = (*pcVar6)(*(int **)(ar4 + 0xc),pcVar6,ar6_00,ar7);
  pcVar6 = (code *)((int)ar6 + 0x2784);
  FUN_8c0e983c(uVar1,pcVar6,ar6_00,ar7);
  for (iVar4 = 0; iVar4 < (int)(uint)(byte)*(undefined4 *)(ar6 + 0x298); iVar4 = iVar4 + 1) {
    if (*(int *)((int)ar6 + iVar4 * 0xf0 + 0x14dc) != -1) {
      if ((*(int *)((int)ar6 + iVar4 * 0xf0 + 0x14dc) == 0xd) ||
         (*(int *)((int)ar6 + iVar4 * 0xf0 + 0x14dc) == 0xc)) {
        _DAT_8c431a54 = 1;
      }
      ar6_00 = (double *)(ar5 + 0xac);
      pcVar6 = (code *)FUN_8c0cea38(ar4,(code *)((int)ar6 + iVar4 * 0xf0 + 0x14c4),ar6_00,ar7);
      (**(code **)(*(int *)(pcVar6 + 8) + 0xa0))(pcVar6,ar6 + iVar4 * 0x1e + 0x29e,ar6_00,ar7);
      (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),pcVar6,ar6_00,ar7);
    }
  }
  (**(code **)(**(int **)(ar4 + 0xc) + 0x188))(*(int **)(ar4 + 0xc),pcVar6,ar6_00,ar7);
  (**(code **)(**(int **)(ar4 + 0xc) + 0x168))(*(int **)(ar4 + 0xc),pcVar6,ar6_00,ar7);
  if (*(int *)(ar6 + 0x19) != -1) {
    iVar5 = FUN_8c0cea38(ar4,ar6 + 0x16,ar5 + 0xac,ar7);
    a5 = auStack_44;
    iVar4 = a6;
    (**(code **)(*(int *)(iVar5 + 8) + 0x150))(iVar5,a5,a6,ar7);
    FUN_8c036988(iVar5,a5,iVar4,ar7);
    a4 = *(int **)(ar4 + a6 * 4 + 8);
    (**(code **)(*a4 + 0x50))(a4,iVar5,iVar4,ar7);
  }
  uVar1 = Vec3_dtor(auStack_44,0xffffffff,0xffffffff,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0cd3c8\n.set _FUN_8c0cd3c8, _FUN_8c0cd3c8_def\n");
