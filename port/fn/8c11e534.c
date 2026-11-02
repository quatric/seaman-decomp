#include "../decls.h"
undefined4 FUN_8c11e534_def(int *ar4,int *ar5,int ar6,undefined1 *ar7)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int *ar5_00;
  undefined4 uVar5;
  int iVar6;
  uint *ar7_00;
  int iVar7;
  uint uStack_2c;
  int *piStack_28;
  undefined4 auStack_24 [2];
  
  ar7_00 = &uStack_2c;
  iVar7 = *(int *)((int)0xfc + (int)ar4);
  uStack_2c = 0;
  ar5_00 = ar5;
  piStack_28 = ar4;
  iVar3 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  puVar2 = (&FUN_8c1204c4);
  if (iVar3 != 0) {
    return 1;
  }
  sVar1 = *(short *)((int)piStack_28 + 0x3e);
  if (((sVar1 == 0) || (sVar1 == 1)) || (sVar1 == 2)) {
    if (ar5 == (int *)0x0) {
      iVar3 = (int)0x100;
      if (*(int *)(iVar3 + (int)ar4) == 0) {
        return 0;
      }
      iVar6 = (int)0xf4;
      *(int *)(*(int *)(iVar3 + (int)ar4) + 4) = *(int *)(*(int *)(iVar3 + (int)ar4) + 4) + -1;
      *(undefined4 *)(iVar3 + (int)ar4) = 0;
      (**(code **)(iVar7 + 0x18))(*(undefined4 *)(iVar3 + 8 + (int)ar4),iVar6 + (int)ar4,ar6,ar7);
      iVar3 = (int)0x108;
      *(undefined4 *)(iVar3 + (int)ar4) = 0;
      if ((*(int *)(iVar3 + -4 + (int)ar4) != 0) &&
         (iVar3 = FUN_8c11ea3c(ar4,0,ar6,ar7), iVar3 != 0)) {
        return 1;
      }
      uVar4 = FUN_8c11c99a(ar4,0,ar6,ar7);
      goto LAB_8c11e7fa;
    }
    iVar3 = FUN_8c11cad4(ar5,ar5_00,ar6,ar7);
    if (iVar3 != 0) {
      return 1;
    }
    if (*(int *)*ar5 == 4) {
      auStack_24[0] = 0;
      if (*(int *)(*ar5 + 4) == 8) {
        iVar3 = 0;
LAB_8c11e7c4:
        uVar4 = FUN_8c120348(ar4 + 0x12,0x26,iVar3,auStack_24);
        if ((uVar4 & 0xff) != 0) {
          return 1;
        }
        return 0;
      }
      iVar3 = *ar5 + 8;
      piStack_28 = *(int **)((int)0x100 + (int)ar4);
      if (piStack_28 != (int *)0x0) {
        ar6 = (int)0x80;
        iVar7 = FUN_8c013ec0(iVar3,*piStack_28 + 8,ar6,ar7);
        if (iVar7 == 0) {
          iVar3 = iVar3 + 0x80;
          goto LAB_8c11e7c4;
        }
      }
      uVar5 = FUN_8c11cd02(*(undefined4 *)((int)0xfc + (int)ar4),0xc,ar6,ar7)
      ;
      return uVar5;
    }
    if (*(int *)*ar5 != 10) {
      uVar4 = (*(code *)puVar2)(ar4 + 0x12,0xd,ar6,ar7);
      goto LAB_8c11e7fa;
    }
    if (*(int *)((int)0x100 + (int)ar4) == 0) {
      iVar3 = (int)0xf4 + (int)ar4;
      uVar5 = (**(code **)(iVar7 + 0x14))((int)0xd4,iVar3,ar6,ar7);
      *(undefined4 *)((int)0x108 + (int)ar4) = uVar5;
      if (*(int *)((int)0x108 + (int)ar4) == 0) {
        return 1;
      }
      FUN_8c11066a(*(undefined4 *)((int)0x108 + (int)ar4),iVar3,ar6,ar7);
    }
    else {
      iVar3 = *(int *)((int)0x100 + (int)ar4);
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
    }
    iVar3 = (int)0x108;
    **(int **)(iVar3 + (int)ar4) = *ar5;
    if ((*(int *)(iVar3 + -4 + (int)ar4) != 0) && (iVar3 = FUN_8c11ea3c(ar4,0,ar6,ar7), iVar3 != 0))
    {
      return 1;
    }
    ar6 = *(int *)((int)0x108 + (int)ar4);
    uVar4 = FUN_8c120348(ar4 + 0x12,0x25,ar6,&uStack_2c);
    if ((uVar4 & 0xff) != 0) {
      return 1;
    }
    uVar5 = *(undefined4 *)((int)0x9c + (int)ar4);
    iVar3 = FUN_8c11cc2c(ar4,uVar5,ar6,ar7_00);
    if (iVar3 == 0) {
      piStack_28 = *(int **)((int)0x108 + (int)ar4);
      uVar4 = (**(code **)((int)piStack_28 + 8))(piStack_28,uVar5,ar6,ar7_00);
      uStack_2c = 0;
      if ((uVar4 & 0xffff) != 0) {
        do {
          uVar5 = (**(code **)((int)0x84 + *(int *)((int)0x108 + (int)ar4)))
                            (*(int *)((int)0x108 + (int)ar4),uStack_2c,ar6,ar7_00);
          iVar3 = (int)0x28c;
          iVar7 = uStack_2c * 4;
          iVar6 = *(int *)((int)0x108 + (int)ar4);
          uVar5 = (**(code **)(0x108 + -0x44 + iVar6))(iVar6,uVar5,ar6,ar7_00);
          *(undefined4 *)((int)ar4 + iVar7 + iVar3) = uVar5;
          uStack_2c = uStack_2c + 1;
        } while (uStack_2c < (uVar4 & 0xffff));
      }
      *(int **)((int)0x100 + (int)ar4) = ar5;
      ar5[1] = ar5[1] + 1;
      return 0;
    }
    uVar5 = 0x14;
  }
  else {
    uVar5 = 7;
    ar7_00 = (uint *)ar7;
  }
  uVar4 = (*(code *)puVar2)(ar4 + 0x12,uVar5,ar6,ar7_00);
LAB_8c11e7fa:
  return uVar4 & 0xff;
}

__asm__(".globl _FUN_8c11e534\n.set _FUN_8c11e534, _FUN_8c11e534_def\n");
