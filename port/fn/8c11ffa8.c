#include "../decls.h"
uint FUN_8c11ffa8_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = 0;
  iVar5 = (int)0xff;
  iVar4 = 0;
  if (*ar4 != 0) {
    do {
      iVar6 = *(int *)(*(int *)(ar4 + 2) + iVar4 * 4);
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) != 0)) {
        cVar2 = (**(code **)(iVar6 + 0x1c))(iVar6,iVar5,0);
        uVar3 = uVar3 | cVar2 == '\0';
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*ar4);
  }
  puVar1 = (&FUN_8c1113d0);
  iVar4 = 0;
  if (ar4[4] != 0) {
    do {
      if (*(int *)(*(int *)(ar4 + 6) + iVar4 * 4) != 0) {
        cVar2 = (*(code *)puVar1)(iVar5,0);
        uVar3 = uVar3 | cVar2 == '\0';
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)ar4[4]);
  }
  (**(code **)(ar4 + 0xc))(ar4,*(undefined4 *)(ar4 + 2));
  (**(code **)(ar4 + 0xc))(ar4,*(undefined4 *)(ar4 + 6));
  return uVar3;
}

__asm__(".globl _FUN_8c11ffa8\n.set _FUN_8c11ffa8, _FUN_8c11ffa8_def\n");
