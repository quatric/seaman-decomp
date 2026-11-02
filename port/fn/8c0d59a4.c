#include "../decls.h"
undefined4 FUN_8c0d59a4_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *ar4_00;
  int ar5_00;
  int ar6_00;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined8 in_dr0;
  double dVar8;
  float fVar9;
  char cVar10;
  char cVar11;
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  iVar5 = 0;
  ar5_00 = ar5;
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_34,ar5,ar6,ar7);
  iVar6 = 0;
  while ((iVar6 < 0x226 && (iVar5 < ar5))) {
    iVar3 = get_field_44_0d5ca0(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7);
    uVar4 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (iVar3 == 0) {
      iVar3 = get_field_164_0d5c94(ar6,ar5_00,ar6_00,ar7);
      if (iVar3 == 2) {
        FUN_8c0d26ac(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7);
        FUN_8c0d5c88(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7);
        FUN_8c0d5c68(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7,auStack_44);
        Vec3_assign(auStack_34,auStack_44,ar6_00,ar7);
        ar5_00 = -1;
        ar4_00 = auStack_44;
        Vec3_dtor(ar4_00,0xffffffff,ar6_00,ar7);
        iVar3 = rand(ar4_00,ar5_00,ar6_00,ar7);
        if (cVar11 == '\0') {
          dVar8 = (double)CONCAT44(0x47000000,(float)iVar3);
        }
        else {
          dVar8 = 3.051758619676548e-05;
        }
        if (cVar10 == '\0') {
          fVar7 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar8 / dVar8,0);
        }
        if (cVar11 == '\0') {
          fVar9 = 0.5;
        }
        else {
          fVar7 = 0.5;
          fVar9 = 183.0;
        }
        if (cVar10 != '\0' || fVar9 <= fVar7) {
          if (cVar11 == '\0') {
            in_dr0 = CONCAT44(*(undefined4 *)(ar6 + 0x158),fVar7);
          }
          else {
            in_dr0 = *(undefined8 *)(ar6 + 0x158);
          }
          FUN_8c0d5c58(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7);
        }
        else {
          if (cVar11 == '\0') {
            in_dr0 = CONCAT44(*(undefined4 *)(ar6 + 0x158),fVar7);
          }
          else {
            in_dr0 = *(undefined8 *)(ar6 + 0x158);
          }
          FUN_8c0d5c58(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7);
        }
        iVar5 = iVar5 + 1;
      }
      else {
        FUN_8c0d26f0(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7);
        FUN_8c0d5c68(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7,auStack_54);
        FUN_8c022fc0(auStack_54,ar6 + 4,ar6_00,ar7);
        if (cVar11 == '\0') {
          in_dr0 = CONCAT44(*(undefined4 *)(ar6 + 0x158),uVar4);
        }
        else {
          in_dr0 = *(undefined8 *)(ar6 + 0x158);
        }
        bVar1 = cVar10 != '\0';
        fVar7 = (float)in_dr0;
        uVar2 = (ulonglong)in_dr0 >> 0x20;
        ar5_00 = -1;
        Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
        if (bVar1 || (float)uVar2 <= fVar7) {
          FUN_8c0d276c(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7);
          FUN_8c0d5c88(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7);
          iVar5 = iVar5 + 1;
        }
      }
    }
    iVar6 = iVar6 + 1;
  }
  uVar4 = Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
  return uVar4;
}

__asm__(".globl _FUN_8c0d59a4\n.set _FUN_8c0d59a4, _FUN_8c0d59a4_def\n");
