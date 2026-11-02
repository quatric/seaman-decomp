#include "../decls.h"
undefined4 Class_12a03c_m1_03c43c_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  uint *ar5_01;
  float fVar3;
  double in_dr0;
  double dVar4;
  float fVar5;
  double in_dr14;
  undefined8 in_xd0;
  double in_xd14;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined4 in_stack_ffffff50;
  undefined4 uStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  uint uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  
  cVar8 = '\0';
  cVar7 = '\0';
  Vec3_ctor_zero(&uStack_28,ar5,ar6,ar7);
  ar5_00 = ar5;
  Class_129cbc_m1_031598(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x244) = ar5[6];
  if ((ar5[4] == 0) || (ar5[4] == 2)) {
    if (cVar8 == '\0') {
      in_dr0 = (double)CONCAT44(0x43fa0000,SUB84(in_dr0,0));
    }
    else {
      in_dr0 = 1.3411048382276983e-08;
    }
    FUN_8c03207c(ar4,ar5_00,ar6,ar7);
  }
  FUN_8c0324ac(ar4,ar5_00,ar6,ar7);
  iVar1 = pure_virtual_stub(ar4,ar5,ar6,ar7);
  if ((*(int *)(ar4 + 0x178) == 1) && (iVar1 != 1)) {
    *(undefined4 *)(ar4 + 0x178) = 0;
  }
  FUN_8c02f2c0(*ar5,iVar1,ar6,ar7,in_stack_ffffff50);
  FUN_8c031ab4(ar4,*(undefined4 *)(ar5[1] + 4),ar6,ar7);
  Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7,auStack_38);
  Vec3_add(auStack_38,ar4 + 0x90,ar6,ar7,auStack_48);
  Vec3_add(auStack_48,ar4 + 0x6c,ar6,ar7,auStack_58);
  Vec3_add(auStack_58,ar4 + 0x2a8,ar6,ar7,auStack_68);
  Vec3_assign(ar4 + 4,auStack_68,ar6,ar7);
  Vec3_dtor(auStack_68,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_58,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_48,0xffffffff,ar6,ar7);
  ar5_01 = (uint *)0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
  vec3_clear(ar4 + 0x2a8,ar5_01,ar6,ar7);
  if ((((ar5[4] == 0) || (ar5[4] == 2)) && (*(int *)(ar4 + 0x124) != 0x18)) &&
     ((*(int *)(ar4 + 0x124) != 2 && (*(int *)(ar4 + 0x334) != 1)))) {
    (**(code **)(*(int *)(uint)ar5[6] + 0x184))((int *)(uint)ar5[6],ar5_01,ar6,ar7);
    if (cVar8 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20))
      ;
      dVar4 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar4 = 2.9975963366641684e+19;
      in_xd14 = in_dr0;
    }
    if (cVar7 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 SUB84(in_dr14,0) -
                                 SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 - dVar4 * dVar4;
    }
    if (cVar8 == '\0') {
      in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 8),*(undefined4 *)(*(int *)(uint)ar5[1] + 4));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)(uint)ar5[1] + 4);
      in_dr0 = *(double *)(ar4 + 8);
    }
    if (cVar7 == '\0') {
      fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
      fVar3 = SUB84(in_dr0,0) + fVar5;
      in_dr0 = (double)CONCAT44(fVar5,fVar3);
      bVar6 = SUB84(in_dr14,0) < fVar3;
    }
    else {
      in_dr0 = in_dr0 + in_dr0;
      fVar3 = SUB84(in_dr0,0);
      bVar6 = in_dr14 < in_dr0;
    }
    if (bVar6) {
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)(*(int *)(uint)ar5[1] + 4),fVar3);
      }
      else {
        in_dr0 = *(double *)(*(int *)(uint)ar5[1] + 4);
      }
      if (cVar7 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) - (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 - in_dr0;
      }
      if (cVar8 == '\0') {
        *(int *)(ar4 + 8) = SUB84(in_dr14,0);
      }
      else {
        *(double *)(ar4 + 8) = in_xd14;
      }
    }
  }
  iVar1 = get_field_24_026024(ar5[6],ar5_01,ar6,ar7);
  if (iVar1 == 0) {
    if (cVar8 == '\0') {
      in_dr14 = (double)CONCAT44(*(undefined4 *)(*(int *)(uint)ar5[1] + 8),SUB84(in_dr14,0));
      dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0xc),SUB84(in_dr0,0));
    }
    else {
      in_dr14 = *(double *)(*(int *)(uint)ar5[1] + 8);
      dVar4 = *(double *)(ar4 + 0xc);
    }
    if (cVar7 == '\0') {
      in_dr14 = (double)CONCAT44((float)((ulonglong)in_dr14 >> 0x20) +
                                 (float)((ulonglong)dVar4 >> 0x20),SUB84(in_dr14,0));
    }
    else {
      in_dr14 = in_dr14 + dVar4;
    }
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44(0x3f99999a,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar4 = 1.2986509618072377e+23;
    }
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      in_dr14 = (double)CONCAT44((float)((ulonglong)in_dr14 >> 0x20) + fVar3,SUB84(in_dr14,0));
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
      in_dr14 = in_dr14 + dVar4 * dVar4;
    }
    if (cVar8 == '\0') {
      in_dr0 = (double)CONCAT44(0x44bb8000,fVar3);
    }
    else {
      in_dr0 = 6.28680480336352e-312;
    }
    fVar3 = (float)((ulonglong)in_dr14 >> 0x20);
    if (cVar7 == '\0') {
      bVar6 = (float)((ulonglong)in_dr0 >> 0x20) < fVar3;
    }
    else {
      bVar6 = in_dr0 < in_dr14;
    }
    if (bVar6) {
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(0x44bb8000,*(undefined4 *)(ar4 + 0xc));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0xc);
        in_dr0 = 6.28680480336352e-312;
      }
      fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
      if (cVar7 == '\0') {
        fVar3 = fVar3 - fVar5;
        in_dr14 = (double)CONCAT44(fVar3,SUB84(in_dr14,0));
        in_dr0 = (double)CONCAT44(fVar5,SUB84(in_dr0,0) - fVar3);
      }
      else {
        in_dr14 = in_dr14 - in_dr0;
        in_dr0 = in_dr0 - in_dr14;
      }
      if (cVar8 == '\0') {
        *(int *)(ar4 + 0xc) = SUB84(in_dr0,0);
      }
      else {
        *(undefined8 *)(ar4 + 0xc) = in_xd0;
      }
    }
  }
  if (*(int *)(ar4 + 0x128) < 3) {
    if (((*(int *)(ar4 + 0x124) != 0x2e) && (*(int *)(ar4 + 0x124) != 0x18)) &&
       (*(int *)(ar4 + 0x124) != 2)) {
      Vec3_add(*(undefined4 *)(uint)ar5[1],ar4 + 4,ar6,ar7,auStack_78);
      Vec3_assign(&uStack_28,auStack_78,ar6,ar7);
      Vec3_dtor(auStack_78,0xffffffff,ar6,ar7);
      fVar3 = fStack_20;
      if (cVar8 != '\0') {
        in_xd0 = CONCAT44(uStack_1c,fStack_20);
        fVar3 = 0.0;
      }
      if (cVar7 == '\0' && fVar3 < 0.0) {
        if (cVar8 == '\0') {
          fVar3 = 0.0;
        }
        else {
          in_xd0 = 0;
        }
        if (cVar8 == '\0') {
          dVar4 = (double)CONCAT44(*(undefined4 *)(*(int *)(uint)ar5[1] + 8),fVar3);
        }
        else {
          dVar4 = *(double *)(*(int *)(uint)ar5[1] + 8);
        }
        if (cVar7 == '\0') {
          fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar4 - dVar4,0);
        }
        if (cVar8 == '\0') {
          *(float *)(ar4 + 0xc) = fVar3;
        }
        else {
          *(undefined8 *)(ar4 + 0xc) = in_xd0;
        }
      }
      if (cVar8 == '\0') {
        dVar4 = (double)(ulonglong)uStack_28;
      }
      else {
        in_xd0 = CONCAT44(uStack_24,uStack_28);
        dVar4 = 0.0;
      }
      if (cVar7 == '\0' && SUB84(dVar4,0) < 0.0) {
        if (cVar8 == '\0') {
          dVar4 = 0.0;
        }
        else {
          in_xd0 = 0;
        }
        if (cVar8 == '\0') {
          dVar4 = (double)CONCAT44(*(undefined4 *)*(double **)ar5[1],SUB84(dVar4,0));
        }
        else {
          dVar4 = **(double **)ar5[1];
        }
        if (cVar7 == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) - fVar3);
        }
        else {
          dVar4 = dVar4 - dVar4;
        }
        if (cVar8 == '\0') {
          *(int *)(ar4 + 4) = SUB84(dVar4,0);
        }
        else {
          *(undefined8 *)(ar4 + 4) = in_xd0;
        }
      }
      Vec3_add(*(undefined4 *)(uint)ar5[1],ar4 + 4,ar6,ar7,auStack_88);
      Vec3_assign(&uStack_28,auStack_88,ar6,ar7);
      ar5_01 = (uint *)0xffffffff;
      Vec3_dtor(auStack_88,0xffffffff,ar6,ar7);
      FUN_8c03c314(ar4,ar5_01,ar6,ar7);
      if ((*(int *)(ar4 + 0x124) != 0x18) && (*(int *)(ar4 + 0x124) != 2)) {
        ar5_01 = &uStack_28;
        (**(code **)(*(int *)(uint)ar5[6] + 0x128))((int *)(uint)ar5[6],ar5_01,ar6,ar7);
        iStack_a8 = SUB84(dVar4,0);
        iStack_a4 = (int)((ulonglong)dVar4 >> 0x20);
        if (cVar8 == '\0') {
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x48));
          dVar4 = (double)CONCAT44(0x3e99999a,iStack_a8);
          iStack_a8 = iStack_a4;
          iStack_a4 = iVar1;
        }
        else {
          in_xd14 = *(double *)(ar4 + 0x48);
          dVar4 = 2.97598305018595e-312;
        }
        if (cVar7 == '\0') {
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                     SUB84(in_dr14,0) * (float)((ulonglong)dVar4 >> 0x20));
        }
        else {
          in_dr14 = in_dr14 * dVar4;
        }
        if (cVar8 == '\0') {
          dVar4 = (double)CONCAT44(iStack_a8,SUB84(dVar4,0));
        }
        else {
          dVar4 = (double)CONCAT44(iStack_a4,iStack_a8);
        }
        if (cVar7 == '\0') {
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                     SUB84(in_dr14,0) + (float)((ulonglong)dVar4 >> 0x20));
        }
        else {
          in_dr14 = in_dr14 + dVar4;
        }
        if (cVar8 == '\0') {
          dVar4 = (double)CONCAT44(uStack_24,SUB84(dVar4,0));
        }
        else {
          dVar4 = (double)CONCAT44(fStack_20,uStack_24);
        }
        if (cVar7 == '\0') {
          bVar6 = (float)((ulonglong)dVar4 >> 0x20) < SUB84(in_dr14,0);
        }
        else {
          bVar6 = dVar4 < in_dr14;
        }
        if (bVar6) {
          if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(*(undefined4 *)(*(int *)(uint)ar5[1] + 4),SUB84(dVar4,0));
          }
          else {
            dVar4 = *(double *)(*(int *)(uint)ar5[1] + 4);
          }
          if (cVar7 == '\0') {
            fVar3 = SUB84(in_dr14,0) - (float)((ulonglong)dVar4 >> 0x20);
          }
          else {
            fVar3 = SUB84(in_dr14 - dVar4,0);
          }
          if (cVar8 == '\0') {
            *(float *)(ar4 + 8) = fVar3;
          }
          else {
            *(double *)(ar4 + 8) = in_xd14;
          }
          FUN_8c031748(ar4,ar5_01,ar6,ar7);
        }
      }
    }
  }
  else if ((ar5[4] == 0) || (ar5[4] == 2)) {
    Vec3_add(*(undefined4 *)(uint)ar5[1],ar4 + 4,ar6,ar7,auStack_98);
    Vec3_assign(&uStack_28,auStack_98,ar6,ar7);
    ar5_01 = (uint *)0xffffffff;
    Vec3_dtor(auStack_98,0xffffffff,ar6,ar7);
    if ((*(int *)(ar4 + 0x124) != 2) && (*(int *)(ar4 + 0x334) != 1)) {
      FUN_8c03c314(ar4,ar5_01,ar6,ar7);
      ar5_01 = &uStack_28;
      (**(code **)(*(int *)(uint)ar5[6] + 0x128))((int *)(uint)ar5[6],ar5_01,ar6,ar7);
      uStack_ac = SUB84(in_dr0,0);
      uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      if (cVar8 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x48));
        dVar4 = (double)CONCAT44(0x3e99999a,uStack_ac);
        uStack_ac = uVar2;
      }
      else {
        in_xd14 = *(double *)(ar4 + 0x48);
        dVar4 = 2.97598305018595e-312;
        iStack_a8 = uVar2;
      }
      if (cVar7 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) * (float)((ulonglong)dVar4 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 * dVar4;
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(uStack_ac,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(iStack_a8,uStack_ac);
      }
      if (cVar7 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) + (float)((ulonglong)dVar4 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 + dVar4;
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(uStack_24,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(fStack_20,uStack_24);
      }
      if (cVar7 == '\0') {
        bVar6 = (float)((ulonglong)dVar4 >> 0x20) < SUB84(in_dr14,0);
      }
      else {
        bVar6 = dVar4 < in_dr14;
      }
      if (bVar6) {
        if (cVar8 == '\0') {
          dVar4 = (double)CONCAT44(*(undefined4 *)(*(int *)(uint)ar5[1] + 4),SUB84(dVar4,0));
        }
        else {
          dVar4 = *(double *)(*(int *)(uint)ar5[1] + 4);
        }
        if (cVar7 == '\0') {
          fVar3 = SUB84(in_dr14,0) - (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(in_dr14 - dVar4,0);
        }
        if (cVar8 == '\0') {
          *(float *)(ar4 + 8) = fVar3;
        }
        else {
          *(double *)(ar4 + 8) = in_xd14;
        }
        FUN_8c031748(ar4,ar5_01,ar6,ar7);
      }
    }
  }
  vec3_clear(ar4 + 0x2a8,ar5_01,ar6,ar7);
  *(undefined4 *)(ar4 + 0x21c) = 0;
  uVar2 = Vec3_dtor(&uStack_28,0xffffffff,ar6,ar7);
  return uVar2;
}

__asm__(".globl _Class_12a03c_m1_03c43c\n.set _Class_12a03c_m1_03c43c, _Class_12a03c_m1_03c43c_def\n");
