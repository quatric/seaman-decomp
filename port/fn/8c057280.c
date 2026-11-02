#include "../decls.h"
undefined4 FUN_8c057280_def(undefined **ar4,undefined **ar5,undefined **ar6,code *ar7)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint in_fr1;
  char cVar8;
  undefined1 auStack_104 [16];
  undefined1 auStack_f4 [16];
  undefined1 auStack_e4 [16];
  undefined1 auStack_d4 [16];
  undefined1 auStack_c4 [16];
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [20];
  
  cVar8 = '\0';
  uVar7 = 1;
  ppuVar5 = ar5;
  ppuVar4 = ar6;
  do {
    puVar2 = ar4[0x4b];
    if ((0xc < (int)puVar2) || ((int)puVar2 < 0)) goto switchD_8c0572ba_caseD_5;
    ppuVar4 = &switchdata_8c0572ba_8c0572c4;
                    
    switch((uint)puVar2) {
    case 0x0:
      ar4[0xb] = (undefined *)0x0;
      if (ar6 == (undefined **)0x1) {
        ar4[0x4b] = ar4[0x4b] + 1;
        ppuVar5 = ar4;
        ppuVar4 = &switchdata_8c0572ba_8c0572c4;
      }
      else {
        ar4[0x4b] = (undefined *)0xa;
      }
      break;
    case 0x1:
      ar4[0xae] = (undefined *)0x2;
      vec3_clear(ar4 + 0xaa,vec3_clear,&switchdata_8c0572ba_8c0572c4,ar7);
      pcVar6 = vec3_clear;
      vec3_clear(ar4 + 0xb5,vec3_clear,ppuVar4,ar7);
      FUN_8c02a1fc(ar4 + 0xb2,pcVar6,ppuVar4,ar7);
      if (cVar8 == '\0') {
        ar4[10] = (undefined *)0x0;
      }
      else {
        *(ulonglong *)(ar4 + 10) = (ulonglong)in_fr1;
      }
      ar4[0x4b] = ar4[0x4b] + 1;
      goto switchD_8c0572ba_caseD_5;
    case 0x2:
      ar7 = (code *)(uint)ar4[0x91];
      uVar3 = 0x1e;
      FUN_8c033474(ar4,0x1e,ar5,ar7);
      Vec3_ctor_xyz(auStack_24,uVar3,ar5,ar7);
      iVar1 = FUN_8c023334(ar4 + 5,auStack_24,ar5,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_24,0xffffffff,ar5,ar7);
      if (iVar1 == 3) {
        Vec3_set_xyz(auStack_30,uVar3,ar5,ar7);
        FUN_8c023484(ar4 + 5,auStack_30,ar5,ar7,auStack_40);
        Vec3_assign(ar4 + 5,auStack_40,ar5,ar7);
        Vec3_dtor(auStack_40,0xffffffff,ar5,ar7);
        object_dtor_delete(auStack_30,0xffffffff,ar5,ar7);
        ar7 = (code *)0x0;
        ar5 = (undefined **)0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0x2f,0xffffffff,0);
      }
      else if (iVar1 == 4) {
        Vec3_set_xyz(auStack_4c,uVar3,ar5,ar7);
        FUN_8c023484(ar4 + 5,auStack_4c,ar5,ar7,auStack_5c);
        Vec3_assign(ar4 + 5,auStack_5c,ar5,ar7);
        Vec3_dtor(auStack_5c,0xffffffff,ar5,ar7);
        object_dtor_delete(auStack_4c,0xffffffff,ar5,ar7);
        ar7 = (code *)0x0;
        ar5 = (undefined **)0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0x26,0xffffffff,0);
      }
      ar4[0xae] = (undefined *)0x3;
      ppuVar5 = ar4 + 5;
      Vec3_assign(ar4 + 0x20,ppuVar5,ar5,ar7);
      if (ar4[0x4a] == (undefined *)0x3) {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ppuVar5,ar5,ar7);
      }
      else {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ppuVar5,ar5,ar7);
      }
      ar4[0x4b] = ar4[0x4b] + 1;
      ppuVar4 = ar5;
    case 0x3:
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x2c,ppuVar5,ppuVar4,ar7);
      if (iVar1 == 1) {
        ppuVar4 = (undefined **)0x64;
        iVar1 = rand_range(ar4,0,100,ar7);
        if (iVar1 < 0x32) {
          ar4[0x4b] = (undefined *)0x0;
          ar4[0xae] = (undefined *)0x2;
          uVar7 = 0;
        }
        else {
          ar7 = (code *)0x0;
          ppuVar4 = (undefined **)0xffffffff;
          uVar3 = 3;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,3,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,uVar3,ppuVar4,ar7);
          ar4[0xae] = (undefined *)0x3;
          ar4[0x4b] = ar4[0x4b] + 1;
        }
      }
      goto switchD_8c0572ba_caseD_5;
    case 0x4:
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0
                        (ar4 + 0x2c,ppuVar5,&switchdata_8c0572ba_8c0572c4,ar7);
      if (iVar1 == 1) {
        ar4[0x4b] = (undefined *)0x0;
        ar4[0xae] = (undefined *)0x2;
        uVar7 = 0;
      }
    default:
      goto switchD_8c0572ba_caseD_5;
    case 0xa:
      Vec3_scale(ar4 + 5,&DAT_8c1365e4,&switchdata_8c0572ba_8c0572c4,ar7,auStack_6c);
      Vec3_add(ar5,auStack_6c,ppuVar4,ar7,auStack_7c);
      ppuVar5 = ar5;
      FUN_8c031c74(ar4,auStack_7c,ar5,ar7);
      Vec3_dtor(auStack_7c,0xffffffff,ppuVar5,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_6c,0xffffffff,ppuVar5,ar7);
      FUN_8c05ae54(ar4,uVar3,ppuVar5,ar7);
      FUN_8c031748(ar4,uVar3,ppuVar5,ar7);
      ar7 = (code *)(uint)ar4[0x91];
      uVar3 = 0x1e;
      ppuVar5 = ar5;
      FUN_8c033474(ar4,0x1e,ar5,ar7);
      FUN_8c032ab0(ar4,uVar3,ppuVar5,ar7);
      Vec3_ctor_xyz(auStack_8c,uVar3,ppuVar5,ar7);
      iVar1 = FUN_8c023334(ar4 + 5,auStack_8c,ppuVar5,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_8c,0xffffffff,ppuVar5,ar7);
      if (iVar1 == 3) {
        Vec3_set_xyz(auStack_98,uVar3,ppuVar5,ar7);
        FUN_8c023484(ar4 + 5,auStack_98,ppuVar5,ar7,auStack_a8);
        Vec3_assign(ar4 + 5,auStack_a8,ppuVar5,ar7);
        Vec3_dtor(auStack_a8,0xffffffff,ppuVar5,ar7);
        object_dtor_delete(auStack_98,0xffffffff,ppuVar5,ar7);
        ppuVar5 = ar4 + 0x9e;
        if (cVar8 == '\0') {
          *ppuVar5 = (undefined *)0x3f333333;
        }
        else {
          ppuVar5[0] = (undefined *)0x3f333333;
          ppuVar5[1] = (undefined *)0xbf800000;
        }
        ar7 = (code *)0x0;
        ppuVar5 = (undefined **)0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0xc,0xffffffff,0);
      }
      else if (iVar1 == 4) {
        Vec3_set_xyz(auStack_b4,uVar3,ppuVar5,ar7);
        FUN_8c023484(ar4 + 5,auStack_b4,ppuVar5,ar7,auStack_c4);
        Vec3_assign(ar4 + 5,auStack_c4,ppuVar5,ar7);
        Vec3_dtor(auStack_c4,0xffffffff,ppuVar5,ar7);
        object_dtor_delete(auStack_b4,0xffffffff,ppuVar5,ar7);
        ppuVar5 = ar4 + 0x9e;
        if (cVar8 == '\0') {
          *ppuVar5 = (undefined *)0x3f333333;
        }
        else {
          ppuVar5[0] = (undefined *)0x3f333333;
          ppuVar5[1] = (undefined *)0xbf800000;
        }
        ar7 = (code *)0x0;
        ppuVar5 = (undefined **)0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0xb,0xffffffff,0);
      }
      ppuVar4 = ar4 + 5;
      Vec3_assign(ar4 + 0x20,ppuVar4,ppuVar5,ar7);
      if ((int)ar4[0x4a] < 3) {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ppuVar4,ppuVar5,ar7);
      }
      else {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ppuVar4,ppuVar5,ar7);
      }
      ar4[0x4b] = ar4[0x4b] + 1;
      ppuVar4 = ar4;
    case 0xb:
      Vec3_scale(ar4 + 5,&DAT_8c1365e8,ppuVar4,ar7,auStack_d4);
      Vec3_add(ar5,auStack_d4,ppuVar4,ar7,auStack_e4);
      FUN_8c031c74(ar4,auStack_e4,ar5,ar7);
      Vec3_dtor(auStack_e4,0xffffffff,ar5,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_d4,0xffffffff,ar5,ar7);
      FUN_8c05ae54(ar4,uVar3,ar5,ar7);
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x2c,ar4 + 0x9e,ar5,ar7);
      ppuVar4 = ar5;
      if (iVar1 == 1) {
        ar7 = (code *)0x0;
        ppuVar4 = (undefined **)0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0,0xffffffff,0);
        uVar3 = 0xb0;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,0xb0,ppuVar4,ar7);
        FUN_8c03c314(ar4,uVar3,ppuVar4,ar7);
        ar4[0x4b] = ar4[0x4b] + 1;
      }
