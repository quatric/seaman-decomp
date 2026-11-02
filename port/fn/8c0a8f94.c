#include "../decls.h"
uint FUN_8c0a8f94_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *ar6_00;
  uint uVar5;
  float fVar6;
  double in_dr0;
  undefined4 uVar8;
  double dVar7;
  double in_dr14;
  char cVar9;
  char cVar10;
  undefined4 in_stack_00000000;
  undefined1 auStack_15c [16];
  undefined1 auStack_14c [12];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [12];
  undefined1 auStack_e4 [16];
  undefined1 auStack_d4 [16];
  undefined1 auStack_c4 [16];
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [12];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar5 = 1;
  uVar4 = ar5;
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x21b8) == 0) {
    switch(*(undefined4 *)(ar4 + 0x2198)) {
    case 1:
      FUN_8c023d7c(in_stack_00000000,uVar4,ar6_00,ar7);
      break;
    case 2:
      FUN_8c023d7c(in_stack_00000000,uVar4,ar6_00,ar7);
      break;
    case 3:
      FUN_8c023d7c(in_stack_00000000,uVar4,ar6_00,ar7);
      break;
    case 4:
      FUN_8c023d7c(in_stack_00000000,uVar4,ar6_00,ar7);
    }
    *(int *)(ar4 + 0x21b8) = *(int *)(ar4 + 0x21b8) + 1;
  }
  else if (*(int *)(ar4 + 0x21b8) != 1) goto LAB_8c0a951a;
  Vec3_assign(auStack_28,ar4 + 0x14,ar6_00,ar7);
  Vec3_ctor_copy(auStack_38,ar5,ar6_00,ar7);
  Vec3_ctor_copy(auStack_48,ar6,ar6_00,ar7);
  ar6_00 = auStack_48;
  iVar3 = FUN_8c0a72b4(ar4,auStack_38,ar6_00,ar7);
  Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7);
  uVar4 = 0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
  if (iVar3 == 0) {
    *(undefined4 *)(ar4 + 0x21b8) = 0;
  }
  uVar5 = (uint)(iVar3 != 0);
  switch(*(undefined4 *)(ar4 + 0x2198)) {
  case 1:
  case 2:
    FUN_8c023138(auStack_28,uVar4,ar6_00,ar7,auStack_b4);
    uVar8 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    FUN_8c023138(ar4 + 0x14,uVar4,ar6_00,ar7,auStack_c4);
    FUN_8c022dac(auStack_b4,auStack_c4,ar6_00,ar7);
    if (cVar10 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),uVar8);
    }
    Vec3_dtor(auStack_c4,0xffffffff,ar6_00,ar7);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_b4,0xffffffff,ar6_00,ar7);
    FUN_8c023138(ar4 + 0x14,uVar4,ar6_00,ar7,auStack_d4);
    FUN_8c023138(auStack_28,uVar4,ar6_00,ar7,auStack_e4);
    Vec3_set_xyz(auStack_f0,uVar4,ar6_00,ar7);
    FUN_8c023484(auStack_e4,auStack_f0,ar6_00,ar7,auStack_100);
    FUN_8c022dac(auStack_d4,auStack_100,ar6_00,ar7);
    if (cVar10 == '\0') {
      in_dr0 = (double)CONCAT44(0x42b40000,uVar8);
    }
    else {
      in_dr0 = 3.65536181321395e-312;
    }
    bVar1 = cVar9 != '\0';
    fVar6 = SUB84(in_dr0,0);
    uVar2 = (ulonglong)in_dr0 >> 0x20;
    Vec3_dtor(auStack_100,0xffffffff,ar6_00,ar7);
    object_dtor_delete(auStack_f0,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_e4,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_d4,0xffffffff,ar6_00,ar7);
    if (bVar1 || fVar6 <= (float)uVar2) {
      if (cVar10 == '\0') {
        in_dr0 = (double)CONCAT44(0xbf800000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = 1.0192512720885868e-72;
      }
      if (cVar9 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) * (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 * in_dr0;
      }
    }
    break;
  case 3:
  case 4:
    FUN_8c023180(auStack_28,uVar4,ar6_00,ar7,auStack_58);
    uVar8 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    FUN_8c023180(ar4 + 0x14,uVar4,ar6_00,ar7,auStack_68);
    FUN_8c022dac(auStack_58,auStack_68,ar6_00,ar7);
    if (cVar10 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),uVar8);
    }
    Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7);
    FUN_8c023180(ar4 + 0x14,uVar4,ar6_00,ar7,auStack_78);
    FUN_8c023180(auStack_28,uVar4,ar6_00,ar7,auStack_88);
    Vec3_set_xyz(auStack_94,uVar4,ar6_00,ar7);
    FUN_8c023484(auStack_88,auStack_94,ar6_00,ar7,auStack_a4);
    FUN_8c022dac(auStack_78,auStack_a4,ar6_00,ar7);
    if (cVar10 == '\0') {
      in_dr0 = (double)CONCAT44(0x42b40000,uVar8);
    }
    else {
      in_dr0 = 5.607597940902e-312;
    }
    bVar1 = cVar9 != '\0';
    fVar6 = SUB84(in_dr0,0);
    uVar2 = (ulonglong)in_dr0 >> 0x20;
    Vec3_dtor(auStack_a4,0xffffffff,ar6_00,ar7);
    object_dtor_delete(auStack_94,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_88,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_78,0xffffffff,ar6_00,ar7);
    if (bVar1 || fVar6 <= (float)uVar2) {
      if (cVar10 == '\0') {
        in_dr0 = (double)CONCAT44(0xbf800000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = 1.0192410166384276e-72;
      }
      if (cVar9 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) * (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 * in_dr0;
      }
    }
    break;
  case 5:
    FUN_8c0230f0(auStack_28,uVar4,ar6_00,ar7,auStack_110);
    uVar8 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    FUN_8c0230f0(ar4 + 0x14,uVar4,ar6_00,ar7,auStack_120);
    FUN_8c022dac(auStack_110,auStack_120,ar6_00,ar7);
    if (cVar10 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),uVar8);
    }
    Vec3_dtor(auStack_120,0xffffffff,ar6_00,ar7);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_110,0xffffffff,ar6_00,ar7);
    FUN_8c0230f0(ar4 + 0x14,uVar4,ar6_00,ar7,auStack_130);
    FUN_8c0230f0(auStack_28,uVar4,ar6_00,ar7,auStack_140);
    Vec3_set_xyz(auStack_14c,uVar4,ar6_00,ar7);
    FUN_8c023484(auStack_140,auStack_14c,ar6_00,ar7,auStack_15c);
    FUN_8c022dac(auStack_130,auStack_15c,ar6_00,ar7);
    if (cVar10 == '\0') {
      in_dr0 = (double)CONCAT44(0x42b40000,uVar8);
    }
    else {
      in_dr0 = -7.961142730794258e-251;
    }
    bVar1 = cVar9 != '\0';
    fVar6 = SUB84(in_dr0,0);
    uVar2 = (ulonglong)in_dr0 >> 0x20;
    Vec3_dtor(auStack_15c,0xffffffff,ar6_00,ar7);
    object_dtor_delete(auStack_14c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_140,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_130,0xffffffff,ar6_00,ar7);
    if (bVar1 || fVar6 <= (float)uVar2) {
      if (cVar10 == '\0') {
        in_dr0 = (double)CONCAT44(0xbf800000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = 1.82507511546215e-310;
      }
      if (cVar9 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) * (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 * in_dr0;
      }
    }
  }
  if ((*(int *)(ar4 + 0x2198) == 4) || (*(int *)(ar4 + 0x2198) == 2)) {
    if (cVar10 == '\0') {
      in_dr0 = (double)CONCAT44(0xbf800000,SUB84(in_dr0,0));
    }
    else {
      in_dr0 = 1.82507511546215e-310;
    }
    if (cVar9 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 SUB84(in_dr14,0) * (float)((ulonglong)in_dr0 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 * in_dr0;
    }
  }
  if (cVar10 == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x21ac),SUB84(in_dr0,0));
  }
  else {
    dVar7 = *(double *)(ar4 + 0x21ac);
  }
  if (cVar9 == '\0') {
    dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + SUB84(in_dr14,0),SUB84(dVar7,0));
  }
  else {
    dVar7 = dVar7 + in_dr14;
  }
  if (cVar10 == '\0') {
    *(int *)(ar4 + 0x21ac) = (int)((ulonglong)dVar7 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x21ac) = dVar7;
  }
LAB_8c0a951a:
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
  return uVar5;
}

__asm__(".globl _FUN_8c0a8f94\n.set _FUN_8c0a8f94, _FUN_8c0a8f94_def\n");
