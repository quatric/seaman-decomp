#include "../decls.h"
undefined4 FUN_8c0355cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(0x180 + *(int *)(*(int *)(ar4 + 4) + 8)))
                    (*(int *)(ar4 + 4),ar5,ar6,ar7);
  if ((((iVar1 == 0) &&
       (uVar2 = FUN_8c02d1c8(*(int *)(ar4 + 8) + 0xa8,ar5,ar6,ar7),
       (char)uVar2 == '\x01')) &&
      (iVar1 = get_field_178_035734(*(undefined4 *)(ar4 + 0xc),ar5,ar6,ar7),
      iVar1 == 0)) &&
     (iVar1 = get_field_140_025f70(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7),
     iVar1 == 1)) {
    ar5 = 7;
    iVar1 = FUN_8c0fa388(0x8c35468c,7,ar6,ar7);
    if (((iVar1 == 1) &&
        (uVar2 = (*(code *)(&get_field_a0_035724))
                           (*(undefined4 *)(ar4 + 0x20),ar5,ar6,ar7), (char)uVar2 == '\x02')) &&
       (iVar1 = (**(code **)(**(int **)(ar4 + 0x10) + 0x44))(*(int **)(ar4 + 0x10),ar5,ar6,ar7),
       iVar1 == 0)) {
      return 1;
    }
  }
  iVar1 = (**(code **)(0x180 + *(int *)(*(int *)(ar4 + 4) + 8)))
                    (*(int *)(ar4 + 4),ar5,ar6,ar7);
  if (((iVar1 == 0x1d) &&
      (uVar2 = FUN_8c02d1c8(*(int *)(ar4 + 8) + 0xa8,ar5,ar6,ar7),
      (char)uVar2 == '\x01')) &&
     ((iVar1 = get_field_178_035734(*(undefined4 *)(ar4 + 0xc),ar5,ar6,ar7),
      iVar1 == 0 &&
      (((iVar1 = get_field_140_025f70(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7),
        iVar1 == 1 &&
        (uVar2 = (*(code *)(&get_field_a0_035724))
                           (*(undefined4 *)(ar4 + 0x20),ar5,ar6,ar7), (char)uVar2 == '\x02')) &&
       (iVar1 = (**(code **)(**(int **)(ar4 + 0x10) + 0x44))(*(int **)(ar4 + 0x10),ar5,ar6,ar7),
       iVar1 == 0)))))) {
    FUN_8c035718(*(undefined4 *)(ar4 + 0x18),4,ar6,ar7);
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0355cc\n.set _FUN_8c0355cc, _FUN_8c0355cc_def\n");
