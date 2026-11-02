#include "../decls.h"
undefined4 FUN_8c091e60_def(ulonglong *ar4,ulonglong *ar5,int *ar6,ulonglong *ar7)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *ar5_00;
  ulonglong *ar5_01;
  int *ar6_00;
  ulonglong *ar7_00;
  uint uVar4;
  float fVar5;
  ulonglong in_dr0;
  float fVar9;
  ulonglong uVar6;
  double dVar7;
  ulonglong uVar8;
  ulonglong in_xd0;
  char cVar10;
  char cVar11;
  char in_stack_00000000;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined1 auStack_fc [16];
  undefined1 auStack_ec [16];
  undefined1 auStack_dc [16];
  undefined1 auStack_cc [16];
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [4];
  undefined8 uStack_20;
  
  cVar11 = '\0';
  cVar10 = '\0';
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_24,ar5,ar6,ar7);
  uVar4 = (uint)in_dr0;
  uStack_100 = 1;
  ar5_01 = ar4 + 0xd;
  iVar1 = (int)*ar5_01;
  if ((4 < iVar1) || (iVar1 < 0)) goto switchD_8c091ea8_default;
                    
  switch(iVar1) {
  case 0:
    while( true ) {
      uVar4 = (uint)in_dr0;
      uVar3 = 0x8c2846d0;
      FUN_8c031b68(ar4,0x8c2846d0,ar6_00,ar7_00);
      FUN_8c03c314(ar4,uVar3,ar6_00,ar7_00);
      ar7_00 = (ulonglong *)0x0;
      ar6_00 = (int *)0xffffffff;
      uVar3 = 1;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,1,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,uVar3,ar6_00,ar7_00);
      uVar8 = (ulonglong)uVar4;
      if (cVar11 == '\0') {
        *(int *)((int)ar4 + 0x224) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x224) = uVar8;
      }
      Vec3_assign(ar4 + 0x46,(int *)((int)ar4 + 0x14),ar6_00,ar7_00);
      uVar8 = uVar8 & 0xffffffff;
      if (cVar11 == '\0') {
        *(int *)(ar4 + 0x44) = 0;
      }
      else {
        ar4[0x44] = uVar8;
      }
      Vec3_assign((int *)((int)ar4 + 0x54),ar5,ar6_00,ar7_00);
      ar5_01 = ar5;
      (**(code **)((int)*ar7 + 0x128))(ar7,ar5,ar6_00,ar7_00);
      iVar1 = (int)(uVar8 >> 0x20);
      if (cVar11 == '\0') {
        *(int *)(ar4 + 0xb) = iVar1;
        dVar7 = (double)CONCAT44(0x3a83126f,*(int *)((int)ar4 + 0x54));
      }
      else {
        ar4[0xb] = uVar8;
        in_xd0 = *(ulonglong *)((int)ar4 + 0x54);
        dVar7 = 6.577018791706446e+182;
        iStack_11c = iVar1;
      }
      if (cVar10 == '\0') {
        fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar11 == '\0') {
        *(float *)((int)ar4 + 0x54) = fVar5;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x54) = in_xd0;
      }
      if (ar6 != (int *)0x0) {
        if (ar6 == (int *)0x3) {
          if (cVar11 == '\0') {
            uVar8 = CONCAT44(0x3e4ccccd,fVar5);
            *(int *)(ar4 + 0x14) = 0x3e4ccccd;
          }
          else {
            uVar8 = 0xb03e4ccccd;
            ar4[0x14] = 0xb03e4ccccd;
          }
          ar5_01 = ar4 + 5;
          if (cVar11 == '\0') {
            *(int *)ar5_01 = 0;
          }
          else {
            *ar5_01 = uVar8 & 0xffffffff;
          }
          *(int *)(ar4 + 0xd) = (int)ar4[0xd] + 1;
        }
        goto switchD_8c091ea8_caseD_1;
      }
      if (cVar11 == '\0') {
        in_dr0 = CONCAT44(0x3ba3d70a,fVar5);
        *(int *)(ar4 + 0x14) = 0x3ba3d70a;
      }
      else {
        in_dr0 = 0x61e3d41b3ba3d70a;
        ar4[0x14] = 0x61e3d41b3ba3d70a;
      }
      in_dr0 = in_dr0 & 0xffffffff;
      if (cVar11 == '\0') {
        *(int *)(ar4 + 5) = 0;
      }
      else {
        ar4[5] = in_dr0;
      }
      ar5_01 = (ulonglong *)0x2;
      *(int *)(ar4 + 0xd) = 2;
