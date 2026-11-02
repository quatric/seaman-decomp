#include "../decls.h"
undefined4 FUN_8c2098c0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 ar7_00;
  int ar5_00;
  
  uVar2 = _DAT_8c4a9d4c;
  iVar4 = *ar4;
  iVar3 = ar4[1];
  iVar5 = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(iVar4 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(iVar4 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(iVar4 + 0xc);
  uVar6 = *(undefined4 *)(iVar4 + 0x14);
  iVar1 = FUN_8c208270(_DAT_8c4a9d4c,6,*(undefined4 *)(iVar4 + 0x10),uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar4 + 0x18);
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,*(undefined4 *)(iVar4 + 0x1c),uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar3 + 0xc);
  uVar6 = *(undefined4 *)(iVar3 + 0x14);
  iVar1 = FUN_8c208270(uVar2,iVar1 + 3,*(undefined4 *)(iVar3 + 0x10),uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 0x18);
  iVar3 = FUN_8c208228(uVar2,iVar1 + 1,*(undefined4 *)(iVar3 + 0x1c),uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar3 * 4) = *(undefined4 *)(iVar5 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar3 + 1) * 4) = *(undefined4 *)(iVar5 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar3 + 2) * 4) = *(undefined4 *)(iVar5 + 0xc);
  ar7_00 = *(undefined4 *)(iVar5 + 0x14);
  iVar1 = iVar5;
  iVar3 = FUN_8c208270(uVar2,iVar3 + 3,*(undefined4 *)(iVar5 + 0x10),ar7_00);
  ar5_00 = iVar3 + 1;
  *(undefined4 *)(&DAT_8c4a9c50 + iVar3 * 4) = *(undefined4 *)(iVar5 + 0x18);
  uVar6 = *(undefined4 *)(iVar5 + 0x1c);
  _DAT_8c4a9d48 = FUN_8c208228(uVar2,ar5_00,uVar6,ar7_00);
  _DAT_8c4a9d48 = _DAT_8c4a9d48 << 2;
  uVar2 = FUN_8c20820a(uVar2,ar5_00,uVar6,ar7_00);
  FUN_8c2081e0(uVar2,0,0,ar7_00,iVar1);
  _DAT_8c4a9d5c = *(undefined4 *)(iVar4 + 0xc);
  return 0;
}

__asm__(".globl _FUN_8c2098c0\n.set _FUN_8c2098c0, _FUN_8c2098c0_def\n");
