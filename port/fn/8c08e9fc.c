#include "../decls.h"
undefined4 FUN_8c08e9fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 uVar3;
  float fVar4;
  undefined8 in_dr0;
  float fVar5;
  char cVar6;
  char cVar7;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  uVar2 = ar5;
  ar6_00 = ar6;
  Vec3_set_zero(auStack_20,ar5,ar6,ar7);
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c08ea30:
    uVar2 = 0;
    iVar1 = FUN_8c034148(ar4 + 0xb0,0,ar6_00,ar7);
    uVar3 = (undefined4)in_dr0;
    if ((iVar1 != 1) && (iVar1 != 2)) {
      object_dtor_delete(auStack_20,0xffffffff,ar6_00,ar7);
      return 1;
    }
    FUN_8c0230f0(ar4 + 0x14,uVar2,ar6_00,ar7,auStack_30);
    Vec3_assign(ar4 + 0x14,auStack_30,ar6_00,ar7);
    Vec3_dtor(auStack_30,0xffffffff,ar6_00,ar7);
    FUN_8c031b68(ar4,0x8c2846d0,ar6_00,ar7);
    in_dr0 = CONCAT44(0x3f800000,uVar3);
    if (cVar7 == '\0') {
      *(undefined4 *)(ar4 + 0x48) = 0x3f800000;
    }
    else {
      *(undefined8 *)(ar4 + 0x48) = in_dr0;
    }
    uVar2 = ar5;
    ar6_00 = ar6;
    FUN_8c031bb4(ar4,ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x40) = 3;
  }
  else if (iVar1 != 3) {
    if (iVar1 != 5) goto LAB_8c08eb0e;
    goto LAB_8c08ea30;
  }
  fVar4 = (float)((ulonglong)in_dr0 >> 0x20);
  FUN_8c03f3ac(ar4 + 0xb0,uVar2,ar6_00,ar7);
  ar6_00 = ar5;
  uVar3 = FUN_8c097ba4(ar4,ar6,ar5,ar7);
  FUN_8c022fc0(ar5,ar6,ar6_00,ar7);
  if (cVar7 == '\0') {
    fVar5 = 100.0;
  }
  else {
    fVar4 = 100.0;
    fVar5 = 7.1186e-43;
  }
  if (cVar6 == '\0' && fVar4 < fVar5) {
    *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfb;
  }
LAB_8c08eb0e:
  Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7);
  object_dtor_delete(auStack_20,0xffffffff,ar6_00,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c08e9fc\n.set _FUN_8c08e9fc, _FUN_8c08e9fc_def\n");
