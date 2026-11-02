#include "../decls.h"
int FUN_8c06b29c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint ar5_00;
  uint auStack_2c [5];
  
  ar5_00 = 1;
  auStack_2c[0] = *(uint *)(&DATA_8c1371b0);
  auStack_2c[1] = *(undefined4 *)((&DATA_8c1371b0) + 4);
  auStack_2c[2] = *(undefined4 *)((&DATA_8c1371b0) + 8);
  auStack_2c[3] = *(undefined4 *)((&DATA_8c1371b0) + 0xc);
  iVar1 = -1;
  iVar2 = ar6;
  do {
    iVar1 = iVar1 + 1;
    uVar3 = (*(uint *)(0x214 + ar4) | auStack_2c[ar5]) & ar5_00;
    if ((uVar3 != 0) || (*(char *)(0x248 + ar4 + iVar1) == '\x02')) {
      iVar2 = iVar2 + -1;
      ar5_00 = ar5_00 << 1;
    }
  } while (((uVar3 != 0) || (*(char *)(0x248 + ar4 + iVar1) == '\x02')) && (0 < iVar2));
  if (iVar2 < 1) {
    iVar2 = -1;
  }
  else {
    FUN_8c06b25c(ar4,ar5_00,ar6,ar7);
    iVar2 = 0;
    for (; ar5_00 != 0; ar5_00 = (int)ar5_00 >> 1) {
      iVar2 = iVar2 + 1;
    }
    iVar2 = iVar2 + -1;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c06b29c\n.set _FUN_8c06b29c, _FUN_8c06b29c_def\n");