switchD_8c091ea8_caseD_2:
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,ar5_01,ar6_00,ar7_00);
      if (iVar1 == 1) {
        iVar1 = rand_range(ar4,0,100,ar7_00);
        if (iVar1 < 0x32) {
          ar7_00 = (ulonglong *)0x0;
          ar6_00 = (int *)0xffffffff;
          ar5_01 = (ulonglong *)0x1;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,1,0xffffffff,0);
        }
        else {
          ar7_00 = (ulonglong *)0x0;
          ar6_00 = (int *)0xffffffff;
          ar5_01 = (ulonglong *)0x7;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,7,0xffffffff,0);
        }
        s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,ar5_01,ar6_00,ar7_00);
      }
      fVar5 = (float)in_dr0;
      if (ar6 != (int *)0x3) break;
      *(int *)(ar4 + 0xd) = 0;
      *(int *)(ar4 + 0x45) = 0;
      if (cVar11 == '\0') {
        *(int *)(ar4 + 3) = 0;
      }
      else {
        ar4[3] = in_dr0 & 0xffffffff;
      }
      in_dr0 = in_dr0 & 0xffffffff;
      if (cVar11 == '\0') {
        *(int *)(ar4 + 0x44) = 0;
      }
      else {
        ar4[0x44] = in_dr0;
      }
    }
    Vec3_set_xyz(auStack_70,ar5_01,ar6_00,ar7_00);
    ar7_00 = (ulonglong *)((int)ar4 + 0x14);
    ar6_00 = (int *)((int)ar4 + 0x54);
    FUN_8c031eb0(ar4,ar5,ar6_00,ar7_00,auStack_80);
    Vec3_assign((int *)((int)ar4 + 0x14),auStack_80,ar6_00,ar7_00);
    Vec3_dtor(auStack_80,0xffffffff,ar6_00,ar7_00);
    uVar3 = 0xffffffff;
    object_dtor_delete(auStack_70,0xffffffff,ar6_00,ar7_00);
    if (cVar11 == '\0') {
      fVar5 = *(float *)((int)ar4 + 0x224);
    }
    else {
      in_xd0 = *(ulonglong *)((int)ar4 + 0x224);
    }
    if (cVar10 != '\0' || fVar5 <= 1.0) {
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x3c23d70a,*(int *)((int)ar4 + 0x224));
      }
      else {
        in_xd0 = *(ulonglong *)((int)ar4 + 0x224);
        dVar7 = 4.1640967825903e-312;
      }
      if (cVar10 == '\0') {
        fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar11 == '\0') {
        *(float *)((int)ar4 + 0x224) = fVar5;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x224) = in_xd0;
      }
    }
    Vec3_set_xyz(auStack_8c,uVar3,ar6_00,ar7_00);
    FUN_8c023484((int *)((int)ar4 + 0x14),auStack_8c,ar6_00,ar7_00,auStack_9c);
    Vec3_assign((int *)((int)ar4 + 0x14),auStack_9c,ar6_00,ar7_00);
    Vec3_dtor(auStack_9c,0xffffffff,ar6_00,ar7_00);
    uVar3 = 0xffffffff;
    object_dtor_delete(auStack_8c,0xffffffff,ar6_00,ar7_00);
    if ((ar6 != (int *)0x1) && (ar6 != (int *)0x2)) {
      FUN_8c0324ac(ar4,uVar3,ar6_00,ar7_00);
      break;
    }
    *(int *)(ar4 + 0xd) = 4;
    *(int *)(ar4 + 0x45) = 0;
    uVar8 = (ulonglong)(uint)fVar5;
    if (cVar11 == '\0') {
      *(int *)(ar4 + 0x44) = 0;
    }
    else {
      ar4[0x44] = uVar8;
    }
    ar5_01 = (ulonglong *)((int)ar4 + 0x14);
    Vec3_assign(ar4 + 0x46,ar5_01,ar6_00,ar7_00);
    uVar4 = (uint)uVar8;
    *(int *)((int)ar4 + 0x244) = 0;
  case 4:
    uVar8 = (ulonglong)uVar4;
    if (cVar11 == '\0') {
      *(int *)(ar4 + 0x14) = 0;
    }
    else {
      ar4[0x14] = uVar8;
    }
    FUN_8c073c9c(ar4,ar5_01,ar6_00,ar7_00);
    uVar6 = uVar8 & 0xffffffff;
    if (cVar11 == '\0') {
      *(int *)(ar4 + 5) = 0;
    }
    else {
      ar4[5] = uVar6;
    }
    if ((ar6 == (int *)0x1) || (ar6 == (int *)0x2)) {
      ar6_00 = (int *)0xb0;
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0x16,ar4 + 0x16,0xb0,ar7_00);
      fVar5 = (float)uVar6;
      if (cVar11 == '\0') {
        fVar5 = *(float *)(ar4 + 3);
      }
      else {
        in_xd0 = ar4[3];
      }
      uVar8 = (ulonglong)(uint)fVar5;
      if (fVar5 != 0.0) {
        piVar2 = (int *)((int)ar4 + 0x14);
        Vec3_assign(auStack_24,piVar2,ar6_00,ar7_00);
        uVar8 = uVar8 & 0xffffffff;
        if (cVar11 == '\0') {
          uStack_20 = uStack_20 & 0xffffffff00000000;
          uVar8 = uStack_20;
        }
        uStack_20 = uVar8;
        uVar3 = Vec3_length(auStack_24,piVar2,ar6_00,ar7_00);
        Vec3_assign(auStack_24,uVar3,ar6_00,ar7_00);
        if (cVar11 == '\0') {
          dVar7 = (double)CONCAT44(0x3d4ccccd,(int)ar4[0x44]);
        }
        else {
          in_xd0 = ar4[0x44];
          dVar7 = 1.18882576146403e-311;
        }
        if (cVar10 == '\0') {
          fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar7 + dVar7,0);
        }
        if (cVar11 == '\0') {
          *(float *)(ar4 + 0x44) = fVar5;
          fVar5 = *(float *)(ar4 + 0x44);
        }
        else {
          ar4[0x44] = in_xd0;
        }
        if (cVar10 != '\0' || 1.0 <= fVar5) {
          if (cVar11 == '\0') {
            *(int *)(ar4 + 0x44) = 0x3f800000;
          }
          else {
            ar4[0x44] = CONCAT44(0x3f800000,fVar5);
          }
        }
        if (cVar11 == '\0') {
          fVar5 = *(float *)(ar4 + 0x44);
        }
        if (cVar10 == '\0') {
          dVar7 = (double)CONCAT44(1.0 - fVar5,fVar5);
        }
        else {
          dVar7 = (double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5);
        }
        iVar1 = (int)((ulonglong)dVar7 >> 0x20);
        iStack_118 = iVar1;
        if (cVar11 != '\0') {
          iStack_118 = SUB84(dVar7,0);
          iStack_114 = iVar1;
        }
        Vec3_scale(ar4 + 0x46,&iStack_118,ar6_00,ar7_00,auStack_dc);
        if (cVar11 == '\0') {
          iStack_11c = (int)ar4[0x44];
          uVar8 = CONCAT44(iStack_11c,SUB84(dVar7,0));
        }
        else {
          uVar8 = ar4[0x44];
          iStack_11c = (int)uVar8;
          iStack_118 = (int)(uVar8 >> 0x20);
        }
        fVar5 = (float)uVar8;
        Vec3_scale(auStack_24,&iStack_11c,ar6_00,ar7_00,auStack_ec);
        Vec3_add(auStack_dc,auStack_ec,ar6_00,ar7_00,auStack_fc);
        Vec3_assign((int *)((int)ar4 + 0x14),auStack_fc,ar6_00,ar7_00);
        Vec3_dtor(auStack_fc,0xffffffff,ar6_00,ar7_00);
        Vec3_dtor(auStack_ec,0xffffffff,ar6_00,ar7_00);
        Vec3_dtor(auStack_dc,0xffffffff,ar6_00,ar7_00);
        if (cVar11 == '\0') {
          fVar5 = *(float *)(ar4 + 0x44);
        }
        if (fVar5 == 1.0) {
          if (cVar11 == '\0') {
            *(int *)(ar4 + 0x44) = 0;
          }
          else {
            ar4[0x44] = (ulonglong)(uint)fVar5;
          }
        }
      }
    }
    else {
      ar6_00 = (int *)0x0;
      *(int *)(ar4 + 0xd) = 0;
      *(int *)(ar4 + 0x45) = 0;
      if (cVar11 == '\0') {
        *(int *)(ar4 + 3) = 0;
      }
      else {
        ar4[3] = uVar8 & 0xffffffff;
      }
      ar7_00 = ar4 + 0x44;
      if (cVar11 == '\0') {
        *(int *)ar7_00 = 0;
      }
      else {
        *ar7_00 = uVar8 & 0xffffffff;
      }
    }
    break;
  case 1:
