#include "../decls.h"
undefined4 FUN_8c02f880_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar4_00;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 a7;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint in_fr1;
  double dVar7;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar9;
  char cVar10;
  char cVar11;
  int in_stack_00000000;
  short in_stack_00000004;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  uint auStack_34 [5];
  double dVar8;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar5 = 0;
  puVar3 = ar6;
  a7 = ar7;
  Vec3_ctor_zero(auStack_34,ar5,ar6,ar7);
  if (cVar11 == '\0') {
    in_fr15 = 1e+07;
  }
  iVar4 = 0;
  if (cVar11 == '\0') {
    auStack_34[0] = 0;
  }
  else {
    auStack_34[3] = 0;
    auStack_34[0] = in_fr1;
  }
  dVar7 = (double)(ulonglong)in_fr1;
  auStack_34[2] = 0;
  auStack_34[1] = 0;
  (**(code **)(*ar5 + 0x11c))(ar5,ar7,puVar3,a7);
  for (puVar6 = (undefined4 *)0x0; uVar2 = ar7,
      iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,ar7,puVar3,a7), (int)puVar6 < iVar1;
      puVar6 = (undefined4 *)((int)puVar6 + 1)) {
    uVar2 = ar7;
    puVar3 = puVar6;
    iVar1 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
    iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,uVar2,puVar3,a7);
    if (in_stack_00000000 == iVar1) {
      uVar2 = ar7;
      puVar3 = puVar6;
      iVar1 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
      iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0xb4))(iVar1,uVar2,puVar3,a7);
      if (iVar1 == 1) {
        uVar2 = ar7;
        puVar3 = puVar6;
        iVar1 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
        iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0xb8))(iVar1,uVar2,puVar3,a7);
        if (iVar1 == 0) {
          iVar4 = iVar4 + 1;
        }
      }
    }
  }
  if (in_stack_00000004 < iVar4) {
    if (*(int *)(ar4 + 0x6c) != 0) {
      FUN_8c02f670(*(undefined4 *)(ar4 + 0x6c),uVar2,puVar3,a7,auStack_44);
      Vec3_length_sq(auStack_44,uVar2,puVar3,a7);
      if (cVar11 == '\0') {
        in_fr15 = (float)((ulonglong)dVar7 >> 0x20);
      }
      Vec3_dtor(auStack_44,0xffffffff,puVar3,a7);
      uVar5 = *(undefined4 *)(ar4 + 0x6c);
    }
    for (puVar6 = (undefined4 *)0x0; iVar4 = (**(code **)(*ar5 + 0x11c))(ar5,ar7,puVar3,a7),
        (int)puVar6 < iVar4; puVar6 = (undefined4 *)((int)puVar6 + 1)) {
      uVar2 = ar7;
      puVar3 = puVar6;
      iVar4 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
      (**(code **)(*(int *)(iVar4 + 8) + 0x114))(iVar4,uVar2,puVar3,a7);
      uVar2 = ar7;
      puVar3 = puVar6;
      iVar4 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
      iVar4 = (**(code **)(*(int *)(iVar4 + 8) + 0x114))(iVar4,uVar2,puVar3,a7);
      if (in_stack_00000000 == iVar4) {
        uVar2 = ar7;
        puVar3 = puVar6;
        iVar4 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
        iVar4 = (**(code **)(*(int *)(iVar4 + 8) + 0xb4))(iVar4,uVar2,puVar3,a7);
        if (iVar4 == 1) {
          uVar2 = ar7;
          puVar3 = puVar6;
          iVar4 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
          iVar4 = (**(code **)(*(int *)(iVar4 + 8) + 0xb8))(iVar4,uVar2,puVar3,a7);
          if (iVar4 == 0) {
            FUN_8c02f670(*ar6,uVar2,puVar3,a7,auStack_54);
            uVar2 = ar7;
            puVar3 = puVar6;
            ar4_00 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
            FUN_8c02f670(ar4_00,uVar2,puVar3,a7,auStack_64);
            Vec3_sub(auStack_54,auStack_64,puVar3,a7,auStack_74);
            Vec3_assign(auStack_34,auStack_74,puVar3,a7);
            Vec3_dtor(auStack_74,0xffffffff,puVar3,a7);
            Vec3_dtor(auStack_64,0xffffffff,puVar3,a7);
            uVar2 = 0xffffffff;
            Vec3_dtor(auStack_54,0xffffffff,puVar3,a7);
            Vec3_length_sq(auStack_34,uVar2,puVar3,a7);
            if (cVar10 == '\0') {
              bVar9 = (float)((ulonglong)dVar7 >> 0x20) < in_fr15;
            }
            else {
              bVar9 = dVar7 < (double)CONCAT44(in_fr14,in_fr15);
            }
            if (bVar9) {
              Vec3_length_sq(auStack_34,uVar2,puVar3,a7);
              dVar8 = dVar7;
              if (cVar11 == '\0') {
                dVar8 = (double)((ulonglong)dVar7 >> 0x20);
              }
              dVar7 = (double)((ulonglong)dVar8 & 0xffffffff);
              if (SUB84(dVar8,0) != 0.0) {
                Vec3_length_sq(auStack_34,uVar2,puVar3,a7);
                if (cVar11 == '\0') {
                  in_fr15 = (float)((ulonglong)dVar7 >> 0x20);
                }
                puVar3 = puVar6;
                uVar5 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
              }
            }
          }
        }
      }
    }
    Vec3_dtor(auStack_34,0xffffffff,puVar3,a7);
  }
  else {
    Vec3_dtor(auStack_34,0xffffffff,puVar3,a7);
    uVar5 = 0;
  }
  return uVar5;
}

__asm__(".globl _FUN_8c02f880\n.set _FUN_8c02f880, _FUN_8c02f880_def\n");
