#include "../decls.h"
undefined4 FUN_8c097ba4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double in_xd0;
  char cVar8;
  char cVar9;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar3 = ar6;
  ar6_00 = ar6;
  Vec3_sub(ar5,ar6,ar6,ar7,auStack_34);
  Vec3_normalize(auStack_34,uVar3,ar6_00,ar7);
  Vec3_ctor_copy(auStack_24,auStack_44,ar6_00,ar7);
  Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
  uVar3 = 1;
  if (*(int *)(ar4 + 0x40) == 0) {
    Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
    uVar3 = 0;
  }
  else {
    if ((*(int *)(ar4 + 0x40) == 1) || (*(int *)(ar4 + 0x40) == 3)) {
      if (*(int *)(ar4 + 0x44) == 1) {
        FUN_8c031fc4(ar4,uVar2,ar6_00,ar7);
      }
      pdVar1 = (double *)(ar4 + 0x2c);
      if (cVar9 != '\0') {
        in_xd0 = *pdVar1;
        pdVar1 = (double *)(ar4 + 0x30);
      }
      dVar5 = *pdVar1;
      if (cVar8 == '\0') {
        fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 / dVar5,0);
      }
      dVar5 = in_xd0;
      if (cVar9 == '\0') {
        uStack_88 = (double)CONCAT44((*(uint*)((uchar*)&uStack_88+4)),fVar4);
        dVar5 = uStack_88;
      }
      uStack_88 = dVar5;
      Vec3_scale(auStack_24,&uStack_88,ar6_00,ar7,auStack_54);
      Vec3_add(ar4 + 0x14,auStack_54,ar6_00,ar7,auStack_64);
      FUN_8c023aa0(ar4 + 0x14,auStack_64,ar6_00,ar7);
      Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
      Vec3_normalize(ar4 + 0x14,uVar2,ar6_00,ar7);
      Vec3_assign(ar4 + 0x14,auStack_74,ar6_00,ar7);
      Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
      pdVar1 = (double *)(ar4 + 0x2c);
      if (cVar9 != '\0') {
        in_xd0 = *pdVar1;
        pdVar1 = (double *)(ar4 + 0x30);
      }
      dVar5 = *pdVar1;
      if (SUB84(dVar5,0) != (float)((ulonglong)dVar5 >> 0x20)) {
        if (cVar9 == '\0') {
          dVar5 = (double)(ulonglong)*(uint *)(ar4 + 0x28);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x28);
        }
        if (cVar8 == '\0' && 0.0 < SUB84(dVar5,0)) {
          if (cVar9 == '\0') {
            dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x28);
            dVar5 = *(double *)(ar4 + 0x24);
          }
          if (cVar8 == '\0') {
            fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar5 / dVar5,0);
          }
          if (cVar9 == '\0') {
            dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c),fVar4);
          }
          else {
            dVar5 = *(double *)(ar4 + 0x2c);
          }
          if (cVar8 == '\0') {
            fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar5 + dVar5,0);
          }
          if (cVar9 == '\0') {
            *(float *)(ar4 + 0x2c) = fVar4;
          }
          else {
            *(double *)(ar4 + 0x2c) = in_xd0;
          }
        }
        pdVar1 = (double *)(ar4 + 0x2c);
        if (cVar9 != '\0') {
          in_xd0 = *pdVar1;
          pdVar1 = (double *)(ar4 + 0x30);
        }
        dVar5 = *pdVar1;
        if (cVar8 == '\0' && (float)((ulonglong)dVar5 >> 0x20) < SUB84(dVar5,0)) {
          if (cVar9 == '\0') {
            uVar2 = *(undefined4 *)(ar4 + 0x30);
            dVar5 = (double)CONCAT44(uVar2,SUB84(dVar5,0));
            *(undefined4 *)(ar4 + 0x2c) = uVar2;
          }
          else {
            dVar5 = *(double *)(ar4 + 0x30);
            *(double *)(ar4 + 0x2c) = dVar5;
          }
        }
      }
      FUN_8c022fc0(ar6,ar5,ar6_00,ar7);
      uVar2 = (undefined4)((ulonglong)dVar5 >> 0x20);
      if (cVar9 == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),*(undefined4 *)(ar4 + 0x28));
        uStack_94 = uVar2;
      }
      else {
        uStack_94 = SUB84(dVar5,0);
        in_xd0 = *(double *)(ar4 + 0x28);
        dVar5 = *(double *)(ar4 + 0x48);
        uStack_90 = uVar2;
      }
      if (cVar8 == '\0') {
        fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 + dVar5,0);
      }
      if (cVar9 == '\0') {
        uVar6 = CONCAT44(uStack_94,fVar4);
      }
      else {
        uVar6 = CONCAT44(uStack_90,uStack_94);
      }
      if (cVar8 != '\0' || (float)(uVar6 >> 0x20) <= (float)uVar6) {
        dVar5 = (double)(uVar6 & 0xffffffff);
        if (cVar9 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(double *)(ar4 + 0x2c) = dVar5;
        }
        FUN_8c0230f0(ar4 + 0x14,ar5,ar6_00,ar7,(int)&uStack_88 + 4);
        FUN_8c022dac(ar4 + 0x14,(int)&uStack_88 + 4,ar6_00,ar7);
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x42340000,(int)((ulonglong)dVar5 >> 0x20));
          dVar5 = in_xd0;
        }
        else {
          dVar7 = 2.993931213754161e-78;
        }
        if (cVar8 == '\0') {
          fVar4 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar7 + dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(ar4 + 0x38) = fVar4;
        }
        else {
          *(double *)(ar4 + 0x38) = dVar5;
        }
        Vec3_dtor((int)&uStack_88 + 4,0xffffffff,ar6_00,ar7);
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          dVar5 = *(double *)(ar4 + 0x28);
          dVar7 = *(double *)(ar4 + 0x38);
        }
        if (cVar8 == '\0') {
          fVar4 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar7 / dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(ar4 + 0x3c) = fVar4;
        }
        else {
          *(double *)(ar4 + 0x3c) = dVar5;
        }
        *(undefined4 *)(ar4 + 0x40) = 0;
        uVar3 = 0;
      }
    }
    Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c097ba4\n.set _FUN_8c097ba4, _FUN_8c097ba4_def\n");
