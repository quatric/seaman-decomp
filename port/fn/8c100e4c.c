#include "../decls.h"
undefined4 FUN_8c100e4c_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ar5_00;
  byte bVar3;
  undefined4 in_fr1;
  char cVar4;
  
  cVar4 = '\0';
  *(undefined4 *)ar5 = 0;
  ar5_00 = ar5;
  iVar1 = input_is_mask_set_400_01ef20(0x8c3dd7dc,ar5,ar6,ar7);
  if (iVar1 == 1) {
    *(undefined4 *)(ar4 + 0x59c) = 0;
    uVar2 = 0;
  }
  else {
    if ((9 < *(int *)(ar4 + 0x59c)) &&
       (*(int *)(ar4 + 0x59c) = *(int *)(ar4 + 0x59c) + 1, 0x27 < *(int *)(ar4 + 0x59c))) {
      *(undefined4 *)(ar4 + 0x59c) = 0;
    }
    iVar1 = FUN_8c01ed40(0x8c3dd7dc,ar5_00,ar6,ar7);
    if ((iVar1 == 1) ||
       (iVar1 = input_is_mask_set_400_01ef20(0x8c3dd7dc,ar5_00,ar6,ar7), iVar1 == 1)) {
      if (*(int *)(ar4 + 0x59c) < 2) {
        *(undefined4 *)(ar4 + 0x59c) = 0;
        uVar2 = 0;
      }
      else {
        if (*(int *)(ar4 + 0x59c) == 2) {
          if (cVar4 == '\0') {
            *(undefined4 *)ar5 = 0x3f000000;
          }
          else {
            *ar5 = 0x3f3333333f000000;
          }
        }
        else if (*(int *)(ar4 + 0x59c) == 3) {
          if (cVar4 == '\0') {
            *(undefined4 *)ar5 = 0x3f333333;
          }
          else {
            *ar5 = 0x8c0c51a03f333333;
          }
        }
        else if (cVar4 == '\0') {
          *(undefined4 *)ar5 = 0x3f800000;
        }
        else {
          *ar5 = CONCAT44(0x3f800000,in_fr1);
        }
        FUN_8c0c51a0(ar4,5,ar6,ar7);
        *(undefined4 *)(ar4 + 0x59c) = 10;
        uVar2 = 2;
      }
    }
    else {
      iVar1 = FUN_8c01ecf8(0x8c3dd7dc,ar5_00,ar6,ar7);
      if ((iVar1 == 1) &&
         (iVar1 = input_is_mask_set_400_01ef20(0x8c3dd7dc,ar5_00,ar6,ar7), iVar1 != 1)) {
        *(undefined4 *)(ar4 + 0x59c) = 1;
        uVar2 = 0;
      }
      else if (*(int *)(ar4 + 0x59c) < 1) {
        uVar2 = 0;
      }
      else {
        for (bVar3 = 0; bVar3 < 0x78; bVar3 = bVar3 + 1) {
          if (*(char *)(ar4 + (uint)(byte)(*(char *)(ar4 + 0x598) - bVar3) * 4 + 0x193) == '\0') {
            if (bVar3 < 0x3c) {
              return 0;
            }
            if (0x3b < bVar3) {
              FUN_8c0c51a0(ar4,4,ar6,ar7);
              *(undefined4 *)(ar4 + 0x59c) = 2;
            }
            if (0x59 < bVar3) {
              *(undefined4 *)(ar4 + 0x59c) = 3;
            }
            return 1;
          }
        }
        *(undefined4 *)(ar4 + 0x59c) = 4;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c100e4c\n.set _FUN_8c100e4c, _FUN_8c100e4c_def\n");
