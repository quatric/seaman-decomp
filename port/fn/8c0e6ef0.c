#include "../decls.h"
undefined4 FUN_8c0e6ef0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr1;
  char cVar2;
  
  cVar2 = '\0';
  uVar1 = 1;
  (**(code **)(*ar4 + 0x1b0))(ar4,1,ar6,ar7);
  if (cVar2 == '\0') {
    ar4[0x1e] = 0x3f800000;
    ar4[0x1f] = 0x3e4ccccd;
  }
  else {
    *(ulonglong *)(ar4 + 0x1e) = CONCAT44(0x3f800000,in_fr1);
    ar4[0x1f] = 0x3e4ccccd;
    ar4[0x20] = 0x458ca000;
  }
  FUN_8c102a7c(ar4 + 0x2c4,uVar1,ar6,ar7);
  FUN_8c102a7c(ar4 + 0x2cc,uVar1,ar6,ar7);
  FUN_8c102a7c(ar4 + 0x2b4,uVar1,ar6,ar7);
  FUN_8c102a7c(ar4 + 700,uVar1,ar6,ar7);
  uVar1 = FUN_8c102974(ar4 + 0x2dc,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e6ef0\n.set _FUN_8c0e6ef0, _FUN_8c0e6ef0_def\n");
