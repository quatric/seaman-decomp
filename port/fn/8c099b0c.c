#include "../decls.h"
undefined4 FUN_8c099b0c_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *ar5_00;
  undefined1 *puVar3;
  undefined4 ar5_01;
  undefined1 *ar6_00;
  undefined1 *a7;
  undefined1 *puVar4;
  char cVar5;
  undefined4 in_stack_ffffff3c;
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [4];
  undefined1 auStack_a4 [4];
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [16];
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
  
  cVar5 = '\0';
  ar5_00 = ar5;
  Vec3_ctor_zero(&uStack_20,ar5,ar6,ar7);
  Vec3_ctor_xyz(auStack_30,ar5_00,ar6,ar7);
  Vec3_ctor_xyz(auStack_40,ar5_00,ar6,ar7);
  a7 = auStack_a4;
  puVar3 = auStack_a0;
  puVar4 = auStack_9c;
  (**(code **)(*ar5 + 0x120))(ar5,puVar4,puVar3,a7);
  iVar1 = get_field_4_05eed8(ar4,puVar4,puVar3,a7);
  if (((iVar1 != 1) && (iVar1 != 8)) && (iVar1 == 0xb)) {
    iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,5,puVar3,a7);
    if (iVar1 == 0) {
      FUN_8c02f404(ar4,2,puVar3,a7,in_stack_ffffff3c);
      if (cVar5 == '\0') {
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
      for (puVar4 = (undefined1 *)0x0; iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,5,puVar3,a7),
          (int)puVar4 < iVar1; puVar4 = puVar4 + 1) {
        uVar2 = (**(code **)(*ar5 + 0x100))(ar5,5,puVar4,a7);
        a7 = auStack_b0;
        ar6_00 = auStack_ac;
        puVar3 = auStack_a8;
        FUN_8c03f414(uVar2,puVar3,ar6_00,a7);
        Vec3_set_xyz(auStack_4c,puVar3,ar6_00,a7);
        vec3_copy_8c02b5fc(auStack_68,auStack_4c,ar6_00,a7);
        FUN_8c023484(auStack_30,auStack_68,ar6_00,a7,auStack_78);
        Vec3_ctor_copy(auStack_5c,auStack_78,ar6_00,a7);
        Vec3_dtor(auStack_78,0xffffffff,ar6_00,a7);
        object_dtor_delete(auStack_68,0xffffffff,ar6_00,a7);
        ar5_01 = 5;
        puVar3 = puVar4;
        uVar2 = (**(code **)(*ar5 + 0x100))(ar5,5,puVar4,a7);
        FUN_8c02f670(uVar2,ar5_01,puVar3,a7,auStack_88);
        Vec3_add(auStack_88,auStack_5c,puVar3,a7,auStack_98);
        Vec3_assign(&uStack_20,auStack_98,puVar3,a7);
        Vec3_dtor(auStack_98,0xffffffff,puVar3,a7);
        Vec3_dtor(auStack_88,0xffffffff,puVar3,a7);
        if (cVar5 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = uStack_20;
          *(undefined4 *)(ar4 + 0x2c) = uStack_1c;
          *(undefined4 *)(ar4 + 0x30) = uStack_18;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = CONCAT44(uStack_1c,uStack_20);
          *(ulonglong *)(ar4 + 0x2c) = CONCAT44(uStack_18,uStack_1c);
          *(ulonglong *)(ar4 + 0x30) = CONCAT44(uStack_14,uStack_18);
        }
        Vec3_dtor(auStack_5c,0xffffffff,puVar3,a7);
        object_dtor_delete(auStack_4c,0xffffffff,puVar3,a7);
      }
    }
  }
  Vec3_dtor(auStack_40,0xffffffff,puVar3,a7);
  Vec3_dtor(auStack_30,0xffffffff,puVar3,a7);
  uVar2 = Vec3_dtor(&uStack_20,0xffffffff,puVar3,a7);
  return uVar2;
}

__asm__(".globl _FUN_8c099b0c\n.set _FUN_8c099b0c, _FUN_8c099b0c_def\n");
