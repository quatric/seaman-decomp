#include "../decls.h"
int FUN_8c1ff95a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined1 *ar6_01;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [48];
  
  if (*(char *)(0x8c4783e2 + ar4 * 0x148) != '\0') {
    ar5_00 = ar5;
    ar6_00 = ar6;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,ar5_00,ar6_00,ar7);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,ar5_00,ar6_00,ar7);
      if ((iVar2 != 0) && (*(char *)(0x8c4783e8 + ar4 * 0x148) != '\0')) {
        iVar2 = thunk_FUN_8c1ffcc2(ar4,ar5_00,ar6_00,ar7);
        if (iVar2 < 0) {
          return (int)(int)0xffffff03;
        }
        iVar2 = ret_const_0_200aec(ar4,ar5,ar6_00,ar7);
        if (iVar2 < 0) {
          return (int)(int)0xffffff0b;
        }
        puVar3 = auStack_34;
        iVar2 = FUN_8c200566(ar4,ar5,puVar3,ar7);
        if (iVar2 < 0) {
          return (int)(int)0xffffff05;
        }
        iVar2 = FUN_8c200a84(ar4,iVar2,puVar3,ar7);
        ar6_01 = (undefined1 *)(iVar2 + 0x10);
        for (puVar3 = auStack_3c; puVar3 < auStack_34; puVar3 = puVar3 + 1) {
          uVar1 = *ar6_01;
          ar6_01 = ar6_01 + 1;
          *puVar3 = uVar1;
        }
        FUN_8c200c82(ar6,auStack_3c,ar6_01,ar7);
        return 0;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1ff95a\n.set _FUN_8c1ff95a, _FUN_8c1ff95a_def\n");
