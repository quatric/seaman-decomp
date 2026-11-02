#include "../decls.h"
undefined4 FUN_8c0b67cc_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int *ar5_00;
  undefined4 uVar3;
  undefined4 *ar6_00;
  undefined1 *ar6_01;
  undefined1 *ar7_00;
  undefined1 *puVar4;
  uint in_fr1;
  double dVar5;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [4];
  undefined1 auStack_b8 [4];
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [16];
  uint auStack_2c [5];
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_2c,ar5,ar6,ar7);
  if (cVar8 == '\0') {
    in_fr15 = 50.0;
  }
  Vec3_ctor_xyz(auStack_3c,ar5_00,ar6_00,ar7);
  if (cVar8 == '\0') {
    auStack_2c[0] = 0;
  }
  else {
    auStack_2c[3] = 0;
    auStack_2c[0] = in_fr1;
  }
  dVar5 = (double)(ulonglong)in_fr1;
  auStack_2c[2] = 0;
  auStack_2c[1] = 0;
  ar7_00 = auStack_c0;
  ar6_01 = auStack_bc;
  puVar4 = auStack_b8;
  FUN_8c03f414(*ar6,puVar4,ar6_01,ar7_00);
  Vec3_set_xyz(auStack_48,puVar4,ar6_01,ar7_00);
  vec3_copy_8c02b5fc(auStack_64,auStack_48,ar6_01,ar7_00);
  FUN_8c023484(auStack_3c,auStack_64,ar6_01,ar7_00,auStack_74);
  Vec3_ctor_copy(auStack_58,auStack_74,ar6_01,ar7_00);
  Vec3_dtor(auStack_74,0xffffffff,ar6_01,ar7_00);
  object_dtor_delete(auStack_64,0xffffffff,ar6_01,ar7_00);
  if (*(int *)(ar4 + 0x6c) == 0) {
    for (puVar4 = (undefined1 *)0x0; iVar2 = (**(code **)(*ar5 + 0x11c))(ar5,1,ar6_01,ar7_00),
        (int)puVar4 < iVar2; puVar4 = puVar4 + 1) {
      uVar3 = 1;
      ar6_01 = puVar4;
      uVar1 = (**(code **)(*ar5 + 0x100))(ar5,1,puVar4,ar7_00);
      iVar2 = get_field_6c_02f46c(uVar1,uVar3,ar6_01,ar7_00);
      if (iVar2 != 0) {
        FUN_8c02f670(*ar6,uVar3,ar6_01,ar7_00,auStack_84);
        Vec3_add(auStack_84,auStack_58,ar6_01,ar7_00,auStack_94);
        uVar3 = 1;
        ar6_01 = puVar4;
        uVar1 = (**(code **)(*ar5 + 0x100))(ar5,1,puVar4,ar7_00);
        FUN_8c02f670(uVar1,uVar3,ar6_01,ar7_00,auStack_a4);
        Vec3_sub(auStack_94,auStack_a4,ar6_01,ar7_00,auStack_b4);
        Vec3_assign(auStack_2c,auStack_b4,ar6_01,ar7_00);
        Vec3_dtor(auStack_b4,0xffffffff,ar6_01,ar7_00);
        Vec3_dtor(auStack_a4,0xffffffff,ar6_01,ar7_00);
        Vec3_dtor(auStack_94,0xffffffff,ar6_01,ar7_00);
        uVar1 = 0xffffffff;
        Vec3_dtor(auStack_84,0xffffffff,ar6_01,ar7_00);
        Vec3_length_sq(auStack_2c,uVar1,ar6_01,ar7_00);
        if (cVar7 == '\0') {
          bVar6 = (float)((ulonglong)dVar5 >> 0x20) < in_fr15;
        }
        else {
          bVar6 = dVar5 < (double)CONCAT44(in_fr14,in_fr15);
        }
        if (bVar6) {
          uVar1 = (**(code **)(*ar5 + 0x100))(ar5,1,puVar4,ar7_00);
          Vec3_dtor(auStack_58,0xffffffff,puVar4,ar7_00);
          object_dtor_delete(auStack_48,0xffffffff,puVar4,ar7_00);
          Vec3_dtor(auStack_3c,0xffffffff,puVar4,ar7_00);
          Vec3_dtor(auStack_2c,0xffffffff,puVar4,ar7_00);
          return uVar1;
        }
      }
    }
    Vec3_dtor(auStack_58,0xffffffff,ar6_01,ar7_00);
    object_dtor_delete(auStack_48,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_3c,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_2c,0xffffffff,ar6_01,ar7_00);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(ar4 + 0x6c);
    Vec3_dtor(auStack_58,0xffffffff,ar6_01,ar7_00);
    object_dtor_delete(auStack_48,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_3c,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_2c,0xffffffff,ar6_01,ar7_00);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0b67cc\n.set _FUN_8c0b67cc, _FUN_8c0b67cc_def\n");
