#include "../decls.h"
undefined4 Class_12b2ac_m1_0aff3c_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  code *ar5_00;
  int iVar4;
  double in_dr0;
  double dVar5;
  double dVar6;
  float fVar8;
  double in_dr2;
  double in_dr14;
  undefined8 in_xd0;
  double in_xd14;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined4 in_stack_fffffea0;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float fVar7;
  
  cVar11 = '\0';
  cVar10 = '\0';
  *(undefined4 *)(ar4 + 0x240) = 0;
  puVar3 = ar5;
  if (*(int *)(ar4 + 0x124) == 5) {
    FUN_8c03207c(ar4,ar5,ar6,ar7);
  }
  else {
    FUN_8c03207c(ar4,ar5,ar6,ar7);
  }
  if (*(int *)(ar4 + 0x124) == 8) {
    Vec3_ctor_xyz(auStack_30,puVar3,ar6,ar7);
    iVar4 = FUN_8c023cd4(ar4 + 0x14,auStack_30,ar6,ar7);
    Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
    ar5_00 = (code *)0x0;
    if (iVar4 != 0) {
      vec3_copy_8c02b5fc(auStack_3c,ar4 + 0x14c,ar6,ar7);
      FUN_8c023484(ar4 + 0x14,auStack_3c,ar6,ar7,auStack_4c);
      Vec3_assign(ar4 + 0x14,auStack_4c,ar6,ar7);
      Vec3_dtor(auStack_4c,0xffffffff,ar6,ar7);
      object_dtor_delete(auStack_3c,0xffffffff,ar6,ar7);
      vec3_copy_8c02b5fc(auStack_58,ar4 + 0x14c,ar6,ar7);
      FUN_8c023484(ar4 + 0x80,auStack_58,ar6,ar7,auStack_68);
      Vec3_assign(ar4 + 0x80,auStack_68,ar6,ar7);
      Vec3_dtor(auStack_68,0xffffffff,ar6,ar7);
      object_dtor_delete(auStack_58,0xffffffff,ar6,ar7);
      ar5_00 = FUN_8c02a1fc;
      FUN_8c02a1fc(ar4 + 0x14c,FUN_8c02a1fc,ar6,ar7);
    }
    vec3_clear(ar4 + 0x13c,ar5_00,ar6,ar7);
    FUN_8c031700(ar4,ar5_00,ar6,ar7);
  }
  else {
    Class_129cbc_m1_031598(ar4,ar5,ar6,ar7);
  }
  if ((ar5[4] == 3) || (*(int *)(ar4 + 0x68) != 0)) {
    FUN_8c0b5344(ar4,ar5[4],ar6,ar7);
    uVar1 = 1;
    FUN_8c02f2c0(*ar5,1,ar6,ar7,in_stack_fffffea0);
    if (*(int *)(ar4 + 0x124) != 2) {
      uVar1 = *(undefined4 *)(ar5[1] + 4);
      FUN_8c031ab4(ar4,uVar1,ar6,ar7);
    }
    FUN_8c0324ac(ar4,uVar1,ar6,ar7);
    Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7,auStack_78);
    Vec3_add(auStack_78,ar4 + 0x90,ar6,ar7,auStack_88);
    Vec3_add(auStack_88,ar4 + 0x6c,ar6,ar7,auStack_98);
    Vec3_add(auStack_98,ar4 + 0x13c,ar6,ar7,auStack_a8);
    Vec3_add(auStack_a8,ar4 + 0x338,ar6,ar7,auStack_b8);
    Vec3_assign(ar4 + 4,auStack_b8,ar6,ar7);
    Vec3_dtor(auStack_b8,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_a8,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_98,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_88,0xffffffff,ar6,ar7);
    iVar4 = -1;
    Vec3_dtor(auStack_78,0xffffffff,ar6,ar7);
  }
  else {
    ar7 = ar5[6];
    ar6 = ar5[3];
    uVar1 = FUN_8c0b0784(ar4,*ar5,ar6,ar7);
    FUN_8c02f2c0(*ar5,uVar1,ar6,ar7,in_stack_fffffea0);
    uVar1 = *(undefined4 *)(ar5[1] + 4);
    FUN_8c031ab4(ar4,uVar1,ar6,ar7);
    FUN_8c0324ac(ar4,uVar1,ar6,ar7);
    Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7,auStack_c8);
    Vec3_add(auStack_c8,ar4 + 0x90,ar6,ar7,auStack_d8);
    Vec3_add(auStack_d8,ar4 + 0x6c,ar6,ar7,auStack_e8);
    Vec3_add(auStack_e8,ar4 + 0x13c,ar6,ar7,auStack_f8);
    Vec3_add(auStack_f8,ar4 + 0x338,ar6,ar7,auStack_108);
    Vec3_assign(ar4 + 4,auStack_108,ar6,ar7);
    Vec3_dtor(auStack_108,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_f8,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_e8,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_d8,0xffffffff,ar6,ar7);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_c8,0xffffffff,ar6,ar7);
    vec3_clear(ar4 + 0x338,uVar1,ar6,ar7);
    Vec3_ctor_zero(&uStack_20,uVar1,ar6,ar7);
    Vec3_add(*(undefined4 *)(uint)ar5[1],ar4 + 4,ar6,ar7,auStack_118);
    Vec3_assign(&uStack_20,auStack_118,ar6,ar7);
    Vec3_dtor(auStack_118,0xffffffff,ar6,ar7);
    (**(code **)(*(int *)(uint)ar5[6] + 0x128))((int *)(uint)ar5[6],*(undefined4 *)(uint)ar5[1],ar6,ar7);
    if (cVar11 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20))
      ;
      in_dr0 = in_xd14;
    }
    if (((*(int *)(ar4 + 0x124) != 8) && (*(int *)(ar4 + 0x124) != 5)) &&
       (*(int *)(ar4 + 0x124) != 6)) {
      if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44(uStack_1c,SUB84(in_dr2,0));
        dVar5 = (double)CONCAT44(SUB84(in_dr14,0),0x42100000);
      }
      else {
        in_dr2 = (double)CONCAT44(uStack_18,uStack_1c);
        in_xd0 = 0x4000000042100000;
        dVar5 = in_dr0;
      }
      if (cVar10 == '\0') {
        fVar7 = (float)((ulonglong)dVar5 >> 0x20) + SUB84(dVar5,0);
        dVar5 = (double)CONCAT44(fVar7,SUB84(dVar5,0));
        bVar9 = (float)((ulonglong)in_dr2 >> 0x20) < fVar7;
      }
      else {
        dVar5 = dVar5 + dVar5;
        bVar9 = in_dr2 < dVar5;
      }
      if (bVar9) {
        if (cVar11 == '\0') {
          dVar5 = (double)CONCAT44(0x42100000,SUB84(dVar5,0));
        }
        else {
          dVar5 = 2.0000004922039807;
        }
        if (cVar10 == '\0') {
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                     SUB84(in_dr14,0) + (float)((ulonglong)dVar5 >> 0x20));
        }
        else {
          in_dr14 = in_dr14 + dVar5;
        }
        if (cVar11 == '\0') {
          dVar5 = (double)CONCAT44(uStack_1c,SUB84(dVar5,0));
        }
        else {
          dVar5 = (double)CONCAT44(uStack_18,uStack_1c);
        }
        if (cVar10 == '\0') {
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                     SUB84(in_dr14,0) - (float)((ulonglong)dVar5 >> 0x20));
        }
        else {
          in_dr14 = in_dr14 - dVar5;
        }
        if (cVar11 == '\0') {
          dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 8),SUB84(dVar5,0));
        }
        else {
          dVar5 = *(double *)(ar4 + 8);
        }
        if (cVar10 == '\0') {
          fVar7 = SUB84(in_dr14,0) + (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar7 = SUB84(in_dr14 + dVar5,0);
        }
        if (cVar11 == '\0') {
          *(float *)(ar4 + 8) = fVar7;
        }
        else {
          *(double *)(ar4 + 8) = in_dr0;
        }
      }
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(uStack_20,SUB84(in_dr2,0));
      dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar5 = (double)CONCAT44(uStack_1c,uStack_20);
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar6 = 6.96545118384351e-312;
    }
    if (cVar10 == '\0') {
      bVar9 = (float)((ulonglong)dVar5 >> 0x20) < SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20)
      ;
    }
    else {
      bVar9 = dVar5 < dVar6 * dVar6;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x48);
        dVar6 = 6.96545118384351e-312;
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(uStack_20,fVar7);
      }
      else {
        dVar6 = (double)CONCAT44(uStack_1c,uStack_20);
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar6 - dVar6,0);
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 4),fVar7);
      }
      else {
        dVar6 = *(double *)(ar4 + 4);
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar11 == '\0') {
        *(float *)(ar4 + 4) = fVar7;
      }
      else {
        *(undefined8 *)(ar4 + 4) = in_xd0;
      }
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(uint)ar5[3],SUB84(dVar5,0));
      dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar5 = *(double *)(uint)ar5[3];
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar6 = 6.96545118384351e-312;
    }
    if (cVar10 == '\0') {
      fVar7 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - fVar7,SUB84(dVar5,0));
    }
    else {
      fVar7 = SUB84(dVar6 * dVar6,0);
      dVar5 = dVar5 - dVar6 * dVar6;
    }
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(uStack_20,fVar7);
    }
    else {
      dVar6 = (double)CONCAT44(uStack_1c,uStack_20);
    }
    if (cVar10 == '\0') {
      bVar9 = (float)((ulonglong)dVar5 >> 0x20) < (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      bVar9 = dVar5 < dVar6;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(uint)ar5[3],SUB84(dVar5,0));
        dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        dVar5 = *(double *)(uint)ar5[3];
        in_xd0 = *(undefined8 *)(ar4 + 0x48);
        dVar6 = 6.96545118384351e-312;
      }
      if (cVar10 == '\0') {
        fVar8 = (float)((ulonglong)dVar6 >> 0x20);
        fVar7 = SUB84(dVar6,0) * fVar8;
        dVar6 = (double)CONCAT44(fVar8,fVar7);
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - fVar7,SUB84(dVar5,0));
      }
      else {
        dVar6 = dVar6 * dVar6;
        dVar5 = dVar5 - dVar6;
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),uStack_20);
      }
      else {
        in_xd0 = CONCAT44(uStack_1c,uStack_20);
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar6,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar6 - dVar5,0);
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 4),fVar7);
      }
      else {
        dVar6 = *(double *)(ar4 + 4);
      }
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - SUB84(dVar6,0),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar6;
      }
      if (cVar11 == '\0') {
        *(int *)(ar4 + 4) = (int)((ulonglong)dVar6 >> 0x20);
      }
      else {
        *(double *)(ar4 + 4) = dVar6;
      }
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar5[3] + 4),SUB84(dVar5,0));
      dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar5 = *(double *)(ar5[3] + 4);
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar6 = 6.96545118384351e-312;
    }
    if (cVar10 == '\0') {
      fVar7 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - fVar7,SUB84(dVar5,0));
    }
    else {
      fVar7 = SUB84(dVar6 * dVar6,0);
      dVar5 = dVar5 - dVar6 * dVar6;
    }
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(uStack_1c,fVar7);
    }
    else {
      dVar6 = (double)CONCAT44(uStack_18,uStack_1c);
    }
    if (cVar10 == '\0') {
      bVar9 = (float)((ulonglong)dVar5 >> 0x20) < (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      bVar9 = dVar5 < dVar6;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar5[3] + 4),SUB84(dVar5,0));
        dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        dVar5 = *(double *)(ar5[3] + 4);
        in_xd0 = *(undefined8 *)(ar4 + 0x48);
        dVar6 = 6.96545118384351e-312;
      }
      if (cVar10 == '\0') {
        fVar8 = (float)((ulonglong)dVar6 >> 0x20);
        fVar7 = SUB84(dVar6,0) * fVar8;
        dVar6 = (double)CONCAT44(fVar8,fVar7);
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - fVar7,SUB84(dVar5,0));
      }
      else {
        dVar6 = dVar6 * dVar6;
        dVar5 = dVar5 - dVar6;
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),uStack_1c);
      }
      else {
        in_xd0 = CONCAT44(uStack_18,uStack_1c);
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar6,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar6 - dVar5,0);
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 8),fVar7);
      }
      else {
        dVar6 = *(double *)(ar4 + 8);
      }
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - SUB84(dVar6,0),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar6;
      }
      if (cVar11 == '\0') {
        *(int *)(ar4 + 8) = (int)((ulonglong)dVar6 >> 0x20);
      }
      else {
        *(double *)(ar4 + 8) = dVar6;
      }
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(uStack_18,SUB84(dVar5,0));
      dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar5 = (double)CONCAT44(uStack_14,uStack_18);
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar6 = 6.96545118384351e-312;
    }
    if (cVar10 == '\0') {
      bVar9 = (float)((ulonglong)dVar5 >> 0x20) < SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20)
      ;
    }
    else {
      bVar9 = dVar5 < dVar6 * dVar6;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x48);
        dVar6 = 6.96545118384351e-312;
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(uStack_18,fVar7);
      }
      else {
        dVar6 = (double)CONCAT44(uStack_14,uStack_18);
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar6 - dVar6,0);
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0xc),fVar7);
      }
      else {
        dVar6 = *(double *)(ar4 + 0xc);
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar11 == '\0') {
        *(float *)(ar4 + 0xc) = fVar7;
      }
      else {
        *(undefined8 *)(ar4 + 0xc) = in_xd0;
      }
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar5[3] + 8),SUB84(dVar5,0));
      dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar5 = *(double *)(ar5[3] + 8);
      dVar6 = 6.96545118384351e-312;
    }
    if (cVar10 == '\0') {
      fVar7 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - fVar7,SUB84(dVar5,0));
    }
    else {
      fVar7 = SUB84(dVar6 * dVar6,0);
      dVar5 = dVar5 - dVar6 * dVar6;
    }
    if (cVar11 == '\0') {
      in_dr0 = (double)CONCAT44(uStack_18,fVar7);
    }
    else {
      in_dr0 = (double)CONCAT44(uStack_14,uStack_18);
    }
    if (cVar10 == '\0') {
      bVar9 = (float)((ulonglong)dVar5 >> 0x20) < (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      bVar9 = dVar5 < in_dr0;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar5[3] + 8),SUB84(dVar5,0));
        dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        dVar5 = *(double *)(ar5[3] + 8);
        dVar6 = 6.96545118384351e-312;
      }
      if (cVar10 == '\0') {
        fVar8 = (float)((ulonglong)dVar6 >> 0x20);
        fVar7 = SUB84(dVar6,0) * fVar8;
        dVar6 = (double)CONCAT44(fVar8,fVar7);
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - fVar7,SUB84(dVar5,0));
      }
      else {
        dVar6 = dVar6 * dVar6;
        dVar5 = dVar5 - dVar6;
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),uStack_18);
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar6,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar6 - dVar5,0);
      }
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 0xc),fVar7);
      }
      else {
        in_dr0 = *(double *)(ar4 + 0xc);
      }
      if (cVar10 == '\0') {
        in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) - SUB84(in_dr0,0),
                                  SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 - in_dr0;
      }
      if (cVar11 == '\0') {
        *(int *)(ar4 + 0xc) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0xc) = in_dr0;
      }
    }
    iVar4 = -1;
    Vec3_dtor(&uStack_20,0xffffffff,ar6,ar7);
  }
  iVar2 = *(int *)(ar4 + 0x314);
  if ((iVar2 < 5) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      Vec3_add(*(undefined4 *)(uint)ar5[1],ar4 + 4,ar6,ar7,auStack_128);
      Vec3_assign(ar4 + 0x224,auStack_128,ar6,ar7);
      Vec3_dtor(auStack_128,0xffffffff,ar6,ar7);
      iVar4 = *(int *)(ar5[1] + 4);
      vec3_copy_8c023d8c(ar4 + 0x234,iVar4,ar6,ar7);
      break;
    case 2:
      FUN_8c023aa0(ar4 + 0x224,ar4 + 0x304,ar6,ar7);
      FUN_8c023bf4(ar4 + 0x304,&DAT_8c13ba94,ar6,ar7);
      (**(code **)(*(int *)(uint)ar5[6] + 0x128))((int *)(uint)ar5[6],ar4 + 0x224,ar6,ar7);
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x228));
      }
      iVar4 = ar4 + 0x228;
      if (cVar10 != '\0' || SUB84(in_dr0,0) <= (float)((ulonglong)in_dr0 >> 0x20)) {
        (**(code **)(*(int *)(uint)ar5[6] + 0x128))((int *)(uint)ar5[6],ar4 + 0x224,ar6,ar7);
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x228) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x228) = in_dr0;
        }
        *(int *)(ar4 + 0x314) = *(int *)(ar4 + 0x314) + 1;
        iVar4 = ar4;
      }
      break;
    case 3:
      *(undefined4 *)(ar4 + 0x220) = 1;
      *(int *)(ar4 + 0x314) = *(int *)(ar4 + 0x314) + 1;
      iVar4 = ar4;
    }
  }
  vec3_clear(ar4 + 0x13c,iVar4,ar6,ar7);
  *(undefined4 *)(ar4 + 0x1d4) = 0;
  return 0x1d4;
}

__asm__(".globl _Class_12b2ac_m1_0aff3c\n.set _Class_12b2ac_m1_0aff3c, _Class_12b2ac_m1_0aff3c_def\n");
