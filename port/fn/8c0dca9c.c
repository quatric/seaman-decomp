#include "../decls.h"
undefined4 * s_WaterTank_0dcaa2_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  undefined *ar5_00;
  undefined4 uVar2;
  undefined4 ar6_00;
  code *pcVar3;
  code *pcVar4;
  undefined8 *ar6_01;
  undefined4 *ar4_00;
  undefined4 ar7_00;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined4 in_fr1;
  float fVar8;
  double dVar9;
  undefined8 in_xd0;
  char cVar10;
  char cVar11;
  undefined4 in_stack_fffffee4;
  float fStack_90;
  undefined1 auStack_8c [4];
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar11 = '\0';
  cVar10 = '\0';
  ar7_00 = 3;
  ar6_00 = 0;
  FUN_8c0d9c80(ar4,s_WaterTank_8c13fdb5,0,3);
  ar5_00 = &DAT_8c12b930;
  *ar4 = &DAT_8c12b930;
  FUN_8c015224(ar4 + 0x41b,&DAT_8c12b930,ar6_00,ar7_00);
  FUN_8c015ab8(ar4 + 0x41d,ar5_00,ar6_00,ar7_00);
  FUN_8c015ab8(ar4 + 0x41e,ar5_00,ar6_00,ar7_00);
  FUN_8c015ab8(ar4 + 0x41f,ar5_00,ar6_00,ar7_00);
  FUN_8c0d2fd8(ar4 + 0x42b,ar5_00,ar6_00,ar7_00);
  uVar2 = 0x13b24;
  FUN_8c0cff78(ar4 + 0x4ec9,0x13b24,ar6_00,ar7_00);
  FUN_8c0d07b4(ar4 + 0x4edc,uVar2,ar6_00,ar7_00);
  FUN_8c0d0b58(ar4 + 0x4ee3,uVar2,ar6_00,ar7_00);
  FUN_8c015ab8(ar4 + 0x89be,uVar2,ar6_00,ar7_00);
  FUN_8c015224(ar4 + 0x89bf,uVar2,ar6_00,ar7_00);
  FUN_8c0d931c(ar4 + 0x89c1,uVar2,ar6_00,ar7_00);
  FUN_8c017830(ar4 + 0x89d3,uVar2,ar6_00,ar7_00);
  Vec3_ctor_zero(ar4 + 0x89f4,uVar2,ar6_00,ar7_00);
  Vec3_ctor_zero(ar4 + 0x89f8,uVar2,ar6_00,ar7_00);
  Vec3_ctor_zero(ar4 + 0x89fc,uVar2,ar6_00,ar7_00);
  Vec3_ctor_zero(ar4 + 0x8a00,uVar2,ar6_00,ar7_00);
  uVar2 = 0xc;
  pcVar3 = free_if_nonnull_wrap_0d6ef8;
  FUN_8c010120(ar4 + 0x8a06,FUN_8c0d6ee0,free_if_nonnull_wrap_0d6ef8,0xc,0x6e);
  FUN_8c015224(ar4 + 0x8b50,FUN_8c015224,pcVar3,uVar2);
  FUN_8c010120(ar4 + 0x8b52,FUN_8c0d7060,FUN_8c0ddb3c,0x16c,3);
  uVar2 = 0x18;
  pcVar4 = free_if_nonnull_wrap_0cffc8;
  pcVar3 = FUN_8c02145c;
  FUN_8c010120(ar4 + 0x8c96,FUN_8c02145c,free_if_nonnull_wrap_0cffc8,0x18,2);
  Vec3_ctor_zero(&fStack_90,pcVar3,pcVar4,uVar2);
  pcVar3 = Vec3_ctor_zero;
  Vec3_ctor_zero(&uStack_80,Vec3_ctor_zero,pcVar4,uVar2);
  Vec3_ctor_zero(&uStack_70,pcVar3,pcVar4,uVar2);
  Vec3_ctor_zero(&uStack_60,pcVar3,pcVar4,uVar2);
  Vec3_ctor_zero(&uStack_50,pcVar3,pcVar4,uVar2);
  Vec3_ctor_zero(&uStack_40,pcVar3,pcVar4,uVar2);
  Vec3_ctor_zero(&uStack_30,pcVar3,pcVar4,uVar2);
  Vec3_ctor_zero(&uStack_20,pcVar3,pcVar4,uVar2);
  _DAT_8c437c38 = 0;
  _DAT_8c437c3a = 0xff;
  _DAT_8c437c3c = 0;
  _DAT_8c437c3e = 0;
  _DAT_8c437c40 = 0xff;
  _DAT_8c437c42 = 0;
  _DAT_8c437c44 = 0xff;
  _DAT_8c437c46 = 0xff;
  for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
    *(undefined4 *)(iVar6 * 4 + -0x73bc83b8) = 0xffffffff;
  }
  FUN_8c0e0da4(ar4,pcVar3,pcVar4,uVar2);
  ar4[0x89bd] = 0;
  if (cVar11 == '\0') {
    ar4[0x2e9] = 0x425dae14;
    ar4[0x2af] = 0x4573bfff;
    ar4[0x2b0] = 0x44c80199;
    ar4[0x2b1] = 0x44fd2000;
  }
  else {
    *(undefined8 *)(ar4 + 0x2e9) = 0xabc425dae14;
    *(undefined8 *)(ar4 + 0x2af) = 0xac04573bfff;
    *(undefined8 *)(ar4 + 0x2b0) = 0xac444c80199;
    in_fr1 = 0x44fd2000;
    *(undefined8 *)(ar4 + 0x2b1) = 0xa03cee0044fd2000;
  }
  for (iVar6 = 0; iVar6 < 0xb; iVar6 = iVar6 + 1) {
    for (iVar7 = 0; iVar7 < 10; iVar7 = iVar7 + 1) {
      if (cVar11 == '\0') {
        ar4[iVar6 * 0x1e + iVar7 * 3 + 0x8a06] = 0x43340000;
      }
      else {
        in_fr1 = 0x43340000;
        *(undefined8 *)(ar4 + iVar6 * 0x1e + iVar7 * 3 + 0x8a06) = 0x2281c43340000;
      }
      ar4[iVar6 * 0x1e + iVar7 * 3 + 0x8a07] = 0;
    }
  }
  for (iVar6 = 6; iVar6 < 0xb; iVar6 = iVar6 + 1) {
    for (iVar7 = 3; iVar7 < 10; iVar7 = iVar7 + 1) {
      if (cVar11 == '\0') {
        ar4[iVar6 * 0x1e + iVar7 * 3 + 0x8a06] = 0x40000000;
      }
      else {
        in_fr1 = 0x40000000;
        *(undefined8 *)(ar4 + iVar6 * 0x1e + iVar7 * 3 + 0x8a06) = 0x2281c40000000;
      }
      ar4[iVar6 * 0x1e + iVar7 * 3 + 0x8a07] = 1;
    }
  }
  for (iVar6 = 5; iVar6 < 10; iVar6 = iVar6 + 1) {
    ar4[iVar6 * 3 + 0x8a9d] = 2;
    if (cVar11 == '\0') {
      ar4[iVar6 * 3 + 0x8a9c] = 0x40000000;
    }
    else {
      in_fr1 = 0x40000000;
      *(undefined8 *)(ar4 + iVar6 * 3 + 0x8a9c) = 0xfd6e05c40000000;
    }
  }
  for (iVar6 = 5; iVar6 < 10; iVar6 = iVar6 + 1) {
    ar4[iVar6 * 3 + 0x8abb] = 2;
  }
  for (iVar6 = 6; iVar6 < 0xb; iVar6 = iVar6 + 1) {
    ar4[iVar6 * 0x1e + 0x8a13] = 2;
  }
  for (iVar6 = 6; iVar6 < 0xb; iVar6 = iVar6 + 1) {
    ar4[iVar6 * 0x1e + 0x8a10] = 2;
    if (cVar11 == '\0') {
      ar4[iVar6 * 0x1e + 0x8a0f] = 0x40000000;
    }
    else {
      in_fr1 = 0x40000000;
      *(undefined8 *)(ar4 + iVar6 * 0x1e + 0x8a0f) = 0x22ba040000000;
    }
  }
  ar4[0x8ae8] = 2;
  ar4[0x8ac7] = 2;
  ar4[0x8ac4] = 0;
  if (cVar11 == '\0') {
    ar4[0x8ac3] = 0x43340000;
  }
  else {
    in_fr1 = 0x43340000;
    *(undefined8 *)(ar4 + 0x8ac3) = 0xa024ee0043340000;
  }
  for (iVar6 = 2; iVar6 < 5; iVar6 = iVar6 + 1) {
    for (iVar7 = 0; iVar7 < 6; iVar7 = iVar7 + 1) {
      ar4[iVar6 * 0x1e + iVar7 * 3 + 0x8a08] = 1;
    }
  }
  ar4[0x8a4d] = 0;
  ar4[0x8a6b] = 0;
  ar4[0x8a89] = 0;
  if (cVar11 == '\0') {
    ar4[0x20] = 0x430c0000;
    ar4[0x21] = 0x42c80000;
    ar4[0x23] = 0x43a00000;
    ar4[0x24] = 0x42e00000;
    ar4[0x25] = 0x41000000;
  }
  else {
    *(undefined8 *)(ar4 + 0x20) = 0x84430c0000;
    *(undefined8 *)(ar4 + 0x21) = 0x8c42c80000;
    *(undefined8 *)(ar4 + 0x23) = 0x9043a00000;
    *(undefined8 *)(ar4 + 0x24) = 0x9442e00000;
    in_fr1 = 0x41000000;
    *(undefined8 *)(ar4 + 0x25) = 0x9841000000;
  }
  if (cVar11 == '\0') {
    ar4[0x26] = 0x3f800000;
    ar4[0x27] = 0x41300000;
    ar4[0x28] = 0x40400000;
  }
  else {
    *(ulonglong *)(ar4 + 0x26) = CONCAT44(0x3f800000,in_fr1);
    *(undefined8 *)(ar4 + 0x27) = 0xa041300000;
    in_fr1 = 0x40400000;
    *(undefined8 *)(ar4 + 0x28) = 0x2318c40400000;
  }
  uVar2 = DAT_8c13f604;
  ar4[0x8c63] = DAT_8c13f600;
  ar4[0x8c64] = uVar2;
  ar4[0x8c65] = PTR_FUN_8c13f608;
  uVar2 = DAT_8c13f610;
  ar4[0x8c66] = DAT_8c13f60c;
  ar4[0x8c67] = uVar2;
  ar4[0x8c68] = PTR_FUN_8c13f614;
  uVar2 = DAT_8c13f61c;
  pfVar5 = (float *)(ar4 + 0x8c69);
  ar6_01 = (undefined8 *)&DAT_8c13f618;
  *pfVar5 = DAT_8c13f618;
  ar4[0x8c6a] = uVar2;
  ar4[0x8c6b] = PTR_FUN_8c13f620;
  uVar2 = DAT_8c13f628;
  ar4[0x8c6c] = DAT_8c13f624;
  ar4[0x8c6d] = uVar2;
  ar4[0x8c6e] = PTR_FUN_8c13f62c;
  uVar2 = DAT_8c13f634;
  ar4[0x8c72] = DAT_8c13f630;
  ar4[0x8c73] = uVar2;
  ar4[0x8c74] = PTR_FUN_8c13f638;
  uVar2 = DAT_8c13f640;
  ar4[0x8c75] = DAT_8c13f63c;
  ar4[0x8c76] = uVar2;
  ar4[0x8c77] = PTR_FUN_8c13f644;
  uVar2 = DAT_8c13f64c;
  ar4[0x8c6f] = DAT_8c13f648;
  ar4[0x8c70] = uVar2;
  ar4[0x8c71] = PTR_FUN_8c13f650;
  uVar2 = DAT_8c13f658;
  ar4[0x8c78] = DAT_8c13f654;
  ar4[0x8c79] = uVar2;
  ar4[0x8c7a] = PTR_FUN_8c13f65c;
  uVar2 = DAT_8c13f664;
  ar4[0x8c7b] = DAT_8c13f660;
  ar4[0x8c7c] = uVar2;
  ar4[0x8c7d] = PTR_FUN_8c13f668;
  uVar2 = DAT_8c13f670;
  ar4[0x8c7e] = DAT_8c13f66c;
  ar4[0x8c7f] = uVar2;
  ar4[0x8c80] = PTR_FUN_8c13f674;
  uVar2 = DAT_8c13f67c;
  ar4[0x8c81] = DAT_8c13f678;
  ar4[0x8c82] = uVar2;
  ar4[0x8c83] = PTR_FUN_8c13f680;
  uVar2 = DAT_8c13f688;
  ar4[0x8c84] = DAT_8c13f684;
  ar4[0x8c85] = uVar2;
  ar4[0x8c86] = PTR_FUN_8c13f68c;
  uVar2 = DAT_8c13f694;
  ar4[0x8c87] = DAT_8c13f690;
  ar4[0x8c88] = uVar2;
  ar4[0x8c89] = PTR_FUN_8c13f698;
  uVar2 = DAT_8c13f6a0;
  ar4[0x8c8a] = DAT_8c13f69c;
  ar4[0x8c8b] = uVar2;
  ar4[0x8c8c] = PTR_FUN_8c13f6a4;
  uVar2 = DAT_8c13f6ac;
  ar4[0x8c8d] = DAT_8c13f6a8;
  ar4[0x8c8e] = uVar2;
  ar4[0x8c8f] = PTR_FUN_8c13f6b0;
  uVar2 = DAT_8c13f6b8;
  ar4[0x8c90] = DAT_8c13f6b4;
  ar4[0x8c91] = uVar2;
  ar4[0x8c92] = PTR_FUN_8c13f6bc;
  (**(code **)(ar4[0x8b50] + 8))(ar4 + 0x8b50,&PTR_PTR_8c13da18,&DAT_8c13f618,pfVar5);
  FUN_8c015ad4(ar4 + 0x8b52,&DAT_8c13dde0,ar6_01,pfVar5,in_stack_fffffee4);
  if (cVar11 == '\0') {
    ar4[0x8b53] = 0x446a56b8;
    ar4[0x8b54] = 0x43340000;
    ar4[0x8b55] = 0x43557405;
  }
  else {
    *(undefined8 *)(ar4 + 0x8b53) = 0x22d50446a56b8;
    *(undefined8 *)(ar4 + 0x8b54) = 0x22d5443340000;
    in_fr1 = 0x43557405;
    *(undefined8 *)(ar4 + 0x8b55) = 0x22d5c43557405;
  }
  Vec3_assign(ar4 + 0x8b57,ar4 + 0x8b53,ar6_01,pfVar5);
  if (cVar11 == '\0') {
    ar4[0x8ba8] = 0x43160000;
  }
  else {
    *(undefined8 *)(ar4 + 0x8ba8) = 0xc307b33343160000;
    (*(uint*)((uchar*)&uStack_88+4)) = 0xc3024ccd;
    uStack_74 = 0xa4;
    uStack_64 = 0xa4;
    uStack_54 = 0xc3024ccd;
    in_fr1 = 0xc307b333;
  }
  uStack_50 = 0xc307b333;
  uStack_58 = 0x430acccd;
  uStack_5c = 0x4384e666;
  uStack_60 = 0x430eb333;
  uStack_68 = 0xc3024ccd;
  uStack_6c = 0x4384e666;
  uStack_70 = 0x430eb333;
  uStack_78 = 0xc3024ccd;
  uStack_7c = 0x4384e666;
  uStack_80 = 0xc307b333;
  (*(uint*)((uchar*)&uStack_88+0)) = 0x430acccd;
  *(ulonglong *)auStack_8c = (ulonglong)0x4384e666;
  fStack_90 = -135.7;
  if (cVar11 == '\0') {
    uStack_4c = 0;
  }
  else {
    uStack_44 = 0xc3024ccd;
    in_fr1 = 0xc307b333;
    uStack_4c = in_fr1;
  }
  uStack_40 = 0xc307b333;
  uStack_48 = 0x430acccd;
  if (cVar11 == '\0') {
    uStack_3c = 0;
  }
  else {
    uStack_34 = 0xa4;
    in_fr1 = 0x430eb333;
    uStack_3c = in_fr1;
  }
  uStack_30 = 0x430eb333;
  uStack_38 = 0xc3024ccd;
  if (cVar11 == '\0') {
    uStack_2c = 0;
  }
  else {
    uStack_24 = 0xa4;
    in_fr1 = 0x430eb333;
    uStack_2c = in_fr1;
  }
  uStack_20 = 0x430eb333;
  uStack_28 = 0xc3024ccd;
  if (cVar11 == '\0') {
    uStack_1c = 0;
    dVar9 = (double)CONCAT44(0x430acccd,in_fr1);
  }
  else {
    dVar9 = -643874257197465.6;
    uStack_14 = 0xc3024ccd;
    uStack_1c = in_fr1;
  }
  uStack_18 = 0x430acccd;
  for (iVar6 = 0; uVar2 = SUB84(dVar9,0), iVar6 < 8; iVar6 = iVar6 + 1) {
    pfVar1 = &fStack_90 + iVar6 * 4;
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x3f666666,*pfVar1);
    }
    else {
      in_xd0 = *(undefined8 *)pfVar1;
      dVar9 = 3.02834788845756e-309;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *pfVar1 = fVar8;
    }
    else {
      *(undefined8 *)pfVar1 = in_xd0;
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(auStack_8c + iVar6 * 0x10));
    }
    else {
      in_xd0 = *(undefined8 *)(auStack_8c + iVar6 * 0x10);
      dVar9 = 3.02834788845756e-309;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *(float *)(auStack_8c + iVar6 * 0x10) = fVar8;
    }
    else {
      *(undefined8 *)(auStack_8c + iVar6 * 0x10) = in_xd0;
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(&uStack_88 + iVar6 * 2));
    }
    else {
      in_xd0 = (&uStack_88)[iVar6 * 2];
      dVar9 = 3.02834788845756e-309;
    }
    if (cVar10 == '\0') {
      dVar9 = (double)(ulonglong)(uint)(SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      dVar9 = dVar9 * dVar9;
    }
    if (cVar11 == '\0') {
      *(int *)(&uStack_88 + iVar6 * 2) = SUB84(dVar9,0);
    }
    else {
      (&uStack_88)[iVar6 * 2] = in_xd0;
    }
  }
  (**(code **)(ar4[0x8b5e] + 0x30))(ar4 + 0x8b5e,&fStack_90,ar6_01,pfVar5);
  FUN_8c015ad4(ar4 + 0x8bad,&DAT_8c13e0c4,ar6_01,pfVar5,in_stack_fffffee4);
  if (cVar11 == '\0') {
    ar4[0x8bae] = 0x4475f20c;
    ar4[0x8baf] = 0x43340000;
    ar4[0x8bb0] = 0x44390b33;
  }
  else {
    *(undefined8 *)(ar4 + 0x8bae) = 0x22ebc4475f20c;
    *(undefined8 *)(ar4 + 0x8baf) = 0x22ec043340000;
    uVar2 = 0x44390b33;
    *(undefined8 *)(ar4 + 0x8bb0) = 0x22ec844390b33;
  }
  Vec3_assign(ar4 + 0x8bb2,ar4 + 0x8bae,ar6_01,pfVar5);
  if (cVar11 == '\0') {
    ar4[0x8c03] = 0x428c0000;
  }
  else {
    *(undefined8 *)(ar4 + 0x8c03) = 0xc2780000428c0000;
    (*(uint*)((uchar*)&uStack_88+4)) = 0x94;
    uStack_74 = 0xa4;
    uStack_64 = 0xa4;
    uStack_54 = 0x94;
    uVar2 = 0xc2780000;
  }
  uStack_50 = 0xc2780000;
  uStack_58 = 0x428b0000;
  uStack_5c = 0x429c3333;
  uStack_60 = 0x42816666;
  uStack_68 = 0xc289999a;
  uStack_6c = 0x429c3333;
  uStack_70 = 0x42816666;
  uStack_78 = 0xc289999a;
  uStack_7c = 0x429c3333;
  uStack_80 = 0xc2780000;
  (*(uint*)((uchar*)&uStack_88+0)) = 0x428b0000;
  *(ulonglong *)auStack_8c = (ulonglong)0x429c3333;
  fStack_90 = -62.0;
  if (cVar11 == '\0') {
    uStack_4c = 0;
  }
  else {
    uStack_44 = 0x94;
    uVar2 = 0xc2780000;
    uStack_4c = uVar2;
  }
  uStack_40 = 0xc2780000;
  uStack_48 = 0x428b0000;
  if (cVar11 == '\0') {
    uStack_3c = 0;
  }
  else {
    uStack_34 = 0xa4;
    uVar2 = 0x42816666;
    uStack_3c = uVar2;
  }
  uStack_30 = 0x42816666;
  uStack_38 = 0xc289999a;
  if (cVar11 != '\0') {
    uStack_24 = 0xa4;
    uVar2 = 0x42816666;
    uStack_1c = 0xac;
  }
  uStack_20 = 0x42816666;
  uStack_28 = 0xc289999a;
  if (cVar11 == '\0') {
    uStack_2c = 0;
    dVar9 = (double)CONCAT44(0x428b0000,uVar2);
  }
  else {
    uStack_28 = 0;
    dVar9 = 3.14606954795696e-312;
    uStack_14 = 0x94;
    uStack_2c = uVar2;
  }
  uStack_18 = 0x428b0000;
  for (iVar6 = 0; uVar2 = SUB84(dVar9,0), iVar6 < 8; iVar6 = iVar6 + 1) {
    pfVar5 = &fStack_90 + iVar6 * 4;
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x3f666666,*pfVar5);
    }
    else {
      in_xd0 = *(undefined8 *)pfVar5;
      dVar9 = 3.03607195313667e-309;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *pfVar5 = fVar8;
    }
    else {
      *(undefined8 *)pfVar5 = in_xd0;
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(auStack_8c + iVar6 * 0x10));
    }
    else {
      in_xd0 = *(undefined8 *)(auStack_8c + iVar6 * 0x10);
      dVar9 = 3.03607195313667e-309;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *(float *)(auStack_8c + iVar6 * 0x10) = fVar8;
    }
    else {
      *(undefined8 *)(auStack_8c + iVar6 * 0x10) = in_xd0;
    }
    pfVar5 = &fStack_90 + iVar6 * 4;
    ar6_01 = &uStack_88 + iVar6 * 2;
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(&uStack_88 + iVar6 * 2));
    }
    else {
      in_xd0 = (&uStack_88)[iVar6 * 2];
      dVar9 = 3.03607195313667e-309;
    }
    if (cVar10 == '\0') {
      dVar9 = (double)(ulonglong)(uint)(SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      dVar9 = dVar9 * dVar9;
    }
    if (cVar11 == '\0') {
      *(int *)ar6_01 = SUB84(dVar9,0);
    }
    else {
      *ar6_01 = in_xd0;
    }
  }
  (**(code **)(ar4[0x8bb9] + 0x30))(ar4 + 0x8bb9,&fStack_90,ar6_01,pfVar5);
  FUN_8c015ad4(ar4 + 0x8c08,&DAT_8c13e3c4,ar6_01,pfVar5,in_stack_fffffee4);
  if (cVar11 == '\0') {
    ar4[0x8c09] = 0x440a7a8f;
    ar4[0x8c0a] = 0x43340000;
    ar4[0x8c0b] = 0x44406fa8;
  }
  else {
    *(undefined8 *)(ar4 + 0x8c09) = 0x23028440a7a8f;
    *(undefined8 *)(ar4 + 0x8c0a) = 0x2302c43340000;
    uVar2 = 0x44406fa8;
    *(undefined8 *)(ar4 + 0x8c0b) = 0x2303444406fa8;
  }
  Vec3_assign(ar4 + 0x8c0d,ar4 + 0x8c09,ar6_01,pfVar5);
  if (cVar11 == '\0') {
    ar4[0x8c5e] = 0x42480000;
  }
  else {
    *(undefined8 *)(ar4 + 0x8c5e) = 0xc240000042480000;
    (*(uint*)((uchar*)&uStack_88+4)) = 0x94;
    uStack_74 = 0xa4;
    uStack_64 = 0xa4;
    uStack_54 = 0x94;
    uVar2 = 0xc2400000;
  }
  uStack_50 = 0xc2400000;
  uStack_58 = 0x42286666;
  uStack_5c = 0x42ef0000;
  uStack_60 = 0x42400000;
  uStack_68 = 0xc22ccccd;
  uStack_6c = 0x42ef0000;
  uStack_70 = 0x42400000;
  uStack_78 = 0xc22ccccd;
  uStack_7c = 0x42ef0000;
  uStack_80 = 0xc2400000;
  (*(uint*)((uchar*)&uStack_88+0)) = 0x42286666;
  *(ulonglong *)auStack_8c = (ulonglong)0x42ef0000;
  fStack_90 = -48.0;
  if (cVar11 == '\0') {
    uStack_4c = 0;
  }
  else {
    uStack_44 = 0x94;
    uVar2 = 0xc2400000;
    uStack_4c = uVar2;
  }
  uStack_40 = 0xc2400000;
  uStack_48 = 0x42286666;
  if (cVar11 == '\0') {
    uStack_3c = 0;
  }
  else {
    uStack_34 = 0xa4;
    uVar2 = 0x42400000;
    uStack_3c = uVar2;
  }
  uStack_30 = 0x42400000;
  uStack_38 = 0xc22ccccd;
  if (cVar11 == '\0') {
    uStack_2c = 0;
    uStack_1c = uVar2;
  }
  else {
    uStack_24 = 0xa4;
    uStack_1c = 0x42400000;
    uStack_2c = uVar2;
  }
  uStack_20 = 0x42400000;
  uStack_28 = 0xc22ccccd;
  if (cVar11 == '\0') {
    uStack_1c = 0;
  }
  else {
    uStack_14 = 0x94;
  }
  uStack_18 = 0x42286666;
  for (iVar6 = 0; iVar6 < 8; iVar6 = iVar6 + 1) {
    pfVar5 = &fStack_90 + iVar6 * 4;
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x3f666666,*pfVar5);
    }
    else {
      in_xd0 = *(undefined8 *)pfVar5;
      dVar9 = 3.043796017815786e-309;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *pfVar5 = fVar8;
    }
    else {
      *(undefined8 *)pfVar5 = in_xd0;
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(auStack_8c + iVar6 * 0x10));
    }
    else {
      in_xd0 = *(undefined8 *)(auStack_8c + iVar6 * 0x10);
      dVar9 = 3.043796017815786e-309;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *(float *)(auStack_8c + iVar6 * 0x10) = fVar8;
    }
    else {
      *(undefined8 *)(auStack_8c + iVar6 * 0x10) = in_xd0;
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(&uStack_88 + iVar6 * 2));
    }
    else {
      in_xd0 = (&uStack_88)[iVar6 * 2];
      dVar9 = 3.043796017815786e-309;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *(float *)(&uStack_88 + iVar6 * 2) = fVar8;
    }
    else {
      (&uStack_88)[iVar6 * 2] = in_xd0;
    }
  }
  iVar6 = ar4[0x8c14];
  pcVar3 = *(code **)(iVar6 + 0x30);
  (*pcVar3)(ar4 + 0x8c14,&fStack_90,pcVar3,iVar6);
  ar4[0x8c96] = PTR_s_71_OPEN_WALL_NEW_8c13f2f8;
  Vec3_dtor(&uStack_20,0xffffffff,pcVar3,iVar6);
  pcVar4 = Vec3_dtor;
  Vec3_dtor(&uStack_30,0xffffffff,pcVar3,Vec3_dtor);
  uVar2 = 0xffffffff;
  Vec3_dtor(&uStack_40,0xffffffff,0xffffffff,pcVar4);
  Vec3_dtor(&uStack_50,0xffffffff,uVar2,pcVar4);
  uVar2 = 0xffffffff;
  ar4_00 = &uStack_60;
  Vec3_dtor(ar4_00,0xffffffff,ar4_00,0xffffffff);
  Vec3_dtor(&uStack_70,0xffffffff,ar4_00,uVar2);
  Vec3_dtor(&uStack_80,0xffffffff,ar4_00,uVar2);
  Vec3_dtor(&fStack_90,0xffffffff,ar4_00,uVar2);
  return ar4;
}

__asm__(".globl _s_WaterTank_0dcaa2\n.set _s_WaterTank_0dcaa2, _s_WaterTank_0dcaa2_def\n");
