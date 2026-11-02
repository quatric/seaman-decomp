#include "../decls.h"
undefined4 FUN_8c25ff3e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(short *)(ain0 + ar4) == 0) {
    *(undefined4 *)(ar4 + 0x50) = ar5;
    uVar1 = libgcc_divide_helper_010468(ar6,(int)*(char *)(ar4 + 0xf));
  }
  else {
    *(undefined4 *)(ar4 + 0x50) = ar5;
    iVar2 = (int)*(char *)(ar4 + 0xd);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    uVar1 = libgcc_divide_helper_010468(ar6,(iVar2 >> 3) * (int)*(char *)(ar4 + 0xe));
  }
  *(undefined4 *)(ar4 + 0x54) = uVar1;
  *(undefined4 *)(ar4 + 0x84) = 0;
  *(undefined4 *)(ar4 + 0xa0) = 0;
  *(undefined4 *)(ar4 + 0xa4) = 0;
  return 0xa4;
}

__asm__(".globl _FUN_8c25ff3e\n.set _FUN_8c25ff3e, _FUN_8c25ff3e_def\n");
