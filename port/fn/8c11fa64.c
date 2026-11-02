#include "../decls.h"
undefined4 FUN_8c11fa64_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int a4;
  int *unaff_r14;
  float extraout_fr0;
  float extraout_fr0_00;
  uint in_fr5;
  ulonglong uVar4;
  char cVar5;
  
  a4 = *unaff_r14;
  *(undefined2 *)(*(int *)unaff_r14[4] + 0xc) = (undefined2)ain0;
  FUN_8c120550(unaff_r14,1,ar6,ar7);
  unaff_r14[10] = (int)extraout_fr0 & 0xff;
  FUN_8c120550(unaff_r14,2,ar6,ar7);
  unaff_r14[0xe] = (int)(float)(int)(short)(int)extraout_fr0_00;
  iVar1 = (**(code **)(a4 + 0x14))(a4,unaff_r14[10] * 2 + 1,4,ar7);
  unaff_r14[0xb] = iVar1;
  uVar3 = 4;
  cVar5 = '\0';
  iVar1 = (**(code **)(a4 + 0x14))(a4,unaff_r14[10],4,ar7);
  unaff_r14[0xf] = iVar1;
  if ((unaff_r14[0xb] != 0) && (unaff_r14[0xf] != 0)) {
    uVar2 = 0;
    if (cVar5 == '\0') {
      uVar4 = (ulonglong)in_fr5;
    }
    else {
      uVar4 = 0xd2084f2200000000;
    }
    if (unaff_r14[10] * 2 != -1) {
      do {
        iVar1 = uVar2 * 4;
        uVar2 = uVar2 + 1;
        if (cVar5 == '\0') {
          *(int *)(unaff_r14[0xb] + iVar1) = (int)(uVar4 >> 0x20);
        }
        else {
          *(ulonglong *)(unaff_r14[0xb] + iVar1) = uVar4;
        }
      } while (uVar2 < unaff_r14[10] * 2 + 1U);
    }
    unaff_r14[0xc] = unaff_r14[10] * 8 + unaff_r14[0xb] + 4;
    unaff_r14[0xd] = unaff_r14[0xb];
    unaff_r14[0x10] = unaff_r14[10] * 4 + unaff_r14[0xf];
    unaff_r14[0x11] = unaff_r14[0xf];
    return 0;
  }
  uVar3 = FUN_8c1204c4(unaff_r14,2,uVar3,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c11fa64\n.set _FUN_8c11fa64, _FUN_8c11fa64_def\n");
