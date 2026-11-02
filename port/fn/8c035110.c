#include "../decls.h"
int FUN_8c035110_def(undefined2 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  int iVar2;
  short sVar3;
  int iVar4;
  
  iVar2 = -1;
  sVar3 = 0;
  ar5_00 = ar5;
  for (iVar4 = 0; iVar4 < *(short *)(*(int *)(ar4 + 0xe) + 2); iVar4 = iVar4 + 1) {
    if (*(char *)((int)ar4 + iVar4 + 0xc) == '\x02') {
      iVar1 = FUN_8c02c518(*(undefined4 *)(ar5 + 8),ar5_00,ar6,ar7);
      if ((iVar1 == -1) && (sVar3 < *(short *)(*(int *)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4) + 2)))
      {
        if (*(char *)(*(int *)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x21) == '\0') {
          iVar1 = (**(code **)(*(int *)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x10))
                            (ar5,ar5_00,ar6,ar7);
          if (iVar1 == 1) {
            iVar2 = (int)**(short **)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4);
            sVar3 = *(short *)(*(int *)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4) + 2);
          }
        }
        else if (*(char *)(*(int *)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x21) == '\x01') {
          ar5_00 = ar5;
          iVar1 = FUN_8c03525c(ar4,ar5,ar6,ar7);
          if (iVar1 == 1) {
            iVar1 = (**(code **)(*(int *)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x10))
                              (ar5,ar5_00,ar6,ar7);
            if (iVar1 == 1) {
              iVar2 = (int)**(short **)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4);
              sVar3 = *(short *)(*(int *)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4) + 2);
            }
          }
        }
      }
    }
  }
  if (iVar2 == -1) {
    iVar2 = -1;
  }
  else {
    *(undefined1 *)((int)ar4 + iVar2 + 0xc) = 3;
    *ar4 = (short)iVar2;
    *(undefined4 *)(ar4 + 4) = 1;
    *(undefined4 *)(ar4 + 0x12) = 0;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c035110\n.set _FUN_8c035110, _FUN_8c035110_def\n");
