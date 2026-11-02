#include "../decls.h"
int FUN_8c02e8e0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (ar5 == 0) {
    FUN_8c02ea98(ar4,0,ar6,ar7);
    FUN_8c02eaac(ar4,ar5,ar6,ar7);
  }
  if (*(int *)(ar4 + 0xc) != 0) {
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + -1;
  }
  if (*(int *)(ar4 + 0x14) != 0) {
    *(int *)(ar4 + 0x14) = *(int *)(ar4 + 0x14) + -1;
  }
  if (*(int *)(ar4 + 0x10) != 0) {
    *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + -1;
  }
  if (*(int *)(ar4 + 0x10) == 0) {
    FUN_8c02ea98(ar4,ar5,ar6,ar7);
  }
  if (*(int *)(ar4 + 0x18) != 0) {
    *(int *)(ar4 + 0x18) = *(int *)(ar4 + 0x18) + -1;
  }
  if (*(int *)(ar4 + 0x20) != 0) {
    *(int *)(ar4 + 0x20) = *(int *)(ar4 + 0x20) + -1;
  }
  if (*(int *)(ar4 + 0x1c) != 0) {
    *(int *)(ar4 + 0x1c) = *(int *)(ar4 + 0x1c) + -1;
  }
  iVar1 = *(int *)(ar4 + 0x1c);
  if (iVar1 == 0) {
    iVar1 = FUN_8c02eaac(ar4,ar5,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02e8e0\n.set _FUN_8c02e8e0, _FUN_8c02e8e0_def\n");
