#include "../decls.h"
int FUN_8c1fee6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  
  uVar3 = ar5;
  iVar1 = FUN_8c1fd510(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fdd1a(*(undefined4 *)(ar4 + 0x28),uVar3,ar6,ar7);
  }
  else {
    iVar1 = FUN_8c1fd550(*(undefined4 *)(ar4 + 0x28),uVar3,ar6,ar7);
    if ((iVar1 != 0) && (*(char *)(0x8c4783e8 + *(int *)(ar4 + 0x28) * (int)0x148) != '\0')
       ) {
      iVar1 = thunk_FUN_8c1ffcc2(*(undefined4 *)(ar4 + 0x28),uVar3,ar6,ar7);
      if (iVar1 < 0) {
        return (int)(int)0xffffff03;
      }
      uVar3 = *(undefined4 *)(ar4 + 0x28);
      if (*(int *)(ar4 + 0x40) == 0xfffa) {
        if (*(int *)(ar4 + 0x34) != 0) {
          return 0xffff0000;
        }
      }
      else if (*(int *)(ar4 + 0x34) != 0) {
        if ((*(int *)(ar4 + 0x40) != 0xfffc) && (*(int *)(ar4 + 0x40) != 0xffff)) {
          ar5_00 = *(undefined4 *)(ar4 + 0x40);
          iVar1 = FUN_8c1fbb6c(uVar3,ar5_00,ar5,ar7);
          if (iVar1 < 0) {
            return iVar1;
          }
          uVar2 = FUN_8c2009d0(uVar3,ar5_00,ar5,ar7);
          *(uint *)(ar4 + 0x40) = uVar2 & 0xffff;
          iVar1 = *(int *)(ar4 + 0x34) + -1;
          *(int *)(ar4 + 0x34) = iVar1;
          return iVar1;
        }
        return (int)(int)0xffffff41;
      }
      return 0;
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1fee6c\n.set _FUN_8c1fee6c, _FUN_8c1fee6c_def\n");
