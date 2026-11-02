#include "../decls.h"
undefined4 FUN_8c0dbf90_def(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  double in_dr0;
  double dVar4;
  float fVar5;
  undefined4 in_fr3;
  double dVar6;
  ulonglong in_dr14;
  double dVar7;
  double in_xd0;
  double in_xd14;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  dVar7 = (double)(in_dr14 & 0xffffffff00000000);
  piVar2 = ar5;
  iVar1 = FUN_8c100a58(ar5,ar5,ar6,ar7);
  if (iVar1 == 1) {
    piVar2 = (int *)0x0;
    FUN_8c0c51a0(ar5,0,ar6,ar7);
    FUN_8c0dc27c(ar5,piVar2,ar6,ar7);
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(ar4[0x29c],in_fr3);
      dVar4 = (double)CONCAT44(0x41200000,(int)((ulonglong)in_dr0 >> 0x20));
    }
    else {
      dVar6 = *(double *)(ar4 + 0x29c);
      dVar4 = -1.4003621681683483e-250;
      in_xd0 = in_dr0;
    }
    if (cVar8 == '\0') {
      fVar5 = (float)((ulonglong)dVar4 >> 0x20);
      fVar3 = SUB84(dVar4,0) * fVar5;
      in_dr0 = (double)CONCAT44(fVar5,fVar3);
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + fVar3,SUB84(dVar6,0));
    }
    else {
      in_dr0 = dVar4 * dVar4;
      dVar6 = dVar6 + in_dr0;
    }
    if (cVar9 == '\0') {
      ar4[0x29c] = (int)((ulonglong)dVar6 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x29c) = dVar6;
    }
  }
  else {
    iVar1 = FUN_8c100abc(ar5,piVar2,ar6,ar7);
    if (iVar1 == 1) {
      piVar2 = (int *)0x0;
      FUN_8c0c51a0(ar5,0,ar6,ar7);
      FUN_8c0dc27c(ar5,piVar2,ar6,ar7);
      if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(ar4[0x29c],in_fr3);
        dVar4 = (double)CONCAT44(0x41200000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        dVar6 = *(double *)(ar4 + 0x29c);
        dVar4 = -1.4003621681683483e-250;
        in_xd0 = in_dr0;
      }
      if (cVar8 == '\0') {
        fVar5 = (float)((ulonglong)dVar4 >> 0x20);
        fVar3 = SUB84(dVar4,0) * fVar5;
        in_dr0 = (double)CONCAT44(fVar5,fVar3);
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + fVar3,SUB84(dVar6,0));
      }
      else {
        in_dr0 = dVar4 * dVar4;
        dVar6 = dVar6 + in_dr0;
      }
      if (cVar9 == '\0') {
        ar4[0x29c] = (int)((ulonglong)dVar6 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x29c) = dVar6;
      }
    }
  }
  (**(code **)(ar4[0x2dc] + 8))(ar4 + 0x2dc,piVar2,ar6,ar7);
  dVar6 = in_dr0;
  if (cVar9 == '\0') {
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    dVar6 = in_xd14;
  }
  iVar1 = FUN_8c100b20(ar5,piVar2,ar6,ar7);
  if (iVar1 == 1) {
    FUN_8c0dc27c(ar5,piVar2,ar6,ar7);
    if (cVar8 == '\0') {
      in_dr0 = (double)CONCAT44(-(float)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0));
    }
    else {
      in_dr0 = -in_dr0;
    }
    dVar4 = dVar6;
    if (cVar9 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(dVar7,0));
      dVar4 = in_xd0;
    }
    if (cVar8 == '\0') {
      fVar3 = SUB84(in_dr0,0) * (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      fVar3 = SUB84(in_dr0 * in_dr0,0);
    }
    if (cVar9 == '\0') {
      in_dr0 = (double)CONCAT44(ar4[0x29b],fVar3);
    }
    else {
      in_dr0 = *(double *)(ar4 + 0x29b);
    }
    if (cVar8 == '\0') {
      fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)CONCAT44(fVar3,SUB84(in_dr0,0) + fVar3);
    }
    else {
      in_dr0 = in_dr0 + in_dr0;
    }
    if (cVar9 == '\0') {
      ar4[0x29b] = SUB84(in_dr0,0);
    }
    else {
      *(double *)(ar4 + 0x29b) = dVar4;
    }
    FUN_8c1004b4(ar5,piVar2,ar6,ar7);
  }
  else {
    iVar1 = FUN_8c100b84(ar5,piVar2,ar6,ar7);
    if (iVar1 == 1) {
      FUN_8c0dc27c(ar5,piVar2,ar6,ar7);
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(-(float)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0));
      }
      else {
        in_dr0 = -in_dr0;
      }
      dVar4 = dVar6;
      if (cVar9 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(dVar7,0));
        dVar4 = in_xd0;
      }
      if (cVar8 == '\0') {
        fVar3 = SUB84(in_dr0,0) * (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        fVar3 = SUB84(in_dr0 * in_dr0,0);
      }
      if (cVar9 == '\0') {
        in_dr0 = (double)CONCAT44(ar4[0x29b],fVar3);
      }
      else {
        in_dr0 = *(double *)(ar4 + 0x29b);
      }
      if (cVar8 == '\0') {
        fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
        in_dr0 = (double)CONCAT44(fVar3,SUB84(in_dr0,0) + fVar3);
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
      }
      if (cVar9 == '\0') {
        ar4[0x29b] = SUB84(in_dr0,0);
      }
      else {
        *(double *)(ar4 + 0x29b) = dVar4;
      }
      FUN_8c10052c(ar5,piVar2,ar6,ar7);
    }
  }
  iVar1 = FUN_8c100be8(ar5,piVar2,ar6,ar7);
  if (iVar1 == 1) {
    FUN_8c0dc26c(ar5,piVar2,ar6,ar7);
    if (cVar8 == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),
                               SUB84(dVar7,0) * (float)((ulonglong)in_dr0 >> 0x20));
    }
    else {
      dVar7 = dVar7 * in_dr0;
    }
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(ar4[0x29a],SUB84(in_dr0,0));
    }
    else {
      dVar4 = *(double *)(ar4 + 0x29a);
    }
    if (cVar8 == '\0') {
      fVar3 = SUB84(dVar7,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar7 + dVar4,0);
    }
    if (cVar9 == '\0') {
      ar4[0x29a] = (int)fVar3;
    }
    else {
      *(double *)(ar4 + 0x29a) = dVar6;
    }
    FUN_8c1005a4(ar5,piVar2,ar6,ar7);
  }
  else {
    iVar1 = FUN_8c100c34(ar5,piVar2,ar6,ar7);
    if (iVar1 == 1) {
      FUN_8c0dc26c(ar5,piVar2,ar6,ar7);
      if (cVar8 == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),
                                 SUB84(dVar7,0) * (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        dVar7 = dVar7 * in_dr0;
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44(ar4[0x29a],SUB84(in_dr0,0));
      }
      else {
        dVar4 = *(double *)(ar4 + 0x29a);
      }
      if (cVar8 == '\0') {
        fVar3 = SUB84(dVar7,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar7 + dVar4,0);
      }
      if (cVar9 == '\0') {
        ar4[0x29a] = (int)fVar3;
      }
      else {
        *(double *)(ar4 + 0x29a) = dVar6;
      }
      FUN_8c10061c(ar5,piVar2,ar6,ar7);
    }
  }
  piVar2 = ar5;
  FUN_8c0dc990(ar4,ar5,ar6,ar7);
  if (((ar4[9] != 2) && (ar4[0x275] != 0)) && (iVar1 = FUN_8c0dc244(ar5,piVar2,ar6,ar7), iVar1 == 1)
     ) {
    piVar2 = (int *)(uint)ar4[0x275];
    FUN_8c0d69a8(ar4 + 0x29a,piVar2,ar6,ar7);
    ar4[0x275] = 0;
    FUN_8c0c51c4(ar5,piVar2,ar6,ar7);
  }
  iVar1 = FUN_8c10022c(ar5,piVar2,ar6,ar7);
  if (iVar1 == 1) {
    piVar2 = ar4 + 0x29a;
    (**(code **)(*ar4 + 0x68))(ar4,piVar2,ar6,ar7);
  }
  FUN_8c1002a8(ar5,piVar2,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0dbf90\n.set _FUN_8c0dbf90, _FUN_8c0dbf90_def\n");
