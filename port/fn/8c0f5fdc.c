#include "../decls.h"
undefined4 FUN_8c0f5fdc_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  float *ar5_00;
  undefined *puVar7;
  float *a6;
  undefined4 uVar8;
  float fVar9;
  float fVar12;
  double dVar10;
  ulonglong uVar11;
  double in_dr14;
  double dVar13;
  undefined8 in_xd0;
  char cVar14;
  char cVar15;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 auStack_28 [20];
  
  cVar15 = '\0';
  cVar14 = '\0';
  pfVar5 = ar5;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  uVar8 = 0;
  Vec3_ctor_zero(&fStack_38,pfVar5,ar6,ar7);
  Vec3_ctor_zero(&fStack_48,pfVar5,ar6,ar7);
  a6 = &fStack_48;
  pfVar5 = ar5;
  (**(code **)((int)*ar5 + 0x124))(ar5,&fStack_38,a6,ar7);
  if (cVar15 == '\0') {
    fVar9 = *(float *)(ar4 + 0x30);
    fVar12 = fStack_38;
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x30);
    fVar9 = fStack_38;
    fVar12 = fStack_34;
  }
  if (cVar14 == '\0' && fVar12 < fVar9) {
    pfVar5 = (float *)(ar4 + 0x30);
    if (cVar15 == '\0') {
      fVar9 = *pfVar5;
      fVar12 = fStack_48;
    }
    else {
      in_xd0 = *(undefined8 *)pfVar5;
      fVar9 = fStack_48;
      fVar12 = fStack_44;
    }
    if (cVar14 != '\0' || fVar12 <= fVar9) {
      if (cVar15 != '\0') {
        in_xd0 = CONCAT44(fStack_44,fStack_48);
        fStack_48 = fVar9;
      }
      if (cVar14 == '\0') {
        fStack_48 = fStack_48 - 1.0;
      }
      else {
        fStack_48 = SUB84((double)CONCAT44(0x3f800000,fStack_48) -
                          (double)CONCAT44(0x3f800000,fStack_48),0);
      }
      if (cVar15 == '\0') {
        *(float *)(ar4 + 0x30) = fStack_48;
      }
      else {
        *(undefined8 *)(ar4 + 0x30) = in_xd0;
      }
    }
  }
  else {
    if (cVar15 != '\0') {
      in_xd0 = CONCAT44(fStack_34,fStack_38);
      fStack_38 = fVar9;
    }
    if (cVar14 == '\0') {
      fStack_38 = fStack_38 + 1.0;
    }
    else {
      fStack_38 = SUB84((double)CONCAT44(0x3f800000,fStack_38) +
                        (double)CONCAT44(0x3f800000,fStack_38),0);
    }
    if (cVar15 == '\0') {
      *(float *)(ar4 + 0x30) = fStack_38;
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd0;
    }
  }
  ar5_00 = (float *)(ar4 + 0x38);
  if (cVar15 == '\0') {
    fVar9 = *ar5_00;
    fVar12 = fStack_30;
  }
  else {
    in_xd0 = *(undefined8 *)ar5_00;
    fVar9 = fStack_30;
    fVar12 = fStack_2c;
  }
  if (cVar14 == '\0' && fVar12 < fVar9) {
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44(uStack_40,*(undefined4 *)(ar4 + 0x38));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x38);
      dVar10 = (double)CONCAT44(uStack_3c,uStack_40);
    }
    if (cVar14 != '\0' || (float)((ulonglong)dVar10 >> 0x20) <= SUB84(dVar10,0)) {
      if (cVar15 == '\0') {
        dVar10 = (double)(ulonglong)uStack_40;
      }
      else {
        in_xd0 = CONCAT44(uStack_3c,uStack_40);
      }
      dVar13 = (double)CONCAT44(0x3f800000,SUB84(dVar10,0));
      if (cVar14 == '\0') {
        dVar10 = (double)CONCAT44(0x3f800000,SUB84(dVar10,0) - 1.0);
      }
      else {
        dVar10 = dVar13 - dVar13;
      }
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x38) = SUB84(dVar10,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x38) = in_xd0;
      }
    }
  }
  else {
    pfVar5 = (float *)(ar4 + 0x38);
    if (cVar15 != '\0') {
      in_xd0 = CONCAT44(fStack_2c,fStack_30);
      fStack_30 = fVar9;
    }
    if (cVar14 == '\0') {
      dVar10 = (double)CONCAT44(0x3f800000,fStack_30 + 1.0);
    }
    else {
      dVar10 = (double)CONCAT44(0x3f800000,fStack_30) + (double)CONCAT44(0x3f800000,fStack_30);
    }
    if (cVar15 == '\0') {
      *pfVar5 = SUB84(dVar10,0);
    }
    else {
      *(undefined8 *)pfVar5 = in_xd0;
    }
  }
  iVar1 = *(int *)(ar4 + 0x1cc);
  if (iVar1 == 0) {
    if ((*(uint *)(ar4 + 0x74) & 0x40) == 0x40) {
      uVar4 = rand(pfVar5,ar5_00,a6,ar7);
      uVar3 = SUB84(in_dr14,0);
      fVar9 = SUB84(dVar10,0);
      uVar2 = rand(pfVar5,ar5_00,a6,ar7);
      libgcc_divide_helper_01031c(uVar4,0x14,a6,ar7);
      uVar4 = 0x14;
      libgcc_divide_helper_01031c(uVar2,0x14,a6,ar7);
      FUN_8c022d04(ar4 + 0x1bc,uVar4,a6,ar7);
      puVar7 = &DAT_8c1401d8;
      iVar1 = ar4 + 0x1bc;
      FUN_8c023c98(iVar1,&DAT_8c1401d8,a6,ar7);
      uVar4 = rand(iVar1,puVar7,a6,ar7);
      uVar2 = 2;
      iVar1 = libgcc_divide_helper_01031c(uVar4,2,a6,ar7);
      if (iVar1 == 0) {
        if (cVar15 == '\0') {
          dVar10 = (double)CONCAT44(0xbf800000,*(undefined4 *)(ar4 + 0x1bc));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x1bc);
          dVar10 = 2.81690796727611e-312;
        }
        if (cVar14 == '\0') {
          fVar9 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar10 * dVar10,0);
        }
        if (cVar15 == '\0') {
          *(float *)(ar4 + 0x1bc) = fVar9;
        }
        else {
          *(undefined8 *)(ar4 + 0x1bc) = in_xd0;
        }
      }
      uVar4 = rand(uVar4,uVar2,a6,ar7);
      uVar2 = 2;
      iVar1 = libgcc_divide_helper_01031c(uVar4,2,a6,ar7);
      if (iVar1 == 0) {
        if (cVar15 == '\0') {
          dVar10 = (double)CONCAT44(0xbf800000,*(undefined4 *)(ar4 + 0x1c4));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x1c4);
          dVar10 = 2.81690796727611e-312;
        }
        if (cVar14 == '\0') {
          fVar9 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar10 * dVar10,0);
        }
        if (cVar15 == '\0') {
          *(float *)(ar4 + 0x1c4) = fVar9;
        }
        else {
          *(undefined8 *)(ar4 + 0x1c4) = in_xd0;
        }
      }
      uVar11 = (ulonglong)(uint)fVar9;
      if (cVar15 == '\0') {
        *(undefined4 *)(ar4 + 0x1d0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x1d0) = uVar11;
      }
      uVar4 = rand(uVar4,uVar2,a6,ar7);
      uVar2 = (undefined4)uVar11;
      iVar1 = libgcc_divide_helper_01031c(uVar4,0x14,a6,ar7);
      if (cVar14 == '\0') {
        in_dr14 = (double)CONCAT44((float)iVar1,uVar3);
      }
      else {
        in_dr14 = (double)iVar1;
      }
      if (cVar15 == '\0') {
        dVar10 = (double)CONCAT44(0x41200000,uVar2);
      }
      else {
        dVar10 = 9.76657887968582e-312;
      }
      if (cVar14 == '\0') {
        in_dr14 = (double)CONCAT44((float)((ulonglong)in_dr14 >> 0x20) /
                                   (float)((ulonglong)dVar10 >> 0x20),SUB84(in_dr14,0));
      }
      else {
        in_dr14 = in_dr14 / dVar10;
      }
      dVar10 = (double)CONCAT44(0x3f800000,SUB84(dVar10,0));
      if (cVar14 == '\0') {
        in_dr14 = (double)CONCAT44((float)((ulonglong)in_dr14 >> 0x20) + 1.0,SUB84(in_dr14,0));
      }
      else {
        in_dr14 = in_dr14 + dVar10;
      }
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x1d4) = (int)((ulonglong)in_dr14 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x1d4) = in_dr14;
      }
      *(int *)(ar4 + 0x1cc) = *(int *)(ar4 + 0x1cc) + 1;
    }
    else {
      uVar4 = rand(pfVar5,ar5_00,a6,ar7);
      uVar3 = SUB84(in_dr14,0);
      fVar9 = SUB84(dVar10,0);
      uVar2 = rand(pfVar5,ar5_00,a6,ar7);
      libgcc_divide_helper_01031c(uVar4,0x32,a6,ar7);
      uVar4 = 0x32;
      libgcc_divide_helper_01031c(uVar2,0x32,a6,ar7);
      FUN_8c022d04(ar4 + 0x1bc,uVar4,a6,ar7);
      puVar7 = &DAT_8c1401dc;
      iVar1 = ar4 + 0x1bc;
      FUN_8c023c98(iVar1,&DAT_8c1401dc,a6,ar7);
      uVar4 = rand(iVar1,puVar7,a6,ar7);
      uVar2 = 2;
      iVar1 = libgcc_divide_helper_01031c(uVar4,2,a6,ar7);
      if (iVar1 == 0) {
        if (cVar15 == '\0') {
          dVar10 = (double)CONCAT44(0xbf800000,*(undefined4 *)(ar4 + 0x1bc));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x1bc);
          dVar10 = 9.60729449836498e-312;
        }
        if (cVar14 == '\0') {
          fVar9 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar10 * dVar10,0);
        }
        if (cVar15 == '\0') {
          *(float *)(ar4 + 0x1bc) = fVar9;
        }
        else {
          *(undefined8 *)(ar4 + 0x1bc) = in_xd0;
        }
      }
      uVar4 = rand(uVar4,uVar2,a6,ar7);
      uVar2 = 2;
      iVar1 = libgcc_divide_helper_01031c(uVar4,2,a6,ar7);
      if (iVar1 == 0) {
        if (cVar15 == '\0') {
          dVar10 = (double)CONCAT44(0xbf800000,*(undefined4 *)(ar4 + 0x1c4));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x1c4);
          dVar10 = 9.60729449836498e-312;
        }
        if (cVar14 == '\0') {
          fVar9 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar10 * dVar10,0);
        }
        if (cVar15 == '\0') {
          *(float *)(ar4 + 0x1c4) = fVar9;
        }
        else {
          *(undefined8 *)(ar4 + 0x1c4) = in_xd0;
        }
      }
      uVar11 = (ulonglong)(uint)fVar9;
      if (cVar15 == '\0') {
        *(undefined4 *)(ar4 + 0x1d0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x1d0) = uVar11;
      }
      uStack_94 = rand(uVar4,uVar2,a6,ar7);
      uVar4 = (undefined4)uVar11;
      iVar1 = libgcc_divide_helper_01031c(uStack_94,0x14,a6,ar7);
      if (cVar14 == '\0') {
        in_dr14 = (double)CONCAT44((float)iVar1,uVar3);
      }
      else {
        in_dr14 = (double)iVar1;
      }
      if (cVar15 == '\0') {
        dVar10 = (double)CONCAT44(0x41200000,uVar4);
      }
      else {
        dVar10 = 9.76657887968582e-312;
      }
      if (cVar14 == '\0') {
        in_dr14 = (double)CONCAT44((float)((ulonglong)in_dr14 >> 0x20) /
                                   (float)((ulonglong)dVar10 >> 0x20),SUB84(in_dr14,0));
      }
      else {
        in_dr14 = in_dr14 / dVar10;
      }
      dVar10 = (double)CONCAT44(0x3f800000,SUB84(dVar10,0));
      if (cVar14 == '\0') {
        in_dr14 = (double)CONCAT44((float)((ulonglong)in_dr14 >> 0x20) + 1.0,SUB84(in_dr14,0));
      }
      else {
        in_dr14 = in_dr14 + dVar10;
      }
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x1d4) = (int)((ulonglong)in_dr14 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x1d4) = in_dr14;
      }
      *(undefined4 *)(ar4 + 0x1cc) = 2;
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      iVar1 = ar4 + 0x30;
      (**(code **)((int)*ar5 + 0x128))(ar5,iVar1,a6,ar7);
      uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
      uVar4 = (undefined4)((ulonglong)dVar10 >> 0x20);
      uStack_a4 = uVar4;
      if (cVar15 != '\0') {
        uStack_a4 = SUB84(dVar10,0);
        uStack_a0 = uVar4;
      }
      iVar6 = ar4;
      (**(code **)(*(int *)(ar4 + 8) + 0x174))(ar4,iVar1,a6,ar7);
      uVar4 = (undefined4)((ulonglong)dVar10 >> 0x20);
      if (cVar15 == '\0') {
        dVar10 = (double)CONCAT44(uVar4,uStack_a4);
      }
      else {
        in_xd0 = CONCAT44(uStack_a0,uVar4);
      }
      if (cVar14 == '\0') {
        fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar15 == '\0') {
        uVar11 = CONCAT44(*(undefined4 *)(ar4 + 0x34),fVar9);
      }
      else {
        uVar11 = *(ulonglong *)(ar4 + 0x34);
      }
      if (cVar14 != '\0' || (float)(uVar11 >> 0x20) <= (float)uVar11) {
        iVar6 = ar4 + 0x1bc;
        FUN_8c022d04(iVar6,iVar1,a6,ar7);
        if (cVar15 == '\0') {
          *(undefined4 *)(ar4 + 0x1d4) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x1d4) = uVar11 & 0xffffffff;
        }
        uVar8 = 1;
        uVar11 = uVar11 & 0xffffffff;
        if (cVar15 == '\0') {
          *(undefined4 *)(ar4 + 0x1d0) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x1d0) = uVar11;
        }
      }
      uVar3 = (undefined4)uVar11;
      uVar4 = rand(iVar6,iVar1,a6,ar7);
      iVar1 = libgcc_divide_helper_01031c(uVar4,100,a6,ar7);
      if (cVar15 == '\0') {
        dVar10 = (double)CONCAT44(0x461c4000,uVar3);
      }
      else {
        dVar10 = 3.23124508159998e-312;
      }
      if (cVar14 == '\0') {
        dVar13 = (double)CONCAT44(uVar2,(float)iVar1 / (float)((ulonglong)dVar10 >> 0x20));
      }
      else {
        dVar13 = (double)CONCAT44(uVar2,(float)iVar1) / dVar10;
      }
      if (cVar15 == '\0') {
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x1d0),SUB84(dVar10,0));
      }
      else {
        dVar10 = *(double *)(ar4 + 0x1d0);
      }
      if (cVar14 == '\0') {
        dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) + SUB84(dVar13,0),
                                  SUB84(dVar10,0));
      }
      else {
        dVar10 = dVar10 + dVar13;
      }
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x1d0) = (int)((ulonglong)dVar10 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x1d0) = dVar10;
      }
      Vec3_scale(ar4 + 0x1bc,ar4 + 0x1d4,a6,ar7,auStack_68);
      uVar4 = SUB84(dVar10,0);
      FUN_8c023aa0(ar4 + 0x30,auStack_68,a6,ar7);
      Vec3_dtor(auStack_68,0xffffffff,a6,ar7);
      if (cVar15 == '\0') {
        uVar4 = *(undefined4 *)(ar4 + 0x34);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x34);
      }
      a6 = (float *)0x1d0;
      if (cVar15 == '\0') {
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x1d0),uVar4);
      }
      else {
        dVar10 = *(double *)(ar4 + 0x1d0);
      }
      if (cVar14 == '\0') {
        fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar10 - dVar10,0);
      }
      if (cVar15 == '\0') {
        *(float *)(ar4 + 0x34) = fVar9;
      }
      else {
        *(undefined8 *)(ar4 + 0x34) = in_xd0;
      }
    }
    goto LAB_8c0f6620;
  }
  uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  iVar1 = ar4 + 0x30;
  (**(code **)((int)*ar5 + 0x128))(ar5,iVar1,a6,ar7);
  uVar4 = (undefined4)((ulonglong)dVar10 >> 0x20);
  uStack_98 = uVar4;
  if (cVar15 != '\0') {
    uStack_98 = SUB84(dVar10,0);
    uStack_94 = uVar4;
  }
  iVar6 = ar4;
  (**(code **)(*(int *)(ar4 + 8) + 0x174))(ar4,iVar1,a6,ar7);
  uVar4 = (undefined4)((ulonglong)dVar10 >> 0x20);
  if (cVar15 == '\0') {
    dVar10 = (double)CONCAT44(uVar4,uStack_98);
  }
  else {
    in_xd0 = CONCAT44(uStack_94,uVar4);
  }
  if (cVar14 == '\0') {
    fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 + dVar10,0);
  }
  if (cVar15 == '\0') {
    uVar11 = CONCAT44(*(undefined4 *)(ar4 + 0x34),fVar9);
  }
  else {
    uVar11 = *(ulonglong *)(ar4 + 0x34);
  }
  if (cVar14 != '\0' || (float)(uVar11 >> 0x20) <= (float)uVar11) {
    iVar6 = ar4 + 0x1bc;
    FUN_8c022d04(iVar6,iVar1,a6,ar7);
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x1d4) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x1d4) = uVar11 & 0xffffffff;
    }
    uVar8 = 1;
    uVar11 = uVar11 & 0xffffffff;
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x1d0) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x1d0) = uVar11;
    }
  }
  uVar4 = (undefined4)uVar11;
  if ((*(uint *)(ar4 + 0x74) & 0x10) == 0x10) {
    *(undefined4 *)(ar4 + 0x1cc) = 2;
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x1d4) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x1d4) = uVar11 & 0xffffffff;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x1d0) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x1d0) = uVar11 & 0xffffffff;
    }
    FUN_8c023bf4(ar4 + 0x1bc,&DAT_8c1401e0,a6,ar7);
  }
  else {
    uVar3 = rand(iVar6,iVar1,a6,ar7);
    iVar1 = libgcc_divide_helper_01031c(uVar3,100,a6,ar7);
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44(0x42c80000,uVar4);
    }
    else {
      dVar10 = 9.85159599864978e-312;
    }
    if (cVar14 == '\0') {
      dVar13 = (double)CONCAT44(uVar2,(float)iVar1 / (float)((ulonglong)dVar10 >> 0x20));
    }
    else {
      dVar13 = (double)CONCAT44(uVar2,(float)iVar1) / dVar10;
    }
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x1d0),SUB84(dVar10,0));
    }
    else {
      dVar10 = *(double *)(ar4 + 0x1d0);
    }
    if (cVar14 == '\0') {
      dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) + SUB84(dVar13,0),SUB84(dVar10,0)
                               );
    }
    else {
      dVar10 = dVar10 + dVar13;
    }
    if (cVar15 == '\0') {
      *(int *)(ar4 + 0x1d0) = (int)((ulonglong)dVar10 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x1d0) = dVar10;
    }
    Vec3_scale(ar4 + 0x1bc,ar4 + 0x1d4,a6,ar7,auStack_58);
    FUN_8c023aa0(ar4 + 0x30,auStack_58,a6,ar7);
    Vec3_dtor(auStack_58,0xffffffff,a6,ar7);
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x1d0),*(undefined4 *)(ar4 + 0x34));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x34);
      dVar10 = *(double *)(ar4 + 0x1d0);
    }
    if (cVar14 == '\0') {
      fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar10 - dVar10,0);
    }
    if (cVar15 == '\0') {
      *(float *)(ar4 + 0x34) = fVar9;
    }
    else {
      *(undefined8 *)(ar4 + 0x34) = in_xd0;
    }
  }
LAB_8c0f6620:
  Vec3_dtor(&fStack_48,0xffffffff,a6,ar7);
  Vec3_dtor(&fStack_38,0xffffffff,a6,ar7);
  Vec3_dtor(auStack_28,0xffffffff,a6,ar7);
  return uVar8;
}

__asm__(".globl _FUN_8c0f5fdc\n.set _FUN_8c0f5fdc, _FUN_8c0f5fdc_def\n");
