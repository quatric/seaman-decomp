#include "../decls.h"
undefined4 FUN_8c1fd312_def(int ar4,int ar5,char *ar6,undefined4 *ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int ar5_00;
  undefined4 *ar7_00;
  undefined4 ar4_00;
  char acStack_34 [4];
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  int iStack_28;
  int iStack_24;
  
  puStack_2c = &DAT_8c4783e0 + ar4 * 0x148;
  iVar2 = ar4;
  ar5_00 = ar5;
  iVar1 = FUN_8c1fd550(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    thunk_FUN_8c1f6a30(iVar2,ar5_00,ar6,ar7);
  }
  else {
    ar4_00 = *(undefined4 *)(&DAT_8c26d1e8 + ar4 * 4);
    FUN_8c1efd14(ar4_00,ar5_00,ar6,ar7);
    uVar3 = *(undefined4 *)(*(int *)(puStack_2c + 0x1c) + 0x48);
    ar7_00 = (undefined4 *)0x0;
    for (iStack_24 = 0; iStack_24 < *(int *)(*(int *)(puStack_2c + 0x1c) + 0x40);
        iStack_24 = iStack_24 + 1) {
      while( true ) {
        while( true ) {
          iVar2 = thunk_FUN_8c1f4636(ar4_00,ar5_00,ar6,ar7);
          if (iVar2 != 0) {
            return 0xffffff30;
          }
          libgcc_divide_helper_010468(uVar3,4);
          ar5_00 = 2;
          ar6 = (char *)0x0;
          uVar4 = ar4_00;
          ar7 = ar7_00;
          iVar2 = FUN_8c1efeac(ar4_00,2,0,ar7_00);
          if (-1 < iVar2) break;
          thunk_FUN_8c1f6a30(uVar4,ar5_00,ar6,ar7);
        }
        while (uVar4 = ar4_00, ar5_00 = iVar2, iVar1 = thunk_FUN_8c1f461c(ar4_00,iVar2,ar6,ar7),
              iVar1 == 0) {
          thunk_FUN_8c1f6a30(uVar4,ar5_00,ar6,ar7);
        }
        iStack_28 = FUN_8c1efd14(ar4_00,ar5_00,ar6,ar7);
        iVar2 = thunk_FUN_8c1f4636(ar4_00,ar5_00,ar6,ar7);
        if (iVar2 != 0) {
          return 0xffffff30;
        }
        if (*(char *)(iStack_28 + 4) == '\a') break;
        if (*(char *)(iStack_28 + 4) != -4) {
          return 0xffffff01;
        }
      }
      ar7_00 = (undefined4 *)((int)ar7_00 + 1);
    }
    do {
      while( true ) {
        iVar2 = thunk_FUN_8c1f4636(ar4_00,ar5_00,ar6,ar7);
        if (iVar2 != 0) {
          return 0xffffff30;
        }
        ar6 = (char *)0x0;
        ar5_00 = 2;
        uVar3 = ar4_00;
        ar7 = ar7_00;
        iVar2 = FUN_8c1efee0(ar4_00,2,0,ar7_00);
        if (-1 < iVar2) break;
        thunk_FUN_8c1f6a30(uVar3,ar5_00,ar6,ar7);
      }
      while (uVar3 = ar4_00, ar5_00 = iVar2, iVar1 = thunk_FUN_8c1f461c(ar4_00,iVar2,ar6,ar7),
            iVar1 == 0) {
        thunk_FUN_8c1f6a30(uVar3,ar5_00,ar6,ar7);
      }
      iVar2 = FUN_8c1efd14(ar4_00,ar5_00,ar6,ar7);
      iVar1 = thunk_FUN_8c1f4636(ar4_00,ar5_00,ar6,ar7);
      if (iVar1 != 0) {
        return 0xffffff30;
      }
      if (DAT_8c273a48 == (code *)0x0) {
LAB_8c1fd4ac:
        acStack_34[0] = *(char *)(iVar2 + 4);
        uStack_30 = *(undefined4 *)(iVar2 + 0xc);
      }
      else {
        ar6 = acStack_34;
        ar7 = &uStack_30;
        ar5_00 = ar5;
        iVar1 = (*DAT_8c273a48)(ar4,ar5,ar6,ar7);
        if (iVar1 == 0) goto LAB_8c1fd4ac;
      }
      if (acStack_34[0] == '\a') {
        return 0;
      }
    } while (acStack_34[0] == -4);
    if (acStack_34[0] == -5) {
      return 0xffffff40;
    }
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1fd312\n.set _FUN_8c1fd312, _FUN_8c1fd312_def\n");
