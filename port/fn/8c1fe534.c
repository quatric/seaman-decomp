#include "../decls.h"
int FUN_8c1fe534_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *ar6_00;
  undefined1 *ar6_01;
  undefined1 auStack_40 [8];
  undefined2 uStack_38;
  undefined1 uStack_36;
  undefined4 uStack_34;
  undefined4 uStack_18;
  
  iVar1 = 0x8c4783e2;
  *ar6 = 0;
  if (*(char *)(iVar1 + ar4 * 0x148) != '\0') {
    uVar3 = ar5;
    ar6_00 = ar6;
    iVar1 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c1fdd1a(ar4,uVar3,ar6_00,ar7);
    }
    else {
      iVar1 = FUN_8c1fd550(ar4,uVar3,ar6_00,ar7);
      if ((iVar1 != 0) && (*(char *)(0x8c4783e8 + ar4 * 0x148) != '\0')) {
        iVar1 = thunk_FUN_8c1ffcc2(ar4,uVar3,ar6_00,ar7);
        if (iVar1 < 0) {
          return (int)(int)0xffffff03;
        }
        iVar1 = ret_const_0_200aec(ar4,ar5,ar6_00,ar7);
        if (-1 < iVar1) {
          uVar3 = ar5;
          iVar1 = FUN_8c200b10(ar4,ar5,ar6_00,ar7);
          if (iVar1 < 0) {
            return (int)(int)0xffffff41;
          }
          iVar1 = FUN_8c200ab6(ar4,uVar3,ar6_00,ar7);
          if (iVar1 != 0) {
            ar6_01 = auStack_40;
            iVar2 = FUN_8c200566(ar4,ar5,ar6_01,ar7);
            *(undefined4 *)0x8c47d2e4 = iVar2;
            if (iVar2 < 0) {
              FUN_8c200ae4(iVar1,ar5,ar6_01,ar7);
              return (int)(int)0xffffff05;
            }
            *(undefined4 *)(iVar1 + 4) = 0;
            *(undefined4 *)(iVar1 + 0x34) = uStack_18;
            *(undefined4 *)(iVar1 + 0x38) = uStack_34;
            *(undefined4 *)(iVar1 + 0x40) = uStack_34;
            *(int *)(iVar1 + 0x28) = ar4;
            *(undefined2 *)(iVar1 + 2) = uStack_38;
            *(undefined1 *)(iVar1 + 1) = uStack_36;
            *ar6 = iVar1;
            return 0;
          }
        }
        return (int)(int)0xffffff07;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1fe534\n.set _FUN_8c1fe534, _FUN_8c1fe534_def\n");
