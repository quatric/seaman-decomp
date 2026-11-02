#include "../decls.h"
int FUN_8c1fe466_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (int)0x148;
  iVar6 = ar4 * iVar5 + 0x8c4783e0;
  if (*(char *)(iVar6 + 2) != '\0') {
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,ar5,ar6,ar7);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,ar5,ar6,ar7);
      if ((iVar2 != 0) && (*(char *)(ar4 * iVar5 + 0x8c4783e0 + 8) != '\0')) {
        iVar5 = thunk_FUN_8c1ffcc2(ar4,ar5,ar6,ar7);
        uVar1 = 0xfffc;
        if (iVar5 < 0) {
          return (int)(int)0xffffff03;
        }
        iVar5 = 0;
        iVar2 = 0;
        while (iVar4 = *(int *)(iVar6 + 0x1c),
              iVar4 = *(int *)(iVar4 + 0x10) * (*(int *)(iVar4 + 0x2c) + 1),
              iVar2 < (int)(iVar4 + (uint)(iVar4 < 0)) >> 1) {
          uVar3 = FUN_8c2009d0(ar4,iVar2,ar6,ar7);
          iVar2 = iVar2 + 1;
          if ((uVar3 & 0xffff) == uVar1) {
            iVar5 = iVar5 + 1;
          }
        }
        return iVar5;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1fe466\n.set _FUN_8c1fe466, _FUN_8c1fe466_def\n");
