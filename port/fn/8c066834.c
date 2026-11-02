#include "../decls.h"
undefined4 FUN_8c066834_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 *ar6_00;
  undefined1 *ar6_01;
  undefined1 *ar7_00;
  undefined1 *a6;
  undefined1 *puVar5;
  uint in_fr1;
  double dVar6;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined1 auStack_184 [4];
  undefined1 auStack_180 [4];
  undefined1 auStack_17c [4];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [12];
  undefined1 auStack_11c [16];
  undefined1 auStack_10c [12];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [12];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [12];
  undefined1 auStack_88 [12];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  uint auStack_2c [5];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar2 = 0;
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_2c,0,ar6,ar7);
  if (cVar9 == '\0') {
    in_fr15 = 50.0;
  }
  Vec3_ctor_xyz(auStack_3c,uVar2,ar6_00,ar7);
  pcVar3 = Vec3_ctor_xyz;
  Vec3_ctor_xyz(auStack_4c,Vec3_ctor_xyz,ar6_00,ar7);
  Vec3_ctor_xyz(auStack_5c,pcVar3,ar6_00,ar7);
  Vec3_ctor_xyz(auStack_6c,pcVar3,ar6_00,ar7);
  Vec3_ctor_zero(auStack_7c,Vec3_ctor_zero,ar6_00,ar7);
  if (cVar9 == '\0') {
    auStack_2c[0] = 0;
  }
  else {
    auStack_2c[3] = 0;
    auStack_2c[0] = in_fr1;
  }
  dVar6 = (double)(ulonglong)in_fr1;
  auStack_2c[2] = 0;
  auStack_2c[1] = 0;
  if (*(int *)(ar4 + 0x6c) == 0) {
    ar7_00 = auStack_184;
    ar6_01 = auStack_180;
    puVar5 = auStack_17c;
    FUN_8c03f414(*ar6,puVar5,ar6_01,ar7_00);
    Vec3_set_xyz(auStack_88,puVar5,ar6_01,ar7_00);
    iVar1 = FUN_8c02c518(ar6[1],puVar5,ar6_01,ar7_00);
    if (iVar1 == 4) {
      uVar2 = FUN_8c02bef8(ar6[1],puVar5,ar6_01,ar7_00);
      if ((short)uVar2 < 3) {
        vec3_copy_8c02b5fc(auStack_b0,auStack_88,ar6_01,ar7_00);
        FUN_8c023484(auStack_3c,auStack_b0,ar6_01,ar7_00,auStack_c0);
        Vec3_assign(auStack_7c,auStack_c0,ar6_01,ar7_00);
        Vec3_dtor(auStack_c0,0xffffffff,ar6_01,ar7_00);
        object_dtor_delete(auStack_b0,0xffffffff,ar6_01,ar7_00);
      }
      else {
        vec3_copy_8c02b5fc(auStack_94,auStack_88,ar6_01,ar7_00);
        FUN_8c023484(auStack_5c,auStack_94,ar6_01,ar7_00,auStack_a4);
        Vec3_assign(auStack_7c,auStack_a4,ar6_01,ar7_00);
        Vec3_dtor(auStack_a4,0xffffffff,ar6_01,ar7_00);
        object_dtor_delete(auStack_94,0xffffffff,ar6_01,ar7_00);
      }
      a6 = (undefined1 *)0x0;
      while( true ) {
        puVar5 = (undefined1 *)0xa;
        iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,10,ar6_01,ar7_00);
        if (iVar1 <= (int)a6) break;
        uVar4 = 10;
        ar6_01 = a6;
        uVar2 = (**(code **)(*ar5 + 0x100))(ar5,10,a6,ar7_00);
        iVar1 = get_field_6c_02f46c(uVar2,uVar4,ar6_01,ar7_00);
        if (iVar1 != 0) {
          uVar2 = 10;
          ar6_01 = a6;
          iVar1 = (**(code **)(*ar5 + 0x100))(ar5,10,a6,ar7_00);
          iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,uVar2,ar6_01,ar7_00);
          if (iVar1 == 0x13) {
            FUN_8c02f670(*ar6,uVar2,ar6_01,ar7_00,auStack_d0);
            Vec3_add(auStack_d0,auStack_7c,ar6_01,ar7_00,auStack_e0);
            uVar4 = 10;
            ar6_01 = a6;
            uVar2 = (**(code **)(*ar5 + 0x100))(ar5,10,a6,ar7_00);
            FUN_8c02f670(uVar2,uVar4,ar6_01,ar7_00,auStack_f0);
            Vec3_sub(auStack_e0,auStack_f0,ar6_01,ar7_00,auStack_100);
            Vec3_assign(auStack_2c,auStack_100,ar6_01,ar7_00);
            Vec3_dtor(auStack_100,0xffffffff,ar6_01,ar7_00);
            Vec3_dtor(auStack_f0,0xffffffff,ar6_01,ar7_00);
            Vec3_dtor(auStack_e0,0xffffffff,ar6_01,ar7_00);
            uVar2 = 0xffffffff;
            Vec3_dtor(auStack_d0,0xffffffff,ar6_01,ar7_00);
            Vec3_length_sq(auStack_2c,uVar2,ar6_01,ar7_00);
            if (cVar8 == '\0') {
              bVar7 = (float)((ulonglong)dVar6 >> 0x20) < in_fr15;
            }
            else {
              bVar7 = dVar6 < (double)CONCAT44(in_fr14,in_fr15);
            }
            if (bVar7) {
              uVar2 = (**(code **)(*ar5 + 0x100))(ar5,10,a6,ar7_00);
              object_dtor_delete(auStack_88,0xffffffff,a6,ar7_00);
              Vec3_dtor(auStack_7c,0xffffffff,a6,ar7_00);
              Vec3_dtor(auStack_6c,0xffffffff,a6,ar7_00);
              Vec3_dtor(auStack_5c,0xffffffff,a6,ar7_00);
              Vec3_dtor(auStack_4c,0xffffffff,a6,ar7_00);
              Vec3_dtor(auStack_3c,0xffffffff,a6,ar7_00);
              Vec3_dtor(auStack_2c,0xffffffff,a6,ar7_00);
              return uVar2;
            }
          }
        }
        a6 = a6 + 1;
      }
    }
    uVar2 = get_field_a0_035724(ar6[6],puVar5,ar6_01,ar7_00);
    if ((char)uVar2 == '\x02') {
      uVar2 = FUN_8c02bef8(ar6[1],puVar5,ar6_01,ar7_00);
      if ((short)uVar2 < 3) {
        vec3_copy_8c02b5fc(auStack_128,auStack_88,ar6_01,ar7_00);
        FUN_8c023484(auStack_4c,auStack_128,ar6_01,ar7_00,auStack_138);
        Vec3_assign(auStack_7c,auStack_138,ar6_01,ar7_00);
        Vec3_dtor(auStack_138,0xffffffff,ar6_01,ar7_00);
        object_dtor_delete(auStack_128,0xffffffff,ar6_01,ar7_00);
      }
      else {
        vec3_copy_8c02b5fc(auStack_10c,auStack_88,ar6_01,ar7_00);
        FUN_8c023484(auStack_6c,auStack_10c,ar6_01,ar7_00,auStack_11c);
        Vec3_assign(auStack_7c,auStack_11c,ar6_01,ar7_00);
        Vec3_dtor(auStack_11c,0xffffffff,ar6_01,ar7_00);
        object_dtor_delete(auStack_10c,0xffffffff,ar6_01,ar7_00);
      }
      for (puVar5 = (undefined1 *)0x0; iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,0xd,ar6_01,ar7_00),
          (int)puVar5 < iVar1; puVar5 = puVar5 + 1) {
        uVar4 = 0xd;
        ar6_01 = puVar5;
        uVar2 = (**(code **)(*ar5 + 0x100))(ar5,0xd,puVar5,ar7_00);
        iVar1 = get_field_6c_02f46c(uVar2,uVar4,ar6_01,ar7_00);
        if (iVar1 != 0) {
          FUN_8c02f670(*ar6,uVar4,ar6_01,ar7_00,auStack_148);
          Vec3_add(auStack_148,auStack_7c,ar6_01,ar7_00,auStack_158);
          uVar4 = 0xd;
          ar6_01 = puVar5;
          uVar2 = (**(code **)(*ar5 + 0x100))(ar5,0xd,puVar5,ar7_00);
          FUN_8c02f670(uVar2,uVar4,ar6_01,ar7_00,auStack_168);
          Vec3_sub(auStack_158,auStack_168,ar6_01,ar7_00,auStack_178);
          Vec3_assign(auStack_2c,auStack_178,ar6_01,ar7_00);
          Vec3_dtor(auStack_178,0xffffffff,ar6_01,ar7_00);
          Vec3_dtor(auStack_168,0xffffffff,ar6_01,ar7_00);
          Vec3_dtor(auStack_158,0xffffffff,ar6_01,ar7_00);
          uVar2 = 0xffffffff;
          Vec3_dtor(auStack_148,0xffffffff,ar6_01,ar7_00);
          Vec3_length_sq(auStack_2c,uVar2,ar6_01,ar7_00);
          if (cVar8 == '\0') {
            bVar7 = (float)((ulonglong)dVar6 >> 0x20) < in_fr15;
          }
          else {
            bVar7 = dVar6 < (double)CONCAT44(in_fr14,in_fr15);
          }
          if (bVar7) {
            uVar2 = (**(code **)(*ar5 + 0x100))(ar5,0xd,puVar5,ar7_00);
            object_dtor_delete(auStack_88,0xffffffff,puVar5,ar7_00);
            Vec3_dtor(auStack_7c,0xffffffff,puVar5,ar7_00);
            Vec3_dtor(auStack_6c,0xffffffff,puVar5,ar7_00);
            Vec3_dtor(auStack_5c,0xffffffff,puVar5,ar7_00);
            pcVar3 = Vec3_dtor;
            Vec3_dtor(auStack_4c,0xffffffff,puVar5,Vec3_dtor);
            uVar4 = 0xffffffff;
            Vec3_dtor(auStack_3c,0xffffffff,0xffffffff,pcVar3);
            Vec3_dtor(auStack_2c,0xffffffff,uVar4,pcVar3);
            return uVar2;
          }
        }
      }
    }
    object_dtor_delete(auStack_88,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_7c,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_6c,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_5c,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_4c,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_3c,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_2c,0xffffffff,ar6_01,ar7_00);
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(ar4 + 0x6c);
    Vec3_dtor(auStack_7c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_6c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_5c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_4c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_3c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c066834\n.set _FUN_8c066834, _FUN_8c066834_def\n");
