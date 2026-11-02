#include "../decls.h"
undefined * input_peripheral_state_machine_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(ar4 + 0xa510);
  if ((iVar2 < 6) && (0 < iVar2)) {
    puVar1 = (&switchdata_8c01e7f6_8c01e7fc)[iVar2 + -1];
                    
    switch(iVar2) {
    case 2:
      iVar2 = FUN_8c01a3b4(ar4,*(undefined4 *)(ar4 + 0xa524),ar6,ar7);
      puVar1 = (undefined *)(uint)(iVar2 == 1);
      iVar2 = FUN_8c01cb54(ar4 + 0x384c,*(undefined4 *)(ar4 + 0xa524),ar6,ar7);
      if (iVar2 == 1) {
        puVar1 = (undefined *)((uint)puVar1 | 2);
      }
      if (puVar1 == (undefined *)0x0) {
        puVar1 = (undefined *)0xa510;
        *(undefined4 *)(ar4 + 0xa510) = 5;
      }
      else if (puVar1 == (undefined *)0x1) {
        puVar1 = (undefined *)0xa510;
        *(undefined4 *)(ar4 + 0xa510) = 4;
      }
      else if (puVar1 == (undefined *)0x2) {
        puVar1 = (undefined *)0xa510;
        *(undefined4 *)(ar4 + 0xa510) = 3;
      }
      else if (puVar1 == (undefined *)0x3) {
        puVar1 = (undefined *)0xa510;
        *(undefined4 *)(ar4 + 0xa510) = 0;
      }
      break;
    case 3:
      iVar2 = FUN_8c01d0cc(ar4 + 0x384c,ar5,ar6,ar7);
      if (iVar2 == 0) {
        *(undefined4 *)(ar4 + 0xa510) = 5;
      }
      puVar1 = (undefined *)FUN_8c01a3b4(ar4,*(undefined4 *)(ar4 + 0xa524),ar6,ar7);
      if (puVar1 == (undefined *)0x1) {
        puVar1 = (undefined *)0xa510;
        *(undefined4 *)(ar4 + 0xa510) = 0;
      }
      break;
    case 4:
      iVar2 = FUN_8c01a5cc(ar4,ar5,ar6,ar7);
      if (iVar2 == 0) {
        *(undefined4 *)(ar4 + 0xa510) = 5;
      }
      puVar1 = (undefined *)FUN_8c01cb54(ar4 + 0x384c,*(undefined4 *)(ar4 + 0xa524),ar6,ar7);
      if (puVar1 == (undefined *)0x1) {
        puVar1 = (undefined *)0xa510;
        *(undefined4 *)(ar4 + 0xa510) = 0;
      }
    }
  }
  else {
    iVar2 = FUN_8c01a5cc(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      *(undefined4 *)(ar4 + 0xa510) = 3;
    }
    puVar1 = (undefined *)FUN_8c01d0cc(ar4 + 0x384c,ar5,ar6,ar7);
    if (puVar1 == (undefined *)0x0) {
      puVar1 = (undefined *)0xa510;
      *(undefined4 *)(ar4 + 0xa510) = 4;
    }
  }
  return puVar1;
}

__asm__(".globl _input_peripheral_state_machine\n.set _input_peripheral_state_machine, _input_peripheral_state_machine_def\n");
