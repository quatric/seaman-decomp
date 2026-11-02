#include "../decls.h"
undefined4 FUN_8c0a99c4_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar6_00;
  undefined4 ar7_00;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  ulonglong in_dr0;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 in_xd0;
  char cVar10;
  char cVar11;
  int *in_stack_00000000;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [4];
  undefined8 uStack_1c;
  undefined4 uStack_c;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uStack_c = 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_20,Vec3_ctor_zero,ar6,ar7);
  uStack_a0 = 1;
  if (*(int *)(ar4 + 0x2198) == 0) {
    FUN_8c023d7c(ar7,0,ar6_00,ar7_00);
  }
  uVar3 = (uint)in_dr0;
  iVar1 = *(int *)(ar4 + 0x68);
  uVar2 = 5;
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      while( true ) {
        uVar3 = (uint)in_dr0;
        FUN_8c03c314(ar4,FUN_8c03c314,ar6_00,ar7_00);
        in_dr0 = (ulonglong)uVar3;
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x21a0) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x21a0) = in_dr0;
        }
        Vec3_assign(ar4 + 0x2174,ar4 + 0x14,ar6_00,ar7_00);
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x2194) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2194) = in_dr0;
        }
        uVar2 = ar5;
        Vec3_assign(ar4 + 0x54,ar5,ar6_00,ar7_00);
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x58) = in_dr0;
        }
        FUN_8c023d7c(ar4 + 0x21a8,uVar2,ar6_00,ar7_00);
        uVar4 = (undefined4)in_dr0;
        if (ar6 != 0) {
          if (ar6 == 3) {
            ar7_00 = 0;
            ar6_00 = -1;
            uVar2 = 2;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
            if (cVar11 == '\0') {
              in_dr0 = CONCAT44(0x3dcccccd,uVar4);
              *(undefined4 *)(ar4 + 0xa0) = 0x3dcccccd;
            }
            else {
              in_dr0 = 0x8c0268583dcccccd;
              *(undefined8 *)(ar4 + 0xa0) = 0x8c0268583dcccccd;
            }
            in_dr0 = in_dr0 & 0xffffffff;
            if (cVar11 == '\0') {
              *(undefined4 *)(ar4 + 0x28) = 0;
            }
            else {
              *(ulonglong *)(ar4 + 0x28) = in_dr0;
            }
            *(int *)(ar4 + 0x68) = *(int *)(ar4 + 0x68) + 1;
          }
          goto switchD_8c0a9a1a_caseD_1;
        }
        ar7_00 = 0;
        ar6_00 = -1;
        uVar2 = 7;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
        if (cVar11 == '\0') {
          in_dr0 = CONCAT44(0x3a83126f,uVar4);
          *(undefined4 *)(ar4 + 0xa0) = 0x3a83126f;
        }
        else {
          in_dr0 = 0xc716e7003a83126f;
          *(undefined8 *)(ar4 + 0xa0) = 0xc716e7003a83126f;
        }
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = in_dr0;
        }
        *(undefined4 *)(ar4 + 0x68) = 2;
switchD_8c0a9a1a_caseD_2:
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
        uVar3 = (uint)in_dr0;
        if (ar6 != 3) break;
        *(undefined4 *)(ar4 + 0x68) = 0;
        *(undefined4 *)(ar4 + 0x21a4) = 0;
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x18) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x18) = in_dr0 & 0xffffffff;
        }
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x2194) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2194) = in_dr0;
        }
      }
      Vec3_set_xyz(auStack_2c,uVar2,ar6_00,ar7_00);
      FUN_8c023484(ar4 + 0x14,auStack_2c,ar6_00,ar7_00,auStack_3c);
      Vec3_assign(ar4 + 0x14,auStack_3c,ar6_00,ar7_00);
      Vec3_dtor(auStack_3c,0xffffffff,ar6_00,ar7_00);
      uVar2 = 0xffffffff;
      object_dtor_delete(auStack_2c,0xffffffff,ar6_00,ar7_00);
      if ((ar6 != 1) && (ar6 != 2)) {
        FUN_8c03207c(ar4,uVar2,ar6_00,ar7_00);
        FUN_8c0324ac(ar4,uVar2,ar6_00,ar7_00);
        break;
      }
      *(undefined4 *)(ar4 + 0x68) = 5;
      if (cVar11 == '\0') {
        *(undefined4 *)(ar4 + 0x2194) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2194) = (ulonglong)uVar3;
      }
      iVar1 = ar4 + 0x14;
      Vec3_assign(ar4 + 0x2174,iVar1,ar6_00,ar7_00);
      FUN_8c031700(ar4,iVar1,ar6_00,ar7_00);
    case 5:
      *(undefined4 *)(ar4 + 0x21a4) = 2;
      break;
    case 1:
