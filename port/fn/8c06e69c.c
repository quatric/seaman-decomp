#include "../decls.h"
undefined4 * Class_12a25c_m6_06e69c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  code *pcVar11;
  int iVar12;
  
  *(undefined4 *)(ar4 + 0x128) = ar5;
  iVar12 = *(int *)(ar4 + 0x128);
  FUN_8c031b68(ar4,iVar12 * 0x18 + -0x73d7f14c,ar6,iVar12);
  uVar2 = DAT_8c13797c;
  uVar1 = DAT_8c137964;
  ar6_00 = DAT_8c137960;
  uVar8 = DAT_8c13794c;
  uVar9 = DAT_8c137934;
  uVar7 = DAT_8c13791c;
  uVar4 = DAT_8c137904;
  puVar3 = (undefined4 *)0x128;
  iVar6 = *(int *)(ar4 + 0x128);
  if ((iVar6 < 8) && (-1 < iVar6)) {
                    
    switch(iVar6) {
    case 0:
      *(undefined4 *)(ar4 + 0x2dc) = DAT_8c137900;
      *(undefined4 *)(ar4 + 0x2e0) = uVar4;
      *(undefined **)(ar4 + 0x2e4) = PTR_FUN_8c137908;
      uVar4 = DAT_8c137910;
      puVar3 = &DAT_8c13790c;
      *(undefined4 *)(ar4 + 0x2e8) = DAT_8c13790c;
      *(undefined4 *)(ar4 + 0x2ec) = uVar4;
      *(undefined **)(ar4 + 0x2f0) = PTR_FUN_8c137914;
      break;
    case 1:
      *(undefined4 *)(ar4 + 0x2dc) = DAT_8c137918;
      *(undefined4 *)(ar4 + 0x2e0) = uVar7;
      *(undefined **)(ar4 + 0x2e4) = PTR_FUN_8c137920;
      uVar4 = DAT_8c137928;
      puVar3 = (undefined4 *)(ar4 + 0x2e8);
      *puVar3 = DAT_8c137924;
      *(undefined4 *)(ar4 + 0x2ec) = uVar4;
      *(undefined **)(ar4 + 0x2f0) = PTR_FUN_8c13792c;
      break;
    case 2:
      *(undefined4 *)(ar4 + 0x2dc) = DAT_8c137930;
      *(undefined4 *)(ar4 + 0x2e0) = uVar9;
      *(undefined **)(ar4 + 0x2e4) = PTR_FUN_8c137938;
      uVar4 = DAT_8c137940;
      puVar3 = &DAT_8c13793c;
      *(undefined4 *)(ar4 + 0x2e8) = DAT_8c13793c;
      *(undefined4 *)(ar4 + 0x2ec) = uVar4;
      *(undefined **)(ar4 + 0x2f0) = PTR_FUN_8c137944;
      uVar7 = 9;
      uVar9 = 0xb0;
      uVar4 = FUN_8c03c0f0(ar4 + 0xb0,9,&DAT_8c13793c,0xb0);
      piVar5 = (int *)deref_u32(uVar4,uVar7,puVar3,uVar9);
      if (*(int *)(*piVar5 + 4) == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        uVar7 = 9;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,9,puVar3,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,puVar3,uVar9);
        uVar9 = 0;
        puVar10 = &DAT_8c137618;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137618,0);
        uVar7 = 10;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,10,puVar10,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,puVar10,uVar9);
        uVar9 = 0;
        puVar10 = &DAT_8c137630;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137630,0);
        uVar7 = 2;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,2,puVar10,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,puVar10,uVar9);
        uVar9 = 0;
        puVar10 = &DAT_8c137648;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137648,0);
        uVar7 = 3;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,3,puVar10,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,puVar10,uVar9);
        puVar3 = (undefined4 *)FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137660,0);
      }
      break;
    default:
      *(undefined4 *)(ar4 + 0x2dc) = DAT_8c137948;
      *(undefined4 *)(ar4 + 0x2e0) = uVar8;
      *(undefined **)(ar4 + 0x2e4) = PTR_FUN_8c137950;
      uVar4 = DAT_8c137958;
      *(undefined4 *)(ar4 + 0x2e8) = DAT_8c137954;
      *(undefined4 *)(ar4 + 0x2ec) = uVar4;
      *(undefined **)(ar4 + 0x2f0) = PTR_FUN_8c13795c;
      uVar7 = 9;
      pcVar11 = FUN_8c03c0f0;
      uVar4 = FUN_8c03c0f0(ar4 + 0xb0,9,FUN_8c03c0f0,iVar12);
      puVar3 = (undefined4 *)deref_u32(uVar4,uVar7,pcVar11,iVar12);
      puVar3 = (undefined4 *)*puVar3;
      if (puVar3[1] != 0) {
        uVar9 = 9;
        uVar7 = 9;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,9,9,iVar12);
        uVar4 = deref_u32(uVar4,uVar7,uVar9,iVar12);
        uVar9 = 0;
        puVar10 = &DAT_8c137678;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137678,0);
        uVar7 = 10;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,10,puVar10,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,deref_u32,uVar9);
        uVar9 = 0;
        puVar10 = &DAT_8c137690;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137690,0);
        uVar7 = 2;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,2,puVar10,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,puVar10,uVar9);
        uVar9 = 0;
        puVar10 = &DAT_8c1376a8;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1376a8,0);
        uVar7 = 3;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,3,puVar10,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,puVar10,uVar9);
        puVar3 = (undefined4 *)FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1376c0,0);
      }
      break;
    case 6:
      puVar3 = (undefined4 *)(ar4 + 0x2dc);
      *puVar3 = DAT_8c137960;
      *(undefined4 *)(ar4 + 0x2e0) = uVar1;
      *(undefined **)(ar4 + 0x2e4) = PTR_FUN_8c137968;
      uVar4 = DAT_8c137970;
      *(undefined4 *)(ar4 + 0x2e8) = DAT_8c13796c;
      *(undefined4 *)(ar4 + 0x2ec) = uVar4;
      *(undefined **)(ar4 + 0x2f0) = PTR_FUN_8c137974;
      uVar7 = 9;
      uVar4 = FUN_8c03c0f0(ar4 + 0xb0,9,ar6_00,puVar3);
      pcVar11 = deref_u32;
      piVar5 = (int *)deref_u32(uVar4,uVar7,deref_u32,puVar3);
      if (*(int *)(*piVar5 + 4) == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        uVar7 = 0x11;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x11,pcVar11,puVar3);
        uVar4 = deref_u32(uVar4,uVar7,pcVar11,puVar3);
        uVar9 = 0;
        puVar10 = &DAT_8c1377f8;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1377f8,0);
        uVar7 = 0x11;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x11,puVar10,uVar9);
        piVar5 = (int *)deref_u32(uVar4,uVar7,puVar10,uVar9);
        *(undefined4 *)(*piVar5 + 4) = DAT_8c1377fc;
        uVar7 = 0x11;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x11,puVar10,piVar5);
        piVar5 = (int *)deref_u32(uVar4,uVar7,puVar10,piVar5);
        uVar4 = DAT_8c137808;
        *(undefined4 *)(*piVar5 + 0x10) = DAT_8c137808;
        uVar9 = 9;
        uVar8 = 0xb0;
        uVar7 = FUN_8c03c0f0(ar4 + 0xb0,9,0xb0,uVar4);
        uVar4 = deref_u32(uVar7,uVar9,uVar8,uVar4);
        uVar9 = 0;
        puVar10 = &DAT_8c1376d8;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1376d8,0);
        uVar7 = 10;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,10,puVar10,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,puVar10,uVar9);
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137708,0);
        uVar7 = 2;
        uVar9 = 0xb0;
        pcVar11 = FUN_8c03c0f0;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,2,FUN_8c03c0f0,0xb0);
        uVar4 = deref_u32(uVar4,uVar7,pcVar11,uVar9);
        uVar7 = 0;
        puVar10 = &DAT_8c137798;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137798,0);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,3,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,uVar4,puVar10,uVar7);
        uVar7 = 0;
        puVar10 = &DAT_8c1377c8;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1377c8,0);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x14,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,uVar4,puVar10,uVar7);
        uVar7 = 0;
        puVar10 = &DAT_8c137828;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137828,0);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x19,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,uVar4,puVar10,uVar7);
        uVar7 = 1;
        puVar10 = &DAT_8c137738;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137738,1);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x1a,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,uVar4,puVar10,uVar7);
        uVar7 = 1;
        puVar10 = &DAT_8c137768;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137768,1);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x20,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,deref_u32,puVar10,uVar7);
        puVar3 = (undefined4 *)FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137858,0);
      }
      break;
    case 7:
      *(undefined4 *)(ar4 + 0x2dc) = DAT_8c137978;
      *(undefined4 *)(ar4 + 0x2e0) = uVar2;
      *(undefined **)(ar4 + 0x2e4) = PTR_FUN_8c137980;
      uVar4 = DAT_8c137988;
      *(undefined4 *)(ar4 + 0x2e8) = DAT_8c137984;
      *(undefined4 *)(ar4 + 0x2ec) = uVar4;
      *(undefined **)(ar4 + 0x2f0) = PTR_FUN_8c13798c;
      uVar7 = 9;
      uVar9 = 0xb0;
      uVar4 = FUN_8c03c0f0(ar4 + 0xb0,9,0xb0,iVar12);
      piVar5 = (int *)deref_u32(uVar4,uVar7,uVar9,iVar12);
      iVar12 = *piVar5;
      iVar6 = *(int *)(iVar12 + 4);
      if (iVar6 != 0) {
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x11,iVar6,iVar12);
        uVar4 = deref_u32(uVar4,uVar4,iVar6,iVar12);
        uVar9 = 0;
        puVar10 = &DAT_8c137810;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137810,0);
        uVar7 = 0x11;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x11,puVar10,uVar9);
        piVar5 = (int *)deref_u32(uVar4,uVar7,puVar10,uVar9);
        uVar4 = DAT_8c137814;
        *(undefined4 *)(*piVar5 + 4) = DAT_8c137814;
        uVar9 = 0x11;
        uVar7 = FUN_8c03c0f0(ar4 + 0xb0,0x11,0x11,uVar4);
        piVar5 = (int *)deref_u32(uVar7,uVar7,uVar9,uVar4);
        *(undefined4 *)(*piVar5 + 0x10) = DAT_8c137820;
        uVar7 = 9;
        uVar9 = 0xb0;
        iVar6 = ar4 + 0xb0;
        uVar4 = FUN_8c03c0f0(iVar6,9,iVar6,0xb0);
        uVar4 = deref_u32(uVar4,uVar7,iVar6,uVar9);
        uVar7 = 0;
        puVar10 = &DAT_8c1376f0;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1376f0,0);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,10,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,uVar4,puVar10,uVar7);
        uVar9 = 0;
        puVar10 = &DAT_8c137720;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137720,0);
        uVar7 = 2;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,2,puVar10,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,puVar10,uVar9);
        uVar9 = 0;
        puVar10 = &DAT_8c1377b0;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1377b0,0);
        uVar7 = 3;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,3,puVar10,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,puVar10,uVar9);
        uVar9 = 0;
        puVar10 = &DAT_8c1377e0;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1377e0,0);
        uVar7 = 0x14;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x14,puVar10,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,puVar10,uVar9);
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137840,0);
        iVar6 = ar4 + 0xb0;
        pcVar11 = FUN_8c03c0f0;
        uVar4 = FUN_8c03c0f0(iVar6,0x19,FUN_8c03c0f0,iVar6);
        uVar4 = deref_u32(uVar4,uVar4,pcVar11,iVar6);
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137750,1);
        uVar7 = 0x1a;
        uVar9 = 0xb0;
        iVar6 = ar4 + 0xb0;
        uVar4 = FUN_8c03c0f0(iVar6,0x1a,iVar6,0xb0);
        uVar4 = deref_u32(uVar4,uVar7,iVar6,uVar9);
        puVar10 = &DAT_8c137780;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137780,1);
        uVar9 = 0x20;
        uVar7 = 0x20;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x20,puVar10,0x20);
        uVar4 = deref_u32(uVar4,uVar7,puVar10,uVar9);
        uVar7 = 0;
        puVar10 = &DAT_8c137870;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137870,0);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x27,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,uVar4,puVar10,uVar7);
        uVar7 = 0;
        puVar10 = &DAT_8c137888;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137888,0);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x28,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,uVar4,puVar10,uVar7);
        uVar7 = 0;
        puVar10 = &DAT_8c1378a0;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1378a0,0);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x21,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,uVar4,puVar10,uVar7);
        uVar7 = 0;
        puVar10 = &DAT_8c1378b8;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1378b8,0);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x22,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,uVar4,puVar10,uVar7);
        uVar7 = 0;
        puVar10 = &DAT_8c1378d0;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1378d0,0);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x32,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,deref_u32,puVar10,uVar7);
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1378e8,0);
      }
      puVar3 = *(undefined4 **)(ar4 + 100);
      if (puVar3 == (undefined4 *)0x1) {
        puVar3 = (undefined4 *)s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0);
      }
    }
  }
  return puVar3;
}

__asm__(".globl _Class_12a25c_m6_06e69c\n.set _Class_12a25c_m6_06e69c, _Class_12a25c_m6_06e69c_def\n");
