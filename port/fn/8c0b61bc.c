#include "../decls.h"
undefined4 FUN_8c0b61bc_def(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *ar6_00;
  undefined4 ar6_01;
  
  uVar3 = ar5;
  ar6_00 = ar6;
  iVar2 = ar7;
  if (*(int *)(ar4 + 0x38) == 2) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c13bb4c + *(int *)(ar4 + 0xc) * 4 + ar7 * 0xc);
    FUN_8c0b63e0(ar4,ar5,ar6,ar7);
    uVar3 = 1;
    FUN_8c02f404(ar4,1,ar6_00,ar7,iVar2);
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      FUN_8c02f404(ar4,3,ar6_00,ar7,iVar2);
      FUN_8c02fdd8(ar4,ar5,ar6_00,ar7);
    }
    else if (iVar1 == 2) {
      iVar2 = (**(code **)(*(int *)(*ar6 + 8) + 0xb4))(*ar6,uVar3,ar6_00,ar7);
      if (iVar2 == 1) {
        FUN_8c027954(*ar6,uVar3,ar6_00,ar7);
      }
    }
    else if (iVar1 == 4) {
      iVar2 = FUN_8c02f414(ar4,uVar3,ar6_00,ar7);
      if (iVar2 == 1) {
        if (*(int *)(ar4 + 0x88) == 1) {
          ar6_01 = 0x1b;
          uVar3 = 7;
          FUN_8c0b9ed4(ar6[6],7,0x1b,ar7);
          uVar3 = get_field_6c_02f46c(*(undefined4 *)(ar4 + 0x6c),uVar3,ar6_01,ar7);
          FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),uVar3,ar6_01,ar7);
          *(char *)(ar4 + 0x9c) = *(char *)(ar4 + 0x9c) + '\x01';
          if (*(int *)(ar4 + 0x6c) != 0) {
            (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                      (*(int *)(ar4 + 0x6c),uVar3,ar6_01,ar7);
            *(undefined4 *)(ar4 + 0x6c) = 0;
          }
          *(undefined4 *)(ar4 + 0x88) = 0;
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x38) = 2;
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c0b61bc\n.set _FUN_8c0b61bc, _FUN_8c0b61bc_def\n");
