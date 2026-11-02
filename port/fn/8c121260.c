#include "../decls.h"
int FUN_8c121260_def(byte *ar4,int ar5,uint ar6,int ar7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = ar7 + 1U >> 1;
  iVar3 = 0;
  if (ar5 == 0) {
    uVar1 = 0;
    if (ar6 != 0) {
      do {
        uVar1 = uVar1 + 1;
        iVar3 = iVar3 + *(int *)((&DATA_8c1293e4) + ((uint)*ar4 & (int)0xf0) * 4);
        ar4 = ar4 + uVar2;
      } while (uVar1 < ar6);
    }
  }
  else {
    uVar1 = 0;
    if (ar6 != 0) {
      do {
        uVar1 = uVar1 + 1;
        iVar3 = iVar3 + *(int *)((&DATA_8c1293e4) + ((uint)*ar4 << 4 & (int)0xf0) * 4);
        ar4 = ar4 + uVar2;
      } while (uVar1 < ar6);
    }
  }
  return iVar3;
}

__asm__(".globl _FUN_8c121260\n.set _FUN_8c121260, _FUN_8c121260_def\n");
