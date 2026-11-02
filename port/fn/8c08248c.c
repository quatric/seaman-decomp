#include "../decls.h"
undefined4 FUN_8c08248c_def(int ar4,int ar5,undefined4 *ar6,int *ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined1 *ar5_00;
  undefined4 uVar5;
  int *ar7_00;
  undefined4 uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  double in_xd0;
  char cVar11;
  char cVar12;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [12];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar6 = 1;
  ar7_00 = ar7;
  puVar2 = ar6;
  Vec3_ctor_zero(&uStack_24,ar5,ar6,ar7);
  pcVar4 = Vec3_ctor_zero;
  Vec3_ctor_zero(auStack_34,Vec3_ctor_zero,ar6,ar7_00);
  Vec3_ctor_zero(auStack_44,pcVar4,ar6,ar7_00);
  if (cVar12 == '\0') {
    dVar8 = (double)CONCAT44(0x3f99999a,*(undefined4 *)(ar4 + 0x48));
  }
  else {
    in_xd0 = *(double *)(ar4 + 0x48);
    dVar8 = 7.971355768799707e+24;
  }
  if (cVar11 == '\0') {
    fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (cVar12 == '\0') {
    dVar8 = (double)CONCAT44(0x451a6000,fVar7);
  }
  else {
    dVar8 = 8.23907165070957e-312;
  }
  if (cVar11 == '\0') {
    dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - SUB84(dVar8,0),SUB84(dVar8,0));
  }
  else {
    dVar8 = dVar8 - dVar8;
  }
  uVar5 = (undefined4)((ulonglong)dVar8 >> 0x20);
  uStack_24 = uVar5;
  if (cVar12 != '\0') {
    uStack_24 = SUB84(dVar8,0);
    fStack_20 = (float)uVar5;
  }
  (**(code **)(*ar7 + 0x184))(ar7,*ar7,ar6,ar7_00);
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x42480000,(int)((ulonglong)dVar8 >> 0x20));
    dVar8 = in_xd0;
  }
  else {
    dVar9 = 5.69244280312755e-312;
  }
  if (cVar11 == '\0') {
    fStack_20 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fStack_20 = SUB84(dVar9 - dVar9,0);
  }
  if (cVar12 == '\0') {
    uVar5 = 0x448e8000;
    fVar7 = fStack_20;
  }
  else {
    fStack_20 = SUB84(dVar8,0);
    fVar7 = 1140.0;
    uVar5 = 0x110;
    uStack_18 = 0x110;
  }
  uStack_1c = 0x448e8000;
  pcVar4 = Vec3_ctor_xyz;
  Vec3_ctor_xyz(auStack_54,Vec3_ctor_xyz,ar6,ar7_00);
  if (*(int *)(ar4 + 0x128) < 7) {
    Vec3_dtor(auStack_54,0xffffffff,ar6,ar7_00);
    Vec3_dtor(auStack_44,0xffffffff,ar6,ar7_00);
    Vec3_dtor(auStack_34,0xffffffff,ar6,ar7_00);
    Vec3_dtor(&uStack_24,0xffffffff,ar6,ar7_00);
    uVar6 = 0;
  }
  else {
    (**(code **)(*ar7 + 0x184))(ar7,pcVar4,ar6,ar7_00);
    if (cVar12 == '\0') {
      uVar10 = CONCAT44(0x43200000,uVar5);
    }
    else {
      dVar8 = (double)CONCAT44(uVar5,fVar7);
      uVar10 = 0xd843200000;
    }
    if (cVar11 != '\0' || (float)uVar10 <= (float)(uVar10 >> 0x20)) {
      iVar3 = *(int *)(ar4 + 300);
      if ((iVar3 < 5) && (-1 < iVar3)) {
                    
        switch(iVar3) {
        case 0:
          if (cVar12 == '\0') {
            dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
          }
          else {
            dVar8 = *(double *)(ar4 + 0x28);
            dVar9 = 3.73996784729797e-312;
          }
          if (cVar11 == '\0') {
            fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar9 * dVar9,0);
          }
          if (cVar12 == '\0') {
            *(float *)(ar4 + 0x28) = fVar7;
          }
          else {
            *(double *)(ar4 + 0x28) = dVar8;
          }
          iVar3 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pcVar4,ar6,ar7_00);
          if (iVar3 == 1) {
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            *(undefined4 *)(ar4 + 0x40) = 5;
          }
          break;
        case 1:
          ar6 = &uStack_24;
          iVar3 = pure_virtual_stub(ar4,ar5,ar6,ar7_00);
          if (iVar3 == 0) {
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            *(undefined4 *)(ar4 + 0x40) = 5;
            *(undefined4 *)(ar4 + 0x2b4) = 0;
            *(undefined4 *)(ar4 + 0x2b0) = 0;
            if (cVar12 == '\0') {
              *(undefined4 *)(ar4 + 0x2c) = 0;
            }
            else {
              *(ulonglong *)(ar4 + 0x2c) = uVar10 & 0xffffffff;
            }
            *(undefined4 *)(ar4 + 0x294) = 0;
            *(undefined4 *)(ar4 + 0x218) = 0xe;
          }
          break;
        case 2:
          if (cVar12 == '\0') {
            dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
          }
          else {
            dVar8 = *(double *)(ar4 + 0x28);
            dVar9 = 4.24924683712963e-312;
          }
          if (cVar11 == '\0') {
            fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar9 * dVar9,0);
          }
          if (cVar12 == '\0') {
            *(float *)(ar4 + 0x28) = fVar7;
          }
          else {
            *(double *)(ar4 + 0x28) = dVar8;
          }
          FUN_8c0230f0(ar4 + 0x14,pcVar4,ar6,ar7_00,auStack_64);
          FUN_8c082378(ar4,auStack_64,ar6,ar7_00);
          uVar5 = 0xffffffff;
          Vec3_dtor(auStack_64,0xffffffff,ar6,ar7_00);
          vec3_clear(ar4 + 700,uVar5,ar6,ar7_00);
          if (cVar12 == '\0') {
            dVar9 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),fStack_20);
          }
          else {
            dVar8 = (double)CONCAT44(uStack_1c,fStack_20);
            dVar9 = *(double *)(ar5 + 4);
          }
          if (cVar11 == '\0') {
            fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar9 - dVar9,0);
          }
          if (cVar12 == '\0') {
            dVar9 = (double)CONCAT44(0x3c23d70a,fVar7);
          }
          else {
            dVar9 = 3.73969762439725e-312;
          }
          if (cVar11 == '\0') {
            fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar9 * dVar9,0);
          }
          if (cVar12 == '\0') {
            *(float *)(ar4 + 0x2c0) = fVar7;
          }
          else {
            *(double *)(ar4 + 0x2c0) = dVar8;
          }
          iVar3 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar5,ar6,ar7_00);
          if ((iVar3 == 1) &&
             (iVar3 = *(int *)(ar4 + 0x294), *(int *)(ar4 + 0x294) = iVar3 + 1, 0 < iVar3)) {
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            *(undefined4 *)(ar4 + 0x2b4) = 0;
          }
          break;
        case 3:
          if (cVar12 == '\0') {
            dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
          }
          else {
            dVar8 = *(double *)(ar4 + 0x28);
            dVar9 = 1.4859225791956e-311;
          }
          if (cVar11 == '\0') {
            fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar9 * dVar9,0);
          }
          if (cVar12 == '\0') {
            *(float *)(ar4 + 0x28) = fVar7;
          }
          else {
            *(double *)(ar4 + 0x28) = dVar8;
          }
          vec3_clear(ar4 + 700,pcVar4,ar6,ar7_00);
          if (cVar12 == '\0') {
            dVar9 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),fStack_20);
          }
          else {
            dVar8 = (double)CONCAT44(uStack_1c,fStack_20);
            dVar9 = *(double *)(ar5 + 4);
          }
          if (cVar11 == '\0') {
            fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar9 - dVar9,0);
          }
          if (cVar12 == '\0') {
            dVar9 = (double)CONCAT44(0x3c23d70a,fVar7);
          }
          else {
            dVar9 = 4.58849594078336e-312;
          }
          if (cVar11 == '\0') {
            fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar9 * dVar9,0);
          }
          if (cVar12 == '\0') {
            *(float *)(ar4 + 0x2c0) = fVar7;
          }
          else {
            *(double *)(ar4 + 0x2c0) = dVar8;
          }
          Vec3_ctor_copy(auStack_74,auStack_54,ar6,ar7_00);
          ar6 = (undefined4 *)0x1;
          iVar3 = FUN_8c0811b4(ar4,auStack_74,1,ar7_00);
          Vec3_dtor(auStack_74,0xffffffff,ar6,ar7_00);
          if (iVar3 == 0) {
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            ar7_00 = (int *)0x0;
            ar6 = (undefined4 *)0xffffffff;
            uVar5 = 0x32;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x32,0xffffffff,0);
            uVar5 = FUN_8c026db0(ar4,uVar5,ar6,ar7_00);
            uVar1 = FUN_8c03c0f0(ar4 + 0xb0,uVar5,ar6,ar7_00);
            puVar2 = (undefined4 *)deref_u32(uVar1,uVar5,ar6,ar7_00);
            uVar1 = puVar2[1];
            *(undefined4 *)(ar4 + 0xb4) = *puVar2;
            *(undefined4 *)(ar4 + 0xb8) = uVar1;
            *(undefined4 *)(ar4 + 0xbc) = puVar2[2];
            *(undefined **)(ar4 + 0xb4) = &DAT_8c1378e8;
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,ar6,ar7_00);
            *(undefined4 *)(ar4 + 0x2b4) = 0;
            vec3_clear(ar4 + 0x244,uVar5,ar6,ar7_00);
            if (cVar12 == '\0') {
              *(undefined4 *)(ar4 + 0x2c) = 0;
            }
            else {
              *(ulonglong *)(ar4 + 0x2c) = (ulonglong)(uint)fVar7;
            }
          }
          break;
        case 4:
          FUN_8c031748(ar4,pcVar4,ar6,ar7_00);
          *(undefined4 *)(ar4 + 0x178) = 1;
          *(undefined4 *)(ar4 + 0x2cc) = 1;
          CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar4,ar6,ar7_00,puVar2);
          FUN_8c034384(ar4 + 0xb0,**(undefined4 **)(ar4 + 0xb4),ar6,ar7_00);
          Vec3_assign(auStack_34,auStack_84,ar6,ar7_00);
          Vec3_dtor(auStack_84,0xffffffff,ar6,ar7_00);
          Vec3_sub(auStack_34,ar4 + 0x244,ar6,ar7_00,auStack_94);
          Vec3_assign(auStack_44,auStack_94,ar6,ar7_00);
          Vec3_dtor(auStack_94,0xffffffff,ar6,ar7_00);
          ar5_00 = auStack_34;
          Vec3_assign(ar4 + 0x244,ar5_00,ar6,ar7_00);
          Vec3_ctor_xyz(auStack_a4,ar5_00,ar6,ar7_00);
          iVar3 = FUN_8c023d04(auStack_44,auStack_a4,ar6,ar7_00);
          Vec3_dtor(auStack_a4,0xffffffff,ar6,ar7_00);
          if (iVar3 != 0) {
            vec3_copy_8c02b5fc(auStack_b0,puVar2,ar6,ar7_00);
            FUN_8c023484(auStack_44,auStack_b0,ar6,ar7_00,auStack_c0);
            Vec3_assign(ar4 + 700,auStack_c0,ar6,ar7_00);
            Vec3_dtor(auStack_c0,0xffffffff,ar6,ar7_00);
            object_dtor_delete(auStack_b0,0xffffffff,ar6,ar7_00);
          }
          iVar3 = CAnimBody_AdvanceFrame_wrapper
                            (ar4 + 0xb0,CAnimBody_AdvanceFrame_wrapper,ar6,ar7_00);
          if (iVar3 == 1) {
            *(undefined4 *)(ar4 + 0x178) = 0;
            *(undefined4 *)(ar4 + 0x2cc) = 0;
            uVar6 = 0;
            uVar5 = 0;
            *(undefined4 *)(ar4 + 300) = 0;
            vec3_clear(ar4 + 0x244,0,ar6,ar7_00);
            vec3_clear(ar4 + 700,uVar5,ar6,ar7_00);
            ar7_00 = (int *)0x0;
            ar6 = (undefined4 *)0xffffffff;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,ar6,ar7_00);
            FUN_8c03c314(ar4,FUN_8c03c314,ar6,ar7_00);
            *(undefined4 *)(ar4 + 0x218) = 0xffffffff;
          }
        }
      }
      Vec3_dtor(auStack_54,0xffffffff,ar6,ar7_00);
      Vec3_dtor(auStack_44,0xffffffff,ar6,ar7_00);
      Vec3_dtor(auStack_34,0xffffffff,ar6,ar7_00);
      Vec3_dtor(&uStack_24,0xffffffff,ar6,ar7_00);
    }
    else {
      Vec3_dtor(auStack_54,0xffffffff,ar6,ar7_00);
      Vec3_dtor(auStack_44,0xffffffff,ar6,ar7_00);
      Vec3_dtor(auStack_34,0xffffffff,ar6,ar7_00);
      Vec3_dtor(&uStack_24,0xffffffff,ar6,ar7_00);
      uVar6 = 0;
    }
  }
  return uVar6;
}

__asm__(".globl _FUN_8c08248c\n.set _FUN_8c08248c, _FUN_8c08248c_def\n");
