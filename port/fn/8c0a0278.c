#include "../decls.h"
undefined4 FUN_8c0a0278_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *ar5_00;
  undefined4 uVar4;
  undefined4 *a6;
  undefined1 *ar6_00;
  undefined4 *a7;
  undefined4 *puVar5;
  float fVar6;
  ulonglong in_dr0;
  double dVar7;
  float fVar9;
  double dVar8;
  undefined4 in_fr3;
  undefined4 uVar10;
  undefined8 in_xd0;
  char cVar11;
  char cVar12;
  undefined4 in_stack_ffffff28;
  undefined8 uStack_a0;
  undefined4 uStack_90;
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [4];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 auStack_78 [4];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [12];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar12 = '\0';
  cVar11 = '\0';
  Vec3_ctor_zero(&uStack_20,ar5,ar6,ar7);
  a7 = &uStack_84;
  a6 = &uStack_80;
  puVar5 = &uStack_7c;
  (**(code **)(*ar5 + 0x120))(ar5,puVar5,a6,a7);
  iVar2 = ar4;
  iVar1 = get_field_4_05eed8(ar4,puVar5,a6,a7);
  if (iVar1 != 1) {
    if (iVar1 == 8) {
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(uStack_7c,in_fr3);
        dVar7 = (double)CONCAT44(0x3dcccccd,uStack_7c);
      }
      else {
        dVar8 = (double)CONCAT44(auStack_78[0],uStack_7c);
        dVar7 = 1.3411048210842936e-08;
      }
      if (cVar11 == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) -
                                 SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 - dVar7 * dVar7;
      }
      uStack_7c = SUB84(dVar8,0);
      uVar3 = (undefined4)((ulonglong)dVar8 >> 0x20);
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(uStack_80,uStack_7c);
        dVar7 = (double)CONCAT44(0x3e4ccccd,uStack_80);
        uStack_7c = uVar3;
      }
      else {
        dVar8 = (double)CONCAT44(uStack_7c,uStack_80);
        dVar7 = -7.532505548438758e-251;
        auStack_78[0] = uVar3;
      }
      if (cVar11 == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) -
                                 SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 - dVar7 * dVar7;
      }
      uStack_80 = SUB84(dVar8,0);
      uVar3 = (undefined4)((ulonglong)dVar8 >> 0x20);
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(uStack_84,uStack_80);
        dVar7 = (double)CONCAT44(0x3dcccccd,uStack_84);
        uStack_80 = uVar3;
      }
      else {
        dVar8 = (double)CONCAT44(uStack_80,uStack_84);
        dVar7 = 1.3411048210842936e-08;
        uStack_7c = uVar3;
      }
      if (cVar11 == '\0') {
        fVar9 = (float)((ulonglong)dVar7 >> 0x20);
        fVar6 = SUB84(dVar7,0) * fVar9;
        dVar7 = (double)CONCAT44(fVar9,fVar6);
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - fVar6,SUB84(dVar8,0));
      }
      else {
        dVar7 = dVar7 * dVar7;
        dVar8 = dVar8 - dVar7;
      }
      uVar3 = SUB84(dVar7,0);
      uVar4 = (undefined4)((ulonglong)dVar8 >> 0x20);
      uStack_84 = uVar4;
      if (cVar12 != '\0') {
        uStack_84 = SUB84(dVar8,0);
        uStack_80 = uVar4;
      }
      uVar4 = rand(iVar2,puVar5,a6,a7);
      uVar10 = SUB84(dVar8,0);
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(uStack_7c,uVar3);
      }
      else {
        dVar8 = (double)CONCAT44(auStack_78[0],uStack_7c);
      }
      if (cVar11 == '\0') {
        iVar2 = (int)(float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        iVar2 = (int)dVar8;
      }
      iVar1 = libgcc_divide_helper_01031c(uVar4,iVar2,a6,a7);
      if (cVar11 == '\0') {
        dVar8 = (double)CONCAT44((float)iVar1,SUB84(dVar8,0));
      }
      else {
        dVar8 = (double)iVar1;
      }
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x28) = (int)((ulonglong)dVar8 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x28) = dVar8;
      }
      uVar3 = rand(uVar4,iVar2,a6,a7);
      (**(code **)(*ar5 + 0x180))(ar5,iVar2,a6,a7);
      if (cVar12 == '\0') {
        uStack_a0 = (double)CONCAT44(uVar3,(int)((ulonglong)dVar8 >> 0x20));
        dVar7 = (double)CONCAT44(uStack_80,SUB84(dVar8,0));
      }
      else {
        dVar7 = (double)CONCAT44(uStack_7c,uStack_80);
        uStack_a0 = dVar8;
      }
      if (cVar11 == '\0') {
        iVar2 = (int)(float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        iVar2 = (int)dVar7;
      }
      uVar3 = (*(uint*)((uchar*)&uStack_a0+4));
      iVar1 = libgcc_divide_helper_01031c((*(uint*)((uchar*)&uStack_a0+4)),iVar2,a6,a7);
      if (cVar11 == '\0') {
        dVar8 = (double)CONCAT44((float)iVar1,uVar10);
      }
      else {
        dVar8 = (double)iVar1;
      }
      if (cVar12 == '\0') {
        dVar7 = (double)CONCAT44(0x42c80000,(undefined4)uStack_a0);
      }
      else {
        dVar7 = 5.085573493628304e+232;
      }
      if (cVar11 == '\0') {
        fVar9 = (float)((ulonglong)dVar7 >> 0x20);
        fVar6 = SUB84(dVar7,0) / fVar9;
        dVar7 = (double)CONCAT44(fVar9,fVar6);
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) * fVar6,SUB84(dVar8,0));
      }
      else {
        dVar7 = dVar7 / dVar7;
        dVar8 = dVar8 * dVar7;
      }
      uVar4 = SUB84(dVar7,0);
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x2c) = (int)((ulonglong)dVar8 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x2c) = dVar8;
      }
      uVar3 = rand(uVar3,iVar2,a6,a7);
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(uStack_84,uVar4);
      }
      else {
        dVar8 = (double)CONCAT44(uStack_80,uStack_84);
      }
      if (cVar11 == '\0') {
        iVar2 = (int)(float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        iVar2 = (int)dVar8;
      }
      iVar2 = libgcc_divide_helper_01031c(uVar3,iVar2,a6,a7);
      if (cVar11 == '\0') {
        dVar8 = (double)CONCAT44((float)iVar2,SUB84(dVar8,0));
      }
      else {
        dVar8 = (double)iVar2;
      }
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar8 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x30) = dVar8;
      }
    }
    else if (iVar1 == 0xb) {
      iVar2 = (**(code **)(*ar5 + 0x11c))(ar5,2,a6,a7);
      if (iVar2 == 0) {
        FUN_8c02f404(ar4,2,a6,a7,in_stack_ffffff28);
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0x43960000;
          *(undefined4 *)(ar4 + 0x2c) = 0x43960000;
          *(undefined4 *)(ar4 + 0x30) = 0x43960000;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = 0xa092ed0043960000;
          *(undefined8 *)(ar4 + 0x2c) = 0xa092ed0043960000;
          *(undefined8 *)(ar4 + 0x30) = 0xa092ed0043960000;
        }
      }
      else {
        for (puVar5 = (undefined4 *)0x0; iVar2 = (**(code **)(*ar5 + 0x11c))(ar5,2,a6,a7),
            (int)puVar5 < iVar2; puVar5 = (undefined4 *)((int)puVar5 + 1)) {
          uVar3 = (**(code **)(*ar5 + 0x100))(ar5,2,puVar5,a7);
          a7 = &uStack_90;
          ar6_00 = auStack_8c;
          ar5_00 = auStack_88;
          FUN_8c03f414(uVar3,ar5_00,ar6_00,a7);
          Vec3_set_xyz(auStack_2c,ar5_00,ar6_00,a7);
          vec3_copy_8c02b5fc(auStack_48,auStack_2c,ar6_00,a7);
          FUN_8c023484(&DAT_8c12619c,auStack_48,ar6_00,a7,auStack_58);
          Vec3_ctor_copy(auStack_3c,auStack_58,ar6_00,a7);
          Vec3_dtor(auStack_58,0xffffffff,ar6_00,a7);
          object_dtor_delete(auStack_48,0xffffffff,ar6_00,a7);
          uVar4 = 2;
          a6 = puVar5;
          uVar3 = (**(code **)(*ar5 + 0x100))(ar5,2,puVar5,a7);
          FUN_8c02f670(uVar3,uVar4,a6,a7,auStack_68);
          Vec3_add(auStack_68,auStack_3c,a6,a7,auStack_78);
          Vec3_assign(&uStack_20,auStack_78,a6,a7);
          Vec3_dtor(auStack_78,0xffffffff,a6,a7);
          Vec3_dtor(auStack_68,0xffffffff,a6,a7);
          if (cVar12 == '\0') {
            *(undefined4 *)(ar4 + 0x28) = uStack_20;
            *(undefined4 *)(ar4 + 0x2c) = uStack_1c;
            *(undefined4 *)(ar4 + 0x30) = uStack_18;
          }
          else {
            *(undefined8 *)(ar4 + 0x28) = CONCAT44(uStack_1c,uStack_20);
            *(ulonglong *)(ar4 + 0x2c) = CONCAT44(uStack_18,uStack_1c);
            *(ulonglong *)(ar4 + 0x30) = CONCAT44(uStack_14,uStack_18);
          }
          Vec3_dtor(auStack_3c,0xffffffff,a6,a7);
          object_dtor_delete(auStack_2c,0xffffffff,a6,a7);
        }
      }
    }
    else if ((iVar1 == 0xd) && (*(int *)(ar4 + 0x40) == 9)) {
      uVar3 = rand(iVar2,puVar5,a6,a7);
      uVar4 = 2;
      iVar2 = libgcc_divide_helper_01031c(uVar3,2,a6,a7);
      if (iVar2 == 0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
        }
      }
      else if (cVar12 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = uStack_7c;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = CONCAT44(auStack_78[0],uStack_7c);
      }
      uVar3 = rand(uVar3,uVar4,a6,a7);
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(0x442f0000,uStack_80);
      }
      else {
        in_xd0 = CONCAT44(uStack_7c,uStack_80);
        dVar8 = -7.425279834635228e-251;
      }
      if (cVar11 == '\0') {
        iVar2 = (int)(SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20));
      }
      else {
        iVar2 = (int)(dVar8 - dVar8);
      }
      iVar1 = libgcc_divide_helper_01031c(uVar3,iVar2,a6,a7);
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(0x43af0000,(float)iVar1);
      }
      else {
        dVar8 = 3.458765095218184e+18;
      }
      if (cVar11 == '\0') {
        fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 + dVar8,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x2c) = fVar6;
      }
      else {
        *(undefined8 *)(ar4 + 0x2c) = in_xd0;
      }
      uVar3 = rand(uVar3,iVar2,a6,a7);
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(0x43c80000,uStack_84);
      }
      else {
        in_xd0 = CONCAT44(uStack_80,uStack_84);
        dVar8 = 13510801156472832.0;
      }
      if (cVar11 == '\0') {
        iVar2 = (int)(SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20));
      }
      else {
        iVar2 = (int)(dVar8 - dVar8);
      }
      iVar2 = libgcc_divide_helper_01031c(uVar3,iVar2,a6,a7);
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(0x43480000,(float)iVar2);
      }
      else {
        dVar8 = 2.5193118417763846e+177;
      }
      if (cVar11 == '\0') {
        fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 + dVar8,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x30) = fVar6;
      }
      else {
        *(undefined8 *)(ar4 + 0x30) = in_xd0;
      }
    }
  }
  uVar3 = Vec3_dtor(&uStack_20,0xffffffff,a6,a7);
  return uVar3;
}

__asm__(".globl _FUN_8c0a0278\n.set _FUN_8c0a0278, _FUN_8c0a0278_def\n");
