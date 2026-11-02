#include "../decls.h"
int FUN_8c25fca4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int ar7_00;
  short asStack_14 [4];
  undefined1 *puStack_c;
  
  puStack_c = &DAT_8c4b9828;
  *(undefined2 *)(ar4 + 2) = 1;
  ar7_00 = ar4 + 0xc;
  iVar2 = (*(code *)(&FUN_8c260d7c))
                    (ar5,ar6,asStack_14,ar7_00,ar4 + 0xd,ar4 + 0xf,ar4 + 0xe,ar4 + 0x14,ar4 + 0x18);
  if ((iVar2 < 0) || (iVar2 = FUN_8c260e9c(ar5,ar6,ar4 + 0x1c,ar7_00), iVar2 < 0)) {
    iVar2 = 0;
  }
  else {
    (*(code *)(&FUN_8c264f52))
              (*(undefined4 *)(ar4 + 8),*(undefined4 *)(ar4 + 0x14),(int)*(short *)(ar4 + 0x1c),
               ar7_00);
    iVar2 = ar4 + 0x24;
    (*(code *)(&FUN_8c260f02))
              (ar5,ar6,ar4 + 0x20,iVar2,ar4 + 0x26,ar4 + 0x28,ar4 + 0x2c,ar4 + 0x30,ar4 + 0x34);
    *(int *)(ar4 + 0x58) = (int)*(char *)(ar4 + 0xe);
    *(int *)(ar4 + 0x5c) = (int)*(char *)(ar4 + 0xf);
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(ar4 + 0x10);
    *(undefined4 *)(ar4 + 100) = *(undefined4 *)(ar4 + 0x3c);
    *(undefined4 *)(ar4 + 0x68) = *(undefined4 *)(ar4 + 0x40);
    *(undefined4 *)(ar4 + 0x6c) = *(undefined4 *)(ar4 + 0x44);
    *(undefined2 *)(ar4 + 0x7c) = *(undefined2 *)(ar4 + 0x48);
    *(undefined2 *)(ar4 + 0x7e) = *(undefined2 *)(ar4 + 0x4a);
    *(int *)(ar4 + 0x80) = ar4 + 0x4c;
    *(undefined4 *)(ar4 + 0x9c) = 0;
    puVar1 = (&memset);
    *(undefined2 *)(ar4 + 0xa8) = 0;
    (*(code *)puVar1)(ar4 + 0x4c,0,4,iVar2);
    iVar2 = (int)asStack_14[0];
  }
  return iVar2;
}

__asm__(".globl _FUN_8c25fca4\n.set _FUN_8c25fca4, _FUN_8c25fca4_def\n");
