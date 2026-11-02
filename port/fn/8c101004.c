#include "../decls.h"
int FUN_8c101004_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  while (!bVar1) {
    if (*(int *)(0x88 + ar4) != -1) {
      ar5 = *(undefined4 *)(0x88 + ar4);
      iVar2 = FUN_8c021f18(0x8c2b59d0,ar5,ar6,ar7);
      if ((iVar2 == 1) || (iVar2 == 2)) {
        *(undefined4 *)(0x88 + ar4) = 0xffffffff;
      }
    }
    bVar1 = true;
  }
  iVar2 = FUN_8c01ecf8(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  if (iVar2 == 1) {
    iVar2 = FUN_8c01ef68(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
    if (iVar2 == 1) {
      FUN_8c1017f4(ar4,ar5,ar6,ar7);
      *(undefined1 *)(0xb8 + ar4) = 1;
      *(int *)(0xc4 + ar4) = *(int *)(0xc4 + ar4) + 1;
      goto LAB_8c1010c2;
    }
  }
  *(undefined1 *)(0xb8 + ar4) = 0;
LAB_8c1010c2:
  FUN_8c1019f8(ar4,ar5,ar6,ar7);
  if (*(int *)(0xb0 + ar4) == 1) {
    iVar2 = FUN_8c101a4c(ar4,ar5,ar6,ar7);
  }
  else {
    iVar2 = (int)*(char *)(ar4 + 0x28);
    if (iVar2 == 4) {
      FUN_8c101a4c(ar4,ar5,ar6,ar7);
      iVar2 = FUN_8c101da0(ar4,ar5,ar6,ar7);
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c101004\n.set _FUN_8c101004, _FUN_8c101004_def\n");
