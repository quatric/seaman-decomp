#include "../decls.h"
undefined4 FUN_8c02f474_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int *ar5_00;
  undefined4 uVar3;
  undefined4 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar4;
  undefined4 *a6;
  uint in_fr1;
  double dVar5;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  uint auStack_30 [5];
  double dVar6;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 0;
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_30,ar5,ar6,ar7);
  if (cVar9 == '\0') {
    in_fr15 = 1e+07;
    auStack_30[0] = 0;
  }
  else {
    auStack_30[3] = 0;
    auStack_30[0] = in_fr1;
  }
  dVar5 = (double)(ulonglong)in_fr1;
  auStack_30[2] = 0;
  auStack_30[1] = 0;
  if (*(int *)(ar4 + 0x6c) != 0) {
    FUN_8c02f670(*(undefined4 *)(ar4 + 0x6c),ar5_00,ar6_00,ar7_00,auStack_40);
    Vec3_length_sq(auStack_40,ar5_00,ar6_00,ar7_00);
    if (cVar9 == '\0') {
      in_fr15 = (float)((ulonglong)dVar5 >> 0x20);
    }
    Vec3_dtor(auStack_40,0xffffffff,ar6_00,ar7_00);
    uVar4 = *(undefined4 *)(ar4 + 0x6c);
  }
  for (a6 = (undefined4 *)0x0; iVar2 = (**(code **)(*ar5 + 0x11c))(ar5,ar7,ar6_00,ar7_00),
      (int)a6 < iVar2; a6 = (undefined4 *)((int)a6 + 1)) {
    uVar3 = ar7;
    ar6_00 = a6;
    uVar1 = (**(code **)(*ar5 + 0x100))(ar5,ar7,a6,ar7_00);
    iVar2 = get_field_6c_02f46c(uVar1,uVar3,ar6_00,ar7_00);
    if (iVar2 != 0) {
      FUN_8c02f670(*ar6,uVar3,ar6_00,ar7_00,auStack_50);
      uVar3 = ar7;
      ar6_00 = a6;
      uVar1 = (**(code **)(*ar5 + 0x100))(ar5,ar7,a6,ar7_00);
      FUN_8c02f670(uVar1,uVar3,ar6_00,ar7_00,auStack_60);
      Vec3_sub(auStack_50,auStack_60,ar6_00,ar7_00,auStack_70);
      Vec3_assign(auStack_30,auStack_70,ar6_00,ar7_00);
      Vec3_dtor(auStack_70,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_60,0xffffffff,ar6_00,ar7_00);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_50,0xffffffff,ar6_00,ar7_00);
      Vec3_length_sq(auStack_30,uVar3,ar6_00,ar7_00);
      if (cVar8 == '\0') {
        bVar7 = (float)((ulonglong)dVar5 >> 0x20) < in_fr15;
      }
      else {
        bVar7 = dVar5 < (double)CONCAT44(in_fr14,in_fr15);
      }
      if (bVar7) {
        Vec3_length_sq(auStack_30,uVar3,ar6_00,ar7_00);
        dVar6 = dVar5;
        if (cVar9 == '\0') {
          dVar6 = (double)((ulonglong)dVar5 >> 0x20);
        }
        dVar5 = (double)((ulonglong)dVar6 & 0xffffffff);
        if (SUB84(dVar6,0) != 0.0) {
          Vec3_length_sq(auStack_30,uVar3,ar6_00,ar7_00);
          if (cVar9 == '\0') {
            in_fr15 = (float)((ulonglong)dVar5 >> 0x20);
          }
          ar6_00 = a6;
          uVar4 = (**(code **)(*ar5 + 0x100))(ar5,ar7,a6,ar7_00);
        }
      }
    }
  }
  Vec3_dtor(auStack_30,0xffffffff,ar6_00,ar7_00);
  return uVar4;
}

__asm__(".globl _FUN_8c02f474\n.set _FUN_8c02f474, _FUN_8c02f474_def\n");
