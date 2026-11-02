#include "../decls.h"
undefined4 FUN_8c26bb16_def(int ar4,int ar5,undefined1 *ar6,undefined4 *ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *ar6_00;
  undefined4 *ar7_00;
  undefined4 *puVar3;
  undefined4 auStack_24 [2];
  undefined1 auStack_1c [4];
  int iStack_18;
  
  if ((ar5 < 0) || (3 < ar5)) {
    if (*(int *)(ar4 + 0x28) != 0) {
      ain0 = (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,ar6,ar7);
    }
    *ar7 = 0;
    ar7[1] = 0;
    return ain0;
  }
  ar6_00 = ar6;
  ar7_00 = ar7;
  uVar1 = FUN_8c26b960(ar4,ar5,ar6,ar7);
  iVar2 = ar5 * 4;
  puVar3 = *(undefined4 **)(ar4 + 0x18 + iVar2);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_8c010794(8,auStack_1c,puVar3 + 2);
    if (iStack_18 <= (int)ar6) {
      FUN_8c010794(8,ar7,auStack_1c);
      *(undefined4 *)(iVar2 + ar4 + 0x18) = *puVar3;
      *puVar3 = *(undefined4 *)(ar4 + 0x14);
      *(undefined4 **)(ar4 + 0x14) = puVar3;
      goto LAB_8c26bbce;
    }
    if (*(char *)(ar4 + 5) == '\x01') {
      ar7_00 = auStack_24;
      ar6_00 = auStack_1c;
      FUN_8c26be30(auStack_1c,ar6,ar6_00,ar7_00);
      FUN_8c010794(8,ar7,auStack_1c);
      FUN_8c010794(8,puVar3 + 2,auStack_24);
      goto LAB_8c26bbce;
    }
  }
  *ar7 = 0;
  ar7[1] = 0;
LAB_8c26bbce:
  uVar1 = FUN_8c26b978(ar4,uVar1,ar6_00,ar7_00);
  return uVar1;
}

__asm__(".globl _FUN_8c26bb16\n.set _FUN_8c26bb16, _FUN_8c26bb16_def\n");
