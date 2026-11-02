#include "../decls.h"
undefined4 FUN_8c0aad1c_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int ar6_00;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar3;
  float fVar4;
  double in_dr0;
  undefined4 uVar7;
  ulonglong uVar5;
  double dVar6;
  double in_dr14;
  double dVar8;
  undefined8 in_xd0;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar3 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar3 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar3 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar3 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar3 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar3 + -0x10) = in_PR;
  puVar2 = ar5;
  ar6_00 = ar6;
  FUN_8c022d04(ar4 + 0x200,ar5,ar6,ar7);
  (*(code *)(&Vec3_ctor_zero))
            ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),puVar2,ar6_00,ar7);
  (*(code *)(&Vec3_ctor_zero))
            ((undefined1 *)((int)puVar3 + 0xa0 + -0xd0),puVar2,ar6_00,ar7);
  (*(code *)(&Vec3_ctor_zero))
            ((undefined1 *)((int)puVar3 + 0x90 + -0xd0),puVar2,ar6_00,ar7);
  if ((*(int *)(ar6 + 0x68) != 0) && ((int)((uint)*(byte *)(0x1fc + ar4) << 0x1e) < 0)) {
    (*(code *)(&Vec3_assign))
              ((undefined1 *)((int)puVar3 + 0xa0 + -0xd0),ar5,ar6_00,ar7);
    (*(code *)(&Vec3_assign))
              ((undefined1 *)((int)puVar3 + 0x90 + -0xd0),*(int *)(ar6 + 0x68) + 4,ar6_00,
               ar7);
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(*(int *)(ar6 + 0x68) + 0x158));
    }
    *(undefined1 **)((int)puVar3 + -0xd4) = (undefined1 *)((int)puVar3 + 0x80 + -0xd0);
    (*(code *)(&Vec3_sub))
              ((undefined1 *)((int)puVar3 + 0xa4 + -0xd4),
               (undefined1 *)((int)puVar3 + 0x94 + -0xd4),ar6_00,ar7,
               *(undefined4 *)((int)puVar3 + -0xd4));
    (*(code *)(&Vec3_assign))
              ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),
               (undefined1 *)((int)puVar3 + 0x80 + -0xd0),ar6_00,ar7);
    uVar1 = 0xffffffff;
    (*(code *)(&Vec3_dtor))
              ((undefined1 *)((int)puVar3 + 0x80 + -0xd0),0xffffffff,ar6_00,ar7);
    (*(code *)(&Vec3_length_sq))
              ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),uVar1,ar6_00,ar7);
    uVar7 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar3 + -0xb8) = uVar7;
      in_dr0 = (double)CONCAT44(uVar7,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      *(double *)((int)puVar3 + -0xb8) = in_dr0;
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(in_dr0,0) + SUB84(in_dr14,0);
    }
    else {
      fVar4 = SUB84(in_dr0 + in_dr14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)((int)puVar3 + -0xb8),fVar4);
    }
    else {
      dVar6 = *(double *)((int)puVar3 + -0xb8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar6 - dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar3 + -0xb4) = fVar4;
      fVar4 = *(float *)((int)puVar3 + -0xb4);
    }
    else {
      *(undefined8 *)((int)puVar3 + -0xb4) = in_xd0;
      in_xd0 = *(undefined8 *)((int)puVar3 + -0xb4);
    }
    uVar5 = (ulonglong)(uint)fVar4;
    if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44(DAT_8c0ab0a4,fVar4);
        *(undefined4 *)((int)puVar3 + -0xb4) = DAT_8c0ab0a4;
      }
      else {
        uVar5 = CONCAT44((&Vec3_length),DAT_8c0ab0a4);
        *(ulonglong *)((int)puVar3 + -0xb4) = uVar5;
      }
    }
    (*(code *)(&Vec3_length))
              ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),uVar1,ar6_00,ar7);
    Vec3_length_sq(ar4 + 4,uVar1,ar6_00,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar3 + -0xbc) = (int)(uVar5 >> 0x20);
      uVar5 = (ulonglong)*(uint *)((int)puVar3 + -0xbc);
    }
    else {
      *(ulonglong *)((int)puVar3 + -0xbc) = uVar5;
      in_xd0 = *(undefined8 *)((int)puVar3 + -0xbc);
    }
    fVar4 = (float)uVar5;
    if (in_FPSCR_PR == '\0' && 0.0 < fVar4) {
      *(undefined1 **)((int)puVar3 + -0xd4) = (undefined1 *)((int)puVar3 + -0x60);
      (*(code *)(&Vec3_scale))
                (ar4 + 0x14,(&DATA_8c13b29c),ar6_00,ar7,*(undefined4 *)((int)puVar3 + -0xd4));
      *(undefined1 **)((int)puVar3 + -0xd4) = (undefined1 *)((int)puVar3 + -0x70);
      puVar2 = (undefined1 *)((int)puVar3 + -0x60);
      (*(code *)(&Vec3_add))
                ((undefined1 *)((int)puVar3 + 0xb4 + -0xd4),puVar2,ar6_00,ar7,
                 *(undefined4 *)((int)puVar3 + -0xd4));
      uVar1 = (*(code *)(&Vec3_length))
                        ((undefined1 *)((int)puVar3 + -0x70),puVar2,ar6_00,ar7);
      *(undefined4 *)((int)puVar3 + -0xc0) = uVar1;
      (*(code *)(&Vec3_assign))
                ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),
                 *(undefined4 *)((int)puVar3 + -0xc0),ar6_00,ar7);
      Vec3_dtor((undefined1 *)((int)puVar3 + -0x70),0xffffffff,ar6_00,ar7);
      Vec3_dtor((undefined1 *)((int)puVar3 + -0x60),0xffffffff,ar6_00,ar7);
    }
    (*(code *)(&FUN_8c023bf4))
              ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),
               (undefined1 *)((int)puVar3 + -0xb4),ar6_00,ar7);
    in_dr0 = (double)(ulonglong)(uint)fVar4;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar3 + 0xb4 + -0xd0) = 0;
    }
    else {
      *(double *)((int)puVar3 + 0xb4 + -0xd0) = in_dr0;
    }
    puVar2 = (undefined1 *)((int)puVar3 + 0xb0 + -0xd0);
    Vec3_assign(ar4 + 0x200,puVar2,ar6_00,ar7);
  }
  if ((*(int *)(ar6 + 100) != 0) && ((int)((uint)*(byte *)(0x1fc + ar4) << 0x1d) < 0)) {
    (**(code **)(0x170 + *(int *)(*(int *)(ar6 + 0x50) + 8)))
              (*(int *)(ar6 + 0x50),puVar2,ar6_00,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar3 + -0xc4) = (int)((ulonglong)in_dr0 >> 0x20);
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)((int)puVar3 + -0xc4));
      dVar6 = (double)CONCAT44(DAT_8c0ab0c4,SUB84(in_dr0,0));
    }
    else {
      *(double *)((int)puVar3 + -0xc4) = in_dr0;
      dVar6 = (double)CONCAT44((&FUN_8c02f670),DAT_8c0ab0c4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               SUB84(in_dr14,0) + (float)((ulonglong)dVar6 >> 0x20));
    }
    else {
      dVar8 = in_dr14 + dVar6;
    }
    (*(code *)(&Vec3_assign))
              ((undefined1 *)((int)puVar3 + 0xa0 + -0xd0),ar5,ar6_00,ar7);
    *(undefined1 **)((int)puVar3 + -0xd4) = (undefined1 *)((int)puVar3 + -0x80);
    (*(code *)(&FUN_8c02f670))
              (*(undefined4 *)(ar6 + 0x50),ar5,ar6_00,ar7,*(undefined4 *)((int)puVar3 + -0xd4));
    (*(code *)(&Vec3_assign))
              ((undefined1 *)((int)puVar3 + 0x90 + -0xd0),
               (undefined1 *)((int)puVar3 + -0x80),ar6_00,ar7);
    Vec3_dtor((undefined1 *)((int)puVar3 + -0x80),0xffffffff,ar6_00,ar7);
    *(undefined1 **)((int)puVar3 + -0xd4) = (undefined1 *)((int)puVar3 + -0x90);
    (*(code *)(&Vec3_sub))
              ((undefined1 *)((int)puVar3 + 0xa4 + -0xd4),
               (undefined1 *)((int)puVar3 + 0x94 + -0xd4),ar6_00,ar7,
               *(undefined4 *)((int)puVar3 + -0xd4));
    (*(code *)(&Vec3_assign))
              ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),
               (undefined1 *)((int)puVar3 + -0x90),ar6_00,ar7);
    uVar1 = 0xffffffff;
    Vec3_dtor((undefined1 *)((int)puVar3 + -0x90),0xffffffff,ar6_00,ar7);
    (*(code *)(&Vec3_length_sq))
              ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),uVar1,ar6_00,ar7);
    uVar7 = (undefined4)((ulonglong)dVar6 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar3 + -200) = uVar7;
      dVar6 = (double)CONCAT44(uVar7,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      *(double *)((int)puVar3 + -200) = dVar6;
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar6,0) + SUB84(dVar8,0);
    }
    else {
      fVar4 = SUB84(dVar6 + dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)((int)puVar3 + -200),fVar4);
    }
    else {
      dVar6 = *(double *)((int)puVar3 + -200);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar6 - dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c0ab0cc,fVar4);
    }
    else {
      dVar6 = (double)CONCAT44((&DATA_8c13b2a0),DAT_8c0ab0cc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar6 * dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar3 + -0xb4) = fVar4;
      fVar4 = *(float *)((int)puVar3 + -0xb4);
    }
    else {
      *(undefined8 *)((int)puVar3 + -0xb4) = in_xd0;
    }
    uVar5 = (ulonglong)(uint)fVar4;
    if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44(DAT_8c0ab0a4,fVar4);
        *(undefined4 *)((int)puVar3 + -0xb4) = DAT_8c0ab0a4;
      }
      else {
        uVar5 = CONCAT44((&Vec3_length),DAT_8c0ab0a4);
        *(ulonglong *)((int)puVar3 + -0xb4) = uVar5;
      }
    }
    (*(code *)(&Vec3_length))
              ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),uVar1,ar6_00,ar7);
    Vec3_length_sq(ar4 + 4,uVar1,ar6_00,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar3 + -0xcc) = (int)(uVar5 >> 0x20);
      uVar5 = (ulonglong)*(uint *)((int)puVar3 + -0xcc);
    }
    else {
      *(ulonglong *)((int)puVar3 + -0xcc) = uVar5;
    }
    if (in_FPSCR_PR == '\0' && 0.0 < (float)uVar5) {
      *(undefined1 **)((int)puVar3 + -0xd4) = (undefined1 *)((int)puVar3 + -0xa0);
      (*(code *)(&Vec3_scale))
                (ar4 + 0x14,(&DATA_8c13b2a0),ar6_00,ar7,*(undefined4 *)((int)puVar3 + -0xd4));
      *(undefined1 **)((int)puVar3 + -0xd4) = (undefined1 *)((int)puVar3 + -0xb0);
      puVar2 = (undefined1 *)((int)puVar3 + -0xa0);
      (*(code *)(&Vec3_add))
                ((undefined1 *)((int)puVar3 + 0xb4 + -0xd4),puVar2,ar6_00,ar7,
                 *(undefined4 *)((int)puVar3 + -0xd4));
      uVar1 = (*(code *)(&Vec3_length))
                        ((undefined1 *)((int)puVar3 + -0xb0),puVar2,ar6_00,ar7);
      *(undefined4 *)((int)puVar3 + -0xd0) = uVar1;
      (*(code *)(&Vec3_assign))
                ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),
                 *(undefined4 *)((int)puVar3 + -0xd0),ar6_00,ar7);
      Vec3_dtor((undefined1 *)((int)puVar3 + -0xb0),0xffffffff,ar6_00,ar7);
      Vec3_dtor((undefined1 *)((int)puVar3 + -0xa0),0xffffffff,ar6_00,ar7);
    }
    (*(code *)(&FUN_8c023bf4))
              ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),
               (undefined1 *)((int)puVar3 + -0xb4),ar6_00,ar7);
    (*(code *)(&FUN_8c023aa0))
              (ar4 + 0x200,(undefined1 *)((int)puVar3 + 0xb0 + -0xd0),ar6_00,ar7);
  }
  (*(code *)(&Vec3_dtor))
            ((undefined1 *)((int)puVar3 + 0x90 + -0xd0),0xffffffff,ar6_00,ar7);
  (*(code *)(&Vec3_dtor))
            ((undefined1 *)((int)puVar3 + 0xa0 + -0xd0),0xffffffff,ar6_00,ar7);
  uVar1 = (*(code *)(&Vec3_dtor))
                    ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),0xffffffff,ar6_00,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0aad1c\n.set _FUN_8c0aad1c, _FUN_8c0aad1c_def\n");
