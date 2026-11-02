#include "../decls.h"
undefined4 FUN_8c082c50_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *ar5_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar4;
  double in_dr0;
  double dVar5;
  char cVar6;
  char cVar7;
  int in_stack_ffffff0c;
  undefined8 uStack_d4;
  undefined1 auStack_cc [16];
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uStack_c = 1;
  uVar4 = 1;
  uVar3 = **(undefined4 **)(ar5 + 4);
  ar5_00 = &DAT_8c125e78;
  FUN_8c031c74(ar4,&DAT_8c125e78,uVar3,ar7);
  iVar1 = *(int *)(ar4 + 0x134);
  if (iVar1 == 0) {
    if (*(int *)(ar4 + 100) == 1) {
      uVar4 = 0;
    }
    else if (*(int *)(ar4 + 0x128) < 3) {
      uVar4 = 0;
    }
    else {
      FUN_8c031748(ar4,ar5_00,uVar3,ar7);
      Vec3_ctor_copy(auStack_40,&DAT_8c125e68,uVar3,ar7);
      uVar3 = 1;
      iVar1 = FUN_8c0811b4(ar4,auStack_40,1,ar7);
      uStack_d4 = (double)(ulonglong)CONCAT14(iVar1 == 0,(undefined4)uStack_d4);
      Vec3_dtor(auStack_40,0xffffffff,uVar3,ar7);
      if ((*(uint*)((uchar*)&uStack_d4+4)) != 0) {
        ar7_00 = 0;
        uVar2 = 0xffffffff;
        uVar3 = 8;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar2,ar7_00);
        *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
        uVar3 = rand_range(ar4,5,7,ar7_00);
        *(undefined4 *)(ar4 + 0x294) = uVar3;
      }
    }
  }
  else {
    if (iVar1 == 1) {
      if (*(int *)(ar4 + 0x128) < 6) {
        ar7 = 0;
        uVar3 = 0xffffffff;
        ar5_00 = (undefined *)0x16;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x16,0xffffffff,0);
      }
      else if (*(int *)(ar4 + 0x128) == 6) {
        ar7 = 0;
        uVar3 = 0xffffffff;
        ar5_00 = (undefined *)0x10;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0);
      }
      else {
        ar7 = 0;
        uVar3 = 0xffffffff;
        ar5_00 = (undefined *)0x10;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0);
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,uVar3,ar7);
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
    }
    else if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 1;
      }
      FUN_8c0230f0(ar4 + 0x14,ar5_00,uVar3,ar7,auStack_cc);
      FUN_8c082378(ar4,auStack_cc,uVar3,ar7);
      uVar4 = 0xffffffff;
      Vec3_dtor(auStack_cc,0xffffffff,uVar3,ar7);
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,uVar3,ar7);
      if (iVar1 != 1) {
        return 1;
      }
      uVar2 = 0;
      uVar3 = 0xffffffff;
      uVar4 = 0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar3,uVar2);
      *(undefined4 *)(ar4 + 0x134) = 0;
      *(undefined4 *)(ar4 + 0x2b4) = 0;
      return 0;
    }
    FUN_8c0230f0(ar4 + 0x14,ar5_00,uVar3,ar7,auStack_50);
    FUN_8c082378(ar4,auStack_50,uVar3,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_50,0xffffffff,uVar3,ar7);
    iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,uVar3,ar7);
    if (iVar1 == 1) {
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      in_stack_ffffff0c = ar4;
      if ((*(int *)(ar4 + 0x128) < 3) || (5 < *(int *)(ar4 + 0x128))) {
        ar7 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 8;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,ar7);
      }
      else {
        ar7 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 0x14;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x14,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,ar7);
      }
    }
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,uVar3,ar7,in_stack_ffffff0c);
    if (cVar6 == '\0') {
      iVar1 = (int)(float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      iVar1 = (int)in_dr0;
    }
    if (iVar1 == 0x25) {
      ar7 = *(undefined4 *)(ar5 + 0x18);
      uVar3 = **(undefined4 **)(ar5 + 4);
      FUN_8c033474(ar4,0x1b,uVar3,ar7);
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x44bb8000,*(undefined4 *)(**(int **)(ar5 + 4) + 8));
      }
      else {
        dVar5 = 3.14625103273492e-312;
      }
      if (cVar6 == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - SUB84(dVar5,0),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 - dVar5;
      }
      if (cVar7 == '\0') {
        uStack_d4 = (double)CONCAT44((*(uint*)((uchar*)&uStack_d4+4)),(int)((ulonglong)dVar5 >> 0x20));
        dVar5 = uStack_d4;
      }
      uStack_d4 = dVar5;
      Vec3_scale(ar4 + 0x14,&uStack_d4,uVar3,ar7,auStack_60);
      Vec3_scale(auStack_60,&DAT_8c1379c8,uVar3,ar7,auStack_70);
      Vec3_ctor_copy(auStack_20,auStack_70,uVar3,ar7);
      Vec3_dtor(auStack_70,0xffffffff,uVar3,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_60,0xffffffff,uVar3,ar7);
      FUN_8c02374c(auStack_20,uVar2,uVar3,ar7);
      Vec3_assign(auStack_20,auStack_80,uVar3,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_80,0xffffffff,uVar3,ar7);
      Vec3_ctor_xyz(auStack_90,uVar2,uVar3,ar7);
      vec3_copy_8c02b5fc(auStack_9c,*(undefined4 *)(*(int *)(ar5 + 4) + 4),uVar3,ar7);
      FUN_8c023484(auStack_90,auStack_9c,uVar3,ar7,auStack_ac);
      Vec3_add(**(undefined4 **)(ar5 + 4),auStack_ac,uVar3,ar7,auStack_bc);
      Vec3_ctor_copy(auStack_30,auStack_bc,uVar3,ar7);
      Vec3_dtor(auStack_bc,0xffffffff,uVar3,ar7);
      Vec3_dtor(auStack_ac,0xffffffff,uVar3,ar7);
      object_dtor_delete(auStack_9c,0xffffffff,uVar3,ar7);
      Vec3_dtor(auStack_90,0xffffffff,uVar3,ar7);
      ar6_00 = auStack_20;
      FUN_8c0dba50(*(undefined4 *)(ar5 + 0x18),auStack_30,ar6_00,ar7);
      Vec3_dtor(auStack_30,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_20,0xffffffff,ar6_00,ar7);
    }
    FUN_8c031c74(ar4,&DAT_8c125e78,**(undefined4 **)(ar5 + 4),ar7);
  }
  return uVar4;
}

__asm__(".globl _FUN_8c082c50\n.set _FUN_8c082c50, _FUN_8c082c50_def\n");
