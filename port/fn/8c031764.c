#include "../decls.h"
undefined4 FUN_8c031764_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  double *pdVar4;
  undefined4 uVar5;
  undefined4 ar6_00;
  float in_fr1;
  float fVar6;
  ulonglong uVar7;
  double dVar8;
  double in_xd0;
  char cVar9;
  char cVar10;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_84;
  undefined8 uStack_78;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar10 = '\0';
  cVar9 = '\0';
  if (*(int *)(ar4 + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = ar6;
    ar6_00 = ar6;
    Vec3_sub(ar5,ar6,ar6,ar7,auStack_44);
    uVar2 = Vec3_length(auStack_44,uVar2,ar6_00,ar7);
    Vec3_ctor_copy(auStack_24,uVar2,ar6_00,ar7);
    uVar5 = 0xffffffff;
    Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7);
    uVar1 = 1;
    iVar3 = *(int *)(ar4 + 0x40);
    if ((iVar3 == 1) || (iVar3 == 3)) {
      if (*(int *)(ar4 + 0x44) == 1) {
        FUN_8c031fc4(ar4,uVar5,ar6_00,ar7);
      }
      if (cVar10 == '\0') {
        in_fr1 = *(float *)(ar4 + 0x30);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x30);
      }
      if (in_fr1 == 0.0) {
        dVar8 = (double)CONCAT44(0x3f800000,in_fr1);
        if (cVar10 == '\0') {
          uStack_78 = (double)CONCAT44((*(uint*)((uchar*)&uStack_78+4)),0x3f800000);
          dVar8 = uStack_78;
        }
      }
      else {
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
        dVar8 = in_xd0;
        if (cVar10 == '\0') {
          uStack_78 = (double)CONCAT44((*(uint*)((uchar*)&uStack_78+4)),fVar6);
          dVar8 = uStack_78;
        }
      }
      uStack_78 = dVar8;
      Vec3_scale(auStack_24,&uStack_78,ar6_00,ar7,auStack_54);
      FUN_8c023aa0(ar4 + 0x14,auStack_54,ar6_00,ar7);
      uVar5 = 0xffffffff;
      Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
      Vec3_length(ar4 + 0x14,uVar5,ar6_00,ar7);
      pdVar4 = (double *)(ar4 + 0x2c);
      if (cVar10 != '\0') {
        in_xd0 = *pdVar4;
        pdVar4 = (double *)(ar4 + 0x30);
      }
      uStack_84 = *pdVar4;
      if (SUB84(uStack_84,0) != (float)((ulonglong)uStack_84 >> 0x20)) {
        if (cVar10 == '\0') {
          dVar8 = (double)(ulonglong)*(uint *)(ar4 + 0x28);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x28);
          dVar8 = uStack_84;
        }
        uStack_84 = (double)((ulonglong)dVar8 & 0xffffffff);
        if (cVar9 == '\0' && 0.0 < SUB84(dVar8,0)) {
          if (cVar10 == '\0') {
            uStack_84 = (double)(ulonglong)*(uint *)(ar4 + 0x24);
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x24);
          }
          if (SUB84(uStack_84,0) == 0.0) {
            if (cVar10 == '\0') {
              *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)(ar4 + 0x28);
            }
            else {
              *(undefined8 *)(ar4 + 0x2c) = *(undefined8 *)(ar4 + 0x28);
            }
          }
          else {
            if (cVar10 == '\0') {
              dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
            }
            else {
              in_xd0 = *(double *)(ar4 + 0x28);
              dVar8 = *(double *)(ar4 + 0x24);
            }
            if (cVar9 == '\0') {
              fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
            }
            else {
              fVar6 = SUB84(dVar8 / dVar8,0);
            }
            if (cVar10 == '\0') {
              dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c),fVar6);
            }
            else {
              dVar8 = *(double *)(ar4 + 0x2c);
            }
            if (cVar9 == '\0') {
              fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
            }
            else {
              fVar6 = SUB84(dVar8 + dVar8,0);
            }
            if (cVar10 == '\0') {
              *(float *)(ar4 + 0x2c) = fVar6;
            }
            else {
              *(double *)(ar4 + 0x2c) = in_xd0;
            }
          }
          pdVar4 = (double *)(ar4 + 0x2c);
          if (cVar10 != '\0') {
            in_xd0 = *pdVar4;
            pdVar4 = (double *)(ar4 + 0x30);
          }
          uStack_84 = *pdVar4;
          if (cVar9 == '\0' && (float)((ulonglong)uStack_84 >> 0x20) < SUB84(uStack_84,0)) {
            if (cVar10 == '\0') {
              uVar5 = *(undefined4 *)(ar4 + 0x30);
              uStack_84 = (double)CONCAT44(uVar5,SUB84(uStack_84,0));
              *(undefined4 *)(ar4 + 0x2c) = uVar5;
            }
            else {
              uStack_84 = *(double *)(ar4 + 0x30);
              *(double *)(ar4 + 0x2c) = uStack_84;
            }
          }
        }
      }
      FUN_8c022fc0(ar6,ar5,ar6_00,ar7);
      if (cVar10 == '\0') {
        uStack_84 = (double)CONCAT44(uVar2,(int)((ulonglong)uStack_84 >> 0x20));
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x28);
        dVar8 = *(double *)(ar4 + 0x48);
      }
      if (cVar9 == '\0') {
        fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 + dVar8,0);
      }
      if (cVar10 == '\0') {
        uStack_84 = (double)CONCAT44((undefined4)uStack_84,fVar6);
      }
      if (cVar9 != '\0' || (float)((ulonglong)uStack_84 >> 0x20) <= SUB84(uStack_84,0)) {
        uVar7 = CONCAT44(0x3f800000,SUB84(uStack_84,0));
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
          uVar7 = (ulonglong)*(uint *)(ar4 + 0x38);
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = uVar7;
          in_xd0 = *(double *)(ar4 + 0x38);
        }
        if ((float)uVar7 == 0.0) {
          if (cVar10 == '\0') {
            *(undefined4 *)(ar4 + 0x3c) = *(undefined4 *)(ar4 + 0x28);
          }
          else {
            *(undefined8 *)(ar4 + 0x3c) = *(undefined8 *)(ar4 + 0x28);
          }
        }
        else {
          if (cVar10 == '\0') {
            dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x28);
            dVar8 = *(double *)(ar4 + 0x38);
          }
          if (cVar9 == '\0') {
            fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar8 / dVar8,0);
          }
          if (cVar10 == '\0') {
            *(float *)(ar4 + 0x3c) = fVar6;
          }
          else {
            *(double *)(ar4 + 0x3c) = in_xd0;
          }
        }
        *(undefined4 *)(ar4 + 0x40) = 4;
        uVar1 = 0;
      }
    }
    else if (iVar3 == 4) {
      uVar1 = 0;
      FUN_8c0230f0(ar4 + 0x14,uVar5,ar6_00,ar7,auStack_64);
      uVar2 = Vec3_length(auStack_64,uVar5,ar6_00,ar7);
      Vec3_ctor_copy(auStack_34,uVar2,ar6_00,ar7);
      Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
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
        uStack_78 = (double)CONCAT44((*(uint*)((uchar*)&uStack_78+4)),fVar6);
        dVar8 = uStack_78;
      }
      uStack_78 = dVar8;
      Vec3_scale(auStack_34,&uStack_78,ar6_00,ar7,(int)&uStack_78 + 4);
      FUN_8c023aa0(ar4 + 0x14,(int)&uStack_78 + 4,ar6_00,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor((int)&uStack_78 + 4,0xffffffff,ar6_00,ar7);
      Vec3_length(ar4 + 0x14,uVar2,ar6_00,ar7);
      Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
      if (cVar10 == '\0') {
        fVar6 = *(float *)(ar4 + 0x28);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x28);
      }
      if (cVar9 == '\0' && fVar6 < 0.0) {
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
        uStack_9c = in_xd0;
        if (cVar10 == '\0') {
          uStack_9c = (double)CONCAT44(ar4,fVar6);
        }
        if (cVar10 == '\0') {
          *(undefined4 *)((*(uint*)((uchar*)&uStack_9c+4)) + 0x28) = (undefined4)uStack_9c;
          uStack_9c = (double)((ulonglong)uStack_9c & 0xffffffff);
        }
        else {
          *(double *)((*(uint*)((uchar*)&uStack_9c+4)) + 0x28) = uStack_9c;
        }
        if (cVar9 != '\0' || 0.0 <= SUB84(uStack_9c,0)) {
          *(undefined4 *)(ar4 + 0x40) = 0;
          if (cVar10 == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = (ulonglong)uStack_9c & 0xffffffff;
          }
          if (cVar10 == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
          }
          else {
            *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(uStack_9c,0));
          }
        }
      }
      else {
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
        uStack_94 = in_xd0;
        if (cVar10 == '\0') {
          uStack_94 = (double)CONCAT44(ar4,fVar6);
        }
        if (cVar10 == '\0') {
          *(undefined4 *)((*(uint*)((uchar*)&uStack_94+4)) + 0x28) = (undefined4)uStack_94;
          uStack_94 = (double)((ulonglong)uStack_94 & 0xffffffff);
        }
        else {
          *(double *)((*(uint*)((uchar*)&uStack_94+4)) + 0x28) = uStack_94;
        }
        if (cVar9 != '\0' || SUB84(uStack_94,0) <= 0.0) {
          *(undefined4 *)(ar4 + 0x40) = 0;
          if (cVar10 == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = (ulonglong)uStack_94 & 0xffffffff;
          }
          if (cVar10 == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
          }
          else {
            *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(uStack_94,0));
          }
        }
      }
    }
    Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c031764\n.set _FUN_8c031764, _FUN_8c031764_def\n");
