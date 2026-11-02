#include "../decls.h"
undefined4 FUN_8c0d3c08_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  int iVar3;
  
  ar5_00 = 1;
  uVar2 = ar5;
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    iVar1 = get_field_40_0d3d64(iVar3 * 0x44 + ar4 + 0x470,uVar2,ar6,ar7);
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(ar4 + 0x5e8);
      FUN_8c0d21a0(iVar3 * 0x44 + ar4 + 0x470,uVar2,ar6,ar7);
    }
  }
  if (*(int *)(ar4 + 0x30) == 1) {
    if ((*(int *)(ar4 + 0x61c) < 2) &&
       (*(int *)(ar4 + 0x61c) = *(int *)(ar4 + 0x61c) + 2, 2 < *(int *)(ar4 + 0x61c))) {
      *(undefined4 *)(ar4 + 0x61c) = 2;
    }
    ar5_00 = 9;
  }
  else if ((-0x1e < *(int *)(ar4 + 0x61c)) &&
          (*(int *)(ar4 + 0x61c) = *(int *)(ar4 + 0x61c) + -2, *(int *)(ar4 + 0x61c) < -0x1e)) {
    *(undefined4 *)(ar4 + 0x61c) = 0xffffffe2;
  }
  FUN_8c0d59a4(ar4,ar5_00,ar5,ar7);
  uVar2 = FUN_8c0d5ca8(ar4,ar5_00,ar5,ar7);
  *(int *)(ar4 + 0x5e8) = *(int *)(ar4 + 0x5e8) + 1;
  return uVar2;
}

__asm__(".globl _FUN_8c0d3c08\n.set _FUN_8c0d3c08, _FUN_8c0d3c08_def\n");
