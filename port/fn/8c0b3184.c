#include "../decls.h"
undefined4 FUN_8c0b3184_def(int ar4,undefined8 *ar5,undefined8 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *ar6_00;
  undefined4 uVar5;
  float in_fr1;
  float fVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double in_xd0;
  char cVar11;
  char cVar12;
  int in_stack_ffffff34;
  undefined8 uStack_8c;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar5 = 1;
  puVar4 = ar5;
  ar6_00 = ar6;
  Vec3_sub(ar6,ar5,ar6,ar7,auStack_38);
  uVar1 = Vec3_length(auStack_38,puVar4,ar6_00,ar7);
  Vec3_ctor_copy(auStack_28,uVar1,ar6_00,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
  FUN_8c0230f0(ar4 + 0x14,uVar1,ar6_00,ar7,auStack_48);
  FUN_8c0230f0(auStack_28,uVar1,ar6_00,ar7,auStack_58);
  FUN_8c022dac(auStack_48,auStack_58,ar6_00,ar7);
  Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7);
  iVar3 = *(int *)(ar4 + 0x40);
  if ((iVar3 < 6) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      uVar1 = 0;
      iVar3 = FUN_8c034148(ar4 + 0xb0,0,ar6_00,ar7);
      if ((iVar3 != 1) && (iVar3 != 2)) {
        Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
        return 1;
      }
      FUN_8c031748(ar4,uVar1,ar6_00,ar7);
      Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6_00,ar7);
      ar6_00 = (undefined8 *)0x3;
      iVar3 = rand_range(ar4,0,3,ar7);
      if (cVar11 == '\0') {
        dVar9 = (double)CONCAT44((float)(iVar3 + 1),in_fr1);
      }
      else {
        dVar9 = (double)(iVar3 + 1);
      }
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x24) = (int)((ulonglong)dVar9 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x24) = dVar9;
      }
      uVar1 = 0x8c286dbc;
      FUN_8c031b68(ar4,0x8c286dbc,ar6_00,ar7);
      uVar7 = (ulonglong)dVar9 & 0xffffffff;
      if (cVar12 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = uVar7;
      }
      FUN_8c031c64(ar4,uVar1,ar6_00,ar7);
      in_fr1 = (float)uVar7;
      *(undefined4 *)(ar4 + 0x40) = 3;
      *(undefined4 *)(ar4 + 0x44) = 0;
      *(undefined4 *)(ar4 + 0x318) = 0;
    default:
      iVar3 = ar4 + 0x14;
      Vec3_assign(ar4 + 0x80,iVar3,ar6_00,ar7);
      s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,iVar3,ar6_00,ar7);
      if (cVar12 == '\0') {
        in_fr1 = *(float *)(ar4 + 0x28);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x28);
      }
      if (cVar11 == '\0' && 1.0 < in_fr1) {
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(0x3e19999a,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x28);
          dVar9 = 3.73986008970316e-312;
        }
        if (cVar11 == '\0') {
          fVar6 = (float)((ulonglong)dVar9 >> 0x20);
          dVar9 = (double)CONCAT44(fVar6,SUB84(dVar9,0) - fVar6);
        }
        else {
          dVar9 = dVar9 - dVar9;
        }
        in_stack_ffffff34 = ar4;
        if (cVar12 == '\0') {
          *(int *)(ar4 + 0x28) = SUB84(dVar9,0);
        }
        else {
          *(double *)(ar4 + 0x28) = in_xd0;
        }
      }
      else {
        uVar8 = CONCAT44(0x3f800000,in_fr1);
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = uVar8;
        }
        ar6_00 = (undefined8 *)0x3;
        iVar3 = 0;
        iVar2 = rand_range(ar4,0,3,ar7);
        if (cVar11 == '\0') {
          dVar9 = (double)CONCAT44((float)(iVar2 + 1),(int)uVar8);
        }
        else {
          dVar9 = (double)(iVar2 + 1);
        }
        if (cVar12 == '\0') {
          *(int *)(ar4 + 0x24) = (int)((ulonglong)dVar9 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x24) = dVar9;
        }
      }
      CAnimBody_GetCurFrame(ar4 + 0xb0,iVar3,ar6_00,ar7,in_stack_ffffff34);
      dVar10 = dVar9;
      if (cVar12 == '\0') {
        uStack_8c = (double)CONCAT44((*(uint*)((uchar*)&uStack_8c+4)),(int)((ulonglong)dVar9 >> 0x20));
        dVar10 = uStack_8c;
      }
      uStack_8c = dVar10;
      *(undefined4 *)(ar4 + 0x44) = 1;
      puVar4 = ar5;
      Vec3_sub(ar6,ar5,ar6_00,ar7,auStack_68);
      uVar1 = Vec3_length(auStack_68,puVar4,ar6_00,ar7);
      Vec3_assign(auStack_28,uVar1,ar6_00,ar7);
      uVar1 = 0xffffffff;
      Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7);
      FUN_8c0230f0(ar4 + 0x14,uVar1,ar6_00,ar7,auStack_78);
      FUN_8c0230f0(auStack_28,uVar1,ar6_00,ar7,(int)&uStack_8c + 4);
      FUN_8c022dac(auStack_78,(int)&uStack_8c + 4,ar6_00,ar7);
      Vec3_dtor((int)&uStack_8c + 4,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_78,0xffffffff,ar6_00,ar7);
      FUN_8c022fc0(ar5,ar6,ar6_00,ar7);
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),(int)((ulonglong)dVar9 >> 0x20));
        dVar9 = in_xd0;
      }
      else {
        dVar10 = *(double *)(ar4 + 0x28);
      }
      if (cVar11 == '\0') {
        fVar6 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar10 / dVar10,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x30) = fVar6;
      }
      else {
        *(double *)(ar4 + 0x30) = dVar9;
      }
      ar6_00 = ar5;
      uVar5 = FUN_8c031764(ar4,ar6,ar5,ar7);
      if (*(int *)(ar4 + 0x1b8) == 1) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x18c) = *(undefined4 *)ar5;
          *(undefined4 *)(ar4 + 400) = *(undefined4 *)((int)ar5 + 4);
          *(undefined4 *)(ar4 + 0x194) = *(undefined4 *)(ar5 + 1);
          *(undefined4 *)(ar4 + 0x198) = *(undefined4 *)ar6;
          *(undefined4 *)(ar4 + 0x19c) = *(undefined4 *)((int)ar6 + 4);
          *(undefined4 *)(ar4 + 0x1a0) = *(undefined4 *)(ar6 + 1);
        }
        else {
          *(undefined8 *)(ar4 + 0x18c) = *ar5;
          *(undefined8 *)(ar4 + 400) = *(undefined8 *)((int)ar5 + 4);
          *(undefined8 *)(ar4 + 0x194) = ar5[1];
          *(undefined8 *)(ar4 + 0x198) = *ar6;
          *(undefined8 *)(ar4 + 0x19c) = *(undefined8 *)((int)ar6 + 4);
          *(undefined8 *)(ar4 + 0x1a0) = ar6[1];
        }
      }
      break;
    case 2:
      break;
    case 4:
      iVar3 = get_field_1c_026dd8(ar4 + 0xb0,uVar1,ar6_00,ar7);
      if (iVar3 == 0) {
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6_00,ar7);
      }
      else {
        iVar3 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6_00,ar7);
        if (iVar3 == 1) {
          ar7 = 0;
          uVar5 = 0xffffffff;
          uVar1 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar5,ar7);
        }
      }
      uVar5 = FUN_8c031764(ar4,ar6,ar5,ar7);
      ar6_00 = ar5;
    }
  }
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
  return uVar5;
}

__asm__(".globl _FUN_8c0b3184\n.set _FUN_8c0b3184, _FUN_8c0b3184_def\n");
