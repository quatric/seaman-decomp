#include "../decls.h"
undefined4 FUN_8c0564c4_def(int ar4,undefined4 ar5,int ar6,undefined1 *ar7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined *ar5_00;
  code *ar5_01;
  undefined4 uVar4;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 unaff_r13;
  undefined4 uVar7;
  undefined4 unaff_r14;
  undefined8 *puVar8;
  float fVar9;
  undefined8 in_dr0;
  float fVar12;
  double dVar10;
  undefined8 uVar11;
  ulonglong in_dr14;
  double dVar13;
  undefined8 in_xd0;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
    puVar8 = &uStack_8;
                    
    (*(uint*)((uchar*)&uStack_8+0)) = (int)(in_dr14 >> 0x20);
  }
  else {
    puVar8 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar8 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar8 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar8 + -0xc) = 1;
  *(undefined4 *)((int)puVar8 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar8 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar8 + -0x18) = unaff_r9;
  *(undefined4 *)((int)puVar8 + -0x1c) = in_PR;
  uVar7 = 1;
  uVar3 = ar5;
  Vec3_ctor_zero((undefined1 *)((int)puVar8 + -0x2c),ar5,ar6,ar7);
  Vec3_ctor_zero((undefined1 *)((int)puVar8 + -0x3c),uVar3,ar6,ar7);
  Vec3_ctor_zero((undefined1 *)((int)puVar8 + -0x4c),uVar3,ar6,ar7);
  *(undefined4 *)((int)puVar8 + -0x1a8) = 0;
  Vec3_ctor_xyz((undefined1 *)((int)puVar8 + -0x7c),uVar3,ar6,ar7);
  Vec3_ctor_copy((undefined1 *)((int)puVar8 + -0x5c),(undefined1 *)((int)puVar8 + -0x7c),ar6,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor((undefined1 *)((int)puVar8 + -0x7c),0xffffffff,ar6,ar7);
  Vec3_ctor_zero((undefined1 *)((int)puVar8 + -0x6c),uVar3,ar6,ar7);
  uVar3 = get_field_24_026024(*(undefined4 *)(ar4 + 0x244),uVar3,ar6,ar7);
  *(undefined4 *)((int)puVar8 + -0x1c0) = uVar3;
  if (*(int *)((int)puVar8 + -0x1c0) == 0) {
    iVar1 = *(int *)(ar4 + 0x2a4);
    if ((iVar1 < 5) && (-1 < iVar1)) {
      ar5_00 = (&switchdata_8c05663a_8c056644)[iVar1];
                    
      switch(iVar1) {
      case 0:
        ar6 = 0x14;
        uVar3 = rand_range(ar4,0,0x14,ar7);
        *(undefined4 *)((int)puVar8 + -0x1c4) = uVar3;
        *(int *)(ar4 + 0x2f8) = *(int *)((int)puVar8 + -0x1c4) + 5;
        *(int *)((int)puVar8 + -0x1fc) = ar4;
        *(int *)(*(int *)((int)puVar8 + -0x1fc) + 0x2a4) =
             *(int *)(*(int *)((int)puVar8 + -0x1fc) + 0x2a4) + 1;
      case 1:
        uVar3 = FUN_8c057164(ar4,ar5,ar6,ar7);
        *(undefined4 *)((int)puVar8 + -0x1c8) = uVar3;
        iVar1 = *(int *)((int)puVar8 + -0x1c8);
        if (iVar1 == 0) {
          *(undefined4 *)(ar4 + 700) = 1;
          FUN_8c022d04(ar4 + 0x54,0,ar6,ar7);
          FUN_8c022d04(ar4 + 0x2d4,iVar1,ar6,ar7);
          FUN_8c022d04(ar4 + 0x2a8,iVar1,ar6,ar7);
          *(int *)((int)puVar8 + -0x200) = ar4;
          *(int *)(*(int *)((int)puVar8 + -0x200) + 0x2a4) =
               *(int *)(*(int *)((int)puVar8 + -0x200) + 0x2a4) + 1;
          *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0x8c);
          puVar2 = (undefined1 *)((int)puVar8 + -0x5c);
          Vec3_sub(ar5,puVar2,ar6,ar7,*(undefined4 *)((int)puVar8 + -0x214));
          *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0x9c);
          Vec3_normalize((undefined1 *)((int)puVar8 + -0x8c),puVar2,ar6,ar7);
          Vec3_assign(ar4 + 0x54,(undefined1 *)((int)puVar8 + -0x9c),ar6,ar7);
          Vec3_dtor((undefined1 *)((int)puVar8 + -0x9c),0xffffffff,ar6,ar7);
          Vec3_dtor((undefined1 *)((int)puVar8 + -0x8c),0xffffffff,ar6,ar7);
          FUN_8c022fc0(ar4 + 0x34c,(undefined1 *)((int)puVar8 + -0x5c),ar6,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar8 + -0x1cc) = (int)((ulonglong)in_dr0 >> 0x20);
            *(undefined4 *)((int)puVar8 + -0x1b4) = *(undefined4 *)((int)puVar8 + -0x1cc);
          }
          else {
            *(undefined8 *)((int)puVar8 + -0x1cc) = in_dr0;
            *(undefined8 *)((int)puVar8 + -0x1b4) = *(undefined8 *)((int)puVar8 + -0x1cc);
          }
          *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0xac);
          Vec3_scale(ar4 + 0x54,(undefined1 *)((int)puVar8 + -0x1b4),ar6,ar7,
                     *(undefined4 *)((int)puVar8 + -0x214));
          *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0xbc);
          Vec3_add((undefined1 *)((int)puVar8 + -0xac),(undefined1 *)((int)puVar8 + -0x5c),ar6,ar7,
                   *(undefined4 *)((int)puVar8 + -0x214));
          Vec3_assign(ar4 + 0x268,(undefined1 *)((int)puVar8 + -0xbc),ar6,ar7);
          Vec3_dtor((undefined1 *)((int)puVar8 + -0xbc),0xffffffff,ar6,ar7);
          Vec3_dtor((undefined1 *)((int)puVar8 + -0xac),0xffffffff,ar6,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x26c) = 0x43340000;
            fVar9 = *(float *)(ar4 + 0x270);
            fVar12 = 1200.0;
          }
          else {
            *(undefined8 *)(ar4 + 0x26c) = 0x27043340000;
            fVar9 = 1200.0;
            fVar12 = 4.54021e-43;
          }
          if (in_FPSCR_PR == '\0' && fVar12 < fVar9) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + 0x270) = 0x44960000;
            }
            else {
              *(undefined8 *)(ar4 + 0x270) = 0x14444960000;
            }
            *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0xcc);
            puVar2 = (undefined1 *)((int)puVar8 + -0x5c);
            Vec3_sub(ar4 + 0x268,puVar2,ar6,ar7,*(undefined4 *)((int)puVar8 + -0x214));
            *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0xdc);
            Vec3_normalize((undefined1 *)((int)puVar8 + -0xcc),puVar2,ar6,ar7);
            Vec3_assign(ar4 + 0x54,(undefined1 *)((int)puVar8 + -0xdc),ar6,ar7);
            Vec3_dtor((undefined1 *)((int)puVar8 + -0xdc),0xffffffff,ar6,ar7);
            Vec3_dtor((undefined1 *)((int)puVar8 + -0xcc),0xffffffff,ar6,ar7);
          }
          FUN_8c023bf4(ar4 + 0x54,&DAT_8c1365e0,ar6,ar7);
          ar7 = (undefined1 *)0x0;
          ar6 = -1;
          uVar3 = 0x1a;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
        }
        break;
      case 2:
        *(int *)((int)puVar8 + -0x204) = ar4;
        *(int *)(*(int *)((int)puVar8 + -0x204) + 0x2a4) =
             *(int *)(*(int *)((int)puVar8 + -0x204) + 0x2a4) + 1;
      case 3:
        Vec3_ctor_copy((undefined1 *)((int)puVar8 + -0xec),ar4 + 0x54,ar6,Vec3_ctor_copy);
        ar7 = (undefined1 *)((int)puVar8 + -0xec);
        ar6 = ar4 + 0x268;
        uVar3 = FUN_8c04e0e0(ar4,ar5,ar6,ar7);
        *(undefined4 *)((int)puVar8 + -0x1d0) = uVar3;
        *(uint *)((int)puVar8 + -0x1b8) = (uint)(*(int *)((int)puVar8 + -0x1d0) == 0);
        Vec3_dtor((undefined1 *)((int)puVar8 + -0xec),0xffffffff,ar6,ar7);
        if (*(int *)((int)puVar8 + -0x1b8) != 0) {
          ar7 = (undefined1 *)0x0;
          ar6 = -1;
          uVar3 = 0x4a;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x4a,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
          *(int *)((int)puVar8 + -0x208) = ar4;
          iVar1 = *(int *)((int)puVar8 + -0x208);
          *(int *)(*(int *)((int)puVar8 + -0x208) + 0x2a4) = *(int *)(iVar1 + 0x2a4) + 1;
          FUN_8c022d04(ar4 + 0x2d4,iVar1,ar6,ar7);
          ar5_01 = FUN_8c022d04;
          FUN_8c022d04(ar4 + 0x2a8,FUN_8c022d04,ar6,ar7);
          *(undefined4 *)(ar4 + 0x2b8) = 3;
          *(undefined4 *)(ar4 + 0x2e8) = 1;
          FUN_8c030f2c(ar4 + 0x1fc,ar5_01,ar6,ar7);
          uVar3 = FUN_8c026db0(ar4,ar5_01,ar6,ar7);
          *(undefined4 *)((int)puVar8 + -0x1d4) = uVar3;
          uVar4 = *(undefined4 *)((int)puVar8 + -0x1d4);
          uVar3 = FUN_8c03c0f0(ar4 + 0xb0,uVar4,ar6,ar7);
          *(undefined4 *)((int)puVar8 + -0x1d8) = uVar3;
          uVar3 = deref_u32(*(undefined4 *)((int)puVar8 + -0x1d8),uVar4,ar6,ar7);
          *(undefined4 *)((int)puVar8 + -0x1dc) = uVar3;
          puVar5 = *(undefined4 **)((int)puVar8 + -0x1dc);
          uVar3 = puVar5[1];
          *(undefined4 *)(ar4 + 0xb4) = *puVar5;
          *(undefined4 *)(ar4 + 0xb8) = uVar3;
          *(undefined4 *)(ar4 + 0xbc) = puVar5[2];
        }
        break;
      case 4:
        *(undefined4 *)(ar4 + 0x334) = 1;
        *(undefined4 *)(ar4 + 0x214) = 0;
        *(undefined4 *)(ar4 + 0x178) = 1;
        FUN_8c031748(ar4,ar5_00,ar6,ar7);
        FUN_8c022d04(ar4 + 0x90,ar5_00,ar6,ar7);
        Vec3_assign((undefined1 *)((int)puVar8 + -0x6c),ar5,ar6,ar7);
        if (*(int *)(ar4 + 0x128) == 3) {
          puVar6 = &DAT_8c135f64;
          puVar5 = &DAT_8c135f64;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(0xc1100000,(int)in_dr14);
            dVar10 = (double)CONCAT44(0x43fa0000,*(undefined4 *)((int)puVar8 + -0x6c));
          }
          else {
            dVar13 = 2.9975972386932e+19;
            in_xd0 = *(undefined8 *)((int)puVar8 + -0x6c);
            dVar10 = 1.50293648086087e-311;
          }
          if (in_FPSCR_PR == '\0') {
            fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar9 = SUB84(dVar10 + dVar10,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar8 + -0x6c) = fVar9;
          }
          else {
            *(undefined8 *)((int)puVar8 + -0x6c) = in_xd0;
          }
          uVar11 = CONCAT44(0x3f800000,fVar9);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x2c4) = 0x3f800000;
          }
          else {
            *(undefined8 *)(ar4 + 0x2c4) = uVar11;
          }
        }
        else {
          puVar6 = (undefined4 *)&DAT_8c136204;
          puVar5 = (undefined4 *)&DAT_8c136204;
          dVar13 = (double)(in_dr14 & 0xffffffff);
          if (in_FPSCR_SZ == '\0') {
            dVar10 = (double)CONCAT44(0x43fa0000,*(undefined4 *)((int)puVar8 + -0x6c));
          }
          else {
            in_xd0 = *(undefined8 *)((int)puVar8 + -0x6c);
            dVar10 = 1.50293648086087e-311;
          }
          if (in_FPSCR_PR == '\0') {
            fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar9 = SUB84(dVar10 + dVar10,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar8 + -0x6c) = fVar9;
          }
          else {
            *(undefined8 *)((int)puVar8 + -0x6c) = in_xd0;
          }
          uVar11 = CONCAT44(0x3f800000,fVar9);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x2c4) = 0x3f800000;
          }
          else {
            *(undefined8 *)(ar4 + 0x2c4) = uVar11;
          }
        }
        FUN_8c022d04((undefined1 *)((int)puVar8 + -0x4c),ar5,ar6,ar7);
        *(undefined4 **)(ar4 + 0xb4) = puVar6;
        CAnimBody_GetCurFrame
                  (ar4 + 0xb0,CAnimBody_GetCurFrame,ar6,ar7,*(undefined4 *)((int)puVar8 + -0x210));
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar8 + -0x1e0) = (int)((ulonglong)uVar11 >> 0x20);
        }
        else {
          *(undefined8 *)((int)puVar8 + -0x1e0) = uVar11;
        }
        *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0xfc);
        FUN_8c034384(ar4 + 0xb0,**(undefined4 **)(ar4 + 0xb4),ar6,ar7);
        uVar4 = (undefined4)uVar11;
        Vec3_assign((undefined1 *)((int)puVar8 + -0x2c),(undefined1 *)((int)puVar8 + -0xfc),ar6,ar7)
        ;
        uVar3 = 0xffffffff;
        Vec3_dtor((undefined1 *)((int)puVar8 + -0xfc),0xffffffff,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          uVar11 = CONCAT44(*(undefined4 *)((int)puVar8 + -0x28),uVar4);
          *(undefined4 *)((int)puVar8 + -0x48) = *(undefined4 *)((int)puVar8 + -0x28);
        }
        else {
          uVar11 = *(undefined8 *)((int)puVar8 + -0x28);
          *(undefined8 *)((int)puVar8 + -0x48) = uVar11;
        }
        *(undefined4 **)(ar4 + 0xb4) = puVar5;
        CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7,*(undefined4 *)((int)puVar8 + -0x210));
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar8 + -0x1e4) = (int)((ulonglong)uVar11 >> 0x20);
        }
        else {
          *(undefined8 *)((int)puVar8 + -0x1e4) = uVar11;
        }
        *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0x10c);
        FUN_8c034384(ar4 + 0xb0,**(undefined4 **)(ar4 + 0xb4),ar6,ar7);
        uVar3 = (undefined4)uVar11;
        Vec3_assign((undefined1 *)((int)puVar8 + -0x2c),(undefined1 *)((int)puVar8 + -0x10c),ar6,ar7
                   );
        Vec3_dtor((undefined1 *)((int)puVar8 + -0x10c),0xffffffff,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(*(undefined4 *)((int)puVar8 + -0x24),uVar3);
        }
        else {
          dVar10 = *(double *)((int)puVar8 + -0x24);
        }
        if (in_FPSCR_PR == '\0') {
          dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) -
                                    (float)((ulonglong)dVar13 >> 0x20),SUB84(dVar10,0));
        }
        else {
          dVar10 = dVar10 - dVar13;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar8 + -0x44) = (int)((ulonglong)dVar10 >> 0x20);
        }
        else {
          *(double *)((int)puVar8 + -0x44) = dVar10;
        }
        *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0x11c);
        Vec3_sub((undefined1 *)((int)puVar8 + -0x4c),ar4 + 0x2d4,ar6,ar7,
                 *(undefined4 *)((int)puVar8 + -0x214));
        uVar3 = SUB84(dVar10,0);
        Vec3_assign(ar4 + 0x2a8,(undefined1 *)((int)puVar8 + -0x11c),ar6,ar7);
        Vec3_dtor((undefined1 *)((int)puVar8 + -0x11c),0xffffffff,ar6,ar7);
        ar6 = ar4 + 0x2d4;
        Vec3_assign(ar6,(undefined1 *)((int)puVar8 + -0x4c),ar6,ar7);
        *(int *)((int)puVar8 + -0x20c) = ar4;
        if (in_FPSCR_SZ == '\0') {
          uVar3 = *(undefined4 *)(*(int *)((int)puVar8 + -0x20c) + 0x2b0);
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)puVar8 + -0x20c) + 0x2b0);
        }
        uVar4 = 0x2c4;
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c4),uVar3);
        }
        else {
          dVar13 = *(double *)(ar4 + 0x2c4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = (float)((ulonglong)dVar13 >> 0x20);
          dVar13 = (double)CONCAT44(fVar9,SUB84(dVar13,0) * fVar9);
        }
        else {
          dVar13 = dVar13 * dVar13;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(*(int *)((int)puVar8 + -0x20c) + 0x2b0) = SUB84(dVar13,0);
        }
        else {
          *(undefined8 *)(*(int *)((int)puVar8 + -0x20c) + 0x2b0) = in_xd0;
        }
        *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -300);
        FUN_8c0230f0(ar4 + 0x14,0x2c4,ar6,ar7,*(undefined4 *)((int)puVar8 + -0x214));
        Vec3_ctor_xyz((undefined1 *)((int)puVar8 + -0x13c),uVar4,ar6,ar7);
        FUN_8c022dac((undefined1 *)((int)puVar8 + -300),(undefined1 *)((int)puVar8 + -0x13c),ar6,ar7
                    );
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar8 + -0x1e8) = (int)((ulonglong)dVar13 >> 0x20);
        }
        else {
          *(double *)((int)puVar8 + -0x1e8) = dVar13;
        }
        Vec3_dtor((undefined1 *)((int)puVar8 + -0x13c),0xffffffff,ar6,ar7);
        uVar3 = 0xffffffff;
        Vec3_dtor((undefined1 *)((int)puVar8 + -300),0xffffffff,ar6,ar7);
        Vec3_ctor_xyz((undefined1 *)((int)puVar8 + -0x14c),uVar3,ar6,ar7);
        uVar3 = FUN_8c023334(ar4 + 0x14,(undefined1 *)((int)puVar8 + -0x14c),ar6,ar7);
        *(undefined4 *)((int)puVar8 + -0x1ec) = uVar3;
        *(undefined4 *)((int)puVar8 + -0x1bc) = *(undefined4 *)((int)puVar8 + -0x1ec);
        uVar3 = 0xffffffff;
        Vec3_dtor((undefined1 *)((int)puVar8 + -0x14c),0xffffffff,ar6,ar7);
        if (*(int *)((int)puVar8 + -0x1bc) == 3) {
          Vec3_set_xyz((undefined1 *)((int)puVar8 + -0x158),uVar3,ar6,ar7);
          *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0x168);
          FUN_8c023484(ar4 + 0x2a8,(undefined1 *)((int)puVar8 + -0x158),ar6,ar7,
                       *(undefined4 *)((int)puVar8 + -0x214));
          Vec3_assign(ar4 + 0x2a8,(undefined1 *)((int)puVar8 + -0x168),ar6,ar7);
          Vec3_dtor((undefined1 *)((int)puVar8 + -0x168),0xffffffff,ar6,ar7);
          uVar3 = 0xffffffff;
          object_dtor_delete((undefined1 *)((int)puVar8 + -0x158),0xffffffff,ar6,ar7);
        }
        else if (*(int *)((int)puVar8 + -0x1bc) == 4) {
          Vec3_set_xyz((undefined1 *)((int)puVar8 + -0x174),(undefined1 *)((int)puVar8 + -0x174),ar6
                       ,ar7);
          *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0x184);
          FUN_8c023484(ar4 + 0x2a8,(undefined1 *)((int)puVar8 + -0x174),ar6,ar7,
                       *(undefined4 *)((int)puVar8 + -0x214));
          Vec3_assign(ar4 + 0x2a8,(undefined1 *)((int)puVar8 + -0x184),ar6,ar7);
          Vec3_dtor((undefined1 *)((int)puVar8 + -0x184),0xffffffff,ar6,ar7);
          uVar3 = 0xffffffff;
          object_dtor_delete((undefined1 *)((int)puVar8 + -0x174),0xffffffff,ar6,ar7);
        }
        *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0x194);
        FUN_8c0230f0(ar4 + 0x14,uVar3,ar6,ar7,*(undefined4 *)((int)puVar8 + -0x214));
        *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0x1a4);
        Vec3_normalize((undefined1 *)((int)puVar8 + -0x194),uVar3,ar6,ar7);
        uVar3 = Vec3_assign(ar4 + 0x14,(undefined1 *)((int)puVar8 + -0x1a4),ar6,ar7);
        *(undefined4 *)((int)puVar8 + -0x1f0) = uVar3;
        Vec3_assign(ar4 + 0x80,*(undefined4 *)((int)puVar8 + -0x1f0),ar6,ar7);
        Vec3_dtor((undefined1 *)((int)puVar8 + -0x1a4),0xffffffff,ar6,ar7);
        Vec3_dtor((undefined1 *)((int)puVar8 + -0x194),0xffffffff,ar6,ar7);
        *(undefined4 *)(ar4 + 0x2e8) = 1;
        uVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0xb0,ar6,ar7);
        *(undefined4 *)((int)puVar8 + -500) = uVar3;
        ar7 = *(undefined1 **)((int)puVar8 + -500);
        if (ar7 == (undefined1 *)0x1) {
          *(undefined4 *)(ar4 + 0x40) = 5;
          *(undefined4 *)((int)puVar8 + -0x210) = *(undefined4 *)(ar4 + 0x128);
          FUN_8c031b68(ar4,(*(int *)((int)puVar8 + -0x210) * 2 + *(int *)((int)puVar8 + -0x210)) * 8
                           + -0x73d7fc0c,0x40,1);
          *(undefined4 *)(ar4 + 700) = 0;
          *(undefined4 *)(ar4 + 0x2e8) = 0;
          uVar4 = 0;
          uVar7 = 0xffffffff;
          uVar3 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar7,uVar4);
          *(undefined4 *)(ar4 + 0x2b8) = 2;
          *(undefined4 *)(ar4 + 0x2a4) = 0;
          ar7 = (undefined1 *)0x40;
          ar6 = 5;
          *(undefined4 *)(ar4 + 0x40) = 5;
          uVar3 = 0x2a8;
          Vec3_length_sq(ar4 + 0x2a8,0x2a8,5,0x40);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar8 + -0x1f8) = (int)((ulonglong)dVar13 >> 0x20);
            *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)((int)puVar8 + -0x1f8);
          }
          else {
            *(double *)((int)puVar8 + -0x1f8) = dVar13;
            *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)((int)puVar8 + -0x1f8);
          }
          FUN_8c030eb8(ar4 + 0x1fc,uVar3,ar6,ar7);
          *(undefined4 *)(ar4 + 0x334) = 1;
          *(undefined4 *)(ar4 + 0x214) = 0;
          *(undefined4 *)(ar4 + 0x178) = 1;
          uVar7 = 0;
        }
      }
    }
    Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7);
    *(undefined4 *)((int)puVar8 + -0x1b0) = uVar7;
    Vec3_dtor((undefined1 *)((int)puVar8 + -0x6c),0xffffffff,ar6,ar7);
    Vec3_dtor((undefined1 *)((int)puVar8 + -0x5c),0xffffffff,ar6,ar7);
    Vec3_dtor((undefined1 *)((int)puVar8 + -0x4c),0xffffffff,ar6,ar7);
    Vec3_dtor((undefined1 *)((int)puVar8 + -0x3c),0xffffffff,ar6,ar7);
    Vec3_dtor((undefined1 *)((int)puVar8 + -0x2c),0xffffffff,ar6,ar7);
    uVar3 = *(undefined4 *)((int)puVar8 + -0x1b0);
  }
  else {
    *(undefined4 *)(ar4 + 0x2a4) = 0;
    *(undefined4 *)(ar4 + 0x2e8) = 2;
    *(undefined4 *)(ar4 + 0x214) = 1;
    *(undefined4 *)((int)puVar8 + -0x1ac) = 0;
    Vec3_dtor((undefined1 *)((int)puVar8 + -0x6c),0xffffffff,ar6,ar7);
    Vec3_dtor((undefined1 *)((int)puVar8 + -0x5c),0xffffffff,ar6,ar7);
    Vec3_dtor((undefined1 *)((int)puVar8 + -0x4c),0xffffffff,ar6,ar7);
    Vec3_dtor((undefined1 *)((int)puVar8 + -0x3c),0xffffffff,ar6,ar7);
    Vec3_dtor((undefined1 *)((int)puVar8 + -0x2c),0xffffffff,ar6,ar7);
    uVar3 = *(undefined4 *)((int)puVar8 + -0x1ac);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c0564c4\n.set _FUN_8c0564c4, _FUN_8c0564c4_def\n");
