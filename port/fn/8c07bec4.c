#include "../decls.h"
undefined4 FUN_8c07bec4_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  undefined1 *ar6_00;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  ar5_00 = ar6;
  ar6_00 = ar6;
  uVar2 = ar7;
  iVar1 = FUN_8c023cd4(ar4 + 0x270,ar6,ar6,ar7);
  if (iVar1 != 0) {
    uVar2 = FUN_8c031de8(ar4,0x13,ar6_00,uVar2);
    return uVar2;
  }
  Vec3_ctor_xyz(auStack_28,ar5_00,ar6_00,uVar2);
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    FUN_8c032ab0(ar4,ar5_00,ar6_00,uVar2);
    FUN_8c032ab0(ar4,ar5_00,ar6_00,uVar2);
    Vec3_ctor_xyz(auStack_38,ar5_00,ar6_00,uVar2);
    Vec3_sub(ar6,auStack_38,ar6_00,uVar2,auStack_48);
    Vec3_assign(ar4 + 0x54,auStack_48,ar6_00,uVar2);
    Vec3_dtor(auStack_48,0xffffffff,ar6_00,uVar2);
    Vec3_dtor(auStack_38,0xffffffff,ar6_00,uVar2);
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(0x43340000,*(undefined4 *)(ar4 + 0x7c));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x7c);
      dVar5 = -7.933010938730413e-251;
    }
    if (cVar6 == '\0') {
      fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    if (cVar7 == '\0') {
      *(float *)(ar4 + 0x58) = fVar4;
    }
    else {
      *(undefined8 *)(ar4 + 0x58) = in_xd0;
    }
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      ar6_00 = auStack_28;
      iVar1 = FUN_8c0755e0(ar4,ar5,ar6_00,ar7);
      uVar2 = ar7;
      if ((iVar1 == 0) && (*(int *)(ar4 + 0x40) == 0)) {
        Vec3_assign(ar4 + 0x270,ar6,ar6_00,ar7);
        *(undefined4 *)(ar4 + 300) = 0;
        *(undefined4 *)(ar4 + 0x2a0) = 2;
        uVar3 = 0;
        uVar2 = ar7;
      }
    }
    goto LAB_8c07c05e;
  }
  ar6_00 = (undefined1 *)(ar4 + 0x54);
  iVar1 = FUN_8c0755e0(ar4,ar5,ar6_00,ar7);
  uVar2 = ar7;
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
LAB_8c07c05e:
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,uVar2);
  return uVar3;
}

__asm__(".globl _FUN_8c07bec4\n.set _FUN_8c07bec4, _FUN_8c07bec4_def\n");
