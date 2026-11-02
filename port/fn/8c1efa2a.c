#include "../decls.h"
undefined4 FUN_8c1efa2a_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  
  iVar3 = 0x8c470ed8;
  iVar2 = 0x8c470edc;
  bVar1 = *(byte *)((int)0xfb0 + *(undefined4 *)0x8c4727b4);
  uVar8 = 0;
  do {
    if (3 < (int)uVar8) {
      return 0;
    }
    if ((int)uVar8 < 0) {
      uVar6 = 1 >> (~uVar8 & 0x1f) + 1;
    }
    else {
      uVar6 = 1 << (uVar8 & 0x1f);
    }
    if ((uVar6 & bVar1) != 0) {
      pbVar7 = (&DATA_8c26bfac) + uVar8;
      iVar4 = FUN_8c1efd14((uint)*pbVar7,ar5,ar6,ar7);
      puVar5 = (uint *)FUN_8c1efd26((uint)*pbVar7,ar5,ar6,ar7);
      *(undefined1 *)(uVar8 + iVar3) = *(undefined1 *)(uVar8 + iVar2);
      if ((((*puVar5 & 0x80) != 0) && (*(char *)(iVar4 + 2) == '\0')) &&
         (*(char *)(iVar4 + 4) == '\b')) {
        uVar6 = (int)*(char *)(*(int *)(iVar4 + 8) + 8) & 4;
        *(char *)(uVar8 + iVar2) = (char)uVar6;
        ar5 = (int)*(char *)(uVar8 + iVar3) ^ uVar6;
        if ((uVar6 == 0) && (ar5 = ar5 & 0xff, ar5 != 0)) {
          return uVar8 + 1;
        }
      }
    }
    uVar8 = uVar8 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c1efa2a\n.set _FUN_8c1efa2a, _FUN_8c1efa2a_def\n");
