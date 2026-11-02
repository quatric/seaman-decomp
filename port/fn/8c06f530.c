#include "../decls.h"
undefined4 Class_12a25c_m1_06f530_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_fr1;
  float fVar3;
  code *pcVar6;
  double dVar4;
  double dVar5;
  float fVar7;
  double in_dr14;
  double in_xd0;
  double dVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined4 in_stack_ffffff60;
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  puVar1 = ar5;
  if ((((*(int *)(ar4 + 0x124) == 0x10) || (*(int *)(ar4 + 0x124) == 0x11)) ||
      (*(int *)(ar4 + 0x124) == 0x12)) ||
     ((*(int *)(ar4 + 0x124) == 0x18 || (*(int *)(ar4 + 0x124) == 6)))) {
    *(undefined1 *)(ar4 + 0x210) = *(undefined1 *)(ar5 + 10);
  }
  else {
    Class_129cbc_m1_031598(ar4,ar5,ar6,ar7);
  }
  *(undefined4 *)(ar4 + 0x2a4) = 0;
  *(undefined4 *)(ar4 + 0x218) = 0;
  if (ar5[4] != 1) {
    if (cVar11 != '\0') {
      in_fr1 = 0x43800000;
    }
    FUN_8c03207c(ar4,puVar1,ar6,ar7);
    FUN_8c0324ac(ar4,puVar1,ar6,ar7);
  }
  ar5_00 = pure_virtual_stub(ar4,ar5,ar6,ar7);
  if ((*(int *)(ar4 + 0x178) == 1) && (ar5_00 != 1)) {
    *(undefined4 *)(ar4 + 0x178) = 0;
  }
  FUN_8c02f2c0(*ar5,ar5_00,ar6,ar7,in_stack_ffffff60);
  if ((((*(int *)(ar4 + 0x124) == 0x10) || (*(int *)(ar4 + 0x124) == 0x11)) ||
      (*(int *)(ar4 + 0x124) == 0x12)) || (*(int *)(ar4 + 0x124) == 0x18)) {
    Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7,auStack_74);
    Vec3_add(auStack_74,ar4 + 0x90,ar6,ar7,auStack_84);
    Vec3_assign(ar4 + 4,auStack_84,ar6,ar7);
    Vec3_dtor(auStack_84,0xffffffff,ar6,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_74,0xffffffff,ar6,ar7);
    if (cVar11 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(*(int *)(uint)ar5[1] + 4));
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 8),in_fr1);
    }
    else {
      dVar5 = *(double *)(ar4 + 8);
    }
    if (cVar10 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 SUB84(in_dr14,0) + (float)((ulonglong)dVar5 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 + dVar5;
    }
    (**(code **)(*(int *)(uint)ar5[6] + 0x184))((int *)(uint)ar5[6],uVar2,ar6,ar7);
    fVar3 = (float)((ulonglong)dVar5 >> 0x20);
    if (cVar11 == '\0') {
      fVar7 = 160.0;
      dVar5 = in_xd0;
    }
    else {
      fVar3 = 160.0;
      fVar7 = 9.80909e-43;
    }
    if ((cVar10 == '\0' && fVar7 < fVar3) && (ar5[4] != 3)) {
      (**(code **)(*(int *)(uint)ar5[6] + 0x184))((int *)(uint)ar5[6],uVar2,ar6,ar7);
      dVar4 = (double)CONCAT44(fVar7,fVar3);
      if (cVar10 == '\0') {
        bVar9 = SUB84(in_dr14,0) < fVar7;
      }
      else {
        bVar9 = in_dr14 < dVar4;
      }
      if (!bVar9) {
        (**(code **)(*(int *)(uint)ar5[6] + 0x184))((int *)(uint)ar5[6],uVar2,ar6,ar7);
        dVar8 = dVar4;
        if (cVar11 == '\0') {
          dVar4 = (double)((ulonglong)dVar4 >> 0x20);
          dVar8 = dVar5;
        }
        if (cVar11 == '\0') {
          dVar5 = (double)CONCAT44(*(undefined4 *)(*(int *)(uint)ar5[1] + 4),SUB84(dVar4,0));
        }
        else {
          dVar5 = *(double *)(*(int *)(uint)ar5[1] + 4);
        }
        if (cVar10 == '\0') {
          fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar5 - dVar5,0);
        }
        if (cVar11 == '\0') {
          *(float *)(ar4 + 8) = fVar3;
        }
        else {
          *(double *)(ar4 + 8) = dVar8;
        }
      }
    }
    vec3_clear(ar4 + 700,uVar2,ar6,ar7);
  }
  else {
    Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7,auStack_24);
    Vec3_add(auStack_24,ar4 + 0x90,ar6,ar7,auStack_34);
    Vec3_add(auStack_34,ar4 + 0x6c,ar6,ar7,auStack_44);
    Vec3_add(auStack_44,ar4 + 0x13c,ar6,ar7,auStack_54);
    Vec3_add(auStack_54,ar4 + 700,ar6,ar7,auStack_64);
    Vec3_assign(ar4 + 4,auStack_64,ar6,ar7);
    Vec3_dtor(auStack_64,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_54,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_44,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_34,0xffffffff,ar6,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_24,0xffffffff,ar6,ar7);
    if (cVar11 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(*(int *)(uint)ar5[1] + 4));
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 8),in_fr1);
    }
    else {
      dVar5 = *(double *)(ar4 + 8);
    }
    if (cVar10 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 SUB84(in_dr14,0) + (float)((ulonglong)dVar5 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 + dVar5;
    }
    (**(code **)(*(int *)(uint)ar5[6] + 0x184))((int *)(uint)ar5[6],uVar2,ar6,ar7);
    fVar3 = (float)((ulonglong)dVar5 >> 0x20);
    if (cVar11 == '\0') {
      pcVar6 = (code *)0x43200000;
      dVar5 = in_xd0;
    }
    else {
      fVar3 = 160.0;
      pcVar6 = vec3_clear;
    }
    if ((cVar10 == '\0' && (float)(uint)pcVar6 < fVar3) && (ar5[4] != 3)) {
      (**(code **)(*(int *)(uint)ar5[6] + 0x184))((int *)(uint)ar5[6],uVar2,ar6,ar7);
      dVar4 = (double)CONCAT44(pcVar6,fVar3);
      if (cVar10 == '\0') {
        bVar9 = SUB84(in_dr14,0) < (float)(uint)pcVar6;
      }
      else {
        bVar9 = in_dr14 < dVar4;
      }
      if (!bVar9) {
        (**(code **)(*(int *)(uint)ar5[6] + 0x184))((int *)(uint)ar5[6],uVar2,ar6,ar7);
        dVar8 = dVar4;
        if (cVar11 == '\0') {
          dVar4 = (double)((ulonglong)dVar4 >> 0x20);
          dVar8 = dVar5;
        }
        if (cVar11 == '\0') {
          dVar5 = (double)CONCAT44(*(undefined4 *)(*(int *)(uint)ar5[1] + 4),SUB84(dVar4,0));
        }
        else {
          dVar5 = *(double *)(*(int *)(uint)ar5[1] + 4);
        }
        if (cVar10 == '\0') {
          fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar5 - dVar5,0);
        }
        if (cVar11 == '\0') {
          *(float *)(ar4 + 8) = fVar3;
        }
        else {
          *(double *)(ar4 + 8) = dVar8;
        }
      }
    }
    vec3_clear(ar4 + 0x13c,uVar2,ar6,ar7);
    vec3_clear(ar4 + 700,uVar2,ar6,ar7);
  }
  if (*(int *)(ar4 + 0x124) != 2) {
    FUN_8c031ab4(ar4,*(undefined4 *)(ar5[1] + 4),ar6,ar7);
  }
  *(undefined4 *)(ar4 + 0x21c) = 0;
  *(undefined4 *)(ar4 + 0x1d4) = 0;
  return 0x1d4;
}

__asm__(".globl _Class_12a25c_m1_06f530\n.set _Class_12a25c_m1_06f530, _Class_12a25c_m1_06f530_def\n");
