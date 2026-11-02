#include "../decls.h"
undefined4 FUN_8c0cf1e4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(ar4 + 0x150);
  if ((iVar2 < 5) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        *(undefined4 *)(ar4 + iVar2 * 4 + 0x4c8) = 0xffffff;
      }
      *(undefined2 *)(ar4 + 0x146) = 0;
      *(undefined4 *)(ar4 + 0x150) = 1;
      break;
    case 1:
      if (*(uint *)(ar4 + 0x4c8) < 0xfaffffff) {
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
          iVar1 = ar4 + iVar2 * 4;
          *(int *)(iVar1 + 0x4c8) = *(int *)(iVar1 + 0x4c8) + 0x5000000;
        }
      }
      else {
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
          *(undefined4 *)(ar4 + iVar2 * 4 + 0x4c8) = 0xffffffff;
        }
        *(undefined4 *)(ar4 + 0x150) = 2;
      }
      break;
    case 2:
      *(short *)(ar4 + 0x146) = *(short *)(ar4 + 0x146) + 1;
      if (*(short *)(ar5 + 0x10) <= *(short *)(ar4 + 0x146)) {
        *(undefined2 *)(ar4 + 0x146) = 0;
        *(undefined4 *)(ar4 + 0x150) = 3;
      }
      break;
    case 3:
      if (*(uint *)(ar4 + 0x4c8) < 0x6000000) {
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
          *(undefined4 *)(ar4 + iVar2 * 4 + 0x4c8) = 0xffffff;
        }
        *(undefined2 *)(ar4 + 0x146) = 0;
        *(undefined4 *)(ar4 + 0x150) = 4;
      }
      else {
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
          iVar1 = ar4 + iVar2 * 4;
          *(int *)(iVar1 + 0x4c8) = *(int *)(iVar1 + 0x4c8) + -0x5000000;
        }
      }
      break;
    case 4:
      *(short *)(ar4 + 0x146) = *(short *)(ar4 + 0x146) + 1;
      if (0x59 < *(short *)(ar4 + 0x146)) {
        *(undefined2 *)(ar4 + 0x146) = 0;
        *(undefined4 *)(ar4 + 0x150) = 0;
        return 5;
      }
    }
  }
  return *(undefined4 *)(ar4 + 0x150);
}

__asm__(".globl _FUN_8c0cf1e4\n.set _FUN_8c0cf1e4, _FUN_8c0cf1e4_def\n");