switchD_8c091ea8_caseD_1:
    iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,ar5_01,ar6_00,ar7_00);
    if (iVar1 == 1) {
      iVar1 = rand_range(ar4,0,100,ar7_00);
      if (iVar1 < 0x32) {
        ar7_00 = (ulonglong *)0x0;
        ar6_00 = (int *)0xffffffff;
        ar5_01 = (ulonglong *)0x1;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,1,0xffffffff,0);
      }
      else {
        ar7_00 = (ulonglong *)0x0;
        ar6_00 = (int *)0xffffffff;
        ar5_01 = (ulonglong *)0x7;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,7,0xffffffff,0);
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,ar5_01,ar6_00,ar7_00);
    }
    if (ar6 == (int *)0x0) {
      FUN_8c073c9c(ar4,ar5_01,ar6_00,ar7_00);
      *(int *)(ar4 + 0xd) = 0;
      break;
    }
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x3c4ccccd,(int)ar4[0x44]);
    }
    else {
      in_xd0 = ar4[0x44];
      dVar7 = 0.007750001682143193;
    }
    if (cVar10 == '\0') {
      fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar11 == '\0') {
      *(float *)(ar4 + 0x44) = fVar5;
      fVar5 = *(float *)(ar4 + 0x44);
      fVar9 = 0.999;
    }
    else {
      ar4[0x44] = in_xd0;
      in_xd0 = ar4[0x44];
      fVar5 = 0.999;
      fVar9 = 3.97969e-43;
    }
    if (cVar10 != '\0' || fVar9 <= fVar5) {
      if (cVar11 == '\0') {
        *(int *)(ar4 + 0x44) = 0x3f7fbe77;
      }
      else {
        ar4[0x44] = 0x11c3f7fbe77;
      }
    }
    if (cVar11 == '\0') {
      uVar8 = CONCAT44(0x3f7fbe77,(int)ar4[0x44]);
    }
    else {
      in_xd0 = ar4[0x44];
      uVar8 = 0x11c3f7fbe77;
    }
    if ((float)uVar8 != (float)(uVar8 >> 0x20)) {
      if (cVar11 == '\0') {
        uVar8 = (ulonglong)(uint)ar4[0x44];
      }
      else {
        in_xd0 = ar4[0x44];
      }
      fVar5 = (float)uVar8;
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(1.0 - fVar5,fVar5);
      }
      else {
        dVar7 = (double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5);
      }
      uVar3 = (undefined4)((ulonglong)dVar7 >> 0x20);
      uStack_108 = uVar3;
      if (cVar11 != '\0') {
        uStack_108 = SUB84(dVar7,0);
        uStack_104 = uVar3;
      }
      ar5_00 = &uStack_108;
      Vec3_scale(ar4 + 0x46,ar5_00,ar6_00,ar7_00,auStack_34);
      uVar3 = SUB84(dVar7,0);
      Vec3_ctor_xyz(auStack_44,ar5_00,ar6_00,ar7_00);
      if (cVar11 == '\0') {
        iStack_10c = (int)ar4[0x44];
        uVar8 = CONCAT44(iStack_10c,uVar3);
      }
      else {
        uVar8 = ar4[0x44];
        iStack_10c = (int)uVar8;
        uStack_108 = (undefined4)(uVar8 >> 0x20);
      }
      Vec3_scale(auStack_44,&iStack_10c,ar6_00,ar7_00,auStack_54);
      Vec3_add(auStack_34,auStack_54,ar6_00,ar7_00,auStack_64);
      Vec3_assign((int *)((int)ar4 + 0x14),auStack_64,ar6_00,ar7_00);
      Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7_00);
      ar5_01 = (ulonglong *)0xffffffff;
      Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7_00);
    }
    if ((ar6 != (int *)0x1) && (ar6 != (int *)0x2)) {
      FUN_8c0324ac(ar4,ar5_01,ar6_00,ar7_00);
      break;
    }
    *(int *)(ar4 + 0xd) = 3;
    uVar8 = uVar8 & 0xffffffff;
    if (cVar11 == '\0') {
      *(int *)(ar4 + 0x44) = 0;
    }
    else {
      ar4[0x44] = uVar8;
    }
    ar5_01 = (ulonglong *)((int)ar4 + 0x14);
    Vec3_assign(ar4 + 0x46,ar5_01,ar6_00,ar7_00);
    uVar4 = (uint)uVar8;
    *(int *)((int)ar4 + 0x244) = 0;
    if ((ar6 == (int *)0x1) && (in_stack_00000000 == '\x01')) {
      ar7_00 = (ulonglong *)0xa;
      ar6_00 = (int *)0x1;
      (**(code **)((int)*ar7 + 0xd0))(ar7,ar5,1,10);
      ar5_01 = ar5;
    }
  case 3:
    uVar8 = (ulonglong)uVar4;
    if (cVar11 == '\0') {
      *(int *)(ar4 + 0x14) = 0;
    }
    else {
      ar4[0x14] = uVar8;
    }
    FUN_8c073c9c(ar4,ar5_01,ar6_00,ar7_00);
    uVar6 = uVar8 & 0xffffffff;
    if (cVar11 == '\0') {
      *(int *)(ar4 + 5) = 0;
    }
    else {
      ar4[5] = uVar6;
    }
    if ((ar6 == (int *)0x1) || (ar6 == (int *)0x2)) {
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0x16,ar5_01,ar6_00,ar7_00);
      uVar4 = (uint)uVar6;
      piVar2 = (int *)((int)ar4 + 0x14);
      Vec3_assign(auStack_24,piVar2,ar6_00,ar7_00);
      uVar8 = (ulonglong)uVar4;
      if (cVar11 == '\0') {
        uStack_20 = (ulonglong)(*(uint*)((uchar*)&uStack_20+4)) << 0x20;
        uVar8 = uStack_20;
      }
      uStack_20 = uVar8;
      uVar3 = Vec3_length(auStack_24,piVar2,ar6_00,ar7_00);
      Vec3_assign(auStack_24,uVar3,ar6_00,ar7_00);
      ar6_00 = (int *)0x220;
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x3e4ccccd,(int)ar4[0x44]);
      }
      else {
        in_xd0 = ar4[0x44];
        dVar7 = 3.48523717287845e-312;
      }
      if (cVar10 == '\0') {
        fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar11 == '\0') {
        *(float *)(ar4 + 0x44) = fVar5;
        fVar5 = *(float *)(ar4 + 0x44);
      }
      else {
        ar4[0x44] = in_xd0;
      }
      if (cVar10 != '\0' || 1.0 <= fVar5) {
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x44) = 0x3f800000;
        }
        else {
          ar4[0x44] = CONCAT44(0x3f800000,fVar5);
        }
      }
      if (cVar11 == '\0') {
        fVar5 = *(float *)(ar4 + 0x44);
      }
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(1.0 - fVar5,fVar5);
      }
      else {
        dVar7 = (double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5);
      }
      iVar1 = (int)((ulonglong)dVar7 >> 0x20);
      iStack_110 = iVar1;
      if (cVar11 != '\0') {
        iStack_110 = SUB84(dVar7,0);
        iStack_10c = iVar1;
      }
      ar7_00 = ar4;
      Vec3_scale(ar4 + 0x46,&iStack_110,0x220,ar4,auStack_ac);
      if (cVar11 == '\0') {
        iStack_114 = (int)ar4[0x44];
        uVar8 = CONCAT44(iStack_114,SUB84(dVar7,0));
      }
      else {
        uVar8 = ar4[0x44];
        iStack_114 = (int)uVar8;
        iStack_110 = (int)(uVar8 >> 0x20);
      }
      fVar5 = (float)uVar8;
      Vec3_scale(auStack_24,&iStack_114,ar6_00,ar7_00,auStack_bc);
      Vec3_add(auStack_ac,auStack_bc,ar6_00,ar7_00,auStack_cc);
      Vec3_assign((int *)((int)ar4 + 0x14),auStack_cc,ar6_00,ar7_00);
      Vec3_dtor(auStack_cc,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_bc,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_ac,0xffffffff,ar6_00,ar7_00);
      if (cVar11 == '\0') {
        fVar5 = *(float *)(ar4 + 0x44);
      }
      if (fVar5 == 1.0) {
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x44) = 0;
        }
        else {
          ar4[0x44] = (ulonglong)(uint)fVar5;
        }
        *(int *)(ar4 + 0x45) = 1;
        ar6_00 = (int *)0x40;
        *(int *)(ar4 + 8) = 5;
      }
    }
    else {
      *(int *)(ar4 + 0xd) = 0;
      *(int *)(ar4 + 0x45) = 0;
      if (cVar11 == '\0') {
        *(int *)(ar4 + 3) = 0;
      }
      else {
        ar4[3] = uVar8 & 0xffffffff;
      }
      if (cVar11 == '\0') {
        *(int *)(ar4 + 0x44) = 0;
      }
      else {
        ar4[0x44] = uVar8 & 0xffffffff;
      }
    }
    break;
  case 2:
    goto switchD_8c091ea8_caseD_2;
  }
switchD_8c091ea8_default:
  uStack_104 = 0;
  Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7_00);
  return uStack_104;
}

__asm__(".globl _FUN_8c091e60\n.set _FUN_8c091e60, _FUN_8c091e60_def\n");
