#include "../decls.h"
undefined4 FUN_8c07cce0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 ar5_00;
  undefined4 uVar5;
  undefined8 in_dr0;
  double dVar6;
  double dVar7;
  float fVar8;
  double in_dr14;
  undefined8 in_xd14;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined4 in_stack_00000000;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar4 = ar7;
  uVar3 = ar6;
  iVar1 = get_field_6c_028cc4(ar7,ar5,ar6,ar7);
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x178) = 0;
    return 2;
  }
  *(undefined4 *)(ar4 + 0x214) = 0;
  *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfb;
  *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfe;
  uVar5 = 1;
  Vec3_sub(uVar3,ar5,ar6,uVar4,auStack_4c);
  Vec3_ctor_copy(auStack_3c,auStack_4c,ar6,uVar4);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_4c,0xffffffff,ar6,uVar4);
  Vec3_length_sq(auStack_3c,uVar2,ar6,uVar4);
  if (cVar11 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),(int)in_dr0);
    in_dr0 = in_xd14;
  }
  else {
    dVar6 = *(double *)(ar4 + 0x28);
  }
  fVar8 = SUB84(in_dr14,0);
  if (cVar10 == '\0') {
    bVar9 = fVar8 < (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    bVar9 = in_dr14 < dVar6;
  }
  if (bVar9) {
    if (cVar11 == '\0') {
      *(float *)(ar4 + 0x28) = fVar8;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_dr0;
    }
  }
  else {
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar6,0));
    }
    else {
      dVar6 = *(double *)(ar4 + 0x34);
    }
    if (cVar10 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 fVar8 / (float)((ulonglong)dVar6 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 / dVar6;
    }
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar6,0));
    }
    else {
      dVar6 = *(double *)(ar4 + 0x28);
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(in_dr14,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar8 = SUB84(in_dr14 + dVar6,0);
    }
    if (cVar11 == '\0') {
      *(float *)(ar4 + 0x28) = fVar8;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_dr0;
    }
  }
  uVar2 = Vec3_length(auStack_3c,uVar2,ar6,uVar4);
  Vec3_assign(ar4 + 0x14,uVar2,ar6,uVar4);
  (**(code **)(*(int *)(iVar1 + 8) + 0x140))(iVar1,uVar2,ar6,uVar4);
  Vec3_assign(ar4 + 0x80,auStack_5c,ar6,uVar4);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_5c,0xffffffff,ar6,uVar4);
  if (*(int *)(ar4 + 0x128) == 1) {
    ar5_00 = 0xf;
    if (cVar11 == '\0') {
      dVar7 = 1099511902400.0;
    }
    else {
      dVar7 = 206158464224.0;
    }
  }
  else {
    if (*(int *)(ar4 + 0x128) != 2) {
      Vec3_dtor(auStack_3c,0xffffffff,ar6,uVar4);
      return 2;
    }
    ar5_00 = 0x13;
    if (cVar11 == '\0') {
      dVar7 = 3848291247424.0;
    }
    else {
      dVar7 = 6.37150347401503e-312;
    }
  }
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    uVar4 = 0;
    ar6 = 0xffffffff;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_00,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6,uVar4);
    *(undefined4 *)(ar4 + 0x294) = 0;
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else {
    ar5_00 = uVar2;
    if (iVar1 != 1) {
      if ((iVar1 == 2) &&
         (iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,uVar4), iVar1 == 1)) {
        *(undefined4 *)(ar4 + 0x214) = 1;
        *(undefined4 *)(ar4 + 300) = 0;
        *(undefined4 *)(ar4 + 0x294) = 0;
        FUN_8c030eb8(ar4 + 0x1fc,uVar2,ar6,uVar4);
        *(undefined4 *)(ar4 + 0x178) = 0;
        uVar5 = 0;
        Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6,uVar4);
        uVar4 = 0;
        ar6 = 0xffffffff;
        uVar3 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,uVar4);
      }
      goto LAB_8c07cf9c;
    }
  }
  iVar1 = FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,uVar4);
  if (iVar1 == 7) {
    iVar1 = *(int *)(ar4 + 0x294);
    *(int *)(ar4 + 0x294) = iVar1 + 1;
    if (4 < iVar1 + 1) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
  }
  else {
    CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,uVar4,uVar3);
    if (cVar10 == '\0') {
      bVar9 = (float)((ulonglong)dVar7 >> 0x20) == (float)(int)(float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      bVar9 = dVar7 == (double)(int)dVar6;
    }
    if (bVar9) {
      uVar4 = 5;
      FUN_8c033474(ar4,5,ar5,in_stack_00000000);
      FUN_8c03f39c(ar7,uVar4,ar5,in_stack_00000000);
      ar6 = ar5;
      uVar4 = in_stack_00000000;
    }
  }
LAB_8c07cf9c:
  Vec3_dtor(auStack_3c,0xffffffff,ar6,uVar4);
  return uVar5;
}

__asm__(".globl _FUN_8c07cce0\n.set _FUN_8c07cce0, _FUN_8c07cce0_def\n");