switchD_8c0a9a1a_caseD_1:
      uVar3 = (uint)in_dr0;
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
      if (ar6 == 0) {
        FUN_8c073c9c(ar4,uVar2,ar6_00,ar7_00);
        *(undefined4 *)(ar4 + 0x68) = 0;
        break;
      }
      if (ar6 != 1) {
        FUN_8c0324ac(ar4,uVar2,ar6_00,ar7_00);
        break;
      }
      *(undefined4 *)(ar4 + 0x68) = 3;
      if (cVar11 == '\0') {
        *(undefined4 *)(ar4 + 0x2194) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2194) = (ulonglong)uVar3;
      }
      if (cVar11 == '\0') {
        *(undefined4 *)(ar4 + 0x94) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x94) = (ulonglong)uVar3;
      }
      uVar6 = (ulonglong)uVar3;
      if (cVar11 == '\0') {
        *(undefined4 *)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0xa0) = uVar6;
      }
      *(undefined4 *)(ar4 + 0x21a4) = 1;
      if (*(char *)(ar4 + 0x210) == '\x01') {
        ar7_00 = 0xd;
        ar6_00 = 1;
        (**(code **)(*in_stack_00000000 + 0xd0))(in_stack_00000000,ar5,1,0xd);
        uVar3 = (uint)uVar6;
        uVar2 = ar5;
      }
    case 3:
      uVar6 = (ulonglong)uVar3;
      if (cVar11 == '\0') {
        *(undefined4 *)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0xa0) = uVar6;
      }
      FUN_8c073c9c(ar4,uVar2,ar6_00,ar7_00);
      uVar7 = uVar6 & 0xffffffff;
      if (cVar11 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = uVar7;
      }
      if (ar6 == 1) {
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
        uVar3 = (uint)uVar7;
        iVar1 = ar4 + 0x14;
        Vec3_assign(auStack_20,iVar1,ar6_00,ar7_00);
        uVar6 = (ulonglong)uVar3;
        if (cVar11 == '\0') {
          uStack_1c = (ulonglong)(*(uint*)((uchar*)&uStack_1c+4)) << 0x20;
          uVar6 = uStack_1c;
        }
        uStack_1c = uVar6;
        Vec3_length(auStack_20,iVar1,ar6_00,ar7_00);
        if (cVar11 == '\0') {
          dVar8 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x2194));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x2194);
          dVar8 = 1.81732883613961e-310;
        }
        if (cVar10 == '\0') {
          fVar5 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar8 + dVar8,0);
        }
        if (cVar11 == '\0') {
          *(float *)(ar4 + 0x2194) = fVar5;
          fVar5 = *(float *)(ar4 + 0x2194);
        }
        else {
          *(undefined8 *)(ar4 + 0x2194) = in_xd0;
        }
        if (cVar10 != '\0' || 1.0 <= fVar5) {
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0x2194) = 0x3f800000;
          }
          else {
            *(undefined8 *)(ar4 + 0x2194) = CONCAT44(0x3f800000,fVar5);
          }
        }
        if (cVar11 == '\0') {
          fVar5 = *(float *)(ar4 + 0x2194);
        }
        if (cVar10 == '\0') {
          dVar8 = (double)CONCAT44(1.0 - fVar5,fVar5);
        }
        else {
          dVar8 = (double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5);
        }
        uVar2 = (undefined4)((ulonglong)dVar8 >> 0x20);
        uStack_a8 = uVar2;
        if (cVar11 != '\0') {
          uStack_a8 = SUB84(dVar8,0);
          uStack_a4 = uVar2;
        }
        Vec3_scale(ar4 + 0x2174,&uStack_a8,ar6_00,ar7_00,auStack_4c);
        if (cVar11 == '\0') {
          uStack_ac = *(undefined4 *)(ar4 + 0x2194);
          uVar9 = CONCAT44(uStack_ac,SUB84(dVar8,0));
        }
        else {
          uVar9 = *(undefined8 *)(ar4 + 0x2194);
          uStack_ac = (undefined4)uVar9;
          uStack_a8 = (undefined4)((ulonglong)uVar9 >> 0x20);
        }
        fVar5 = (float)uVar9;
        Vec3_scale(auStack_20,&uStack_ac,ar6_00,ar7_00,auStack_5c);
        Vec3_add(auStack_4c,auStack_5c,ar6_00,ar7_00,auStack_6c);
        Vec3_assign(ar4 + 0x14,auStack_6c,ar6_00,ar7_00);
        Vec3_dtor(auStack_6c,0xffffffff,ar6_00,ar7_00);
        Vec3_dtor(auStack_5c,0xffffffff,ar6_00,ar7_00);
        Vec3_dtor(auStack_4c,0xffffffff,ar6_00,ar7_00);
        if (cVar11 == '\0') {
          fVar5 = *(float *)(ar4 + 0x2194);
        }
        if (fVar5 == 1.0) {
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0x2194) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x2194) = (ulonglong)(uint)fVar5;
          }
          *(undefined4 *)(ar4 + 0x21a4) = 2;
          *(undefined4 *)(ar4 + 0x40) = 5;
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0x94) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x94) = (ulonglong)(uint)fVar5;
          }
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0xa0) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0xa0) = (ulonglong)(uint)fVar5;
          }
          *(undefined4 *)(ar4 + 0x68) = 0;
        }
        Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7_00);
      }
      else {
        *(undefined4 *)(ar4 + 0x68) = 0;
        *(undefined4 *)(ar4 + 0x21a4) = 0;
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x18) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x18) = uVar6 & 0xffffffff;
        }
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x2194) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2194) = uVar6 & 0xffffffff;
        }
      }
      break;
    case 2:
      goto switchD_8c0a9a1a_caseD_2;
    case 4:
      in_dr0 = in_dr0 & 0xffffffff;
      if (cVar11 == '\0') {
        *(undefined4 *)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0xa0) = in_dr0;
      }
      FUN_8c073c9c(ar4,5,ar6_00,ar7_00);
      in_dr0 = in_dr0 & 0xffffffff;
      if (cVar11 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = in_dr0;
      }
      FUN_8c022d04(ar4 + 0x6c,uVar2,ar6_00,ar7_00);
      fVar5 = (float)in_dr0;
      if (ar6 == 1) {
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
        if (cVar11 == '\0') {
          fVar5 = *(float *)(ar4 + 0x18);
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x18);
        }
        uVar6 = (ulonglong)(uint)fVar5;
        if (fVar5 != 0.0) {
          iVar1 = ar4 + 0x14;
          Vec3_assign(auStack_20,iVar1,ar6_00,ar7_00);
          uVar6 = uVar6 & 0xffffffff;
          if (cVar11 == '\0') {
            uStack_1c = uStack_1c & 0xffffffff00000000;
            uVar6 = uStack_1c;
          }
          uStack_1c = uVar6;
          Vec3_length(auStack_20,iVar1,ar6_00,ar7_00);
          if (cVar11 == '\0') {
            dVar8 = (double)CONCAT44(0x3d4ccccd,*(undefined4 *)(ar4 + 0x2194));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x2194);
            dVar8 = 1.81732800723501e-310;
          }
          if (cVar10 == '\0') {
            fVar5 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            fVar5 = SUB84(dVar8 + dVar8,0);
          }
          if (cVar11 == '\0') {
            *(float *)(ar4 + 0x2194) = fVar5;
            fVar5 = *(float *)(ar4 + 0x2194);
          }
          else {
            *(undefined8 *)(ar4 + 0x2194) = in_xd0;
          }
          if (cVar10 != '\0' || 1.0 <= fVar5) {
            if (cVar11 == '\0') {
              *(undefined4 *)(ar4 + 0x2194) = 0x3f800000;
            }
            else {
              *(undefined8 *)(ar4 + 0x2194) = CONCAT44(0x3f800000,fVar5);
            }
          }
          if (cVar11 == '\0') {
            fVar5 = *(float *)(ar4 + 0x2194);
          }
          if (cVar10 == '\0') {
            dVar8 = (double)CONCAT44(1.0 - fVar5,fVar5);
          }
          else {
            dVar8 = (double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5);
          }
          uVar2 = (undefined4)((ulonglong)dVar8 >> 0x20);
          uStack_b0 = uVar2;
          if (cVar11 != '\0') {
            uStack_b0 = SUB84(dVar8,0);
            uStack_ac = uVar2;
          }
          Vec3_scale(ar4 + 0x2174,&uStack_b0,ar6_00,ar7_00,auStack_7c);
          if (cVar11 == '\0') {
            uStack_b4 = *(undefined4 *)(ar4 + 0x2194);
            uVar9 = CONCAT44(uStack_b4,SUB84(dVar8,0));
          }
          else {
            uVar9 = *(undefined8 *)(ar4 + 0x2194);
            uStack_b4 = (undefined4)uVar9;
            uStack_b0 = (undefined4)((ulonglong)uVar9 >> 0x20);
          }
          fVar5 = (float)uVar9;
          Vec3_scale(auStack_20,&uStack_b4,ar6_00,ar7_00,auStack_8c);
          Vec3_add(auStack_7c,auStack_8c,ar6_00,ar7_00,auStack_9c);
          Vec3_assign(ar4 + 0x14,auStack_9c,ar6_00,ar7_00);
          Vec3_dtor(auStack_9c,0xffffffff,ar6_00,ar7_00);
          Vec3_dtor(auStack_8c,0xffffffff,ar6_00,ar7_00);
          Vec3_dtor(auStack_7c,0xffffffff,ar6_00,ar7_00);
          if (cVar11 == '\0') {
            fVar5 = *(float *)(ar4 + 0x2194);
          }
          if (fVar5 == 1.0) {
            if (cVar11 == '\0') {
              *(undefined4 *)(ar4 + 0x2194) = 0;
            }
            else {
              *(ulonglong *)(ar4 + 0x2194) = (ulonglong)(uint)fVar5;
            }
          }
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x68) = 0;
        *(undefined4 *)(ar4 + 0x21a4) = 0;
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x18) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x18) = in_dr0 & 0xffffffff;
        }
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x2194) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2194) = in_dr0 & 0xffffffff;
        }
      }
    }
  }
  uStack_a4 = 0;
  Vec3_dtor(auStack_20,0xffffffff,ar6_00,ar7_00);
  return uStack_a4;
}

__asm__(".globl _FUN_8c0a99c4\n.set _FUN_8c0a99c4, _FUN_8c0a99c4_def\n");
