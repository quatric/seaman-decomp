#include "../decls.h"
int FUN_8c0d723c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint in_fr1;
  uint extraout_fr1;
  char cVar2;
  
  cVar2 = '\0';
  iVar1 = *(int *)(ar4 + 0x168);
  if (0 < iVar1) {
    iVar1 = *(int *)(ar4 + 0x168) + -1;
    *(int *)(ar4 + 0x168) = iVar1;
    if (iVar1 == 0) {
      iVar1 = FUN_8c0d7288(ar4,0,ar6,ar7);
      in_fr1 = extraout_fr1;
    }
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x2c) = (ulonglong)in_fr1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d723c\n.set _FUN_8c0d723c, _FUN_8c0d723c_def\n");
