#include "../decls.h"
undefined4 FUN_8c11fc5e_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  char cVar2;
  
  if (ar5 == 0) {
    uVar1 = (**(code **)(ar4 + 0x28))(ar4,ar6,ar6,ar7);
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
  }
  else {
    cVar2 = '\0';
    if (*(char *)(ar5 + 9) != '\0') {
      do {
        if (*(int *)(cVar2 * 4 + *(int *)(ar5 + 0x10)) == 0) {
          *(undefined4 *)(cVar2 * 4 + *(int *)(ar5 + 0x10)) = ar6;
          return 0;
        }
        cVar2 = cVar2 + '\x01';
      } while ((int)cVar2 < (int)(uint)*(byte *)(ar5 + 9));
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11fc5e\n.set _FUN_8c11fc5e, _FUN_8c11fc5e_def\n");
