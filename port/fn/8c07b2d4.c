#include "../decls.h"
undefined4 FUN_8c07b2d4_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  int ar6_00;
  uint in_fr1;
  float fVar4;
  uint uVar7;
  double dVar5;
  double dVar6;
  undefined4 uVar8;
  float fVar9;
  undefined4 in_fr14;
  double in_xd0;
  char cVar10;
  char cVar11;
  float fStack_100;
  float fStack_fc;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_dc;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [4];
  double dStack_20;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar3 = ar5;
  ar6_00 = ar6;
  vec3_clear(ar4 + 0x200,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x2b8) = 0;
  dVar5 = (double)(ulonglong)in_fr1;
  dVar6 = dVar5;
  if (cVar11 == '\0') {
    uStack_c8 = (double)((ulonglong)(*(uint*)((uchar*)&uStack_c8+4)) << 0x20);
    dVar6 = uStack_c8;
  }
  uStack_c8 = dVar6;
  fVar9 = 1.0;
  Vec3_ctor_zero(auStack_24,uVar3,ar6_00,ar7);
  uStack_cc = 0;
  Vec3_ctor_xyz(auStack_34,uVar3,ar6_00,ar7);
  iStack_d0 = FUN_8c023d04(ar6 + 0xa0,auStack_34,ar6_00,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
  if ((iStack_d0 != 0) && ((int)((uint)*(byte *)(ar4 + 0x1fc) << 0x1f) < 0)) {
    Vec3_ctor_xyz(auStack_44,uVar3,ar6_00,ar7);
    iStack_d4 = FUN_8c023d04(ar6 + 0xa0,auStack_44,ar6_00,ar7);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7);
    if (iStack_d4 != 0) {
      Vec3_ctor_xyz(auStack_54,uVar3,ar6_00,ar7);
      uVar3 = FUN_8c023d04(ar6 + 0xa0,auStack_54,ar6_00,ar7);
      uStack_dc = (double)CONCAT44(uVar3,(undefined4)uStack_dc);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
      if ((*(uint*)((uchar*)&uStack_dc+4)) != 0) {
        Vec3_length_sq(ar4 + 4,uVar3,ar6_00,ar7);
        uVar7 = (uint)((ulonglong)dVar5 >> 0x20);
        dVar6 = dVar5;
        dVar1 = dVar5;
        if (cVar11 == '\0') {
          uStack_c8 = (double)CONCAT44((*(uint*)((uchar*)&uStack_c8+4)),uVar7);
          dVar5 = (double)(ulonglong)uVar7;
          dVar6 = in_xd0;
          dVar1 = uStack_c8;
        }
        uStack_c8 = dVar1;
        dVar1 = uStack_c8;
        if ((cVar10 == '\0' && SUB84(dVar5,0) < 1.0) &&
           (dVar1 = (double)CONCAT44(0x3f800000,SUB84(dVar5,0)), cVar11 == '\0')) {
          uStack_c8 = (double)CONCAT44((*(uint*)((uchar*)&uStack_c8+4)),0x3f800000);
          dVar1 = uStack_c8;
        }
        uStack_c8 = dVar1;
        if (cVar11 == '\0') {
          dVar5 = (double)CONCAT44(0x3e99999a,(undefined4)uStack_c8);
        }
        else {
          dVar5 = 3.3155023767404e-312;
          dVar6 = uStack_c8;
        }
        if (cVar10 == '\0') {
          fVar9 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar11 == '\0') {
          uStack_dc = (double)CONCAT44((*(uint*)((uchar*)&uStack_dc+4)),fVar9);
          dVar6 = uStack_dc;
        }
        uStack_dc = dVar6;
        Vec3_scale(ar6 + 0xa0,&uStack_dc,ar6_00,ar7,auStack_64);
        Vec3_assign(ar4 + 0x200,auStack_64,ar6_00,ar7);
        Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
        *(undefined4 *)(ar4 + 0x2b8) = 1;
        goto LAB_8c07b7a8;
      }
    }
  }
  if ((*(int *)(ar6 + 0x68) == 0) || (-1 < (int)((uint)*(byte *)(ar4 + 0x1fc) << 0x1e))) {
    if ((*(int *)(ar6 + 100) == 0) || (-1 < (int)((uint)*(byte *)(ar4 + 0x1fc) << 0x1d))) {
      uVar3 = Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
      return uVar3;
    }
    iVar2 = get_field_24_05c284(*(undefined4 *)(ar6 + 0x50),uVar3,ar6_00,ar7);
    if ((iVar2 == 0xf) ||
       (iVar2 = get_field_24_05c284(*(undefined4 *)(ar6 + 0x50),uVar3,ar6_00,ar7), iVar2 == 10)) {
      uVar3 = Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
      return uVar3;
    }
    *(undefined4 *)(ar4 + 0x1d4) = 1;
    (**(code **)(*(int *)(*(int *)(ar6 + 0x50) + 8) + 0x170))(*(int *)(ar6 + 0x50),uVar3,ar6_00,ar7)
    ;
    fVar4 = (float)((ulonglong)dVar5 >> 0x20);
    fStack_fc = fVar4;
    if (cVar11 != '\0') {
      fStack_fc = SUB84(dVar5,0);
      fVar4 = fVar9;
    }
    FUN_8c02f670(*(undefined4 *)(ar6 + 0x50),uVar3,ar6_00,ar7,auStack_94);
    Vec3_sub(ar5,auStack_94,ar6_00,ar7,auStack_a4);
    Vec3_assign(ar4 + 0x200,auStack_a4,ar6_00,ar7);
    Vec3_dtor(auStack_a4,0xffffffff,ar6_00,ar7);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_94,0xffffffff,ar6_00,ar7);
    Vec3_length_sq(ar4 + 0x200,uVar3,ar6_00,ar7);
    fVar9 = (float)((ulonglong)dVar5 >> 0x20);
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(fVar9,*(undefined4 *)(ar4 + 0x48));
      fStack_100 = fVar9;
    }
    else {
      fStack_100 = SUB84(dVar5,0);
      in_xd0 = *(double *)(ar4 + 0x48);
      fStack_fc = fVar9;
    }
    if (cVar10 == '\0') {
      fVar4 = SUB84(dVar5,0) + fVar4;
    }
    else {
      fVar4 = SUB84(dVar5 + (double)CONCAT44(in_fr14,fVar4),0);
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(fStack_100,fVar4);
    }
    else {
      dVar5 = (double)CONCAT44(fStack_fc,fStack_100);
    }
    if (cVar10 == '\0') {
      fVar9 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar5 - dVar5,0);
    }
    dVar5 = in_xd0;
    if (cVar11 == '\0') {
      uStack_c8 = (double)CONCAT44((*(uint*)((uchar*)&uStack_c8+4)),fVar9);
      dVar5 = uStack_c8;
    }
    uStack_c8 = dVar5;
    dVar5 = uStack_c8;
    if ((cVar10 == '\0' && fVar9 < 1.0) && (dVar5 = (double)(ulonglong)(uint)fVar9, cVar11 == '\0'))
    {
      uStack_c8 = (double)((ulonglong)uStack_c8 & 0xffffffff00000000);
      dVar5 = uStack_c8;
    }
    uStack_c8 = dVar5;
    Vec3_length(ar4 + 0x200,uVar3,ar6_00,ar7);
    Vec3_scale(ar4 + 0x200,&uStack_c8,ar6_00,ar7,auStack_b4);
    Vec3_scale(auStack_b4,&DAT_8c1379a4,ar6_00,ar7,(int)&uStack_c8 + 4);
    Vec3_assign(ar4 + 0x200,(int)&uStack_c8 + 4,ar6_00,ar7);
    Vec3_dtor((int)&uStack_c8 + 4,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_b4,0xffffffff,ar6_00,ar7);
    *(undefined4 *)(ar4 + 0x2b8) = 1;
  }
  else {
    *(undefined4 *)(ar4 + 0x1d4) = 1;
    if (cVar11 == '\0') {
      fVar9 = *(float *)(*(int *)(ar6 + 0x68) + 0x158);
    }
    Vec3_assign(auStack_24,*(int *)(ar6 + 0x68) + 4,ar6_00,ar7);
    dVar6 = dStack_20;
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44((*(uint*)((uchar*)&dStack_20+0)),SUB84(dVar5,0));
    }
    if (cVar10 == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + fVar9,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 + (double)CONCAT44(in_fr14,fVar9);
    }
    dVar5 = dVar6;
    if (cVar11 == '\0') {
      dStack_20 = (double)CONCAT44((*(uint*)((uchar*)&dStack_20+4)),(int)((ulonglong)dVar6 >> 0x20));
      dVar5 = dStack_20;
    }
    dStack_20 = dVar5;
    Vec3_sub(ar5,auStack_24,ar6_00,ar7,auStack_74);
    Vec3_scale(auStack_74,&DAT_8c13799c,ar6_00,ar7,auStack_84);
    Vec3_assign(ar4 + 0x200,auStack_84,ar6_00,ar7);
    Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
    Vec3_length_sq(ar4 + 0x200,uVar3,ar6_00,ar7);
    uVar8 = (undefined4)((ulonglong)dVar6 >> 0x20);
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(uVar8,*(undefined4 *)(ar4 + 0x48));
      uStack_f0 = uVar8;
    }
    else {
      uStack_f0 = SUB84(dVar6,0);
      in_xd0 = *(double *)(ar4 + 0x48);
      uStack_ec = uVar8;
    }
    if (cVar10 == '\0') {
      fVar9 = SUB84(dVar6,0) + fVar9;
    }
    else {
      fVar9 = SUB84(dVar6 + (double)CONCAT44(in_fr14,fVar9),0);
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(uStack_f0,fVar9);
    }
    else {
      dVar5 = (double)CONCAT44(uStack_ec,uStack_f0);
    }
    if (cVar10 == '\0') {
      fVar9 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar5 - dVar5,0);
    }
    dVar5 = in_xd0;
    if (cVar11 == '\0') {
      uStack_c8 = (double)CONCAT44((*(uint*)((uchar*)&uStack_c8+4)),fVar9);
      dVar5 = uStack_c8;
    }
    uStack_c8 = dVar5;
    dVar5 = uStack_c8;
    if ((cVar10 == '\0' && fVar9 < 1.0) &&
       (dVar5 = (double)CONCAT44(0x3f800000,fVar9), cVar11 == '\0')) {
      uStack_c8 = (double)CONCAT44((*(uint*)((uchar*)&uStack_c8+4)),0x3f800000);
      dVar5 = uStack_c8;
    }
    uStack_c8 = dVar5;
    Vec3_length(ar4 + 0x200,uVar3,ar6_00,ar7);
    FUN_8c023bf4(ar4 + 0x200,&uStack_c8,ar6_00,ar7);
    FUN_8c023bf4(ar4 + 0x200,&DAT_8c1379a0,ar6_00,ar7);
    *(undefined4 *)(ar4 + 0x2b8) = 1;
  }
LAB_8c07b7a8:
  uVar3 = Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c07b2d4\n.set _FUN_8c07b2d4, _FUN_8c07b2d4_def\n");
