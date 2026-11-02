#include "../decls.h"
undefined4 FUN_8c1f4102_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  piVar3 = 0x8c4727b4;
  iVar7 = *(undefined4 *)0x8c4727b4;
  iVar6 = iVar7 + 0x28;
  puVar5 = (uint *)(0x44c + iVar7);
  if (0 < *(int *)(0x10e4 + iVar7)) {
    FUN_8c1f4a00(*(undefined4 *)(0x10e4 + iVar7),1);
  }
  puVar2 = (&FUN_8c1f55e4);
  for (iVar7 = 0; iVar7 < 0x18; iVar7 = iVar7 + 1) {
    if ((*(char *)((int)0xf90 + *piVar3 + iVar7) != '\0') && (*(char *)(iVar6 + 6) == '\0'))
    {
      cVar1 = *(char *)(iVar6 + 4);
      if (cVar1 == '\x01') {
        (*(code *)puVar2)(iVar7);
      }
      else if (cVar1 == '\x02') {
        FUN_8c1f56b0(iVar7);
      }
      else if (cVar1 == '\x03') {
        FUN_8c1f566c(iVar7);
      }
      else if (cVar1 == '\x04') {
        FUN_8c1f5628(iVar7);
      }
      else if (cVar1 == '\t') {
        uVar4 = *puVar5;
        if ((uVar4 & 1) != 0) {
          uVar4 = 1;
        }
        FUN_8c1f5582(iVar7,uVar4);
      }
    }
    puVar5 = puVar5 + 0x1e;
    iVar6 = iVar6 + 0x2c;
  }
  FUN_8c1f59c8();
  return 0;
}

__asm__(".globl _FUN_8c1f4102\n.set _FUN_8c1f4102, _FUN_8c1f4102_def\n");
