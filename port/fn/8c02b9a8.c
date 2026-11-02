#include "../decls.h"
int FUN_8c02b9a8_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined *ar7_00;
  int iVar2;
  int iVar3;
  
  FUN_8c010120(ar4,&LAB_8c02df08,0,0x18,6);
  FUN_8c02d7c8(ar4 + 0x90,*(undefined4 *)(&DAT_8c1305dc + ar6 * 0x140),
               *(undefined4 *)(&DAT_8c1305e4 + ar6 * 0x140),
               *(undefined4 *)(&DAT_8c1305e0 + ar6 * 0x140));
  ar7_00 = &DAT_8c1304b6 + ar6 * 0x140;
  FUN_8c02da5c(ar4 + 0xa8,*(undefined4 *)(&DAT_8c1304b0 + ar6 * 0x140),
               (int)*(short *)(&DAT_8c1304b4 + ar6 * 0x140),ar7_00,
               *(undefined4 *)(&DAT_8c1304c4 + ar6 * 0x140),
               *(undefined4 *)(&DAT_8c1304c8 + ar6 * 0x140));
  ar6_00 = *(undefined4 *)(&DAT_8c1304d0 + ar6 * 0x140);
  uVar1 = *(undefined4 *)(&DAT_8c1304cc + ar6 * 0x140);
  FUN_8c02e460(ar4 + 0xf8,uVar1,ar6_00,ar7_00);
  iVar3 = ar6 * 0x140;
  *(undefined4 *)(ar4 + 0x134) = ar5;
  *(int *)(ar4 + 0x13c) = ar6;
  uVar1 = FUN_8c02bfd8(ar4,uVar1,ar6_00,ar7_00);
  *(int *)(ar4 + 0x138) = (int)(short)uVar1;
  *(undefined1 *)(ar4 + 0x144) = 0;
  *(undefined1 *)(ar4 + 0x164) = 0;
  *(undefined4 *)(ar4 + 0x140) = 0;
  *(undefined4 *)(ar4 + 0x148) = 0;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    *(undefined4 *)(ar4 + iVar2 * 4 + 0x14c) = 0;
  }
  FUN_8c02bd94(ar4,(int)(char)(&DAT_8c1304d4)[iVar3],ar6_00,ar7_00);
  FUN_8c02bd8c(ar4,iVar3 + -0x73ecfb28,ar6_00,ar7_00,ar5);
  FUN_8c02bd84(ar4,iVar3 + -0x73ecfb14,ar6_00,ar7_00,ar5);
  FUN_8c02bd94(ar4 + 0x18,(int)(char)(&DAT_8c130500)[iVar3],ar6_00,ar7_00);
  FUN_8c02bd8c(ar4 + 0x18,iVar3 + -0x73ecfafc,ar6_00,ar7_00,ar5);
  FUN_8c02bd84(ar4 + 0x18,iVar3 + -0x73ecfae8,ar6_00,ar7_00,ar5);
  FUN_8c02bd94(ar4 + 0x30,(int)(char)(&DAT_8c13052c)[iVar3],ar6_00,ar7_00);
  FUN_8c02bd8c(ar4 + 0x30,iVar3 + -0x73ecfad0,ar6_00,ar7_00,ar5);
  FUN_8c02bd84(ar4 + 0x30,iVar3 + -0x73ecfabc,ar6_00,ar7_00,ar5);
  FUN_8c02bd94(ar4 + 0x48,(int)(char)(&DAT_8c130558)[iVar3],ar6_00,ar7_00);
  FUN_8c02bd8c(ar4 + 0x48,iVar3 + -0x73ecfaa4,ar6_00,ar7_00,ar5);
  FUN_8c02bd84(ar4 + 0x48,iVar3 + -0x73ecfa90,ar6_00,ar7_00,ar5);
  FUN_8c02bd94(ar4 + 0x60,(int)(char)(&DAT_8c130584)[iVar3],ar6_00,ar7_00);
  FUN_8c02bd8c(ar4 + 0x60,iVar3 + -0x73ecfa78,ar6_00,ar7_00,ar5);
  FUN_8c02bd84(ar4 + 0x60,iVar3 + -0x73ecfa64,ar6_00,ar7_00,ar5);
  FUN_8c02bd94(ar4 + 0x78,(int)(char)(&DAT_8c1305b0)[iVar3],ar6_00,ar7_00);
  FUN_8c02bd8c(ar4 + 0x78,iVar3 + -0x73ecfa4c,ar6_00,ar7_00,ar5);
  FUN_8c02bd84(ar4 + 0x78,iVar3 + -0x73ecfa38,ar6_00,ar7_00,ar5);
  FUN_8c02bd70(ar4 + 0xa8,0,(int)*(short *)(&DAT_8c1304b6 + iVar3),ar7_00);
  FUN_8c02bd70(ar4 + 0xa8,1,(int)*(short *)(&DAT_8c1304b8 + iVar3),ar7_00);
  FUN_8c02bd70(ar4 + 0xa8,2,(int)*(short *)(&DAT_8c1304ba + iVar3),ar7_00);
  FUN_8c02bd70(ar4 + 0xa8,3,(int)*(short *)(&DAT_8c1304bc + iVar3),ar7_00);
  FUN_8c02bd70(ar4 + 0xa8,4,(int)*(short *)(&DAT_8c1304be + iVar3),ar7_00);
  iVar2 = (int)*(short *)(&DAT_8c1304c0 + iVar3);
  FUN_8c02bd70(ar4 + 0xa8,5,iVar2,ar7_00);
  FUN_8c02bd68(ar4 + 0xa8,*(undefined4 *)(&DAT_8c1304ac + iVar3),iVar2,ar7_00);
  return ar4;
}

__asm__(".globl _FUN_8c02b9a8\n.set _FUN_8c02b9a8, _FUN_8c02b9a8_def\n");
