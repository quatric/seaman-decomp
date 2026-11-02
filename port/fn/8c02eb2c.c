#include "../decls.h"
int FUN_8c02eb2c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if ((ar5 < 8) && (0 < ar5)) {
                    
    switch((uint)ar5) {
    case 1:
      iVar1 = 1;
      break;
    case 2:
      iVar1 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x10) + -0x46,6,ar6,ar7);
      break;
    case 3:
      iVar1 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x14) + -0x50,4,ar6,ar7);
      break;
    case 4:
      iVar1 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x18) + -0x50,4,ar6,ar7);
      break;
    case 5:
      iVar1 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x24) + -0x3c,8,ar6,ar7);
      break;
    case 6:
      iVar1 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x20) + -0x32,0xd,ar6,ar7);
      iVar1 = iVar1 + 1;
      break;
    case 7:
      iVar1 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x1c) + -0x32,0xd,ar6,ar7);
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02eb2c\n.set _FUN_8c02eb2c, _FUN_8c02eb2c_def\n");
