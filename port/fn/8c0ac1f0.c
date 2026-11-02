#include "../decls.h"
undefined4 FUN_8c0ac1f0_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *ar5_00;
  undefined1 *ar5_01;
  undefined4 uVar4;
  undefined4 *a6;
  undefined1 *ar6_00;
  undefined4 *a7;
  undefined4 *puVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  undefined4 in_fr3;
  undefined4 uVar9;
  double dVar10;
  char cVar11;
  char cVar12;
  undefined4 in_stack_ffffff20;
  undefined8 uStack_c0;
  undefined4 uStack_b0;
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [4];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 auStack_98 [4];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar12 = '\0';
  cVar11 = '\0';
  ar5_00 = ar5;
  Vec3_ctor_zero(&uStack_20,ar5,ar6,ar7);
  Vec3_ctor_xyz(auStack_30,ar5_00,ar6,ar7);
  Vec3_ctor_xyz(auStack_40,ar5_00,ar6,ar7);
  a7 = &uStack_a4;
  a6 = &uStack_a0;
  puVar5 = &uStack_9c;
  (**(code **)(*ar5 + 0x120))(ar5,puVar5,a6,a7);
  iVar2 = ar4;
  iVar1 = get_field_4_05eed8(ar4,puVar5,a6,a7);
  if (iVar1 != 1) {
    if (iVar1 == 8) {
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(uStack_9c,in_fr3);
        dVar7 = (double)CONCAT44(0x3dcccccd,uStack_9c);
      }
      else {
        dVar10 = (double)CONCAT44(auStack_98[0],uStack_9c);
        dVar7 = 1.3411048210842936e-08;
      }
      if (cVar11 == '\0') {
        dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) -
                                  SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar10,0)
                                 );
      }
      else {
        dVar10 = dVar10 - dVar7 * dVar7;
      }
      uStack_9c = SUB84(dVar10,0);
      uVar3 = (undefined4)((ulonglong)dVar10 >> 0x20);
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(uStack_a0,uStack_9c);
        dVar7 = (double)CONCAT44(0x3e4ccccd,uStack_a0);
        uStack_9c = uVar3;
      }
      else {
        dVar10 = (double)CONCAT44(uStack_9c,uStack_a0);
        dVar7 = -7.532505548438758e-251;
        auStack_98[0] = uVar3;
      }
      if (cVar11 == '\0') {
        dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) -
                                  SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar10,0)
                                 );
      }
      else {
        dVar10 = dVar10 - dVar7 * dVar7;
      }
      uStack_a0 = SUB84(dVar10,0);
      uVar3 = (undefined4)((ulonglong)dVar10 >> 0x20);
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(uStack_a4,uStack_a0);
        dVar7 = (double)CONCAT44(0x3dcccccd,uStack_a4);
        uStack_a0 = uVar3;
      }
      else {
        dVar10 = (double)CONCAT44(uStack_a0,uStack_a4);
        dVar7 = 1.3411048210842936e-08;
        uStack_9c = uVar3;
      }
      if (cVar11 == '\0') {
        fVar8 = (float)((ulonglong)dVar7 >> 0x20);
        fVar6 = SUB84(dVar7,0) * fVar8;
        dVar7 = (double)CONCAT44(fVar8,fVar6);
        dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) - fVar6,SUB84(dVar10,0));
      }
      else {
        dVar7 = dVar7 * dVar7;
        dVar10 = dVar10 - dVar7;
      }
      uVar3 = SUB84(dVar7,0);
      uVar4 = (undefined4)((ulonglong)dVar10 >> 0x20);
      uStack_a4 = uVar4;
      if (cVar12 != '\0') {
        uStack_a4 = SUB84(dVar10,0);
        uStack_a0 = uVar4;
      }
      uVar4 = rand(iVar2,puVar5,a6,a7);
      uVar9 = SUB84(dVar10,0);
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(uStack_9c,uVar3);
      }
      else {
        dVar10 = (double)CONCAT44(auStack_98[0],uStack_9c);
      }
      if (cVar11 == '\0') {
        iVar2 = (int)(float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        iVar2 = (int)dVar10;
      }
      iVar1 = libgcc_divide_helper_01031c(uVar4,iVar2,a6,a7);
      if (cVar11 == '\0') {
        dVar10 = (double)CONCAT44((float)iVar1,SUB84(dVar10,0));
      }
      else {
        dVar10 = (double)iVar1;
      }
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x28) = (int)((ulonglong)dVar10 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x28) = dVar10;
      }
      uVar3 = rand(uVar4,iVar2,a6,a7);
      (**(code **)(*ar5 + 0x180))(ar5,iVar2,a6,a7);
      if (cVar12 == '\0') {
        uStack_c0 = (double)CONCAT44(uVar3,(int)((ulonglong)dVar10 >> 0x20));
        dVar7 = (double)CONCAT44(uStack_a0,SUB84(dVar10,0));
      }
      else {
        dVar7 = (double)CONCAT44(uStack_9c,uStack_a0);
        uStack_c0 = dVar10;
      }
      if (cVar11 == '\0') {
        iVar2 = (int)(float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        iVar2 = (int)dVar7;
      }
      uVar3 = (*(uint*)((uchar*)&uStack_c0+4));
      iVar1 = libgcc_divide_helper_01031c((*(uint*)((uchar*)&uStack_c0+4)),iVar2,a6,a7);
      if (cVar11 == '\0') {
        dVar10 = (double)CONCAT44((float)iVar1,uVar9);
      }
      else {
        dVar10 = (double)iVar1;
      }
      if (cVar12 == '\0') {
        dVar7 = (double)CONCAT44(0x42c80000,(undefined4)uStack_c0);
      }
      else {
        dVar7 = 6.03200357491229e-312;
      }
      if (cVar11 == '\0') {
        fVar8 = (float)((ulonglong)dVar7 >> 0x20);
        fVar6 = SUB84(dVar7,0) / fVar8;
        dVar7 = (double)CONCAT44(fVar8,fVar6);
        dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) * fVar6,SUB84(dVar10,0));
      }
      else {
        dVar7 = dVar7 / dVar7;
        dVar10 = dVar10 * dVar7;
      }
      uVar4 = SUB84(dVar7,0);
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x2c) = (int)((ulonglong)dVar10 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x2c) = dVar10;
      }
      uVar3 = rand(uVar3,iVar2,a6,a7);
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(uStack_a4,uVar4);
      }
      else {
        dVar10 = (double)CONCAT44(uStack_a0,uStack_a4);
      }
      if (cVar11 == '\0') {
        iVar2 = (int)(float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        iVar2 = (int)dVar10;
      }
      iVar2 = libgcc_divide_helper_01031c(uVar3,iVar2,a6,a7);
      if (cVar11 == '\0') {
        dVar10 = (double)CONCAT44((float)iVar2,SUB84(dVar10,0));
      }
      else {
        dVar10 = (double)iVar2;
      }
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar10 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x30) = dVar10;
      }
    }
    else if (iVar1 == 0xb) {
      iVar2 = (**(code **)(*ar5 + 0x11c))(ar5,5,a6,a7);
      if (iVar2 == 0) {
        FUN_8c02f404(ar4,2,a6,a7,in_stack_ffffff20);
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0x43fa0000;
          *(undefined4 *)(ar4 + 0x2c) = 0x43fa0000;
          *(undefined4 *)(ar4 + 0x30) = 0x43fa0000;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = 0x10043fa0000;
          *(undefined8 *)(ar4 + 0x2c) = 0x10043fa0000;
          *(undefined8 *)(ar4 + 0x30) = 0x10043fa0000;
        }
      }
      else {
        for (puVar5 = (undefined4 *)0x0; iVar2 = (**(code **)(*ar5 + 0x11c))(ar5,5,a6,a7),
            (int)puVar5 < iVar2; puVar5 = (undefined4 *)((int)puVar5 + 1)) {
          uVar3 = (**(code **)(*ar5 + 0x100))(ar5,5,puVar5,a7);
          a7 = &uStack_b0;
          ar6_00 = auStack_ac;
          ar5_01 = auStack_a8;
          FUN_8c03f414(uVar3,ar5_01,ar6_00,a7);
          Vec3_set_xyz(auStack_4c,ar5_01,ar6_00,a7);
          vec3_copy_8c02b5fc(auStack_68,auStack_4c,ar6_00,a7);
          FUN_8c023484(auStack_30,auStack_68,ar6_00,a7,auStack_78);
          Vec3_ctor_copy(auStack_5c,auStack_78,ar6_00,a7);
          Vec3_dtor(auStack_78,0xffffffff,ar6_00,a7);
          object_dtor_delete(auStack_68,0xffffffff,ar6_00,a7);
          uVar4 = 5;
          a6 = puVar5;
          uVar3 = (**(code **)(*ar5 + 0x100))(ar5,5,puVar5,a7);
          FUN_8c02f670(uVar3,uVar4,a6,a7,auStack_88);
          Vec3_add(auStack_88,auStack_5c,a6,a7,auStack_98);
          Vec3_assign(&uStack_20,auStack_98,a6,a7);
          Vec3_dtor(auStack_98,0xffffffff,a6,a7);
          Vec3_dtor(auStack_88,0xffffffff,a6,a7);
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
          Vec3_dtor(auStack_5c,0xffffffff,a6,a7);
          object_dtor_delete(auStack_4c,0xffffffff,a6,a7);
        }
      }
    }
  }
  Vec3_dtor(auStack_40,0xffffffff,a6,a7);
  Vec3_dtor(auStack_30,0xffffffff,a6,a7);
  uVar3 = Vec3_dtor(&uStack_20,0xffffffff,a6,a7);
  return uVar3;
}

__asm__(".globl _FUN_8c0ac1f0\n.set _FUN_8c0ac1f0, _FUN_8c0ac1f0_def\n");
