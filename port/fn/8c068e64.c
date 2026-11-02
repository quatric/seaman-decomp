#include "../decls.h"
undefined4 FUN_8c068e64_def(int *ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *ar4_00;
  int *a5;
  undefined1 *ar5_00;
  double *pdVar4;
  code *ar6_00;
  int *piVar5;
  float fVar6;
  double in_dr0;
  double dVar7;
  float fVar10;
  double dVar8;
  ulonglong uVar9;
  undefined4 in_fr3;
  double in_dr14;
  double in_xd0;
  undefined8 in_xd14;
  bool bVar11;
  char cVar12;
  char cVar13;
  ulonglong uStack_3050;
  undefined1 auStack_3048 [1996];
  undefined1 auStack_287c [16];
  undefined1 auStack_286c [16];
  undefined1 auStack_285c [12];
  undefined1 auStack_2850 [16];
  undefined1 auStack_2840 [16];
  undefined1 auStack_2830 [16];
  undefined1 auStack_2820 [16];
  undefined1 auStack_2810 [12];
  undefined1 auStack_2804 [16];
  undefined1 auStack_27f4 [16];
  undefined1 auStack_27e4 [16];
  undefined1 auStack_27d4 [16];
  undefined1 auStack_27c4 [12];
  undefined1 auStack_27b8 [16];
  undefined1 auStack_27a8 [16];
  undefined1 auStack_2798 [16];
  undefined1 auStack_2788 [16];
  undefined1 auStack_2778 [12];
  undefined1 auStack_276c [16];
  undefined1 auStack_275c [16];
  undefined1 auStack_274c [12];
  undefined1 auStack_2740 [1996];
  undefined1 auStack_1f74 [1996];
  undefined1 auStack_17a8 [1996];
  undefined1 auStack_fdc [1996];
  undefined1 auStack_810 [1996];
  uint auStack_44 [4];
  uint auStack_34 [4];
  undefined1 auStack_24 [20];
  
  cVar13 = '\0';
  cVar12 = '\0';
  piVar5 = ar6;
  Vec3_ctor_zero(auStack_24,ar5,ar6,ar7);
  auStack_44[0] = DAT_8c137100;
  auStack_44[1] = DAT_8c137104;
  auStack_44[2] = DAT_8c137108;
  auStack_44[3] = DAT_8c13710c;
  auStack_34[0] = DAT_8c137110;
  auStack_34[1] = DAT_8c137114;
  auStack_34[2] = DAT_8c137118;
  auStack_34[3] = DAT_8c13711c;
  iVar3 = ar4[0x8c];
  if ((5 < iVar3) || (iVar3 < 0)) goto switchD_8c068ec8_default;
                    
  switch(iVar3) {
  case 0:
    FUN_8c068890(auStack_810,ar5,piVar5,ar7);
    uVar2 = SUB84(in_dr0,0);
    uVar1 = FUN_8c06afb0(ar4,auStack_810,piVar5,ar7);
    if (cVar13 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),ar4[0x90]);
      dVar8 = (double)CONCAT44(0x44610000,uVar2);
    }
    else {
      in_xd14 = *(undefined8 *)(ar4 + 0x90);
      dVar8 = -9.834358688611842e-251;
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44((float)(uVar1 & 0xffff),SUB84(dVar8,0));
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 (SUB84(in_dr14,0) / (float)((ulonglong)dVar8 >> 0x20)) *
                                 (float)(uVar1 & 0xffff));
    }
    else {
      dVar7 = (double)(uVar1 & 0xffff);
      in_dr14 = (in_dr14 / dVar8) * dVar7;
    }
    uVar2 = SUB84(dVar7,0);
    FUN_8c068818(auStack_810,0xffffffff,piVar5,ar7);
    if (cVar13 == '\0') {
      in_dr0 = (double)CONCAT44(ar4[0x90],uVar2);
    }
    else {
      in_dr0 = *(double *)(ar4 + 0x90);
    }
    if (cVar12 == '\0') {
      bVar11 = (float)((ulonglong)in_dr0 >> 0x20) < SUB84(in_dr14,0);
    }
    else {
      bVar11 = in_dr0 < in_dr14;
    }
    if (bVar11) {
      if (cVar13 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),ar4[0x90]);
      }
      else {
        in_xd14 = *(undefined8 *)(ar4 + 0x90);
      }
      ar4[0x8c] = ar4[0x8c] + 1;
      iVar3 = libgcc_divide_helper_01031c(ar4[0x84],4,piVar5,ar7);
      ar4[0x85] = ar4[0x85] & ~auStack_44[iVar3];
      piVar5 = ar4;
    }
    if (cVar13 == '\0') {
      ar4[0x8d] = SUB84(in_dr14,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x8d) = in_xd14;
    }
  case 1:
    uVar2 = SUB84(in_dr0,0);
    FUN_8c068890(auStack_fdc,ar5,piVar5,ar7);
    uVar1 = FUN_8c06afb0(ar4,auStack_fdc,piVar5,ar7);
    if (cVar13 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),ar4[0x90]);
      dVar8 = (double)CONCAT44(0x44e10000,uVar2);
    }
    else {
      in_xd14 = *(undefined8 *)(ar4 + 0x90);
      dVar8 = 1.20586454969464e-311;
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44((float)(uVar1 & 0xffff),SUB84(dVar8,0));
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 (SUB84(in_dr14,0) / (float)((ulonglong)dVar8 >> 0x20)) *
                                 (float)(uVar1 & 0xffff));
    }
    else {
      dVar7 = (double)(uVar1 & 0xffff);
      in_dr14 = (in_dr14 / dVar8) * dVar7;
    }
    uVar2 = SUB84(dVar7,0);
    FUN_8c068818(auStack_fdc,0xffffffff,piVar5,ar7);
    if (cVar13 == '\0') {
      in_dr0 = (double)CONCAT44(ar4[0x90],uVar2);
    }
    else {
      in_dr0 = *(double *)(ar4 + 0x90);
    }
    if (cVar12 == '\0') {
      bVar11 = (float)((ulonglong)in_dr0 >> 0x20) < SUB84(in_dr14,0);
    }
    else {
      bVar11 = in_dr0 < in_dr14;
    }
    if (bVar11) {
      if (cVar13 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),ar4[0x90]);
      }
      else {
        in_xd14 = *(undefined8 *)(ar4 + 0x90);
      }
      ar4[0x8c] = ar4[0x8c] + 1;
      iVar3 = libgcc_divide_helper_01031c(ar4[0x84],4,piVar5,ar7);
      ar4[0x85] = ar4[0x85] & ~auStack_34[iVar3];
    }
    if (cVar13 == '\0') {
      ar4[0x8e] = SUB84(in_dr14,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x8e) = in_xd14;
    }
  case 2:
    uVar2 = SUB84(in_dr0,0);
    FUN_8c068890(auStack_17a8,ar5,piVar5,ar7);
    uVar1 = FUN_8c06afb0(ar4,auStack_17a8,piVar5,ar7);
    if (cVar13 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),ar4[0x90]);
      dVar8 = (double)CONCAT44(0x45610000,uVar2);
    }
    else {
      in_xd14 = *(undefined8 *)(ar4 + 0x90);
      dVar8 = 9.4222363968352e-311;
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44((float)(uVar1 & 0xffff),SUB84(dVar8,0));
      dVar8 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               (SUB84(in_dr14,0) / (float)((ulonglong)dVar8 >> 0x20)) *
                               (float)(uVar1 & 0xffff));
    }
    else {
      dVar7 = (double)(uVar1 & 0xffff);
      dVar8 = (in_dr14 / dVar8) * dVar7;
    }
    uVar2 = SUB84(dVar7,0);
    FUN_8c068818(auStack_17a8,0xffffffff,piVar5,ar7);
    if (cVar13 == '\0') {
      dVar7 = (double)CONCAT44(ar4[0x90],uVar2);
    }
    else {
      dVar7 = *(double *)(ar4 + 0x90);
    }
    if (cVar12 == '\0') {
      bVar11 = (float)((ulonglong)dVar7 >> 0x20) < SUB84(dVar8,0);
    }
    else {
      bVar11 = dVar7 < dVar8;
    }
    if (bVar11) {
      if (cVar13 == '\0') {
        dVar8 = (double)(ulonglong)(uint)ar4[0x90];
      }
      else {
        in_xd14 = *(undefined8 *)(ar4 + 0x90);
      }
      ar4[0x8c] = ar4[0x8c] + 1;
      FUN_8c068890(auStack_1f74,ar5,piVar5,ar7);
      FUN_8c06af5c(ar4,auStack_1f74,piVar5,ar7);
      FUN_8c068818(auStack_1f74,0xffffffff,piVar5,ar7);
    }
    if (cVar13 == '\0') {
      ar4[0x8f] = SUB84(dVar8,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x8f) = in_xd14;
    }
    break;
  case 3:
    FUN_8c068890(auStack_2740,ar5,piVar5,ar7);
    uVar2 = FUN_8c06afb0(ar4,auStack_2740,piVar5,ar7);
    bVar11 = 0x707f < (ushort)uVar2;
    FUN_8c068818(auStack_2740,0xffffffff,piVar5,ar7);
    a5 = (int *)0x0;
    if ((bVar11) && (a5 = (int *)0x2, (int)_DAT_8c2809a8 < 2)) {
      _DAT_8c2809a8 = (double *)((int)_DAT_8c2809a8 + 1);
      ar4[0x8c] = ar4[0x8c] + 1;
      a5 = ar4;
    }
    ar4_00 = ar6;
    (**(code **)(*ar6 + 0x188))(ar6,a5,piVar5,ar7);
    dVar8 = in_dr0;
    if (cVar13 == '\0') {
      uStack_3050 = (ulonglong)CONCAT14(bVar11,(int)((ulonglong)in_dr0 >> 0x20));
      in_dr0 = (double)(uStack_3050 & 0xffffffff);
      dVar8 = in_xd0;
    }
    in_xd0 = dVar8;
    fVar6 = SUB84(in_dr0,0);
    if ((cVar12 == '\0' && 0.0 < fVar6) ||
       (ar4_00 = ar4, a5 = ar6, iVar3 = FUN_8c06d714(ar4,ar6,piVar5,ar7), iVar3 != 0)) {
      uVar2 = rand(ar4_00,a5,piVar5,ar7);
      iVar3 = libgcc_divide_helper_01031c(uVar2,5,piVar5,ar7);
      if (cVar13 == '\0') {
        dVar8 = (double)CONCAT44(ar4[0x91],in_fr3);
      }
      else {
        dVar8 = *(double *)(ar4 + 0x91);
      }
      if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x41200000,(float)(iVar3 + 8));
      }
      else {
        dVar7 = 2.2974389978324538e-39;
      }
      if (cVar12 == '\0') {
        fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x37e90453,fVar6);
      }
      else {
        dVar7 = 1.18029310218391e-311;
      }
      if (cVar12 == '\0') {
        fVar10 = (float)((ulonglong)dVar7 >> 0x20);
        fVar6 = SUB84(dVar7,0) * fVar10;
        dVar7 = (double)CONCAT44(fVar10,fVar6);
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - fVar6,SUB84(dVar8,0));
      }
      else {
        dVar7 = dVar7 * dVar7;
        dVar8 = dVar8 - dVar7;
      }
      if (cVar13 == '\0') {
        ar4[0x91] = (int)((ulonglong)dVar8 >> 0x20);
        dVar7 = (double)(ulonglong)(uint)ar4[0x91];
      }
      else {
        *(double *)(ar4 + 0x91) = dVar8;
        in_xd0 = *(double *)(ar4 + 0x91);
      }
      if (cVar12 == '\0' && SUB84(dVar7,0) < 0.0) {
        if (cVar13 == '\0') {
          ar4[0x91] = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x91) = (ulonglong)dVar7 & 0xffffffff;
        }
      }
      if (cVar13 == '\0') {
        in_dr0 = (double)CONCAT44(0x42b40000,ar4[0x91]);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x91);
        in_dr0 = 1.18887054821592e-311;
      }
      if (cVar12 == '\0') {
        in_dr0 = (double)(ulonglong)(uint)(SUB84(in_dr0,0) * (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        in_dr0 = in_dr0 * in_dr0;
      }
      if (cVar13 == '\0') {
        ar4[0x8b] = SUB84(in_dr0,0);
      }
      else {
        *(double *)(ar4 + 0x8b) = in_xd0;
      }
    }
    else {
      pdVar4 = _DAT_8c2809a8;
      if ((int)_DAT_8c2809a8 < 2) {
        pdVar4 = (double *)(ar4 + 0x91);
        if (cVar13 == '\0') {
          fVar6 = *(float *)pdVar4;
        }
        else {
          in_xd0 = *pdVar4;
        }
        in_dr0 = (double)(ulonglong)(uint)fVar6;
        if (fVar6 == 0.0) {
          _DAT_8c2809a8 = (double *)((int)_DAT_8c2809a8 + 1);
          ar4[0x8c] = ar4[0x8c] + 1;
          piVar5 = ar4;
          goto LAB_8c06940e;
        }
      }
      uVar2 = rand(pdVar4,&DAT_8c2809a8,piVar5,ar7);
      iVar3 = libgcc_divide_helper_01031c(uVar2,5,piVar5,ar7);
      if (cVar13 == '\0') {
        dVar8 = (double)CONCAT44(ar4[0x91],in_fr3);
      }
      else {
        dVar8 = *(double *)(ar4 + 0x91);
      }
      if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x41200000,(float)(iVar3 + 8));
      }
      else {
        dVar7 = 2.2974389978324538e-39;
      }
      if (cVar12 == '\0') {
        fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x37e90453,fVar6);
      }
      else {
        dVar7 = 1.12087722003689e-311;
      }
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) +
                                 SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 + dVar7 * dVar7;
      }
      if (cVar13 == '\0') {
        ar4[0x91] = (int)((ulonglong)dVar8 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x91) = dVar8;
      }
      iVar3 = libgcc_divide_helper_01031c(ar4[0x84],4,piVar5,ar7);
      ar4[0x8a] = iVar3 * 3;
      if (cVar13 == '\0') {
        dVar8 = (double)CONCAT44(0x42b40000,ar4[0x91]);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x91);
        dVar8 = 1.14643063239662e-311;
      }
      if (cVar12 == '\0') {
        fVar6 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar13 == '\0') {
        ar4[0x8b] = (int)fVar6;
        fVar6 = (float)ar4[0x91];
      }
      else {
        *(double *)(ar4 + 0x8b) = in_xd0;
        in_xd0 = *(double *)(ar4 + 0x91);
      }
      in_dr0 = (double)CONCAT44(0x3f800000,fVar6);
      if (cVar12 != '\0' || 1.0 <= fVar6) {
        *(undefined4 *)(ar4[0x87] * 8 + -0x73d7f604) = 0;
        *(undefined4 *)(ar4[0x87] * 8 + -0x73d7f600) = 0;
        ar5_00 = (undefined1 *)0x4;
        if (ar4[0x84] < 4) {
          _DAT_8c2809a0 = _DAT_8c2809a0 + -1;
        }
        else {
          ar5_00 = &DAT_8c28099c;
          _DAT_8c28099c = _DAT_8c28099c + -1;
        }
        FUN_8c0f4d84(ar4,ar5_00,piVar5,ar7);
      }
    }
