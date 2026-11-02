#include "../decls.h"
undefined4 FUN_8c1f6b14_def(undefined4 ar4,undefined4 ar5,int ar6,uint ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint a5;
  
  iVar4 = ar6;
  uVar7 = ar7;
  iVar3 = s_KATANA_FLASH_1f0d98(4,ar4,ar6,ar7);
  puVar2 = (&FUN_8c1f881c);
  puVar1 = (&memmove);
  if (iVar3 == 0) {
    iVar3 = (int)0x3fc;
    iVar9 = 0;
    do {
      iVar4 = (*(code *)puVar2)(iVar9,ar5,iVar4,uVar7);
      if (iVar4 != 0) goto LAB_8c1f6b84;
      iVar4 = 0x3c;
      (*(code *)puVar1)(iVar9 * 0x3c + ar6,ar5,0x3c,uVar7);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar3);
    iVar9 = s_KATANA_FLASH_1f0d98(3,ar4,iVar4,uVar7);
    if (iVar9 == 0) {
      iVar9 = (int)0x1a8;
      iVar10 = 0;
      do {
        iVar4 = (*(code *)puVar2)(iVar10,ar5,iVar4,uVar7);
        if (iVar4 != 0) {
LAB_8c1f6b84:
          *(undefined4 *)0x8c4748a8 = 7;
          return 0xffffffff;
        }
        iVar4 = 0x3c;
        (*(code *)puVar1)(iVar10 * 0x3c + ar7,ar5,0x3c,uVar7);
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar9);
      iVar4 = s_KATANA_FLASH_1f0d98(4,ar4,iVar4,uVar7);
      if (iVar4 == 0) {
        iVar5 = (int)0x254;
        iVar4 = iVar9;
        uVar7 = ar7;
        uVar8 = ar5;
        iVar10 = FUN_8c1f6d3e(iVar5,iVar9,ar7,ar5);
        iVar5 = FUN_8c1f1080(iVar5,iVar4,uVar7,uVar8);
        if ((iVar10 + 3 <= iVar5) ||
           (iVar4 = FUN_8c1f0e98(0,iVar4,uVar7,uVar8), iVar4 == 0)) {
          s_SEGA_FH01_OK_1f6ce4(2,ar5,uVar7,uVar8);
          puVar1 = (&FUN_8c1f884c);
          iVar10 = (int)0x6360;
          iVar4 = (int)0x254;
          for (a5 = ar7; a5 < ar7 + iVar10; a5 = a5 + 0x3c) {
            iVar5 = (*(code *)puVar1)(iVar4,a5,uVar7,uVar8);
            if (iVar5 == -1) goto LAB_8c1f6cc2;
            iVar4 = iVar4 + 1;
          }
          s_SEGA_FH01_OK_1f6ce4(1,ar5,uVar7,uVar8);
          uVar6 = ar4;
          iVar4 = s_KATANA_FLASH_1f0d98(3,ar4,uVar7,uVar8);
          if ((iVar4 == 0) && (iVar4 = FUN_8c1f0e98(0,uVar6,uVar7,uVar8), iVar4 == 0)
             ) {
            iVar4 = 0;
            do {
              iVar10 = (*(code *)puVar1)(iVar4,iVar4 * 0x3c + ar7,uVar7,uVar8);
              if (iVar10 == -1) goto LAB_8c1f6cc2;
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar9);
            iVar4 = s_KATANA_FLASH_1f0d98(4,ar4,uVar7,uVar8);
            if (iVar4 == 0) {
              s_SEGA_FH01_OK_1f6ce4(3,ar5,uVar7,uVar8);
              uVar6 = 0;
              iVar4 = iVar3;
              iVar9 = ar6;
              uVar8 = ar5;
              iVar10 = FUN_8c1f6d3e(0,iVar3,ar6,ar5);
              iVar5 = FUN_8c1f1080(uVar6,iVar4,iVar9,uVar8);
              if (iVar5 < iVar10 + 2) {
                iVar4 = FUN_8c1f0e98(0,iVar4,iVar9,uVar8);
                if (iVar4 != 0) goto LAB_8c1f6cc2;
                s_SEGA_FH01_OK_1f6ce4(3,ar5,iVar9,uVar8);
              }
              iVar4 = 0;
              do {
                iVar10 = (*(code *)puVar1)(iVar4,iVar4 * 0x3c + ar6,iVar9,uVar8);
                if (iVar10 == -1) goto LAB_8c1f6cc2;
                iVar4 = iVar4 + 1;
              } while (iVar4 < iVar3);
              s_SEGA_FH01_OK_1f6ce4(0,ar5,iVar9,uVar8);
              iVar4 = s_KATANA_FLASH_1f0d98(3,ar4,iVar9,uVar8);
              if (iVar4 == 0) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
LAB_8c1f6cc2:
  *(undefined4 *)0x8c4748a8 = 8;
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f6b14\n.set _FUN_8c1f6b14, _FUN_8c1f6b14_def\n");
