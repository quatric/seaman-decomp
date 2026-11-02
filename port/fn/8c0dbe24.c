#include "../decls.h"
undefined4 FUN_8c0dbe24_def(int ar4,undefined4 ar5,undefined8 *ar6,int ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 ar4_00;
  undefined4 uVar3;
  undefined8 *ar6_00;
  undefined4 uVar4;
  int iVar5;
  undefined8 in_dr0;
  undefined4 uVar6;
  undefined8 in_xd14;
  char cVar7;
  char cVar8;
  undefined1 auStack_c4 [16];
  undefined1 auStack_b4 [128];
  undefined8 uStack_34;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar3 = ar5;
  ar6_00 = ar6;
  iVar2 = get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7);
  uVar4 = 0;
  Vec3_ctor_zero(&uStack_34,uVar3,ar6_00,ar7);
  uVar6 = 0;
  FUN_8c0191e4(auStack_b4,uVar3,ar6_00,ar7);
  if (iVar2 == 0) {
    free_if_nonnull_wrap_019270(auStack_b4,0xffffffff,ar6_00,ar7);
    Vec3_dtor(&uStack_34,0xffffffff,ar6_00,ar7);
    uVar4 = 0;
  }
  else {
    ar4_00 = FUN_8c0da588(ar4 + 0xa4,uVar3,ar6_00,ar7);
    for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
      uVar3 = FUN_8c0dbf88(ar4_00,uVar3,ar6_00,ar7);
      Vec3_ctor_copy(auStack_c4,uVar3,ar6_00,ar7);
      ar7 = (int)&uStack_34 + 4;
      ar6_00 = &uStack_34;
      FUN_8c019508(auStack_b4,auStack_c4,ar6_00,ar7);
      Vec3_dtor(auStack_c4,0xffffffff,ar6_00,ar7);
      uVar3 = ar5;
      FUN_8c022fc0(&uStack_34,ar5,ar6_00,ar7);
      uVar1 = in_dr0;
      if (cVar8 == '\0') {
        uVar6 = (undefined4)((ulonglong)in_dr0 >> 0x20);
        in_dr0 = CONCAT44(uVar6,*(undefined4 *)ar6);
        uVar1 = in_xd14;
      }
      in_xd14 = uVar1;
      if (cVar7 == '\0' && (float)((ulonglong)in_dr0 >> 0x20) < (float)in_dr0) {
        uVar4 = ar4_00;
        if (cVar8 == '\0') {
          *(undefined4 *)ar6 = uVar6;
        }
        else {
          *ar6 = in_xd14;
        }
      }
      ar4_00 = list_node_next(ar4_00,uVar3,ar6_00,ar7);
    }
    free_if_nonnull_wrap_019270(auStack_b4,0xffffffff,ar6_00,ar7);
    Vec3_dtor(&uStack_34,0xffffffff,ar6_00,ar7);
  }
  return uVar4;
}

__asm__(".globl _FUN_8c0dbe24\n.set _FUN_8c0dbe24, _FUN_8c0dbe24_def\n");