switchD_8c0572ba_caseD_5:
      Vec3_assign(ar4 + 0x20,ar4 + 5,ppuVar4,ar7);
      return uVar7;
    case 0xc:
      Vec3_scale(ar4 + 5,&DAT_8c1365ec,&switchdata_8c0572ba_8c0572c4,ar7,auStack_f4);
      Vec3_add(ar5,auStack_f4,ppuVar4,ar7,auStack_104);
      FUN_8c031c74(ar4,auStack_104,ar5,ar7);
      Vec3_dtor(auStack_104,0xffffffff,ar5,ar7);
      uVar3 = 0xffffffff;
      ar7 = Vec3_dtor;
      Vec3_dtor(auStack_f4,0xffffffff,ar5,Vec3_dtor);
      pcVar6 = FUN_8c05ae54;
      FUN_8c05ae54(ar4,uVar3,FUN_8c05ae54,ar7);
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x2c,0xb0,pcVar6,ar7);
      ppuVar4 = (undefined **)pcVar6;
      if (iVar1 == 1) {
        uVar7 = 0;
        ar4[0x4b] = (undefined *)0x0;
        ppuVar4 = (undefined **)pcVar6;
      }
      goto switchD_8c0572ba_caseD_5;
    }
  } while( true );
}

__asm__(".globl _FUN_8c057280\n.set _FUN_8c057280, _FUN_8c057280_def\n");
