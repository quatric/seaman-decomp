#include "../decls.h"
undefined4 FUN_8c26bd86_def(int ar4,int ar5,int ar6,undefined4 *ar7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_10 [12];
  
  puVar2 = auStack_10;
  *ar7 = 0;
  if ((ar5 < 0) || (3 < ar5)) {
    if (*(int *)(ar4 + 0x28) != 0) {
      (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,ar6,ar7);
    }
  }
  else {
    iVar1 = *(int *)(ar5 * 4 + ar4 + 0x18);
    if (iVar1 != 0) {
      FUN_8c010794(8,auStack_10,iVar1 + 8);
      *ar7 = *(undefined4 *)(puVar2 + 4);
      if (*(char *)(ar4 + 5) == '\x01') {
        if (ar6 <= *(int *)(puVar2 + 4)) {
          return 1;
        }
      }
      else if (*(int *)(puVar2 + 4) == ar6) {
        return 1;
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c26bd86\n.set _FUN_8c26bd86, _FUN_8c26bd86_def\n");
