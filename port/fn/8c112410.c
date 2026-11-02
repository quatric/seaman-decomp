#include "../decls.h"
int * FUN_8c112410_def(int *ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  ulonglong *puVar2;
  uint uVar3;
  uint in_fr5;
  ulonglong uVar4;
  uint uVar5;
  char cVar6;
  
  cVar6 = '\0';
  uVar5 = ar5 * ar6;
  *ar4 = ar5;
  ar4[1] = ar6;
  ar4[2] = uVar5;
  iVar1 = (**(code **)(ar7 + 0x10))(ar7,uVar5 * 4);
  ar4[3] = iVar1;
  if (iVar1 == 0) {
    (**(code **)(ar7 + 0x18))(ar7,ar4);
    ar4 = (int *)0x0;
  }
  else {
    *(undefined1 *)(ar4 + 5) = 1;
    uVar3 = 0;
    ar4[4] = uVar5 * 4 + ar4[3];
    puVar2 = (ulonglong *)(uint)ar4[3];
    if (cVar6 == '\0') {
      uVar4 = (ulonglong)in_fr5;
    }
    else {
      uVar4 = 0x8c1129e400000000;
    }
    if (uVar5 != 0) {
      do {
        uVar3 = uVar3 + 1;
        if (cVar6 == '\0') {
          *(int *)puVar2 = (int)(uVar4 >> 0x20);
        }
        else {
          *puVar2 = uVar4;
        }
        puVar2 = (ulonglong *)((int)puVar2 + 4);
      } while (uVar3 < uVar5);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c112410\n.set _FUN_8c112410, _FUN_8c112410_def\n");
