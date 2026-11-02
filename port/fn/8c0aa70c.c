#include "../decls.h"
undefined4 FUN_8c0aa70c_def(int ar4,undefined4 ar5,int *ar6,undefined8 *ar7)

{
  int iVar1;
  undefined4 ar4_00;
  undefined4 *a5;
  int iVar2;
  undefined4 uVar3;
  float *a6;
  undefined8 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  double dVar8;
  float fVar11;
  ulonglong uVar9;
  double dVar10;
  undefined4 in_fr3;
  ulonglong in_xd0;
  char cVar12;
  char cVar13;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  float afStack_5c [3];
  float afStack_50 [3];
  float afStack_44 [2];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [16];
  undefined4 uStack_24;
  float fStack_20;
  undefined4 auStack_1c [2];
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar5 = 1;
  FUN_8c102748(&uStack_24,ar5,ar6,ar7);
  puVar4 = (undefined8 *)auStack_1c;
  a6 = &fStack_20;
  a5 = &uStack_24;
  (**(code **)(*ar6 + 0x120))(ar6,a5,a6,puVar4);
  Vec3_ctor_zero(auStack_34,a5,a6,puVar4);
  Vec3_ctor_zero(afStack_44,a5,a6,puVar4);
  iVar2 = ar4 + 0x14;
  Vec3_assign(auStack_34,iVar2,a6,puVar4);
  if (cVar13 == '\0') {
    dVar8 = (double)CONCAT44(0x42c80000,uStack_24);
  }
  else {
    in_xd0 = CONCAT44(fStack_20,uStack_24);
    dVar8 = 4.92856576361035e-312;
  }
  if (cVar12 == '\0') {
    afStack_44[0] = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    afStack_44[0] = SUB84(dVar8 - dVar8,0);
  }
  fVar7 = afStack_44[0];
  if (cVar13 != '\0') {
    afStack_44[0] = (float)in_xd0;
    uStack_38 = 0xe8;
    fVar7 = 100.0;
  }
  uStack_3c = 0x42c80000;
  iVar1 = *(int *)(ar4 + 0x21b4);
  if (iVar1 == 0) {
    if (*(int *)(ar4 + 0x2198) == 0) {
      FUN_8c03f460(afStack_50,&uStack_24,a6,puVar4);
      a6 = afStack_50;
      FUN_8c0a861c(ar4,ar5,a6,puVar4);
      free_if_nonnull_wrap_102790(afStack_50,0xffffffff,a6,puVar4);
      goto LAB_8c0aacb4;
    }
    if (*(int *)(ar4 + 0x2198) != 5) {
      FUN_8c03f460(afStack_5c,&uStack_24,a6,puVar4);
      a6 = afStack_5c;
      iVar2 = FUN_8c0a8c0c(ar4,ar5,a6,ar7);
      uVar3 = 0xffffffff;
      free_if_nonnull_wrap_102790(afStack_5c,0xffffffff,a6,ar7);
      puVar4 = ar7;
      if (iVar2 == 0) {
        *(int *)(ar4 + 0x21b4) = *(int *)(ar4 + 0x21b4) + 1;
        FUN_8c022d04(ar4 + 0x54,uVar3,a6,ar7);
        puVar4 = ar7;
        if (cVar13 == '\0') {
          *(undefined4 *)(ar4 + 0x54) = uStack_24;
          *(float *)(ar4 + 0x58) = fStack_20;
        }
        else {
          *(undefined8 *)(ar4 + 0x54) = CONCAT44(fStack_20,uStack_24);
          *(ulonglong *)(ar4 + 0x58) = CONCAT44(auStack_1c[0],fStack_20);
        }
      }
      goto LAB_8c0aacb4;
    }
    *(undefined4 *)(ar4 + 0x21b4) = 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (cVar13 == '\0') {
        fVar7 = *(float *)(ar4 + 0x2194);
      }
      else {
        in_xd0 = *(ulonglong *)(ar4 + 0x2194);
      }
      if (cVar12 == '\0') {
        fVar7 = fVar7 + 1.0;
      }
      else {
        fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) + (double)CONCAT44(0x3f800000,fVar7),0);
      }
      if (cVar13 == '\0') {
        *(float *)(ar4 + 0x2194) = fVar7;
        fVar7 = *(float *)(ar4 + 0x2194);
        fVar11 = 15.0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2194) = in_xd0;
        in_xd0 = *(ulonglong *)(ar4 + 0x2194);
        fVar7 = 15.0;
        fVar11 = 108.7;
      }
      if (cVar12 != '\0' || fVar7 <= fVar11) {
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(0xc0981b4f,*(undefined4 *)(ar4 + 0x21a8));
        }
        else {
          in_xd0 = *(ulonglong *)(ar4 + 0x21a8);
          dVar8 = 1.8293200140039e-310;
        }
        if (cVar12 == '\0') {
          fVar7 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar8 + dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(ar4 + 0x21a8) = fVar7;
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x21ac),in_fr3);
          dVar10 = (double)CONCAT44(0x41700000,*(undefined4 *)(ar4 + 0x22c));
        }
        else {
          *(ulonglong *)(ar4 + 0x21a8) = in_xd0;
          dVar8 = *(double *)(ar4 + 0x21ac);
          dVar10 = 1.82412182335889e-310;
        }
        if (cVar12 == '\0') {
          dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) +
                                   SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20),
                                   SUB84(dVar8,0));
        }
        else {
          dVar8 = dVar8 + dVar10 / dVar10;
        }
        if (cVar13 == '\0') {
          *(int *)(ar4 + 0x21ac) = (int)((ulonglong)dVar8 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x21ac) = dVar8;
        }
      }
      else {
        if (cVar13 == '\0') {
          *(undefined4 *)ar7 = 0x42d96666;
          uVar9 = CONCAT44(0xc1c9999a,fVar7);
          *(undefined4 *)((int)ar7 + 4) = 0xc1c9999a;
        }
        else {
          *ar7 = 0xc1c9999a42d96666;
          uVar9 = 0x21a8c1c9999a;
          *(undefined8 *)((int)ar7 + 4) = 0x21a8c1c9999a;
        }
        if (cVar13 == '\0') {
          *(undefined4 *)(ar7 + 1) = 0;
        }
        else {
          ar7[1] = uVar9 & 0xffffffff;
        }
        FUN_8c023d7c(ar4 + 0x21a8,iVar2,a6,puVar4);
      }
      if (cVar13 == '\0') {
        uVar9 = CONCAT44(0x43480000,*(undefined4 *)(ar4 + 0x2194));
      }
      else {
        uVar9 = 0xbf80000043480000;
      }
      if (cVar12 != '\0' || (float)(uVar9 >> 0x20) <= (float)uVar9) {
        if (cVar13 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = uVar9 & 0xffffffff;
        }
        FUN_8c022d04(ar4 + 0x14,iVar2,a6,puVar4);
        *(int *)(ar4 + 0x21b4) = *(int *)(ar4 + 0x21b4) + 1;
      }
      FUN_8c03f3ac(ar4 + 0xb0,iVar2,a6,puVar4);
    }
    else if ((iVar1 == 3) &&
            (iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar2,a6,puVar4), iVar2 == 1)) {
      *(undefined4 *)(ar4 + 0x2198) = 8;
      uVar5 = 0;
      *(undefined4 *)(ar4 + 0x134) = 0;
      *(undefined4 *)(ar4 + 0x21b4) = 0;
    }
    goto LAB_8c0aacb4;
  }
  FUN_8c03f460(&uStack_68,&uStack_24,a6,puVar4);
  puVar4 = &uStack_68;
  a6 = afStack_44;
  iVar2 = FUN_8c0a8f94(ar4,ar5,a6,puVar4);
  uVar3 = 0xffffffff;
  free_if_nonnull_wrap_102790(&uStack_68,0xffffffff,a6,puVar4);
  if (iVar2 == 0) {
    *(int *)(ar4 + 0x21b4) = *(int *)(ar4 + 0x21b4) + 1;
    uVar9 = (ulonglong)(uint)fVar7;
    if (cVar13 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = uVar9;
    }
    FUN_8c0230f0(ar4 + 0x14,uVar3,a6,puVar4,auStack_78);
    Vec3_ctor_xyz(auStack_88,uVar3,a6,puVar4);
    uVar3 = ar5;
    Vec3_sub(auStack_88,ar5,a6,puVar4,auStack_98);
    ar4_00 = Vec3_length(auStack_98,uVar3,a6,puVar4);
    FUN_8c0230f0(ar4_00,uVar3,a6,puVar4,auStack_a8);
    FUN_8c022dac(auStack_78,auStack_a8,a6,puVar4);
    if (cVar13 == '\0') {
      *(int *)(ar4 + 0x22c) = (int)(uVar9 >> 0x20);
    }
    else {
      *(ulonglong *)(ar4 + 0x22c) = uVar9;
    }
    uVar6 = (uint)uVar9;
    Vec3_dtor(auStack_a8,0xffffffff,a6,puVar4);
    Vec3_dtor(auStack_98,0xffffffff,a6,puVar4);
    Vec3_dtor(auStack_88,0xffffffff,a6,puVar4);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_78,0xffffffff,a6,puVar4);
    Vec3_ctor_xyz(auStack_b8,uVar3,a6,puVar4);
    uVar3 = ar5;
    Vec3_sub(auStack_b8,ar5,a6,puVar4,auStack_c8);
    uVar3 = Vec3_length(auStack_c8,uVar3,a6,puVar4);
    Vec3_assign(ar4 + 0x14,uVar3,a6,puVar4);
    Vec3_dtor(auStack_c8,0xffffffff,a6,puVar4);
    Vec3_dtor(auStack_b8,0xffffffff,a6,puVar4);
    uVar9 = (ulonglong)uVar6;
    if (cVar13 == '\0') {
      *(undefined4 *)(ar4 + 0x21a8) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x21a8) = uVar9;
    }
    Vec3_assign(ar4 + 0x54,ar5,a6,puVar4);
    uVar9 = uVar9 & 0xffffffff;
    if (cVar13 == '\0') {
      *(undefined4 *)(ar4 + 0x2194) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2194) = uVar9;
    }
    Vec3_ctor_xyz(auStack_d8,ar5,a6,puVar4);
    iVar2 = ar4 + 0x54;
    Vec3_sub(auStack_d8,iVar2,a6,puVar4,auStack_e8);
    Vec3_length_sq(auStack_e8,iVar2,a6,puVar4);
    if (cVar13 == '\0') {
      dVar8 = (double)CONCAT44(0x43480000,(int)(uVar9 >> 0x20));
      uVar9 = in_xd0;
    }
    else {
      dVar8 = -0.007812501958142093;
    }
    if (cVar12 == '\0') {
      fVar7 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar8 / dVar8,0);
    }
    if (cVar13 == '\0') {
      *(float *)(ar4 + 0x28) = fVar7;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = uVar9;
    }
    Vec3_dtor(auStack_e8,0xffffffff,a6,puVar4);
    Vec3_dtor(auStack_d8,0xffffffff,a6,puVar4);
    puVar4 = (undefined8 *)0x0;
    a6 = (float *)0xffffffff;
    uVar3 = 0;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,a6,puVar4);
  }
LAB_8c0aacb4:
  Vec3_dtor(afStack_44,0xffffffff,a6,puVar4);
  Vec3_dtor(auStack_34,0xffffffff,a6,puVar4);
  free_if_nonnull_wrap_102790(&uStack_24,0xffffffff,a6,puVar4);
  return uVar5;
}

__asm__(".globl _FUN_8c0aa70c\n.set _FUN_8c0aa70c, _FUN_8c0aa70c_def\n");
