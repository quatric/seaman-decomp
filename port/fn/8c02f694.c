#include "../decls.h"
undefined4 FUN_8c02f694_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  int *ar5_00;
  undefined4 uVar2;
  undefined4 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar3;
  undefined4 *a6;
  double in_dr0;
  double dVar4;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar5;
  char cVar6;
  char cVar7;
  int in_stack_00000000;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [20];
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 0;
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_34,ar5,ar6,ar7);
  if (cVar7 == '\0') {
    in_fr15 = 1e+07;
  }
  if (*(int *)(ar4 + 0x6c) != 0) {
    FUN_8c02f670(*(undefined4 *)(ar4 + 0x6c),ar5_00,ar6_00,ar7_00,auStack_44);
    Vec3_length_sq(auStack_44,ar5_00,ar6_00,ar7_00);
    if (cVar7 == '\0') {
      in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
    }
    Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7_00);
    uVar3 = *(undefined4 *)(ar4 + 0x6c);
  }
  for (a6 = (undefined4 *)0x0; iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,ar7,ar6_00,ar7_00),
      (int)a6 < iVar1; a6 = (undefined4 *)((int)a6 + 1)) {
    uVar2 = ar7;
    ar6_00 = a6;
    iVar1 = (**(code **)(*ar5 + 0x100))(ar5,ar7,a6,ar7_00);
    iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,uVar2,ar6_00,ar7_00);
    if (in_stack_00000000 == iVar1) {
      FUN_8c02f670(*ar6,uVar2,ar6_00,ar7_00,auStack_54);
      uVar2 = ar7;
      ar6_00 = a6;
      ar4_00 = (**(code **)(*ar5 + 0x100))(ar5,ar7,a6,ar7_00);
      FUN_8c02f670(ar4_00,uVar2,ar6_00,ar7_00,auStack_64);
      Vec3_sub(auStack_54,auStack_64,ar6_00,ar7_00,auStack_74);
      Vec3_assign(auStack_34,auStack_74,ar6_00,ar7_00);
      Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7_00);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7_00);
      Vec3_length_sq(auStack_34,uVar2,ar6_00,ar7_00);
      if (cVar6 == '\0') {
        bVar5 = (float)((ulonglong)in_dr0 >> 0x20) < in_fr15;
      }
      else {
        bVar5 = in_dr0 < (double)CONCAT44(in_fr14,in_fr15);
      }
      if (bVar5) {
        Vec3_length_sq(auStack_34,uVar2,ar6_00,ar7_00);
        dVar4 = in_dr0;
        if (cVar7 == '\0') {
          dVar4 = (double)((ulonglong)in_dr0 >> 0x20);
        }
        in_dr0 = (double)((ulonglong)dVar4 & 0xffffffff);
        if (SUB84(dVar4,0) != 0.0) {
          Vec3_length_sq(auStack_34,uVar2,ar6_00,ar7_00);
          if (cVar7 == '\0') {
            in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
          }
          ar6_00 = a6;
          uVar3 = (**(code **)(*ar5 + 0x100))(ar5,ar7,a6,ar7_00);
        }
      }
    }
  }
  Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7_00);
  return uVar3;
}

__asm__(".globl _FUN_8c02f694\n.set _FUN_8c02f694, _FUN_8c02f694_def\n");
