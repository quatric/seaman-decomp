#include "../decls.h"
undefined4 FUN_8c0982c4_def(int *ar4,float *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float *pfVar2;
  undefined1 *puVar3;
  int ar6_00;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar4;
  float fVar5;
  double in_dr0;
  undefined4 uVar8;
  ulonglong uVar6;
  double dVar7;
  double in_dr14;
  double dVar9;
  undefined8 in_xd0;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar4 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar4 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar4 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar4 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar4 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar4 + -0x10) = in_PR;
  *(undefined4 *)((int)puVar4 + -0xf4) = ar7;
  pfVar2 = ar5;
  ar6_00 = ar6;
  FUN_8c022d04((int)ar4 + 0x200,ar5,ar6,ar7);
  (*(code *)(&Vec3_ctor_zero))
            ((undefined1 *)((int)puVar4 + 0xd4 + -0xf4),pfVar2,ar6_00,ar7);
  (*(code *)(&Vec3_ctor_zero))
            ((undefined1 *)((int)puVar4 + 0xc4 + -0xf4),pfVar2,ar6_00,ar7);
  (*(code *)(&Vec3_ctor_zero))
            ((undefined1 *)((int)puVar4 + 0xb4 + -0xf4),pfVar2,ar6_00,ar7);
  if ((*(int *)(ar6 + 0x68) != 0) && ((int)((uint)*(byte *)(0x1fc + (int)ar4) << 0x1e) < 0))
  {
    (*(code *)(&Vec3_assign))
              ((undefined1 *)((int)puVar4 + 0xc4 + -0xf4),ar5,ar6_00,ar7);
    (*(code *)(&Vec3_assign))
              ((undefined1 *)((int)puVar4 + 0xb4 + -0xf4),*(int *)(ar6 + 0x68) + 4,ar6_00,
               ar7);
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(*(int *)(ar6 + 0x68) + 0x158));
    }
    *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + 0xa4 + -0xf4);
    (*(code *)(&Vec3_sub))
              ((undefined1 *)((int)puVar4 + 0xc8 + -0xf8),
               (undefined1 *)((int)puVar4 + 0xb8 + -0xf8),ar6_00,ar7,
               *(undefined4 *)((int)puVar4 + -0xf8));
    (*(code *)(&Vec3_assign))
              ((undefined1 *)((int)puVar4 + 0xd4 + -0xf4),
               (undefined1 *)((int)puVar4 + 0xa4 + -0xf4),ar6_00,ar7);
    uVar1 = 0xffffffff;
    (*(code *)(&Vec3_dtor))
              ((undefined1 *)((int)puVar4 + 0xa4 + -0xf4),0xffffffff,ar6_00,ar7);
    (*(code *)(&Vec3_length_sq))
              ((undefined1 *)((int)puVar4 + 0xd4 + -0xf4),uVar1,ar6_00,ar7);
    uVar8 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar4 + -200) = uVar8;
      in_dr0 = (double)CONCAT44(uVar8,ar4[0x12]);
    }
    else {
      *(double *)((int)puVar4 + -200) = in_dr0;
      in_xd0 = *(undefined8 *)(ar4 + 0x12);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(in_dr0,0) + SUB84(in_dr14,0);
    }
    else {
      fVar5 = SUB84(in_dr0 + in_dr14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -200),fVar5);
    }
    else {
      dVar7 = *(double *)((int)puVar4 + -200);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 - dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar4 + -0xc4) = fVar5;
      fVar5 = *(float *)((int)puVar4 + -0xc4);
    }
    else {
      *(undefined8 *)((int)puVar4 + -0xc4) = in_xd0;
      in_xd0 = *(undefined8 *)((int)puVar4 + -0xc4);
    }
    uVar6 = (ulonglong)(uint)fVar5;
    if (in_FPSCR_PR != '\0' || fVar5 <= 0.0) {
      if (in_FPSCR_SZ == '\0') {
        uVar6 = CONCAT44(DAT_8c098500,fVar5);
        *(undefined4 *)((int)puVar4 + -0xc4) = DAT_8c098500;
      }
      else {
        uVar6 = CONCAT44((&Vec3_length),DAT_8c098500);
        *(ulonglong *)((int)puVar4 + -0xc4) = uVar6;
      }
    }
    (*(code *)(&Vec3_length))
              ((undefined1 *)((int)puVar4 + 0xd4 + -0xf4),uVar1,ar6_00,ar7);
    Vec3_length_sq(ar4 + 1,uVar1,ar6_00,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0xcc) = (int)(uVar6 >> 0x20);
      uVar6 = (ulonglong)*(uint *)((int)puVar4 + -0xcc);
    }
    else {
      *(ulonglong *)((int)puVar4 + -0xcc) = uVar6;
      in_xd0 = *(undefined8 *)((int)puVar4 + -0xcc);
    }
    fVar5 = (float)uVar6;
    if (in_FPSCR_PR == '\0' && 0.0 < fVar5) {
      *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + 0x94 + -0xf4);
      (*(code *)(&Vec3_scale))
                (ar4 + 5,(&DATA_8c13a7a4),ar6_00,ar7,*(undefined4 *)((int)puVar4 + -0xf8));
      *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + 0x84 + -0xf4);
      puVar3 = (undefined1 *)((int)puVar4 + 0x98 + -0xf8);
      (*(code *)(&Vec3_add))
                ((undefined1 *)((int)puVar4 + 0xd8 + -0xf8),puVar3,ar6_00,ar7,
                 *(undefined4 *)((int)puVar4 + -0xf8));
      uVar1 = (*(code *)(&Vec3_length))
                        ((undefined1 *)((int)puVar4 + 0x84 + -0xf4),puVar3,ar6_00,ar7);
      *(undefined4 *)((int)puVar4 + -0xd0) = uVar1;
      (*(code *)(&Vec3_assign))
                ((undefined1 *)((int)puVar4 + 0xd4 + -0xf4),
                 *(undefined4 *)((int)puVar4 + -0xd0),ar6_00,ar7);
      (*(code *)(&Vec3_dtor))
                ((undefined1 *)((int)puVar4 + 0x84 + -0xf4),0xffffffff,ar6_00,ar7);
      (*(code *)(&Vec3_dtor))
                ((undefined1 *)((int)puVar4 + 0x94 + -0xf4),0xffffffff,ar6_00,ar7);
    }
    (*(code *)(&FUN_8c023bf4))
              ((undefined1 *)((int)puVar4 + 0xd4 + -0xf4),
               (undefined1 *)((int)puVar4 + -0xc4),ar6_00,ar7);
    in_dr0 = (double)(ulonglong)(uint)fVar5;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar4 + 0xd8 + -0xf4) = 0;
    }
    else {
      *(double *)((int)puVar4 + 0xd8 + -0xf4) = in_dr0;
    }
    pfVar2 = (float *)((int)puVar4 + 0xd4 + -0xf4);
    Vec3_assign((int)ar4 + 0x200,pfVar2,ar6_00,ar7);
  }
  if ((*(int *)(ar6 + 100) != 0) && ((int)((uint)*(byte *)(0x1fc + (int)ar4) << 0x1d) < 0)) {
    if ((-1 < *(int *)(0x2f4 + (int)ar4)) && (-1 < *(int *)(0x2f8 + (int)ar4))) {
      uVar1 = (**(code **)(0x114 + *(int *)(*(int *)(ar6 + 0x50) + 8)))
                        (*(int *)(ar6 + 0x50),pfVar2,ar6_00,ar7);
      *(undefined4 *)((int)puVar4 + -0xd4) = uVar1;
      if (*(int *)((int)puVar4 + -0xd4) == 0x12) {
        (**(code **)(*ar4 + 0x2c))(ar4,pfVar2,ar6_00,ar7);
      }
      else {
        uVar1 = (**(code **)(0x114 + *(int *)(*(int *)(ar6 + 0x50) + 8)))
                          (*(int *)(ar6 + 0x50),pfVar2,ar6_00,ar7);
        *(undefined4 *)((int)puVar4 + -0xd8) = uVar1;
        if (*(int *)((int)puVar4 + -0xd8) == 0x13) {
          uVar1 = (**(code **)(0x180 + *(int *)(*(int *)(ar6 + 0x50) + 8)))
                            (*(int *)(ar6 + 0x50),pfVar2,ar6_00,ar7);
          *(undefined4 *)((int)puVar4 + -0xdc) = uVar1;
          if (*(int *)((int)puVar4 + -0xdc) == 9) {
            (**(code **)(*ar4 + 0x2c))(ar4,pfVar2,ar6_00,ar7);
          }
        }
      }
      (*(code *)(&Vec3_dtor))
                ((undefined1 *)((int)puVar4 + 0xb4 + -0xf4),0xffffffff,ar6_00,ar7);
      (*(code *)(&Vec3_dtor))
                ((undefined1 *)((int)puVar4 + 0xc4 + -0xf4),0xffffffff,ar6_00,ar7);
      uVar1 = (*(code *)(&Vec3_dtor))
                        ((undefined1 *)((int)puVar4 + 0xd4 + -0xf4),0xffffffff,ar6_00,ar7);
      return uVar1;
    }
    (**(code **)(0x170 + *(int *)(*(int *)(ar6 + 0x50) + 8)))
              (*(int *)(ar6 + 0x50),pfVar2,ar6_00,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0xe0) = (int)((ulonglong)in_dr0 >> 0x20);
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)((int)puVar4 + -0xe0));
      dVar7 = (double)CONCAT44(DAT_8c09873c,SUB84(in_dr0,0));
    }
    else {
      *(double *)((int)puVar4 + -0xe0) = in_dr0;
      dVar7 = (double)CONCAT44(0xc4,DAT_8c09873c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               SUB84(in_dr14,0) + (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      dVar9 = in_dr14 + dVar7;
    }
    pfVar2 = ar5;
    (*(code *)(&Vec3_assign))
              ((undefined1 *)((int)puVar4 + 0xc4 + -0xf4),ar5,ar6_00,ar7);
    *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + -0x80);
    (*(code *)(&FUN_8c02f670))
              (*(undefined4 *)(ar6 + 0x50),pfVar2,ar6_00,ar7,*(undefined4 *)((int)puVar4 + -0xf8));
    (*(code *)(&Vec3_assign))
              ((undefined1 *)((int)puVar4 + 0xb4 + -0xf4),
               (undefined1 *)((int)puVar4 + -0x80),ar6_00,ar7);
    Vec3_dtor((undefined1 *)((int)puVar4 + -0x80),0xffffffff,ar6_00,ar7);
    *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + -0x90);
    (*(code *)(&Vec3_sub))
              ((undefined1 *)((int)puVar4 + 0xc8 + -0xf8),
               (undefined1 *)((int)puVar4 + 0xb8 + -0xf8),ar6_00,ar7,
               *(undefined4 *)((int)puVar4 + -0xf8));
    (*(code *)(&Vec3_assign))
              ((undefined1 *)((int)puVar4 + 0xd4 + -0xf4),
               (undefined1 *)((int)puVar4 + -0x90),ar6_00,ar7);
    uVar1 = 0xffffffff;
    Vec3_dtor((undefined1 *)((int)puVar4 + -0x90),0xffffffff,ar6_00,ar7);
    (*(code *)(&Vec3_length_sq))
              ((undefined1 *)((int)puVar4 + 0xd4 + -0xf4),uVar1,ar6_00,ar7);
    uVar8 = (undefined4)((ulonglong)dVar7 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar4 + -0xe4) = uVar8;
      dVar7 = (double)CONCAT44(uVar8,ar4[0x12]);
    }
    else {
      *(double *)((int)puVar4 + -0xe4) = dVar7;
      in_xd0 = *(undefined8 *)(ar4 + 0x12);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) + SUB84(dVar9,0);
    }
    else {
      fVar5 = SUB84(dVar7 + dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0xe4),fVar5);
    }
    else {
      dVar7 = *(double *)((int)puVar4 + -0xe4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 - dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c098768,fVar5);
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c09876c,DAT_8c098768);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar4 + -0xc4) = fVar5;
      fVar5 = *(float *)((int)puVar4 + -0xc4);
    }
    else {
      *(undefined8 *)((int)puVar4 + -0xc4) = in_xd0;
    }
    uVar6 = (ulonglong)(uint)fVar5;
    if (in_FPSCR_PR != '\0' || fVar5 <= 0.0) {
      if (in_FPSCR_SZ == '\0') {
        uVar6 = CONCAT44(DAT_8c09876c,fVar5);
        *(undefined4 *)((int)puVar4 + -0xc4) = DAT_8c09876c;
      }
      else {
        uVar6 = CONCAT44((&Vec3_length),DAT_8c09876c);
        *(ulonglong *)((int)puVar4 + -0xc4) = uVar6;
      }
    }
    (*(code *)(&Vec3_length))
              ((undefined1 *)((int)puVar4 + 0xd4 + -0xf4),uVar1,ar6_00,ar7);
    Vec3_length_sq(ar4 + 1,uVar1,ar6_00,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0xe8) = (int)(uVar6 >> 0x20);
      uVar6 = (ulonglong)*(uint *)((int)puVar4 + -0xe8);
    }
    else {
      *(ulonglong *)((int)puVar4 + -0xe8) = uVar6;
    }
    fVar5 = (float)uVar6;
    if (in_FPSCR_PR == '\0' && 0.0 < fVar5) {
      *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + -0xa0);
      (*(code *)(&Vec3_scale))
                (ar4 + 5,(&DATA_8c13a7a8),ar6_00,ar7,*(undefined4 *)((int)puVar4 + -0xf8));
      *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + -0xb0);
      puVar3 = (undefined1 *)((int)puVar4 + -0xa0);
      (*(code *)(&Vec3_add))
                ((undefined1 *)((int)puVar4 + 0xd8 + -0xf8),puVar3,ar6_00,ar7,
                 *(undefined4 *)((int)puVar4 + -0xf8));
      uVar1 = (*(code *)(&Vec3_length))
                        ((undefined1 *)((int)puVar4 + -0xb0),puVar3,ar6_00,ar7);
      *(undefined4 *)((int)puVar4 + -0xec) = uVar1;
      (*(code *)(&Vec3_assign))
                ((undefined1 *)((int)puVar4 + 0xd4 + -0xf4),
                 *(undefined4 *)((int)puVar4 + -0xec),ar6_00,ar7);
      Vec3_dtor((undefined1 *)((int)puVar4 + -0xb0),0xffffffff,ar6_00,ar7);
      Vec3_dtor((undefined1 *)((int)puVar4 + -0xa0),0xffffffff,ar6_00,ar7);
    }
    (*(code *)(&FUN_8c023bf4))
              ((undefined1 *)((int)puVar4 + 0xd4 + -0xf4),
               (undefined1 *)((int)puVar4 + -0xc4),ar6_00,ar7);
    puVar3 = (undefined1 *)((int)puVar4 + 0xd4 + -0xf4);
    FUN_8c023aa0((int)ar4 + 0x200,puVar3,ar6_00,ar7);
    if (*(int *)(0x128 + (int)ar4) == 3) {
      if ((*(int *)(0x124 + (int)ar4) == 10) && (*(int *)(0x12c + (int)ar4) < 2)) {
        *(undefined4 *)(0x12c + (int)ar4) = 0;
        ar4[0x10] = 5;
      }
      else if ((*(int *)(0x248 + (int)ar4) == 2) && (*(int *)(0x124 + (int)ar4) != 10)
              ) {
        *(undefined4 *)(0x288 + (int)ar4) = 1;
        *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + -0xc0);
        (*(code *)(&FUN_8c0230f0))
                  ((int)ar4 + 0x80,puVar3,ar6_00,ar7,*(undefined4 *)((int)puVar4 + -0xf8));
        Vec3_assign(ar4 + 5,(undefined1 *)((int)puVar4 + -0xc0),ar6_00,ar7);
        uVar1 = 0xffffffff;
        Vec3_dtor((undefined1 *)((int)puVar4 + -0xc0),0xffffffff,ar6_00,ar7)
        ;
        *(undefined4 *)(0x248 + (int)ar4) = 0;
        ar4[0x10] = 5;
        (*(code *)(&s_CAnimBody_SetFrame_033e6e))
                  ((int)ar4 + 0xb0,uVar1,ar6_00,ar7);
      }
    }
    else {
      uVar1 = (*(code *)(&get_field_24_026024))
                        (*(undefined4 *)((int)puVar4 + -0xf4),puVar3,ar6_00,ar7);
      *(undefined4 *)((int)puVar4 + -0xf0) = uVar1;
      if (*(int *)((int)puVar4 + -0xf0) == 0) {
        if (in_FPSCR_SZ == '\0') {
          fVar5 = *ar5;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x200),fVar5);
        }
        else {
          dVar7 = *(double *)((int)ar4 + 0x200);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar7 + dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar6 = CONCAT44(DAT_8c098890,fVar5);
        }
        else {
          uVar6 = CONCAT44(0xb4,DAT_8c098890);
        }
        if (in_FPSCR_PR == '\0' && (float)(uVar6 >> 0x20) < (float)uVar6) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)ar4 + 0x200) = 0;
          }
          else {
            *(ulonglong *)((int)ar4 + 0x200) = uVar6 & 0xffffffff;
          }
        }
      }
    }
  }
  (*(code *)(&Vec3_dtor))
            ((undefined1 *)((int)puVar4 + 0xb4 + -0xf4),0xffffffff,ar6_00,ar7);
  (*(code *)(&Vec3_dtor))
            ((undefined1 *)((int)puVar4 + 0xc4 + -0xf4),0xffffffff,ar6_00,ar7);
  uVar1 = (*(code *)(&Vec3_dtor))
                    ((undefined1 *)((int)puVar4 + 0xd4 + -0xf4),0xffffffff,ar6_00,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0982c4\n.set _FUN_8c0982c4, _FUN_8c0982c4_def\n");
