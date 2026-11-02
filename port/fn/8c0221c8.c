#include "../decls.h"
undefined4 FUN_8c0221c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *ar6_00;
  int iVar4;
  int aiStack_10 [2];
  
  for (iVar4 = 0; iVar4 < 7; iVar4 = iVar4 + 1) {
    *(undefined4 *)(iVar4 * 0x10 + ar4) = 0;
  }
  *(undefined4 *)(ar4 + 0x70) = 1;
  for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
    *(undefined4 *)(0x2d150 + ar4 + iVar4 * 0x208e0) = 0;
  }
  thunk_FUN_8c25ecdc(ar7,0,ar6,ar7);
  iVar4 = ar4 + 0x8ebf0;
  uVar1 = 0x8000;
  s_E9040804_can_t_open_s_ADXF_L_261ba4(0,ar6,iVar4,0x8000);
  uVar3 = 0;
  thunk_FUN_8c25ecdc((&DATA_8c022c48),0,iVar4,uVar1);
  iVar4 = aica_driver_load_manatee(ar4,uVar3,iVar4,uVar1);
  if (iVar4 == 1) {
    ar6_00 = (&DATA_8c12fc98);
    iVar4 = FUN_8c022494(ar4,ar5,(&DATA_8c12fc98),uVar1);
    if (iVar4 == 0) {
      uVar1 = 0;
    }
    else {
      FUN_8c1f7f1e(aiStack_10,ar5,ar6_00,uVar1);
      if (aiStack_10[0] == 0) {
        FUN_8c268818(0x4f525453,ar5,ar6_00,uVar1);
      }
      else {
        FUN_8c268818(0x4f4e4f4d,ar5,ar6_00,uVar1);
      }
      FUN_8c265f84(1,ar5,ar6_00,uVar1);
      uVar3 = 0x2d0c4;
      uVar2 = FUN_8c263840(2,ar4 + 0x8c,0x2d0c4,uVar1);
      *(undefined4 *)(ar4 + 0x74) = uVar2;
      FUN_8c263ffa(*(undefined4 *)(ar4 + 0x74),2,uVar3,uVar1);
      for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
        uVar3 = 0x208c4;
        uVar2 = (*(code *)(&FUN_8c263840))
                          (2,ar4 + iVar4 * 0x208e0 + 0x2d16c,0x208c4,uVar1);
        *(undefined4 *)(0x2d154 + ar4 + iVar4 * 0x208e0) = uVar2;
        (*(code *)(&FUN_8c263ffa))
                  (*(undefined4 *)(0x2d154 + ar4 + iVar4 * 0x208e0),1,uVar3,uVar1);
      }
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0221c8\n.set _FUN_8c0221c8, _FUN_8c0221c8_def\n");
