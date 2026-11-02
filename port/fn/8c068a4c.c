#include "../decls.h"
undefined4 FUN_8c068a4c_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 ar5_00;
  int *a6;
  float fVar4;
  double in_dr0;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  undefined4 in_fr3;
  double in_dr14;
  double in_xd0;
  undefined8 in_xd14;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined1 auStack_1798 [1996];
  undefined1 auStack_fcc [1996];
  undefined1 auStack_800 [1996];
  uint auStack_34 [4];
  uint auStack_24 [5];
  
  cVar11 = '\0';
  cVar10 = '\0';
  auStack_34[0] = DAT_8c1370e0;
  auStack_34[1] = DAT_8c1370e4;
  auStack_34[2] = DAT_8c1370e8;
  auStack_34[3] = DAT_8c1370ec;
  auStack_24[0] = DAT_8c1370f0;
  auStack_24[1] = DAT_8c1370f4;
  auStack_24[2] = DAT_8c1370f8;
  auStack_24[3] = DAT_8c1370fc;
  iVar1 = *(int *)(ar4 + 0x230);
  if (iVar1 == 0) {
    FUN_8c068890(auStack_800,ar5,ar6,ar7);
    uVar3 = SUB84(in_dr0,0);
    uVar2 = FUN_8c06afb0(ar4,auStack_800,ar6,ar7);
    if (cVar11 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x240));
      dVar5 = (double)CONCAT44(0x44610000,uVar3);
    }
    else {
      in_xd14 = *(undefined8 *)(ar4 + 0x240);
      dVar5 = -9.834358688611842e-251;
    }
    if (cVar10 == '\0') {
      dVar6 = (double)CONCAT44((float)(uVar2 & 0xffff),SUB84(dVar5,0));
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 (SUB84(in_dr14,0) / (float)((ulonglong)dVar5 >> 0x20)) *
                                 (float)(uVar2 & 0xffff));
    }
    else {
      dVar6 = (double)(uVar2 & 0xffff);
      in_dr14 = (in_dr14 / dVar5) * dVar6;
    }
    uVar3 = SUB84(dVar6,0);
    FUN_8c068818(auStack_800,0xffffffff,ar6,ar7);
    if (cVar11 == '\0') {
      in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x240),uVar3);
    }
    else {
      in_dr0 = *(double *)(ar4 + 0x240);
    }
    if (cVar10 == '\0') {
      bVar9 = (float)((ulonglong)in_dr0 >> 0x20) < SUB84(in_dr14,0);
    }
    else {
      bVar9 = in_dr0 < in_dr14;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x240));
      }
      else {
        in_xd14 = *(undefined8 *)(ar4 + 0x240);
      }
      *(int *)(ar4 + 0x230) = *(int *)(ar4 + 0x230) + 1;
      iVar1 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6,ar7);
      *(uint *)(ar4 + 0x214) = *(uint *)(ar4 + 0x214) & ~auStack_34[iVar1];
    }
    if (cVar11 == '\0') {
      *(int *)(ar4 + 0x234) = SUB84(in_dr14,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x234) = in_xd14;
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return iVar1;
      }
      a6 = ar6;
      iVar1 = get_field_24_026024(ar6,ar5,ar6,ar7);
      if (iVar1 != 1) {
        return iVar1;
      }
      (**(code **)(*ar6 + 0x188))(ar6,ar5,a6,ar7);
      dVar5 = in_dr0;
      if (cVar11 == '\0') {
        in_dr0 = (double)((ulonglong)in_dr0 >> 0x20);
        dVar5 = in_xd0;
      }
      if (cVar10 == '\0' && 0.0 < SUB84(in_dr0,0)) {
        uVar3 = rand(ar6,ar5,a6,ar7);
        iVar1 = libgcc_divide_helper_01031c(uVar3,5,a6,ar7);
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x244),in_fr3);
        }
        else {
          dVar6 = *(double *)(ar4 + 0x244);
        }
        if (cVar11 == '\0') {
          dVar7 = (double)CONCAT44(0x41200000,(float)(iVar1 + 8));
        }
        else {
          dVar7 = 2.2974389978324538e-39;
        }
        if (cVar10 == '\0') {
          fVar4 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar7 / dVar7,0);
        }
        if (cVar11 == '\0') {
          dVar7 = (double)CONCAT44(0x37e90453,fVar4);
        }
        else {
          dVar7 = 1.18029310218391e-311;
        }
        if (cVar10 == '\0') {
          fVar8 = (float)((ulonglong)dVar7 >> 0x20);
          fVar4 = SUB84(dVar7,0) * fVar8;
          dVar7 = (double)CONCAT44(fVar8,fVar4);
          dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - fVar4,SUB84(dVar6,0));
        }
        else {
          dVar7 = dVar7 * dVar7;
          dVar6 = dVar6 - dVar7;
        }
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x244) = (int)((ulonglong)dVar6 >> 0x20);
          dVar7 = (double)(ulonglong)*(uint *)(ar4 + 0x244);
        }
        else {
          *(double *)(ar4 + 0x244) = dVar6;
          dVar5 = *(double *)(ar4 + 0x244);
        }
        fVar4 = SUB84(dVar7,0);
        if (cVar10 == '\0' && fVar4 < 0.0) {
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0x244) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x244) = (ulonglong)dVar7 & 0xffffffff;
          }
        }
        if (cVar11 == '\0') {
          fVar4 = *(float *)(ar4 + 0x244);
        }
        else {
          dVar5 = *(double *)(ar4 + 0x244);
        }
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(0x42b40000,fVar4);
        }
        else {
          dVar6 = 1.29532152133274e-310;
        }
        if (cVar10 == '\0') {
          fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar6 * dVar6,0);
        }
        if (cVar11 == '\0') {
          *(float *)(ar4 + 0x22c) = fVar4;
          return &DAT_8c068e5c;
        }
        *(double *)(ar4 + 0x22c) = dVar5;
        return &DAT_8c068e5c;
      }
      uVar3 = rand(ar6,ar5,a6,ar7);
      ar5_00 = 5;
      iVar1 = libgcc_divide_helper_01031c(uVar3,5,a6,ar7);
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x244),in_fr3);
      }
      else {
        dVar6 = *(double *)(ar4 + 0x244);
      }
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x41200000,(float)(iVar1 + 8));
      }
      else {
        dVar7 = 2.2974389978324538e-39;
      }
      if (cVar10 == '\0') {
        fVar4 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar7 / dVar7,0);
      }
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x37e90453,fVar4);
      }
      else {
        dVar7 = 1.18029310218391e-311;
      }
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) +
                                 SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 + dVar7 * dVar7;
      }
      if (cVar11 == '\0') {
        *(int *)(ar4 + 0x244) = (int)((ulonglong)dVar6 >> 0x20);
        dVar6 = (double)CONCAT44(0x42b40000,*(undefined4 *)(ar4 + 0x244));
      }
      else {
        *(double *)(ar4 + 0x244) = dVar6;
        dVar5 = *(double *)(ar4 + 0x244);
        dVar6 = 1.14643063239662e-311;
      }
      if (cVar10 == '\0') {
        fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar11 == '\0') {
        *(float *)(ar4 + 0x22c) = fVar4;
        fVar4 = *(float *)(ar4 + 0x244);
      }
      else {
        *(double *)(ar4 + 0x22c) = dVar5;
      }
      if (cVar10 == '\0' && fVar4 < 1.0) {
        return ar4 + 0x244;
      }
      *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f604) = 0;
      *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f600) = 0;
      FUN_8c0f4d84(ar4,ar5_00,a6,ar7);
      _DAT_8c28099c = _DAT_8c28099c + -1;
      return _DAT_8c28099c;
    }
    goto LAB_8c068bfc;
  }
  uVar3 = SUB84(in_dr0,0);
  FUN_8c068890(auStack_fcc,ar5,ar6,ar7);
  uVar2 = FUN_8c06afb0(ar4,auStack_fcc,ar6,ar7);
  if (cVar11 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x240));
    dVar5 = (double)CONCAT44(0x44e10000,uVar3);
  }
  else {
    in_xd14 = *(undefined8 *)(ar4 + 0x240);
    dVar5 = 1.20586454969464e-311;
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44((float)(uVar2 & 0xffff),SUB84(dVar5,0));
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               (SUB84(in_dr14,0) / (float)((ulonglong)dVar5 >> 0x20)) *
                               (float)(uVar2 & 0xffff));
  }
  else {
    dVar6 = (double)(uVar2 & 0xffff);
    in_dr14 = (in_dr14 / dVar5) * dVar6;
  }
  uVar3 = SUB84(dVar6,0);
  FUN_8c068818(auStack_fcc,0xffffffff,ar6,ar7);
  if (cVar11 == '\0') {
    in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x240),uVar3);
  }
  else {
    in_dr0 = *(double *)(ar4 + 0x240);
  }
  if (cVar10 == '\0') {
    bVar9 = (float)((ulonglong)in_dr0 >> 0x20) < SUB84(in_dr14,0);
  }
  else {
    bVar9 = in_dr0 < in_dr14;
  }
  if (bVar9) {
    if (cVar11 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x240));
    }
    else {
      in_xd14 = *(undefined8 *)(ar4 + 0x240);
    }
    *(int *)(ar4 + 0x230) = *(int *)(ar4 + 0x230) + 1;
    iVar1 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6,ar7);
    *(uint *)(ar4 + 0x214) = *(uint *)(ar4 + 0x214) & ~auStack_24[iVar1];
  }
  if (cVar11 == '\0') {
    *(int *)(ar4 + 0x238) = SUB84(in_dr14,0);
  }
  else {
    *(undefined8 *)(ar4 + 0x238) = in_xd14;
  }
