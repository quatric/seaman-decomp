#include "../decls.h"
undefined4 FUN_8c0dfbdc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar4_00;
  undefined4 ar5_00;
  int a4;
  uint extraout_fr1;
  uint extraout_fr1_00;
  uint uVar2;
  char cVar3;
  
  cVar3 = '\0';
  ar5_00 = ar5;
  iVar1 = get_field_38_0db5a0(ar4 + 0x768,ar5,ar6,ar7);
  if (iVar1 != 0) {
    iVar1 = FUN_8c0db580(ar4 + 0x768,ar5_00,ar6,ar7);
    a4 = *(int *)(iVar1 + 8);
    iVar1 = (**(code **)(*(int *)(a4 + 8) + 0xcc))(a4,ar5_00,ar6,ar7);
    if ((iVar1 == 1) &&
       (iVar1 = (**(code **)(*(int *)(a4 + 8) + 0xd0))(a4,ar5_00,ar6,ar7), iVar1 == 1)) {
      ar4_00 = (**(code **)(*(int *)(a4 + 8) + 0x178))(a4,ar5_00,ar6,ar7);
      ar6 = get_field_4_0253e4(ar4_00,ar5_00,ar6,ar7);
      s_GRAPHICS_SQUIDLINE_0ae646(0x8c3eb334,12000,ar6,ar7);
    }
  }
  FUN_8c0db8d4(ar4,ar5,ar6,ar7);
  FUN_8c0e96b8(ar4 + 0xf4c,ar5,ar6,ar7);
  FUN_8c0d6920(ar4 + 0xa68,ar5,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 0x9e8) + 0x10))((int *)(ar4 + 0x9e8),ar5,ar6,ar7);
  FUN_8c0d0720(ar4 + 0x13b24,ar5,ar6,ar7);
  FUN_8c0d0a84(ar4 + 0x13b70,ar5,ar6,ar7);
  FUN_8c0d1548(ar4 + 0x13b8c,ar5,ar6,ar7);
  FUN_8c0d98f8(ar4 + 0x22704,ar5,ar6,ar7);
  uVar2 = extraout_fr1;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    FUN_8c0d7314(ar4 + iVar1 * 0x16c + 0x22d48,ar5,ar6,ar7);
    uVar2 = extraout_fr1_00;
  }
  *(undefined4 *)(ar4 + 0x22810) = 1;
  *(undefined4 *)(ar4 + 0x22814) = 1;
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x2324c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x2324c) = (ulonglong)uVar2;
  }
  *(undefined4 *)(ar4 + 0x23250) = 0;
  *(undefined4 *)(ar4 + 0x23254) = 0;
  return 1;
}

__asm__(".globl _FUN_8c0dfbdc\n.set _FUN_8c0dfbdc, _FUN_8c0dfbdc_def\n");
