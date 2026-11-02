#include "../decls.h"
undefined4 FUN_8c04e0e0_def(int ar4,undefined4 ar5,undefined1 *ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar6_00;
  int ar7_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 in_dr0;
  double dVar5;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar3 = 1;
  uVar2 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  iVar1 = *(int *)(ar4 + 0x298);
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(int *)(ar4 + 0x298) = *(int *)(ar4 + 0x298) + 1;
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_8c04c314(ar4,ar5,ar6,ar7_00);
    ar6_00 = ar6;
    if (iVar1 == 0) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 0x298) = *(int *)(ar4 + 0x298) + 1;
    }
  }
  else if (iVar1 == 2) {
    FUN_8c0230f0(ar4 + 0x14,uVar2,ar6_00,ar7_00,auStack_38);
    FUN_8c0230f0(ar7,uVar2,ar6_00,ar7_00,auStack_48);
    FUN_8c022dac(auStack_38,auStack_48,ar6_00,ar7_00);
    if (cVar8 == '\0') {
      in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
    }
    Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7_00);
    uVar4 = (undefined4)in_dr0;
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7_00);
    if (cVar8 == '\0') {
      dVar5 = (double)CONCAT44(0x40400000,uVar4);
    }
    else {
      dVar5 = -7.937140056776321e-251;
    }
    if (cVar7 == '\0') {
      bVar6 = (float)((ulonglong)dVar5 >> 0x20) < in_fr15;
    }
    else {
      bVar6 = dVar5 < (double)CONCAT44(in_fr14,in_fr15);
    }
    if (bVar6) {
      Vec3_length(ar7,uVar2,ar6_00,ar7_00);
      if (cVar8 == '\0') {
        *(undefined4 *)(ar7 + 4) = 0;
      }
      else {
        *(ulonglong *)(ar7 + 4) = (ulonglong)dVar5 & 0xffffffff;
      }
      Vec3_scale(ar7,&DAT_8c13658c,ar6_00,ar7_00,auStack_58);
      Vec3_add(ar5,auStack_58,ar6_00,ar7_00,auStack_68);
      ar6_00 = auStack_68;
      FUN_8c057b6c(ar4,ar5,ar6_00,ar7_00);
      Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7_00);
      *(int *)(ar4 + 0x298) = *(int *)(ar4 + 0x298) + 1;
    }
    else {
      uVar3 = 0;
      *(undefined4 *)(ar4 + 0x298) = 0;
    }
  }
  else if ((iVar1 == 3) && (iVar1 = FUN_8c057e58(ar4,uVar2,ar6_00,ar7_00), iVar1 == 0)) {
    *(undefined4 *)(ar4 + 0x298) = 2;
  }
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7_00);
  return uVar3;
}

__asm__(".globl _FUN_8c04e0e0\n.set _FUN_8c04e0e0, _FUN_8c04e0e0_def\n");
