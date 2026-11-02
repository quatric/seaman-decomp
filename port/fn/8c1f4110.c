#include "../decls.h"
undefined4 FUN_8c1f4110_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar2;
  int in_r0;
  int *unaff_r10;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *unaff_r10;
  iVar4 = iVar5 + 0x28;
  puVar3 = (uint *)(0x44c + iVar5);
  if (0 < *(int *)(in_r0 + iVar5)) {
    ar4 = *(int *)(in_r0 + iVar5);
    FUN_8c1f4a00(ar4,ar5,ar6,ar7);
  }
  puVar2 = (&FUN_8c1f55e4);
  for (iVar5 = 0; iVar5 < 0x18; iVar5 = iVar5 + 1) {
    if ((*(char *)((int)0xf90 + *unaff_r10 + iVar5) != '\0') &&
       (*(char *)(iVar4 + 6) == '\0')) {
      cVar1 = *(char *)(iVar4 + 4);
      if (cVar1 == '\x01') {
        ar4 = iVar5;
        (*(code *)puVar2)(iVar5,ar5,ar6,ar7);
      }
      else if (cVar1 == '\x02') {
        ar4 = iVar5;
        FUN_8c1f56b0(iVar5,ar5,ar6,ar7);
      }
      else if (cVar1 == '\x03') {
        ar4 = iVar5;
        FUN_8c1f566c(iVar5,ar5,ar6,ar7);
      }
      else if (cVar1 == '\x04') {
        ar4 = iVar5;
        FUN_8c1f5628(iVar5,ar5,ar6,ar7);
      }
      else if (cVar1 == '\t') {
        ar5 = *puVar3;
        if ((ar5 & 1) != 0) {
          ar5 = 1;
        }
        ar4 = iVar5;
        FUN_8c1f5582(iVar5,ar5,ar6,ar7);
      }
    }
    puVar3 = puVar3 + 0x1e;
    iVar4 = iVar4 + 0x2c;
  }
  FUN_8c1f59c8(ar4,ar5,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c1f4110\n.set _FUN_8c1f4110, _FUN_8c1f4110_def\n");
