#include "../decls.h"
undefined4 FUN_8c0e3994_def(int ar4,code *ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  int ar4_00;
  undefined4 uVar2;
  int iVar3;
  int *a4;
  int iVar4;
  code *ar5_00;
  int iVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar9;
  double dVar8;
  double in_dr2;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  cVar12 = '\0';
  cVar11 = '\0';
  ar5_00 = ar5;
  iVar1 = get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7);
  ar4_00 = FUN_8c0da588(ar4 + 0xa4,ar5_00,ar6,ar7);
  Vec3_ctor_zero(auStack_2c,ar5_00,ar6,ar7);
  Vec3_ctor_zero(auStack_3c,ar5_00,ar6,ar7);
  if (DAT_8c438280 == '\0') {
    uVar2 = Vec3_ctor_xyz(0x8c438284,ar5_00,ar6,ar7);
    ar6 = 0x8c438274;
    ar5_00 = Vec3_dtor;
    global_list_push(uVar2,Vec3_dtor,0x8c438274,ar7);
    DAT_8c438280 = '\x01';
  }
  if (DAT_8c4382a0 == '\0') {
    uVar2 = Vec3_ctor_zero(0x8c4382a4,ar5_00,ar6,ar7);
    ar6 = 0x8c438294;
    ar5_00 = Vec3_dtor;
    global_list_push(uVar2,Vec3_dtor,0x8c438294,ar7);
    DAT_8c4382a0 = '\x01';
  }
  iVar5 = 0;
  do {
    if (iVar1 <= iVar5) {
      Vec3_dtor(auStack_3c,0xffffffff,ar6,ar7);
      uVar2 = Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7);
      return uVar2;
    }
    iVar3 = get_field_24_05c284(ar4_00,ar5_00,ar6,ar7);
    if (iVar3 != 0xe) {
      FUN_8c02f670(ar4_00,ar5_00,ar6,ar7,auStack_4c);
      Vec3_assign(auStack_2c,auStack_4c,ar6,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_4c,0xffffffff,ar6,ar7);
      FUN_8c0e3e98(ar4_00,uVar2,ar6,ar7,auStack_5c);
      Vec3_assign(auStack_3c,auStack_5c,ar6,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_5c,0xffffffff,ar6,ar7);
      (**(code **)(*(int *)(ar4_00 + 8) + 0x13c))(ar4_00,uVar2,ar6,ar7);
      Vec3_assign(0x8c4382a4,auStack_6c,ar6,ar7);
      ar5_00 = (code *)0xffffffff;
      Vec3_dtor(auStack_6c,0xffffffff,ar6,ar7);
      if (cVar12 == '\0') {
        uVar7 = CONCAT44(*(undefined4 *)ar5,uStack_38);
      }
      else {
        uVar7 = *(undefined8 *)ar5;
      }
      if (cVar11 != '\0' || (float)((ulonglong)uVar7 >> 0x20) <= (float)uVar7) {
        if (cVar12 == '\0') {
          uVar7 = CONCAT44(*(undefined4 *)ar5,uStack_28);
        }
        else {
          uVar7 = *(undefined8 *)ar5;
        }
        if (cVar11 != '\0' || (float)uVar7 <= (float)((ulonglong)uVar7 >> 0x20)) {
          iVar4 = (**(code **)(*(int *)(ar4_00 + 8) + 0xb4))(ar4_00,ar5_00,ar6,ar7);
          fVar6 = (float)((ulonglong)uVar7 >> 0x20);
          if (iVar4 == 1) {
            iVar4 = (**(code **)(*(int *)(ar4_00 + 8) + 0x16c))(ar4_00,ar5_00,ar6,ar7);
            if (iVar4 != 0) {
              a4 = (int *)(**(code **)(*(int *)(ar4_00 + 8) + 0x16c))(ar4_00,ar5_00,ar6,ar7);
              iVar4 = (**(code **)(*a4 + 0x28))(a4,ar5_00,ar6,ar7);
              if (iVar4 == 1) {
                (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00,ar5_00,ar6,ar7);
                ar6 = 4;
                ar5_00 = (code *)auStack_2c;
                ar7 = ar4_00;
                FUN_8c0d4c74(ar5,ar5_00,4,ar4_00);
                goto LAB_8c0e3d7e;
              }
            }
            if (iVar3 == 5) {
              (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00,ar5_00,ar6,ar7);
              ar6 = 3;
              ar5_00 = (code *)auStack_2c;
              ar7 = ar4_00;
              FUN_8c0d4c74(ar5,ar5_00,3,ar4_00);
            }
            else {
              (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00,ar5_00,ar6,ar7);
              if (cVar12 == '\0') {
                fVar9 = 0.8;
              }
              else {
                fVar6 = 0.8;
                fVar9 = -1.5061567e-31;
              }
              if (cVar11 == '\0' && fVar9 < fVar6) {
                ar5_00 = (code *)0x8c4382a4;
                FUN_8c022dac(0x8c438284,0x8c4382a4,ar6,ar7);
                if (cVar12 == '\0') {
                  fVar6 = fVar9;
                  fVar9 = 10.0;
                }
                else {
                  fVar6 = 10.0;
                  fVar9 = 2.18603e-43;
                }
                if (cVar11 == '\0' && fVar6 < fVar9) {
                  (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00,ar5_00,ar6,ar7);
                  ar6 = 3;
                  ar5_00 = (code *)auStack_2c;
                  ar7 = ar4_00;
                  FUN_8c0d4c74(ar5,ar5_00,3,ar4_00);
                  goto LAB_8c0e3d7e;
                }
              }
              (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00,ar5_00,ar6,ar7);
              if (cVar12 == '\0') {
                fVar6 = 0.8;
              }
              else {
                fVar9 = 0.8;
                fVar6 = -1.5061567e-31;
              }
              if (cVar11 == '\0' && fVar9 < fVar6) {
                ar5_00 = (code *)0x8c4382a4;
                FUN_8c022dac(0x8c438284,0x8c4382a4,ar6,ar7);
                if (cVar12 == '\0') {
                  fVar9 = 10.0;
                }
                else {
                  fVar6 = 10.0;
                  fVar9 = 2.18603e-43;
                }
                if (cVar11 == '\0' && fVar6 < fVar9) {
                  (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00,ar5_00,ar6,ar7);
                  ar6 = 2;
                  ar5_00 = (code *)auStack_2c;
                  ar7 = ar4_00;
                  FUN_8c0d4c74(ar5,ar5_00,2,ar4_00);
                  goto LAB_8c0e3d7e;
                }
              }
              (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00,ar5_00,ar6,ar7);
              ar6 = 0;
              ar5_00 = (code *)auStack_2c;
              ar7 = ar4_00;
              FUN_8c0d4c74(ar5,ar5_00,0,ar4_00);
            }
          }
        }
      }
LAB_8c0e3d7e:
      if (cVar12 == '\0') {
        uVar7 = CONCAT44(*(undefined4 *)ar5,uStack_38);
      }
      else {
        uVar7 = *(undefined8 *)ar5;
      }
      if (cVar11 != '\0' || (float)uVar7 <= (float)((ulonglong)uVar7 >> 0x20)) {
        if (cVar12 == '\0') {
          uVar7 = CONCAT44(*(undefined4 *)ar5,uStack_28);
        }
        else {
          uVar7 = *(undefined8 *)ar5;
        }
        if ((cVar11 != '\0' || (float)((ulonglong)uVar7 >> 0x20) <= (float)uVar7) &&
           (iVar4 = (**(code **)(*(int *)(ar4_00 + 8) + 0xb4))(ar4_00,ar5_00,ar6,ar7), iVar4 == 1))
        {
          if (iVar3 == 5) {
            (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00,ar5_00,ar6,ar7);
            ar6 = 1;
            ar5_00 = (code *)auStack_3c;
            ar7 = ar4_00;
            FUN_8c0d4c74(ar5,ar5_00,1,ar4_00);
          }
          goto LAB_8c0e3e34;
        }
      }
      if (cVar12 == '\0') {
        uVar7 = CONCAT44(*(undefined4 *)ar5,uStack_28);
      }
      else {
        uVar7 = *(undefined8 *)ar5;
      }
      if (cVar11 != '\0' || (float)uVar7 <= (float)((ulonglong)uVar7 >> 0x20)) {
        if (cVar12 == '\0') {
          in_dr2 = (double)CONCAT44(uStack_28,SUB84(in_dr2,0));
          dVar8 = (double)CONCAT44(0x41200000,*(undefined4 *)ar5);
        }
        else {
          in_dr2 = (double)CONCAT44(uStack_24,uStack_28);
          dVar8 = 5.94698645594833e-312;
        }
        if (cVar11 == '\0') {
          bVar10 = (float)((ulonglong)in_dr2 >> 0x20) <
                   SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          bVar10 = in_dr2 < dVar8 - dVar8;
        }
        if (!bVar10) {
          (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00,ar5_00,ar6,ar7);
          ar6 = 0;
          ar5_00 = (code *)auStack_2c;
          ar7 = ar4_00;
          FUN_8c0d4c74(ar5,ar5_00,0,ar4_00);
        }
      }
    }
LAB_8c0e3e34:
    ar4_00 = list_node_next(ar4_00,ar5_00,ar6,ar7);
    iVar5 = iVar5 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c0e3994\n.set _FUN_8c0e3994, _FUN_8c0e3994_def\n");
