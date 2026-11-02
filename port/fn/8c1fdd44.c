#include "../decls.h"
int FUN_8c1fdd44_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 ar5_00;
  int *ar6_00;
  undefined1 *ar6_01;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined2 uStack_30;
  undefined1 uStack_2e;
  undefined1 auStack_18 [8];
  int iStack_10;
  
  iVar3 = (int)0x148;
  iVar4 = ar4 * iVar3 + 0x8c4783e0;
  if (*(char *)(iVar4 + 2) != '\0') {
    ar5_00 = ar5;
    ar6_00 = ar6;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,ar5_00,ar6_00,ar7);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,ar5_00,ar6_00,ar7);
      if ((iVar2 != 0) && (*(char *)(ar4 * iVar3 + 0x8c4783e0 + 8) != '\0')) {
        iVar3 = thunk_FUN_8c1ffcc2(ar4,ar5_00,ar6_00,ar7);
        if (iVar3 < 0) {
          return (int)(int)0xffffff03;
        }
        ar6_01 = auStack_38;
        iVar3 = FUN_8c200566(ar4,ar5,ar6_01,ar7);
        if (iVar3 < 0) {
          return (int)(int)0xffffff05;
        }
        iVar3 = (int)0xcc;
        *ar6 = iStack_10 * (*(int *)(*(int *)(iVar4 + 0x1c) + 0x2c) + 1);
        *(short *)(ar6 + 1) = (short)iStack_10;
        *(char *)((int)ar6 + 6) = (char)iStack_34;
        *(undefined1 *)((int)ar6 + 7) = uStack_2e;
        *(undefined2 *)(ar6 + 2) = uStack_30;
        puVar1 = (&FUN_8c200c82);
        *(bool *)((int)ar6 + 6) = iStack_34 == iVar3;
        (*(code *)puVar1)((int)ar6 + 10,auStack_18,ar6_01,ar7);
        return 0;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1fdd44\n.set _FUN_8c1fdd44, _FUN_8c1fdd44_def\n");
