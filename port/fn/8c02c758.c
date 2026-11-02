#include "../decls.h"
undefined4 FUN_8c02c758_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_stack_ffffffe4;
  undefined2 uVar5;
  undefined4 ain0;
  
  iVar4 = ar5 * 0x140;
  iVar3 = ar5;
  iVar1 = get_field_34_02cbdc(ar4 + 0xa8,ar5,ar6,ar7);
  if (iVar1 != 0x13) {
    FUN_8c02cbd4(ar4 + 0xa8,0,ar6,ar7,in_stack_ffffffe4);
    iVar3 = 0;
    FUN_8c02cbbc(ar4 + 0x90,0,ar6,ar7);
  }
  uVar5 = (undefined2)((uint)in_stack_ffffffe4 >> 0x10);
  *(undefined1 *)(ar4 + 0x144) = 0;
  *(undefined1 *)(ar4 + 0x164) = 0;
  *(int *)(ar4 + 0x13c) = ar5;
  uVar2 = FUN_8c02bfd8(ar4,iVar3,ar6,ar7);
  ain0 = CONCAT22(uVar5,(short)uVar2);
  *(int *)(ar4 + 0x138) = (int)(short)uVar2;
  FUN_8c02bd94(ar4,(int)(char)(&DAT_8c1304d4)[iVar4],ar6,ar7);
  FUN_8c02bd8c(ar4,iVar4 + -0x73ecfb28,ar6,ar7,ain0);
  FUN_8c02bd84(ar4,iVar4 + -0x73ecfb14,ar6,ar7,ain0);
  FUN_8c02bd94(ar4 + 0x18,(int)(char)(&DAT_8c130500)[iVar4],ar6,ar7);
  FUN_8c02bd8c(ar4 + 0x18,iVar4 + -0x73ecfafc,ar6,ar7,ain0);
  FUN_8c02bd84(ar4 + 0x18,iVar4 + -0x73ecfae8,ar6,ar7,ain0);
  FUN_8c02bd94(ar4 + 0x30,(int)(char)(&DAT_8c13052c)[iVar4],ar6,ar7);
  FUN_8c02bd8c(ar4 + 0x30,iVar4 + -0x73ecfad0,ar6,ar7,ain0);
  FUN_8c02bd84(ar4 + 0x30,iVar4 + -0x73ecfabc,ar6,ar7,ain0);
  FUN_8c02bd94(ar4 + 0x48,(int)(char)(&DAT_8c130558)[iVar4],ar6,ar7);
  FUN_8c02bd8c(ar4 + 0x48,iVar4 + -0x73ecfaa4,ar6,ar7,ain0);
  FUN_8c02bd84(ar4 + 0x48,iVar4 + -0x73ecfa90,ar6,ar7,ain0);
  FUN_8c02bd94(ar4 + 0x60,(int)(char)(&DAT_8c130584)[iVar4],ar6,ar7);
  FUN_8c02bd8c(ar4 + 0x60,iVar4 + -0x73ecfa78,ar6,ar7,ain0);
  FUN_8c02bd84(ar4 + 0x60,iVar4 + -0x73ecfa64,ar6,ar7,ain0);
  FUN_8c02bd94(ar4 + 0x78,(int)(char)(&DAT_8c1305b0)[iVar4],ar6,ar7);
  FUN_8c02bd8c(ar4 + 0x78,iVar4 + -0x73ecfa4c,ar6,ar7,ain0);
  FUN_8c02bd84(ar4 + 0x78,iVar4 + -0x73ecfa38,ar6,ar7,ain0);
  FUN_8c02cbb4(ar4 + 0x90,*(undefined4 *)(&DAT_8c1305dc + iVar4),ar6,ar7,ain0);
  FUN_8c02cbac(ar4 + 0x90,*(undefined4 *)(&DAT_8c1305e4 + iVar4),ar6,ar7,ain0);
  FUN_8c02d81c(ar4 + 0x90,*(undefined4 *)(&DAT_8c1305e0 + iVar4),ar6,ar7);
  FUN_8c02cba4(ar4 + 0xa8,*(undefined4 *)(&DAT_8c1304b0 + iVar4),ar6,ar7,ain0);
  FUN_8c02cb9c(ar4 + 0xa8,(int)*(short *)(&DAT_8c1304b4 + iVar4),ar6,ar7);
  FUN_8c02bd70(ar4 + 0xa8,0,(int)*(short *)(&DAT_8c1304b6 + iVar4),ar7);
  FUN_8c02bd70(ar4 + 0xa8,1,(int)*(short *)(&DAT_8c1304b8 + iVar4),ar7);
  FUN_8c02bd70(ar4 + 0xa8,2,(int)*(short *)(&DAT_8c1304ba + iVar4),ar7);
  FUN_8c02bd70(ar4 + 0xa8,3,(int)*(short *)(&DAT_8c1304bc + iVar4),ar7);
  FUN_8c02bd70(ar4 + 0xa8,4,(int)*(short *)(&DAT_8c1304be + iVar4),ar7);
  iVar3 = (int)*(short *)(&DAT_8c1304c0 + iVar4);
  FUN_8c02bd70(ar4 + 0xa8,5,iVar3,ar7);
  FUN_8c02cb94(ar4 + 0xa8,*(undefined4 *)(&DAT_8c1304c4 + iVar4),iVar3,ar7,ain0);
  FUN_8c02cb8c(ar4 + 0xa8,*(undefined4 *)(&DAT_8c1304c8 + iVar4),iVar3,ar7,ain0);
  FUN_8c02bd68(ar4 + 0xa8,*(undefined4 *)(&DAT_8c1304ac + iVar4),iVar3,ar7);
  FUN_8c025fbc(ar4 + 0xa8,0,iVar3,ar7);
  FUN_8c02cb84(ar4 + 0xa8,0,iVar3,ar7,ain0);
  FUN_8c02cb7c(ar4 + 0xa8,0,iVar3,ar7,ain0);
  FUN_8c02cb74(ar4 + 0xa8,0,iVar3,ar7);
  FUN_8c02cb6c(ar4 + 0xa8,0,iVar3,ar7,ain0);
  FUN_8c02cb24(ar4 + 0xf8,*(undefined4 *)(&DAT_8c1304cc + iVar4),iVar3,ar7);
  uVar2 = FUN_8c02cadc(ar4 + 0xf8,*(undefined4 *)(&DAT_8c1304d0 + iVar4),iVar3,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c02c758\n.set _FUN_8c02c758, _FUN_8c02c758_def\n");
