#include "../decls.h"
undefined4 FUN_8c07f56c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 ar7_00;
  double in_dr0;
  double dVar3;
  undefined4 in_fr3;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined8 uStack_48;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 1;
    }
    iVar1 = pure_virtual_stub(ar4,ar5,ar4 + 0x54,ar7);
    if (iVar1 != 0) {
      return 1;
    }
    *(undefined4 *)(ar4 + 300) = 0;
    return 0;
  }
  ar6_00 = ar6;
  ar7_00 = ar7;
  pure_virtual_stub(ar4,ar5,ar6,ar7);
  FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00);
  if (cVar6 == '\0') {
    uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    uStack_48 = (double)CONCAT44((*(uint*)((uchar*)&uStack_48+4)),uVar2);
    in_dr0 = (double)CONCAT44(uVar2,in_fr3);
    dVar3 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
  }
  else {
    dVar3 = -7.956826985829187e-251;
    uStack_48 = in_dr0;
  }
  if (cVar5 == '\0') {
    bVar4 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20) < (float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    bVar4 = dVar3 * dVar3 < in_dr0;
  }
  if (!bVar4) {
    *(undefined4 *)(ar4 + 0x40) = 5;
    Vec3_sub(ar5,ar6,ar6_00,ar7_00,auStack_24);
    uVar2 = Vec3_length(auStack_24,ar6,ar6_00,ar7_00);
    FUN_8c03263c(ar4,uVar2,ar6_00,ar7_00);
    Vec3_add(auStack_34,ar5,ar6_00,ar7_00,(int)&uStack_48 + 4);
    Vec3_assign(ar4 + 0x54,(int)&uStack_48 + 4,ar6_00,ar7_00);
    Vec3_dtor((int)&uStack_48 + 4,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7_00);
    FUN_8c032788(ar4,ar4 + 0x54,s0,ar7);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c07f56c\n.set _FUN_8c07f56c, _FUN_8c07f56c_def\n");
