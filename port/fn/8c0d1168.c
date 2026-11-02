#include "../decls.h"
undefined4 FUN_8c0d1168_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *a4;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar4;
  float fVar5;
  float fVar7;
  double dVar6;
  undefined8 in_xd0;
  char cVar8;
  char cVar9;
  undefined4 in_stack_ffffff30;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [68];
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  cVar9 = '\0';
  cVar8 = '\0';
  Vec3_ctor_zero(&fStack_1c,ar5,ar6,ar7);
  uStack_4c = CONCAT44(DAT_8c13d420,DAT_8c13d41c);
  fStack_44 = DAT_8c13d424;
  fStack_40 = DAT_8c13d428;
  uStack_3c = DAT_8c13d42c;
  fStack_38 = DAT_8c13d430;
  fStack_34 = DAT_8c13d434;
  uStack_30 = DAT_8c13d438;
  fStack_2c = DAT_8c13d43c;
  fStack_28 = DAT_8c13d440;
  uStack_24 = DAT_8c13d444;
  fStack_20 = DAT_8c13d448;
  uStack_5c = DAT_8c13d44c;
  uStack_58 = DAT_8c13d450;
  uStack_54 = DAT_8c13d454;
  uStack_50 = DAT_8c13d458;
  ar7_00 = 4;
  FUN_8c01642c(auStack_b0,&uStack_4c,&uStack_5c,4);
  uStack_6c = 0;
  uStack_6a = 0;
  uStack_68 = 0;
  uStack_66 = 0x7f;
  uStack_64 = 0x7f;
  uStack_62 = 0x7f;
  uStack_60 = 0x7f;
  uStack_5e = 0;
  ar6_00 = 4;
  FUN_8c0164c8(auStack_b0,&uStack_6c,4,ar7_00);
  ar5_00 = 0x80000060;
  FUN_8c0d1450(auStack_b0,0x80000060,ar6_00,ar7_00,in_stack_ffffff30);
  uVar3 = 0;
  FUN_8c256328(0,ar5_00,ar6_00,ar7_00,in_stack_ffffff30);
  FUN_8c019058(uVar3,ar5_00,ar6_00,ar7_00);
  FUN_8c01538c(ar4,ar5_00,ar6_00,ar7_00);
  FUN_8c015af8(ar4 + 8,ar5_00,ar6_00,ar7_00);
  FUN_8c256210(1,ar5_00,ar6_00,ar7_00);
  for (iVar4 = 0; iVar4 < 0x15e; iVar4 = iVar4 + 1) {
    iVar2 = get_field_100_0d1058(ar4 + iVar4 * 0xac + 0xc,ar5_00,ar6_00,ar7_00);
    if (iVar2 == 1) {
      a4 = (int *)(ar4 + iVar4 * 0xac + 0xc);
      (**(code **)(*a4 + 0x10))(a4,ar5_00,ar6_00,ar7_00);
      FUN_8c014eac(ar4 + iVar4 * 0xac + 0xc,ar5_00,ar6_00,ar7_00,auStack_c0);
      Vec3_assign(&fStack_1c,auStack_c0,ar6_00,ar7_00);
      ar5_00 = 0xffffffff;
      Vec3_dtor(auStack_c0,0xffffffff,ar6_00,ar7_00);
      if (cVar9 == '\0') {
        fVar7 = 200.0;
        fVar5 = fStack_18;
      }
      else {
        in_xd0 = CONCAT44(fStack_14,fStack_18);
        fVar5 = 200.0;
        fVar7 = 1500.0;
      }
      if (cVar8 != '\0' || fVar5 <= fVar7) {
        if (cVar9 == '\0') {
          fVar7 = 1500.0;
          fVar5 = fStack_1c;
        }
        else {
          in_xd0 = CONCAT44(fStack_18,fStack_1c);
          fVar5 = 1500.0;
          fVar7 = 2.63444e-43;
        }
        if (cVar8 == '\0' && fVar7 < fVar5) {
          if (cVar9 == '\0') {
            fVar7 = 800.0;
            fVar5 = fStack_14;
          }
          else {
            in_xd0 = CONCAT44(uStack_10,fStack_14);
            fVar5 = 800.0;
            fVar7 = 12.0;
          }
          if (cVar8 == '\0' && fVar7 < fVar5) {
            if (cVar9 == '\0') {
              dVar6 = (double)CONCAT44(0x41400000,fStack_1c);
            }
            else {
              in_xd0 = CONCAT44(fStack_18,fStack_1c);
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              fVar5 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
            }
            else {
              fVar5 = SUB84(dVar6 - dVar6,0);
            }
            if (cVar9 == '\0') {
              uStack_4c = CONCAT44((*(uint*)((uchar*)&uStack_4c+4)),fVar5);
              dVar6 = (double)CONCAT44(0x41400000,fStack_14);
              uVar1 = in_xd0;
            }
            else {
              uVar1 = CONCAT44(uStack_10,fStack_14);
              dVar6 = 2.97620270990453e-312;
              uStack_4c = in_xd0;
            }
            if (cVar8 == '\0') {
              fStack_44 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
            }
            else {
              fStack_44 = SUB84(dVar6 - dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = (double)CONCAT44(0x41400000,fStack_1c);
            }
            else {
              fStack_44 = (float)uVar1;
              uVar1 = CONCAT44(fStack_18,fStack_1c);
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              fStack_40 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
            }
            else {
              fStack_40 = SUB84(dVar6 - dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = (double)CONCAT44(0x41400000,fStack_14);
            }
            else {
              fStack_40 = (float)uVar1;
              uStack_3c = (undefined4)((ulonglong)uVar1 >> 0x20);
              uVar1 = CONCAT44(uStack_10,fStack_14);
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              fStack_38 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
            }
            else {
              fStack_38 = SUB84(dVar6 + dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = (double)CONCAT44(0x41400000,fStack_1c);
            }
            else {
              fStack_38 = (float)uVar1;
              uVar1 = CONCAT44(fStack_18,fStack_1c);
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              fStack_34 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
            }
            else {
              fStack_34 = SUB84(dVar6 + dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = (double)CONCAT44(0x41400000,fStack_14);
            }
            else {
              fStack_34 = (float)uVar1;
              uStack_30 = (undefined4)((ulonglong)uVar1 >> 0x20);
              uVar1 = CONCAT44(uStack_10,fStack_14);
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              fStack_2c = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
            }
            else {
              fStack_2c = SUB84(dVar6 + dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = (double)CONCAT44(0x41400000,fStack_1c);
            }
            else {
              fStack_2c = (float)uVar1;
              uVar1 = CONCAT44(fStack_18,fStack_1c);
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              fStack_28 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
            }
            else {
              fStack_28 = SUB84(dVar6 + dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = (double)CONCAT44(0x41400000,fStack_14);
              in_xd0 = uVar1;
            }
            else {
              fStack_28 = (float)uVar1;
              uStack_24 = (undefined4)((ulonglong)uVar1 >> 0x20);
              in_xd0 = CONCAT44(uStack_10,fStack_14);
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              fStack_20 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
            }
            else {
              fStack_20 = SUB84(dVar6 - dVar6,0);
            }
            if (cVar9 != '\0') {
              fStack_20 = (float)in_xd0;
              fStack_1c = (float)((ulonglong)in_xd0 >> 0x20);
            }
            FUN_8c01538c(ar4,ar5_00,ar6_00,ar7_00);
            ar5_00 = 1;
            FUN_8c014a94(ar4,1,ar6_00,ar7_00);
            FUN_8c016524(auStack_b0,ar5_00,ar6_00,ar7_00);
          }
        }
      }
    }
  }
  uVar3 = Vec3_dtor(&fStack_1c,0xffffffff,ar6_00,ar7_00);
  return uVar3;
}

__asm__(".globl _FUN_8c0d1168\n.set _FUN_8c0d1168, _FUN_8c0d1168_def\n");
