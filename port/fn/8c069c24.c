#include "../decls.h"
undefined4 FUN_8c069c24_def(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar5;
  int iVar6;
  int *ar5_00;
  int *ar6_00;
  int *ar7_00;
  undefined4 unaff_r8;
  int iVar7;
  int iVar8;
  int unaff_r14;
  float fVar9;
  ulonglong in_dr0;
  ulonglong uVar10;
  double dVar11;
  undefined8 in_xd0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined8 uStack_1d8;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined4 *puVar4;
  
  iVar8 = -1;
  puVar1 = (undefined4 *)((int)&uStack_1d8 + 0x128);
  iVar5 = 0x12;
  puVar3 = (undefined4 *)(&DATA_8c137120);
  (*(uint*)((uchar*)&uStack_1d8+0)) = ar5;
  do {
    puVar4 = puVar3 + 1;
    *puVar1 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar1[1] = *puVar4;
    puVar1 = puVar1 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = ar6;
  if ((int)uStack_1d8 == 0) {
    uVar2 = rand(0,ar5,ar6,ar7);
    *(undefined4 *)((int)&uStack_1d8 + 0x114) = uVar2;
    ar5 = 7;
    uVar2 = (*(code *)(&libgcc_divide_helper_01031c))
                      (*(undefined4 *)((int)&uStack_1d8 + 0x114),7,iVar5,ar7);
    *(undefined4 *)((int)&uStack_1d8 + 0xb0) = uVar2;
    unaff_r14 = *(int *)((int)&uStack_1d8 + 0xb0);
    iVar7 = 7;
    do {
      *(int *)((int)&uStack_1d8 + 0xac) = unaff_r14;
      if (*(int *)(*(int *)((int)&uStack_1d8 + 0xac) * 8 + 0x8c2809b8 + 4) == 0) {
        iVar7 = iVar7 + -1;
        unaff_r14 = unaff_r14 + 1;
      }
      else {
        *(int *)((int)&uStack_1d8 + 0xa8) = unaff_r14;
        (*(code *)(&FUN_8c06b410))
                  (*(undefined4 *)(*(int *)((int)&uStack_1d8 + 0xa8) * 8 + 0x8c2809b8 + 4)
                   ,ar5,iVar5,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)&uStack_1d8 + 0x110) = (int)(in_dr0 >> 0x20);
          uVar10 = (ulonglong)*(uint *)((int)&uStack_1d8 + 0x110);
        }
        else {
          *(ulonglong *)((int)&uStack_1d8 + 0x110) = in_dr0;
          in_xd0 = *(undefined8 *)((int)&uStack_1d8 + 0x110);
          uVar10 = in_dr0;
        }
        in_dr0 = uVar10 & 0xffffffff;
        if ((float)uVar10 == 0.0) {
          if (ar6 == 0) {
            *(int *)((int)&uStack_1d8 + 0xa4) = unaff_r14;
            uVar2 = (*(code *)(&get_field_210_06b3f4))
                              (*(undefined4 *)
                                (*(int *)((int)&uStack_1d8 + 0xa4) * 8 + 0x8c2809b8 + 4),
                               ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0x10c) = uVar2;
            *(int *)((int)&uStack_1d8 + 0xa0) = unaff_r14;
            iVar8 = *(int *)((int)&uStack_1d8 + 0xa0) * 8 + 0x8c2809b8;
            uVar2 = (*(code *)(&get_field_210_06b3f4))
                              (*(undefined4 *)(iVar8 + 4),iVar8,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0x108) = uVar2;
            *(int *)((int)&uStack_1d8 + 0x9c) = unaff_r14;
            uVar2 = (*(code *)(&libgcc_divide_helper_01031c))
                              (*(undefined4 *)((int)&uStack_1d8 + 0x10c),4,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0x98) = uVar2;
            uVar2 = (*(code *)(&libgcc_divide_helper_01031c))
                              (*(undefined4 *)((int)&uStack_1d8 + 0x108),4,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0x90) = uVar2;
            *(undefined4 *)((int)&uStack_1d8 + 0x94) =
                 *(undefined4 *)((int)&uStack_1d8 + 0x90);
            iVar5 = *(int *)((int)&uStack_1d8 + 0x94) * 2 + 3;
            ar5 = *(int *)((int)&uStack_1d8 + 0x98);
            uVar2 = (*(code *)(&FUN_8c06b29c))
                              (*(undefined4 *)
                                (*(int *)((int)&uStack_1d8 + 0x9c) * 8 + 0x8c2809b8 + 4),
                               ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0x104) = uVar2;
            iVar8 = *(int *)((int)&uStack_1d8 + 0x104);
          }
          else {
            *(int *)((int)&uStack_1d8 + 0x8c) = unaff_r14;
            uVar2 = (*(code *)(&get_field_210_06b3f4))
                              (*(undefined4 *)
                                (*(int *)((int)&uStack_1d8 + 0x8c) * 8 + 0x8c2809b8 + 4),
                               ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0x100) = uVar2;
            *(int *)((int)&uStack_1d8 + 0x88) = unaff_r14;
            uVar2 = (*(code *)(&libgcc_divide_helper_01031c))
                              (*(undefined4 *)((int)&uStack_1d8 + 0x100),4,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0x80) = uVar2;
            *(undefined4 *)((int)&uStack_1d8 + 0x84) =
                 *(undefined4 *)((int)&uStack_1d8 + 0x80);
            ar5 = *(int *)((int)&uStack_1d8 + 0x84) * 2 + 3;
            uVar2 = (*(code *)(&FUN_8c06b35c))
                              (*(undefined4 *)
                                (*(int *)((int)&uStack_1d8 + 0x88) * 8 + 0x8c2809b8 + 4),
                               ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xfc) = uVar2;
            iVar8 = *(int *)((int)&uStack_1d8 + 0xfc);
          }
        }
        if (iVar8 == -1) {
          iVar7 = iVar7 + -1;
          unaff_r14 = unaff_r14 + 1;
        }
      }
      if (5 < unaff_r14) {
        unaff_r14 = 0;
      }
    } while ((-1 < iVar7) && (iVar8 == -1));
  }
  else if ((int)uStack_1d8 == 1) {
    uVar2 = rand(0,ar5,ar6,ar7);
    *(undefined4 *)((int)&uStack_1d8 + 0xf8) = uVar2;
    ar5 = 6;
    iStack_15c = (*(code *)(&libgcc_divide_helper_01031c))
                           (*(undefined4 *)((int)&uStack_1d8 + 0xf8),6,iVar5,ar7);
    iVar7 = 6;
    unaff_r14 = iStack_15c;
    do {
      iStack_160 = unaff_r14;
      if (*(int *)(unaff_r14 * 8 + 0x8c2809fc + 4) == 0) {
        iVar7 = iVar7 + -1;
        unaff_r14 = unaff_r14 + 1;
      }
      else {
        iStack_164 = unaff_r14;
        FUN_8c06b410(*(undefined4 *)(unaff_r14 * 8 + 0x8c2809fc + 4),ar5,iVar5,ar7)
        ;
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)&uStack_1d8 + 0xf4) = (int)(in_dr0 >> 0x20);
          uVar10 = (ulonglong)*(uint *)((int)&uStack_1d8 + 0xf4);
        }
        else {
          *(ulonglong *)((int)&uStack_1d8 + 0xf4) = in_dr0;
          in_xd0 = *(undefined8 *)((int)&uStack_1d8 + 0xf4);
          uVar10 = in_dr0;
        }
        in_dr0 = uVar10 & 0xffffffff;
        if ((float)uVar10 == 0.0) {
          if (ar6 == 0) {
            iStack_168 = unaff_r14;
            uVar2 = (*(code *)(&get_field_210_06b3f4))
                              (*(undefined4 *)(unaff_r14 * 8 + 0x8c2809fc + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xf0) = uVar2;
            iStack_16c = unaff_r14;
            uVar2 = (*(code *)(&get_field_210_06b3f4))
                              (*(undefined4 *)(unaff_r14 * 8 + 0x8c2809fc + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xec) = uVar2;
            iStack_170 = unaff_r14;
            iStack_174 = (*(code *)(&libgcc_divide_helper_01031c))
                                   (*(undefined4 *)((int)&uStack_1d8 + 0xf0),4,iVar5,ar7);
            iStack_17c = (*(code *)(&libgcc_divide_helper_01031c))
                                   (*(undefined4 *)((int)&uStack_1d8 + 0xec),4,iVar5,ar7);
            iVar5 = iStack_17c * 2 + 3;
            ar5 = iStack_174;
            iStack_178 = iStack_17c;
            uVar2 = (*(code *)(&FUN_8c06b29c))
                              (*(undefined4 *)(iStack_170 * 8 + 0x8c2809fc + 4),iStack_174,iVar5,
                               ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xe8) = uVar2;
            iVar8 = *(int *)((int)&uStack_1d8 + 0xe8);
          }
          else {
            iStack_180 = unaff_r14;
            uVar2 = (*(code *)(&get_field_210_06b3f4))
                              (*(undefined4 *)(unaff_r14 * 8 + 0x8c2809fc + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xe4) = uVar2;
            iStack_184 = unaff_r14;
            iStack_18c = (*(code *)(&libgcc_divide_helper_01031c))
                                   (*(undefined4 *)((int)&uStack_1d8 + 0xe4),4,iVar5,ar7);
            ar5 = iStack_18c * 2 + 3;
            iStack_188 = iStack_18c;
            uVar2 = (*(code *)(&FUN_8c06b35c))
                              (*(undefined4 *)(iStack_184 * 8 + 0x8c2809fc + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xe0) = uVar2;
            iVar8 = *(int *)((int)&uStack_1d8 + 0xe0);
          }
        }
        if (iVar8 == -1) {
          iVar7 = iVar7 + -1;
          unaff_r14 = unaff_r14 + 1;
        }
      }
      if (5 < unaff_r14) {
        unaff_r14 = 0;
      }
    } while ((-1 < iVar7) && (iVar8 == -1));
  }
  else if ((int)uStack_1d8 == 2) {
    uVar2 = rand(0,ar5,ar6,ar7);
    *(undefined4 *)((int)&uStack_1d8 + 0xdc) = uVar2;
    ar5 = 6;
    iStack_190 = (*(code *)(&libgcc_divide_helper_01031c))
                           (*(undefined4 *)((int)&uStack_1d8 + 0xdc),6,iVar5,ar7);
    iVar7 = 6;
    unaff_r14 = iStack_190;
    do {
      iStack_194 = unaff_r14;
      if (*(int *)(unaff_r14 * 8 + 0x8c280a38 + 4) == 0) {
        iVar7 = iVar7 + -1;
        unaff_r14 = unaff_r14 + 1;
      }
      else {
        iStack_198 = unaff_r14;
        FUN_8c06b410(*(undefined4 *)(unaff_r14 * 8 + 0x8c280a38 + 4),ar5,iVar5,ar7)
        ;
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)&uStack_1d8 + 0xd8) = (int)(in_dr0 >> 0x20);
          uVar10 = (ulonglong)*(uint *)((int)&uStack_1d8 + 0xd8);
        }
        else {
          *(ulonglong *)((int)&uStack_1d8 + 0xd8) = in_dr0;
          in_xd0 = *(undefined8 *)((int)&uStack_1d8 + 0xd8);
          uVar10 = in_dr0;
        }
        in_dr0 = uVar10 & 0xffffffff;
        if ((float)uVar10 == 0.0) {
          if (ar6 == 0) {
            iStack_19c = unaff_r14;
            uVar2 = (*(code *)(&get_field_210_06b3f4))
                              (*(undefined4 *)(unaff_r14 * 8 + 0x8c280a38 + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xd4) = uVar2;
            iStack_1a0 = unaff_r14;
            uVar2 = (*(code *)(&get_field_210_06b3f4))
                              (*(undefined4 *)(unaff_r14 * 8 + 0x8c280a38 + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xd0) = uVar2;
            iStack_1a4 = unaff_r14;
            iStack_1a8 = (*(code *)(&libgcc_divide_helper_01031c))
                                   (*(undefined4 *)((int)&uStack_1d8 + 0xd4),4,iVar5,ar7);
            iStack_1b0 = (*(code *)(&libgcc_divide_helper_01031c))
                                   (*(undefined4 *)((int)&uStack_1d8 + 0xd0),4,iVar5,ar7);
            iVar5 = iStack_1b0 * 2 + 3;
            ar5 = iStack_1a8;
            iStack_1ac = iStack_1b0;
            uVar2 = (*(code *)(&FUN_8c06b29c))
                              (*(undefined4 *)(iStack_1a4 * 8 + 0x8c280a38 + 4),iStack_1a8,iVar5,
                               ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xcc) = uVar2;
            iVar8 = *(int *)((int)&uStack_1d8 + 0xcc);
          }
          else {
            iStack_1b4 = unaff_r14;
            uVar2 = (*(code *)(&get_field_210_06b3f4))
                              (*(undefined4 *)(unaff_r14 * 8 + 0x8c280a38 + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xc8) = uVar2;
            iStack_1b8 = unaff_r14;
            iStack_1c0 = (*(code *)(&libgcc_divide_helper_01031c))
                                   (*(undefined4 *)((int)&uStack_1d8 + 0xc8),4,iVar5,ar7);
            ar5 = iStack_1c0 * 2 + 3;
            iStack_1bc = iStack_1c0;
            uVar2 = (*(code *)(&FUN_8c06b35c))
                              (*(undefined4 *)(iStack_1b8 * 8 + 0x8c280a38 + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xc4) = uVar2;
            iVar8 = *(int *)((int)&uStack_1d8 + 0xc4);
          }
        }
        if (iVar8 == -1) {
          iVar7 = iVar7 + -1;
          unaff_r14 = unaff_r14 + 1;
        }
      }
      if (5 < unaff_r14) {
        unaff_r14 = 0;
      }
    } while ((-1 < iVar7) && (iVar8 == -1));
  }
  if (iVar8 == -1) {
    uVar2 = 0;
  }
  else {
    iVar7 = unaff_r14;
    if ((int)uStack_1d8 == 0) {
      unaff_r8 = *(undefined4 *)(unaff_r14 * 8 + 0x8c2809b8 + 4);
      ar5 = 0x8c2809b8;
      iStack_1c4 = unaff_r14;
    }
    else if ((int)uStack_1d8 == 1) {
      unaff_r8 = *(undefined4 *)(unaff_r14 * 8 + 0x8c2809fc + 4);
      iVar7 = unaff_r14 + 7;
      iStack_1c8 = unaff_r14;
    }
    else if ((int)uStack_1d8 == 2) {
      unaff_r8 = *(undefined4 *)(unaff_r14 * 8 + 0x8c280a38 + 4);
      iVar7 = unaff_r14 + 0xd;
      iStack_1cc = unaff_r14;
    }
    uVar2 = FUN_8c06b420(unaff_r8,ar5,iVar5,ar7);
    *(undefined4 *)((int)&uStack_1d8 + 0xc0) = uVar2;
    uVar2 = (*(code *)(&FUN_8c015bb8))
                      (*(undefined4 *)((int)&uStack_1d8 + 0xc0),ar5,iVar5,ar7);
    *(undefined4 *)((int)&uStack_1d8 + 0xbc) = uVar2;
    iVar6 = *(int *)(*(int *)((int)&uStack_1d8 + 0xbc) + 0x2c);
    uVar2 = get_field_210_06b3f4(unaff_r8,ar5,iVar5,ar7);
    *(undefined4 *)((int)&uStack_1d8 + 0xb8) = uVar2;
    *ar4 = *(int *)((int)&uStack_1d8 + 0xb8);
    (*(code *)(&FUN_8c02f670))
              (unaff_r8,(int)&uStack_1d8 + 0x118,iVar5,ar7,(int)&uStack_1d8 + 0x118);
    Vec3_assign(ar4 + 4,(int)&uStack_1d8 + 0x118,iVar5,ar7);
    Vec3_dtor((int)&uStack_1d8 + 0x118,0xffffffff,iVar5,ar7);
    iStack_1d0 = *ar4;
    (*(uint*)((uchar*)&uStack_1d8+4)) = iVar8;
    ar4[1] = *(int *)((int)&uStack_1d8 + iVar8 * 4 + *ar4 * 0x24 + 0x128);
    ar4[2] = iVar7;
    ar4[3] = iVar8;
    ar7_00 = ar4 + 0xe;
    ar6_00 = ar4 + 0xd;
    FUN_8c03f414(unaff_r8,ar4 + 0xc,ar6_00,ar7_00);
    if ((iVar8 < 9) && (-1 < iVar8)) {
      uVar2 = (*(code *)((code **)&DATA_8c06a404)[iVar8])();
      return uVar2;
    }
    ar5_00 = (int *)(iVar6 + 8);
    if (in_FPSCR_SZ == '\0') {
      ar4[8] = *ar5_00;
      ar4[9] = *(int *)(iVar6 + 0xc);
      ar4[10] = *(int *)(iVar6 + 0x10);
    }
    else {
      *(undefined8 *)(ar4 + 8) = *(undefined8 *)ar5_00;
      *(undefined8 *)(ar4 + 9) = *(undefined8 *)(iVar6 + 0xc);
      *(undefined8 *)(ar4 + 10) = *(undefined8 *)(iVar6 + 0x10);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c06a4f4,(float)*(int *)(iVar6 + 0x14));
    }
    else {
      dVar11 = (double)CONCAT44(DAT_8c06a4f8,DAT_8c06a4f4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar11 * dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c06a4f8,fVar9);
    }
    else {
      dVar11 = (double)CONCAT44((&FUN_8c06b400),DAT_8c06a4f8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar11 / dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      ar4[0xf] = (int)fVar9;
    }
    else {
      *(undefined8 *)(ar4 + 0xf) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c06a4f4,(float)*(int *)(iVar6 + 0x18));
    }
    else {
      dVar11 = (double)CONCAT44(DAT_8c06a4f8,DAT_8c06a4f4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar11 * dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c06a4f8,fVar9);
    }
    else {
      dVar11 = (double)CONCAT44((&FUN_8c06b400),DAT_8c06a4f8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar11 / dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      ar4[0x10] = (int)fVar9;
    }
    else {
      *(undefined8 *)(ar4 + 0x10) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c06a4f4,(float)*(int *)(iVar6 + 0x1c));
    }
    else {
      dVar11 = (double)CONCAT44(DAT_8c06a4f8,DAT_8c06a4f4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar11 * dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c06a4f8,fVar9);
    }
    else {
      dVar11 = (double)CONCAT44((&FUN_8c06b400),DAT_8c06a4f8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = (float)((ulonglong)dVar11 >> 0x20);
      dVar11 = (double)CONCAT44(fVar9,SUB84(dVar11,0) / fVar9);
    }
    else {
      dVar11 = dVar11 / dVar11;
    }
    if (in_FPSCR_SZ == '\0') {
      ar4[0x11] = SUB84(dVar11,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x11) = in_xd0;
    }
    FUN_8c06b400(unaff_r8,ar5_00,ar6_00,ar7_00);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)&uStack_1d8 + 0xb4) = (int)((ulonglong)dVar11 >> 0x20);
      ar4[0x12] = *(int *)((int)&uStack_1d8 + 0xb4);
    }
    else {
      *(double *)((int)&uStack_1d8 + 0xb4) = dVar11;
      *(undefined8 *)(ar4 + 0x12) = *(undefined8 *)((int)&uStack_1d8 + 0xb4);
    }
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c069c24\n.set _FUN_8c069c24, _FUN_8c069c24_def\n");
