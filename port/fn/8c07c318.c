#include "../decls.h"
undefined4 FUN_8c07c318_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  double *pdVar4;
  undefined4 uVar5;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float fVar6;
  double dVar7;
  double dVar8;
  double in_xd0;
  char cVar9;
  char cVar10;
  undefined8 uStack_a4;
  undefined8 uStack_90;
  undefined8 uStack_84;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  cVar10 = '\0';
  cVar9 = '\0';
  if (*(int *)(ar4 + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    uVar2 = ar6;
    ar6_00 = ar6;
    ar7_00 = ar7;
    Vec3_sub(ar5,ar6,ar6,ar7,auStack_44);
    uVar2 = Vec3_length(auStack_44,uVar2,ar6_00,ar7_00);
    Vec3_ctor_copy(auStack_24,uVar2,ar6_00,ar7_00);
    uVar5 = 0xffffffff;
    Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7_00);
    iVar3 = *(int *)(ar4 + 0x40);
    if ((iVar3 == 1) || (iVar3 == 3)) {
      if (*(int *)(ar4 + 0x44) == 1) {
        FUN_8c031fc4(ar4,uVar5,ar6_00,ar7_00);
      }
      pdVar4 = (double *)(ar4 + 0x2c);
      if (cVar10 != '\0') {
        in_xd0 = *pdVar4;
        pdVar4 = (double *)(ar4 + 0x30);
      }
      dVar8 = *pdVar4;
      if (cVar9 == '\0') {
        fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 / dVar8,0);
      }
      if (cVar10 == '\0') {
        uStack_84 = (double)CONCAT44((*(uint*)((uchar*)&uStack_84+4)),fVar6);
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x18),uStack_20);
        dVar8 = in_xd0;
      }
      else {
        dVar8 = (double)CONCAT44(uStack_1c,uStack_20);
        dVar7 = *(double *)(ar4 + 0x18);
        uStack_84 = in_xd0;
      }
      if (cVar9 == '\0') {
        fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      dVar7 = uStack_84;
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44((undefined4)uStack_84,fVar6);
      }
      if (cVar9 == '\0') {
        fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 * dVar7,0);
      }
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x18),fVar6);
      }
      else {
        dVar7 = *(double *)(ar4 + 0x18);
      }
      if (cVar9 == '\0') {
        fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar10 == '\0') {
        *(float *)(ar4 + 0x18) = fVar6;
      }
      else {
        *(double *)(ar4 + 0x18) = dVar8;
      }
      vec3_copy_8c02b5fc(auStack_50,ar7,ar6_00,ar7_00);
      FUN_8c023484(ar4 + 0x14,auStack_50,ar6_00,ar7_00,auStack_60);
      Vec3_assign(ar4 + 0x14,auStack_60,ar6_00,ar7_00);
      Vec3_dtor(auStack_60,0xffffffff,ar6_00,ar7_00);
      uVar5 = 0xffffffff;
      object_dtor_delete(auStack_50,0xffffffff,ar6_00,ar7_00);
      Vec3_length(ar4 + 0x14,uVar5,ar6_00,ar7_00);
      pdVar4 = (double *)(ar4 + 0x2c);
      if (cVar10 != '\0') {
        dVar8 = *pdVar4;
        pdVar4 = (double *)(ar4 + 0x30);
      }
      uStack_90 = *pdVar4;
      if (SUB84(uStack_90,0) != (float)((ulonglong)uStack_90 >> 0x20)) {
        if (cVar10 == '\0') {
          dVar7 = (double)(ulonglong)*(uint *)(ar4 + 0x28);
        }
        else {
          dVar8 = *(double *)(ar4 + 0x28);
          dVar7 = uStack_90;
        }
        uStack_90 = (double)((ulonglong)dVar7 & 0xffffffff);
        if (cVar9 == '\0' && 0.0 < SUB84(dVar7,0)) {
          if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            dVar8 = *(double *)(ar4 + 0x28);
            dVar7 = *(double *)(ar4 + 0x24);
          }
          if (cVar9 == '\0') {
            fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar7 / dVar7,0);
          }
          if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c),fVar6);
          }
          else {
            dVar7 = *(double *)(ar4 + 0x2c);
          }
          if (cVar9 == '\0') {
            fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar7 + dVar7,0);
          }
          pdVar4 = (double *)(ar4 + 0x30);
          if (cVar10 == '\0') {
            *(float *)(ar4 + 0x2c) = fVar6;
            pdVar4 = (double *)(ar4 + 0x2c);
          }
          else {
            *(double *)(ar4 + 0x2c) = dVar8;
            dVar8 = *(double *)(ar4 + 0x2c);
          }
          uStack_90 = *pdVar4;
          if (cVar9 == '\0' && (float)((ulonglong)uStack_90 >> 0x20) < SUB84(uStack_90,0)) {
            if (cVar10 == '\0') {
              uVar5 = *(undefined4 *)(ar4 + 0x30);
              uStack_90 = (double)CONCAT44(uVar5,SUB84(uStack_90,0));
              *(undefined4 *)(ar4 + 0x2c) = uVar5;
            }
            else {
              uStack_90 = *(double *)(ar4 + 0x30);
              *(double *)(ar4 + 0x2c) = uStack_90;
            }
          }
        }
      }
      FUN_8c022fc0(ar6,ar5,ar6_00,ar7_00);
      if (cVar10 == '\0') {
        uStack_90 = (double)CONCAT44(uVar2,(int)((ulonglong)uStack_90 >> 0x20));
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),*(undefined4 *)(ar4 + 0x28));
      }
      else {
        dVar8 = *(double *)(ar4 + 0x28);
        dVar7 = *(double *)(ar4 + 0x48);
      }
      if (cVar9 == '\0') {
        fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar10 == '\0') {
        uStack_90 = (double)CONCAT44((undefined4)uStack_90,fVar6);
      }
      if (cVar9 != '\0' || (float)((ulonglong)uStack_90 >> 0x20) <= SUB84(uStack_90,0)) {
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
          dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(uStack_90,0));
          dVar8 = *(double *)(ar4 + 0x28);
          dVar7 = *(double *)(ar4 + 0x38);
        }
        if (cVar9 == '\0') {
          fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 / dVar7,0);
        }
        if (cVar10 == '\0') {
          *(float *)(ar4 + 0x3c) = fVar6;
        }
        else {
          *(double *)(ar4 + 0x3c) = dVar8;
        }
        *(undefined4 *)(ar4 + 0x40) = 4;
        uVar1 = 0;
      }
    }
    else if (iVar3 == 4) {
      uVar1 = 0;
      FUN_8c0230f0(ar4 + 0x14,uVar5,ar6_00,ar7_00,auStack_70);
      uVar2 = Vec3_length(auStack_70,uVar5,ar6_00,ar7_00);
      Vec3_ctor_copy(auStack_34,uVar2,ar6_00,ar7_00);
      Vec3_dtor(auStack_70,0xffffffff,ar6_00,ar7_00);
      if (cVar10 == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x2c));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x2c);
        dVar8 = *(double *)(ar4 + 0x38);
      }
      if (cVar9 == '\0') {
        fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 / dVar8,0);
      }
      dVar8 = in_xd0;
      if (cVar10 == '\0') {
        uStack_84 = (double)CONCAT44((*(uint*)((uchar*)&uStack_84+4)),fVar6);
        dVar8 = uStack_84;
      }
      uStack_84 = dVar8;
      Vec3_scale(auStack_34,&uStack_84,ar6_00,ar7_00,(int)&uStack_84 + 4);
      FUN_8c023aa0(ar4 + 0x14,(int)&uStack_84 + 4,ar6_00,ar7_00);
      uVar2 = 0xffffffff;
      Vec3_dtor((int)&uStack_84 + 4,0xffffffff,ar6_00,ar7_00);
      Vec3_length(ar4 + 0x14,uVar2,ar6_00,ar7_00);
      if (cVar10 == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x3c),*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x28);
        dVar8 = *(double *)(ar4 + 0x3c);
      }
      if (cVar9 == '\0') {
        fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 - dVar8,0);
      }
      uStack_a4 = in_xd0;
      if (cVar10 == '\0') {
        uStack_a4 = (double)CONCAT44(ar4,fVar6);
      }
      if (cVar10 == '\0') {
        *(undefined4 *)((*(uint*)((uchar*)&uStack_a4+4)) + 0x28) = (undefined4)uStack_a4;
        uStack_a4 = (double)((ulonglong)uStack_a4 & 0xffffffff);
      }
      else {
        *(double *)((*(uint*)((uchar*)&uStack_a4+4)) + 0x28) = uStack_a4;
      }
      if (cVar9 != '\0' || SUB84(uStack_a4,0) <= 0.0) {
        *(undefined4 *)(ar4 + 0x40) = 0;
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)uStack_a4 & 0xffffffff;
        }
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(uStack_a4,0));
        }
      }
      Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7_00);
    }
    Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7_00);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c07c318\n.set _FUN_8c07c318, _FUN_8c07c318_def\n");
