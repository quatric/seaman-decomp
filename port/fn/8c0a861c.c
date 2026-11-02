#include "../decls.h"
undefined4 FUN_8c0a861c_def(int ar4,undefined8 *ar5,ulonglong *ar6,undefined4 ar7)

{
  ulonglong uVar1;
  int iVar2;
  undefined *ar5_00;
  undefined4 uVar3;
  uint *ar5_01;
  ulonglong *ar6_00;
  undefined4 uVar4;
  float fVar5;
  ulonglong in_dr0;
  double dVar6;
  uint uVar8;
  undefined8 uVar7;
  ulonglong in_xd0;
  char cVar9;
  char cVar10;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  ulonglong auStack_64 [2];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined8 uStack_24;
  undefined8 uStack_1c;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar4 = 1;
  ar6_00 = ar6;
  Vec3_ctor_zero(&uStack_24,ar5,ar6,ar7);
  uStack_b8 = 1;
  iVar2 = *(int *)(ar4 + 300);
  if ((iVar2 < 5) && (-1 < iVar2)) {
    uVar3 = (undefined4)in_dr0;
                    
    switch(iVar2) {
    case 0:
      ar6_00 = (ulonglong *)0x2;
      iVar2 = rand_range(ar4,0,2,ar7);
      if (iVar2 == 0) {
        Vec3_assign(&uStack_24,ar5,ar6_00,ar7);
        if (cVar10 == '\0') {
        }
        else {
          (*(uint*)((uchar*)&uStack_24+4)) = 0x219c;
        }
        (*(uint*)((uchar*)&uStack_24+0)) = 0x42c80000;
        Vec3_assign(ar4 + 0x54,&uStack_24,ar6_00,ar7);
        Vec3_assign(&uStack_24,ar5,ar6_00,ar7);
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(0x42c80000,(int)*ar6);
        }
        else {
          in_xd0 = *ar6;
          dVar6 = 1.82582053383223e-310;
        }
        if (cVar9 == '\0') {
          fVar5 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar5,SUB84(dVar6,0) - fVar5);
        }
        else {
          dVar6 = dVar6 - dVar6;
        }
        uVar1 = in_xd0;
        if (cVar10 == '\0') {
          uStack_24 = CONCAT44((*(uint*)((uchar*)&uStack_24+4)),SUB84(dVar6,0));
          uVar1 = uStack_24;
        }
        uStack_24 = uVar1;
        *(undefined4 *)(ar4 + 0x219c) = 4;
        FUN_8c022fc0(ar5,ar4 + 0x54,ar6_00,ar7);
        uStack_d0 = (undefined4)((ulonglong)dVar6 >> 0x20);
        if (cVar10 == '\0') {
          uStack_d4 = uStack_d0;
          uStack_d0 = 0;
        }
        else {
          uStack_d4 = SUB84(dVar6,0);
        }
        FUN_8c022fc0(ar5,&uStack_24,ar6_00,ar7);
        uVar3 = (undefined4)((ulonglong)dVar6 >> 0x20);
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(uVar3,uStack_d4);
        }
        else {
          in_xd0 = CONCAT44(uStack_d0,uVar3);
        }
        if (cVar9 != '\0' || SUB84(dVar6,0) <= (float)((ulonglong)dVar6 >> 0x20)) {
          Vec3_assign(ar4 + 0x54,&uStack_24,ar6_00,ar7);
          *(undefined4 *)(ar4 + 0x219c) = 3;
        }
      }
      else {
        Vec3_assign(&uStack_24,ar5,ar6_00,ar7);
        if (cVar10 == '\0') {
        }
        else {
          (*(uint*)((uchar*)&uStack_1c+4)) = 0xf0;
        }
        (*(uint*)((uchar*)&uStack_1c+0)) = 0x42c80000;
        Vec3_assign(ar4 + 0x54,&uStack_24,ar6_00,ar7);
        Vec3_assign(&uStack_24,ar5,ar6_00,ar7);
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(0x42c80000,(int)ar6[1]);
        }
        else {
          in_xd0 = ar6[1];
          dVar6 = 5.09832542688757e-312;
        }
        if (cVar9 == '\0') {
          fVar5 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar5,SUB84(dVar6,0) - fVar5);
        }
        else {
          dVar6 = dVar6 - dVar6;
        }
        uVar1 = in_xd0;
        if (cVar10 == '\0') {
          uStack_1c = CONCAT44((*(uint*)((uchar*)&uStack_1c+4)),SUB84(dVar6,0));
          uVar1 = uStack_1c;
        }
        uStack_1c = uVar1;
        *(undefined4 *)(ar4 + 0x219c) = 2;
        FUN_8c022fc0(ar5,ar4 + 0x54,ar6_00,ar7);
        uVar3 = (undefined4)((ulonglong)dVar6 >> 0x20);
        uStack_dc = uVar3;
        if (cVar10 != '\0') {
          uStack_dc = SUB84(dVar6,0);
          uStack_d8 = uVar3;
        }
        FUN_8c022fc0(ar5,&uStack_24,ar6_00,ar7);
        uVar3 = (undefined4)((ulonglong)dVar6 >> 0x20);
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(uVar3,uStack_dc);
        }
        else {
          in_xd0 = CONCAT44(uStack_d8,uVar3);
        }
        if (cVar9 != '\0' || SUB84(dVar6,0) <= (float)((ulonglong)dVar6 >> 0x20)) {
          Vec3_assign(ar4 + 0x54,&uStack_24,ar6_00,ar7);
          *(undefined4 *)(ar4 + 0x219c) = 1;
        }
      }
      fVar5 = SUB84(dVar6,0);
      Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7,auStack_34);
      ar5_00 = &DAT_8c13b298;
      Vec3_scale(ar4 + 0x14,&DAT_8c13b298,ar6_00,ar7,auStack_44);
      uVar3 = Vec3_length(auStack_34,ar5_00,ar6_00,ar7);
      iStack_c0 = FUN_8c023cd4(uVar3,auStack_44,ar6_00,ar7);
      Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
      if (iStack_c0 != 0) {
        if (cVar10 == '\0') {
          fVar5 = *(float *)(ar4 + 0x54);
        }
        else {
          in_xd0 = *(ulonglong *)(ar4 + 0x54);
        }
        if (cVar9 == '\0') {
          fVar5 = fVar5 + 1.0;
        }
        else {
          fVar5 = SUB84((double)CONCAT44(0x3f800000,fVar5) + (double)CONCAT44(0x3f800000,fVar5),0);
        }
        if (cVar10 == '\0') {
          *(float *)(ar4 + 0x54) = fVar5;
          fVar5 = *(float *)(ar4 + 0x5c);
        }
        else {
          *(ulonglong *)(ar4 + 0x54) = in_xd0;
          in_xd0 = *(ulonglong *)(ar4 + 0x5c);
        }
        if (cVar9 == '\0') {
          fVar5 = fVar5 + 1.0;
        }
        else {
          fVar5 = SUB84((double)CONCAT44(0x3f800000,fVar5) + (double)CONCAT44(0x3f800000,fVar5),0);
        }
        if (cVar10 == '\0') {
          *(float *)(ar4 + 0x5c) = fVar5;
        }
        else {
          *(ulonglong *)(ar4 + 0x5c) = in_xd0;
        }
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 1:
      Vec3_ctor_copy(auStack_54,ar5,ar6_00,ar7);
      Vec3_ctor_copy(auStack_64,ar4 + 0x54,ar6_00,ar7);
      ar6_00 = auStack_64;
      iVar2 = FUN_8c0a72b4(ar4,auStack_54,ar6_00,ar7);
      uStack_c4 = (uint)(iVar2 == 0);
      Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
      if (uStack_c4 != 0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7);
      break;
    case 2:
      iVar2 = *(int *)(ar4 + 0x219c);
      if (iVar2 == 1) {
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x54) = *(undefined4 *)ar5;
          *(undefined4 *)(ar4 + 0x58) = 0x43480000;
          in_dr0 = CONCAT44((int)ar6[1],uVar3);
          *(int *)(ar4 + 0x5c) = (int)ar6[1];
        }
        else {
          *(undefined8 *)(ar4 + 0x54) = *ar5;
          *(undefined8 *)(ar4 + 0x58) = 0x9843480000;
          in_dr0 = ar6[1];
          *(ulonglong *)(ar4 + 0x5c) = in_dr0;
        }
      }
      else if (iVar2 == 2) {
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x54) = *(undefined4 *)ar5;
          in_dr0 = CONCAT44(0x43480000,uVar3);
          *(undefined4 *)(ar4 + 0x58) = 0x43480000;
        }
        else {
          *(undefined8 *)(ar4 + 0x54) = *ar5;
          in_dr0 = 0x705460e343480000;
          *(undefined8 *)(ar4 + 0x58) = 0x705460e343480000;
        }
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x5c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x5c) = in_dr0;
        }
      }
      else if (iVar2 == 3) {
        if (cVar10 == '\0') {
          *(int *)(ar4 + 0x54) = (int)*ar6;
          *(undefined4 *)(ar4 + 0x58) = 0x43480000;
          in_dr0 = CONCAT44(*(undefined4 *)(ar5 + 1),uVar3);
          *(undefined4 *)(ar4 + 0x5c) = *(undefined4 *)(ar5 + 1);
        }
        else {
          *(ulonglong *)(ar4 + 0x54) = *ar6;
          *(undefined8 *)(ar4 + 0x58) = 0x705460e343480000;
          in_dr0 = ar5[1];
          *(ulonglong *)(ar4 + 0x5c) = in_dr0;
        }
      }
      else if (iVar2 == 4) {
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x54) = 0;
          *(undefined4 *)(ar4 + 0x58) = 0x43480000;
          in_dr0 = CONCAT44(*(undefined4 *)(ar5 + 1),uVar3);
          *(undefined4 *)(ar4 + 0x5c) = *(undefined4 *)(ar5 + 1);
        }
        else {
          *(ulonglong *)(ar4 + 0x54) = in_dr0 & 0xffffffff;
          *(undefined8 *)(ar4 + 0x58) = 0x705460e343480000;
          in_dr0 = ar5[1];
          *(ulonglong *)(ar4 + 0x5c) = in_dr0;
        }
      }
      Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7,auStack_74);
      Vec3_assign(ar4 + 0x14,auStack_74,ar6_00,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
      Vec3_length(ar4 + 0x14,uVar3,ar6_00,ar7);
      FUN_8c022fc0(ar5,ar4 + 0x54,ar6_00,ar7);
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x40a00000,(int)(in_dr0 >> 0x20));
      }
      else {
        dVar6 = 2.72151140845083e-312;
        in_xd0 = in_dr0;
      }
      if (cVar9 == '\0') {
        fVar5 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 / dVar6,0);
      }
      if (cVar10 == '\0') {
        *(float *)(ar4 + 0x28) = fVar5;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = in_xd0;
      }
      Vec3_assign(ar4 + 0x2174,ar4 + 0x80,ar6_00,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 3:
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x2194));
      }
      else {
        in_xd0 = *(ulonglong *)(ar4 + 0x2194);
        dVar6 = 0.007811875057814177;
      }
      if (cVar9 == '\0') {
        fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar10 == '\0') {
        *(float *)(ar4 + 0x2194) = fVar5;
        fVar5 = *(float *)(ar4 + 0x2194);
      }
      else {
        *(ulonglong *)(ar4 + 0x2194) = in_xd0;
      }
      if (cVar9 != '\0' || 1.0 <= fVar5) {
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x2194) = 0x3f7fff58;
        }
        else {
          fVar5 = 0.99999;
          *(undefined8 *)(ar4 + 0x2194) = 0x883f7fff58;
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      if (cVar10 == '\0') {
        fVar5 = *(float *)(ar4 + 0x2194);
      }
      if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(1.0 - fVar5,fVar5);
      }
      else {
        dVar6 = (double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5);
      }
      uVar8 = (uint)((ulonglong)dVar6 >> 0x20);
      uStack_c8 = uVar8;
      if (cVar10 != '\0') {
        uStack_c8 = SUB84(dVar6,0);
        uStack_c4 = uVar8;
      }
      ar5_01 = &uStack_c8;
      Vec3_scale(ar4 + 0x2174,ar5_01,ar6_00,ar7,auStack_84);
      Vec3_ctor_xyz(auStack_94,ar5_01,ar6_00,ar7);
      if (cVar10 == '\0') {
        uStack_cc = *(undefined4 *)(ar4 + 0x2194);
      }
      else {
        uVar7 = *(undefined8 *)(ar4 + 0x2194);
        uStack_cc = (undefined4)uVar7;
        uStack_c8 = (uint)((ulonglong)uVar7 >> 0x20);
      }
      Vec3_scale(auStack_94,&uStack_cc,ar6_00,ar7,auStack_a4);
      Vec3_add(auStack_84,auStack_a4,ar6_00,ar7,auStack_b4);
      Vec3_assign(ar4 + 0x80,auStack_b4,ar6_00,ar7);
      Vec3_dtor(auStack_b4,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_a4,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_94,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
      break;
    case 4:
      in_dr0 = in_dr0 & 0xffffffff;
      if (cVar10 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = in_dr0;
      }
      Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6_00,ar7);
      uVar4 = 0;
      *(undefined4 *)(ar4 + 300) = 0;
      if (cVar10 == '\0') {
        *(undefined4 *)(ar4 + 0x2194) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2194) = in_dr0 & 0xffffffff;
      }
      *(undefined4 *)(ar4 + 0x2198) = *(undefined4 *)(ar4 + 0x219c);
    }
  }
  uStack_bc = uVar4;
  Vec3_dtor(&uStack_24,0xffffffff,ar6_00,ar7);
  return uStack_bc;
}

__asm__(".globl _FUN_8c0a861c\n.set _FUN_8c0a861c, _FUN_8c0a861c_def\n");
