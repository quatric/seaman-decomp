#include "../decls.h"
undefined4 FUN_8c053730_def(int ar4,int *ar5,undefined4 ar6,undefined1 *ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  code *ar5_00;
  undefined4 uVar4;
  undefined *ar5_01;
  undefined1 *puVar5;
  undefined1 *ar7_00;
  undefined4 uVar6;
  double dVar7;
  float fVar9;
  undefined8 uVar8;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined4 in_stack_fffffed4;
  undefined4 ain0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar6 = 1;
  ar5_00 = Vec3_ctor_zero;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_28,Vec3_ctor_zero,ar6,ar7);
  FUN_8c031748(ar4,ar5_00,ar6,ar7_00);
  FUN_8c022d04(ar4 + 0x90,ar5_00,ar6,ar7_00);
  puVar5 = auStack_38;
  Vec3_scale(ar4 + 0x14,&DAT_8c1365ac,puVar5,ar7_00,puVar5);
  Vec3_add(ar7,auStack_38,puVar5,ar7_00,auStack_48);
  puVar5 = ar7;
  FUN_8c031c74(ar4,auStack_48,ar7,ar7_00);
  Vec3_dtor(auStack_48,0xffffffff,puVar5,ar7_00);
  uVar4 = 0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,puVar5,ar7_00);
  if (cVar12 == '\0') {
    dVar7 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x28);
    dVar7 = 52776566443212.8;
  }
  if (cVar11 == '\0') {
    fVar9 = (float)((ulonglong)dVar7 >> 0x20);
    dVar7 = (double)CONCAT44(fVar9,SUB84(dVar7,0) * fVar9);
  }
  else {
    dVar7 = dVar7 * dVar7;
  }
  if (cVar12 == '\0') {
    *(int *)(ar4 + 0x28) = SUB84(dVar7,0);
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = in_xd0;
  }
  FUN_8c05ae54(ar4,uVar4,puVar5,ar7_00);
  uVar2 = FUN_8c053724(ar5,uVar4,puVar5,ar7_00);
  ain0 = CONCAT31((int3)((uint)in_stack_fffffed4 >> 8),(char)uVar2);
  if ((char)uVar2 == '\0') {
    iVar3 = (**(code **)(*ar5 + 0x34))(ar5,uVar4,puVar5,ar7_00);
    if (iVar3 != 0) {
      uVar4 = (**(code **)(*ar5 + 0x34))(ar5,uVar4,puVar5,ar7_00);
      uVar2 = (undefined4)((ulonglong)dVar7 >> 0x20);
      *(undefined4 *)(ar4 + 0x348) = uVar4;
      ar5_01 = &DAT_8c125d48;
      Vec3_assign(auStack_28,&DAT_8c125d48,puVar5,ar7_00);
      if (*(int *)(ar4 + 0x348) == 3) {
        Vec3_ctor_xyz(auStack_58,ar5_01,puVar5,ar7_00);
        Vec3_assign(auStack_28,auStack_58,puVar5,ar7_00);
        ar5_01 = (undefined *)0xffffffff;
        Vec3_dtor(auStack_58,0xffffffff,puVar5,ar7_00);
      }
      else if (*(int *)(ar4 + 0x348) == 4) {
        Vec3_ctor_xyz(auStack_68,ar5_01,puVar5,ar7_00);
        Vec3_assign(auStack_28,auStack_68,puVar5,ar7_00);
        ar5_01 = (undefined *)0xffffffff;
        Vec3_dtor(auStack_68,0xffffffff,puVar5,ar7_00);
      }
      else {
        *(undefined4 *)(ar4 + 0x348) = 0;
      }
      FUN_8c0230f0(ar4 + 0x14,ar5_01,puVar5,ar7_00,auStack_78);
      FUN_8c022dac(auStack_78,auStack_28,puVar5,ar7_00);
      if (cVar12 == '\0') {
        dVar7 = (double)CONCAT44(0x41200000,uVar2);
      }
      else {
        dVar7 = -7.932637925129825e-251;
      }
      bVar10 = cVar11 == '\0';
      fVar9 = SUB84(dVar7,0);
      uVar1 = (ulonglong)dVar7 >> 0x20;
      Vec3_dtor(auStack_78,0xffffffff,puVar5,ar7_00);
      if (bVar10 && fVar9 < (float)uVar1) {
        *(undefined4 *)(ar4 + 0x348) = 0;
      }
      uVar4 = 0;
      (**(code **)(*ar5 + 0x38))(ar5,0,puVar5,ar7_00);
      if ((*(int *)(ar4 + 0x348) != *(int *)(ar4 + 0x344)) && (*(int *)(ar4 + 0x344) == 0)) {
        *(undefined4 *)(ar4 + 0x344) = *(undefined4 *)(ar4 + 0x348);
        *(undefined4 *)(ar4 + 0x284) = 0;
        *(undefined4 *)(ar4 + 300) = 0;
      }
    }
    iVar3 = *(int *)(ar4 + 0x344);
    if (iVar3 == 0) {
      iVar3 = *(int *)(ar4 + 300);
      if (iVar3 == 0) {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,puVar5,ar7_00);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      else if (iVar3 != 1) {
        if (iVar3 == 2) {
          CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,puVar5,ar7_00,ain0);
          if (cVar12 == '\0') {
            uVar8 = CONCAT44(*(undefined4 *)(ar4 + 0x24c),(int)((ulonglong)dVar7 >> 0x20));
          }
          else {
            uVar8 = *(undefined8 *)(ar4 + 0x24c);
          }
          if (cVar11 != '\0' || (float)((ulonglong)uVar8 >> 0x20) <= (float)uVar8) {
            iVar3 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,uVar4,puVar5,ar7_00);
            if (iVar3 == 7) {
              FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00);
              if (cVar12 == '\0') {
                *(int *)(ar4 + 0x248) = (int)((ulonglong)uVar8 >> 0x20);
              }
              else {
                *(undefined8 *)(ar4 + 0x248) = uVar8;
              }
              *(undefined4 *)(ar4 + 300) = 1;
            }
          }
          else {
            s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar4,puVar5,ar7_00);
          }
        }
        goto LAB_8c053eda;
      }
      iVar3 = *(int *)(ar4 + 0x27c);
      if (iVar3 == 0) {
        ar7_00 = (undefined1 *)0x0;
        puVar5 = (undefined1 *)0xffffffff;
        uVar4 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      }
      else if (iVar3 == 3) {
        ar7_00 = (undefined1 *)0x0;
        puVar5 = (undefined1 *)0xffffffff;
        uVar4 = 0xb;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xb,0xffffffff,0);
      }
      else if (iVar3 == 4) {
        ar7_00 = (undefined1 *)0x0;
        puVar5 = (undefined1 *)0xffffffff;
        uVar4 = 0xc;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xc,0xffffffff,0);
      }
      FUN_8c022d04(ar4 + 0x248,uVar4,puVar5,ar7_00);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x2b8) = 3;
      FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00);
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x248) = (int)((ulonglong)dVar7 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x248) = dVar7;
      }
    }
    else if ((iVar3 == 3) || (iVar3 == 4)) {
      iVar3 = *(int *)(ar4 + 300);
      if (iVar3 == 0) {
        iVar3 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,puVar5,ar7_00);
        if (iVar3 == 1) {
          if (*(int *)(ar4 + 0x344) == 3) {
            FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00);
            FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00);
            Vec3_ctor_xyz(auStack_88,uVar4,puVar5,ar7_00);
            Vec3_assign(ar4 + 0x54,auStack_88,puVar5,ar7_00);
            Vec3_dtor(auStack_88,0xffffffff,puVar5,ar7_00);
          }
          else {
            FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00);
            FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00);
            Vec3_ctor_xyz(auStack_98,uVar4,puVar5,ar7_00);
            Vec3_assign(ar4 + 0x54,auStack_98,puVar5,ar7_00);
            Vec3_dtor(auStack_98,0xffffffff,puVar5,ar7_00);
          }
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
      }
      else if (iVar3 == 1) {
        FUN_8c0230f0(ar4 + 0x14,uVar4,puVar5,ar7_00,auStack_a8);
        FUN_8c0230f0(ar4 + 0x54,uVar4,puVar5,ar7_00,auStack_b8);
        FUN_8c022dac(auStack_a8,auStack_b8,puVar5,ar7_00);
        if (cVar12 == '\0') {
          in_fr15 = (float)((ulonglong)dVar7 >> 0x20);
        }
        Vec3_dtor(auStack_b8,0xffffffff,puVar5,ar7_00);
        uVar2 = SUB84(dVar7,0);
        uVar4 = 0xffffffff;
        Vec3_dtor(auStack_a8,0xffffffff,puVar5,ar7_00);
        if (cVar12 == '\0') {
          dVar7 = (double)CONCAT44(0x41200000,uVar2);
        }
        else {
          dVar7 = 6.37138561414139e-312;
        }
        if (cVar11 == '\0') {
          bVar10 = (float)((ulonglong)dVar7 >> 0x20) < in_fr15;
        }
        else {
          bVar10 = dVar7 < (double)CONCAT44(in_fr14,in_fr15);
        }
        if (bVar10) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          *(undefined4 *)(ar4 + 0x298) = 1;
        }
        else {
          *(undefined4 *)(ar4 + 300) = 0;
          if (*(int *)(ar4 + 0x344) == 3) {
            *(undefined4 *)(ar4 + 0x27c) = 4;
          }
          else {
            *(undefined4 *)(ar4 + 0x27c) = 3;
          }
          *(undefined4 *)(ar4 + 0x344) = 0;
        }
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,puVar5,ar7_00);
      }
      else if (iVar3 == 2) {
        Vec3_ctor_copy(auStack_c8,ar4 + 0x54,puVar5,ar7_00);
        ar7_00 = auStack_c8;
        iVar3 = FUN_8c04e2d0(ar4,ar7,ar7,ar7_00);
        Vec3_dtor(auStack_c8,0xffffffff,ar7,ar7_00);
        puVar5 = ar7;
        if (iVar3 == 0) {
          puVar5 = (undefined1 *)0x12c;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + -1;
        }
      }
    }
  }
  else {
    iVar3 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,CAnimBody_AdvanceFrame_wrapper,puVar5,ar7_00);
    if (iVar3 == 1) {
      *(undefined4 *)(ar4 + 300) = 0;
      uVar6 = 0;
      *(undefined4 *)(ar4 + 0x2b8) = 2;
      *(undefined4 *)(ar4 + 0x284) = 0;
    }
  }
LAB_8c053eda:
  Vec3_dtor(auStack_28,0xffffffff,puVar5,ar7_00);
  return uVar6;
}

__asm__(".globl _FUN_8c053730\n.set _FUN_8c053730, _FUN_8c053730_def\n");
