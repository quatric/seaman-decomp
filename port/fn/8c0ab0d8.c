#include "../decls.h"
undefined4 FUN_8c0ab0d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  double in_dr0;
  undefined8 uVar8;
  ulonglong uVar9;
  double dVar10;
  undefined8 in_xd0;
  char cVar11;
  char cVar12;
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar12 = '\0';
  cVar11 = '\0';
  iVar2 = *(int *)(ar4 + 0x21bc);
  if (iVar2 == 0) {
    ar7 = 0;
    uVar5 = 0xffffffff;
    uVar4 = 0;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
    uVar6 = SUB84(in_dr0,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar5,ar7);
    if (cVar12 == '\0') {
      *(undefined4 *)(ar4 + 0x22c) = 0;
      uVar8 = CONCAT44(*(undefined4 *)(ar4 + 0x21ac),uVar6);
      *(undefined4 *)(ar4 + 0x21a0) = *(undefined4 *)(ar4 + 0x21ac);
    }
    else {
      *(ulonglong *)(ar4 + 0x22c) = (ulonglong)uVar6;
      uVar8 = *(undefined8 *)(ar4 + 0x21ac);
      *(undefined8 *)(ar4 + 0x21a0) = uVar8;
    }
    uVar4 = ar5;
    Vec3_sub(ar6,ar5,uVar5,ar7,auStack_28);
    uVar3 = Vec3_length(auStack_28,uVar4,uVar5,ar7);
    FUN_8c023138(uVar3,uVar4,uVar5,ar7,auStack_38);
    FUN_8c023138(ar4 + 0x14,uVar4,uVar5,ar7,auStack_48);
    FUN_8c022dac(auStack_38,auStack_48,uVar5,ar7);
    if (cVar12 == '\0') {
      *(int *)(ar4 + 0x2194) = (int)((ulonglong)uVar8 >> 0x20);
    }
    else {
      *(undefined8 *)(ar4 + 0x2194) = uVar8;
    }
    Vec3_dtor(auStack_48,0xffffffff,uVar5,ar7);
    Vec3_dtor(auStack_38,0xffffffff,uVar5,ar7);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_28,0xffffffff,uVar5,ar7);
    FUN_8c023138(ar4 + 0x14,uVar4,uVar5,ar7,auStack_58);
    uVar4 = ar5;
    Vec3_sub(ar6,ar5,uVar5,ar7,auStack_68);
    uVar3 = Vec3_length(auStack_68,uVar4,uVar5,ar7);
    FUN_8c023138(uVar3,uVar4,uVar5,ar7,auStack_78);
    Vec3_set_xyz(auStack_84,uVar4,uVar5,ar7);
    FUN_8c023484(auStack_78,auStack_84,uVar5,ar7,auStack_94);
    FUN_8c022dac(auStack_58,auStack_94,uVar5,ar7);
    if (cVar12 == '\0') {
      in_dr0 = (double)CONCAT44(0x42b40000,(int)((ulonglong)uVar8 >> 0x20));
    }
    else {
      in_dr0 = -7.961142730794258e-251;
      in_xd0 = uVar8;
    }
    bVar1 = cVar11 != '\0';
    fVar7 = SUB84(in_dr0,0);
    uVar9 = (ulonglong)in_dr0 >> 0x20;
    Vec3_dtor(auStack_94,0xffffffff,uVar5,ar7);
    object_dtor_delete(auStack_84,0xffffffff,uVar5,ar7);
    Vec3_dtor(auStack_78,0xffffffff,uVar5,ar7);
    Vec3_dtor(auStack_68,0xffffffff,uVar5,ar7);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_58,0xffffffff,uVar5,ar7);
    if (bVar1 || fVar7 <= (float)uVar9) {
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(0xbf800000,*(undefined4 *)(ar4 + 0x2194));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x2194);
        dVar10 = 3.75058611530083e-312;
      }
      if (cVar11 == '\0') {
        in_dr0 = (double)(ulonglong)(uint)(SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20));
      }
      else {
        in_dr0 = dVar10 * dVar10;
      }
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x2194) = SUB84(in_dr0,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x2194) = in_xd0;
      }
    }
    *(int *)(ar4 + 0x21bc) = *(int *)(ar4 + 0x21bc) + 1;
  }
  else {
    uVar4 = ar5;
    uVar5 = ar6;
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        FUN_8c022fc0(ar5,ar6,ar6,ar7);
        if (cVar12 == '\0') {
          in_dr0 = (double)((ulonglong)in_dr0 >> 0x20);
        }
        if (cVar11 != '\0' || SUB84(in_dr0,0) <= 1.0) {
          if (cVar12 == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
          }
          *(int *)(ar4 + 0x21bc) = *(int *)(ar4 + 0x21bc) + 1;
        }
        FUN_8c03f3ac(ar4 + 0xb0,ar6,uVar5,ar7);
        return 1;
      }
      if (iVar2 != 3) {
        return 1;
      }
      iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
      if (iVar2 != 1) {
        return 1;
      }
      *(undefined4 *)(ar4 + 0x21bc) = 0;
      return 0;
    }
  }
  fVar7 = SUB84(in_dr0,0);
  if (cVar12 == '\0') {
    fVar7 = *(float *)(ar4 + 0x2194);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x2194);
  }
  if (cVar11 == '\0' && 0.0 < fVar7) {
    if (cVar12 == '\0') {
      fVar7 = *(float *)(ar4 + 0x22c);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x22c);
    }
    if (cVar11 == '\0') {
      fVar7 = fVar7 + 1.0;
    }
    else {
      fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) + (double)CONCAT44(0x3f800000,fVar7),0);
    }
    if (cVar12 == '\0') {
      *(float *)(ar4 + 0x22c) = fVar7;
      uVar9 = CONCAT44(*(undefined4 *)(ar4 + 0x2194),*(undefined4 *)(ar4 + 0x22c));
    }
    else {
      *(undefined8 *)(ar4 + 0x22c) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x22c);
      uVar9 = *(ulonglong *)(ar4 + 0x2194);
    }
    if (cVar11 == '\0' && (float)uVar9 < (float)(uVar9 >> 0x20)) {
      if (cVar12 == '\0') {
        uVar9 = (ulonglong)*(uint *)(ar4 + 0x21ac);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x21ac);
      }
      dVar10 = (double)CONCAT44(0x3f800000,(float)uVar9);
      if (cVar11 == '\0') {
        fVar7 = (float)uVar9 + 1.0;
      }
      else {
        fVar7 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x21ac) = fVar7;
      }
      else {
        *(undefined8 *)(ar4 + 0x21ac) = in_xd0;
      }
    }
    else {
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2194),*(undefined4 *)(ar4 + 0x21a0));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x21a0);
        dVar10 = *(double *)(ar4 + 0x2194);
      }
      if (cVar11 == '\0') {
        fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x21ac) = fVar7;
      }
      else {
        *(undefined8 *)(ar4 + 0x21ac) = in_xd0;
      }
      *(int *)(ar4 + 0x21bc) = *(int *)(ar4 + 0x21bc) + 1;
      Vec3_sub(ar6,ar5,uVar5,ar7,auStack_a4);
      uVar4 = Vec3_length(auStack_a4,ar5,uVar5,ar7);
      Vec3_assign(ar4 + 0x14,uVar4,uVar5,ar7);
      uVar4 = 0xffffffff;
      Vec3_dtor(auStack_a4,0xffffffff,uVar5,ar7);
      if (cVar12 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0x3f333333;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = 0x53f41fe43f333333;
      }
    }
  }
  else {
    if (cVar12 == '\0') {
      fVar7 = *(float *)(ar4 + 0x22c);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x22c);
    }
    if (cVar11 == '\0') {
      fVar7 = fVar7 - 1.0;
    }
    else {
      fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) - (double)CONCAT44(0x3f800000,fVar7),0);
    }
    if (cVar12 == '\0') {
      *(float *)(ar4 + 0x22c) = fVar7;
      uVar9 = CONCAT44(*(undefined4 *)(ar4 + 0x2194),*(undefined4 *)(ar4 + 0x22c));
    }
    else {
      *(undefined8 *)(ar4 + 0x22c) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x22c);
      uVar9 = *(ulonglong *)(ar4 + 0x2194);
    }
    if (cVar11 == '\0' && (float)(uVar9 >> 0x20) < (float)uVar9) {
      if (cVar12 == '\0') {
        uVar9 = (ulonglong)*(uint *)(ar4 + 0x21ac);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x21ac);
      }
      dVar10 = (double)CONCAT44(0x3f800000,(float)uVar9);
      if (cVar11 == '\0') {
        fVar7 = (float)uVar9 - 1.0;
      }
      else {
        fVar7 = SUB84(dVar10 - dVar10,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x21ac) = fVar7;
      }
      else {
        *(undefined8 *)(ar4 + 0x21ac) = in_xd0;
      }
    }
    else {
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2194),*(undefined4 *)(ar4 + 0x21a0));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x21a0);
        dVar10 = *(double *)(ar4 + 0x2194);
      }
      if (cVar11 == '\0') {
        fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x21ac) = fVar7;
      }
      else {
        *(undefined8 *)(ar4 + 0x21ac) = in_xd0;
      }
      *(int *)(ar4 + 0x21bc) = *(int *)(ar4 + 0x21bc) + 1;
      Vec3_sub(ar6,ar5,uVar5,ar7,auStack_b4);
      uVar4 = Vec3_length(auStack_b4,ar5,uVar5,ar7);
      Vec3_assign(ar4 + 0x14,uVar4,uVar5,ar7);
      uVar4 = 0xffffffff;
      Vec3_dtor(auStack_b4,0xffffffff,uVar5,ar7);
      if (cVar12 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0x3f333333;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = 0x53f11fe13f333333;
      }
    }
  }
  FUN_8c03f3ac(ar4 + 0xb0,uVar4,uVar5,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0ab0d8\n.set _FUN_8c0ab0d8, _FUN_8c0ab0d8_def\n");