LAB_8c068bfc:
  uVar3 = SUB84(in_dr0,0);
  FUN_8c068890(auStack_1798,ar5,ar6,ar7);
  uVar2 = FUN_8c06afb0(ar4,auStack_1798,ar6,ar7);
  if (cVar11 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x240));
    dVar5 = (double)CONCAT44(0x45610000,uVar3);
  }
  else {
    in_xd14 = *(undefined8 *)(ar4 + 0x240);
    dVar5 = 1.21435667738153e-311;
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44((float)(uVar2 & 0xffff),SUB84(dVar5,0));
    dVar5 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                             (SUB84(in_dr14,0) / (float)((ulonglong)dVar5 >> 0x20)) *
                             (float)(uVar2 & 0xffff));
  }
  else {
    dVar6 = (double)(uVar2 & 0xffff);
    dVar5 = (in_dr14 / dVar5) * dVar6;
  }
  uVar3 = SUB84(dVar6,0);
  FUN_8c068818(auStack_1798,0xffffffff,ar6,ar7);
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x240),uVar3);
  }
  else {
    dVar6 = *(double *)(ar4 + 0x240);
  }
  if (cVar10 == '\0') {
    bVar9 = (float)((ulonglong)dVar6 >> 0x20) < SUB84(dVar5,0);
  }
  else {
    bVar9 = dVar6 < dVar5;
  }
  if (bVar9) {
    if (cVar11 == '\0') {
      dVar5 = (double)(ulonglong)*(uint *)(ar4 + 0x240);
    }
    else {
      in_xd14 = *(undefined8 *)(ar4 + 0x240);
    }
    *(int *)(ar4 + 0x230) = *(int *)(ar4 + 0x230) + 1;
  }
  if (cVar11 == '\0') {
    *(int *)(ar4 + 0x23c) = SUB84(dVar5,0);
  }
  else {
    *(undefined8 *)(ar4 + 0x23c) = in_xd14;
  }
  return 0x23c;
}

__asm__(".globl _FUN_8c068a4c\n.set _FUN_8c068a4c, _FUN_8c068a4c_def\n");
