#include "../decls.h"
undefined4 FUN_8c10ca58_def(int *ar4,undefined4 ar5,int *ar6,int *ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *ar6_00;
  int *ar7_00;
  uint uVar5;
  int iVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar1 = (&log_message);
  iVar4 = *ar4;
  iVar6 = ar4[3];
  uStack_28 = *(undefined4 *)(iVar4 + 4);
  uVar5 = 0;
  uStack_24 = 0;
  *ar7 = 0;
  ar6_00 = ar6;
  ar7_00 = ar7;
  if (ar4[1] != 0) {
    do {
      uVar3 = ar5;
      iVar2 = FUN_8c0109e8(iVar6,ar5,ar6_00,ar7_00);
      if (iVar2 == 0) {
        *ar7 = *ar7 + 1;
      }
      iVar2 = (*(code *)puVar1)(iVar6,uVar3,ar6_00,ar7_00);
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + iVar2 + 1;
    } while (uVar5 < (uint)ar4[1]);
  }
  if (*ar7 == 0) {
    uVar3 = 0x78;
  }
  else {
    iVar4 = (**(code **)(iVar4 + 8))(*ar7 << 2,&uStack_28,ar6_00,ar7_00);
    *ar6 = iVar4;
    if (iVar4 == 0) {
      uVar3 = 1;
    }
    else {
      iVar4 = ar4[3];
      *ar7 = 0;
      uVar5 = 0;
      if (ar4[1] != 0) {
        do {
          uVar3 = ar5;
          iVar6 = FUN_8c0109e8(iVar4,ar5,ar6_00,ar7_00);
          if (iVar6 == 0) {
            iVar6 = *ar7;
            *ar7 = iVar6 + 1;
            *(uint *)(*ar6 + iVar6 * 4) = uVar5;
          }
          iVar6 = (*(code *)puVar1)(iVar4,uVar3,ar6_00,ar7_00);
          uVar5 = uVar5 + 1;
          iVar4 = iVar4 + iVar6 + 1;
        } while (uVar5 < (uint)ar4[1]);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c10ca58\n.set _FUN_8c10ca58, _FUN_8c10ca58_def\n");
