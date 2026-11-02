#include "../decls.h"
undefined4 FUN_8c07c0b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int iVar2;
  int ar6_00;
  undefined8 in_dr0;
  char cVar3;
  undefined8 uStack_64;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  
  cVar3 = '\0';
  uStack_c = 1;
  iVar2 = *(int *)(ar4 + 300);
  if (iVar2 == 0) {
    *(undefined4 *)(ar4 + 0x40) = 5;
    in_dr0 = CONCAT44(0x41700000,(int)in_dr0);
    *(undefined4 *)(ar4 + 0x38) = 0x41700000;
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 == 2) {
      FUN_8c032ab0(ar4,ar5,ar6,ar7);
      ar6_00 = ar4 + 0x54;
      iVar2 = pure_virtual_stub(ar4,ar5,ar6_00,ar7);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = *(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c;
      FUN_8c031b68(ar4,iVar2,ar6_00,ar7);
      FUN_8c033530(ar4,iVar2,ar6_00,ar7);
      Vec3_assign(ar4 + 0x54,(int)&uStack_64 + 4,ar6_00,ar7);
      Vec3_dtor((int)&uStack_64 + 4,0xffffffff,ar6_00,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      return 1;
    }
    if (iVar2 != 3) {
      return 1;
    }
    iVar2 = pure_virtual_stub(ar4,ar5,ar4 + 0x54,ar7);
    if (iVar2 != 0) {
      return 1;
    }
    *(undefined4 *)(ar4 + 300) = 0;
    return 0;
  }
  FUN_8c032ab0(ar4,ar5,ar6,ar7);
  uVar1 = in_dr0;
  if (cVar3 == '\0') {
    uStack_64 = CONCAT44((*(uint*)((uchar*)&uStack_64+4)),(int)((ulonglong)in_dr0 >> 0x20));
    uVar1 = uStack_64;
  }
  uStack_64 = uVar1;
  iVar2 = pure_virtual_stub(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    Vec3_scale(ar4 + 0x14,&DAT_8c1379ac,ar6,ar7,auStack_20);
    Vec3_scale(auStack_20,ar4 + 0x48,ar6,ar7,auStack_30);
    Vec3_scale(auStack_30,&DAT_8c1379b0,ar6,ar7,auStack_40);
    Vec3_add(auStack_40,ar5,ar6,ar7,auStack_50);
    Vec3_assign(ar4 + 0x54,auStack_50,ar6,ar7);
    Vec3_dtor(auStack_50,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_40,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c07c0b8\n.set _FUN_8c07c0b8, _FUN_8c07c0b8_def\n");
