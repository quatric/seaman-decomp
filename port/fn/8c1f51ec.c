#include "../decls.h"
undefined4 FUN_8c1f51ec_def(undefined4 ar4,int ar5,uint *ar6,uint *ar7)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint *ar5_00;
  uint *ar6_00;
  uint *ar7_00;
  undefined4 uVar4;
  
  uVar4 = 0;
  ar6_00 = ar6;
  ar7_00 = ar7;
  FUN_8c1f518e(ar6,ar7,ar6,ar7);
  ar5_00 = ar7;
  FUN_8c1f5146(ar6,ar7,ar6_00,ar7_00);
  iVar3 = (int)0x10c4;
  *(byte *)((int)ar6 + 2) = (*(byte *)((int)ar6 + 1) ^ (byte)*ar6) & (byte)*ar6;
  piVar1 = 0x8c4727b4;
  *(byte *)((int)ar6 + 3) = (*(byte *)((int)ar6 + 1) ^ (byte)*ar6) & ~(byte)*ar6;
  if (((*(int *)(*piVar1 + iVar3) == 1) && ((byte)ar6[2] != 0xff)) && ((byte)ar6[2] != 0)) {
    ar5_00 = (uint *)((*ar7 & 0xff) + 1);
    FUN_8c1f4780(ar7,uVar4);
  }
  if ((byte)*ar6 == 0) {
    bVar2 = 1;
  }
  else {
    bVar2 = 9;
  }
  *(byte *)(ar6 + 1) = bVar2;
  if (*(byte *)((int)ar6 + 2) != 0) {
    *(undefined1 *)(ar5 + 0x10) = 1;
    ar5_00 = ar6;
    FUN_8c1f53c2(ar5,ar6,ar7,ar7_00);
    ar6_00 = ar7;
  }
  if (*(byte *)((int)ar6 + 3) != 0) {
    FUN_8c1f5506(ar5,ar5_00,ar6_00,ar7_00);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f51ec\n.set _FUN_8c1f51ec, _FUN_8c1f51ec_def\n");