LAB_8c06940e:
    if (ar4[0x8c] != 3) {
      in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
      if (cVar13 == '\0') {
        ar4[0x8b] = 0;
      }
      else {
        *(double *)(ar4 + 0x8b) = in_dr0;
      }
switchD_8c068ec8_caseD_4:
      uVar1 = SUB84(in_dr0,0);
      iVar3 = FUN_8c0d19dc(0xe,0x1b,piVar5,ar7);
      ar4[0xa4] = iVar3;
      *(undefined4 *)(ar4[0xa4] + 0x230) = 4;
      uVar2 = get_field_24_026024(ar6,0x230,piVar5,ar7);
      *(undefined4 *)(ar4[0xa4] + 0x218) = uVar2;
      *(undefined4 *)(ar4[0xa4] + 0x21c) = 0xffffffff;
      uVar9 = (ulonglong)uVar1;
      if (cVar13 == '\0') {
        *(undefined4 *)(ar4[0xa4] + 0x22c) = 0;
      }
      else {
        *(ulonglong *)(ar4[0xa4] + 0x22c) = uVar9;
      }
      iVar3 = ar4[0xa4];
      (**(code **)(*ar6 + 0x4c))(ar6,iVar3,piVar5,ar7);
      fVar6 = (float)uVar9;
      FUN_8c06abb8(ar4,iVar3,piVar5,ar7);
      ar6_00 = vec3_copy_8c023d8c;
      vec3_copy_8c023d8c(ar4[0xa4] + 0x50,auStack_274c,vec3_copy_8c023d8c,ar7);
      object_dtor_delete(auStack_274c,0xffffffff,ar6_00,ar7);
      uVar2 = 4;
      iVar3 = libgcc_divide_helper_01031c(ar4[0x84],4,ar6_00,ar7);
      if (iVar3 == 0) {
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(0x430d0000,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x15);
          dVar8 = 1.35014511006795e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 - dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(ar4[0xa4] + 0x54) = fVar6;
        }
        else {
          *(double *)(ar4[0xa4] + 0x54) = in_xd0;
        }
        iVar3 = ar4[0xa4];
        pdVar4 = (double *)(iVar3 + 0x27c);
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(0x430d0000,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x15);
          dVar8 = 1.35014511006795e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 - dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)pdVar4 = fVar6;
        }
        else {
          *pdVar4 = in_xd0;
        }
        FUN_8c06aa04(ar4,iVar3,ar6_00,ar7);
        piVar5 = ar4 + 0x90;
        Vec3_scale(auStack_275c,piVar5,ar6_00,ar7,auStack_276c);
        if (cVar13 != '\0') {
          fVar6 = 141.0;
        }
        Vec3_set_xyz(auStack_2778,piVar5,ar6_00,ar7);
        FUN_8c023484(auStack_276c,auStack_2778,ar6_00,ar7,auStack_2788);
        Vec3_add(ar4 + 0xc,auStack_2788,ar6_00,ar7,auStack_2798);
        Vec3_assign(ar4[0xa4] + 0x30,auStack_2798,ar6_00,ar7);
        Vec3_dtor(auStack_2798,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_2788,0xffffffff,ar6_00,ar7);
        object_dtor_delete(auStack_2778,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_276c,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_275c,0xffffffff,ar6_00,ar7);
      }
      else if (iVar3 == 1) {
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(0x4286999a,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x15);
          dVar8 = 1.35014075831897e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 + dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(ar4[0xa4] + 0x54) = fVar6;
        }
        else {
          *(double *)(ar4[0xa4] + 0x54) = in_xd0;
        }
        pdVar4 = (double *)(ar4[0xa4] + 0x27c);
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(0x4286999a,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x15);
          dVar8 = 1.35014075831897e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 + dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)pdVar4 = fVar6;
        }
        else {
          *pdVar4 = in_xd0;
        }
        FUN_8c06aa04(ar4,pdVar4,ar6_00,ar7);
        piVar5 = ar4 + 0x90;
        Vec3_scale(auStack_27a8,piVar5,ar6_00,ar7,auStack_27b8);
        if (cVar13 != '\0') {
          fVar6 = 67.3;
        }
        Vec3_set_xyz(auStack_27c4,piVar5,ar6_00,ar7);
        FUN_8c023484(auStack_27b8,auStack_27c4,ar6_00,ar7,auStack_27d4);
        Vec3_add(ar4 + 0xc,auStack_27d4,ar6_00,ar7,auStack_27e4);
        Vec3_assign(ar4[0xa4] + 0x30,auStack_27e4,ar6_00,ar7);
        Vec3_dtor(auStack_27e4,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_27d4,0xffffffff,ar6_00,ar7);
        object_dtor_delete(auStack_27c4,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_27b8,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_27a8,0xffffffff,ar6_00,ar7);
      }
      else if (iVar3 == 2) {
        pdVar4 = (double *)(ar4[0xa4] + 0x54);
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(0x41680000,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x15);
          dVar8 = 1.35013147847267e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 + dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)pdVar4 = fVar6;
        }
        else {
          *pdVar4 = in_xd0;
        }
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(0x41680000,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x15);
          dVar8 = 1.35013147847267e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 + dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(ar4[0xa4] + 0x27c) = fVar6;
        }
        else {
          *(double *)(ar4[0xa4] + 0x27c) = in_xd0;
        }
        FUN_8c06aa04(ar4,pdVar4,ar6_00,ar7);
        piVar5 = ar4 + 0x90;
        Vec3_scale(auStack_27f4,piVar5,ar6_00,ar7,auStack_2804);
        if (cVar13 != '\0') {
          fVar6 = 14.5;
        }
        Vec3_set_xyz(auStack_2810,piVar5,ar6_00,ar7);
        ar6_00 = FUN_8c023484;
        FUN_8c023484(auStack_2804,auStack_2810,FUN_8c023484,ar7,auStack_2820);
        Vec3_add(ar4 + 0xc,auStack_2820,ar6_00,ar7,auStack_2830);
        Vec3_assign(ar4[0xa4] + 0x30,auStack_2830,ar6_00,ar7);
        Vec3_dtor(auStack_2830,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_2820,0xffffffff,ar6_00,ar7);
        object_dtor_delete(auStack_2810,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_2804,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_27f4,0xffffffff,ar6_00,ar7);
      }
      else if (iVar3 == 3) {
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(0x4299999a,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x15);
          dVar8 = 1.3501413735216e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 - dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(ar4[0xa4] + 0x54) = fVar6;
        }
        else {
          *(double *)(ar4[0xa4] + 0x54) = in_xd0;
        }
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(0x4299999a,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x15);
          dVar8 = 1.3501413735216e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 - dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(ar4[0xa4] + 0x27c) = fVar6;
        }
        else {
          *(double *)(ar4[0xa4] + 0x27c) = in_xd0;
        }
        FUN_8c06aa04(ar4,uVar2,ar6_00,ar7);
        piVar5 = ar4 + 0x90;
        Vec3_scale(auStack_2840,piVar5,ar6_00,ar7,auStack_2850);
        if (cVar13 != '\0') {
          fVar6 = 76.8;
        }
        Vec3_set_xyz(auStack_285c,piVar5,ar6_00,ar7);
        FUN_8c023484(auStack_2850,auStack_285c,ar6_00,ar7,auStack_286c);
        Vec3_add(ar4 + 0xc,auStack_286c,ar6_00,ar7,auStack_287c);
        Vec3_assign(ar4[0xa4] + 0x30,auStack_287c,ar6_00,ar7);
        Vec3_dtor(auStack_287c,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_286c,0xffffffff,ar6_00,ar7);
        object_dtor_delete(auStack_285c,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_2850,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_2840,0xffffffff,ar6_00,ar7);
      }
      Vec3_assign(ar4[0xa4] + 0x268,ar4 + 0xc,ar6_00,ar7);
      if (cVar13 == '\0') {
        *(undefined4 *)(ar4[0xa4] + 0x278) = 0;
      }
      else {
        *(ulonglong *)(ar4[0xa4] + 0x278) = (ulonglong)(uint)fVar6;
      }
      if (cVar13 == '\0') {
        *(undefined4 *)(ar4[0xa4] + 0x280) = 0;
      }
      else {
        *(ulonglong *)(ar4[0xa4] + 0x280) = (ulonglong)(uint)fVar6;
      }
      if (cVar13 == '\0') {
        *(int *)(ar4[0xa4] + 0x5c) = ar4[0x90];
      }
      else {
        *(undefined8 *)(ar4[0xa4] + 0x5c) = *(undefined8 *)(ar4 + 0x90);
      }
      if (cVar13 == '\0') {
        *(int *)(ar4[0xa4] + 0x60) = ar4[0x90];
      }
      else {
        *(undefined8 *)(ar4[0xa4] + 0x60) = *(undefined8 *)(ar4 + 0x90);
      }
      if (cVar13 == '\0') {
        *(int *)(ar4[0xa4] + 100) = ar4[0x90];
      }
      else {
        *(undefined8 *)(ar4[0xa4] + 100) = *(undefined8 *)(ar4 + 0x90);
      }
      ar4[0xa4] = 0;
      FUN_8c068890(auStack_3048,ar5,ar6_00,ar7);
      FUN_8c06af5c(ar4,auStack_3048,ar6_00,ar7);
      FUN_8c068818(auStack_3048,0xffffffff,ar6_00,ar7);
      piVar5 = (int *)(ar4[0x8c] + 1);
      ar4[0x8c] = (int)piVar5;
      goto switchD_8c068ec8_caseD_5;
    }
    break;
  case 4:
    goto switchD_8c068ec8_caseD_4;
  case 5:
