#include "../decls.h"
int FUN_8c0e2a14_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  double in_dr0;
  double dVar6;
  undefined4 in_fr3;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined4 auStack_18 [2];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar5 = 0;
  uVar4 = 0x80;
  iVar1 = ar4[0x409];
  if (iVar1 == 0) {
    uVar3 = 0;
    FUN_8c0d0538(ar4 + 0x4ec9,0,ar6,ar7);
    (**(code **)(*ar4 + 0x15c))(ar4,uVar3,ar6,ar7);
    iVar1 = FUN_8c0e31e8(ar5,uVar3,ar6,ar7);
    if (iVar1 == 1) {
      ar4[0x409] = 1;
      piVar2 = ar4 + 0x412;
      if (cVar9 == '\0') {
        *piVar2 = 0x43df8000;
        in_dr0 = (double)CONCAT44(0x43df8000,SUB84(in_dr0,0));
        ar4[0x414] = 0x43df8000;
      }
      else {
        piVar2[0] = 0x43df8000;
        piVar2[1] = 0x1050;
        in_dr0 = 8.86201702588265e-311;
        ar4[0x414] = 0x43df8000;
        ar4[0x415] = 0x1050;
      }
    }
    else {
      iVar1 = FUN_8c0e319c(ar5,uVar3,ar6,ar7);
      if (iVar1 == 1) {
        iVar1 = ar4[0x408];
        if (iVar1 == 0) {
          ar4[0x408] = 1;
        }
        else if (iVar1 == 1) {
          ar4[0x408] = 3;
        }
        else if (iVar1 == 3) {
          ar4[0x408] = 0;
        }
        ar4[0x409] = 1;
        piVar2 = ar4 + 0x412;
        if (cVar9 == '\0') {
          *piVar2 = 0x43df8000;
          in_dr0 = (double)CONCAT44(0x43df8000,SUB84(in_dr0,0));
          ar4[0x414] = 0x43df8000;
        }
        else {
          piVar2[0] = 0x43df8000;
          piVar2[1] = 0x1050;
          in_dr0 = 8.86201702588265e-311;
          ar4[0x414] = 0x43df8000;
          ar4[0x415] = 0x1050;
        }
      }
      else {
        iVar1 = FUN_8c0e3150(ar5,uVar3,ar6,ar7);
        if (iVar1 == 1) {
          iVar1 = ar4[0x408];
          if (iVar1 == 0) {
            ar4[0x408] = 3;
          }
          else if (iVar1 == 1) {
            ar4[0x408] = 0;
          }
          else if (iVar1 == 3) {
            ar4[0x408] = 1;
          }
          ar4[0x409] = 1;
          piVar2 = ar4 + 0x412;
          if (cVar9 == '\0') {
            *piVar2 = 0x43df8000;
            in_dr0 = (double)CONCAT44(0x43df8000,SUB84(in_dr0,0));
            ar4[0x414] = 0x43df8000;
          }
          else {
            piVar2[0] = 0x43df8000;
            piVar2[1] = 0x1050;
            in_dr0 = 8.86201702588265e-311;
            ar4[0x414] = 0x43df8000;
            ar4[0x415] = 0x1050;
          }
        }
      }
    }
  }
  else {
    uVar3 = ar5;
    if (iVar1 == 1) {
      in_dr0 = (double)CONCAT44(0x43c58000,ar4[0x412]);
      if (((float)ar4[0x412] == 395.0) && (iVar1 = FUN_8c0e30f0(ar5,ar5,ar6,ar7), iVar1 == 1)) {
        ar4[0x409] = 2;
      }
    }
    else if (iVar1 == 2) {
      iVar1 = FUN_8c0e319c(ar5,ar5,ar6,ar7);
      if (iVar1 == 1) {
        iVar1 = ar4[0x408];
        if (iVar1 == 0) {
          ar4[0x408] = 1;
        }
        else if (iVar1 == 1) {
          ar4[0x408] = 3;
        }
        else if (iVar1 == 3) {
          ar4[0x408] = 0;
        }
      }
      else {
        iVar1 = FUN_8c0e3150(ar5,uVar3,ar6,ar7);
        if (iVar1 == 1) {
          iVar1 = ar4[0x408];
          if (iVar1 == 0) {
            ar4[0x408] = 3;
          }
          else if (iVar1 == 1) {
            ar4[0x408] = 0;
          }
          else if (iVar1 == 3) {
            ar4[0x408] = 1;
          }
        }
      }
    }
  }
  iVar1 = FUN_8c0e30c8(ar5,uVar3,ar6,ar7);
  if (iVar1 == 1) {
    ar4[0x409] = 3;
  }
  if (ar4[0x409] == 2) {
    if (ar4[0x408] == 3) {
      uVar3 = 0;
      FUN_8c0d0538(ar4 + 0x4ec9,0,ar6,ar7);
      (**(code **)(*ar4 + 0x15c))(ar4,uVar3,ar6,ar7);
    }
    if ((ar4[0x408] == 3) && (iVar1 = FUN_8c0e30a0(ar5,uVar3,ar6,ar7), iVar1 == 1)) {
      if ((ar4[0x8a04] == 1) && (ar4[0x8a05] == 1)) {
        ar4[0x8a04] = 0;
        ar4[0x8a05] = 1;
      }
      else if ((ar4[0x8a04] == 0) && (ar4[0x8a05] == 1)) {
        ar4[0x8a04] = 0;
        ar4[0x8a05] = 0;
      }
      else if ((ar4[0x8a04] == 0) && (ar4[0x8a05] == 0)) {
        ar4[0x8a04] = 1;
        ar4[0x8a05] = 1;
      }
      if ((ar4[0x8a04] == 1) || (ar4[0x8a05] == 1)) {
        FUN_8c0d4f3c(ar4 + 0x42b,uVar3,ar6,ar7);
      }
      else {
        FUN_8c0d4f70(ar4 + 0x42b,uVar3,ar6,ar7);
      }
      uVar5 = 0x80;
      uVar4 = 0xff;
      auStack_18[0] = FUN_8c02190c(0x8c2b59d0,uVar3,ar6,ar7);
      uVar3 = 3;
      FUN_8c021994(0x8c2b59d0,auStack_18[0],3,ar7);
      FUN_8c021a8c(0x8c2b59d0,auStack_18,uVar3,ar7);
    }
    else if (ar4[0x408] == 0) {
      iVar1 = FUN_8c0e3078(ar5,uVar3,ar6,ar7);
      if (iVar1 == 1) {
        uVar3 = 1;
        FUN_8c0d0538(ar4 + 0x4ec9,1,ar6,ar7);
        uVar5 = 0x80;
        uVar4 = 0xff;
      }
      else {
        uVar3 = 0;
        FUN_8c0d0538(ar4 + 0x4ec9,0,ar6,ar7);
        uVar5 = 0;
        uVar4 = 0x80;
      }
      (**(code **)(*ar4 + 0x15c))(ar4,uVar3,ar6,ar7);
    }
    else if (ar4[0x408] == 1) {
      iVar1 = FUN_8c0e3050(ar5,uVar3,ar6,ar7);
      if (iVar1 == 1) {
        (**(code **)(*ar4 + 0x158))(ar4,uVar3,ar6,ar7);
        FUN_8c023040(ar4 + 0x8bae,uVar3,ar6,ar7);
        if (cVar9 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
          dVar6 = (double)CONCAT44(0x3f400000,ar4[0x8c03]);
        }
        else {
          dVar6 = 3.03505338272344e-309;
        }
        if (cVar8 == '\0') {
          bVar7 = (float)((ulonglong)in_dr0 >> 0x20) <
                  SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          bVar7 = in_dr0 < dVar6 * dVar6;
        }
        uVar5 = 0x80;
        uVar4 = 0xff;
        if (bVar7) {
          FUN_8c0d7508(ar4 + 0x8bad,uVar3,ar6,ar7);
        }
      }
      else {
        (**(code **)(*ar4 + 0x15c))(ar4,uVar3,ar6,ar7);
        uVar5 = 0;
        uVar4 = 0x80;
      }
      FUN_8c0d0538(ar4 + 0x4ec9,0,ar6,ar7);
    }
  }
  iVar1 = 0;
  if (ar4[0x409] != 0) {
    *(undefined2 *)(ar4 + 0x417) = uVar5;
    *(undefined2 *)(ar4 + 0x418) = uVar5;
    *(undefined2 *)(ar4 + 0x419) = uVar4;
    *(undefined2 *)(ar4 + 0x41a) = uVar4;
    iVar1 = ar4[0x408];
    if (iVar1 == 0) {
      *(undefined2 *)((int)ar4 + 0x105e) = 0x40;
      *(undefined2 *)((int)ar4 + 0x1062) = 0x20;
      *(undefined2 *)((int)ar4 + 0x1066) = 0x20;
      iVar1 = 0x106a;
      *(undefined2 *)((int)ar4 + 0x106a) = 0x40;
    }
    else if (iVar1 == 1) {
      *(undefined2 *)((int)ar4 + 0x105e) = 0x60;
      *(undefined2 *)((int)ar4 + 0x1062) = 0x40;
      *(undefined2 *)((int)ar4 + 0x1066) = 0x40;
      iVar1 = 0x106a;
      *(undefined2 *)((int)ar4 + 0x106a) = 0x60;
    }
    else if (iVar1 == 3) {
      *(undefined2 *)((int)ar4 + 0x105e) = 0x20;
      *(undefined2 *)((int)ar4 + 0x1062) = 0;
      *(undefined2 *)((int)ar4 + 0x1066) = 0;
      iVar1 = 0x106a;
      *(undefined2 *)((int)ar4 + 0x106a) = 0x20;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0e2a14\n.set _FUN_8c0e2a14, _FUN_8c0e2a14_def\n");
