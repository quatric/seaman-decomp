#include "../decls.h"
undefined4 FUN_8c1fd1e2_def(int ar4,int ar5,int ar6,int ar7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int ar4_00;
  undefined4 ar4_01;
  int iVar6;
  int iVar7;
  
  iVar6 = ar4 * 0x148;
  iVar7 = ar4;
  ar4_00 = ar6;
  iVar2 = FUN_8c1fd550(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    thunk_FUN_8c1f6a30(iVar7,ar5,ar6,ar7);
    return 0xffffff01;
  }
  ar4_01 = *(undefined4 *)(&DAT_8c26d1e8 + ar4 * 4);
  FUN_8c1efd14(ar4_01,ar5,ar6,ar7);
  iVar7 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(*(int *)(&DAT_8c4783fc + iVar6) + 0x3c) <= iVar7) {
      return 0;
    }
    while( true ) {
      while( true ) {
        iVar3 = thunk_FUN_8c1f4636(ar4_01,ar5,ar6,ar7);
        if (iVar3 != 0) {
          return 0xffffff30;
        }
        ar6 = 0;
        ar5 = 2;
        uVar5 = ar4_01;
        ar7 = iVar2;
        iVar3 = FUN_8c1efe80(ar4_01,2,0,iVar2);
        if (-1 < iVar3) break;
        thunk_FUN_8c1f6a30(uVar5,ar5,ar6,ar7);
      }
      while (uVar5 = ar4_01, ar5 = iVar3, iVar4 = thunk_FUN_8c1f461c(ar4_01,iVar3,ar6,ar7),
            iVar4 == 0) {
        thunk_FUN_8c1f6a30(uVar5,ar5,ar6,ar7);
      }
      iVar3 = FUN_8c1efd14(ar4_01,ar5,ar6,ar7);
      iVar4 = thunk_FUN_8c1f4636(ar4_01,ar5,ar6,ar7);
      if (iVar4 != 0) {
        return 0xffffff30;
      }
      cVar1 = *(char *)(iVar3 + 4);
      if (cVar1 == '\b') break;
      if (cVar1 != -4) {
        if (cVar1 != -5) {
          return 0xffffff01;
        }
        return 0xffff0000;
      }
    }
    ar6 = *(int *)(*(int *)(&DAT_8c4783fc + iVar6) + 0x44);
    ar5 = *(int *)(iVar3 + 8) + 0xc;
    FUN_8c1fc980(ar4_00,ar5,ar6,ar7,iVar7);
    iVar2 = iVar2 + 1;
    ar4_00 = ar4_00 + *(int *)(*(int *)(&DAT_8c4783fc + iVar6) + 0x44);
    iVar7 = iVar7 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c1fd1e2\n.set _FUN_8c1fd1e2, _FUN_8c1fd1e2_def\n");
