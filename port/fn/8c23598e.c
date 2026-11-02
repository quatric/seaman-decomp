#include "../decls.h"
undefined4 FUN_8c23598e_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  
  cVar8 = '\0';
  uVar6 = 0;
  puVar3 = &DAT_8c4aa3e8;
  _DAT_8c4aa3ec = *(undefined4 *)*ar4;
  _DAT_8c4aa3f0 = *(undefined4 *)(*ar4 + 4);
  _DAT_8c4aa400 = *(undefined4 *)(uint)ar4[1];
  _DAT_8c4aa3e8 = 0xe0000000;
  FUN_8c010794(0x20,0x8c4aa428,&DAT_8c4aa3e8);
  uVar7 = 1;
  if (1 < ar5) {
    do {
      if ((int)uVar7 < 0) {
        uVar6 = ~(~uVar7 + 1 & 1) + 1;
      }
      else {
        uVar6 = uVar7 & 1;
      }
      iVar4 = uVar6 * 0x20;
      puVar2 = (undefined8 *)(*ar4 + uVar7 * 8);
      if (cVar8 == '\0') {
        *(undefined4 *)(&DAT_8c4aa3ec + iVar4) = *(undefined4 *)puVar2;
      }
      else {
        *(undefined8 *)(&DAT_8c4aa3ec + iVar4) = *puVar2;
      }
      iVar5 = uVar7 * 8 + *ar4;
      if (cVar8 == '\0') {
        *(undefined4 *)(&DAT_8c4aa3f0 + iVar4) = *(undefined4 *)(iVar5 + 4);
      }
      else {
        *(undefined8 *)(&DAT_8c4aa3f0 + iVar4) = *(undefined8 *)(iVar5 + 4);
      }
      *(undefined4 *)(&DAT_8c4aa400 + iVar4) = *(undefined4 *)(uVar7 * 4 + ar4[1]);
      *(undefined4 *)(&DAT_8c4aa3e8 + iVar4) = 0xe0000000;
      FUN_8c235294(&DAT_8c4aa3e8,puVar3 + 0x20,ar6,ar7);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < ar5);
  }
  uVar1 = FUN_8c235294(&DAT_8c4aa3e8 + uVar6 * 0x20,0x8c4aa428,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c23598e\n.set _FUN_8c23598e, _FUN_8c23598e_def\n");
