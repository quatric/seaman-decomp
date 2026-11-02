#include "../decls.h"
undefined4 FUN_8c090bc4_def(int ar4,undefined1 *ar5,undefined1 *ar6,undefined1 *ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 *ar5_00;
  undefined1 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar3;
  uint in_fr1;
  float fVar4;
  double dVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined1 *in_stack_00000000;
  undefined8 uStack_114;
  undefined4 uStack_10c;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [12];
  undefined1 auStack_cc [16];
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar5_00 = ar5;
  ar6_00 = ar6;
  FUN_8c08e9b0(auStack_70,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_80,ar5_00,ar6_00,ar7);
  uVar3 = 1;
  iVar2 = *(int *)(ar4 + 300);
  if ((iVar2 < 7) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      iVar2 = get_field_24_026024(in_stack_00000000,ar5_00,ar6_00,ar7);
      if (iVar2 != 1) {
LAB_8c090c8a:
        if (cVar7 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)in_fr1;
        }
        *(undefined4 *)(ar4 + 300) = 6;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7);
        ar7_00 = 0;
        uVar3 = 0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        uStack_10c = 1;
        Vec3_dtor(auStack_80,0xffffffff,uVar3,ar7_00);
        FUN_8c08e93c(auStack_70,0xffffffff,uVar3,ar7_00);
        return uStack_10c;
      }
      ar5_00 = (undefined1 *)get_field_24_026024(in_stack_00000000,ar5_00,ar6_00,ar7);
      ar6_00 = (undefined1 *)0x1;
      iVar2 = FUN_8c069c24(auStack_70,ar5_00,1,ar7);
      if ((iVar2 == 0) ||
         (ar5_00 = in_stack_00000000, iVar2 = FUN_8c091854(ar4,in_stack_00000000,ar6_00,ar7),
         iVar2 == 1)) goto LAB_8c090c8a;
      Vec3_assign(ar4 + 0x28c,auStack_60,ar6_00,ar7);
      Vec3_scale(auStack_50,&uStack_28,ar6_00,ar7,auStack_90);
      Vec3_assign(ar4 + 0x2a8,auStack_90,ar6_00,ar7);
      ar5_00 = (undefined1 *)0xffffffff;
      Vec3_dtor(auStack_90,0xffffffff,ar6_00,ar7);
      if (cVar7 == '\0') {
        *(undefined4 *)(ar4 + 0x29c) = uStack_40;
        *(undefined4 *)(ar4 + 0x2a0) = uStack_3c;
        *(undefined4 *)(ar4 + 0x2a4) = uStack_38;
        *(undefined4 *)(ar4 + 0x2b8) = uStack_34;
        *(undefined4 *)(ar4 + 700) = uStack_30;
        *(undefined4 *)(ar4 + 0x2c0) = uStack_2c;
        *(undefined4 *)(ar4 + 0x2c4) = uStack_28;
      }
      else {
        *(undefined8 *)(ar4 + 0x29c) = CONCAT44(uStack_3c,uStack_40);
        *(ulonglong *)(ar4 + 0x2a0) = CONCAT44(uStack_38,uStack_3c);
        *(ulonglong *)(ar4 + 0x2a4) = CONCAT44(uStack_34,uStack_38);
        *(ulonglong *)(ar4 + 0x2b8) = CONCAT44(uStack_30,uStack_34);
        *(ulonglong *)(ar4 + 700) = CONCAT44(uStack_2c,uStack_30);
        *(ulonglong *)(ar4 + 0x2c0) = CONCAT44(uStack_28,uStack_2c);
        *(ulonglong *)(ar4 + 0x2c4) = CONCAT44(uStack_24,uStack_28);
      }
      *(undefined4 *)(ar4 + 0x2c8) = uStack_6c;
      *(undefined4 *)(ar4 + 0x2f4) = uStack_68;
      *(undefined4 *)(ar4 + 0x2f8) = uStack_64;
      FUN_8c022d04(ar4 + 0x2e0,ar5_00,ar6_00,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 1:
      Vec3_set_xyz(auStack_9c,ar5_00,ar6_00,ar7);
      FUN_8c023484(ar4 + 0x2a8,auStack_9c,ar6_00,ar7,auStack_ac);
      iVar2 = ar4 + 0x28c;
      Vec3_add(auStack_ac,iVar2,ar6_00,ar7,auStack_bc);
      Vec3_ctor_xyz(auStack_cc,iVar2,ar6_00,ar7);
      Vec3_set_xyz(auStack_d8,iVar2,ar6_00,ar7);
      FUN_8c023484(auStack_cc,auStack_d8,ar6_00,ar7,auStack_e8);
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x42000000,*(undefined4 *)(ar4 + 0x2c4));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x2c4);
        dVar5 = 3.14602454102719e-312;
      }
      if (cVar6 == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      uVar1 = in_xd0;
      if (cVar7 == '\0') {
        uStack_114 = CONCAT44((*(uint*)((uchar*)&uStack_114+4)),fVar4);
        uVar1 = uStack_114;
      }
      uStack_114 = uVar1;
      Vec3_scale(auStack_e8,&uStack_114,ar6_00,ar7,auStack_f8);
      Vec3_sub(auStack_bc,auStack_f8,ar6_00,ar7,auStack_108);
      Vec3_assign(auStack_80,auStack_108,ar6_00,ar7);
      Vec3_dtor(auStack_108,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_f8,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_e8,0xffffffff,ar6_00,ar7);
      object_dtor_delete(auStack_d8,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_cc,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_bc,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_ac,0xffffffff,ar6_00,ar7);
      object_dtor_delete(auStack_9c,0xffffffff,ar6_00,ar7);
      ar6_00 = auStack_80;
      iVar2 = FUN_8c08e9fc(ar4,ar5,ar6_00,ar6);
      ar5_00 = ar5;
      ar7 = ar6;
      if (iVar2 == 0) {
        if (cVar7 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar4;
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 2:
      iVar2 = FUN_8c08eb8c(ar4,ar6,ar6_00,ar7);
      ar5_00 = ar6;
      if (iVar2 == 0) {
        if (cVar7 == '\0') {
          *(undefined4 *)(ar4 + 0x2cc) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2cc) = (ulonglong)in_fr1;
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x240) = 1;
        *(undefined4 *)(ar4 + 0x244) = 1;
      }
      break;
    case 3:
      ar5_00 = *(undefined1 **)(ar4 + 0x2c8);
      FUN_8c0911f0(ar4,ar5_00,ar6,ar7);
      ar6_00 = ar6;
      break;
    case 4:
      ar5_00 = *(undefined1 **)(ar4 + 0x2c8);
      iVar2 = FUN_8c091570(ar4,ar5_00,ar6,ar7);
      ar6_00 = ar6;
      if (iVar2 == 0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 5:
      uVar3 = 0;
      break;
    case 6:
      s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5_00,ar6_00,ar7);
      uVar3 = 0;
    }
  }
  if (((-1 < *(int *)(ar4 + 0x2f4)) && (-1 < *(int *)(ar4 + 0x2f8))) &&
     ((iVar2 = FUN_8c06b054(*(undefined4 *)(ar4 + 0x2f4),ar5_00,ar6_00,ar7), iVar2 == 0 ||
      (iVar2 = FUN_8c091854(ar4,in_stack_00000000,ar6_00,ar7), iVar2 == 1)))) {
    FUN_8c06b1d8(*(undefined4 *)(ar4 + 0x2f4),*(undefined4 *)(ar4 + 0x2f8),ar6_00,ar7);
    uVar3 = 0;
    *(undefined4 *)(ar4 + 0x240) = 0;
    *(undefined4 *)(ar4 + 0x2f4) = 0xffffffff;
    *(undefined4 *)(ar4 + 0x2f8) = 0xffffffff;
    *(undefined4 *)(ar4 + 0x134) = 0;
    *(undefined4 *)(ar4 + 300) = 0;
  }
  (*(uint*)((uchar*)&uStack_114+4)) = uVar3;
  Vec3_dtor(auStack_80,0xffffffff,ar6_00,ar7);
  FUN_8c08e93c(auStack_70,0xffffffff,ar6_00,ar7);
  return (*(uint*)((uchar*)&uStack_114+4));
}

__asm__(".globl _FUN_8c090bc4\n.set _FUN_8c090bc4, _FUN_8c090bc4_def\n");