switchD_8c068ec8_caseD_5:
    iVar3 = libgcc_divide_helper_01031c(ar4[0x84],4,piVar5,ar7);
    ar4[0x8a] = iVar3 * 3 + 1;
    if (cVar13 == '\0') {
      dVar8 = (double)CONCAT44(0x3dcccccd,ar4[0x8b]);
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x8b);
      dVar8 = 21990236605644.8;
    }
    if (cVar12 == '\0') {
      fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar8 + dVar8,0);
    }
    if (cVar13 == '\0') {
      ar4[0x8b] = (int)fVar6;
      uVar9 = CONCAT44(0x42b40000,ar4[0x8b]);
    }
    else {
      *(double *)(ar4 + 0x8b) = in_xd0;
      uVar9 = 0x30a842b40000;
    }
    if (cVar12 != '\0' || (float)(uVar9 >> 0x20) <= (float)uVar9) {
      ar4[0x8c] = 3;
      if (cVar13 == '\0') {
        ar4[0x8b] = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x8b) = uVar9 & 0xffffffff;
      }
    }
  }
switchD_8c068ec8_default:
  uVar2 = Vec3_dtor(auStack_24,0xffffffff,piVar5,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c068e64\n.set _FUN_8c068e64, _FUN_8c068e64_def\n");
