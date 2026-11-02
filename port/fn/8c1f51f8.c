#include "../decls.h"
undefined4 FUN_8c1f51f8_def(undefined4 ar4,undefined4 ar5,uint *ar6,undefined4 ar7)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint *ar5_00;
  int unaff_r12;
  uint *unaff_r13;
  uint *unaff_r14;
  
  FUN_8c1f518e(ar6,ar7,ar6,ar7);
  ar5_00 = unaff_r13;
  FUN_8c1f5146(unaff_r14,unaff_r13,ar6,ar7);
  iVar3 = (int)0x10c4;
  *(byte *)((int)unaff_r14 + 2) =
       (*(byte *)((int)unaff_r14 + 1) ^ (byte)*unaff_r14) & (byte)*unaff_r14;
  piVar1 = 0x8c4727b4;
  *(byte *)((int)unaff_r14 + 3) =
       (*(byte *)((int)unaff_r14 + 1) ^ (byte)*unaff_r14) & ~(byte)*unaff_r14;
  if (((*(int *)(*piVar1 + iVar3) == 1) && ((byte)unaff_r14[2] != 0xff)) &&
     ((byte)unaff_r14[2] != 0)) {
    ar5_00 = (uint *)((*unaff_r13 & 0xff) + 1);
    FUN_8c1f4780(unaff_r13,ar5_00,ar6,ar7);
  }
  if ((byte)*unaff_r14 == 0) {
    bVar2 = 1;
  }
  else {
    bVar2 = 9;
  }
  *(byte *)(unaff_r14 + 1) = bVar2;
  if (*(byte *)((int)unaff_r14 + 2) != 0) {
    *(undefined1 *)(unaff_r12 + 0x10) = 1;
    ar5_00 = unaff_r14;
    FUN_8c1f53c2(unaff_r12,unaff_r14,unaff_r13,ar7);
    ar6 = unaff_r13;
  }
  if (*(byte *)((int)unaff_r14 + 3) != 0) {
    FUN_8c1f5506(unaff_r12,ar5_00,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f51f8\n.set _FUN_8c1f51f8, _FUN_8c1f51f8_def\n");
