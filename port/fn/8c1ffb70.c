#include "../decls.h"
int FUN_8c1ffb70_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined1 auStack_34 [40];
  undefined4 uStack_c;
  
  if (*(char *)(0x8c4783e2 + ar4 * 0x148) != '\0') {
    ar5_00 = ar5;
    iVar1 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c1fdd1a(ar4,ar5_00,ar6,ar7);
    }
    else {
      iVar1 = FUN_8c1fd550(ar4,ar5_00,ar6,ar7);
      if ((iVar1 != 0) && (*(char *)(0x8c4783e8 + ar4 * 0x148) != '\0')) {
        iVar1 = thunk_FUN_8c1ffcc2(ar4,ar5_00,ar6,ar7);
        if (iVar1 < 0) {
          return (int)(int)0xffffff03;
        }
        iVar1 = ret_const_0_200aec(ar4,ar5,ar6,ar7);
        if (iVar1 < 0) {
          return (int)(int)0xffffff0b;
        }
        iVar1 = FUN_8c200566(ar4,ar5,auStack_34,ar7);
        if (iVar1 < 0) {
          return (int)(int)0xffffff05;
        }
        return uStack_c;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1ffb70\n.set _FUN_8c1ffb70, _FUN_8c1ffb70_def\n");
