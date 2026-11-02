#include "../decls.h"
int FUN_8c02d944_def(undefined1 *ar4,int ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int iVar1;
  
  if ((0 < ar5) && (ain0 = 0, *(int *)(ar4 + 0x14) != 0)) {
    iVar1 = *(int *)(ar4 + 0xc) - *(int *)(ar4 + 4);
    if ((ar5 < 5) && (-1 < ar5)) {
                    
      switch((uint)ar5) {
      case 1:
        iVar1 = libgcc_divide_helper_0101e4(iVar1,2,ar6,ar7);
        iVar1 = iVar1 + -1;
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        break;
      case 2:
        iVar1 = libgcc_divide_helper_0101e4(iVar1,0x10,ar6,ar7);
        break;
      case 3:
        iVar1 = libgcc_divide_helper_0101e4(iVar1,0x10,ar6,ar7);
        break;
      case 4:
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0;
    }
    if (iVar1 == 0) {
      *ar4 = 1;
    }
    ain0 = *(int *)(ar4 + 0xc) - iVar1;
    *(int *)(ar4 + 4) = ain0;
  }
  return ain0;
}

__asm__(".globl _FUN_8c02d944\n.set _FUN_8c02d944, _FUN_8c02d944_def\n");
