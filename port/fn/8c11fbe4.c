#include "../decls.h"
undefined4 FUN_8c11fbe4_def(int ar4,int ar5,int ar6,int ar7)

{
  uint uVar1;
  char cVar2;
  
  *(int *)(*(int *)(ar6 + 0x34) + ar7 * 4) = ar5;
  if (ar5 == 0) {
    uVar1 = (**(code **)(ar4 + 0x24))(ar4,ar6,ar7,ar7);
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
  }
  else {
    cVar2 = '\0';
    if (*(char *)(ar5 + 8) != '\0') {
      do {
        if (*(int *)(cVar2 * 8 + *(int *)(ar5 + 0xc)) == 0) {
          *(int *)(*(int *)(ar5 + 0xc) + cVar2 * 8) = ar6;
          *(int *)(cVar2 * 8 + *(int *)(ar5 + 0xc) + 4) = ar7;
          return 0;
        }
        cVar2 = cVar2 + '\x01';
      } while ((int)cVar2 < (int)(uint)*(byte *)(ar5 + 8));
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11fbe4\n.set _FUN_8c11fbe4, _FUN_8c11fbe4_def\n");
